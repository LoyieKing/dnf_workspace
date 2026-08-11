# _ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE

`HandlerFor_DB_::onAUCTION_DB_GET_AVERAGE_PRICE(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x807038a` | `0x3ca` | `0x80705fc` | `0x3ca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,236 +1,236 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_DB_GET_AVERAGE_PRICE",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x134,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnections15getDBConnectionEi>
 mov    %eax,-0x2c(%ebp)
 movl   $"upDate auction_average_price as A, auction_manual_average_price as B SET A.average_price = B.average_price where A.item_id = B.item_id and A.upgrade = B.upgrade and B.is_apply = 0",0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x9b>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price), ERROR",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection19getAffectedRowCountEv>
 mov    %eax,%ebx
 mov    %edx,%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"auction average price is updated manually(%d updated)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"upDate auction_manual_average_price set is_apply = 1 where is_apply = 0",0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x127>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price is_apply), ERROR",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection19getAffectedRowCountEv>
 mov    %eax,%ebx
 mov    %edx,%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"auction_manual_average_price disabled(%d rows)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
 mov    %eax,-0x28(%ebp)
 movl   $"seLect item_id, upgrade, average_price, seperate_upgrade from auction_average_price",0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x24(%ebp)
 movb   $0x1,-0x1d(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x1c5>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_GET_AVERAGE_PRICE, ERROR",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x33b>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection5fetchEv>
 mov    %al,-0x1d(%ebp)
 movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x20c>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERROR, db->fetch()",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x360>
 mov    -0x28(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ulongEiRm>
 movzbl %al,%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x356>
 mov    -0x28(%ebp),%eax
 add    $0x19,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 movzbl %al,%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x359>
 mov    -0x28(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 movzbl %al,%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x35c>
 movb   $0x0,-0x2d(%ebp)
 lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 movzbl %al,%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x35f>
-lea    -0x48(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
 movzbl -0x2d(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,-0x4c(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x1a(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzbl 0x19(%eax),%eax
 movzbl %al,%esi
 mov    -0x28(%ebp),%eax
 mov    0x15(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 movl   $0x1,0x1c(%esp)
 mov    -0x4c(%ebp),%edx
 mov    %edx,0x18(%esp)
-lea    -0x48(%ebp),%edx
+lea    -0x45(%ebp),%edx
 mov    %edx,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19AddItemAveragePriceEmhijRK14ROI_AverageKeyhb>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_n_rowsEv>
 cmp    -0x1c(%ebp),%eax
 seta   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x1d1>
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x360>
 nop
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x360>
 nop
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x360>
 nop
 jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x360>
 nop
 movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE+0x3a0>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to fatch(). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************Fail to fatch(). process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x2,(%esp)
 call   <T> <exit>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_GET_AVERAGE_PRICE",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_DB_GET_AVERAGE_PRICE(HandlerFor_DB_ * this, CMsgCell *
   pCell) */

DWORD __thiscall
HandlerFor_DB_::_ZN14HandlerFor_DB_30onAUCTION_DB_GET_AVERAGE_PRICEEPN3nsl8CMsgCellE
          (HandlerFor_DB_ *this,CMsgCell *pCell)

{
  int iVar1;
  uchar itemRefineValue;
  bool bVar2;
  TraceLog *pTVar3;
  int iVar4;
  Auction *this_00;
  ulong uVar5;
  ulonglong uVar6;
  ROI_AverageKey local_4c;
  uchar local_31;
  DBConnection *local_30;
  LPDBTR_HEADER local_2c;
  uint local_28;
  char local_21;
  uint local_20;
  
                    /* Unresolved local var: DBConnection * db@[???]
                       Unresolved local var: LPDBTR_AUCTION_DB_GET_AVERAGE_PRICE pContext@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: bool bRet@[???] */
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,6,"In  onAUCTION_DB_GET_AVERAGE_PRICE");
  local_30 = nsl::DBConnections::getDBConnection(&nsl::pApp->super_DBConnections,1);
  nsl::DBConnection::set_query
            (local_30,
             "upDate auction_average_price as A, auction_manual_average_price as B SET A.average_price = B.average_price where A.item_id = B.item_id and A.upgrade = B.upgrade and B.is_apply = 0"
            );
  iVar4 = nsl::DBConnection::exec(local_30,true);
  if (iVar4 != 0) {
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar3,7,"out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price), ERROR");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar6 = nsl::DBConnection::getAffectedRowCount(local_30);
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"auction average price is updated manually(%d updated)",uVar6);
  nsl::DBConnection::set_query
            (local_30,"upDate auction_manual_average_price set is_apply = 1 where is_apply = 0");
  iVar4 = nsl::DBConnection::exec(local_30,true);
  if (iVar4 != 0) {
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar3,7,
               "out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price is_apply), ERROR",
               uVar6);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar6 = nsl::DBConnection::getAffectedRowCount(local_30);
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"auction_manual_average_price disabled(%d rows)",uVar6);
  local_2c = nsl::CMsgCell::GetDBTr(pCell);
  nsl::DBConnection::set_query
            (local_30,
             "seLect item_id, upgrade, average_price, seperate_upgrade from auction_average_price");
  local_28 = nsl::DBConnection::exec(local_30,true);
  local_21 = '\x01';
  if (local_28 != 0) {
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar3,7,"out onAUCTION_DB_GET_AVERAGE_PRICE, ERROR");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* Unresolved local var: uint row@[???] */
  local_20 = 0;
  local_28 = 0;
  do {
    uVar5 = nsl::DBConnection::get_n_rows(local_30);
    if (uVar5 <= local_20) {
LAB_080706ea:
      if (local_21 == '\x01') {
        pTVar3 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog(pTVar3,6,"out onAUCTION_DB_GET_AVERAGE_PRICE");
        return 0;
      }
      pTVar3 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar3,7,"Fail to fatch(). process exits.");
      puts("***************Fail to fatch(). process exits.************");
                    /* WARNING: Subroutine does not return */
      exit(2);
    }
                    /* Unresolved local var: uchar refine@[???]
                       Unresolved local var: ROI_AverageKey _temp_roi_average@[???] */
    local_21 = nsl::DBConnection::fetch(local_30);
    if (!(bool)local_21) {
      pTVar3 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar3,7,"ERROR, db->fetch()");
      goto LAB_080706ea;
    }
    bVar2 = nsl::DBConnection::get_ulong(local_30,0,(ulong *)(local_2c + 1));
    local_28 = (uint)bVar2;
    if (local_28 == 0) {
      local_28 = 0;
      goto LAB_080706ea;
    }
    bVar2 = nsl::DBConnection::get_ubyte(local_30,1,(uchar *)&local_2c[1].dbtrId);
    local_28 = (uint)bVar2;
    if (local_28 == 0) {
      local_28 = 0;
      goto LAB_080706ea;
    }
    bVar2 = nsl::DBConnection::get_int(local_30,2,(int *)((int)&local_2c[1].dbtrId + 1));
    local_28 = (uint)bVar2;
    if (local_28 == 0) {
      local_28 = 0;
      goto LAB_080706ea;
    }
    local_31 = '\0';
    bVar2 = nsl::DBConnection::get_ubyte(local_30,3,&local_31);
    local_28 = (uint)bVar2;
    if (local_28 == 0) goto LAB_080706ea;
    ROI_AverageKey::ROI_AverageKey(&local_4c);
    itemRefineValue = local_31;
    iVar4 = *(int *)((int)&local_2c[1].dbtrId + 1);
    iVar1 = local_2c[1].dbtrId;
    uVar5 = local_2c[1].dbId;
    this_00 = G_Auction();
    Auction::AddItemAveragePrice(this_00,uVar5,(uchar)iVar1,iVar4,0,&local_4c,itemRefineValue,true);
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp)（约第 1098 行）：

```cpp
unsigned int HandlerFor_DB_::onAUCTION_DB_GET_AVERAGE_PRICE(nsl::CMsgCell* pCell)
{
    DBConnection* db;
    LPDBTR_AUCTION_DB_GET_AVERAGE_PRICE pContext;
    int ret;
    bool bRet;
    unsigned int row;

    G_TraceLog()->sysLog(6, "In  onAUCTION_DB_GET_AVERAGE_PRICE");
    db = pApp->super_DBConnections.getDBConnection(1);
    db->set_query(
        "upDate auction_average_price as A, auction_manual_average_price as B SET A.average_price = B.average_price where A.item_id = B.item_id and A.upgrade = B.upgrade and B.is_apply = 0");
    if (db->exec(true))
    {
        G_TraceLog()->sysLog(7, "out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price), ERROR");
        exit(1);
    }
    G_TraceLog()->sysLog(5, "auction average price is updated manually(%d updated)",
                         db->getAffectedRowCount());
    db->set_query("upDate auction_manual_average_price set is_apply = 1 where is_apply = 0");
    if (db->exec(true))
    {
        G_TraceLog()->sysLog(7,
            "out onAUCTION_DB_GET_AVERAGE_PRICE(auction_manual_average_price is_apply), ERROR");
        exit(1);
    }
    G_TraceLog()->sysLog(5, "auction_manual_average_price disabled(%d rows)",
                         db->getAffectedRowCount());
    pContext = (LPDBTR_AUCTION_DB_GET_AVERAGE_PRICE)pCell->GetDBTr();
    db->set_query("seLect item_id, upgrade, average_price, seperate_upgrade from auction_average_price");
    ret = db->exec(true);
    bRet = true;
    if (ret != 0)
    {
        G_TraceLog()->sysLog(7, "out onAUCTION_DB_GET_AVERAGE_PRICE, ERROR");
        exit(1);
    }
    for (row = 0; row < db->get_n_rows(); row = row + 1)
    {
        bRet = db->fetch();
        if (!bRet)
        {
            G_TraceLog()->sysLog(7, "ERROR, db->fetch()");
            break;
        }
        if ((ret = (unsigned int)db->get_ulong(0, pContext->item_id)) == 0)
        {
            break;
        }
        if ((ret = (unsigned int)db->get_ubyte(1, pContext->upgrade)) == 0)
        {
            break;
        }
        if ((ret = (unsigned int)db->get_int(2, pContext->average_price)) == 0)
        {
            break;
        }
        unsigned char refine = 0;
        if ((ret = (unsigned int)db->get_ubyte(3, refine)) == 0)
        {
            break;
        }
        ROI_AverageKey _temp_roi_average;
        G_Auction()->AddItemAveragePrice(pContext->item_id, pContext->upgrade,
                                         pContext->average_price, 0, _temp_roi_average,
                                         refine, true);
    }
    if (!bRet)
    {
        G_TraceLog()->sysLog(7, "Fail to fatch(). process exits.");
        puts("***************Fail to fatch(). process exits.************");
        exit(2);
    }
    G_TraceLog()->sysLog(6, "out onAUCTION_DB_GET_AVERAGE_PRICE");
    return 0;
}
```
