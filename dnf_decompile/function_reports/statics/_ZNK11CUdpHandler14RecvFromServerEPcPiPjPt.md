# _ZNK11CUdpHandler14RecvFromServerEPcPiPjPt

`CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80607dc` | `0x1ca` | `0x805e18c` | `0x1bf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,110 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x54,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1c4>
-movl   $0x10,-0x38(%ebp)
-lea    -0x38(%ebp),%ebx
-lea    -0x34(%ebp),%ecx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1b9>
+movl   $0x10,-0x14(%ebp)
+lea    -0x24(%ebp),%ecx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
+lea    -0x14(%ebp),%ebx
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <recvfrom>
-mov    0x10(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
-mov    (%eax),%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x12b>
+mov    -0x10(%ebp),%edx
+mov    %edx,(%eax)
+cmpl   $0xffffffff,-0x10(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x127>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x58,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x86>
-cmp    $0x68,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xca>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10e>
+cmpl   $0x58,-0xc(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xc0>
 movl   $"Error fd not a socket",(%esp)
 call   <T> <puts>
 movl   $0x16d,0x8(%esp)
 movl   $"RecvFromServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error fd not a socket\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
+cmpl   $0x68,-0xc(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10a>
 movl   $"Error connection reset - host not reachable",(%esp)
 call   <T> <puts>
 movl   $0x174,0x8(%esp)
 movl   $"RecvFromServer",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error connection reset - host not reachable\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Hm! Time out Or Socket Error = %d\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1c4>
-mov    0x10(%ebp),%eax
-mov    (%eax),%eax
-test   %eax,%eax
-jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x18f>
-mov    0x10(%ebp),%eax
-mov    (%eax),%eax
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1b9>
+cmpl   $0x0,-0x10(%ebp)
+jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x184>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Socket closed? Recv size = %d\n",(%esp)
 call   <T> <printf>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
 movl   $0x184,0x8(%esp)
 movl   $"RecvFromServer",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Socket closed? Recv size = %d\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1c4>
-movzwl -0x32(%ebp),%eax
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1b9>
+movzwl -0x22(%ebp),%eax
 movzwl %ax,%eax
 mov    %eax,(%esp)
 call   <T> <ntohs>
 mov    0x18(%ebp),%edx
 mov    %ax,(%edx)
-mov    -0x30(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <ntohl>
 mov    0x14(%ebp),%edx
 mov    %eax,(%edx)
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 add    0xc(%ebp),%eax
 movb   $0x0,(%eax)
 mov    $0x1,%eax
-add    $0x54,%esp
+add    $0x64,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  int iVar1;
  uint16_t uVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  uint32_t uVar5;
  socklen_t local_3c;
  sockaddr local_38;
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    uVar3 = 0;
  }
  else {
    local_3c = 0x10;
    sVar4 = recvfrom(*(int *)(this + 4),param_1,*param_2,0,&local_38,&local_3c);
    *param_2 = sVar4;
    if (*param_2 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x58) {
        puts("Error fd not a socket");
        CMyFileLog::CMyFileLog(local_28,"RecvFromServer",0x16d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_28,"./log/UdpErr","Error fd not a socket\n");
      }
      else if (local_10 == 0x68) {
        puts("Error connection reset - host not reachable");
        CMyFileLog::CMyFileLog(local_20,"RecvFromServer",0x174);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_20,"./log/UdpErr","Error connection reset - host not reachable\n");
      }
      else {
        printf("Hm! Time out Or Socket Error = %d\n",local_10);
      }
      uVar3 = 0;
    }
    else if (*param_2 < 1) {
      printf("Socket closed? Recv size = %d\n",*param_2);
      iVar1 = *param_2;
      CMyFileLog::CMyFileLog(local_18,"RecvFromServer",0x184);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_18,"./log/UdpErr","Socket closed? Recv size = %d\n",iVar1);
      uVar3 = 0;
    }
    else {
      uVar2 = ntohs(local_38.sa_data._0_2_);
      *param_4 = uVar2;
      uVar5 = ntohl(local_38.sa_data._2_4_);
      *param_3 = uVar5;
      param_1[*param_2] = '\0';
      uVar3 = 1;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/COServer/DNFUdpHandler.cpp, source/DNFServer/GameServer/DBMW/DNFUdpHandler.cpp, source/DNFServer/GameServer/Guild/DNFUdpHandler.cpp, source/DNFServer/GameServer/Manager/DNFUdpHandler.cpp, source/DNFServer/GameServer/Monitor/DNFUdpHandler.cpp, source/DNFServer/GameServer/Statics/DNFUdpHandler.cpp, source/DNFServer/GameServer/COServer/DNFAppConfig.h, source/DNFServer/GameServer/COServer/DNFApplication.h 等 503 个文件*
