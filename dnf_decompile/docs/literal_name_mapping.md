# 字面量命名映射报告（hardcoded literal → 真名）

生成时间：2026-08-09  
范围：`source/` 下非第三方代码（排除 `Library3rd/`、`build-*/`）

## 1. 结论摘要

工程源码中可恢复真名的硬编码字面量分四类，均已落实到代码（常量替换或注释）：

| 类别 | 命中数 | 命名来源 | 落实方式 |
|---|---|---|---|
| errno（0xb/4/0x73/2） | 约 25 个比较点、11 个文件 | 系统 errno.h + 同文件已有宏名交叉验证 | 替换为 `EAGAIN`/`EINTR`/`EINPROGRESS`/`ENOENT` |
| 服务错误码 4..54 | 52 个 | `ServiceError.h` 枚举 + 原始 ELF 字符串 | 替换为枚举常量名 |
| 协议包 ID | channel/bridge 13 处、auction 1 处、monitor 57/119 行 | DWARF 枚举（`PACKETS`/`_GA_`）+ `shared/packet/include` 包头 | 注释标注真名 |
| MySQL 错误码 | 2 个文件 6 个值 | `errmsg.h`/`mysqld_error.h`（仓库内 vendor） | 替换为宏名（并接入构建 include 路径） |

未解决（见 §5）：monitor 62 个 handler ID、channel category `0x7b`/`0x7c`、auction AG/PG 响应包族、`PacketDesign.h` 中 2 处 `setPacketID`。

## 2. 证据来源

- **errno**：本机 glibc `errno.h`（`/usr/include/asm-generic/errno*.h`，Python `errno` 模块同源）。关键值：`EAGAIN=11(0xb)`、`EINTR=4`、`EINPROGRESS=115(0x73)`、`ENOENT=2`。同一 TU 内已有 `errno == EAGAIN || errno == EINTR`（manager/dbmw `TcpRecv/TcpSend`）与 Community `Epoll.cpp` 的 `EINTR /*4*/` 交叉印证。
- **DWARF**：`stun/channel/bridge/auction/point` 原始 ELF 共 3459 条枚举常量（`pyelftools` 提取，含枚举类型名与声明文件）。channel 的协议枚举类型名为 `PACKETS`，原声明于 `MySchema.h:9`；auction 的 GA/GP 协议枚举类型名为匿名（DWARF 显示 `_GA_`/`_GP_`）。
- **原始 ELF 字符串**：`ServiceError.cpp` 中每个数字旁即错误名串，且与 `ServiceError.h` 枚举值逐一相等（52/52 验证通过）。
- **包头库**：`source/shared/packet/include/` 186 个 `PacketHeader(0xXXXX, 0xYYYY)` 构造，181 个唯一 ID → 类名。
- **MySQL 头**：`source/Library3rd/MySQL/include/errmsg.h`、`mysqld_error.h`（已通过 `-isystem` 接入 bridge/auction/point 构建与 CMake 目标）。

## 3. 变更明细

| 文件 | 内容 |
|---|---|
| `monitor/MonitorTypes.cpp` | 5 处 errno 比较 → EAGAIN/EINTR；m_handlers 表 57 行加包头名注释 |
| `relay/RelaySocket.cpp` | `*__errno_location()` 比较 → EAGAIN/EINTR |
| `manager/ManagerTypes.cpp` | `errno == 0x4` → `errno == EINTR` |
| `dbmw/ManagerTypes.cpp` | `errno == 0x4` → `errno == EINTR` |
| `guild/GuildThread.cpp`、`guild/GuildDomain.cpp` | errno 比较 → EAGAIN/EINTR |
| `DNFServer/.../ServerLib/basic_source/Socket.cpp` | 5 处 → EAGAIN/EINTR/EINPROGRESS |
| `DNFServer/.../ServerLib/basic_source/TraceLog.cpp`、`Auction/.../StatisticsCollector.cpp` | `errno != 2` → `errno != ENOENT` |
| `DNFServer/.../ServerLib/common_source/ServiceError.cpp` | 52 个数字 → 枚举常量名；`0xffffffff` → `ERROR_NOT_USE` |
| `ChannelOld/DNFChannelServer|Bridge` 的 `ChannelService.cpp`/`CheckThread.cpp` | 13 处 `setPacketID(N)` 加 `// PACKETS::NAME` |
| `shared/common/include/AuctionPacket.h` | `setPacketID(6)` 加 `// AUCTION_SEARCH_BY_ITEMKEY_GA` |
| `ChannelOld/DNFChannelBridge/DBMgr.cpp`、`ServerLib/common_source/DBConnection.cpp` | MySQL 错误码替换为 `CR_*`/`ER_*` 宏名，并 `#include <errmsg.h>` / `<mysqld_error.h>` |
| `toolchain/build-bridge.sh`、`build-auction.sh`、`build-point.sh`、`CMakeLists.txt` | 加入 `Library3rd/MySQL/include` include 路径 |

