#include "MonitorApp.h"

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

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
    try
    {
        ShowLogo();
        np_server_xml::CServerXml::StrLoading();
        CheckArgv(argc, argv);
        CSignalTranslatorInstance()->init(this);
        AttachAppInitor(argv);
        ((CAppInit*)m_appInit)->Init(this, argc, argv);
        m_field31c = 0;
        m_field320 = 0;
        puts("Application Init() Success!");
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Init() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CApplication::Init() Exception Break");
        throw;
    }
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
        m_udpThread->stop();
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
    CSignalTranslatorInstance()->clear();
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

CServerHandler* CApplication::Get_ServerHandler()
{
    return m_serverHandler2;
}

CUserManager* CApplication::Get_UserManager()
{
    return &m_userManager;
}

CMemberManager* CApplication::Get_MemberManager()
{
    return &m_memberManager;
}

CBuddyRegisterManager* CApplication::Get_BuddyRegisterManager()
{
    return &m_buddyMgr;
}

CTaskScheduler* CApplication::GetTaskScheduler()
{
    return m_taskScheduler;
}

void* CApplication::GetGMAccounts()
{
    return m_field2cc;
}

void* CApplication::getIPCounter()
{
    return m_ipCounter;
}

void* CApplication::getTowerRank()
{
    return m_towerRank;
}

int CApplication::getMiniCraneSeed() const
{
    return m_miniCraneSeed;
}

void* CApplication::getCollectItems()
{
    return m_field388;
}

void* CApplication::FindGameServer(int id)
{
    return m_serverHandler2->GetGameServer((unsigned int)id);
}

void* CApplication::FindTcpGameServer(unsigned int id)
{
    return m_serverHandler2->GetTcpGameServer(id);
}

void* CApplication::Get_MemoryCashManager()
{
    return m_memoryCash;
}

void* CApplication::GetLoginLogoutStatistics()
{
    return m_field330;
}

void* CApplication::GetPeriodicMessageManager()
{
    return m_periodicMsg;
}

void CApplication::Remove_GM_id(unsigned int id)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(id);
    if (it != m_map368.end())
    {
        it->second.clear();
        m_map368.erase(it);
    }
}

char CApplication::isGM_regFromChannel(unsigned int channel)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    return it != m_map368.end();
}

char CApplication::isAbleUserChatWithGM(unsigned int channel, unsigned int charNo)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    if (it != m_map368.end())
    {
        for (std::list<unsigned int>::iterator li = it->second.begin(); li != it->second.end();
             ++li)
        {
            if (*li == charNo)
            {
                return 1;
            }
        }
    }
    return 0;
}

void CApplication::AddChattableUserWithGM(unsigned int channel, unsigned int charNo)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    if (it != m_map368.end())
    {
        for (std::list<unsigned int>::iterator li = it->second.begin(); li != it->second.end();
             ++li)
        {
            if (*li == charNo)
            {
                return;
            }
        }
        it->second.push_back(charNo);
    }
}

void CApplication::DisableChatUserWithGM(unsigned int channel, unsigned int charNo)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    if (it != m_map368.end())
    {
        for (std::list<unsigned int>::iterator li = it->second.begin(); li != it->second.end();
             ++li)
        {
            if (*li == charNo)
            {
                it->second.erase(li);
                return;
            }
        }
    }
}

char CApplication::Send_Term_Signal(const std::string& file)
{
    std::string path = "./pid/" + file;
    FILE* f = fopen(path.c_str(), "r");
    if (f == 0)
    {
        printf("%s process id file open \xbd\xc7\xc6\xd0\n", path.c_str());
    }
    else
    {
        int pid = 0;
        fscanf(f, "%d", &pid);
        if (pid < 1)
        {
            fclose(f);
            printf("%d\xb9\xf8\xc0\xc7 \xc0\xdf\xb8\xf8\xb5\xc8 process id\n", pid);
        }
        else
        {
            int r = kill(pid, 0xf);
            if (r < 0)
            {
                fclose(f);
                printf("%d\xb9\xf8 process\xb7\xce \xc1\xbe\xb7\xe1 signal \xbc\xdb\xbd\xc5 \xbd\xc7\xc6\xd0", pid);
            }
            else
            {
                fclose(f);
                if (remove(path.c_str()) == -1)
                {
                    puts("FAIL TO DELETE PID FILE ERROR");
                }
            }
        }
    }
    return 0;
}

