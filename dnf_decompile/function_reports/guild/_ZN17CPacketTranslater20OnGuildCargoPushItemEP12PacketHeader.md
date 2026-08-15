# _ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader

`CPacketTranslater::OnGuildCargoPushItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808495c` | `0x7b5` | `0x807ab40` | `0x7a2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,470 +1,471 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x12c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-lea    -0xd7(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0xdf(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_Channel_Guild_Cargo_Push_ItemC1Ev>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xc9(%ebp)
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0xd1(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0xc4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1b(%eax),%edx
+mov    %eax,-0xcc(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    (%eax),%edx
+mov    %edx,-0xc8(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0xc4(%ebp)
+mov    0x8(%eax),%edx
 mov    %edx,-0xc0(%ebp)
-mov    0x1f(%eax),%edx
+mov    0xc(%eax),%edx
 mov    %edx,-0xbc(%ebp)
-mov    0x23(%eax),%edx
+mov    0x10(%eax),%edx
 mov    %edx,-0xb8(%ebp)
-mov    0x27(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0xb4(%ebp)
-mov    0x2b(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0xb0(%ebp)
-mov    0x2f(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0xac(%ebp)
-mov    0x33(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0xa8(%ebp)
-mov    0x37(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0xa4(%ebp)
-mov    0x3b(%eax),%edx
+mov    0x28(%eax),%edx
 mov    %edx,-0xa0(%ebp)
-mov    0x3f(%eax),%edx
+mov    0x2c(%eax),%edx
 mov    %edx,-0x9c(%ebp)
-mov    0x43(%eax),%edx
+mov    0x30(%eax),%edx
 mov    %edx,-0x98(%ebp)
-mov    0x47(%eax),%edx
-mov    %edx,-0x94(%ebp)
-mov    0x4b(%eax),%edx
-mov    %edx,-0x90(%ebp)
-movzbl 0x4f(%eax),%eax
-mov    %al,-0x8c(%ebp)
-mov    -0x34(%ebp),%eax
+movzbl 0x34(%eax),%eax
+mov    %al,-0x94(%ebp)
+mov    -0x3c(%ebp),%eax
 movzwl 0x51(%eax),%eax
-mov    %ax,-0x8a(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %ax,-0x92(%ebp)
+mov    -0x3c(%ebp),%eax
 movzbl 0x50(%eax),%eax
-mov    %al,-0x8b(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %al,-0x93(%ebp)
+mov    -0x3c(%ebp),%eax
 add    $0x1b,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo>
-mov    %eax,%esi
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movl   $0x19b3,0x8(%esp)
+movl   $"OnGuildCargoPushItem",0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
 movzbl 0x1a(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x100(%ebp)
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 movzbl 0x50(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xfc(%ebp)
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 movzwl 0x51(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0xf8(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0xf4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xf0(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x19b3,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x28(%esp)
+movzwl %ax,%edi
+mov    -0x3c(%ebp),%eax
+mov    0x16(%eax),%esi
+mov    -0x3c(%ebp),%eax
+mov    0x12(%eax),%ebx
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%ecx
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,0x28(%esp)
 mov    -0x100(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0xfc(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0xf8(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0xf4(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    -0xf0(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xfc(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %edi,0x1c(%esp)
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"PUSH ITEM(g:%d,cn:%d,sn:%d,sl:%d,fsn:%d,fst:%d,it:%d,%s)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x84(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x1df>
 movl   $0x19c3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPushItem : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x25b>
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x243>
 movl   $0x19cd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPushItem : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x2c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xcd(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0xd5(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x2ea>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x2d2>
 movl   $0x19d7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPushItem : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x64,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x64,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11IsCargoLockEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x36b>
-mov    -0x34(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x358>
+mov    -0x3c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x19e2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xcc,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x28(%ebp),%eax
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xcc,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x3e8>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x3d5>
+mov    -0x3c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x19ed,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xb5,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x28(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xb5,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo14IsLoadCompleteEv>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x46d>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x45c>
+mov    -0x3c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x19f7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xc3,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
 movzbl 0x15(%eax),%eax
-mov    %al,-0x21(%ebp)
-cmpb   $0x3,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-cmpb   $0x1,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-cmpb   $0x2,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
+mov    %al,-0x25(%ebp)
+cmpb   $0x3,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4f3>
+cmpb   $0x1,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4f3>
+cmpb   $0x2,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4f3>
+movzbl -0x25(%ebp),%edi
+mov    -0x3c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x1a05,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem : Access Deny(%d,%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x24,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
+mov    -0x3c(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0xf8(%ebp)
+mov    -0x3c(%ebp),%eax
+movzbl 0x1a(%eax),%eax
+movzbl %al,%edi
+mov    -0x3c(%ebp),%eax
+mov    0x16(%eax),%esi
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xf8(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %edi,0x10(%esp)
+mov    %esi,0xc(%esp)
+lea    -0x90(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %al,-0xcd(%ebp)
+mov    -0x90(%ebp),%eax
+mov    %eax,-0xcc(%ebp)
+cmpl   $0xc1,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x6a7>
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+add    $0x1d,%eax
+mov    %eax,-0xf4(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0xf0(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    0x1(%eax),%eax
 mov    %eax,%edi
-mov    -0x34(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-movzbl %al,%esi
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%ebx
-mov    -0x34(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,-0xec(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-lea    -0x88(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xec(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0xc5(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0xc4(%ebp)
-cmpl   $0xc1,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x6ba>
-mov    -0x34(%ebp),%eax
-add    $0x38,%eax
-mov    %eax,-0xe8(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x21(%eax),%eax
-mov    %eax,-0xe4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,%edi
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ebx
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0xe8(%ebp),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xf4(%ebp),%edx
 mov    %edx,0x18(%esp)
-mov    -0xe4(%ebp),%edx
+mov    -0xf0(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption>
-mov    -0x34(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,-0xe0(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0xdc(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    %eax,-0xec(%ebp)
+mov    -0x90(%ebp),%edi
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ebx
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%edi
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0xe0(%ebp),%edx
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,%esi
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xec(%ebp),%edx
 mov    %edx,0x1c(%esp)
 movl   $0x0,0x18(%esp)
-mov    -0xdc(%ebp),%edx
-mov    %edx,0x14(%esp)
+mov    %edi,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    %esi,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo17SendHistoryToDBMWEP14CServerHandler25ENUM_GUILD_CARGO_BEHAVIORiPKciiR11DnfItemInfo>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%esi
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %ebx,0x8(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri>
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR>
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x750>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x73d>
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
 movl   $0x1a48,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x749>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x736>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x797>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a4d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuidCargoPushItem Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7a5>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x792>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoPushItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  int iVar2;
  CServerHandler *pCVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  CGuildCargo *pCVar9;
  int iVar10;
  DnfItemInfo *pDVar11;
  PacketHeader *pPVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Packet_Channel_Guild_Cargo_Push_Item local_db [10];
  undefined4 local_d1;
  undefined4 local_cd;
  undefined1 local_c9;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  PacketHeader local_90;
  PacketHeader local_8f;
  undefined2 local_8e;
  int local_8c;
  CMyFileLog local_88 [8];
  CMyFileLog local_80 [8];
  CMyFileLog local_78 [8];
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [24];
  PacketHeader *local_38;
  uint local_34;
  CUser *local_30;
  CGuild *local_2c;
  byte local_25;
  int local_24;
  
  local_38 = param_1;
  Packet_Channel_Guild_Cargo_Push_Item::Packet_Channel_Guild_Cargo_Push_Item(local_db);
  local_cd = *(undefined4 *)(local_38 + 0xe);
  local_c8 = *(int *)(local_38 + 0x12);
  local_c4 = *(undefined4 *)(local_38 + 0x1b);
  local_c0 = *(undefined4 *)(local_38 + 0x1f);
  local_bc = *(undefined4 *)(local_38 + 0x23);
  local_b8 = *(undefined4 *)(local_38 + 0x27);
  local_b4 = *(undefined4 *)(local_38 + 0x2b);
  local_b0 = *(undefined4 *)(local_38 + 0x2f);
  local_ac = *(undefined4 *)(local_38 + 0x33);
  local_a8 = *(undefined4 *)(local_38 + 0x37);
  local_a4 = *(undefined4 *)(local_38 + 0x3b);
  local_a0 = *(undefined4 *)(local_38 + 0x3f);
  local_9c = *(undefined4 *)(local_38 + 0x43);
  local_98 = *(undefined4 *)(local_38 + 0x47);
  local_94 = *(undefined4 *)(local_38 + 0x4b);
  local_90 = local_38[0x4f];
  local_8e = *(undefined2 *)(local_38 + 0x51);
  local_8f = local_38[0x50];
  uVar5 = CGuildCargo::_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo
                    ((DnfItemInfo *)(local_38 + 0x1b));
  uVar6 = (uint)(byte)local_38[0x1a];
  uVar7 = (uint)(byte)local_38[0x50];
  uVar8 = (uint)*(ushort *)(local_38 + 0x51);
  uVar16 = *(undefined4 *)(local_38 + 0x16);
  uVar15 = *(undefined4 *)(local_38 + 0x12);
  uVar14 = *(undefined4 *)(local_38 + 0xe);
  uVar13 = *(undefined4 *)(local_38 + 10);
  CMyFileLog::CMyFileLog(local_88,"OnGuildCargoPushItem",0x19b3);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_88,"./log/GuildCargo","PUSH ITEM(g:%d,cn:%d,sn:%d,sl:%d,fsn:%d,fst:%d,it:%d,%s)",
             uVar13,uVar14,uVar15,uVar16,uVar8,uVar7,uVar6,uVar5);
  if (m_pclApp == 0) {
                    /* try { // try from 08084b2e to 0808502a has its CatchHandler @ 08085030 */
    CMyFileLog::CMyFileLog(local_80,"OnGuildCargoPushItem",0x19c3);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_80,"./log/GuildCargo","CPacketTranslater::OnGuildCargoPushItem : 0 == m_pclApp"
               ,uVar13,uVar14,uVar15,uVar16,uVar8,uVar7,uVar6,uVar5);
  }
  else {
    local_34 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_34);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_78,"OnGuildCargoPushItem",0x19cd);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_78,"./log/GuildCargo",
                 "CPacketTranslater::OnGuildCargoPushItem : 0 == pclUser",uVar13,uVar14,uVar15,
                 uVar16,uVar8,uVar7,uVar6,uVar5);
    }
    else {
      local_d1 = CUser::GetIdByChannel(local_30);
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_70,"OnGuildCargoPushItem",0x19d7);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_70,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoPushItem : 0 == pclGuild");
        local_c9 = 100;
        CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
      }
      else {
        cVar4 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                          ((CGuildManager *)(m_pclApp + 0x290));
        if (cVar4 == '\0') {
          cVar4 = CGuild::IsExistGuildAgit(local_2c);
          if (cVar4 == '\x01') {
            pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
            cVar4 = CGuildCargo::_ZN11CGuildCargo14IsLoadCompleteEv(pCVar9);
            if (cVar4 == '\x01') {
              iVar10 = CUser::GetGuildMemDBInfo(local_30);
              local_25 = *(byte *)(iVar10 + 0x15);
              if (((local_25 == 3) || (local_25 == 1)) || (local_25 == 2)) {
                local_8c = *(int *)(local_38 + 0x12);
                iVar10 = *(int *)(local_38 + 0xe);
                PVar1 = local_38[0x1a];
                iVar2 = *(int *)(local_38 + 0x16);
                pDVar11 = (DnfItemInfo *)(local_38 + 0x1b);
                pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                local_24 = CGuildCargo::_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi
                                     (pCVar9,pDVar11,&local_8c,iVar2,(uchar)PVar1,iVar10);
                local_c9 = (undefined1)local_24;
                local_c8 = local_8c;
                if (local_24 == 0xc1) {
                  pPVar12 = local_38 + 0x38;
                  uVar16 = *(undefined4 *)(local_38 + 0x21);
                  uVar15 = *(undefined4 *)(local_38 + 0x1c);
                  uVar13 = CUser::GetCharName(local_30);
                  uVar14 = *(undefined4 *)(local_38 + 0xe);
                  pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::
                  _ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption
                            (pCVar9,1,uVar14,uVar13,uVar15,uVar16,pPVar12);
                  iVar10 = local_8c;
                  pPVar12 = local_38 + 0x1b;
                  uVar14 = CUser::GetCharName(local_30);
                  uVar16 = *(undefined4 *)(local_38 + 0xe);
                  uVar15 = *(undefined4 *)(m_pclApp + 0x68);
                  pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::
                  _ZN11CGuildCargo17SendHistoryToDBMWEP14CServerHandler25ENUM_GUILD_CARGO_BEHAVIORiPKciiR11DnfItemInfo
                            (pCVar9,uVar15,1,uVar16,uVar14,iVar10,0,pPVar12);
                  iVar10 = *(int *)(local_38 + 0xe);
                  pCVar3 = *(CServerHandler **)(m_pclApp + 0x68);
                  pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri
                            (pCVar9,pCVar3,iVar10);
                  pCVar9 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR(pCVar9,1);
                }
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
              }
              else {
                uVar6 = (uint)local_25;
                uVar16 = *(undefined4 *)(local_38 + 10);
                uVar15 = *(undefined4 *)(local_38 + 0xe);
                CMyFileLog::CMyFileLog(local_50,"OnGuildCargoPushItem",0x1a05);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_50,"./log/GuildCargo",
                           "CPacketTranslater::OnGuildCargoPushItem : Access Deny(%d,%d,%d)",uVar15,
                           uVar16,uVar6);
                local_c9 = 0x24;
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
              }
            }
            else {
              uVar16 = *(undefined4 *)(local_38 + 10);
              uVar15 = *(undefined4 *)(local_38 + 0xe);
              CMyFileLog::CMyFileLog(local_58,"OnGuildCargoPushItem",0x19f7);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_58,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",uVar15,
                         uVar16);
              local_c9 = 0xc3;
              CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
            }
          }
          else {
            uVar16 = *(undefined4 *)(local_38 + 10);
            uVar15 = *(undefined4 *)(local_38 + 0xe);
            CMyFileLog::CMyFileLog(local_60,"OnGuildCargoPushItem",0x19ed);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_60,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",uVar15,
                       uVar16);
            local_c9 = 0xb5;
            CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
          }
        }
        else {
          uVar16 = *(undefined4 *)(local_38 + 10);
          uVar15 = *(undefined4 *)(local_38 + 0xe);
          CMyFileLog::CMyFileLog(local_68,"OnGuildCargoPushItem",0x19e2);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_68,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoPushItem GUILD CARGO LOCKED!(%d,%d)",uVar15,
                     uVar16);
          local_c9 = 0xcc;
          CUser::SendTcpGameserver(local_30,(PacketHeader *)local_db);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4616 行）：

```cpp
void CPacketTranslater::OnGuildCargoPushItem(PacketHeader* pkt)
{
    try
    {
        Packet_Guild_Guild_Cargo_Push_Item* pb = (Packet_Guild_Guild_Cargo_Push_Item*)pkt;
        Packet_Channel_Guild_Cargo_Push_Item resp;
        resp.m_b = pb->m_charNo;
        resp.m_d = pb->m_slot;
        resp.m_item = *(DnfItemInfo*)pb->m_item;
        resp.m_e = pb->m_fsn;
        resp.m_flag = pb->m_fst;
        char* itemDesc = (char*)CGuildCargo::PrintDnfItemInfo(*(DnfItemInfo*)pb->m_item);
        CMyFileLog log0("OnGuildCargoPushItem", 0x19b3);
        log0("./log/GuildCargo", "PUSH ITEM(g:%d,cn:%d,sn:%d,sl:%d,fsn:%d,fst:%d,it:%d,%s)",
             pb->m_guildKey, pb->m_charNo, pb->m_slot,
             pb->m_count, (unsigned int)pb->m_fsn, (unsigned int)pb->m_fst,
             (unsigned int)pb->m_itemType, itemDesc);
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x19c3, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == m_pclApp");
            return;
        }
        CUserManager* um = &m_pclApp->m_userManager;
        CUser* user = um->FindUser_CharNo(pb->m_charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x19cd, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == pclUser");
            return;
        }
        resp.m_a = user->GetIdByChannel();
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x19d7, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == pclGuild");
            resp.m_c = 100;
            user->SendTcpGameserver((PacketHeader*)&resp);
            return;
        }
        if ((&m_pclApp->m_guildManager)->IsCargoLock())
        {
            DNF_LOG_SCOPE_LINE(0x19e2,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem GUILD CARGO LOCKED!(%d,%d)",
                pb->m_charNo, pb->m_guildKey);
            resp.m_c = 0xcc;
            user->SendTcpGameserver((PacketHeader*)&resp);
            return;
        }
        if (guild->IsExistGuildAgit() != 1)
        {
            DNF_LOG_SCOPE_LINE(0x19ed,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",
                pb->m_charNo, pb->m_guildKey);
            resp.m_c = 0xb5;
            user->SendTcpGameserver((PacketHeader*)&resp);
            return;
        }
        if (guild->GetGuildCargo()->IsLoadComplete() != 1)
        {
            DNF_LOG_SCOPE_LINE(0x19f7,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",
                pb->m_charNo, pb->m_guildKey);
            resp.m_c = 0xc3;
            user->SendTcpGameserver((PacketHeader*)&resp);
            return;
        }
        unsigned char grade = user->GetGuildMemDBInfo()->m_grade;
        if (grade != 3 && grade != 1 && grade != 2)
        {
            DNF_LOG_SCOPE_LINE(0x1a05,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : Access Deny(%d,%d,%d)",
                pb->m_charNo, pb->m_guildKey, (unsigned int)grade);
            resp.m_c = 0x24;
            user->SendTcpGameserver((PacketHeader*)&resp);
            return;
        }
        int slot = pb->m_slot;
        int result = guild->GetGuildCargo()->InsertItem(*(DnfItemInfo*)pb->m_item, slot, pb->m_count, pb->m_itemType, (int)pb->m_charNo);
        resp.m_c = (unsigned char)result;
        resp.m_d = slot;
        if (result == 0xc1)
        {
            guild->GetGuildCargo()->InsertHistory((ENUM_GUILD_CARGO_BEHAVIOR)1, (int)pb->m_charNo, user->GetCharName(),
                                 ((DnfItemInfo*)pb->m_item)->m_itemId, ((DnfItemInfo*)pb->m_item)->m_addInfo, &((DnfItemInfo*)pb->m_item)->m_opt);
            CServerHandler* handler = m_pclApp->m_serverHandler;
            guild->GetGuildCargo()->SendHistoryToDBMW(handler, (ENUM_GUILD_CARGO_BEHAVIOR)1, (int)pb->m_charNo,
                                     user->GetCharName(), slot, 0, *(DnfItemInfo*)pb->m_item);
            guild->GetGuildCargo()->SendGuildCargoToDBMW(handler, (int)pb->m_charNo);
            guild->GetGuildCargo()->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)1);
        }
        user->SendTcpGameserver((PacketHeader*)&resp);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a48, "./log/Except", "CPacketTranslater::OnGuildCargoPushItem Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a4d, "./log/Except", "CPacketTranslater::OnGuidCargoPushItem Exception Break\n");
    }
}
```
