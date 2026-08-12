# _ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader

`CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808b49a` | `0x2b9` | `0x8076b20` | `0x2c1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,193 +1,196 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ae>
-mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x20(%ebp)
 movl   $0x1e1,0x8(%esp)
 movl   $0x100a,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b1>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa6>
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x9d>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition14getSellEndTimeEv>
-cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xad>
+mov    -0x20(%ebp),%edx
+cmp    %edx,%eax
+jae    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa4>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xb2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa9>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xe6>
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xe0>
 mov    -0x1c(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x1,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x10(%ebp),%eax
-movb   $0x1,0x16(%eax)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
 mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition14isSellCompleteEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x11c>
-mov    -0x14(%ebp),%eax
-movb   $0x2,0x16(%eax)
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x154>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x152>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x10(%ebp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition10getSellNumEv>
-lea    0x1(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+lea    0x1(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr10updateItemEjj>
-mov    -0x14(%ebp),%eax
-movb   $0x0,0x16(%eax)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x0,(%eax)
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x15b>
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x2,(%eax)
+mov    -0x1c(%ebp),%eax
+lea    0x12(%eax),%ebx
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition10getSellNumEv>
-mov    -0x14(%ebp),%edx
-mov    %eax,0x12(%edx)
-mov    -0x24(%ebp),%eax
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
 lea    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x17,%eax
 movl   $0x1ca,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition14isSellCompleteEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 movl   $0x1,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x252>
+jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x260>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1599,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x24b>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x259>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ba>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x159e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2a7>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  CApplication *pCVar2;
  char cVar3;
  CTcpGameServer *this;
  time_t tVar4;
  char *pcVar5;
  uint uVar6;
  CItemLimitEdition *this_00;
  int iVar7;
  undefined4 uVar8;
  CItemLimitEditionMgr *pCVar9;
  
                    /* try { // try from 0808b4b4 to 0808b66a has its CatchHandler @ 0808b670 */
  this = (CTcpGameServer *)CApplication::FindTcpGameServer((uint)m_pclApp);
  if (this != (CTcpGameServer *)0x0) {
    tVar4 = time((time_t *)0x0);
    pcVar5 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(this,0x100a,0x1e1);
    if (pcVar5 != (char *)0x0) {
      uVar6 = CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
      this_00 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar6);
      if ((this_00 == (CItemLimitEdition *)0x0) ||
         (iVar7 = CItemLimitEdition::getSellEndTime(this_00), iVar7 < tVar4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *(undefined4 *)(pcVar5 + 10) = *(undefined4 *)(param_1 + 10);
        pcVar5[0x16] = '\x01';
        CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(this,pcVar5);
      }
      else {
        *(undefined4 *)(pcVar5 + 10) = *(undefined4 *)(param_1 + 10);
        *(undefined4 *)(pcVar5 + 0xe) = *(undefined4 *)(param_1 + 0xe);
        cVar3 = CItemLimitEdition::isSellComplete(this_00);
        if (cVar3 == '\0') {
          iVar7 = CItemLimitEdition::getSellNum(this_00);
          uVar6 = *(uint *)(param_1 + 0xe);
          pCVar9 = (CItemLimitEditionMgr *)
                   CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
          CItemLimitEditionMgr::updateItem(pCVar9,uVar6,iVar7 + 1);
          pcVar5[0x16] = '\0';
        }
        else {
          pcVar5[0x16] = '\x02';
        }
        uVar8 = CItemLimitEdition::getSellNum(this_00);
        *(undefined4 *)(pcVar5 + 0x12) = uVar8;
        memcpy(pcVar5 + 0x17,param_1 + 0x12,0x1ca);
        CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(this,pcVar5);
        cVar3 = CItemLimitEdition::isSellComplete(this_00);
        pCVar2 = m_pclApp;
        if (cVar3 != '\0') {
          pCVar9 = (CItemLimitEditionMgr *)
                   CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
          CItemLimitEditionMgr::processScheduledJob(pCVar9,pCVar2,true);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3854 行）：

```cpp
void CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader* pkt)
{
    try
    {
        CTcpGameServer* tcp = (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            ((RA_UINT<6>*)pkt)->v);
        if (tcp != 0)
        {
            time_t now = time(0);
            char* buf = tcp->makePacketHeader(0x100a, 0x1e1);
            if (buf != 0)
            {
                CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()->getItemInfo(
                    ((RA_UINT<14>*)pkt)->v);
                bool expired = (item == 0 || item->getSellEndTime() < (unsigned int)now);
                if (expired)
                {
                    *(unsigned int*)(buf + 0xa) = ((RA_UINT<10>*)pkt)->v;
                    buf[0x16] = 1;
                    tcp->SendToGameServer(buf);
                }
                else
                {
                    *(unsigned int*)(buf + 0xa) = ((RA_UINT<10>*)pkt)->v;
                    *(unsigned int*)(buf + 0xe) = ((RA_UINT<14>*)pkt)->v;
                    if (item->isSellComplete() == 0)
                    {
                        unsigned int num = ((RA_UINT<14>*)pkt)->v;
                        m_pclApp->getItemLimitEditionMgr()->updateItem(
                            num, item->getSellNum() + 1);
                        buf[0x16] = 0;
                    }
                    else
                    {
                        buf[0x16] = 2;
                    }
                    *(unsigned int*)(buf + 0x12) = item->getSellNum();
                    memcpy(buf + 0x17, (char*)pkt + 0x12, 0x1ca);
                    tcp->SendToGameServer(buf);
                    if (item->isSellComplete())
                    {
                        m_pclApp->getItemLimitEditionMgr()->processScheduledJob(m_pclApp,
                                                                                true);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1599,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x159e,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
```
