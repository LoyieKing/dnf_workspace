#ifndef MONITOR_TYPES_H_
#define MONITOR_TYPES_H_

#include <list>
#include <map>
#include <set>
#include <string>

// ---- 基础管理器（monitor 专属，实现逐步补齐）----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    virtual ~CInnerMsgHandler();
};

class CUdpHandler
{
public:
    CUdpHandler();
    virtual ~CUdpHandler();
};

class CUdpNetworkThread
{
public:
    CUdpNetworkThread();
    virtual ~CUdpNetworkThread();
};

class CTaskScheduler
{
public:
    CTaskScheduler();
    virtual ~CTaskScheduler();
};

class CPeriodicMessageMgr
{
public:
    CPeriodicMessageMgr();
    virtual ~CPeriodicMessageMgr();
};

class LimitNpcBuyItemManager
{
public:
    LimitNpcBuyItemManager();
    virtual ~LimitNpcBuyItemManager();
};

class CLoginLogoutStatistics
{
public:
    CLoginLogoutStatistics();
    virtual ~CLoginLogoutStatistics();
};

class CIPCounter
{
public:
    CIPCounter();
    virtual ~CIPCounter();
};

class CItemLimitEditionMgr
{
public:
    CItemLimitEditionMgr();
    virtual ~CItemLimitEditionMgr();
};

class CMemoryCashManager
{
public:
    CMemoryCashManager();
    virtual ~CMemoryCashManager();
};

class CServerHandler
{
public:
    CServerHandler();
    virtual ~CServerHandler();
};

class CTowerRank
{
public:
    CTowerRank();
    virtual ~CTowerRank();
};

class CAppConfig
{
public:
    CAppConfig();
    virtual ~CAppConfig();
};

class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
};

namespace WongWork
{
class CGMAccounts
{
public:
    CGMAccounts();
    virtual ~CGMAccounts();
};
}

#endif  // MONITOR_TYPES_H_
