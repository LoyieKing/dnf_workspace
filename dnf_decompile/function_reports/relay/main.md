# main

`main`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x8049c54` | `0x182` | `0x804ddc4` | `0x187` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 and    $0xfffffff0,%esp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x34,%esp
 cmpl   $0x1,0x8(%ebp)
 jle    <T> <main+0x44>
 mov    0xc(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 movl   $"version",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <main+0x44>
 movl   $"Relay Server v2.5.6.9",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
-jmp    <T> <main+0x178>
+jmp    <T> <main+0x17d>
 movl   $0x734,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3AppC1Ev>
 jmp    <T> <main+0x70>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <main+0xa7>
+jmp    <T> <main+0xac>
 mov    %ebx,0x28(%esp)
 mov    0x28(%esp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12LinuxService18processCommandLineEiPPc>
 mov    0x28(%esp),%eax
 mov    (%eax),%eax
 add    $0x18,%eax
 mov    (%eax),%edx
 mov    0x28(%esp),%eax
 mov    %eax,(%esp)
 call   *%edx
-jmp    <T> <main+0x173>
+mov    $0x0,%eax
+jmp    <T> <main+0x17d>
 cmp    $0x1,%edx
-je     <T> <main+0xb4>
+je     <T> <main+0xb9>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,0x2c(%esp)
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception15getFunctionNameEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <main+0x129>
+je     <T> <main+0x12e>
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception15getFunctionNameEv>
 mov    %eax,%edi
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception7getLineEv>
 mov    %eax,%esi
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception11getErrorMsgEv>
 mov    %eax,%ebx
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception12getErrorCodeEv>
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"# %d %s at %d in %s\n",(%esp)
 call   <T> <printf>
-jmp    <T> <main+0x16e>
+jmp    <T> <main+0x173>
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception11getErrorMsgEv>
 mov    %eax,%ebx
 mov    0x2c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9Exception12getErrorCodeEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"# %d %s\n",(%esp)
 call   <T> <printf>
-jmp    <T> <main+0x16e>
+jmp    <T> <main+0x173>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 mov    $0x0,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 mov    %ebp,%esp
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 main(int param_1,char **param_2)

{
  int iVar1;
  App *this;
  
  if ((1 < param_1) && (iVar1 = strcmp(param_2[1],"version"), iVar1 == 0)) {
    puts("Relay Server v2.5.6.9");
    return 0;
  }
                    /* try { // try from 08049c9f to 08049ca3 has its CatchHandler @ 08049cfb */
  this = operator_new(0x734);
                    /* try { // try from 08049cab to 08049caf has its CatchHandler @ 08049cb2 */
  App::_ZN3AppC2Ev(this);
                    /* try { // try from 08049cdd to 08049cf5 has its CatchHandler @ 08049cfb */
  LinuxService::_ZN12LinuxService18processCommandLineEiPPc((LinuxService *)this,param_1,param_2);
  (**(code **)(*(int *)this + 0x18))(this);
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/DNFRelayServer.cpp](source/DNFServer/GameServer/Relay/DNFRelayServer.cpp)（约第 105 行）：

```cpp
int main(int argc, char** argv)
{
    if ((argc > 1) && (strcmp(argv[1], "version") == 0))
    {
        puts("Relay Server v2.5.6.9");
        return 0;
    }
    try
    {
        App* app = new App;
        app->processCommandLine(argc, argv);
        app->main();
        return 0;
    }
    catch (Exception& e)
    {
        if (e.getFunctionName() != 0)
        {
            printf("# %d %s at %d in %s\n", e.getErrorCode(), e.getErrorMsg(), e.getLine(),
                   e.getFunctionName());
        }
        else
        {
            printf("# %d %s\n", e.getErrorCode(), e.getErrorMsg());
        }
    }
}
```