## 4. 全量映射表

### 4.1 errno（已替换为宏名）

`0xb`/`11` → `EAGAIN`，`4` → `EINTR`，`0x73`/`115` → `EINPROGRESS`，`2` → `ENOENT`。

位置：
- monitor：`WaitForEvent`、`TcpRecv`、`TcpSend`、`poll*`（5 处）
- relay：`TCPSocket::send/recv`（2 处）
- manager / dbmw：`WaitForEvent` 各 1 处
- guild：`GuildThread.cpp` 1 处、`GuildDomain.cpp` 3 处
- `Socket.cpp`：recv/connect/select/sendto/recvfrom（5 处，其中 connect 含 `EINPROGRESS`）
- `TraceLog.cpp`、`StatisticsCollector.cpp`：`stat()` 的 ENOENT 判定
- Community（本次未改，原已命名）：`Epoll.cpp`、`AbstractSocket.cpp`

### 4.2 ServiceError（52 条，值与枚举名全部经 `ServiceError.h` 验证）

`4→ERROR_AUCTION_FAIL_ID_CREATE_`、`5→ERROR_AUCTION_CONNECTION_LOST_`、`3→ERROR_STOP_CALLED_`、`2→ERROR_DB_CONNECTION_LOST`、`6→ERROR_AUCTION_CONNECT_GA_FAIL_`、`7→ERROR_AUCTION_REGIST_GA_FAIL_ID_DUPLICATE_`、`8→ERROR_AUCTION_STOP_CALLED_`、`9→ERROR_AUCTION_FAIL_MEMORY_ALLOC_`、`10→ERROR_AUCTION_FAIL_REGIST_ITEM_`、`11→ERROR_AUCTION_FAIL_UNREGIST_ITEM_`、`12→ERROR_AUCTION_FAIL_INSERT_CHARACTER_`、`13→ERROR_AUCTION_FAIL_INSERT_AVERAGE_PRICE_`、`14→ERROR_AUCTION_FAIL_INSERT_BY_ITEM_ID`、`15→ERROR_AUCTION_FAIL_INSERT_BY_CATEGORY_RARITY_UPGRADE_LV`、`16→ERROR_AUCTION_FAIL_INSERT_BY_CATEGORY_RARITY_UPGRADE`、`17→ERROR_AUCTION_FAIL_INSERT_BY_CATEGORY_UPGRADE_LV`、`18→ERROR_AUCTION_FAIL_INSERT_BY_CATEGORY_UPGRADE`、`19→ERROR_CANNOT_FIND_AUCTION_DATA_TO_DELETE_FROM_SEARCH_MODULE`、`20→ERROR_AUCTION_FAIL_SEARCH_BY_ITEM_ID`、`21..24→ERROR_AUCTION_FAIL_SEARCH_BY_CATEGORY_*`、`25→ERROR_INVALID_CATEGORY_ID`、`26→ERROR_INVALID_RARITY`、`27→ERROR_INVALID_LV`、`28→ERROR_INVALID_UPGRADE`、`29→ERROR_INVALID_ITEM_COUNT`、`30→ERROR_AUCTION_EXCEED_REGISTED_ITEM_NUM_`、`31→ERROR_AUCTION_EXCEED_INSTANT_PRICE_`、`32→ERROR_AUCTION_WRONG_ITEM_UPGRADE_VALUE_`、`33→ERROR_AUCTION_WRONG_AVERAGE_PRICE_`、`34→ERROR_AUCTION_INVALID_CHARACTER_ID_`、`35→ERROR_AUCTION_INVALID_ITEM_ID_`、`36→ERROR_AUCTION_INVALID_AUCTION_ID_`、`37→ERROR_AUCTION_INVALID_BIDDING_PRICE_`、`38→ERROR_AUCTION_INVALID_PRICE_`、`39→ERROR_AUCTION_INVALID_ITEM_INFO_`、`40→ERROR_AUCTION_INVALID_EXPIRED_ITEM_`、`41→ERROR_AUCTION_INVALID_ARGUMENT_`、`42→ERROR_AUCTION_REGISTER_UNAUTHORIZE_`、`43→ERROR_AUCTION_UNREGISTER_UNAUTHORIZE_`、`44→ERROR_AUCTION_NOT_EXIST_REGISTED_ITEM_`、`45→ERROR_AUCTION_BIDDING_MY_ITEM`、`46→ERROR_AUCTION_BIDDING_ALREADY`、`47→ERROR_AUCTION_BIDDING_MONEY_SHORTAGE`、`48→ERROR_AUCTION_NO_PRIVATE_STORE_OPEN_`、`49→ERROR_AUCTION_BUSY`、`50→ERROR_AUCTION_INVALID_AUCTION_TYPE`、`51→ERROR_AUCTION_NOT_READY`、`52→ERROR_AUCTION_REGIST_GP_FAIL_ID_DUPLICATE_`、`54→ERROR_AUCTION_END_`（原始实现缺 53 项，保留原样）。`0xffffffff` → `ERROR_NOT_USE(-1)`。

