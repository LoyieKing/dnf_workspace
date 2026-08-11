# _ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader

`CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808b0b2` | `0x3e7` | `0x80766bc` | `0x430` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,270 +1,298 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x11c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+sub    $0x12c,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-cmp    %eax,%ebx
-setne  %al
+cmp    -0x2c(%ebp),%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x76>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x150a,0x8(%esp)
-movl   $"onItemLimitEditionSellEnd",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"(Ignore another server msg: %d)",0x8(%esp)
-movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xdb>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%eax
-add    $0x4,%edx
-mov    0x2(%eax,%edx,4),%ebx
+je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x304>
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xa3>
+mov    0x8(%ebp),%eax
+mov    -0x28(%ebp),%edx
+shl    $0x2,%edx
+add    $0x12,%edx
+add    %edx,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
-test   %eax,%eax
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xd6>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%eax
-add    $0x4,%edx
-mov    0x2(%eax,%edx,4),%ebx
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x9f>
+mov    0x8(%ebp),%eax
+mov    -0x28(%ebp),%edx
+shl    $0x2,%edx
+add    $0x12,%edx
+add    %edx,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr10removeItemEj>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xd7>
-nop
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-cmp    -0x20(%ebp),%eax
+addl   $0x1,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+cmp    -0x28(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x7f>
-mov    -0x24(%ebp),%eax
-mov    0x6e(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x44>
+movl   $0x1519,0x8(%esp)
+movl   $"onItemLimitEditionSellEnd",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+add    $0x6e,%eax
+mov    (%eax),%eax
+mov    %eax,-0xa8(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x6a,%eax
+mov    (%eax),%eax
 mov    %eax,-0xa4(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x6a(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x66,%eax
+mov    (%eax),%eax
 mov    %eax,-0xa0(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x66(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x62,%eax
+mov    (%eax),%eax
 mov    %eax,-0x9c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x62(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x5e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x98(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x5e(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x5a,%eax
+mov    (%eax),%eax
 mov    %eax,-0x94(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x5a(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x56,%eax
+mov    (%eax),%eax
 mov    %eax,-0x90(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x56(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x52,%eax
+mov    (%eax),%eax
 mov    %eax,-0x8c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x52(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x4e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x88(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4e(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x4a,%eax
+mov    (%eax),%eax
 mov    %eax,-0x84(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4a(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x46,%eax
+mov    (%eax),%eax
 mov    %eax,-0x80(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x46(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x42,%eax
+mov    (%eax),%eax
 mov    %eax,-0x7c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x42(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x3e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x78(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x3e(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x3a,%eax
+mov    (%eax),%eax
 mov    %eax,-0x74(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x3a(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x36,%eax
+mov    (%eax),%eax
 mov    %eax,-0x70(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x36(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
 mov    %eax,-0x6c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x32(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x2e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x68(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x2e(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x2a,%eax
+mov    (%eax),%eax
 mov    %eax,-0x64(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x2a(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x26,%eax
+mov    (%eax),%eax
 mov    %eax,-0x60(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x26(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 mov    %eax,-0x5c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x22(%eax),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1519,0x8(%esp)
-movl   $"onItemLimitEditionSellEnd",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%edi
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%esi
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ecx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0xac(%ebp)
+mov    -0xa8(%ebp),%eax
+mov    %eax,0x70(%esp)
 mov    -0xa4(%ebp),%eax
-mov    %eax,0x70(%esp)
+mov    %eax,0x6c(%esp)
 mov    -0xa0(%ebp),%eax
-mov    %eax,0x6c(%esp)
+mov    %eax,0x68(%esp)
 mov    -0x9c(%ebp),%eax
-mov    %eax,0x68(%esp)
+mov    %eax,0x64(%esp)
 mov    -0x98(%ebp),%eax
-mov    %eax,0x64(%esp)
+mov    %eax,0x60(%esp)
 mov    -0x94(%ebp),%eax
-mov    %eax,0x60(%esp)
+mov    %eax,0x5c(%esp)
 mov    -0x90(%ebp),%eax
-mov    %eax,0x5c(%esp)
+mov    %eax,0x58(%esp)
 mov    -0x8c(%ebp),%eax
-mov    %eax,0x58(%esp)
+mov    %eax,0x54(%esp)
 mov    -0x88(%ebp),%eax
-mov    %eax,0x54(%esp)
+mov    %eax,0x50(%esp)
 mov    -0x84(%ebp),%eax
-mov    %eax,0x50(%esp)
+mov    %eax,0x4c(%esp)
 mov    -0x80(%ebp),%eax
-mov    %eax,0x4c(%esp)
+mov    %eax,0x48(%esp)
 mov    -0x7c(%ebp),%eax
-mov    %eax,0x48(%esp)
+mov    %eax,0x44(%esp)
 mov    -0x78(%ebp),%eax
-mov    %eax,0x44(%esp)
+mov    %eax,0x40(%esp)
 mov    -0x74(%ebp),%eax
-mov    %eax,0x40(%esp)
+mov    %eax,0x3c(%esp)
 mov    -0x70(%ebp),%eax
-mov    %eax,0x3c(%esp)
+mov    %eax,0x38(%esp)
 mov    -0x6c(%ebp),%eax
-mov    %eax,0x38(%esp)
+mov    %eax,0x34(%esp)
 mov    -0x68(%ebp),%eax
-mov    %eax,0x34(%esp)
+mov    %eax,0x30(%esp)
 mov    -0x64(%ebp),%eax
-mov    %eax,0x30(%esp)
+mov    %eax,0x2c(%esp)
 mov    -0x60(%ebp),%eax
-mov    %eax,0x2c(%esp)
+mov    %eax,0x28(%esp)
 mov    -0x5c(%ebp),%eax
-mov    %eax,0x28(%esp)
-mov    -0x58(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x54(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x50(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0xac(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"(ServerType: %d, SellEndNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x8(%esp)
 movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x425>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x150a,0x8(%esp)
+movl   $"onItemLimitEditionSellEnd",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x425>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x382>
+jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3cb>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x153a,0x8(%esp)
+movl   $"onItemLimitEditionSellEnd",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x153a,0x8(%esp)
-movl   $"onItemLimitEditionSellEnd",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x37b>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3c4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x425>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x153f,0x8(%esp)
 movl   $"onItemLimitEditionSellEnd",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3d7>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x420>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x11c,%esp
+add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  CServerHandler *this;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  uint local_24;
  
  local_28 = param_1;
  uVar28 = *(uint *)(param_1 + 10);
                    /* try { // try from 0808b0d2 to 0808b3b2 has its CatchHandler @ 0808b3b8 */
  uVar27 = CApplication::Get_ServerGroup(m_pclApp);
  if (uVar28 == (uVar27 & 0xff)) {
    for (local_24 = 0; local_24 < *(uint *)(local_28 + 0xe); local_24 = local_24 + 1) {
      uVar28 = CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
      iVar29 = CItemLimitEditionMgr::getItemInfo(uVar28);
      if (iVar29 != 0) {
        uVar28 = CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
        CItemLimitEditionMgr::removeItem(uVar28);
      }
    }
    uVar1 = *(undefined4 *)(local_28 + 0x6e);
    uVar2 = *(undefined4 *)(local_28 + 0x6a);
    uVar3 = *(undefined4 *)(local_28 + 0x66);
    uVar4 = *(undefined4 *)(local_28 + 0x62);
    uVar5 = *(undefined4 *)(local_28 + 0x5e);
    uVar6 = *(undefined4 *)(local_28 + 0x5a);
    uVar7 = *(undefined4 *)(local_28 + 0x56);
    uVar8 = *(undefined4 *)(local_28 + 0x52);
    uVar9 = *(undefined4 *)(local_28 + 0x4e);
    uVar10 = *(undefined4 *)(local_28 + 0x4a);
    uVar11 = *(undefined4 *)(local_28 + 0x46);
    uVar12 = *(undefined4 *)(local_28 + 0x42);
    uVar13 = *(undefined4 *)(local_28 + 0x3e);
    uVar14 = *(undefined4 *)(local_28 + 0x3a);
    uVar15 = *(undefined4 *)(local_28 + 0x36);
    uVar16 = *(undefined4 *)(local_28 + 0x32);
    uVar17 = *(undefined4 *)(local_28 + 0x2e);
    uVar18 = *(undefined4 *)(local_28 + 0x2a);
    uVar19 = *(undefined4 *)(local_28 + 0x26);
    uVar20 = *(undefined4 *)(local_28 + 0x22);
    uVar21 = *(undefined4 *)(local_28 + 0x1e);
    uVar22 = *(undefined4 *)(local_28 + 0x1a);
    uVar23 = *(undefined4 *)(local_28 + 0x16);
    uVar24 = *(undefined4 *)(local_28 + 0x12);
    uVar25 = *(undefined4 *)(local_28 + 0xe);
    uVar26 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_40,"onItemLimitEditionSellEnd",0x1519);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/ItemLimitEdition",
               "(ServerType: %d, SellEndNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
               ,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,
               uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,
               uVar1);
    this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader(this,param_1);
  }
  else {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_48,"onItemLimitEditionSellEnd",0x150a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/ItemLimitEdition","(Ignore another server msg: %d)",uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3752 行）：

```cpp
void CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        unsigned int stype = *(unsigned int*)((char*)pkt + 0xa);
        if (stype == ((unsigned int)m_pclApp->Get_ServerGroup() & 0xff))
        {
            for (unsigned int i = 0; i < *(unsigned int*)((char*)pkt + 0xe); i++)
            {
                CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()->getItemInfo(
                    *(unsigned int*)((char*)pkt + 0x12 + i * 4));
                if (item != 0)
                {
                    m_pclApp->getItemLimitEditionMgr()->removeItem(
                        *(unsigned int*)((char*)pkt + 0x12 + i * 4));
                }
            }
            DNF_LOG_SCOPE_LINE(0x1519,"./log/ItemLimitEdition",
                "(ServerType: %d, SellEndNum: %d, IPGNO: "
                "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                *(unsigned int*)((char*)pkt + 0xa), *(unsigned int*)((char*)pkt + 0xe),
                *(unsigned int*)((char*)pkt + 0x12), *(unsigned int*)((char*)pkt + 0x16),
                *(unsigned int*)((char*)pkt + 0x1a), *(unsigned int*)((char*)pkt + 0x1e),
                *(unsigned int*)((char*)pkt + 0x22), *(unsigned int*)((char*)pkt + 0x26),
                *(unsigned int*)((char*)pkt + 0x2a), *(unsigned int*)((char*)pkt + 0x2e),
                *(unsigned int*)((char*)pkt + 0x32), *(unsigned int*)((char*)pkt + 0x36),
                *(unsigned int*)((char*)pkt + 0x3a), *(unsigned int*)((char*)pkt + 0x3e),
                *(unsigned int*)((char*)pkt + 0x42), *(unsigned int*)((char*)pkt + 0x46),
                *(unsigned int*)((char*)pkt + 0x4a), *(unsigned int*)((char*)pkt + 0x4e),
                *(unsigned int*)((char*)pkt + 0x52), *(unsigned int*)((char*)pkt + 0x56),
                *(unsigned int*)((char*)pkt + 0x5a), *(unsigned int*)((char*)pkt + 0x5e),
                *(unsigned int*)((char*)pkt + 0x62), *(unsigned int*)((char*)pkt + 0x66),
                *(unsigned int*)((char*)pkt + 0x6a), *(unsigned int*)((char*)pkt + 0x6e));
            m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
        }
        else
        {
            unsigned int v = *(unsigned int*)((char*)pkt + 0xa);
            DNF_LOG_SCOPE_LINE(0x150a, "./log/ItemLimitEdition", "(Ignore another server msg: %d)", v);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x153a,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x153f,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
```
