# _ZN11CUdpHandler16InitClientSocketEv

`CUdpHandler::InitClientSocket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806026e` | `0xb0` | `0x805dc18` | `0xa5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,40 @@
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
 movl   $"Could not create a UDP socket : %d\n",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN11CUdpHandler16InitClientSocketEv+0xaa>
+jmp    <T> <_ZN11CUdpHandler16InitClientSocketEv+0xa3>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_Z11SetNonBlocki>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%ebx
 movl   $0xa6,0x8(%esp)
 movl   $"InitClientSocket",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"Opened port with fd %d\n",0x8(%esp)
 movl   $"./log/Udp",0x4(%esp)
-lea    -0x14(%ebp),%eax
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
    SetNonBlock(*(int *)(this + 4));
    uVar2 = *(undefined4 *)(this + 4);
    CMyFileLog::CMyFileLog(local_18,"InitClientSocket",0xa6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Udp","Opened port with fd %d\n",uVar2);
    uVar2 = *(undefined4 *)(this + 4);
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUdpHandler.cpp](source/DNFServer/GameServer/COServer/DNFUdpHandler.cpp)（约第 61 行）：

```cpp
int CUdpHandler::InitClientSocket()
{
    m_clientSock = socket(2, 2, 0x11);
    if (m_clientSock == -1)
    {
        printf("Could not create a UDP socket : %d\n", getErrno());
        return -1;
    }
    DNF_LOG_SCOPE_LINE(0x8f, "./log/Udp", "Opened port with fd %d\n", m_clientSock);
    return m_clientSock;
}
```
