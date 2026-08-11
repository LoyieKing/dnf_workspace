# _ZN12LinuxService18processCommandLineEiPPc

`LinuxService::processCommandLine(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ccc4` | `0x366` | `0x804f020` | `0x362` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,238 +1,238 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x8(%ebp),%ecx
 add    $0x4,%ecx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"RelayServer",0x8(%esp)
 movl   $"RelayServer",0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x63>
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x354>
+mov    0x10(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    %eax,-0x4(%ebp)
+mov    0x8(%ebp),%edx
+add    $0x714,%edx
+movl   $0x1d,0x8(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+mov    0x8(%ebp),%eax
+movb   $0x0,0x731(%eax)
+movl   $"install",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0xc2>
+movl   $"ProcessCommandLine2",(%esp)
+call   <T> <_ZL6_evlogPKc>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"remove",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0xfc>
+movl   $"ProcessCommandLine3",(%esp)
+call   <T> <_ZL6_evlogPKc>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x10,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"run",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+jne    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x12e>
+movl   $"test",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x1df>
+movl   $"ProcessCommandLine4",(%esp)
+call   <T> <_ZL6_evlogPKc>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x1ba>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x195>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11ServiceInfo15setRunAsServiceEb>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+call   <T> <_ZN12LinuxService11getInstanceEv>
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK11ServiceInfo14getChannelNameEv>
+mov    %eax,0x4(%esp)
+movl   $"Process(%s) is already operated.\n",(%esp)
+call   <T> <printf>
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+call   <T> <_ZN12LinuxService11getInstanceEv>
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK11ServiceInfo17getConfigFileNameEv>
+mov    %eax,0x4(%esp)
+movl   $"There is not %s config_file\n",(%esp)
+call   <T> <printf>
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"start",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x2b9>
+movl   $"ProcessCommandLine5",(%esp)
+call   <T> <_ZL6_evlogPKc>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x24a>
+call   <T> <_ZN12LinuxService11getInstanceEv>
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK11ServiceInfo17getConfigFileNameEv>
+mov    %eax,0x4(%esp)
+movl   $"There is not %s config_file\n",(%esp)
+call   <T> <printf>
+movl   $0x0,(%esp)
+call   <T> <exit>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x28c>
+call   <T> <_ZN12LinuxService11getInstanceEv>
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK11ServiceInfo14getChannelNameEv>
+mov    %eax,0x4(%esp)
+movl   $"Process(%s) is already operated.\n",(%esp)
+call   <T> <printf>
+movl   $0x0,(%esp)
+call   <T> <exit>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11ServiceInfo15setRunAsServiceEb>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"stop",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x2ff>
+call   <T> <_Z24Neof_sendTerminateSignalv>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x2ec>
+movl   $"Neof_sendTerminateSignal return FAIL",(%esp)
+call   <T> <puts>
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"Neof_sendTerminateSignal return OK",(%esp)
+call   <T> <puts>
+call   <T> <_Z10delete_pidv>
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"pause",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x31d>
+call   <T> <_Z22Neof_sendSuspendSignalv>
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+movl   $"mess",0x4(%esp)
+mov    -0x4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strstr>
+test   %eax,%eax
+je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x360>
 movl   $"Fail to Preprocessing, Server process is terminated.",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-mov    0x10(%ebp),%eax
-add    $0x8,%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x714(%eax),%edx
-movl   $0x1d,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-mov    0x8(%ebp),%eax
-movb   $0x0,0x731(%eax)
-movl   $"install",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0xd2>
-movl   $"ProcessCommandLine2",(%esp)
-call   <T> <_ZL6_evlogPKc>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"remove",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x10c>
-movl   $"ProcessCommandLine3",(%esp)
-call   <T> <_ZL6_evlogPKc>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x10,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"run",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-jne    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x13e>
-movl   $"test",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x1ed>
-movl   $"ProcessCommandLine4",(%esp)
-call   <T> <_ZL6_evlogPKc>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x185>
-call   <T> <_ZN12LinuxService11getInstanceEv>
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK11ServiceInfo17getConfigFileNameEv>
-mov    %eax,0x4(%esp)
-movl   $"There is not %s config_file\n",(%esp)
-call   <T> <printf>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-test   %al,%al
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x1c0>
-call   <T> <_ZN12LinuxService11getInstanceEv>
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK11ServiceInfo14getChannelNameEv>
-mov    %eax,0x4(%esp)
-movl   $"Process(%s) is already operated.\n",(%esp)
-call   <T> <printf>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11ServiceInfo15setRunAsServiceEb>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x14,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"start",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x2c5>
-movl   $"ProcessCommandLine5",(%esp)
-call   <T> <_ZL6_evlogPKc>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x256>
-call   <T> <_ZN12LinuxService11getInstanceEv>
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK11ServiceInfo17getConfigFileNameEv>
-mov    %eax,0x4(%esp)
-movl   $"There is not %s config_file\n",(%esp)
-call   <T> <printf>
-movl   $0x0,(%esp)
-call   <T> <exit>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-test   %al,%al
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x298>
-call   <T> <_ZN12LinuxService11getInstanceEv>
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK11ServiceInfo14getChannelNameEv>
-mov    %eax,0x4(%esp)
-movl   $"Process(%s) is already operated.\n",(%esp)
-call   <T> <printf>
-movl   $0x0,(%esp)
-call   <T> <exit>
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11ServiceInfo15setRunAsServiceEb>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x14,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"stop",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x311>
-call   <T> <_Z24Neof_sendTerminateSignalv>
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x2f8>
-movl   $"Neof_sendTerminateSignal return OK",(%esp)
-call   <T> <puts>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x304>
-movl   $"Neof_sendTerminateSignal return FAIL",(%esp)
-call   <T> <puts>
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-call   <T> <_Z10delete_pidv>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"pause",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x32f>
-call   <T> <_Z22Neof_sendSuspendSignalv>
-jmp    <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-movl   $"mess",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strstr>
-test   %eax,%eax
-je     <T> <_ZN12LinuxService18processCommandLineEiPPc+0x364>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::processCommandLine(int, char**) */

void __thiscall
LinuxService::_ZN12LinuxService18processCommandLineEiPPc
          (LinuxService *this,int param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  ServiceInfo::_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_
            ((ServiceInfo *)(this + 4),"RelayServer","RelayServer",*param_2,param_2[1]);
  cVar1 = (**(code **)(*(int *)this + 8))(this);
  if (cVar1 == '\x01') {
    pcVar5 = param_2[2];
    strncpy((char *)(this + 0x714),pcVar5,0x1d);
    this[0x731] = (LinuxService)0x0;
    pcVar2 = strstr(pcVar5,"install");
    if (pcVar2 == (char *)0x0) {
      pcVar2 = strstr(pcVar5,"remove");
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr(pcVar5,"run");
        if ((pcVar2 == (char *)0x0) && (pcVar2 = strstr(pcVar5,"test"), pcVar2 == (char *)0x0)) {
          pcVar2 = strstr(pcVar5,"start");
          if (pcVar2 == (char *)0x0) {
            pcVar2 = strstr(pcVar5,"stop");
            if (pcVar2 == (char *)0x0) {
              pcVar2 = strstr(pcVar5,"pause");
              if (pcVar2 == (char *)0x0) {
                pcVar5 = strstr(pcVar5,"mess");
                if (pcVar5 != (char *)0x0) {
                  (**(code **)(*(int *)this + 0x1c))(this,param_2[3]);
                }
              }
              else {
                Neof_sendSuspendSignal();
              }
            }
            else {
              cVar1 = Neof_sendTerminateSignal();
              if (cVar1 == '\0') {
                puts("Neof_sendTerminateSignal return FAIL");
              }
              else {
                puts("Neof_sendTerminateSignal return OK");
                delete_pid();
              }
            }
          }
          else {
            _evlog("ProcessCommandLine5");
            cVar1 = (*(code *)**(undefined4 **)this)(this);
            if (cVar1 != '\x01') {
              iVar3 = _ZN12LinuxService11getInstanceEv();
              uVar4 = ServiceInfo::getConfigFileName((ServiceInfo *)(iVar3 + 4));
              printf("There is not %s config_file\n",uVar4);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            cVar1 = (**(code **)(*(int *)this + 4))(this);
            if (cVar1 != '\0') {
              iVar3 = _ZN12LinuxService11getInstanceEv();
              uVar4 = ServiceInfo::getChannelName((ServiceInfo *)(iVar3 + 4));
              printf("Process(%s) is already operated.\n",uVar4);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            ServiceInfo::_ZN11ServiceInfo15setRunAsServiceEb((ServiceInfo *)(this + 4),true);
            (**(code **)(*(int *)this + 0x14))(this);
          }
        }
        else {
          _evlog("ProcessCommandLine4");
          cVar1 = (*(code *)**(undefined4 **)this)(this);
          if (cVar1 == '\x01') {
            cVar1 = (**(code **)(*(int *)this + 4))(this);
            if (cVar1 == '\0') {
              ServiceInfo::_ZN11ServiceInfo15setRunAsServiceEb((ServiceInfo *)(this + 4),false);
              (**(code **)(*(int *)this + 0x14))(this);
            }
            else {
              iVar3 = _ZN12LinuxService11getInstanceEv();
              uVar4 = ServiceInfo::getChannelName((ServiceInfo *)(iVar3 + 4));
              printf("Process(%s) is already operated.\n",uVar4);
            }
          }
          else {
            iVar3 = _ZN12LinuxService11getInstanceEv();
            uVar4 = ServiceInfo::getConfigFileName((ServiceInfo *)(iVar3 + 4));
            printf("There is not %s config_file\n",uVar4);
          }
        }
      }
      else {
        _evlog("ProcessCommandLine3");
        (**(code **)(*(int *)this + 0x10))(this);
      }
    }
    else {
      _evlog("ProcessCommandLine2");
      (**(code **)(*(int *)this + 0xc))(this);
    }
  }
  else {
    puts("Fail to Preprocessing, Server process is terminated.");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 221 行）：

```cpp
void LinuxService::processCommandLine(int argc, char** argv)
{
    setInfo("RelayServer", "RelayServer", *argv, argv[1]);
    if (prepareStart() == 1)
    {
        char* pszCmdLine = argv[2];
        strncpy(m_command, pszCmdLine, 0x1d);
        m_command[0x1d] = 0;
        if (strstr(pszCmdLine, "install") != 0)
        {
            _evlog("ProcessCommandLine2");
            install();
        }
        else if (strstr(pszCmdLine, "remove") != 0)
        {
            _evlog("ProcessCommandLine3");
            remove();
        }
        else if (strstr(pszCmdLine, "run") != 0 || strstr(pszCmdLine, "test") != 0)
        {
            _evlog("ProcessCommandLine4");
            if (checkConfigFile() == 1)
            {
                if (checkPIDFile() == 0)
                {
                    setRunAsService(false);
                    start();
                }
                else
                {
                    printf("Process(%s) is already operated.\n",
                           getInstance()->getChannelName());
                }
            }
            else
            {
                printf("There is not %s config_file\n",
                       getInstance()->getConfigFileName());
            }
        }
        else if (strstr(pszCmdLine, "start") != 0)
        {
            _evlog("ProcessCommandLine5");
            if (checkConfigFile() != 1)
            {
                printf("There is not %s config_file\n",
                       getInstance()->getConfigFileName());
                exit(0);
            }
            if (checkPIDFile() != 0)
            {
                printf("Process(%s) is already operated.\n",
                       getInstance()->getChannelName());
                exit(0);
            }
            setRunAsService(true);
            start();
        }
        else if (strstr(pszCmdLine, "stop") != 0)
        {
            if (Neof_sendTerminateSignal() == 0)
            {
                puts("Neof_sendTerminateSignal return FAIL");
            }
            else
            {
                puts("Neof_sendTerminateSignal return OK");
                delete_pid();
            }
        }
        else if (strstr(pszCmdLine, "pause") != 0)
        {
            Neof_sendSuspendSignal();
        }
        else if (strstr(pszCmdLine, "mess") != 0)
        {
            sendBroadCastMessage(argv[3]);
        }
    }
    else
    {
        puts("Fail to Preprocessing, Server process is terminated.");
    }
}
```
