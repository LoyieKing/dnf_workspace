# _ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader

`CPacketTranslater::OnWebNoticeProhibitConnectUser(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8064e66` | `0x5da` | `0x805ba8a` | `0x5d9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,400 +1,400 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0xe2>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser : 0 == m_pclApp",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0xa7>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f9>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f8>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 lea    -0x73(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Web_Prohibit_User_ConnectC1Ev>
 movl   $0x12,0x8(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x73(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movw   $0x13,-0x71(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x90(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0xf(%eax),%eax
 movswl %ax,%edi
 mov    -0x28(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movsbl %al,%esi
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0xdb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x90(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x8c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x4c,%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x28(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x281>
+je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x283>
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18DeleteProhibitUserEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x265>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x267>
 mov    -0x28(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x88(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %eax,-0x84(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0xf(%eax),%eax
 movswl %ax,%edi
 mov    -0x28(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movsbl %al,%esi
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0xe6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x88(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x84(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser Delete Err  m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 lea    -0x73(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5cf>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5ce>
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x352>
+jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x34f>
 movl   $0x14,(%esp)
 call   <T> <_ZN16CDNFProhibitUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUserC1Ev>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x2d7>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x2d4>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f9>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f8>
 mov    %ebx,-0x20(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x2,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser18SetMonitorWaitTimeEjs>
 mov    -0x28(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%edx
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser9SetIpPortEjt>
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18InsertProhibitUserEjP16CDNFProhibitUser>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 lea    -0x73(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5cf>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5ce>
 mov    -0x28(%ebp),%eax
 movb   $0x2,0x11(%eax)
 mov    -0x28(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x80(%ebp)
 mov    -0x28(%ebp),%eax
 movzbl 0x11(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x7c(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%edi
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%esi
 mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x113,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x80(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x7c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%esi
 mov    -0x28(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
 mov    %edi,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $0x13,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5cf>
+je     <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5ce>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 lea    -0x39(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4aa>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4a9>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4a3>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c1>
+jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c1>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c0>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4d6>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4d5>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c1>
+jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4c0>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f9>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x4f8>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x575>
+jne    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x574>
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
 movl   $0x11b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x56e>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x56d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5cf>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5ce>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x120,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5ca>
+jmp    <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader+0x5c9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebNoticeProhibitConnectUser(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PacketHeader *pPVar7;
  char cVar8;
  CDNFException *pCVar9;
  CDNFProhibitUser *this;
  CUdpHandler *this_00;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  Packet_Web_Prohibit_User_Connect local_77 [2];
  undefined2 local_75;
  string local_64 [7];
  allocator local_5d;
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CUserManager *local_28;
  CDNFProhibitUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08064e9f to 08064ea3 has its CatchHandler @ 08064f0d */
    std::string::string(local_64,"CPacketTranslater::OnWebNoticeProhibitConnectUser : 0 == m_pclApp"
                        ,&local_5d);
    pCVar9 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08064ebe to 08064ec2 has its CatchHandler @ 08064ec5 */
    CDNFException::CDNFException(pCVar9,local_64);
                    /* try { // try from 08064efc to 08064f00 has its CatchHandler @ 08064f03 */
    std::string::~string(local_64);
    std::allocator<char>::~allocator((allocator<char> *)&local_5d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08064f43 to 08065119 has its CatchHandler @ 0806535f */
    __cxa_throw(pCVar9,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  Packet_Web_Prohibit_User_Connect::Packet_Web_Prohibit_User_Connect(local_77);
  memcpy(local_77,local_2c,0x12);
  local_75 = 0x13;
  uVar3 = *(ushort *)(local_2c + 4);
  uVar5 = *(undefined4 *)(local_2c + 6);
  sVar4 = *(short *)(local_2c + 0xf);
  PVar1 = local_2c[0xe];
  uVar6 = *(undefined4 *)(local_2c + 10);
  CMyFileLog::CMyFileLog(local_5c,"OnWebNoticeProhibitConnectUser",0xdb);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_5c,"./log/ProhibitUser",
             "CPacketTranslater::OnWebNoticeProhibitConnectUser m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n"
             ,uVar6,(int)(char)PVar1,(int)sVar4,uVar5,(uint)uVar3);
  local_28 = (CUserManager *)(m_pclApp + 0x4c);
  if (local_2c[0xe] == (PacketHeader)0x0) {
    uVar12 = *(uint *)(local_2c + 10);
    local_24 = (CDNFProhibitUser *)CUserManager::FindProhibitUser((uint)local_28);
    if (local_24 == (CDNFProhibitUser *)0x0) {
      this = CDNFProhibitUser::operator_new((CDNFProhibitUser *)0x14,uVar12);
                    /* try { // try from 08065121 to 08065125 has its CatchHandler @ 08065128 */
      CDNFProhibitUser::CDNFProhibitUser(this);
      local_24 = this;
                    /* try { // try from 08065158 to 08065282 has its CatchHandler @ 0806535f */
      CDNFProhibitUser::SetMonitorWaitTime(this,*(uint *)(local_2c + 10),2);
      CDNFProhibitUser::SetIpPort(local_24,*(uint *)(local_2c + 6),*(ushort *)(local_2c + 4));
      CUserManager::_ZN12CUserManager18InsertProhibitUserEjP16CDNFProhibitUser
                (local_28,*(uint *)(local_2c + 10),local_24);
      CServerHandler::_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader
                (*(CServerHandler **)(m_pclApp + 0x18),(PacketHeader *)local_77);
    }
    else {
      local_2c[0x11] = (PacketHeader)0x2;
      PVar1 = local_2c[0xe];
      PVar2 = local_2c[0x11];
      uVar3 = *(ushort *)(local_2c + 4);
      uVar5 = *(undefined4 *)(local_2c + 6);
      uVar6 = *(undefined4 *)(local_2c + 10);
      CMyFileLog::CMyFileLog(local_4c,"OnWebNoticeProhibitConnectUser",0x113);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_4c,"./log/ProhibitUser",
                 "CPacketTranslater::OnWebNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n"
                 ,uVar6,uVar5,(uint)uVar3,(int)(char)PVar2,(int)(char)PVar1);
      pPVar7 = local_2c;
      uVar12 = *(uint *)(local_2c + 6);
      uVar3 = *(ushort *)(local_2c + 4);
      this_00 = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
      cVar8 = CUdpHandler::SendToClient(this_00,(char *)pPVar7,0x13,uVar3,(char *)0x0,uVar12);
      if (cVar8 != '\x01') {
        std::allocator<char>::allocator();
        piVar10 = __errno_location();
        pcVar11 = strerror(*piVar10);
                    /* try { // try from 080652b9 to 080652bd has its CatchHandler @ 08065327 */
        std::string::string(local_44,pcVar11,local_3d);
        pCVar9 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080652d8 to 080652dc has its CatchHandler @ 080652df */
        CDNFException::CDNFException(pCVar9,local_44);
                    /* try { // try from 08065316 to 0806531a has its CatchHandler @ 0806531d */
        std::string::~string(local_44);
        std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0806535a to 0806535e has its CatchHandler @ 0806535f */
        __cxa_throw(pCVar9,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
    }
  }
  else {
    cVar8 = CUserManager::_ZN12CUserManager18DeleteProhibitUserEj(local_28,*(uint *)(local_2c + 10))
    ;
    if (cVar8 != '\x01') {
      uVar3 = *(ushort *)(local_2c + 4);
      uVar5 = *(undefined4 *)(local_2c + 6);
      sVar4 = *(short *)(local_2c + 0xf);
      PVar1 = local_2c[0xe];
      uVar6 = *(undefined4 *)(local_2c + 10);
      CMyFileLog::CMyFileLog(local_54,"OnWebNoticeProhibitConnectUser",0xe6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/Web",
                 "CPacketTranslater::OnWebNoticeProhibitConnectUser Delete Err  m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n"
                 ,uVar6,(int)(char)PVar1,(int)sVar4,uVar5,(uint)uVar3);
    }
    CServerHandler::_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0x18),(PacketHeader *)local_77);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp)（约第 485 行）：

```cpp
void CPacketTranslater::OnWebNoticeProhibitConnectUser(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(
                "CPacketTranslater::OnWebNoticeProhibitConnectUser : 0 == m_pclApp");
        // R10: ORIG local_2c@-0x28
        PacketHeader* hdr = header;
        Packet_Web_Prohibit_User_Connect pkt;
        memcpy(&pkt, hdr, 0x12);
        pkt.packetSize = 0x13;
        // R10: 临时日志形态（前两个实参溢出栈槽 -0x90/-0x8c）
        DNF_LOG_SCOPE_LINE(0xdb, "./log/ProhibitUser",
            "CPacketTranslater::OnWebNoticeProhibitConnectUser m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",
            ((ProhibitUserPacket*)hdr)->m_nFieldA,
            ((ProhibitUserPacket*)hdr)->m_chFieldE,
            ((ProhibitUserPacket*)hdr)->m_sFieldF,
            ((ProhibitUserPacket*)hdr)->m_dwReversed2,
            ((ProhibitUserPacket*)hdr)->m_wReversed1);
        CUserManager* um = &m_pclApp->m_userManager;
        // R10: ORIG je 目标为 Find 路径 → if(flag!=0){Delete}else{Find}
        if (((ProhibitUserPacket*)hdr)->m_chFieldE != 0)
        {
            if (um->DeleteProhibitUser(((ProhibitUserPacket*)hdr)->m_nFieldA) == 0)
            {
                DNF_LOG_SCOPE_LINE(0xe6, "./log/Web",
                    "CPacketTranslater::OnWebNoticeProhibitConnectUser Delete Err  m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",
                    ((ProhibitUserPacket*)hdr)->m_nFieldA,
                    ((ProhibitUserPacket*)hdr)->m_chFieldE,
                    ((ProhibitUserPacket*)hdr)->m_sFieldF,
                    ((ProhibitUserPacket*)hdr)->m_dwReversed2,
                    ((ProhibitUserPacket*)hdr)->m_wReversed1);
            }
            m_pclApp->m_serverHandler->SendAllTcpServer((PacketHeader*)&pkt);
        }
        else
        {
            CDNFProhibitUser* pu = um->FindProhibitUser(((ProhibitUserPacket*)hdr)->m_nFieldA);
            if (pu == 0)
            {
                pu = new CDNFProhibitUser;
                pu->SetMonitorWaitTime(((ProhibitUserPacket*)hdr)->m_nFieldA, 2);
                pu->SetIpPort(((ProhibitUserPacket*)hdr)->m_dwReversed2,
                    ((ProhibitUserPacket*)hdr)->m_wReversed1);
                um->InsertProhibitUser(((ProhibitUserPacket*)hdr)->m_nFieldA, pu);
                m_pclApp->m_serverHandler->SendAllTcpServer((PacketHeader*)&pkt);
                return;
            }
            ((ProhibitUserPacket*)hdr)->m_chField11 = 2;
            DNF_LOG_SCOPE_LINE(0x113, "./log/ProhibitUser",
                "CPacketTranslater::OnWebNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",
                ((ProhibitUserPacket*)hdr)->m_nFieldA,
                ((ProhibitUserPacket*)hdr)->m_dwReversed2,
                ((ProhibitUserPacket*)hdr)->m_wReversed1,
                ((ProhibitUserPacket*)hdr)->m_chField11,
                ((ProhibitUserPacket*)hdr)->m_chFieldE);
            if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                    ->SendToClient((char*)hdr, 0x13,
                        ((ProhibitUserPacket*)hdr)->m_wReversed1, 0,
                        ((ProhibitUserPacket*)hdr)->m_dwReversed2))
                throw CDNFException(strerror(errno));
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x11b, "./log/Except",
            "CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x120, "./log/Except",
            "CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break\n");
    }
}
```
