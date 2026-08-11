# _ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE

`nsl::TCPSendThread::SendDataPoolFree(nsl::Message*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80ae27c` | `0x88` | `0x80ad02e` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 movl   $0x0,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetSendingEb>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message10initializeEv>
 mov    &_ZN3nsl7Message5identE,%ebx
 mov    &_ZN3nsl7Message5identE+0x4,%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
-movl   $"SEND 요청 끝------------- msg=%d",0x8(%esp)
+movl   $"SEND ------ msg=%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool18destroySendMessageEPNS_7MessageE>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void SendDataPoolFree(TCPSendThread * this, Message * msg, TCPUser *
   pUser) */

void __thiscall
nsl::TCPSendThread::_ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE
          (TCPSendThread *this,Message *msg,TCPUser *pUser)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TraceLog *this_00;
  CommonDataPool *this_01;
  
  TCPUser::SetSending(pUser,false);
  Message::initialize(msg);
  uVar2 = Message::ident._4_4_;
  uVar1 = (undefined4)Message::ident;
  this_00 = G_TraceLog();
  TraceLog::sysLog(this_00,8,&DAT_081608d4,uVar1,uVar2);
  this_01 = DataPools::getCommonDataPool(&pApp->super_DataPools,msg->mOwnerWorkId);
  CommonDataPool::destroySendMessage(this_01,msg);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPSendThread.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
