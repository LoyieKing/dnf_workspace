// df_guild_r — CAppInit 族 + main
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#include "GuildInit.h"
#include "GuildApp.h"
#include "GuildTable.h"

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
    srand((unsigned int)time(0));
    CAppConfig* config = new CAppConfig;
    app->m_appConfig = config;
    std::string fn(argv[1]);
    config->Check_FileName(fn);
    CServerConfig* serverConfig = new CServerConfig;
    app->m_serverConfig = serverConfig;
    CKillUSRConfig* killConfig = new CKillUSRConfig;
    app->m_killConfig = killConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    if (argv[2] != 0 && strcmp(argv[2], "start") == 0)
    {
        pid_t pid = fork();
        if (pid < 0)
        {
            return -1;
        }
        if (pid != 0)
        {
            exit(0);
        }
        setsid();
        chdir("./");
        umask(0);
    }
    std::string fn(argv[1]);
    return Save_pid(fn) ? 0 : -1;
}

bool CAppStartInit::Save_pid(const std::string& name)
{
    std::string path = "./pid/" + name;
    int fd = ::open(path.c_str(), O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        return false;
    }
    char buf[1024];
    memset(buf, 0, sizeof(buf));
    int len = snprintf(buf, sizeof(buf), "%d\n", (int)getpid());
    ssize_t w = ::write(fd, buf, (size_t)len);
    ::close(fd);
    return w > 0;
}

void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, ...");
    app->Clear();
    std::string fn(argv[1]);
    if (app->Send_Term_Signal(fn) != 0)
    {
        throw CDNFException("CAppStopInit::Init() ...");
    }
}

CAppStopInit::CAppStopInit()
{
}

CAppStopInit::~CAppStopInit()
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
