# _ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb

`CItemLimitEditionMgr::processScheduledJob(CApplication*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a5e58` | `0x29b` | `0x8094674` | `0x2bd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,185 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x1d4,%esp
+sub    $0x1f4,%esp
 mov    0x10(%ebp),%eax
-mov    %al,-0x1bc(%ebp)
+mov    %al,-0x1dc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x292>
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x68>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    -0x10(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x4,%eax
-jg     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x5b>
-movzbl -0x1bc(%ebp),%eax
-xor    $0x1,%eax
+jg     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x51>
+cmpb   $0x0,-0x1dc(%ebp)
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x58>
+mov    $0x1,%eax
+jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x5d>
+mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x295>
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x68>
+mov    $0x1,%eax
+jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x6d>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x2b8>
 mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x18(%eax)
-lea    -0xaa(%ebp),%eax
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_Item_Limit_Edition_Sell_endC1Ev>
+movl   $0x0,-0x1c(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x11c>
-lea    -0x20(%ebp),%eax
+jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x10a>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition14getSellEndTimeEv>
-cmp    -0x10(%ebp),%eax
-setl   %al
+mov    -0x20(%ebp),%edx
+cmp    %edx,%eax
+setb   %al
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x111>
-mov    -0x9c(%ebp),%ebx
-lea    -0x20(%ebp),%eax
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0xff>
+mov    -0x1c(%ebp),%ebx
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition8getIPGNOEv>
-lea    0x4(%ebx),%edx
-mov    %eax,-0xa8(%ebp,%edx,4)
-lea    0x1(%ebx),%eax
-mov    %eax,-0x9c(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0xc4(%ebp,%ebx,4)
+addl   $0x1,-0x1c(%ebp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
-lea    -0x24(%ebp),%eax
+mov    0x8(%ebp),%edx
+lea    -0x28(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEC1ERKSt17_Rb_tree_iteratorIS4_E>
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0xc2>
-mov    -0x9c(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x20d>
+jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0xb9>
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x229>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0xaa(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x18(%ebp)
+lea    -0x42(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x1f9>
-mov    -0xc(%ebp),%edx
-lea    -0xaa(%ebp),%eax
-add    $0x4,%edx
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x218>
+mov    -0x14(%ebp),%edx
+lea    -0xc4(%ebp),%eax
 shl    $0x2,%edx
-add    %edx,%eax
-lea    0x2(%eax),%ecx
+lea    (%eax,%edx,1),%ecx
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x1f5>
-lea    -0x28(%ebp),%eax
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x214>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x202>
+mov    -0x10(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x1e3>
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x202>
 mov    %ebx,(%esp)
 call   <T> <_ZN17CItemLimitEditionD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%edx
+mov    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-addl   $0x1,-0xc(%ebp)
-mov    -0x9c(%ebp),%eax
-cmp    -0xc(%ebp),%eax
-seta   %al
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+cmp    -0x1c(%ebp),%eax
+setb   %al
 test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x169>
+jne    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x181>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x296>
-lea    -0x1b8(%ebp),%eax
+je     <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x2b8>
+lea    -0x1d6(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Item_Limit_Edition_UpdateC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x1ae(%ebp)
-lea    -0x1b8(%ebp),%eax
+mov    %eax,-0x1cc(%ebp)
+lea    -0x1d6(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr32makeItemLimitEditionUpdatePacketER32Packet_Item_Limit_Edition_Update>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1b8(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+lea    -0x1d6(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1b8(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+lea    -0x1d6(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x296>
-nop
-jmp    <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb+0x296>
-nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::processScheduledJob(CApplication*, bool) */

void __thiscall
CItemLimitEditionMgr::_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb
          (CItemLimitEditionMgr *this,CApplication *param_1,bool param_2)

{
  CItemLimitEdition *this_00;
  uint uVar1;
  char cVar2;
  uint uVar3;
  CServerHandler *pCVar4;
  int iVar5;
  Packet_Item_Limit_Edition_Update local_1bc [10];
  uint local_1b2;
  Packet_Item_Limit_Edition_Sell_end local_ae [2];
  uint auStack_ac [32];
  uint local_2c;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_28 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_24 [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_20 [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_1c [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_18 [4];
  time_t local_14;
  uint local_10;
  
  cVar2 = std::
          map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
          ::empty((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
                   *)this);
  if ((cVar2 == '\0') &&
     ((local_14 = time((time_t *)0x0), 4 < local_14 - *(int *)(this + 0x18) || (param_2)))) {
    *(time_t *)(this + 0x18) = local_14;
    Packet_Item_Limit_Edition_Sell_end::Packet_Item_Limit_Edition_Sell_end(local_ae);
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::begin(local_20);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
    _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_20);
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::end(local_1c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_1c);
    while (cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
                   operator!=(local_24,(_Rb_tree_const_iterator *)local_28), cVar2 != '\0') {
      iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
              operator->(local_24);
      iVar5 = CItemLimitEdition::getSellEndTime(*(CItemLimitEdition **)(iVar5 + 4));
      uVar1 = auStack_ac[3];
      if (iVar5 < local_14) {
        iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
                operator->(local_24);
        uVar3 = CItemLimitEdition::getIPGNO(*(CItemLimitEdition **)(iVar5 + 4));
        auStack_ac[uVar1 + 4] = uVar3;
        auStack_ac[3] = uVar1 + 1;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator++
                (local_24);
    }
    if (auStack_ac[3] != 0) {
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(param_1);
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (pCVar4,(PacketHeader *)local_ae);
      for (local_10 = 0; local_10 < auStack_ac[3]; local_10 = local_10 + 1) {
        std::
        map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
        ::find(&local_2c);
        std::
        map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                           &local_2c,(_Rb_tree_iterator *)local_18);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                             &local_2c);
          this_00 = *(CItemLimitEdition **)(iVar5 + 4);
          if (this_00 != (CItemLimitEdition *)0x0) {
            CItemLimitEdition::~CItemLimitEdition(this_00);
            ::operator_delete(this_00);
          }
          std::
          map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
          ::erase((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
                   *)this,local_2c);
        }
      }
    }
    cVar2 = std::
            map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
            ::empty((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
                     *)this);
    if (cVar2 != '\x01') {
      Packet_Item_Limit_Edition_Update::Packet_Item_Limit_Edition_Update(local_1bc);
      local_1b2 = CApplication::Get_ServerGroup(param_1);
      local_1b2 = local_1b2 & 0xff;
      makeItemLimitEditionUpdatePacket(this,local_1bc);
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(param_1);
      CServerHandler::SendToDB(pCVar4,(PacketHeader *)local_1bc);
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(param_1);
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (pCVar4,(PacketHeader *)local_1bc);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 138 行）：

```cpp
void CItemLimitEditionMgr::processScheduledJob(CApplication* app, bool flag)
{
    time_t now;
    if (!m_items.empty() && (now = time(0), now - m_lastTime > 4 || flag))
    {
        m_lastTime = now;
        Packet_Item_Limit_Edition_Sell_end pkt;
        unsigned int expired[30];
        unsigned int count = 0;
        for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
             it != m_items.end(); ++it)
        {
            if (it->second->getSellEndTime() < (unsigned int)now)
            {
                expired[count] = it->second->getIPGNO();
                count++;
            }
        }
        if (count != 0)
        {
            CServerHandler* h = app->Get_ServerHandler();
            h->SendAllTcpGameServer(&pkt);
            for (unsigned int i = 0; i < count; i++)
            {
                std::map<unsigned int, CItemLimitEdition*>::iterator f = m_items.find(expired[i]);
                if (f != m_items.end())
                {
                    CItemLimitEdition* item = f->second;
                    if (item != 0)
                    {
                        delete item;
                    }
                    m_items.erase(f);
                }
            }
        }
        if (!m_items.empty())
        {
            Packet_Item_Limit_Edition_Update pkt2;
            pkt2.m_fieldA = (unsigned int)app->Get_ServerGroup();
            makeItemLimitEditionUpdatePacket(pkt2);
            CServerHandler* h = app->Get_ServerHandler();
            h->SendToDB(&pkt2);
            h = app->Get_ServerHandler();
            h->SendAllTcpGameServer(&pkt2);
        }
    }
}
```
