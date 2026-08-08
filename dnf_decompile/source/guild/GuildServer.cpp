// df_guild_r — CServerInterface/CGameServer/CTcpGameServer/CDBServer/CServerHandler
#include <stdio.h>
#include <string.h>

#include "GuildServer.h"
#include "GuildApp.h"
#include "GuildUdp.h"
#include "GuildPacket.h"
#include "Packet_Monitor_UDP_HeartBeat.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CServerInterface::CServerInterface()
{
    m_info = 0;
    m_field8 = 0;
    m_field9 = 0;
    m_fielda = 0;
    m_sock = 0;
}

CServerInterface::CServerInterface(stServerInfo* info)
{
    m_info = info;
    m_field8 = 0;
    m_field9 = 0;
    m_fielda = 0;
    m_sock = 0;
}

CServerInterface::~CServerInterface()
{
}

void CServerInterface::SetServerInfo(stServerInfo* info)
{
    m_info = info;
}

stServerInfo* CServerInterface::GetServerInfo()
{
    return m_info;
}

void* CServerInterface::GetUdpHandler()
{
    return (void*)m_sock;
}

unsigned char CServerInterface::GetChannelNo()
{
    return m_info ? *(unsigned char*)((char*)m_info + 1) : 0;
}

unsigned char CServerInterface::GetGroupNo()
{
    return m_info ? *(unsigned char*)m_info : 0;
}

bool CServerInterface::IsValidServer()
{
    return m_info != 0 && m_info->m_group != 0xff;
}

bool CServerInterface::IsConnected()
{
    return m_field8 != 0;
}

int CServerInterface::IsHeartBeatTimeOver()
{
    return 0;
}

void CServerInterface::ResetHeartBeat()
{
}

void CServerInterface::OnDisconnect()
{
}

void CServerInterface::SendToServer(char* buf, int len)
{
}

void CServerInterface::SetConnFlag(bool flag)
{
    m_field8 = (char)flag;
}

bool CServerInterface::Initialize()
{
    int old = m_sock;
    if (old == 0)
    {
        m_sock = (int)new CUdpHandler;
        ((CUdpHandler*)m_sock)->InitClientSocket();
    }
    return old == 0;
}

bool CServerInterface::Destroy()
{
    if (m_sock != 0)
    {
        delete (CUdpHandler*)m_sock;
    }
    return true;
}

CGameServer::CGameServer()
    : CServerInterface()
{
    m_field10 = 0;
}

CGameServer::CGameServer(stServerInfo* info)
    : CServerInterface(info)
{
    m_field10 = 0;
}

CGameServer::~CGameServer()
{
}

bool CGameServer::IsValidServer()
{
    return m_info != 0 && m_info->m_group != 0xff;
}

bool CGameServer::IsConnected()
{
    return m_field8 != 0;
}

int CGameServer::IsHeartBeatTimeOver()
{
    return 0;
}

void CGameServer::ResetHeartBeat()
{
}

void CGameServer::OnDisconnect()
{
}

void CGameServer::SendToServer(char* buf, int len)
{
}

void CGameServer::SetConnFlag(bool flag)
{
    m_field8 = (char)flag;
}

bool CGameServer::Initialize()
{
    return CServerInterface::Initialize();
}

bool CGameServer::Destroy()
{
    return CServerInterface::Destroy();
}

int CGameServer::GetSocket()
{
    return m_field10;
}

void CGameServer::SetSocket(unsigned int sock)
{
    m_field10 = (int)sock;
}

CTcpGameServer::CTcpGameServer()
{
    m_info = 0;
    m_field8 = 0;
}

CTcpGameServer::~CTcpGameServer()
{
}

void CTcpGameServer::Init(unsigned int group, CTcpNetSystem* net)
{
    *(unsigned int*)m_info = group;
    *(CTcpNetSystem**)((char*)m_info + 4) = net;
}

void CTcpGameServer::SendToGameServer(char* buf)
{
    CTcpNetSystem* net = *(CTcpNetSystem**)((char*)m_info + 4);
    if (net != 0)
    {
        net->PushTcpSendPacketQ(buf);
    }
}

unsigned char CTcpGameServer::GetChannelNo()
{
    return m_field8;
}

void CTcpGameServer::SetChannelNo(unsigned char channel)
{
    m_field8 = (char)channel;
}

bool CTcpGameServer::IsValidServer()
{
    return m_info != 0 && *(unsigned int*)m_info != 0;
}

