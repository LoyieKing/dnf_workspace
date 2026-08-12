# _ZN11CUdpHandler16InitServerSocketEi

`CUdpHandler::InitServerSocket(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80501bc` | `0x1b8` | `0x8087b4e` | `0x1ad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,112 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x58,%esp
 movl   $0x11,0x8(%esp)
 movl   $0x2,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <socket>
-mov    0x8(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x58>
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x56>
 call   <T> <_Z8getErrnov>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Could not create a UDP socket : %d\n",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x1b1>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x1ab>
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movw   $0x2,-0x24(%ebp)
+movw   $0x2,-0x20(%ebp)
 movl   $0x0,(%esp)
 call   <T> <htonl>
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 movzwl %ax,%eax
 mov    %eax,(%esp)
 call   <T> <htons>
-mov    %ax,-0x22(%ebp)
-lea    -0x24(%ebp),%edx
+mov    %ax,-0x1e(%ebp)
+lea    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x10,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <bind>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x12b>
+je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x125>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x62,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0xda>
-cmp    $0x63,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0xef>
-test   %eax,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x121>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xfd>
+cmpl   $0x62,-0xc(%ebp)
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xe0>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Port %d for receiving UDP is in use\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
+cmpl   $0x63,-0xc(%ebp)
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xf4>
 movl   $"Cannot assign requested address",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Could not bind UDP receive port. Error= %d , strerror = %s\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
-nop
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,(%eax)
-movl   $0xf4240,-0x28(%ebp)
+movl   $0xf4240,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x4,0x10(%esp)
-lea    -0x28(%ebp),%edx
+lea    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x8,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <setsockopt>
-mov    -0x28(%ebp),%esi
-mov    0x8(%ebp),%eax
-mov    (%eax),%ebx
 movl   $0x6e,0x8(%esp)
 movl   $&_ZZN11CUdpHandler16InitServerSocketEiE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Opened port %d with fd %d, recv buf size %d\n",0x8(%esp)
 movl   $"./log/Udp",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::InitServerSocket(int) */

undefined4 __thiscall
CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi(CUdpHandler *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_2c;
  sockaddr local_28;
  CMyFileLog local_18 [8];
  int local_10;
  
  iVar2 = socket(2,2,0x11);
  *(int *)this = iVar2;
  if (*(int *)this == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar3 = 0xffffffff;
  }
  else {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data._2_4_ = htonl(0);
    local_28.sa_data._0_2_ = htons((uint16_t)param_1);
    iVar2 = bind(*(int *)this,&local_28,0x10);
    if (iVar2 != 0) {
      local_10 = getErrno();
      if (local_10 == 0x62) {
        printf("Port %d for receiving UDP is in use\n",param_1);
      }
      else if (local_10 == 99) {
        puts("Cannot assign requested address");
      }
      else if (local_10 != 0) {
        pcVar4 = strerror(local_10);
        printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",local_10,pcVar4);
      }
      *(undefined4 *)this = 0xffffffff;
    }
    local_2c = 1000000;
    setsockopt(*(int *)(this + 4),1,8,&local_2c,4);
    uVar1 = local_2c;
    uVar3 = *(undefined4 *)this;
    CMyFileLog::CMyFileLog(local_18,"InitServerSocket",0x6e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/Udp","Opened port %d with fd %d, recv buf size %d\n",param_1,uVar3,
               uVar1);
    uVar3 = *(undefined4 *)this;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUdpHandler.cpp](source/DNFServer/GameServer/Monitor/DNFUdpHandler.cpp)（约第 40 行）：

```cpp
int CUdpHandler::InitServerSocket(int port)
{
    int fd = socket(AF_INET, SOCK_DGRAM, 0x11);
    m_sock = fd;
    if (m_sock == -1)
    {
        printf("Could not create a UDP socket : %d\n", getErrno());
        return -1;
    }
    sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(0);
    addr.sin_port = htons((unsigned short)port);
    if (bind(m_sock, (sockaddr*)&addr, 0x10) != 0)
    {
        int err = getErrno();
        if (err == 0x62)
        {
            printf("Port %d for receiving UDP is in use\n", port);
        }
        else if (err == 99)
        {
            puts("Cannot assign requested address");
        }
        else if (err != 0)
        {
            printf("Could not bind UDP receive port. Error= %d , strerror = %s\n", err,
                   strerror(err));
        }
        m_sock = -1;
    }
    unsigned int rcvbuf = 0xf4240;
    setsockopt(m_clientSock, SOL_SOCKET, SO_RCVBUF, (char*)&rcvbuf, 4);
    CMyFileLog log(__FUNCTION__, 0x6e);
    log("./log/Udp", "Opened port %d with fd %d, recv buf size %d\n", port, m_sock,
        rcvbuf);
    return m_sock;
}
```
