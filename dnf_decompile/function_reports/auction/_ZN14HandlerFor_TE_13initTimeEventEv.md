# _ZN14HandlerFor_TE_13initTimeEventEv

`HandlerFor_TE_::initTimeEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x8079be8` | `0x4f9` | `0x807802e` | `0x4f9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,316 +1,316 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  initTimeEvent",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    %eax,%edx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16createTimeEntityEv>
 mov    %eax,-0x44(%ebp)
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0x40(%ebp)
 mov    -0x40(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 mov    $&_ZN14HandlerFor_TE_33onTIME_AUCTION_EXPIRE_EVENT_CHECKEPN3nsl11InternalMsgE,%ebx
 mov    $0x0,%esi
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %ebx,0x14(%esp)
 mov    %esi,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0x7d0,0x8(%esp)
 movl   $0x19,0x4(%esp)
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
 mov    -0x44(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0xee>
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    -0x44(%ebp),%ebx
-mov    -0x3c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x82c(%eax),%edx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x10d>
 mov    -0x44(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    %eax,%edx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16createTimeEntityEv>
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x34(%ebp)
-mov    -0x34(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 movl   $"U됧껋(�E�",-0x68(%ebp)
 movl   $0x0,-0x64(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    -0x68(%ebp),%edx
 mov    -0x64(%ebp),%ecx
 mov    %edx,0x14(%esp)
 mov    %ecx,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0x2710,0x8(%esp)
 movl   $0x1c,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
+mov    -0x3c(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x1e0>
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
+mov    %eax,-0x18(%ebp)
+mov    -0x3c(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+mov    0x82c(%eax),%edx
+mov    &_ZN3nsl4pAppE,%eax
+add    $0x18,%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
+jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x1ff>
+mov    -0x3c(%ebp),%ebx
+mov    &_ZN3nsl4pAppE,%eax
+add    $0x18,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
+mov    $0xfffffffc,%eax
+mov    %gs:(%eax),%eax
+mov    %eax,%edx
+mov    &_ZN3nsl4pAppE,%eax
+add    $0x5c,%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
+mov    %eax,(%esp)
+call   <T> <_ZN12GameDataPool16createTimeEntityEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%ebx
 mov    -0x30(%ebp),%eax
-mov    0x82c(%eax),%edx
-mov    &_ZN3nsl4pAppE,%eax
-add    $0x18,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
-jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x1ff>
-mov    -0x38(%ebp),%ebx
-mov    &_ZN3nsl4pAppE,%eax
-add    $0x18,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
-mov    $0xfffffffc,%eax
-mov    %gs:(%eax),%eax
-mov    %eax,%edx
-mov    &_ZN3nsl4pAppE,%eax
-add    $0x5c,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
-mov    %eax,(%esp)
-call   <T> <_ZN12GameDataPool16createTimeEntityEv>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 movl   $&_ZN14HandlerFor_TE_19onTIME_CHECK_CONFIGEPN3nsl11InternalMsgE,-0x60(%ebp)
 movl   $0x0,-0x5c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    -0x60(%ebp),%edx
 mov    -0x5c(%ebp),%ecx
 mov    %edx,0x14(%esp)
 mov    %ecx,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0x1388,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
+mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x2d2>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x2c(%ebp),%ebx
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
+mov    %eax,-0x14(%ebp)
+mov    -0x34(%ebp),%ebx
+mov    -0x14(%ebp),%eax
 mov    0x82c(%eax),%edx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x2f1>
-mov    -0x2c(%ebp),%ebx
+mov    -0x34(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16createTimeEntityEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 movl   $"U됧껋H�E�",-0x58(%ebp)
 movl   $0x0,-0x54(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    -0x58(%ebp),%edx
 mov    -0x54(%ebp),%ecx
 mov    %edx,0x14(%esp)
 mov    %ecx,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0x2710,0x8(%esp)
 movl   $0x1d,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
+mov    -0x2c(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x3c4>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x18(%ebp)
-mov    -0x20(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x2c(%ebp),%ebx
+mov    -0x10(%ebp),%eax
 mov    0x82c(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x3e3>
-mov    -0x20(%ebp),%ebx
+mov    -0x2c(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16createTimeEntityEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 movl   $&_ZN14HandlerFor_TE_35onTIME_AUCTION_UPDATE_AVERAGE_PRICEEPN3nsl11InternalMsgE,-0x50(%ebp)
 movl   $0x0,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    -0x50(%ebp),%edx
 mov    -0x4c(%ebp),%ecx
 mov    %edx,0x14(%esp)
 mov    %ecx,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0xea60,0x8(%esp)
 movl   $0x28,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
+mov    -0x24(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x4b6>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0xc(%ebp)
-mov    -0x14(%ebp),%ebx
+mov    -0x24(%ebp),%ebx
 mov    -0xc(%ebp),%eax
 mov    0x82c(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 jmp    <T> <_ZN14HandlerFor_TE_13initTimeEventEv+0x4d5>
-mov    -0x14(%ebp),%ebx
+mov    -0x24(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out initTimeEvent",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void initTimeEvent(HandlerFor_TE_ * this) */

void __thiscall HandlerFor_TE_::_ZN14HandlerFor_TE_13initTimeEventEv(HandlerFor_TE_ *this)

{
  TraceLog *pTVar1;
  GameDataPool *pGVar2;
  TE_Entity<HandlerFor_TE_> *pTVar3;
  InternalMsg *pIVar4;
  WorkThread *pWVar5;
  TimerThread *pTVar6;
  int in_GS_OFFSET;
  
  pTVar1 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar1,8,"In  initTimeEvent");
                    /* Unresolved local var: TE_Entity<HandlerFor_TE_> * ptime_expire_event@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pGVar2 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  pTVar3 = GameDataPool::createTimeEntity(pGVar2);
  pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
  pIVar4->workIndex = 0;
  nsl::TE_Entity<HandlerFor_TE_>::regist
            (pTVar3,0x19,2000,0xffffffff,(this->super_ITimeHandler).super_IHandler.pTimeHandler,
             (anon_struct_8_2_66589125)0x807a0e2);
  if ((pTVar3->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
    pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
    pWVar5 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,pIVar4->workIndex);
    nsl::WorkThread::PushTransaction(pWVar5,(IMessageStruct *)pTVar3);
  }
  else {
    pTVar6 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
    nsl::TimerThread::PushTimeReqEvent(pTVar6,&pTVar3->super_ITimeEntity);
  }
                    /* Unresolved local var: TE_Entity<HandlerFor_TE_> * ptime_stlog_event@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pGVar2 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  pTVar3 = GameDataPool::createTimeEntity(pGVar2);
  pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
  pIVar4->workIndex = 0;
  nsl::TE_Entity<HandlerFor_TE_>::regist
            (pTVar3,0x1c,10000,0xffffffff,(this->super_ITimeHandler).super_IHandler.pTimeHandler,
             (anon_struct_8_2_66589125)0x807a154);
  if ((pTVar3->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
    pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
    pWVar5 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,pIVar4->workIndex);
    nsl::WorkThread::PushTransaction(pWVar5,(IMessageStruct *)pTVar3);
  }
  else {
    pTVar6 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
    nsl::TimerThread::PushTimeReqEvent(pTVar6,&pTVar3->super_ITimeEntity);
  }
                    /* Unresolved local var: TE_Entity<HandlerFor_TE_> * ptime_cfg_event@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pGVar2 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  pTVar3 = GameDataPool::createTimeEntity(pGVar2);
  pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
  pIVar4->workIndex = 0;
  nsl::TE_Entity<HandlerFor_TE_>::regist
            (pTVar3,1,5000,0xffffffff,(this->super_ITimeHandler).super_IHandler.pTimeHandler,
             (anon_struct_8_2_66589125)0x807a4d4);
  if ((pTVar3->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
    pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
    pWVar5 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,pIVar4->workIndex);
    nsl::WorkThread::PushTransaction(pWVar5,(IMessageStruct *)pTVar3);
  }
  else {
    pTVar6 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
    nsl::TimerThread::PushTimeReqEvent(pTVar6,&pTVar3->super_ITimeEntity);
  }
                    /* Unresolved local var: TE_Entity<HandlerFor_TE_> * pTimeDbPing@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pGVar2 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  pTVar3 = GameDataPool::createTimeEntity(pGVar2);
  pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
  pIVar4->workIndex = 0;
  nsl::TE_Entity<HandlerFor_TE_>::regist
            (pTVar3,0x1d,10000,0xffffffff,(this->super_ITimeHandler).super_IHandler.pTimeHandler,
             (anon_struct_8_2_66589125)0x807a204);
  if ((pTVar3->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
    pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
    pWVar5 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,pIVar4->workIndex);
    nsl::WorkThread::PushTransaction(pWVar5,(IMessageStruct *)pTVar3);
  }
  else {
    pTVar6 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
    nsl::TimerThread::PushTimeReqEvent(pTVar6,&pTVar3->super_ITimeEntity);
  }
                    /* Unresolved local var: TE_Entity<HandlerFor_TE_> *
                       pTimeUpdateAveragePrice@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pGVar2 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  pTVar3 = GameDataPool::createTimeEntity(pGVar2);
  pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
  pIVar4->workIndex = 0;
  nsl::TE_Entity<HandlerFor_TE_>::regist
            (pTVar3,0x28,60000,0xffffffff,(this->super_ITimeHandler).super_IHandler.pTimeHandler,
             (anon_struct_8_2_66589125)0x807a568);
  if ((pTVar3->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
    pIVar4 = nsl::ITimeEntity::getArg(&pTVar3->super_ITimeEntity);
    pWVar5 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,pIVar4->workIndex);
    nsl::WorkThread::PushTransaction(pWVar5,(IMessageStruct *)pTVar3);
  }
  else {
    pTVar6 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
    nsl::TimerThread::PushTimeReqEvent(pTVar6,&pTVar3->super_ITimeEntity);
  }
  pTVar1 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar1,8,"Out initTimeEvent");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp)（约第 45 行）：

```cpp
void HandlerFor_TE_::initTimeEvent()
{
    G_TraceLog()->sysLog(8, "In  initTimeEvent");

    // Separate locals per timer so frame size matches ORIG (~0x80)
    nsl::TE_Entity<HandlerFor_TE_>* pTimeEntity0;
    nsl::InternalMsg* pArg0;
    nsl::TE_Entity<HandlerFor_TE_>* pTimeEntity1;
    nsl::InternalMsg* pArg1;
    nsl::TE_Entity<HandlerFor_TE_>* pTimeEntity2;
    nsl::InternalMsg* pArg2;
    nsl::TE_Entity<HandlerFor_TE_>* pTimeEntity3;
    nsl::InternalMsg* pArg3;
    nsl::TE_Entity<HandlerFor_TE_>* pTimeEntity4;
    nsl::InternalMsg* pArg4;
    // Extra slots to approach ORIG's 0x80 frame (member-ptr / getArg spills)
    nsl::InternalMsg* pArg0b;
    nsl::InternalMsg* pArg1b;
    nsl::InternalMsg* pArg2b;
    nsl::InternalMsg* pArg3b;
    nsl::InternalMsg* pArg4b;

    pTimeEntity0 = ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->createTimeEntity();
    pArg0 = pTimeEntity0->getArg();
    pArg0->workIndex = 0;
    pTimeEntity0->regist(0x19, 2000, 0xffffffff, pTimeHandler, &HandlerFor_TE_::onTIME_AUCTION_EXPIRE_EVENT_CHECK);
    if (pTimeEntity0->check_period == 0)
    {
        pArg0b = pTimeEntity0->getArg();
        pApp->super_Threads.getWorkThread(pArg0b->workIndex)->PushTransaction((IMessageStruct*)pTimeEntity0);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTimeEntity0);
    }

    pTimeEntity1 = ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->createTimeEntity();
    pArg1 = pTimeEntity1->getArg();
    pArg1->workIndex = 0;
    pTimeEntity1->regist(0x1c, 10000, 0xffffffff, pTimeHandler, &HandlerFor_TE_::onTIME_AUCTION_STATISTICS_COLLECTOR);
    if (pTimeEntity1->check_period == 0)
    {
        pArg1b = pTimeEntity1->getArg();
        pApp->super_Threads.getWorkThread(pArg1b->workIndex)->PushTransaction((IMessageStruct*)pTimeEntity1);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTimeEntity1);
    }

    pTimeEntity2 = ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->createTimeEntity();
    pArg2 = pTimeEntity2->getArg();
    pArg2->workIndex = 0;
    pTimeEntity2->regist(1, 5000, 0xffffffff, pTimeHandler, &HandlerFor_TE_::onTIME_CHECK_CONFIG);
    if (pTimeEntity2->check_period == 0)
    {
        pArg2b = pTimeEntity2->getArg();
        pApp->super_Threads.getWorkThread(pArg2b->workIndex)->PushTransaction((IMessageStruct*)pTimeEntity2);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTimeEntity2);
    }

    pTimeEntity3 = ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->createTimeEntity();
    pArg3 = pTimeEntity3->getArg();
    pArg3->workIndex = 0;
    pTimeEntity3->regist(0x1d, 10000, 0xffffffff, pTimeHandler, &HandlerFor_TE_::onTIME_AUCTION_DB_PING);
    if (pTimeEntity3->check_period == 0)
    {
        pArg3b = pTimeEntity3->getArg();
        pApp->super_Threads.getWorkThread(pArg3b->workIndex)->PushTransaction((IMessageStruct*)pTimeEntity3);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTimeEntity3);
    }

    pTimeEntity4 = ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->createTimeEntity();
    pArg4 = pTimeEntity4->getArg();
    pArg4->workIndex = 0;
    pTimeEntity4->regist(0x28, 60000, 0xffffffff, pTimeHandler, &HandlerFor_TE_::onTIME_AUCTION_UPDATE_AVERAGE_PRICE);
    if (pTimeEntity4->check_period == 0)
    {
        pArg4b = pTimeEntity4->getArg();
        pApp->super_Threads.getWorkThread(pArg4b->workIndex)->PushTransaction((IMessageStruct*)pTimeEntity4);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTimeEntity4);
    }
    G_TraceLog()->sysLog(8, "Out initTimeEvent");
}
```
