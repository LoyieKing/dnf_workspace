// Weak stub implementations for mysql client API (df_auction_r rebuild, 2026-08-08)
#include "mysql.h"

#define NSL_WEAK __attribute__((weak))

extern "C" {

NSL_WEAK MYSQL* mysql_init(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}

NSL_WEAK void mysql_close(MYSQL* mysql)
{
    (void)mysql;
}

NSL_WEAK MYSQL* mysql_real_connect(MYSQL* mysql, const char* host, const char* user,
                                   const char* passwd, const char* db, unsigned int port,
                                   const char* unix_socket, unsigned long clientflag)
{
    (void)mysql;
    (void)host;
    (void)user;
    (void)passwd;
    (void)db;
    (void)port;
    (void)unix_socket;
    (void)clientflag;
    return 0;
}

NSL_WEAK unsigned int mysql_errno(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}

NSL_WEAK int mysql_options(MYSQL* mysql, int option, const void* arg)
{
    (void)mysql;
    (void)option;
    (void)arg;
    return 0;
}

NSL_WEAK int mysql_real_query(MYSQL* mysql, const char* q, unsigned long length)
{
    (void)mysql;
    (void)q;
    (void)length;
    return 0;
}

NSL_WEAK MYSQL_RES* mysql_store_result(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}

NSL_WEAK void mysql_free_result(MYSQL_RES* result)
{
    (void)result;
}

NSL_WEAK MYSQL_ROW mysql_fetch_row(MYSQL_RES* result)
{
    (void)result;
    return 0;
}

NSL_WEAK unsigned long* mysql_fetch_lengths(MYSQL_RES* result)
{
    (void)result;
    return 0;
}

NSL_WEAK unsigned long long mysql_num_rows(MYSQL_RES* result)
{
    (void)result;
    return 0;
}

NSL_WEAK unsigned int mysql_num_fields(MYSQL_RES* result)
{
    (void)result;
    return 0;
}

NSL_WEAK unsigned long long mysql_affected_rows(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}

NSL_WEAK int mysql_ping(MYSQL* mysql)
{
    (void)mysql;
    return 0;
}

NSL_WEAK unsigned long mysql_real_escape_string(MYSQL* mysql, char* to, const char* from,
                                                 unsigned long length)
{
    (void)mysql;
    (void)to;
    (void)from;
    (void)length;
    return 0;
}

} // extern "C"
