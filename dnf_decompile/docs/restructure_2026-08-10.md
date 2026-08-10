# 工程结构重整 + CMake 化（2026-08-10）

## 1. 无 DWARF 工程类拆分（一主类一文件）

依据 ORIG 二进制 STT_FILE（原始 .o 文件名）把 8 个无 DWARF 服务的“一文件一堆类”
（dbmw/ManagerTypes.h 348 类、monitor/MonitorTypes.h 262 类等）拆为 ORIG 命名文件：

| 工程 | 新树 | 文件数 | 水位（拆分前 → 后） |
|---|---|---:|---:|
| coserver | `DNFServer/GameServer/COServer/` | 27 cpp + 25 h | 109/70/88 → 110/72/85 |
| community | `Community/`（去 src，平铺） | 16 cpp + 16 h + 2 常量头 | 官方 113 IDENT 保持 |
| manager | `DNFServer/GameServer/Manager/` | 38 cpp + 37 h | 188/91/212 → 186/93/212 |
| relay | `DNFServer/GameServer/Relay/` | 28 cpp + 28 h | 226/58/110 → 227/60/107 |
| guild | `DNFServer/GameServer/Guild/` | 61 cpp + 61 h | 420/137/894 → 433/127/891 |
| monitor | `DNFServer/GameServer/Monitor/` | 68 cpp + 68 h | 611/193/774 → 613/197/768 |
| statics | `DNFServer/GameServer/Statics/` | 38 cpp + 36 h | 389/125/191 → 398/124/183 |
| dbmw | `DNFServer/GameServer/DBMW/` | 54 cpp + 55 h | 351/136/572 → 348/139/572 |

全部 MISSING=0、DIFF 无净增；旧自拟目录（source/manager 等）已删除，备份在
`/tmp/struct/<svc>_backup*`。拆分细节/决策见各 `/tmp/struct/<svc>_restructure_report.md`。

## 2. GCC 4.x 工具链从零启动

`docs/toolchain_bootstrap.md` + `source/toolchain/bootstrap_toolchain.sh`：
一条命令从 CentOS vault 下载解包 c6root（4.4.7）/ c5root（4.1.2-55）/
c5r52（4.1.1+4.1.2）/ cc1plus446（4.4.6）/ lsd44（4.4.6 头）/ zlib32，
生成包装脚本与 toolchain.env，冒烟编译通过。纯 Python RPM 解包
（`source/toolchain/rpm_extract.py`，无 rpm/bsdtar/cpio 依赖）。

## 3. 构建脚本 → CMake

- 每服务自包含 `source/cmake/<svc>/CMakeLists.txt`（13 个）；
- 工具链文件 `source/toolchain/cmake/dnf_toolchain_44.cmake` + 帮助模块
  `dnf_helpers.cmake` + 编译器包装 `dnf_c{5,6,6446r}_gxx.sh`；
- 一键构建：`bash source/toolchain/cmake_build_all.sh`；
- 验证脚本 `verify_wave_c.sh` 构建阶段已切 CMake。
- 验证结果：CMake 产物水位与 build-*.sh 一致（MISSING=0）；statics/coserver/relay/
  stun/channel/bridge/auction/point 逐字节一致；manager/dbmw/monitor/guild 非 tinyxml
  对象逐字节一致；community 反汇编一致（仅 debug 路径串差异）。

## 4. 仓库清理

`__pycache__` / `*.pyc` 已移出（并进 .gitignore）；`toolchains/` 进 .gitignore。
