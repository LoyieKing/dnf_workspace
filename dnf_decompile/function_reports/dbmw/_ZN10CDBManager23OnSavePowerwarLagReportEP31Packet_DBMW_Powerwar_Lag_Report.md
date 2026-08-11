# _ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report

`CDBManager::OnSavePowerwarLagReport(Packet_DBMW_Powerwar_Lag_Report*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080af0` | `0xe9` | `0x80584ca` | `0xe8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0x20>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0x1f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0xe3>
+jmp    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0xe6>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0xcd>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0xd0>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 shl    $0x8,%eax
 add    0xc(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4eca,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eca,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 shl    $0x8,%eax
 add    0xc(%ebp),%eax
 add    $0xe,%eax
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x1b0f,0x8(%esp)
 movl   $&_ZZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_ReportE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[PowerWar Lag] %s",0x8(%esp)
 movl   $"./log/Statistics",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0x35>
+jne    <T> <_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report+0x34>
 mov    $0x1,%eax
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerwarLagReport(Packet_DBMW_Powerwar_Lag_Report*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager23OnSavePowerwarLagReportEP31Packet_DBMW_Powerwar_Lag_Report
          (CDBManager *this,Packet_DBMW_Powerwar_Lag_Report *param_1)

{
  undefined4 uVar1;
  int iVar2;
  CMyFileLog local_20 [8];
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = *(int **)(this + 0x3c);
  if (local_18 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 10);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      (**(code **)(*local_18 + 0x1c))
                (local_18,0x4eca,&DAT_081ad540,param_1 + local_10 * 0x100 + 0xe);
      (**(code **)(*local_18 + 0x20))(local_18,0x4eca);
      iVar2 = local_10 * 0x100;
      CMyFileLog::CMyFileLog(local_20,"OnSavePowerwarLagReport",0x1b0f);
      CMyFileLog::operator()(local_20,"./log/Statistics","[PowerWar Lag] %s",param_1 + iVar2 + 0xe);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
