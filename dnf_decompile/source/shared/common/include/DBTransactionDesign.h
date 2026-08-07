#ifndef NSL_DBTRANSACTIONDESIGN_H_
#define NSL_DBTRANSACTIONDESIGN_H_

#include <string.h>

#include "Thread.h"
#include "AuctionItem.h"

typedef long long __int64;

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

#pragma pack(push, 1)
struct tagAUCTION_DB_PING : public nsl::DBTR_HEADER
{
    tagAUCTION_DB_PING()
    {
        memset(this, 0, sizeof(tagAUCTION_DB_PING));
        dbId = 1;
        dbtrId = 9;
        mOwnerWorkId = nsl::tlsThreadId;
        mbWillDelete = false;
        setSize(sizeof(tagAUCTION_DB_PING));
    }
};

struct tagAUCTION_DB_GET_AVERAGE_PRICE : public nsl::DBTR_HEADER
{
    unsigned long item_id;
    unsigned char upgrade;
    int average_price;
    ROI_Category ROI_Key;

    tagAUCTION_DB_GET_AVERAGE_PRICE()
    {
        memset(this, 0, sizeof(tagAUCTION_DB_GET_AVERAGE_PRICE));
        dbId = 1;
        dbtrId = 4;
        mOwnerWorkId = nsl::tlsThreadId;
        mbWillDelete = false;
        setSize(sizeof(tagAUCTION_DB_GET_AVERAGE_PRICE));
    }
};

struct tagAUCTION_DB_GET_ROI_AVERAGE_PRICE_INFO : public nsl::DBTR_HEADER
{
    tagAUCTION_DB_GET_ROI_AVERAGE_PRICE_INFO()
    {
        memset(this, 0, sizeof(tagAUCTION_DB_GET_ROI_AVERAGE_PRICE_INFO));
        dbId = 1;
        dbtrId = 0x12;
        mOwnerWorkId = nsl::tlsThreadId;
        mbWillDelete = false;
        setSize(sizeof(tagAUCTION_DB_GET_ROI_AVERAGE_PRICE_INFO));
    }
};

struct tagAUCTION_DB_GET_REGISTED_ITEM : public nsl::DBTR_HEADER
{
    __int64 auction_id;
    long expire_time;
    int owner_id;
    char owner_name[13];
    int buyer_id;
    char buyer_name[13];
    int price;
    int instant_price;
    DnfItemInfo item_info;
    unsigned char owner_type;
    unsigned int black_point;
    int unit_price;
    ROI_Category _reg_roi_category_key;
    char owner_nexon_id[32];

    tagAUCTION_DB_GET_REGISTED_ITEM()
    {
        memset(this, 0, sizeof(tagAUCTION_DB_GET_REGISTED_ITEM));
        dbId = 1;
        dbtrId = 0;
        mOwnerWorkId = nsl::tlsThreadId;
        mbWillDelete = false;
        setSize(sizeof(tagAUCTION_DB_GET_REGISTED_ITEM));
    }
};

#pragma pack(pop)

#endif // NSL_DBTRANSACTIONDESIGN_H_
