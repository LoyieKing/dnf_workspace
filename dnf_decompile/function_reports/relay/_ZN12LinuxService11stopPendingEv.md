# _ZN12LinuxService11stopPendingEv

`LinuxService::stopPending()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804d37e` | `0x1a` | `0x804ee96` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x8,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x3c,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::stopPending() */

void __thiscall LinuxService::_ZN12LinuxService11stopPendingEv(LinuxService *this)

{
  (**(code **)(*(int *)this + 0x3c))(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 181 行）：

```cpp
void LinuxService::stopPending()
{
    stop();
}
```