char* CTcpGameServer::makePacketHeader(unsigned short id, unsigned short size)
{
    return 0;
}

CDBServer::CDBServer()
    : CServerInterface()
{
}

CDBServer::CDBServer(stServerInfo* info)
    : CServerInterface(info)
{
}

CDBServer::~CDBServer()
{
}

CManagerServer::CManagerServer()
    : CServerInterface()
{
}

CManagerServer::CManagerServer(stServerInfo* info)
    : CServerInterface(info)
{
}

CManagerServer::~CManagerServer()
{
}

CMonitorServer::CMonitorServer()
    : CServerInterface()
{
}

CMonitorServer::CMonitorServer(stServerInfo* info)
    : CServerInterface(info)
{
}

CMonitorServer::~CMonitorServer()
{
}

bool CDBServer::Initialize()
{
    return CServerInterface::Initialize();
}

bool CDBServer::Destroy()
{
    return CServerInterface::Destroy();
}

bool CManagerServer::Initialize()
{
    return CServerInterface::Initialize();
}

bool CManagerServer::Destroy()
{
    return CServerInterface::Destroy();
}

void CManagerServer::SendHeartBeat(int group)
{
    CUdpHandler* udp = (CUdpHandler*)GetUdpHandler();
    if (udp != 0)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        *(unsigned char*)((char*)&pkt + 0xa) = (unsigned char)group;
        udp->SendToServer((char*)&pkt, 0xb, m_info->m_port, m_info->m_name);
    }
}

bool CMonitorServer::Initialize()
{
    return CServerInterface::Initialize();
}

bool CMonitorServer::Destroy()
{
    return CServerInterface::Destroy();
}

void CMonitorServer::SendHeartBeat(int group)
{
    CUdpHandler* udp = (CUdpHandler*)GetUdpHandler();
    if (udp != 0)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        *(unsigned char*)((char*)&pkt + 0xa) = (unsigned char)group;
        udp->SendToServer((char*)&pkt, 0xb, m_info->m_port, m_info->m_name);
    }
}

CTcpDBServer::CTcpDBServer()
{
    m_ip = std::string();
    m_port = 0;
    m_sock = -1;
    m_net = 0;
    m_guildMgr = 0;
}

CTcpDBServer::~CTcpDBServer()
{
}

void CTcpDBServer::Init(CTcpNetSystem* net, CGuildManager* gm)
{
    m_net = net;
    m_guildMgr = gm;
}

void CTcpDBServer::SetIP(const std::string& ip)
{
    m_ip = ip;
}

void CTcpDBServer::SetIP(std::string ip)
{
    m_ip = ip;
}

void CTcpDBServer::SetPort(unsigned short port)
{
    m_port = port;
}

void CTcpDBServer::SendHeartbeat()
{
}

void CTcpDBServer::SendToServer(char* buf)
{
}

bool CTcpDBServer::IsValidServer()
{
    return m_sock != -1 && m_net != 0;
}

char* CTcpDBServer::GetIP()
{
    return 0;
}

unsigned short CTcpDBServer::GetPort()
{
    return m_port;
}

int* CTcpDBServer::GetSockRef()
{
    return &m_sock;
}

int CTcpDBServer::GetSock()
{
    return m_sock;
}

void CTcpDBServer::Clear()
{
    m_net = 0;
    m_guildMgr = 0;
    m_sock = -1;
    m_port = 0;
    m_ip.clear();
}

char* CTcpDBServer::makePacketHeader(unsigned short id, unsigned short size)
{
    if (m_net == 0)
    {
        return 0;
    }
    char* buf = (char*)m_net->Acquire_TcpSendBuffer(0x1000);
    if (buf == 0)
    {
        return 0;
    }
    *(unsigned short*)(buf + 0) = id;
    *(unsigned short*)(buf + 2) = size;
    *(int*)(buf + 6) = m_sock;
    return buf;
}

void CTcpDBServer::SendLogin()
{
    char* buf = makePacketHeader(0x1068, 0xb);
    if (buf != 0)
    {
        buf[10] = 9;
        SendToServer(buf);
    }
}

void CTcpDBServer::SendLogout()
{
    char* buf = makePacketHeader(0x1069, 0xb);
    if (buf != 0)
    {
        buf[10] = 9;
        SendToServer(buf);
    }
}

