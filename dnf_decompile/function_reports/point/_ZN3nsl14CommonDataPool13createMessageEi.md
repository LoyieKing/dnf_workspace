# _ZN3nsl14CommonDataPool13createMessageEi

`nsl::CommonDataPool::createMessage(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80a0290` | `0xb8` | `0x8065900` | `0xb8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0x2c,%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolINS_7MessageEiiiE9constructEv>
 mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,%edx
 mov    -0x10(%ebp),%eax
 mov    %dl,0x6(%eax)
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolINS_8DbBufferEiiiE6mallocEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN3nsl14CommonDataPool13createMessageEi+0x74>
 movl   $"nsl::Message* nsl::CommonDataPool::createMessage(int)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"CommonDataPool.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp",0x4(%esp)
 movl   $"pBuf && \"mBufPool\"",(%esp)
 call   <T> <__assert_fail>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18setStringToMessageEPNS_8DbBufferE>
 mov    -0x10(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %ebx,%eax
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: Message * createMessage(CommonDataPool * this, int msgType) */

Message * __thiscall
nsl::CommonDataPool::_ZN3nsl14CommonDataPool13createMessageEi(CommonDataPool *this,int msgType)

{
  Message *pMVar1;
  DbBuffer *pBuffer;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_18;
  Message *local_14;
  DbBuffer *local_10;
  
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???]
                       Unresolved local var: Message * r@[???]
                       Unresolved local var: DbBuffer * pBuf@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_18,&this->mMsgPoolLock);
                    /* try { // try from 080a02b6 to 080a02d6 has its CatchHandler @ 080a032d */
  local_14 = object_pool_by_boost_pool<nsl::Message,_int,_int,_int>::construct(this->mMessagePool);
  (local_14->super_IMessageStruct).mMsgType = (char)msgType;
  pBuffer = object_pool_by_boost_pool<nsl::DbBuffer,_int,_int,_int>::malloc(this->mBufPool);
  local_10 = pBuffer;
  if (pBuffer == (DbBuffer *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pBuf && \"mBufPool\"","CommonDataPool.cpp",0x4b,
                  "nsl::Message* nsl::CommonDataPool::createMessage(int)");
  }
  Message::setStringToMessage(local_14,pBuffer);
  pMVar1 = local_14;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_18,(int)pBuffer);
  return pMVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp)（约第 58 行）：

```cpp
Message* CommonDataPool::createMessage(int msgType)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > slock(mMsgPoolLock);
    Message* r = mMessagePool->construct();
    r->mMsgType = (char)msgType;
    DbBuffer* pBuf = mBufPool->malloc();
    assert(pBuf && "mBufPool");
    r->setStringToMessage(pBuf);
    return r;
}
```
