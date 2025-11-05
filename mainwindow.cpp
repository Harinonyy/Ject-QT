#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_etudiant.h"
#include "form_groupe.h"
#include "form_enseignant.h"
#include "form_theme.h"
#include <QSqlDatabase>
#include <QDebug>
// Définition de la variable globale déclarée dans mainwindow.h
QSqlDatabase db;

// fonction reinitialisation des boutons
void MainWindow::reset_buttons()
{
    // Réinitialisation checked des bouton etendu et compact
    //etendu
    ui->btn_dashboard->setChecked(false);
    ui->btn_etudiants->setChecked(false);
    ui->btn_groupes->setChecked(false);
    ui->btn_enseignants->setChecked(false);
    ui->btn_themes->setChecked(false);
    ui->btn_evaluation->setChecked(false);

    //compact
    ui->btn_icone_dashboard->setChecked(false);
    ui->btn_icone_etudiants->setChecked(false);
    ui->btn_icone_groupes->setChecked(false);
    ui->btn_icone_enseignants->setChecked(false);
    ui->btn_icone_themes->setChecked(false);
    ui->btn_icone_evaluation->setChecked(false);
}

// Constructeur de la classe MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Driver list :" << QSqlDatabase::drivers();

    this->showMaximized(); // Forcer la taille



    // Connexion des boutons icônes aux boutons étendus
    connect(ui->btn_icone_dashboard, &QPushButton::clicked, this, &MainWindow::on_btn_dashboard_clicked);
    connect(ui->btn_icone_etudiants, &QPushButton::clicked, this, &MainWindow::on_btn_etudiants_clicked);
    connect(ui->btn_icone_groupes, &QPushButton::clicked, this, &MainWindow::on_btn_groupes_clicked);
    connect(ui->btn_icone_enseignants, &QPushButton::clicked, this, &MainWindow::on_btn_enseignants_clicked);
    connect(ui->btn_icone_themes, &QPushButton::clicked, this, &MainWindow::on_btn_themes_clicked);
    connect(ui->btn_icone_evaluation, &QPushButton::clicked, this, &MainWindow::on_btn_evaluation_clicked);

    // Initialisation de l'application au démarrage
    // Affichage de la page dashboard (index 0) et activation de son bouton
    ui->containers_widget->setCurrentIndex(0);
    ui->btn_dashboard->setChecked(true);
    ui->btn_icone_dashboard->setChecked(true);
}

// Destructeur
MainWindow::~MainWindow()
{

    delete ui;
}


//(SLOTS)
void MainWindow::on_btn_dashboard_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(0);
    ui->btn_dashboard->setChecked(true);
    ui->btn_icone_dashboard->setChecked(true);
}

void MainWindow::on_btn_etudiants_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(1);
    ui->btn_etudiants->setChecked(true);
    ui->btn_icone_etudiants->setChecked(true);
}
void MainWindow::on_btn_groupes_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(2);
    ui->btn_groupes->setChecked(true);
    ui->btn_icone_groupes->setChecked(true);
}

void MainWindow::on_btn_enseignants_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(3);
    ui->btn_enseignants->setChecked(true);
    ui->btn_icone_enseignants->setChecked(true);
}

void MainWindow::on_btn_themes_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(4);
    ui->btn_themes->setChecked(true);
    ui->btn_icone_themes->setChecked(true);
}

void MainWindow::on_btn_evaluation_clicked()
{
    reset_buttons();
    ui->containers_widget->setCurrentIndex(5);
    ui->btn_evaluation->setChecked(true);
    ui->btn_icone_evaluation->setChecked(true);
}

void MainWindow::on_btn_add_etudiants_clicked()
{

    form_etudiant *form = new form_etudiant(this);
    form->exec();
    delete form;
}

void MainWindow::on_btn_add_groupes_clicked()
{
    form_groupe *form = new form_groupe(this);
    form->exec();
    delete form;
}

void MainWindow::on_btn_add_enseignants_clicked()
{
    form_enseignant *form = new form_enseignant(this);
    form->exec();
    delete form;
}

void MainWindow::on_btn_add_themes_clicked()
{
    // Ouvre le formulaire Thème
    form_theme *form = new form_theme(this);
    form->exec();
    delete form;
}

void MainWindow::on_btn_add_etudiant_clicked()
{
    on_btn_add_etudiants_clicked();
}

void MainWindow::on_btn_add_groupe_clicked()
{
    on_btn_add_groupes_clicked();
}

void MainWindow::on_btn_add_enseignant_clicked()
{
    on_btn_add_enseignants_clicked();
}

void MainWindow::on_btn_add_theme_clicked()
{
    on_btn_add_themes_clicked();
}


