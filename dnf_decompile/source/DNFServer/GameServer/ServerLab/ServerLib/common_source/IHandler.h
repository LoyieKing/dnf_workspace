#ifndef NSL_IHANDLER_H_
#define NSL_IHANDLER_H_

#include <stddef.h>

namespace nsl {

class TCPSendThread;
class ITimeHandler;
class CMsgCell;
class TCPUser;
class Message;

class IHandler
{
public:
    IHandler()
    {
        sendTCP_ = NULL;
        pTimeHandler = NULL;
    }
    virtual ~IHandler();
    virtual void init();
    void setSendThread(TCPSendThread* pSendThread);

protected:
    TCPSendThread* sendTCP_;
    ITimeHandler* pTimeHandler;
};

class INetWorkHandler : public IHandler
{
public:
    typedef unsigned int (INetWorkHandler::*networkFuncType)(CMsgCell*, TCPUser*);

    virtual networkFuncType searchNetworkFunc(int nProtoID) = 0;
};

class IInterHandler : public IHandler
{
public:
    typedef unsigned int (IInterHandler::*interFuncType)(CMsgCell*);

    IInterHandler()
    {
    }
    virtual ~IInterHandler()
    {
    }
    virtual interFuncType searchInterFunc(int nProtoID) = 0;
};

class IDBHandler : public IHandler
{
public:
    typedef unsigned int (IDBHandler::*DBHandlerFunc)(CMsgCell*);

    virtual ~IDBHandler()
    {
    }
    virtual void init()
    {
    }
    virtual DBHandlerFunc searchDBHandlerFunc(int nProtoID) = 0;
};

class ITimeHandler : public IHandler
{
public:
    virtual ~ITimeHandler()
    {
    }
};

} // namespace nsl

#endif // NSL_IHANDLER_H_
