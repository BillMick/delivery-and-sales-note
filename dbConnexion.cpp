#include "dbConnexion.h"

bool dbConnected()
{
    QSqlDatabase db1;
    db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("bordereau.db");
    if(db1.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}
