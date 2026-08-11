# _Z26CSystemTimeHandlerInstancev

`CSystemTimeHandlerInstance()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x806f443` | `0x63` | `0x8065d09` | `0x63` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    $&_ZGVZ26CSystemTimeHandlerInstancevE8instance,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z26CSystemTimeHandlerInstancev+0x5c>
 movl   $&_ZGVZ26CSystemTimeHandlerInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z26CSystemTimeHandlerInstancev+0x5c>
 movl   $&_ZZ26CSystemTimeHandlerInstancevE8instance,(%esp)
 call   <T> <_ZN18CSystemTimeHandlerC1Ev>
 movl   $&_ZGVZ26CSystemTimeHandlerInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN18CSystemTimeHandlerD2Ev,%eax
-movl   $&data#0eb702ca(.rodata),0x8(%esp)
+movl   $&data#193a0d28(.data),0x8(%esp)
 movl   $&_ZZ26CSystemTimeHandlerInstancevE8instance,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 mov    $&_ZZ26CSystemTimeHandlerInstancevE8instance,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CSystemTimeHandlerInstance() */

undefined1 * CSystemTimeHandlerInstance(void)

{
  int iVar1;
  
  if (CSystemTimeHandlerInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&CSystemTimeHandlerInstance()::instance);
    if (iVar1 != 0) {
      CSystemTimeHandler::CSystemTimeHandler
                ((CSystemTimeHandler *)CSystemTimeHandlerInstance()::instance);
      __cxa_guard_release(&CSystemTimeHandlerInstance()::instance);
      __cxa_atexit(CSystemTimeHandler::~CSystemTimeHandler,CSystemTimeHandlerInstance()::instance,
                   &__dso_handle);
    }
  }
  return CSystemTimeHandlerInstance()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/SystemTimeHandler.cpp](source/DNFServer/GameServer/COServer/SystemTimeHandler.cpp)（约第 42 行）：

```cpp
CSystemTimeHandler* CSystemTimeHandlerInstance()
{
    static CSystemTimeHandler instance;
    return &instance;
}
```
