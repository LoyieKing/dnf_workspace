# _ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader

`CPacketTranslater::OnDBLoadRequestGuildBoardOpen(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809e0d8` | `0x5c7` | `0x80d7710` | `0x4d3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,372 +1,317 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x2db0,%esp
+sub    $0x2730,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5b9>
+je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c8>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x28(%ebp)
-movl   $0x0,-0x48(%ebp)
-lea    -0x2d92(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x54(%ebp)
+lea    -0x2716(%ebp),%eax
 mov    %eax,%ebx
 mov    $0x31,%esi
 jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x58>
 mov    %ebx,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
 add    $0xa5,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x47>
-mov    -0x2c(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-lea    -0x2d92(%ebp),%edx
+lea    -0x2716(%ebp),%edx
 mov    %edx,0xc(%esp)
-lea    -0x48(%ebp),%edx
+lea    -0x54(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x43a>
-movl   $0x0,-0x24(%ebp)
-mov    -0x48(%ebp),%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x140>
+mov    -0x38(%ebp),%eax
+mov    0xa(%eax),%ebx
+movl   $0xf8a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $0x0,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardOpen()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x6dc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
+movw   $0x1,-0x6d2(%ebp)
+movb   $0x1,-0x6d0(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6cf(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x6cb(%ebp)
+movb   $0x0,-0x6c7(%ebp)
+lea    -0x6dc(%ebp),%eax
+movl   $0x688,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c9>
+mov    -0x54(%ebp),%ecx
 mov    $0x66666667,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x2,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+imul   $0xfffffff6,%eax,%edx
+mov    -0x54(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x2b0>
+lea    -0x6dc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
+movb   $0x0,-0x6d0(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6cf(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x6cb(%ebp)
+movb   $0xa,-0x6c7(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x268>
+lea    -0x6dc(%ebp),%eax
+mov    -0x24(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x16,%edx
+add    %edx,%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x48(%ebp),%ecx
-mov    $0x66666667,%edx
-mov    %ecx,%eax
-imul   %edx
-sar    $0x2,%edx
-mov    %ecx,%eax
-sar    $0x1f,%eax
-mov    %edx,%ebx
-sub    %eax,%ebx
-mov    %ebx,%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%edx
+lea    -0x2716(%ebp),%ecx
+mov    -0x28(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
-mov    %ecx,%edx
-sub    %eax,%edx
-mov    %edx,%eax
+add    -0x24(%ebp),%eax
+imul   $0xa5,%eax,%eax
+lea    (%ecx,%eax,1),%eax
 mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x295>
-lea    -0x6d0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
-movb   $0x0,-0x6c4(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x6c3(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x6bf(%ebp)
-movb   $0xa,-0x6bb(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x24d>
-mov    -0x14(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d1a,%eax
-mov    0xc(%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0x648,%edx
-mov    %eax,0x12(%edx)
-mov    -0x24(%ebp),%eax
-lea    -0x2d92(%ebp),%edx
-imul   $0xa5,%eax,%eax
-add    %eax,%edx
-mov    -0x14(%ebp),%ecx
-lea    -0x6d0(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x10,%ecx
-add    %ecx,%eax
-add    $0x6,%eax
 movl   $0x78,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d1a,%eax
-mov    0x8(%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0x648,%edx
-mov    %eax,0xe(%edx)
-mov    -0x14(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d0a,%eax
-mov    (%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0x638,%edx
-mov    %eax,0x6(%edx)
-mov    -0x24(%ebp),%edx
-lea    -0x2d92(%ebp),%eax
-imul   $0xa5,%edx,%edx
-sub    $0xffffff80,%edx
-add    %edx,%eax
-lea    0x4(%eax),%edx
-mov    -0x14(%ebp),%ecx
-lea    -0x6d0(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x90,%ecx
-add    %ecx,%eax
-add    $0xa,%eax
+mov    -0x20(%ebp),%eax
+lea    0x78(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x78,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x20(%ebp),%eax
+lea    0x7c(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x7c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x20(%ebp),%eax
+lea    0x88(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x88,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+lea    0x84(%eax),%edx
+mov    -0x20(%ebp),%eax
+add    $0x84,%eax
 movl   $0x21,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 addl   $0x1,-0x24(%ebp)
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x9,-0x14(%ebp)
+cmpl   $0x9,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x138>
-mov    -0x20(%ebp),%eax
-sub    $0x1,%eax
-cmp    -0x18(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x274>
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x274>
-movb   $0x1,-0x6c4(%ebp)
-lea    -0x6d0(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x1b8>
+mov    -0x28(%ebp),%eax
+add    $0x1,%eax
+cmp    -0x30(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x28f>
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x28f>
+movb   $0x1,-0x6d0(%ebp)
+lea    -0x6dc(%ebp),%eax
 movl   $0x688,0x8(%esp)
 mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
+addl   $0x1,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
+cmp    -0x30(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x178>
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c9>
+lea    -0x6dc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
+movb   $0x1,-0x6d0(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6cf(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x6cb(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %al,-0x6c7(%ebp)
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x3bd>
+lea    -0x6dc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x16,%edx
+add    %edx,%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x2716(%ebp),%ecx
+mov    -0x30(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    %eax,%eax
+add    -0x18(%ebp),%eax
+imul   $0xa5,%eax,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0x10(%ebp)
+movl   $0x78,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x14(%ebp),%eax
+lea    0x78(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x78,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x14(%ebp),%eax
+lea    0x7c(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x7c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x14(%ebp),%eax
+lea    0x88(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x88,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x84(%eax),%edx
+mov    -0x14(%ebp),%eax
+add    $0x84,%eax
+movl   $0x21,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
 addl   $0x1,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0xf8>
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bc>
-lea    -0xd58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
-movb   $0x1,-0xd4c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xd4b(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xd47(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %al,-0xd43(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x407>
-mov    -0x10(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d1a,%eax
-mov    0xc(%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0xcd0,%edx
-mov    %eax,0x12(%edx)
-mov    -0x24(%ebp),%eax
-lea    -0x2d92(%ebp),%edx
-imul   $0xa5,%eax,%eax
-add    %eax,%edx
-mov    -0x10(%ebp),%ecx
-lea    -0xd58(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x10,%ecx
-add    %ecx,%eax
-add    $0x6,%eax
-movl   $0x78,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x10(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d1a,%eax
-mov    0x8(%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0xcd0,%edx
-mov    %eax,0xe(%edx)
-mov    -0x10(%ebp),%edx
-mov    -0x24(%ebp),%eax
-imul   $0xa5,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2d0a,%eax
-mov    (%eax),%eax
-imul   $0xa5,%edx,%edx
-lea    -0x8(%ebp),%ebx
-lea    (%ebx,%edx,1),%edx
-sub    $0xcc0,%edx
-mov    %eax,0x6(%edx)
-mov    -0x24(%ebp),%edx
-lea    -0x2d92(%ebp),%eax
-imul   $0xa5,%edx,%edx
-sub    $0xffffff80,%edx
-add    %edx,%eax
-lea    0x4(%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0xd58(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x90,%ecx
-add    %ecx,%eax
-add    $0xa,%eax
-movl   $0x21,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x24(%ebp)
-addl   $0x1,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-cmp    -0x1c(%ebp),%eax
-setl   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x2f2>
-lea    -0xd58(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x30d>
+lea    -0x6dc(%ebp),%eax
 movl   $0x688,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bd>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xf8a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $0x0,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardOpen()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0xd58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev>
-movw   $0x1,-0xd4e(%ebp)
-movb   $0x1,-0xd4c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xd4b(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xd47(%ebp)
-movb   $0x0,-0xd43(%ebp)
-lea    -0xd58(%ebp),%eax
-movl   $0x688,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bd>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c9>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x55d>
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x46c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xf98,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardOpen() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x556>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x465>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bd>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xf9d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardOpen() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5b2>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bd>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x4c9>
 nop
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader+0x5bd>
-nop
-add    $0x2db0,%esp
+add    $0x2730,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadRequestGuildBoardOpen(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  STGuildBoardDBInfo *this;
  int iVar3;
  STGuildBoardDBInfo local_2d96 [120];
  undefined4 auStack_2d1e [3];
  undefined1 auStack_2d12 [8118];
  Packet_DB_Load_Reply_Guild_Board_Open local_d5c [10];
  undefined2 local_d52;
  undefined1 local_d50;
  undefined4 local_d4f;
  undefined4 local_d4b;
  undefined1 local_d47;
  undefined1 auStack_d46 [120];
  undefined4 auStack_cce [3];
  undefined1 auStack_cc2 [1518];
  Packet_DB_Load_Reply_Guild_Board_Open local_6d4 [12];
  undefined1 local_6c8;
  undefined4 local_6c7;
  undefined4 local_6c3;
  undefined1 local_6bf;
  undefined1 auStack_6be [120];
  undefined4 auStack_646 [3];
  undefined1 auStack_63a [1518];
  int local_4c;
  CMyFileLog local_48 [24];
  PacketHeader *local_30;
  CGuildServer *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (m_pclApp != 0) {
    local_30 = param_1;
    local_2c = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    local_4c = 0;
    this = local_2d96;
    for (iVar3 = 0x31; iVar3 != -1; iVar3 = iVar3 + -1) {
      STGuildBoardDBInfo::STGuildBoardDBInfo(this);
      this = this + 0xa5;
    }
                    /* try { // try from 0809e161 to 0809e5b3 has its CatchHandler @ 0809e5b9 */
    cVar2 = CDBManager::_ZN10CDBManager16OnLoadGuildBoardEiRiP18STGuildBoardDBInfo
                      ((CDBManager *)(m_pclApp + 0x50),*(int *)(local_30 + 10),&local_4c,local_2d96)
    ;
    if (cVar2 == '\0') {
      uVar1 = *(undefined4 *)(local_30 + 10);
      CMyFileLog::CMyFileLog(local_48,"OnDBLoadRequestGuildBoardOpen",0xf8a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/Except",
                 "CPacketTranslater::OnDBLoadRequestGuildBoardOpen()\tGuild Id : %d,\t Query Result : %d\n"
                 ,uVar1,0);
      Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open(local_d5c);
      local_d52 = 1;
      local_d50 = 1;
      local_d4f = *(undefined4 *)(local_30 + 10);
      local_d4b = *(undefined4 *)(local_30 + 0xe);
      local_d47 = 0;
      CGuildServer::SendToServer(local_2c,(char *)local_d5c,0x688);
    }
    else {
      local_28 = 0;
      local_24 = local_4c / 10;
      local_20 = local_4c % 10;
      for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
        Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open(local_6d4);
        local_6c8 = 0;
        local_6c7 = *(undefined4 *)(local_30 + 10);
        local_6c3 = *(undefined4 *)(local_30 + 0xe);
        local_6bf = 10;
        for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
          *(undefined4 *)((int)auStack_646 + local_18 * 0xa5 + 4) =
               *(undefined4 *)((int)auStack_2d1e + local_28 * 0xa5 + 4);
          memcpy(auStack_6be + local_18 * 0xa5,local_2d96 + local_28 * 0xa5,0x78);
          *(undefined4 *)((int)auStack_646 + local_18 * 0xa5) =
               *(undefined4 *)((int)auStack_2d1e + local_28 * 0xa5);
          *(undefined4 *)(auStack_63a + local_18 * 0xa5 + -4) =
               *(undefined4 *)(auStack_2d12 + local_28 * 0xa5 + -4);
          memcpy(auStack_63a + local_18 * 0xa5,auStack_2d12 + local_28 * 0xa5,0x21);
          local_28 = local_28 + 1;
        }
        if ((local_24 + -1 == local_1c) && (local_20 == 0)) {
          local_6c8 = 1;
        }
        CGuildServer::SendToServer(local_2c,(char *)local_6d4,0x688);
      }
      if (local_20 != 0) {
        Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open(local_d5c);
        local_d50 = 1;
        local_d4f = *(undefined4 *)(local_30 + 10);
        local_d4b = *(undefined4 *)(local_30 + 0xe);
        local_d47 = (undefined1)local_20;
        for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
          *(undefined4 *)((int)auStack_cce + local_14 * 0xa5 + 4) =
               *(undefined4 *)((int)auStack_2d1e + local_28 * 0xa5 + 4);
          memcpy(auStack_d46 + local_14 * 0xa5,local_2d96 + local_28 * 0xa5,0x78);
          *(undefined4 *)((int)auStack_cce + local_14 * 0xa5) =
               *(undefined4 *)((int)auStack_2d1e + local_28 * 0xa5);
          *(undefined4 *)(auStack_cc2 + local_14 * 0xa5 + -4) =
               *(undefined4 *)(auStack_2d12 + local_28 * 0xa5 + -4);
          memcpy(auStack_cc2 + local_14 * 0xa5,auStack_2d12 + local_28 * 0xa5,0x21);
          local_28 = local_28 + 1;
        }
        CGuildServer::SendToServer(local_2c,(char *)local_d5c,0x688);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1932 行）：

```cpp
void CPacketTranslater::OnDBLoadRequestGuildBoardOpen(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Load_Request_Guild_Board_Open* pkt =
            (Packet_DB_Load_Request_Guild_Board_Open*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        int count = 0;
        STGuildBoardDBInfo boards[0x32];
        if (!m_pclApp->m_dbManager.OnLoadGuildBoard(
                ((FieldViewP<0xa,int>*)pkt)->v, count, boards))
        {
            DNF_LOG_SCOPE_LINE(0xf8a,
                "./log/Except",
                "CPacketTranslater::OnDBLoadRequestGuildBoardOpen()\tGuild Id : %d, \t Query Result : %d\n", ((FieldViewP<0xa,int>*)pkt)->v,
                0
            );

            Packet_DB_Load_Reply_Guild_Board_Open reply;
            reply.m_fieldA = 1;
            reply.m_fieldC = 1;
            reply.m_fieldD = ((FieldViewP<0xa,int>*)pkt)->v;
            reply.m_field11 = ((FieldViewP<0xe,int>*)pkt)->v;
            reply.m_field15 = 0;
            gs->SendToServer((char*)&reply, 0x688);
            return;
        }
        int pageCount = count / 10;
        int rem = count - pageCount * 10;
        for (int page = 0; page < pageCount; page++)
        {
            Packet_DB_Load_Reply_Guild_Board_Open reply;
            reply.m_fieldC = 0;
            reply.m_fieldD = ((FieldViewP<0xa,int>*)pkt)->v;
            reply.m_field11 = ((FieldViewP<0xe,int>*)pkt)->v;
            reply.m_field15 = 0xa;
            for (int i = 0; i <= 9; i++)
            {
                char* dst = (char*)&reply + 0x16 + i * 0xa5;
                char* src = (char*)boards + (page * 10 + i) * 0xa5;
                memcpy(dst, src, 0x78);
                *(int*)(dst + 0x78) = *(int*)(src + 0x78);
                *(int*)(dst + 0x7c) = *(int*)(src + 0x7c);
                *(int*)(dst + 0x88) = *(int*)(src + 0x88);
                memcpy(dst + 0x84, src + 0x84, 0x21);
            }
            if (page + 1 == pageCount && rem == 0)
                reply.m_fieldC = 1;
            gs->SendToServer((char*)&reply, 0x688);
        }
        if (rem != 0)
        {
            Packet_DB_Load_Reply_Guild_Board_Open reply;
            reply.m_fieldC = 1;
            reply.m_fieldD = ((FieldViewP<0xa,int>*)pkt)->v;
            reply.m_field11 = ((FieldViewP<0xe,int>*)pkt)->v;
            reply.m_field15 = (char)rem;
            for (int i = 0; i < rem; i++)
            {
                char* dst = (char*)&reply + 0x16 + i * 0xa5;
                char* src = (char*)boards + (pageCount * 10 + i) * 0xa5;
                memcpy(dst, src, 0x78);
                *(int*)(dst + 0x78) = *(int*)(src + 0x78);
                *(int*)(dst + 0x7c) = *(int*)(src + 0x7c);
                *(int*)(dst + 0x88) = *(int*)(src + 0x88);
                memcpy(dst + 0x84, src + 0x84, 0x21);
            }
            gs->SendToServer((char*)&reply, 0x688);
        }
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnDBLoadRequestGuildBoardOpen() Exception Break",
                  0xf98, 0xf9d);
}
```
