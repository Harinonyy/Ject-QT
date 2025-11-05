#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug> // Ajout pour faciliter le débug dans la console

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Navigation (boutons étendus)
    void on_btn_dashboard_clicked();
    void on_btn_etudiants_clicked();
    void on_btn_groupes_clicked();
    void on_btn_enseignants_clicked();
    void on_btn_themes_clicked();
    void on_btn_evaluation_clicked();
    void reset_buttons();

    // Ouverture des Formulaires (depuis les pages des listes)
    void on_btn_add_etudiants_clicked();
    void on_btn_add_groupes_clicked();
    void on_btn_add_enseignants_clicked();
    void on_btn_add_themes_clicked();

    // Ouverture des Formulaires (depuis le dashboard)
    void on_btn_add_etudiant_clicked();
    void on_btn_add_groupe_clicked();
    void on_btn_add_enseignant_clicked();
    void on_btn_add_theme_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    void openDatabase(); // Décla
};

extern QSqlDatabase db;

#endif // MAINWINDOW_H
