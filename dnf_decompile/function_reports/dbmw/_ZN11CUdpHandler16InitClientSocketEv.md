# _ZN11CUdpHandler16InitClientSocketEv

`CUdpHandler::InitClientSocket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8058f6c` | `0xa2` | `0x80e5952` | `0x97` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 movl   $0x11,0x8(%esp)
 movl   $0x2,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <socket>
 mov    0x8(%ebp),%edx
 mov    %eax,0x4(%edx)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN11CUdpHandler16InitClientSocketEv+0x56>
+jne    <T> <_ZN11CUdpHandler16InitClientSocketEv+0x4f>
 call   <T> <_Z8getErrnov>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-movl   $"Could not create a UDP socket : %d\n",(%esp)
+movl   $"udp client socket error : %d",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN11CUdpHandler16InitClientSocketEv+0x9c>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%ebx
+jmp    <T> <_ZN11CUdpHandler16InitClientSocketEv+0x95>
 movl   $0x8f,0x8(%esp)
 movl   $&_ZZN11CUdpHandler16InitClientSocketEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Opened port with fd %d\n",0x8(%esp)
-movl   $"./log/Udp",0x4(%esp)
-lea    -0x14(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"udp client socket = %d",0x8(%esp)
+movl   $"./log/UdpClient",0x4(%esp)
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::InitClientSocket() */

undefined4 __thiscall CUdpHandler::_ZN11CUdpHandler16InitClientSocketEv(CUdpHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  CMyFileLog local_18 [8];
  undefined4 local_10;
  
  iVar1 = socket(2,2,0x11);
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 4) == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(this + 4);
    CMyFileLog::CMyFileLog(local_18,"InitClientSocket",0x8f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Udp","Opened port with fd %d\n",uVar2);
    uVar2 = *(undefined4 *)(this + 4);
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFUdpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFUdpHandler.cpp)（约第 63 行）：

```cpp
int CUdpHandler::InitClientSocket()
{
    m_clientSock = socket(AF_INET, SOCK_DGRAM, 0x11);
    if (m_clientSock == -1)
    {
        printf("udp client socket error : %d", getErrno());
        return -1;
    }
    CMyFileLog log(__FUNCTION__, 0x8f);
    log("./log/UdpClient", "udp client socket = %d", m_clientSock);
    return m_clientSock;
}
```
