//
// Created by Loyie King on 2024/3/7.
//

#pragma once

class CProcessManager {
public:
    void _makeDir(char *dirName);

    bool check_pidfile(const char *processName);

    static int Daemon();

    void SendShutdownSignal(const char *processName);

    int WritePID(const char *processName);
};
