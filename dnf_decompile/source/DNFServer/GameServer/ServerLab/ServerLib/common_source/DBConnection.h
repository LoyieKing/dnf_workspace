#ifndef NSL_DBCONNECTION_H_
#define NSL_DBCONNECTION_H_

#include "mysql.h"

namespace nsl
{

class DBConnection
{
public:
    DBConnection();
    ~DBConnection();
    bool init_db_handle();
    bool init();
    void close();
    bool open(char* ip, char* dbname, char* id, char* pass, unsigned int port);
    bool set_query(const char* format, ...);
    int exec(bool bLog);
    void clear_result_set();
    bool fetch();
    void ping();
    bool set_compress_option();
    bool set_read_default_grp_option();
    bool set_charset_name_option();
    bool set_reconnect_option();
    unsigned long escape_string(char* to, const char* from);
    char* blob_to_str(int idx, void* blob, int size);
    unsigned long long getAffectedRowCount();
    int exec_query();

private:
    MYSQL* h_db;
    MYSQL_RES* m_res;
    MYSQL_ROW m_row;
    ulong* m_len;
    ulong m_num_rows;
    unsigned int m_num_fields;
    char m_query[0x6001];
    char temp_buf[10][0x6001];
    int m_query_len;
    int m_db_err;
    char dbIp_[0x10];
    unsigned int dbPort_;
    char dbAcc_[0x14];
    char dbPwd_[0x14];
    char dbName_[0x1e];
};

} // namespace nsl

#endif // NSL_DBCONNECTION_H_
