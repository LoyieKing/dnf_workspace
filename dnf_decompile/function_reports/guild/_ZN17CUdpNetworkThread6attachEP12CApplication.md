# _ZN17CUdpNetworkThread6attachEP12CApplication

`CUdpNetworkThread::attach(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808c59e` | `0x52` | `0x8065ea0` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN17CUdpNetworkThread6attachEP12CApplication+0x50>
+je     <T> <_ZN17CUdpNetworkThread6attachEP12CApplication+0x48>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication18Get_UdpPacketRecvQEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0xc(%edx)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x10(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12Get_UdpQLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x14(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12Get_UdpBLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x18(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpNetworkThread::attach(CApplication*) */

void __thiscall
CUdpNetworkThread::_ZN17CUdpNetworkThread6attachEP12CApplication
          (CUdpNetworkThread *this,CApplication *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (CApplication *)0x0) {
    uVar1 = CApplication::Get_UdpPacketRecvQ(param_1);
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar1 = CApplication::Get_UdpHandler(param_1);
    *(undefined4 *)(this + 0x10) = uVar1;
    uVar1 = CApplication::Get_UdpQLock(param_1);
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar1 = CApplication::Get_UdpBLock(param_1);
    *(undefined4 *)(this + 0x18) = uVar1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFNetworkThread.cpp](source/DNFServer/GameServer/DBMW/DNFNetworkThread.cpp)（约第 39 行）：

```cpp
void CNetworkThread::attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketRecvQ();
    m_udpHandler = app->Get_UdpHandler();
    m_udpQLock = app->Get_QLock();
    m_udpBLock = app->Get_BLock();
}
```
