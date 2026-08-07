#ifndef NSL_TCPDISPATCHER_H_
#define NSL_TCPDISPATCHER_H_

#include <map>

namespace nsl {

class TCPUser;
class Message;
class INetWorkHandler;

class TCPDispatcher
{
public:
    TCPDispatcher();
    void setHandler(int idx, INetWorkHandler* pHandler);
    void SetMaxCategory(int maxCategory);
    void dispatch(TCPUser* pUser, Message* pMsg);

    std::map<int, INetWorkHandler*> mHandlers;
    int mMaxCategory;
};

} // namespace nsl

#endif // NSL_TCPDISPATCHER_H_
