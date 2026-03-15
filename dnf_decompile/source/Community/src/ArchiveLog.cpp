//
// Created by Loyie King on 2024/3/10.
//

#include "ArchiveLog.h"

#include <cstdarg>
#include <cstring>

CArchiveLog::CArchiveLog() : logFile(NULL), time() {
}

int CArchiveLog::CloseFile() {
    if (logFile != NULL) {
        fclose(logFile);
        logFile = NULL;
    }
    return 1;
}

int CArchiveLog::OpenFile(const char *file) {
    if (logFile == NULL) {
        FILE* f = fopen(file, "ab");
        logFile = f;
        if (logFile == NULL) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int CArchiveLog::CreateLogFile(DateTime &date) {
    int buffer[256];
    int *p = buffer;
    for (int i = 256; i != 0; --i) {
        *p = 0;
        p++;
    }
    sprintf((char *)buffer, "%s%04d%02d%02d.log", logPrefix, (int)date.year, (int)date.month, (int)date.day);
    return OpenFile((char *)buffer);
}

int CArchiveLog::CreateLogFile(const char *prefix) {
    DateTime time;
    this->logPrefix = prefix;
    return CreateLogFile(time);
}

int CArchiveLog::WriteLog(const char *log) {
    if (logFile == NULL) {
        return 0;
    }

    DateTime now;
    bool status = now.DiffDay(this->time);
    if (status) {
        // not today
        CloseFile();
        status = CreateLogFile(now);
        if (status != 1) {
            return 0;
        }
    }
    if (&this->time != &now) {
        memcpy(&this->time, &now, sizeof(DateTime));
    }
    fprintf(this->logFile, "[%02d:%02d:%02d] %s\r\n", (int)now.hour, (int)now.min, (int)now.sec, log);
    printf("[%02d:%02d:%02d] %s\r\n", (int)now.hour, (int)now.min, (int)now.sec, log);
    fflush(this->logFile);

    return 1;
}

CArchiveLog::~CArchiveLog() {
    CloseFile();
}

ArchiveLog::ArchiveLog(const char *log, ...) {
    char buffer[4096];
    static CArchiveLog archive_log;
    static bool bArchiveLog;

    if (!bArchiveLog) {
        archive_log.CreateLogFile("log/Log");
        bArchiveLog = true;
    }

    memset(buffer, 0, 4096);

    va_list args;
    va_start(args, log);
    vsprintf(buffer, log, args);
    va_end(args);

    archive_log.WriteLog(buffer);
}
