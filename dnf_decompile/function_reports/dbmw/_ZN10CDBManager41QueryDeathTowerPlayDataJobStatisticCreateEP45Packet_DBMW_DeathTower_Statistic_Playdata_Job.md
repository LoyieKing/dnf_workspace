# _ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job

`CDBManager::QueryDeathTowerPlayDataJobStatisticCreate(Packet_DBMW_DeathTower_Statistic_Playdata_Job*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807e35e` | `0x57a` | `0x8060d7c` | `0x495` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,374 +1,328 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x87c,%esp
+sub    $0x86c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
 jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x56d>
-movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x488>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x24(%ebp)
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
 movl   $0x17a5,0x8(%esp)
 movl   $&_ZZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Job : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x848(%ebp),%ebx
+lea    -0x850(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x200,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x230>
-lea    -0x48(%ebp),%eax
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x1bb>
+mov    0xc(%ebp),%edx
+mov    -0x28(%ebp),%eax
+shl    $0x4,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x171>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x1a(%edx,%eax,1),%edi
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x16(%edx,%eax,1),%esi
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x11(%edx,%eax,1),%eax
-mov    %eax,%ebx
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-add    %edx,%eax
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x138>
+mov    -0x24(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edi
+mov    -0x24(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x24(%ebp),%eax
 add    $0x15,%eax
 movzbl (%eax),%eax
-movsbl %al,%ecx
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-movzwl 0xf(%edx,%eax,1),%eax
+movsbl %al,%ebx
+mov    -0x24(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%ecx
+mov    -0x24(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
 movswl %ax,%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,-0x85c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x84c(%ebp)
-mov    -0x85c(%ebp),%eax
-shl    $0x4,%eax
-add    -0x84c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x217>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x1a(%edx,%eax,1),%edi
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x16(%edx,%eax,1),%esi
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x11(%edx,%eax,1),%eax
-mov    %eax,%ebx
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-add    %edx,%eax
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x1a2>
+mov    -0x24(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edi
+mov    -0x24(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x24(%ebp),%eax
 add    $0x15,%eax
 movzbl (%eax),%eax
-movsbl %al,%ecx
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-movzwl 0xf(%edx,%eax,1),%eax
+movsbl %al,%ebx
+mov    -0x24(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%ecx
+mov    -0x24(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
 movswl %ax,%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,-0x85c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x850(%ebp)
-mov    -0x85c(%ebp),%eax
-shl    $0x4,%eax
-add    -0x850(%ebp),%eax
+mov    -0x24(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x28(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,%edx
 shr    $0x1f,%edx
 lea    (%edx,%eax,1),%eax
 sar    $1,%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x28(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0xae>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0xa9>
+mov    -0x30(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount ) values%s",0x8(%esp)
 movl   $0x4e9f,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9f,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x2dd>
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x268>
 movl   $0x17c1,0x8(%esp)
 movl   $&_ZZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryDeathTowerPlayDataJobStatisticCreate db1 error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x562>
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x47d>
 movl   $0x800,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs5clearEv>
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,%edx
 shr    $0x1f,%edx
 lea    (%edx,%eax,1),%eax
 sar    $1,%eax
 add    $0x1,%eax
+mov    %eax,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x3bb>
+mov    0xc(%ebp),%edx
+mov    -0x20(%ebp),%eax
+shl    $0x4,%eax
+lea    (%edx,%eax,1),%eax
 mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x4a0>
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x3e1>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x1a(%edx,%eax,1),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x16(%edx,%eax,1),%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x11(%edx,%eax,1),%eax
-mov    %eax,%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-add    %edx,%eax
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x338>
+mov    -0x1c(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
 add    $0x15,%eax
 movzbl (%eax),%eax
-movsbl %al,%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-movzwl 0xf(%edx,%eax,1),%eax
+movsbl %al,%ebx
+mov    -0x1c(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
 movswl %ax,%edx
 mov    -0x1c(%ebp),%eax
-mov    %eax,-0x85c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x854(%ebp)
-mov    -0x85c(%ebp),%eax
-shl    $0x4,%eax
-add    -0x854(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x487>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x1a(%edx,%eax,1),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x16(%edx,%eax,1),%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x11(%edx,%eax,1),%eax
-mov    %eax,%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-add    %edx,%eax
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x3a2>
+mov    -0x1c(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
 add    $0x15,%eax
 movzbl (%eax),%eax
-movsbl %al,%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-movzwl 0xf(%edx,%eax,1),%eax
+movsbl %al,%ebx
+mov    -0x1c(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+movzwl (%eax),%eax
 movswl %ax,%edx
 mov    -0x1c(%ebp),%eax
-mov    %eax,-0x85c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x858(%ebp)
-mov    -0x85c(%ebp),%eax
-shl    $0x4,%eax
-add    -0x858(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x848(%ebp),%eax
+lea    -0x850(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    -0x24(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x31e>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x2a9>
+mov    -0x30(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount) values%s",0x8(%esp)
 movl   $0x4e9f,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9f,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x540>
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x45b>
 movl   $0x17df,0x8(%esp)
 movl   $&_ZZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_JobE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryDeathTowerPlayDataJobStatisticCreate db2 error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x562>
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x47d>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x562>
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x47d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x87c,%esp
+add    $0x86c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryDeathTowerPlayDataJobStatisticCreate(Packet_DBMW_DeathTower_Statistic_Playdata_Job*)
    */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job
          (CDBManager *this,Packet_DBMW_DeathTower_Statistic_Playdata_Job *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte bVar6;
  char local_84c [2048];
  string local_4c [4];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  time_t local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_30 = time((time_t *)0x0);
  local_2c = *(int **)(this + 0x10);
  if (local_2c == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_28 = *(int *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_48,"QueryDeathTowerPlayDataJobStatisticCreate",0x17a5);
    CMyFileLog::operator()(local_48,"./log/statistic",&DAT_081b43e0,local_28);
    pcVar5 = local_84c;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    std::string::string(local_4c);
    for (local_24 = 0; local_24 < local_28 / 2; local_24 = local_24 + 1) {
                    /* try { // try from 0807e412 to 0807e896 has its CatchHandler @ 0807e8a5 */
      iVar3 = std::string::size(local_4c);
      if (iVar3 == 0) {
        sprintf(local_84c,"(now(),%d,%d,%d,%d,%d,%d)",(int)(char)param_1[local_24 * 0x10 + 0xe],
                (int)*(short *)(param_1 + local_24 * 0x10 + 0xf),
                (int)(char)param_1[local_24 * 0x10 + 0x15],
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x11),
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x16),
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x1a));
      }
      else {
        sprintf(local_84c,",(now(),%d,%d,%d,%d,%d,%d)",(int)(char)param_1[local_24 * 0x10 + 0xe],
                (int)*(short *)(param_1 + local_24 * 0x10 + 0xf),
                (int)(char)param_1[local_24 * 0x10 + 0x15],
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x11),
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x16),
                *(undefined4 *)(param_1 + local_24 * 0x10 + 0x1a));
      }
      std::string::operator+=(local_4c,local_84c);
    }
    pcVar1 = *(code **)(*local_2c + 0x1c);
    uVar4 = std::string::c_str(local_4c);
    (*pcVar1)(local_2c,0x4e9f,
              "inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount ) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_2c + 0x20))(local_2c,0x4e9f);
    if (cVar2 == '\x01') {
      memset(local_84c,0,0x800);
      std::string::clear(local_4c);
      local_20 = local_28 / 2;
      while (local_20 = local_20 + 1, local_20 < local_28) {
        iVar3 = std::string::size(local_4c);
        if (iVar3 == 0) {
          sprintf(local_84c,"(now(),%d,%d,%d,%d,%d,%d)",(int)(char)param_1[local_20 * 0x10 + 0xe],
                  (int)*(short *)(param_1 + local_20 * 0x10 + 0xf),
                  (int)(char)param_1[local_20 * 0x10 + 0x15],
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x11),
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x16),
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x1a));
        }
        else {
          sprintf(local_84c,",(now(),%d,%d,%d,%d,%d,%d)",(int)(char)param_1[local_20 * 0x10 + 0xe],
                  (int)*(short *)(param_1 + local_20 * 0x10 + 0xf),
                  (int)(char)param_1[local_20 * 0x10 + 0x15],
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x11),
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x16),
                  *(undefined4 *)(param_1 + local_20 * 0x10 + 0x1a));
        }
        std::string::operator+=(local_4c,local_84c);
      }
      pcVar1 = *(code **)(*local_2c + 0x1c);
      uVar4 = std::string::c_str(local_4c);
      (*pcVar1)(local_2c,0x4e9f,
                "inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount) values%s"
                ,uVar4);
      cVar2 = (**(code **)(*local_2c + 0x20))(local_2c,0x4e9f);
      if (cVar2 == '\x01') {
        uVar4 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_38,"QueryDeathTowerPlayDataJobStatisticCreate",0x17df);
        CMyFileLog::operator()
                  (local_38,"./log/statistic",
                   "\nQueryDeathTowerPlayDataJobStatisticCreate db2 error!!\n");
        uVar4 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_40,"QueryDeathTowerPlayDataJobStatisticCreate",0x17c1);
      CMyFileLog::operator()
                (local_40,"./log/statistic",
                 "\nQueryDeathTowerPlayDataJobStatisticCreate db1 error!!\n");
      uVar4 = 0;
    }
    std::string::~string(local_4c);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
