#ifndef MONITOR_TABLE_H_
#define MONITOR_TABLE_H_

#include <map>
#include <string>

struct stServerInfo
{
    unsigned char m_field0;    // +0
    unsigned char m_field1;    // +1
    unsigned char m_field2;    // +2
    char m_name[0x10];         // +3
    unsigned short m_port;     // +0x14
};

// ---- CTableBase ----
class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx) = 0;
    int Load_Txt_Table_Data(const char* path, int maxCount);
};

// ---- CAppConfig ----
class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    void Check_FileName(const std::string& filename);
    void clearServerInfoMap();
    unsigned char Get_FrameCountValue();     // +4
    unsigned short Get_ServerUdpPort();      // +6
    unsigned short Get_ServerTcpPort();      // +8
    unsigned char Get_ServerGroup();         // +0xa
    const char* Get_DBMWTcpIP();
    unsigned short Get_DBMWTcpPort();
    const char* Get_ManagerTcpIP();
    unsigned short Get_ManagerTcpPort();
    std::multimap<unsigned int, stServerInfo*>* GetServerInfoMap();

    unsigned char m_frameCountValue;         // +4
    unsigned short m_serverUdpPort;          // +6
    unsigned short m_serverTcpPort;          // +8
    unsigned char m_serverGroup;             // +0xa
    std::multimap<unsigned int, stServerInfo*> m_serverInfo;  // +0xc
    std::string m_str1;                 // +0x24
    unsigned short m_ushort28;          // +0x28
    std::string m_str2;                 // +0x2c
    unsigned short m_ushort30;          // +0x30
};

// ---- ST_ServerInfo：0xc（CServerConfig 表项）----
struct ST_ServerInfo
{
    int m_field0;       // +0
    std::string m_str;  // +4
    int m_field8;       // +8
};

// ---- CServerConfig：monitor 服务器配置表 ----
class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    ST_ServerInfo m_table[0xff];  // +4
};

#endif  // MONITOR_TABLE_H_
