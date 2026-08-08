#include "MonitorApp.h"

#include <stdio.h>

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
    m_field8c = 0;
    m_field90 = 0;
    m_field94 = 0;
    m_field98 = 0;
    m_serverHandler = 0;
    m_fielda0 = 0;
    m_innerMsgHandler = 0;
    m_udpHandler = 0;
    m_udpThread = 0;
    m_taskScheduler = 0;
    m_field2cc = 0;
    m_memoryCash = 0;
    m_field31c = 0;
    m_field320 = 0;
    m_towerRank = 0;
    m_itemLimitMgr = 0;
    m_ipCounter = 0;
    m_field330 = 0;
    m_field334 = 0;
    m_periodicMsg = 0;
    m_limitNpc = 0;
    m_field388 = 0;
}

CApplication::~CApplication()
{
    puts("Application Stop!");
}

void CApplication::Init(int argc, char** argv)
{
    ShowLogo();
    puts("Application Init() Success!");
}

void CApplication::Load(int argc, char** argv)
{
    puts("Application Load() Success!");
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
    if (m_fielda0 != 0)
    {
        delete m_fielda0;
        m_fielda0 = 0;
    }
    puts("Game Server Handler Free Success!");
    if (m_udpHandler != 0)
    {
        ::operator delete(m_udpHandler);
        m_udpHandler = 0;
    }
    puts("UDP Handler Free Success!");
    puts("Signal Translater Free Success!");
    if (m_field8c != 0)
    {
        delete (CAppConfig*)((char*)this + 0x8c);
        m_field8c = 0;
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
        DNFFLib::Sleep_Ext(0, 1);
    }
    puts("CApplication::Process() Exit");
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
