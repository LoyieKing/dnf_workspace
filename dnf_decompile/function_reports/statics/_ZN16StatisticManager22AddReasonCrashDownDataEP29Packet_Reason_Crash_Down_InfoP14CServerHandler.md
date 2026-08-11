# _ZN16StatisticManager22AddReasonCrashDownDataEP29Packet_Reason_Crash_Down_InfoP14CServerHandler

`StatisticManager::AddReasonCrashDownData(Packet_Reason_Crash_Down_Info*, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80729ee` | `0xe3` | `0x807297e` | `0xe2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x144,%esp
-lea    -0x11a(%ebp),%eax
+sub    $0x244,%esp
+lea    -0x21a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_DBMW_Reason_Crash_Down_QueryC1Ev>
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x11a(%ebp),%eax
-add    $0xa,%eax
+lea    -0x110(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%ebx
+add    $0x16,%eax
+mov    (%eax),%ebx
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%ecx
+add    $0x12,%eax
+mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
+add    $0xe,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_client_ting_stat (occ_time,channel_no,reason,cnt) values (from_unixtime(%d),%d,%d,%d)",0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x11a(%ebp),%eax
-add    $0xa,%eax
+lea    -0x110(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x11a(%ebp),%eax
+lea    -0x21a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x5b8,0x8(%esp)
 movl   $&_ZZN16StatisticManager22AddReasonCrashDownDataEP29Packet_Reason_Crash_Down_InfoP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0x11a(%ebp),%eax
-add    $0xa,%eax
+lea    -0x110(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $"./log/ReasonCrashDown",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x144,%esp
+add    $0x244,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddReasonCrashDownData(Packet_Reason_Crash_Down_Info*, CServerHandler*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager22AddReasonCrashDownDataEP29Packet_Reason_Crash_Down_InfoP14CServerHandler
          (StatisticManager *this,Packet_Reason_Crash_Down_Info *param_1,CServerHandler *param_2)

{
  Packet_DBMW_Reason_Crash_Down_Query local_11e [10];
  char acStack_114 [256];
  CMyFileLog local_14 [12];
  
  Packet_DBMW_Reason_Crash_Down_Query::Packet_DBMW_Reason_Crash_Down_Query(local_11e);
  memset(acStack_114,0,0x100);
  snprintf(acStack_114,0xff,
           "inSert into log_client_ting_stat (occ_time,channel_no,reason,cnt) values (from_unixtime(%d),%d,%d,%d)"
           ,*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
           *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16));
  CServerHandler::SendToDB(param_2,(PacketHeader *)local_11e);
  CMyFileLog::CMyFileLog(local_14,"AddReasonCrashDownData",0x5b8);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/ReasonCrashDown","%s",acStack_114);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/Statistics.cpp, source/DNFServer/GameServer/Statics/CubeStatistics.h, source/DNFServer/GameServer/Statics/DNFDBServer.h, source/DNFServer/GameServer/Statics/DNFGameServer.h, source/DNFServer/GameServer/Statics/DNFManagerServer.h, source/DNFServer/GameServer/Statics/DNFServerConfig.h, source/DNFServer/GameServer/Statics/DNFServerHandler.h, source/DNFServer/GameServer/Statics/DNFTableBase.h 等 260 个文件*
