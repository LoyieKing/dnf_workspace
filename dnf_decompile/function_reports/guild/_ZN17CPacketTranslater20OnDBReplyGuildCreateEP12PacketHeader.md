# _ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader

`CPacketTranslater::OnDBReplyGuildCreate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807f494` | `0x44d` | `0x8075750` | `0x45a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,289 +1,290 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xbc,%esp
+sub    $0xcc,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x40(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x56>
 movl   $0x112c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyGuildCreate : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-mov    -0x20(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x44f>
+mov    -0x40(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x3c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xba>
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xbf>
 movl   $0x1133,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyGuildCreate : 0 == pclRequestUser",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-lea    -0xaf(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x44f>
+lea    -0xc3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Notice_GuildName_On_Guild_CreateC1Ev>
-lea    -0x81(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_Reply_Guild_CreateC1Ev>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x77(%ebp)
-mov    -0x77(%ebp),%eax
-mov    %eax,-0xa5(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0xb9(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0x8b(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xb5(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x87(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x73(%ebp)
-mov    -0x73(%ebp),%eax
-mov    %eax,-0xa1(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x6f(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x83(%ebp)
+mov    -0x40(%ebp),%eax
 add    $0x16,%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x81(%ebp),%eax
+lea    -0x95(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x352>
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x35f>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x221>
-lea    -0x3d(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x238>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1c9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e0>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1fd>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1fd>
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x215>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1fd>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x36c>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x379>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    -0x3c(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x34(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
+mov    %eax,-0x24(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
 mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x2a2>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    %esi,0xc(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
-mov    %eax,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x28e>
+mov    %eax,0x8(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0xb1(%ebp)
+mov    -0x40(%ebp),%eax
+add    $0x16,%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xc3(%ebp),%eax
+add    $0x16,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,-0x96(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+lea    -0xc3(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager11AttendGuildEjj>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x20(%ebp),%edx
-mov    0xe(%edx),%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x9d(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x16,%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xaf(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x82(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0xaf(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x290,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN13CGuildManager11AttendGuildEjj>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild21QueryTodayGuildMemberEP14CServerHandler>
-lea    -0x81(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+lea    -0x95(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x44f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e8>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3f5>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x116d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildCreate Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e1>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3ee>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x44f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1172,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyGuildCreate Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x43d>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x44a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xbc,%esp
+add    $0xcc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBReplyGuildCreate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  char cVar2;
  CDNFException *this;
  CGuildManager *this_00;
  uint uVar3;
  CServerHandler *pCVar4;
  Packet_Notice_GuildName_On_Guild_Create local_b3 [10];
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined1 auStack_9d [23];
  undefined1 local_86;
  Packet_Reply_Guild_Create local_85 [10];
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 auStack_6f [23];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  string local_48 [7];
  allocator local_41 [17];
  CUser *local_30;
  CGuild *local_2c;
  CServerHandler *local_28;
  PacketHeader *local_24;
  
  local_24 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807f4c5 to 0807f548 has its CatchHandler @ 0807f800 */
    CMyFileLog::CMyFileLog(local_58,"OnDBReplyGuildCreate",0x112c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_58,"./log/GuildModify",
               "CPacketTranslater::OnDBReplyGuildCreate : 0 == m_pclApp");
  }
  else {
    local_30 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_50,"OnDBReplyGuildCreate",0x1133);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/GuildModify",
                 "CPacketTranslater::OnDBReplyGuildCreate : 0 == pclRequestUser");
    }
    else {
      Packet_Notice_GuildName_On_Guild_Create::Packet_Notice_GuildName_On_Guild_Create(local_b3);
      Packet_Reply_Guild_Create::Packet_Reply_Guild_Create(local_85);
      local_a9 = *(undefined4 *)(local_24 + 10);
      local_7b = local_a9;
      local_a5 = CUser::GetIdByChannel(local_30);
      local_73 = *(undefined4 *)(local_24 + 0x12);
      local_77 = local_a5;
      memcpy(auStack_6f,local_24 + 0x16,0x16);
      if (*(int *)(local_24 + 0x12) == 0) {
        local_28 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        if (local_28 == (CServerHandler *)0x0) {
          std::allocator<char>::allocator();
                    /* try { // try from 0807f60c to 0807f610 has its CatchHandler @ 0807f67a */
          std::string::string(local_48,"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",
                              local_41);
          this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807f62b to 0807f62f has its CatchHandler @ 0807f632 */
          CDNFException::CDNFException(this,local_48);
                    /* try { // try from 0807f669 to 0807f66d has its CatchHandler @ 0807f670 */
          std::string::~string(local_48);
          std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807f6b0 to 0807f7fa has its CatchHandler @ 0807f800 */
          __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
        }
        uVar3 = *(uint *)(local_24 + 10);
        uVar1 = *(uint *)(local_24 + 0xe);
        this_00 = (CGuildManager *)CApplication::Get_GuildManager(m_pclApp);
        local_2c = (CGuild *)CGuildManager::CreateGuild(this_00,uVar1,local_28,uVar3);
        uVar3 = CUser::GetUniqCharNo(local_30);
        cVar2 = CGuild::InsertGuildMember(local_2c,uVar3,local_30);
        if (cVar2 == '\x01') {
          CUser::QueryGuildMember(local_30,local_28);
        }
        uVar3 = CUser::GetUniqCharNo(local_30);
        CUser::SendSetGuildKeyToUser(local_30,*(uint *)(local_24 + 0xe),uVar3);
        local_a1 = *(undefined4 *)(local_24 + 0xe);
        memcpy(auStack_9d,local_24 + 0x16,0x16);
        local_86 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
        CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                  (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_b3);
        CGuildManager::_ZN13CGuildManager11AttendGuildEjj
                  ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_24 + 0xe),
                   *(uint *)(local_24 + 10));
        pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        CGuild::QueryTodayGuildMember(local_2c,pCVar4);
      }
      CUser::SendTcpGameserver(local_30,(PacketHeader *)local_85);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3266 行）：

```cpp
void CPacketTranslater::OnDBReplyGuildCreate(PacketHeader* pkt)
{
    Packet_DBMW_Reply_Guild_Create* pbinfo = (Packet_DBMW_Reply_Guild_Create*)pkt;
    try
    {
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x112c, "./log/GuildModify", "CPacketTranslater::OnDBReplyGuildCreate : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = pbinfo->m_characNo;
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1133,"./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildCreate : 0 == pclRequestUser");
        return;
    }
    Packet_Notice_GuildName_On_Guild_Create notice;
    Packet_Reply_Guild_Create reply;
    unsigned int guildKey = pbinfo->m_guildId;
    notice.m_charNo = charNo;
    reply.m_charNo = charNo;
    unsigned int channel = user->GetIdByChannel();
    notice.m_channel = channel;
    reply.m_channel = channel;
    int result = pbinfo->m_result;
    reply.m_result = result;
    memcpy(reply.m_name, pbinfo->m_name, 0x16);
    if (result == 0)
    {
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler == 0)
        {
            throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
        }
        CGuild* guild = m_pclApp->Get_GuildManager()->CreateGuild(guildKey, handler, charNo);
        unsigned int uniqCharNo = user->GetUniqCharNo();
        if (guild->InsertGuildMember(uniqCharNo, user) == 1)
        {
            user->QueryGuildMember(handler);
        }
        uniqCharNo = user->GetUniqCharNo();
        user->SendSetGuildKeyToUser(guildKey, uniqCharNo);
        notice.m_guildKey = guildKey;
        memcpy((char*)&notice + 0x16, pbinfo->m_name, 0x16);
        notice.m_group = m_pclApp->Get_ServerGroup();
        m_pclApp->m_serverHandler->SendAllTcpGameServer(&notice);
        (&m_pclApp->m_guildManager)->AttendGuild(guildKey, charNo);
        guild->QueryTodayGuildMember(m_pclApp->Get_ServerHandler());
    }
    user->SendTcpGameserver(&reply);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x116d, "./log/Except", "CPacketTranslater::OnDBReplyGuildCreate Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1172, "./log/Except", "CPacketTranslater::OnDBReplyGuildCreate Exception Break\n");
    }
}
```
