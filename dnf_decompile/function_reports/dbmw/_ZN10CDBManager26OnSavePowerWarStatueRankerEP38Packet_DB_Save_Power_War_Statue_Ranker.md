# _ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker

`CDBManager::OnSavePowerWarStatueRanker(Packet_DB_Save_Power_War_Statue_Ranker*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807f8b6` | `0x201` | `0x804f074` | `0x1fa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,147 +1,145 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0x9(%ebp)
+mov    %al,-0xa(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-movzbl -0x9(%ebp),%eax
+movzbl -0xa(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)",0x8(%esp)
 movl   $0x4ecc,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ecc,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0xac>
 movl   $0x1943,0x8(%esp)
 movl   $&_ZZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_RankerE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"deLete_power_war_statue_message Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d where server_id=%d",0x8(%esp)
 movl   $0x4ead,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ead,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x134>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 jne    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x13b>
 mov    $0x1,%eax
 jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x140>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d, server_id=%d",0x8(%esp)
 movl   $0x4eac,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eac,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
 movl   $0x195a,0x8(%esp)
 movl   $&_ZZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_RankerE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"inSert_into_power_war_statue_ranker Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1fa>
+jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f3>
 mov    $0x1,%eax
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerWarStatueRanker(Packet_DB_Save_Power_War_Statue_Ranker*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker
          (CDBManager *this,Packet_DB_Save_Power_War_Statue_Ranker *param_1)

{
  bool bVar1;
  longlong lVar2;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int *local_14;
  Packet_DB_Save_Power_War_Statue_Ranker local_d;
  
  local_18 = *(int **)(this + 0x20);
  local_14 = *(int **)(this + 0x18);
  local_d = param_1[10];
  (**(code **)(*local_14 + 0x1c))
            (local_14,0x4ecc,
             "deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)"
             ,local_d);
  local_19 = (**(code **)(*local_14 + 0x20))(local_14,0x4ecc);
  if (local_19 != '\x01') {
    CMyFileLog::CMyFileLog(local_2c,"OnSavePowerWarStatueRanker",0x1943);
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr","deLete_power_war_statue_message Query Error\n");
  }
  (**(code **)(*local_18 + 0x1c))
            (local_18,0x4ead,
             "upDate power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d where server_id=%d"
             ,*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
             *(undefined4 *)(param_1 + 0x13),local_d);
  local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4ead);
  if ((local_19 == '\x01') && (lVar2 = (**(code **)(*local_18 + 0x74))(local_18), lVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(*local_18 + 0x1c))
              (local_18,0x4eac,
               "inSert into power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d, server_id=%d"
               ,*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
               *(undefined4 *)(param_1 + 0x13),local_d);
    local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4eac);
    if (local_19 != '\x01') {
      CMyFileLog::CMyFileLog(local_24,"OnSavePowerWarStatueRanker",0x195a);
      CMyFileLog::operator()
                (local_24,"./log/DBQueryErr","inSert_into_power_war_statue_ranker Query Error\n");
      return 0;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 287 个文件*
