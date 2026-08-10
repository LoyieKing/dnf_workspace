// df_coserver_r — CGameServer/CServerHandler/CServerConfig
#include <stdio.h>

#include "CoserverServer.h"
#include "CoserverApp.h"
#include "CoserverUdp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"
#include "PacketHeader.h"

CGameServer::CGameServer()
    : m_group(0xff), m_port(0), m_connectFlag(0), m_heartBeatCount(0x1e),
      m_heartBeatOver(0), m_channelNo(0), m_udp(0)
{
}

CGameServer::~CGameServer()
{
}

void CGameServer::Init(unsigned char group, std::string& name, unsigned short port,
                       unsigned char channel)
{
    m_group = group;
    m_name = name;
    m_port = port;
    m_udp = new CUdpHandler;
    m_udp->InitClientSocket();
    m_channelNo = channel;
}

bool CGameServer::IsValidServer()
{
    if (m_group == 0xff)
    {
        return false;
    }
    return true;
}

int CGameServer::IsHeartBeatTimeOver()
{
    m_heartBeatCount = (char)(m_heartBeatCount - 1);
    if (m_heartBeatCount == 0)
    {
        m_heartBeatOver = (char)(m_heartBeatOver + 1);
        if (0x14 < m_heartBeatOver)
        {
            return 1;
        }
        m_heartBeatCount = 0x1e;
    }
    return 0;
}

void CGameServer::ResetHeartBeat()
{
    m_heartBeatCount = 0x1e;
    m_heartBeatOver = 0;
}

void CGameServer::SendToGameServer(char* buf, int len)
{
    if (m_group == 0xff)
    {
        return;
    }
    if (m_udp != 0)
    {
        m_udp->SendToServer(buf, len, m_port, m_name.c_str());
    }
}

void CGameServer::OnDisconnect()
{
    m_connectFlag = 0;
    m_heartBeatCount = 0x1e;
    m_heartBeatOver = 0;
}

char CGameServer::IsConnected()
{
    return m_connectFlag;
}

void CGameServer::SetConnFlag(bool flag)
{
    m_connectFlag = flag;
}

unsigned char CGameServer::GetChannelNo()
{
    return m_channelNo;
}

unsigned char CGameServer::GetGroupNo()
{
    return m_group;
}

CServerHandler::CServerHandler()
{
    // m_servers 就地构造（与原始显式循环等价）
    m_app = 0;
}

CServerHandler::~CServerHandler()
{
}

void CServerHandler::Attach(CApplication* app)
{
    if (app != 0)
    {
        m_app = app;
    }
}

void CServerHandler::Load(ST_ServerInfo* info)
{
    for (int i = 0; i < 0x649b; i++)
    {
        if (info[i].m_field0 == 1)
        {
            unsigned char index = info[i].m_field2;
            unsigned char group = info[i].m_field1;
            if (index == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break! "
                                    "bServerIndex >= MAX_CONN_SERVER");
            }
            if (100 < group)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break! "
                                    "bServerGroup >= SERVER_GROUP_MAX");
            }
            m_servers[(int)group * 0xff + (int)index].Init(group, info[i].m_string,
                                                           info[i].m_ushort, index);
        }
    }
}

void CServerHandler::Process()
{
    CGameServer* p = m_servers;
    int left = 0x649b;
    int counter = 0;
    while (left != 0)
    {
        left--;
        counter++;
        if (p->IsValidServer())
        {
            if (p->IsConnected())
            {
                if (p->IsHeartBeatTimeOver())
                {
                    p->OnDisconnect();
                    DNF_LOG_SCOPE_LINE(0x5e, "./log/GameServer",
                        "Game Server Disconnect, Index : %d, channel no : %d, group no: %d\n",
                        counter, p->GetChannelNo() & 0xff, p->GetGroupNo() & 0xff);
                }
            }
        }
        p++;
    }
}

void CServerHandler::ResetHeartBeat(unsigned char group, unsigned char index)
{
    if (index != 0xff && group < 0x65 &&
        m_servers[(int)group * 0xff + (int)index].IsValidServer())
    {
        m_servers[(int)group * 0xff + (int)index].ResetHeartBeat();
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x7a,"./log/GameServer",
            "CServerHandler::ResetHeartBeat\tGame Server Index Over(%d), Group Index Over(%d)",
            (int)index, (int)group);
    }
}

void CServerHandler::SetGameServerIpPort(unsigned char id, unsigned int ip,
                                         unsigned short port)
{
    // 原始即空实现
}

bool CServerHandler::IsConnectedGameServer(unsigned char group, unsigned char index)
{
    if (index != 0xff && group < 0x65 &&
        m_servers[(int)group * 0xff + (int)index].IsValidServer())
    {
        return m_servers[(int)group * 0xff + (int)index].IsConnected();
    }
    DNF_LOG_SCOPE_LINE(0xa4,"./log/GameServer",
        "CServerHandler::IsConnectedGameServer\tGame Server Index Over(%d), Group Index Over(%d)",
        (int)index, (int)group);
    return 0;
}

void CServerHandler::SetConnectFlag(unsigned char group, unsigned char index, bool flag)
{
    if (index != 0xff && group < 0x65 &&
        m_servers[(int)group * 0xff + (int)index].IsValidServer())
    {
        m_servers[(int)group * 0xff + (int)index].SetConnFlag(flag);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xbc,"./log/GameServer",
            "CServerHandler::SetConnectFlag\tGame Server Index Over(%d), Group Index Over(%d)",
            (int)index, (int)group);
    }
}

CGameServer* CServerHandler::GetGameServer(int idx)
{
    if (idx < 0x649b && m_servers[idx].IsValidServer())
    {
        return &m_servers[idx];
    }
    DNF_LOG_SCOPE_LINE(0xdc,"./log/GameServer", "CServerHandler::GetGameServer\tGame Server Index Over Index : %d!\n",
        idx);
    return 0;
}

void CServerHandler::SendToGameServer(unsigned char group, unsigned char index,
                                      PacketHeader* header)
{
    CGameServer* gs = GetGameServer((int)group * 0xff + (int)index);
    if (gs != 0)
    {
        gs->SendToGameServer((char*)header, header->packetSize);
    }
}

void CServerHandler::SendAllToGameServer(char* buf, int len)
{
    CGameServer* p = m_servers;
    int left = 0x649b;
    while (left != 0)
    {
        if (p->IsValidServer())
        {
            p->SendToGameServer(buf, len);
        }
        p++;
        left--;
    }
}

CServerConfig::CServerConfig()
{
}

CServerConfig::~CServerConfig()
{
}

bool CServerConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tok0;
    char* tok1;
    char* tok2;
    char* tok3;
    char* tok4;
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 5);
    if (n == 5 && idx < 0x649b)
    {
        ST_ServerInfo* s = &m_servers[idx];
        s->m_field0 = (char)atoi(tok0);
        s->m_field1 = (char)atoi(tok1);
        s->m_field2 = (char)atoi(tok2);
        s->m_string = tok3;
        s->m_ushort = (unsigned short)atoi(tok4);
        return 1;
    }
    return 0;
}

void CServerConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 0x649b);
    if (0 < rc && rc < 0x649b)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0x39, "./log/TableError", "Server Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}

ST_ServerInfo* CServerConfig::GetServerInfo()
{
    return m_servers;
}
