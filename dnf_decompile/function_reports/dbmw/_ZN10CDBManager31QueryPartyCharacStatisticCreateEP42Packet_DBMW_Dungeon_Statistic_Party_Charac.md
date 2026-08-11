# _ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac

`CDBManager::QueryPartyCharacStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party_Charac*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807d82a` | `0x7c7` | `0x805707e` | `0x7f0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,530 +1,544 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x91c,%esp
+sub    $0x31c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7ba>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7e3>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
 movl   $0x16ce,0x8(%esp)
 movl   $&_ZZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_CharacE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x844(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x200,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x44(%ebp),%eax
+movl   $0x200,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x244(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6ed>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x716>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x36e>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x8c8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1c,%eax
-movzbl (%eax),%eax
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x383>
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x51(%eax),%eax
+mov    %eax,-0x2c8(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+movzbl 0x20(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x8c4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x8c0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x8bc(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x8b8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x8b4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x8b0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x8ac(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x8a8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x8a4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x8a0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x89c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x898(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x1d(%eax,%edx,1),%eax
-mov    %eax,-0x894(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x2c4(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x41(%eax),%eax
+mov    %eax,-0x2c0(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x45(%eax),%eax
+mov    %eax,-0x2bc(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x49(%eax),%eax
+mov    %eax,-0x2b8(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x4d(%eax),%eax
+mov    %eax,-0x2b4(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3d(%eax),%eax
+mov    %eax,-0x2b0(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x39(%eax),%eax
+mov    %eax,-0x2ac(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x35(%eax),%eax
+mov    %eax,-0x2a8(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x31(%eax),%eax
+mov    %eax,-0x2a4(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x2d(%eax),%eax
+mov    %eax,-0x2a0(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x29(%eax),%eax
+mov    %eax,-0x29c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x25(%eax),%eax
+mov    %eax,-0x298(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x21(%eax),%eax
+mov    %eax,-0x294(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1f(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x890(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x17(%eax,%edx,1),%eax
-mov    %eax,-0x88c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x290(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x1b(%eax),%eax
+mov    %eax,-0x28c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1a(%eax),%eax
 movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
 movzbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
 movsbl %al,%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x10(%eax,%edx,1),%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-movzwl 0xe(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x10(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
-mov    -0x8c8(%ebp),%edx
+mov    -0x2c8(%ebp),%edx
 mov    %edx,0x58(%esp)
-mov    -0x8c4(%ebp),%edx
+mov    -0x2c4(%ebp),%edx
 mov    %edx,0x54(%esp)
-mov    -0x8c0(%ebp),%edx
+mov    -0x2c0(%ebp),%edx
 mov    %edx,0x50(%esp)
-mov    -0x8bc(%ebp),%edx
+mov    -0x2bc(%ebp),%edx
 mov    %edx,0x4c(%esp)
-mov    -0x8b8(%ebp),%edx
+mov    -0x2b8(%ebp),%edx
 mov    %edx,0x48(%esp)
-mov    -0x8b4(%ebp),%edx
+mov    -0x2b4(%ebp),%edx
 mov    %edx,0x44(%esp)
-mov    -0x8b0(%ebp),%edx
+mov    -0x2b0(%ebp),%edx
 mov    %edx,0x40(%esp)
-mov    -0x8ac(%ebp),%edx
+mov    -0x2ac(%ebp),%edx
 mov    %edx,0x3c(%esp)
-mov    -0x8a8(%ebp),%edx
+mov    -0x2a8(%ebp),%edx
 mov    %edx,0x38(%esp)
-mov    -0x8a4(%ebp),%edx
+mov    -0x2a4(%ebp),%edx
 mov    %edx,0x34(%esp)
-mov    -0x8a0(%ebp),%edx
+mov    -0x2a0(%ebp),%edx
 mov    %edx,0x30(%esp)
-mov    -0x89c(%ebp),%edx
+mov    -0x29c(%ebp),%edx
 mov    %edx,0x2c(%esp)
-mov    -0x898(%ebp),%edx
+mov    -0x298(%ebp),%edx
 mov    %edx,0x28(%esp)
-mov    -0x894(%ebp),%edx
+mov    -0x294(%ebp),%edx
 mov    %edx,0x24(%esp)
-mov    -0x890(%ebp),%edx
+mov    -0x290(%ebp),%edx
 mov    %edx,0x20(%esp)
-mov    -0x88c(%ebp),%edx
+mov    -0x28c(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x844(%ebp),%eax
+lea    -0x244(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x611>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x888(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1c,%eax
-movzbl (%eax),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x63a>
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x51(%eax),%eax
+mov    %eax,-0x288(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+movzbl 0x20(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x884(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x880(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x87c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x874(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x870(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x86c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x868(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x1d(%eax),%eax
-mov    %eax,-0x864(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x19(%eax),%eax
-mov    %eax,-0x860(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x15(%eax),%eax
-mov    %eax,-0x85c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0x858(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x1d(%eax,%edx,1),%eax
-mov    %eax,-0x854(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x284(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x41(%eax),%eax
+mov    %eax,-0x280(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x45(%eax),%eax
+mov    %eax,-0x27c(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x49(%eax),%eax
+mov    %eax,-0x278(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x4d(%eax),%eax
+mov    %eax,-0x274(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3d(%eax),%eax
+mov    %eax,-0x270(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x39(%eax),%eax
+mov    %eax,-0x26c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x35(%eax),%eax
+mov    %eax,-0x268(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x31(%eax),%eax
+mov    %eax,-0x264(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x2d(%eax),%eax
+mov    %eax,-0x260(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x29(%eax),%eax
+mov    %eax,-0x25c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x25(%eax),%eax
+mov    %eax,-0x258(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x21(%eax),%eax
+mov    %eax,-0x254(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1f(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x850(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x17(%eax,%edx,1),%eax
-mov    %eax,-0x84c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x250(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x1b(%eax),%eax
+mov    %eax,-0x24c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1a(%eax),%eax
 movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
 movzbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
 movsbl %al,%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x10(%eax,%edx,1),%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-movzwl 0xe(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x10(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
-mov    -0x888(%ebp),%edx
+mov    -0x288(%ebp),%edx
 mov    %edx,0x58(%esp)
-mov    -0x884(%ebp),%edx
+mov    -0x284(%ebp),%edx
 mov    %edx,0x54(%esp)
-mov    -0x880(%ebp),%edx
+mov    -0x280(%ebp),%edx
 mov    %edx,0x50(%esp)
-mov    -0x87c(%ebp),%edx
+mov    -0x27c(%ebp),%edx
 mov    %edx,0x4c(%esp)
-mov    -0x878(%ebp),%edx
+mov    -0x278(%ebp),%edx
 mov    %edx,0x48(%esp)
-mov    -0x874(%ebp),%edx
+mov    -0x274(%ebp),%edx
 mov    %edx,0x44(%esp)
-mov    -0x870(%ebp),%edx
+mov    -0x270(%ebp),%edx
 mov    %edx,0x40(%esp)
-mov    -0x86c(%ebp),%edx
+mov    -0x26c(%ebp),%edx
 mov    %edx,0x3c(%esp)
-mov    -0x868(%ebp),%edx
+mov    -0x268(%ebp),%edx
 mov    %edx,0x38(%esp)
-mov    -0x864(%ebp),%edx
+mov    -0x264(%ebp),%edx
 mov    %edx,0x34(%esp)
-mov    -0x860(%ebp),%edx
+mov    -0x260(%ebp),%edx
 mov    %edx,0x30(%esp)
-mov    -0x85c(%ebp),%edx
+mov    -0x25c(%ebp),%edx
 mov    %edx,0x2c(%esp)
-mov    -0x858(%ebp),%edx
+mov    -0x258(%ebp),%edx
 mov    %edx,0x28(%esp)
-mov    -0x854(%ebp),%edx
+mov    -0x254(%ebp),%edx
 mov    %edx,0x24(%esp)
-mov    -0x850(%ebp),%edx
+mov    -0x250(%ebp),%edx
 mov    %edx,0x20(%esp)
-mov    -0x84c(%ebp),%edx
+mov    -0x24c(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x844(%ebp),%eax
+lea    -0x244(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 add    $0x800,%eax
 cmp    $0x6000,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6d4>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6fd>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s",0x8(%esp)
 movl   $0x4e9b,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9b,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6c3>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6ec>
 movl   $0x16ff,0x8(%esp)
 movl   $&_ZZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_CharacE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryPartyCharacStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d8>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs5clearEv>
 subl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6e9>
-lea    -0x844(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x712>
+lea    -0x244(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xae>
+jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xaf>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s",0x8(%esp)
 movl   $0x4e9b,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9b,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x78d>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7b6>
 movl   $0x170c,0x8(%esp)
 movl   $&_ZZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_CharacE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryPartyCharacStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d8>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d8>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x91c,%esp
+add    $0x31c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryPartyCharacStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party_Charac*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac
          (CDBManager *this,Packet_DBMW_Dungeon_Statistic_Party_Charac *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte bVar6;
  char local_848 [2048];
  string local_48 [4];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  time_t local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_2c = time((time_t *)0x0);
  local_28 = *(int **)(this + 0x10);
  if (local_28 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_24 = *(int *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_44,"QueryPartyCharacStatisticCreate",0x16ce);
    CMyFileLog::operator()(local_44,"./log/statistic",&DAT_081b3ec4,local_24);
    pcVar5 = local_848;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    std::string::string(local_48);
    for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
                    /* try { // try from 0807d8de to 0807dfaf has its CatchHandler @ 0807dfbe */
      iVar3 = std::string::size(local_48);
      if (iVar3 == 0) {
        sprintf(local_848,"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x43 + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x10),
                (int)(char)param_1[local_20 * 0x43 + 0x14],
                (uint)(byte)param_1[local_20 * 0x43 + 0x15],
                (uint)(byte)param_1[local_20 * 0x43 + 0x16],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x17),
                (int)(char)param_1[local_20 * 0x43 + 0x1b],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x1d),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x21),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x25),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x29),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x2d),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x31),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x35),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x39),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x49),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x45),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x41),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x3d),
                (int)(char)param_1[local_20 * 0x43 + 0x1c],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x4d));
      }
      else {
        sprintf(local_848,",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x43 + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x10),
                (int)(char)param_1[local_20 * 0x43 + 0x14],
                (uint)(byte)param_1[local_20 * 0x43 + 0x15],
                (uint)(byte)param_1[local_20 * 0x43 + 0x16],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x17),
                (int)(char)param_1[local_20 * 0x43 + 0x1b],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x1d),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x21),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x25),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x29),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x2d),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x31),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x35),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x39),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x49),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x45),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x41),
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x3d),
                (int)(char)param_1[local_20 * 0x43 + 0x1c],
                *(undefined4 *)(param_1 + local_20 * 0x43 + 0x4d));
      }
      iVar3 = std::string::length(local_48);
      if (iVar3 + 0x800U < 0x6001) {
        std::string::operator+=(local_48,local_848);
      }
      else {
        pcVar1 = *(code **)(*local_28 + 0x1c);
        uVar4 = std::string::c_str(local_48);
        (*pcVar1)(local_28,0x4e9b,
                  "inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s"
                  ,uVar4);
        cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e9b);
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_3c,"QueryPartyCharacStatisticCreate",0x16ff);
          CMyFileLog::operator()
                    (local_3c,"./log/statistic","\nQueryPartyCharacStatisticCreate db error!!\n");
          uVar4 = 0;
          goto LAB_0807dfd9;
        }
        std::string::clear(local_48);
        local_20 = local_20 + -1;
      }
    }
    pcVar1 = *(code **)(*local_28 + 0x1c);
    uVar4 = std::string::c_str(local_48);
    (*pcVar1)(local_28,0x4e9b,
              "inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e9b);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"QueryPartyCharacStatisticCreate",0x170c);
      CMyFileLog::operator()
                (local_34,"./log/statistic","\nQueryPartyCharacStatisticCreate db error!!\n");
      uVar4 = 0;
    }
LAB_0807dfd9:
    std::string::~string(local_48);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
