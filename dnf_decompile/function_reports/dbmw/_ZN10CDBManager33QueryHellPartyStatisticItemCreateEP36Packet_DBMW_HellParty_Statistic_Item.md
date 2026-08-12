# _ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item

`CDBManager::QueryHellPartyStatisticItemCreate(Packet_DBMW_HellParty_Statistic_Item*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807edc2` | `0x279` | `0x8050fb0` | `0x1f8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,190 +1,146 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
+sub    $0x9c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
 jne    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x34>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x26e>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1ed>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
 movl   $0x1848,0x8(%esp)
 movl   $&_ZZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_ItemE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_HellParty_Statistic_Item : (%d) 개 패킷 수신\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x258>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1d7>
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x1a(%eax),%eax
+add    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x2a,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
+add    $0x26,%eax
+mov    (%eax),%eax
+mov    %eax,-0x58(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x50(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xc,%eax
-mov    0x1a(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    %eax,-0x4c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x8,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x48(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    $0x1,%eax
-mov    0x1a(%ecx,%eax,4),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0x16(%eax,%ecx,1),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x15,%eax
 movzbl (%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
+movsbl %al,%edi
+mov    -0x1c(%ebp),%eax
 add    $0x14,%eax
 movzbl (%eax),%eax
-movsbl %al,%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
+movsbl %al,%ebx
+mov    -0x1c(%ebp),%eax
 add    $0x13,%eax
 movzbl (%eax),%eax
-movsbl %al,%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0xf(%eax,%ecx,1),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
+movsbl %al,%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    -0x50(%ebp),%edx
-mov    %edx,0x30(%esp)
-mov    -0x4c(%ebp),%edx
-mov    %edx,0x2c(%esp)
-mov    -0x48(%ebp),%edx
-mov    %edx,0x28(%esp)
-mov    -0x44(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x40(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    %esi,0x30(%esp)
+mov    -0x58(%ebp),%esi
+mov    %esi,0x2c(%esp)
+mov    -0x54(%ebp),%esi
+mov    %esi,0x28(%esp)
+mov    -0x50(%ebp),%esi
+mov    %esi,0x24(%esp)
+mov    -0x4c(%ebp),%esi
+mov    %esi,0x20(%esp)
+mov    %edi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_hellparty_value (occ_time, hellparty_type, dungeon_index, dungeon_diff, party_count, hellparty_diff, update_count, uncommon_count, rare_count, uniq_count, epic_count) values (now(), %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4ec0,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   *-0x54(%ebp)
-mov    -0x24(%ebp),%eax
+call   *-0x5c(%ebp)
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1ab>
+movl   $0x185c,0x8(%esp)
+movl   $&_ZZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_ItemE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"\nQueryDeathTowerValueStatisticCreate db error!!\n",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1ed>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec0,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x254>
-movl   $0x185c,0x8(%esp)
-movl   $&_ZZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_ItemE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"\nQueryDeathTowerValueStatisticCreate db error!!\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1d3>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x26e>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x1ed>
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x8d>
+jne    <T> <_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item+0x8e>
 mov    $0x1,%eax
-add    $0x8c,%esp
+add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryHellPartyStatisticItemCreate(Packet_DBMW_HellParty_Statistic_Item*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager33QueryHellPartyStatisticItemCreateEP36Packet_DBMW_HellParty_Statistic_Item
          (CDBManager *this,Packet_DBMW_HellParty_Statistic_Item *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  time_t local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  local_2c = time((time_t *)0x0);
  local_28 = *(int **)(this + 0x10);
  if (local_28 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_24 = *(int *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_3c,"QueryHellPartyStatisticItemCreate",0x1848);
    CMyFileLog::operator()(local_3c,"./log/statistic",&DAT_081b4720,local_24);
    for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
      (**(code **)(*local_28 + 0x1c))
                (local_28,0x4ec0,
                 "inSert into log_hellparty_value (occ_time, hellparty_type, dungeon_index, dungeon_diff, party_count, hellparty_diff, update_count, uncommon_count, rare_count, uniq_count, epic_count) values (now(), %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)"
                 ,param_1[local_20 * 0x24 + 0xe],*(undefined4 *)(param_1 + local_20 * 0x24 + 0xf),
                 (int)(char)param_1[local_20 * 0x24 + 0x13],
                 (int)(char)param_1[local_20 * 0x24 + 0x14],
                 (int)(char)param_1[local_20 * 0x24 + 0x15],
                 *(undefined4 *)(param_1 + local_20 * 0x24 + 0x16),
                 *(undefined4 *)(param_1 + (local_20 * 9 + 1) * 4 + 0x1a),
                 *(undefined4 *)(param_1 + local_20 * 0x24 + 0x22),
                 *(undefined4 *)(param_1 + local_20 * 0x24 + 0x26),
                 *(undefined4 *)(param_1 + local_20 * 0x24 + 0x2a));
      cVar1 = (**(code **)(*local_28 + 0x20))(local_28,0x4ec0);
      if (cVar1 != '\x01') {
        CMyFileLog::CMyFileLog(local_34,"QueryHellPartyStatisticItemCreate",0x185c);
        CMyFileLog::operator()
                  (local_34,"./log/statistic","\nQueryDeathTowerValueStatisticCreate db error!!\n");
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
