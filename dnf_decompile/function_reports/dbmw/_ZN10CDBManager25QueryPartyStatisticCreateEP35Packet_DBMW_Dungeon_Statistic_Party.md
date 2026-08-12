# _ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party

`CDBManager::QueryPartyStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807c88c` | `0x8d3` | `0x8055fb4` | `0x99a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,646 +1,735 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x91c,%esp
+sub    $0x32c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c6>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x98d>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
 movl   $0x15b3,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_PartyE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x844(%ebp),%ebx
+lea    -0x244(%ebp),%ebx
 mov    $0x0,%eax
-mov    $0x200,%edx
+mov    $0x80,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f9>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c0>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x3f4>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x454>
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3a(%eax),%eax
+mov    %eax,-0x2c8(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3e(%eax),%eax
+mov    %eax,-0x2c4(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x42(%eax),%eax
+mov    %eax,-0x2c0(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x46(%eax),%eax
+mov    %eax,-0x2bc(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x36(%eax),%eax
+mov    %eax,-0x2b8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x32(%eax),%eax
+mov    %eax,-0x2b4(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2e(%eax),%eax
+mov    %eax,-0x2b0(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2a(%eax),%eax
+mov    %eax,-0x2ac(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x26(%eax),%eax
+mov    %eax,-0x2a8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x2a4(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x2a0(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x29c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
+movsbl %al,%eax
+mov    %eax,-0x298(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x294(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x290(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x28c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
+movzbl %al,%edi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
+movsbl %al,%esi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,-0x2cc(%ebp)
+mov    -0x2cc(%ebp),%edx
 sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x8c8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8c4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8c0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8bc(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8b8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,4),%eax
-mov    %eax,%edx
 mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8b4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8b0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x8ac(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8a8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8a4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8a0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x1a(%edx,%ecx,1),%edx
-mov    %edx,-0x89c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x898(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x894(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x890(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x88c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
-movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
-movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
-mov    -0x8c8(%ebp),%edx
-mov    %edx,0x54(%esp)
-mov    -0x8c4(%ebp),%ecx
-mov    %ecx,0x50(%esp)
-mov    -0x8c0(%ebp),%edx
-mov    %edx,0x4c(%esp)
-mov    -0x8bc(%ebp),%ecx
-mov    %ecx,0x48(%esp)
-mov    -0x8b8(%ebp),%edx
-mov    %edx,0x44(%esp)
-mov    -0x8b4(%ebp),%ecx
-mov    %ecx,0x40(%esp)
-mov    -0x8b0(%ebp),%edx
-mov    %edx,0x3c(%esp)
-mov    -0x8ac(%ebp),%ecx
-mov    %ecx,0x38(%esp)
-mov    -0x8a8(%ebp),%edx
-mov    %edx,0x34(%esp)
-mov    -0x8a4(%ebp),%ecx
-mov    %ecx,0x30(%esp)
-mov    -0x8a0(%ebp),%edx
-mov    %edx,0x2c(%esp)
-mov    -0x89c(%ebp),%ecx
-mov    %ecx,0x28(%esp)
-mov    -0x898(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x894(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x890(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x88c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
+mov    -0x2c8(%ebp),%ecx
+mov    %ecx,0x54(%esp)
+mov    -0x2c4(%ebp),%edx
+mov    %edx,0x50(%esp)
+mov    -0x2c0(%ebp),%ecx
+mov    %ecx,0x4c(%esp)
+mov    -0x2bc(%ebp),%edx
+mov    %edx,0x48(%esp)
+mov    -0x2b8(%ebp),%ecx
+mov    %ecx,0x44(%esp)
+mov    -0x2b4(%ebp),%edx
+mov    %edx,0x40(%esp)
+mov    -0x2b0(%ebp),%ecx
+mov    %ecx,0x3c(%esp)
+mov    -0x2ac(%ebp),%edx
+mov    %edx,0x38(%esp)
+mov    -0x2a8(%ebp),%ecx
+mov    %ecx,0x34(%esp)
+mov    -0x2a4(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    -0x2a0(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x29c(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x298(%ebp),%ecx
+mov    %ecx,0x24(%esp)
+mov    -0x294(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x290(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x28c(%ebp),%edx
+mov    %edx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x844(%ebp),%eax
+lea    -0x244(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x71d>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7e4>
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3a(%eax),%eax
+mov    %eax,-0x288(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3e(%eax),%eax
+mov    %eax,-0x284(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x42(%eax),%eax
+mov    %eax,-0x280(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x46(%eax),%eax
+mov    %eax,-0x27c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x36(%eax),%eax
+mov    %eax,-0x278(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x32(%eax),%eax
+mov    %eax,-0x274(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2e(%eax),%eax
+mov    %eax,-0x270(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2a(%eax),%eax
+mov    %eax,-0x26c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x26(%eax),%eax
+mov    %eax,-0x268(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x264(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x260(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x25c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
+movsbl %al,%eax
+mov    %eax,-0x258(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x254(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x250(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x24c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
+movzbl %al,%edi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
+movsbl %al,%esi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,-0x2cc(%ebp)
+mov    -0x2cc(%ebp),%edx
 sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x888(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x884(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x880(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x87c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,4),%eax
-mov    %eax,%edx
 mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x874(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x870(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x86c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x868(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x864(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x860(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x1a(%edx,%ecx,1),%edx
-mov    %edx,-0x85c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x858(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x854(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x850(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x84c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
-movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
-movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
 movzwl %ax,%eax
-mov    -0x888(%ebp),%edx
-mov    %edx,0x54(%esp)
-mov    -0x884(%ebp),%ecx
-mov    %ecx,0x50(%esp)
-mov    -0x880(%ebp),%edx
-mov    %edx,0x4c(%esp)
-mov    -0x87c(%ebp),%ecx
-mov    %ecx,0x48(%esp)
-mov    -0x878(%ebp),%edx
-mov    %edx,0x44(%esp)
-mov    -0x874(%ebp),%ecx
-mov    %ecx,0x40(%esp)
-mov    -0x870(%ebp),%edx
-mov    %edx,0x3c(%esp)
-mov    -0x86c(%ebp),%ecx
-mov    %ecx,0x38(%esp)
-mov    -0x868(%ebp),%edx
-mov    %edx,0x34(%esp)
-mov    -0x864(%ebp),%ecx
-mov    %ecx,0x30(%esp)
-mov    -0x860(%ebp),%edx
-mov    %edx,0x2c(%esp)
-mov    -0x85c(%ebp),%ecx
-mov    %ecx,0x28(%esp)
-mov    -0x858(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x854(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x850(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x84c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
+mov    -0x288(%ebp),%ecx
+mov    %ecx,0x54(%esp)
+mov    -0x284(%ebp),%edx
+mov    %edx,0x50(%esp)
+mov    -0x280(%ebp),%ecx
+mov    %ecx,0x4c(%esp)
+mov    -0x27c(%ebp),%edx
+mov    %edx,0x48(%esp)
+mov    -0x278(%ebp),%ecx
+mov    %ecx,0x44(%esp)
+mov    -0x274(%ebp),%edx
+mov    %edx,0x40(%esp)
+mov    -0x270(%ebp),%ecx
+mov    %ecx,0x3c(%esp)
+mov    -0x26c(%ebp),%edx
+mov    %edx,0x38(%esp)
+mov    -0x268(%ebp),%ecx
+mov    %ecx,0x34(%esp)
+mov    -0x264(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    -0x260(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x25c(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x258(%ebp),%ecx
+mov    %ecx,0x24(%esp)
+mov    -0x254(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x250(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x24c(%ebp),%edx
+mov    %edx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
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
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7e0>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8a7>
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
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7cf>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x896>
 movl   $0x15e1,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_PartyE12__FUNCTION__,0x4(%esp)
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
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs5clearEv>
 subl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f5>
-lea    -0x844(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bc>
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
-jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xae>
+jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xa7>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_dungeon_party(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_add) values%s",0x8(%esp)
 movl   $0x4e97,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e97,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x899>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x960>
 movl   $0x15f0,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_PartyE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryPartyStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
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
+add    $0x32c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryPartyStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party
          (CDBManager *this,Packet_DBMW_Dungeon_Statistic_Party *param_1)

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
    CMyFileLog::CMyFileLog(local_44,"QueryPartyStatisticCreate",0x15b3);
    CMyFileLog::operator()(local_44,"./log/statistic",&DAT_081b3ae4,local_24);
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
                    /* try { // try from 0807c940 to 0807d11d has its CatchHandler @ 0807d12c */
      iVar3 = std::string::size(local_48);
      if (iVar3 == 0) {
        sprintf(local_848,"(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x3c + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x10),
                (int)(char)param_1[local_20 * 0x3c + 0x14],
                (uint)(byte)param_1[local_20 * 0x3c + 0x15],
                (uint)(byte)param_1[local_20 * 0x3c + 0x16],
                (uint)(byte)param_1[local_20 * 0x3c + 0x17],
                (uint)(byte)param_1[local_20 * 0x3c + 0x18],
                (int)(char)param_1[local_20 * 0x3c + 0x19],
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x1a),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x1e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x22),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x26),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x2a),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x2e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x32),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x36),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x46),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x42),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x3e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x3a));
      }
      else {
        sprintf(local_848,",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (uint)*(ushort *)(param_1 + local_20 * 0x3c + 0xe),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x10),
                (int)(char)param_1[local_20 * 0x3c + 0x14],
                (uint)(byte)param_1[local_20 * 0x3c + 0x15],
                (uint)(byte)param_1[local_20 * 0x3c + 0x16],
                (uint)(byte)param_1[local_20 * 0x3c + 0x17],
                (uint)(byte)param_1[local_20 * 0x3c + 0x18],
                (int)(char)param_1[local_20 * 0x3c + 0x19],
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x1a),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x1e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x22),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x26),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x2a),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x2e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x32),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x36),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x46),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x42),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x3e),
                *(undefined4 *)(param_1 + local_20 * 0x3c + 0x3a));
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
          CMyFileLog::CMyFileLog(local_3c,"QueryPartyStatisticCreate",0x15e1);
          CMyFileLog::operator()
                    (local_3c,"./log/statistic","\nQueryPartyJobStatisticCreate db error!!\n");
          uVar4 = 0;
          goto LAB_0807d147;
        }
        std::string::clear(local_48);
        local_20 = local_20 + -1;
      }
    }
    pcVar1 = *(code **)(*local_28 + 0x1c);
    uVar4 = std::string::c_str(local_48);
    (*pcVar1)(local_28,0x4e97,
              "inSert into log_dungeon_party(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_add) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e97);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"QueryPartyStatisticCreate",0x15f0);
      CMyFileLog::operator()(local_34,"./log/statistic","\nQueryPartyStatisticCreate db error!!\n");
      uVar4 = 0;
    }
LAB_0807d147:
    std::string::~string(local_48);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
