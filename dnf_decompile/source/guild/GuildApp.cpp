// df_guild_r — CApplication 主流程
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildTable.h"
#include "GuildThread.h"
#include "GuildPacket.h"
#include "GuildSignal.h"
#include "GuildInit.h"
#include "GuildUdp.h"
#include "GuildPackets.h"
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
    CServerHandler* handler = Get_ServerHandler();
    m_guildManager.DBGuildAndGuildMemberSave(handler);
    puts("Guild And Guild Member DB Save Success!");
    if (m_udpThread != 0)
    {
        m_udpThread->stop();
        if (m_udpThread != 0)
        {
            delete m_udpThread;
        }
        m_udpThread = 0;
    }
    puts("Udp Thread Free Success!");
    if (m_innerMsgHandler != 0)
    {
        delete m_innerMsgHandler;
        m_innerMsgHandler = 0;
    }
    puts("UDP Handler Free Success!");
    if (m_serverHandler != 0)
    {
        delete m_serverHandler;
        m_serverHandler = 0;
    }
    puts("Game Server Handler Free Success!");
    if (m_udpHandler != 0)
    {
        ::operator delete(m_udpHandler);
        m_udpHandler = 0;
    }
    puts("UDP Handler Free Success!");
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
        try
        {
            CFrameCountHandler* f = m_frameCount.GetFrameCountInfo();
            if (f->m_field24 != 0 && 1 < (unsigned char)f->m_field24)
            {
                m_serverHandler->Process();
                if ((unsigned char)f->m_field24 == 3)
                {
                    f->SaveProcess();
                    m_guildManager.DBGuildProcess(m_serverHandler, false);
                    m_guildManager.ProcessByMinute();
                    m_userManager.ProcessByMinute();
                    m_memoryCash->ProcessLifeTimeOut();
                }
                m_guildManager.ProcessBySecond();
            }
            SwitchQueueTCP();
            SwitchQueueUDP();
            CPacketDecoder* dec = CPacketDecoderInstance();
            dec->Process();
            DNFFLib::Sleep_Ext(0, 1);
        }
        catch (CDNFException& e)
        {
            printf("%s\n", e.what());
            CMyFileLog log("Process", 0x248);
            log("./log/process", "%s\n", e.what());
        }
        catch (...)
        {
            puts("CApplication::Process() Exception Break");
            CMyFileLog log("Process", 0x24d);
            log("./log/process", "CApplication::Process() Exception Break");
        }
    }
    puts("CApplication::Process() Exit");
    CMyFileLog log("Process", 0x251);
    log("./log/process", "CApplication::Process() Exit\n");
}

void CApplication::CheckArgv(int argc, char** argv)
{
    if (argc < 3)
    {
        throw CDNFException(
            "CApplication::CheckArgv() \xbd\xc7\xc7\xe0 \xbe\xc6\xb1\xd4\xb8\xd5\xc6\xae \xbf\xc0\xb7\xf9\n");
    }
}

int CApplication::Send_Term_Signal(const std::string& name)
{
    return 0;
}

