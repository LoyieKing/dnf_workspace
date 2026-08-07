#ifndef AUCTION_AUCTION_H_
#define AUCTION_AUCTION_H_

#include "GlobalInstance.h"

enum PAY_TYPE
{
    PAY_TYPE_GOLD = 0,
    PAY_TYPE_POINT = 1,
};

class Auction
{
public:
    Auction();
    virtual ~Auction();
    void UpdateAveragePrice();
    void ProcessMostRecentExpireItem();
    PAY_TYPE GetPayType()
    {
        return mPayType;
    }
    void SetPayType(PAY_TYPE payType)
    {
        mPayType = payType;
    }

    // Layout placeholder until the Auction TU is reconstructed:
    // vptr@0, then members up to mPayType@0x52c0 (mAuctionDic/Search/... TBD).
    char m_pad[0x52bc];
    PAY_TYPE mPayType;
};

inline Auction* G_Auction()
{
    return nsl::GlobalInstance<Auction>::inst_ptr();
}

#endif // AUCTION_AUCTION_H_
