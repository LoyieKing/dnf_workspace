# df_point_r 还原进度

更新：2026-08-08

## 结论

**df_point_r 已完成还原**。与 `df_auction_r` 符号 100% 重叠（8,602 个），同源同码，
仅 3 处常量差异，通过 `-DPOINT_SERVER` 宏在同一源码树切换。

## 与 auction 的差异（已全部定位并复现）

| 差异 | auction | point | DWARF 依据 |
|---|---|---|---|
| 支付类型 | `PAY_TYPE_GOLD`（"Setting PayType : Gold"） | `PAY_TYPE_POINT`（"Setting PayType : Point"） | Auction.cpp ctor |
| 精炼值上限 | `refine <= 0x7f`（Search::IsValidRefine / AveragePriceDictionary::isValidRefineValue） | `refine <= 0x07` | 反汇编 cmp 立即数 |
| 具体等级上限 | 硬编码 `0x55`（85） | `AUCTION_ITEM_LV_MAX`（=70，0x46） | DWARF 枚举 `AUCTION_ITEM_LV_MAX = 70` |

等级上限用于 4 处：`Search::IsSpecificLv`（lvStart≤上限）、`SetOperateParameter`
（物品原始可用等级>上限 → 0x1b 拒绝）、`FindByCategory`（lvStart/lvEnd>上限 → 0x1b）。
即 point 服务器对 71~85 级物品/搜索按 0x1b 拒绝，auction 允许。

两版 .text 其余单字节差异仅为 "Gold"/"Point" 字符串长度引起的 rodata 地址偏移；
`.debug_pubnames` 尾部差异为 DWARF 生成差异，不影响代码。

## 构建

- `source/toolchain/build-point.sh`（复用 build-auction.sh + `-DPOINT_SERVER`，输出
  `source/build-point/df_point_r`）
- 70 个 TU + `ServerCommon_Thread`（=DNFServer/ServerCommon/Thread.cpp）+ `tmp_stubs` +
  `mysql_stubs`，链接方式与 auction 相同

## 当前水位（对照 df_point_r 原版）

| 指标 | 数值 |
|---|---:|
| 项目函数 | 4,736 |
| MISSING | 0 |
| IDENTICAL（助记符级） | 4,291 |
| NEAR | 13 |
| DIFF（-O0 语义等价） | 432 |
| SETDIFF（调用集差异，均良性） | 11 |
| IDENTICAL（严格保留立即数） | 4,282 |

11 个 SETDIFF 与 auction 完全一致（EH 清理 landing pad、空 PACKET_HEADER 构造、
libstdc++ 4.4.7 move 语义模板），全部确认为无害。

## 与 auction 的关系

df_auction_r 与 df_point_r 同源：先完成 auction 全量还原与语义审计，再以
`-DPOINT_SERVER` 切换 3 处常量即得 point。后续若修正 auction 源码，point 需同步重建
（build-point.sh）。
