# _ZN11CGuildCargo11IsValidSlotEi

`CGuildCargo::IsValidSlot(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f2de` | `0x2b` | `0x809179a` | `0x2f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0x0,0xc(%ebp)
-js     <T> <_ZN11CGuildCargo11IsValidSlotEi+0x1d>
+js     <T> <_ZN11CGuildCargo11IsValidSlotEi+0x25>
 mov    0x8(%ebp),%eax
-mov    0x18d8(%eax),%eax
+add    $0x18d8,%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jle    <T> <_ZN11CGuildCargo11IsValidSlotEi+0x1d>
+jle    <T> <_ZN11CGuildCargo11IsValidSlotEi+0x25>
 cmpl   $0x77,0xc(%ebp)
-jle    <T> <_ZN11CGuildCargo11IsValidSlotEi+0x24>
+jg     <T> <_ZN11CGuildCargo11IsValidSlotEi+0x25>
+mov    $0x1,%eax
+jmp    <T> <_ZN11CGuildCargo11IsValidSlotEi+0x2a>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CGuildCargo11IsValidSlotEi+0x29>
-mov    $0x1,%eax
+movzbl %al,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::IsValidSlot(int) */

undefined4 __thiscall CGuildCargo::_ZN11CGuildCargo11IsValidSlotEi(CGuildCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 0) || (*(int *)(this + 0x18d8) <= param_1)) || (0x77 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 140 行）：

```cpp
int CGuildCargo::IsValidSlot(int slot)
{
    return !(slot < 0 || *(int*)((char*)this + 0x18d8) <= slot || 0x77 < slot);
}
```
