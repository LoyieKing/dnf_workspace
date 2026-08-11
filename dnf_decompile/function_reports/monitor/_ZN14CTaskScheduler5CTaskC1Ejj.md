# _ZN14CTaskScheduler5CTaskC1Ejj

`CTaskScheduler::CTask::CTask(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805c776` | `0x2a` | `0x80a00bc` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movl   $&_ZTVN14CTaskScheduler5CTaskE+0x8,(%eax)
+movl   $"x",(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTaskScheduler::CTask::CTask(unsigned int, unsigned int) */

void __thiscall
CTaskScheduler::CTask::_ZN14CTaskScheduler5CTaskC1Ejj(CTask *this,uint param_1,uint param_2)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_0811d550;
  *(uint *)(this + 4) = param_1;
  *(uint *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskScheduler.cpp](source/DNFServer/GameServer/Monitor/TaskScheduler.cpp)（约第 31 行）：

```cpp
CTaskScheduler::CTask::CTask(unsigned int tick, unsigned int flag)
{
    m_tick = tick;
    m_flag = flag;
    m_taskID = 0;
}
```
