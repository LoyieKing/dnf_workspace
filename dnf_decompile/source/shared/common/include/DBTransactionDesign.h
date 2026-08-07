#ifndef NSL_DBTRANSACTIONDESIGN_H_
#define NSL_DBTRANSACTIONDESIGN_H_

#include <string.h>

#include "Thread.h"
#include "AuctionItem.h"

typedef unsigned long long __int64;

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

struct tagAUCTION_DB_REGIST_ITEM : public nsl::DBTR_HEADER
{
    __int64 auction_id;              // @21
    long expire_time;                // @29
    int owner_id;                    // @33
    char owner_name[13];             // @37
    int buyer_id;                    // @50
    char buyer_name[13];             // @54
    int price;                       // @67
    int instant_price;               // @71
    DnfItemInfo item_info;           // @75
    unsigned char owner_type;        // @128
    unsigned int black_point;        // @129
    int unit_price;                  // @133
    ROI_Category _reg_roi_category_key;  // @137
    char owner_nexon_id[32];         // @149
};

struct ROI_AverageKey
{
    unsigned long baseItem_index;              // @0
    ROI_Category option_category;              // @4
    union
    {
        __int64 option_index_key;              // @16
        struct
        {
            short option_index_value[3];
        } _oiv;
    };

    ROI_AverageKey()
    {
        baseItem_index = 0;
        option_index_key = 0;
    }

    bool operator<(const ROI_AverageKey& _rhp) const
    {
        if (baseItem_index == _rhp.baseItem_index)
        {
            if ((unsigned long long)option_index_key == (unsigned long long)_rhp.option_index_key)
            {
                return option_category < _rhp.option_category;
            }
            return (unsigned long long)option_index_key < (unsigned long long)_rhp.option_index_key;
        }
        return baseItem_index < _rhp.baseItem_index;
    }
};

struct ROI_Average_Constraint
{
    int inf_max_price;         // @0
    int inf_min_price;         // @4
    int inf_prob;              // @8
    int inf_limit_count;       // @12
    int inf_base_mul_min_a;    // @16
    int inf_base_mul_max_b;    // @20

    ROI_Average_Constraint()
    {
        inf_max_price = 0xa;
        inf_min_price = 0x154;
        inf_prob = 0x14;
        inf_limit_count = 0x5;
        inf_base_mul_min_a = 0x96;
        inf_base_mul_max_b = 0xfa;
    }

    bool isVaildRange() const
    {
        if ((inf_max_price < inf_min_price) || (inf_prob < 0) || (inf_limit_count < 0))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

struct tagAUCTION_DB_UPPER_BIDDING : public nsl::DBTR_HEADER
{
    __int64 auction_id;      // @21
    int buyer_id;            // @29
    char buyer_name[13];     // @33
    int price;               // @46
};

struct tagAUCTION_DB_DELETE_ITEM : public nsl::DBTR_HEADER
{
    __int64 auction_id;      // @21
};

struct tagAUCTION_DB_UPDATE_ITEM : public nsl::DBTR_HEADER
{
    __int64 auction_id;      // @21
    int instant_price;       // @29
    int add_info;            // @33
};

struct tagAUCTION_DB_BUYER_HISTORY : public nsl::DBTR_HEADER
{
    __int64 auction_id;          // @21
    int pre_buyer_id;            // @29
    int buyer_id;                // @33
    int pre_price;               // @37
    int price;                   // @41
    unsigned int pre_buyer_postal_id;  // @45
};

struct tagAUCTION_DB_EXPIRE_HISTORY : public nsl::DBTR_HEADER
{
    __int64 auction_id;               // @21
    long expire_time;                 // @29
    unsigned char event_type;         // @33
    int owner_id;                     // @34
    int buyer_id;                     // @38
    int price;                        // @42
    DnfItemInfo item_info;            // @46
    unsigned int owner_postal_id;     // @99
    unsigned int buyer_postal_id;     // @103
    int unit_price;                   // @107
    ROI_Category _reg_roi_category_key;  // @111
    int commission;                   // @123
    unsigned char owner_type;         // @127
};

struct tagAUCTION_DB_INSERT_AVERAGE_PRICE : public nsl::DBTR_HEADER
{
    unsigned long item_id;               // @21
    unsigned char upgrade;               // @25
    int average_price;                   // @26
    ROI_AverageKey _roi_average_key;     // @30
    unsigned char seperate_upgrade;      // @54
};

struct tagAUCTION_DB_UPDATE_AVERAGE_PRICE : public nsl::DBTR_HEADER
{
    unsigned long item_id;               // @21
    unsigned char upgrade;               // @25
    int average_price;                   // @26
    ROI_AverageKey _roi_average_key;     // @30
    unsigned int purchase_cnt;           // @54
    unsigned char seperate_upgrade;      // @58
};

struct tagGAME_DB_SEND_PACKAGE : public nsl::DBTR_HEADER
{
    __int64 auction_id;                  // @21
    int owner_id;                        // @29
    unsigned int receiver;               // @33
    unsigned int money;                  // @37
    DnfItemInfo item_info;               // @41
    unsigned short letter_text_length;   // @94
    char letter_text[256];               // @96
    unsigned long temp_item_id;          // @352
};

struct tagGAME_DB_SEND_PACKAGE_BY_EXPIRE : public nsl::DBTR_HEADER
{
    unsigned char package_type;                  // @21
    bool b_exist_buyer;                          // @22
    tagGAME_DB_SEND_PACKAGE send_to_owner;       // @23
    tagGAME_DB_SEND_PACKAGE send_to_buyer;       // @379
};

#pragma pack(pop)

typedef tagAUCTION_DB_GET_REGISTED_ITEM* LPDBTR_AUCTION_DB_GET_REGISTED_ITEM;
typedef tagAUCTION_DB_REGIST_ITEM* LPDBTR_AUCTION_DB_REGIST_ITEM;
typedef tagAUCTION_DB_UPPER_BIDDING* LPDBTR_AUCTION_DB_UPPER_BIDDING;
typedef tagAUCTION_DB_DELETE_ITEM* LPDBTR_AUCTION_DB_DELETE_ITEM;
typedef tagAUCTION_DB_UPDATE_ITEM* LPDBTR_AUCTION_DB_UPDATE_ITEM;
typedef tagAUCTION_DB_BUYER_HISTORY* LPDBTR_AUCTION_DB_BUYER_HISTORY;
typedef tagAUCTION_DB_EXPIRE_HISTORY* LPDBTR_AUCTION_DB_EXPIRE_HISTORY;
typedef tagAUCTION_DB_INSERT_AVERAGE_PRICE* LPDBTR_AUCTION_DB_INSERT_AVERAGE_PRICE;
typedef tagAUCTION_DB_UPDATE_AVERAGE_PRICE* LPDBTR_AUCTION_DB_UPDATE_AVERAGE_PRICE;
typedef tagAUCTION_DB_GET_AVERAGE_PRICE* LPDBTR_AUCTION_DB_GET_AVERAGE_PRICE;
typedef tagGAME_DB_SEND_PACKAGE* LPDBTR_GAME_DB_SEND_PACKAGE;
typedef tagGAME_DB_SEND_PACKAGE_BY_EXPIRE* LPDBTR_GAME_DB_SEND_PACKAGE_BY_EXPIRE;

#endif // NSL_DBTRANSACTIONDESIGN_H_
