# _ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job

`CDBManager::QueryPartyJobStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party_Job*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807d160` | `0x6c9` | `0x805687e` | `0x6fc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,476 +1,487 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8bc,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6bc>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6ef>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
 movl   $0x1645,0x8(%esp)
 movl   $&_ZZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x844(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x200,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5ef>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x622>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x2ef>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x13(%eax),%eax
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x305>
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x23(%eax),%eax
 mov    %eax,-0x888(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xf(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1f(%eax),%eax
 mov    %eax,-0x884(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x1e,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x1e(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x880(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-mov    0x1a(%eax,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
 mov    %eax,-0x87c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x878(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x874(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x870(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x86c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
 movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
 movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
 mov    -0x888(%ebp),%edx
 mov    %edx,0x34(%esp)
 mov    -0x884(%ebp),%ecx
 mov    %ecx,0x30(%esp)
 mov    -0x880(%ebp),%edx
 mov    %edx,0x2c(%esp)
 mov    -0x87c(%ebp),%ecx
 mov    %ecx,0x28(%esp)
 mov    -0x878(%ebp),%edx
 mov    %edx,0x24(%esp)
 mov    -0x874(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    -0x870(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    -0x86c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
 lea    -0x844(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x513>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x13(%eax),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x546>
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x23(%eax),%eax
 mov    %eax,-0x868(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xf(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1f(%eax),%eax
 mov    %eax,-0x864(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x1e,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x1e(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x860(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-mov    0x1a(%eax,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
 mov    %eax,-0x85c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x858(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x854(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x850(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x84c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
 movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
 movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
 mov    -0x868(%ebp),%edx
 mov    %edx,0x34(%esp)
 mov    -0x864(%ebp),%ecx
 mov    %ecx,0x30(%esp)
 mov    -0x860(%ebp),%edx
 mov    %edx,0x2c(%esp)
 mov    -0x85c(%ebp),%ecx
 mov    %ecx,0x28(%esp)
 mov    -0x858(%ebp),%edx
 mov    %edx,0x24(%esp)
 mov    -0x854(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    -0x850(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    -0x84c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
 lea    -0x844(%ebp),%eax
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
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5d6>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x609>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s",0x8(%esp)
 movl   $0x4e99,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e99,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5c5>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5f8>
 movl   $0x166a,0x8(%esp)
 movl   $&_ZZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryPartyJobStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs5clearEv>
 subl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5eb>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x61e>
 lea    -0x844(%ebp),%eax
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
-jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xae>
+jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xa7>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s",0x8(%esp)
 movl   $0x4e99,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e99,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x68f>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6c2>
 movl   $0x1678,0x8(%esp)
 movl   $&_ZZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryPartyJobStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
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
 add    $0x8bc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryPartyJobStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party_Job*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job
          (CDBManager *this,Packet_DBMW_Dungeon_Statistic_Party_Job *param_1)

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
    CMyFileLog::CMyFileLog(local_44,"QueryPartyJobStatisticCreate",0x1645);
    CMyFileLog::operator()(local_44,"./log/statistic",&DAT_081b3e28,local_24);
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
                    /* try { // try from 0807d214 to 0807d7e7 has its CatchHandler @ 0807d7f6 */
      iVar3 = std::string::size(local_48);
      if (iVar3 == 0) {
        sprintf(local_848,"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x19 + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x10),
                (int)(char)param_1[local_20 * 0x19 + 0x14],
                (uint)(byte)param_1[local_20 * 0x19 + 0x15],
                (uint)(byte)param_1[local_20 * 0x19 + 0x16],
                (uint)(byte)param_1[local_20 * 0x19 + 0x17],
                (uint)(byte)param_1[local_20 * 0x19 + 0x18],
                (int)(char)param_1[local_20 * 0x19 + 0x19],
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x1a),
                (int)(char)param_1[local_20 * 0x19 + 0x1e],
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x1f),
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x23));
      }
      else {
        sprintf(local_848,",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x19 + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x10),
                (int)(char)param_1[local_20 * 0x19 + 0x14],
                (uint)(byte)param_1[local_20 * 0x19 + 0x15],
                (uint)(byte)param_1[local_20 * 0x19 + 0x16],
                (uint)(byte)param_1[local_20 * 0x19 + 0x17],
                (uint)(byte)param_1[local_20 * 0x19 + 0x18],
                (int)(char)param_1[local_20 * 0x19 + 0x19],
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x1a),
                (int)(char)param_1[local_20 * 0x19 + 0x1e],
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x1f),
                *(undefined4 *)(param_1 + local_20 * 0x19 + 0x23));
      }
      iVar3 = std::string::length(local_48);
      if (iVar3 + 0x800U < 0x6001) {
        std::string::operator+=(local_48,local_848);
      }
      else {
        pcVar1 = *(code **)(*local_28 + 0x1c);
        uVar4 = std::string::c_str(local_48);
        (*pcVar1)(local_28,0x4e99,
                  "inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s"
                  ,uVar4);
        cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e99);
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_3c,"QueryPartyJobStatisticCreate",0x166a);
          CMyFileLog::operator()
                    (local_3c,"./log/statistic","\nQueryPartyJobStatisticCreate db error!!\n");
          uVar4 = 0;
          goto LAB_0807d811;
        }
        std::string::clear(local_48);
        local_20 = local_20 + -1;
      }
    }
    pcVar1 = *(code **)(*local_28 + 0x1c);
    uVar4 = std::string::c_str(local_48);
    (*pcVar1)(local_28,0x4e99,
              "inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e99);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"QueryPartyJobStatisticCreate",0x1678);
      CMyFileLog::operator()
                (local_34,"./log/statistic","\nQueryPartyJobStatisticCreate db error!!\n");
      uVar4 = 0;
    }
LAB_0807d811:
    std::string::~string(local_48);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
