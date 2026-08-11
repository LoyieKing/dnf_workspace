# _ZN12momiji_event15StartEffectTask10_DoExecuteEv

`momiji_event::StartEffectTask::_DoExecute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c482` | `0x12f` | `0x804acfe` | `0x138` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,87 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12momiji_event15StartEffectTask10_DoExecuteEv+0x112>
+je     <T> <_ZN12momiji_event15StartEffectTask10_DoExecuteEv+0x115>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager15GetDurationTimeEv>
-lea    (%ebx,%eax,1),%eax
-mov    %eax,-0x2c(%ebp)
+mov    -0x28(%ebp),%edx
+add    %edx,%eax
+mov    %eax,-0x38(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,%edx
+mov    -0x38(%ebp),%edx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event13EndEffectTaskC1Ejj>
-jmp    <T> <_ZN12momiji_event15StartEffectTask10_DoExecuteEv+0x7c>
+jmp    <T> <_ZN12momiji_event15StartEffectTask10_DoExecuteEv+0x83>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,-0x20(%ebp)
 mov    -0x20(%ebp),%ebx
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%edi
 mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%ebx
 movl   $0xb0,0x8(%esp)
 movl   $&_ZZN12momiji_event15StartEffectTask10_DoExecuteEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[Momiji] start event. next endEffect %02dh:%02dm:%02ds",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x2c(%ebp),%eax
-mov    %eax,%ebx
-call   <T> <_ZN12momiji_event12EventManager3GetEv>
-mov    %ebx,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager15sendApplyEffectEj>
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    %eax,-0x2c(%ebp)
 movl   $0x0,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager18SetStartEffectTaskEPNS_15StartEffectTaskE>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::StartEffectTask::_DoExecute() */

void __thiscall
momiji_event::StartEffectTask::_ZN12momiji_event15StartEffectTask10_DoExecuteEv
          (StartEffectTask *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  time_t tVar4;
  EventManager *pEVar5;
  int iVar6;
  EndEffectTask *this_00;
  CApplication *this_01;
  CTaskScheduler *this_02;
  uint local_30;
  CMyFileLog local_2c [8];
  EndEffectTask *local_24;
  tm *local_20;
  
  if (this[0x10] != (StartEffectTask)0x0) {
    tVar4 = time((time_t *)0x0);
    pEVar5 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
    iVar6 = EventManager::GetDurationTime(pEVar5);
    local_30 = tVar4 + iVar6;
    this_00 = operator_new(0x14);
                    /* try { // try from 0805c4df to 0805c4e3 has its CatchHandler @ 0805c4e6 */
    EndEffectTask::_ZN12momiji_event13EndEffectTaskC2Ejj(this_00,local_30,0);
    local_24 = this_00;
    this_01 = (CApplication *)CApplicationInstance();
    this_02 = (CTaskScheduler *)CApplication::GetTaskScheduler(this_01);
    CTaskScheduler::AddTask(this_02,(CTask *)this_00);
    local_20 = localtime((time_t *)&local_30);
    iVar6 = local_20->tm_sec;
    iVar1 = local_20->tm_min;
    iVar2 = local_20->tm_hour;
    CMyFileLog::CMyFileLog(local_2c,"_DoExecute",0xb0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/AradOnly","[Momiji] start event. next endEffect %02dh:%02dm:%02ds",
               iVar2,iVar1,iVar6);
    uVar3 = local_30;
    pEVar5 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
    EventManager::_ZN12momiji_event12EventManager15sendApplyEffectEj(pEVar5,uVar3);
  }
  pEVar5 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
  EventManager::SetStartEffectTask(pEVar5,(StartEffectTask *)0x0);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 44 行）：

```cpp
void StartEffectTask::_DoExecute()
{
    if (m_flag != 0)
    {
        time_t now = time(0);
        EventManager* em = EventManager::Get();
        unsigned int end = (unsigned int)now + em->GetDurationTime();
        EndEffectTask* task = new EndEffectTask(end, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        tm* t = localtime((time_t*)&end);
        DNF_LOG_SCOPE_AT(__FUNCTION__, 0xb0,"./log/AradOnly", "[Momiji] start event. next endEffect %02dh:%02dm:%02ds",
            t->tm_hour, t->tm_min, t->tm_sec);
        em->sendApplyEffect(end);
    }
    EventManager* em = EventManager::Get();
    em->SetStartEffectTask(0);
}
```
