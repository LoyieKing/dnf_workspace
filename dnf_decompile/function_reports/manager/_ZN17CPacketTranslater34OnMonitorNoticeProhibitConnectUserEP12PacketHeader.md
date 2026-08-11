# _ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader

`CPacketTranslater::OnMonitorNoticeProhibitConnectUser(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8065440` | `0x718` | `0x805c1a0` | `0x6fb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,497 +1,498 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xbc,%esp
+sub    $0xac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0xf2>
-lea    -0x69(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x69(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser : 0 == m_pclApp",0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x70(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x98>
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
-lea    -0x70(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0xb7>
-lea    -0x70(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x69(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x629>
-lea    -0x69(%ebp),%eax
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x602>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x4c,%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+mov    %al,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
+mov    %ax,-0x22(%ebp)
 mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x187>
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x18e>
+movl   $0x138,0x8(%esp)
+movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movswl -0x22(%ebp),%edx
+movsbl -0x23(%ebp),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x138,0x8(%esp)
-movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser Time Out, m_id : %d, flag( %d ), time( %d )\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
-lea    -0x76(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
+lea    -0x4a(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser9GetIpPortERjRt>
-mov    -0x74(%ebp),%eax
+mov    -0x48(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x1b4>
-movzwl -0x76(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x1bb>
+movzwl -0x4a(%ebp),%eax
 test   %ax,%ax
-je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x709>
+je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6ec>
+cmpb   $0x2,-0x23(%ebp)
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x37f>
+mov    0x8(%ebp),%eax
+movw   $0x4c8,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x11,%eax
+movb   $0x2,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x2,%eax
+movw   $0x12,(%eax)
+movl   $0x14a,0x8(%esp)
+movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+movsbl %al,%ebx
+mov    0x8(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
+movsbl %al,%ecx
+movzwl -0x4a(%ebp),%eax
+movzwl %ax,%edx
+mov    -0x48(%ebp),%eax
+mov    %ebx,0x1c(%esp)
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x38e>
-mov    -0x28(%ebp),%eax
-movw   $0x4c8,(%eax)
-mov    -0x28(%ebp),%eax
-movb   $0x2,0x11(%eax)
-mov    -0x28(%ebp),%eax
-movw   $0x12,0x2(%eax)
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0xa8(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x11(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0xa4(%ebp)
-movzwl -0x76(%ebp),%eax
-movzwl %ax,%edi
-mov    -0x74(%ebp),%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x14a,0x8(%esp)
-movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xa8(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0xa4(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x74(%ebp),%edi
-movzwl -0x76(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x48(%ebp),%edi
+movzwl -0x4a(%ebp),%eax
 movzwl %ax,%esi
-mov    -0x28(%ebp),%ebx
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
 mov    %edi,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $0x12,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70c>
-lea    -0x51(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6ef>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
-lea    -0x51(%ebp),%edx
+lea    -0x35(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x334>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x325>
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
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x32e>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x353>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x353>
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x36b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x353>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x51(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x629>
-lea    -0x51(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x31f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x344>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x344>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x35c>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x344>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x602>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser21IncreMonitorRetPacketEv>
-mov    -0x28(%ebp),%eax
-movzbl 0x11(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser19SetProhibitUserInfoEc>
+movl   $0x157,0x8(%esp)
+movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
+movsbl %al,%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CDNFProhibitUser22GetMonitorRetPacketCntEv>
+movzbl %al,%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %ebx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
-movzbl 0x11(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CDNFProhibitUser22GetMonitorRetPacketCntEv>
-movsbl %al,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x157,0x8(%esp)
-movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xa0(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser Check IP Port, m_id : %d, server group(%d), cnt(%d), m_bIsConnect(%d)",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser22GetMonitorRetPacketCntEv>
-movsbl %al,%ebx
+movzbl %al,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv>
 cmp    %eax,%ebx
 setge  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
-lea    -0x89(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
+lea    -0x77(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Web_Prohibit_User_ConnectC1Ev>
+lea    -0x77(%ebp),%eax
+add    $0xe,%eax
+movb   $0x7f,(%eax)
+lea    -0x77(%ebp),%eax
+add    $0xf,%eax
+movw   $0x0,(%eax)
+lea    -0x77(%ebp),%eax
+lea    0x11(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser14GetConnectFlagEv>
-mov    %al,-0x78(%ebp)
-movw   $0x0,-0x7a(%ebp)
-movb   $0x7f,-0x7b(%ebp)
-movzbl -0x78(%ebp),%eax
-movsbl %al,%eax
-mov    %eax,-0x9c(%ebp)
-movzwl -0x76(%ebp),%eax
-movzwl %ax,%edi
-mov    -0x74(%ebp),%esi
+mov    %al,(%ebx)
+movl   $0x165,0x8(%esp)
+movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CDNFProhibitUser14GetConnectFlagEv>
+movsbl %al,%ecx
+movzwl -0x4a(%ebp),%eax
+movzwl %ax,%edx
+mov    -0x48(%ebp),%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x165,0x8(%esp)
-movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x9c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d)\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x7f(%ebp)
-movw   $0x12,-0x87(%ebp)
-mov    -0x74(%ebp),%edi
-movzwl -0x76(%ebp),%eax
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x48(%ebp),%edi
+movzwl -0x4a(%ebp),%eax
 movzwl %ax,%esi
-lea    -0x89(%ebp),%ebx
+lea    -0x77(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
 mov    %edi,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $0x12,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
-lea    -0x39(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
-lea    -0x39(%ebp),%edx
+lea    -0x2d(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5ce>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5a7>
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
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5c8>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5ed>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5ed>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5a1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5c6>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5c6>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5db>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5c6>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x602>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x5ed>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x629>
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6a9>
+jne    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x686>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x180,0x8(%esp)
+movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
+lea    -0x88(%ebp),%eax
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
-movl   $0x180,0x8(%esp)
-movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6a2>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x67f>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x185,0x8(%esp)
 movl   $"OnMonitorNoticeProhibitConnectUser",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x702>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6e5>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
 nop
-jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x70d>
+jmp    <T> <_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader+0x6f0>
 nop
-add    $0xbc,%esp
+add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorNoticeProhibitConnectUser(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  PacketHeader *pPVar6;
  char cVar7;
  CDNFException *pCVar8;
  CUdpHandler *pCVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  Packet_Web_Prohibit_User_Connect local_8d [2];
  undefined2 local_8b;
  undefined4 local_83;
  undefined1 local_7f;
  undefined2 local_7e;
  char local_7c;
  ushort local_7a;
  uint local_78;
  string local_74 [7];
  allocator local_6d;
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  string local_5c [7];
  allocator local_55;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CApplication *local_28;
  CDNFProhibitUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08065479 to 0806547d has its CatchHandler @ 080654f3 */
    std::string::string(local_74,
                        "CPacketTranslater::OnMonitorNoticeProhibitConnectUser : 0 == m_pclApp",
                        &local_6d);
    pCVar8 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065498 to 0806549c has its CatchHandler @ 0806549f */
    CDNFException::CDNFException(pCVar8,local_74);
                    /* try { // try from 080654de to 080654e2 has its CatchHandler @ 080654e5 */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0806552d to 080656de has its CatchHandler @ 08065a65 */
    __cxa_throw(pCVar8,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  local_28 = m_pclApp + 0x4c;
  local_24 = (CDNFProhibitUser *)CUserManager::FindProhibitUser((uint)local_28);
  if (local_24 == (CDNFProhibitUser *)0x0) {
    sVar3 = *(short *)(local_2c + 0xf);
    PVar1 = local_2c[0xe];
    uVar4 = *(undefined4 *)(local_2c + 10);
    CMyFileLog::CMyFileLog(local_6c,"OnMonitorNoticeProhibitConnectUser",0x138);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_6c,"./log/ProhibitUser",
               "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Time Out, m_id : %d, flag( %d ), time( %d )\n"
               ,uVar4,(int)(char)PVar1,(int)sVar3);
  }
  else {
    CDNFProhibitUser::GetIpPort(local_24,&local_78,&local_7a);
    uVar5 = local_78;
    if ((local_78 != 0) || (local_7a != 0)) {
      if (local_2c[0xe] == (PacketHeader)0x2) {
        *(undefined2 *)local_2c = 0x4c8;
        local_2c[0x11] = (PacketHeader)0x2;
        *(undefined2 *)(local_2c + 2) = 0x12;
        PVar1 = local_2c[0xe];
        PVar2 = local_2c[0x11];
        uVar13 = (uint)local_7a;
        uVar4 = *(undefined4 *)(local_2c + 10);
        CMyFileLog::CMyFileLog(local_64,"OnMonitorNoticeProhibitConnectUser",0x14a);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_64,"./log/ProhibitUser",
                   "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n"
                   ,uVar4,uVar5,uVar13,(int)(char)PVar2,(int)(char)PVar1);
        pPVar6 = local_2c;
        pCVar9 = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
        cVar7 = CUdpHandler::SendToClient(pCVar9,(char *)pPVar6,0x12,local_7a,(char *)0x0,local_78);
        if (cVar7 != '\x01') {
          std::allocator<char>::allocator();
          piVar10 = __errno_location();
          pcVar11 = strerror(*piVar10);
                    /* try { // try from 08065715 to 08065719 has its CatchHandler @ 0806578f */
          std::string::string(local_5c,pcVar11,&local_55);
          pCVar8 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065734 to 08065738 has its CatchHandler @ 0806573b */
          CDNFException::CDNFException(pCVar8,local_5c);
                    /* try { // try from 0806577a to 0806577e has its CatchHandler @ 08065781 */
          std::string::~string(local_5c);
          std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080657c9 to 08065978 has its CatchHandler @ 08065a65 */
          __cxa_throw(pCVar8,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
        }
      }
      else {
        CDNFProhibitUser::IncreMonitorRetPacket(local_24);
        CDNFProhibitUser::SetProhibitUserInfo(local_24,(char)local_2c[0x11]);
        PVar1 = local_2c[0x11];
        cVar7 = CDNFProhibitUser::GetMonitorRetPacketCnt(local_24);
        PVar2 = local_2c[0x12];
        uVar4 = *(undefined4 *)(local_2c + 10);
        CMyFileLog::CMyFileLog(local_54,"OnMonitorNoticeProhibitConnectUser",0x157);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_54,"./log/ProhibitUser",
                   "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Check IP Port, m_id : %d, server group(%d), cnt(%d), m_bIsConnect(%d)"
                   ,uVar4,(uint)(byte)PVar2,(int)cVar7,(int)(char)PVar1);
        cVar7 = CDNFProhibitUser::GetMonitorRetPacketCnt(local_24);
        iVar12 = CServerHandler::_ZN14CServerHandler22GetAlivedMonitorServerEv
                           (*(CServerHandler **)(m_pclApp + 0x18));
        if (iVar12 <= cVar7) {
          Packet_Web_Prohibit_User_Connect::Packet_Web_Prohibit_User_Connect(local_8d);
          local_7c = CDNFProhibitUser::GetConnectFlag(local_24);
          uVar5 = local_78;
          local_7e = 0;
          local_7f = 0x7f;
          iVar12 = (int)local_7c;
          uVar13 = (uint)local_7a;
          uVar4 = *(undefined4 *)(local_2c + 10);
          CMyFileLog::CMyFileLog(local_4c,"OnMonitorNoticeProhibitConnectUser",0x165);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_4c,"./log/ProhibitUser",
                     "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d)\n"
                     ,uVar4,uVar5,uVar13,iVar12);
          local_83 = *(undefined4 *)(local_2c + 10);
          local_8b = 0x12;
          pCVar9 = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
          cVar7 = CUdpHandler::SendToClient
                            (pCVar9,(char *)local_8d,0x12,local_7a,(char *)0x0,local_78);
          if (cVar7 != '\x01') {
            std::allocator<char>::allocator();
            piVar10 = __errno_location();
            pcVar11 = strerror(*piVar10);
                    /* try { // try from 080659af to 080659b3 has its CatchHandler @ 08065a29 */
            std::string::string(local_44,pcVar11,local_3d);
            pCVar8 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080659ce to 080659d2 has its CatchHandler @ 080659d5 */
            CDNFException::CDNFException(pCVar8,local_44);
                    /* try { // try from 08065a14 to 08065a18 has its CatchHandler @ 08065a1b */
            std::string::~string(local_44);
            std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08065a60 to 08065a64 has its CatchHandler @ 08065a65 */
            __cxa_throw(pCVar8,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp)（约第 471 行）：

```cpp
void CPacketTranslater::OnMonitorNoticeProhibitConnectUser(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser : 0 == m_pclApp");
        CUserManager* um = &m_pclApp->m_userManager;
        int key = *(int*)((char*)header + 0xa);
        char flag = ((char*)header)[0xe];
        short time = *(short*)((char*)header + 0xf);
        CDNFProhibitUser* pu = um->FindProhibitUser(key);
        if (!pu)
        {
            CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x138);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Time Out, m_id : %d, flag( %d ), time( %d )\n",
                key, flag, time);
            return;
        }
        unsigned int uip;
        unsigned short uport;
        pu->GetIpPort(uip, uport);
        if (uip == 0 && uport == 0)
            return;
        if (flag == 2)
        {
            *(unsigned short*)((char*)header) = 0x4c8;
            ((char*)header)[0x11] = 2;
            *(unsigned short*)((char*)header + 2) = 0x12;
            CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x14a);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",
                key, uip, uport, ((char*)header)[0x11], ((char*)header)[0xe]);
            if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                     ->SendToClient((char*)header, 0x12, uport, 0, uip))
                throw CDNFException(strerror(errno));
            return;
        }
        pu->IncreMonitorRetPacket();
        pu->SetProhibitUserInfo(((char*)header)[0x11]);
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x157);
        log("./log/ProhibitUser",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Check IP Port, m_id : %d, server group(%d), cnt(%d), m_bIsConnect(%d)",
            key, ((char*)header)[0x12], pu->GetMonitorRetPacketCnt(), ((char*)header)[0x11]);
        if (pu->GetMonitorRetPacketCnt() >= m_pclApp->m_serverHandler->GetAlivedMonitorServer())
        {
            Packet_Web_Prohibit_User_Connect pkt;
            ((char*)&pkt)[0xe] = 0x7f;
            *(unsigned short*)((char*)&pkt + 0xf) = 0;
            ((char*)&pkt)[0x11] = pu->GetConnectFlag();
            CMyFileLog log2("OnMonitorNoticeProhibitConnectUser", 0x165);
            log2("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d)\n",
                key, uip, uport, pu->GetConnectFlag());
            if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                     ->SendToClient((char*)&pkt, 0x12, uport, 0, uip))
                throw CDNFException(strerror(errno));
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x180);
        log("./log/Except",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x185);
        log("./log/Except",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break\n");
    }
}
```
