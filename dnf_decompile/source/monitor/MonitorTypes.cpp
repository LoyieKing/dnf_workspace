#include "MonitorTypes.h"

#include "DNFFileLog.h"
#include "MonitorApp.h"
#include "MonitorTable.h"
#include "Thread.h"
#include "DNFFunctionLib.h"

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <unistd.h>

void* CUdpRecvBuffer::operator new(unsigned int size)
{
    return ::operator new(size);
}
void CUdpRecvBuffer::operator delete(void* ptr)
{
    ::operator delete(ptr);
}

void CMemoryCashManager::Init(CApplication* app) {}

CInnerMsgHandler::CInnerMsgHandler() {}
CInnerMsgHandler::~CInnerMsgHandler() {}

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}
int CUdpHandler::InitServerSocket(int port) { return 0; }
char CUdpHandler::RecvFromClient(char* buf, int* size, unsigned int* addr,
                                 unsigned short* port) const
{
    return 0;
}

CUdpNetworkThread::CUdpNetworkThread() {}
CUdpNetworkThread::~CUdpNetworkThread() {}

CPeriodicMessageMgr::CPeriodicMessageMgr() {}
CPeriodicMessageMgr::~CPeriodicMessageMgr() {}
void CPeriodicMessageMgr::OnProcess(CServerHandler* handler) {}

LimitNpcBuyItemManager::LimitNpcBuyItemManager() {}
LimitNpcBuyItemManager::~LimitNpcBuyItemManager() {}

CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app) {}
CLoginLogoutStatistics::~CLoginLogoutStatistics() {}
void CLoginLogoutStatistics::ProcessByMinute() {}

CIPCounter::CIPCounter() {}
CIPCounter::~CIPCounter() {}
void CIPCounter::Init(CServerHandler* handler) {}
void CIPCounter::Proc(unsigned int tick) {}

CItemLimitEditionMgr::CItemLimitEditionMgr() {}
CItemLimitEditionMgr::~CItemLimitEditionMgr() {}
void CItemLimitEditionMgr::processScheduledJob(CApplication* app, bool flag) {}

CMemoryCashManager::CMemoryCashManager() {}
CMemoryCashManager::~CMemoryCashManager() {}
void CMemoryCashManager::ProcessLifeTimeOut() {}
void CMemoryCashManager::ProcessCashDataPrint() {}

CServerHandler::CServerHandler() {}
CServerHandler::~CServerHandler() {}