void CApplication::Send_Suspend_Signal(const std::string& file)
{
    std::string path = "./pid/" + file;
    FILE* f = fopen(path.c_str(), "r");
    if (f == 0)
    {
        printf("%s process id file open \xbd\xc7\xc6\xd0\n", path.c_str());
    }
    else
    {
        int pid = 0;
        fscanf(f, "%d", &pid);
        if (pid < 1)
        {
            fclose(f);
            printf("%d\xb9\xf8\xc0\xc7 \xc0\xdf\xb8\xf8\xb5\xc8 process id\n", pid);
        }
        else
        {
            int r = kill(pid, 10);
            if (r < 0)
            {
                fclose(f);
                printf("%d\xb9\xf8 process\xb7\xce \xc1\xbe\xb7\xe1 signal \xbc\xdb\xbd\xc5 \xbd\xc7\xc6\xd0", pid);
            }
            else
            {
                printf("SEND SUSPEND SIGNAL TO %d\n", pid);
                fclose(f);
            }
        }
    }
}

void CApplication::App_Stop()
{
    m_loaded = false;
}

void CApplication::TranslateSignal()
{
    m_serverHandler->Clear_Table();
    m_serverHandler->Load_Table("./script/kill_user_config.tbl");
    std::vector<ST_KillUSRConfig*>* vec = m_serverHandler->GetInfo();
    if (!vec->empty())
    {
        for (std::vector<ST_KillUSRConfig*>::iterator it = vec->begin(); it != vec->end(); ++it)
        {
            ST_KillUSRConfig* cfg = *it;
            if (cfg->m_type == 3)
            {
                Packet_Monitor_Event_End pkt;
                pkt.m_fieldA = cfg->m_val;
                CPacketTranslater::OnEventEnd(&pkt);
            }
            else if (cfg->m_type == 2)
            {
                Packet_Monitor_Event_Start pkt;
                pkt.m_fieldA = cfg->m_val;
                pkt.m_fieldB = (unsigned short)cfg->m_b;
                pkt.m_fieldC = (unsigned short)cfg->m_c;
                CPacketTranslater::OnEventStart(&pkt);
            }
            else if (cfg->m_type == 4)
            {
                m_appConfig->GetServerInfoMap();
                m_serverHandler2->Load(m_appConfig->GetServerInfoMap());
                m_memberConfig->Load_Table("./script/member_cnt_config.tbl");
                m_memberExpTbl->Load_Table("./script/member_exp.tbl");
            }
            else if (cfg->m_type == 7)
            {
                Packet_Monitor_Take_Screen_Shot pkt;
                pkt.m_fieldA = 0xff;
                pkt.m_fieldB = (unsigned int)time(0);
                CPacketTranslater::OnTakeScreenShot(&pkt);
            }
        }
    }
}

int CApplication::AddAccusationCharac(const std::string& a, const std::string& b, int c,
                                      char type)
{
    std::map<std::string, int>::iterator it = m_map350.find(a);
    if (it != m_map350.end())
    {
        if (type == 'p')
        {
            if (9 < it->second)
            {
                return 99;
            }
        }
        else
        {
            if (1 < it->second)
            {
                return 99;
            }
        }
    }
    else
    {
        m_map350.insert(std::pair<const std::string, int>(a, 0));
        it = m_map350.find(a);
    }
    if (m_map350.size() == (m_map350.size() / 100) * 100)
    {
        CMyFileLog log("AddAccusationCharac", 0x5c0);
        log("./log/mannerlessUser", "user count : %u\n", m_map350.size());
    }
    std::pair<std::string, int> key(b, c);
    if (m_set338.find(key) != m_set338.end())
    {
        return 0x6f;
    }
    m_set338.insert(key);
    it->second++;
    return 0x6e;
}

void CApplication::ClearAccusationList()
{
    m_set338.clear();
    m_map350.clear();
}

void CApplication::Add_GM_id(unsigned int id)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(id);
    if (it == m_map368.end())
    {
        std::list<unsigned int> l;
        m_map368.insert(std::pair<const unsigned int, std::list<unsigned int> >(id, l));
    }
}

void CApplication::Call_DeleteMember(unsigned int key, CUser* user)
{
}

void CApplication::Call_ResetBlackList(unsigned int charNo)
{
}

void CApplication::Call_ResetBuddyList(unsigned int charNo)
{
}

void CApplication::Call_ResetUserMemberInfo(unsigned int key)
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
