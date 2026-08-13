# 源码树对齐 DWARF 报告（2026-08-13）

## 目标

用户要求：文件位置完全以 DWARF 为准。凡是我们自己编写的文件位置不符合 DWARF
揭示的 ORIG 位置，一律以 DWARF 为准，允许任何文件移动与合并。

## 权威依据

- 5 个有完整 DWARF 的 ORIG 二进制：stun / channel / bridge / auction / point
  （位于 `dnf_installer/build/dnf_data/home/template/neople/<svc>/df_<svc>_r`）
- 提取方式：每 CU 的 `DW_AT_name` + `DW_AT_comp_dir`（编译单元主文件），
  `.debug_line` file table（该 TU 实际 include 解析到的头文件路径）
- 提取脚本：`/tmp/extract_cu_files.py`、`/tmp/extract_dwarf_files.py`、
  `auction_tu_headers.json`（66 个 auction CU → 各自头文件解析路径）

## 结论一：编译单元（.cpp）位置已全部对齐 ✅

66 个 auction CU + 32 个 channel CU + 31 个 bridge CU + 4 个 stun CU，
逐 CU 对比我们的树，**全部与 ORIG 路径一致**（此前 restructure 已按 STT_FILE
对齐），无需移动 .cpp。

## 结论二：头文件布局差异（本轮主要工作）

ORIG 中头文件的主目录是：

| ORIG 目录 | 头文件数 | 我们现状 |
|---|---|---|
| `ServerLab/ServerLib/basic_header/` | 107 | ❌ 无此目录 |
| `ServerLab/ServerLib/common_header/` | 89 | ❌ 无此目录 |
| `ServerLab/Auction/AuctionServer/auction_header/` | 19 | ❌ 无此目录 |
| `ServerLab/Auction/AuctionServer/GameData/`（直接层） | 17 | 部分在 `GameData/auction/` |
| `ServerLab/AppCommon/AuctionCommon/` | 10 | 已有 |
| `DNFServer/ServerCommon/` | 23 | 部分在 `shared/common/include/` |
| `DNFShared/GameScript/` | 60 | 部分在 `shared/common/include/` |

我们自创了 `source/shared/common/include/`（15 个"共享头"）和
`source/shared/packet/include/`（196 个 Packet 拆分头），它们的位置
不符合 DWARF。共享头在 ORIG 中实际位于 ServerLib/basic_header、
ServerCommon、DNFShared/GameScript 等真实目录。

同一 basename 在 ORIG 多处出现是 include 搜索路径的解析伪影（同一
`#include "PacketDesign.h"` 在不同 TU 里因 -I 顺序不同解析到不同目录）；
权威位置以「TU 实际解析路径」为准，`ServerLib/basic_header/` 是最大主目录。

## 移动方案（分阶段）

### 阶段 A（本轮）：auction/point 的 ServerLib 布局重建

1. 创建 `ServerLib/basic_header/`、`ServerLib/common_header/`、
   `auction_header/` 三个 ORIG 目录
2. 把项目自有头文件移入 ORIG 位置（git mv 保留历史）：
   - `basic_source/*.h` → `basic_header/`（DWARF 解析主位置）
   - `common_source/*.h` → `common_header/` 或 `basic_header/`
   - `shared/common/include/*.h` 中 auction/point 用到的 → ORIG 位置
   - `GameData/auction/*.h` 中 ORIG 在 `GameData/` 直接层的 → 上移
3. 更新 auction/point CMakeLists 的 -I 路径
4. 重建 auction + point，逐字节对比产物（无回归）

### 阶段 B（后续）：合并 shared/common/include 到 ORIG 位置

- 无 DWARF 服务（dbmw/guild/monitor/statics/manager/coserver）依赖
  `shared/common/include` 与 `shared/packet/include`，阶段 B 统一把
  共享头移到 ORIG 目录并更新其 -I 路径

### 阶段 C（后续）：Packet 元信息还原

- 用 DWARF layout 子命令还原 auction/point 的 Packet 类字段布局
- 用 handler dispatch（HandlerFor_GA_/GP_JPN/TE_/DB_）还原 packet ID ↔ 类映射
- 结合 SQL/log 还原字段语义

## 非目标

- channel/bridge/stun 的差异仅为 glibc 系统头伪影（stdio.h、time.h 等），不动
- `Library3rd/`（Boost/MySQL/TinyXML）为第三方，保持现状
- STL 伪影（stl_*.h、atomic_word.h、ctype_base.h 等）不创建副本

