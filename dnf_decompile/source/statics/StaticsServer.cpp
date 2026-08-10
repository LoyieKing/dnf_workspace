// df_statics_r — CGameServer/CDBServer/CManagerServer/CServerHandler/CServerConfig
#include <stdio.h>

#include "StaticsServer.h"
#include "StaticsApp.h"
#include "StaticsUdp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"
#include "PacketHeader.h"
#include "Packet_Monitor_UDP_HeartBeat.h"

CGameServer::CGameServer() : m_group(0xff)
{
    m_port = 0;
    m_connectFlag = 0;
    m_heartBeatCount = 0x14;
    m_heartBeatOver = 0;
    m_channelNo = 0;
    m_udp = 0;
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
        m_heartBeatCount = 0x14;
    }
    return 0;
}

void CGameServer::ResetHeartBeat()
{
    m_heartBeatCount = 0x14;
    m_heartBeatOver = 0;
}

void CGameServer::SendToGameServer(char* buf, int len)
{
    if (m_group != 0xff && m_udp != 0)
    {
        m_udp->SendToServer(buf, len, m_port, m_name.c_str());
    }
}

void CGameServer::OnDisconnect()
{
    m_connectFlag = 0;
    m_heartBeatCount = 0x14;
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

CDBServer::CDBServer() : m_id(0xff)
{
    m_port = 0;
    m_connectFlag = 0;
    m_heartBeatCount = 0x14;
    m_heartBeatOver = 0;
    m_reserved = 0;
    m_udp = 0;
}

CDBServer::~CDBServer()
{
}

void CDBServer::Init(unsigned char id, std::string& name, unsigned short port,
                     unsigned char param)
{
    m_id = id;
    m_name = name;
    m_port = port;
    m_udp = new CUdpHandler;
    m_udp->InitClientSocket();
    m_reserved = param;
}

bool CDBServer::IsValidServer()
{
    if (m_id == 0xff)
    {
        return false;
    }
    return true;
}

int CDBServer::IsHeartBeatTimeOver()
{
    m_heartBeatCount = (char)(m_heartBeatCount - 1);
    if (m_heartBeatCount == 0)
    {
        m_heartBeatOver = (char)(m_heartBeatOver + 1);
        if (0x14 < m_heartBeatOver)
        {
            return 1;
        }
        m_heartBeatCount = 0x14;
    }
    return 0;
}

void CDBServer::ResetHeartBeat()
{
    m_heartBeatCount = 0x14;
    m_heartBeatOver = 0;
}

void CDBServer::SendToServer(char* buf, int len)
{
    if (m_udp != 0)
    {
        m_udp->SendToServer(buf, len, m_port, m_name.c_str());
    }
}

void CDBServer::OnDisconnect()
{
    m_connectFlag = 0;
    m_heartBeatCount = 0x14;
    m_heartBeatOver = 0;
}

CManagerServer::CManagerServer() : m_id(0xff)
{
    m_port = 0;
    m_connectFlag = 0;
    m_param = 0;
    m_udp = 0;
}

CManagerServer::~CManagerServer()
{
}

void CManagerServer::Init(unsigned char id, std::string& name, unsigned short port,
                          unsigned char param)
{
    m_id = id;
    m_name = name;
    m_port = port;
    m_udp = new CUdpHandler;
    m_udp->InitClientSocket();
    m_param = param;
}

bool CManagerServer::IsValidServer()
{
    if (m_id == 0xff)
    {
        return false;
    }
    return true;
}

int CManagerServer::SendToServer(char* buf, int len)
{
    if (m_udp != 0)
    {
        return m_udp->SendToServer(buf, len, m_port, m_name.c_str());
    }
    return 0;
}

void CManagerServer::OnDisconnect()
{
    m_connectFlag = 0;
}

void CManagerServer::SendHeartBeat(int group)
{
    if (m_udp != 0)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        char g = (char)group;
        m_udp->SendToServer((char*)&pkt, 0xb, m_port, m_name.c_str());
    }
}

void CDBServer::SetConnFlag(bool flag)
{
    m_connectFlag = flag;
}

char CDBServer::IsConnected()
{
    return m_connectFlag;
}

void CManagerServer::SetConnFlag(bool flag)
{
    m_connectFlag = flag;
}

CServerHandler::CServerHandler() : m_app(0)
{
    m_reserved2 = 0;
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
    for (int i = 0; i < 0xff; i++)
    {
        if (info[i].m_field0 == 1)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break!");
            }
            m_servers[index].Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
        if (info[i].m_field0 == 2)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff || index != 0xc8)
            {
                printf("*******%d", index);
                throw CDNFException("CServerHandler::Load() DB2 Server Table Exception Break!");
            }
            m_dbServer.Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
        if (info[i].m_field0 == 4)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff || index != 0xca)
            {
                throw CDNFException("CServerHandler::Load() Manager Server Table Exception Break!");
            }
            m_mgrServer.Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
    }
}

