#ifndef NSL_DBTRANSACTIONDESIGN_H_
#define NSL_DBTRANSACTIONDESIGN_H_

#include <string.h>

#include "Thread.h"

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

struct tagAUCTION_DB_PING : public DBTR_HEADER
{
    tagAUCTION_DB_PING()
    {
        memset(this, 0, sizeof(tagAUCTION_DB_PING));
        dbId = 1;
        dbtrId = 9;
        mOwnerWorkId = tlsThreadId;
        mbWillDelete = false;
        setSize(sizeof(tagAUCTION_DB_PING));
    }
};

} // namespace nsl

#endif // NSL_DBTRANSACTIONDESIGN_H_
