# _ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query

`CDBManager::OnReasonCrashDownQueryWrite(Packet_DBMW_Reason_Crash_Down_Query*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8082600` | `0xae` | `0x805873e` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4edd,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4edd,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query+0xa3>
+je     <T> <_ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query+0xa8>
 mov    0xc(%ebp),%eax
-lea    0xa(%eax),%ebx
+add    $0xa,%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x1d53,0x8(%esp)
 movl   $&_ZZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_QueryE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Query Error : %s",0x8(%esp)
 movl   $"./log/StatisticsErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query+0xa8>
+jmp    <T> <_ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query+0xad>
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnReasonCrashDownQueryWrite(Packet_DBMW_Reason_Crash_Down_Query*) */

bool __thiscall
CDBManager::_ZN10CDBManager27OnReasonCrashDownQueryWriteEP35Packet_DBMW_Reason_Crash_Down_Query
          (CDBManager *this,Packet_DBMW_Reason_Crash_Down_Query *param_1)

{
  bool bVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x10);
  (**(code **)(*local_10 + 0x1c))(local_10,0x4edd,param_1 + 10);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4edd);
  bVar1 = local_11 == '\x01';
  if (!bVar1) {
    CMyFileLog::CMyFileLog(local_1c,"OnReasonCrashDownQueryWrite",0x1d53);
    CMyFileLog::operator()(local_1c,"./log/StatisticsErr","Query Error : %s",param_1 + 10);
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
