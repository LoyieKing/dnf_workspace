# _ZN7AuctionC1Ev

`Auction::Auction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x805b178` | `0x493` | `0x804d924` | `0x493` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,306 +1,306 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV7Auction+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9UDPSocketC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
-fldl   &data#ef02fae7(.rodata)
+fldl   &data#47fbacf6(.rodata)
 fstpl  0x34(%eax)
 mov    0x8(%ebp),%eax
-fldl   &data#cefd3d54(.rodata)
+fldl   &data#9226b6e5(.rodata)
 fstpl  0x3c(%eax)
 mov    0x8(%ebp),%eax
-fldl   &data#cefd3d54(.rodata)
+fldl   &data#9226b6e5(.rodata)
 fstpl  0x44(%eax)
 mov    0x8(%ebp),%eax
 movl   $0xd2f00,0x4c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x1c20,0x50(%eax)
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionaryC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x51d8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6SearchC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x5274,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CNRDItemInfoListC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x5290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation15AvatarColorInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x52c4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIiSaIiEESt4lessIjESaISt4pairIKjS2_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x52dc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x52f4,%eax
 movl   $0x20,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolI20stAvatarEmblemInfo_tiiiEC1Ej>
 mov    0x8(%ebp),%eax
 add    $0x5314,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiP20stAvatarEmblemInfo_tSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x532c,%eax
 movl   $0x20,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolI23stAvatarExpansionInfo_tiiiEC1Ej>
 mov    0x8(%ebp),%eax
 add    $0x534c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiP23stAvatarExpansionInfo_tSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x5364,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x537c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x58(%eax)
 mov    0x8(%ebp),%eax
 add    $0x41d8,%eax
 movl   $0x1000,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x51dc(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9UDPSocket4openEv>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x5,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 movzwl %ax,%ebx
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x3,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script13findCharValueEii>
 mov    0x8(%ebp),%edx
 add    $0x4,%edx
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9UDPSocket4bindEPKct>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"load item info",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN8CodePage12initCodePageEv>
 mov    0x8(%ebp),%eax
 add    $0x5274,%eax
 movl   $&_ZN8CodePage15script2DatabaseEPcS0_,0x8(%esp)
 movl   $"./iteminfo.dat",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0xa(%ebp)
+movzbl -0xa(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN7AuctionC1Ev+0x245>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"fail to load item info",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"successfully load item info",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"load avatar variation",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 add    $0x5290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE>
 mov    %al,-0x9(%ebp)
 movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN7AuctionC1Ev+0x2c6>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"fail to load avatar variation",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"successfully load avatar variation",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 add    $0x5364,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
 mov    0x8(%ebp),%eax
 add    $0x537c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10SetPayTypeE8PAY_TYPE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Setting PayType : Gold",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN7AuctionC1Ev+0x48c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x537c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x352>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x5364,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x36c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x534c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiP23stAvatarExpansionInfo_tSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x386>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x532c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolI23stAvatarExpansionInfo_tiiiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x3a0>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x5314,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiP20stAvatarEmblemInfo_tSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x3ba>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x52f4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolI20stAvatarEmblemInfo_tiiiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x3d4>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x52dc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x3ee>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x52c4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIiSaIiEESt4lessIjESaISt4pairIKjS2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x408>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x5290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation15AvatarColorInfoD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x422>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x5274,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CNRDItemInfoListD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x43c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x51d8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6SearchD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x456>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionaryD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN7AuctionC1Ev+0x46e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9UDPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWARF original prototype: void Auction(Auction * this) */

void __thiscall Auction::_ZN7AuctionC1Ev(Auction *this)

{
  bool bVar1;
  Script *pSVar2;
  int iVar3;
  char *strIp;
  TraceLog *pTVar4;
  
  this->_vptr_Auction = (_func_int_varargs **)&PTR__Auction_08152fb0;
  nsl::UDPSocket::UDPSocket(&this->mSocketForMonitor);
  *(undefined4 *)&this->mMaxAuctionId = 0;
  *(undefined4 *)((int)&this->mMaxAuctionId + 4) = 0;
  this->mAUCTION_COMMISSION = _DAT_08152f98;
  this->mAUCTION_VIP_COMMISSION = _DAT_08152fa0;
  this->mAUCTION_PRIVATE_STORE_COMISSION = _DAT_08152fa0;
  this->mAUCTION_EXPIRE_TIME = 0xd2f00;
  this->mSYSTEM_AUCTION_EXPIRE_TIME = 0x1c20;
                    /* try { // try from 0805b1e9 to 0805b1ed has its CatchHandler @ 0805b5e6 */
  AuctionDictionary::_ZN17AuctionDictionaryC2Ev(&this->mAuctionDic);
                    /* try { // try from 0805b1f9 to 0805b1fd has its CatchHandler @ 0805b5ce */
  Search::_ZN6SearchC2Ev(&this->mSearch);
                    /* try { // try from 0805b209 to 0805b20d has its CatchHandler @ 0805b5b4 */
  CNRDItemInfoList::_ZN16CNRDItemInfoListC2Ev(&this->mItemInfo);
                    /* try { // try from 0805b219 to 0805b21d has its CatchHandler @ 0805b59a */
  AvatarVariation::AvatarColorInfo::AvatarColorInfo(&this->avatarColorInfo);
                    /* try { // try from 0805b229 to 0805b22d has its CatchHandler @ 0805b580 */
  std::
  map<unsigned_int,_std::vector<int,_std::allocator<int>_>,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_std::vector<int,_std::allocator<int>_>_>_>_>
  ::map(&this->mIdMap);
                    /* try { // try from 0805b239 to 0805b23d has its CatchHandler @ 0805b566 */
  std::set<int,_std::less<int>,_std::allocator<int>_>::set(&this->mCidSet);
                    /* try { // try from 0805b251 to 0805b255 has its CatchHandler @ 0805b54c */
  nsl::object_pool_by_boost_pool<stAvatarEmblemInfo_t,_int,_int,_int>::object_pool_by_boost_pool
            (&this->mEmblemInfoStructPool,0x20);
                    /* try { // try from 0805b261 to 0805b265 has its CatchHandler @ 0805b532 */
  std::
  map<int,_stAvatarEmblemInfo_t*,_std::less<int>,_std::allocator<std::pair<const_int,_stAvatarEmblemInfo_t*>_>_>
  ::map(&this->mEmblemInfoMap);
                    /* try { // try from 0805b279 to 0805b27d has its CatchHandler @ 0805b518 */
  nsl::object_pool_by_boost_pool<stAvatarExpansionInfo_t,_int,_int,_int>::object_pool_by_boost_pool
            (&this->mExpansionInfoStructPool,0x20);
                    /* try { // try from 0805b289 to 0805b28d has its CatchHandler @ 0805b4fe */
  std::
  map<int,_stAvatarExpansionInfo_t*,_std::less<int>,_std::allocator<std::pair<const_int,_stAvatarExpansionInfo_t*>_>_>
  ::map(&this->mExpansionInfoMap);
                    /* try { // try from 0805b299 to 0805b29d has its CatchHandler @ 0805b4e4 */
  std::map<int,_char,_std::less<int>,_std::allocator<std::pair<const_int,_char>_>_>::map
            (&this->mAvatarDupChkMap);
                    /* try { // try from 0805b2a9 to 0805b2ad has its CatchHandler @ 0805b4ca */
  std::map<int,_char,_std::less<int>,_std::allocator<std::pair<const_int,_char>_>_>::map
            (&this->mCreatureDupChkMap);
                    /* Unresolved local var: bool result@[???] */
  (this->mAuctionDic).mpAuction = this;
  memset(this->mpSzBuffer,0,0x1000);
  (this->mSearch).mpAuction = this;
                    /* try { // try from 0805b2ec to 0805b4aa has its CatchHandler @ 0805b4b0 */
  nsl::UDPSocket::_ZN3nsl9UDPSocket4openEv(&this->mSocketForMonitor);
  pSVar2 = nsl::G_Script();
  iVar3 = nsl::Script::findIntValue(pSVar2,0,5);
  pSVar2 = nsl::G_Script();
  strIp = nsl::Script::findCharValue(pSVar2,0,3);
  nsl::UDPSocket::_ZN3nsl9UDPSocket4bindEPKct(&this->mSocketForMonitor,strIp,(ushort)iVar3);
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,5,"load item info");
  CodePage::initCodePage();
  bVar1 = CNRDItemInfoList::_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E
                    (&this->mItemInfo,"./iteminfo.dat",CodePage::script2Database);
  if (!bVar1) {
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,7,"fail to load item info");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,5,"successfully load item info");
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,5,"load avatar variation");
  bVar1 = AvatarVariation::_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE
                    (&this->avatarColorInfo);
  if (!bVar1) {
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,7,"fail to load avatar variation");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,5,"successfully load avatar variation");
  std::map<int,_char,_std::less<int>,_std::allocator<std::pair<const_int,_char>_>_>::clear
            (&this->mAvatarDupChkMap);
  std::map<int,_char,_std::less<int>,_std::allocator<std::pair<const_int,_char>_>_>::clear
            (&this->mCreatureDupChkMap);
  SetPayType(this,PAY_TYPE_GOLD);
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar4,5,"Setting PayType : Gold");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp)（约第 68 行）：

