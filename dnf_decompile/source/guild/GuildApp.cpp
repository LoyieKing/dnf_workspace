// df_guild_r — CApplication 主流程
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildTable.h"
#include "GuildThread.h"
#include "GuildPacket.h"
#include "GuildSignal.h"
#include "GuildInit.h"
#include "GuildUdp.h"
#include "Packet_DB_Query_On_Guild_Booting.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CAppBase::CAppBase()
{
}

CAppBase::~CAppBase()
{
}

void CAppBase::Process()
{
}

void CAppBase::Create(int argc, char** argv)
{
    Init(argc, argv);
    Load(argc, argv);
    Process();
}

void CAppBase::Clear()
{
}

CApplication::CApplication()
{
    m_loaded = false;
    m_reserved8 = 0;
    m_appInit = 0;
    m_appConfig = 0;
    m_serverConfig = 0;
    m_killConfig = 0;
    m_serverHandler = 0;
    m_innerMsgHandler = 0;
    memset(m_swapQueue, 0, sizeof(m_swapQueue));
    m_udpHandler = 0;
    m_udpThread = 0;
    m_memoryCash = 0;
}

CApplication::~CApplication()
{
    puts("Application Stop!");
}

void CApplication::Init(int argc, char** argv)
{
    ShowLogo();
    g_ServerString_.StrLoading();
    CheckArgv(argc, argv);
    CSignalTranslator* st = CSignalTranslatorInstance();
    st->init(this);
    AttachAppInitor(argv);
    if (m_appInit != 0)
    {
        m_appInit->Init(this, argc, argv);
    }
    puts("Application Init() Success!");
}

