# _Z22CFileLogWriterInstancev

`CFileLogWriterInstance()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805cd64` | `0x93` | `0x8059610` | `0x93` |

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
 mov    $&_ZGVZ22CFileLogWriterInstancevE8instance,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z22CFileLogWriterInstancev+0x86>
 movl   $&_ZGVZ22CFileLogWriterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z22CFileLogWriterInstancev+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZ22CFileLogWriterInstancevE8instance,(%esp)
 call   <T> <_ZN14CFileLogWriterC1Ev>
 movl   $&_ZGVZ22CFileLogWriterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN14CFileLogWriterD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#0c4fb883(.data),0x8(%esp)
 movl   $&_ZZ22CFileLogWriterInstancevE8instance,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_Z22CFileLogWriterInstancev+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_Z22CFileLogWriterInstancev+0x7a>
 movl   $&_ZGVZ22CFileLogWriterInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $&_ZZ22CFileLogWriterInstancevE8instance,%eax
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
/* CFileLogWriterInstance() */

undefined1 * CFileLogWriterInstance(void)

{
  int iVar1;
  
  if (CFileLogWriterInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&CFileLogWriterInstance()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0805cd9a to 0805cd9e has its CatchHandler @ 0805cdca */
      CFileLogWriter::CFileLogWriter((CFileLogWriter *)CFileLogWriterInstance()::instance);
      __cxa_guard_release(&CFileLogWriterInstance()::instance);
      __cxa_atexit(CFileLogWriter::~CFileLogWriter,CFileLogWriterInstance()::instance,&__dso_handle)
      ;
    }
  }
  return CFileLogWriterInstance()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFileLog.cpp](source/DNFServer/ServerCommon/DNFFileLog.cpp)（约第 11 行）：

```cpp
CFileLogWriter* CFileLogWriterInstance() {
    static CFileLogWriter instance;
    return &instance;
}
```
