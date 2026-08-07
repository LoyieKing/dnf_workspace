#ifndef NSL_DBCONNECTIONS_H_
#define NSL_DBCONNECTIONS_H_

#include <map>

namespace nsl {

class DBConnection;

class DBConnections
{
public:
    DBConnection* getDBConnection(int idx);
    void setDBConnection(int idx, DBConnection* pConn);

    std::map<int, DBConnection*> mDbConnections;
};

} // namespace nsl

#endif // NSL_DBCONNECTIONS_H_
