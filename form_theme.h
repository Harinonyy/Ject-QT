#ifndef FORM_THEME_H
#define FORM_THEME_H

#include <QDialog>

namespace Ui {
class form_theme;
}

class form_theme : public QDialog
{
    Q_OBJECT

public:
    explicit form_theme(QWidget *parent = nullptr);
    ~form_theme();

private:
    Ui::form_theme *ui;
};

#endif // FORM_THEME_H
