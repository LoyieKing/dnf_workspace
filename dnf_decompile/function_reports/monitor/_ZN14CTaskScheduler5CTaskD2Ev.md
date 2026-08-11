# _ZN14CTaskScheduler5CTaskD2Ev

`CTaskScheduler::CTask::~CTask()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805c7a0` | `0x25` | `0x80a0078` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $&_ZTVN14CTaskScheduler5CTaskE+0x8,(%eax)
+movl   $"x",(%eax)
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN14CTaskScheduler5CTaskD1Ev+0x23>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0805c7b8) */
/* CTaskScheduler::CTask::~CTask() */

void __thiscall CTaskScheduler::CTask::_ZN14CTaskScheduler5CTaskD2Ev(CTask *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_0811d550;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskScheduler.cpp](source/DNFServer/GameServer/Monitor/TaskScheduler.cpp)（约第 29 行）：

```cpp
CTaskScheduler::CTask::~CTask() {}
```
