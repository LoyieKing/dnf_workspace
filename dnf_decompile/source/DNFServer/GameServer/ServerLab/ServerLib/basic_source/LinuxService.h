#ifndef NSL_LINUXSERVICE_H_
#define NSL_LINUXSERVICE_H_

#include "Thread.h"

namespace nsl {

class ServiceInfo
{
public:
    ServiceInfo();
    void setInfo(const char* a1, const char* a2, const char* a3, const char* a4);
    void setPIDFileName(const char* fileName);
    char* getPIDFileName();
    void setRunAsService(bool bRun);
};

class LinuxService : public ServiceInfo
{
public:
    LinuxService();
    virtual ~LinuxService();
    static LinuxService* getInstance();
    void stopPending();
    void setRunning();
    void setStopped();
};

} // namespace nsl

#endif // NSL_LINUXSERVICE_H_
