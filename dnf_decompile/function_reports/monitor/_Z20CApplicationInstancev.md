# _Z20CApplicationInstancev

`CApplicationInstance()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80627c4` | `0x93` | `0x8053d34` | `0x93` |

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
 mov    $&_ZGVZ20CApplicationInstancevE8instance,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z20CApplicationInstancev+0x86>
 movl   $&_ZGVZ20CApplicationInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z20CApplicationInstancev+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZ20CApplicationInstancevE8instance,(%esp)
 call   <T> <_ZN12CApplicationC1Ev>
 movl   $&_ZGVZ20CApplicationInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN12CApplicationD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#0c4fb883(.data),0x8(%esp)
 movl   $&_ZZ20CApplicationInstancevE8instance,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_Z20CApplicationInstancev+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_Z20CApplicationInstancev+0x7a>
 movl   $&_ZGVZ20CApplicationInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $&_ZZ20CApplicationInstancevE8instance,%eax
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
/* CApplicationInstance() */

undefined1 * CApplicationInstance(void)

{
  int iVar1;
  
  if (CApplicationInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&CApplicationInstance()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 080627fa to 080627fe has its CatchHandler @ 0806282a */
      CApplication::CApplication((CApplication *)CApplicationInstance()::instance);
      __cxa_guard_release(&CApplicationInstance()::instance);
      __cxa_atexit(CApplication::~CApplication,CApplicationInstance()::instance,&__dso_handle);
    }
  }
  return CApplicationInstance()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 49 行）：

```cpp
CApplication* CApplicationInstance()
{
    static CApplication instance;
    return &instance;
}
```
