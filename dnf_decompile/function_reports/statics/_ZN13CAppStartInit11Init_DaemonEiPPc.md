# _ZN13CAppStartInit11Init_DaemonEiPPc

`CAppStartInit::Init_Daemon(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80586dc` | `0x110` | `0x804c90a` | `0x111` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x10(%ebp),%eax
 add    $0x8,%eax
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 movl   $"start",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x71>
 call   <T> <fork>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jns    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x42>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x109>
+jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x10a>
 cmpl   $0x0,-0xc(%ebp)
 je     <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x54>
 movl   $0x0,(%esp)
 call   <T> <exit>
 call   <T> <setsid>
 movl   $"./",(%esp)
 call   <T> <chdir>
 movl   $0x0,(%esp)
 call   <T> <umask>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x11(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CAppStartInit8Save_pidERKSs>
-mov    %eax,%ebx
-xor    $0x1,%ebx
+cmp    $0x1,%eax
+sete   %bl
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0xee>
+jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0xef>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0xd3>
+jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0xd4>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 test   %bl,%bl
-je     <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x104>
+je     <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x105>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x10a>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN13CAppStartInit11Init_DaemonEiPPc+0x109>
-mov    $0x0,%eax
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppStartInit::Init_Daemon(int, char**) */

undefined4 __thiscall
CAppStartInit::_ZN13CAppStartInit11Init_DaemonEiPPc(CAppStartInit *this,int param_1,char **param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string local_1c [7];
  allocator local_15;
  char *local_14;
  __pid_t local_10;
  
  local_14 = param_2[2];
  iVar2 = strcmp(local_14,"start");
  if (iVar2 == 0) {
    local_10 = fork();
    if (local_10 < 0) {
      return 0xffffffff;
    }
    if (local_10 != 0) {
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    setsid();
    chdir("./");
    umask(0);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08058771 to 08058775 has its CatchHandler @ 080587af */
  std::string::string(local_1c,param_2[1],&local_15);
                    /* try { // try from 08058783 to 08058787 has its CatchHandler @ 0805879a */
  cVar1 = Save_pid((string *)this);
                    /* try { // try from 08058793 to 08058797 has its CatchHandler @ 080587af */
  std::string::~string(local_1c);
  std::allocator<char>::~allocator((allocator<char> *)&local_15);
  if (cVar1 == '\x01') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppStartInit.cpp](source/DNFServer/GameServer/COServer/DNFAppStartInit.cpp)（约第 46 行）：

```cpp
int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    char* cmd = argv[2];
    if (strcmp(cmd, "start") == 0)
    {
        pid_t pid = fork();
        if (pid < 0)
        {
            return -1;
        }
        if (pid != 0)
        {
            exit(0);
        }
        setsid();
        chdir("./");
        umask(0);
    }
    if (Save_pid(argv[1]) != 1)
    {
        return -1;
    }
    return 0;
}
```
