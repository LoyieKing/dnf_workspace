#ifndef AUCTION_AUCTION_H_
#define AUCTION_AUCTION_H_

#include "GlobalInstance.h"
#include "AuctionItem.h"
#include "DBTransactionDesign.h"
#include "RDARScriptItemInfo.h"
#include "AuctionPacket.h"
#include "Search.h"
#include "AuctionDictionary.h"

class AuctionDictionary;

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
    void UpdateAveragePrice()
    {
        mAuctionDic.UpdateAveragePrice();
    }
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
    double GetCommission()
    {
        return mAUCTION_COMMISSION;
    }
    double GetVIPCommission()
    {
        return mAUCTION_VIP_COMMISSION;
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
    int AddItemAveragePrice(unsigned long item_id, unsigned char upgrade,
                            int average_price, unsigned int purchase_cnt,
                            const ROI_AverageKey& roiKey, unsigned char refine, bool bFlag);
    void Set_ROI_Constraint(const ROI_Average_Constraint& constraint);
    int TransErrToReason(int err);
    int GetAvatarEmblemInfo(int ui_id, stAvatarEmblemInfo_t* pInfo);
    int GetAvatarExpansionInfo(int ui_id, stAvatarExpansionInfo_t* pInfo);
    AuctionDictionaryData* GetAuctionDicData(unsigned long item_id) const;
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
    int IsOwnerVIP(unsigned long long auction_id, OwnerInfo& ownerInfo);
    char* GetAvatarColorName(int ui_id);
    int CheckItemType(unsigned long item_id);
    void UnregistChkMapForAvatarCreature(bool bCreature, int add_info);
    int SubAvatarEmblemInfo(int ui_id);
    int SubAvatarExpansionInfo(int ui_id);
    bool IsPrivateStoreOpen(int owner_id);
    bool IsStackableCategory(unsigned short category) const
    {
        if ((category > 0x32c7) && (category <= 0x32ce))
        {
            return true;
        }
        if ((category > 0x752f) && (category <= 0x7598))
        {
            return true;
        }
        if ((category > 0x7917) && (category <= 0x7a49))
        {
            return true;
        }
        if ((category > 0x80e7) && (category <= 0x80ec))
        {
            return true;
        }
        return false;
    }
    int GetNowRegistedItemNum(int owner_id);

    // Layout from df_auction_r DWARF (Auction, 21396B):
    char m_pad0[0x28];          // @4 (mSocketForMonitor 40B)
    __int64 mMaxAuctionId;      // @0x2c
    double mAUCTION_COMMISSION; // @0x34
    double mAUCTION_VIP_COMMISSION;    // @0x3c
    double mAUCTION_PRIVATE_STORE_COMISSION;  // @0x44
    int mExpireTime;            // @0x4c
    int mSystemAuctionExpireTime;  // @0x50
    AuctionDictionary mAuctionDic;  // @0x54
    char mpSzBuffer[0x1000];    // @0x41d8
    Search mSearch;             // @0x51d8
    char m_pad3[0x4c];          // @0x5274 .. 0x52c0 (mItemInfo/avatarColorInfo)
    PAY_TYPE mPayType;          // @0x52c0
};

inline Auction* G_Auction()
{
    return nsl::GlobalInstance<Auction>::inst_ptr();
}

#endif // AUCTION_AUCTION_H_
