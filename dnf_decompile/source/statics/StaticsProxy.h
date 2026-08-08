#ifndef STATICS_PROXY_H_
#define STATICS_PROXY_H_

#include <string>

// global_function（statics 引用 global_function::SendPacketToDbmw）
namespace global_function
{
void SendPacketToDbmw(char* data, int len);
}

// statistc_proxy（统计代理，statics 独有）
namespace statistc_proxy
{
class Field
{
public:
    Field();
    ~Field();
    char* getFieldName();
    char* getFieldValue();
    char* getUpdateValue();
    void updateDatabase(const char* table, const std::string& key, const std::string& cond);
    void MakeInsertQuery(char* out, const char* table, const std::string& key,
                         const std::string& cond);
    void MakeUpdateQuery(char* out, const char* table, const std::string& key,
                         const std::string& cond);
    void getUpdateCondition(const std::string& key, const std::string& cond);
    void add(const char* name, unsigned int value);
    void reset();
    char m_data[0x80];
};

class Table
{
public:
    Table();
    ~Table();
    void resetValue();
    void updateDatabase(const char* table);
    void add(const char* name, unsigned int value, const char* key);
    void reset();
    void setKey(const char* key);
    char m_data[0x100];
};

class StatisticProxy
{
public:
    StatisticProxy();
    ~StatisticProxy();
    void resetTable();
    void registTable(const char* name, Table& table);
    void updateDatabase();
    void add(const char* table, unsigned int value, const char* key, const char* cond);
    char m_data[0x100];
    static void (*sendPacketFunctionPointer)(char*, int);
};

void initialize();
void addStatisticProxy(void* packet);
void resetStatisticProxy();
void sendDBStatisticProxy();
}

#endif // STATICS_PROXY_H_
