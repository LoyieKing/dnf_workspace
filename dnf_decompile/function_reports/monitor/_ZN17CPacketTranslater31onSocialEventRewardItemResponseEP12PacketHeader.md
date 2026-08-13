# _ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader

`CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808fce4` | `0x2d2` | `0x807b262` | `0x2d1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,203 +1,201 @@
-push   %ebp
-mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x5c,%esp
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0xdf>
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemResponse",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0xa4>
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f4>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f3>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManager15registItemClearEv>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1b0>
-mov    -0x20(%ebp),%edx
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1af>
+mov    0x8(%ebp),%ecx
+mov    -0x30(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    -0x24(%ebp),%eax
-lea    0xe(%eax),%ebx
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x34(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0x16(%eax,%ecx,1),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0x12(%eax,%ecx,1),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0xe(%eax,%ecx,1),%ebx
+mov    -0x2c(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
 movl   $0x1dd0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Load-> itemId: %d, maxCount: %d, sellCount: %d)",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x30(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-cmp    -0x20(%ebp),%eax
-jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
-cmpl   $0x1d,-0x20(%ebp)
-ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
+cmp    -0x30(%ebp),%eax
+jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c7>
+cmpl   $0x1d,-0x30(%ebp)
+ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c7>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1cc>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x106>
-mov    -0x24(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x10c>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c9>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x270>
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x26f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1dd8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemResponse Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x269>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x268>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1ddd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onSocialEventRewardItemResponse Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c5>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x5c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+nop
+push   %ebp
+mov    %esp,%ebp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x8c,%esp
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader
               (PacketHeader *param_1)

{
  NpcBuyLimitItem *pNVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  CDNFException *this;
  LimitNpcBuyItemManager *pLVar6;
  string local_48 [7];
  allocator local_41;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808fd1a to 0808fd1e has its CatchHandler @ 0808fd88 */
    std::string::string(local_48,"CPacketTranslater::onSocialEventRewardItemResponse",&local_41);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808fd39 to 0808fd3d has its CatchHandler @ 0808fd40 */
    CDNFException::CDNFException(this,local_48);
                    /* try { // try from 0808fd77 to 0808fd7b has its CatchHandler @ 0808fd7e */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808fdbe to 0808fed2 has its CatchHandler @ 0808fed8 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  pLVar6 = (LimitNpcBuyItemManager *)
           CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
  LimitNpcBuyItemManager::registItemClear(pLVar6);
  local_24 = 0;
  while( true ) {
    if ((local_24 < *(uint *)(local_28 + 10)) && (local_24 < 0x1e)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) break;
    pNVar1 = (NpcBuyLimitItem *)(local_28 + local_24 * 0xc + 0xe);
    pLVar6 = (LimitNpcBuyItemManager *)
             CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
    LimitNpcBuyItemManager::registItem(pLVar6,pNVar1);
    uVar2 = *(undefined4 *)(local_28 + local_24 * 0xc + 0x16);
    uVar3 = *(undefined4 *)(local_28 + local_24 * 0xc + 0x12);
    uVar4 = *(undefined4 *)(local_28 + local_24 * 0xc + 0xe);
    CMyFileLog::CMyFileLog(local_40,"onSocialEventRewardItemResponse",0x1dd0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/NpcBuyLimitItem","Load-> itemId: %d, maxCount: %d, sellCount: %d)",
               uVar4,uVar3,uVar2);
    local_24 = local_24 + 1;
  }
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0xa0),local_28);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5111 行）：

```cpp
void CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemResponse");
        }
        PacketHeader* rpkt = pkt;
        LimitNpcBuyItemManager* mgr = m_pclApp->getLimitNpcBuyItemManager();
        mgr->registItemClear();
        unsigned int i = 0;
        while (i < ((RA_UINT<10>*)pkt)->v && i < 0x1e)
        {
            NpcBuyLimitItem* item = (NpcBuyLimitItem*)((char*)pkt + i * 0xc + 0xe);
            mgr = m_pclApp->getLimitNpcBuyItemManager();
            mgr->registItem(*item);
            unsigned int c = item->m_sellCount;
            unsigned int b = item->m_maxCount;
            unsigned int a = item->m_itemId;
            DNF_LOG_SCOPE_LINE(0x1dd0,"./log/NpcBuyLimitItem", "Load-> itemId: %d, maxCount: %d, sellCount: %d)",
                a, b, c);
            i++;
        }
        (m_pclApp->m_serverHandler2)
            ->SendAllTcpGameServer(pkt);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1dd8, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemResponse Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1ddd,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemResponse Exception Break\n");
    }
}
```
