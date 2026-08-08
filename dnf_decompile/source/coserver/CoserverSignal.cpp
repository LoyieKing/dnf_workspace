// df_coserver_r — CSignal 系列 + CSignalTranslator
#include <signal.h>
#include <stdlib.h>

#include "CoserverSignal.h"
#include "CoserverApp.h"
#include "CoserverTable.h"

CSignal::CSignal()
{
    m_app = 0;
}

CSignal::~CSignal()
{
}

void CSignal::attachApp(CApplication* app)
{
    m_app = app;
}

void CSignal::dump_core_file()
{
    abort();
}

CTerminateSig::CTerminateSig()
{
}

CTerminateSig::~CTerminateSig()
{
}

void CTerminateSig::handle(int sig)
{
}

CSegmentationFaultSig::CSegmentationFaultSig()
{
}

CSegmentationFaultSig::~CSegmentationFaultSig()
{
}

void CSegmentationFaultSig::handle(int sig)
{
    dump_core_file();
}

CUser1Sig::CUser1Sig()
{
}

CUser1Sig::~CUser1Sig()
{
}

void CUser1Sig::handle(int sig)
{
}

CUser2Sig::CUser2Sig()
{
}

CUser2Sig::~CUser2Sig()
{
}

void CUser2Sig::handle(int sig)
{
}

CSystemFailSig::CSystemFailSig()
{
}

CSystemFailSig::~CSystemFailSig()
{
}

void CSystemFailSig::handle(int sig)
{
}

CFloatingPointExceptSig::CFloatingPointExceptSig()
{
}

CFloatingPointExceptSig::~CFloatingPointExceptSig()
{
}

void CFloatingPointExceptSig::handle(int sig)
{
}

CSignalTranslator::CSignalTranslator()
{
    for (int i = 0; i < 0x1a; i++)
    {
        m_handlers[i] = 0;
    }
}

CSignalTranslator::~CSignalTranslator()
{
    clear();
}

void CSignalTranslator::clear()
{
    if (m_sysfail != 0)
    {
        delete m_sysfail;
        m_sysfail = 0;
    }
    if (m_user1 != 0)
    {
        delete m_user1;
        m_user1 = 0;
    }
    if (m_user2 != 0)
    {
        delete m_user2;
        m_user2 = 0;
    }
    if (m_segv != 0)
    {
        delete m_segv;
        m_segv = 0;
    }
    if (m_terminate != 0)
    {
        delete m_terminate;
        m_terminate = 0;
    }
}

int CSignalTranslator::init(CApplication* app)
{
    init_signal();
    return init_handler(app);
}

void CSignalTranslator::init_signal()
{
    if (!regist_signal(0x1f, 0))
    {
        throw CDNFException("regist_signal():SIGSYS");
    }
}

int CSignalTranslator::init_handler(CApplication* app)
{
    m_terminate = new CTerminateSig;
    m_terminate->attachApp(app);
    for (int i = 0; i < 0x1a; i++)
    {
        m_handlers[i] = m_terminate;
    }
    m_segv = new CSegmentationFaultSig;
    m_segv->attachApp(app);
    m_handlers[0x2c / 4] = m_segv;
    m_handlers[0x20 / 4] = m_segv;
    m_handlers[2] = m_segv;
    m_user1 = new CUser1Sig;
    m_user1->attachApp(app);
    m_user2 = new CUser2Sig;
    m_user2->attachApp(app);
    m_sysfail = new CSystemFailSig;
    m_sysfail->attachApp(app);
    return 0;
}

int CSignalTranslator::regist_signal(int sig, void (*handler)(int))
{
    struct sigaction sa;
    sa.sa_handler = (__sighandler_t)handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    return sigaction(sig, &sa, 0);
}

int CSignalTranslator::getSignal(int sig)
{
    return 0;
}

CSignalTranslator* CSignalTranslatorInstance()
{
    static CSignalTranslator instance;
    return &instance;
}
