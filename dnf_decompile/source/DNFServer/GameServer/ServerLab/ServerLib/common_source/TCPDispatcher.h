#ifndef NSL_TCPDISPATCHER_H_
#define NSL_TCPDISPATCHER_H_

namespace nsl {

class TCPUser;
class Message;
class INetWorkHandler;
class NullSessionHandler;

class TCPDispatcher
{
public:
    TCPDispatcher();
    void SetMaxCategory(int Category)
    {
        MaxCategory = Category;
    }
    void SetNullSessionHandler(NullSessionHandler* handler)
    {
        NullHandler = handler;
    }
    bool dispatch(TCPUser* u, Message* msg);

    int MaxCategory;
    NullSessionHandler* NullHandler;
};

} // namespace nsl

#endif // NSL_TCPDISPATCHER_H_
