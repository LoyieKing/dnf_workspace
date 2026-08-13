# _ZN19COnTimeEventManager10StartEventEjj

`COnTimeEventManager::StartEvent(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4708` | `0xa4` | `0x809a2da` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,62 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x2c,%esp
 mov    0x10(%ebp),%eax
 cmp    0xc(%ebp),%eax
-jae    <T> <_ZN19COnTimeEventManager10StartEventEjj+0x9d>
+jae    <T> <_ZN19COnTimeEventManager10StartEventEjj+0xb9>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x28(%eax)
-mov    -0xc(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%edx
 mov    %ebx,%eax
-mov    0x8(%ebp),%ecx
-mov    %ecx,0xc(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN30COnTimeEventRewardStartTriggerC1EjjP19COnTimeEventManager>
+jmp    <T> <_ZN19COnTimeEventManager10StartEventEjj+0x9a>
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
-jmp    <T> <_ZN19COnTimeEventManager10StartEventEjj+0x9e>
+jmp    <T> <_ZN19COnTimeEventManager10StartEventEjj+0xba>
 nop
-add    $0x24,%esp
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::StartEvent(unsigned int, unsigned int) */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager10StartEventEjj
          (COnTimeEventManager *this,uint param_1,uint param_2)

{
  uint uVar1;
  COnTimeEventRewardStartTrigger *this_00;
  CTaskScheduler *this_01;
  
  if (param_2 < param_1) {
    uVar1 = time((time_t *)0x0);
    *(uint *)(this + 0x24) = param_1;
    *(uint *)(this + 0x28) = param_2;
    *(uint *)(this + 0x1c) = uVar1;
    ChangeState(this,1);
    this_00 = operator_new(0x14);
    COnTimeEventRewardStartTrigger::COnTimeEventRewardStartTrigger(this_00,uVar1,0,this);
    this_01 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
    CTaskScheduler::AddTask(this_01,(CTask *)this_00);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 148 行）：

```cpp
void COnTimeEventManager::StartEvent(unsigned int a, unsigned int b)
{
    if (b >= a)
    {
        return;
    }
    unsigned int t = (unsigned int)time(0);
    m_field24 = (int)a;
    m_field28 = (int)b;
    m_field1c = (int)t;
    ChangeState(ONTIME_EVENT_STATE_START);
    register CTaskScheduler::CTask* task =
        new COnTimeEventRewardStartTrigger(t, 0, this);
    m_app->GetTaskScheduler()->AddTask(task);
}
```
