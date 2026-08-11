# _ZN9CPowerWar10resetEventEv

`CPowerWar::resetEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6e54` | `0x1f` | `0x809ca2e` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
+add    $0x4,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0x8(%eax)
+add    $0x8,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0xffff,0xc(%eax)
+add    $0xc,%eax
+movw   $0xffff,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::resetEvent() */

void __thiscall CPowerWar::_ZN9CPowerWar10resetEventEv(CPowerWar *this)

{
  this[4] = (CPowerWar)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0xc) = 0xffff;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 149 行）：

```cpp
void CPowerWar::resetEvent()
{
    *(unsigned char*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = -1;
    *(unsigned short*)((char*)this + 0xc) = 0xffff;
}
```
