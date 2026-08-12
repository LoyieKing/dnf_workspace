# _ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader

`CPacketTranslater::OnGuildCargoPopItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8085112` | `0x798` | `0x807a9f0` | `0x67d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,453 +1,405 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x15c,%esp
-mov    0x8(%ebp),%eax
+sub    $0x140,%esp
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    %eax,-0x34(%ebp)
-lea    -0x109(%ebp),%eax
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1e,%eax
+movzbl (%eax),%eax
+mov    %al,-0x29(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1f,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+movl   $0x1a65,0x8(%esp)
+movl   $"OnGuildCargoPopItem",0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x29(%ebp),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    %eax,0x20(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"POP ITEM(g:%d,cn:%d,sn:%d,id:%d,cnt:%d,it:%d,uit:%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Channel_Guild_Cargo_Pop_ItemC1Ev>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xfb(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1f(%eax),%eax
-mov    %eax,-0xf7(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xbd(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1f(%eax),%eax
-mov    %eax,-0x138(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x1e(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x134(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x130(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x12c(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1a65,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x138(%ebp),%eax
-mov    %eax,0x24(%esp)
-mov    -0x134(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0x130(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x12c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"POP ITEM(g:%d,cn:%d,sn:%d,id:%d,cnt:%d,it:%d,uit:%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x13e>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x113>
 movl   $0x1a74,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPopItem : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x1a2>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x16e>
 movl   $0x1a7e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPopItem : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
-mov    -0x2c(%ebp),%eax
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
+lea    -0x115(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xff(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,(%ebx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x231>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x203>
 movl   $0x1a88,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPopItem : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x64,-0xbe(%ebp)
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
+add    $0x12,%eax
+movb   $0x64,(%eax)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11IsCargoLockEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x2b2>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1a93,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x288>
+movl   $0x1a92,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPopItem GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xcc,-0xbe(%ebp)
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
-mov    -0x28(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
+add    $0x12,%eax
+movb   $0xcc,(%eax)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x32f>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1a9e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x304>
+movl   $0x1a9d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPopItem : (%d,%d) No GuildAgit",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xb5,-0xbe(%ebp)
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
-mov    -0x28(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
+add    $0x12,%eax
+movb   $0xb5,(%eax)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo14IsLoadCompleteEv>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x3b4>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1aa8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x390>
+movl   $0x1aa7,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPopItem : Guild(%d,%d) Not Loaded",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0xbe(%ebp)
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
-mov    -0x2c(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
+add    $0x12,%eax
+movb   $0xc3,(%eax)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-mov    %al,-0x21(%ebp)
-cmpb   $0x3,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x44b>
-cmpb   $0x1,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x44b>
-cmpb   $0x2,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x44b>
-movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1ab6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+add    $0x15,%eax
+movzbl (%eax),%eax
+mov    %al,-0x15(%ebp)
+cmpb   $0x3,-0x15(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x428>
+cmpb   $0x1,-0x15(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x428>
+cmpb   $0x2,-0x15(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x428>
+movzbl -0x15(%ebp),%ebx
+movl   $0x1ab5,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPopItem : Access Deny(%d,%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0xbe(%ebp)
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
-lea    -0xb9(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x115(%ebp),%eax
+add    $0x12,%eax
+movb   $0x24,(%eax)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
+lea    -0xc5(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfoC1Ev>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x128(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x124(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x1e(%eax),%eax
-movzbl %al,%edi
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0x128(%ebp),%edx
+mov    -0x3c(%ebp),%edx
+movzbl -0x29(%ebp),%eax
 mov    %edx,0x18(%esp)
-mov    -0x124(%ebp),%edx
+mov    -0x34(%ebp),%edx
 mov    %edx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-lea    -0xb9(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0xc5(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0xbe(%ebp)
-cmpl   $0xc1,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x69d>
-mov    -0xb9(%ebp),%eax
-mov    %eax,-0xf3(%ebp)
-mov    -0xb5(%ebp),%eax
-mov    %eax,-0xef(%ebp)
-mov    -0xb1(%ebp),%eax
-mov    %eax,-0xeb(%ebp)
-mov    -0xad(%ebp),%eax
-mov    %eax,-0xe7(%ebp)
-mov    -0xa9(%ebp),%eax
-mov    %eax,-0xe3(%ebp)
-mov    -0xa5(%ebp),%eax
-mov    %eax,-0xdf(%ebp)
-mov    -0xa1(%ebp),%eax
-mov    %eax,-0xdb(%ebp)
-mov    -0x9d(%ebp),%eax
-mov    %eax,-0xd7(%ebp)
-mov    -0x99(%ebp),%eax
-mov    %eax,-0xd3(%ebp)
-mov    -0x95(%ebp),%eax
-mov    %eax,-0xcf(%ebp)
-mov    -0x91(%ebp),%eax
-mov    %eax,-0xcb(%ebp)
-mov    -0x8d(%ebp),%eax
-mov    %eax,-0xc7(%ebp)
-mov    -0x89(%ebp),%eax
-mov    %eax,-0xc3(%ebp)
-movzbl -0x85(%ebp),%eax
-mov    %al,-0xbf(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x120(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x115(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %al,(%edx)
+cmpl   $0xc1,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x579>
+lea    -0x115(%ebp),%eax
+lea    0x16(%eax),%edx
+movl   $0x35,0x8(%esp)
+lea    -0xc5(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-lea    -0xb9(%ebp),%edx
-add    $0x1d,%edx
-mov    %edx,0x18(%esp)
-mov    -0x120(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-mov    %esi,0x8(%esp)
+mov    -0x3c(%ebp),%edx
+lea    -0xc5(%ebp),%ecx
+add    $0x1d,%ecx
+mov    %ecx,0x18(%esp)
+mov    -0x34(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    -0x30(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %eax,0xc(%esp)
+mov    %edx,0x8(%esp)
 movl   $0x2,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption>
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x11c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%edi
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-lea    -0xb9(%ebp),%edx
-mov    %edx,0x1c(%esp)
+mov    -0x3c(%ebp),%edx
+lea    -0xc5(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
 movl   $0x0,0x18(%esp)
-mov    -0x11c(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    -0x38(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $0x2,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
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
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
 movl   $0x2,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR>
-lea    -0x109(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x733>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x613>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+movl   $0x1af8,0x8(%esp)
+movl   $"OnGuildCargoPopItem",0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1af8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoPopItem Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x72c>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x60c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x78d>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x673>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1afd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPopItem Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x788>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader+0x66e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x15c,%esp
+add    $0x140,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoPopItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CServerHandler *pCVar5;
  char cVar6;
  uint uVar7;
  CGuildCargo *pCVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  Packet_Channel_Guild_Cargo_Pop_Item local_10d [10];
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined1 local_89;
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
  Packet_Channel_Guild_Cargo_Pop_Item::Packet_Channel_Guild_Cargo_Pop_Item(local_10d);
  local_ff = *(undefined4 *)(local_38 + 0xe);
  local_fb = *(undefined4 *)(local_38 + 0x1f);
  local_c1 = *(undefined4 *)(local_38 + 0x12);
  uVar15 = *(undefined4 *)(local_38 + 0x1f);
  uVar7 = (uint)(byte)local_38[0x1e];
  uVar14 = *(undefined4 *)(local_38 + 0x1a);
  uVar13 = *(undefined4 *)(local_38 + 0x16);
  uVar10 = *(undefined4 *)(local_38 + 0x12);
  uVar12 = *(undefined4 *)(local_38 + 0xe);
  uVar11 = *(undefined4 *)(local_38 + 10);
  CMyFileLog::CMyFileLog(local_88,"OnGuildCargoPopItem",0x1a65);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_88,"./log/GuildCargo","POP ITEM(g:%d,cn:%d,sn:%d,id:%d,cnt:%d,it:%d,uit:%d)",
             uVar11,uVar12,uVar10,uVar13,uVar14,uVar7,uVar15);
  if (m_pclApp == 0) {
                    /* try { // try from 0808522b to 080857c3 has its CatchHandler @ 080857c9 */
    CMyFileLog::CMyFileLog(local_80,"OnGuildCargoPopItem",0x1a74);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_80,"./log/GuildCargo","CPacketTranslater::OnGuildCargoPopItem : 0 == m_pclApp",
               uVar11,uVar12,uVar10,uVar13,uVar14,uVar7,uVar15);
  }
  else {
    local_34 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_34);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_78,"OnGuildCargoPopItem",0x1a7e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_78,"./log/GuildCargo","CPacketTranslater::OnGuildCargoPopItem : 0 == pclUser"
                 ,uVar11,uVar12,uVar10,uVar13,uVar14,uVar7,uVar15);
    }
    else {
      local_103 = CUser::GetIdByChannel(local_30);
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_70,"OnGuildCargoPopItem",0x1a88);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_70,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoPopItem : 0 == pclGuild");
        local_c2 = 100;
        CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
      }
      else {
        cVar6 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                          ((CGuildManager *)(m_pclApp + 0x290));
        if (cVar6 == '\0') {
          cVar6 = CGuild::IsExistGuildAgit(local_2c);
          if (cVar6 == '\x01') {
            pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
            cVar6 = CGuildCargo::_ZN11CGuildCargo14IsLoadCompleteEv(pCVar8);
            if (cVar6 == '\x01') {
              iVar9 = CUser::GetGuildMemDBInfo(local_30);
              local_25 = *(byte *)(iVar9 + 0x15);
              if (((local_25 == 3) || (local_25 == 1)) || (local_25 == 2)) {
                DnfItemInfo::_ZN11DnfItemInfoC2Ev((DnfItemInfo *)&local_bd);
                iVar9 = *(int *)(local_38 + 0xe);
                iVar2 = *(int *)(local_38 + 0x1a);
                PVar1 = local_38[0x1e];
                iVar3 = *(int *)(local_38 + 0x16);
                iVar4 = *(int *)(local_38 + 0x12);
                pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                local_24 = CGuildCargo::_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii
                                     (pCVar8,(DnfItemInfo *)&local_bd,iVar4,iVar3,(uchar)PVar1,iVar2
                                      ,iVar9);
                local_c2 = (undefined1)local_24;
                if (local_24 == 0xc1) {
                  local_f7 = local_bd;
                  local_f3 = local_b9;
                  local_ef = local_b5;
                  local_eb = local_b1;
                  local_e7 = local_ad;
                  local_e3 = local_a9;
                  local_df = local_a5;
                  local_db = local_a1;
                  local_d7 = local_9d;
                  local_d3 = local_99;
                  local_cf = local_95;
                  local_cb = local_91;
                  local_c7 = local_8d;
                  local_c3 = local_89;
                  uVar15 = *(undefined4 *)(local_38 + 0x1a);
                  uVar14 = *(undefined4 *)(local_38 + 0x16);
                  uVar10 = CUser::GetCharName(local_30);
                  uVar13 = *(undefined4 *)(local_38 + 0xe);
                  pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::
                  _ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption
                            (pCVar8,2,uVar13,uVar10,uVar14,uVar15,(int)&local_a1 + 1);
                  uVar15 = *(undefined4 *)(local_38 + 0x12);
                  uVar10 = CUser::GetCharName(local_30);
                  uVar14 = *(undefined4 *)(local_38 + 0xe);
                  uVar13 = *(undefined4 *)(m_pclApp + 0x68);
                  pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::
                  _ZN11CGuildCargo17SendHistoryToDBMWEP14CServerHandler25ENUM_GUILD_CARGO_BEHAVIORiPKciiR11DnfItemInfo
                            (pCVar8,uVar13,2,uVar14,uVar10,uVar15,0,&local_bd);
                  iVar9 = *(int *)(local_38 + 0xe);
                  pCVar5 = *(CServerHandler **)(m_pclApp + 0x68);
                  pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri
                            (pCVar8,pCVar5,iVar9);
                  pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR(pCVar8,2);
                }
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
              }
              else {
                uVar7 = (uint)local_25;
                uVar15 = *(undefined4 *)(local_38 + 10);
                uVar14 = *(undefined4 *)(local_38 + 0xe);
                CMyFileLog::CMyFileLog(local_50,"OnGuildCargoPopItem",0x1ab6);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_50,"./log/GuildCargo",
                           "CPacketTranslater::OnGuildCargoPopItem : Access Deny(%d,%d,%d)",uVar14,
                           uVar15,uVar7);
                local_c2 = 0x24;
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
              }
            }
            else {
              uVar15 = *(undefined4 *)(local_38 + 10);
              uVar14 = *(undefined4 *)(local_38 + 0xe);
              CMyFileLog::CMyFileLog(local_58,"OnGuildCargoPopItem",0x1aa8);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_58,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargoPopItem : Guild(%d,%d) Not Loaded",uVar14,
                         uVar15);
              local_c2 = 0xc3;
              CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
            }
          }
          else {
            uVar15 = *(undefined4 *)(local_38 + 10);
            uVar14 = *(undefined4 *)(local_38 + 0xe);
            CMyFileLog::CMyFileLog(local_60,"OnGuildCargoPopItem",0x1a9e);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_60,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoPopItem : (%d,%d) No GuildAgit",uVar14,uVar15
                      );
            local_c2 = 0xb5;
            CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
          }
        }
        else {
          uVar15 = *(undefined4 *)(local_38 + 10);
          uVar14 = *(undefined4 *)(local_38 + 0xe);
          CMyFileLog::CMyFileLog(local_68,"OnGuildCargoPopItem",0x1a93);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_68,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoPopItem GUILD CARGO LOCKED!(%d,%d)",uVar14,
                     uVar15);
          local_c2 = 0xcc;
          CUser::SendTcpGameserver(local_30,(PacketHeader *)local_10d);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4700 行）：

```cpp
void CPacketTranslater::OnGuildCargoPopItem(PacketHeader* pkt)
{
    try
    {
    unsigned int group = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    int slot = *(int*)((char*)pkt + 0x12);
    int id = *(int*)((char*)pkt + 0x16);
    int count = *(int*)((char*)pkt + 0x1a);
    unsigned char itemType = *(unsigned char*)((char*)pkt + 0x1e);
    unsigned int uit = *(unsigned int*)((char*)pkt + 0x1f);
    CMyFileLog log0("OnGuildCargoPopItem", 0x1a65);
    log0("./log/GuildCargo", "POP ITEM(g:%d,cn:%d,sn:%d,id:%d,cnt:%d,it:%d,uit:%d)",
         group, guildKey, slot, id, count, (unsigned int)itemType, uit);
    Packet_Channel_Guild_Cargo_Pop_Item resp;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1a74, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == m_pclApp");
        return;
    }
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(group);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1a7e, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == pclUser");
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = user->GetIdByChannel();
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1a88, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == pclGuild");
        *(unsigned char*)((char*)&resp + 0x12) = 100;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if ((&m_pclApp->m_guildManager)->IsCargoLock())
    {
        DNF_LOG_SCOPE_LINE(0x1a92,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem GUILD CARGO LOCKED!(%d,%d)",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xcc;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        DNF_LOG_SCOPE_LINE(0x1a9d,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : (%d,%d) No GuildAgit",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xb5;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        DNF_LOG_SCOPE_LINE(0x1aa7,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : Guild(%d,%d) Not Loaded",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xc3;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade != 3 && grade != 1 && grade != 2)
    {
        DNF_LOG_SCOPE_LINE(0x1ab5,"./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : Access Deny(%d,%d,%d)",
            guildKey, group, (unsigned int)grade);
        *(unsigned char*)((char*)&resp + 0x12) = 0x24;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    DnfItemInfo poppedItem;
    int result = cargo->DeleteItem(poppedItem, slot, count, itemType, id, (int)guildKey);
    *(unsigned char*)((char*)&resp + 0x12) = (unsigned char)result;
    if (result == 0xc1)
    {
        memcpy((char*)&resp + 0x16, &poppedItem, 0x35);
        cargo->InsertHistory((ENUM_GUILD_CARGO_BEHAVIOR)2, (int)guildKey, user->GetCharName(),
                             count, id, (RandomOption*)((char*)&poppedItem + 0x1d));
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        cargo->SendHistoryToDBMW(handler, (ENUM_GUILD_CARGO_BEHAVIOR)2, (int)guildKey,
                                 user->GetCharName(), slot, 0, poppedItem);
        cargo->SendGuildCargoToDBMW(handler, (int)guildKey);
        cargo->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)2);
    }
    user->SendTcpGameserver((PacketHeader*)&resp);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1af8);
        log("./log/Except",
            "CPacketTranslater::OnGuildCargoPopItem Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1afd);
        log("./log/Except", "CPacketTranslater::OnGuildCargoPopItem Exception Break\n");
    }
}
```
