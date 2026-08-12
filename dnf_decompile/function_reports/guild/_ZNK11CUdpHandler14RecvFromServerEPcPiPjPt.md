# _ZNK11CUdpHandler14RecvFromServerEPcPiPjPt

`CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80507e8` | `0x25d` | `0x80885d6` | `0x25d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,157 +1,157 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1e>
 mov    $0x0,%eax
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
 movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
 lea    -0x54(%ebp),%ecx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
+lea    -0x58(%ebp),%ebx
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
 jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x12d>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    $0x58,%eax
 je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x88>
 cmp    $0x68,%eax
 je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xcc>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x110>
 movl   $"Error fd not a socket",(%esp)
 call   <T> <puts>
 movl   $0x156,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromServerEPcPiPjPtE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error fd not a socket\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
 movl   $"Error connection reset - host not reachable",(%esp)
 call   <T> <puts>
 movl   $0x15d,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromServerEPcPiPjPtE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Error connection reset - host not reachable\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Hm! Time out Or Socket Error = %d\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x194>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"Socket closed? Recv size = %d\n",(%esp)
 call   <T> <printf>
 mov    0x10(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x16d,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromServerEPcPiPjPtE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Socket closed? Recv size = %d\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
 movzwl -0x52(%ebp),%eax
 movzwl %ax,%eax
 mov    %eax,(%esp)
 call   <T> <ntohs>
 mov    0x18(%ebp),%edx
 mov    %ax,(%edx)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <ntohl>
 mov    0x14(%ebp),%edx
 mov    %eax,(%edx)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_ntoa>
 mov    %eax,-0x24(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x4c8,%ax
 je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1e5>
 mov    -0x20(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x4c9,%ax
 jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x245>
 mov    0x10(%ebp),%eax
 mov    (%eax),%edi
 mov    0x18(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%esi
 mov    -0x20(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0x179,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler14RecvFromServerEPcPiPjPtE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",0x8(%esp)
 movl   $"./log/Udp",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 add    0xc(%ebp),%eax
 movb   $0x0,(%eax)
 mov    $0x1,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
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
  
  if (*(int *)(this + 4) == -1) {
    uVar5 = 0;
  }
  else {
    local_5c = 0x10;
    sVar6 = recvfrom(*(int *)(this + 4),param_1,*param_2,0,(sockaddr *)local_58,&local_5c);
    *param_2 = sVar6;
    if (*param_2 == -1) {
      local_20 = getErrno();
      if (local_20 == 0x58) {
        puts("Error fd not a socket");
        CMyFileLog::CMyFileLog(local_48,"RecvFromServer",0x156);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/UdpErr","Error fd not a socket\n");
      }
      else if (local_20 == 0x68) {
        puts("Error connection reset - host not reachable");
        CMyFileLog::CMyFileLog(local_40,"RecvFromServer",0x15d);
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
      CMyFileLog::CMyFileLog(local_38,"RecvFromServer",0x16d);
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
      if ((*(short *)param_1 == 0x4c8) || (*(short *)param_1 == 0x4c9)) {
        iVar3 = *param_2;
        uVar1 = *param_4;
        uVar2 = *(ushort *)param_1;
        CMyFileLog::CMyFileLog(local_30,"RecvFromServer",0x179);
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

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFUdpHandler.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 285 个文件*
