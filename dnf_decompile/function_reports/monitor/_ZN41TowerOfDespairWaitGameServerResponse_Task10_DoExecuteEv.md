# _ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv

`TowerOfDespairWaitGameServerResponse_Task::_DoExecute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805cb64` | `0xac` | `0x80a6fa8` | `0xaa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 movl   $0x46,0x8(%esp)
 movl   $&_ZZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEvE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TOD : Waiting main GameServer Response...",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 call   <T> <_ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa6>
+je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa4>
 call   <T> <_ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0xc(%ebp)
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
-add    $0x3c,%eax
-mov    %eax,%edx
+lea    0x3c(%eax),%edx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN41TowerOfDespairWaitGameServerResponse_TaskC1Ejj>
 mov    %ebx,%eax
 mov    %eax,%ebx
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TowerOfDespairWaitGameServerResponse_Task::_DoExecute() */

void TowerOfDespairWaitGameServerResponse_Task::
     _ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv(void)

{
  char cVar1;
  TowerOfDespairWaitGameServerResponse_Task *this;
  CApplication *this_00;
  CTaskScheduler *this_01;
  CMyFileLog local_18 [8];
  int local_10;
  
  CMyFileLog::CMyFileLog(local_18,"_DoExecute",0x46);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_18,"./log/GameServer","TOD : Waiting main GameServer Response...");
  cVar1 = TowerOfDespairReloadAPC_Task::_ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv();
  if (cVar1 != '\x01') {
    TowerOfDespairReloadAPC_Task::
    _ZN28TowerOfDespairReloadAPC_Task33SendRequest_DoRandomSelectUserAPCEv();
    local_10 = time((time_t *)0x0);
    this = operator_new(0x10);
    TowerOfDespairWaitGameServerResponse_Task(this,local_10 + 0x3c,0);
    this_00 = (CApplication *)CApplicationInstance();
    this_01 = (CTaskScheduler *)CApplication::GetTaskScheduler(this_00);
    CTaskScheduler::AddTask(this_01,(CTask *)this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp](source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp)（约第 69 行）：

```cpp
void TowerOfDespairWaitGameServerResponse_Task::_DoExecute()
{
    DNF_LOG_SCOPE_LINE(0x46, "./log/GameServer", "TOD : Waiting main GameServer Response...");
    if (TowerOfDespairReloadAPC_Task::isReturnedMessage() != 1)
    {
        TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC();
        unsigned int t = (unsigned int)time(0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(
            new TowerOfDespairWaitGameServerResponse_Task(t + 0x3c, 0));
    }
}
```
