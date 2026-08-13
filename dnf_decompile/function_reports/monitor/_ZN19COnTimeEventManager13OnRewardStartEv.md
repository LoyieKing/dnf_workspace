# _ZN19COnTimeEventManager13OnRewardStartEv

`COnTimeEventManager::OnRewardStart()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4834` | `0x181` | `0x809a610` | `0x197` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x34,%esp
+sub    $0x2c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%ebx
 movl   $0x82,0x8(%esp)
 movl   $&_ZZN19COnTimeEventManager13OnRewardStartEvE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"On Time Event : On Reward Start Trigger On(%d)",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE>
 test   %al,%al
-je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x82>
+je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x84>
 movl   $"On Time Event : Event Off Trigger",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager5ClearEv>
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE>
 test   %al,%al
-jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17a>
+jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager14UpdateEventIdxEv>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+mov    %eax,%esi
 mov    0x8(%ebp),%eax
-mov    %edx,0x20(%eax)
+mov    %esi,0x20(%eax)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 sub    %eax,%edx
-mov    -0xc(%ebp),%eax
+mov    %esi,%eax
 lea    (%edx,%eax,1),%ecx
 mov    %ebx,%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN28COnTimeEventRewardEndTriggerC1EjjP19COnTimeEventManager>
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x12b>
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
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager12GetEvent_IdxEv>
 mov    %eax,%ebx
 movl   $0xa7,0x8(%esp)
 movl   $&_ZZN19COnTimeEventManager13OnRewardStartEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"On Time Event : On Reward Start Trigger Process Success curidx(%d)",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
-nop
-add    $0x34,%esp
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::OnRewardStart() */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager13OnRewardStartEv(COnTimeEventManager *this)

{
  char cVar1;
  time_t tVar2;
  COnTimeEventRewardEndTrigger *this_00;
  CTaskScheduler *this_01;
  undefined4 uVar3;
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  int local_10;
  
  tVar2 = time((time_t *)0x0);
  CMyFileLog::CMyFileLog(local_20,"OnRewardStart",0x82);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_20,"./log/OnTimeEvent","On Time Event : On Reward Start Trigger On(%d)",tVar2);
  cVar1 = _ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE(this,2);
  if (cVar1 == '\0') {
    cVar1 = _ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE(this,0);
    if (cVar1 == '\0') {
      _ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE(this,0);
      UpdateEventIdx(this);
      local_10 = time((time_t *)0x0);
      *(int *)(this + 0x20) = local_10;
      this_00 = operator_new(0x14);
      COnTimeEventRewardEndTrigger::COnTimeEventRewardEndTrigger
                (this_00,*(int *)(this + 0x28) * 0x3c + local_10,0,this);
      this_01 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
      CTaskScheduler::AddTask(this_01,(CTask *)this_00);
      uVar3 = GetEvent_Idx(this);
      CMyFileLog::CMyFileLog(local_18,"OnRewardStart",0xa7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_18,"./log/OnTimeEvent",
                 "On Time Event : On Reward Start Trigger Process Success curidx(%d)",uVar3);
    }
  }
  else {
    puts("On Time Event : Event Off Trigger");
    Clear(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 227 行）：

```cpp
void COnTimeEventManager::OnRewardStart()
{
    register time_t t0 = time(0);
    CMyFileLog log(__FUNCTION__, 0x82);
    log("./log/OnTimeEvent", "On Time Event : On Reward Start Trigger On(%d)", t0);
    if (IsCurState(ONTIME_EVENT_STATE_REWARD))
    {
        puts("On Time Event : Event Off Trigger");
        Clear();
    }
    else
    {
        if (IsCurState(ONTIME_EVENT_STATE_NONE))
        {
        }
        else
        {
            ChangeState(ONTIME_EVENT_STATE_NONE);
            UpdateEventIdx();
            register int t = (int)time(0);
            m_field20 = t;
            register CTaskScheduler::CTask* task =
                new COnTimeEventRewardEndTrigger((unsigned int)(m_field28 * 0x3c + t), 0, this);
            m_app->GetTaskScheduler()->AddTask(task);
            register int idx = GetEvent_Idx();
            CMyFileLog log2(__FUNCTION__, 0xa7);
            log2("./log/OnTimeEvent",
                 "On Time Event : On Reward Start Trigger Process Success curidx(%d)", idx);
        }
    }
}
```
