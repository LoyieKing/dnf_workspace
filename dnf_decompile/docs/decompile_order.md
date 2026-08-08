# DNF 服务端反编译还原顺序建议

生成时间：2026-08-06（2026-08-08 更新：新增 `game`、`secsvr`（gunnersvr/zergsvr/secagent）、`dbmw` 三组二进制的基本信息与队列位置，详见 `df_game_secsvr_dbmw_basic_info.md`）

本文档基于对 `dnf_installer/build/dnf_data/home/template/` 下全部 16 个唯一服务端二进制（18 个文件：dbmw 三副本、game 存放于 `init/`、secsvr 三件套位于 `neople/secsvr/`）的实测指标，给出从易到难的还原顺序与策略。`df_community_r`、`stun`、`channel`、`bridge`、`auction/point` 已完成主体重建并作为对照基准，不再列入队列。

## 排序依据（指标说明）

| 指标 | 含义 | 对难度的影响 |
|---|---|---|
| 文件规模 | ELF 字节数 | 越大通常代码/数据越多 |
| DWARF 完整度 | `.debug_info` 编译单元数（CU）与覆盖源文件 | **决定性因素**：完整 DWARF 提供函数签名、类布局、源文件路径，重建难度远低于无 DWARF |
| 命名函数数 | `nm` 的 T/t/W/w 符号剔除 `.L` 局部标签后数量 | 待还原工作量上限 |
| 字符串量 | `strings -a` 行数 | 逻辑面宽度（DB 查询、日志、配置项）的代理指标 |
| 符号可读性 | 全局/局部符号命名是否可读 | 无 DWARF 时命名恢复的线索质量 |
| 现有进度 | 桩已生成 / 占位 / 已完成 | 起跑线 |

> 注：早期直接统计的“函数数”会把 `.Lxxx` 局部标签算进去造成虚高（如 relay 2151 个中大部分是 `.L`），本文档统一使用剔除 `.L` 后的命名函数数。

## 关键事实（已从文件验证）

- **全 DWARF**：`stun`、`channel`、`bridge`、`auction`、`point`（GCC 4.4.6；stun 为 GCC 4.1.2）、secsvr 三件套（91/101/153 CU，GCC 4.1.0 SUSE）。
- **部分 DWARF**：`game`（21 CU 只覆盖 `../../Include/` 共享库与静态 FreeType，GameServer 核心无调试信息）。
- **无 DWARF**：`relay`、`coserver`、`statics`、`guild`、`monitor`、`manager`、`dbmw`。
- **`game` 的 DWARF 只覆盖共享库层与静态第三方库**：21 CU = FreeType（7）+ `../../Include/`（14，FilePack/DnfLexer/Core 等）；GameServer 核心无 CU，需 Ghidra-only；还原时需按 CU 过滤。
- **`secsvr` 三件套共享 `commlib/framework` 通信框架**：gunnersvr/zergsvr/secagent 同一源码树不同 tag（`g3_release_suse32*`），且首次出现 GCC 4.1.0 SUSE 工具链。
- **`dbmw` 的 DWARF 基本无效**：仅 2 个 CU，只覆盖 `StackBuffer.cpp` / `StringFormat.cpp` 两个工具文件，服务主体无任何调试信息。
- **`auction` 与 `point` 同源**：各自 11,089 个唯一符号 100% 重叠，还原一个即得两个。
- **`dbmw_guild / dbmw_mnt / dbmw_stat` 三个二进制 md5 相同**：只需还原一次。
- **`stun` 是唯一 64 位 ELF**：与其余 32 位不同，重建时需单独评估位宽基线。
- `df_game_r`、`gunnersvr`、`zergsvr`、`secagent` 已加入 Ghidra 工程 `dnf_project`（2026-08-08 导入）。
- `community` 已完成主体重建（968 KB / 3,004 命名全局函数），作为对照基准与验证方法样板。

## 排序表（从易到难）

