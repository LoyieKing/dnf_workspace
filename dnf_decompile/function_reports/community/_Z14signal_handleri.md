# _Z14signal_handleri

`signal_handler(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | NEAR | `0x804ed0a` | `0x7d` | `0x804ee70` | `0x7d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 sub    $0x4,%eax
 cmp    $0x1b,%eax
 ja     <T> <_Z14signal_handleri+0x7b>
-mov    &data#93ae9e2e(.rodata)(,%eax,4),%eax
+mov    &data#bc36ee27(.rodata)(,%eax,4),%eax
 jmp    *%eax
 movl   $"RECV SIGTERM",(%esp)
 call   <T> <puts>
 jmp    <T> <_Z14signal_handleri+0x7b>
 movb   $0x1,&_ZN15global_instance8shutdownE
 jmp    <T> <_Z14signal_handleri+0x7b>
 movl   $"Recv SIGSEGV signal --> make Dump Core file.",(%esp)
 call   <T> <puts>
 call   <T> <_Z19omll_dump_core_filev>
 jmp    <T> <_Z14signal_handleri+0x7b>
 movl   $"Recv FPE signal",(%esp)
 call   <T> <puts>
 call   <T> <_Z19omll_dump_core_filev>
 jmp    <T> <_Z14signal_handleri+0x7b>
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Recv %d signal --> process is terminated abnormaly.\n",(%esp)
 call   <T> <printf>
 call   <T> <_Z19omll_dump_core_filev>
 movl   $0xffffffff,(%esp)
 call   <T> <exit>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* signal_handler(int) */

void signal_handler(int param_1)

{
  switch(param_1) {
  case 4:
  case 7:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1f:
    printf("Recv %d signal --> process is terminated abnormaly.\n",param_1);
    omll_dump_core_file();
                    /* WARNING: Subroutine does not return */
    exit(-1);
  case 6:
  case 0xb:
    puts("Recv SIGSEGV signal --> make Dump Core file.");
    omll_dump_core_file();
    break;
  case 8:
    puts("Recv FPE signal");
    omll_dump_core_file();
    break;
  case 0xc:
    global_instance::shutdown = 1;
    break;
  case 0xf:
    puts("RECV SIGTERM");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Community/CoreDump.cpp](source/Community/CoreDump.cpp)（约第 43 行）：

```cpp
void signal_handler(int signal) {
    REDNF_LOG("Recieve %d signal.", signal);
    switch (signal) {
        case SIGTERM:
            puts("RECV SIGTERM");
            break;
        case SIGUSR2:
            global_instance::shutdown = true;
            break;
        case SIGABRT:
        case SIGSEGV:
            puts("Recv SIGSEGV signal --> make Dump Core file.");
            omll_dump_core_file();
            break;
        case SIGFPE:
            puts("Recv FPE signal");
            omll_dump_core_file();
            break;
        case SIGILL:
        case SIGBUS:
        case SIGSTKFLT:
        case SIGURG:
        case SIGXCPU:
        case SIGXFSZ:
        case SIGSYS:
            printf("Recv %d signal --> process is terminated abnormaly.\n", signal);
            omll_dump_core_file();
            exit(-1);
    }
}
```
