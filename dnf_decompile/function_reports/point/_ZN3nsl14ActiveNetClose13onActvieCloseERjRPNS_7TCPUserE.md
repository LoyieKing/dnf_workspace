# _ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE

`nsl::ActiveNetClose::onActvieClose(unsigned int&, nsl::TCPUser*&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80afb0a` | `0x12c` | `0x804c0a8` | `0x12c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEE5beginEv>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEptEv>
 mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 movb   $0x0,-0x9(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser13onActiveCloseEj>
 test   %al,%al
 je     <T> <_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE+0xd1>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEE5eraseERS6_>
 mov    -0x1c(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x10(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,(%eax)
 movb   $0x1,-0x9(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEE4sizeEv>
-mov    %eax,%ebx
-mov    -0x1c(%ebp),%esi
+mov    %eax,%esi
+mov    -0x1c(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"onActiveClose erase tcpuserid :(%d) map size:(%d)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEE4sizeEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE+0xf0>
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 jmp    <T> <_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE+0xf6>
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
 movzbl -0x9(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
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

/* DWARF original prototype: bool onActvieClose(ActiveNetClose * this, uint * outId, TCPUser * *
   outUserPtr) */

bool __thiscall
nsl::ActiveNetClose::_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE
          (ActiveNetClose *this,uint *outId,TCPUser **outUserPtr)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  pair<const_unsigned_int,_nsl::TCPUser*> *ppVar4;
  size_t sVar5;
  TraceLog *this_00;
  uint __in_chrg;
  uint local_20;
  _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_> local_1c;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_18;
  TCPUser *local_14;
  undefined1 local_d;
  
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???]
                       Unresolved local var: MAP_OBJECTS_ITER iter@[???]
                       Unresolved local var: uint key@[???]
                       Unresolved local var: TCPUser * pUser@[???]
                       Unresolved local var: bool ret_val@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_18,&this->mLock);
                    /* try { // try from 080afb37 to 080afbe8 has its CatchHandler @ 080afc1b */
  std::
  map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
  ::begin((map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
           *)&local_1c);
  ppVar4 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::operator->
                     (&local_1c);
  local_20 = ppVar4->first;
  ppVar4 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::operator->
                     (&local_1c);
  local_14 = ppVar4->second;
  local_d = 0;
  __in_chrg = local_20;
  bVar3 = TCPUser::onActiveClose(local_14,local_20);
  if (bVar3) {
    std::
    map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
    ::erase(&this->activeCloseMap,&local_20);
    *outId = local_20;
    *outUserPtr = local_14;
    local_d = 1;
    sVar5 = std::
            map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
            ::size(&this->activeCloseMap);
    uVar1 = local_20;
    this_00 = G_TraceLog();
    __in_chrg = 7;
    TraceLog::sysLog(this_00,7,"onActiveClose erase tcpuserid :(%d) map size:(%d)",uVar1,sVar5);
  }
  sVar5 = std::
          map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
          ::size(&this->activeCloseMap);
  uVar2 = local_d;
  if (sVar5 == 0) {
    this->bInData = false;
  }
  else {
    this->bInData = true;
  }
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_18,__in_chrg);
  return (bool)uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/ActiveNetClose.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
