# _ZN15exchange_server28GetInstanceCacheCharacterMgrEv

`exchange_server::GetInstanceCacheCharacterMgr()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093c93` | `0x93` | `0x805d730` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
-mov    $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,%eax
-movzbl (%eax),%eax
-test   %al,%al
-jne    <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x86>
-movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
-call   <T> <__cxa_guard_acquire>
+mov    &_ZN15exchange_server10g_instanceE,%eax
 test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x86>
-mov    $0x0,%ebx
-movl   $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
+jne    <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x4b>
+movl   $0x28,(%esp)
+call   <T> <_Znwj>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgrC1Ev>
-movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
-call   <T> <__cxa_guard_release>
-mov    $&_ZN15exchange_server18CCacheCharacterMgrD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
-movl   $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <__cxa_atexit>
-jmp    <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x86>
+jmp    <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x44>
 mov    %edx,%esi
 mov    %eax,%edi
-test   %bl,%bl
-jne    <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv+0x7a>
-movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
-call   <T> <__cxa_guard_abort>
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,%eax
+mov    %ebx,%eax
+mov    %eax,&_ZN15exchange_server10g_instanceE
+mov    &_ZN15exchange_server10g_instanceE,%eax
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* exchange_server::GetInstanceCacheCharacterMgr() */

undefined1 * exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv(void)

{
  int iVar1;
  
  if (GetInstanceCacheCharacterMgr()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstanceCacheCharacterMgr()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 08093cc9 to 08093ccd has its CatchHandler @ 08093cf9 */
      CCacheCharacterMgr::CCacheCharacterMgr
                ((CCacheCharacterMgr *)GetInstanceCacheCharacterMgr()::instance);
      __cxa_guard_release(&GetInstanceCacheCharacterMgr()::instance);
      __cxa_atexit(CCacheCharacterMgr::~CCacheCharacterMgr,GetInstanceCacheCharacterMgr()::instance,
                   &__dso_handle);
    }
  }
  return GetInstanceCacheCharacterMgr()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 335 行）：

```cpp
CCacheCharacterMgr* GetInstanceCacheCharacterMgr()
{
    if (g_instance == 0)
    {
        g_instance = new CCacheCharacterMgr;
    }
    return g_instance;
}
```
