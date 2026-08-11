# _ZN5CUser15ResetGuildPointEv

`CUser::ResetGuildPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066b00` | `0xf` | `0x8089150` | `0x11` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x60(%eax)
+add    $0x60,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetGuildPoint() */

void __thiscall CUser::_ZN5CUser15ResetGuildPointEv(CUser *this)

{
  *(undefined4 *)(this + 0x60) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 205 行）：

```cpp
void CUser::ResetGuildPoint()
{
    *(unsigned int*)((char*)this + 0x60) = 0;
}
```
