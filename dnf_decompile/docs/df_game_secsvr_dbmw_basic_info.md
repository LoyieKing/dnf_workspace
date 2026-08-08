# game / secsvr / dbmw 二进制基本信息与反编译计划

生成时间：2026-08-08

本文档记录原始运行时目录中三个此前未纳入重建范围的二进制（组）的实测基本信息，
并给出将其纳入反编译计划的建议。所有指标均直接来自 `dnf_installer/build/dnf_data/home/template/` 下的原始 ELF。

## 文件定位

| 角色 | 实际二进制 | 路径 | 启动方式 |
|---|---|---|---|
| game（游戏核心服务） | `df_game_r` | `init/df_game_r`（首次初始化时拷贝至 `/data/df_game_r`） | `start_game.sh`：`./df_game_r <频道名> start`，LD_PRELOAD 加载 `libhook.so` + `frida.so` |
| secsvr（安全服务） | `gunnersvr` | `neople/secsvr/gunnersvr/gunnersvr` | supervisor `[program:gunnersvr]` |
| secsvr（安全服务） | `secagent` | `neople/secsvr/zergsvr/secagent` | supervisor `[program:zergsvr_secagent]`，依赖 gunnersvr |
| secsvr（安全服务） | `zergsvr` | `neople/secsvr/zergsvr/zergsvr` | supervisor `[program:zergsvr]`，依赖 secagent |
| dbmw（数据库中间件） | `df_dbmw_r` | `neople/dbmw_guild|dbmw_mnt|dbmw_stat/df_dbmw_r` | supervisor 三个 program（按 CFG 分 3 种） |

> `secsvr` 目录下实际包含 3 个 ELF：`gunnersvr`（对外接入/文件扫描）、`secagent`（反外挂
> agent，`start_zergsvr_secagent.sh` 启动）、`zergsvr`（内部通信服务，zerg 框架）。三者构成
> 一条启动链：gunnersvr → secagent → zergsvr。

## 基本指标（readelf / nm / strings 实测）

统一口径：
- **CU 数**：`.debug_info` 中 `Compilation Unit @` 的数量；
- **项目函数数**：`nm` 的全局 T/W 函数符号数（与 `decompile_order.md` 中 dbmw 7,816 同口径）；
- **字符串量**：`strings -a` 行数；
- 三份 `df_dbmw_r` md5 相同（`0d70e931f2f17f03e4c80b7d28f03c83`），只需还原一次。

| 二进制 | 大小 | ELF | 编译器（.comment） | CU | 项目函数(T/W) | DWARF 源文件 | 字符串 | 动态依赖 |
|---|---:|---|---|---:|---:|---:|---:|---|
| `df_game_r` | 36.4 MB | ELF32 EXEC i386（GNU/Linux 2.6.9） | 4.1.2 / 4.4.4 / 4.4.6 / 4.4.7 混合 | 21 | 116,059（含静态链接库） | 60 | 212.0k | pthread/rt/libnxencryption/libGeoIP/dl/m/c |
| `gunnersvr` | 13.5 MB | ELF32 EXEC i386（GNU/Linux 2.6.4） | GCC 4.1.0 (SUSE) | 91 | 1,883 | 149 | 307.1k | rt/stdc++/m/gcc_s/pthread/c |
| `zergsvr` | 15.5 MB | ELF32 EXEC i386（GNU/Linux 2.6.4） | GCC 4.1.0 (SUSE) | 101 | 2,059 | 168 | 358.3k | rt/stdc++/m/gcc_s/pthread/c |
| `secagent` | 18.7 MB | ELF32 EXEC i386（GNU/Linux 2.6.4） | GCC 4.1.0 (SUSE) | 153 | 4,035 | 186 | 388.2k | rt/stdc++/m/gcc_s/pthread/c |
| `df_dbmw_r` | 4.0 MB（×3 同文件） | ELF32 EXEC i386（GNU/Linux 2.6.9） | 4.1.2 / 4.4.4 / 4.4.6 / 4.4.7 混合 | 2 | 7,816 | 9 | 32.1k | pthread/rt/m/c |

> `df_game_r` 的 T/W 计数把静态链接进来的 FreeType（`/root/f248/src/...`）、libstdc++、
> glibc 内部符号全部算入，故高达 11.6 万；DWARF 声明的子程序数约 1.18 万（同样包含库代码）。
> 真正属于 DNF 服务端自身的代码以 DWARF CU 为界估算（见下）。

Ghidra 导入后函数统计（`ghidra_probe_funcs.java`，headless 全量分析后）：

| 二进制 | Ghidra 总函数 | 可读命名函数 | 内部函数（FUN_/thunk/LAB/_ 前缀） |
|---|---:|---:|---:|
| `df_game_r` | 97,642 | 71,948 | 25,694 |
| `gunnersvr` | 2,567 | 2,229 | 338 |
| `zergsvr` | 2,810 | 2,398 | 412 |
| `secagent` | 4,799 | 4,382 | 417 |

## DWARF 与源文件分布

