# _ZN3nsl12LinuxService18processCommandLineEiPPcS1_b

`nsl::LinuxService::processCommandLine(int, char**, char*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80a469a` | `0x3c6` | `0x807b2de` | `0x3c6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,259 +1,259 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 movl   $"In LinuxService::processCommandLine",(%esp)
 call   <T> <puts>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x8(%ebp),%ecx
 add    $0x4,%ecx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"ChannelBridge",0x8(%esp)
 movl   $"ChannelBridge",0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN3nsl11ServiceInfo7setInfoEPKcS2_S2_S2_>
 cmpb   $0x0,-0x1c(%ebp)
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x63>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    0x10(%ebp),%eax
 add    $0x8,%eax
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x715(%eax),%edx
 movl   $0x1e,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"ServiceName='%s'\n",(%esp)
 call   <T> <printf>
 movl   $0x14,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $&_ZN3nsl12gServiceNameE,(%esp)
 call   <T> <memset>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN3nsl12gServiceNameE,(%esp)
 call   <T> <strcpy>
 movl   $"install",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x123>
 movl   $"ProcessCommandLine2",(%esp)
 call   <T> <_ZN3nslL6_evlogEPKc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"remove",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x15d>
 movl   $"ProcessCommandLine3",(%esp)
 call   <T> <_ZN3nslL6_evlogEPKc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x10,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"run",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 jne    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x18f>
 movl   $"test",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x23e>
 movl   $"ProcessCommandLine4",(%esp)
 call   <T> <_ZN3nslL6_evlogEPKc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x1d6>
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl11ServiceInfo17getConfigFileNameEv>
 mov    %eax,0x4(%esp)
 movl   $"There is not %s config_file\n",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3c4>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %al,%al
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x211>
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl11ServiceInfo14getChannelNameEv>
 mov    %eax,0x4(%esp)
 movl   $"Process(%s) is already operated.\n",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3c4>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ServiceInfo15setRunAsServiceEb>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x14,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"start",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x2d9>
-movl   $&data#c915e3ac(.rodata),(%esp)
+movl   $&data#fe19146c(.rodata),(%esp)
 call   <T> <puts>
 movl   $"ProcessCommandLine5",(%esp)
 call   <T> <_ZN3nslL6_evlogEPKc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x2ac>
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl11ServiceInfo17getConfigFileNameEv>
 mov    %eax,0x4(%esp)
 movl   $"There is not %s config_file\n",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3c4>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ServiceInfo15setRunAsServiceEb>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x14,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"stop",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x332>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl24Neof_sendTerminateSignalEPc>
 mov    %al,-0x9(%ebp)
 cmpb   $0x0,-0x9(%ebp)
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x312>
 movl   $"Neof_sendTerminateSignal return OK",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x31e>
 movl   $"Neof_sendTerminateSignal return FAIL",(%esp)
 call   <T> <puts>
 cmpb   $0x0,-0x9(%ebp)
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 call   <T> <_ZN3nsl10delete_pidEv>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"pause",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x350>
 call   <T> <_ZN3nsl22Neof_sendSuspendSignalEv>
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"mess",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x387>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0xc,%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 jmp    <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 movl   $"info",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strstr>
 test   %eax,%eax
 je     <T> <_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b+0x3b8>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 movl   $"Out LinuxService::processCommandLine",(%esp)
 call   <T> <puts>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "LinuxService": ignoring overlapping field "isTerminated_" */
/* DWARF original prototype: void processCommandLine(LinuxService * this, int argc, char * * argv,
   char * ServiceName, bool isSignalRegist) */

void __thiscall
nsl::LinuxService::_ZN3nsl12LinuxService18processCommandLineEiPPcS1_b
          (LinuxService *this,int argc,char **argv,char *ServiceName,bool isSignalRegist)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  LinuxService *pLVar4;
  char *pcVar5;
  
                    /* Unresolved local var: char * pszCmdLine@[???]
                       Unresolved local var: bool ret@[???] */
  puts("In LinuxService::processCommandLine");
  ServiceInfo::_ZN3nsl11ServiceInfo7setInfoEPKcS2_S2_S2_
            (&this->super_ServiceInfo,"ChannelBridge","ChannelBridge",*argv,argv[1]);
  if (isSignalRegist) {
    (*(this->super_IPlatform)._vptr_IPlatform[2])(this);
  }
  (*(this->super_IPlatform)._vptr_IPlatform[0xe])(this,ServiceName);
  pcVar5 = argv[2];
  strncpy(this->m_command,pcVar5,0x1e);
  printf("ServiceName=\'%s\'\n",ServiceName);
  memset(gServiceName,0,0x14);
  strcpy(gServiceName,ServiceName);
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
              pcVar2 = strstr(pcVar5,"mess");
              if (pcVar2 == (char *)0x0) {
                pcVar5 = strstr(pcVar5,"info");
                if (pcVar5 != (char *)0x0) {
                  (*(this->super_IPlatform)._vptr_IPlatform[0xd])(this,0);
                }
              }
              else {
                (*(this->super_IPlatform)._vptr_IPlatform[7])(this,argv[3]);
              }
            }
            else {
              Neof_sendSuspendSignal();
            }
          }
          else {
            bVar1 = Neof_sendTerminateSignal(ServiceName);
            if (bVar1) {
              puts("Neof_sendTerminateSignal return OK");
              _ZN3nsl10delete_pidEv();
            }
            else {
              puts("Neof_sendTerminateSignal return FAIL");
            }
          }
        }
        else {
          puts(&DAT_0815f680);
          _evlog("ProcessCommandLine5");
          iVar3 = (**(this->super_IPlatform)._vptr_IPlatform)(this);
          if ((char)iVar3 != '\x01') {
            pLVar4 = _ZN3nsl12LinuxService11getInstanceEv();
            pcVar5 = ServiceInfo::getConfigFileName(&pLVar4->super_ServiceInfo);
            printf("There is not %s config_file\n",pcVar5);
            return;
          }
          ServiceInfo::setRunAsService(&this->super_ServiceInfo,true);
          (*(this->super_IPlatform)._vptr_IPlatform[5])(this);
        }
      }
      else {
        _evlog("ProcessCommandLine4");
        iVar3 = (**(this->super_IPlatform)._vptr_IPlatform)(this);
        if ((char)iVar3 != '\x01') {
          pLVar4 = _ZN3nsl12LinuxService11getInstanceEv();
          pcVar5 = ServiceInfo::getConfigFileName(&pLVar4->super_ServiceInfo);
          printf("There is not %s config_file\n",pcVar5);
          return;
        }
        iVar3 = (*(this->super_IPlatform)._vptr_IPlatform[1])(this);
        if ((char)iVar3 != '\0') {
          pLVar4 = _ZN3nsl12LinuxService11getInstanceEv();
          pcVar5 = ServiceInfo::getChannelName(&pLVar4->super_ServiceInfo);
          printf("Process(%s) is already operated.\n",pcVar5);
          return;
        }
        ServiceInfo::setRunAsService(&this->super_ServiceInfo,false);
        (*(this->super_IPlatform)._vptr_IPlatform[5])(this);
      }
    }
    else {
      _evlog("ProcessCommandLine3");
      (*(this->super_IPlatform)._vptr_IPlatform[4])(this);
    }
  }
  else {
    _evlog("ProcessCommandLine2");
    (*(this->super_IPlatform)._vptr_IPlatform[3])(this);
  }
  puts("Out LinuxService::processCommandLine");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp)（约第 200 行）：

```cpp
void nsl::LinuxService::processCommandLine(int argc, char** argv, char* ServiceName, bool isSignalRegist)
{
    puts("In LinuxService::processCommandLine");
    setInfo("ChannelBridge", "ChannelBridge", *argv, argv[1]);
    if (isSignalRegist)
    {
        prepareStart();
    }
    readConfig(ServiceName);
    char* pszCmdLine = argv[2];
    strncpy(m_command, pszCmdLine, 0x1e);
    printf("ServiceName='%s'\n", ServiceName);
    memset(gServiceName, 0, 0x14);
    strcpy(gServiceName, ServiceName);
    if (strstr(pszCmdLine, "install") != NULL)
    {
        _evlog("ProcessCommandLine2");
        install();
    }
    else if (strstr(pszCmdLine, "remove") != NULL)
    {
        _evlog("ProcessCommandLine3");
        remove();
    }
    else if (strstr(pszCmdLine, "run") != NULL || strstr(pszCmdLine, "test") != NULL)
    {
        _evlog("ProcessCommandLine4");
        if (checkConfigFile() != true)
        {
            printf("There is not %s config_file\n", getInstance()->getConfigFileName());
            return;
        }
        if (checkPIDFile() != false)
        {
            printf("Process(%s) is already operated.\n", getInstance()->getChannelName());
            return;
        }
        setRunAsService(false);
        start();
    }
    else if (strstr(pszCmdLine, "start") != NULL)
    {
        puts("\xB8\xAE\xB4\xAA\xBD\xBA \xBC\xAD\xBA\xF1\xBD\xBA \xBD\xC3\xC0\xDB~");
        _evlog("ProcessCommandLine5");
        if (checkConfigFile() != true)
        {
            printf("There is not %s config_file\n", getInstance()->getConfigFileName());
            return;
        }
        setRunAsService(true);
        start();
    }
    else if (strstr(pszCmdLine, "stop") != NULL)
    {
        bool bRet = Neof_sendTerminateSignal(ServiceName);
        if (bRet)
        {
            puts("Neof_sendTerminateSignal return OK");
        }
        else
        {
            puts("Neof_sendTerminateSignal return FAIL");
        }
        if (bRet)
        {
            delete_pid();
        }
    }
    else if (strstr(pszCmdLine, "pause") != NULL)
    {
        Neof_sendSuspendSignal();
    }
    else if (strstr(pszCmdLine, "mess") != NULL)
    {
        sendBroadCastMessage(argv[3]);
    }
    else if (strstr(pszCmdLine, "info") != NULL)
    {
        SendInfoMessage(ENUM_OTP);
    }
    puts("Out LinuxService::processCommandLine");
}
```
