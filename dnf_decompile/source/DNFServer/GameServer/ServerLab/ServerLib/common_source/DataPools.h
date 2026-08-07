#ifndef NSL_DATAPOOLS_H_
#define NSL_DATAPOOLS_H_

namespace nsl {

class DataPool;
class CommonDataPool;

class DataPools
{
public:
    DataPools();
    DataPool* getDataPool();
    void setDataPool(DataPool* pDataPool);
    CommonDataPool* getCommonDataPool(int idx);
    void setCommonDataPool(int idx, CommonDataPool* pPool);

    DataPool* dataPool_;
    CommonDataPool* commonDataPool_[5];
};

} // namespace nsl

#endif // NSL_DATAPOOLS_H_