| 顺序 | 二进制 | 规模 | 命名函数 | 字符串 | DWARF | 现有进度 | 说明 |
|---|---:|---:|---:|---|---|---|
| ~~1~~ | ~~`stun`~~ | 131 KB | 27 | 3.2k | 完整（4 CU） | ✅ 已完成 | 26 个唯一函数全部语义等价；详见 `df_stun_r_restoration_report.md` |
| ~~2~~ | ~~`channel`~~ | 1.3 MB | 1,451 | 11.2k | 完整（32 CU） | ✅ 已完成 | 25 TU 编译链接通过，主体逐字节一致；详见 `df_channel_r_progress.md` |
| ~~3~~ | ~~`bridge`~~ | 3.4 MB | 3,812 | 30.2k | 完整（31 CU） | ✅ 已完成 | 918 个项目函数全部翻译、语义等价；助记符级精确 92.3%；详见 `df_bridge_r_restoration_report.md` |
| ~~2~~ | ~~`auction`/`point`（一组）~~ | 12.2 MB | 8,205 ×2 | 84.7k | 完整（66 CU） | ✅ 已完成 | 4736 项目函数全部还原、MISSING=0；详见 `df_auction_r_progress.md` / `df_point_r_progress.md`；point 经 `-DPOINT_SERVER` 切换 3 处常量 |
| 3 | `gunnersvr`（secsvr） | 13.5 MB | 1,883 | 307.1k | 完整（91 CU） | 已导入 | secsvr 三件套中最小；对外接入/文件扫描；共享 commlib 框架 |
| 4 | `zergsvr`（secsvr） | 15.5 MB | 2,059 | 358.3k | 完整（101 CU） | 已导入 | 与 gunnersvr 共享 commlib；zerg 内部通信服务 |
| 5 | `secagent`（secsvr） | 18.7 MB | 4,035 | 388.2k | 完整（153 CU） | 已导入 | secsvr 三件套最大；反外挂 agent + 加密库（TenCrypt/twofish/blowfish 等） |
| 6 | `relay` | 418 KB | 1,921 | 3.1k | 无 | 主体实现（应用级 MISSING=0） | 无 DWARF 中最小的入门目标；real missing 15 均为 std/工具链细节 |
| 7 | `coserver` | 1.1 MB | 2,987 | 6.1k | 无 | 应用层主体完成 | 功能单一（阻止重复连线） |
| 8 | `statics` | 1.7 MB | 6,059 | 9.7k | 无 | 主体实现（符号命中 99.6%） | 统计服务 |
| 9 | `guild` | 2.3 MB | 7,024 | 12.3k | 无 | 主体实现中（缺失 69） | 公会操作 |
| 10 | `monitor` | 2.5 MB | 7,899 | 13.3k | 无 | 占位 | 无 DWARF 中函数最多 |
| 11 | `manager` | 3.2 MB | 5,948 | 25.8k | 无 | 占位 | 字符串量最大，消息/管理面广 |
| 12 | `dbmw` | 4.0 MB | 7,816 | 32.1k | 几乎无效（2 CU） | 占位 | 无 DWARF 中体量最大，DB 中间件；三副本 md5 相同只需还原一次 |
| 13 | `game` | 36.4 MB | 116,059（含静态库） | 212.0k | 部分（21 CU，核心无） | 已导入 | 体量最大；`../../Include/` 走 DWARF 补桩、GameServer 核心走 Ghidra、FreeType 黑盒；**优先级最低（固定队尾）** |

## 排序逻辑

1. **元数据完整度优先于规模**：完整 DWARF 的函数签名、类布局与源文件路径使逐函数补桩远易于 Ghidra 纯人工推断，因此 12 MB 的 `auction/point` 排在 418 KB 的 `relay` 之前。
2. **同源合并**：`auction/point`、`dbmw` 三副本合并为单个还原单元，避免重复劳动。
3. **无 DWARF 组内按体量递增**：`relay`（最小、符号可读性好）作为 Ghidra-only 工作流的入门，随后按规模与逻辑面递增。
4. **`monitor` 与 `manager` 的取舍**：`monitor` 函数最多（7,899），`manager` 字符串最多（25.8k，管理/消息面广），难度接近；按函数量先做 `monitor`。
5. **`game` 固定为全队列最低优先级**：体量最大（36.4 MB / 11.6 万函数）、核心无 DWARF、Ghidra 分析面巨大（约 9.8 万函数），始终排在队尾，不因其他服务完成而提前。

## 还原策略

### 有完整 DWARF 组：补桩路线

- 沿用现有自动生成桩（`ChannelOld/`、`DNFServer/GameServer/ServerLab/`、`DNFServer/StunServer/`），按文件逐函数补全，签名/类布局/源文件路径均来自 DWARF。
- `bridge` 与 `channel` 同框架：先整体复用 `ChannelOld/DNFChannelServer/` 已对齐实现（Socket/TCP/UDP/Thread/Script 等公共类），再逐函数补 bridge 专属 TU（Authenticator/DBMgr/PIDHelper/SignalHandler/UniqueIndex 等），期间与 channel 的逐函数对比结果交叉核验。
- `gunnersvr` / `zergsvr` 同框架：先复用 `commlib/framework` 公共实现，再补各自专属 TU（gunner_* / zerg_*），`secagent` 最后（含 TenCrypt/对称加密库）。
- `game` 按 DWARF CU 过滤项目代码：`../../Include/`（FilePack/DnfLexer/Core 等 14 CU）走补桩路线，GameServer 核心（无 CU）走 Ghidra 路线，FreeType 等静态库以黑盒对待。
- 注意工具链差异：secsvr 为 GCC 4.1.0 SUSE（首次出现），`game`/`dbmw` 为 4.1.2 + 4.4.x 混合；构建基线需按目标单独评估（stun 已确立 64 位特例先例）。
- 每补完一个服务即可纳入 CMake 构建（先补 `main` 使目标可链接）。
- 构建基线保持 C++98 / 32 位 / O0；`stun` 需单独评估 64 位基线。

### 无有效 DWARF 组：Ghidra 路线

- 走 Ghidra Headless 导出伪 C → 逐函数人工比对的流程（`/mnt/d/Works/ghidra/support/analyzeHeadless`，现有工程 `dnf_project` 已导入 17 个程序：原 13 个 + `df_game_r`/`gunnersvr`/`zergsvr`/`secagent`）。
- 先做 `relay` 积累经验，再按体量递增。

### 每完成一个服务的验收

- 用 `source/compare_df_community_functions.py` 同款方法（符号命中、字符串命中、助记符重叠）产出一份验证报告，参照 `docs/df_community_r_reverification.md` 的检查项（构建参数/ABI、缺失函数、数据段、签名一致性）。
- 通过后再进入下一个目标。

## 关联材料

- 工程总览与状态矩阵：`../README.md`
- df_community_r 复核报告（验证方法与差距检查清单）：`df_community_r_reverification.md`
