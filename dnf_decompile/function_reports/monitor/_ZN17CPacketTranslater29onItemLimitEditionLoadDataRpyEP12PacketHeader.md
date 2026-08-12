# _ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader

`CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ab4c` | `0x566` | `0x807624c` | `0x509` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,340 +1,334 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x90c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+sub    $0x12c,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55a>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x40>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr5clearEv>
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb5>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa9>
+mov    0x8(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    0xf(%eax,%ecx,1),%eax
-cmp    $0xc34ff,%eax
-jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xad>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+add    $0xf,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0xc34ff,-0x28(%ebp)
+jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa5>
+cmpl   $0xf423f,-0x28(%ebp)
+ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa5>
+mov    0x8(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    0xf(%eax,%ecx,1),%eax
-cmp    $0xf423f,%eax
-ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb0>
-mov    -0x28(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    -0x2c(%ebp),%eax
-lea    0xf(%eax),%ebx
+add    $0xf,%eax
+lea    (%ecx,%eax,1),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb1>
-nop
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb1>
-nop
-addl   $0x1,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+addl   $0x1,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
-cmp    -0x28(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
 seta   %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x49>
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x687(%eax),%eax
-mov    %eax,-0x894(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xb4(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x63f(%eax),%eax
-mov    %eax,-0x890(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xb0(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x5f7(%eax),%eax
-mov    %eax,-0x88c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xac(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x5af(%eax),%eax
-mov    %eax,-0x888(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xa8(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x567(%eax),%eax
-mov    %eax,-0x884(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xa4(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x51f(%eax),%eax
-mov    %eax,-0x880(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xa0(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x4d7(%eax),%eax
-mov    %eax,-0x87c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x9c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x48f(%eax),%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x447(%eax),%eax
-mov    %eax,-0x874(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x3ff(%eax),%eax
-mov    %eax,-0x870(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x3b7(%eax),%eax
-mov    %eax,-0x86c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x36f(%eax),%eax
-mov    %eax,-0x868(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x327(%eax),%eax
-mov    %eax,-0x864(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x2df(%eax),%eax
-mov    %eax,-0x860(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x297(%eax),%eax
-mov    %eax,-0x85c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x7c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x24f(%eax),%eax
-mov    %eax,-0x858(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x78(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x207(%eax),%eax
-mov    %eax,-0x854(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x74(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x1bf(%eax),%eax
-mov    %eax,-0x850(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x177(%eax),%eax
-mov    %eax,-0x84c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x12f(%eax),%eax
-mov    %eax,-0x848(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x68(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe7(%eax),%eax
-mov    %eax,-0x844(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x64(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x9f(%eax),%eax
-mov    %eax,-0x840(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x60(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x57(%eax),%eax
-mov    %eax,-0x83c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x5c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xf(%eax),%edi
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x14c2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x894(%ebp),%eax
+mov    -0xb4(%ebp),%eax
 mov    %eax,0x70(%esp)
-mov    -0x890(%ebp),%eax
+mov    -0xb0(%ebp),%eax
 mov    %eax,0x6c(%esp)
-mov    -0x88c(%ebp),%eax
+mov    -0xac(%ebp),%eax
 mov    %eax,0x68(%esp)
-mov    -0x888(%ebp),%eax
+mov    -0xa8(%ebp),%eax
 mov    %eax,0x64(%esp)
-mov    -0x884(%ebp),%eax
+mov    -0xa4(%ebp),%eax
 mov    %eax,0x60(%esp)
-mov    -0x880(%ebp),%eax
+mov    -0xa0(%ebp),%eax
 mov    %eax,0x5c(%esp)
-mov    -0x87c(%ebp),%eax
+mov    -0x9c(%ebp),%eax
 mov    %eax,0x58(%esp)
-mov    -0x878(%ebp),%eax
+mov    -0x98(%ebp),%eax
 mov    %eax,0x54(%esp)
-mov    -0x874(%ebp),%eax
+mov    -0x94(%ebp),%eax
 mov    %eax,0x50(%esp)
-mov    -0x870(%ebp),%eax
+mov    -0x90(%ebp),%eax
 mov    %eax,0x4c(%esp)
-mov    -0x86c(%ebp),%eax
+mov    -0x8c(%ebp),%eax
 mov    %eax,0x48(%esp)
-mov    -0x868(%ebp),%eax
+mov    -0x88(%ebp),%eax
 mov    %eax,0x44(%esp)
-mov    -0x864(%ebp),%eax
+mov    -0x84(%ebp),%eax
 mov    %eax,0x40(%esp)
-mov    -0x860(%ebp),%eax
+mov    -0x80(%ebp),%eax
 mov    %eax,0x3c(%esp)
-mov    -0x85c(%ebp),%eax
+mov    -0x7c(%ebp),%eax
 mov    %eax,0x38(%esp)
-mov    -0x858(%ebp),%eax
+mov    -0x78(%ebp),%eax
 mov    %eax,0x34(%esp)
-mov    -0x854(%ebp),%eax
+mov    -0x74(%ebp),%eax
 mov    %eax,0x30(%esp)
-mov    -0x850(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,0x2c(%esp)
-mov    -0x84c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,0x28(%esp)
-mov    -0x848(%ebp),%eax
+mov    -0x68(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x844(%ebp),%eax
+mov    -0x64(%ebp),%eax
 mov    %eax,0x20(%esp)
-mov    -0x840(%ebp),%eax
+mov    -0x60(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x83c(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"(FullLoad: %d, LoadTargetNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x8(%esp)
 movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr7isEmptyEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
-lea    -0x833(%ebp),%eax
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
+lea    -0x57(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_Item_Limit_Edition_Sell_StartC1Ev>
-mov    -0x2c(%ebp),%eax
+lea    -0x57(%ebp),%eax
+mov    0x8(%ebp),%edx
+movzbl 0xa(%edx),%edx
+mov    %dl,0xa(%eax)
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0x829(%ebp)
-movl   $0x0,-0x828(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0xa(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3cd>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
-lea    -0x833(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x45e>
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3eb>
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x44a>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3d5>
+mov    0x8(%ebp),%ecx
 mov    -0x24(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    0xf(%eax,%ecx,1),%ebx
+add    $0xf,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x445>
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3d1>
+lea    -0x57(%ebp),%ecx
 mov    -0x24(%ebp),%edx
-lea    -0x833(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x3,%eax
+add    $0xf,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0xf,%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t>
-mov    -0x828(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x828(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x446>
-nop
+lea    -0x57(%ebp),%eax
+lea    -0x57(%ebp),%edx
+mov    0xb(%edx),%edx
+add    $0x1,%edx
+mov    %edx,0xb(%eax)
 addl   $0x1,-0x24(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
 cmp    -0x24(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3d6>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x363>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x407>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
+lea    -0x57(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x833(%ebp),%edx
+lea    -0x57(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4a4>
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
 movl   $0x14f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4f7>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x49d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x14fb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x553>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4f9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
-nop
-add    $0x90c,%esp
+add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader
               (PacketHeader *param_1)

{
  stItemLimitEditionItemInfo_t *psVar1;
  PacketHeader PVar2;
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
  undefined4 uVar27;
  char cVar28;
  CItemLimitEditionMgr *pCVar29;
  uint uVar30;
  CServerHandler *this;
  Packet_Item_Limit_Edition_Sell_Start local_837 [10];
  PacketHeader local_82d;
  int local_82c;
  stItemLimitEditionItemInfo_t asStack_828 [2016];
  CMyFileLog local_48 [24];
  PacketHeader *local_30;
  uint local_2c;
  uint local_28;
  CItemLimitEdition *local_24;
  
  local_30 = param_1;
  if (*(int *)(param_1 + 0xb) != 0) {
    if (param_1[10] != (PacketHeader)0x0) {
      pCVar29 = (CItemLimitEditionMgr *)
                CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
                    /* try { // try from 0808ab87 to 0808afc8 has its CatchHandler @ 0808afce */
      CItemLimitEditionMgr::clear(pCVar29);
    }
    for (local_2c = 0; local_2c < *(uint *)(local_30 + 0xb); local_2c = local_2c + 1) {
      if ((799999 < *(uint *)(local_30 + local_2c * 0x48 + 0xf)) &&
         (*(uint *)(local_30 + local_2c * 0x48 + 0xf) < 1000000)) {
        psVar1 = (stItemLimitEditionItemInfo_t *)(local_30 + local_2c * 0x48 + 0xf);
        pCVar29 = (CItemLimitEditionMgr *)
                  CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
        CItemLimitEditionMgr::registItem(pCVar29,psVar1);
      }
    }
    uVar3 = *(undefined4 *)(local_30 + 0x687);
    uVar4 = *(undefined4 *)(local_30 + 0x63f);
    uVar5 = *(undefined4 *)(local_30 + 0x5f7);
    uVar6 = *(undefined4 *)(local_30 + 0x5af);
    uVar7 = *(undefined4 *)(local_30 + 0x567);
    uVar8 = *(undefined4 *)(local_30 + 0x51f);
    uVar9 = *(undefined4 *)(local_30 + 0x4d7);
    uVar10 = *(undefined4 *)(local_30 + 0x48f);
    uVar11 = *(undefined4 *)(local_30 + 0x447);
    uVar12 = *(undefined4 *)(local_30 + 0x3ff);
    uVar13 = *(undefined4 *)(local_30 + 0x3b7);
    uVar14 = *(undefined4 *)(local_30 + 0x36f);
    uVar15 = *(undefined4 *)(local_30 + 0x327);
    uVar16 = *(undefined4 *)(local_30 + 0x2df);
    uVar17 = *(undefined4 *)(local_30 + 0x297);
    uVar18 = *(undefined4 *)(local_30 + 0x24f);
    uVar19 = *(undefined4 *)(local_30 + 0x207);
    uVar20 = *(undefined4 *)(local_30 + 0x1bf);
    uVar21 = *(undefined4 *)(local_30 + 0x177);
    uVar22 = *(undefined4 *)(local_30 + 0x12f);
    uVar23 = *(undefined4 *)(local_30 + 0xe7);
    uVar24 = *(undefined4 *)(local_30 + 0x9f);
    uVar25 = *(undefined4 *)(local_30 + 0x57);
    uVar26 = *(undefined4 *)(local_30 + 0xf);
    uVar27 = *(undefined4 *)(local_30 + 0xb);
    PVar2 = local_30[10];
    CMyFileLog::CMyFileLog(local_48,"onItemLimitEditionLoadDataRpy",0x14c2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/ItemLimitEdition",
               "(FullLoad: %d, LoadTargetNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
               ,(uint)(byte)PVar2,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,
               uVar18,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,
               uVar6,uVar5,uVar4,uVar3);
    pCVar29 = (CItemLimitEditionMgr *)
              CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
    cVar28 = CItemLimitEditionMgr::isEmpty(pCVar29);
    if (cVar28 != '\x01') {
      Packet_Item_Limit_Edition_Sell_Start::Packet_Item_Limit_Edition_Sell_Start(local_837);
      local_82d = local_30[10];
      local_82c = 0;
      if (local_30[10] == (PacketHeader)0x0) {
        for (local_28 = 0; local_28 < *(uint *)(local_30 + 0xb); local_28 = local_28 + 1) {
          uVar30 = CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
          local_24 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar30);
          if (local_24 != (CItemLimitEdition *)0x0) {
            CItemLimitEdition::makeItemInfo(local_24,asStack_828 + local_28 * 0x48);
            local_82c = local_82c + 1;
          }
        }
      }
      else {
        pCVar29 = (CItemLimitEditionMgr *)
                  CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
        CItemLimitEditionMgr::makeItemLimitEditionSellStartPacket(pCVar29,local_837);
      }
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (this,(PacketHeader *)local_837);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3684 行）：

```cpp
void CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        if (((RA_INT<11>*)pkt)->v != 0)
        {
            if (((RA_S8<10>*)pkt)->v != 0)
            {
                m_pclApp->getItemLimitEditionMgr()->clear();
            }
            for (unsigned int i = 0; i < ((RA_UINT<11>*)pkt)->v; i++)
            {
                unsigned int ipgno = *(unsigned int*)((char*)pkt + i * 0x48 + 0xf);
                if (ipgno > 799999 && ipgno < 1000000)
                {
                    m_pclApp->getItemLimitEditionMgr()->registItem(
                        *(stItemLimitEditionItemInfo_t*)((char*)pkt + i * 0x48 + 0xf));
                }
            }
            DNF_LOG_SCOPE_LINE(0x14c2,"./log/ItemLimitEdition",
                "(FullLoad: %d, LoadTargetNum: %d, IPGNO: "
                "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (unsigned int)(unsigned char)((RA_S8<10>*)pkt)->v,
                ((RA_UINT<11>*)pkt)->v, ((RA_UINT<15>*)pkt)->v,
                ((RA_UINT<87>*)pkt)->v, ((RA_UINT<159>*)pkt)->v,
                ((RA_UINT<231>*)pkt)->v, ((RA_UINT<303>*)pkt)->v,
                ((RA_UINT<375>*)pkt)->v, ((RA_UINT<447>*)pkt)->v,
                ((RA_UINT<519>*)pkt)->v, ((RA_UINT<591>*)pkt)->v,
                ((RA_UINT<663>*)pkt)->v, ((RA_UINT<735>*)pkt)->v,
                ((RA_UINT<807>*)pkt)->v, ((RA_UINT<879>*)pkt)->v,
                ((RA_UINT<951>*)pkt)->v, ((RA_UINT<1023>*)pkt)->v,
                ((RA_UINT<1095>*)pkt)->v, ((RA_UINT<1167>*)pkt)->v,
                ((RA_UINT<1239>*)pkt)->v, ((RA_UINT<1311>*)pkt)->v,
                ((RA_UINT<1383>*)pkt)->v, ((RA_UINT<1455>*)pkt)->v,
                ((RA_UINT<1527>*)pkt)->v, ((RA_UINT<1599>*)pkt)->v,
                ((RA_UINT<1671>*)pkt)->v);
            if (m_pclApp->getItemLimitEditionMgr()->isEmpty() != 1)
            {
                Packet_Item_Limit_Edition_Sell_Start pkt2;
                ((RA_S8<10>*)&pkt2)->v = ((RA_S8<10>*)pkt)->v;
                if (((RA_S8<10>*)pkt)->v == 0)
                {
                    for (unsigned int i = 0; i < ((RA_UINT<11>*)pkt)->v; i++)
                    {
                        CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()
                                                      ->getItemInfo(
                                                          *(unsigned int*)((char*)pkt +
                                                                           i * 0x48 + 0xf));
                        if (item != 0)
                        {
                            item->makeItemInfo(
                                *(stItemLimitEditionItemInfo_t*)((char*)&pkt2 +
                                                                 i * 0x48 + 0xf));
                            ((RA_INT<11>*)&pkt2)->v =
                                ((RA_INT<11>*)&pkt2)->v + 1;
                        }
                    }
                }
                else
                {
                    m_pclApp->getItemLimitEditionMgr()
                        ->makeItemLimitEditionSellStartPacket(pkt2);
                }
                m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&pkt2);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x14f6,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x14fb,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
```
