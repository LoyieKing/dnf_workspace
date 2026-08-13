# _ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic

`CDBManager::OnSaveFatigueBattery(Packet_DBMW_Fatigue_Battery_Money_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080bda` | `0x127` | `0x80528b2` | `0x114` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x21>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x120>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10e>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10c>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xfa>
+mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
 mov    0xa(%eax,%edx,8),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x4d>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%eax
-test   %eax,%eax
-je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x107>
+je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xf6>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
+mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%edx
+mov    0xe(%eax,%edx,8),%edx
 mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,8),%edx
 mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%eax
 mov    0xa(%eax,%ecx,8),%eax
 mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_fatigue_battery set occ_date = now(), server_id = %d, money = %d, buff = %d",0x8(%esp)
 movl   $0x4ec5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,8),%esi
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%ebx
 movl   $0x1b23,0x8(%esp)
 movl   $&_ZZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_StatisticE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    0xe(%eax,%edx,8),%edx
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+mov    0xa(%eax,%ecx,8),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[Fatigue Battery] inSert into log_fatigue_battery set occ_time = now(), server_id = %d, money = %d, buff = %d",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x108>
-nop
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x64,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2d>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2c>
 mov    $0x1,%eax
-add    $0x30,%esp
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSaveFatigueBattery(Packet_DBMW_Fatigue_Battery_Money_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic
          (CDBManager *this,Packet_DBMW_Fatigue_Battery_Money_Statistic *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [8];
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x10);
  if (local_14 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 0x65; local_10 = local_10 + 1) {
      if ((*(int *)(param_1 + local_10 * 8 + 10) != 0) ||
         (*(int *)(param_1 + local_10 * 8 + 10) != 0)) {
        (**(code **)(*local_14 + 0x1c))
                  (local_14,0x4ec5,
                   "inSert into log_fatigue_battery set occ_date = now(), server_id = %d, money = %d, buff = %d"
                   ,local_10,*(undefined4 *)(param_1 + local_10 * 8 + 10),
                   *(undefined4 *)(param_1 + local_10 * 8 + 0xe));
        (**(code **)(*local_14 + 0x20))(local_14,0x4ec5);
        uVar2 = *(undefined4 *)(param_1 + local_10 * 8 + 0xe);
        uVar1 = *(undefined4 *)(param_1 + local_10 * 8 + 10);
        CMyFileLog::CMyFileLog(local_1c,"OnSaveFatigueBattery",0x1b23);
        CMyFileLog::operator()
                  (local_1c,"./log/Statistic",
                   "[Fatigue Battery] inSert into log_fatigue_battery set occ_time = now(), server_id = %d, money = %d, buff = %d"
                   ,local_10,uVar1,uVar2);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