void CServerHandler::Attach(CApplication* app) {}
unsigned char CServerHandler::GetServerGroupNo()
{
    return 0;
}
void CServerHandler::Process()
{
    int tick = m_field24++;
    if (m_managerServer != 0 && tick > 3)
    {
        unsigned char group = GetServerGroupNo();
        m_managerServer->SendHeartBeat(group & 0xff);
        m_field24 = 0;
    }
    for (std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.begin();
         it != m_gameServers.end(); it++)
    {
        CServerInterface* gs = it->second;
        if (gs->IsValidServer() && gs->IsConnected() && gs->IsHeartBeatTimeOver())
        {
            unsigned char channel = gs->GetChannelNo();
            if (channel < 0xbe)
            {
                m_app->OnGameServerDown((CGameServer*)gs);
            }
            gs->OnDisconnect();
        }
    }
    if (m_dbServer == 0 || !m_dbServer->IsValidServer())
    {
    }
    else
    {
        if (m_dbServer->IsConnected() && m_dbServer->IsHeartBeatTimeOver())
        {
            m_dbServer->OnDisconnect();
            CMyFileLog log("Process", 0xdc);
            log("./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
        }
        if (m_tcpManagerServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpManagerServer.GetIP();
            if (*ip == '\0' || m_tcpManagerServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpManagerServer.GetSockRef(), ip,
                                    m_tcpManagerServer.GetPort());
                CMyFileLog log("Process", 0x124);
                log("./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpManagerServer.GetIP(), m_tcpManagerServer.GetPort());
            }
        }
        if (9 < m_field64++)
        {
            m_tcpManagerServer.SendHeartbeat(GetServerGroupNo());
            m_field64 = 0;
        }
        if (m_tcpDbServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpDbServer.GetIP();
            if (*ip == '\0' || m_tcpDbServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpDbServer.GetSockRef(), ip, m_tcpDbServer.GetPort());
                CMyFileLog log("Process", 0x13d);
                log("./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpDbServer.GetIP(), m_tcpDbServer.GetPort());
            }
        }
        if (9 < m_field50++)
        {
            m_tcpDbServer.SendHeartbeat();
            m_field50 = 0;
        }
    }
}
void CServerHandler::Load(std::multimap<unsigned int, stServerInfo*>* map)
{
    for (std::multimap<unsigned int, stServerInfo*>::iterator it = map->begin();
         it != map->end(); it++)
    {
        stServerInfo* si = it->second;
        if (si->m_field2 == 1)
        {
            if (si->m_field1 == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break!");
            }
            RegistGameServer(si);
        }
        else if (si->m_field2 == 2)
        {
            if (si->m_field1 == 0xff || si->m_field1 != 0xc8)
            {
                throw CDNFException("CServerHandler::Load() DB Server Table Exception Break!");
            }
            if (m_dbServer != 0)
            {
                UnregistDBServer();
                CMyFileLog log("Load", 0x5d);
                log("./log/Config", "DB Config Reload.\n");
            }
            CDBServer* db = new CDBServer(si);
            db->Initialize();
            RegistDBServer(db);
        }
        else if (si->m_field2 == 4)
        {
            if (si->m_field1 == 0xff || si->m_field1 != 0xca)
            {
                throw CDNFException("CServerHandler::Load() Manager Server Table Exception Break!");
            }
            if (m_managerServer != 0)
            {
                UnregistManagerServer();
                CMyFileLog log("Load", 0x6f);
                log("./log/Config", "Manager Config Reload.\n");
            }
            CManagerServer* mgr = new CManagerServer(si);
            mgr->Initialize();
            RegistManagerServer(mgr);
        }
    }
}
bool CServerHandler::RegistGameServer(stServerInfo* info)
{
    unsigned int group = (unsigned int)info->m_field1;
    std::map<unsigned int, CGameServer*>::iterator found = m_gameServers.find(group);
    if (found == m_gameServers.end())
    {
        CGameServer* gs = new CGameServer(info);
        gs->Initialize();
        m_gameServers.insert(std::pair<const unsigned int, CGameServer*>(info->m_field1, gs));
    }
    return found == m_gameServers.end();
}
void CServerHandler::RegistDBServer(CDBServer* db) { m_dbServer = db; }
void CServerHandler::UnregistDBServer()
{
    if (m_dbServer != 0)
    {
        delete m_dbServer;
        m_dbServer = 0;
    }
}
void CServerHandler::RegistManagerServer(CManagerServer* mgr) { m_managerServer = mgr; }
void CServerHandler::UnregistManagerServer()
{
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
}
CTcpManagerServer* CServerHandler::GetTcpManagerServer() { return &m_tcpManagerServer; }
CTcpDBServer* CServerHandler::GetTcpDBServer() { return &m_tcpDbServer; }
void CServerHandler::SendToDB(PacketHeader* pkt) {}

CServerInterface::CServerInterface(stServerInfo* info) {}
CServerInterface::~CServerInterface() {}
bool CServerInterface::Initialize() { return true; }
bool CServerInterface::Destroy() { return true; }
char CServerInterface::IsValidServer() { return 1; }
char CServerInterface::IsConnected() { return 1; }
char CServerInterface::IsHeartBeatTimeOver() { return 0; }
unsigned char CServerInterface::GetChannelNo() { return 0; }
void CServerInterface::OnDisconnect() {}

CDBServer::CDBServer(stServerInfo* info) : CServerInterface(info) {}
CDBServer::~CDBServer() {}
CManagerServer::CManagerServer(stServerInfo* info) : CServerInterface(info) {}
CManagerServer::~CManagerServer() {}
void CManagerServer::SendHeartBeat(int group) {}
CGameServer::CGameServer(stServerInfo* info) : CServerInterface(info) {}
CGameServer::~CGameServer() {}

CTowerRank::CTowerRank() {}
CTowerRank::~CTowerRank() {}
void CTowerRank::processReloadRanking(CServerHandler* handler, bool flag, unsigned int tick) {}

CThreadInterface::CThreadInterface() {}
CThreadInterface::~CThreadInterface() {}
void CThreadInterface::stop() {}
void CThreadInterface::join() {}
bool CThreadInterface::begin() { return true; }
void* CThreadInterface::dispatch_proxy(void* temp) { return 0; }

CFrameCountHandler::CFrameCountHandler() {}
CFrameCountHandler::~CFrameCountHandler() {}
void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int frameCount,
                                            unsigned short tick)
{
    if (tick != 0)
    {
        m_app = app;
        memset(this, 0, 0x28);
        m_field4 = tick;
        m_field8 = 100 / tick;
        return;
    }
    throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
}
CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    tms tm = {};
    m_field24 = 0;
    if (m_field0 == 0)
    {
        m_field0 = 1;
        m_field14 = 0;
        m_fieldc = times(&tm);
        if (m_fieldc == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
    }
    else
    {
        m_field10 = times(&tm);
        if (m_field10 == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
        if ((unsigned int)m_field10 < (unsigned int)m_fieldc)
        {
            m_fieldc = m_field10;
        }
        if (m_field14 < (unsigned int)((int)m_field10 - (int)m_fieldc) / (unsigned int)m_field8)
        {
            m_field14++;
            m_field24 = 1;
            if (99 < (unsigned int)((int)m_field10 - (int)m_fieldc))
            {
                m_field18 = m_field14;
                m_field24 = 2;
                m_field14 = 0;
                m_fieldc = (m_field10 - (m_field10 - m_fieldc)) + 100;
                m_field20 = 0;
                m_field25++;
                if (59 < (unsigned char)m_field25)
                {
                    m_field24 = 3;
                    m_field25 = 0;
                    m_field26++;
                    if (59 < (unsigned char)m_field26)
                    {
                        m_field24 = 4;
                        m_field26 = 0;
                    }
                }
            }
        }
    }
    return this;
}
void CFrameCountHandler::SaveProcess()
{
    m_field28++;
    if (m_field28 != 0)
    {
        CMyFileLog log("SaveProcess", 0xa8);
        log("./log/frame", "FPS(%02d) / DFC(%02d)\n", m_field18, m_field4);
        m_field28 = 0;
    }
}

CBuddyRegisterManager::CBuddyRegisterManager() {}
CBuddyRegisterManager::~CBuddyRegisterManager() {}

void CUdpNetworkThread::attach(CApplication* app)
{
    if (app != 0)
    {
        m_recvQ = app->Get_UdpPacketRecvQ();
        m_udpHandler = app->Get_UdpHandler();
        m_qLock = app->Get_UdpQLock();
        m_bLock = app->Get_UdpBLock();
    }
}
void CUdpNetworkThread::SetUDPQueue(void* q)
{
    m_recvQ = q;
}
void CUdpNetworkThread::dispatch(void* param)
{
    if (m_recvQ != 0 && m_udpHandler != 0 && m_qLock != 0)
    {
        try
        {
            DNFFLib::Sleep_Ext(5, 0);
            puts("Network Thread Start!");
            m_running = true;
            while (m_running)
            {
                CUdpRecvBuffer* buf;
                {
                    CGuard<CMutex> guard((CMutex*)m_bLock);
                    buf = new CUdpRecvBuffer;
                }
                int recvSize = 0x1800;
                unsigned short srcPort = 0;
                unsigned int fromAddr = 0;
                char ok = m_udpHandler->RecvFromClient((char*)buf, &recvSize, &fromAddr, &srcPort);
                unsigned int recvByte = (unsigned int)recvSize;
                if (ok == 1)
                {
                    CUdpRecvBuffer* pkt = buf;
                    if (*(unsigned short*)((char*)buf + 2) == recvSize)
                    {
                        if (*(unsigned short*)((char*)buf + 2) < 0x1800)
                        {
                            if (recvSize < 0x1801)
                            {
                                *(unsigned int*)((char*)buf + 6) = fromAddr;
                                *(unsigned short*)((char*)buf + 4) = srcPort;
                                {
                                    CGuard<CMutex> guard((CMutex*)m_qLock);
                                    ((std::queue<CUdpRecvBuffer*>*)m_recvQ)->push(pkt);
                                    unsigned int qsize =
                                        ((std::queue<CUdpRecvBuffer*>*)m_recvQ)->size();
                                }
                            }
                            else
                            {
                                unsigned short code = *(unsigned short*)buf;
                                unsigned short psize = *(unsigned short*)((char*)buf + 2);
                                CMyFileLog log("dispatch", 0x85);
                                log("./log/recvErr",
                                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                    psize, recvByte, code);
                                {
                                    CGuard<CMutex> guard((CMutex*)m_bLock);
                                    delete buf;
                                }
                            }
                        }
                        else
                        {
                            unsigned short code = *(unsigned short*)buf;
                            unsigned short psize = *(unsigned short*)((char*)buf + 2);
                            CMyFileLog log("dispatch", 0x79);
                            log("./log/recvErr",
                                "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                psize, recvByte, code);
                            {
                                CGuard<CMutex> guard((CMutex*)m_bLock);
                                delete buf;
                            }
                        }
                    }
                    else
                    {
                        unsigned short code = *(unsigned short*)buf;
                        unsigned short psize = *(unsigned short*)((char*)buf + 2);
                        CMyFileLog log("dispatch", 0x6e);
                        log("./log/recvErr",
                            "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            psize, recvByte, code);
                        {
                            CGuard<CMutex> guard((CMutex*)m_bLock);
                            delete buf;
                        }
                    }
                }
                else
                {
                    {
                        CGuard<CMutex> guard((CMutex*)m_bLock);
                        delete buf;
                    }
                }
            }
            return;
        }
        catch (CDNFException& e)
        {
            printf("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
            throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
        }
        catch (...)
        {
            puts("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
            throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
        }
    }
    throw CDNFException("NetworkThread is Not Ready!\n");
}

CTcpNetSystem::CTcpNetSystem() {}
CTcpNetSystem::~CTcpNetSystem() {}
void CTcpNetSystem::Init(unsigned short port) {}
bool CTcpNetSystem::OpenTcpService(int& sockRef, const char* ip, unsigned short port) { return false; }
CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
    CTcpNetSystem::Get_TcpSwapQPacket()
{
    return 0;
}

CTcpManagerServer::CTcpManagerServer() {}
CTcpManagerServer::~CTcpManagerServer() {}
void CTcpManagerServer::Init(CTcpNetSystem* net) {}
void CTcpManagerServer::SetIP(std::string ip) {}
void CTcpManagerServer::SetPort(unsigned short port) {}
int* CTcpManagerServer::GetSockRef() { return 0; }
int CTcpManagerServer::GetSock() { return 0; }
char CTcpManagerServer::IsValidServer() { return 1; }
const char* CTcpManagerServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpManagerServer::GetPort() { return m_port; }
void CTcpManagerServer::SendHeartbeat(unsigned char group) {}

CTcpDBServer::CTcpDBServer() {}
CTcpDBServer::~CTcpDBServer() {}
void CTcpDBServer::Init(CTcpNetSystem* net) {}
void CTcpDBServer::SetIP(std::string ip) {}
void CTcpDBServer::SetPort(unsigned short port) {}
int* CTcpDBServer::GetSockRef() { return 0; }
int CTcpDBServer::GetSock() { return 0; }
char CTcpDBServer::IsValidServer() { return 1; }
const char* CTcpDBServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpDBServer::GetPort() { return m_port; }
void CTcpDBServer::SendHeartbeat() {}

CUserManager::CUserManager() {}
CUserManager::~CUserManager() {}
void CUserManager::Init(CApplication* app) {}
void CUserManager::MemberEnterProcess() {}
void CUserManager::ProcessByMinute() {}

CMemberManager::CMemberManager() {}
CMemberManager::~CMemberManager() {}
void CMemberManager::Init(CApplication* app, CUserManager* userMgr, CMemberConfig* memberConfig,
                          CMemberExpTbl* memberExpTbl) {}
void CMemberManager::MemberRegisterFlagProcess() {}

CMemberConfig::CMemberConfig() {}
CMemberConfig::~CMemberConfig() {}
void CMemberConfig::Load_Table(const std::string& path) {}

CMemberExpTbl::CMemberExpTbl() {}
CMemberExpTbl::~CMemberExpTbl() {}
void CMemberExpTbl::Load_Table(const std::string& path) {}

void CPacketTranslater::attach(CApplication* app) {}
void CPacketDecoder::Attach(CApplication* app) {}
void CPacketDecoder::Process() {}

CPacketDecoder* CPacketDecoderInstance() { return 0; }
CSignalTranslator* CSignalTranslatorInstance() { return 0; }
CSignalTranslator::CSignalTranslator() {}
CSignalTranslator::~CSignalTranslator() {}
void CSignalTranslator::init(CApplication* app) {}
void CSignalTranslator::clear() {}

CTaskScheduler::CTask::~CTask() {}
CTaskScheduler::CTaskScheduler() {}
CTaskScheduler::~CTaskScheduler() {}
void CTaskScheduler::AddTask(CTask* task) {}
void CTaskScheduler::ProcessTask(unsigned int tick) {}

unsigned int get_rand_int(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return rand();
    }
    int r = rand();
    if (n < r)
    {
        r = rand();
        return (unsigned int)r % (unsigned int)n;
    }
    int a = r * 0x41c64e6d + 0x3039;
    int b = a * 0x41c64e6d + 0x3039;
    int c = b * 0x41c64e6d + 0x3039;
    unsigned int u = ((((int)(((unsigned int)(a >> 31) >> 16) + a) >> 16) & 0x7ff) << 10 ^
                      (((int)(((unsigned int)(b >> 31) >> 16) + b) >> 16) & 0x3ff)) << 10 ^
                     ((int)(((unsigned int)(c >> 31) >> 16) + c) >> 16) & 0x3ff;
    if ((unsigned int)n < u)
    {
        u = u % (unsigned int)n;
    }
    return u;
}

int CTask_ChristmasEvent::DecideEventTime()
{
    int hours[25] = {
        0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
        23, 24, 1, 2, 3, 4, 5
    };
    unsigned int weight[25] = {
        0, 1449, 2898, 4348, 7246, 10145, 13043, 17391, 23188, 28985,
        34782, 42029, 49275, 56521, 63768, 69565, 75362, 81159, 85507,
        89855, 92753, 95652, 97101, 98550, 100000
    };
    unsigned int r = get_rand_int(100000);
    int i = 1;
    while (i <= 24)
    {
        if (r < (unsigned int)weight[i] && (unsigned int)weight[i - 1] < r)
        {
            break;
        }
        i++;
    }
    return hours[i];
}

unsigned int CTask_ChristmasEvent::getEventStartTime() { return 0x47698650; }
long long CTask_ChristmasEvent::getEventEndTime() { return 0x47726c70; }

unsigned int CTask_ChristmasEvent::MakeEventStartTick(int param_1)
{
    int eventHour = DecideEventTime();
    time_t now = time(0);
    tm* pt = localtime(&now);
    int sec = pt->tm_sec;
    int min = pt->tm_min;
    int hour = pt->tm_hour;
    int mday = pt->tm_mday;
    int mon = pt->tm_mon;
    int year = pt->tm_year;
    int wday = pt->tm_wday;
    int yday = pt->tm_yday;
    int isdst = pt->tm_isdst;
    long gmtoff = pt->tm_gmtoff;
    char* zone = (char*)pt->tm_zone;

    if (now < (time_t)getEventStartTime())
    {
        tm t;
        t.tm_mday = mday;
        t.tm_mon = mon;
        t.tm_year = year;
        t.tm_wday = wday;
        t.tm_yday = yday;
        t.tm_isdst = isdst;
        t.tm_gmtoff = gmtoff;
        t.tm_zone = zone;
        t.tm_hour = 0;
        t.tm_min = 0;
        t.tm_sec = 0;
        time_t midnight = mktime(&t);
        param_1 = (int)(((time_t)getEventStartTime() - midnight) / 86400);
    }
    if (param_1 == 0 && eventHour < hour + 1)
    {
        int n = 0;
        while (n < 3 && (eventHour = DecideEventTime(), eventHour < hour + 1))
        {
            n++;
        }
        if (n == 3)
        {
            eventHour = (hour + eventHour + 1) % 25;
        }
    }
    tm t2;
    t2.tm_mon = mon;
    t2.tm_year = year;
    t2.tm_wday = wday;
    t2.tm_yday = yday;
    t2.tm_isdst = isdst;
    t2.tm_gmtoff = gmtoff;
    t2.tm_zone = zone;
    t2.tm_mday = mday + param_1;
    t2.tm_hour = eventHour - 1;
    t2.tm_min = 0;
    t2.tm_sec = 0;
    time_t result = mktime(&t2);
    char* s = ctime(&result);
    CMyFileLog log("MakeEventStartTick", 0x96);
    log("./log/GameServer", "Next X_Mas Event Time! (%s)", s);
    return (unsigned int)result;
}

CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int tick, unsigned int flag) {}
CTask_ChristmasEvent::~CTask_ChristmasEvent() {}
TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b) {}
TowerOfDespairReloadAPC_Task::~TowerOfDespairReloadAPC_Task() {}

CEventActionManager::CEventActionManager() {}
CEventActionManager::~CEventActionManager() {}

COnTimeEventManager::COnTimeEventManager() {}
COnTimeEventManager::~COnTimeEventManager() {}
void COnTimeEventManager::AttachApp(CApplication* app) {}

CollectItms::CollectItms() {}
CollectItms::~CollectItms() {}

namespace init_accusation
{
CInitAccusationListMgr::CInitAccusationListMgr(CApplication& app) {}
CInitAccusationListMgr::~CInitAccusationListMgr() {}
void CInitAccusationListMgr::setSchedule(bool const& flag) {}
}

Packet_Item_Limit_Edition_Load_Data_Req::Packet_Item_Limit_Edition_Load_Data_Req()
    : PacketHeader(0x1007, 0x83)
{
    m_fieldA = 0;
    m_fieldC = 0;
}

Packet_Load_Periodic_Message::Packet_Load_Periodic_Message() : PacketHeader(0x1f48, 10) {}
LimitNpcBuyItemRequestInfo::LimitNpcBuyItemRequestInfo() : PacketHeader(0x27d8, 10) {}

namespace np_server_xml
{
CServerXml::CServerXml() {}
CServerXml::~CServerXml() {}
void CServerXml::StrLoading() {}
}

np_server_xml::CServerXml g_ServerString_;

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}
void CAppInit::Init(CApplication* app, int argc, char** argv) {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}
void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    {
        std::string cfgName(argv[1]);
        app->m_appConfig->Check_FileName(cfgName);
    }
    app->m_memberConfig = new CMemberConfig;
    app->m_memberExpTbl = new CMemberExpTbl;
    app->m_serverHandler = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    const char* mode = argv[2];
    if (strcmp(mode, "start") == 0)
    {
        pid_t pid = fork();
        if (pid < 0)
        {
            return -1;
        }
        if (pid != 0)
        {
            exit(0);
        }
        setsid();
        chdir("./");
        umask(0);
    }
    {
        std::string pidFile(argv[1]);
        char ok = Save_pid(pidFile);
        return ok == 1 ? 0 : -1;
    }
}

