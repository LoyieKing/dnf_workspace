# _ZN6CGuild16EnableDBSaveFlagEv

`CGuild::EnableDBSaveFlag()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808b00c` | `0xf` | `0x8052c20` | `0x18` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movb   $0x1,0x4d96(%eax)
+movzwl 0x1c(%eax),%eax
+mov    %eax,%edx
+or     $0x1,%edx
+mov    0x8(%ebp),%eax
+mov    %dx,0x1c(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::EnableDBSaveFlag() */

void __thiscall CGuild::_ZN6CGuild16EnableDBSaveFlagEv(CGuild *this)

{
  this[0x4d96] = (CGuild)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 333 行）：

```cpp
void CGuild::EnableDBSaveFlag()
{
    m_field1c |= 1;
}
```
