#ifndef NSL_IAREA_H_
#define NSL_IAREA_H_

#include <map>

namespace nsl {

class IMessageStruct;

class IArea
{
public:
    IArea();
    virtual ~IArea();
    virtual void setBackServerKey(int key) = 0;
    virtual int getBackServerKey() = 0;
    virtual bool regist(unsigned int key, IMessageStruct* pObj) = 0;
    virtual bool unregist(unsigned int key) = 0;
    virtual void notifyAllAreaMember(int msgType, char* pMsg, int size) = 0;
    virtual IMessageStruct* getMemberAt(unsigned int key) = 0;
    virtual IMessageStruct* getMemberFirst() = 0;
    virtual int getMemberNum() = 0;
    virtual void* getBeginIter() = 0;
    virtual bool isIterEnd(void* iter) = 0;
    virtual IMessageStruct* getValueFromIter(void* iter) = 0;

    std::map<unsigned int, IMessageStruct*> mMapObj;
    void* mMapIter;
    int mMapIndex;
};

} // namespace nsl

#endif // NSL_IAREA_H_
