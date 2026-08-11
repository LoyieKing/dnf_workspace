# _ZN3nsl10RecvBufferC2Eii

`nsl::RecvBuffer::RecvBuffer(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80ba194` | `0xc7` | `0x8081d76` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x38(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Znaj>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x3c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 cmp    0x10(%ebp),%eax
 jg     <T> <_ZN3nsl10RecvBufferC1Eii+0x88>
 movl   $"nsl::RecvBuffer::RecvBuffer(int, int)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"RecvBuffer.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp",0x4(%esp)
 movl   $"mQueueSize > maxPacketSize && \"Queue size smaller than MAX_PACKET\"",(%esp)
 call   <T> <__assert_fail>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,%edx
 sub    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x40(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x44(%eax)
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void RecvBuffer(RecvBuffer * this, int queueSize, int maxPacketSize) */

void __thiscall
nsl::RecvBuffer::_ZN3nsl10RecvBufferC2Eii(RecvBuffer *this,int queueSize,int maxPacketSize)

{
  char *pcVar1;
  
  std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::deque(&this->mRecvMsgs);
  this->mFrontIdx = 0;
  this->mRearIdx = 0;
  this->mParseIdx = 0;
  this->mParseStatus = 0;
                    /* try { // try from 080ba1d8 to 080ba1dc has its CatchHandler @ 080ba23d */
  pcVar1 = operator_new__(queueSize);
  this->mQueue = pcVar1;
  this->mQueueSize = queueSize;
  if (this->mQueueSize <= maxPacketSize) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mQueueSize > maxPacketSize && \"Queue size smaller than MAX_PACKET\"",
                  "RecvBuffer.cpp",0x16,"nsl::RecvBuffer::RecvBuffer(int, int)");
  }
  this->mPartialQueueSize = this->mQueueSize - maxPacketSize;
  this->mMaxPacketSize = maxPacketSize;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp)（约第 15 行）：

```cpp
RecvBuffer::RecvBuffer(int queueSize, int maxPacketSize)
{
    mFrontIdx = 0;
    mRearIdx = 0;
    mParseIdx = 0;
    mParseStatus = 0;
    mQueue = new char[queueSize];
    mQueueSize = queueSize;
    assert(mQueueSize > maxPacketSize && "Queue size smaller than MAX_PACKET");
    mPartialQueueSize = mQueueSize - maxPacketSize;
    mMaxPacketSize = maxPacketSize;
}
```
