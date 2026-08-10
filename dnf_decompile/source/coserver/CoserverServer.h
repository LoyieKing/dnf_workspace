#ifndef COSERVER_SERVER_H_
#define COSERVER_SERVER_H_

#include <string>

#include "CoserverTable.h"

class CUdpHandler;
class CApplication;
class PacketHeader;

// CGameServer：0x14
// group@0(0xff=无效) / name string@4 / port@8 / connectFlag@0xa /
// heartBeatCount@0xb(0x1e) / heartBeatOver@0xc / channelNo@0xd / udp@0x10
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
    unsigned char GetChannelNo();
    unsigned char GetGroupNo();
    unsigned char m_group;          // +0（0xff=无效）
    std::string m_name;             // +4
    unsigned short m_port;          // +8
    unsigned char m_connectFlag;    // +0xa
    unsigned char m_heartBeatCount; // +0xb（0x1e）
    unsigned char m_heartBeatOver;  // +0xc
    unsigned char m_channelNo;      // +0xd
    CUdpHandler* m_udp;             // +0x10
};

// CServerHandler：CGameServer[0x649b] + app@0x7dc1c，总 0x7dc20
// 数组下标 = group * 0xff + index（group<0x65, index<0xff）
class CServerHandler
{
public:
    CServerHandler();
    ~CServerHandler();
    void Attach(CApplication* app);
    void Load(ST_ServerInfo* info);
    void Process();
    void ResetHeartBeat(unsigned char group, unsigned char index);
    void SetGameServerIpPort(unsigned char id, unsigned int ip, unsigned short port);
    bool IsConnectedGameServer(unsigned char group, unsigned char index);
    void SetConnectFlag(unsigned char group, unsigned char index, bool flag);
    CGameServer* GetGameServer(int idx);
    void SendToGameServer(unsigned char group, unsigned char index, PacketHeader* header);
    void SendAllToGameServer(char* buf, int len);
    CGameServer m_servers[0x649b];  // +0
    CApplication* m_app;            // +0x7dc1c
};

// CServerConfig：CTableBase + ST_ServerInfo[0x649b]@4（总 0x4b74c）
class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual bool Parse_Table(char* line, int idx);
    void Load_Table(const std::string& path);
    ST_ServerInfo* GetServerInfo();
    ST_ServerInfo m_servers[0x649b];  // +4
};

#endif // COSERVER_SERVER_H_