void CServerHandler::Process()
{
    int tick = m_reserved2;
    m_reserved2 = tick + 1;
    if (3 < tick)
    {
        m_mgrServer.SendHeartBeat(GetServerGroupNo() & 0xff);
        m_reserved2 = 0;
    }
    CGameServer* p = m_servers;
    int left = 0xff;
    while (left != 0)
    {
        left--;
        if (p->IsValidServer())
        {
            if (p->IsConnected())
            {
                if (p->IsHeartBeatTimeOver())
                {
                    p->OnDisconnect();
                    DNF_LOG_SCOPE_LINE(0x89, "./log/GameServer",
                        "CServerHandler::Process() Index : %d!\tCall User Info!\n", 0x100 - left);
                }
            }
        }
        p++;
    }
    if (m_dbServer.IsValidServer())
    {
        if (m_dbServer.IsConnected())
        {
            if (m_dbServer.IsHeartBeatTimeOver())
            {
                m_dbServer.OnDisconnect();
                DNF_LOG_SCOPE_LINE(0x9e, "./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
            }
        }
    }
}

void CServerHandler::ResetHeartBeat(unsigned char index)
{
    if (index != 0xff && m_servers[index].IsValidServer())
    {
        m_servers[index].ResetHeartBeat();
    }
    else
    {
        register int idx = index;
        DNF_LOG_SCOPE_LINE(0xb4,"./log/GameServer", "CServerHandler::ResetHeartBeat\tGame Server Index Over Index : %d!\n",
            idx);
    }
}

char CServerHandler::IsConnectedGameServer(unsigned char index)
{
    if (index != 0xff && m_servers[index].IsValidServer())
    {
        return m_servers[index].IsConnected();
    }
    register int idx = index;
    DNF_LOG_SCOPE_LINE(0xe9,"./log/GameServer", "CServerHandler::IsConnectedGameServer\tGame Server Index Over Index : %d!\n",
        idx);
    return 0;
}

void CServerHandler::SetConnectFlag(unsigned char index, bool flag)
{
    if (index != 0xff && m_servers[index].IsValidServer())
    {
        m_servers[index].SetConnFlag(flag);
    }
    else
    {
        register int idx = index;
        DNF_LOG_SCOPE_LINE(0x125,"./log/GameServer", "CServerHandler::SetConnectFlag\tGame Server Index Over Index : %d!\n",
            idx);
    }
}

CGameServer* CServerHandler::GetGameServer(int idx)
{
    if (idx < 0xff && m_servers[idx].IsValidServer())
    {
        return &m_servers[idx];
    }
    DNF_LOG_SCOPE_LINE(0x145,"./log/GameServer", "CServerHandler::GetGameServer\tGame Server Index Over Index : %d!\n",
        idx);
    return 0;
}

void CServerHandler::SendToGameServer(unsigned char index, PacketHeader* header)
{
    CGameServer* gs = GetGameServer(index);
    if (gs != 0)
    {
        gs->SendToGameServer((char*)header, header->packetSize);
    }
}

void CServerHandler::SendAllToGameServer(char* buf, int len)
{
    CGameServer* p = m_servers;
    int left = 0xff;
    while (left-- != 0)
    {
        if (p->IsValidServer())
        {
            p->SendToGameServer(buf, len);
        }
        p++;
    }
}

void CServerHandler::SendToDB(PacketHeader* header)
{
    m_dbServer.SendToServer((char*)header, header->packetSize);
}

void CServerHandler::SendToManager(PacketHeader* header)
{
    m_mgrServer.SendToServer((char*)header, header->packetSize);
}

void CServerHandler::SetDBConnectFlag(bool flag)
{
    m_dbServer.SetConnFlag(flag);
}

void CServerHandler::SetManagerConnectFlag(bool flag)
{
    m_mgrServer.SetConnFlag(flag);
}

void CServerHandler::ResetDBHeartBeat()
{
    m_dbServer.ResetHeartBeat();
}

char CServerHandler::IsConnectedDBServer()
{
    return m_dbServer.IsConnected();
}

unsigned char CServerHandler::GetServerGroupNo()
{
    return m_app->Get_ServerGroup();
}

void CServerHandler::SetGameServerIpPort(unsigned char id, unsigned int ip,
                                         unsigned short port)
{
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
    int n;  // 死局部：与 ORIG 栈布局对齐（tok 槽位 -0x24..-0x14）
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 5) == 5)
    {
        if (idx < 0xff)
        {
            ST_ServerInfo* s = &m_servers[idx];
            s->m_field0 = (char)atoi(tok0);
            s->m_field1 = (char)atoi(tok1);
            s->m_field2 = (char)atoi(tok2);
            s->m_string = tok3;
            s->m_ushort = (unsigned short)atoi(tok4);
            return 1;
        }
    }
    return 0;
}

void CServerConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 0xff);
    if (0 < rc && rc < 0xff)
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
