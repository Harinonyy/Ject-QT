#include "form_etudiant.h"
#include "connexionbd.h"
#include "ui_form_etudiant.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlRecord>

form_etudiant::form_etudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_etudiant)
{
    ui->setupUi(this);

    connexionBd::connectBase();

}

form_etudiant::~form_etudiant()
{
    delete ui;
}


