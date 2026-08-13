# _ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader

`CPacketTranslater::OnGuildCargoCheckPushItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8084444` | `0x518` | `0x807a238` | `0x578` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,317 +1,355 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xcc,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56>
 movl   $0x1935,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
-lea    -0xa3(%ebp),%eax
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
+lea    -0xa7(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Channel_Check_Guild_Cargo_Push_ItemC1Ev>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x95(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x90(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x22(%eax),%eax
-mov    %al,-0x80(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x34(%ebp),%eax
-movzwl 0x24(%eax),%eax
-mov    %ax,-0x7e(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x23(%eax),%eax
-mov    %al,-0x7f(%ebp)
+mov    -0x38(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0xa7(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x13(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x1b(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x23(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x1f(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x25(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x24,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0xa7(%ebp),%eax
+lea    0x24(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x23,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x38(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x123>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x16c>
 movl   $0x194a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x185>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x1ca>
 movl   $0x1952,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
+lea    -0xa7(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x99(%ebp)
+mov    %eax,(%ebx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11IsCargoLockEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x217>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x265>
 movl   $0x195c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xcc,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0xa7(%ebp),%eax
+add    $0x12,%eax
+movb   $0xcc,(%eax)
+lea    -0xa7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x294>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x2e1>
 movl   $0x1967,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xb5,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0xa7(%ebp),%eax
+add    $0x12,%eax
+movb   $0xb5,(%eax)
+lea    -0xa7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo14IsLoadCompleteEv>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x319>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x367>
 movl   $0x1971,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0xa7(%ebp),%eax
+add    $0x12,%eax
+movb   $0xc3,(%eax)
+lea    -0xa7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 mov    %al,-0x21(%ebp)
 cmpb   $0x3,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x391>
 cmpb   $0x1,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x391>
 cmpb   $0x2,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
-movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x197f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
-mov    -0x34(%ebp),%eax
-mov    0x1e(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x427>
+mov    -0x38(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%eax
 mov    %eax,-0xb0(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x22(%eax),%eax
+mov    -0x38(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xac(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%ebx
+mov    -0x38(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%edi
+mov    -0x38(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%esi
+mov    -0x38(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ebx
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    -0xb0(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    -0xac(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi>
 mov    %eax,-0x20(%ebp)
+lea    -0xa7(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    -0x20(%ebp),%eax
-mov    %al,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+mov    %al,(%edx)
+lea    -0xa7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
+movzbl -0x21(%ebp),%ebx
+movl   $0x197f,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0xa7(%ebp),%eax
+add    $0x12,%eax
+movb   $0x24,(%eax)
+lea    -0xa7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4b3>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x513>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x1994,0x8(%esp)
+movl   $"OnGuildCargoCheckPushItem",0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1994,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4ac>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1999,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoCheckPushItem Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x508>
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x568>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xcc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoCheckPushItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  CGuildCargo *pCVar8;
  int iVar9;
  uint uVar10;
  Packet_Channel_Check_Guild_Cargo_Push_Item local_a7 [10];
  undefined4 local_9d;
  undefined4 local_99;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  PacketHeader local_84;
  PacketHeader local_83;
  undefined2 local_82;
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
  undefined4 local_24;
  
  local_38 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08084475 to 08084875 has its CatchHandler @ 0808487b */
    CMyFileLog::CMyFileLog(local_80,"OnGuildCargoCheckPushItem",0x1935);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_80,"./log/GuildCargo",
               "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == m_pclApp");
  }
  else {
    Packet_Channel_Check_Guild_Cargo_Push_Item::Packet_Channel_Check_Guild_Cargo_Push_Item(local_a7)
    ;
    local_99 = *(undefined4 *)(local_38 + 0xe);
    local_94 = *(undefined4 *)(local_38 + 0x12);
    local_90 = *(undefined4 *)(local_38 + 0x16);
    local_8c = *(undefined4 *)(local_38 + 0x1a);
    local_84 = local_38[0x22];
    local_88 = *(undefined4 *)(local_38 + 0x1e);
    local_82 = *(undefined2 *)(local_38 + 0x24);
    local_83 = local_38[0x23];
    local_34 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_34);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_78,"OnGuildCargoCheckPushItem",0x194a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_78,"./log/GuildCargo",
                 "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclUser");
    }
    else {
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_70,"OnGuildCargoCheckPushItem",0x1952);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_70,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclGuild");
      }
      else {
        local_9d = CUser::GetIdByChannel(local_30);
        cVar7 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                          ((CGuildManager *)(m_pclApp + 0x290));
        if (cVar7 == '\0') {
          cVar7 = CGuild::IsExistGuildAgit(local_2c);
          if (cVar7 == '\x01') {
            pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
            cVar7 = CGuildCargo::_ZN11CGuildCargo14IsLoadCompleteEv(pCVar8);
            if (cVar7 == '\x01') {
              iVar9 = CUser::GetGuildMemDBInfo(local_30);
              local_25 = *(byte *)(iVar9 + 0x15);
              if (((local_25 == 3) || (local_25 == 1)) || (local_25 == 2)) {
                iVar9 = *(int *)(local_38 + 0x1e);
                PVar1 = local_38[0x22];
                iVar4 = *(int *)(local_38 + 0x12);
                iVar5 = *(int *)(local_38 + 0x1a);
                iVar6 = *(int *)(local_38 + 0x16);
                pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                local_24 = CGuildCargo::_ZN11CGuildCargo15CheckInsertItemEiiihi
                                     (pCVar8,iVar6,iVar5,iVar4,(uchar)PVar1,iVar9);
                local_95 = (undefined1)local_24;
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a7);
              }
              else {
                uVar10 = (uint)local_25;
                uVar2 = *(undefined4 *)(local_38 + 10);
                uVar3 = *(undefined4 *)(local_38 + 0xe);
                CMyFileLog::CMyFileLog(local_50,"OnGuildCargoCheckPushItem",0x197f);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_50,"./log/GuildCargo",
                           "CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)",
                           uVar3,uVar2,uVar10);
                local_95 = 0x24;
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a7);
              }
            }
            else {
              uVar2 = *(undefined4 *)(local_38 + 10);
              uVar3 = *(undefined4 *)(local_38 + 0xe);
              CMyFileLog::CMyFileLog(local_58,"OnGuildCargoCheckPushItem",0x1971);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_58,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",uVar3,
                         uVar2);
              local_95 = 0xc3;
              CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a7);
            }
          }
          else {
            uVar2 = *(undefined4 *)(local_38 + 10);
            uVar3 = *(undefined4 *)(local_38 + 0xe);
            CMyFileLog::CMyFileLog(local_60,"OnGuildCargoCheckPushItem",0x1967);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_60,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",uVar3,uVar2)
            ;
            local_95 = 0xb5;
            CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a7);
          }
        }
        else {
          uVar2 = *(undefined4 *)(local_38 + 10);
          uVar3 = *(undefined4 *)(local_38 + 0xe);
          CMyFileLog::CMyFileLog(local_68,"OnGuildCargoCheckPushItem",0x195c);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_68,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoCheckPushItem GUILD CARGO LOCKED!(%d,%d)",uVar3
                     ,uVar2);
          local_95 = 0xcc;
          CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a7);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4681 行）：

```cpp
void CPacketTranslater::OnGuildCargoCheckPushItem(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1935,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == m_pclApp");
            return;
        }
        Packet_Channel_Check_Guild_Cargo_Push_Item reply;
        unsigned int charNo = *(unsigned int*)(pb + 0xe);
        *(unsigned int*)((char*)&reply + 0xe) = charNo;
        *(unsigned int*)((char*)&reply + 0x13) = *(unsigned int*)(pb + 0x12);
        *(unsigned int*)((char*)&reply + 0x17) = *(unsigned int*)(pb + 0x16);
        *(unsigned int*)((char*)&reply + 0x1b) = *(unsigned int*)(pb + 0x1a);
        *(unsigned char*)((char*)&reply + 0x23) = *(unsigned char*)(pb + 0x22);
        *(unsigned int*)((char*)&reply + 0x1f) = *(unsigned int*)(pb + 0x1e);
        *(unsigned short*)((char*)&reply + 0x25) = *(unsigned short*)(pb + 0x24);
        *(unsigned char*)((char*)&reply + 0x24) = *(unsigned char*)(pb + 0x23);
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x194a,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclUser");
            return;
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1952,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclGuild");
            return;
        }
        *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
        if ((&m_pclApp->m_guildManager)->IsCargoLock() != 0)
        {
            DNF_LOG_SCOPE_LINE(0x195c,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoCheckPushItem GUILD CARGO LOCKED!(%d,%d)", charNo,
                guildKey);
            *(unsigned char*)((char*)&reply + 0x12) = 0xcc;
            user->SendTcpGameserver(&reply);
            return;
        }
        if (guild->IsExistGuildAgit() != 1)
        {
            DNF_LOG_SCOPE_LINE(0x1967,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit", charNo, guildKey);
            *(unsigned char*)((char*)&reply + 0x12) = 0xb5;
            user->SendTcpGameserver(&reply);
            return;
        }
        if (guild->GetGuildCargo()->IsLoadComplete() != 1)
        {
            DNF_LOG_SCOPE_LINE(0x1971,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded", charNo,
                guildKey);
            *(unsigned char*)((char*)&reply + 0x12) = 0xc3;
            user->SendTcpGameserver(&reply);
            return;
        }
        unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
        if (grade == 3 || grade == 1 || grade == 2)
        {
            int result = guild->GetGuildCargo()->CheckInsertItem(*(int*)(pb + 0x16), *(int*)(pb + 0x1a),
                                                *(int*)(pb + 0x12), *(unsigned char*)(pb + 0x22),
                                                *(int*)(pb + 0x1e));
            *(unsigned char*)((char*)&reply + 0x12) = (unsigned char)result;
            user->SendTcpGameserver(&reply);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x197f,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)", charNo,
                guildKey, (unsigned int)grade);
            *(unsigned char*)((char*)&reply + 0x12) = 0x24;
            user->SendTcpGameserver(&reply);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x1994);
        log("./log/Except",
            "CPacketTranslater::OnGuildCargoCheckPushItem Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1999);
        log("./log/Except", "CPacketTranslater::OnGuildCargoCheckPushItem Exception Break\n");
    }
}
```
