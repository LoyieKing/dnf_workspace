#ifndef GUILD_INIT_H_
#define GUILD_INIT_H_

#include <string>

class CApplication;

// ---- CAppInit ----
class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
    virtual void Init(CApplication* app, int argc, char** argv) = 0;
    void Load(CApplication* app, int argc, char** argv);
    void Free(CApplication* app);
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

CApplication* CApplicationInstance();

#endif  // GUILD_INIT_H_
