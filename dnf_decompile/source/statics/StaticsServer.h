#ifndef STATICS_SERVER_H_
#define STATICS_SERVER_H_

#include <string>

#include "StaticsTable.h"

class CUdpHandler;
class CApplication;
class PacketHeader;

// CGameServer：0x14（同 coserver，无 GetChannelNo/GetGroupNo）
class CGameServer
{
public:
    CGameServer();
    ~CGameServer();
    void Init(unsigned char group, std::string& name, unsigned short port,
              unsigned char channel);
    bool IsValidServer();
    int IsHeartBeatTimeOver();
    void ResetHeartBeat();
    void SendToGameServer(char* buf, int len);
    void OnDisconnect();
    char IsConnected();
    void SetConnFlag(bool flag);
    unsigned char m_group;          // +0（0xff=无效）
    std::string m_name;             // +4
    unsigned short m_port;          // +8
    unsigned char m_connectFlag;    // +0xa
    unsigned char m_heartBeatCount; // +0xb（0x1e）
    unsigned char m_heartBeatOver;  // +0xc
    unsigned char m_channelNo;      // +0xd
    CUdpHandler* m_udp;             // +0x10
};

// CDBServer：0x14
class CDBServer
{
public:
    CDBServer();
    ~CDBServer();
    void Init(unsigned char id, std::string& name, unsigned short port, unsigned char param);
    bool IsValidServer();
    int IsHeartBeatTimeOver();
    void ResetHeartBeat();
    void SendToServer(char* buf, int len);
    void OnDisconnect();
    char IsConnected();
    void SetConnFlag(bool flag);
    unsigned char m_id;             // +0（0xff=无效）
    std::string m_name;             // +4
    unsigned short m_port;          // +8
    unsigned char m_connectFlag;    // +0xa
    unsigned char m_heartBeatCount; // +0xb（0x14）
    unsigned char m_heartBeatOver;  // +0xc
    unsigned char m_reserved;       // +0xd
    CUdpHandler* m_udp;             // +0x10
};

// CManagerServer：0x10
class CManagerServer
{
public:
    CManagerServer();
    ~CManagerServer();
    void Init(unsigned char id, std::string& name, unsigned short port, unsigned char param);
    bool IsValidServer();
    int SendToServer(char* buf, int len);
    void OnDisconnect();
    void SendHeartBeat(int group);
    void SetConnFlag(bool flag);
    unsigned char m_id;          // +0（0xff=无效）
    std::string m_name;          // +4
    unsigned short m_port;       // +8
    unsigned char m_connectFlag; // +0xa
    unsigned char m_param;       // +0xb
    CUdpHandler* m_udp;          // +0xc
};

// CServerHandler：CGameServer[0xff]@0 + CDBServer@0x13ec + @0x1400 +
//                CManagerServer@0x1404 + @0x1414（总 0x1418）
class CServerHandler
{
public:
    CServerHandler();
    ~CServerHandler();
    void Attach(CApplication* app);
    void Load(ST_ServerInfo* info);
    void Process();
    void ResetHeartBeat(unsigned char index);
    bool IsConnectedGameServer(unsigned char index);
    void SetConnectFlag(unsigned char index, bool flag);
    CGameServer* GetGameServer(int idx);
    void SendToGameServer(unsigned char index, PacketHeader* header);
    void SendAllToGameServer(char* buf, int len);
    void SendToDB(PacketHeader* header);
    void SendToManager(PacketHeader* header);
    void SetDBConnectFlag(bool flag);
    void SetManagerConnectFlag(bool flag);
    void ResetDBHeartBeat();
    bool IsConnectedDBServer();
    unsigned char GetServerGroupNo();
    void SetGameServerIpPort(unsigned char id, unsigned int ip, unsigned short port);
    CGameServer m_servers[0xff];  // +0
    CDBServer m_dbServer;         // +0x13ec
    CApplication* m_app;          // +0x1400
    CManagerServer m_mgrServer;   // +0x1404
    int m_reserved2;              // +0x1414（总 0x1418）
};

// CServerConfig：CTableBase + ST_ServerInfo[0xff]@4（总 0xbf8）
class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual int Parse_Table(char* line, int idx);
    void Load_Table(const std::string& path);
    ST_ServerInfo* GetServerInfo();
    ST_ServerInfo m_servers[0xff];  // +4
};

#endif // STATICS_SERVER_H_