### df_game_r（21 CU：FreeType 静态库 + DNF 共享库；GameServer 核心无 DWARF）

全部 21 个 CU 实测分布：7 个为 FreeType（`/root/f248/src/...`），14 个为 `../../Include/`
（DNF 共享库，FilePack / DnfLexer / Core）；**没有任何 GameServer 专属 CU**——游戏核心
（登录处理、地下城、创角等主体逻辑）未带调试信息，还原时需要走 Ghidra-only 路线。

```
../../Include/FilePack/Pack.cpp
../../Include/DnfLexer/DNFlexSub.cpp / DNFLexWrapper.cpp / ScriptStringManager.cpp
../../Include/DnfLexer/CompiledDNFLex.cpp / DNFlex.cpp
../../Include/Core/CountryCode.cpp / Crc32.cpp / Lock.cpp / SecureStdio.cpp
../../Include/Core/Strings.cpp / Tick.cpp / UnicodeConvert.cpp / XorRand.cpp
...（其余 CU 含 FreeType：/root/f248/src/base|truetype|sfnt|raster|smooth ...）
```

结论：`df_game_r` 的 DWARF **只覆盖共享库层与第三方静态库**（21 CU，60 个源文件），
服务主体无调试信息；Ghidra 导入后函数面被 FreeType/libstdc++ 大幅撑大（9.8 万函数），
还原时应按 CU/源文件过滤：`../../Include/` 可走 DWARF 补桩，GameServer 核心走 Ghidra 路线。

### secsvr 三件套（91 / 101 / 153 CU，源码路径为 Neople CI 路径）

三者共享 `commlib/framework` 通信框架（comm_app_frame / comm_sndrcv_* / comm_service_* /
comm_timer_handler / comm_cfgsvr_sdk 等），且同一源码树不同 tag：

```
gunnersvr: /data/secci/ci/jenkins/workspace/g3_release_suse32/src/commsvr/gunnersvr/...
zergsvr:   /data/secci/ci/jenkins/workspace/g3_release_suse32_bugfix_tag296/src/commsvr/zergsvr/...
secagent:  /data/secci/ci/jenkins/workspace/g3_release_suse32_bugfix_tag435/src/formmog/secagent/...
           + src/TenCrypt.cpp / twofish.cpp / blowfish.cpp / cast.cpp ...（加密库）
```

结论：secsvr 三件套 **均有完整 DWARF**（GCC 4.1.0 SUSE），是继 auction/point 之后
又一组「元数据齐全」的目标；gunnersvr 与 zergsvr 共享 commlib，还原可交叉复用。

### df_dbmw_r（2 CU，服务主体无 DWARF）

```
../../Include/Core/StackBuffer.cpp
../../Include/Core/StringFormat.cpp
```

与既有结论一致：DWARF 只覆盖两个工具文件，服务主体（DB 中间件逻辑）无调试信息，
7,816 个项目函数需走 Ghidra-only 路线。

## 反编译计划建议

1. **secsvr 三件套**排在现有「无 DWARF 队列」之前：
   - 完整 DWARF + 中等函数量（1,883 / 2,059 / 4,035）远易于任何无 DWARF 目标；
   - 建议顺序：`gunnersvr` → `zergsvr`（共享 commlib 框架，先小后大交叉复用）→ `secagent`（最大，含加密库）；
   - 注意 GCC 4.1.0 SUSE 是首次出现的工具链版本，重建基线需单独评估（与 stun 的 4.1.2 不同）。
2. **`df_dbmw_r`** 维持原计划（无 DWARF 组内体量最大，排最后），三副本合一还原一次。
3. **`df_game_r`** 作为「体量最大、混合 DWARF」的目标排在队列末尾：
   - 静态 FreeType/libstdc++ 使 Ghidra 分析面巨大（本次 headless 导入 + 分析耗时数十分钟级）；
   - 还原时以 DWARF CU 区分：`../../Include/`（FilePack/DnfLexer/Core 等 14 CU）按 DWARF 补桩，
     GameServer 核心（无 CU）按 Ghidra-only 处理，FreeType 等第三方库以黑盒对待；
   - LD_PRELOAD（libhook/frida）运行环境提示其还涉及反外挂/动态库交互，还原时注意入口与配置加载流程。
4. **工程导入**：`df_game_r`、`gunnersvr`、`zergsvr`、`secagent` 已在本日通过 headless
   `-import` 加入 `dnf_project`（此前工程仅含 13 个程序）；`df_dbmw_r` 已在工程中。
   工程定位：`analyzeHeadless <dnf_decompile> dnf_project`（即工程目录
   `dnf_decompile/dnf_project.rep/`，注意不要把 `dnf_project.rep` 当作父目录传参，否则会新建嵌套工程）。
   `df_game_r` 首次导入即产生约 9.8 万个 Ghidra 函数，进一步印证其还原需按 CU 过滤静态库代码。

## 关联材料

- 反编译顺序总表与指标说明：`decompile_order.md`
- 工程总览与状态矩阵：`../README.md`
