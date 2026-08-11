# _Z26Neof_registerSignalHandleriPFviE

`Neof_registerSignalHandler(int, void (*)(int))`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c0a0` | `0x8f` | `0x8057bee` | `0x9f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x138,%esp
 mov    0xc(%ebp),%eax
-mov    %eax,-0x94(%ebp)
-lea    -0x94(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+lea    -0x8c(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <sigemptyset>
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0x8(%ebp)
 cmpl   $0xe,0x8(%ebp)
 jne    <T> <_Z26Neof_registerSignalHandleriPFviE+0x3d>
-mov    -0x10(%ebp),%eax
+mov    -0x8(%ebp),%eax
 or     $0x20000000,%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x8(%ebp)
 jmp    <T> <_Z26Neof_registerSignalHandleriPFviE+0x48>
-mov    -0x10(%ebp),%eax
+mov    -0x8(%ebp),%eax
 or     $0x10000000,%eax
-mov    %eax,-0x10(%ebp)
-lea    -0x120(%ebp),%eax
+mov    %eax,-0x8(%ebp)
+lea    -0x118(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sigaction>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_Z26Neof_registerSignalHandleriPFviE+0x88>
+je     <T> <_Z26Neof_registerSignalHandleriPFviE+0x8d>
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%d번 signal 등록 실패\n",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_Z26Neof_registerSignalHandleriPFviE+0x8d>
-mov    $0x1,%eax
+movl   $0x0,-0x124(%ebp)
+jmp    <T> <_Z26Neof_registerSignalHandleriPFviE+0x97>
+movl   $0x1,-0x124(%ebp)
+mov    -0x124(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Neof_registerSignalHandler(int, void (*)(int)) */

bool Neof_registerSignalHandler(int param_1,_func_void_int *param_2)

{
  int iVar1;
  sigaction local_124;
  _union_1051 local_98;
  sigset_t sStack_94;
  undefined4 local_14;
  
  local_98.sa_handler = (__sighandler_t)param_2;
  sigemptyset(&sStack_94);
  if (param_1 == 0xe) {
    local_14 = 0x20000000;
  }
  else {
    local_14 = 0x10000000;
  }
  iVar1 = sigaction(param_1,(sigaction *)&local_98,&local_124);
  if (-1 >= iVar1) {
    printf(&DAT_08070894,param_1);
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 32 行）：

```cpp
bool Neof_registerSignalHandler(int sig, void (*handler)(int))
{
    struct sigaction sa;
    struct sigaction old;
    sa.sa_handler = (__sighandler_t)handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    if (sig == 0xe)
    {
        sa.sa_flags |= 0x20000000;
    }
    else
    {
        sa.sa_flags |= 0x10000000;
    }
    if (sigaction(sig, &sa, &old) < 0)
    {
        printf("%d\xb9\xf8 signal \xb5\xee\xb7\xcf \xbd\xc7\xc6\xd0\n", sig);
        return 0;
    }
    return 1;
}
```
