# _ZN12momiji_event12EventManager3GetEv

`momiji_event::EventManager::Get()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805c906` | `0x63` | `0x804b012` | `0x63` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    $&_ZGVZN12momiji_event12EventManager3GetEvE3obj,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN12momiji_event12EventManager3GetEv+0x5c>
 movl   $&_ZGVZN12momiji_event12EventManager3GetEvE3obj,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN12momiji_event12EventManager3GetEv+0x5c>
 movl   $&_ZZN12momiji_event12EventManager3GetEvE3obj,(%esp)
 call   <T> <_ZN12momiji_event12EventManagerC1Ev>
 movl   $&_ZGVZN12momiji_event12EventManager3GetEvE3obj,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN12momiji_event12EventManagerD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#0c4fb883(.data),0x8(%esp)
 movl   $&_ZZN12momiji_event12EventManager3GetEvE3obj,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 mov    $&_ZZN12momiji_event12EventManager3GetEvE3obj,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::Get() */

undefined1 * momiji_event::EventManager::_ZN12momiji_event12EventManager3GetEv(void)

{
  int iVar1;
  
  if (Get()::obj == '\0') {
    iVar1 = __cxa_guard_acquire(&Get()::obj);
    if (iVar1 != 0) {
      EventManager((EventManager *)Get()::obj);
      __cxa_guard_release(&Get()::obj);
      __cxa_atexit(~EventManager,Get()::obj,&__dso_handle);
    }
  }
  return Get()::obj;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 91 行）：

```cpp
EventManager* EventManager::Get()
{
    static EventManager obj;
    return &obj;
}
```
