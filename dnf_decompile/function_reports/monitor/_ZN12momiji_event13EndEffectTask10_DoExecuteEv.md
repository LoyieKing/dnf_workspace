# _ZN12momiji_event13EndEffectTask10_DoExecuteEv

`momiji_event::EndEffectTask::_DoExecute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c5f8` | `0x121` | `0x804aec4` | `0x141` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x10(%eax),%eax
+add    $0x10,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x104>
+je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x124>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,%esi
+mov    %eax,-0x28(%ebp)
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager15GetIntervalTimeEv>
 mov    %eax,%ebx
-call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager15GetDurationTimeEv>
 mov    %ebx,%edx
 sub    %eax,%edx
-mov    %edx,%eax
-lea    (%esi,%eax,1),%eax
+mov    -0x28(%ebp),%eax
+lea    (%edx,%eax,1),%eax
 mov    %eax,-0x2c(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,%edx
+mov    -0x2c(%ebp),%edx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event15StartEffectTaskC1Ejj>
+jmp    <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x97>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,-0x20(%ebp)
 mov    -0x20(%ebp),%ebx
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%edi
-mov    -0x1c(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0x1c(%ebp),%eax
-mov    0x8(%eax),%ebx
 movl   $0xc8,0x8(%esp)
 movl   $"_DoExecute",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+mov    0x4(%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"[Momiji] start event. next startEffect %02dh:%02dm:%02ds",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager16sendDeleteEffectEv>
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager16SetEndEffectTaskEPNS_13EndEffectTaskE>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EndEffectTask::_DoExecute() */

void __thiscall
momiji_event::EndEffectTask::_ZN12momiji_event13EndEffectTask10_DoExecuteEv(EndEffectTask *this)

{
  int iVar1;
  time_t tVar2;
  EventManager *pEVar3;
  int iVar4;
  int iVar5;
  StartEffectTask *this_00;
  CApplication *this_01;
  CTaskScheduler *this_02;
  uint local_30;
  CMyFileLog local_2c [8];
  StartEffectTask *local_24;
  tm *local_20;
  
  if (this[0x10] != (EndEffectTask)0x0) {
    tVar2 = time((time_t *)0x0);
    pEVar3 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
    iVar4 = EventManager::GetIntervalTime(pEVar3);
    pEVar3 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
    iVar5 = EventManager::GetDurationTime(pEVar3);
    local_30 = tVar2 + (iVar4 - iVar5);
    this_00 = operator_new(0x14);
    StartEffectTask::StartEffectTask(this_00,local_30,0);
    local_24 = this_00;
    this_01 = (CApplication *)CApplicationInstance();
    this_02 = (CTaskScheduler *)CApplication::GetTaskScheduler(this_01);
    CTaskScheduler::AddTask(this_02,(CTask *)this_00);
    local_20 = localtime((time_t *)&local_30);
    iVar4 = local_20->tm_sec;
    iVar5 = local_20->tm_min;
    iVar1 = local_20->tm_hour;
    CMyFileLog::CMyFileLog(local_2c,"_DoExecute",200);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/AradOnly","[Momiji] start event. next startEffect %02dh:%02dm:%02ds",
               iVar1,iVar5,iVar4);
    EventManager::_ZN12momiji_event12EventManager3GetEv();
    EventManager::_ZN12momiji_event12EventManager16sendDeleteEffectEv();
  }
  pEVar3 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
  EventManager::SetEndEffectTask(pEVar3,(EndEffectTask *)0x0);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 69 行）：

```cpp
void EndEffectTask::_DoExecute()
{
    if (*(char*)((char*)this + 0x10) != 0)
    {
        time_t now = time(0);
        EventManager* em = EventManager::Get();
        unsigned int next = (unsigned int)now +
                            (em->GetIntervalTime() - em->GetDurationTime());
        StartEffectTask* task = new StartEffectTask(next, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        tm* t = localtime((time_t*)&next);
        DNF_LOG_SCOPE_AT("_DoExecute", 200,"./log/AradOnly", "[Momiji] start event. next startEffect %02dh:%02dm:%02ds",
            t->tm_hour, t->tm_min, t->tm_sec);
        EventManager::Get()->sendDeleteEffect();
    }
    EventManager::Get()->SetEndEffectTask(0);
}
```
