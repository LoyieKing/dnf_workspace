#ifndef COSERVER_INIT_H_
#define COSERVER_INIT_H_

#include <string>

class CApplication;

// CAppInit：vptr（4）；vtable：dtor / dtor / Init
class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
    virtual void Init(CApplication* app, int argc, char** argv) = 0;
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    int Init_Daemon(int argc, char** argv);
    bool Save_pid(const std::string& name);
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
    virtual void Init(CApplication* app, int argc, char** argv);
};

#endif // COSERVER_INIT_H_
