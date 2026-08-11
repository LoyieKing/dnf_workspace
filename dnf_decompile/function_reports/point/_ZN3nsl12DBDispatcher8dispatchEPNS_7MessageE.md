# _ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE

`nsl::DBDispatcher::dispatch(nsl::Message*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b94b8` | `0x1ec` | `0x8066c62` | `0x1fc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,131 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x64,%esp
+sub    $0x68,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0x4(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x1c(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 lea    0xbc(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers12getDBHandlerEi>
-mov    (%eax),%edx
-add    $0xc,%edx
-mov    (%edx),%ebx
-lea    -0x2c(%ebp),%edx
-mov    -0x20(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   *%ebx
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%ecx
+lea    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   *%ecx
 sub    $0x4,%esp
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1c3>
+jne    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0xaa>
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x24(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $"DB : '%d' 에 대한 핸들러를 찾지 못하였습니다.",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+jmp    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1fa>
 mov    &_ZN3nsl4pAppE,%eax
 lea    0xbc(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers12getDBHandlerEi>
-mov    %eax,%edx
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x34(%ebp),%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0xb8>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0xe9>
+mov    -0x18(%ebp),%edx
+mov    -0x30(%ebp),%eax
 lea    (%edx,%eax,1),%eax
-mov    (%eax),%ecx
-mov    -0x2c(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x34(%ebp),%eax
 sub    $0x1,%eax
-lea    (%ecx,%eax,1),%eax
+lea    (%edx,%eax,1),%eax
 mov    (%eax),%eax
-jmp    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0xbb>
-mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%ecx
-lea    (%edx,%ecx,1),%ecx
-mov    -0x24(%ebp),%edx
+jmp    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0xec>
+mov    -0x34(%ebp),%eax
+mov    -0x18(%ebp),%ecx
+mov    -0x30(%ebp),%edx
+add    %edx,%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %ecx,(%esp)
 call   *%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1e7>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1fa>
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
-movl   $"DB : '%d' 처리에 실패 하였습니다.",0x8(%esp)
+movl   $"DB : '%d' 처리덧 실패 하뉘습니다.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-cmpl   $0x2,-0x14(%ebp)
-jne    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1e7>
+cmpl   $0x2,-0x1c(%ebp)
+jne    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1fa>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"DB : 연결이 끊어졌습니다.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31INTERNALMSG_SERVICE_UNAVAILABLEC1Ev>
-movl   $0x2,-0x30(%ebp)
+movl   $0x2,-0x38(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x10(%ebp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0xc(%ebp)
-lea    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_18INTERNALMSG_HEADERE>
-mov    -0x10(%ebp),%ebx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
 mov    0x5(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
-jmp    <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE+0x1e7>
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x20(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $"DB : '%d' 에 대한 핸들러를 찾지 못하였습니다.",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void dispatch(DBDispatcher * this, Message * pMsg) */

void __thiscall
nsl::DBDispatcher::_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE(DBDispatcher *this,Message *pMsg)

{
  Message *pMessage;
  IDBHandler *pIVar1;
  TraceLog *pTVar2;
  CommonDataPool *this_00;
  CMsgCell *this_01;
  INTERNALMSG_HEADER *pIVar3;
  WorkThread *this_02;
  int in_GS_OFFSET;
  int iVar4;
  INTERNALMSG_SERVICE_UNAVAILABLE local_54;
  code *local_30;
  int local_2c;
  CMsgCell *local_28;
  int local_24;
  int local_20;
  LPDBTR_HEADER local_1c;
  int local_18;
  Message *local_14;
  CMsgCell *local_10;
  
                    /* Unresolved local var: CMsgCell * pCell@[???]
                       Unresolved local var: int dbtrid@[???]
                       Unresolved local var: int dbid@[???]
                       Unresolved local var: LPDBTR_HEADER pDbTr@[???]
                       Unresolved local var: DWORD ret@[???]
                       Unresolved local var: DBHandlerFunc handle@[???] */
  local_28 = Message::getCellFromMessage(pMsg);
  local_1c = CMsgCell::GetDBTr(local_28);
  local_24 = local_1c->dbtrId;
  local_20 = local_1c->dbId;
  local_18 = 0;
  pIVar1 = IHandlers::getDBHandler(&pApp->super_IHandlers,local_20);
  (*(pIVar1->super_IHandler)._vptr_IHandler[3])(&local_30,pIVar1,local_24);
  if (local_30 == (code *)0x0) {
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,7,&DAT_081624b8,local_24);
  }
  else {
    pIVar1 = IHandlers::getDBHandler(&pApp->super_IHandlers,local_20);
    if (((uint)local_30 & 1) != 0) {
      local_30 = *(code **)(local_30 +
                           *(int *)((int)&(pIVar1->super_IHandler)._vptr_IHandler + local_2c) + -1);
    }
    local_18 = (*local_30)((int)&(pIVar1->super_IHandler)._vptr_IHandler + local_2c,local_28);
    if (local_18 != 0) {
      pTVar2 = G_TraceLog();
      iVar4 = local_24;
      TraceLog::sysLog(pTVar2,7,&DAT_0816247c,local_24);
      if (local_18 == 2) {
                    /* Unresolved local var: INTERNALMSG_SERVICE_UNAVAILABLE
                       internalMsgServiceUnavailable@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
        pTVar2 = G_TraceLog();
        TraceLog::sysLog(pTVar2,7,&DAT_0816249e,iVar4);
        INTERNALMSG_SERVICE_UNAVAILABLE::INTERNALMSG_SERVICE_UNAVAILABLE(&local_54);
        local_54.reason = 2;
        this_00 = DataPools::getCommonDataPool(&pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
        local_14 = CommonDataPool::createMessage(this_00,1);
        local_10 = Message::getCellFromMessage(local_14);
        CMsgCell::operator<<(local_10,&local_54.super_INTERNALMSG_HEADER);
        pMessage = local_14;
        this_01 = Message::getCellFromMessage(local_14);
        pIVar3 = CMsgCell::GetInternalMsg(this_01);
        this_02 = Threads::getWorkThread(&pApp->super_Threads,pIVar3->workIndex);
        WorkThread::_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE
                  (this_02,&pMessage->super_IMessageStruct);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBDispatcher.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
