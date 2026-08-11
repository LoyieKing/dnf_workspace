# _Z17getStatisticProxyv

`getStatisticProxy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x804d861` | `0x93` | `0x80697e6` | `0x93` |

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
 mov    $&_ZGVZ17getStatisticProxyvE14statisticProxy,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z17getStatisticProxyv+0x86>
 movl   $&_ZGVZ17getStatisticProxyvE14statisticProxy,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z17getStatisticProxyv+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZ17getStatisticProxyvE14statisticProxy,(%esp)
 call   <T> <_ZN14statistc_proxy14StatisticProxyC1Ev>
 movl   $&_ZGVZ17getStatisticProxyvE14statisticProxy,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN14statistc_proxy14StatisticProxyD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#509bacd4(.data),0x8(%esp)
 movl   $&_ZZ17getStatisticProxyvE14statisticProxy,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_Z17getStatisticProxyv+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_Z17getStatisticProxyv+0x7a>
 movl   $&_ZGVZ17getStatisticProxyvE14statisticProxy,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $&_ZZ17getStatisticProxyvE14statisticProxy,%eax
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
/* getStatisticProxy() */

undefined1 * getStatisticProxy(void)

{
  int iVar1;
  
  if (getStatisticProxy()::statisticProxy == '\0') {
    iVar1 = __cxa_guard_acquire(&getStatisticProxy()::statisticProxy);
    if (iVar1 != 0) {
                    /* try { // try from 0804d897 to 0804d89b has its CatchHandler @ 0804d8c7 */
      statistc_proxy::StatisticProxy::StatisticProxy
                ((StatisticProxy *)getStatisticProxy()::statisticProxy);
      __cxa_guard_release(&getStatisticProxy()::statisticProxy);
      __cxa_atexit(statistc_proxy::StatisticProxy::~StatisticProxy,
                   getStatisticProxy()::statisticProxy,&__dso_handle);
    }
  }
  return getStatisticProxy()::statisticProxy;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/StatisticProxy.cpp](source/DNFServer/GameServer/Statics/StatisticProxy.cpp)（约第 8 行）：

```cpp
statistc_proxy::StatisticProxy* getStatisticProxy()
{
    static statistc_proxy::StatisticProxy statisticProxy;
    return &statisticProxy;
}
```
