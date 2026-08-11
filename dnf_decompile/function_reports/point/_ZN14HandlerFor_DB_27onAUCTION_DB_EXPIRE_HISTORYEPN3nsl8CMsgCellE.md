# _ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE

`HandlerFor_DB_::onAUCTION_DB_EXPIRE_HISTORY(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x8072110` | `0x3bc` | `0x806e472` | `0x3be` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,255 +1,256 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x13c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_DB_EXPIRE_HISTORY",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x134,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnections15getDBConnectionEi>
 mov    %eax,-0x28(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
 mov    %eax,-0x24(%ebp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13GetExpireTimeEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x22(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0x8a>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction26GetSystemAuctionExpireTimeEv>
 mov    %eax,-0x20(%ebp)
 lea    -0x49(%ebp),%eax
 mov    $0x1d,%edx
 mov    $0x0,%ecx
 mov    %eax,%ebx
 and    $0x1,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0xa8>
 mov    %cl,(%eax)
 add    $0x1,%eax
 sub    $0x1,%edx
 mov    %eax,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0xba>
 mov    %cx,(%eax)
 add    $0x2,%eax
 sub    $0x2,%edx
 mov    %edx,%esi
 and    $0xfffffffc,%esi
 mov    $0x0,%ebx
 mov    %ecx,(%eax,%ebx,1)
 add    $0x4,%ebx
 cmp    %esi,%ebx
 jb     <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0xc4>
 add    %ebx,%eax
 mov    %edx,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0xdf>
 mov    %cx,(%eax)
 add    $0x2,%eax
 and    $0x1,%edx
 test   %edx,%edx
 je     <T> <_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE+0xeb>
 mov    %cl,(%eax)
 add    $0x1,%eax
 mov    -0x24(%ebp),%eax
 add    $0x4b,%eax
 lea    -0x49(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0xe,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Binary2HexEPKhiPc>
 mov    -0x24(%ebp),%eax
 add    $0x59,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%eax
 mov    %eax,-0xb8(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x7f(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xb4(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x7b(%eax),%eax
 mov    %eax,-0xb0(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x77(%eax),%eax
 mov    %eax,-0xac(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x6f(%eax),%edx
 mov    0x73(%eax),%ecx
 mov    %edx,-0xa8(%ebp)
 mov    %ecx,-0xa4(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x6b(%eax),%eax
 mov    %eax,-0xa0(%ebp)
 mov    -0x24(%ebp),%eax
 add    $0x41,%eax
 movl   $0xa,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection11blob_to_strEiPvi>
 mov    %eax,-0x9c(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x3f(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x98(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x3e(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x94(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x67(%eax),%eax
 mov    %eax,-0x90(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x63(%eax),%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x3a(%eax),%eax
 mov    %eax,-0x88(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x38(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x84(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x33(%eax),%eax
 shr    $0x5,%al
 movzbl %al,%eax
 mov    %eax,-0x80(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x33(%eax),%eax
-and    $0x1f,%eax
-movzbl %al,%eax
-mov    %eax,-0x7c(%ebp)
+movzbl %al,%eax
+mov    %eax,%ecx
+and    $0x1f,%ecx
+mov    %ecx,-0x7c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,-0x78(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%eax
 mov    %eax,-0x74(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x2e(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x70(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x2a(%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x26(%eax),%eax
 mov    %eax,-0x68(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x22(%eax),%eax
 mov    %eax,-0x64(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x21(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x60(%ebp)
-mov    -0x2c(%ebp),%ecx
-mov    %ecx,-0x5c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x5c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x1d(%eax),%eax
 mov    %eax,%edi
 sub    -0x20(%ebp),%edi
 mov    -0x24(%ebp),%eax
 mov    0x15(%eax),%ebx
 mov    0x19(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_DB_9GetYYYYMMEv>
 mov    %eax,-0xbc(%ebp)
-mov    -0xb8(%ebp),%eax
-mov    %eax,0x78(%esp)
+mov    -0xb8(%ebp),%edx
+mov    %edx,0x78(%esp)
 lea    -0x49(%ebp),%eax
 mov    %eax,0x74(%esp)
-mov    -0xb4(%ebp),%edx
-mov    %edx,0x70(%esp)
-mov    -0xb0(%ebp),%ecx
-mov    %ecx,0x6c(%esp)
-mov    -0xac(%ebp),%eax
-mov    %eax,0x68(%esp)
-mov    -0xa8(%ebp),%edx
-mov    -0xa4(%ebp),%ecx
-mov    %edx,0x60(%esp)
-mov    %ecx,0x64(%esp)
-mov    -0xa0(%ebp),%ecx
-mov    %ecx,0x5c(%esp)
-mov    -0x9c(%ebp),%eax
-mov    %eax,0x58(%esp)
-mov    -0x98(%ebp),%edx
-mov    %edx,0x54(%esp)
-mov    -0x94(%ebp),%ecx
-mov    %ecx,0x50(%esp)
-mov    -0x90(%ebp),%eax
-mov    %eax,0x4c(%esp)
-mov    -0x8c(%ebp),%edx
-mov    %edx,0x48(%esp)
-mov    -0x88(%ebp),%ecx
-mov    %ecx,0x44(%esp)
-mov    -0x84(%ebp),%eax
-mov    %eax,0x40(%esp)
-mov    -0x80(%ebp),%edx
-mov    %edx,0x3c(%esp)
-mov    -0x7c(%ebp),%ecx
-mov    %ecx,0x38(%esp)
-mov    -0x78(%ebp),%eax
-mov    %eax,0x34(%esp)
-mov    -0x74(%ebp),%edx
-mov    %edx,0x30(%esp)
-mov    -0x70(%ebp),%ecx
-mov    %ecx,0x2c(%esp)
-mov    -0x6c(%ebp),%eax
-mov    %eax,0x28(%esp)
-mov    -0x68(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x64(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x60(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x5c(%ebp),%edx
-mov    %edx,0x18(%esp)
+mov    -0xb4(%ebp),%ecx
+mov    %ecx,0x70(%esp)
+mov    -0xb0(%ebp),%eax
+mov    %eax,0x6c(%esp)
+mov    -0xac(%ebp),%edx
+mov    %edx,0x68(%esp)
+mov    -0xa8(%ebp),%eax
+mov    -0xa4(%ebp),%edx
+mov    %eax,0x60(%esp)
+mov    %edx,0x64(%esp)
+mov    -0xa0(%ebp),%edx
+mov    %edx,0x5c(%esp)
+mov    -0x9c(%ebp),%ecx
+mov    %ecx,0x58(%esp)
+mov    -0x98(%ebp),%eax
+mov    %eax,0x54(%esp)
+mov    -0x94(%ebp),%edx
+mov    %edx,0x50(%esp)
+mov    -0x90(%ebp),%ecx
+mov    %ecx,0x4c(%esp)
+mov    -0x8c(%ebp),%eax
+mov    %eax,0x48(%esp)
+mov    -0x88(%ebp),%edx
+mov    %edx,0x44(%esp)
+mov    -0x84(%ebp),%ecx
+mov    %ecx,0x40(%esp)
+mov    -0x80(%ebp),%eax
+mov    %eax,0x3c(%esp)
+mov    -0x7c(%ebp),%edx
+mov    %edx,0x38(%esp)
+mov    -0x78(%ebp),%ecx
+mov    %ecx,0x34(%esp)
+mov    -0x74(%ebp),%eax
+mov    %eax,0x30(%esp)
+mov    -0x70(%ebp),%edx
+mov    %edx,0x2c(%esp)
+mov    -0x6c(%ebp),%ecx
+mov    %ecx,0x28(%esp)
+mov    -0x68(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0x64(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x60(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x5c(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
-mov    -0xbc(%ebp),%ecx
-mov    %ecx,0x8(%esp)
+mov    -0xbc(%ebp),%edx
+mov    %edx,0x8(%esp)
 movl   $"inSert into auction_history_%s(auction_id,start_time,occ_time,event_type,owner_id,buyer_id,price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,owner_postal_id,buyer_postal_id,amplify_option,amplify_value,item_guid,unit_price,roi_high_key, roi_low_key, commission, owner_type,random_option,seperate_upgrade) values(%llu,from_unixtime(%d),from_unixtime(%d),%hhu,%d,%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%u,%u,%hhu,%hu,'%s',%d,%llu, %d,%d,%d,0x%s,%d)",0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x1c(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_EXPIRE_HISTORY",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x1c(%ebp),%eax
 add    $0x13c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_DB_EXPIRE_HISTORY(HandlerFor_DB_ * this, CMsgCell *
   pCell) */

DWORD __thiscall
HandlerFor_DB_::_ZN14HandlerFor_DB_27onAUCTION_DB_EXPIRE_HISTORYEPN3nsl8CMsgCellE
          (HandlerFor_DB_ *this,CMsgCell *pCell)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  TraceLog *pTVar23;
  Auction *pAVar24;
  char *pcVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  char local_4d;
  char local_4c [28];
  time_t local_30;
  DBConnection *local_2c;
  LPDBTR_HEADER local_28;
  int local_24;
  DWORD local_20;
  
                    /* Unresolved local var: DBConnection * db@[???]
                       Unresolved local var: LPDBTR_AUCTION_DB_EXPIRE_HISTORY pContext@[???]
                       Unresolved local var: long time_now@[???]
                       Unresolved local var: int expire_time@[???]
                       Unresolved local var: char[29] randomOption@[???]
                       Unresolved local var: int ret@[???] */
  pTVar23 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar23,6,"In  onAUCTION_DB_EXPIRE_HISTORY");
  local_2c = nsl::DBConnections::getDBConnection(&nsl::pApp->super_DBConnections,1);
  local_28 = nsl::CMsgCell::GetDBTr(pCell);
  time(&local_30);
  pAVar24 = G_Auction();
  local_24 = Auction::GetExpireTime(pAVar24);
  if (local_28[1].mOwnerWorkId == -1) {
    pAVar24 = G_Auction();
    local_24 = Auction::GetSystemAuctionExpireTime(pAVar24);
  }
  pcVar25 = &local_4d;
  uVar27 = 0x1d;
  bVar30 = ((uint)pcVar25 & 1) != 0;
  if (bVar30) {
    local_4d = '\0';
    pcVar25 = local_4c;
    uVar27 = 0x1c;
  }
  if (((uint)pcVar25 & 2) != 0) {
    pcVar25[0] = '\0';
    pcVar25[1] = '\0';
    pcVar25 = pcVar25 + 2;
    uVar27 = uVar27 - 2;
  }
  uVar28 = 0;
  do {
    pcVar26 = pcVar25 + uVar28;
    pcVar26[0] = '\0';
    pcVar26[1] = '\0';
    pcVar26[2] = '\0';
    pcVar26[3] = '\0';
    uVar28 = uVar28 + 4;
  } while (uVar28 < (uVar27 & 0xfffffffc));
  pcVar25 = pcVar25 + uVar28;
  if ((uVar27 & 2) != 0) {
    pcVar25[0] = '\0';
    pcVar25[1] = '\0';
    pcVar25 = pcVar25 + 2;
  }
  if (!bVar30) {
    *pcVar25 = '\0';
  }
  DNFFLib::Binary2Hex(&local_28[3].mbWillDelete,0xe,&local_4d);
  bVar22 = UpgradeSeparateInfo::GetUpgradeSeparate
                     ((UpgradeSeparateInfo *)((int)&local_28[4].dbtrId + 1));
  bVar1 = *(byte *)((int)&local_28[6].dbId + 1);
  uVar6 = *(undefined4 *)((int)&local_28[5].sLength + 1);
  uVar7 = *(undefined4 *)((int)&local_28[5].mOwnerWorkId + 1);
  uVar8 = *(undefined4 *)((int)&local_28[5].dbtrId + 2);
  uVar9 = *(undefined4 *)((int)&local_28[5].userid + 2);
  uVar10 = *(undefined4 *)((int)&local_28[5].dbId + 2);
  pcVar25 = nsl::DBConnection::blob_to_str(local_2c,0,(void *)((int)&local_28[3].dbId + 2),10);
  iVar20 = local_28[3].dbId;
  bVar2 = *(byte *)((int)&local_28[2].sLength + 3);
  uVar11 = *(undefined4 *)((int)&local_28[4].sLength + 2);
  uVar12 = *(undefined4 *)((int)&local_28[4].mOwnerWorkId + 2);
  uVar13 = *(undefined4 *)((int)&local_28[2].mOwnerWorkId + 3);
  uVar5 = *(ushort *)((int)&local_28[2].mOwnerWorkId + 1);
  bVar3 = *(byte *)((int)&local_28[2].userid + 1);
  bVar4 = *(byte *)((int)&local_28[2].userid + 1);
  uVar14 = *(undefined4 *)((int)&local_28[2].userid + 2);
  uVar15 = *(undefined4 *)((int)&local_28[2].dbtrId + 1);
  iVar21 = local_28[2].dbtrId;
  iVar16 = local_28[2].dbId;
  uVar27 = local_28[1].sLength;
  iVar17 = local_28[1].mOwnerWorkId;
  bVar30 = local_28[1].mbWillDelete;
  iVar29 = local_28[1].userid - local_24;
  iVar18 = local_28[1].dbId;
  iVar19 = local_28[1].dbtrId;
  pcVar26 = GetYYYYMM(this);
  nsl::DBConnection::set_query
            (local_2c,
             "inSert into auction_history_%s(auction_id,start_time,occ_time,event_type,owner_id,buyer_id,price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,owner_postal_id,buyer_postal_id,amplify_option,amplify_value,item_guid,unit_price,roi_high_key, roi_low_key, commission, owner_type,random_option,seperate_upgrade) values(%llu,from_unixtime(%d),from_unixtime(%d),%hhu,%d,%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%u,%u,%hhu,%hu,\'%s\',%d,%llu, %d,%d,%d,0x%s,%d)"
             ,pcVar26,iVar18,iVar19,iVar29,local_30,(uint)bVar30,iVar17,uVar27,iVar16,
             (uint)(byte)iVar21,uVar15,uVar14,(uint)(bVar4 & 0x1f),(uint)(bVar3 >> 5),(uint)uVar5,
             uVar13,uVar12,uVar11,(uint)bVar2,(uint)(ushort)iVar20,pcVar25,uVar10,uVar8,uVar9,uVar7,
             uVar6,(uint)bVar1,&local_4d,(uint)bVar22);
  local_20 = nsl::DBConnection::exec(local_2c,true);
  pTVar23 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar23,6,"out onAUCTION_DB_EXPIRE_HISTORY");
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp)（约第 479 行）：

```cpp
unsigned int HandlerFor_DB_::onAUCTION_DB_EXPIRE_HISTORY(nsl::CMsgCell* pCell)
{
    time_t time_now;
    DBConnection* db;
    LPDBTR_AUCTION_DB_EXPIRE_HISTORY pContext;
    int expire_time;
    int ret;

    G_TraceLog()->sysLog(6, "In  onAUCTION_DB_EXPIRE_HISTORY");
    db = pApp->super_DBConnections.getDBConnection(1);
    pContext = (LPDBTR_AUCTION_DB_EXPIRE_HISTORY)pCell->GetDBTr();
    time(&time_now);
    expire_time = G_Auction()->GetExpireTime();
    if (pContext->owner_id == -1)
    {
        expire_time = G_Auction()->GetSystemAuctionExpireTime();
    }
    char randomOption[29] = {};
    DNFFLib::Binary2Hex((unsigned char*)&pContext->item_info.random_option_, 0xe, randomOption);
    // ORIG：separate_upgrade/guid_str 无命名局部，直接内联进 set_query（暂存区承接）
    db->set_query(
        "inSert into auction_history_%s(auction_id,start_time,occ_time,event_type,owner_id,buyer_id,price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,owner_postal_id,buyer_postal_id,amplify_option,amplify_value,item_guid,unit_price,roi_high_key, roi_low_key, commission, owner_type,random_option,seperate_upgrade) values(%llu,from_unixtime(%d),from_unixtime(%d),%hhu,%d,%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%u,%u,%hhu,%hu,\'%s\',%d,%llu, %d,%d,%d,0x%s,%d)",
        GetYYYYMM(), pContext->auction_id, pContext->expire_time - expire_time,
        time_now, (unsigned int)pContext->event_type, pContext->owner_id,
        pContext->buyer_id, pContext->price, (int)pContext->item_info.seal,
        pContext->item_info.item_id, pContext->item_info.add_info,
        (unsigned int)(pContext->item_info.uniItemAttr & 0x1f),
        (pContext->item_info.uniItemAttr >> 5) & 0x1f,
        pContext->item_info.endurance, pContext->item_info.extendInfo,
        pContext->owner_postal_id, pContext->buyer_postal_id,
        (unsigned int)pContext->item_info.abilityType_,
        pContext->item_info.abilityValue_,
        db->blob_to_str(0, &pContext->item_info.guid_, 10), pContext->unit_price,
        pContext->_reg_roi_category_key.field_0._high_category_key,
        pContext->_reg_roi_category_key.field_1._low_category_key,
        pContext->commission, (unsigned int)pContext->owner_type,
        randomOption,
        (unsigned int)pContext->item_info.separate_info.GetUpgradeSeparate());
    ret = db->exec(true);
    G_TraceLog()->sysLog(6, "out onAUCTION_DB_EXPIRE_HISTORY");
    return ret;
}
```
