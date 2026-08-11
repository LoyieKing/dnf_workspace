# _ZN3nsl10RecvBuffer13AvailableSizeEv

`nsl::RecvBuffer::AvailableSize()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80ba2ec` | `0x16b` | `0x8081ece` | `0x16b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,117 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10RecvBuffer6IsFullEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x159>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x6d>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x56>
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 sub    $0x1,%eax
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x169>
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x169>
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x91>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 add    $0x12,%eax
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x169>
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%eax
 cmp    $0x1,%eax
 jne    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x164>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER7getSizeEv>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0xf5>
 movl   $"int nsl::RecvBuffer::AvailableSize()",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"RecvBuffer.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp",0x4(%esp)
 movl   $"mRearIdx >= mParseIdx",(%esp)
 call   <T> <__assert_fail>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 cmp    %eax,%edx
 jle    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x11c>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 add    -0xc(%ebp),%eax
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x169>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x164>
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x14c>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x164>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv>
 jmp    <T> <_ZN3nsl10RecvBuffer13AvailableSizeEv+0x164>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: int AvailableSize(RecvBuffer * this) */

int __thiscall nsl::RecvBuffer::_ZN3nsl10RecvBuffer13AvailableSizeEv(RecvBuffer *this)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = IsFull(this);
  if (bVar1) {
    ClearUsedMsgs(this);
  }
  else {
    if (this->mRearIdx < this->mPartialQueueSize) {
      if (this->mRearIdx < this->mFrontIdx) {
        return (this->mFrontIdx - this->mRearIdx) + -1;
      }
      return this->mPartialQueueSize - this->mRearIdx;
    }
    if (this->mParseStatus == 0) {
      return (this->mParseIdx - this->mRearIdx) + 0x12;
    }
    if (this->mParseStatus == 1) {
                    /* Unresolved local var: LPPACKET_HEADER pHeader@[???]
                       Unresolved local var: int msgSize@[???] */
      iVar2 = PACKET_HEADER::getSize((PACKET_HEADER *)(this->mQueue + this->mParseIdx));
      if (this->mRearIdx < this->mParseIdx) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("mRearIdx >= mParseIdx","RecvBuffer.cpp",0x4c,
                      "int nsl::RecvBuffer::AvailableSize()");
      }
      if (this->mParseIdx < this->mRearIdx) {
        return (this->mParseIdx - this->mRearIdx) + iVar2;
      }
      if (this->mRearIdx == this->mParseIdx) {
        if (this->mFrontIdx == 0) {
          ClearUsedMsgs(this);
        }
        else {
          this->mRearIdx = 0;
          this->mParseIdx = 0;
        }
      }
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp)（约第 51 行）：

```cpp
int RecvBuffer::AvailableSize()
{
    if (!IsFull())
    {
        if (mRearIdx < mPartialQueueSize)
        {
            if (mRearIdx < mFrontIdx)
            {
                return (mFrontIdx - mRearIdx) + -1;
            }
            return mPartialQueueSize - mRearIdx;
        }
        if (mParseStatus == 0)
        {
            return mParseIdx - mRearIdx + 0x12;
        }
        if (mParseStatus == 1)
        {
            PACKET_HEADER* pHeader = (PACKET_HEADER*)(mQueue + mParseIdx);
            int msgSize = pHeader->getSize();
            assert(mRearIdx >= mParseIdx);
            if (mRearIdx > mParseIdx)
            {
                return mParseIdx - mRearIdx + msgSize;
            }
            if (mRearIdx == mParseIdx)
            {
                if (mFrontIdx != 0)
                {
                    mRearIdx = 0;
                    mParseIdx = 0;
                }
                else
                {
                    ClearUsedMsgs();
                }
            }
        }
    }
    else
    {
        ClearUsedMsgs();
    }
    return 0;
}
```
