# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806230c` | `0x77a` | `0x804de44` | `0x778` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,527 +1,526 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 movl   $0x1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManagerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x38>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x510(%eax)
 mov    0x8(%ebp),%eax
 mov    0x510(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 lea    0x290(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 lea    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CUserManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x51(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 lea    -0x58(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xe7>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf4>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x10c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 lea    0x370(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/power_war_event.tbl",0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CPowerManager16InitPowerManagerEPcP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
-movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x6c,%edx
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
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x198>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x195>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xf8(%eax)
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0xf8(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x2a0>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x29d>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init UDP Server Socket Exception Break!",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x50(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x24e>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x24b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x248>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x245>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x265>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x262>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x265>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x262>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x27d>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x27a>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x265>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x262>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x5c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2cf>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2cc>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x68(%eax)
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler6AttachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig16GetServerInfoMapEv>
 mov    0x8(%ebp),%edx
 mov    0x68(%edx),%edx
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
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x9c(%eax)
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
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x37d>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x37a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xfc(%eax)
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CUdpNetworkThread6attachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x3bf>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x3ba>
 call   <T> <__cxa_rethrow>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerTcpPortEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x130,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CTcpNetSystem4InitEt>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig13Get_DBMWTcpIPEv>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig15Get_DBMWTcpPortEv>
 mov    %ax,-0x22(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x28(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x60f>
 cmpw   $0x0,-0x22(%ebp)
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x60f>
 mov    0x8(%ebp),%eax
 lea    0x290(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer4InitEP13CTcpNetSystemP13CGuildManager>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer5SetIPESs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4a3>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x49e>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4b0>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4ab>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c3>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6fe>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movzwl -0x22(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7SetPortEt>
 movzwl -0x22(%ebp),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer10GetSockRefEv>
 mov    0x8(%ebp),%edx
 lea    0x130(%edx),%ecx
 mov    %ebx,0xc(%esp)
 mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x592>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x58d>
 movzwl -0x22(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(%s, %d) Fail!\n",(%esp)
 call   <T> <printf>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %eax,%ebx
 movzwl -0x22(%ebp),%esi
 movl   $0x175,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Application OpenTcpService(%s, %d, %d) Fail!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x651>
 movzwl -0x22(%ebp),%esi
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %eax,%ebx
 movl   $0x179,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movzwl -0x22(%ebp),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
 mov    %ebx,0xc(%esp)
 mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x651>
 movl   $"Application TCP cfg empty!",(%esp)
 call   <T> <puts>
 movl   $0x180,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Application TCP cfg empty!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x63(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_DB_Query_On_Guild_BootingC1Ev>
+lea    -0x63(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x59(%ebp)
+mov    %al,0xa(%ebx)
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 lea    -0x63(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager14SetPowerDBFlagEt>
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
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
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x74c>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x74a>
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
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *pCVar8;
  queue *pqVar9;
  queue *pqVar10;
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
  *this_07;
  Packet_DB_Query_On_Guild_Booting local_67 [10];
  undefined1 local_5d;
  string local_5c [7];
  allocator local_55;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  char *local_2c;
  ushort local_26;
  CTcpDBServer *local_24;
  
                    /* try { // try from 0806231c to 08062320 has its CatchHandler @ 08062a0c */
  this_00 = operator_new(0x1c);
                    /* try { // try from 08062328 to 0806232c has its CatchHandler @ 0806232f */
  CMemoryCashManager::CMemoryCashManager(this_00);
  *(CMemoryCashManager **)(this + 0x510) = this_00;
                    /* try { // try from 08062362 to 08062393 has its CatchHandler @ 08062a0c */
  CMemoryCashManager::Init(*(CMemoryCashManager **)(this + 0x510),this);
  CGuildManager::Init((CGuildManager *)(this + 0x290),this);
  CUserManager::Init((CUserManager *)(this + 0x10),this);
  pcVar1 = *(code **)(**(int **)(this + 0x5c) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 080623c5 to 080623c9 has its CatchHandler @ 08062400 */
  std::string::string(local_5c,param_2[1],&local_55);
                    /* try { // try from 080623da to 080623db has its CatchHandler @ 080623de */
  (*pcVar1)(*(undefined4 *)(this + 0x5c),local_5c);
                    /* try { // try from 080623f9 to 080623fd has its CatchHandler @ 08062400 */
  std::string::~string(local_5c);
  std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* try { // try from 0806243e to 08062480 has its CatchHandler @ 08062a0c */
  CPowerManager::InitPowerManager
            ((CPowerManager *)(this + 0x370),"./script/power_war_event.tbl",this);
  uVar3 = CAppConfig::_ZN10CAppConfig19Get_FrameCountValueEv(*(CAppConfig **)(this + 0x5c));
  CFrameCountHandler::InitFrameCountInfo(this + 0x6c,(uint)this,uVar3);
  this_01 = operator_new(8);
                    /* try { // try from 08062488 to 0806248c has its CatchHandler @ 0806248f */
  CUdpHandler::CUdpHandler(this_01);
  *(CUdpHandler **)(this + 0xf8) = this_01;
  uVar4 = CAppConfig::_ZN10CAppConfig17Get_ServerUdpPortEv(*(CAppConfig **)(this + 0x5c));
                    /* try { // try from 080624d0 to 080624d4 has its CatchHandler @ 08062a0c */
  iVar5 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                    (*(CUdpHandler **)(this + 0xf8),uVar4 & 0xffff);
  if (iVar5 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 08062503 to 08062507 has its CatchHandler @ 08062571 */
    std::string::string(local_54,"CApplication::Load() Init UDP Server Socket Exception Break!",
                        &local_4d);
    this_02 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08062522 to 08062526 has its CatchHandler @ 08062529 */
    CDNFException::CDNFException(this_02,local_54);
                    /* try { // try from 08062560 to 08062564 has its CatchHandler @ 08062567 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080625a7 to 080625b7 has its CatchHandler @ 08062a0c */
    __cxa_throw(this_02,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  this_03 = operator_new(0x5c);
                    /* try { // try from 080625bf to 080625c3 has its CatchHandler @ 080625c6 */
  CServerHandler::CServerHandler(this_03);
  *(CServerHandler **)(this + 0x68) = this_03;
                    /* try { // try from 080625f3 to 08062665 has its CatchHandler @ 08062a0c */
  CServerHandler::Attach(*(CServerHandler **)(this + 0x68),this);
  CAppConfig::GetServerInfoMap(*(CAppConfig **)(this + 0x5c));
  CServerHandler::Load(*(multimap **)(this + 0x68));
  CPacketTranslater::attach(this);
  this_04 = operator_new(1);
  CInnerMsgHandler::CInnerMsgHandler(this_04);
  *(CInnerMsgHandler **)(this + 0x9c) = this_04;
  this_05 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_05,this);
  this_06 = operator_new(0x1c);
                    /* try { // try from 0806266d to 08062671 has its CatchHandler @ 08062674 */
  CUdpNetworkThread::CUdpNetworkThread(this_06);
  *(CUdpNetworkThread **)(this + 0xfc) = this_06;
                    /* try { // try from 080626a9 to 08062761 has its CatchHandler @ 08062a0c */
  CUdpNetworkThread::attach(*(CUdpNetworkThread **)(this + 0xfc),this);
  cVar2 = CThreadInterface::begin(*(CThreadInterface **)(this + 0xfc));
  if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  uVar3 = CAppConfig::_ZN10CAppConfig17Get_ServerTcpPortEv(*(CAppConfig **)(this + 0x5c));
  CTcpNetSystem::Init((CTcpNetSystem *)(this + 0x130),uVar3);
  local_2c = (char *)CAppConfig::Get_DBMWTcpIP(*(CAppConfig **)(this + 0x5c));
  local_26 = CAppConfig::_ZN10CAppConfig15Get_DBMWTcpPortEv(*(CAppConfig **)(this + 0x5c));
  local_24 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(*(CServerHandler **)(this + 0x68));
  if ((*local_2c == '\0') || (local_26 == 0)) {
    puts("Application TCP cfg empty!");
    CMyFileLog::CMyFileLog(local_34,"Load",0x180);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_34,"./log/TcpServer","Application TCP cfg empty!");
  }
  else {
    CTcpDBServer::Init(local_24,(CTcpNetSystem *)(this + 0x130),(CGuildManager *)(this + 0x290));
    std::allocator<char>::allocator();
                    /* try { // try from 08062781 to 08062785 has its CatchHandler @ 080627bc */
    std::string::string(local_4c,local_2c,&local_45);
                    /* try { // try from 08062793 to 08062797 has its CatchHandler @ 0806279a */
    CTcpDBServer::SetIP(local_24,local_4c);
                    /* try { // try from 080627b5 to 080627b9 has its CatchHandler @ 080627bc */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
    CTcpDBServer::SetPort(local_24,local_26);
    uVar3 = local_26;
    piVar6 = (int *)CTcpDBServer::GetSockRef(local_24);
                    /* try { // try from 0806281c to 080629fc has its CatchHandler @ 08062a0c */
    cVar2 = CTcpNetSystem::OpenTcpService((CTcpNetSystem *)(this + 0x130),piVar6,local_2c,uVar3);
    if (cVar2 == '\x01') {
      uVar4 = (uint)local_26;
      uVar7 = CTcpDBServer::GetSock(local_24);
      CMyFileLog::CMyFileLog(local_3c,"Load",0x179);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/TcpServer",
                 "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",uVar7,local_2c,uVar4);
      uVar4 = (uint)local_26;
      uVar7 = CTcpDBServer::GetSock(local_24);
      printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",uVar7,local_2c,uVar4);
    }
    else {
      printf("Application OpenTcpService(%s, %d) Fail!\n",local_2c,(uint)local_26);
      uVar7 = CTcpDBServer::GetSock(local_24);
      uVar4 = (uint)local_26;
      CMyFileLog::CMyFileLog(local_44,"Load",0x175);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/TcpServer","Application OpenTcpService(%s, %d, %d) Fail!",local_2c,
                 uVar4,uVar7);
    }
  }
  Packet_DB_Query_On_Guild_Booting::Packet_DB_Query_On_Guild_Booting(local_67);
  local_5d = _ZN12CApplication15Get_ServerGroupEv(this);
  CServerHandler::SendToDB(*(CServerHandler **)(this + 0x68),(PacketHeader *)local_67);
  CPowerManager::SetPowerDBFlag((CPowerManager *)(this + 0x370),2);
  pCVar8 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x130));
  pqVar9 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                    ::GetParseQ(pCVar8);
  pCVar8 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x130));
  pqVar10 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                     ::GetRecvQ(pCVar8);
  this_07 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
             *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
               ::Get();
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>::
  InitQueue(this_07,pqVar10,pqVar9);
  puts("Application Load() Success!");
  this[4] = (CApplication)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 152 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
    m_memoryCash = new CMemoryCashManager;
    m_memoryCash->Init(this);
    m_guildManager.Init(this);
    m_userManager.Init(this);
    m_appConfig->Load_Table(argv[1]);
    m_powerManager.InitPowerManager((char*)"./script/power_war_event.tbl", this);
    m_frameCount.InitFrameCountInfo(this, m_appConfig->Get_FrameCountValue(), 1000);
    m_udpHandler = new CUdpHandler;
    if (m_udpHandler->InitServerSocket(m_appConfig->Get_ServerUdpPort()) == -1)
    {
        throw CDNFException("CApplication::Load() Init UDP Server Socket Exception Break!");
    }
    m_serverHandler = new CServerHandler;
    m_serverHandler->Attach(this);
    m_serverHandler->Load(m_appConfig->GetServerInfoMap());
    CPacketTranslater::attach(this);
    m_innerMsgHandler = new CInnerMsgHandler;
    CPacketDecoderInstance()->Attach(this);
    m_udpThread = new CUdpNetworkThread;
    m_udpThread->attach(this);
    if (!((CThreadInterface*)m_udpThread)->begin())
    {
        throw;
    }
    m_tcpNetSystem.Init(m_appConfig->Get_ServerTcpPort());
    const char* dbIp = m_appConfig->Get_DBMWTcpIP();
    unsigned short dbPort = m_appConfig->Get_DBMWTcpPort();
    CTcpDBServer* db = m_serverHandler->GetTcpDBServer();
    if (*dbIp != '\0' && dbPort != 0)
    {
        db->Init(&m_tcpNetSystem, &m_guildManager);
        db->SetIP(std::string(dbIp));
        db->SetPort(dbPort);
        if (!m_tcpNetSystem.OpenTcpService(db->GetSockRef(), dbIp, dbPort))
        {
            printf("Application OpenTcpService(%s, %d) Fail!\n", dbIp,
                   (unsigned int)dbPort);
            DNF_LOG_SCOPE_LINE(0x175,"./log/TcpServer", "Application OpenTcpService(%s, %d, %d) Fail!",
                dbIp, (unsigned int)dbPort, db->GetSock());
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x179,"./log/TcpServer",
                "Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!",
                db->GetSock(), dbIp, (unsigned int)dbPort);
            printf("Application OpenTcpService(fd:%d,ip:%s,port:%d) Success!\n",
                db->GetSock(), dbIp, (unsigned int)dbPort);
        }
    }
    else
    {
        puts("Application TCP cfg empty!");
        DNF_LOG_SCOPE_LINE(0x180, "./log/TcpServer", "Application TCP cfg empty!");
    }
    Packet_DB_Query_On_Guild_Booting pkt;
    struct BootingFields
    {
        char pad[0xa];
        unsigned char group;
    };
    ((BootingFields*)&pkt)->group = Get_ServerGroup();
    m_serverHandler->SendToDB(&pkt);
    m_powerManager.SetPowerDBFlag(2);
    typedef std::queue<CTcpRecvBuffer*> TcpRecvQueue;
    IQueue<TcpRecvQueue>::Get()->InitQueue(
        ((CSwapQueue<TcpRecvQueue, 2>*)m_tcpNetSystem.Get_TcpSwapQPacket())->GetRecvQ(),
        ((CSwapQueue<TcpRecvQueue, 2>*)m_tcpNetSystem.Get_TcpSwapQPacket())->GetParseQ());
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
