#ifndef RELAY_POOL_H_
#define RELAY_POOL_H_

#include <queue>

#include "RelayException.h"

// 对象池：maxCount@0 / array_@4 / queue<T*>@8（0x30）
template <class T, class TQueue>
class TMemoryPoolStatic
{
public:
    TMemoryPoolStatic() : maxCount_(0), array_(0)
    {
    }
    ~TMemoryPoolStatic()
    {
        shutdown();
    }
    void startup(int maxCount)
    {
        if (array_ != 0)
        {
            throw Exception("repository_ not NULL");
        }
        maxCount_ = maxCount;
        T* p = new T[maxCount];
        for (int i = 0; i < maxCount; i++)
        {
            queue_.push(&p[i]);
        }
        array_ = p;
    }
    T* alloc()
    {
        if (queue_.empty())
        {
            return 0;
        }
        T* p = queue_.front();
        queue_.pop();
        return p;
    }
    void free(T* p)
    {
        if (p == 0)
        {
            throw Exception("cannot free NULL");
        }
        if (array_ == 0)
        {
            throw Exception("repository NULL");
        }
        queue_.push(p);
    }
    void shutdown()
    {
        if (array_ != 0)
        {
            delete[] array_;
            array_ = 0;
        }
    }

private:
    int maxCount_;
    T* array_;
    TQueue queue_;
};

#endif // RELAY_POOL_H_
