#include "form_enseignant.h"
#include "ui_form_enseignant.h"

form_enseignant::form_enseignant(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::form_enseignant)
{
    ui->setupUi(this);
}

form_enseignant::~form_enseignant()
{
    delete ui;
}