void CTcpDBServer::Connected()
{
    SendLogin();
    if (m_guildMgr != 0)
    {
        m_guildMgr->CargoUnlock();
    }
    CMyFileLog log("Connected", 0x121);
    log("./log/GuildCargo", "TCP DBMW(%s,%d) CONNECTED! GUILD CARGO ACTIVE!",
        m_ip.c_str(), (unsigned int)m_port);
}

void CTcpDBServer::DisConnected()
{
    m_sock = -1;
    if (m_guildMgr != 0)
    {
        m_guildMgr->CargoLock();
    }
}

CServerHandler::CServerHandler()
{
    m_dbServer = 0;
    m_managerServer = 0;
    m_app = 0;
    m_heartbeat = 0;
    m_field58 = 0;
}

CServerHandler::~CServerHandler()
{
    if (m_dbServer != 0)
    {
        delete m_dbServer;
        m_dbServer = 0;
    }
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
}

void CServerHandler::Load(std::multimap<unsigned int, stServerInfo*>* map)
{
}

void CServerHandler::Attach(CApplication* app)
{
    m_app = app;
}

void CServerHandler::Process(CApplication* app)
{
}

CGameServer* CServerHandler::GetGameServer(unsigned int group)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(group);
    return it == m_gameServers.end() ? 0 : it->second;
}

CTcpGameServer* CServerHandler::GetTcpGameServer(unsigned int group)
{
    std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.find(group);
    return it == m_tcpGameServers.end() ? 0 : it->second;
}

CDBServer* CServerHandler::GetDBServer()
{
    return m_dbServer;
}

CManagerServer* CServerHandler::GetManagerServer()
{
    return m_managerServer;
}

CMonitorServer* CServerHandler::GetMonitorServer()
{
    return 0;
}

CTcpDBServer* CServerHandler::GetTcpDBServer()
{
    return &m_tcpDbServer;
}

bool CServerHandler::IsConnectedDBServer()
{
    return m_dbServer != 0 && m_dbServer->IsConnected();
}

void CServerHandler::ResetDBHeartBeat()
{
}

void CServerHandler::ResetHeartBeat(unsigned char type)
{
}

void CServerHandler::SetConnectFlag(unsigned char type, bool flag)
{
}

void CServerHandler::SetDBConnectFlag(bool flag)
{
    if (m_dbServer != 0)
    {
        m_dbServer->SetConnFlag(flag);
    }
}

void CServerHandler::SetManagerConnectFlag(bool flag)
{
    if (m_managerServer != 0)
    {
        m_managerServer->SetConnFlag(flag);
    }
}

unsigned char CServerHandler::GetServerGroupNo()
{
    return m_app ? m_app->Get_ServerGroup() : 0;
}

void CServerHandler::SendToDB(PacketHeader* pkt)
{
}

void CServerHandler::TcpSendToDB(PacketHeader* pkt)
{
    m_tcpDbServer.SendToServer((char*)pkt);
}

void CServerHandler::SendToManager(PacketHeader* pkt)
{
}

void CServerHandler::SendToGameServer(unsigned char group, PacketHeader* pkt)
{
}

void CServerHandler::SendAllTcpGameServer(PacketHeader* pkt)
{
}

void CServerHandler::SendAllUdpGameServer(char* buf, int len)
{
}

void CServerHandler::SendTcpGameServerFirst(PacketHeader* pkt)
{
}

void CServerHandler::RegistDBServer(CDBServer* server)
{
    m_dbServer = server;
}

void CServerHandler::UnregistDBServer()
{
    if (m_dbServer != 0)
    {
        delete m_dbServer;
        m_dbServer = 0;
    }
}

void CServerHandler::RegistManagerServer(CManagerServer* server)
{
    m_managerServer = server;
}

void CServerHandler::UnregistManagerServer()
{
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
}

void CServerHandler::RegistMonitorServer(CMonitorServer* server)
{
}

void CServerHandler::UnregistMonitorServer()
{
}

void CServerHandler::RegistGameServer(stServerInfo* info)
{
}

void CServerHandler::UnregistGameServer(unsigned int group)
{
}

void CServerHandler::CreateTcpGameServer(unsigned int group)
{
}

void CServerHandler::DeleteTcpGameServer(unsigned int group)
{
}

void CServerHandler::SetGameServerIpPort(unsigned char group, unsigned short port,
                                         unsigned short tcpPort)
{
}

void CServerHandler::QueryGuild(unsigned int group, unsigned int guildId)
{
}

void CServerHandler::QueryGuildMember(unsigned char group, unsigned int characNo)
{
}

void CServerHandler::SendDBMWConnectionCheck()
{
}
