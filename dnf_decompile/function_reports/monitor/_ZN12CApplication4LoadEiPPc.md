# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8062f4e` | `0x10df` | `0x8050cfc` | `0x110e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,1110 +1,1131 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x18c,%esp
+sub    $0x10c,%esp
 movl   $0x50,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManagerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x318(%eax)
 mov    0x8(%ebp),%eax
 mov    0x318(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 lea    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CUserManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x94(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/member_cnt_config.tbl",0x4(%esp)
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x94(%eax),%eax
-lea    -0xa4(%ebp),%edx
+lea    -0x9c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xe3>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf3>
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x10e>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x9d(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/member_exp.tbl",0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
-lea    -0x9c(%ebp),%edx
+lea    -0x94(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x18c>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x19c>
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1b7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x95(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x8d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x94(%eax),%eax
 mov    0x8(%ebp),%ecx
 lea    0x10(%ecx),%ebx
 mov    0x8(%ebp),%ecx
 add    $0x2d0,%ecx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN14CMemberManager4InitEP12CApplicationP12CUserManagerP13CMemberConfigP13CMemberExpTbl>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0x8d(%ebp),%eax
+lea    -0x85(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
-lea    -0x8d(%ebp),%edx
+lea    -0x85(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
-lea    -0x94(%ebp),%edx
+lea    -0x8c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x275>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x285>
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2a0>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x8d(%ebp),%eax
+lea    -0x85(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x8d(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x85(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0xa4,%edx
 movl   $0x3e8,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandlerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x315>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x130(%eax)
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x130(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x438>
-lea    -0x85(%ebp),%eax
+je     <T> <_ZN12CApplication4LoadEiPPc+0x42c>
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x85(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init Server Udp Socket Exception Break!",0x4(%esp)
-lea    -0x8c(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x8c(%ebp),%esi
+lea    -0x84(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3dd>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d7>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x8c(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d7>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d1>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
-lea    -0x8c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x412>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x409>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x85(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x85(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x68,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x467>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x45b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xa0(%eax)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler6AttachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig16GetServerInfoMapEv>
 mov    0x8(%ebp),%edx
 mov    0xa0(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEPSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS2_EEE>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater6attachEP12CApplication>
 movl   $0x1,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CInnerMsgHandlerC1Ev>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4de>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xd4(%eax)
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder6AttachEP12CApplication>
 movl   $0x1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CUdpNetworkThreadC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x521>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x52c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x134(%eax)
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CUdpNetworkThread6attachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x563>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x56c>
 call   <T> <__cxa_rethrow>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerTcpPortEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x168,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CTcpNetSystem4InitEt>
 mov    0x8(%ebp),%eax
 lea    0x168(%eax),%ebx
 movl   $0x1ba,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x84(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"App Load : Network system (%x)",0x8(%esp)
 movl   $"./log/Tcp",0x4(%esp)
-lea    -0x84(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig16Get_ManagerTcpIPEv>
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig18Get_ManagerTcpPortEv>
-mov    %ax,-0x32(%ebp)
+mov    %ax,-0x2e(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
-mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
 je     <T> <_ZN12CApplication4LoadEiPPc+0x800>
-cmpw   $0x0,-0x32(%ebp)
+cmpw   $0x0,-0x2e(%ebp)
 je     <T> <_ZN12CApplication4LoadEiPPc+0x800>
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer4InitEP13CTcpNetSystem>
-lea    -0x75(%ebp),%eax
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x75(%ebp),%eax
+lea    -0x6d(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x7c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer5SetIPESs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x68f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x7c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x692>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x69c>
-lea    -0x7c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x69f>
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6b4>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x75(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6b7>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x75(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movzwl -0x32(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7SetPortEt>
-movzwl -0x32(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer10GetSockRefEv>
 mov    0x8(%ebp),%edx
 lea    0x168(%edx),%ecx
 mov    %ebx,0xc(%esp)
-mov    -0x38(%ebp),%edx
+mov    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
-xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication4LoadEiPPc+0x77e>
-movzwl -0x32(%ebp),%eax
+movzwl -0x2e(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(%s, %d) Fail!\n",(%esp)
 call   <T> <printf>
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetSockEv>
 mov    %eax,%ebx
-movzwl -0x32(%ebp),%esi
+movzwl -0x2e(%ebp),%esi
 movl   $0x1d3,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    %esi,0x10(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Application OpenTcpService(%s, %d, %d) Fail!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x842>
-movzwl -0x32(%ebp),%esi
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%esi
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetSockEv>
 mov    %eax,%ebx
 movl   $0x1dc,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movzwl -0x32(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetSockEv>
 mov    %ebx,0xc(%esp)
-mov    -0x38(%ebp),%edx
+mov    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x842>
 movl   $"Application TCP cfg empty!",(%esp)
 call   <T> <puts>
 movl   $0x1e4,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Application TCP cfg empty!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig13Get_DBMWTcpIPEv>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig15Get_DBMWTcpPortEv>
-mov    %ax,-0x26(%ebp)
+mov    %ax,-0x22(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x28(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0xa6d>
-cmpw   $0x0,-0x26(%ebp)
-je     <T> <_ZN12CApplication4LoadEiPPc+0xa6d>
+je     <T> <_ZN12CApplication4LoadEiPPc+0xa6a>
+cmpw   $0x0,-0x22(%ebp)
+je     <T> <_ZN12CApplication4LoadEiPPc+0xa6a>
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer4InitEP13CTcpNetSystem>
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5SetIPESs>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x8fc>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x909>
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x921>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x55(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movzwl -0x26(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7SetPortEt>
-movzwl -0x26(%ebp),%ebx
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer10GetSockRefEv>
 mov    0x8(%ebp),%edx
 lea    0x168(%edx),%ecx
 mov    %ebx,0xc(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x9eb>
-movzwl -0x26(%ebp),%eax
+je     <T> <_ZN12CApplication4LoadEiPPc+0x9e8>
+movzwl -0x22(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(%s, %d) Fail!\n",(%esp)
 call   <T> <printf>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %eax,%ebx
-movzwl -0x26(%ebp),%esi
+movzwl -0x22(%ebp),%esi
 movl   $0x200,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    %esi,0x10(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Application OpenTcpService(%s, %d, %d) Fail!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaaf>
-movzwl -0x26(%ebp),%esi
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaac>
+movzwl -0x22(%ebp),%esi
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %eax,%ebx
 movl   $0x209,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movzwl -0x26(%ebp),%ebx
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %ebx,0xc(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaaf>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaac>
 movl   $"Application TCP cfg empty!",(%esp)
 call   <T> <puts>
 movl   $0x211,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Application TCP cfg empty!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
 movzwl %ax,%ebx
 movl   $0x0,(%esp)
 call   <T> <time>
 lea    (%ebx,%eax,1),%eax
 mov    %eax,(%esp)
 call   <T> <srand>
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskSchedulerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb09>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb06>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2c8(%eax)
 call   <T> <_ZN20CTask_ChristmasEvent15getEventEndTimeEv>
 mov    %eax,%ebx
 movl   $0x0,(%esp)
 call   <T> <time>
 cmp    %eax,%ebx
-setge  %al
+setae  %al
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0xb7b>
+je     <T> <_ZN12CApplication4LoadEiPPc+0xb8f>
 movl   $0x0,(%esp)
 call   <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi>
 mov    %eax,%esi
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CTask_ChristmasEventC1Ejj>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb76>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x2c8(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN28TowerOfDespairReloadAPC_TaskC1Ejj>
-mov    %ebx,-0x20(%ebp)
-mov    -0x20(%ebp),%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xbce>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+mov    %ebx,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x2c8(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgrC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xbed>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc16>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x328(%eax)
-lea    -0x16b(%ebp),%eax
+lea    -0xaf(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Item_Limit_Edition_Load_Data_ReqC1Ev>
-movb   $0x1,-0x161(%ebp)
+movb   $0x1,-0xa5(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x160(%ebp)
-movl   $0x0,-0x15c(%ebp)
+mov    %eax,-0xa4(%ebp)
+movl   $0x0,-0xa0(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0x16b(%ebp),%edx
+lea    -0xaf(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x18,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CIPCounterC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc75>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc9e>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x32c(%eax)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x32c(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CIPCounter4InitEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x31c(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0xce5>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0xd0e>
 movl   $0x298,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CEventActionManagerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xcda>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd03>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x31c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x320(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0xd2c>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0xd55>
 movl   $0x44,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManagerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd21>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd4a>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x320(%eax)
 mov    0x8(%ebp),%eax
 mov    0x320(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager9AttachAppEP12CApplication>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccountsC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd73>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd9c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2cc(%eax)
 movl   $0x208,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPeriodicMessageMgrC1Ev>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x380(%eax)
-lea    -0xae(%ebp),%eax
+lea    -0xb9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Load_Periodic_MessageC1Ev>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0xae(%ebp),%edx
+lea    -0xb9(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x18,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManagerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xdf9>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xe22>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x384(%eax)
-lea    -0xb8(%ebp),%eax
+lea    -0xc3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26LimitNpcBuyItemRequestInfoC1Ev>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0xb8(%ebp),%edx
+lea    -0xc3(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CollectItmsC1Ev>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x388(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xbc(%ebp)
-lea    -0xbc(%ebp),%eax
+mov    %eax,-0xc8(%ebp)
+lea    -0xc8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    (%eax),%edx
+mov    %edx,-0xf8(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0xf4(%ebp)
+mov    0x8(%eax),%edx
+mov    %edx,-0xf0(%ebp)
+mov    0xc(%eax),%edx
+mov    %edx,-0xec(%ebp)
+mov    0x10(%eax),%edx
 mov    %edx,-0xe8(%ebp)
-mov    0x4(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0xe4(%ebp)
-mov    0x8(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0xe0(%ebp)
-mov    0xc(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0xdc(%ebp)
-mov    0x10(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0xd8(%ebp)
-mov    0x14(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0xd4(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0xd0(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0xcc(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0xc8(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0xc4(%ebp)
 mov    0x28(%eax),%eax
-mov    %eax,-0xc0(%ebp)
-mov    -0xe0(%ebp),%eax
+mov    %eax,-0xd0(%ebp)
+mov    -0xf0(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x390(%eax)
 movl   $0x60,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRankC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf13>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf3c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x324(%eax)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%eax
 movl   $0x2710,0xc(%esp)
 movl   $0x1,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank20processReloadRankingEP14CServerHandlerbj>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%eax
 movl   $0x5,0xc(%esp)
 movl   $0x1,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank20processReloadRankingEP14CServerHandlerbj>
 movl   $0x4,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15init_accusation22CInitAccusationListMgrC1ER12CApplication>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x334(%eax)
-movb   $0x0,-0x39(%ebp)
+movb   $0x0,-0xc9(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%eax
-lea    -0x39(%ebp),%edx
+lea    -0xc9(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb>
 movl   $0xbc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xff3>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1022>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x330(%eax)
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x168,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %eax,%ebx
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE3GetEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE9InitQueueEPS6_S8_>
 movl   $"Application Load() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4(%eax)
-add    $0x18c,%esp
+add    $0x10c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x10b1>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x10e0>
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
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Load() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Load() Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Load(int, char**) */

void __thiscall
CApplication::_ZN12CApplication4LoadEiPPc(CApplication *this,int param_1,char **param_2)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  CMemoryCashManager *this_00;
  CUdpHandler *this_01;
  uint uVar4;
  int iVar5;
  CDNFException *this_02;
  CServerHandler *this_03;
  CInnerMsgHandler *this_04;
  CPacketDecoder *this_05;
  CUdpNetworkThread *this_06;
  int *piVar6;
  undefined4 uVar7;
  time_t tVar8;
  CTaskScheduler *this_07;
  CTask_ChristmasEvent *this_08;
  TowerOfDespairReloadAPC_Task *this_09;
  CItemLimitEditionMgr *this_10;
  CIPCounter *this_11;
  CEventActionManager *this_12;
  COnTimeEventManager *this_13;
  CGMAccounts *this_14;
  CPeriodicMessageMgr *this_15;
  LimitNpcBuyItemManager *this_16;
  CollectItms *this_17;
  tm *ptVar9;
  CTowerRank *this_18;
  CInitAccusationListMgr *this_19;
  CLoginLogoutStatistics *this_20;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *pCVar10;
  queue *pqVar11;
  queue *pqVar12;
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
  *this_21;
  Packet_Item_Limit_Edition_Load_Data_Req local_16f [10];
  undefined1 local_165;
  uint local_164;
  undefined4 local_160;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  long local_c8;
  char *local_c4;
  time_t local_c0;
  LimitNpcBuyItemRequestInfo local_bc [10];
  Packet_Load_Periodic_Message local_b2 [10];
  string local_a8 [7];
  allocator local_a1;
  string local_a0 [7];
  allocator local_99;
  string local_98 [7];
  allocator local_91;
  string local_90 [7];
  allocator local_89;
  CMyFileLog local_88 [8];
  string local_80 [7];
  allocator local_79;
  CMyFileLog local_78 [8];
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  string local_60 [7];
  allocator local_59;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [11];
  bool local_3d;
  char *local_3c;
  ushort local_36;
  CTcpManagerServer *local_34;
  char *local_30;
  ushort local_2a;
  CTcpDBServer *local_28;
  TowerOfDespairReloadAPC_Task *local_24;
  
                    /* try { // try from 08062f61 to 08062f65 has its CatchHandler @ 08063fb3 */
  this_00 = operator_new(0x50);
                    /* try { // try from 08062f6d to 08062f71 has its CatchHandler @ 08062f74 */
  CMemoryCashManager::CMemoryCashManager(this_00);
  *(CMemoryCashManager **)(this + 0x318) = this_00;
                    /* try { // try from 08062fa7 to 08062fc0 has its CatchHandler @ 08063fb3 */
  CMemoryCashManager::Init(*(CMemoryCashManager **)(this + 0x318),this);
  CUserManager::Init((CUserManager *)(this + 0x10),this);
  pcVar1 = *(code **)(**(int **)(this + 0x94) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 08062ffa to 08062ffe has its CatchHandler @ 08063041 */
  std::string::string(local_a8,"./script/member_cnt_config.tbl",&local_a1);
                    /* try { // try from 08063015 to 08063016 has its CatchHandler @ 08063019 */
  (*pcVar1)(*(undefined4 *)(this + 0x94),local_a8);
                    /* try { // try from 0806303a to 0806303e has its CatchHandler @ 08063041 */
  std::string::~string(local_a8);
  std::allocator<char>::~allocator((allocator<char> *)&local_a1);
  pcVar1 = *(code **)(**(int **)(this + 0x98) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 080630a3 to 080630a7 has its CatchHandler @ 080630ea */
  std::string::string(local_a0,"./script/member_exp.tbl",&local_99);
                    /* try { // try from 080630be to 080630bf has its CatchHandler @ 080630c2 */
  (*pcVar1)(*(undefined4 *)(this + 0x98),local_a0);
                    /* try { // try from 080630e3 to 080630e7 has its CatchHandler @ 080630ea */
  std::string::~string(local_a0);
  std::allocator<char>::~allocator((allocator<char> *)&local_99);
                    /* try { // try from 0806314a to 0806314e has its CatchHandler @ 08063fb3 */
  CMemberManager::Init
            ((CMemberManager *)(this + 0x2d0),this,(CUserManager *)(this + 0x10),
             *(CMemberConfig **)(this + 0x94),*(CMemberExpTbl **)(this + 0x98));
  pcVar1 = *(code **)(**(int **)(this + 0x8c) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0806318c to 08063190 has its CatchHandler @ 080631d3 */
  std::string::string(local_98,param_2[1],&local_91);
                    /* try { // try from 080631a7 to 080631a8 has its CatchHandler @ 080631ab */
  (*pcVar1)(*(undefined4 *)(this + 0x8c),local_98);
                    /* try { // try from 080631cc to 080631d0 has its CatchHandler @ 080631d3 */
  std::string::~string(local_98);
  std::allocator<char>::~allocator((allocator<char> *)&local_91);
  uVar3 = CAppConfig::Get_FrameCountValue(*(CAppConfig **)(this + 0x8c));
                    /* try { // try from 0806322f to 0806323f has its CatchHandler @ 08063fb3 */
  CFrameCountHandler::InitFrameCountInfo(this + 0xa4,(uint)this,uVar3);
  this_01 = operator_new(8);
                    /* try { // try from 08063247 to 0806324b has its CatchHandler @ 0806324e */
  CUdpHandler::CUdpHandler(this_01);
  *(CUdpHandler **)(this + 0x130) = this_01;
  uVar4 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x8c));
                    /* try { // try from 08063292 to 08063296 has its CatchHandler @ 08063fb3 */
  iVar5 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                    (*(CUdpHandler **)(this + 0x130),uVar4 & 0xffff);
  if (iVar5 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 080632ce to 080632d2 has its CatchHandler @ 08063345 */
    std::string::string(local_90,"CApplication::Load() Init Server Udp Socket Exception Break!",
                        &local_89);
    this_02 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080632f0 to 080632f4 has its CatchHandler @ 080632f7 */
    CDNFException::CDNFException(this_02,local_90);
                    /* try { // try from 08063334 to 08063338 has its CatchHandler @ 0806333b */
    std::string::~string(local_90);
    std::allocator<char>::~allocator((allocator<char> *)&local_89);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08063381 to 08063391 has its CatchHandler @ 08063fb3 */
    __cxa_throw(this_02,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  this_03 = operator_new(0x68);
                    /* try { // try from 08063399 to 0806339d has its CatchHandler @ 080633a0 */
  CServerHandler::CServerHandler(this_03);
  *(CServerHandler **)(this + 0xa0) = this_03;
                    /* try { // try from 080633d3 to 0806344b has its CatchHandler @ 08063fb3 */
  CServerHandler::Attach(*(CServerHandler **)(this + 0xa0),this);
  CAppConfig::GetServerInfoMap(*(CAppConfig **)(this + 0x8c));
  CServerHandler::Load(*(multimap **)(this + 0xa0));
  CPacketTranslater::attach(this);
  this_04 = operator_new(1);
  CInnerMsgHandler::CInnerMsgHandler(this_04);
  *(CInnerMsgHandler **)(this + 0xd4) = this_04;
  this_05 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_05,this);
  this_06 = operator_new(0x1c);
                    /* try { // try from 08063453 to 08063457 has its CatchHandler @ 0806345a */
  CUdpNetworkThread::CUdpNetworkThread(this_06);
  *(CUdpNetworkThread **)(this + 0x134) = this_06;
                    /* try { // try from 0806348f to 0806358f has its CatchHandler @ 08063fb3 */
  CUdpNetworkThread::attach(*(CUdpNetworkThread **)(this + 0x134),this);
  cVar2 = CThreadInterface::begin(*(CThreadInterface **)(this + 0x134));
  if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  uVar3 = CAppConfig::Get_ServerTcpPort(*(CAppConfig **)(this + 0x8c));
  CTcpNetSystem::Init((CTcpNetSystem *)(this + 0x168),uVar3);
  CMyFileLog::CMyFileLog(local_88,"Load",0x1ba);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_88,"./log/Tcp","App Load : Network system (%x)",this + 0x168);
  local_3c = (char *)CAppConfig::Get_ManagerTcpIP(*(CAppConfig **)(this + 0x8c));
  local_36 = CAppConfig::Get_ManagerTcpPort(*(CAppConfig **)(this + 0x8c));
  local_34 = (CTcpManagerServer *)
             CServerHandler::GetTcpManagerServer(*(CServerHandler **)(this + 0xa0));
  if ((*local_3c == '\0') || (local_36 == 0)) {
    puts("Application TCP cfg empty!");
    CMyFileLog::CMyFileLog(local_68,"Load",0x1e4);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_68,"./log/TcpServer","Application TCP cfg empty!");
  }
  else {
    CTcpManagerServer::Init(local_34,(CTcpNetSystem *)(this + 0x168));
    std::allocator<char>::allocator();
                    /* try { // try from 080635af to 080635b3 has its CatchHandler @ 080635ea */
    std::string::string(local_80,local_3c,&local_79);
                    /* try { // try from 080635c1 to 080635c5 has its CatchHandler @ 080635c8 */
    CTcpManagerServer::SetIP(local_34,local_80);
                    /* try { // try from 080635e3 to 080635e7 has its CatchHandler @ 080635ea */
    std::string::~string(local_80);
    std::allocator<char>::~allocator((allocator<char> *)&local_79);
    CTcpManagerServer::SetPort(local_34,local_36);
    uVar3 = local_36;
    piVar6 = (int *)CTcpManagerServer::GetSockRef(local_34);
                    /* try { // try from 0806364a to 080637fc has its CatchHandler @ 08063fb3 */
    cVar2 = CTcpNetSystem::OpenTcpService((CTcpNetSystem *)(this + 0x168),piVar6,local_3c,uVar3);
    if (cVar2 == '\x01') {
      uVar4 = (uint)local_36;
      uVar7 = CTcpManagerServer::GetSock(local_34);
      CMyFileLog::CMyFileLog(local_70,"Load",0x1dc);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_70,"./log/TcpServer",
                 "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",uVar7,local_3c,uVar4);
      uVar4 = (uint)local_36;
      uVar7 = CTcpManagerServer::GetSock(local_34);
      printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",uVar7,local_3c,uVar4);
    }
    else {
      printf("Application OpenTcpService(%s, %d) Fail!\n",local_3c,(uint)local_36);
      uVar7 = CTcpManagerServer::GetSock(local_34);
      uVar4 = (uint)local_36;
      CMyFileLog::CMyFileLog(local_78,"Load",0x1d3);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_78,"./log/TcpServer","Application OpenTcpService(%s, %d, %d) Fail!",local_3c,
                 uVar4,uVar7);
    }
  }
  local_30 = (char *)CAppConfig::Get_DBMWTcpIP(*(CAppConfig **)(this + 0x8c));
  local_2a = CAppConfig::Get_DBMWTcpPort(*(CAppConfig **)(this + 0x8c));
  local_28 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(*(CServerHandler **)(this + 0xa0));
  if ((*local_30 == '\0') || (local_2a == 0)) {
    puts("Application TCP cfg empty!");
    CMyFileLog::CMyFileLog(local_48,"Load",0x211);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/TcpServer","Application TCP cfg empty!");
  }
  else {
    CTcpDBServer::Init(local_28,(CTcpNetSystem *)(this + 0x168));
    std::allocator<char>::allocator();
                    /* try { // try from 0806381c to 08063820 has its CatchHandler @ 08063857 */
    std::string::string(local_60,local_30,&local_59);
                    /* try { // try from 0806382e to 08063832 has its CatchHandler @ 08063835 */
    CTcpDBServer::SetIP(local_28,local_60);
                    /* try { // try from 08063850 to 08063854 has its CatchHandler @ 08063857 */
    std::string::~string(local_60);
    std::allocator<char>::~allocator((allocator<char> *)&local_59);
    CTcpDBServer::SetPort(local_28,local_2a);
    uVar3 = local_2a;
    piVar6 = (int *)CTcpDBServer::GetSockRef(local_28);
                    /* try { // try from 080638b7 to 08063a33 has its CatchHandler @ 08063fb3 */
    cVar2 = CTcpNetSystem::OpenTcpService((CTcpNetSystem *)(this + 0x168),piVar6,local_30,uVar3);
    if (cVar2 == '\x01') {
      uVar4 = (uint)local_2a;
      uVar7 = CTcpDBServer::GetSock(local_28);
      CMyFileLog::CMyFileLog(local_50,"Load",0x209);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/TcpServer",
                 "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",uVar7,local_30,uVar4);
      uVar4 = (uint)local_2a;
      uVar7 = CTcpDBServer::GetSock(local_28);
      printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",uVar7,local_30,uVar4);
    }
    else {
      printf("Application OpenTcpService(%s, %d) Fail!\n",local_30,(uint)local_2a);
      uVar7 = CTcpDBServer::GetSock(local_28);
      uVar4 = (uint)local_2a;
      CMyFileLog::CMyFileLog(local_58,"Load",0x200);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/TcpServer","Application OpenTcpService(%s, %d, %d) Fail!",local_30,
                 uVar4,uVar7);
    }
  }
  uVar4 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x8c));
  tVar8 = time((time_t *)0x0);
  srand((uVar4 & 0xffff) + tVar8);
  this_07 = operator_new(0x10);
                    /* try { // try from 08063a3b to 08063a3f has its CatchHandler @ 08063a42 */
  CTaskScheduler::CTaskScheduler(this_07);
  *(CTaskScheduler **)(this + 0x2c8) = this_07;
  iVar5 = CTask_ChristmasEvent::getEventEndTime();
  tVar8 = time((time_t *)0x0);
  if (tVar8 <= iVar5) {
                    /* try { // try from 08063a85 to 08063b17 has its CatchHandler @ 08063fb3 */
    uVar4 = CTask_ChristmasEvent::MakeEventStartTick(0);
    this_08 = operator_new(0x10);
    CTask_ChristmasEvent::CTask_ChristmasEvent(this_08,uVar4,0);
    CTaskScheduler::AddTask(*(CTaskScheduler **)(this + 0x2c8),(CTask *)this_08);
  }
  this_09 = operator_new(0x10);
  TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(this_09,0,0);
  local_24 = this_09;
  CTaskScheduler::AddTask(*(CTaskScheduler **)(this + 0x2c8),(CTask *)this_09);
  this_10 = operator_new(0x1c);
                    /* try { // try from 08063b1f to 08063b23 has its CatchHandler @ 08063b26 */
  CItemLimitEditionMgr::CItemLimitEditionMgr(this_10);
  *(CItemLimitEditionMgr **)(this + 0x328) = this_10;
  Packet_Item_Limit_Edition_Load_Data_Req::Packet_Item_Limit_Edition_Load_Data_Req(local_16f);
  local_165 = 1;
  local_164 = Get_ServerGroup(this);
  local_164 = local_164 & 0xff;
  local_160 = 0;
                    /* try { // try from 08063b8f to 08063b9f has its CatchHandler @ 08063fb3 */
  CServerHandler::SendToDB(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_16f);
  this_11 = operator_new(0x18);
                    /* try { // try from 08063ba7 to 08063bab has its CatchHandler @ 08063bae */
  CIPCounter::CIPCounter(this_11);
  *(CIPCounter **)(this + 0x32c) = this_11;
                    /* try { // try from 08063be7 to 08063c04 has its CatchHandler @ 08063fb3 */
  CIPCounter::Init(*(CIPCounter **)(this + 0x32c),*(CServerHandler **)(this + 0xa0));
  if (*(int *)(this + 0x31c) == 0) {
    this_12 = operator_new(0x298);
                    /* try { // try from 08063c0c to 08063c10 has its CatchHandler @ 08063c13 */
    CEventActionManager::CEventActionManager(this_12);
    *(CEventActionManager **)(this + 0x31c) = this_12;
  }
  if (*(int *)(this + 800) == 0) {
                    /* try { // try from 08063c47 to 08063c4b has its CatchHandler @ 08063fb3 */
    this_13 = operator_new(0x44);
                    /* try { // try from 08063c53 to 08063c57 has its CatchHandler @ 08063c5a */
    COnTimeEventManager::COnTimeEventManager(this_13);
    *(COnTimeEventManager **)(this + 800) = this_13;
  }
                    /* try { // try from 08063c8d to 08063c9d has its CatchHandler @ 08063fb3 */
  COnTimeEventManager::AttachApp(*(COnTimeEventManager **)(this + 800),this);
  this_14 = operator_new(8);
                    /* try { // try from 08063ca5 to 08063ca9 has its CatchHandler @ 08063cac */
  WongWork::CGMAccounts::CGMAccounts(this_14);
  *(CGMAccounts **)(this + 0x2cc) = this_14;
                    /* try { // try from 08063cd3 to 08063d23 has its CatchHandler @ 08063fb3 */
  this_15 = operator_new(0x208);
  CPeriodicMessageMgr::CPeriodicMessageMgr(this_15);
  *(CPeriodicMessageMgr **)(this + 0x380) = this_15;
  Packet_Load_Periodic_Message::Packet_Load_Periodic_Message(local_b2);
  CServerHandler::SendToDB(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_b2);
  this_16 = operator_new(0x18);
                    /* try { // try from 08063d2b to 08063d2f has its CatchHandler @ 08063d32 */
  LimitNpcBuyItemManager::LimitNpcBuyItemManager(this_16);
  *(LimitNpcBuyItemManager **)(this + 900) = this_16;
  LimitNpcBuyItemRequestInfo::LimitNpcBuyItemRequestInfo(local_bc);
                    /* try { // try from 08063d76 to 08063e3d has its CatchHandler @ 08063fb3 */
  CServerHandler::SendToDB(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_bc);
  this_17 = operator_new(0x10);
  CollectItms::_ZN11CollectItmsC2Ev(this_17);
  *(CollectItms **)(this + 0x388) = this_17;
  local_c0 = time((time_t *)0x0);
  ptVar9 = localtime(&local_c0);
  local_ec = ptVar9->tm_sec;
  local_e8 = ptVar9->tm_min;
  local_e4 = ptVar9->tm_hour;
  local_e0 = ptVar9->tm_mday;
  local_dc = ptVar9->tm_mon;
  local_d8 = ptVar9->tm_year;
  local_d4 = ptVar9->tm_wday;
  local_d0 = ptVar9->tm_yday;
  local_cc = ptVar9->tm_isdst;
  local_c8 = ptVar9->tm_gmtoff;
  local_c4 = ptVar9->tm_zone;
  *(short *)(this + 0x390) = (short)local_e4;
  this_18 = operator_new(0x60);
                    /* try { // try from 08063e45 to 08063e49 has its CatchHandler @ 08063e4c */
  CTowerRank::CTowerRank(this_18);
  *(CTowerRank **)(this + 0x324) = this_18;
                    /* try { // try from 08063e95 to 08063f19 has its CatchHandler @ 08063fb3 */
  CTowerRank::processReloadRanking
            (*(CTowerRank **)(this + 0x324),*(CServerHandler **)(this + 0xa0),true,10000);
  CTowerRank::processReloadRanking
            (*(CTowerRank **)(this + 0x324),*(CServerHandler **)(this + 0xa0),true,5);
  this_19 = operator_new(4);
  init_accusation::CInitAccusationListMgr::CInitAccusationListMgr(this_19,this);
  *(CInitAccusationListMgr **)(this + 0x334) = this_19;
  local_3d = false;
  init_accusation::CInitAccusationListMgr::setSchedule
            (*(CInitAccusationListMgr **)(this + 0x334),&local_3d);
  this_20 = operator_new(0xbc);
                    /* try { // try from 08063f28 to 08063f2c has its CatchHandler @ 08063f2f */
  CLoginLogoutStatistics::CLoginLogoutStatistics(this_20,this);
  *(CLoginLogoutStatistics **)(this + 0x330) = this_20;
  pCVar10 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
             *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x168));
  pqVar11 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                     ::GetParseQ(pCVar10);
  pCVar10 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
             *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x168));
  pqVar12 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                     ::GetRecvQ(pCVar10);
                    /* try { // try from 08063f80 to 08063fa0 has its CatchHandler @ 08063fb3 */
  this_21 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
             *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
               ::Get();
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>::
  InitQueue(this_21,pqVar12,pqVar11);
  puts("Application Load() Success!");
  this[4] = (CApplication)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 310 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
        m_memoryCash = new CMemoryCashManager;
        m_memoryCash->Init(this);
        m_userManager.Init(this);

        m_memberConfig->Load_Table("./script/member_cnt_config.tbl");
        m_memberExpTbl->Load_Table("./script/member_exp.tbl");
        m_memberManager.Init(this, &m_userManager, m_memberConfig, m_memberExpTbl);

        m_appConfig->Load_Table(argv[1]);
        m_frameCount.InitFrameCountInfo(this, m_appConfig->Get_FrameCountValue(), 0x3e8);

        m_udpHandler = new CUdpHandler;
        if (m_udpHandler->InitServerSocket(m_appConfig->Get_ServerUdpPort()) == -1)
        {
            throw CDNFException("CApplication::Load() Init Server Udp Socket Exception Break!");
        }

        m_serverHandler2 = new CServerHandler;
        m_serverHandler2->Attach(this);
        m_serverHandler2->Load(m_appConfig->GetServerInfoMap());
        CPacketTranslater::attach(this);
        m_innerMsgHandler = new CInnerMsgHandler;
        CPacketDecoderInstance()->Attach(this);
        m_udpThread = new CUdpNetworkThread;
        m_udpThread->attach(this);
        if (!m_udpThread->begin())
        {
            throw;
        }

        m_tcpNetSystem.Init(m_appConfig->Get_ServerTcpPort());
        {
            DNF_LOG_SCOPE_LINE(0x1ba, "./log/Tcp", "App Load : Network system (%x)", &m_tcpNetSystem);
        }

        {
            const char* mgrIp = m_appConfig->Get_ManagerTcpIP();
            unsigned short mgrPort = m_appConfig->Get_ManagerTcpPort();
            CTcpManagerServer* mgr = (CTcpManagerServer*)m_serverHandler2->GetTcpManagerServer();
            if (*mgrIp != '\0' && mgrPort != 0)
            {
                mgr->Init(&m_tcpNetSystem);
                mgr->SetIP(mgrIp);
                mgr->SetPort(mgrPort);
                if (m_tcpNetSystem.OpenTcpService(*mgr->GetSockRef(), mgrIp, mgrPort) == 1)
                {
                    printf("Application OpenTcpService(%s, %d) Fail!\n", mgrIp, mgrPort);
                    DNF_LOG_SCOPE_LINE(0x1d3,"./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                        mgrIp, mgrPort, mgr->GetSock());
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x1dc,"./log/TcpServer", "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                        mgr->GetSock(), mgrIp, mgrPort);
                    printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                        mgr->GetSock(), mgrIp, mgrPort);
                }
            }
            else
            {
                puts("Application TCP cfg empty!");
                DNF_LOG_SCOPE_LINE(0x1e4, "./log/TcpServer", "Application TCP cfg empty!");
            }
        }

        {
            const char* dbIp = m_appConfig->Get_DBMWTcpIP();
            unsigned short dbPort = m_appConfig->Get_DBMWTcpPort();
            CTcpDBServer* db = (CTcpDBServer*)m_serverHandler2->GetTcpDBServer();
            if (*dbIp != '\0' && dbPort != 0)
            {
                db->Init(&m_tcpNetSystem);
                db->SetIP(dbIp);
                db->SetPort(dbPort);
                if (m_tcpNetSystem.OpenTcpService(*db->GetSockRef(), dbIp, dbPort) == 1)
                {
                    printf("Application OpenTcpService(%s, %d) Fail!\n", dbIp, dbPort);
                    DNF_LOG_SCOPE_LINE(0x200,"./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                        dbIp, dbPort, db->GetSock());
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x209,"./log/TcpServer", "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                        db->GetSock(), dbIp, dbPort);
                    printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                        db->GetSock(), dbIp, dbPort);
                }
            }
            else
            {
                puts("Application TCP cfg empty!");
                DNF_LOG_SCOPE_LINE(0x211, "./log/TcpServer", "Application TCP cfg empty!");
            }
        }

        srand((unsigned int)(m_appConfig->Get_ServerUdpPort() + time(0)));

        m_taskScheduler = new CTaskScheduler;
        if (CTask_ChristmasEvent::getEventEndTime() >= (int)time(0))
        {
            m_taskScheduler->AddTask(new CTask_ChristmasEvent(CTask_ChristmasEvent::MakeEventStartTick(0), 0));
        }
        m_taskScheduler->AddTask(new TowerOfDespairReloadAPC_Task(0, 0));

        m_itemLimitMgr = new CItemLimitEditionMgr;
        {
            Packet_Item_Limit_Edition_Load_Data_Req pkt;
            pkt.m_fieldA = 1;
            pkt.m_fieldB = Get_ServerGroup();
            pkt.m_fieldC = 0;
            m_serverHandler2->SendToDB(&pkt);
        }

        m_ipCounter = new CIPCounter;
        m_ipCounter->Init(m_serverHandler2);

        if (m_field31c == 0)
        {
            m_field31c = new CEventActionManager;
        }
        if (m_onTimeEventMgr == 0)
        {
            m_onTimeEventMgr = new COnTimeEventManager;
        }
        m_onTimeEventMgr->AttachApp(this);

        m_field2cc = new WongWork::CGMAccounts;
        m_periodicMsg = new CPeriodicMessageMgr;
        {
            Packet_Load_Periodic_Message pkt;
            m_serverHandler2->SendToDB(&pkt);
        }
        m_limitNpc = new LimitNpcBuyItemManager;
        {
            LimitNpcBuyItemRequestInfo pkt;
            m_serverHandler2->SendToDB(&pkt);
        }

        m_field388 = new CollectItms;
        {
            time_t now = time(0);
            tm pt = *localtime(&now);
            m_timeSyncHour = (short)pt.tm_hour;
        }

        m_towerRank = new CTowerRank;
        m_towerRank->processReloadRanking(m_serverHandler2, true, 10000);
        m_towerRank->processReloadRanking(m_serverHandler2, true, 5);

        m_field334 = new init_accusation::CInitAccusationListMgr(*this);
        {
            bool schedule = false;
            ((init_accusation::CInitAccusationListMgr*)m_field334)->setSchedule(schedule);
        }

        m_field330 = new CLoginLogoutStatistics(*this);
        {
            typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > > TcpRecvQueue;
            IQueue<TcpRecvQueue>::Get()->InitQueue(
                m_tcpNetSystem.Get_TcpSwapQPacket()->GetRecvQ(),
                m_tcpNetSystem.Get_TcpSwapQPacket()->GetParseQ());
        }

        puts("Application Load() Success!");
        m_loaded = true;
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Load() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CApplication::Load() Exception Break");
        throw;
    }
}
```
