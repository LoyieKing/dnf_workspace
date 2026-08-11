# _ZN3nsl10RecvBuffer13ClearUsedMsgsEv

`nsl::RecvBuffer::ClearUsedMsgs()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80ba7a2` | `0x1c5` | `0x8082394` | `0x1b4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
-jmp    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x183>
+jmp    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x182>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6getUseEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x19e>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x19d>
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6getUseEv>
 test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x11e>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x123>
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x3,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x2,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x1,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x2c(%ebp)
-mov    &_ZN3nsl7Message5identE,%ebx
-mov    &_ZN3nsl7Message5identE+0x4,%esi
+mov    %eax,-0x1c(%ebp)
+mov    $&_ZN3nsl7Message5identE,%eax
+mov    (%eax),%esi
+mov    $&_ZN3nsl7Message5identE,%eax
+add    $0x4,%eax
+mov    (%eax),%edi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5dequeIPN3nsl7MessageESaIS2_EE4sizeEv>
-mov    %eax,%edi
+mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x38(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x24(%esp)
-mov    -0x34(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0x20(%esp)
-mov    -0x30(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x1c(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x18(%esp)
-mov    %ebx,0x10(%esp)
-mov    %esi,0x14(%esp)
-mov    %edi,0xc(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"force delete activeclose size(%d) ident(%d) ip(%d.%d.%d.%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE9pop_frontEv>
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 mov    0x34(%eax),%eax
-mov    -0x28(%ebp),%edx
+mov    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread16destroyOrderPoolEPNS_7MessageE>
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 mov    %eax,%edx
-add    -0x24(%ebp),%edx
+add    -0x30(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2c(%eax)
 mov    0x8(%ebp),%eax
-mov    0x2c(%eax),%edx
+mov    0x40(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x40(%eax),%eax
+mov    0x2c(%eax),%eax
 cmp    %eax,%edx
-jl     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x183>
+jg     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x182>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5dequeIPN3nsl7MessageESaIS2_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0xe>
-jmp    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x19f>
+jmp    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x19e>
 nop
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5dequeIPN3nsl7MessageESaIS2_EE5emptyEv>
-test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x1b8>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv+0x1bd>
-mov    $0x0,%eax
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool ClearUsedMsgs(RecvBuffer * this) */

bool __thiscall nsl::RecvBuffer::_ZN3nsl10RecvBuffer13ClearUsedMsgsEv(RecvBuffer *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  Message *this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  Message **ppMVar9;
  TCPUser *pTVar10;
  uchar *puVar11;
  byte *pbVar12;
  size_t sVar13;
  TraceLog *this_01;
  
                    /* Unresolved local var: Message * pRawMsg@[???]
                       Unresolved local var: int msgSize@[???] */
  while (bVar8 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::empty(&this->mRecvMsgs),
        !bVar8) {
    ppMVar9 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::front(&this->mRecvMsgs);
    this_00 = *ppMVar9;
    bVar8 = Message::getUse(this_00);
    if (bVar8) break;
                    /* Unresolved local var: TCPUser * pTcpUser@[???] */
    bVar8 = Message::getUse(this_00);
    if (bVar8) {
                    /* Unresolved local var: TCPUser * pTcpUserTmp@[???] */
      pTVar10 = Message::getUserFromMessage(this_00);
      puVar11 = TCPSocket::getPeerAdrs(pTVar10->pSock_);
      bVar1 = puVar11[3];
      puVar11 = TCPSocket::getPeerAdrs(pTVar10->pSock_);
      bVar2 = puVar11[2];
      puVar11 = TCPSocket::getPeerAdrs(pTVar10->pSock_);
      bVar3 = puVar11[1];
      pbVar12 = TCPSocket::getPeerAdrs(pTVar10->pSock_);
      uVar7 = Message::ident._4_4_;
      uVar6 = (undefined4)Message::ident;
      bVar4 = *pbVar12;
      sVar13 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::size(&this->mRecvMsgs);
      this_01 = G_TraceLog();
      TraceLog::sysLog(this_01,5,"force delete activeclose size(%d) ident(%d) ip(%d.%d.%d.%d)",
                       sVar13,uVar6,uVar7,(uint)bVar4,(uint)bVar3,(uint)bVar2,(uint)bVar1);
    }
    iVar5 = this_00->mSize;
    std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::pop_front(&this->mRecvMsgs);
    pTVar10 = Message::getUserFromMessage(this_00);
    WorkThread::destroyOrderPool(pTVar10->pmWorkThread,this_00);
    this->mFrontIdx = this->mFrontIdx + iVar5;
    if (this->mPartialQueueSize <= this->mFrontIdx) {
      this->mFrontIdx = 0;
    }
  }
  bVar8 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::empty(&this->mRecvMsgs);
  return bVar8;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp)（约第 179 行）：

```cpp
bool RecvBuffer::ClearUsedMsgs()
{
    while (!mRecvMsgs.empty())
    {
        Message* pRawMsg = mRecvMsgs.front();
        if (!pRawMsg->getUse())
        {
            if (pRawMsg->getUse())
            {
                TCPUser* pTcpUserTmp = pRawMsg->getUserFromMessage();
                unsigned int b3 = (unsigned int)pTcpUserTmp->pSock_->getPeerAdrs()[3];
                unsigned int b2 = (unsigned int)pTcpUserTmp->pSock_->getPeerAdrs()[2];
                unsigned int b1 = (unsigned int)pTcpUserTmp->pSock_->getPeerAdrs()[1];
                unsigned int b0 = (unsigned int)pTcpUserTmp->pSock_->getPeerAdrs()[0];
                // ORIG：idLo/idHi/sz 常驻 ebx/esi/edi（register 局部）
                register unsigned int idLo = *(unsigned int*)&Message::ident;
                register unsigned int idHi = *((unsigned int*)&Message::ident + 1);
                register unsigned int sz = (unsigned int)mRecvMsgs.size();
                G_TraceLog()->sysLog(5, "force delete activeclose size(%d) ident(%d) ip(%d.%d.%d.%d)",
                                     sz, idLo, idHi, b0, b1, b2, b3);
            }
            int msgSize = pRawMsg->mSize;
            mRecvMsgs.pop_front();
            pRawMsg->getUserFromMessage()->pmWorkThread->destroyOrderPool(pRawMsg);
            mFrontIdx = mFrontIdx + msgSize;
            if (mPartialQueueSize <= mFrontIdx)
            {
                mFrontIdx = 0;
            }
        }
        else
        {
            break;
        }
    }
    return mRecvMsgs.empty();
}
```
