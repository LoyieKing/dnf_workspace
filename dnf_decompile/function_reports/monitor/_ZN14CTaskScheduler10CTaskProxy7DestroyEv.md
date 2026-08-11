# _ZN14CTaskScheduler10CTaskProxy7DestroyEv

`CTaskScheduler::CTaskProxy::Destroy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809c6c2` | `0x30` | `0x80a0358` | `0x27` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CTaskScheduler10CTaskProxy7DestroyEv+0x25>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
+add    $0x4,%eax
 mov    (%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTaskScheduler::CTaskProxy::Destroy() */

void __thiscall
CTaskScheduler::CTaskProxy::_ZN14CTaskScheduler10CTaskProxy7DestroyEv(CTaskProxy *this)

{
  if (*(int *)this != 0) {
    (**(code **)(**(int **)this + 8))(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskScheduler.h](source/DNFServer/GameServer/Monitor/TaskScheduler.h)（约第 276 行）：

```cpp
        void Destroy() { delete m_task; }
```
