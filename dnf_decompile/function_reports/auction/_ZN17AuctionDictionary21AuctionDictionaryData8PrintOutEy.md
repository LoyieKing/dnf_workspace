# _ZN17AuctionDictionary21AuctionDictionaryData8PrintOutEy

`AuctionDictionary::AuctionDictionaryData::PrintOut(unsigned long long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x8054d5e` | `0xc7` | `0x80577be` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x24c,%esp
+sub    $0x25c,%esp
 mov    0xc(%ebp),%eax
-mov    %eax,-0x220(%ebp)
+mov    %eax,-0x230(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0x21c(%ebp)
+mov    %eax,-0x22c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
-lea    -0x218(%ebp),%eax
+lea    -0x224(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z16PrintDnfItemInfoR11DnfItemInfoPc>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x228(%ebp)
+mov    %eax,-0x238(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x224(%ebp)
+mov    %eax,-0x234(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    (%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %eax,%ecx
-lea    -0x218(%ebp),%eax
+lea    -0x224(%ebp),%eax
 mov    %eax,0x28(%esp)
-mov    -0x228(%ebp),%eax
+mov    -0x238(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x224(%ebp),%eax
+mov    -0x234(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
-mov    -0x220(%ebp),%eax
-mov    -0x21c(%ebp),%edx
+mov    -0x230(%ebp),%eax
+mov    -0x22c(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %edx,0x10(%esp)
 movl   $"%llu:%d:%d:%d:%d:%d:%s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-add    $0x24c,%esp
+add    $0x25c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void PrintOut(AuctionDictionaryData * this, __int64 auctionId) */

void __thiscall
AuctionDictionary::AuctionDictionaryData::_ZN17AuctionDictionary21AuctionDictionaryData8PrintOutEy
          (AuctionDictionaryData *this,__int64 auctionId)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TraceLog *this_00;
  char local_21c [524];
  
                    /* Unresolved local var: char[512] temp@[???] */
  PrintDnfItemInfo(&this->item_info,local_21c);
  lVar1 = this->expire_time;
  iVar2 = this->buyer_id;
  iVar3 = this->owner_id;
  iVar4 = this->instant_price;
  iVar5 = this->price;
  this_00 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog
            (this_00,5,"%llu:%d:%d:%d:%d:%d:%s",(undefined4)auctionId,auctionId._4_4_,iVar5,iVar4,
             iVar3,iVar2,lVar1,local_21c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp)（约第 139 行）：

```cpp
void AuctionDictionary::AuctionDictionaryData::PrintOut(unsigned long long auctionId)
{
    char temp[524];
    PrintDnfItemInfo(item_info, temp);
    G_TraceLog()->sysLog(5, "%llu:%d:%d:%d:%d:%d:%s", auctionId, price, instant_price,
                         owner_id, buyer_id, expire_time, temp);
}
```
