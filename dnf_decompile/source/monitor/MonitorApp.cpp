#include "MonitorApp.h"

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <stdio.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

// ---- CAppBase ----
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
}

void CAppBase::Clear()
{
    void (**vtab)(void*) = (void(**)(void*))(*(void**)this);
    vtab[5](this);
}

// ---- CApplication ----
CApplication::CApplication()
{
    m_loaded = false;
    m_reserved8 = 0;
    m_appInit = 0;
    m_appConfig = 0;
    m_field90 = 0;
    m_memberConfig = 0;
    m_memberExpTbl = 0;
    m_serverHandler = 0;
    m_serverHandler2 = 0;
    m_innerMsgHandler = 0;
    m_udpHandler = 0;
    m_udpThread = 0;
    m_taskScheduler = 0;
    m_field2cc = 0;
    m_memoryCash = 0;
    m_towerRank = 0;
    m_itemLimitMgr = 0;
    m_ipCounter = 0;
    m_field330 = 0;
    m_periodicMsg = 0;
    m_limitNpc = 0;
    m_field388 = 0;
    SetMiniCraneRandomSeed();
}

CApplication::~CApplication()
{
    puts("Application Stop!");
}

void CApplication::Init(int argc, char** argv)
{
    ShowLogo();
    CheckArgv(argc, argv);
    AttachAppInitor(argv);
    m_field31c = 0;
    m_field320 = 0;
    puts("Application Init() Success!");
}

