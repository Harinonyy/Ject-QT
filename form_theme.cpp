#include "form_theme.h"
#include "ui_form_theme.h"

form_theme::form_theme(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::form_theme)
{
    ui->setupUi(this);
}

form_theme::~form_theme()
{
    delete ui;
}
