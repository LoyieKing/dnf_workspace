# _ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE

`HandlerFor_DB_::onAUCTION_DB_REGIST_ITEM(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x806fbf6` | `0x4e3` | `0x806fe66` | `0x4e5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,321 +1,322 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x15c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_DB_REGIST_ITEM",0x8(%esp)
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
 lea    -0x42(%ebp),%eax
 mov    $0x1a,%ebx
 mov    $0x0,%edx
 mov    %eax,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x73>
 mov    %dx,(%eax)
 add    $0x2,%eax
 sub    $0x2,%ebx
 mov    %ebx,%esi
 and    $0xfffffffc,%esi
 mov    $0x0,%ecx
 mov    %edx,(%eax,%ecx,1)
 add    $0x4,%ecx
 cmp    %esi,%ecx
 jb     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x7d>
 add    %ecx,%eax
 mov    %ebx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x98>
 mov    %dx,(%eax)
 add    $0x2,%eax
 mov    %ebx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0xa6>
 mov    %dl,(%eax)
 add    $0x1,%eax
 lea    -0x5c(%ebp),%eax
 mov    $0x0,%ecx
 mov    $0x1a,%edx
 mov    %edx,%ebx
 and    $0xfffffffc,%ebx
 mov    $0x0,%edx
 mov    %ecx,(%eax,%edx,1)
 add    $0x4,%edx
 cmp    %ebx,%edx
 jb     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0xbd>
 add    %edx,%eax
 mov    %cx,(%eax)
 add    $0x2,%eax
 mov    -0x24(%ebp),%eax
 add    $0x25,%eax
 mov    %eax,0x8(%esp)
 lea    -0x42(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection13escape_stringEPcPKc>
 mov    -0x24(%ebp),%eax
 add    $0x36,%eax
 mov    %eax,0x8(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection13escape_stringEPcPKc>
 movb   $0x0,-0x35(%ebp)
 movb   $0x0,-0x4f(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13GetExpireTimeEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x21(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x13a>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction26GetSystemAuctionExpireTimeEv>
 mov    %eax,-0x20(%ebp)
 lea    -0x79(%ebp),%eax
 mov    $0x1d,%edx
 mov    $0x0,%ecx
 mov    %eax,%ebx
 and    $0x1,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x158>
 mov    %cl,(%eax)
 add    $0x1,%eax
 sub    $0x1,%edx
 mov    %eax,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x16a>
 mov    %cx,(%eax)
 add    $0x2,%eax
 sub    $0x2,%edx
 mov    %edx,%esi
 and    $0xfffffffc,%esi
 mov    $0x0,%ebx
 mov    %ecx,(%eax,%ebx,1)
 add    $0x4,%ebx
 cmp    %esi,%ebx
 jb     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x174>
 add    %ebx,%eax
 mov    %edx,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x18f>
 mov    %cx,(%eax)
 add    $0x2,%eax
 and    $0x1,%edx
 test   %edx,%edx
 je     <T> <_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE+0x19b>
 mov    %cl,(%eax)
 add    $0x1,%eax
 mov    -0x24(%ebp),%eax
 add    $0x68,%eax
 lea    -0x79(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0xe,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Binary2HexEPKhiPc>
 mov    -0x24(%ebp),%eax
 add    $0x76,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%eax
 mov    %eax,-0xe0(%ebp)
 mov    -0x24(%ebp),%eax
 add    $0x95,%eax
 mov    %eax,-0xdc(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x91(%eax),%eax
 mov    %eax,-0xd8(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x89(%eax),%ebx
 mov    0x8d(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0x81(%eax),%eax
 mov    %eax,-0xd4(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x85(%eax),%eax
 mov    %eax,-0xd0(%ebp)
 mov    -0x24(%ebp),%eax
 add    $0x5e,%eax
 movl   $0xa,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection11blob_to_strEiPvi>
 mov    %eax,-0xcc(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x80(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xc8(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x5c(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0xc4(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x5b(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xc0(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x57(%eax),%eax
 mov    %eax,-0xbc(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x55(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0xb8(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x50(%eax),%eax
 shr    $0x5,%al
 movzbl %al,%eax
 mov    %eax,-0xb4(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x50(%eax),%eax
-and    $0x1f,%eax
-movzbl %al,%eax
-mov    %eax,-0xb0(%ebp)
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0xb0(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x51(%eax),%eax
 mov    %eax,-0xac(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x4c(%eax),%eax
 mov    %eax,-0xa8(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x4b(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0xa4(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x47(%eax),%eax
 mov    %eax,-0xa0(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x43(%eax),%eax
 mov    %eax,-0x9c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x32(%eax),%eax
 mov    %eax,-0x98(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x21(%eax),%eax
 mov    %eax,-0x94(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x1d(%eax),%eax
 mov    %eax,-0x90(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x1d(%eax),%eax
 mov    %eax,%edx
 sub    -0x20(%ebp),%edx
 mov    %edx,-0x8c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x19(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x3fc(%eax),%edi
 mov    -0xe0(%ebp),%eax
 mov    %eax,0x7c(%esp)
 mov    -0xdc(%ebp),%eax
 mov    %eax,0x78(%esp)
 mov    -0xd8(%ebp),%eax
 mov    %eax,0x74(%esp)
 mov    %ebx,0x6c(%esp)
 mov    %esi,0x70(%esp)
 lea    -0x79(%ebp),%eax
 mov    %eax,0x68(%esp)
 mov    -0xd4(%ebp),%eax
 mov    %eax,0x64(%esp)
 mov    -0xd0(%ebp),%eax
 mov    %eax,0x60(%esp)
 mov    -0xcc(%ebp),%eax
 mov    %eax,0x5c(%esp)
 mov    -0xc8(%ebp),%eax
 mov    %eax,0x58(%esp)
 mov    -0xc4(%ebp),%eax
 mov    %eax,0x54(%esp)
 mov    -0xc0(%ebp),%eax
 mov    %eax,0x50(%esp)
 mov    -0xbc(%ebp),%eax
 mov    %eax,0x4c(%esp)
 mov    -0xb8(%ebp),%eax
 mov    %eax,0x48(%esp)
 mov    -0xb4(%ebp),%eax
 mov    %eax,0x44(%esp)
 mov    -0xb0(%ebp),%eax
 mov    %eax,0x40(%esp)
 mov    -0xac(%ebp),%eax
 mov    %eax,0x3c(%esp)
 mov    -0xa8(%ebp),%eax
 mov    %eax,0x38(%esp)
 mov    -0xa4(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    -0xa0(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    -0x9c(%ebp),%eax
 mov    %eax,0x2c(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0x98(%ebp),%eax
 mov    %eax,0x24(%esp)
 lea    -0x42(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x94(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x90(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    -0x8c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x10(%esp)
 movl   $"inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option,roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade) values(%llu,from_unixtime(%d),%d,%d,'%s',%d,'%s',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%u,%hhu,%hu,%hhu,'%s',%d,%d,0x%s,%lld,%d,'%s',%hhu)",0x8(%esp)
 movl   $0x6000,0x4(%esp)
 mov    %edi,(%esp)
 call   <T> <snprintf>
 mov    0x8(%ebp),%eax
 lea    0x3fc(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 add    $0x3fc,%eax
 mov    %eax,0x8(%esp)
 movl   $"%s",0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x1c(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"out onAUCTION_DB_REGIST_ITEM",0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x1c(%ebp),%eax
 add    $0x15c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0806fc97) */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_DB_REGIST_ITEM(HandlerFor_DB_ * this, CMsgCell * pCell)
    */

DWORD __thiscall
HandlerFor_DB_::_ZN14HandlerFor_DB_24onAUCTION_DB_REGIST_ITEMEPN3nsl8CMsgCellE
          (HandlerFor_DB_ *this,CMsgCell *pCell)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPDBTR_HEADER pDVar7;
  byte bVar8;
  TraceLog *pTVar9;
  Auction *pAVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  char local_7d;
  char local_7c [28];
  char local_60 [4];
  undefined2 auStack_5c [4];
  undefined1 local_53;
  char local_46 [13];
  undefined1 local_39;
  DBConnection *local_2c;
  LPDBTR_HEADER local_28;
  int local_24;
  DWORD local_20;
  
                    /* Unresolved local var: DBConnection * db@[???]
                       Unresolved local var: LPDBTR_AUCTION_DB_REGIST_ITEM pContext@[???]
                       Unresolved local var: char[26] owner_name@[???]
                       Unresolved local var: char[26] buyer_name@[???]
                       Unresolved local var: int expire_time@[???]
                       Unresolved local var: char[29] randomOption@[???]
                       Unresolved local var: int ret@[???] */
  pTVar9 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar9,6,"In  onAUCTION_DB_REGIST_ITEM");
  local_2c = nsl::DBConnections::getDBConnection(&nsl::pApp->super_DBConnections,1);
  local_28 = nsl::CMsgCell::GetDBTr(pCell);
  pcVar11 = local_46;
  uVar13 = 0x1a;
  bVar14 = ((uint)pcVar11 & 2) != 0;
  if (bVar14) {
    local_46[0] = '\0';
    local_46[1] = '\0';
    pcVar11 = local_46 + 2;
    uVar13 = 0x18;
  }
  uVar12 = 0;
  do {
    pcVar1 = pcVar11 + uVar12;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar12 = uVar12 + 4;
  } while (uVar12 < (uVar13 & 0xfffffffc));
  if (!bVar14) {
    (pcVar11 + uVar12)[0] = '\0';
    (pcVar11 + uVar12)[1] = '\0';
  }
  uVar13 = 0;
  do {
    uVar12 = uVar13;
    *(undefined4 *)((int)auStack_5c + (uVar12 - 4)) = 0;
    uVar13 = uVar12 + 4;
  } while (uVar12 + 4 < 0x18);
  *(undefined2 *)((int)auStack_5c + uVar12) = 0;
  nsl::DBConnection::escape_string(local_2c,local_46,(char *)((int)&local_28[1].mOwnerWorkId + 3));
  nsl::DBConnection::escape_string(local_2c,local_60,&local_28[2].mbWillDelete);
  local_39 = 0;
  local_53 = 0;
  pAVar10 = G_Auction();
  local_24 = Auction::GetExpireTime(pAVar10);
  if (*(int *)&local_28[1].mbWillDelete == -1) {
    pAVar10 = G_Auction();
    local_24 = Auction::GetSystemAuctionExpireTime(pAVar10);
  }
  pcVar11 = &local_7d;
  uVar13 = 0x1d;
  bVar14 = ((uint)pcVar11 & 1) != 0;
  if (bVar14) {
    local_7d = '\0';
    pcVar11 = local_7c;
    uVar13 = 0x1c;
  }
  if (((uint)pcVar11 & 2) != 0) {
    pcVar11[0] = '\0';
    pcVar11[1] = '\0';
    pcVar11 = pcVar11 + 2;
    uVar13 = uVar13 - 2;
  }
  uVar12 = 0;
  do {
    pcVar1 = pcVar11 + uVar12;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar12 = uVar12 + 4;
  } while (uVar12 < (uVar13 & 0xfffffffc));
  pcVar11 = pcVar11 + uVar12;
  if ((uVar13 & 2) != 0) {
    pcVar11[0] = '\0';
    pcVar11[1] = '\0';
    pcVar11 = pcVar11 + 2;
  }
  if (!bVar14) {
    *pcVar11 = '\0';
  }
  DNFFLib::Binary2Hex((uchar *)((int)&local_28[4].sLength + 3),0xe,&local_7d);
  bVar8 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)&local_28[5].mOwnerWorkId);
  pDVar7 = local_28 + 7;
  uVar2 = *(undefined4 *)((int)&local_28[6].sLength + 2);
  uVar3 = *(undefined4 *)((int)&local_28[6].userid + 3);
  uVar4 = *(undefined4 *)((int)&local_28[6].mOwnerWorkId + 2);
  uVar5 = *(undefined4 *)((int)&local_28[6].dbId + 3);
  uVar6 = *(undefined4 *)((int)&local_28[6].dbtrId + 3);
  pcVar11 = nsl::DBConnection::blob_to_str(local_2c,0,(void *)((int)&local_28[4].userid + 2),10);
  snprintf(this->mSzBuffer,0x6000,
           "inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option,roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade) values(%llu,from_unixtime(%d),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%u,%hhu,%hu,%hhu,\'%s\',%d,%d,0x%s,%lld,%d,\'%s\',%hhu)"
           ,local_28[1].dbId,local_28[1].dbtrId,local_28[1].userid - local_24,local_28[1].userid,
           *(undefined4 *)&local_28[1].mbWillDelete,local_46,local_28[2].userid,local_60,
           local_28[3].dbtrId,local_28[3].userid,(uint)local_28[3].mbWillDelete,
           local_28[3].mOwnerWorkId,*(undefined4 *)((int)&local_28[3].sLength + 1),
           (uint)((byte)local_28[3].sLength & 0x1f),(uint)(byte)((byte)local_28[3].sLength >> 5),
           (uint)*(ushort *)((int)&local_28[4].dbId + 1),*(undefined4 *)((int)&local_28[4].dbId + 3)
           ,(uint)*(byte *)((int)&local_28[4].dbtrId + 3),(uint)(ushort)local_28[4].userid,
           (uint)*(byte *)((int)&local_28[6].dbId + 2),pcVar11,uVar6,uVar5,&local_7d,uVar3,uVar4,
           uVar2,(undefined1 *)((int)&pDVar7->dbId + 2),(uint)bVar8);
  pTVar9 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar9,6,"%s",this->mSzBuffer);
  nsl::DBConnection::set_query(local_2c,"%s",this->mSzBuffer);
  local_20 = nsl::DBConnection::exec(local_2c,true);
  pTVar9 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar9,6,"out onAUCTION_DB_REGIST_ITEM");
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp)（约第 997 行）：

```cpp
unsigned int HandlerFor_DB_::onAUCTION_DB_REGIST_ITEM(nsl::CMsgCell* pCell)
{
    // ORIG 槽位：db@-0x28、pContext@-0x24、expire_time@-0x20、ret@-0x1c
    // （槽位按反声明序分配：最先声明者地址最低）
    DBConnection* db;
    LPDBTR_AUCTION_DB_REGIST_ITEM pContext;
    int expire_time;
    int ret;

    G_TraceLog()->sysLog(6, "In  onAUCTION_DB_REGIST_ITEM");
    db = pApp->super_DBConnections.getDBConnection(1);
    pContext = (LPDBTR_AUCTION_DB_REGIST_ITEM)pCell->GetDBTr();
    char owner_name[26] = {};
    char buyer_name[26] = {};
    db->escape_string(owner_name, pContext->owner_name);
    db->escape_string(buyer_name, pContext->buyer_name);
    // ORIG 行 757/758：两条独立的 name[13]=0（movb $0, +0xd）；无 expire_time=0 语句
    owner_name[13] = '\0';
    buyer_name[13] = '\0';
    expire_time = G_Auction()->GetExpireTime();
    if (pContext->owner_id == -1)
    {
        expire_time = G_Auction()->GetSystemAuctionExpireTime();
    }
    char randomOption[29] = {};
    DNFFLib::Binary2Hex((unsigned char*)&pContext->item_info.random_option_, 0xe, randomOption);
    snprintf(mSzBuffer, 0x6000,
        "inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option,roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade) values(%llu,from_unixtime(%d),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%u,%hhu,%hu,%hhu,\'%s\',%d,%d,0x%s,%lld,%d,\'%s\',%hhu)",
        pContext->auction_id, pContext->expire_time - expire_time, pContext->expire_time,
        pContext->owner_id, owner_name, pContext->buyer_id, buyer_name, pContext->price,
        pContext->instant_price, (int)pContext->item_info.seal, pContext->item_info.item_id,
        pContext->item_info.add_info, (unsigned int)(pContext->item_info.uniItemAttr & 0x1f),
        (pContext->item_info.uniItemAttr >> 5) & 0x1f,
        pContext->item_info.endurance,
        pContext->item_info.extendInfo, (unsigned int)pContext->item_info.abilityType_,
        pContext->item_info.abilityValue_, (unsigned int)pContext->owner_type,
        db->blob_to_str(0, &pContext->item_info.guid_, 10),
        pContext->unit_price, pContext->black_point, randomOption,
        pContext->_reg_roi_category_key.field_0._high_category_key,
        pContext->_reg_roi_category_key.field_1._low_category_key,
        pContext->owner_nexon_id,
        pContext->item_info.separate_info.GetUpgradeSeparate());
    G_TraceLog()->sysLog(6, "%s", mSzBuffer);
    db->set_query("%s", mSzBuffer);
    ret = db->exec(true);
    G_TraceLog()->sysLog(6, "out onAUCTION_DB_REGIST_ITEM");
    return ret;
}
```
