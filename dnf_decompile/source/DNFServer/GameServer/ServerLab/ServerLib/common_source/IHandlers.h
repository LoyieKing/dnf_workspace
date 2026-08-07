#ifndef NSL_IHANDLERS_H_
#define NSL_IHANDLERS_H_

#include <map>

#include "IHandler.h"

namespace nsl {

class INetWorkHandler;
class IInterHandler;
class IDBHandler;
class ITimeHandler;

class IHandlers
{
public:
    IHandlers()
    {
    }
    ~IHandlers()
    {
    }
    inline void setNetWorkHandler(int idx, INetWorkHandler* pHandler)
    {
        mNetWorkHandlers[idx] = pHandler;
    }
    inline void setInterHandler(int idx, IInterHandler* pHandler)
    {
        mInterHandlers[idx] = pHandler;
    }
    inline void setTimeHandler(int idx, ITimeHandler* pHandler)
    {
        mTimeHandlers[idx] = pHandler;
    }
    inline void setDBHandler(int idx, IDBHandler* pHandler)
    {
        mDBHandlers[idx] = pHandler;
    }
    inline INetWorkHandler* getNetWorkHandler(int idx)
    {
        std::map<int, INetWorkHandler*>::iterator it = mNetWorkHandlers.find(idx);
        if (it == mNetWorkHandlers.end())
        {
            return NULL;
        }
        return it->second;
    }
    inline IInterHandler* getInterHandler(int idx)
    {
        std::map<int, IInterHandler*>::iterator it = mInterHandlers.find(idx);
        if (it == mInterHandlers.end())
        {
            return NULL;
        }
        return it->second;
    }
    inline IDBHandler* getDBHandler(int idx)
    {
        std::map<int, IDBHandler*>::iterator it = mDBHandlers.find(idx);
        if (it == mDBHandlers.end())
        {
            return NULL;
        }
        return it->second;
    }
    inline ITimeHandler* getTimeHandler(int idx)
    {
        return mTimeHandlers[idx];
    }
    inline void setTimeHandleNum(int num)
    {
        mTimeHandlerNum = num;
    }
    inline int getDBHandlerNum()
    {
        return (int)mDBHandlers.size();
    }
    inline int getInterHandlerNum()
    {
        return (int)mInterHandlers.size();
    }

    std::map<int, INetWorkHandler*> mNetWorkHandlers;
    std::map<int, IInterHandler*> mInterHandlers;
    std::map<int, IDBHandler*> mDBHandlers;
    ITimeHandler* mTimeHandlers[10];
    int mInterHandlerNum;
    int mTimeHandlerNum;
};

} // namespace nsl

#endif // NSL_IHANDLERS_H_
