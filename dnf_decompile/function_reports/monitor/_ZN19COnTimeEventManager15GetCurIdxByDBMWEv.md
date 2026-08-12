# _ZN19COnTimeEventManager15GetCurIdxByDBMWEv

`COnTimeEventManager::GetCurIdxByDBMW()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4ac8` | `0xf7` | `0x809a1b8` | `0x115` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x34,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x34(%eax),%eax
 test   %al,%al
-je     <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0x1c>
+je     <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0x1e>
 mov    $0x1,%eax
-jmp    <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0xf1>
+jmp    <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0x10d>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0xec>
-lea    -0x1e(%ebp),%eax
+je     <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0x108>
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_Req_Ontime_Event_IdxC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1e(%ebp),%edx
+lea    -0x2e(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x164,0x8(%esp)
 movl   $&_ZZN19COnTimeEventManager15GetCurIdxByDBMWEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Get_ServerHandler()->SendToDB(packet);",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x1c(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventIdxLoadC1EjjP19COnTimeEventManager>
+jmp    <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0xe4>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 mov    $0x1,%eax
-jmp    <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0xf1>
+jmp    <T> <_ZN19COnTimeEventManager15GetCurIdxByDBMWEv+0x10d>
 mov    $0xffffffff,%eax
-add    $0x34,%esp
+add    $0x3c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::GetCurIdxByDBMW() */

undefined4 __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager15GetCurIdxByDBMWEv(COnTimeEventManager *this)

{
  undefined4 uVar1;
  CServerHandler *this_00;
  COnTimeEventIdxLoad *this_01;
  CTaskScheduler *this_02;
  Packet_Req_Ontime_Event_Idx local_22 [10];
  CMyFileLog local_18 [8];
  int local_10;
  
  if (this[0x34] == (COnTimeEventManager)0x0) {
    if (*(int *)this == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      Packet_Req_Ontime_Event_Idx::Packet_Req_Ontime_Event_Idx(local_22);
      this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
      CServerHandler::SendToDB(this_00,(PacketHeader *)local_22);
      CMyFileLog::CMyFileLog(local_18,"GetCurIdxByDBMW",0x164);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_18,"./log/OnTimeEvent","Get_ServerHandler()->SendToDB(packet);");
      local_10 = time((time_t *)0x0);
      this_01 = operator_new(0x14);
      COnTimeEventIdxLoad::_ZN19COnTimeEventIdxLoadC2EjjP19COnTimeEventManager
                (this_01,local_10 + 10,0,this);
      this_02 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
      CTaskScheduler::AddTask(this_02,(CTask *)this_01);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 201 行）：

```cpp
int COnTimeEventManager::GetCurIdxByDBMW()
{
    if (m_field34 != 0)
    {
        return 1;
    }
    if (m_app != 0)
    {
        Packet_Req_Ontime_Event_Idx pkt;
        m_app->Get_ServerHandler()->SendToDB(&pkt);
        DNF_LOG_SCOPE_LINE(0x164, "./log/OnTimeEvent", "Get_ServerHandler()->SendToDB(packet);");
        time_t t = time(0);
        register CTaskScheduler::CTask* task = new COnTimeEventIdxLoad(t + 10, 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
        return 1;
    }
    return -1;
}
```
