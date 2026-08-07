#ifndef NSL_TE_ENTITY_H_
#define NSL_TE_ENTITY_H_

#include "TimerThread.h"
#include "InternalMsg.h"

namespace nsl {

template <class T>
class TE_Entity : public ITimeEntity
{
public:
    typedef unsigned int (T::*TimeFunc)(InternalMsg*);

    TE_Entity()
    {
        m_fpt = NULL;
        m_pt2Object = NULL;
    }
    virtual ~TE_Entity()
    {
    }
    virtual int operator()()
    {
        if (m_fpt != NULL)
        {
            (m_pt2Object->*m_fpt)(pmMsg);
        }
        return 0;
    }
    void regist(int proc_id, unsigned int check_period, unsigned int proc_count,
                void* pTimeHandler, TimeFunc fpt)
    {
        this->proc_id = proc_id;
        this->check_period = check_period;
        this->proc_count = proc_count;
        this->m_fpt = fpt;
        this->m_pt2Object = (T*)pTimeHandler;
    }

    TimeFunc m_fpt;
    T* m_pt2Object;
};

} // namespace nsl

#endif // NSL_TE_ENTITY_H_
