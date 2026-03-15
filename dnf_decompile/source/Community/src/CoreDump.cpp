//
// Created by Loyie King on 2024/3/10.
//

#include "CoreDump.h"

#include <sys/resource.h>

#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "global.h"

typedef void func_void_int(int);

void omll_dump_core_file() {
    // TODO: what's this? arounded by DEBUG marco?
}

void signal_handler(int signal) {
    REDNF_LOG("Recieve %d signal.", signal);
    switch (signal) {
        case SIGILL:
        case SIGBUS:
        case SIGSTKFLT:
        case SIGURG:
        case SIGXCPU:
        case SIGXFSZ:
        case SIGSYS:
            printf("Recv %d signal --> process is terminated abnormaly.\n", signal);
            omll_dump_core_file();
            exit(-1);
        case SIGABRT:
        case SIGSEGV:
            puts("Recv SIGSEGV signal --> make Dump Core file.");
            omll_dump_core_file();
            break;
        case SIGFPE:
            puts("Recv FPE signal");
            omll_dump_core_file();
            break;
        case SIGUSR2:
            global_instance::shutdown = true;
            break;
        case SIGTERM:
            puts("RECV SIGTERM");
    }
}

bool regist_signal(int signal, func_void_int *handler) {
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = handler;
    sigemptyset(&sa.sa_mask);
    if (signal == SIGALRM) {
        sa.sa_flags = SA_INTERRUPT /*0x20000000*/;
    } else {
        sa.sa_flags = SA_RESTART /*0x10000000*/;
    }
    struct sigaction uap;
    memset(&uap, 0, sizeof(uap));
    int errno = sigaction(signal, &sa, &uap);
    if (-1 >= errno) {
        // 原文是"%d번 signal 등록 실패"，EUC_KR编码
        printf("Failed to register signal %d", signal);
    }
    return -1 < errno;
}

bool regist_signals() {
    bool register_success;

#define REGIST_SIGNAL(signal, handler)                     \
    {                                                      \
        register_success = regist_signal(signal, handler); \
        if (register_success != 1) {                       \
            return false;                                  \
        }                                                  \
    }

    REGIST_SIGNAL(SIGTERM, signal_handler);
    REGIST_SIGNAL(SIGUSR1, signal_handler);
    REGIST_SIGNAL(SIGUSR2, signal_handler);
    REGIST_SIGNAL(SIGPIPE, (func_void_int *)0x1);
    REGIST_SIGNAL(SIGSEGV, signal_handler);
    REGIST_SIGNAL(SIGFPE, signal_handler);
    REGIST_SIGNAL(SIGILL, signal_handler);
    REGIST_SIGNAL(SIGBUS, signal_handler);
    REGIST_SIGNAL(SIGSTKFLT, signal_handler);
    REGIST_SIGNAL(SIGURG, signal_handler);
    REGIST_SIGNAL(SIGXCPU, signal_handler);
    REGIST_SIGNAL(SIGXFSZ, signal_handler);
    REGIST_SIGNAL(SIGSYS, signal_handler);

#undef REGIST_SIGNAL

    return true;
}

CCoreDump::CCoreDump() {
    bool resigt_success = regist_signals();
    if (resigt_success) {
        rlimit rl;
        getrlimit(RLIMIT_CORE, &rl);
        rl.rlim_cur = 0xffffffff;
        setrlimit(RLIMIT_CORE, &rl);
    }
}
CCoreDump::~CCoreDump() {
}
