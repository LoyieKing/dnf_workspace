# _ZN3nsl18Neof_SignalHandlerEi

`nsl::Neof_SignalHandler(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x80a3a43` | `0x81` | `0x807b9d2` | `0x81` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"Handling Signal %d",0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 sub    $0x4,%eax
 cmp    $0x1b,%eax
 ja     <T> <_ZN3nsl18Neof_SignalHandlerEi+0x7f>
-mov    &data#d4559986(.rodata)(,%eax,4),%eax
+mov    &data#c93e1e5c(.rodata)(,%eax,4),%eax
 jmp    *%eax
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 mov    (%eax),%edx
 add    $0x24,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl18Neof_SignalHandlerEi+0x7f>
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12LinuxService15SetStopReceivedEv>
 jmp    <T> <_ZN3nsl18Neof_SignalHandlerEi+0x7f>
 call   <T> <_ZN3nsl17Neof_dumpCoreFileEv>
 jmp    <T> <_ZN3nsl18Neof_SignalHandlerEi+0x7f>
 call   <T> <_ZN3nsl17Neof_dumpCoreFileEv>
 jmp    <T> <_ZN3nsl18Neof_SignalHandlerEi+0x7f>
 call   <T> <_ZN3nsl17Neof_dumpCoreFileEv>
 movl   $0xffffffff,(%esp)
 call   <T> <exit>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "LinuxService": ignoring overlapping field "isTerminated_" */

void nsl::_ZN3nsl18Neof_SignalHandlerEi(int sig)

{
  TraceLog *this;
  LinuxService *pLVar1;
  
  this = G_TraceLog();
  TraceLog::sysLog(this,2,"Handling Signal %d",sig);
  switch(sig) {
  case 4:
  case 7:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1f:
    Neof_dumpCoreFile();
                    /* WARNING: Subroutine does not return */
    exit(-1);
  case 6:
  case 0xb:
    Neof_dumpCoreFile();
    break;
  case 8:
    Neof_dumpCoreFile();
    break;
  case 0xc:
    pLVar1 = LinuxService::_ZN3nsl12LinuxService11getInstanceEv();
    LinuxService::SetStopReceived(pLVar1);
    break;
  case 0xf:
    pLVar1 = LinuxService::_ZN3nsl12LinuxService11getInstanceEv();
    (*(pLVar1->super_IPlatform)._vptr_IPlatform[9])(pLVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp)（约第 363 行）：

```cpp
void Neof_SignalHandler(int sig)
{
    G_TraceLog()->sysLog(2, "Handling Signal %d", sig);
    switch (sig)
    {
    case SIGTERM:
        LinuxService::getInstance()->controlPause();
        break;
    case SIGUSR2:
        LinuxService::getInstance()->SetStopReceived();
        break;
    case SIGABRT:
    case SIGSEGV:
        Neof_dumpCoreFile();
        break;
    case SIGFPE:
        Neof_dumpCoreFile();
        break;
    case SIGILL:
    case SIGBUS:
    case SIGSTKFLT:
    case SIGURG:
    case SIGXCPU:
    case SIGXFSZ:
    case SIGSYS:
        Neof_dumpCoreFile();
        exit(-1);
        break;
    }
}
```
