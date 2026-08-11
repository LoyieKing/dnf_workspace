# _ZN17CTcpNetworkThread6attachEP13CTcpNetSystem

`CTcpNetworkThread::attach(CTcpNetSystem*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805d7c4` | `0x9a` | `0x80616a6` | `0x9d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN17CTcpNetworkThread6attachEP13CTcpNetSystem+0x98>
+je     <T> <_ZN17CTcpNetworkThread6attachEP13CTcpNetSystem+0x9a>
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0xc(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x10(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem14Get_TcpHandlerEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x14(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x18(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x1c(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSendQPacketEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x20(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpSendQLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x24(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpSendBLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x28(%edx)
+jmp    <T> <_ZN17CTcpNetworkThread6attachEP13CTcpNetSystem+0x9b>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetworkThread::attach(CTcpNetSystem*) */

void __thiscall
CTcpNetworkThread::_ZN17CTcpNetworkThread6attachEP13CTcpNetSystem
          (CTcpNetworkThread *this,CTcpNetSystem *param_1)

{
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *this_00;
  undefined4 uVar1;
  
  if (param_1 != (CTcpNetSystem *)0x0) {
    *(CTcpNetSystem **)(this + 0xc) = param_1;
    this_00 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
               *)CTcpNetSystem::Get_TcpSwapQPacket(param_1);
    uVar1 = CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            ::GetRecvQ(this_00);
    *(undefined4 *)(this + 0x10) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpHandler(param_1);
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpRecvQLock(param_1);
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpRecvBLock(param_1);
    *(undefined4 *)(this + 0x1c) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpSendQPacket(param_1);
    *(undefined4 *)(this + 0x20) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpSendQLock(param_1);
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar1 = CTcpNetSystem::Get_TcpSendBLock(param_1);
    *(undefined4 *)(this + 0x28) = uVar1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpNetworkThread.cpp](source/DNFServer/GameServer/DBMW/DNFTcpNetworkThread.cpp)（约第 28 行）：

```cpp
void CTcpNetworkThread::attach(CTcpNetSystem* net)
{
    if (!net)
        return;
    m_net = net;
    m_recvQ = net->Get_TcpSwapQPacket()->GetRecvQ();
    m_handler = net->Get_TcpHandler();
    m_recvQLock = net->Get_TcpRecvQLock();
    m_recvBLock = net->Get_TcpRecvBLock();
    m_sendQ = net->Get_TcpSendQPacket();
    m_sendQLock = net->Get_TcpSendQLock();
    m_sendBLock = net->Get_TcpSendBLock();
}
```
