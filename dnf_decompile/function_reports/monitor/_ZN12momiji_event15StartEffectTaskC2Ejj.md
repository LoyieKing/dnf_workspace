# _ZN12momiji_event15StartEffectTaskC2Ejj

`momiji_event::StartEffectTask::StartEffectTask(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c43c` | `0x45` | `0x804ac6a` | `0x3e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler5CTaskC1Ejj>
 mov    0x8(%ebp),%eax
 movl   $&_ZTVN12momiji_event15StartEffectTaskE+0x8,(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x10(%eax)
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager18SetStartEffectTaskEPNS_15StartEffectTaskE>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::StartEffectTask::StartEffectTask(unsigned int, unsigned int) */

void __thiscall
momiji_event::StartEffectTask::_ZN12momiji_event15StartEffectTaskC2Ejj
          (StartEffectTask *this,uint param_1,uint param_2)

{
  EventManager *this_00;
  
  CTaskScheduler::CTask::CTask((CTask *)this,param_1,param_2);
  *(undefined ***)this = &PTR__ZN12momiji_event15StartEffectTask10_DoExecuteEv_0811d520;
  this[0x10] = (StartEffectTask)0x1;
  this_00 = (EventManager *)EventManager::_ZN12momiji_event12EventManager3GetEv();
  EventManager::SetStartEffectTask(this_00,this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 34 行）：

```cpp
StartEffectTask::StartEffectTask(unsigned int time, unsigned int flag)
    : CTaskScheduler::CTask(time, flag)
{
    EventManager::Get()->SetStartEffectTask(this);
}
```
