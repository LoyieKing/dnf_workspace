#ifndef STATICS_PROXY_H_
#define STATICS_PROXY_H_

#include <string>
#include <map>

// global_function（statics 引用 global_function::SendPacketToDbmw）
namespace global_function
{
void SendPacketToDbmw(char* data);
}

class StatisticsPacket;

// statistc_proxy（统计代理，statics 独有）
namespace statistc_proxy
{
class Field
{
public:
    Field();
    Field(const Field& other);
    ~Field();
    char* getFieldName();
    char* getFieldValue();
    char* getUpdateValue();
    int updateDatabase(const char* table, const std::string& key, const std::string& cond);
    bool MakeInsertQuery(char* out, const char* table, const std::string& key,
                         const std::string& cond);
    bool MakeUpdateQuery(char* out, const char* table, const std::string& key,
                         const std::string& cond);
    void getUpdateCondition(const std::string& key, const std::string& cond);
    void add(const char* name, unsigned int value);
    void reset();
    std::map<std::string, unsigned long long> m_fields;  // +0
};

class Table
{
public:
    Table();
    Table(const Table& other);
    ~Table();
    void resetValue();
    void updateDatabase(const char* table);
    void add(const char* name, unsigned int value, const char* key);
    void reset();
    void setKey(const char* key);
    std::map<std::string, Field> m_fields;  // +0
    std::string m_key;                      // +0x18
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
    std::map<std::string, Table> m_tables;  // +0
    static void (*sendPacketFunctionPointer)(char*);
};

void initialize();
void addStatisticProxy(StatisticsPacket* packet);
void resetStatisticProxy();
void sendDBStatisticProxy();
}

statistc_proxy::StatisticProxy* getStatisticProxy();

#endif // STATICS_PROXY_H_
