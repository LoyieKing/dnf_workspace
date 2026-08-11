# _ZN13CPowerManager13SetWinnerSideEc

`CPowerManager::SetWinnerSide(char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a5adc` | `0x1b` | `0x809bdfa` | `0x1d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x184(%eax)
+lea    0x184(%eax),%edx
+movzbl -0x4(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SetWinnerSide(char) */

void __thiscall CPowerManager::_ZN13CPowerManager13SetWinnerSideEc(CPowerManager *this,char param_1)

{
  this[0x184] = (CPowerManager)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 823 行）：

```cpp
void CPowerManager::SetWinnerSide(char side)
{
    *(char*)((char*)this + 0x184) = side;
}
```
