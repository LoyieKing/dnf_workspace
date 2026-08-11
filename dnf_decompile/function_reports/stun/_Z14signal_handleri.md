# _Z14signal_handleri

`signal_handler(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x4025b2` | `0x140` | `0x40325c` | `0x140` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,76 @@
 push   %rbp
 mov    %rsp,%rbp
 sub    $0x10,%rsp
 mov    %edi,-0x4(%rbp)
 mov    -0x4(%rbp),%eax
 sub    $0x4,%eax
 mov    %eax,-0x8(%rbp)
 cmpl   $0x1b,-0x8(%rbp)
 ja     <T> <_Z14signal_handleri+0x13e>
 mov    -0x8(%rbp),%eax
-mov    "@&@"(,%rax,8),%rax
+mov    &data#26e45f0e(.rodata)(,%rax,8),%rax
 jmp    *%rax
 mov    $0x0,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGSEGV) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGABRT) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGFPE) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGILL) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGBUS) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGSTKFLT) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGURG) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGXCPU) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGXFSZ) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 jmp    <T> <_Z14signal_handleri+0x13e>
 mov    -0x4(%rbp),%esi
 mov    $"Signal(SIGSYS) occured",%edi
 call   <T> <_Z9write_logPKci>
 mov    $0xffffffff,%edi
 call   <T> <_Z14rdar_terminatei>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

void signal_handler(int sig)

{
  switch(sig) {
  case 4:
    write_log("Signal(SIGILL) occured",sig);
    rdar_terminate(-1);
    break;
  case 6:
    write_log("Signal(SIGABRT) occured",sig);
    rdar_terminate(-1);
    break;
  case 7:
    write_log("Signal(SIGBUS) occured",sig);
    rdar_terminate(-1);
    break;
  case 8:
    write_log("Signal(SIGFPE) occured",sig);
    rdar_terminate(-1);
    break;
  case 0xb:
    write_log("Signal(SIGSEGV) occured",sig);
    rdar_terminate(-1);
    break;
  case 0xf:
    rdar_terminate(0);
    break;
  case 0x10:
    write_log("Signal(SIGSTKFLT) occured",sig);
    rdar_terminate(-1);
    break;
  case 0x17:
    write_log("Signal(SIGURG) occured",sig);
    rdar_terminate(-1);
    break;
  case 0x18:
    write_log("Signal(SIGXCPU) occured",sig);
    rdar_terminate(-1);
    break;
  case 0x19:
    write_log("Signal(SIGXFSZ) occured",sig);
    rdar_terminate(-1);
    break;
  case 0x1f:
    write_log("Signal(SIGSYS) occured",sig);
    rdar_terminate(-1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/global_func.cpp](source/DNFServer/StunServer/stun_server/global_func.cpp)（约第 168 行）：

```cpp
void signal_handler(int sig)
{
    switch (sig)
    {
        case SIGTERM:
            rdar_terminate(0);
            break;
        case SIGSEGV:
            write_log("Signal(SIGSEGV) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGABRT:
            write_log("Signal(SIGABRT) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGFPE:
            write_log("Signal(SIGFPE) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGILL:
            write_log("Signal(SIGILL) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGBUS:
            write_log("Signal(SIGBUS) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGSTKFLT:
            write_log("Signal(SIGSTKFLT) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGURG:
            write_log("Signal(SIGURG) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGXCPU:
            write_log("Signal(SIGXCPU) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGXFSZ:
            write_log("Signal(SIGXFSZ) occured", sig);
            rdar_terminate(-1);
            break;
        case SIGSYS:
            write_log("Signal(SIGSYS) occured", sig);
            rdar_terminate(-1);
            break;
    }
}
```
