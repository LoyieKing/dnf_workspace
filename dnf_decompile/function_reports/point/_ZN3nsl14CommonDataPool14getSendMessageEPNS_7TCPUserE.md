# _ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE

`nsl::CommonDataPool::getSendMessage(nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80a00ac` | `0x14a` | `0x806571c` | `0x14a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,91 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolINS_7MessageEiiiE9constructEv>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE+0x58>
 movl   $"nsl::Message* nsl::CommonDataPool::getSendMessage(nsl::TCPUser*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"CommonDataPool.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp",0x4(%esp)
 movl   $"msg && \"mSendMessagePool\"",(%esp)
 call   <T> <__assert_fail>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message9setWorkIdEj>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message16setUserToMessageEPNS_7TCPUserE>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15getSendDataTypeEv>
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message17setOnDataTypeMaskEi>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolINS_10SendBufferEiiiE6mallocEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE+0xbe>
 movl   $"wtf",(%esp)
 call   <T> <puts>
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE+0xe8>
 movl   $"nsl::Message* nsl::CommonDataPool::getSendMessage(nsl::TCPUser*)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"CommonDataPool.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp",0x4(%esp)
 movl   $"pSendBuffer && \"getSendMessage\"",(%esp)
 call   <T> <__assert_fail>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18setStringToMessageEPNS_10SendBufferE>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x44(%eax)
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x48(%eax)
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

/* DWARF original prototype: Message * getSendMessage(CommonDataPool * this, TCPUser * u) */

Message * __thiscall
nsl::CommonDataPool::_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE
          (CommonDataPool *this,TCPUser *u)

{
  Message *pMVar1;
  ENUM_DATA_TYPE bit;
  int in_GS_OFFSET;
  SendBuffer *__in_chrg;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_18;
  Message *local_14;
  SendBuffer *local_10;
  
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: SendBuffer * pSendBuffer@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_18,&this->mSendPoolLock)
  ;
                    /* try { // try from 080a00d2 to 080a0169 has its CatchHandler @ 080a01db */
  local_14 = object_pool_by_boost_pool<nsl::Message,_int,_int,_int>::construct
                       (this->mSendMessagePool);
  if (local_14 == (Message *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("msg && \"mSendMessagePool\"","CommonDataPool.cpp",0x22,
                  "nsl::Message* nsl::CommonDataPool::getSendMessage(nsl::TCPUser*)");
  }
  Message::setWorkId(local_14,*(uint *)(in_GS_OFFSET + -4));
  Message::setUserToMessage(local_14,u);
  bit = TCPUser::getSendDataType(u);
  Message::setOnDataTypeMask(local_14,bit);
  local_10 = object_pool_by_boost_pool<nsl::SendBuffer,_int,_int,_int>::malloc(this->mBufferSend);
  if (local_10 == (SendBuffer *)0x0) {
    puts("wtf");
  }
  if (local_10 == (SendBuffer *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pSendBuffer && \"getSendMessage\"","CommonDataPool.cpp",0x2e,
                  "nsl::Message* nsl::CommonDataPool::getSendMessage(nsl::TCPUser*)");
  }
  __in_chrg = local_10;
  Message::setStringToMessage(local_14,local_10);
  pMVar1 = local_14;
  this->pool_send_msg = this->pool_send_msg + 1;
  this->pool_send_buf = this->pool_send_buf + 1;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_18,(int)__in_chrg);
  return pMVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
