# _ZNK11CUdpHandler14RecvFromClientEPcPiPjPt

`CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8055bae` | `0x273` | `0x80639c8` | `0x274` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,165 +1,165 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1d>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
-movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
-lea    -0x54(%ebp),%ecx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26c>
+movl   $0x10,-0x3c(%ebp)
+lea    -0x38(%ebp),%ecx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+lea    -0x3c(%ebp),%ebx
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <recvfrom>
 mov    0x10(%ebp),%edx
 mov    %eax,(%edx)
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x12b>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    $0x58,%eax
 je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x86>
 cmp    $0x68,%eax
 je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xca>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10e>
 movl   $"Error fd not a socket",(%esp)
 call   <T> <puts>
 movl   $0xaf,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromClientEPcPiPjPtE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error fd not a socket\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
 movl   $"Error connection reset - host not reachable",(%esp)
 call   <T> <puts>
 movl   $0xb6,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromClientEPcPiPjPtE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error connection reset - host not reachable\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Hm! Time out Or Socket Error = %d\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26c>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jg     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x192>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"Socket closed? Recv size = %d\n",(%esp)
 call   <T> <printf>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
 movl   $0xc6,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromClientEPcPiPjPtE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"Socket closed? Recv size = %d\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
-movzwl -0x52(%ebp),%eax
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26c>
+movzwl -0x36(%ebp),%eax
 movzwl %ax,%eax
 mov    %eax,(%esp)
 call   <T> <ntohs>
 mov    0x18(%ebp),%edx
 mov    %ax,(%edx)
-mov    -0x50(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <ntohl>
 mov    0x14(%ebp),%edx
 mov    %eax,(%edx)
-mov    -0x50(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_ntoa>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x4c8,%ax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1f5>
+mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x4c9,%ax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1f5>
+mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x44f,%ax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1f5>
+mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x450,%ax
-jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25b>
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x267>
 mov    0x10(%ebp),%eax
 mov    (%eax),%edi
 mov    0x18(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
+mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0xd1,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromClientEPcPiPjPtE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",0x8(%esp)
 movl   $"./log/Udp",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 add    0xc(%ebp),%eax
 movb   $0x0,(%eax)
 mov    $0x1,%eax
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26c>
+mov    $0x0,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint16_t uVar4;
  undefined4 uVar5;
  ssize_t sVar6;
  uint32_t uVar7;
  socklen_t local_5c;
  undefined1 local_58 [16];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  char *local_28;
  char *local_24;
  int local_20;
  
  if (*(int *)this == -1) {
    uVar5 = 0;
  }
  else {
    local_5c = 0x10;
    sVar6 = recvfrom(*(int *)this,param_1,*param_2,0,(sockaddr *)local_58,&local_5c);
    *param_2 = sVar6;
    if (*param_2 == -1) {
      local_20 = getErrno();
      if (local_20 == 0x58) {
        puts("Error fd not a socket");
        CMyFileLog::CMyFileLog(local_48,"RecvFromClient",0xaf);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/UdpErr","Error fd not a socket\n");
      }
      else if (local_20 == 0x68) {
        puts("Error connection reset - host not reachable");
        CMyFileLog::CMyFileLog(local_40,"RecvFromClient",0xb6);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_40,"./log/UdpErr","Error connection reset - host not reachable\n");
      }
      else {
        printf("Hm! Time out Or Socket Error = %d\n",local_20);
      }
      uVar5 = 0;
    }
    else if (*param_2 < 1) {
      printf("Socket closed? Recv size = %d\n",*param_2);
      iVar3 = *param_2;
      CMyFileLog::CMyFileLog(local_38,"RecvFromClient",0xc6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/UdpErr","Socket closed? Recv size = %d\n",iVar3);
      uVar5 = 0;
    }
    else {
      uVar4 = ntohs(local_58._2_2_);
      *param_4 = uVar4;
      uVar7 = ntohl(local_58._4_4_);
      *param_3 = uVar7;
      local_28 = inet_ntoa((in_addr)local_58._4_4_);
      local_24 = param_1;
      if ((((*(short *)param_1 == 0x4c8) || (*(short *)param_1 == 0x4c9)) ||
          (*(short *)param_1 == 0x44f)) || (*(short *)param_1 == 0x450)) {
        iVar3 = *param_2;
        uVar1 = *param_4;
        uVar2 = *(ushort *)param_1;
        CMyFileLog::CMyFileLog(local_30,"RecvFromClient",0xd1);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_30,"./log/Udp",
                   "PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",(uint)uVar2,
                   local_28,(uint)uVar1,iVar3);
      }
      param_1[*param_2] = '\0';
      uVar5 = 1;
    }
  }
  return uVar5;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Manager/DNFUdpHandler.cpp, source/DNFServer/GameServer/Manager/DNFUdpHandler.cpp, source/DNFServer/GameServer/Manager/DNFUdpHandler.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/Thread.h, source/DNFServer/GameServer/Manager/DNFMonitorServer.h, source/DNFServer/GameServer/Manager/DNFSignal.h, source/DNFServer/GameServer/Manager/DNFAppStartInit.h 等 256 个文件*
