#ifndef AUCTION_AUCTION_H_
#define AUCTION_AUCTION_H_

#include "GlobalInstance.h"
#include "AuctionItem.h"
#include "DBTransactionDesign.h"
#include "RDARScriptItemInfo.h"
#include "AuctionPacket.h"
#include "AuctionDictionary.h"

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
    int TransErrToReason(int err);
    int GetAvatarEmblemInfo(int ui_id, stAvatarEmblemInfo_t* pInfo);
    int GetAvatarExpansionInfo(int ui_id, stAvatarExpansionInfo_t* pInfo);
    AuctionDictionaryData* GetAuctionDicData(unsigned long item_id) const
    {
        return ((const AuctionDictionary*)((const char*)this + 0x54))->GetAuctionDicData(item_id);
    }
    int GetAveragePrice(unsigned long item_id, unsigned char upgrade,
                        const ROI_AverageKey& roiKey, unsigned char refine, int* out);
    int SearchByItemId(PSearchByItemId pSearch, unsigned long* pItemIdArray,
                       unsigned int* pTotalNumberOfFound, unsigned short* pNumberOfFound,
                       AuctionItemInfo* pOutAuctionItemInfoArray);
    int SearchByCategory(PSearchByCategory pSearch, unsigned int* pTotalNumberOfFound,
                         unsigned short* pNumberOfFound,
                         AuctionItemInfo* pOutAuctionItemInfoArray);
    int RegistCancel(unsigned int owner_id, unsigned long long auction_id);
    int OpenPrivateStore(unsigned int m_id, int character_num, int* character_ids);
    int GetMyRegistedItemInfo(int owner_id, int* pNum, MyRegistedItemInfo* pOut);
    int GetMyBiddingInfo(int buyer_id, int* pNum, MyBiddingItemInfo* pOut);
    int ClosePrivateStore(unsigned int m_id);
    int BuyItemApiece(unsigned long long auction_id, int buyer_id, int price, int count);
    int Bidding(int buyer_id, const char* buyer_name, unsigned long long auction_id,
                int price, char* out, int& ret);
    int GetNowRegistedItemNum(int owner_id)
    {
        return ((AuctionDictionary*)((char*)this + 0x54))->GetNowRegistedItemNum(owner_id);
    }

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
