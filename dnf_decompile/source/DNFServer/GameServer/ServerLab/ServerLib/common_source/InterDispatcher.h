#ifndef NSL_INTERDISPATCHER_H_
#define NSL_INTERDISPATCHER_H_

#include <map>

namespace nsl {

class IMessageStruct;
class IInterHandler;

class InterDispatcher
{
public:
    InterDispatcher();
    void setHandler(int idx, IInterHandler* pHandler);
    void dispatch(IMessageStruct* pMsg);

    std::map<int, IInterHandler*> mHandlers;
};

} // namespace nsl

#endif // NSL_INTERDISPATCHER_H_
