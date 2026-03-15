//
// Created by Loyie King on 2024/3/7.
//

#include "ProcessManager.h"

#include <dirent.h>
#include <signal.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <unistd.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>

void CProcessManager::_makeDir(char *dirName) {
    DIR *dir = opendir(dirName);
    if (dir == NULL) {
        mkdir(dirName, S_IRWXU | S_IRWXG | S_IRWXO /* 0x1ff,777*/);
    }
}

bool CProcessManager::check_pidfile(const char *processName) {
    char buffer[30];
    memset(buffer, 0, 30);
    sprintf(buffer, "./pid/%s.pid", processName);
    puts(buffer);
    return access(buffer, F_OK);
}

int CProcessManager::Daemon() {
    pid_t pid = fork();
    if (pid < 0) {
        return 0xffffffff;
    } else {
        if (pid != 0) {
            exit(0);
        }
        setsid();
        chdir("./");
        umask(0);
    }
    return 0;
}

void CProcessManager::SendShutdownSignal(const char *processName) {
    char buffer[30];
    memset(buffer, 0, 30);
    sprintf(buffer, "pid/%s.pid", processName);
    FILE *file = fopen(buffer, "r");
    if (file == NULL) {
        // 原文是"%s process id file open 실패\n"，EUC_KR编码
        printf("%s process id file open failed\n", buffer);
    } else {
        int pid;
        fscanf(file, "%d", &pid);
        if (pid < 1) {
            fclose(file);
            // 原文是"%d번의 잘못된 process id\n"，EUC_KR编码
            printf("Incorrect process id %d\n", pid);
        } else {
            int result = kill(pid, SIGUSR2);
            if (result < 0) {
                fclose(file);
                // 原文是"%d번 process로 종료 signal 송신 실패"，EUC_KR编码
                printf("Failed to send termination signal to process %d", pid);
            } else {
                printf("SEND SHUTDOWN SIGNAL TO %d\n", pid);
                fclose(file);
            }
        }
    }
}

int CProcessManager::WritePID(const char *processName) {
    char pidBuffer[512];
    char pidPath[30];
    _makeDir(const_cast<char*>(processName));
    memset(pidPath, 0, 30);
    sprintf(pidPath, "./pid/%s.pid", processName);
    int file = open(pidPath, O_CREAT | O_RDWR /* 0102 */, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH /* 0644 */);
    if (file < 0) {
        return 0;
    } else {
        memset(pidBuffer, 0, 512);
        long pid = getpid();
        sprintf(pidBuffer, "%ld\n", pid);
        size_t len = strlen(pidBuffer);
        if (write(file, pidBuffer, len) < 0) {
            close(file);
            return 0;
        } else {
            return 1;
        }
    }
}
