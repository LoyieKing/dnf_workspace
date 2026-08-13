# Packet 元信息还原报告（2026-08-13）

## 目标

通过 DWARF（类布局/枚举）、ORIG 构造函数反汇编（category/packetID/size）、
handler dispatch、log/SQL，尽可能还原所有 Packet 的元信息：
类名、packetID、category、size、字段布局、handler 映射。

## 一、auction（有 DWARF，类布局 100% 对齐）

### 1.1 Packet 类字段布局

从 auction DWARF 提取 100 个类（含 PACKET_HEADER 派生族），与我们的
`shared/common/include/AuctionPacket.h` 逐字段对比：**0 差异**
（字段名/偏移/类型全部一致，数组后缀已归一）。

第二重验证：对 29 个有 ORIG ctor 的类做 `sizeof` 对比，与 ORIG 构造函数的
`setSize` 参数 **29/29 完全一致**（如 ITEM_LIST_AG=0x203d、
MY_BIDDING_INFO_AG=0x1d69、SEARCH_BY_ITEMKEY_GA=0x81）。
字段布局完整性（无漏字段/无错位）双重确认。

### 1.2 Packet ID / category / size（ORIG 构造函数反汇编）

从 ORIG `df_auction_r` 的 29 个 weak 构造函数符号逐条反汇编
（PACKET_HEADER ctor → memset(size) → setCategory → setPacketID → setSize），
得到权威映射：

| packetID | AG (cat=1) | PG (cat=19) | GA (cat=0) |
|---:|---|---|---|
| 0 | REGIST_ACK | REGIST_ACK | (REGIST_GA/GP) |
| 1 | SERVICE_UNAVAILABLE | SERVICE_UNAVAILABLE | ASK_AVERAGE_PRICE_GA |
| 2 | ASK_AVERAGE_PRICE | ASK_AVERAGE_PRICE | ASK_REGISTED_ITEM_NUM_GA |
| 3 | ASK_REGISTED_ITEM_NUM | ASK_REGISTED_ITEM_NUM | REGIST_ITEM_GA |
| 4 | REGIST_RESULT | REGIST_RESULT | REGIST_CANCEL_GA |
| 5 | BIDDING_RESULT | BIDDING_RESULT | BIDDING_GA |
| 6 | REGIST_CANCEL_RESULT | REGIST_CANCEL_RESULT | SEARCH_BY_ITEMKEY_GA |
| 7 | ITEM_LIST | ITEM_LIST | SEARCH_BY_NOITEMKEY_GA |
| 8 | MY_REGISTED_ITEM_INFO | MY_REGISTED_ITEM_INFO | MY_REGISTED_ITEM_INFO_GA |
| 9 | MY_BIDDING_INFO | MY_BIDDING_INFO | MY_BIDDING_INFO_GA |
| 10 | (MY_AUCTION_HISTORY_GA/GP) | | |
| 11 | LOG_MESSAGE | LOG_MESSAGE | OPEN_PRIVATE_STORE_GA |
| 12 | SERVICE_AVAILABLE | SERVICE_AVAILABLE | CLOSE_PRIVATE_STORE_GA |
| 13 | CHECK_AUCTION_READY | CHECK_AUCTION_READY | CHECK_AUCTION_READY_GA |
| 14 | BUY_ITEM_APIECE | ASK_OWNER_IS_VIP | BUY_ITEM_APIECE_GA |

说明：
- AG = auction → game（category=1），PG = auction → point（category=19），
  GA = game → auction（category=0），GP = point → auction。
- 同一 packetID 在不同方向独立编号（GA/GP 与 AG/PG 空间不同）。
- 精确 size 逐类见 `/tmp/auction_packet_metadata.txt`（本表省略）。
- 此表补全了 literal_name_mapping.md §5 遗留的"auction AG/PG 响应包族"。

### 1.3 待落实

`AuctionPacket.h` 中 36 个类尚无构造函数（setPacketID/category/size）。
补 ctor 会改变这些类的 codegen，须逐个验证 auction/point 产物不变后再提交。

### 1.4 handler dispatch 交叉验证

GA/GP 的 dispatch 表在 `auction_source/HandlerFor_GA_.h` /
`HandlerFor_GP_JPN.h`（`mArrayFunc[packetID] = &HandlerFor_*::onAUCTION_*`）。
与 §1.2 ORIG ctor 反汇编的 packetID 完全吻合：

- GA: 0=REGIST, 1=ASK_AVERAGE_PRICE, 2=ASK_REGISTED_ITEM_NUM,
  3=REGIST_ITEM, 4=REGIST_CANCEL, 5=BIDDING, 6=SEARCH_BY_ITEMKEY,
  7=SEARCH_BY_NOITEMKEY, 8=MY_REGISTED_ITEM_INFO, 9=MY_BIDDING_INFO,
  10=MY_AUCTION_HISTORY, 11=OPEN_PRIVATE_STORE, 12=CLOSE_PRIVATE_STORE,
  13=CHECK_AUCTION_READY, 14=BUY_ITEM_APIECE
- GP: 0-13 与 GA 同构（含 ASK_OWNER_IS_VIP=14）
- AG/PG 响应族（cat=1/19）由 HandlerFor_GA_/DB_ 构造并回发

两套独立证据（构造函数反汇编 vs dispatch 表）互相印证，ID 映射可信。

## 二、channel/bridge（有 DWARF）

DWARF 枚举 `PACKETS`（MySchema.h:9）已还原协议 ID（见 literal_name_mapping.md
§4.3），channel/bridge 的 `setPacketID(N)` 已加真名注释。

## 三、游戏侧（无 DWARF）

dbmw/guild/monitor/statics 的 Packet 元信息来自：
- `shared/packet/include/` 196 个包头（PacketHeader(0xXXXX,0xYYYY) 构造，
  181 个唯一 ID → 类名，见 literal_name_mapping.md §4.5）
- Ghidra 反编译 C 的 handler dispatch（m_handlers 表 + OnXxx 函数）
- SQL 列名 / 日志格式串（字段语义）

待办：把 monitor 62 个 handler ID 与 `shared/packet/include` 包头的
映射补全为文档（handler ID → packet 类名 → 字段）。

## 数据源与复现

- 类布局：`elftools` 遍历 DWARF structure/class_type + member。
- ID/category/size：`nm -C` 取 weak ctor 符号 + `objdump -d` 逐条反汇编。
- 脚本：`/tmp/extract_packet_classes.py`、批量 ctor 解析见 git 历史。
