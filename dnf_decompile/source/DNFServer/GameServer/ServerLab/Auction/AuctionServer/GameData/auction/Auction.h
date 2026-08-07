#ifndef AUCTION_AUCTION_H_
#define AUCTION_AUCTION_H_

#include "GlobalInstance.h"
#include "AuctionItem.h"
#include "DBTransactionDesign.h"
#include "RDARScriptItemInfo.h"

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
    int GetExpireTime()
    {
        return mExpireTime;
    }
    int GetSystemAuctionExpireTime()
    {
        return mSystemAuctionExpireTime;
    }

    // Declarations for methods referenced by HandlerFor_DB_ (stub bodies in Auction.cpp
    // until the Auction TU is reconstructed).
    CNRDItemInfoList::STItemInfo* GetItemInfo(unsigned long item_id) const;
    bool IsAvatarCategory(int category);
    int AddAvatarEmblemInfo(int ui_id, const stAvatarEmblemInfo_t* pInfo);
    int AddAvatarExpansionInfo(int ui_id, const stAvatarExpansionInfo_t* pInfo);
    void SetMaxHistoryAuctionId(unsigned long long id);
    void SendMessageToMonitor(unsigned int characId, unsigned char type, unsigned long itemId,
                              const RandomOption& randomOption);
    int RegistItem(int ownerId, const char* ownerName, char ownerType,
                   int price, int instantPrice, unsigned int black_point, int unitPrice,
                   const ROI_Category& roiKey, char* ownerNexonId, DnfItemInfo itemInfo,
                   unsigned long long& auctionId, long expireTime, int buyerId,
                   const char* buyerName, bool bFlag);
    void AddItemAveragePrice(unsigned long item_id, unsigned char upgrade,
                             int average_price, unsigned int purchase_cnt,
                             const ROI_AverageKey& roiKey, unsigned char refine, bool bFlag);
    void Set_ROI_Constraint(const ROI_Average_Constraint& constraint);

    // Layout placeholder until the Auction TU is reconstructed:
    // vptr@0, then members up to mPayType@0x52c0 (mAuctionDic/Search/... TBD).
    char m_pad0[0x48];          // @4
    int mExpireTime;            // @0x4c
    int mSystemAuctionExpireTime;  // @0x50
    char m_pad1[0x526c];        // @0x54 .. 0x52c0
    PAY_TYPE mPayType;
};

inline Auction* G_Auction()
{
    return nsl::GlobalInstance<Auction>::inst_ptr();
}

#endif // AUCTION_AUCTION_H_
