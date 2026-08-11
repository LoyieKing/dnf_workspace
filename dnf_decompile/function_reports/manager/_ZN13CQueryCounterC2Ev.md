# _ZN13CQueryCounterC2Ev

`CQueryCounter::CQueryCounter()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80622fc` | `0x4a` | `0x806570a` | `0x48` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1e,0xf0c(%eax)
 movl   $0xc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CUnixTimerC1Ev>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xf10(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15ResetQueryCountEv>
 add    $0x14,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::CQueryCounter() */

void __thiscall CQueryCounter::_ZN13CQueryCounterC2Ev(CQueryCounter *this)

{
  CUnixTimer *this_00;
  
  *(undefined4 *)(this + 0xf0c) = 0x1e;
  this_00 = operator_new(0xc);
  CUnixTimer::_ZN10CUnixTimerC2Ev(this_00);
  *(CUnixTimer **)(this + 0xf10) = this_00;
  ResetQueryCount(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/QueryCounter.cpp](source/DNFServer/GameServer/Manager/QueryCounter.cpp)（约第 11 行）：

```cpp
CQueryCounter::CQueryCounter()
{
    m_interval = 0x1e;
    m_timer = new CUnixTimer;
    ResetQueryCount();
}
```
