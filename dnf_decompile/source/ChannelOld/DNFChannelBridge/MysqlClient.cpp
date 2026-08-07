// MySQL 客户端最小实现（桩）。
// 原始 df_bridge_r 静态链接了 MySQL 4.x 客户端库；本工程不携带该库。
// 为保持 DBMgr 项目函数的调用结构完整，这里提供等价签名的最小实现。
// 部署运行请使用原始运行时（dnf_installer）中的真实 MySQL 客户端。
#include <stdlib.h>

struct st_mysql
{
    int dummy;
};
struct st_mysql_res
{
    int dummy;
};

typedef struct st_mysql MYSQL;
typedef struct st_mysql_res MYSQL_RES;
typedef char** MYSQL_ROW;

extern "C" {

MYSQL* mysql_init(MYSQL* mysql)
{
    if (mysql == NULL)
    {
        mysql = (MYSQL*)calloc(1, sizeof(MYSQL));
    }
    return mysql;
}

MYSQL* mysql_real_connect(MYSQL* mysql, const char* host, const char* user, const char* passwd,
                          const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag)
{
    return NULL;
}

int mysql_query(MYSQL* mysql, const char* q)
{
    return 1;
}

MYSQL_RES* mysql_store_result(MYSQL* mysql)
{
    return NULL;
}

MYSQL_ROW mysql_fetch_row(MYSQL_RES* result)
{
    return NULL;
}

void mysql_free_result(MYSQL_RES* result)
{
}

void mysql_close(MYSQL* mysql)
{
    free(mysql);
}

unsigned int mysql_errno(MYSQL* mysql)
{
    return 0;
}

}
