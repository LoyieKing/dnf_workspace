// df_statics_r — CAppInit/CAppStartInit/CAppStopInit
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>

#include "StaticsInit.h"
#include "StaticsApp.h"
#include "StaticsServer.h"
#include "StaticsTable.h"
#include "StaticsMisc.h"

CAppInit::CAppInit()
{
}

CAppInit::~CAppInit()
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
    srand(time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(argv[1]);
    app->m_serverConfig = new CServerConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    char* cmd = argv[2];
    if (strcmp(cmd, "start") == 0)
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
    if (Save_pid(argv[1]) == 1)
    {
        return 0;
    }
    return -1;
}

int CAppStartInit::Save_pid(const std::string& name)
{
    std::string path = "./pid/" + name + ".pid";
    int fd = open(path.c_str(), 0x42, 0x1a4);
    if (fd < 0)
    {
        return 0;
    }
    char buf[1024];
    memset(buf, 0, 0x400);
    sprintf(buf, "%ld\n", (long)getpid());
    ssize_t n = write(fd, buf, strlen(buf));
    if (n < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

CAppStopInit::CAppStopInit()
{
}

CAppStopInit::~CAppStopInit()
{
}

void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, \xb0\xfc\xb8\xae\xc0\xda\xbf\xa1 \xc0\xc7\xc7\xd8 "
         "\xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1 \xb5\xc7\xbe\xfa\xbd\xc0\xb4\xcf\xb4\xd9.");
    app->Clear();
    if (app->Send_Term_Signal(argv[1]) != 1)
    {
        throw CDNFException("CAppStopInit::Init()\xbf\xa1 \xc0\xc7\xc7\xd8 "
                            "\xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xb5\xc7\xbe\xfa\xc0\xbd!");
    }
    throw CDNFException("CAppStopInit::Init()\xbf\xa1 \xc0\xc7\xc7\xd8 "
                        "\xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xb5\xc7\xbe\xfa\xc0\xbd!_1");
}
