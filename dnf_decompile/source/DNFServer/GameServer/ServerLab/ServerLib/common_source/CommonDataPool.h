#ifndef NSL_COMMONDATAPOOL_H_
#define NSL_COMMONDATAPOOL_H_

#include "DataPool.h"

namespace nsl {

class Message;

class CommonDataPool : public DataPool
{
public:
    CommonDataPool();
    virtual ~CommonDataPool();
    virtual void destroyTimeEntity(void* pEntity);
    Message* getSendMessage(TCPUser* pUser);
    void destroySendMessage(Message* pMsg);
    Message* createMessage(int msgType);
    void destroyMessage(Message* pMsg);
};

} // namespace nsl

#endif // NSL_COMMONDATAPOOL_H_
