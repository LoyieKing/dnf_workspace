# _ZN9CPowerWarC1Ev

`CPowerWar::CPowerWar()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6c50` | `0xc2` | `0x809c7f4` | `0x118` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,91 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x1c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CEventC1Ev>
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV9CPowerWar+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0x8(%eax)
+add    $0x4,%eax
+mov    %eax,0x4(%esp)
+movl   $0x8,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN9CPowerWarC1Ev+0x5e>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CEventC1Ev>
+jmp    <T> <_ZN9CPowerWarC1Ev+0x5e>
+mov    %edx,%esi
+mov    %eax,%edi
 mov    0x8(%ebp),%eax
-movw   $0xffff,0xc(%eax)
+add    $0x4,%eax
+mov    %eax,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
+add    $0x8,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x14,%eax
+add    $0xc,%eax
+movw   $0xffff,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x10,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+lea    0x14(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x24,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN9CPowerWarC1Ev+0xc9>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSchedulerC1Ev>
+jmp    <T> <_ZN9CPowerWarC1Ev+0xc9>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 movl   $0x18,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CPowerWarConfigC1Ev>
-jmp    <T> <_ZN9CPowerWarC1Ev+0x74>
+jmp    <T> <_ZN9CPowerWarC1Ev+0xfb>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN9CPowerWarC1Ev+0x8f>
-mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-mov    %edx,0x10(%eax)
+lea    0x10(%eax),%edx
+mov    %ebx,%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CPowerWar10resetEventEv>
-add    $0x1c,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CSchedulerD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN9CPowerWarC1Ev+0xa7>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CEventD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::CPowerWar() */

void __thiscall CPowerWar::_ZN9CPowerWarC1Ev(CPowerWar *this)

{
  CPowerWarConfig *this_00;
  
  CEvent::_ZN6CEventC2Ev((CEvent *)this);
  *(undefined ***)this = &PTR__CPowerWar_081372e0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0xc) = 0xffff;
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 080a6c93 to 080a6c97 has its CatchHandler @ 080a6cf7 */
  CScheduler::CScheduler((CScheduler *)(this + 0x14));
                    /* try { // try from 080a6c9f to 080a6ca3 has its CatchHandler @ 080a6cdf */
  this_00 = operator_new(0x18);
                    /* try { // try from 080a6cab to 080a6caf has its CatchHandler @ 080a6cb2 */
  CPowerWarConfig::_ZN15CPowerWarConfigC2Ev(this_00);
  *(CPowerWarConfig **)(this + 0x10) = this_00;
  _ZN9CPowerWar10resetEventEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 111 行）：

```cpp
CPowerWar::CPowerWar()
{
    new (m_data) CEvent();
    *(int*)((char*)this + 8) = -1;
    *(unsigned short*)((char*)this + 0xc) = 0xffff;
    *(int*)((char*)this + 0x10) = 0;
    new ((char*)this + 0x14) CScheduler();
    *(CPowerWarConfig**)((char*)this + 0x10) = new CPowerWarConfig;
    resetEvent();
}
```
