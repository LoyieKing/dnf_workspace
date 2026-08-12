# _ZN9CPowerWarD1Ev

`CPowerWar::~CPowerWar()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a6d12` | `0xbe` | `0x809cace` | `0xbe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV9CPowerWar+0x8,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN9CPowerWarD1Ev+0x47>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN9CPowerWarD1Ev+0x3d>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x10(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 movl   $"Power War Config Free Success!",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN9CPowerWarD1Ev+0x6d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN9CPowerWarD1Ev+0x7d>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerD1Ev>
 jmp    <T> <_ZN9CPowerWarD1Ev+0x98>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CEventD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CEventD1Ev>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN9CPowerWarD1Ev+0xb7>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080a6dbe) */
/* CPowerWar::~CPowerWar() */

void __thiscall CPowerWar::_ZN9CPowerWarD1Ev(CPowerWar *this)

{
  *(undefined ***)this = &PTR__ZN9CPowerWarD1Ev_081372e0;
  if (*(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x10) != 0) {
                    /* try { // try from 080a6d4d to 080a6d64 has its CatchHandler @ 080a6d67 */
      (**(code **)(**(int **)(this + 0x10) + 4))(*(undefined4 *)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  puts("Power War Config Free Success!");
                    /* try { // try from 080a6d88 to 080a6d8c has its CatchHandler @ 080a6d8f */
  CScheduler::~CScheduler((CScheduler *)(this + 0x14));
  CEvent::_ZN6CEventD2Ev((CEvent *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 107 行）：

```cpp
CPowerWar::~CPowerWar()
{
    if (m_config != 0)
    {
        delete m_config;
        m_config = 0;
    }
    puts("Power War Config Free Success!");
}
```
