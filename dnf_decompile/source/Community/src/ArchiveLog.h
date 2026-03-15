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

    int OpenFile(const char *file);

public:
    CArchiveLog();

    int CreateLogFile(DateTime &date);

    int CreateLogFile(const char *prefix);

    int WriteLog(const char *log);

    ~CArchiveLog();
};