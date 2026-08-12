# _ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader

`CPacketTranslater::OnGuildCargoMoveItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80858aa` | `0x5e8` | `0x807b060` | `0x619` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,361 +1,392 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x13c,%esp
+sub    $0x12c,%esp
 mov    0x8(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x9b(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN36Packet_Channel_Guild_Cargo_Move_ItemC1Ev>
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x40(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x40(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    %eax,-0x34(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN36Packet_Channel_Guild_Cargo_Move_ItemC1Ev>
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+movl   $0x1b15,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x91(%ebp)
+mov    %eax,0x18(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"MOVE ITEM(g:%d,cn:%d,fsn:%d,dsn:%d",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x9b(%ebp),%eax
+lea    0x13(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x9b(%ebp),%eax
+lea    0x17(%eax),%edx
 mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x124(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1b15,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x124(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"MOVE ITEM(g:%d,cn:%d,fsn:%d,dsn:%d",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0xf8>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x106>
 movl   $0x1b21,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoMoveItem : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x161>
+movl   $0x1b2b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildCargoMoveItem : 0 == pclUser",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
+lea    -0x9b(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x15c>
-movl   $0x1b2b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildCargoMoveItem : 0 == pclUser",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x95(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x1eb>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x1fc>
 movl   $0x1b35,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoMoveItem : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x64,-0x8d(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+add    $0x12,%eax
+movb   $0x64,(%eax)
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11IsCargoLockEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x26c>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x28b>
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%esi
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x1b40,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoMoveItem GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xcc,-0x8d(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+add    $0x12,%eax
+movb   $0xcc,(%eax)
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x2e9>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x311>
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%esi
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x1b4b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoMoveItem : (%d,%d) No GuildAgit",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xb5,-0x8d(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+add    $0x12,%eax
+movb   $0xb5,(%eax)
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo14IsLoadCompleteEv>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x36e>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x3a7>
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%esi
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x1b55,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoMoveItem : Guild(%d,%d) Not Loaded",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0x8d(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
-mov    -0x2c(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+add    $0x12,%eax
+movb   $0xc3,(%eax)
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 mov    %al,-0x21(%ebp)
 cmpb   $0x3,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x405>
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x3d1>
 cmpb   $0x1,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x405>
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x3d1>
 cmpb   $0x2,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x405>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x4b2>
+lea    -0xe1(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11DnfItemInfoC1Ev>
+lea    -0x116(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11DnfItemInfoC1Ev>
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%esi
+mov    -0x40(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%ebx
+mov    -0x40(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ecx
+mov    -0x40(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edx
+mov    -0x40(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+lea    -0x116(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0xe1(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii>
+mov    %eax,-0x20(%ebp)
+lea    -0x9b(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %al,(%edx)
+cmpl   $0xc1,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x498>
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri>
+movl   $0x3,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR>
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    -0x40(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%esi
+mov    -0x40(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x1b63,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoMoveItem : Access Deny(%d,%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0x8d(%ebp)
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
-lea    -0xd4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11DnfItemInfoC1Ev>
-lea    -0x109(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11DnfItemInfoC1Ev>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x120(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x11c(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0x1a(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0x120(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x11c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-lea    -0x109(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0xd4(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0x8d(%ebp)
-cmpl   $0xc1,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x4ed>
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
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-movl   $0x3,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR>
-lea    -0x9f(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9b(%ebp),%eax
+add    $0x12,%eax
+movb   $0x24,(%eax)
+lea    -0x9b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x583>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5ae>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x1bb6,0x8(%esp)
+movl   $"OnGuildCargoMoveItem",0x4(%esp)
+lea    -0xa4(%ebp),%eax
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
-movl   $0x1bb6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x57c>
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5a7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5dd>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x60e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1bbb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoPopItem Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x5d8>
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader+0x609>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x13c,%esp
+add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoMoveItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader
               (PacketHeader *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CServerHandler *pCVar5;
  char cVar6;
  CGuildCargo *pCVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  DnfItemInfo local_10d [53];
  DnfItemInfo local_d8 [53];
  Packet_Channel_Guild_Cargo_Move_Item local_a3 [10];
  undefined4 local_99;
  undefined4 local_95;
  undefined1 local_91;
  undefined4 local_90;
  undefined4 local_8c;
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
  Packet_Channel_Guild_Cargo_Move_Item::Packet_Channel_Guild_Cargo_Move_Item(local_a3);
  local_95 = *(undefined4 *)(local_38 + 0xe);
  local_90 = *(undefined4 *)(local_38 + 0x12);
  local_8c = *(undefined4 *)(local_38 + 0x16);
  uVar13 = *(undefined4 *)(local_38 + 0x16);
  uVar12 = *(undefined4 *)(local_38 + 0x12);
  uVar11 = *(undefined4 *)(local_38 + 0xe);
  uVar10 = *(undefined4 *)(local_38 + 10);
  CMyFileLog::CMyFileLog(local_88,"OnGuildCargoMoveItem",0x1b15);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_88,"./log/GuildCargo","MOVE ITEM(g:%d,cn:%d,fsn:%d,dsn:%d",uVar10,uVar11,uVar12,
             uVar13);
  if (m_pclApp == 0) {
                    /* try { // try from 0808597d to 08085dab has its CatchHandler @ 08085db1 */
    CMyFileLog::CMyFileLog(local_80,"OnGuildCargoMoveItem",0x1b21);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_80,"./log/GuildCargo","CPacketTranslater::OnGuildCargoMoveItem : 0 == m_pclApp"
               ,uVar10,uVar11,uVar12,uVar13);
  }
  else {
    local_34 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_34);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_78,"OnGuildCargoMoveItem",0x1b2b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_78,"./log/GuildCargo",
                 "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclUser",uVar10,uVar11,uVar12,
                 uVar13);
    }
    else {
      local_99 = CUser::GetIdByChannel(local_30);
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_70,"OnGuildCargoMoveItem",0x1b35);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_70,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclGuild");
        local_91 = 100;
        CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
      }
      else {
        cVar6 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                          ((CGuildManager *)(m_pclApp + 0x290));
        if (cVar6 == '\0') {
          cVar6 = CGuild::IsExistGuildAgit(local_2c);
          if (cVar6 == '\x01') {
            pCVar7 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
            cVar6 = CGuildCargo::_ZN11CGuildCargo14IsLoadCompleteEv(pCVar7);
            if (cVar6 == '\x01') {
              iVar8 = CUser::GetGuildMemDBInfo(local_30);
              local_25 = *(byte *)(iVar8 + 0x15);
              if (((local_25 == 3) || (local_25 == 1)) || (local_25 == 2)) {
                DnfItemInfo::_ZN11DnfItemInfoC2Ev(local_d8);
                DnfItemInfo::_ZN11DnfItemInfoC2Ev(local_10d);
                iVar8 = *(int *)(local_38 + 0xe);
                iVar1 = *(int *)(local_38 + 0x1e);
                iVar2 = *(int *)(local_38 + 0x16);
                iVar3 = *(int *)(local_38 + 0x1a);
                iVar4 = *(int *)(local_38 + 0x12);
                pCVar7 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                local_24 = CGuildCargo::_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii
                                     (pCVar7,local_d8,local_10d,iVar4,iVar3,iVar2,iVar1,iVar8);
                local_91 = (undefined1)local_24;
                if (local_24 == 0xc1) {
                  iVar8 = *(int *)(local_38 + 0xe);
                  pCVar5 = *(CServerHandler **)(m_pclApp + 0x68);
                  pCVar7 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri
                            (pCVar7,pCVar5,iVar8);
                  pCVar7 = (CGuildCargo *)CGuild::GetGuildCargo(local_2c);
                  CGuildCargo::_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR(pCVar7,3);
                }
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
              }
              else {
                uVar9 = (uint)local_25;
                uVar13 = *(undefined4 *)(local_38 + 10);
                uVar12 = *(undefined4 *)(local_38 + 0xe);
                CMyFileLog::CMyFileLog(local_50,"OnGuildCargoMoveItem",0x1b63);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_50,"./log/GuildCargo",
                           "CPacketTranslater::OnGuildCargoMoveItem : Access Deny(%d,%d,%d)",uVar12,
                           uVar13,uVar9);
                local_91 = 0x24;
                CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
              }
            }
            else {
              uVar13 = *(undefined4 *)(local_38 + 10);
              uVar12 = *(undefined4 *)(local_38 + 0xe);
              CMyFileLog::CMyFileLog(local_58,"OnGuildCargoMoveItem",0x1b55);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_58,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargoMoveItem : Guild(%d,%d) Not Loaded",uVar12,
                         uVar13);
              local_91 = 0xc3;
              CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
            }
          }
          else {
            uVar13 = *(undefined4 *)(local_38 + 10);
            uVar12 = *(undefined4 *)(local_38 + 0xe);
            CMyFileLog::CMyFileLog(local_60,"OnGuildCargoMoveItem",0x1b4b);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_60,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoMoveItem : (%d,%d) No GuildAgit",uVar12,
                       uVar13);
            local_91 = 0xb5;
            CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
          }
        }
        else {
          uVar13 = *(undefined4 *)(local_38 + 10);
          uVar12 = *(undefined4 *)(local_38 + 0xe);
          CMyFileLog::CMyFileLog(local_68,"OnGuildCargoMoveItem",0x1b40);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_68,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoMoveItem GUILD CARGO LOCKED!(%d,%d)",uVar12,
                     uVar13);
          local_91 = 0xcc;
          CUser::SendTcpGameserver(local_30,(PacketHeader *)local_a3);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4798 行）：

```cpp
void CPacketTranslater::OnGuildCargoMoveItem(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    Packet_Channel_Guild_Cargo_Move_Item reply;
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    unsigned int fromSlot = *(unsigned int*)(pb + 0x12);
    unsigned int toSlot = *(unsigned int*)(pb + 0x16);
    {
        DNF_LOG_SCOPE_LINE(0x1b15,"./log/GuildCargo", "MOVE ITEM(g:%d,cn:%d,fsn:%d,dsn:%d",
            *(unsigned int*)(pb + 0xa), charNo, fromSlot, toSlot);
    }
    *(unsigned int*)((char*)&reply + 0xe) = charNo;
    *(unsigned int*)((char*)&reply + 0x13) = fromSlot;
    *(unsigned int*)((char*)&reply + 0x17) = toSlot;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1b21,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : 0 == m_pclApp");
        return;
    }
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1b2b, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclUser");
        return;
    }
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1b35, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclGuild");
        *(unsigned char*)((char*)&reply + 0x12) = 100;
        user->SendTcpGameserver(&reply);
        return;
    }
    if ((&m_pclApp->m_guildManager)->IsCargoLock() != 0)
    {
        DNF_LOG_SCOPE_LINE(0x1b40,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem GUILD CARGO LOCKED!(%d,%d)",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xcc;
        user->SendTcpGameserver(&reply);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        DNF_LOG_SCOPE_LINE(0x1b4b,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : (%d,%d) No GuildAgit",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xb5;
        user->SendTcpGameserver(&reply);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        DNF_LOG_SCOPE_LINE(0x1b55,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : Guild(%d,%d) Not Loaded",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xc3;
        user->SendTcpGameserver(&reply);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade == 3 || grade == 1 || grade == 2)
    {
        DnfItemInfo fromItem;
        DnfItemInfo toItem;
        int result = cargo->MoveItem(fromItem, toItem, *(int*)(pb + 0x12),
                                     *(int*)(pb + 0x1a), *(int*)(pb + 0x16),
                                     *(int*)(pb + 0x1e), *(int*)(pb + 0xe));
        *(unsigned char*)((char*)&reply + 0x12) = (unsigned char)result;
        if (result == 0xc1)
        {
            cargo->SendGuildCargoToDBMW(m_pclApp->m_serverHandler, *(int*)(pb + 0xe));
            cargo->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)3);
        }
        user->SendTcpGameserver(&reply);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x1b63,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : Access Deny(%d,%d,%d)",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa), (unsigned int)grade);
        *(unsigned char*)((char*)&reply + 0x12) = 0x24;
        user->SendTcpGameserver(&reply);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1bb6);
        log("./log/Except", "CPacketTranslater::OnGuildCargoPopItem Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1bbb);
        log("./log/Except", "CPacketTranslater::OnGuildCargoPopItem Exception Break\n");
    }
}
```
