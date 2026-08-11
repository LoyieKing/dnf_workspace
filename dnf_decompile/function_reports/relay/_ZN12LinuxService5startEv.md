# _ZN12LinuxService5startEv

`LinuxService::start()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804d1c2` | `0x98` | `0x804f47e` | `0x98` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x70c(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12LinuxService5startEv+0x8a>
+jne    <T> <_ZN12LinuxService5startEv+0x22>
+movl   $"Run As Non Service\n",(%esp)
+call   <T> <_ZL6_evlogPKc>
+jmp    <T> <_ZN12LinuxService5startEv+0x96>
 movl   $"Run As Service\n",(%esp)
 call   <T> <_ZL6_evlogPKc>
 movl   $"./pid",(%esp)
 call   <T> <_Z8make_dirPc>
 movl   $"./log",(%esp)
 call   <T> <_Z8make_dirPc>
 call   <T> <fork>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN12LinuxService5startEv+0x54>
+mov    %eax,-0x4(%ebp)
+cmpl   $0x0,-0x4(%ebp)
+jns    <T> <_ZN12LinuxService5startEv+0x62>
 movl   $"fork Fail",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN12LinuxService5startEv+0x96>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12LinuxService5startEv+0x66>
+cmpl   $0x0,-0x4(%ebp)
+je     <T> <_ZN12LinuxService5startEv+0x74>
 movl   $0x0,(%esp)
 call   <T> <exit>
 call   <T> <setsid>
 movl   $"./",(%esp)
 call   <T> <chdir>
 movl   $0x0,(%esp)
 call   <T> <umask>
 call   <T> <_Z8save_pidv>
-jmp    <T> <_ZN12LinuxService5startEv+0x96>
-movl   $"Run As Non Service\n",(%esp)
-call   <T> <_ZL6_evlogPKc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::start() */

void __thiscall LinuxService::_ZN12LinuxService5startEv(LinuxService *this)

{
  __pid_t _Var1;
  
  if (this[0x70c] == (LinuxService)0x0) {
    _evlog("Run As Non Service\n");
  }
  else {
    _evlog("Run As Service\n");
    make_dir("./pid");
    make_dir("./log");
    _Var1 = fork();
    if (_Var1 < 0) {
      puts("fork Fail");
    }
    else {
      if (_Var1 != 0) {
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      setsid();
      chdir("./");
      umask(0);
      save_pid();
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 130 行）：

```cpp
void LinuxService::start()
{
    if (m_bRunAsService == 0)
    {
        _evlog("Run As Non Service\n");
    }
    else
    {
        _evlog("Run As Service\n");
        make_dir("./pid");
        make_dir("./log");
        pid_t pid = fork();
        if (pid < 0)
        {
            puts("fork Fail");
        }
        else
        {
            if (pid != 0)
            {
                exit(0);
            }
            setsid();
            chdir("./");
            umask(0);
            save_pid();
        }
    }
}
```
