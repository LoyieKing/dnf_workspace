# _ZN3nsl14ActiveNetClose15pushActiveCloseEPNS_7TCPUserE

`nsl::ActiveNetClose::pushActiveClose(nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80afa58` | `0xb2` | `0x804bff6` | `0xb2` |

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
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getUserIdEv>
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEEixERS6_>
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjPN3nsl7TCPUserESt4lessIjESaISt4pairIKjS2_EEE4sizeEv>
-mov    %eax,%ebx
-mov    -0x10(%ebp),%esi
+mov    %eax,%esi
+mov    -0x10(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"active close push user tcpuserid :(%d) map size:(%d)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl14ActiveNetClose15pushActiveCloseEPNS_7TCPUserE+0xa0>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void pushActiveClose(ActiveNetClose * this, TCPUser * pUser) */

void __thiscall
nsl::ActiveNetClose::_ZN3nsl14ActiveNetClose15pushActiveCloseEPNS_7TCPUserE
          (ActiveNetClose *this,TCPUser *pUser)

{
  uint uVar1;
  TCPUser **ppTVar2;
  size_t sVar3;
  TraceLog *this_00;
  int __in_chrg;
  uint local_14;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_10;
  
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???]
                       Unresolved local var: uint id@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_10,&this->mLock);
  local_14 = TCPUser::getUserId(pUser);
                    /* try { // try from 080afa93 to 080afada has its CatchHandler @ 080afadd */
  ppTVar2 = std::
            map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
            ::operator[](&this->activeCloseMap,&local_14);
  *ppTVar2 = pUser;
  this->bInData = true;
  sVar3 = std::
          map<unsigned_int,_nsl::TCPUser*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>_>
          ::size(&this->activeCloseMap);
  uVar1 = local_14;
  this_00 = G_TraceLog();
  __in_chrg = 7;
  TraceLog::sysLog(this_00,7,"active close push user tcpuserid :(%d) map size:(%d)",uVar1,sVar3);
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_10,__in_chrg);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/ActiveNetClose.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
