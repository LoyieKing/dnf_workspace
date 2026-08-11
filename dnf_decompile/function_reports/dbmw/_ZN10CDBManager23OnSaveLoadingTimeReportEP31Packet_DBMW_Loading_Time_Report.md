# _ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report

`CDBManager::OnSaveLoadingTimeReport(Packet_DBMW_Loading_Time_Report*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80808d2` | `0x134` | `0x805290a` | `0x13a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x438,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x132>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x138>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x11e>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x124>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x418(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0x13,%edx
+add    %edx,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-add    $0x4,%edx
-mov    0x3(%eax,%edx,4),%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-movzbl 0xa(%ecx,%eax,1),%eax
+mov    -0xc(%ebp),%ecx
+add    $0xa,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %edx,0x14(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into loading_time (occ_time, server_id, type, load_sec) values (now(), %d, %d, %d)",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x418(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 lea    -0x418(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4ec4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 movl   $0x1ae8,0x8(%esp)
 movl   $&_ZZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_ReportE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 lea    -0x418(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[LoadingTime] %s",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x8,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x2e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSaveLoadingTimeReport(Packet_DBMW_Loading_Time_Report*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report
          (CDBManager *this,Packet_DBMW_Loading_Time_Report *param_1)

{
  undefined4 uVar1;
  char local_41c [1024];
  CMyFileLog local_1c [8];
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x3c);
  if (local_14 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
      memset(local_41c,0,0x400);
      snprintf(local_41c,0x400,
               "inSert into loading_time (occ_time, server_id, type, load_sec) values (now(), %d, %d, %d)"
               ,(uint)(byte)param_1[local_10 + 10],local_10,
               *(undefined4 *)(param_1 + (local_10 + 4) * 4 + 3));
      (**(code **)(*local_14 + 0x1c))(local_14,0x4ec4,&DAT_081ad540,local_41c);
      (**(code **)(*local_14 + 0x20))(local_14,0x4ec4);
      CMyFileLog::CMyFileLog(local_1c,"OnSaveLoadingTimeReport",0x1ae8);
      CMyFileLog::operator()(local_1c,"./log/Statistic","[LoadingTime] %s",local_41c);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
