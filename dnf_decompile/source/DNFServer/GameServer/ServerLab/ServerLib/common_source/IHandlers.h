#ifndef NSL_IHANDLERS_H_
#define NSL_IHANDLERS_H_

#include <map>

namespace nsl {

class INetWorkHandler;
class IInterHandler;
class IDBHandler;
class ITimeHandler;

class IHandlers
{
public:
    void setNetWorkHandler(int idx, INetWorkHandler* pHandler);
    void setInterHandler(int idx, IInterHandler* pHandler);
    void setTimeHandler(int idx, ITimeHandler* pHandler);
    void setDBHandler(int idx, IDBHandler* pHandler);
    INetWorkHandler* getNetWorkHandler(int idx);
    IInterHandler* getInterHandler(int idx);
    IDBHandler* getDBHandler(int idx);
    ITimeHandler* getTimeHandler(int idx);
    void setTimeHandleNum(int num);
    int getDBHandlerNum();
    int getInterHandlerNum();

    std::map<int, INetWorkHandler*> mNetWorkHandlers;
    std::map<int, IInterHandler*> mInterHandlers;
    std::map<int, IDBHandler*> mDBHandlers;
    ITimeHandler* mTimeHandlers[10];
    int mInterHandlerNum;
    int mTimeHandlerNum;
};

} // namespace nsl

#endif // NSL_IHANDLERS_H_
