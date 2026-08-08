#ifndef GUILD_TABLE_H_
#define GUILD_TABLE_H_

#include <map>
#include <string>
#include <vector>

class CServerHandler;

// ---- ST_KillUSRConfig：4 int ----
struct ST_KillUSRConfig
{
    ST_KillUSRConfig();
    int m_field0;
    int m_field1;
    int m_field2;
    int m_field3;
};

// ---- stServerInfo：0x16 ----
struct stServerInfo
{
    unsigned char m_group;     // +0
    unsigned char m_field1;    // +1
    unsigned char m_field2;    // +2
    char m_name[0x10];         // +3
    unsigned short m_port;     // +0x14
};

// ---- ST_ServerInfo：0xc ----
struct ST_ServerInfo
{
    ST_ServerInfo();
    unsigned char m_field0;    // +0
    unsigned char m_field1;    // +1
    unsigned char m_field2;    // +2（0xff）
    std::string m_string;      // +4
    unsigned short m_ushort;   // +8
};

// ---- CTableBase ----
class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    int Load_Txt_Table_Data(const char* path, int maxCount);
    virtual void Load_Table(const std::string& path) = 0;
    virtual int Parse_Table(char* line, int idx) = 0;
};

class CDNFException : public std::exception
{
public:
    CDNFException(const std::string& msg);
    virtual ~CDNFException() throw();
    virtual const char* what() const throw();
    std::string m_msg;
};

// ---- CServerConfig：vptr@0 + ST_ServerInfo[255]@4 ----
class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    ST_ServerInfo* GetServerInfo();
    ST_ServerInfo m_info[255];   // +4
};

// ---- CAppConfig：vptr@0 / frameCount@4 / group@6 / udpPort@8 / name@0xc /
//      dbmwTcpPort@0x10 / multimap<uint, stServerInfo*>@0x14 ----
class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    void Check_FileName(const std::string& filename);
    unsigned char Get_ServerGroup();
    unsigned char Get_FrameCountValue();
    unsigned short Get_ServerUdpPort();
    const char* Get_DBMWTcpIP();
    unsigned short Get_DBMWTcpPort();
    unsigned short Get_ServerTcpPort();
    std::multimap<unsigned int, stServerInfo*>* GetServerInfoMap();
    void clearServerInfoMap();

    unsigned char m_frameCount;   // +4
    unsigned char m_field5;       // +5
    unsigned short m_udpPort;     // +6
    unsigned short m_tcpPort;     // +8
    unsigned char m_group;        // +0xa
    char m_pad;                   // +0xb
    std::string m_name;           // +0xc
    unsigned short m_dbmwTcpPort; // +0x10
    char m_pad2[2];               // +0x12
    std::multimap<unsigned int, stServerInfo*> m_serverInfo;  // +0x14
};

class CKillUSRConfig : public CTableBase
{
public:
    CKillUSRConfig();
    virtual ~CKillUSRConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    void Clear_Table();
    std::vector<ST_KillUSRConfig*>* GetInfo() const;
    std::vector<ST_KillUSRConfig*> m_infos;  // +4
};

class CAppLoadChecker
{
public:
    CAppLoadChecker();
    void AddLoad(int n);
    void AddLoadTotal(int n);
    int IsLoadComplete();
    void setUdpRecvQueue(int n);
    void setTcpRecvQueue(int n);
    void setTcpSendQueue(int n);
    int checkUdpRecvLoad(int n);
    int checkTcpRecvLoad(int n);
    int checkTcpSendLoad(int n);
    int CheckUdpRecvQ(int n);
    int CheckTcpRecvQ(int n);
    int CheckTcpSendQ(int n);
    void RequestDB(CServerHandler* handler, int a, int b);
    char m_field0;   // +0
    char m_field1;   // +1
    char m_field2;   // +2
};

CAppLoadChecker* CAppLoadCheckerInstance();

#endif  // GUILD_TABLE_H_
