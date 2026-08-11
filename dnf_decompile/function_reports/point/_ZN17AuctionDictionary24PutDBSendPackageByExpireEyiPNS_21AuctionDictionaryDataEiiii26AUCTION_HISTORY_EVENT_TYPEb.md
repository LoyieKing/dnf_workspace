# _ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb

`AuctionDictionary::PutDBSendPackageByExpire(unsigned long long, int, AuctionDictionary::AuctionDictionaryData*, int, int, int, int, AUCTION_HISTORY_EVENT_TYPE, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x805553a` | `0x438` | `0x80598a6` | `0x435` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,266 +1,264 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3bc,%esp
 mov    0x30(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,-0x390(%ebp)
 mov    0x10(%ebp),%edx
 mov    %edx,-0x38c(%ebp)
 mov    %al,-0x394(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x42c>
+je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x42a>
 lea    -0x383(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33tagGAME_DB_SEND_PACKAGE_BY_EXPIREC1Ev>
 mov    -0x390(%ebp),%eax
 mov    -0x38c(%ebp),%edx
 mov    %eax,-0x357(%ebp)
 mov    %edx,-0x353(%ebp)
 mov    0x2c(%ebp),%eax
 mov    %al,-0x36e(%ebp)
 movb   $0x1,-0x36d(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x1eb(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,-0x1e7(%ebp)
 movl   $0x0,-0x1e3(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x14(%eax),%edx
 mov    %edx,-0x1df(%ebp)
 mov    0x18(%eax),%edx
 mov    %edx,-0x1db(%ebp)
 mov    0x1c(%eax),%edx
 mov    %edx,-0x1d7(%ebp)
 mov    0x20(%eax),%edx
 mov    %edx,-0x1d3(%ebp)
 mov    0x24(%eax),%edx
 mov    %edx,-0x1cf(%ebp)
 mov    0x28(%eax),%edx
 mov    %edx,-0x1cb(%ebp)
 mov    0x2c(%eax),%edx
 mov    %edx,-0x1c7(%ebp)
 mov    0x30(%eax),%edx
 mov    %edx,-0x1c3(%ebp)
 mov    0x34(%eax),%edx
 mov    %edx,-0x1bf(%ebp)
 mov    0x38(%eax),%edx
 mov    %edx,-0x1bb(%ebp)
 mov    0x3c(%eax),%edx
 mov    %edx,-0x1b7(%ebp)
 mov    0x40(%eax),%edx
 mov    %edx,-0x1b3(%ebp)
 mov    0x44(%eax),%edx
 mov    %edx,-0x1af(%ebp)
 movzbl 0x48(%eax),%eax
 mov    %al,-0x1ab(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction19IsStackableCategoryEt>
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x14c>
 mov    0x28(%ebp),%eax
 mov    %eax,-0x1d9(%ebp)
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    -0x24(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x1fe,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
 lea    -0x383(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    -0x1de(%ebp),%eax
 mov    %eax,-0xa8(%ebp)
 lea    -0x383(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %ax,-0x1aa(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x34f(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x34b(%ebp)
 mov    0x24(%ebp),%eax
 mov    %eax,-0x347(%ebp)
 movb   $0x0,-0x343(%ebp)
 movl   $0x0,-0x342(%ebp)
 movb   $0x0,-0x33e(%ebp)
 movl   $0x0,-0x33d(%ebp)
 movw   $0x0,-0x339(%ebp)
 movl   $0x0,-0x337(%ebp)
 movb   $0x0,-0x333(%ebp)
 movw   $0x0,-0x332(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x246>
 mov    0x18(%ebp),%eax
 lea    0x14(%eax),%edx
 movl   $0x7f,0x8(%esp)
 lea    -0xa4(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci>
 mov    -0x24(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x286>
 mov    0x18(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,-0x398(%ebp)
 jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x290>
 movl   $&LETTER_TEXT+0x6f9,-0x398(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x2a7>
 lea    -0xa4(%ebp),%edi
 jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x2b7>
 mov    -0x24(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,%edi
 cmpb   $0x0,-0x394(%ebp)
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x2c7>
 mov    $0x2710,%esi
 jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x2cc>
 mov    $0x0,%esi
 mov    -0x24(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x308>
 mov    0x18(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
 jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x30d>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    0x18(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
 je     <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x324>
 lea    -0xa4(%ebp),%edx
 jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x334>
 mov    -0x24(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,%edx
 mov    $&LETTER_TEXT+0x5fa,%ecx
 mov    0x24(%ebp),%eax
 mov    %eax,0x2c(%esp)
 mov    -0x398(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    %edi,0x24(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0x28(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 movl   $0xff,0x4(%esp)
 lea    -0x383(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x383(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %ax,-0x30e(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x15(%eax),%eax
 mov    %eax,-0x20c(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x1c(%ebp)
 lea    -0x383(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-jmp    <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb+0x42d>
-nop
 add    $0x3bc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void PutDBSendPackageByExpire(AuctionDictionary * this, __int64
   auctionId, int buyerId, AuctionDictionaryData * pAucDicData, int money, int commission, int
   send_money, int count, AUCTION_HISTORY_EVENT_TYPE package_type, bool entire) */

void __thiscall
AuctionDictionary::
_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb
          (AuctionDictionary *this,__int64 auctionId,int buyerId,AuctionDictionaryData *pAucDicData,
          int money,int commission,int send_money,int count,AUCTION_HISTORY_EVENT_TYPE package_type,
          bool entire)

{
  bool bVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  char (*pacVar5) [255];
  char *pcVar6;
  CommonDataPool *this_00;
  NSLDBThread *this_01;
  int in_GS_OFFSET;
  char (*local_39c) [255];
  tagGAME_DB_SEND_PACKAGE_BY_EXPIRE local_387;
  char local_a8 [128];
  STItemInfo *local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: STItemInfo * pItemInfo@[???]
                       Unresolved local var: DBTR_GAME_DB_SEND_PACKAGE_BY_EXPIRE
                       dbtr_expire_package@[???]
                       Unresolved local var: char[128] _itemName@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
  local_28 = Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
  if (local_28 != (STItemInfo *)0x0) {
    tagGAME_DB_SEND_PACKAGE_BY_EXPIRE::tagGAME_DB_SEND_PACKAGE_BY_EXPIRE(&local_387);
    local_387.package_type = (uchar)package_type;
    local_387.b_exist_buyer = true;
    local_387.send_to_buyer.owner_id = pAucDicData->owner_id;
    local_387.send_to_buyer.receiver = buyerId;
    local_387.send_to_buyer.money = 0;
    local_387.send_to_buyer.item_info._0_4_ = *(undefined4 *)&pAucDicData->item_info;
    uVar2 = *(undefined4 *)((int)&(pAucDicData->item_info).item_id + 3);
    local_387.send_to_buyer.item_info.item_id._3_1_ = (undefined1)uVar2;
    local_387.send_to_buyer.item_info.field_2.uniItemAttr = (uchar)((uint)uVar2 >> 8);
    local_387.send_to_buyer.item_info.add_info._0_2_ = (undefined2)((uint)uVar2 >> 0x10);
    uVar2 = *(undefined4 *)((int)&(pAucDicData->item_info).add_info + 2);
    local_387.send_to_buyer.item_info.add_info._2_2_ = (undefined2)uVar2;
    local_387.send_to_buyer.item_info.endurance = (ushort)((uint)uVar2 >> 0x10);
    local_387.send_to_buyer.item_info.extendInfo = (pAucDicData->item_info).extendInfo;
    local_387.send_to_buyer.item_info.abilityType_ = (pAucDicData->item_info).abilityType_;
    local_387.send_to_buyer.item_info.abilityValue_ = (pAucDicData->item_info).abilityValue_;
    local_387.send_to_buyer.item_info.guid_.data_[0] = (pAucDicData->item_info).guid_.data_[0];
    local_387.send_to_buyer.item_info.guid_.data_._1_4_ =
         *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 1);
    local_387.send_to_buyer.item_info.guid_.data_._5_4_ =
         *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 5);
    local_387.send_to_buyer.item_info._28_4_ =
         *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 9);
    local_387.send_to_buyer.item_info.random_option_.option_._3_4_ =
         *(undefined4 *)((pAucDicData->item_info).random_option_.option_ + 1);
    local_387.send_to_buyer.item_info.random_option_._7_4_ =
         *(undefined4 *)&(pAucDicData->item_info).random_option_.option_[2].first_value_;
    local_387.send_to_buyer.item_info._40_4_ =
         *(undefined4 *)&(pAucDicData->item_info).random_option_.modify_option_.first_value_;
    local_387.send_to_buyer.item_info.reserved_capacity.reserved_1[0] =
         (pAucDicData->item_info).reserved_capacity.reserved_1[0];
    local_387.send_to_buyer.item_info.reserved_capacity.reserved_1[1] =
         (pAucDicData->item_info).reserved_capacity.reserved_1[1];
    local_387.send_to_buyer.item_info.reserved_capacity.reserved_2 =
         (pAucDicData->item_info).reserved_capacity.reserved_2;
    local_387.send_to_owner.auction_id = auctionId;
    bVar1 = Auction::IsStackableCategory(this->mpAuction,local_28->category_);
    local_387.send_to_buyer.item_info.add_info =
         CONCAT22(local_387.send_to_buyer.item_info.add_info._2_2_,
                  (undefined2)local_387.send_to_buyer.item_info.add_info);
    if (bVar1) {
      local_387.send_to_buyer.item_info.add_info = count;
    }
    uVar2 = std::string::c_str();
    snprintf(local_387.send_to_buyer.letter_text,0xff,LETTER_TEXT[2],uVar2,0x82c9ef9);
    local_387.send_to_buyer.temp_item_id =
         CONCAT13(local_387.send_to_buyer.item_info.item_id._3_1_,
                  (undefined3)local_387.send_to_buyer.item_info.item_id);
    sVar3 = strlen(local_387.send_to_buyer.letter_text);
    local_387.send_to_buyer.letter_text_length = (ushort)sVar3;
    local_387.send_to_owner.owner_id = pAucDicData->owner_id;
    local_387.send_to_owner.receiver = pAucDicData->owner_id;
    local_387.send_to_owner.money = send_money;
    local_387.send_to_owner.item_info.seal = false;
    local_387.send_to_owner.item_info.item_id = 0;
    local_387.send_to_owner.item_info.field_2.uniItemAttr = '\0';
    local_387.send_to_owner.item_info.add_info = 0;
    local_387.send_to_owner.item_info.endurance = 0;
    local_387.send_to_owner.item_info.extendInfo = 0;
    local_387.send_to_owner.item_info.abilityType_ = '\0';
    local_387.send_to_owner.item_info.abilityValue_ = 0;
    if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 != 0 ||
        *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) != 0) {
      GetRandomOptionName(&pAucDicData->item_info,local_a8,0x7f);
    }
    bVar1 = Auction::IsAvatarCategory(this->mpAuction,(uint)local_28->category_);
    if (bVar1) {
      local_39c = (char (*) [255])
                  Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
    }
    else {
      local_39c = LETTER_TEXT + 7;
    }
    if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
        *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
      pcVar4 = (char *)std::string::c_str();
    }
    else {
      pcVar4 = local_a8;
    }
    if (entire) {
      uVar2 = 10000;
    }
    else {
      uVar2 = 0;
    }
    bVar1 = Auction::IsAvatarCategory(this->mpAuction,(uint)local_28->category_);
    if (bVar1) {
      pacVar5 = (char (*) [255])
                Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
    }
    else {
      pacVar5 = LETTER_TEXT + 7;
    }
    if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
        *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
      pcVar6 = (char *)std::string::c_str();
    }
    else {
      pcVar6 = local_a8;
    }
    snprintf(local_387.send_to_owner.letter_text,0xff,LETTER_TEXT[6],pcVar6,pacVar5,count,money,
             uVar2,commission,pcVar4,local_39c,send_money);
    sVar3 = strlen(local_387.send_to_owner.letter_text);
    local_387.send_to_owner.letter_text_length = (ushort)sVar3;
    local_387.send_to_owner.temp_item_id = (pAucDicData->item_info).item_id;
    this_00 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_24 = nsl::CommonDataPool::createMessage(this_00,3);
    local_20 = nsl::Message::getCellFromMessage(local_24);
    nsl::CMsgCell::operator<<(local_20,&local_387.super_DBTR_HEADER);
    this_01 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    nsl::NSLDBThread::PushTransaction(this_01,local_24);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
