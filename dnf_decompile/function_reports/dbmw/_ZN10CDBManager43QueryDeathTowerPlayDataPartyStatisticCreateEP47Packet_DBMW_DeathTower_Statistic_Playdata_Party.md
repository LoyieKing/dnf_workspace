# _ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party

`CDBManager::QueryDeathTowerPlayDataPartyStatisticCreate(Packet_DBMW_DeathTower_Statistic_Playdata_Party*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807e8d8` | `0x4ea` | `0x8061da0` | `0x4e9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,362 +1,363 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x85c,%esp
+sub    $0x86c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
 jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4dd>
-movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4dc>
 mov    0xc(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x24(%ebp)
 movl   $0x17f7,0x8(%esp)
 movl   $&_ZZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_PartyE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x848(%ebp),%ebx
+lea    -0x84c(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x200,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1e8>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1e7>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x14d>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x14c>
+mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x14(%eax,%ecx,1),%esi
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x10(%eax,%ecx,1),%ebx
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
 movzbl (%eax),%eax
 movsbl %al,%ecx
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%edi,%eax,1),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1cf>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1ce>
+mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x14(%eax,%ecx,1),%esi
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x10(%eax,%ecx,1),%ebx
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
 movzbl (%eax),%eax
 movsbl %al,%ecx
 mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%edi,%eax,1),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
 addl   $0x1,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,%edx
 shr    $0x1f,%edx
 lea    (%edx,%eax,1),%eax
 sar    $1,%eax
 cmp    -0x20(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0xae>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0xad>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s",0x8(%esp)
 movl   $0x4ea1,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ea1,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x295>
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x294>
 movl   $0x1813,0x8(%esp)
 movl   $&_ZZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_PartyE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryDeathTowerPlayDataPartyStatisticCreate db1 error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d2>
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d1>
 movl   $0x800,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs5clearEv>
 mov    -0x24(%ebp),%eax
 mov    %eax,%edx
 shr    $0x1f,%edx
 lea    (%edx,%eax,1),%eax
 sar    $1,%eax
 add    $0x1,%eax
 mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x410>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x40f>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x375>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x374>
+mov    -0x1c(%ebp),%edx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x14(%eax,%ecx,1),%esi
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x10(%eax,%ecx,1),%ebx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
 movzbl (%eax),%eax
 movsbl %al,%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%edi,%eax,1),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x3f7>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x3f6>
+mov    -0x1c(%ebp),%edx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x14(%eax,%ecx,1),%esi
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0x10(%eax,%ecx,1),%ebx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
 movzbl (%eax),%eax
 movsbl %al,%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 lea    (%edi,%eax,1),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d)",0x4(%esp)
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x2d6>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x2d5>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s",0x8(%esp)
 movl   $0x4ea1,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ea1,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4b0>
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4af>
 movl   $0x1831,0x8(%esp)
 movl   $&_ZZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_PartyE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryDeathTowerPlayDataPartyStatisticCreate db2 error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d2>
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d1>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d2>
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d1>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x85c,%esp
+add    $0x86c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryDeathTowerPlayDataPartyStatisticCreate(Packet_DBMW_DeathTower_Statistic_Playdata_Party*)
    */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party
          (CDBManager *this,Packet_DBMW_DeathTower_Statistic_Playdata_Party *param_1)

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
    CMyFileLog::CMyFileLog(local_48,"QueryDeathTowerPlayDataPartyStatisticCreate",0x17f7);
    CMyFileLog::operator()(local_48,"./log/statistic",&DAT_081b45c8,local_28);
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
                    /* try { // try from 0807e98c to 0807ed80 has its CatchHandler @ 0807ed8f */
      iVar3 = std::string::size(local_4c);
      if (iVar3 == 0) {
        sprintf(local_84c,"(now(),%d,%d,%d,%d)",(int)(char)param_1[local_24 * 10 + 0xe],
                (int)(char)param_1[local_24 * 10 + 0xf],
                *(undefined4 *)(param_1 + local_24 * 10 + 0x10),
                *(undefined4 *)(param_1 + local_24 * 10 + 0x14));
      }
      else {
        sprintf(local_84c,",(now(),%d,%d,%d,%d)",(int)(char)param_1[local_24 * 10 + 0xe],
                (int)(char)param_1[local_24 * 10 + 0xf],
                *(undefined4 *)(param_1 + local_24 * 10 + 0x10),
                *(undefined4 *)(param_1 + local_24 * 10 + 0x14));
      }
      std::string::operator+=(local_4c,local_84c);
    }
    pcVar1 = *(code **)(*local_2c + 0x1c);
    uVar4 = std::string::c_str(local_4c);
    (*pcVar1)(local_2c,0x4ea1,
              "inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_2c + 0x20))(local_2c,0x4ea1);
    if (cVar2 == '\x01') {
      memset(local_84c,0,0x800);
      std::string::clear(local_4c);
      local_20 = local_28 / 2;
      while (local_20 = local_20 + 1, local_20 < local_28) {
        iVar3 = std::string::size(local_4c);
        if (iVar3 == 0) {
          sprintf(local_84c,"(now(),%d,%d,%d,%d)",(int)(char)param_1[local_20 * 10 + 0xe],
                  (int)(char)param_1[local_20 * 10 + 0xf],
                  *(undefined4 *)(param_1 + local_20 * 10 + 0x10),
                  *(undefined4 *)(param_1 + local_20 * 10 + 0x14));
        }
        else {
          sprintf(local_84c,",(now(),%d,%d,%d,%d)",(int)(char)param_1[local_20 * 10 + 0xe],
                  (int)(char)param_1[local_20 * 10 + 0xf],
                  *(undefined4 *)(param_1 + local_20 * 10 + 0x10),
                  *(undefined4 *)(param_1 + local_20 * 10 + 0x14));
        }
        std::string::operator+=(local_4c,local_84c);
      }
      pcVar1 = *(code **)(*local_2c + 0x1c);
      uVar4 = std::string::c_str(local_4c);
      (*pcVar1)(local_2c,0x4ea1,
                "inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s"
                ,uVar4);
      cVar2 = (**(code **)(*local_2c + 0x20))(local_2c,0x4ea1);
      if (cVar2 == '\x01') {
        uVar4 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_38,"QueryDeathTowerPlayDataPartyStatisticCreate",0x1831);
        CMyFileLog::operator()
                  (local_38,"./log/statistic",
                   "\nQueryDeathTowerPlayDataPartyStatisticCreate db2 error!!\n");
        uVar4 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_40,"QueryDeathTowerPlayDataPartyStatisticCreate",0x1813);
      CMyFileLog::operator()
                (local_40,"./log/statistic",
                 "\nQueryDeathTowerPlayDataPartyStatisticCreate db1 error!!\n");
      uVar4 = 0;
    }
    std::string::~string(local_4c);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 287 个文件*
