#ifndef NSL_DBCONNECTION_H_
#define NSL_DBCONNECTION_H_

#include <stdlib.h>
#include <string.h>

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
    bool is_valid_col(int col0)
    {
        bool bVar1;
        if ((col0 < 0) || ((int)m_num_fields <= col0))
        {
            bVar1 = false;
        }
        else
        {
            bVar1 = true;
        }
        return bVar1;
    }
    ulong get_n_rows()
    {
        return m_num_rows;
    }
    bool get_str(int col0, char* buf, int buf_size)
    {
        bool bVar1;
        if ((m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1)) || (buf_size < 1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            strncpy(buf, m_row[col0], buf_size);
            buf[buf_size + -1] = '\0';
        }
        return !bVar1;
    }
    bool get_binary(int col0, void* buf, int buf_size)
    {
        bool bVar1;
        if ((m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1)) || (buf_size < 1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (bVar1)
        {
            bVar1 = false;
        }
        else
        {
            if ((int)m_len[col0] < buf_size)
            {
                buf_size = (int)m_len[col0];
            }
            memcpy(buf, m_row[col0], buf_size);
            bVar1 = true;
        }
        return bVar1;
    }
    bool get_int(int col0, int& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_uint(int col0, uint& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = (uint)atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_long(int col0, long& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_ulong(int col0, ulong& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_short(int col0, short& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = (short)atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_ushort(int col0, ushort& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = (ushort)atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_bool(int col0, bool& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = atoi(m_row[col0]) != 0;
        }
        return !bVar1;
    }
    bool get_ubyte(int col0, unsigned char& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = (unsigned char)atoi(m_row[col0]);
        }
        return !bVar1;
    }
    bool get_longlong(int col0, long long& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = strtoll(m_row[col0], (char**)0, 10);
        }
        return !bVar1;
    }
    bool get_int64(int col0, unsigned long long& v)
    {
        bool bVar1;
        if (m_row == (MYSQL_ROW)0 || (bVar1 = is_valid_col(col0), !bVar1))
        {
            bVar1 = true;
        }
        else
        {
            bVar1 = false;
        }
        if (!bVar1)
        {
            v = strtoull(m_row[col0], (char**)0, 10);
        }
        return !bVar1;
    }

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
