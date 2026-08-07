//
// Created by Loyie King on 2024/3/10.
//
#pragma once

#include <cstdio>

#include "DateTime.h"


class ArchiveLog {
public:
    ArchiveLog(const char *log, ...);
};

class CArchiveLog {
    FILE *logFile;
    DateTime time;
    const char *logPrefix;

private:
    int CloseFile();

    bool OpenFile(const char *file);

public:
    CArchiveLog();

    bool CreateLogFile(DateTime &date);  // 原始：bool 返回（WriteLog 调用处 xor 惯用法）

    bool CreateLogFile(const char *prefix);

    int WriteLog(const char *log);

    ~CArchiveLog();
};
