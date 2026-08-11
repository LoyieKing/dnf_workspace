# _ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE

`InterHandler::onINTER_DESTORY_CHARACTER(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x807af06` | `0x195` | `0x807a9ce` | `0x195` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,106 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onINTER_DESTORY_CHARACTER",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x5(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
 movzbl 0x20(%eax),%eax
-mov    %al,-0x1d(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %al,-0x19(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x11(%eax),%eax
 mov    %eax,-0x18(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x25(%eax),%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE+0x92>
 call   <T> <_Z6G_Zonev>
 mov    (%eax),%eax
 mov    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea11getMemberAtEj>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x10(%ebp)
 call   <T> <_Z6G_Zonev>
 mov    (%eax),%eax
 mov    (%eax),%edx
 add    $0x10,%edx
 mov    (%edx),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
 jmp    <T> <_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE+0xaf>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail: onINTER_DESTORY_CHARACTER : Error",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7auction9Character15isActiveTCPUserEv>
 test   %al,%al
 je     <T> <_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE+0xed>
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x21(%eax),%ebx
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool14destroyConInfoEPN3nsl12ConInterfaceE>
-mov    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,-0xc(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
-mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16destroyCharacterEPN7auction9CharacterE>
-cmpb   $0x0,-0x1d(%ebp)
+cmpb   $0x0,-0x19(%ebp)
 je     <T> <_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE+0x14e>
 movl   $"Active Close Sync Ok",(%esp)
 call   <T> <puts>
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser21setActiveSyncByWorkerEb>
 jmp    <T> <_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE+0x16d>
 movl   $"Passive Close Sync Ok",(%esp)
 call   <T> <puts>
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser22setPassiveSyncByWorkerEb>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onINTER_DESTORY_CHARACTER",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onINTER_DESTORY_CHARACTER(InterHandler * this, CMsgCell * pCell)
    */

DWORD __thiscall
InterHandler::_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE
          (InterHandler *this,CMsgCell *pCell)

{
  char cVar1;
  uint id;
  ConInterface *pConInterface;
  bool bVar2;
  TraceLog *pTVar3;
  INTERNALMSG_HEADER *pIVar4;
  Zone *pZVar5;
  GameDataPool *pGVar6;
  TCPUser *this_00;
  int in_GS_OFFSET;
  Character *local_28;
  
                    /* Unresolved local var: Character * pCharacter@[???]
                       Unresolved local var: bool bActiveClosing@[???]
                       Unresolved local var: int workIndex@[???]
                       Unresolved local var: uint characKey@[???]
                       Unresolved local var: int areaIndex@[???]
                       Unresolved local var: INTERNALMSG_DESTROY_CHARACTER * pInterMsg@[???]
                       Unresolved local var: TCPUser * pUser@[???] */
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"In  onINTER_DESTORY_CHARACTER");
  pIVar4 = nsl::CMsgCell::GetInternalMsg(pCell);
  cVar1 = *(char *)&pIVar4[1].pNextJob;
  id = pIVar4->characKey;
  if (pIVar4[1].workIndex == 0) {
    pZVar5 = G_Zone();
    local_28 = (Character *)nsl::IArea::getMemberAt(pZVar5->mArea[0],id);
    pZVar5 = G_Zone();
    (*pZVar5->mArea[0]->_vptr_IArea[4])(pZVar5->mArea[0],id);
  }
  else {
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar3,7,"Fail: onINTER_DESTORY_CHARACTER : Error");
  }
  bVar2 = auction::Character::isActiveTCPUser(local_28);
  if (bVar2) {
    pConInterface = *(ConInterface **)((int)&pIVar4[1].pNextJob + 1);
    pGVar6 = (GameDataPool *)
             nsl::DataPools::getCommonDataPool
                       (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    GameDataPool::destroyConInfo(pGVar6,pConInterface);
  }
  this_00 = nsl::ISession::getTCPUser(&local_28->super_ISession);
  pGVar6 = (GameDataPool *)
           nsl::DataPools::getCommonDataPool
                     (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  GameDataPool::destroyCharacter(pGVar6,local_28);
  if (cVar1 == '\0') {
    puts("Passive Close Sync Ok");
    nsl::TCPUser::setPassiveSyncByWorker(this_00,true);
  }
  else {
    puts("Active Close Sync Ok");
    nsl::TCPUser::setActiveSyncByWorker(this_00,true);
  }
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"Out onINTER_DESTORY_CHARACTER");
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp)（约第 112 行）：

```cpp
unsigned int InterHandler::onINTER_DESTORY_CHARACTER(nsl::CMsgCell* pCell)
{
    G_TraceLog()->sysLog(5, "In  onINTER_DESTORY_CHARACTER");
    INTERNALMSG_DESTROY_CHARACTER* pInterMsg =
        (INTERNALMSG_DESTROY_CHARACTER*)pCell->GetInternalMsg();
    int workIndex = pInterMsg->workIndex;
    bool bActiveClosing = pInterMsg->bActiveClosing;
    unsigned int characKey = pInterMsg->characKey;
    int areaIndex = pInterMsg->areaIndex;
    auction::Character* pCharacter;
    if (areaIndex == 0)
    {
        pCharacter = (auction::Character*)G_Zone()->mArea[0]->getMemberAt(characKey);
        G_Zone()->mArea[0]->unregist(characKey);
    }
    else
    {
        G_TraceLog()->sysLog(7, "Fail: onINTER_DESTORY_CHARACTER : Error");
    }

    if (pCharacter->isActiveTCPUser())
    {
        ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
            ->destroyConInfo(pInterMsg->pConInfo);
    }

    nsl::TCPUser* pUser = pCharacter->getTCPUser();
    ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))
        ->destroyCharacter(pCharacter);

    if (bActiveClosing)
    {
        puts("Active Close Sync Ok");
        pUser->setActiveSyncByWorker(true);
    }
    else
    {
        puts("Passive Close Sync Ok");
        pUser->setPassiveSyncByWorker(true);
    }

    G_TraceLog()->sysLog(5, "Out onINTER_DESTORY_CHARACTER");
    return 0;
}
```
