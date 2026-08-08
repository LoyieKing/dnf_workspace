#ifndef GUILD_INIT_H_
#define GUILD_INIT_H_

class CApplication;

// ---- CAppInit ----
class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    virtual void Load(CApplication* app, int argc, char** argv);
    virtual void Free(CApplication* app);
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    virtual void Load(CApplication* app, int argc, char** argv);
    virtual void Free(CApplication* app);
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    virtual void Load(CApplication* app, int argc, char** argv);
    virtual void Free(CApplication* app);
};

CApplication* CApplicationInstance();

#endif  // GUILD_INIT_H_
