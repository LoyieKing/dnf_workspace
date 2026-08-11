# _ZN16ReservedCapacity5resetEv

`ReservedCapacity::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80896c8` | `0x1f` | `0x805282a` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x8(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* ReservedCapacity::reset() */

void __thiscall ReservedCapacity::_ZN16ReservedCapacity5resetEv(ReservedCapacity *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (ReservedCapacity)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 160 行）：

```cpp
void ReservedCapacity::reset()
{
    *(unsigned int*)(m_data + 0) = 0;
    *(unsigned int*)(m_data + 4) = 0;
    m_data[8] = 0;
}
```
