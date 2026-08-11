# _ZN9CPowerWar14setProlongTimeEv

`CPowerWar::setProlongTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6e38` | `0x1b` | `0x809ca0c` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movb   $0x1,0x4(%eax)
+add    $0x4,%eax
+movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-lea    0xa(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax)
+add    $0x8,%eax
+mov    0x8(%ebp),%edx
+add    $0x8,%edx
+mov    (%edx),%edx
+add    $0xa,%edx
+mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::setProlongTime() */

void __thiscall CPowerWar::_ZN9CPowerWar14setProlongTimeEv(CPowerWar *this)

{
  this[4] = (CPowerWar)0x1;
  *(int *)(this + 8) = *(int *)(this + 8) + 10;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 143 行）：

```cpp
void CPowerWar::setProlongTime()
{
    *(unsigned char*)((char*)this + 4) = 1;
    *(int*)((char*)this + 8) += 10;
}
```
