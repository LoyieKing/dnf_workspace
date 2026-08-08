#ifndef COSERVER_SIGNAL_H_
#define COSERVER_SIGNAL_H_

class CApplication;

// CSignal：vptr@0 / app@4（8B）
class CSignal
{
public:
    CSignal();
    virtual ~CSignal();
    virtual void handle(int sig) = 0;
    virtual void dump_core_file();
    void attachApp(CApplication* app);
    CApplication* m_app;  // +4
};

class CTerminateSig : public CSignal
{
public:
    CTerminateSig();
    virtual ~CTerminateSig();
    virtual void handle(int sig);
};

class CSegmentationFaultSig : public CSignal
{
public:
    CSegmentationFaultSig();
    virtual ~CSegmentationFaultSig();
    virtual void handle(int sig);
};

class CUser1Sig : public CSignal
{
public:
    CUser1Sig();
    virtual ~CUser1Sig();
    virtual void handle(int sig);
};

class CUser2Sig : public CSignal
{
public:
    CUser2Sig();
    virtual ~CUser2Sig();
    virtual void handle(int sig);
};

class CSystemFailSig : public CSignal
{
public:
    CSystemFailSig();
    virtual ~CSystemFailSig();
    virtual void handle(int sig);
};

class CFloatingPointExceptSig : public CSignal
{
public:
    CFloatingPointExceptSig();
    virtual ~CFloatingPointExceptSig();
    virtual void handle(int sig);
};

// CSignalTranslator：handler 表 @0..0x68 + 各信号对象
class CSignalTranslator
{
public:
    CSignalTranslator();
    ~CSignalTranslator();
    void clear();
    int init(CApplication* app);
    void init_signal();
    int init_handler(CApplication* app);
    int regist_signal(int sig, void (*handler)(int));
    int getSignal(int sig);

    CSignal* m_handlers[0x1a];  // +0
    CSignal* m_segv;            // +0x18
    CSignal* m_user1;           // +0x28
    CSignal* m_user2;           // +0x30
    CSignal* m_sysfail;         // +0x10
    CSignal* m_terminate;       // +0x3c
};

CSignalTranslator* CSignalTranslatorInstance();

#endif // COSERVER_SIGNAL_H_
