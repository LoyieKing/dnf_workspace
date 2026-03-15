#include "ArchiveLog.h"
#include "ConfigFileReader.h"
#include "CoreDump.h"
#include "ProcessManager.h"
#include "SessionManager.h"
#include "cstdio"
#include <cstring>
#include <cerrno>
#include <cstdlib>
#include "ReverseEngineerLib.h"

int command(const char *processName, const char *cmd);

int main(int argc, char **argv) {
    puts("**********************************************************");
    puts("* +---   +-+ +  +----         DUNGEON & FIGHTER          *");
    printf("* |   |  | | |  |                  ver %3d.%3d.%3d.%3d   *\n", 1, 0, 0, 0);
    puts("* |   |  | | |  +----                                    *");
    puts("* |   |  | | |  |      Open Beta Test on 2005.08.10~     *");
    puts("* +---   + +-+  |      Copyright(c) 2004,2005 Neople Co. *");
    puts("**********************************************************");
    REDNF_LOG("Project REDNF :) df_community_r");
    CConfigFileReader cfg;
    cfg.add_tag("ip");
    cfg.add_tag("port");
    cfg.add_tag("domain");
    if (argc == 3) {
        char buffer[255];
        memset(buffer, 0, sizeof buffer);
        // 来自dnf代码内部的一段很奇怪的清0代码。我们改用memset
        //        int *alignedBuffer = buffer;
        //        int alignedSize = 255;
        //        if ((size_t) alignedBuffer & 1) {
        //            buffer[0] = 0;
        //            alignedBuffer = buffer + 1;
        //            alignedSize = 254;
        //        }
        //        if ((size_t) alignedBuffer & 2) {
        //            *(char *) alignedBuffer = 0;
        //            alignedBuffer = (int *) (((size_t) alignedBuffer) + 2);
        //            alignedSize -= 2;
        //        }
        //
        //        for (int i = alignedSize >> 2; i != 0; i--) {
        //            *alignedBuffer = 0;
        //            alignedBuffer = alignedBuffer + (size_t) (((uint8_t) 0) * -2) + 1;
        //        }
        //        if (alignedSize & 2) {
        //            *((uint16_t *) alignedBuffer) = 0;
        //        }
        sprintf(buffer, "./cfg/%s.cfg", argv[1]);
        cfg.ReadConfigFile(buffer);
        if (command(argv[1], argv[2])) {
            // no fork mode
            CCoreDump coreDump;
            CSessionManager sessionManager;
            sessionManager.CreateEvents(100);
            int port = atoi(cfg.get_value("port"));
            const char* ip = cfg.get_value("ip");
            if (sessionManager.TryListen(ip, port)) {
                ArchiveLog("Listen Socket IP:%s, PORT:%s", cfg.get_value("ip"), cfg.get_value("port"));
                printf("Community Server(IP:%s, PORT:%s)\nStart\n", cfg.get_value("ip"), cfg.get_value("port"));
                while (!global_instance::shutdown) {
                    global_instance::current_time = time(NULL);
                    sessionManager.WaitForSessionEvent(10);
                    global_function::sleep(1);
                }
                char pidBuffer[30];
                memset(pidBuffer, 0, sizeof pidBuffer);
                sprintf(pidBuffer, "./pid/%s.pid", argv[1]);
                if (remove(pidBuffer) == -1) {
                    printf("FAIL TO DELETE PID FILE ERROR: %s\n", strerror(errno));
                }
            }

        } else {
            return 0;
        }

    } else {
        puts("wrong parameter!");
        puts("[execute filename]  [cfg filename]  [command]");
        return 0;
    }
}

int command(const char *processName, const char *cmd) {
    CProcessManager processManager;
    int cmp = strcmp("nofork", cmd);
    if (cmp) {
        cmp = strcmp("start", cmd);
        if (cmp == 0) {
            // 来自反编译/DWARF 的推断：check_pidfile 返回非0表示PID文件已存在，应退出
            bool pidExists = processManager.check_pidfile(processName);
            if (pidExists) {
                puts("exist pid file!");
                return 0;
            }
            CProcessManager::Daemon();
            processManager.WritePID(processName);
        } else {
            cmp = strcmp("stop", cmd);
            if (cmp == 0) {
                processManager.SendShutdownSignal(processName);
                return 0;
            }
        }
    }
    return 1;
}