char CAppStartInit::Save_pid(const std::string& file)
{
    std::string path = "./pid/" + file;
    int fd = ::open(path.c_str(), 0x42, 0x1a4);
    if (fd < 0)
    {
        return 0;
    }
    char buf[0x400];
    memset(buf, 0, 0x400);
    pid_t pid = getpid();
    sprintf(buf, "%ld\n", (long)pid);
    ssize_t n = strlen(buf);
    ssize_t wr = write(fd, buf, n);
    if (wr < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}
void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, \xb0\xfc\xb8\xae\xc0\xda\xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1 \xb5\xc7\xbe\xfa\xbd\xc0\xb4\xd9.");
    app->Clear();
    {
        std::string pidFile(argv[1]);
        char ok = app->Send_Term_Signal(pidFile);
        if (ok != 1)
        {
            throw CDNFException(
                "CAppStopInit::Init() \xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xbd\xc0\xb4\xd9!");
        }
    }
    throw CDNFException(
        "CAppStopInit::Init() \xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xbd\xc0\xb4\xd9!");
}

CKillUSRConfig::CKillUSRConfig() {}
CKillUSRConfig::~CKillUSRConfig() {}

CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}
const char* CDNFException::what() const throw() { return m_msg.c_str(); }

namespace WongWork
{
CGMAccounts::CGMAccounts() {}
CGMAccounts::~CGMAccounts() {}
}
