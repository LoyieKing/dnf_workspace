# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804f2fa` | `0x74d` | `0x804c99c` | `0x749` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,563 +1,561 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 lea    0x63c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CUserManager4InitEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x49(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    -0x50(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x84>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x95>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xad>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./table/server_config.tbl",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    -0x48(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x117>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x128>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x140>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x20,%edx
 movl   $0x3e8,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt>
 movl   $0x7dc20,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1b0>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%ecx
 mov    %esi,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler6AttachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfig13GetServerInfoEv>
 mov    0x8(%ebp),%edx
 mov    0x1c(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo>
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
 mov    %edx,0x50(%eax)
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder6AttachEP12CApplication>
 movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3a5>
-mov    -0x28(%ebp),%esi
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3a3>
 movl   $0x50,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppThreadC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x26e>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x26b>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%ecx
 mov    %esi,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
-mov    %ebx,%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-lea    0x17c(%esi),%ecx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
+mov    -0x28(%ebp),%ecx
+mov    %ebx,%edx
+mov    0x8(%ebp),%eax
+add    $0x17c,%ecx
 mov    %edx,0xc(%eax,%ecx,4)
 mov    -0x28(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x17c,%edx
 mov    0xc(%eax,%edx,4),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppThread6attachEP12CApplicationi>
 mov    -0x28(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x17c,%edx
 mov    0xc(%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x3a1>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x39f>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init App Thread Exception Break!",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x347>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x345>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x341>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x366>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x33f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x364>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x366>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x364>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x37e>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x366>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x37c>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x364>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 addl   $0x1,-0x28(%ebp)
 cmpl   $0x9,-0x28(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x238>
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x69d>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x699>
 mov    -0x24(%ebp),%eax
 movzbl %al,%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEh>
 mov    %ax,-0x1e(%ebp)
 cmpw   $0x0,-0x1e(%ebp)
-je     <T> <_ZN12CApplication4LoadEiPPc+0x699>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x695>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandlerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x41a>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x418>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%ecx
 mov    %esi,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 mov    -0x24(%ebp),%ecx
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 add    $0xb4,%ecx
 mov    %edx,0x4(%eax,%ecx,4)
 movzwl -0x1e(%ebp),%edx
 mov    -0x24(%ebp),%ecx
 mov    0x8(%ebp),%eax
 add    $0xb4,%ecx
 mov    0x4(%eax,%ecx,4),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x533>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x531>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init Server Socket Exception Break!",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4d9>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4d7>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4d3>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x4f8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4d1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x4f6>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4f8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4f6>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x510>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x4f8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x50e>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x4f6>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x24(%ebp),%esi
 movl   $0x64,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CNetworkThreadC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x569>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x564>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%ecx
 mov    %esi,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
-mov    %ebx,%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-lea    0x118(%esi),%ecx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
+mov    -0x24(%ebp),%ecx
+mov    %ebx,%edx
+mov    0x8(%ebp),%eax
+add    $0x118,%ecx
 mov    %edx,0x8(%eax,%ecx,4)
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x118,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CNetworkThread6attachEP12CApplicationi>
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x118,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x699>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x695>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init Network Thread Exception Break!",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x642>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x63e>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x63c>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x661>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x638>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x65d>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x661>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x65d>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x676>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x661>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x672>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x65d>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6cb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6c7>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 addl   $0x1,-0x24(%ebp)
 cmpl   $0x64,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x3c0>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x3be>
 movl   $"Application Load() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4(%eax)
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x71b>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x717>
 mov    %ecx,(%esp)
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
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Load() Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Load(int, char**) */

void __thiscall
CApplication::_ZN12CApplication4LoadEiPPc(CApplication *this,int param_1,char **param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  CServerHandler *this_00;
  ST_ServerInfo *pSVar5;
  CInnerMsgHandler *this_01;
  CPacketDecoder *this_02;
  CAppThread *this_03;
  CUdpHandler *this_04;
  int iVar6;
  CDNFException *pCVar7;
  CNetworkThread *this_05;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d;
  string local_3c [7];
  allocator local_35;
  string local_34 [7];
  allocator local_2d;
  int local_2c;
  int local_28;
  ushort local_22;
  
                    /* try { // try from 0804f316 to 0804f31a has its CatchHandler @ 0804f9c1 */
  CUserManager::Init((CUserManager *)(this + 0x63c),this);
  pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0804f34c to 0804f350 has its CatchHandler @ 0804f38b */
  std::string::string(local_54,param_2[1],&local_4d);
                    /* try { // try from 0804f361 to 0804f362 has its CatchHandler @ 0804f365 */
  (*pcVar1)(*(undefined4 *)(this + 0x10),local_54);
                    /* try { // try from 0804f384 to 0804f388 has its CatchHandler @ 0804f38b */
  std::string::~string(local_54);
  std::allocator<char>::~allocator((allocator<char> *)&local_4d);
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0804f3df to 0804f3e3 has its CatchHandler @ 0804f41e */
  std::string::string(local_4c,"./table/server_config.tbl",&local_45);
                    /* try { // try from 0804f3f4 to 0804f3f5 has its CatchHandler @ 0804f3f8 */
  (*pcVar1)(*(undefined4 *)(this + 0x14),local_4c);
                    /* try { // try from 0804f417 to 0804f41b has its CatchHandler @ 0804f41e */
  std::string::~string(local_4c);
  std::allocator<char>::~allocator((allocator<char> *)&local_45);
  uVar4 = CAppConfig::Get_FrameCountValue(*(CAppConfig **)(this + 0x10));
                    /* try { // try from 0804f472 to 0804f482 has its CatchHandler @ 0804f9c1 */
  CFrameCountHandler::InitFrameCountInfo(this + 0x20,(uint)this,uVar4);
  this_00 = operator_new(0x7dc20);
                    /* try { // try from 0804f48a to 0804f48e has its CatchHandler @ 0804f491 */
  CServerHandler::CServerHandler(this_00);
  *(CServerHandler **)(this + 0x1c) = this_00;
                    /* try { // try from 0804f4c2 to 0804f540 has its CatchHandler @ 0804f9c1 */
  CServerHandler::Attach(*(CServerHandler **)(this + 0x1c),this);
  pSVar5 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
  CServerHandler::Load(*(CServerHandler **)(this + 0x1c),pSVar5);
  CPacketTranslater::attach(this);
  this_01 = operator_new(1);
  CInnerMsgHandler::CInnerMsgHandler(this_01);
  *(CInnerMsgHandler **)(this + 0x50) = this_01;
  this_02 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_02,this);
  for (local_2c = 0; iVar2 = local_2c, local_2c < 10; local_2c = local_2c + 1) {
    this_03 = operator_new(0x50);
                    /* try { // try from 0804f548 to 0804f54c has its CatchHandler @ 0804f54f */
    CAppThread::_ZN10CAppThreadC2Ev(this_03);
    *(CAppThread **)(this + (iVar2 + 0x17c) * 4 + 0xc) = this_03;
                    /* try { // try from 0804f59a to 0804f5b6 has its CatchHandler @ 0804f9c1 */
    CAppThread::attach(*(CAppThread **)(this + (local_2c + 0x17c) * 4 + 0xc),this,local_2c);
    cVar3 = CThreadInterface::begin(*(CThreadInterface **)(this + (local_2c + 0x17c) * 4 + 0xc));
    if (cVar3 != '\x01') {
      std::allocator<char>::allocator();
                    /* try { // try from 0804f5e2 to 0804f5e6 has its CatchHandler @ 0804f65c */
      std::string::string(local_44,"CApplication::Load() Init App Thread Exception Break!",&local_3d
                         );
      pCVar7 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804f601 to 0804f605 has its CatchHandler @ 0804f608 */
      CDNFException::CDNFException(pCVar7,local_44);
                    /* try { // try from 0804f647 to 0804f64b has its CatchHandler @ 0804f64e */
      std::string::~string(local_44);
      std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0804f696 to 0804f6ec has its CatchHandler @ 0804f9c1 */
      __cxa_throw(pCVar7,&CDNFException::typeinfo,CDNFException::~CDNFException);
    }
  }
  local_28 = 0;
  do {
    if (100 < local_28) {
      puts("Application Load() Success!");
      this[4] = (CApplication)0x1;
      return;
    }
    local_22 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x10),(uchar)local_28);
    if (local_22 != 0) {
      this_04 = operator_new(8);
                    /* try { // try from 0804f6f4 to 0804f6f8 has its CatchHandler @ 0804f6fb */
      CUdpHandler::CUdpHandler(this_04);
      *(CUdpHandler **)(this + (local_28 + 0xb4) * 4 + 4) = this_04;
                    /* try { // try from 0804f741 to 0804f745 has its CatchHandler @ 0804f9c1 */
      iVar6 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                        (*(CUdpHandler **)(this + (local_28 + 0xb4) * 4 + 4),(uint)local_22);
      iVar2 = local_28;
      if (iVar6 == -1) {
        std::allocator<char>::allocator();
                    /* try { // try from 0804f774 to 0804f778 has its CatchHandler @ 0804f7ee */
        std::string::string(local_3c,"CApplication::Load() Init Server Socket Exception Break!",
                            &local_35);
        pCVar7 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804f793 to 0804f797 has its CatchHandler @ 0804f79a */
        CDNFException::CDNFException(pCVar7,local_3c);
                    /* try { // try from 0804f7d9 to 0804f7dd has its CatchHandler @ 0804f7e0 */
        std::string::~string(local_3c);
        std::allocator<char>::~allocator((allocator<char> *)&local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0804f828 to 0804f83b has its CatchHandler @ 0804f9c1 */
        __cxa_throw(pCVar7,&CDNFException::typeinfo,CDNFException::~CDNFException);
      }
      this_05 = operator_new(100);
                    /* try { // try from 0804f843 to 0804f847 has its CatchHandler @ 0804f84a */
      CNetworkThread::CNetworkThread(this_05);
      *(CNetworkThread **)(this + (iVar2 + 0x118) * 4 + 8) = this_05;
                    /* try { // try from 0804f895 to 0804f8b1 has its CatchHandler @ 0804f9c1 */
      CNetworkThread::attach(*(CNetworkThread **)(this + (local_28 + 0x118) * 4 + 8),this,local_28);
      cVar3 = CThreadInterface::begin(*(CThreadInterface **)(this + (local_28 + 0x118) * 4 + 8));
      if (cVar3 != '\x01') {
        std::allocator<char>::allocator();
                    /* try { // try from 0804f8dd to 0804f8e1 has its CatchHandler @ 0804f957 */
        std::string::string(local_34,"CApplication::Load() Init Network Thread Exception Break!",
                            &local_2d);
        pCVar7 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804f8fc to 0804f900 has its CatchHandler @ 0804f903 */
        CDNFException::CDNFException(pCVar7,local_34);
                    /* try { // try from 0804f942 to 0804f946 has its CatchHandler @ 0804f949 */
        std::string::~string(local_34);
        std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0804f98e to 0804f9b1 has its CatchHandler @ 0804f9c1 */
        __cxa_throw(pCVar7,&CDNFException::typeinfo,CDNFException::~CDNFException);
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 126 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
        m_userManager.Init(this);
        m_appConfig->Load_Table(argv[1]);
        m_serverConfig->Load_Table("./table/server_config.tbl");
        m_frame.InitFrameCountInfo(this, m_appConfig->Get_FrameCountValue(), 1000);
        m_serverHandler = new CServerHandler;
        m_serverHandler->Attach(this);
        m_serverHandler->Load(m_serverConfig->GetServerInfo());
        CPacketTranslater::attach(this);
        m_innerMsg = new CInnerMsgHandler;
        CPacketDecoderInstance()->Attach(this);
        for (int i = 0; i < 10; i++)
        {
            m_appThreads[i] = new CAppThread;
            m_appThreads[i]->attach(this, i);
            if (!m_appThreads[i]->begin())
            {
                throw CDNFException(
                    std::string("CApplication::Load() Init App Thread Exception Break!"));
            }
        }
        for (int i = 0; i <= 100; i++)
        {
            unsigned short port = m_appConfig->Get_ServerUdpPort((unsigned char)i);
            if (port != 0)
            {
                m_udpHandlers[i] = new CUdpHandler;
                if (m_udpHandlers[i]->InitServerSocket((unsigned int)port) == -1)
                {
                    throw CDNFException(
                        std::string("CApplication::Load() Init Server Socket Exception Break!"));
                }
                m_netThreads[i] = new CNetworkThread;
                m_netThreads[i]->attach(this, i);
                if (!m_netThreads[i]->begin())
                {
                    throw CDNFException(
                        std::string("CApplication::Load() Init Network Thread Exception Break!"));
                }
            }
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
