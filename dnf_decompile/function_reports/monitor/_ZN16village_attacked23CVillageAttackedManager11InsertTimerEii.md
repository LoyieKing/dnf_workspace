# _ZN16village_attacked23CVillageAttackedManager11InsertTimerEii

`village_attacked::CVillageAttackedManager::InsertTimer(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a88c6` | `0x1bd` | `0x80a715c` | `0x239` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,169 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x14,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x2c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x28(%eax)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    &_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x258,%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked30CVillageAttackedCountdownFirstC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x6a>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x2c(%ebp)
+mov    -0x2c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    &_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x12c,%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked31CVillageAttackedCountdownSecondC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0xd8>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x28(%ebp)
+mov    -0x28(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    &_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x3c,%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked30CVillageAttackedCountdownThirdC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x144>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x24(%ebp)
+mov    -0x24(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    0xc(%ebp),%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked21CVillageAttackedStartC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x1ab>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x20(%ebp)
+mov    -0x20(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    0x10(%ebp),%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked19CVillageAttackedEndC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x212>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
-add    $0x14,%esp
+add    $0x3c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::InsertTimer(int, int) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii
          (CVillageAttackedManager *this,int param_1,int param_2)

{
  CVillageAttackedCountdownFirst *this_00;
  CTaskScheduler *pCVar1;
  CVillageAttackedCountdownSecond *this_01;
  CVillageAttackedCountdownThird *this_02;
  CVillageAttackedStart *this_03;
  CVillageAttackedEnd *this_04;
  
  *(int *)(this + 0x2c) = param_1;
  *(int *)(this + 0x28) = param_2;
  this_00 = operator_new(0x14);
  CVillageAttackedCountdownFirst::CVillageAttackedCountdownFirst
            (this_00,param_1 - COUNTDOWN_FIRST_TIME,0,this);
  pCVar1 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(pCVar1,(CTask *)this_00);
  this_01 = operator_new(0x14);
  CVillageAttackedCountdownSecond::CVillageAttackedCountdownSecond
            (this_01,param_1 - COUNTDOWN_SECOND_TIME,0,this);
  pCVar1 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(pCVar1,(CTask *)this_01);
  this_02 = operator_new(0x14);
  CVillageAttackedCountdownThird::CVillageAttackedCountdownThird
            (this_02,param_1 - COUNTDOWN_THIRD_TIME,0,this);
  pCVar1 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(pCVar1,(CTask *)this_02);
  this_03 = operator_new(0x14);
  CVillageAttackedStart::
  _ZN16village_attacked21CVillageAttackedStartC2EjjPNS_23CVillageAttackedManagerE
            (this_03,param_1,0,this);
  pCVar1 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(pCVar1,(CTask *)this_03);
  this_04 = operator_new(0x14);
  CVillageAttackedEnd::_ZN16village_attacked19CVillageAttackedEndC2EjjPNS_23CVillageAttackedManagerE
            (this_04,param_2,0,this);
  pCVar1 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(pCVar1,(CTask *)this_04);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 175 行）：

```cpp
void CVillageAttackedManager::InsertTimer(int startTime, int endTime)
{
    m_field2c = startTime;
    m_field28 = endTime;
    CVillageAttackedCountdownFirst* t1 =
        new CVillageAttackedCountdownFirst(startTime - 600, 0, this);
    m_app->GetTaskScheduler()->AddTask(t1);
    CVillageAttackedCountdownSecond* t2 =
        new CVillageAttackedCountdownSecond(startTime - 300, 0, this);
    m_app->GetTaskScheduler()->AddTask(t2);
    CVillageAttackedCountdownThird* t3 =
        new CVillageAttackedCountdownThird(startTime - 60, 0, this);
    m_app->GetTaskScheduler()->AddTask(t3);
    CVillageAttackedStart* t4 = new CVillageAttackedStart(startTime, 0, this);
    m_app->GetTaskScheduler()->AddTask(t4);
    CVillageAttackedEnd* t5 = new CVillageAttackedEnd(endTime, 0, this);
    m_app->GetTaskScheduler()->AddTask(t5);
}
```
