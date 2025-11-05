#ifndef CONNEXIONBD_H
#define CONNEXIONBD_H
#include <QSqlDatabase>
#include <QSqlError>

class connexionBd
{
public:
    connexionBd();
    static QSqlDatabase& connectBase();
};

#endif // CONNEXIONBD_H
