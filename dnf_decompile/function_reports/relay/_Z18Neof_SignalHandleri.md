# _Z18Neof_SignalHandleri

`Neof_SignalHandler(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c277` | `0xa1` | `0x8058006` | `0xac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x8,%esp
 mov    0x8(%ebp),%eax
 sub    $0x4,%eax
-cmp    $0x1b,%eax
-ja     <T> <_Z18Neof_SignalHandleri+0x9f>
-mov    &data#85eb3e1e(.rodata)(,%eax,4),%eax
+mov    %eax,-0x4(%ebp)
+cmpl   $0x1b,-0x4(%ebp)
+ja     <T> <_Z18Neof_SignalHandleri+0xaa>
+mov    -0x4(%ebp),%edx
+mov    &data#84134739(.rodata)(,%edx,4),%eax
 jmp    *%eax
 movl   $"SIGTERM - LinuxService::getInstance()->controlStop()",(%esp)
 call   <T> <_Z14Neof_SignalLogPKc>
 call   <T> <_ZN12LinuxService11getInstanceEv>
-mov    (%eax),%edx
-add    $0x20,%edx
-mov    (%edx),%edx
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_Z18Neof_SignalHandleri+0x9f>
+mov    %eax,%edx
+mov    (%edx),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
+mov    %edx,(%esp)
+call   *%eax
+jmp    <T> <_Z18Neof_SignalHandleri+0xaa>
 movl   $"SIGUSR1 - LinuxService::getInstance()->controlPause()",(%esp)
 call   <T> <_Z14Neof_SignalLogPKc>
 call   <T> <_ZN12LinuxService11getInstanceEv>
-mov    (%eax),%edx
-add    $0x24,%edx
-mov    (%edx),%edx
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_Z18Neof_SignalHandleri+0x9f>
+mov    %eax,%edx
+mov    (%edx),%eax
+add    $0x24,%eax
+mov    (%eax),%eax
+mov    %edx,(%esp)
+call   *%eax
+jmp    <T> <_Z18Neof_SignalHandleri+0xaa>
 movl   $"SIGSEGV/SIGABRT - Neof_dumpCoreFile()",(%esp)
 call   <T> <_Z14Neof_SignalLogPKc>
 call   <T> <_Z17Neof_dumpCoreFilev>
-jmp    <T> <_Z18Neof_SignalHandleri+0x9f>
+jmp    <T> <_Z18Neof_SignalHandleri+0xaa>
 movl   $"SIGFPE - Neof_dumpCoreFile()",(%esp)
 call   <T> <_Z14Neof_SignalLogPKc>
 call   <T> <_Z17Neof_dumpCoreFilev>
-jmp    <T> <_Z18Neof_SignalHandleri+0x9f>
+jmp    <T> <_Z18Neof_SignalHandleri+0xaa>
 movl   $"SIGILL/SIGBUS/SIGSTKFLT/SIGURG/SIGXCPU/SIGXFSZ/SIGSYS - Neof_dumpCoreFile(), exit(-1)",(%esp)
 call   <T> <_Z14Neof_SignalLogPKc>
 call   <T> <_Z17Neof_dumpCoreFilev>
 movl   $0xffffffff,(%esp)
 call   <T> <exit>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Neof_SignalHandler(int) */

void Neof_SignalHandler(int param_1)

{
  int *piVar1;
  
  switch(param_1) {
  case 4:
  case 7:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1f:
    Neof_SignalLog(
                  "SIGILL/SIGBUS/SIGSTKFLT/SIGURG/SIGXCPU/SIGXFSZ/SIGSYS - Neof_dumpCoreFile(), exit(-1)"
                  );
    Neof_dumpCoreFile();
                    /* WARNING: Subroutine does not return */
    exit(-1);
  case 6:
  case 0xb:
    Neof_SignalLog("SIGSEGV/SIGABRT - Neof_dumpCoreFile()");
    Neof_dumpCoreFile();
    break;
  case 8:
    Neof_SignalLog("SIGFPE - Neof_dumpCoreFile()");
    Neof_dumpCoreFile();
    break;
  case 10:
    Neof_SignalLog("SIGUSR1 - LinuxService::getInstance()->controlPause()");
    piVar1 = (int *)LinuxService::getInstance();
    (**(code **)(*piVar1 + 0x24))(piVar1);
    break;
  case 0xf:
    Neof_SignalLog("SIGTERM - LinuxService::getInstance()->controlStop()");
    piVar1 = (int *)LinuxService::getInstance();
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 60 行）：

```cpp
void Neof_SignalHandler(int sig)
{
    switch (sig)
    {
    case 0xf:
        Neof_SignalLog("SIGTERM - LinuxService::getInstance()->controlStop()");
        LinuxService::getInstance()->controlStop();
        break;
    case 10:
        Neof_SignalLog("SIGUSR1 - LinuxService::getInstance()->controlPause()");
        LinuxService::getInstance()->controlPause();
        break;
    case 6:
    case 0xb:
        Neof_SignalLog("SIGSEGV/SIGABRT - Neof_dumpCoreFile()");
        Neof_dumpCoreFile();
        break;
    case 8:
        Neof_SignalLog("SIGFPE - Neof_dumpCoreFile()");
        Neof_dumpCoreFile();
        break;
    case 4:
    case 7:
    case 0x10:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1f:
        Neof_SignalLog(
            "SIGILL/SIGBUS/SIGSTKFLT/SIGURG/SIGXCPU/SIGXFSZ/SIGSYS - Neof_dumpCoreFile(), exit(-1)");
        Neof_dumpCoreFile();
        exit(-1);
    }
}
```
