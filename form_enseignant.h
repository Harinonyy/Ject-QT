#ifndef FORM_ENSEIGNANT_H
#define FORM_ENSEIGNANT_H

#include <QDialog>

namespace Ui {
class form_enseignant;
}

class form_enseignant : public QDialog
{
    Q_OBJECT

public:
    explicit form_enseignant(QWidget *parent = nullptr);
    ~form_enseignant();

private:
    Ui::form_enseignant *ui;
};

#endif // FORM_ENSEIGNANT_H
