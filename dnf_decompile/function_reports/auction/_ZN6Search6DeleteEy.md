# _ZN6Search6DeleteEy

`Search::Delete(unsigned long long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8083790` | `0x25a` | `0x8089466` | `0x246` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,166 +1,158 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,-0x30(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
 movl   $0x20,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $&_ZZN6Search6DeleteEyE23search_regist_parameter,(%esp)
 call   <T> <memset>
 lea    -0x22(%ebp),%eax
 mov    %eax,0x14(%esp)
 lea    -0x21(%ebp),%eax
 mov    %eax,0x10(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    -0x30(%ebp),%eax
 mov    -0x2c(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search17GetRegisteredInfoEyPmPhS1_>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 je     <T> <_ZN6Search6DeleteEy+0xa4>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %eax,%ecx
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    -0x30(%ebp),%eax
 mov    -0x2c(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %edx,0x10(%esp)
 movl   $"Search::Delete GetRegisteredInfo error(insert auction_id:%llu) result:%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN6Search6DeleteEy+0x252>
+jmp    <T> <_ZN6Search6DeleteEy+0x23e>
 movzbl -0x22(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,-0x38(%ebp)
 movzbl -0x21(%ebp),%eax
 test   %al,%al
 setne  %al
 movzbl %al,%edi
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzbl -0x21(%ebp),%edx
 movzbl %dl,%esi
 mov    -0x20(%ebp),%ebx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%ecx
 mov    -0x38(%ebp),%edx
 mov    %edx,0x28(%esp)
 movl   $0x0,0x24(%esp)
 mov    %edi,0x20(%esp)
 movl   $0x1,0x1c(%esp)
 mov    %eax,0x18(%esp)
 mov    -0x30(%ebp),%eax
 mov    -0x2c(%ebp),%edx
 mov    %eax,0x10(%esp)
 mov    %edx,0x14(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search19SetOperateParameterEPNS_8TOperateEmhyPKN16CNRDItemInfoList10STItemInfoENS_29STATE_SEARCH_MODULE_OPERATIONEbih>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 je     <T> <_ZN6Search6DeleteEy+0x193>
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    (%eax),%eax
 mov    %eax,-0x34(%ebp)
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    0xc(%eax),%ebx
 mov    0x10(%eax),%esi
 mov    -0x20(%ebp),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %eax,%ecx
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %ebx,0x18(%esp)
 mov    %esi,0x1c(%esp)
 mov    %edi,0x14(%esp)
 mov    -0x30(%ebp),%eax
 mov    -0x2c(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %edx,0x10(%esp)
 movl   $"Search::Delete SetOperateParameter error(insert auction_id:%llu, itemdId:%u), (delete auction_id:%llu, itemdId:%u) result:%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN6Search6DeleteEy+0x252>
+jmp    <T> <_ZN6Search6DeleteEy+0x23e>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search22OperateByItemIdUpgradeEPNS_8TOperateEPSt3mapImPS2_IhPS2_IhPSt8multisetINS_9AuctionIdESt4lessIS4_ESaIS4_EES5_IhESaISt4pairIKhS9_EEESA_SaISB_ISC_SG_EEES5_ImESaISB_IKmSK_EEE>
 mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%edx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search32OperateByCategoryRarityUpgradeLvEPNS_8TOperateEPSt3mapItPS2_IhPS2_IhPS2_IhPS2_IhPSt8multisetINS_9AuctionIdESt4lessIS4_ESaIS4_EES5_IhESaISt4pairIKhS9_EEESA_SaISB_ISC_SG_EEESA_SaISB_ISC_SK_EEESA_SaISB_ISC_SO_EEES5_ItESaISB_IKtSS_EEE>
-mov    -0x1c(%ebp),%edx
-add    %edx,%eax
-mov    %eax,-0x1c(%ebp)
+add    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search30OperateByCategoryRarityUpgradeEPNS_8TOperateEPSt3mapItPS2_IhPS2_IhPS2_IhPSt8multisetINS_9AuctionIdESt4lessIS4_ESaIS4_EES5_IhESaISt4pairIKhS9_EEESA_SaISB_ISC_SG_EEESA_SaISB_ISC_SK_EEES5_ItESaISB_IKtSO_EEE>
-mov    -0x1c(%ebp),%edx
-add    %edx,%eax
-mov    %eax,-0x1c(%ebp)
+add    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%edx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search26OperateByCategoryUpgradeLvEPNS_8TOperateEPSt3mapItPS2_IhPS2_IhPS2_IhPSt8multisetINS_9AuctionIdESt4lessIS4_ESaIS4_EES5_IhESaISt4pairIKhS9_EEESA_SaISB_ISC_SG_EEESA_SaISB_ISC_SK_EEES5_ItESaISB_IKtSO_EEE>
-mov    -0x1c(%ebp),%edx
-add    %edx,%eax
-mov    %eax,-0x1c(%ebp)
+add    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%edx
 mov    &_ZZN6Search6DeleteEyE11p_parameter,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Search24OperateByCategoryUpgradeEPNS_8TOperateEPSt3mapItPS2_IhPS2_IhPSt8multisetINS_9AuctionIdESt4lessIS4_ESaIS4_EES5_IhESaISt4pairIKhS9_EEESA_SaISB_ISC_SG_EEES5_ItESaISB_IKtSK_EEE>
-mov    -0x1c(%ebp),%edx
-add    %edx,%eax
-mov    %eax,-0x1c(%ebp)
+add    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD Delete(Search * this, __int64 auctionId) */

DWORD __thiscall Search::_ZN6Search6DeleteEy(Search *this,__int64 auctionId)

{
  ulong uVar1;
  undefined4 uVar2;
  __int64 _Var3;
  TraceLog *pTVar4;
  STItemInfo *pItemInfo;
  DWORD DVar5;
  bool hasSocket;
  BYTE local_26;
  BYTE local_25;
  ulong local_24;
  DWORD local_20;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: ulong itemId@[???]
                       Unresolved local var: BYTE upgrade@[???]
                       Unresolved local var: BYTE refine@[???] */
  memset(&Delete::lexical_block_0::search_regist_parameter,0,0x20);
  local_20 = GetRegisteredInfo(this,auctionId,&local_24,&local_25,&local_26);
  if (local_20 == 0) {
    hasSocket = local_25 != '\0';
    pItemInfo = Auction::GetItemInfo(this->mpAuction,local_24);
    local_20 = _ZN6Search19SetOperateParameterEPNS_8TOperateEmhyPKN16CNRDItemInfoList10STItemInfoENS_29STATE_SEARCH_MODULE_OPERATIONEbih
                         (this,Delete::lexical_block_0::p_parameter,local_24,local_25,auctionId,
                          pItemInfo,STATE_DELETE,hasSocket,0,local_26);
    if (local_20 == 0) {
      local_20 = OperateByItemIdUpgrade
                           (this,Delete::lexical_block_0::p_parameter,&this->mItemIdUpgradeContainer
                           );
      DVar5 = OperateByCategoryRarityUpgradeLv
                        (this,Delete::lexical_block_0::p_parameter,
                         &this->mCategoryRarityUpgradeLvContainer);
      local_20 = DVar5 + local_20;
      DVar5 = OperateByCategoryRarityUpgrade
                        (this,Delete::lexical_block_0::p_parameter,
                         &this->mCategoryRarityUpgradeContainer);
      local_20 = DVar5 + local_20;
      DVar5 = OperateByCategoryUpgradeLv
                        (this,Delete::lexical_block_0::p_parameter,
                         &this->mCategoryUpgradeLvContainer);
      local_20 = DVar5 + local_20;
      DVar5 = OperateByCategoryUpgrade
                        (this,Delete::lexical_block_0::p_parameter,&this->mCategoryUpgradeContainer)
      ;
      local_20 = DVar5 + local_20;
    }
    else {
      uVar1 = Delete::lexical_block_0::p_parameter->itemId;
      _Var3 = Delete::lexical_block_0::p_parameter->auctionId;
      uVar2 = *(undefined4 *)((int)&Delete::lexical_block_0::p_parameter->auctionId + 4);
      pTVar4 = nsl::G_TraceLog();
      nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                (pTVar4,7,
                 "Search::Delete SetOperateParameter error(insert auction_id:%llu, itemdId:%u), (delete auction_id:%llu, itemdId:%u) result:%d"
                 ,(undefined4)auctionId,auctionId._4_4_,local_24,(int)_Var3,uVar2,uVar1,local_20);
    }
  }
  else {
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
              (pTVar4,7,"Search::Delete GetRegisteredInfo error(insert auction_id:%llu) result:%d",
               (undefined4)auctionId,auctionId._4_4_,local_20);
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp)（约第 952 行）：

```cpp
int Search::Delete(unsigned long long auctionId)
{
    int result;
    static TOperate search_regist_parameter;
    static TOperate* p_parameter = &search_regist_parameter;

    unsigned long itemId;
    BYTE upgrade;
    BYTE refine;

    memset(&search_regist_parameter, 0, 0x20);
    result = GetRegisteredInfo(auctionId, &itemId, &upgrade, &refine);
    if (result != 0)
    {
        nsl::G_TraceLog()->sysLog(
            7, "Search::Delete GetRegisteredInfo error(insert auction_id:%llu) result:%d",
            auctionId, result);
        return result;
    }
    result = SetOperateParameter(p_parameter, itemId, upgrade, auctionId,
                                 mpAuction->GetItemInfo(itemId),
                                 STATE_DELETE, upgrade != 0, 0, refine);
    if (result != 0)
    {
        nsl::G_TraceLog()->sysLog(
            7,
            "Search::Delete SetOperateParameter error(insert auction_id:%llu, itemdId:%u), (delete auction_id:%llu, itemdId:%u) result:%d",
            auctionId, itemId, p_parameter->auctionId, p_parameter->itemId, result);
        return result;
    }
    result = OperateByItemIdUpgrade(p_parameter, &mItemIdUpgradeContainer);
    result = result + OperateByCategoryRarityUpgradeLv(p_parameter,
                                                       &mCategoryRarityUpgradeLvContainer);
    result = result + OperateByCategoryRarityUpgrade(p_parameter,
                                                     &mCategoryRarityUpgradeContainer);
    result = result + OperateByCategoryUpgradeLv(p_parameter, &mCategoryUpgradeLvContainer);
    result = result + OperateByCategoryUpgrade(p_parameter, &mCategoryUpgradeContainer);
    return result;
}
```
