# _ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib

`AuctionDictionary::Purchase(unsigned long long, int, AuctionDictionary::AuctionDictionaryData*, int, int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8055972` | `0x4d4` | `0x805a9f4` | `0x4d4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,340 +1,340 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
+sub    $0x9c,%esp
 mov    0x24(%ebp),%eax
 mov    0xc(%ebp),%edx
-mov    %edx,-0x50(%ebp)
+mov    %edx,-0x60(%ebp)
 mov    0x10(%ebp),%edx
-mov    %edx,-0x4c(%ebp)
-mov    %al,-0x54(%ebp)
-movl   $0x0,-0x30(%ebp)
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    %edx,-0x5c(%ebp)
+mov    %al,-0x64(%ebp)
+movl   $0x0,-0x34(%ebp)
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 movl   $0x3,0x1c(%esp)
 mov    0x20(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    0x1c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    0x14(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary18PutDBExpireHistoryEyiPNS_21AuctionDictionaryDataEii26AUCTION_HISTORY_EVENT_TYPE>
-movl   $0x0,-0x2c(%ebp)
+movl   $0x0,-0x30(%ebp)
 mov    0x18(%ebp),%eax
 movzbl 0x49(%eax),%eax
 cmp    $0x1,%al
 jne    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0xab>
 fildl  0x1c(%ebp)
-fldl   &data#30cd9092(.rodata)
+fldl   &data#721b04ed(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x68(%ebp)
+fstpl  -0x78(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16GetVIPCommissionEv>
-fmull  -0x68(%ebp)
-fnstcw -0x56(%ebp)
-movzwl -0x56(%ebp),%eax
+fmull  -0x78(%ebp)
+fnstcw -0x66(%ebp)
+movzwl -0x66(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x58(%ebp)
-fldcw  -0x58(%ebp)
-fistpl -0x2c(%ebp)
-fldcw  -0x56(%ebp)
+mov    %ax,-0x68(%ebp)
+fldcw  -0x68(%ebp)
+fistpl -0x30(%ebp)
+fldcw  -0x66(%ebp)
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0xe0>
 fildl  0x1c(%ebp)
-fldl   &data#30cd9092(.rodata)
+fldl   &data#721b04ed(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x60(%ebp)
+fstpl  -0x70(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13GetCommissionEv>
-fmull  -0x60(%ebp)
-fnstcw -0x56(%ebp)
-movzwl -0x56(%ebp),%eax
+fmull  -0x70(%ebp)
+fnstcw -0x66(%ebp)
+movzwl -0x66(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x58(%ebp)
-fldcw  -0x58(%ebp)
-fistpl -0x2c(%ebp)
-fldcw  -0x56(%ebp)
-movl   $0x0,-0x28(%ebp)
-cmpb   $0x0,-0x54(%ebp)
+mov    %ax,-0x68(%ebp)
+fldcw  -0x68(%ebp)
+fistpl -0x30(%ebp)
+fldcw  -0x66(%ebp)
+movl   $0x0,-0x2c(%ebp)
+cmpb   $0x0,-0x64(%ebp)
 je     <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x29a>
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 add    $0x2710,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    %eax,-0x2c(%ebp)
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 mov    0x18(%ebp),%ecx
 mov    0x8(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3114,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
 je     <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x13f>
-mov    -0x30(%ebp),%eax
+mov    -0x34(%ebp),%eax
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x4c9>
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15PutDBDeleteItemEy>
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 movl   $0x1,0x28(%esp)
 movl   $0x3,0x24(%esp)
 mov    0x20(%ebp),%ecx
 mov    %ecx,0x20(%esp)
-mov    -0x28(%ebp),%ecx
+mov    -0x2c(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
-mov    -0x2c(%ebp),%ecx
+mov    -0x30(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    0x1c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    0x14(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb>
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 mov    0x8(%ebp),%ecx
 mov    0x4(%ecx),%ecx
 add    $0x51d8,%ecx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN6Search6DeleteEy>
-mov    %eax,-0x30(%ebp)
-mov    -0x50(%ebp),%ebx
-mov    -0x4c(%ebp),%esi
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x60(%ebp),%ebx
+mov    -0x5c(%ebp),%esi
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0xc(%esp)
 movl   $"Delete at Search module result:%s, auction_id:%llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
-lea    -0x50(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE5eraseERS6_>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x234>
 mov    $0xb,%eax
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x4c9>
 mov    0x18(%ebp),%eax
 mov    0x15(%eax),%edi
-mov    -0x50(%ebp),%ebx
-mov    -0x4c(%ebp),%esi
+mov    -0x60(%ebp),%ebx
+mov    -0x5c(%ebp),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Purchase entire, Auction ID : %llu, Item ID : %hu is deleted.",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x18(%ebp),%eax
 mov    0x80(%eax),%eax
 movl   $0x0,0x4(%eax)
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolIN17AuctionDictionary21AuctionDictionaryDataEiiiE4freeEPS2_>
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x39f>
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0x28(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    0x1c(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x1a(%eax),%eax
 sub    0x20(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jle    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x2cd>
 cmpl   $0x0,-0x20(%ebp)
 jg     <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x2d7>
 mov    $0x22,%eax
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x4c9>
 mov    0x18(%ebp),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    0x18(%ebp),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x1a(%eax)
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 mov    -0x20(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    -0x24(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15PutDBUpdateItemEyii>
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
+mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%edx
 movl   $0x0,0x28(%esp)
 movl   $0x3,0x24(%esp)
 mov    0x20(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    -0x28(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
-mov    -0x2c(%ebp),%ecx
+mov    -0x30(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    0x1c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    0x14(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb>
 mov    0x18(%ebp),%eax
 mov    0x15(%eax),%edi
-mov    -0x50(%ebp),%ebx
-mov    -0x4c(%ebp),%esi
+mov    -0x60(%ebp),%ebx
+mov    -0x5c(%ebp),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    0x20(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Purchase apiece, Auction ID : %llu, Item ID : %hu count : %d is deleted.",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
 mov    0x18(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
-mov    %eax,-0x48(%ebp)
+mov    %eax,-0x4c(%ebp)
 mov    0x18(%ebp),%eax
 mov    0x54(%eax),%edx
+mov    %edx,-0x48(%ebp)
+mov    0x58(%eax),%edx
 mov    %edx,-0x44(%ebp)
-mov    0x58(%eax),%edx
-mov    %edx,-0x40(%ebp)
 mov    0x5c(%eax),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x40(%ebp)
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x401>
 mov    -0x1c(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
 mov    0x18(%ebp),%ebx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x20,%eax
 movzbl 0x11(%eax),%eax
 movzbl %al,%eax
 lea    0x8(%ecx),%edx
-mov    %ax,-0x48(%ebp,%edx,2)
+mov    %ax,-0x4c(%ebp,%edx,2)
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x2,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib+0x3d9>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIPsEvT_S1_>
 mov    0x18(%ebp),%eax
 add    $0x3f,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%edi
 mov    0x18(%ebp),%eax
 mov    0x50(%eax),%esi
 mov    0x18(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15GetUpgradeValueEv>
 movzbl %al,%ebx
 mov    0x18(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
 mov    0x8(%ebp),%edx
 mov    0x4(%edx),%edx
 movl   $0x0,0x1c(%esp)
 mov    %edi,0x18(%esp)
-lea    -0x48(%ebp),%ecx
+lea    -0x4c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN7Auction19AddItemAveragePriceEmhijRK14ROI_AverageKeyhb>
 mov    0x18(%ebp),%eax
 mov    0x15(%eax),%edi
-mov    -0x50(%ebp),%ebx
-mov    -0x4c(%ebp),%esi
+mov    -0x60(%ebp),%ebx
+mov    -0x5c(%ebp),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Purchase Success, Auction ID : %llu, Item ID : %hu ",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-add    $0x8c,%esp
+add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWARF original prototype: int Purchase(AuctionDictionary * this, __int64 auctionId, int buyerId,
   AuctionDictionaryData * pAucDicData, int price, int count, bool entire) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary8PurchaseEyiPNS_21AuctionDictionaryDataEiib
          (AuctionDictionary *this,__int64 auctionId,int buyerId,AuctionDictionaryData *pAucDicData,
          int price,int count,bool entire)

{
  ExpireTimeDictionaryData *pEVar1;
  int price_00;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uchar itemRefineValue;
  uchar itemUpgradeValue;
  char *pcVar5;
  TraceLog *pTVar6;
  size_t sVar7;
  ulong uVar8;
  double dVar9;
  undefined8 local_54;
  ROI_AverageKey local_4c;
  DWORD local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
                    /* Unresolved local var: int error_code@[???]
                       Unresolved local var: int commission@[???]
                       Unresolved local var: int send_money@[???]
                       Unresolved local var: ROI_AverageKey _temp_roi_average_key@[???] */
  local_34 = 0;
  local_54 = auctionId;
  _ZN17AuctionDictionary18PutDBExpireHistoryEyiPNS_21AuctionDictionaryDataEii26AUCTION_HISTORY_EVENT_TYPE
            (this,auctionId,buyerId,pAucDicData,price,count,AUCTION_HISTORY_APIECE_EVENT);
  local_30 = 0;
  if (pAucDicData->owner_type == '\x01') {
    dVar2 = (double)price / _DAT_08151c68;
    dVar9 = Auction::GetVIPCommission(this->mpAuction);
    dVar9 = dVar9 * dVar2;
  }
  else {
    dVar2 = (double)price / _DAT_08151c68;
    dVar9 = Auction::GetCommission(this->mpAuction);
    dVar9 = dVar9 * dVar2;
  }
  local_30 = (int)ROUND(dVar9);
  if (entire) {
    local_2c = (price - local_30) + 10000;
    local_34 = CharacterDictionary::SubAuctionId(&this->mRegisterDic,pAucDicData->owner_id,local_54)
    ;
    if (local_34 != 0) {
      return local_34;
    }
    _ZN17AuctionDictionary15PutDBDeleteItemEy(this,local_54);
    _ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb
              (this,local_54,buyerId,pAucDicData,price,local_30,local_2c,count,
               AUCTION_HISTORY_APIECE_EVENT,true);
    local_34 = Search::Delete(&this->mpAuction->mSearch,local_54);
    uVar4 = local_54._4_4_;
    uVar3 = (undefined4)local_54;
    pcVar5 = nsl::GetErrorStr(local_34);
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar6,5,"Delete at Search module result:%s, auction_id:%llu",pcVar5,uVar3,uVar4);
    sVar7 = std::
            map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
            ::erase(&this->mAuctionDicTable,&local_54);
    uVar4 = local_54._4_4_;
    uVar3 = (undefined4)local_54;
    if (sVar7 == 0) {
      return 0xb;
    }
    uVar8 = (pAucDicData->item_info).item_id;
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar6,5,"Purchase entire, Auction ID : %llu, Item ID : %hu is deleted.",uVar3,uVar4,
               uVar8);
    pEVar1 = pAucDicData->expire_table_ptr;
    *(undefined4 *)&pEVar1->auction_id = 0;
    *(undefined4 *)((int)&pEVar1->auction_id + 4) = 0;
    nsl::object_pool_by_boost_pool<AuctionDictionary::AuctionDictionaryData,_int,_int,_int>::free
              (&this->mAuctionDicDataPool,pAucDicData);
  }
  else {
                    /* Unresolved local var: int remain_price@[???]
                       Unresolved local var: int remain_count@[???] */
    local_2c = price - local_30;
    local_28 = pAucDicData->instant_price - price;
    local_24 = (pAucDicData->item_info).add_info - count;
    if ((local_28 < 1) || (local_24 < 1)) {
      return 0x22;
    }
    pAucDicData->instant_price = local_28;
    (pAucDicData->item_info).add_info = local_24;
    _ZN17AuctionDictionary15PutDBUpdateItemEyii(this,local_54,local_28,local_24);
    _ZN17AuctionDictionary24PutDBSendPackageByExpireEyiPNS_21AuctionDictionaryDataEiiii26AUCTION_HISTORY_EVENT_TYPEb
              (this,local_54,buyerId,pAucDicData,price,local_30,local_2c,count,
               AUCTION_HISTORY_APIECE_EVENT,false);
    uVar4 = local_54._4_4_;
    uVar3 = (undefined4)local_54;
    uVar8 = (pAucDicData->item_info).item_id;
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar6,5,"Purchase apiece, Auction ID : %llu, Item ID : %hu count : %d is deleted.",
               uVar3,uVar4,uVar8,count);
  }
  ROI_AverageKey::ROI_AverageKey(&local_4c);
  local_4c.baseItem_index = DnfItemInfo::GetItemId(&pAucDicData->item_info);
  local_4c.option_category.field_0._high_category_key._0_4_ =
       *(undefined4 *)&(pAucDicData->_reg_roi_category_key).field_0;
  local_4c.option_category.field_0._high_category_key._4_4_ =
       *(undefined4 *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4);
  local_4c.option_category.field_1 = (pAucDicData->_reg_roi_category_key).field_1;
                    /* Unresolved local var: int i@[???] */
  for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
    *(ushort *)((int)&local_4c.field_2 + local_20 * 2) =
         (ushort)(pAucDicData->item_info).random_option_.option_[local_20].option_index_;
  }
  std::sort<short_int*>
            ((short *)&local_4c.field_2.option_index_key,(short *)((int)&local_4c.field_2 + 6));
  itemRefineValue = UpgradeSeparateInfo::GetUpgradeSeparate(&(pAucDicData->item_info).separate_info)
  ;
  price_00 = pAucDicData->unit_price;
  itemUpgradeValue = DnfItemInfo::GetUpgradeValue(&pAucDicData->item_info);
  uVar8 = DnfItemInfo::GetItemId(&pAucDicData->item_info);
  Auction::AddItemAveragePrice
            (this->mpAuction,uVar8,itemUpgradeValue,price_00,0,&local_4c,itemRefineValue,false);
  uVar4 = local_54._4_4_;
  uVar3 = (undefined4)local_54;
  uVar8 = (pAucDicData->item_info).item_id;
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog
            (pTVar6,5,"Purchase Success, Auction ID : %llu, Item ID : %hu ",uVar3,uVar4,uVar8);
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