void CApplication::Load(int argc, char** argv)
{
    try
    {
        m_memoryCash = new CMemoryCashManager;
        m_memoryCash->Init(this);
        m_userManager.Init(this);

        m_memberConfig->Load_Table("./script/member_cnt_config.tbl");
        m_memberExpTbl->Load_Table("./script/member_exp.tbl");
        m_memberManager.Init(this, &m_userManager, m_memberConfig, m_memberExpTbl);

        m_appConfig->Load_Table(argv[1]);
        m_frameCount.InitFrameCountInfo(this, m_appConfig->Get_FrameCountValue(), 0x3e8);

        m_udpHandler = new CUdpHandler;
        if (m_udpHandler->InitServerSocket(m_appConfig->Get_ServerUdpPort()) == -1)
        {
            throw CDNFException("CApplication::Load() Init Server Udp Socket Exception Break!");
        }

        m_serverHandler2 = new CServerHandler;
        m_serverHandler2->Attach(this);
        m_serverHandler2->Load(m_appConfig->GetServerInfoMap());
        CPacketTranslater::attach(this);
        m_innerMsgHandler = new CInnerMsgHandler;
        CPacketDecoderInstance()->Attach(this);
        m_udpThread = new CUdpNetworkThread;
        m_udpThread->attach(this);
        if (!m_udpThread->begin())
        {
            throw;
        }

        m_tcpNetSystem.Init(m_appConfig->Get_ServerTcpPort());
        {
            CMyFileLog log("Load", 0x1ba);
            log("./log/Tcp", "App Load : Network system (%x)", &m_tcpNetSystem);
        }

        {
            const char* mgrIp = m_appConfig->Get_ManagerTcpIP();
            unsigned short mgrPort = m_appConfig->Get_ManagerTcpPort();
            CTcpManagerServer* mgr = (CTcpManagerServer*)m_serverHandler2->GetTcpManagerServer();
            if (*mgrIp == '\0' || mgrPort == 0)
            {
                puts("Application TCP cfg empty!");
                CMyFileLog log("Load", 0x1e4);
                log("./log/TcpServer", "Application TCP cfg empty!");
            }
            else
            {
                mgr->Init(&m_tcpNetSystem);
                mgr->SetIP(mgrIp);
                mgr->SetPort(mgrPort);
                if (m_tcpNetSystem.OpenTcpService(*mgr->GetSockRef(), mgrIp, mgrPort) == 1)
                {
                    CMyFileLog log("Load", 0x1dc);
                    log("./log/TcpServer", "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                        mgr->GetSock(), mgrIp, mgrPort);
                    printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                        mgr->GetSock(), mgrIp, mgrPort);
                }
                else
                {
                    printf("Application OpenTcpService(%s, %d) Fail!\n", mgrIp, mgrPort);
                    CMyFileLog log("Load", 0x1d3);
                    log("./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                        mgrIp, mgrPort, mgr->GetSock());
                }
            }
        }

        {
            const char* dbIp = m_appConfig->Get_DBMWTcpIP();
            unsigned short dbPort = m_appConfig->Get_DBMWTcpPort();
            CTcpDBServer* db = (CTcpDBServer*)m_serverHandler2->GetTcpDBServer();
            if (*dbIp == '\0' || dbPort == 0)
            {
                puts("Application TCP cfg empty!");
                CMyFileLog log("Load", 0x211);
                log("./log/TcpServer", "Application TCP cfg empty!");
            }
            else
            {
                db->Init(&m_tcpNetSystem);
                db->SetIP(dbIp);
                db->SetPort(dbPort);
                if (m_tcpNetSystem.OpenTcpService(*db->GetSockRef(), dbIp, dbPort) == 1)
                {
                    CMyFileLog log("Load", 0x209);
                    log("./log/TcpServer", "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                        db->GetSock(), dbIp, dbPort);
                    printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                        db->GetSock(), dbIp, dbPort);
                }
                else
                {
                    printf("Application OpenTcpService(%s, %d) Fail!\n", dbIp, dbPort);
                    CMyFileLog log("Load", 0x200);
                    log("./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                        dbIp, dbPort, db->GetSock());
                }
            }
        }

        srand((unsigned int)(m_appConfig->Get_ServerUdpPort() + time(0)));

        m_taskScheduler = new CTaskScheduler;
        if (time(0) <= CTask_ChristmasEvent::getEventEndTime())
        {
            unsigned int tick = CTask_ChristmasEvent::MakeEventStartTick(0);
            m_taskScheduler->AddTask(new CTask_ChristmasEvent(tick, 0));
        }
        m_taskScheduler->AddTask(new TowerOfDespairReloadAPC_Task(0, 0));

        m_itemLimitMgr = new CItemLimitEditionMgr;
        {
            Packet_Item_Limit_Edition_Load_Data_Req pkt;
            pkt.m_fieldA = 1;
            pkt.m_fieldB = Get_ServerGroup();
            pkt.m_fieldC = 0;
            m_serverHandler2->SendToDB(&pkt);
        }

        m_ipCounter = new CIPCounter;
        m_ipCounter->Init(m_serverHandler2);

        if (m_field31c == 0)
        {
            m_field31c = new CEventActionManager;
        }
        if (m_field320 == 0)
        {
            m_field320 = new COnTimeEventManager;
        }
        ((COnTimeEventManager*)m_field320)->AttachApp(this);

        m_field2cc = new WongWork::CGMAccounts;
        m_periodicMsg = new CPeriodicMessageMgr;
        {
            Packet_Load_Periodic_Message pkt;
            m_serverHandler2->SendToDB(&pkt);
        }
        m_limitNpc = new LimitNpcBuyItemManager;
        {
            LimitNpcBuyItemRequestInfo pkt;
            m_serverHandler2->SendToDB(&pkt);
        }

        m_field388 = new CollectItms;
        {
            time_t now = time(0);
            tm pt = *localtime(&now);
            m_timeSyncHour = (short)pt.tm_hour;
        }

        m_towerRank = new CTowerRank;
        m_towerRank->processReloadRanking(m_serverHandler2, true, 10000);
        m_towerRank->processReloadRanking(m_serverHandler2, true, 5);

        m_field334 = new init_accusation::CInitAccusationListMgr(*this);
        {
            bool schedule = false;
            ((init_accusation::CInitAccusationListMgr*)m_field334)->setSchedule(schedule);
        }

        m_field330 = new CLoginLogoutStatistics(*this);
        {
            typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > > TcpRecvQueue;
            IQueue<TcpRecvQueue>::Get()->InitQueue(
                m_tcpNetSystem.Get_TcpSwapQPacket()->GetRecvQ(),
                m_tcpNetSystem.Get_TcpSwapQPacket()->GetParseQ());
        }

        puts("Application Load() Success!");
        m_loaded = true;
    }
    catch (CDNFException& e)
    {
        printf("Load Exception : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("Load Exception !");
        throw;
    }
}

void CApplication::Free()
{
    puts("Application Free Start!");
    if (m_udpThread != 0)
    {
        delete m_udpThread;
        m_udpThread = 0;
    }
    puts("Udp Thread Free Success!");
    if (m_innerMsgHandler != 0)
    {
        delete m_innerMsgHandler;
        m_innerMsgHandler = 0;
    }
    puts("UDP Handler Free Success!");
    if (m_serverHandler2 != 0)
    {
        delete m_serverHandler2;
        m_serverHandler2 = 0;
    }
    puts("Game Server Handler Free Success!");
    if (m_udpHandler != 0)
    {
        ::operator delete(m_udpHandler);
        m_udpHandler = 0;
    }
    puts("UDP Handler Free Success!");
    puts("Signal Translater Free Success!");
    if (m_appConfig != 0)
    {
        delete m_appConfig;
        m_appConfig = 0;
    }
    puts("Application Config Free Success!");
    if (m_appInit != 0)
    {
        delete (CAppInit*)((char*)this + 0xc);
        m_appInit = 0;
    }
    puts("Application Initor Free Success!");
    if (m_taskScheduler != 0)
    {
        delete m_taskScheduler;
        m_taskScheduler = 0;
    }
    if (m_field2cc != 0)
    {
        delete (WongWork::CGMAccounts*)m_field2cc;
        m_field2cc = 0;
    }
    if (m_memoryCash != 0)
    {
        delete m_memoryCash;
        m_memoryCash = 0;
    }
    if (m_towerRank != 0)
    {
        delete m_towerRank;
        m_towerRank = 0;
    }
    if (m_itemLimitMgr != 0)
    {
        delete m_itemLimitMgr;
        m_itemLimitMgr = 0;
    }
    if (m_ipCounter != 0)
    {
        delete m_ipCounter;
        m_ipCounter = 0;
    }
    if (m_field334 != 0)
    {
        ::operator delete(m_field334);
        m_field334 = 0;
    }
    if (m_periodicMsg != 0)
    {
        delete m_periodicMsg;
        m_periodicMsg = 0;
    }
    if (m_limitNpc != 0)
    {
        delete m_limitNpc;
        m_limitNpc = 0;
    }
    if (m_field388 != 0)
    {
        ::operator delete(m_field388);
        m_field388 = 0;
    }
    if (m_field330 != 0)
    {
        delete (CLoginLogoutStatistics*)m_field330;
        m_field330 = 0;
    }
    puts("Application Exit!");
}

void CApplication::Process()
{
    while (m_loaded)
    {
        try
        {
            CFrameCountHandler* frameInfo = m_frameCount.GetFrameCountInfo();
            if (frameInfo->m_field24 != 0 && 1 < frameInfo->m_field24)
            {
                m_serverHandler2->Process();
                if (2 < frameInfo->m_field24)
                {
                    m_memberManager.MemberRegisterFlagProcess();
                    m_userManager.MemberEnterProcess();
                    m_frameCount.SaveProcess();
                    m_userManager.ProcessByMinute();
                    m_memoryCash->ProcessLifeTimeOut();
                    m_memoryCash->ProcessCashDataPrint();
                    m_towerRank->processReloadRanking(m_serverHandler2, false, 10000);
                    m_towerRank->processReloadRanking(m_serverHandler2, false, 5);
                    m_periodicMsg->OnProcess(m_serverHandler2);
                    ((CLoginLogoutStatistics*)m_field330)->ProcessByMinute();
                    ProcessTimeSync();
                    UpdateCollectItems();
                    if (frameInfo->m_field24 == 4)
                    {
                        UpdateMiniCraneSeed();
                    }
                }
            }
            getItemLimitEditionMgr()->processScheduledJob(this, false);
            SwitchQueueTCP();
            SwitchQueueUDP();
            CPacketDecoderInstance()->Process();
            m_ipCounter->Proc((unsigned int)time(0));
            m_taskScheduler->ProcessTask((unsigned int)time(0));
            DNFFLib::Sleep_Ext(0, 1);
        }
        catch (CDNFException& e)
        {
            printf("CApplication::Process() Exception Break : %s\n", e.what());
            CMyFileLog log("Process", 0x413);
            log("./log/process", "CApplication::Process() Exception Break : %s", e.what());
            throw;
        }
        catch (...)
        {
            puts("CApplication::Process() Exception Break");
            CMyFileLog log("Process", 0x418);
            log("./log/process", "CApplication::Process() Exception Break\n");
            throw;
        }
    }
    puts("CApplication::Process() Exit");
    CMyFileLog log("Process", 0x41c);
    log("./log/process", "CApplication::Process() Exit\n");
}

void CApplication::SwitchQueueTCP()
{
}

void CApplication::SwitchQueueUDP()
{
}

CItemLimitEditionMgr* CApplication::getItemLimitEditionMgr()
{
    return m_itemLimitMgr;
}

CTcpNetSystem* CApplication::Get_TcpNetSystem()
{
    return &m_tcpNetSystem;
}

void CApplication::OnGameServerDown(CGameServer* server)
{
}

void* CApplication::Get_UdpPacketRecvQ()
{
    return 0;
}

CUdpHandler* CApplication::Get_UdpHandler()
{
    return m_udpHandler;
}

void* CApplication::Get_UdpQLock()
{
    return 0;
}

void* CApplication::Get_UdpBLock()
{
    return 0;
}

void CApplication::CheckArgv(int argc, char** argv)
{
    if (argc < 3)
    {
        throw CDNFException("CApplication::CheckArgv() Argv Count Exception Break!");
    }
}

void CApplication::AttachAppInitor(char** argv)
{
    const char* mode = argv[2];
    if (strcmp(mode, "start") != 0 && strcmp(mode, "nofork") != 0)
    {
        if (strcmp(mode, "stop") == 0)
        {
            m_appInit = new CAppStopInit;
            return;
        }
        throw CDNFException("CApplication::AttachAppInitor() unknown argv[2]");
    }
    m_appInit = new CAppStartInit;
}

unsigned char CApplication::Get_ServerGroup()
{
    return m_appConfig->Get_ServerGroup();
}

void CApplication::SetMiniCraneRandomSeed()
{
    m_miniCraneSeed = rand() % 0x32;
}

void CApplication::SendMiniCraneRandomSeed()
{
}

void CApplication::UpdateMiniCraneSeed()
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    if (pt->tm_hour == 6)
    {
        SetMiniCraneRandomSeed();
        SendMiniCraneRandomSeed();
    }
}

void CApplication::ProcessTimeSync()
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    int hour = pt->tm_hour;
    int min = pt->tm_min;
    if (hour != m_timeSyncHour && hour >= 0 && hour < 0x18 && min >= 0 && min < 0x3c)
    {
        m_timeSyncHour = (short)hour;
    }
}

void CApplication::UpdateCollectItems()
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    if ((pt->tm_min & 1U) == 0 && m_field388 != 0)
    {
    }
}

// ---- 全局实例 ----
CAppBase* CApplicationInstance()
{
    static CApplication instance;
    return &instance;
}

void ShowLogo()
{
    puts("**********************************************************");
    puts("* DUNGEON & FIGHTER Monitor Server                        *");
    puts("**********************************************************");
}

int main(int argc, char** argv)
{
    CAppBase* app = CApplicationInstance();
    app->Create(argc, argv);
    void (**vtab)(void*) = (void(**)(void*))(*(void**)app);
    vtab[2](app);
    app->Clear();
    return 1;
}