### 4.3 channel/bridge 协议号（DWARF `enum PACKETS`，原 `MySchema.h:9`）

| 值 | 真名 | 位置 |
|---|---:|---|
| 2 | `CS_UPDATE_CHANNEL_INFO` | bridge `CheckThread.cpp:199` |
| 3 | `SC_ASK_CHANNEL_INFO` | server `ChannelService.cpp:1277` |
| 4 | `CS_NOTICE_CHANNEL_SERVER` | server `CheckThread.cpp:262` |
| 5 | `CS_CHECK_SCRIPT_VERSION` | server `CheckThread.cpp:254` |
| 6 | `SC_CHECK_SCRIPT_VERSION` | server 1269、bridge 810 |
| 9 | `CS_GET_SCRIPT` | server 1253 |
| 10 | `SC_GET_SCRIPT` | server 1261、bridge 796 |
| 12 | `SC_CONNECT` | server 1245 |
| 13 | `CS_GET_GC_INFO` | server `CheckThread.cpp:246` |
| 14 | `SC_GET_GC_INFO` | bridge 803 |

### 4.4 auction GA/GP 协议号（DWARF `_GA_`/`_GP_` 匿名枚举）

`0→AUCTION_REGIST_GA`、`1→AUCTION_ASK_AVERAGE_PRICE_GA`、`2→AUCTION_ASK_REGISTED_ITEM_NUM_GA`、`3→AUCTION_REGIST_ITEM_GA`、`4→AUCTION_REGIST_CANCEL_GA`、`5→AUCTION_BIDDING_GA`、`6→AUCTION_SEARCH_BY_ITEMKEY_GA`、`7→AUCTION_SEARCH_BY_NOITEMKEY_GA`、`8→AUCTION_MY_REGISTED_ITEM_INFO_GA`、`9→AUCTION_MY_BIDDING_INFO_GA`、`10→AUCTION_MY_AUCTION_HISTORY_GA`、`11→AUCTION_OPEN_PRIVATE_STORE_GA`、`12→AUCTION_CLOSE_PRIVATE_STORE_GA`、`13→AUCTION_CHECK_AUCTION_READY_GA`、`14→AUCTION_BUY_ITEM_APIECE_GA`、`15→LAST_HANDLER_GA`；GP 同族。

代码中已落实：`AuctionPacket.h` 的 `PCK_AUCTION_SEARCH_BY_ITEMKEY_GA` `setPacketID(6)` → `AUCTION_SEARCH_BY_ITEMKEY_GA`。

### 4.5 monitor handler 表（57/119 命中 shared/packet/include）

