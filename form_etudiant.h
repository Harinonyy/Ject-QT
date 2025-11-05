#ifndef FORM_ETUDIANT_H
#define FORM_ETUDIANT_H

#include <QDialog>
#include "connexionbd.h"

namespace Ui {
class form_etudiant;
}

class form_etudiant : public QDialog
{
    Q_OBJECT

public:
    explicit form_etudiant(QWidget *parent = nullptr);
    ~form_etudiant();

private:
    Ui::form_etudiant *ui;

};
#endif // FORM_ETUDIANT_H
