#include "MonitorTypes.h"

void CMemoryCashManager::Init(CApplication* app) {}

CInnerMsgHandler::CInnerMsgHandler() {}
CInnerMsgHandler::~CInnerMsgHandler() {}

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}
int CUdpHandler::InitServerSocket(int port) { return 0; }

CUdpNetworkThread::CUdpNetworkThread() {}
CUdpNetworkThread::~CUdpNetworkThread() {}

CPeriodicMessageMgr::CPeriodicMessageMgr() {}
CPeriodicMessageMgr::~CPeriodicMessageMgr() {}

LimitNpcBuyItemManager::LimitNpcBuyItemManager() {}
LimitNpcBuyItemManager::~LimitNpcBuyItemManager() {}

CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app) {}
CLoginLogoutStatistics::~CLoginLogoutStatistics() {}

CIPCounter::CIPCounter() {}
CIPCounter::~CIPCounter() {}
void CIPCounter::Init(CServerHandler* handler) {}

CItemLimitEditionMgr::CItemLimitEditionMgr() {}
CItemLimitEditionMgr::~CItemLimitEditionMgr() {}

CMemoryCashManager::CMemoryCashManager() {}
CMemoryCashManager::~CMemoryCashManager() {}

CServerHandler::CServerHandler() {}
CServerHandler::~CServerHandler() {}

void CServerHandler::Attach(CApplication* app) {}
void CServerHandler::Load(std::multimap<unsigned int, stServerInfo*>* map) {}
void* CServerHandler::GetTcpManagerServer() { return 0; }
void* CServerHandler::GetTcpDBServer() { return 0; }
void CServerHandler::SendToDB(PacketHeader* pkt) {}

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
                                            unsigned short tick) {}

void CUdpNetworkThread::attach(CApplication* app) {}
void CUdpNetworkThread::dispatch(void* param) {}

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

CTcpDBServer::CTcpDBServer() {}
CTcpDBServer::~CTcpDBServer() {}
void CTcpDBServer::Init(CTcpNetSystem* net) {}
void CTcpDBServer::SetIP(std::string ip) {}
void CTcpDBServer::SetPort(unsigned short port) {}
int* CTcpDBServer::GetSockRef() { return 0; }
int CTcpDBServer::GetSock() { return 0; }

CUserManager::CUserManager() {}
CUserManager::~CUserManager() {}
void CUserManager::Init(CApplication* app) {}

CMemberManager::CMemberManager() {}
CMemberManager::~CMemberManager() {}
void CMemberManager::Init(CApplication* app, CUserManager* userMgr, CMemberConfig* memberConfig,
                          CMemberExpTbl* memberExpTbl) {}

CMemberConfig::CMemberConfig() {}
CMemberConfig::~CMemberConfig() {}
void CMemberConfig::Load_Table(const std::string& path) {}

CMemberExpTbl::CMemberExpTbl() {}
CMemberExpTbl::~CMemberExpTbl() {}
void CMemberExpTbl::Load_Table(const std::string& path) {}

void CPacketTranslater::attach(CApplication* app) {}
void CPacketDecoder::Attach(CApplication* app) {}

CPacketDecoder* CPacketDecoderInstance() { return 0; }
void* CSignalTranslatorInstance() { return 0; }
void CSignalTranslator::clear(void* self) {}

CTaskScheduler::CTask::~CTask() {}
CTaskScheduler::CTaskScheduler() {}
CTaskScheduler::~CTaskScheduler() {}
void CTaskScheduler::AddTask(CTask* task) {}

CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int tick, unsigned int flag) {}
CTask_ChristmasEvent::~CTask_ChristmasEvent() {}
long long CTask_ChristmasEvent::getEventEndTime() { return 0; }
unsigned int CTask_ChristmasEvent::MakeEventStartTick(int flag) { return 0; }

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

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}

CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}
const char* CDNFException::what() const throw() { return m_msg.c_str(); }

namespace WongWork
{
CGMAccounts::CGMAccounts() {}
CGMAccounts::~CGMAccounts() {}
}
