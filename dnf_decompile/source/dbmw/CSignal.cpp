#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/resource.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/times.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

// ============================================================
// CSignal 家族
// ============================================================
CSignal::CSignal()
{
    m_app = 0;
}

CSignal::~CSignal() {}

CTerminateSig::CTerminateSig() {}
CTerminateSig::~CTerminateSig() {}

void CTerminateSig::handle(int sig)
{
    puts("CTerminateSig");
    if (m_app)
        m_app->App_Stop();
}

CSystemFailSig::CSystemFailSig() {}
CSystemFailSig::~CSystemFailSig() {}

CSegmentationFaultSig::CSegmentationFaultSig() {}
CSegmentationFaultSig::~CSegmentationFaultSig() {}

CFloatingPointExceptSig::CFloatingPointExceptSig() {}
CFloatingPointExceptSig::~CFloatingPointExceptSig() {}

CUser1Sig::CUser1Sig() {}
CUser1Sig::~CUser1Sig() {}

void CUser1Sig::handle(int sig)
{
    CMyFileLog log("CUser1Sig", 0x13);
    log("USER1", "SIGUSR1");
    if (m_app)
        m_app->SendTestPacket_2();
}

CUser2Sig::CUser2Sig() {}
CUser2Sig::~CUser2Sig() {}

void CUser2Sig::handle(int sig)
{
    CMyFileLog log("CUser2Sig", 0x20);
    log("USER2", "SIGUSR2");
    if (m_app)
        m_app->TranslateSignal();
}

void CSystemFailSig::handle(int sig)
{
    puts("Recv SIGSYS signal");
    puts("Recv SIGSYS signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
    exit(-1);
}

void CSegmentationFaultSig::handle(int sig)
{
    puts("Recv SIGSEGV signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
}

void CFloatingPointExceptSig::handle(int sig)
{
    puts("Recv SIGFPE signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
}

void CSignal::dump_core_file()
{
    CPacketTracerInstance()->AbsoluteWriteLog();
    struct rlimit rl;
    getrlimit(RLIMIT_CORE, &rl);
    rl.rlim_cur = -1;
    setrlimit(RLIMIT_CORE, &rl);
    abort();
}

void CSignal::attachApp(CApplication* app) { m_app = app; }

// ============================================================
// CSignalTranslator
// ============================================================
CSignalTranslator::CSignalTranslator() {}
CSignalTranslator::~CSignalTranslator() {}

static CSignalTranslator g_signalTranslator;

CSignalTranslator* CSignalTranslatorInstance()
{
    return &g_signalTranslator;
}

char CSignalTranslator::regist_signal(int sig, void (*handler)(int))
{
    struct sigaction act;
    act.sa_handler = handler;
    sigemptyset(&act.sa_mask);
    int flags = 0;
    if (sig == 0xe)
        flags |= 0x20000000;
    else
        flags |= 0x10000000;
    act.sa_flags = flags;
    struct sigaction old;
    if (sigaction(sig, &act, &old) < 0)
    {
        printf("%d signal regist fail\n", sig);
        return 0;
    }
    return 1;
}

void CSignalTranslator::init_signal()
{
    if (!regist_signal(0xf, signal_handler))
        throw CDNFException("regist_signal():SIGTERM");
    if (!regist_signal(0xa, signal_handler))
        throw CDNFException("regist_signal():SIGUSR1");
    if (!regist_signal(0xc, signal_handler))
        throw CDNFException("regist_signal():SIGUSR2");
    if (!regist_signal(0x2, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGINT");
    if (!regist_signal(0xb, signal_handler))
        throw CDNFException("regist_signal():SIGSEGV");
    if (!regist_signal(0x8, signal_handler))
        throw CDNFException("regist_signal():SIGFPE");
    if (!regist_signal(0xd, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGPIPE");
    if (!regist_signal(0x4, signal_handler))
        throw CDNFException("regist_signal():SIGILL");
    if (!regist_signal(0x7, signal_handler))
        throw CDNFException("regist_signal():SIGBUS");
    if (!regist_signal(0x10, signal_handler))
        throw CDNFException("regist_signal():SIGSTKFLT");
    if (!regist_signal(0x17, signal_handler))
        throw CDNFException("regist_signal():SIGURG");
    if (!regist_signal(0x18, signal_handler))
        throw CDNFException("regist_signal():SIGXCPU");
    if (!regist_signal(0x19, signal_handler))
        throw CDNFException("regist_signal():SIGXFSZ");
    if (!regist_signal(0x1f, signal_handler))
        throw CDNFException("regist_signal():SIGSYS");
}

void CSignalTranslator::init_handler(CApplication* app)
{
    m_signals[15] = new CTerminateSig;
    m_signals[15]->attachApp(app);
    for (int i = 0; i <= 0x19; i++)
        m_signals[i] = m_signals[15];
    m_signals[6] = new CSegmentationFaultSig;
    m_signals[6]->attachApp(app);
    m_signals[11] = m_signals[6];
    m_signals[8] = m_signals[6];
    m_signals[2] = m_signals[6];
    m_signals[10] = new CUser1Sig;
    m_signals[10]->attachApp(app);
    m_signals[12] = new CUser2Sig;
    m_signals[12]->attachApp(app);
    m_signals[4] = new CSystemFailSig;
    m_signals[4]->attachApp(app);
    m_signals[7] = m_signals[4];
    m_signals[23] = m_signals[4];
    m_signals[16] = m_signals[4];
}

void CSignalTranslator::clear()
{
    if (m_signals[4])
    {
        delete m_signals[4];
        m_signals[4] = 0;
    }
    if (m_signals[10])
    {
        delete m_signals[10];
        m_signals[10] = 0;
    }
    if (m_signals[12])
    {
        delete m_signals[12];
        m_signals[12] = 0;
    }
    if (m_signals[6])
    {
        delete m_signals[6];
        m_signals[6] = 0;
    }
    if (m_signals[15])
    {
        delete m_signals[15];
        m_signals[15] = 0;
    }
}

void CSignalTranslator::init(CApplication* app)
{
    try
    {
        init_signal();
        init_handler(app);
    }
    catch (CDNFException& e)
    {
        printf("CSignalTranslator Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CSignalTranslator Exception Break");
        throw;
    }
}

void signal_handler(int sig)
{
    CSignalTranslator* t = CSignalTranslatorInstance();
    CSignal* s = t->getSignal(sig);
    s->handle(sig);
}

CSignal* CSignalTranslator::getSignal(int idx) const { return m_signals[idx]; }
