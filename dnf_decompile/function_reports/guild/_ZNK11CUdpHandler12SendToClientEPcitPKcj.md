# _ZNK11CUdpHandler12SendToClientEPcitPKcj

`CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80504de` | `0x309` | `0x8088266` | `0x318` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,189 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x74,%esp
 mov    0x14(%ebp),%eax
 mov    %ax,-0x4c(%ebp)
 cmpl   $0x0,0x18(%ebp)
 jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x24>
 cmpl   $0x0,0x1c(%ebp)
 jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x24>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x312>
 cmpl   $0x0,0x18(%ebp)
 je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x38>
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_addr>
 mov    %eax,0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x4c>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x312>
 cmpw   $0x0,-0x4c(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x85>
+je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0xda>
+movl   $0x10,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+movw   $0x2,-0x48(%ebp)
+lea    -0x48(%ebp),%eax
+lea    0x2(%eax),%ebx
+movzwl -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <htons>
+mov    %ax,(%ebx)
+lea    -0x48(%ebp),%eax
+add    $0x2,%eax
+lea    0x2(%eax),%ebx
+mov    0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <ntohl>
+mov    %eax,(%ebx)
+mov    0x10(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+movl   $0x10,0x14(%esp)
+lea    -0x48(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+movl   $0x0,0xc(%esp)
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <sendto>
+mov    %eax,-0x10(%ebp)
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x106>
 cmpl   $0x0,0x1c(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0xf9>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x106>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x0,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <send>
 mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0xf9>
-movl   $0x10,0x8(%esp)
-movl   $0x0,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memset>
-movw   $0x2,-0x48(%ebp)
-movzwl -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <htons>
-mov    %ax,-0x46(%ebp)
-mov    0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <ntohl>
-mov    %eax,-0x44(%ebp)
-lea    -0x48(%ebp),%ecx
-mov    0x10(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-movl   $0x10,0x14(%esp)
-mov    %ecx,0x10(%esp)
-movl   $0x0,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <sendto>
-mov    %eax,-0x10(%ebp)
 cmpl   $0xffffffff,-0x10(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x242>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x251>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    $0x61,%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x17d>
+je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x137>
 cmp    $0x61,%eax
-jl     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
+jl     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1d7>
 sub    $0x6f,%eax
 cmp    $0x2,%eax
-ja     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
+ja     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1d7>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x185>
+movl   $"err EAFNOSUPPORT in send",(%esp)
+call   <T> <puts>
+movl   $0x119,0x8(%esp)
+movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
+movl   $"./log/UdpErr",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x247>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
 call   <T> <printf>
 movl   $0x113,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
-movl   $"err EAFNOSUPPORT in send",(%esp)
-call   <T> <puts>
-movl   $0x119,0x8(%esp)
-movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x247>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"err = %d , strerror = %s in send\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 movl   $0x11f,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"err = %d , strerror = %s in send\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x312>
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x291>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2a0>
 movl   $"no data sent in send",(%esp)
 call   <T> <puts>
 movl   $0x128,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"no data sent in send\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x312>
+mov    -0x10(%ebp),%eax
+cmp    0x10(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x30d>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fe>
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Only %s out of %d bytes sent\n",(%esp)
 call   <T> <printf>
 movl   $0x133,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Only %s out of %d bytes sent\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x312>
 mov    $0x1,%eax
 add    $0x74,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const */

undefined4 __thiscall
CUdpHandler::_ZNK11CUdpHandler12SendToClientEPcitPKcj
          (CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  sockaddr local_4c;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int local_14;
  int local_10;
  
  if ((param_4 == (char *)0x0) && (param_5 == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_4 != (char *)0x0) {
      param_5 = inet_addr(param_4);
    }
    if (*(int *)this == -1) {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0) {
        if (param_5 == 0) {
          local_14 = send(*(int *)this,param_1,param_2,0);
        }
      }
      else {
        memset(&local_4c,0,0x10);
        local_4c.sa_family = 2;
        local_4c.sa_data._0_2_ = htons(param_3);
        local_4c.sa_data._2_4_ = ntohl(param_5);
        local_14 = sendto(*(int *)this,param_1,param_2,0,&local_4c,0x10);
      }
      if (local_14 == -1) {
        local_10 = getErrno();
        if (local_10 == 0x61) {
          puts("err EAFNOSUPPORT in send");
          CMyFileLog::CMyFileLog(local_34,"SendToClient",0x119);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_34,"./log/UdpErr","Error( EAFNOSUPPORT ) in send = %d\n",local_10);
        }
        else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
          pcVar2 = strerror(local_10);
          printf("err = %d , strerror = %s in send\n",local_10,pcVar2);
          pcVar2 = strerror(local_10);
          CMyFileLog::CMyFileLog(local_2c,"SendToClient",0x11f);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_2c,"./log/UdpErr","err = %d , strerror = %s in send\n",local_10,pcVar2);
        }
        else {
          printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",local_10);
          CMyFileLog::CMyFileLog(local_3c,"SendToClient",0x113);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_3c,"./log/UdpErr","Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n"
                     ,local_10);
        }
        uVar1 = 0;
      }
      else if (local_14 == 0) {
        puts("no data sent in send");
        CMyFileLog::CMyFileLog(local_24,"SendToClient",0x128);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_24,"./log/UdpErr","no data sent in send\n");
        uVar1 = 0;
      }
      else if (param_2 == local_14) {
        uVar1 = 1;
      }
      else {
        printf("Only %s out of %d bytes sent\n",local_14,param_2);
        CMyFileLog::CMyFileLog(local_1c,"SendToClient",0x133);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_1c,"./log/UdpErr","Only %s out of %d bytes sent\n",local_14,param_2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFUdpHandler.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 285 个文件*