| ID | 包头类名 | ID | 包头类名 |
|---|---:|---|---:|
| 1000 | `Packet_Monitor_UDP_Login` | 1001 | `Packet_Monitor_UDP_Logout` |
| 1002 | `Packet_Monitor_UDP_Reply_UserInfo` | 1004 | `Packet_Monitor_UDP_HeartBeat` |
| 1007 | `Packet_Monitor_Char_Info` | 1011 | `Packet_Monitor_Other_Channel_Chat` |
| 1012 | `Packet_Monitor_UDP_Logout_Complete` | 1013 | `Packet_Monitor_Char_Changable_Info` |
| 1103 | `Packet_Monitor_Event_Start` | 1104 | `Packet_Monitor_Event_End` |
| 1105 | `Packet_Change_Char_Name` | 1207 | `Packet_Monitor_Request_Member_Enter` |
| 1209 | `Packet_Monitor_Member_Enter_Reply` | 1211 | `Packet_Monitor_Member_Secede` |
| 1214 | `Packet_Monitor_Call_Member_List` | 1215 | `Packet_Monitor_Member_Chat` |
| 1216 | `Packet_Monitor_Member_Pay_Tax` | 1218 | `Packet_Monitor_Charac_Delete` |
| 1230 | `Packet_Request_Charac_Tower_Update_Ranking` | 1232 | `Packet_Monitor_User_Repel_ByCharName` |
| 1300 | `Packet_Monitor_Notify_New_Mail` | 1350 | `Packet_Monitor_MegaPhone` |
| 1500 | `Packet_Register_To_BlackList` | 1501 | `Packet_Delete_To_BlackList` |
| 1504 | `Packet_Request_BlackList` | 1600 | `Packet_Monitor_Notice_Charac_Live_On_Ten_Min` |
| 1650 | `Packet_Monitor_Add_Buddy` | 1652 | `Packet_Monitor_Del_Buddy` |
| 1900 | `Packet_GM_Request_Mid` | 2524 | `Packet_Monitor_Notice_Message` |
| 2525 | `Packet_Forbid_Chat_By_Monitor` | 2526 | `Packet_Exchange_Server_Info` |
| 4002 | `Packet_PvPChannelInfo` | 4003 | `Packet_PvPChannelUserCount` |
| 4004 | `Packet_ChannelType` | 4014 | `Packet_Monitor_Server_Message_Info` |
| 4105 | `Packet_Item_Limit_Edition_Buyable_Query` | 4110 | `Packet_Monitor_Find_Factory_Hub_User` |
| 6002 | `Packet_VillageMonsterFightResult` | 6009 | `Packet_VillageAttackedGMCommand` |
| 6014 | `Packet_Monitor_Max_Level_BroadCast` | 7021 | `Packet_No_Cache` |
| 8001 | `Packet_Game_Server_Regist` | 8003 | `Packet_Disable_User_OneToOneChat_Police` |
| 8004 | `Packet_Register_GM_MID` | 8013 | `Packet_Sync_GM_List` |
| 9034 | `Packet_Game_Monitor_GM_Village_Attacked` | 10001 | `Packet_Broadcast_Msg` |
| 10002 | `Packet_TOD_DoRandomSelect`（ID 匹配、语义待核） | 10009 | `Packet_Monitor_Other_Channel_Chat_Hyper_Link` |
| 10010 | `Packet_Monitor_Member_Chat_Hyper_Link` | 10011 | `Packet_Monitor_MegaPhone_Hyper_Link` |
| 10206 | `Packet_Monitor_Request_Charac_Info` | 10214 | `Packet_CollectItems` |
| 10219 | `Packet_CollectItemsGm` | 10220 | `Packet_PcRoomPlayTimeReward` |
| 10232 | `Packet_MiniCraneSeed` | | |

### 4.6 MySQL 错误码（已替换为宏名）

`0x7dd`=2013 `CR_SERVER_LOST`、`0x7d3`=2003 `CR_CONN_HOST_ERROR`、`0x7d6`=2006 `CR_SERVER_GONE_ERROR`、`0x7de`=2014 `CR_COMMANDS_OUT_OF_SYNC`、`0x480`=1152 `ER_ABORTING_CONNECTION`（`DBMgr.cpp`）；`0x7d6` `CR_SERVER_GONE_ERROR`（`DBConnection.cpp`）。两文件均直接 include 仓库内 vendor 的 `errmsg.h`/`mysqld_error.h`，不再出现裸数字。

## 5. 未解决项

- **monitor 62 个 handler ID** 无对应包头：1014/1100/1101/1203/1217/1224/1229/1231/1400/1502/1503/1505/1651/1653/1654/1770/2000/2500/2515/2528/2700/2900-2917/3100/4000/4001/4101/4103/4104/4153/4154/6011/7014/8005/8008/8009/9025-9032/10200-10205/10210/10215/10225/10235-10239（真名待补充包头或日志证据；handler 函数名可作临时语义名）。
- **channel category `0x7b`/`0x7c`**：无 DWARF 名（123/124 在其它服务中对应无关枚举）。
- **auction AG/PG 响应族**（`PacketDesign.h` 的 `setPacketID(0xc)`/`setPacketID(1)` 等）：auction DWARF 无对应枚举，疑定义在 game 侧源码。
- **WSA 错误码**：扫描未发现 10000-11001 区间 WSA 错误常量；10001+ 均为 monitor 协议 ID（已命名），非 WSA 错误。

## 6. 验证

全部改动文件所属服务已增量重编并链接成功（原始工具链）：`relay`、`monitor`、`guild`、`manager`、`dbmw`、`channel`、`bridge`、`auction`（全量 ServerLib + auction TU）、`point`。MySQL 相关构建（bridge/auction/point）已带 `Library3rd/MySQL/include` 重新验证。字面量替换均保持原值（枚举/宏编译期常量），不改变机器码语义。