void CApplication::Load(int argc, char** argv)
{
    m_memoryCash = new CMemoryCashManager;
    m_memoryCash->Init(this);
    m_guildManager.Init(this);
    m_userManager.Init(this);
    if (m_appConfig != 0)
    {
        m_appConfig->Load_Table(argv[1]);
    }
    m_powerManager.InitPowerManager((char*)"./script/power_war_event.tbl", this);
    if (m_appConfig != 0)
    {
        m_frameCount.InitFrameCountInfo(this, (unsigned int)this,
                                        m_appConfig->Get_FrameCountValue());
    }
    m_udpHandler = new CUdpHandler;
    if (m_appConfig != 0)
    {
        unsigned short port = m_appConfig->Get_ServerUdpPort();
        if (m_udpHandler->InitServerSocket(port) == -1)
        {
            throw CDNFException("CApplication::Load() Init UDP Server Socket Exception Break!");
        }
    }
    m_serverHandler = new CServerHandler;
    m_serverHandler->Attach(this);
    if (m_appConfig != 0)
    {
        m_serverHandler->Load(m_appConfig->GetServerInfoMap());
    }
    CPacketTranslater::attach(this);
    m_innerMsgHandler = new CInnerMsgHandler;
    CPacketDecoderInstance()->Attach(this);
    m_udpThread = new CUdpNetworkThread;
    m_udpThread->attach(this);
    if (!((CThreadInterface*)m_udpThread)->begin())
    {
        throw CDNFException("CApplication::Load() UdpThread begin Fail!");
    }
    if (m_appConfig != 0)
    {
        m_tcpNetSystem.Init(m_appConfig->Get_ServerTcpPort());
    }
    if (m_appConfig != 0)
    {
        const char* dbIp = m_appConfig->Get_DBMWTcpIP();
        unsigned short dbPort = m_appConfig->Get_DBMWTcpPort();
        CTcpDBServer* db = m_serverHandler->GetTcpDBServer();
        if (*dbIp == '\0' || dbPort == 0)
        {
            puts("Application TCP cfg empty!");
            CMyFileLog log("Load", 0x180);
            log("./log/TcpServer", "Application TCP cfg empty!");
        }
        else
        {
            db->Init(&m_tcpNetSystem, &m_guildManager);
            db->SetIP(std::string(dbIp));
            db->SetPort(dbPort);
            int sock = 0;
            if (m_tcpNetSystem.OpenTcpService(sock, dbIp, dbPort))
            {
                printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                       db->GetSock(), dbIp, (unsigned int)dbPort);
                CMyFileLog log("Load", 0x179);
                log("./log/TcpServer",
                    "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                    db->GetSock(), dbIp, (unsigned int)dbPort);
            }
            else
            {
                printf("Application OpenTcpService(%s, %d) Fail!\n", dbIp,
                       (unsigned int)dbPort);
                CMyFileLog log("Load", 0x175);
                log("./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                    dbIp, (unsigned int)dbPort, db->GetSock());
            }
        }
    }
    Packet_DB_Query_On_Guild_Booting pkt;
    *(unsigned char*)((char*)&pkt + 0xa) = Get_ServerGroup();
    m_serverHandler->SendToDB(&pkt);
    m_powerManager.SetPowerDBFlag(2);
    typedef std::queue<CTcpRecvBuffer*> TcpRecvQueue;
    IQueue<TcpRecvQueue>::Get()->InitQueue(
        (TcpRecvQueue*)m_tcpNetSystem.Get_TcpSwapQPacket(),
        (TcpRecvQueue*)((char*)m_tcpNetSystem.Get_TcpSwapQPacket() + 0x2c));
    m_loaded = true;
    puts("Application Load() Success!");
}

void CApplication::Free()
{
    puts("Application Free Start!");
    if (m_serverHandler != 0)
    {
        m_guildManager.DBGuildAndGuildMemberSave(m_serverHandler);
        puts("Guild And Guild Member DB Save Success!");
    }
    if (m_udpHandler != 0)
    {
        delete m_udpHandler;
        m_udpHandler = 0;
    }
    puts("UDP Handler Free Success!");
    if (m_serverHandler != 0)
    {
        delete m_serverHandler;
        m_serverHandler = 0;
    }
    puts("Game Server Handler Free Success!");
    CSignalTranslator* st = CSignalTranslatorInstance();
    st->clear();
    puts("Signal Translater Free Success!");
    if (m_appConfig != 0)
    {
        delete m_appConfig;
        m_appConfig = 0;
    }
    puts("Application Config Free Success!");
    if (m_appInit != 0)
    {
        m_appInit->Free(this);
        delete m_appInit;
        m_appInit = 0;
    }
    puts("Application Initor Free Success!");
}

void CApplication::Process()
{
    while (m_loaded)
    {
        if (m_serverHandler != 0)
        {
            m_serverHandler->Process(this);
        }
        SwitchQueueTCP();
        SwitchQueueUDP();
        CPacketDecoder* dec = CPacketDecoderInstance();
        dec->Process();
        DNFFLib::Sleep_Ext(0, 1);
    }
    puts("CApplication::Process() Exit");
}

void CApplication::CheckArgv(int argc, char** argv)
{
}

int CApplication::Send_Term_Signal(const std::string& name)
{
    return 0;
}

void CApplication::Send_Suspend_Signal(const std::string& name)
{
}

void CApplication::App_Stop()
{
    m_loaded = false;
}

void CApplication::SendTestPacket_1()
{
}

void CApplication::SendTestPacket_2()
{
}

void CApplication::TranslateSignal()
{
}

void CApplication::AttachAppInitor(char** argv)
{
    if (argv[2] == 0)
    {
        throw CDNFException("CApplication::AttachAppInitor() invalid argv[2]!");
    }
    if (strcmp(argv[2], "start") == 0 || strcmp(argv[2], "nofork") == 0)
    {
        m_appInit = new CAppStartInit;
        return;
    }
    if (strcmp(argv[2], "stop") == 0)
    {
        m_appInit = new CAppStopInit;
        return;
    }
    throw CDNFException("CApplication::AttachAppInitor() invalid mode!");
}

unsigned char CApplication::Get_ServerGroup()
{
    return m_appConfig ? m_appConfig->Get_ServerGroup() : 0;
}

CServerHandler* CApplication::Get_ServerHandler()
{
    return m_serverHandler;
}

CUdpHandler* CApplication::Get_UdpHandler()
{
    return m_udpHandler;
}

CMutex* CApplication::Get_UdpQLock()
{
    return &m_udpQLock;
}

CMutex* CApplication::Get_UdpBLock()
{
    return &m_udpBLock;
}

void* CApplication::Get_UdpPacketRecvQ()
{
    return (void*)m_swapQueue;
}

void* CApplication::Get_UdpPacketParseQ()
{
    return (void*)(m_swapQueue + 0x2c);
}

void CApplication::SwitchQueueTCP()
{
}

void CApplication::SwitchQueueUDP()
{
}

CTcpNetSystem* CApplication::Get_TcpNetSystem()
{
    return &m_tcpNetSystem;
}

CGuildManager* CApplication::Get_GuildManager()
{
    return &m_guildManager;
}

CPowerManager* CApplication::GetPowerManager()
{
    return &m_powerManager;
}

CUserManager* CApplication::Get_UserManager()
{
    return &m_userManager;
}

CMemoryCashManager* CApplication::Get_MemoryCashManager()
{
    return m_memoryCash;
}

void* CApplication::GetGMAccounts()
{
    return 0;
}

CGameServer* CApplication::FindGameServer(int group)
{
    return m_serverHandler ? m_serverHandler->GetGameServer((unsigned int)group) : 0;
}

CTcpGameServer* CApplication::FindTcpGameServer(unsigned int group)
{
    return m_serverHandler ? m_serverHandler->GetTcpGameServer(group) : 0;
}

void CApplication::OnGameServerDown(CGameServer* server)
{
}

void CApplication::OnTcpGameServerDown(CTcpGameServer* server)
{
}

void CApplication::Call_DeleteGuildMember(unsigned int group, CUser* user)
{
}

void ShowLogo()
{
    putchar(10);
    puts("**********************************************************");
    puts("* +---   +-+ +  +----         DUNGEON & FIGHTER          *");
    puts("* |   |  | | |  |                                        *");
    puts("* |   |  | | |  +----                                    *");
    puts("* |   |  | | |  |      Open Beta Test on 2005.08.10~     *");
    puts("* +---   + +-+  |      Copyright(c) 2004,2005 Neople Co. *");
    puts("**********************************************************");
    printf("[!] Service Date\n");
}
