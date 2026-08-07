#ifndef NSL_DBTRANSACTIONDESIGN_H_
#define NSL_DBTRANSACTIONDESIGN_H_

namespace nsl {

#pragma pack(push, 1)
struct DBTR_HEADER
{
    int dbId;
    int dbtrId;
    int userid;
    bool mbWillDelete;
    int mOwnerWorkId;
    unsigned int sLength;

    DBTR_HEADER()
    {
    }

    int getSize()
    {
        return sLength;
    }

    void setSize(int n)
    {
        sLength = n;
    }

    char* _getData()
    {
        return (char*)this + sizeof(DBTR_HEADER);
    }

    DBTR_HEADER* _getHeader()
    {
        return this;
    }
};

#pragma pack(pop)

typedef DBTR_HEADER* LPDBTR_HEADER;

} // namespace nsl

#endif // NSL_DBTRANSACTIONDESIGN_H_
