#include "MonitorTypes.h"

CInnerMsgHandler::CInnerMsgHandler() {}
CInnerMsgHandler::~CInnerMsgHandler() {}

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}

CUdpNetworkThread::CUdpNetworkThread() {}
CUdpNetworkThread::~CUdpNetworkThread() {}

CTaskScheduler::CTaskScheduler() {}
CTaskScheduler::~CTaskScheduler() {}

CPeriodicMessageMgr::CPeriodicMessageMgr() {}
CPeriodicMessageMgr::~CPeriodicMessageMgr() {}

LimitNpcBuyItemManager::LimitNpcBuyItemManager() {}
LimitNpcBuyItemManager::~LimitNpcBuyItemManager() {}

CLoginLogoutStatistics::CLoginLogoutStatistics() {}
CLoginLogoutStatistics::~CLoginLogoutStatistics() {}

CIPCounter::CIPCounter() {}
CIPCounter::~CIPCounter() {}

CItemLimitEditionMgr::CItemLimitEditionMgr() {}
CItemLimitEditionMgr::~CItemLimitEditionMgr() {}

CMemoryCashManager::CMemoryCashManager() {}
CMemoryCashManager::~CMemoryCashManager() {}

CServerHandler::CServerHandler() {}
CServerHandler::~CServerHandler() {}

CTowerRank::CTowerRank() {}
CTowerRank::~CTowerRank() {}

CAppConfig::CAppConfig() {}
CAppConfig::~CAppConfig() {}

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
