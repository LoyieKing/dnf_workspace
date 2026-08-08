// df_guild_r — CAppInit 族 + main
#include <stdio.h>

#include "GuildInit.h"
#include "GuildApp.h"

CAppInit::CAppInit()
{
}

CAppInit::~CAppInit()
{
}

void CAppInit::Init(CApplication* app, int argc, char** argv)
{
}

void CAppInit::Load(CApplication* app, int argc, char** argv)
{
}

void CAppInit::Free(CApplication* app)
{
}

CAppStartInit::CAppStartInit()
{
}

CAppStartInit::~CAppStartInit()
{
}

void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
}

void CAppStartInit::Load(CApplication* app, int argc, char** argv)
{
}

void CAppStartInit::Free(CApplication* app)
{
}

CAppStopInit::CAppStopInit()
{
}

CAppStopInit::~CAppStopInit()
{
}

void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
}

void CAppStopInit::Load(CApplication* app, int argc, char** argv)
{
}

void CAppStopInit::Free(CApplication* app)
{
}

CApplication* CApplicationInstance()
{
    static CApplication instance;
    return &instance;
}

int main(int argc, char** argv)
{
    CApplication* app = CApplicationInstance();
    app->Create(argc, argv);
    return 0;
}
