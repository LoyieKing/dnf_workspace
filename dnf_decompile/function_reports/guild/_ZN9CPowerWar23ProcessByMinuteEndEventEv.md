# _ZN9CPowerWar23ProcessByMinuteEndEventEv

`CPowerWar::ProcessByMinuteEndEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6f04` | `0x4b` | `0x809d2c2` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x1c>
+je     <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x1d>
 mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
-xor    $0x1,%eax
+add    $0x4,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x23>
+jne    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x24>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x49>
+jmp    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x52>
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-lea    -0x1(%eax),%edx
+add    $0x8,%eax
+mov    0x8(%ebp),%edx
+add    $0x8,%edx
+mov    (%edx),%edx
+sub    $0x1,%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax)
+add    $0x8,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x4d>
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-jg     <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x43>
+add    $0x8,%eax
+mov    (%eax),%eax
+jmp    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x52>
 mov    $0x0,%eax
-jmp    <T> <_ZN9CPowerWar23ProcessByMinuteEndEventEv+0x49>
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::ProcessByMinuteEndEvent() */

undefined4 __thiscall CPowerWar::_ZN9CPowerWar23ProcessByMinuteEndEventEv(CPowerWar *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 8) == -1) || (this[4] != (CPowerWar)0x1)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    if (*(int *)(this + 8) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(this + 8);
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 168 行）：

```cpp
int CPowerWar::ProcessByMinuteEndEvent()
{
    if (*(int*)((char*)this + 8) == -1 || *(char*)((char*)this + 4) == 0)
    {
        return -1;
    }
    *(int*)((char*)this + 8) -= 1;
    if (*(int*)((char*)this + 8) > 0)
    {
        return *(int*)((char*)this + 8);
    }
    return 0;
}
```
