# _ZN14CPacketDecoder6AttachEP12CApplication

`CPacketDecoder::Attach(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807d328` | `0xa8` | `0x8067f46` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %ebx
+sub    $0x14,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN14CPacketDecoder6AttachEP12CApplication+0xa6>
+je     <T> <_ZN14CPacketDecoder6AttachEP12CApplication+0xb3>
+mov    0x8(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication19Get_UdpPacketParseQEv>
-mov    0x8(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0xc(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12Get_UdpQLockEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0x4(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0x8(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12Get_UdpBLockEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0x8(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0x10(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0x10(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0x14(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0x14(%edx)
+mov    %eax,(%ebx)
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    0x8(%ebp),%edx
-mov    %eax,0x18(%edx)
-leave
+mov    %eax,(%ebx)
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::Attach(CApplication*) */

void __thiscall
CPacketDecoder::_ZN14CPacketDecoder6AttachEP12CApplication
          (CPacketDecoder *this,CApplication *param_1)

{
  undefined4 uVar1;
  CTcpNetSystem *pCVar2;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *this_00;
  
  if (param_1 != (CApplication *)0x0) {
    uVar1 = CApplication::Get_UdpPacketParseQ(param_1);
    *(undefined4 *)this = uVar1;
    pCVar2 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(param_1);
    this_00 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
               *)CTcpNetSystem::Get_TcpSwapQPacket(pCVar2);
    uVar1 = CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            ::GetParseQ(this_00);
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar1 = CApplication::_ZN12CApplication12Get_UdpQLockEv(param_1);
    *(undefined4 *)(this + 4) = uVar1;
    uVar1 = CApplication::_ZN12CApplication12Get_UdpBLockEv(param_1);
    *(undefined4 *)(this + 8) = uVar1;
    pCVar2 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(param_1);
    uVar1 = CTcpNetSystem::Get_TcpRecvQLock(pCVar2);
    *(undefined4 *)(this + 0x10) = uVar1;
    pCVar2 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(param_1);
    uVar1 = CTcpNetSystem::Get_TcpRecvBLock(pCVar2);
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar1 = CApplication::Get_ServerHandler(param_1);
    *(undefined4 *)(this + 0x18) = uVar1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketDecoder.cpp](source/DNFServer/GameServer/Monitor/DNFPacketDecoder.cpp)（约第 180 行）：

```cpp
void CPacketDecoder::Attach(CApplication* app)
{
    if (app != 0)
    {
        *(std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*,
            std::allocator<CUdpRecvBuffer*> > >**)((char*)this + 0) =
            app->Get_UdpPacketParseQ();
        *(void**)((char*)this + 0xc) =
            app->Get_TcpNetSystem()->Get_TcpSwapQPacket()->GetParseQ();
        *(void**)((char*)this + 4) = app->Get_UdpQLock();
        *(void**)((char*)this + 8) = app->Get_UdpBLock();
        *(void**)((char*)this + 0x10) = app->Get_TcpNetSystem()->Get_TcpRecvQLock();
        *(void**)((char*)this + 0x14) = app->Get_TcpNetSystem()->Get_TcpRecvBLock();
        *(void**)((char*)this + 0x18) = app->Get_ServerHandler();
    }
}
```
