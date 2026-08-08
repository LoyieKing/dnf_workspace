#ifndef GUILD_SERVER_H_
#define GUILD_SERVER_H_

#include <map>
#include <string>

#include "GuildTable.h"

class CApplication;
class CUdpHandler;
class CTcpNetSystem;
class CGuildManager;
class PacketHeader;

// ---- CServerInterface：接口 ----
class CServerInterface
{
public:
    CServerInterface();
    CServerInterface(stServerInfo* info);
    virtual ~CServerInterface();
    virtual bool IsValidServer();
    virtual bool IsConnected();
    virtual int IsHeartBeatTimeOver();
    virtual void ResetHeartBeat();
    virtual void OnDisconnect();
    virtual void SendToServer(char* buf, int len);
    virtual void SetConnFlag(bool flag);
    virtual bool Initialize();
    virtual bool Destroy();
    void SetServerInfo(stServerInfo* info);
    stServerInfo* GetServerInfo();
    void* GetUdpHandler();
    unsigned char GetChannelNo();
    unsigned char GetGroupNo();
    stServerInfo* m_info;    // +4
    char m_field8;           // +8
    char m_field9;           // +9
    char m_fielda;           // +0xa
    int m_sock;              // +0xc
};

// ---- CGameServer：0x14 ----
class CGameServer : public CServerInterface
{
public:
    CGameServer();
    CGameServer(stServerInfo* info);
    virtual ~CGameServer();
    bool Initialize();
    bool Destroy();
    int GetSocket();
    void SetSocket(unsigned int sock);
    int m_field10;          // +0x10
};

// ---- CTcpGameServer ----
class CTcpGameServer
{
public:
    CTcpGameServer();
    ~CTcpGameServer();
    void Init(unsigned int group, CTcpNetSystem* net);
    void SendToGameServer(char* buf);
    unsigned char GetChannelNo();
    void SetChannelNo(unsigned char channel);
    bool IsValidServer();
    char* makePacketHeader(unsigned short id, unsigned short size);
    stServerInfo* m_info;   // +4
    char m_field8;          // +8
};

// ---- CDBServer ----
class CDBServer : public CServerInterface
{
public:
    CDBServer();
    CDBServer(stServerInfo* info);
    virtual ~CDBServer();
    bool Initialize();
    bool Destroy();
};

// ---- CManagerServer ----
class CManagerServer : public CServerInterface
{
public:
    CManagerServer();
    CManagerServer(stServerInfo* info);
    virtual ~CManagerServer();
    bool Initialize();
    bool Destroy();
    void SendHeartBeat(int group);
};

// ---- CMonitorServer ----
class CMonitorServer : public CServerInterface
{
public:
    CMonitorServer();
    CMonitorServer(stServerInfo* info);
    virtual ~CMonitorServer();
    bool Initialize();
    bool Destroy();
    void SendHeartBeat(int group);
};

// ---- CTcpDBServer：0x14 ----
class CTcpDBServer
{
public:
    CTcpDBServer();
    ~CTcpDBServer();
    void Init(CTcpNetSystem* net, CGuildManager* gm);
    void SetIP(std::string ip);
    void SetPort(unsigned short port);
    void SendHeartbeat();
    void SendToServer(char* buf);
    bool IsValidServer();
    char* GetIP();
    unsigned short GetPort();
    int* GetSockRef();
    int GetSock();
    void Clear();
    void SendLogin();
    void SendLogout();
    void Connected();
    void DisConnected();
    char* makePacketHeader(unsigned short id, unsigned short size);
    std::string m_ip;             // +0
    unsigned short m_port;        // +4
    int m_sock;                   // +8
    CTcpNetSystem* m_net;         // +0xc
    CGuildManager* m_guildMgr;    // +0x10
};

// ---- CServerHandler：0x5c ----
// map<uint,CGameServer*>@0 / @0x18=CDBServer* / @0x1c=CManagerServer* /
// map<uint,CTcpGameServer*>@0x24 / @0x3c=CApplication* / @0x40=heartbeat /
// CTcpDBServer@0x44(0x14) / @0x58=@
class CServerHandler
{
public:
    CServerHandler();
    ~CServerHandler();
    void Load(std::multimap<unsigned int, stServerInfo*>* map);
    void Attach(CApplication* app);
    void Process();
    CGameServer* GetGameServer(unsigned int group);
    CTcpGameServer* GetTcpGameServer(unsigned int group);
    int IsConnectedGameServer(unsigned char group);
    CDBServer* GetDBServer();
    CManagerServer* GetManagerServer();
    CMonitorServer* GetMonitorServer();
    CTcpDBServer* GetTcpDBServer();
    bool IsConnectedDBServer();
    void ResetDBHeartBeat();
    void ResetHeartBeat(unsigned char type);
    void SetConnectFlag(unsigned char type, bool flag);
    void SetDBConnectFlag(bool flag);
    void SetManagerConnectFlag(bool flag);
    unsigned char GetServerGroupNo();
    void SendToDB(PacketHeader* pkt);
    void TcpSendToDB(PacketHeader* pkt);
    void SendToManager(PacketHeader* pkt);
    void SendToGameServer(unsigned char group, PacketHeader* pkt);
    void SendAllTcpGameServer(PacketHeader* pkt);
    void SendAllUdpGameServer(char* buf, int len);
    void SendTcpGameServerFirst(PacketHeader* pkt);
    void RegistDBServer(CDBServer* server);
    void UnregistDBServer();
    void RegistManagerServer(CManagerServer* server);
    void UnregistManagerServer();
    void RegistMonitorServer(CMonitorServer* server);
    void UnregistMonitorServer();
    bool RegistGameServer(stServerInfo* info);
    void UnregistGameServer(unsigned int group);
    CTcpGameServer* CreateTcpGameServer(unsigned int group);
    void DeleteTcpGameServer(unsigned int group);
    void SetGameServerIpPort(unsigned char group, unsigned int port, unsigned short tcpPort);
    void QueryGuild(unsigned int group, unsigned int guildId);
    void QueryGuildMember(unsigned char group, unsigned int characNo);
    void SendDBMWConnectionCheck();

    std::map<unsigned int, CGameServer*> m_gameServers;   // +0
    CDBServer* m_dbServer;                                 // +0x18
    CManagerServer* m_managerServer;                       // +0x1c
    std::map<unsigned int, CTcpGameServer*> m_tcpGameServers;  // +0x24
    CApplication* m_app;                                   // +0x3c
    int m_heartbeat;                                       // +0x40
    CTcpDBServer m_tcpDbServer;                            // +0x44
    int m_field58;                                         // +0x58
};

#endif  // GUILD_SERVER_H_
