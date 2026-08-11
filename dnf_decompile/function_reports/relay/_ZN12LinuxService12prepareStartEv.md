# _ZN12LinuxService12prepareStartEv

`LinuxService::prepareStart()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ca68` | `0x31` | `0x804f516` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x8,%esp
 call   <T> <_Z27Neof_registerSignalHandlersv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12LinuxService12prepareStartEv+0x25>
+je     <T> <_ZN12LinuxService12prepareStartEv+0x27>
 movl   $"Fail to regist os signals, Server process is terminated.",(%esp)
 call   <T> <puts>
-mov    $0x0,%eax
-jmp    <T> <_ZN12LinuxService12prepareStartEv+0x2f>
+movl   $0x0,-0x4(%ebp)
+jmp    <T> <_ZN12LinuxService12prepareStartEv+0x33>
 call   <T> <_Z17Neof_setCoreLimitv>
-mov    $0x1,%eax
+movl   $0x1,-0x4(%ebp)
+mov    -0x4(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::prepareStart() */

bool LinuxService::_ZN12LinuxService12prepareStartEv(void)

{
  char cVar1;
  
  cVar1 = Neof_registerSignalHandlers();
  if (cVar1 == '\x01') {
    Neof_setCoreLimit();
  }
  else {
    puts("Fail to regist os signals, Server process is terminated.");
  }
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 111 行）：

```cpp
bool LinuxService::prepareStart()
{
    if (!Neof_registerSignalHandlers())
    {
        puts("Fail to regist os signals, Server process is terminated.");
        return false;
    }
    Neof_setCoreLimit();
    return true;
}
```
