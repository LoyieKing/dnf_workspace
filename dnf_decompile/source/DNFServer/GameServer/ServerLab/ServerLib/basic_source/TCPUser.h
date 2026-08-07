#ifndef NSL_TCPUSER_H_
#define NSL_TCPUSER_H_

#include <deque>

#include "Message.h"
#include "RecvBuffer.h"
#include "ThreadLock.h"

namespace nsl {

class TCPSocket;
class ISession;
class WorkThread;
class RecvBuffer;

class TCPUser
{
public:
    TCPUser();
    ~TCPUser();
    void onRead();
    void onWriteByCMsg(void* pMsg);
    void onError(int err);
    void onClose();
    void onPassiveClose();
    void onActiveClose();

    void setSendDataType(ENUM_DATA_TYPE type);
    void setRecvDataType(ENUM_DATA_TYPE type);
    ENUM_DATA_TYPE getSendDataType();
    ENUM_DATA_TYPE getRecvDataType();
    void setSocket(TCPSocket* pSock);
    TCPSocket* getSocket();
    int getHandle();
    void setNeedReconnect(bool bNeed);
    bool getNeedReconnect();
    void initialize();
    void shutdown();
    void startupAfterSetSocket();
    void onPopForTerminated();
    void setLastAccessTime();
    __int64 getLastAccessTime();
    bool isAboutToDisconnect();
    bool isDisconnected();
    void postDisconnected(int reason);
    void setSession(ISession* pSession);
    void setWorkThread(WorkThread* pWorkThread);
    WorkThread* getWorkThread();
    ISession* getSession();
    unsigned int getUserId();
    bool isBindedSession();
    void setBindedSession(bool bBinded);
    bool isPassiveCloseSyncByWorker();
    void setPassiveSyncByWorker(bool bSync);
    bool isActiveCloseSyncByWorker();
    void setActiveSyncByWorker(bool bSync);
    Message* PopSendMessage();
    void PushSendMessage(Message* pMsg);
    void PushWouldBlockMessage(Message* pMsg);
    void ClearRecvMsgs();
    void IncPendingWorkNum();
    void DecPendingWorkNum();
    void IncPendingSendNum();
    void DecPendingSendNum();
    unsigned int GetPendingWorkNum();
    unsigned int GetPendingSendNum();
    void SetSending(bool bSending);
    bool IsSending();
    void SetWorking(bool bWorking);
    bool IsWorking();
    int GetMaxPacketSize();

    ENUM_DATA_TYPE mSendDataType;
    ENUM_DATA_TYPE mRecvDataType;
    int nReason_;
    int m_PosByWouldBlock;
    int m_SizeByWouldBlock;
    bool bDisconnected_;
    bool bAboutToDisconnect_;
    bool needReconnect_;
    TCPSocket* pSock_;
    ISession* pSession;
    __int64 tickLast_;
    __int64 DisLast_;
    unsigned int mUserId;
    WorkThread* pmWorkThread;
    bool mbPassiveCloseSyncByWorker;
    bool mbActiveCloseSyncByWorker;
    std::deque<Message*> wouldBlockQueue;
    std::deque<Message*> mSendMessageQueue;
    RecvBuffer mRecvBuffer;
    int mMaxPacketSize;
    ThreadLock mPendingSendLock;
    bool mbBindedSession;
    unsigned int mPendingSend;
    unsigned int mPendingWork;
    bool mbSending;
    bool mbWorking;
};

} // namespace nsl

#endif // NSL_TCPUSER_H_
