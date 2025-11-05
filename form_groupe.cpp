#include "form_groupe.h"
#include "ui_form_groupe.h"

form_groupe::form_groupe(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::form_groupe)
{
    ui->setupUi(this);
}

form_groupe::~form_groupe()
{
    delete ui;
}
