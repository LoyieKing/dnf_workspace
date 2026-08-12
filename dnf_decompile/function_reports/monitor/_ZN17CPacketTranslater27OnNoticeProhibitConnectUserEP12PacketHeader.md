# _ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader

`CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80833f4` | `0x6f8` | `0x807061a` | `0x711` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,456 +1,449 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0xbc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xe2>
-lea    -0x75(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xfa>
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x75(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeProhibitConnectUser : 0 == m_pclApp",0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x7c(%ebp),%esi
+lea    -0x9c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x90>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x9f>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x7c(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x8a>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x99>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xb9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xa7>
-lea    -0x7c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xb9>
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xd4>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0xb9>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x75(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x617>
-lea    -0x75(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x630>
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x4c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x48(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x44(%ebp)
 call   <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
-lea    -0x88(%ebp),%edx
+lea    -0xa8(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x44(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgr17GetCacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x173>
-mov    -0x84(%ebp),%edi
-mov    -0x88(%ebp),%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1ad>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x3c(%ebp)
+mov    -0xa4(%ebp),%esi
+mov    -0xa8(%ebp),%ebx
 movl   $0x8cc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"OnNoticeProhibitConnectUser() (%s,%d,%d)\n",0x8(%esp)
 movl   $"./log/ExchangeServer",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1bc>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1e0>
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1bc>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1e0>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1c1>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1e5>
 mov    $0x0,%eax
+mov    %al,-0x3d(%ebp)
+mov    0x8(%ebp),%edx
+cmpb   $0x0,-0x3d(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1f8>
+mov    $0x0,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1fd>
+mov    $0x1,%eax
+mov    %al,0x11(%edx)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1ce>
-mov    -0x28(%ebp),%eax
-movb   $0x0,0x11(%eax)
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x1d5>
-mov    -0x28(%ebp),%eax
-movb   $0x1,0x11(%eax)
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x2e9>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0xffffffff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager18DeleteProhibitUserEjc>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x276>
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x8ef,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[DELETE_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
-movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x8f2,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[DELETE_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
-movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6ed>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x529>
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x454>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
-cmp    $0xff,%al
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x3e1>
-mov    -0x28(%ebp),%eax
-movb   $0x2,0xe(%eax)
-mov    -0x28(%ebp),%eax
-movw   $0x4c9,(%eax)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    -0x28(%ebp),%edx
-mov    %al,0x12(%edx)
-mov    -0x28(%ebp),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader>
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x90a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[ALREADY_INSERT] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
-movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6ed>
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x90e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[ALREADY_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
-movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x5d3>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x3b8>
 movl   $0xc,(%esp)
 call   <T> <_ZN16CDNFProhibitUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUserC1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x483>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x25d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x617>
-mov    %ebx,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edx
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x630>
+mov    %ebx,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+cwtl
 movl   $0x1,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    -0x20(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18InsertProhibitUserEjP16CDNFProhibitUser>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x565>
-mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x33e>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
 movl   $0x922,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[INSERT_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%ebx
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x38(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x565>
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x33e>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
+movl   $0x926,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[INSERT_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
+movl   $"./log/ProhibitUser",0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x4ef>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CDNFProhibitUser12GetChannelNoEv>
+cmp    $0xff,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x480>
+mov    0x8(%ebp),%eax
+movb   $0x2,0xe(%eax)
+mov    0x8(%ebp),%eax
+movw   $0x4c9,(%eax)
+mov    0x8(%ebp),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,0x12(%ebx)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
+mov    0x8(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
+movl   $0x90a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
 mov    -0x28(%ebp),%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x926,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[INSERT_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
-movl   $"./log/ProhibitUser",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[ALREADY_INSERT] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
+movl   $"./log/ProhibitUser",0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x706>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
+movl   $0x90e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[ALREADY_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
+movl   $"./log/ProhibitUser",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
 movw   $0x4c9,(%eax)
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    -0x28(%ebp),%edx
-mov    %al,0x12(%edx)
-mov    -0x28(%ebp),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %al,0x12(%ebx)
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
-mov    %ebx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6ed>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x706>
+movl   $0xffffffff,0x8(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager18DeleteProhibitUserEjc>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x5bc>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
+movl   $0x8ef,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[DELETE_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
+movl   $"./log/ProhibitUser",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,0x4(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xf(%eax),%eax
+movswl %ax,%esi
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movsbl %al,%ebx
+movl   $0x8f2,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[DELETE_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n",0x8(%esp)
+movl   $"./log/ProhibitUser",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x706>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x693>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6ac>
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
 movl   $0x939,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeProhibitConnectUser Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x68c>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6a5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6ed>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x706>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x93e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeProhibitConnectUser Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x6e8>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader+0x701>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x9c,%esp
+add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader
               (PacketHeader *param_1)

{
  short sVar1;
  bool bVar2;
  PacketHeader *pPVar3;
  char cVar4;
  PacketHeader PVar5;
  CDNFException *this;
  CCacheCharacterMgr *this_00;
  undefined4 uVar6;
  int iVar7;
  CServerHandler *pCVar8;
  CTcpManagerServer *pCVar9;
  CDNFProhibitUser *pCVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 local_8c;
  undefined4 local_88;
  string local_80 [7];
  allocator local_79;
  CMyFileLog local_78 [8];
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  int local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  CDNFProhibitUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808342d to 08083431 has its CatchHandler @ 0808349b */
    std::string::string(local_80,"CPacketTranslater::OnNoticeProhibitConnectUser : 0 == m_pclApp",
                        &local_79);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808344c to 08083450 has its CatchHandler @ 08083453 */
    CDNFException::CDNFException(this,local_80);
                    /* try { // try from 0808348a to 0808348e has its CatchHandler @ 08083491 */
    std::string::~string(local_80);
    std::allocator<char>::~allocator((allocator<char> *)&local_79);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080834d1 to 08083853 has its CatchHandler @ 08083a0b */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  uVar11 = *(uint *)(param_1 + 10);
  this_00 = (CCacheCharacterMgr *)
            exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv();
  cVar4 = exchange_server::CCacheCharacterMgr::GetCacheCharacter
                    (this_00,uVar11,(CACHE_CHARACTER_TYPE *)&local_8c);
  if (cVar4 != '\0') {
    uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
    CMyFileLog::CMyFileLog(local_78,"OnNoticeProhibitConnectUser",0x8cc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_78,"./log/ExchangeServer","OnNoticeProhibitConnectUser() (%s,%d,%d)\n",uVar6,
               local_8c,local_88);
  }
  local_28 = m_pclApp + 0x10;
  local_30 = CUserManager::FindUser((uint)local_28);
  if ((local_30 == 0) && (iVar7 = CUserManager::FindProhibitUser((uint)local_28), iVar7 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_2c[0x11] = (PacketHeader)0x0;
  }
  else {
    local_2c[0x11] = (PacketHeader)0x1;
  }
  if (local_2c[0xe] == (PacketHeader)0x0) {
    uVar11 = *(uint *)(local_2c + 10);
    local_24 = (CDNFProhibitUser *)CUserManager::FindProhibitUser((uint)local_28);
    if (local_24 == (CDNFProhibitUser *)0x0) {
      pCVar10 = CDNFProhibitUser::operator_new((CDNFProhibitUser *)0xc,uVar11);
                    /* try { // try from 0808385b to 0808385f has its CatchHandler @ 08083862 */
      CDNFProhibitUser::CDNFProhibitUser(pCVar10);
      local_24 = pCVar10;
                    /* try { // try from 080838a8 to 08083a05 has its CatchHandler @ 08083a0b */
      CDNFProhibitUser::_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb
                (pCVar10,*(uint *)(local_2c + 10),*(short *)(local_2c + 0xf),-1,true);
      cVar4 = CUserManager::_ZN12CUserManager18InsertProhibitUserEjP16CDNFProhibitUser
                        ((CUserManager *)local_28,*(uint *)(local_2c + 10),local_24);
      if (cVar4 != '\x01') {
        sVar1 = *(short *)(local_2c + 0xf);
        PVar5 = local_2c[0xe];
        uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
        CMyFileLog::CMyFileLog(local_50,"OnNoticeProhibitConnectUser",0x922);
        pcVar12 = "./log/ProhibitUser";
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/ProhibitUser",
                   "[INSERT_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
                   ,uVar6,(int)(char)PVar5,(int)sVar1);
        pCVar10 = local_24;
        if (local_24 != (CDNFProhibitUser *)0x0) {
          CDNFProhibitUser::~CDNFProhibitUser(local_24);
          CDNFProhibitUser::operator_delete(pCVar10,pcVar12);
        }
      }
      sVar1 = *(short *)(local_2c + 0xf);
      PVar5 = local_2c[0xe];
      uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
      CMyFileLog::CMyFileLog(local_48,"OnNoticeProhibitConnectUser",0x926);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/ProhibitUser",
                 "[INSERT_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
                 ,uVar6,(int)(char)PVar5,(int)sVar1);
    }
    else {
      cVar4 = CDNFProhibitUser::_ZN16CDNFProhibitUser12GetChannelNoEv(local_24);
      if (cVar4 == -1) {
        local_2c[0xe] = (PacketHeader)0x2;
        *(undefined2 *)local_2c = 0x4c9;
        PVar5 = (PacketHeader)CApplication::Get_ServerGroup(m_pclApp);
        pPVar3 = local_2c;
        local_2c[0x12] = PVar5;
        pCVar8 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        pCVar9 = (CTcpManagerServer *)
                 CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar8);
        CTcpManagerServer::SendTcpPacket(pCVar9,pPVar3);
        sVar1 = *(short *)(local_2c + 0xf);
        PVar5 = local_2c[0xe];
        uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
        CMyFileLog::CMyFileLog(local_60,"OnNoticeProhibitConnectUser",0x90a);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_60,"./log/ProhibitUser",
                   "[ALREADY_INSERT] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
                   ,uVar6,(int)(char)PVar5,(int)sVar1);
        return;
      }
      sVar1 = *(short *)(local_2c + 0xf);
      PVar5 = local_2c[0xe];
      uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
      CMyFileLog::CMyFileLog(local_58,"OnNoticeProhibitConnectUser",0x90e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/ProhibitUser",
                 "[ALREADY_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
                 ,uVar6,(int)(char)PVar5,(int)sVar1);
    }
    *(undefined2 *)local_2c = 0x4c9;
    PVar5 = (PacketHeader)CApplication::Get_ServerGroup(m_pclApp);
    pPVar3 = local_2c;
    local_2c[0x12] = PVar5;
    pCVar8 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    pCVar9 = (CTcpManagerServer *)CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar8)
    ;
    CTcpManagerServer::SendTcpPacket(pCVar9,pPVar3);
  }
  else {
    cVar4 = CUserManager::_ZN12CUserManager18DeleteProhibitUserEjc
                      ((CUserManager *)local_28,*(uint *)(local_2c + 10),-1);
    if (cVar4 != '\x01') {
      sVar1 = *(short *)(local_2c + 0xf);
      PVar5 = local_2c[0xe];
      uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
      CMyFileLog::CMyFileLog(local_70,"OnNoticeProhibitConnectUser",0x8ef);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_70,"./log/ProhibitUser",
                 "[DELETE_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
                 ,uVar6,(int)(char)PVar5,(int)sVar1);
    }
    sVar1 = *(short *)(local_2c + 0xf);
    PVar5 = local_2c[0xe];
    uVar6 = NumberToString(*(uint *)(local_2c + 10),0);
    CMyFileLog::CMyFileLog(local_68,"OnNoticeProhibitConnectUser",0x8f2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_68,"./log/ProhibitUser",
               "[DELETE_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, flag( %d ), time( %d ) \n"
               ,uVar6,(int)(char)PVar5,(int)sVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2029 行）：

```cpp
void CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeProhibitConnectUser : 0 == m_pclApp");
        }
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        unsigned int dbid = ((RA_UINT<10>*)pkt)->v;
        exchange_server::CACHE_CHARACTER_TYPE cacheType;
        if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(dbid,
                                                                               &cacheType) != 0)
        {
            char* s = NumberToString(dbid, 0);
            DNF_LOG_SCOPE_LINE(0x8cc,"./log/ExchangeServer", "OnNoticeProhibitConnectUser() (%s,%d,%d)\n", s,
                cacheType.m_field0, cacheType.m_field4);
        }
        bool notPresent =
            userMgr->FindUser(dbid) == 0 && userMgr->FindProhibitUser(dbid) == 0;
        ((RA_S8<17>*)pkt)->v = notPresent ? 0 : 1;
        if (((RA_S8<14>*)pkt)->v == 0)
        {
            CDNFProhibitUser* p = userMgr->FindProhibitUser(dbid);
            if (p == 0)
            {
                p = new CDNFProhibitUser;
                p->SetUserConnectableTime(dbid, ((RA_S16<15>*)pkt)->v, -1, true);
                if (userMgr->InsertProhibitUser(dbid, p) != 1)
                {
                    char* s = NumberToString(dbid, 0);
                    DNF_LOG_SCOPE_LINE(0x922,"./log/ProhibitUser",
                        "[INSERT_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : "
                        "%s, flag( %d ), time( %d ) \n",
                        s, (int)(char)((RA_S8<14>*)pkt)->v,
                        (int)((RA_S16<15>*)pkt)->v);
                    delete p;
                }
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x926,"./log/ProhibitUser",
                    "[INSERT_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser "
                    "m_id : %s, flag( %d ), time( %d ) \n",
                    s, (int)(char)((RA_S8<14>*)pkt)->v,
                    (int)((RA_S16<15>*)pkt)->v);
            }
            else
            {
                if (p->GetChannelNo() == -1)
                {
                    ((RA_S8<14>*)pkt)->v = 2;
                    *(unsigned short*)pkt = 0x4c9;
                    ((RA_S8<18>*)pkt)->v = (char)m_pclApp->Get_ServerGroup();
                    handler->GetTcpManagerServer()->SendTcpPacket(pkt);
                    char* s = NumberToString(dbid, 0);
                    DNF_LOG_SCOPE_LINE(0x90a,"./log/ProhibitUser",
                        "[ALREADY_INSERT] CPacketTranslater::OnNoticeProhibitConnectUser m_id "
                        ": %s, flag( %d ), time( %d ) \n",
                        s, (int)(char)((RA_S8<14>*)pkt)->v,
                        (int)((RA_S16<15>*)pkt)->v);
                    return;
                }
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x90e,"./log/ProhibitUser",
                    "[ALREADY_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser "
                    "m_id : %s, flag( %d ), time( %d ) \n",
                    s, (int)(char)((RA_S8<14>*)pkt)->v,
                    (int)((RA_S16<15>*)pkt)->v);
            }
            *(unsigned short*)pkt = 0x4c9;
            ((RA_S8<18>*)pkt)->v = (char)m_pclApp->Get_ServerGroup();
            handler->GetTcpManagerServer()->SendTcpPacket(pkt);
        }
        else
        {
            if (userMgr->DeleteProhibitUser(dbid, -1) != 1)
            {
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x8ef,"./log/ProhibitUser",
                    "[DELETE_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, "
                    "flag( %d ), time( %d ) \n",
                    s, (int)(char)((RA_S8<14>*)pkt)->v,
                    (int)((RA_S16<15>*)pkt)->v);
            }
            char* s = NumberToString(dbid, 0);
            DNF_LOG_SCOPE_LINE(0x8f2,"./log/ProhibitUser",
                "[DELETE_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : "
                "%s, flag( %d ), time( %d ) \n",
                s, (int)(char)((RA_S8<14>*)pkt)->v,
                (int)((RA_S16<15>*)pkt)->v);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x939,"./log/Except",
            "CPacketTranslater::OnNoticeProhibitConnectUser Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x93e, "./log/Except",
            "CPacketTranslater::OnNoticeProhibitConnectUser Exception Break\n");
    }
}
```
