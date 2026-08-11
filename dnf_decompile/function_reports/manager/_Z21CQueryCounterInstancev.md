# _Z21CQueryCounterInstancev

`CQueryCounterInstance()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x8062268` | `0x93` | `0x8065c2c` | `0x93` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
 mov    $&_ZGVZ21CQueryCounterInstancevE8instance,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z21CQueryCounterInstancev+0x86>
 movl   $&_ZGVZ21CQueryCounterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z21CQueryCounterInstancev+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZ21CQueryCounterInstancevE8instance,(%esp)
 call   <T> <_ZN13CQueryCounterC1Ev>
 movl   $&_ZGVZ21CQueryCounterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN13CQueryCounterD2Ev,%eax
-movl   $&data#0eb702ca(.rodata),0x8(%esp)
+movl   $&data#193a0d28(.data),0x8(%esp)
 movl   $&_ZZ21CQueryCounterInstancevE8instance,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_Z21CQueryCounterInstancev+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_Z21CQueryCounterInstancev+0x7a>
 movl   $&_ZGVZ21CQueryCounterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $&_ZZ21CQueryCounterInstancevE8instance,%eax
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CQueryCounterInstance() */

undefined1 * CQueryCounterInstance(void)

{
  int iVar1;
  
  if (CQueryCounterInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&CQueryCounterInstance()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0806229e to 080622a2 has its CatchHandler @ 080622ce */
      CQueryCounter::CQueryCounter((CQueryCounter *)CQueryCounterInstance()::instance);
      __cxa_guard_release(&CQueryCounterInstance()::instance);
      __cxa_atexit(CQueryCounter::~CQueryCounter,CQueryCounterInstance()::instance,&__dso_handle);
    }
  }
  return CQueryCounterInstance()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 127 行）：

```cpp
CQueryCounter* CQueryCounterInstance()
{
    static CQueryCounter instance;
    return &instance;
}
```
