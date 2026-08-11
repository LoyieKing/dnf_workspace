# _ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE

`HandlerFor_DB_::onAUCTION_DB_GET_REGISTED_ITEM(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x806f06c` | `0xb89` | `0x806d8d6` | `0xb9b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,702 +1,702 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x15c,%esp
+sub    $0x16c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_DB_GET_REGISTED_ITEM",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x134,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnections15getDBConnectionEi>
 mov    %eax,-0x54(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x134,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnections15getDBConnectionEi>
 mov    %eax,-0x50(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
 mov    %eax,-0x48(%ebp)
 movl   $"seLect auction_id, occ_time, expire_time, owner_id, owner_name, buyer_id, buyer_name, price, instant_price, seal_flag, item_id, add_info, upgrade, amplify_option, amplify_value, seal_cnt, endurance, extend_info, owner_type, black_point, unit_price, item_guid, random_option, roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade from auction_main order by expire_time",0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x44(%ebp)
 movb   $0x1,-0x3d(%ebp)
 cmpl   $0x0,-0x44(%ebp)
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xd9>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to exec(select * from auction_main order by expire_time). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************Fail to exec(select * from auction_main order by expire_time). process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x5,(%esp)
 call   <T> <exit>
-movl   $0x0,-0x34(%ebp)
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6a7>
+movl   $0x0,-0x38(%ebp)
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6b9>
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection5fetchEv>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x120>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERROR, db->fetch()",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
-movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
+movl   $0x0,-0x4c(%ebp)
 mov    -0x48(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c2>
+jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d4>
 mov    -0x48(%ebp),%eax
 mov    0x4c(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x1af>
 mov    -0x48(%ebp),%eax
 mov    0x4c(%eax),%edi
 mov    -0x48(%ebp),%eax
 mov    0x15(%eax),%ebx
 mov    0x19(%eax),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"ERROR, 0904patch_bug, au_id=%llu, item_id=%d, ",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6a3>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6b5>
 mov    -0x48(%ebp),%eax
 lea    0x36(%eax),%edi
 mov    -0x48(%ebp),%eax
 mov    0x32(%eax),%ebx
 mov    -0x48(%ebp),%eax
 mov    0x1d(%eax),%esi
 mov    -0x48(%ebp),%eax
 add    $0x15,%eax
+mov    %eax,-0xf0(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x95,%eax
+mov    %eax,-0xec(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x89,%eax
+mov    %eax,-0xe8(%ebp)
+mov    -0x48(%ebp),%eax
+mov    0x85(%eax),%eax
+mov    %eax,-0xe4(%ebp)
+mov    -0x48(%ebp),%eax
+mov    0x81(%eax),%eax
 mov    %eax,-0xe0(%ebp)
 mov    -0x48(%ebp),%eax
-add    $0x95,%eax
+mov    0x47(%eax),%eax
 mov    %eax,-0xdc(%ebp)
 mov    -0x48(%ebp),%eax
-add    $0x89,%eax
+mov    0x43(%eax),%eax
 mov    %eax,-0xd8(%ebp)
-mov    -0x48(%ebp),%eax
-mov    0x85(%eax),%eax
-mov    %eax,-0xd4(%ebp)
-mov    -0x48(%ebp),%eax
-mov    0x81(%eax),%eax
-mov    %eax,-0xd0(%ebp)
-mov    -0x48(%ebp),%eax
-mov    0x47(%eax),%eax
-mov    %eax,-0xcc(%ebp)
-mov    -0x48(%ebp),%eax
-mov    0x43(%eax),%eax
-mov    %eax,-0xc8(%ebp)
 mov    -0x48(%ebp),%eax
 movzbl 0x80(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0xc4(%ebp)
+mov    %eax,-0xd4(%ebp)
 mov    -0x48(%ebp),%eax
 add    $0x25,%eax
-mov    %eax,-0xc0(%ebp)
+mov    %eax,-0xd0(%ebp)
 mov    -0x48(%ebp),%eax
 mov    0x21(%eax),%eax
-mov    %eax,-0xbc(%ebp)
+mov    %eax,-0xcc(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,%ecx
 movl   $0x1,0x70(%esp)
 mov    %edi,0x6c(%esp)
 mov    %ebx,0x68(%esp)
 mov    %esi,0x64(%esp)
-mov    -0xe0(%ebp),%eax
+mov    -0xf0(%ebp),%eax
 mov    %eax,0x60(%esp)
 mov    -0x48(%ebp),%edx
 mov    0x4b(%edx),%eax
 mov    %eax,0x28(%esp)
 mov    0x4f(%edx),%eax
 mov    %eax,0x2c(%esp)
 mov    0x53(%edx),%eax
 mov    %eax,0x30(%esp)
 mov    0x57(%edx),%eax
 mov    %eax,0x34(%esp)
 mov    0x5b(%edx),%eax
 mov    %eax,0x38(%esp)
 mov    0x5f(%edx),%eax
 mov    %eax,0x3c(%esp)
 mov    0x63(%edx),%eax
 mov    %eax,0x40(%esp)
 mov    0x67(%edx),%eax
 mov    %eax,0x44(%esp)
 mov    0x6b(%edx),%eax
 mov    %eax,0x48(%esp)
 mov    0x6f(%edx),%eax
 mov    %eax,0x4c(%esp)
 mov    0x73(%edx),%eax
 mov    %eax,0x50(%esp)
 mov    0x77(%edx),%eax
 mov    %eax,0x54(%esp)
 mov    0x7b(%edx),%eax
 mov    %eax,0x58(%esp)
 movzbl 0x7f(%edx),%eax
 mov    %al,0x5c(%esp)
+mov    -0xec(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0xe8(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    -0xe4(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0xe0(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    -0xdc(%ebp),%eax
-mov    %eax,0x24(%esp)
+mov    %eax,0x14(%esp)
 mov    -0xd8(%ebp),%eax
-mov    %eax,0x20(%esp)
+mov    %eax,0x10(%esp)
 mov    -0xd4(%ebp),%eax
-mov    %eax,0x1c(%esp)
+mov    %eax,0xc(%esp)
 mov    -0xd0(%ebp),%eax
-mov    %eax,0x18(%esp)
+mov    %eax,0x8(%esp)
 mov    -0xcc(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0xc8(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    -0xc4(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    -0xc0(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0xbc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x38d>
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x44(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Fail to RegistItem() from DB. process exits. %s(%d)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************Fail to RegistItem() from DB. process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x3,(%esp)
 call   <T> <exit>
 mov    -0x48(%ebp),%eax
 mov    0x4c(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x4c(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6a3>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6b5>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"seLect jewel_socket, color1, color2 from user_items where ui_id=%d",0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x436>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Fail to exec(seLect jewel_socket from user_items where ui_id=%d). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x6,(%esp)
 call   <T> <exit>
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_n_rowsEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5b5>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5c7>
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection5fetchEv>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x493>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, game_db->fetch(), avatar ui_id=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
 movl   $0x1e,0xc(%esp)
 lea    -0x72(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_binaryEiPvi>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x4ef>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, game_db->get_binary(), avatar ui_id=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
-movw   $0x0,-0x7e(%ebp)
-lea    -0x7e(%ebp),%eax
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
+movw   $0x0,-0x8a(%ebp)
+lea    -0x8a(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_shortEiRs>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x549>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x54f>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, game_db->get_short(), avatar ui_id=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
-movw   $0x0,-0x80(%ebp)
-lea    -0x80(%ebp),%eax
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
+movw   $0x0,-0x8c(%ebp)
+lea    -0x8c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_shortEiRs>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5a3>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5af>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, game_db->get_short(), avatar ui_id=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
-movzwl -0x7e(%ebp),%eax
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
+movzwl -0x8a(%ebp),%eax
 mov    %ax,-0x76(%ebp)
-movzwl -0x80(%ebp),%eax
+movzwl -0x8c(%ebp),%eax
 mov    %ax,-0x74(%ebp)
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5eb>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x5fd>
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x72(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x76(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x72(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19AddAvatarEmblemInfoEiPK20stAvatarEmblemInfo_t>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x647>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x659>
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, AddAvatarEmblemInfo(), ret=%s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
 mov    -0x48(%ebp),%eax
 mov    0x51(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x76(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22AddAvatarExpansionInfoEiPK23stAvatarExpansionInfo_t>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6a3>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6b5>
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR, AddAvatarExpansionInfo(), ret=%s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
-addl   $0x1,-0x34(%ebp)
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
+addl   $0x1,-0x38(%ebp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_n_rowsEv>
-cmp    -0x34(%ebp),%eax
+cmp    -0x38(%ebp),%eax
 seta   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xe5>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6c3>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x6d5>
 nop
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x703>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x715>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"onAUCTION_DB_GET_REGISTED_ITEM, Fail to fatch(). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"onAUCTION_DB_GET_REGISTED_ITEM, ***************Fail to fatch(). process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x4,(%esp)
 call   <T> <exit>
 movl   $0x0,-0x7c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_DB_9GetYYYYMMEv>
 mov    %eax,-0x3c(%ebp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"seLect count(*) from auction_history_%s",0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x783>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x795>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to exec(select count(*) from auction_history). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************Fail to exec(select count(*) from auction_history). process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x9,(%esp)
 call   <T> <exit>
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection5fetchEv>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x7d1>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x7e3>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERROR, db->fetch(), select count(*) from auction_history",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************ERROR, db->fetch(), select count(*) from auction_history************",(%esp)
 call   <T> <puts>
 movl   $0x6,(%esp)
 call   <T> <exit>
 lea    -0x7c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection8get_uintEiRj>
 mov    -0x7c(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x932>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x944>
 movl   $0x0,-0x88(%ebp)
 movl   $0x0,-0x84(%ebp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"seLect max(auction_id) from auction_history_%s",0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9set_queryEPKcz>
 movl   $0x1,0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4execEb>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x875>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x887>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to exec(select max(auction_id) from auction_history). process exits.",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************Fail to exec(select max(auction_id) from auction_history). process exits.************",(%esp)
 call   <T> <puts>
 movl   $0x8,(%esp)
 call   <T> <exit>
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_n_rowsEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x932>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x944>
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection5fetchEv>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x8dc>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x8ee>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERROR, db->fetch(), max(auction_id) from history",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $"***************ERROR, db->fetch(), max(auction_id) from history************",(%esp)
 call   <T> <puts>
 movl   $0x7,(%esp)
 call   <T> <exit>
 lea    -0x88(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_int64EiRy>
 mov    %al,-0x3d(%ebp)
 movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x911>
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x923>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb7e>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb90>
 mov    -0x88(%ebp),%ebx
 mov    -0x84(%ebp),%esi
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22SetMaxHistoryAuctionIdEy>
 call   <T> <_Z6G_Zonev>
 mov    (%eax),%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
 movl   $0x1,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6GSArea17SetServiceRunningEb>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa5c>
-lea    -0x9a(%ebp),%eax
+je     <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa6e>
+lea    -0x9e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32PCK_AUCTION_SERVICE_AVAILABLE_PGC1Ev>
-mov    -0x38(%ebp),%edx
-lea    -0xa0(%ebp),%eax
+mov    -0x34(%ebp),%edx
+lea    -0xa4(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea12getBeginIterEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa37>
-mov    -0x38(%ebp),%eax
-mov    -0xa0(%ebp),%edx
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa49>
+mov    -0x34(%ebp),%eax
+mov    -0xa4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea16getValueFromIterESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,%ebx
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x28(%ebp)
+lea    -0x9e(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x24(%ebp)
-lea    -0x9a(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    -0x28(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
-lea    -0xa0(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl8ISessionEEEppEv>
-mov    -0x38(%ebp),%eax
-mov    -0xa0(%ebp),%edx
+mov    -0x34(%ebp),%eax
+mov    -0xa4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea9isIterEndESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x995>
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb49>
-lea    -0xb2(%ebp),%eax
+jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0x9a7>
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb5b>
+lea    -0xb6(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32PCK_AUCTION_SERVICE_AVAILABLE_AGC1Ev>
-mov    -0x38(%ebp),%edx
-lea    -0xb8(%ebp),%eax
+mov    -0x34(%ebp),%edx
+lea    -0xbc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea12getBeginIterEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb29>
-mov    -0x38(%ebp),%eax
-mov    -0xb8(%ebp),%edx
+jmp    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xb3b>
+mov    -0x34(%ebp),%eax
+mov    -0xbc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea16getValueFromIterESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,%ebx
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x1c(%ebp)
-lea    -0xb2(%ebp),%eax
+lea    -0xb6(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
-lea    -0xb8(%ebp),%eax
+lea    -0xbc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl8ISessionEEEppEv>
-mov    -0x38(%ebp),%eax
-mov    -0xb8(%ebp),%edx
+mov    -0x34(%ebp),%eax
+mov    -0xbc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea9isIterEndESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa87>
+jne    <T> <_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE+0xa99>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"out onAUCTION_DB_GET_REGISTED_ITEM : paytype(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_DB_GET_REGISTED_ITEM(HandlerFor_DB_ * this, CMsgCell *
   pCell) */

DWORD __thiscall
HandlerFor_DB_::_ZN14HandlerFor_DB_30onAUCTION_DB_GET_REGISTED_ITEMEPN3nsl8CMsgCellE
          (HandlerFor_DB_ *this,CMsgCell *pCell)

{
  uchar userType;
  undefined4 uVar1;
  long expireTime;
  int unitPrice;
  uint black_point;
  int instantPrice;
  int price;
  int ownerId;
  __int64 _Var2;
  size_t sVar3;
  MAP_OBJECTS_ITER MVar4;
  bool bVar5;
  TraceLog *pTVar6;
  STItemInfo *pSVar7;
  __int64 *auctionId;
  char *owner_nexon_id;
  ROI_Category *_roi_category_key;
  char *ownerName;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  Auction *pAVar11;
  Zone *pZVar12;
  PAY_TYPE PVar13;
  TCPUser *pTVar14;
  CommonDataPool *pCVar15;
  int in_GS_OFFSET;
  undefined1 local_bc [24];
  undefined1 local_a4 [24];
  size_t local_8c;
  MAP_OBJECTS_ITER local_88;
  short local_84;
  short local_82;
  uint local_80;
  stAvatarExpansionInfo_t local_7a;
  stAvatarEmblemInfo_t local_76;
  DBConnection *local_58;
  DBConnection *local_54;
  uint local_50;
  LPDBTR_AUCTION_DB_GET_REGISTED_ITEM local_4c;
  int local_48;
  char local_41;
  char *local_40;
  GSArea *local_3c;
  uint local_38;
  undefined4 local_34;
  ISession *local_30;
  Message *local_2c;
  CMsgCell *local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: DBConnection * db@[???]
                       Unresolved local var: DBConnection * game_db@[???]
                       Unresolved local var: int item_category_temp@[???]
                       Unresolved local var: stAvatarEmblemInfo_t emblem_info_struct@[???]
                       Unresolved local var: stAvatarExpansionInfo_t expansion_info_struct@[???]
                       Unresolved local var: LPDBTR_AUCTION_DB_GET_REGISTED_ITEM pContext@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: bool bRet@[???]
                       Unresolved local var: uint history_db_count@[???]
                       Unresolved local var: char * yyyymm@[???]
                       Unresolved local var: GSArea * pArea@[???] */
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar6,5,"In  onAUCTION_DB_GET_REGISTED_ITEM");
  local_58 = nsl::DBConnections::getDBConnection(&nsl::pApp->super_DBConnections,1);
  local_54 = nsl::DBConnections::getDBConnection(&nsl::pApp->super_DBConnections,0);
  local_4c = (LPDBTR_AUCTION_DB_GET_REGISTED_ITEM)nsl::CMsgCell::GetDBTr(pCell);
  nsl::DBConnection::set_query
            (local_58,
             "seLect auction_id, occ_time, expire_time, owner_id, owner_name, buyer_id, buyer_name, price, instant_price, seal_flag, item_id, add_info, upgrade, amplify_option, amplify_value, seal_cnt, endurance, extend_info, owner_type, black_point, unit_price, item_guid, random_option, roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade from auction_main order by expire_time"
            );
  local_48 = nsl::DBConnection::exec(local_58,true);
  local_41 = '\x01';
  if (local_48 != 0) {
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar6,7,
               "Fail to exec(select * from auction_main order by expire_time). process exits.");
    puts(
        "***************Fail to exec(select * from auction_main order by expire_time). process exits.************"
        );
                    /* WARNING: Subroutine does not return */
    exit(5);
  }
                    /* Unresolved local var: uint row@[???] */
  local_38 = 0;
  local_48 = 0;
  do {
    uVar10 = nsl::DBConnection::get_n_rows(local_58);
    if (uVar10 <= local_38) {
LAB_0806f72f:
      if (local_41 != '\x01') {
        pTVar6 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar6,7,"onAUCTION_DB_GET_REGISTED_ITEM, Fail to fatch(). process exits.");
        puts(
            "onAUCTION_DB_GET_REGISTED_ITEM, ***************Fail to fatch(). process exits.************"
            );
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
      local_80 = 0;
      local_40 = GetYYYYMM(this);
      nsl::DBConnection::set_query(local_58,"seLect count(*) from auction_history_%s",local_40);
      local_48 = nsl::DBConnection::exec(local_58,true);
      if (local_48 != 0) {
        pTVar6 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar6,7,"Fail to exec(select count(*) from auction_history). process exits.");
        puts(
            "***************Fail to exec(select count(*) from auction_history). process exits.************"
            );
                    /* WARNING: Subroutine does not return */
        exit(9);
      }
      local_41 = nsl::DBConnection::fetch(local_58);
      if (!(bool)local_41) {
        pTVar6 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog(pTVar6,7,"ERROR, db->fetch(), select count(*) from auction_history");
        puts("***************ERROR, db->fetch(), select count(*) from auction_history************");
                    /* WARNING: Subroutine does not return */
        exit(6);
      }
      nsl::DBConnection::get_uint(local_58,0,&local_80);
      if (local_80 != 0) {
                    /* Unresolved local var: __int64 history_max_auction_id@[???] */
        local_8c = 0;
        local_88._M_node = (_Base_ptr)0x0;
        nsl::DBConnection::set_query
                  (local_58,"seLect max(auction_id) from auction_history_%s",local_40);
        local_48 = nsl::DBConnection::exec(local_58,true);
        if (local_48 != 0) {
          pTVar6 = nsl::G_TraceLog();
          nsl::TraceLog::sysLog
                    (pTVar6,7,
                     "Fail to exec(select max(auction_id) from auction_history). process exits.");
          puts(
              "***************Fail to exec(select max(auction_id) from auction_history). process exits.************"
              );
                    /* WARNING: Subroutine does not return */
          exit(8);
        }
        uVar10 = nsl::DBConnection::get_n_rows(local_58);
        if (uVar10 == 1) {
          local_41 = nsl::DBConnection::fetch(local_58);
          if (!(bool)local_41) {
            pTVar6 = nsl::G_TraceLog();
            nsl::TraceLog::sysLog(pTVar6,7,"ERROR, db->fetch(), max(auction_id) from history");
            puts("***************ERROR, db->fetch(), max(auction_id) from history************");
                    /* WARNING: Subroutine does not return */
            exit(7);
          }
          local_41 = nsl::DBConnection::get_int64(local_58,0,(__int64 *)&local_8c);
          MVar4._M_node = local_88._M_node;
          sVar3 = local_8c;
          if (!(bool)local_41) {
            return 1;
          }
          pAVar11 = G_Auction();
          Auction::SetMaxHistoryAuctionId(pAVar11,CONCAT44(MVar4._M_node,sVar3));
        }
      }
      pZVar12 = G_Zone();
      local_3c = (GSArea *)pZVar12->mArea[0];
      GSArea::SetServiceRunning(local_3c,true);
                    /* Unresolved local var: Character * pCharacter@[???] */
      pAVar11 = G_Auction();
      PVar13 = Auction::GetPayType(pAVar11);
      if (PVar13 == PAY_TYPE_POINT) {
                    /* Unresolved local var: PCK_AUCTION_SERVICE_AVAILABLE_PG pck@[???]
                       Unresolved local var: MAP_OBJECTS_ITER iter@[???] */
        PCK_AUCTION_SERVICE_AVAILABLE_PG::PCK_AUCTION_SERVICE_AVAILABLE_PG
                  ((PCK_AUCTION_SERVICE_AVAILABLE_PG *)(local_a4 + 6));
        nsl::IArea::getBeginIter((IArea *)local_a4);
        while (bVar5 = nsl::IArea::isIterEnd
                                 (&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_a4._0_4_), !bVar5)
        {
                    /* Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          local_30 = nsl::IArea::getValueFromIter
                               (&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_a4._0_4_);
          pTVar14 = nsl::ISession::getTCPUser(local_30);
          pCVar15 = nsl::DataPools::getCommonDataPool
                              (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_2c = nsl::CommonDataPool::getSendMessage(pCVar15,pTVar14);
          local_28 = nsl::Message::getCellFromMessage(local_2c);
          nsl::CMsgCell::operator<<(local_28,(LPPACKET_HEADER)(local_a4 + 6));
          nsl::CMsgCell::PAD(local_28);
          nsl::TCPSendThread::PushSendMsg((this->super_IDBHandler).super_IHandler.sendTCP_,local_2c)
          ;
          std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_>::operator++
                    ((_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_> *)local_a4);
        }
      }
      else {
                    /* Unresolved local var: PCK_AUCTION_SERVICE_AVAILABLE_AG pck@[???]
                       Unresolved local var: MAP_OBJECTS_ITER iter@[???] */
        PCK_AUCTION_SERVICE_AVAILABLE_AG::PCK_AUCTION_SERVICE_AVAILABLE_AG
                  ((PCK_AUCTION_SERVICE_AVAILABLE_AG *)(local_bc + 6));
        nsl::IArea::getBeginIter((IArea *)local_bc);
        while (bVar5 = nsl::IArea::isIterEnd
                                 (&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_bc._0_4_), !bVar5)
        {
                    /* Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          local_30 = nsl::IArea::getValueFromIter
                               (&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_bc._0_4_);
          pTVar14 = nsl::ISession::getTCPUser(local_30);
          pCVar15 = nsl::DataPools::getCommonDataPool
                              (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_24 = nsl::CommonDataPool::getSendMessage(pCVar15,pTVar14);
          local_20 = nsl::Message::getCellFromMessage(local_24);
          nsl::CMsgCell::operator<<(local_20,(LPPACKET_HEADER)(local_bc + 6));
          nsl::CMsgCell::PAD(local_20);
          nsl::TCPSendThread::PushSendMsg((this->super_IDBHandler).super_IHandler.sendTCP_,local_24)
          ;
          std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_>::operator++
                    ((_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_> *)local_bc);
        }
      }
      pAVar11 = G_Auction();
      PVar13 = Auction::GetPayType(pAVar11);
      pTVar6 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar6,5,"out onAUCTION_DB_GET_REGISTED_ITEM : paytype(%d)",PVar13);
      return 0;
    }
                    /* Unresolved local var: int field_index@[???] */
    local_41 = nsl::DBConnection::fetch(local_58);
    if (!(bool)local_41) {
      pTVar6 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar6,7,"ERROR, db->fetch()");
      goto LAB_0806f72f;
    }
    local_34 = 0;
    local_41 = _ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM
                         (this,local_58,local_4c);
    if (!(bool)local_41) goto LAB_0806f72f;
    uVar10 = (local_4c->item_info).item_id;
    pAVar11 = G_Auction();
    pSVar7 = Auction::GetItemInfo(pAVar11,uVar10);
    if (pSVar7 == (STItemInfo *)0x0) {
      uVar10 = (local_4c->item_info).item_id;
      _Var2 = local_4c->auction_id;
      uVar1 = *(undefined4 *)((int)&local_4c->auction_id + 4);
      pTVar6 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog
                (pTVar6,7,"ERROR, 0904patch_bug, au_id=%llu, item_id=%d, ",(int)_Var2,uVar1,uVar10);
    }
    else {
      pcVar8 = local_4c->buyer_name;
      iVar9 = local_4c->buyer_id;
      expireTime = local_4c->expire_time;
      auctionId = &local_4c->auction_id;
      owner_nexon_id = local_4c->owner_nexon_id;
      _roi_category_key = &local_4c->_reg_roi_category_key;
      unitPrice = local_4c->unit_price;
      black_point = local_4c->black_point;
      instantPrice = local_4c->instant_price;
      price = local_4c->price;
      userType = local_4c->owner_type;
      ownerName = local_4c->owner_name;
      ownerId = local_4c->owner_id;
      pAVar11 = G_Auction();
      local_48 = Auction::RegistItem(pAVar11,ownerId,ownerName,userType,price,instantPrice,
                                     black_point,unitPrice,_roi_category_key,owner_nexon_id,
                                     local_4c->item_info,auctionId,expireTime,iVar9,pcVar8,true);
      if (local_48 != 0) {
        pcVar8 = nsl::GetErrorStr(local_48);
        pTVar6 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar6,7,"Fail to RegistItem() from DB. process exits. %s(%d)",pcVar8,local_48);
        puts("***************Fail to RegistItem() from DB. process exits.************");
                    /* WARNING: Subroutine does not return */
        exit(3);
      }
      uVar10 = (local_4c->item_info).item_id;
      pAVar11 = G_Auction();
      pSVar7 = Auction::GetItemInfo(pAVar11,uVar10);
      local_50 = (uint)pSVar7->category_;
      pAVar11 = G_Auction();
      bVar5 = Auction::IsAvatarCategory(pAVar11,local_50);
      if (bVar5) {
        nsl::DBConnection::set_query
                  (local_54,"seLect jewel_socket, color1, color2 from user_items where ui_id=%d",
                   (local_4c->item_info).add_info);
        iVar9 = nsl::DBConnection::exec(local_54,true);
        if (iVar9 != 0) {
          iVar9 = (local_4c->item_info).add_info;
          pTVar6 = nsl::G_TraceLog();
          nsl::TraceLog::sysLog
                    (pTVar6,7,
                     "Fail to exec(seLect jewel_socket from user_items where ui_id=%d). process exits."
                     ,iVar9);
                    /* WARNING: Subroutine does not return */
          exit(6);
        }
        uVar10 = nsl::DBConnection::get_n_rows(local_54);
        if (uVar10 == 0) {
          memset(&local_76,0,0x1e);
          memset(&local_7a,0,4);
        }
        else {
                    /* Unresolved local var: short color1@[???]
                       Unresolved local var: short color2@[???] */
          local_41 = nsl::DBConnection::fetch(local_54);
          if (!(bool)local_41) {
            iVar9 = (local_4c->item_info).add_info;
            pTVar6 = nsl::G_TraceLog();
            nsl::TraceLog::sysLog(pTVar6,7,"ERROR, game_db->fetch(), avatar ui_id=%d",iVar9);
            goto LAB_0806f72f;
          }
          local_41 = nsl::DBConnection::get_binary(local_54,0,&local_76,0x1e);
          if (!(bool)local_41) {
            iVar9 = (local_4c->item_info).add_info;
            pTVar6 = nsl::G_TraceLog();
            nsl::TraceLog::sysLog(pTVar6,7,"ERROR, game_db->get_binary(), avatar ui_id=%d",iVar9);
            goto LAB_0806f72f;
          }
          local_82 = 0;
          local_41 = nsl::DBConnection::get_short(local_54,1,&local_82);
          if (!(bool)local_41) {
            iVar9 = (local_4c->item_info).add_info;
            pTVar6 = nsl::G_TraceLog();
            nsl::TraceLog::sysLog(pTVar6,7,"ERROR, game_db->get_short(), avatar ui_id=%d",iVar9);
            goto LAB_0806f72f;
          }
          local_84 = 0;
          local_41 = nsl::DBConnection::get_short(local_54,2,&local_84);
          if (!(bool)local_41) {
            iVar9 = (local_4c->item_info).add_info;
            pTVar6 = nsl::G_TraceLog();
            nsl::TraceLog::sysLog(pTVar6,7,"ERROR, game_db->get_short(), avatar ui_id=%d",iVar9);
            goto LAB_0806f72f;
          }
          local_7a.color[0] = local_82;
          local_7a.color[1] = local_84;
        }
        iVar9 = (local_4c->item_info).add_info;
        pAVar11 = G_Auction();
        local_48 = Auction::AddAvatarEmblemInfo(pAVar11,iVar9,&local_76);
        if (local_48 != 0) {
          pcVar8 = nsl::GetErrorStr(local_48);
          pTVar6 = nsl::G_TraceLog();
          nsl::TraceLog::sysLog(pTVar6,7,"ERROR, AddAvatarEmblemInfo(), ret=%s",pcVar8);
          goto LAB_0806f72f;
        }
        iVar9 = (local_4c->item_info).add_info;
        pAVar11 = G_Auction();
        local_48 = Auction::AddAvatarExpansionInfo(pAVar11,iVar9,&local_7a);
        if (local_48 != 0) {
          pcVar8 = nsl::GetErrorStr(local_48);
          pTVar6 = nsl::G_TraceLog();
          nsl::TraceLog::sysLog(pTVar6,7,"ERROR, AddAvatarExpansionInfo(), ret=%s",pcVar8);
          goto LAB_0806f72f;
        }
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp)（约第 243 行）：

```cpp
unsigned int HandlerFor_DB_::onAUCTION_DB_GET_REGISTED_ITEM(nsl::CMsgCell* pCell)
{
    stAvatarEmblemInfo_t emblem_info_struct;
    stAvatarExpansionInfo_t expansion_info_struct;
    DBConnection* db;
    DBConnection* game_db;
    // ORIG：int 型（this 先求值、参数走 edx）；unsigned 会 arg 先求值走 ebx
    int item_category_temp;
    LPDBTR_AUCTION_DB_GET_REGISTED_ITEM pContext;
    int ret;
    bool bRet;
    char* yyyymm;
    unsigned int row;
    unsigned int history_db_count;
    unsigned long long history_max_auction_id;

    G_TraceLog()->sysLog(5, "In  onAUCTION_DB_GET_REGISTED_ITEM");
    db = pApp->super_DBConnections.getDBConnection(1);
    game_db = pApp->super_DBConnections.getDBConnection(0);
    pContext = (LPDBTR_AUCTION_DB_GET_REGISTED_ITEM)pCell->GetDBTr();
    db->set_query(
        "seLect auction_id, occ_time, expire_time, owner_id, owner_name, buyer_id, buyer_name, price, instant_price, seal_flag, item_id, add_info, upgrade, amplify_option, amplify_value, seal_cnt, endurance, extend_info, owner_type, black_point, unit_price, item_guid, random_option, roi_high_key, roi_low_key, owner_nexon_id,seperate_upgrade from auction_main order by expire_time");
    ret = db->exec(true);
    bRet = true;
    if (ret != 0)
    {
        G_TraceLog()->sysLog(7,
            "Fail to exec(select * from auction_main order by expire_time). process exits.");
        puts(
            "***************Fail to exec(select * from auction_main order by expire_time). process exits.************");
        exit(5);
    }
    for (row = 0; row < db->get_n_rows(); row = row + 1)
    {
        bRet = db->fetch();
        if (!bRet)
        {
            G_TraceLog()->sysLog(7, "ERROR, db->fetch()");
            break;
        }
        item_category_temp = 0;
        bRet = GetAuctionMainFetchResult(db, pContext);
        if (!bRet)
        {
            break;
        }
        if (!G_Auction()->GetItemInfo(pContext->item_info.item_id))
        {
            G_TraceLog()->sysLog(7, "ERROR, 0904patch_bug, au_id=%llu, item_id=%d, ",
                                 pContext->auction_id, pContext->item_info.item_id);
        }
        else
        {
            ret = G_Auction()->RegistItem(
                pContext->owner_id, pContext->owner_name, pContext->owner_type,
                pContext->price, pContext->instant_price, pContext->black_point,
                pContext->unit_price, pContext->_reg_roi_category_key,
                pContext->owner_nexon_id, pContext->item_info, pContext->auction_id,
                pContext->expire_time, pContext->buyer_id, pContext->buyer_name, true);
            if (ret)
            {
                G_TraceLog()->sysLog(7, "Fail to RegistItem() from DB. process exits. %s(%d)",
                                     GetErrorStr(ret), ret);
                puts("***************Fail to RegistItem() from DB. process exits.************");
                exit(3);
            }
            item_category_temp = (unsigned int)G_Auction()->GetItemInfo(pContext->item_info.item_id)->category_;
            if (G_Auction()->IsAvatarCategory(item_category_temp))
            {
                game_db->set_query("seLect jewel_socket, color1, color2 from user_items where ui_id=%d",
                                   pContext->item_info.add_info);
                if (game_db->exec(true))
                {
                    G_TraceLog()->sysLog(7,
                        "Fail to exec(seLect jewel_socket from user_items where ui_id=%d). process exits.",
                        pContext->item_info.add_info);
                    exit(6);
                }
                if (game_db->get_n_rows())
                {
                    short color1;
                    short color2;
                    bRet = game_db->fetch();
                    if (!bRet)
                    {
                        G_TraceLog()->sysLog(7, "ERROR, game_db->fetch(), avatar ui_id=%d",
                                             pContext->item_info.add_info);
                        break;
                    }
                    bRet = game_db->get_binary(0, &emblem_info_struct, 0x1e);
                    if (!bRet)
                    {
                        G_TraceLog()->sysLog(7, "ERROR, game_db->get_binary(), avatar ui_id=%d",
                                             pContext->item_info.add_info);
                        break;
                    }
                    color1 = 0;
                    bRet = game_db->get_short(1, color1);
                    if (!bRet)
                    {
                        G_TraceLog()->sysLog(7, "ERROR, game_db->get_short(), avatar ui_id=%d",
                                             pContext->item_info.add_info);
                        break;
                    }
                    color2 = 0;
                    bRet = game_db->get_short(2, color2);
                    if (!bRet)
                    {
                        G_TraceLog()->sysLog(7, "ERROR, game_db->get_short(), avatar ui_id=%d",
                                             pContext->item_info.add_info);
                        break;
                    }
                    expansion_info_struct.color[0] = color1;
                    expansion_info_struct.color[1] = color2;
                }
                else
                {
                    memset(&emblem_info_struct, 0, 0x1e);
                    memset(&expansion_info_struct, 0, 4);
                }
                // ORIG：if ((ret = call()) != 0) —— 赋值在条件内才物化 setne+test
                if ((ret = G_Auction()->AddAvatarEmblemInfo(pContext->item_info.add_info,
                                                            &emblem_info_struct)) != 0)
                {
                    G_TraceLog()->sysLog(7, "ERROR, AddAvatarEmblemInfo(), ret=%s", GetErrorStr(ret));
                    break;
                }
                if ((ret = G_Auction()->AddAvatarExpansionInfo(pContext->item_info.add_info,
                                                               &expansion_info_struct)) != 0)
                {
                    G_TraceLog()->sysLog(7, "ERROR, AddAvatarExpansionInfo(), ret=%s", GetErrorStr(ret));
                    break;
                }
            }
        }
    }
    if (!bRet)
    {
        G_TraceLog()->sysLog(7, "onAUCTION_DB_GET_REGISTED_ITEM, Fail to fatch(). process exits.");
        puts(
            "onAUCTION_DB_GET_REGISTED_ITEM, ***************Fail to fatch(). process exits.************");
        exit(4);
    }
    history_db_count = 0;
    yyyymm = GetYYYYMM();
    db->set_query("seLect count(*) from auction_history_%s", yyyymm);
    ret = db->exec(true);
    if (ret != 0)
    {
        G_TraceLog()->sysLog(7, "Fail to exec(select count(*) from auction_history). process exits.");
        puts(
            "***************Fail to exec(select count(*) from auction_history). process exits.************");
        exit(9);
    }
    bRet = db->fetch();
    if (!bRet)
    {
        G_TraceLog()->sysLog(7, "ERROR, db->fetch(), select count(*) from auction_history");
        puts("***************ERROR, db->fetch(), select count(*) from auction_history************");
        exit(6);
    }
    db->get_uint(0, history_db_count);
    if (history_db_count)
    {
        history_max_auction_id = 0;
        db->set_query("seLect max(auction_id) from auction_history_%s", yyyymm);
        ret = db->exec(true);
        if (ret != 0)
        {
            G_TraceLog()->sysLog(7,
                "Fail to exec(select max(auction_id) from auction_history). process exits.");
            puts(
                "***************Fail to exec(select max(auction_id) from auction_history). process exits.************");
            exit(8);
        }
        if (db->get_n_rows() == 1)
        {
            bRet = db->fetch();
            if (!bRet)
            {
                G_TraceLog()->sysLog(7, "ERROR, db->fetch(), max(auction_id) from history");
                puts(
                    "***************ERROR, db->fetch(), max(auction_id) from history************");
                exit(7);
            }
            bRet = db->get_int64(0, history_max_auction_id);
            if (!bRet)
            {
                return 1;
            }
            G_Auction()->SetMaxHistoryAuctionId(history_max_auction_id);
        }
    }
    GSArea* pArea = (GSArea*)G_Zone()->mArea[0];
    pArea->SetServiceRunning(true);
    if (G_Auction()->GetPayType() == PAY_TYPE_POINT)
    {
        PCK_AUCTION_SERVICE_AVAILABLE_PG pck;
        nsl::MAP_OBJECTS_ITER iter = pArea->getBeginIter();
        while (!pArea->isIterEnd(iter))
        {
            nsl::ISession* pSession = pArea->getValueFromIter(iter);
            // ORIG：pTCPUser 常驻 ebx（register 局部），不溢出到栈
            register TCPUser* pTCPUser = pSession->getTCPUser();
            // ORIG：getCommonDataPool 结果直喂 getSendMessage（无 pPool 命名局部）
            Message* pNewMsg =
                pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(pTCPUser);
            CMsgCell* pNewCell = pNewMsg->getCellFromMessage();
            *pNewCell << &pck;
            pNewCell->PAD();
            sendTCP_->PushSendMsg(pNewMsg);
            ++iter;
        }
    }
    else
    {
        PCK_AUCTION_SERVICE_AVAILABLE_AG pck;
        nsl::MAP_OBJECTS_ITER iter = pArea->getBeginIter();
        while (!pArea->isIterEnd(iter))
        {
            nsl::ISession* pSession = pArea->getValueFromIter(iter);
            register TCPUser* pTCPUser = pSession->getTCPUser();
            Message* pNewMsg =
                pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(pTCPUser);
            CMsgCell* pNewCell = pNewMsg->getCellFromMessage();
            *pNewCell << &pck;
            pNewCell->PAD();
            sendTCP_->PushSendMsg(pNewMsg);
            ++iter;
        }
    }
    G_TraceLog()->sysLog(5, "out onAUCTION_DB_GET_REGISTED_ITEM : paytype(%d)",
                         G_Auction()->GetPayType());
    return 0;
}
```
