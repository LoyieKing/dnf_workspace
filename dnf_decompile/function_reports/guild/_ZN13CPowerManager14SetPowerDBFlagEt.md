# _ZN13CPowerManager14SetPowerDBFlagEt

`CPowerManager::SetPowerDBFlag(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063ea6` | `0x29` | `0x8099454` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzwl 0x18a(%eax),%eax
-mov    %eax,%edx
-or     -0x4(%ebp),%dx
+lea    0x18a(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dx,0x18a(%eax)
+add    $0x18a,%eax
+movzwl (%eax),%eax
+or     -0x4(%ebp),%ax
+mov    %ax,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SetPowerDBFlag(unsigned short) */

void __thiscall
CPowerManager::_ZN13CPowerManager14SetPowerDBFlagEt(CPowerManager *this,ushort param_1)

{
  *(ushort *)(this + 0x18a) = *(ushort *)(this + 0x18a) | param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 94 行）：

```cpp
void CPowerManager::SetPowerDBFlag(unsigned short flag)
{
    *(unsigned short*)((char*)this + 0x18a) |= flag;
}
```
