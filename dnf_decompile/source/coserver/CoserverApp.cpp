// df_coserver_r — CApplication/CAppBase（GCC 混合工具链，无 DWARF — Ghidra 反汇编还原）
#include <pthread.h>
#include <stdio.h>
#include <string.h>

#include "CoserverApp.h"

CAppBase::CAppBase()
{
}

CAppBase::~CAppBase()
{
}

void CAppBase::Create(int argc, char** argv)
{
    // 虚调用：vtable[3]=Init(argc,argv) vtable[4]=Load(argc,argv)
    Init(argc, argv);
    Load(argc, argv);
}

void CAppBase::Clear()
{
    Free();
}

void CAppBase::Process()
{
}

CMutex::CMutex()
{
    pthread_mutex_init(&m_mutex, 0);
}

CMutex::~CMutex()
{
    pthread_mutex_destroy(&m_mutex);
}

void CMutex::lock()
{
    pthread_mutex_lock(&m_mutex);
}

void CMutex::unlock()
{
    pthread_mutex_unlock(&m_mutex);
}

CApplication* CApplicationInstance()
{
    static CApplication instance;
    return &instance;
}

CApplication::CApplication()
    : CAppBase()
{
    m_loaded = false;
    m_reserved1 = 0;
    m_appInit = 0;
    m_appConfig = 0;
    m_serverConfig = 0;
    m_reserved2 = 0;
    m_serverHandler = 0;
    m_reserved3 = 0;
    m_innerMsg = 0;
    memset(m_udpHandlers, 0, sizeof(m_udpHandlers));
    memset(m_netThreads, 0, sizeof(m_netThreads));
}

CApplication::~CApplication()
{
}

void CApplication::Init(int argc, char** argv)
{
    ShowLogo();
    CheckArgv(argv);
    CSignalTranslator* st = CSignalTranslatorInstance();
    st->init((void*)this);
    AttachAppInitor(argv);
    m_appInit->Init(this, argc, argv);
    puts("Application Init() Success!");
}

void CApplication::Load(int argc, char** argv)
{
    m_userManager->Init(this);
    m_appConfig->Load(argv[1]);
    m_serverConfig->Load("./table/server_config.tbl");
    InitFrameCountInfo((unsigned int)this, m_appConfig->Get_FrameCountValue());
    m_serverHandler = new CServerHandler;
    m_serverHandler->Attach(this);
    m_serverHandler->Load(GetServerInfo());
    CPacketTranslater::attach(this);
    m_innerMsg = new CInnerMsgHandler;
    CPacketDecoderInstance()->Attach(this);
    for (int i = 0; i < 10; i++)
    {
        m_appThreads[i] = new CAppThread;
        m_appThreads[i]->attach(this, i);
        if (!m_appThreads[i]->begin())
        {
            throw CDNFException(
                std::string("CApplication::Load() Init App Thread Exception Break!"));
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        unsigned short port = m_appConfig->Get_ServerUdpPort((unsigned char)i);
        if (port != 0)
        {
            m_udpHandlers[i] = new CUdpHandler;
            if (m_udpHandlers[i]->InitServerSocket((unsigned int)port) == -1)
            {
                throw CDNFException(
                    std::string("CApplication::Load() Init Server Socket Exception Break!"));
            }
            m_netThreads[i] = new CNetworkThread;
            m_netThreads[i]->attach(this, i);
            if (!m_netThreads[i]->begin())
            {
                throw CDNFException(
                    std::string("CApplication::Load() Init Network Thread Exception Break!"));
            }
        }
    }
    puts("Application Load() Success!");
    m_loaded = true;
}

void CApplication::Free()
{
}

void CApplication::Process()
{
}

int CApplication::CheckArgv(char** argv)
{
    return 0;
}

void CApplication::Send_Term_Signal()
{
}

void CApplication::Send_Suspend_Signal()
{
}

CGameServer* CApplication::FindGameServer(int idx)
{
    return 0;
}

void CApplication::App_Stop()
{
}

void CApplication::AttachAppInitor(char** argv)
{
}
