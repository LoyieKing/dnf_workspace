# _ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader

`CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8090738` | `0x2ac` | `0x807bda2` | `0x2ce` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,187 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemUpdate",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1ce>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1f0>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x52(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x66(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25LimitNpcBuyItemChangeInfoC1Ev>
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x16(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x11b>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1cf>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-mov    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-lea    -0x52(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x2c(%ebp)
+lea    -0x66(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-lea    -0x52(%ebp),%edx
+lea    -0x66(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x20(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x20(%ebp)
 movl   $0x1e46,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x4c(%ebp),%eax
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
 movl   $"DB Update-> characNo: %u, itemId: %u, buyCount: %u)",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
+mov    0x8(%ebp),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x24a>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x26c>
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
 movl   $0x1e4b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onSocialEventRewardItemUpdate Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x243>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x265>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1e50,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onSocialEventRewardItemUpdate Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x29f>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDNFException *this;
  LimitNpcBuyItemManager *pLVar5;
  LimitNpcBuyItemChangeInfo local_56 [18];
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809076e to 08090772 has its CatchHandler @ 080907dc */
    std::string::string(local_44,"CPacketTranslater::onSocialEventRewardItemUpdate",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809078d to 08090791 has its CatchHandler @ 08090794 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 080907cb to 080907cf has its CatchHandler @ 080907d2 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08090812 to 08090900 has its CatchHandler @ 08090906 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  LimitNpcBuyItemChangeInfo::LimitNpcBuyItemChangeInfo(local_56);
  if (*(int *)(local_24 + 0x16) == 0) {
    uVar1 = *(uint *)(local_24 + 10);
    pLVar5 = (LimitNpcBuyItemManager *)
             CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
    LimitNpcBuyItemManager::getNpcLimitBuyItemCount(pLVar5,uVar1,local_56);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_56);
    CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),local_24);
    uVar2 = *(undefined4 *)(local_24 + 0x12);
    uVar3 = *(undefined4 *)(local_24 + 10);
    uVar4 = *(undefined4 *)(local_24 + 0xe);
    CMyFileLog::CMyFileLog(local_3c,"onSocialEventRewardItemUpdate",0x1e46);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/NpcBuyLimitItem",
               "DB Update-> characNo: %u, itemId: %u, buyCount: %u)",uVar4,uVar3,uVar2);
  }
  else {
    pLVar5 = (LimitNpcBuyItemManager *)
             CApplication::_ZN12CApplication25getLimitNpcBuyItemManagerEv(m_pclApp);
    LimitNpcBuyItemManager::undoNpcLimitBuyItem(pLVar5,(LimitNpcBuyItemUpdate *)local_24);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5153 行）：

```cpp
void CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemUpdate");
        }
        PacketHeader* rpkt = pkt;
        LimitNpcBuyItemChangeInfo change;
        if (((RA_INT<22>*)pkt)->v == 0)
        {
            unsigned int itemId = ((RA_UINT<10>*)pkt)->v;
            LimitNpcBuyItemManager* mgr = m_pclApp->getLimitNpcBuyItemManager();
            mgr->getNpcLimitBuyItemCount(itemId, change);
            (m_pclApp->m_serverHandler2)
                ->SendAllTcpGameServer(&change);
            (m_pclApp->m_serverHandler2)->SendToDB(pkt);
            unsigned int buyCount = ((RA_UINT<18>*)pkt)->v;
            unsigned int itemId2 = ((RA_UINT<10>*)pkt)->v;
            unsigned int charNo = ((RA_UINT<14>*)pkt)->v;
            DNF_LOG_SCOPE_LINE(0x1e46,"./log/NpcBuyLimitItem",
                "DB Update-> characNo: %u, itemId: %u, buyCount: %u)", charNo, itemId2,
                buyCount);
        }
        else
        {
            m_pclApp->getLimitNpcBuyItemManager()->undoNpcLimitBuyItem(
                (LimitNpcBuyItemUpdate*)pkt);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e4b, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemUpdate Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e50,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemUpdate Exception Break\n");
    }
}
```
