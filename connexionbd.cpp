#include "connexionbd.h"
#include <QDebug>
#include <QSqlError>
#include <QMessageBox> // Ajout pour un retour visuel direct

connexionBd::connexionBd() {}

QSqlDatabase& connexionBd::connectBase() {
    static QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    static bool connected = false; // Renommé pour plus de clarté

    // 1. Si la connexion est déjà établie, on retourne la DB existante.
    if (connected && db.isOpen()) {
        return db;
    }

    // 2. Si ce n'est pas la première fois ou si elle est fermée, on essaie d'ouvrir/configurer.
    if (!connected) { // On ne configure qu'une seule fois
        db.setHostName("localhost");
        db.setDatabaseName("gestion_stage");
        db.setUserName("root");
        db.setPort(3307);
        db.setPassword("");

        connected = true; // On marque comme configuré
    }

    // 3. Tentative d'ouverture (peut être retentée si l'ouverture précédente a échoué)
    if (db.open()) {
        qDebug() << "Connexion reussie !";
    } else {
        QString errorMsg = "Erreur de connexion MySQL:\n" + db.lastError().text();
        qDebug() << errorMsg;
        // Retour visuel immédiat (comme recommandé précédemment)
        QMessageBox::critical(nullptr, "Erreur BD", errorMsg);
    }

    return db;
}