void CApplication::Send_Suspend_Signal(const std::string& name)
{
    std::string path = "./pid/" + name;
    FILE* fp = fopen(path.c_str(), "r");
    if (fp == 0)
    {
        printf("%s process id file open fail\n", path.c_str());
    }
    else
    {
        int pid = 0;
        fscanf(fp, "%d", &pid);
        if (pid < 1)
        {
            fclose(fp);
            printf("\x25\x64\xb9\xf8\xc0\xc7 \xc0\xdf\xb8\xf8\xb5\xc8 process id\n", pid);
        }
        else
        {
            if (kill(pid, 10) < 0)
            {
                fclose(fp);
                printf("\x25\x64\xb9\xf8 process id\n", pid);
            }
            else
            {
                printf("SEND SUSPEND SIGNAL TO %d\n", pid);
                fclose(fp);
            }
        }
    }
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
    m_killConfig->Clear_Table();
    m_killConfig->Load_Table("./script/kill_user_config.tbl");
    std::vector<ST_KillUSRConfig*>* vec = m_killConfig->GetInfo();
    if (!vec->empty())
    {
        for (std::vector<ST_KillUSRConfig*>::iterator it = vec->begin(); it != vec->end(); ++it)
        {
            ST_KillUSRConfig* cfg = *it;
            switch (cfg->m_field0)
            {
            case 1:
                m_guildManager.DBGuildProcess(Get_ServerHandler(), (bool)Get_ServerHandler());
                break;
            case 3:
            {
                Packet_Monitor_Send_Guild_Mail mail;
                *(unsigned int*)((char*)&mail + 0xa) = (unsigned int)cfg->m_field1;
                *(unsigned int*)((char*)&mail + 0xe) = (unsigned int)cfg->m_field2;
                memcpy((char*)&mail + 0x12,
                       "\xc5\xc2\xbd\xba\xc6\xae \xb1\xe6\xb5\xe5\xb8\xde\xc0\xcf\xc0\xd4\xb4\xcf\xb4\xd9.",
                       0x17);
                CPacketTranslater::OnMonitorSendGuildLetter(&mail);
                break;
            }
            case 4:
                m_serverHandler->Load(m_appConfig->GetServerInfoMap());
                break;
            case 7:
            {
                Packet_Monitor_Notice_Guild_Enter enter;
                *(unsigned int*)((char*)&enter + 0xa) = (unsigned int)cfg->m_field1;
                *(unsigned int*)((char*)&enter + 0xe) = (unsigned int)cfg->m_field2;
                *(unsigned int*)((char*)&enter + 0x12) = (unsigned int)cfg->m_field3;
                memcpy((char*)&enter + 0x16,
                       "\xb4\xab\xbb\xe7\xb6\xf7\x00\xb0\xde\xdf\xb8\xde\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
                       0x16);
                CPacketTranslater::OnNoticeGuildEnter(&enter);
                break;
            }
            case 8:
            {
                Packet_Monitor_Set_GuildMember_Grade_FromWeb grade;
                *(unsigned int*)((char*)&grade + 0x12) = 2;
                *(unsigned int*)((char*)&grade + 0xa) = (unsigned int)cfg->m_field1;
                *(unsigned int*)((char*)&grade + 0xe) = (unsigned int)cfg->m_field2;
                *(unsigned char*)((char*)&grade + 0x16) = (unsigned char)cfg->m_field3;
                CPacketTranslater::OnSetGuildMemberGradeFromWeb(&grade);
                break;
            }
            case 9:
            {
                Packet_Guild_Master_Delegate_FromWeb delegate;
                *(unsigned int*)((char*)&delegate + 0xa) = (unsigned int)cfg->m_field1;
                *(unsigned int*)((char*)&delegate + 0xe) = (unsigned int)cfg->m_field2;
                *(unsigned int*)((char*)&delegate + 0x12) = (unsigned int)cfg->m_field3;
                memcpy((char*)&delegate + 0x16, "\xb0\xde\xdf\xb8", 4);
                CPacketTranslater::OnGuildMasterDelegateFromWeb(&delegate);
                break;
            }
            case 0xb:
                m_powerManager.LoadPowerWarCfg("./script/power_war_event.tbl");
                break;
            case 0xc:
                m_powerManager.StartPowerWarEvent();
                {
                    Packet_Monitor_Event_Start start;
                    *(unsigned int*)((char*)&start + 0xa) = 0x1e;
                    m_serverHandler->SendAllTcpGameServer(&start);
                }
                break;
            case 0xd:
                m_powerManager.SendPowerWarScore();
                m_powerManager.EndPowerWarEvent();
                {
                    Packet_Monitor_Event_End end;
                    *(unsigned int*)((char*)&end + 0xa) = 0x1e;
                    m_serverHandler->SendAllTcpGameServer(&end);
                }
                break;
            case 0xe:
                m_tcpNetSystem.CleanTcpSendPacketQ();
                break;
            case 0xf:
                m_guildManager.CargoLock();
                break;
            case 0x10:
                m_guildManager.CargoUnlock();
                break;
            default:
                break;
            }
        }
    }
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
    CGuard<CMutex> guard(m_tcpNetSystem.Get_TcpRecvQLock());
    typedef std::queue<CTcpRecvBuffer*> TcpRecvQueue;
    IQueue<TcpRecvQueue>* q = IQueue<TcpRecvQueue>::Get();
    if (q->SwitchQueue())
    {
        CPacketDecoder* dec = CPacketDecoderInstance();
        dec->SetTCPQueue(q->GetParseQueue());
    }
}

void CApplication::SwitchQueueUDP()
{
    CGuard<CMutex> guard(&m_udpQLock);
    typedef std::queue<CUdpRecvBuffer*> UdpRecvQueue;
    CSwapQueue<UdpRecvQueue, 2>* sq = (CSwapQueue<UdpRecvQueue, 2>*)((char*)this + 0xa0);
    UdpRecvQueue* recvQueue = sq->GetRecvQ();
    if (!recvQueue->empty())
    {
        sq->SwapQ();
        m_udpThread->SetUDPQueue(sq->GetRecvQ());
        CPacketDecoder* dec = CPacketDecoderInstance();
        dec->SetUdpQueue(sq->GetParseQ());
    }
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

WongWork::CGMAccounts* CApplication::GetGMAccounts()
{
    return m_gmAccounts;
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
    m_guildManager.GuildMemLogout(group, user);
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