```cpp
Auction::Auction()
    : mMaxAuctionId(0),
      mAUCTION_COMMISSION(0.5),
      mAUCTION_VIP_COMMISSION(5.0),
      mAUCTION_PRIVATE_STORE_COMISSION(5.0),
      mAUCTION_EXPIRE_TIME(0xd2f00),
      mSYSTEM_AUCTION_EXPIRE_TIME(0x1c20),
      mEmblemInfoStructPool(0x20),
      mExpansionInfoStructPool(0x20)
{
    mAuctionDic.mpAuction = this;
    memset(mpSzBuffer, 0, 0x1000);
    mSearch.mpAuction = this;
    mSocketForMonitor.open();
    mSocketForMonitor.bind(G_Script()->findCharValue(0, 3),
                           (unsigned short)G_Script()->findIntValue(0, 5));
    G_TraceLog()->sysLog(5, "load item info");
    CodePage::initCodePage();
    bool load_item_ok = mItemInfo.Load("./iteminfo.dat", CodePage::script2Database);
    if (!load_item_ok)
    {
        G_TraceLog()->sysLog(7, "fail to load item info");
        exit(1);
    }
    G_TraceLog()->sysLog(5, "successfully load item info");
    G_TraceLog()->sysLog(5, "load avatar variation");
    bool load_avatar_ok = importAvatarColorVariation(&avatarColorInfo);
    if (!load_avatar_ok)
    {
        G_TraceLog()->sysLog(7, "fail to load avatar variation");
        exit(1);
    }
    G_TraceLog()->sysLog(5, "successfully load avatar variation");
    mAvatarDupChkMap.clear();
    mCreatureDupChkMap.clear();
#ifdef POINT_SERVER
    SetPayType(PAY_TYPE_POINT);
    G_TraceLog()->sysLog(5, "Setting PayType : Point");
#else
    SetPayType(PAY_TYPE_GOLD);
    G_TraceLog()->sysLog(5, "Setting PayType : Gold");
#endif
}
```
