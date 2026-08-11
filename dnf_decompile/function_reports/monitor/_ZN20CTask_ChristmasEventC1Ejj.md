# _ZN20CTask_ChristmasEventC1Ejj

`CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066582` | `0x2a` | `0x809ff4a` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN14CTaskScheduler5CTaskC1Ejj>
+call   <T> <_ZN14CTaskScheduler5CTaskC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV20CTask_ChristmasEvent+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int, unsigned int) */

void __thiscall
CTask_ChristmasEvent::_ZN20CTask_ChristmasEventC1Ejj
          (CTask_ChristmasEvent *this,uint param_1,uint param_2)

{
  CTaskScheduler::CTask::_ZN14CTaskScheduler5CTaskC2Ejj((CTask *)this,param_1,param_2);
  *(undefined ***)this = &PTR__ZN20CTask_ChristmasEvent10_DoExecuteEv_08133f50;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskImpl.cpp](source/DNFServer/GameServer/Monitor/TaskImpl.cpp)（约第 145 行）：

```cpp
CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int tick, unsigned int flag) {}
```
