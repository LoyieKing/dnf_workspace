#ifndef NSL_IHANDLER_H_
#define NSL_IHANDLER_H_

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
    virtual ~IHandler()
    {
    }
    virtual void init(TCPSendThread* pSendThread) = 0;
    void setSendThread(TCPSendThread* pSendThread)
    {
        sendTCP_ = pSendThread;
    }

protected:
    TCPSendThread* sendTCP_;
    ITimeHandler* pTimeHandler;
};

class INetWorkHandler : public IHandler
{
public:
    typedef int (INetWorkHandler::*networkFuncType)(CMsgCell*, TCPUser*);

    virtual networkFuncType searchNetworkFunc(int nProtoID) = 0;
};

class IInterHandler : public IHandler
{
public:
    typedef int (IInterHandler::*interFuncType)(CMsgCell*);

    virtual interFuncType searchInterFunc(int nProtoID) = 0;
};

class IDBHandler : public IHandler
{
public:
    typedef int (IDBHandler::*DBHandlerFunc)(CMsgCell*);

    virtual DBHandlerFunc searchDBHandlerFunc(int nProtoID) = 0;
};

class ITimeHandler : public IHandler
{
public:
    virtual void init(TCPSendThread* pSendThread) = 0;
};

} // namespace nsl

#endif // NSL_IHANDLER_H_
