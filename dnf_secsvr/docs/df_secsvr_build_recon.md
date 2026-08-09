# secsvr 构建方法与库结构重建报告

生成时间：2026-08-09

本文档通过 **源码痕迹**（DWARF 行表/声明位置、宏定义、符号表、字符串、动态依赖）还原
secsvr 三件套（gunnersvr / zergsvr / secagent）的**构建方法、三方库引用与整个库结构**。
结论区分「证据」（可直接从文件验证）与「推断」（由证据推出的合理结论）。

## 0. 一句话结论

三个二进制是 Neople 安全组（**Tencent TSS 平台**）同一套代码树
（CI：`/data/secci/ci/jenkins/workspace/g3_release_suse32*`）在不同 **TSS 构建版本**
（387 / 296 / 435）下的产物：GCC 4.1.0 SUSE 编译主工程（-O2 级别、-DNDEBUG、32 位 i586），
三方库（rapidxml / mysqlclient 5.0.92 / TenCrypt SDK / tsf4g-TDR）全部**静态链接**，
加密库来自**独立工程** `tencrypt_new`（GCC 4.1.2），动态依赖只有系统库。

## 1. 构建方法

### 1.1 工具链

| 证据 | 值 |
|---|---|
| `.comment` | `GCC: (GNU) 4.1.2 20070115 (prerelease) (SUSE Linux)` + `GCC: (GNU) 4.1.0 (SUSE Linux)` |
| `DW_AT_producer`（主工程 CU） | `GNU C++ 4.1.0 (SUSE Linux)` |
| `DW_AT_producer`（加密库 CU） | `GNU C++ 4.1.2 20070115 (prerelease) (SUSE Linux)` |
| 目标 | 32 位 i586（ELF32，头文件路径 `/usr/lib/gcc/i586-suse-linux/4.1.0/include`） |
| libstdc++ | 动态 `libstdc++.so.6`（GLIBCXX_3.4，即 GCC 4.1 ABI） |

主工程与加密库是**两套工具链编译后链接到一起**（.comment 两种版本并存）。

### 1.2 编译参数（宏证据）

| 宏/特征 | 含义 |
|---|---|
| `NDEBUG=1` | release 构建（关 assert） |
| `__OPTIMIZE__=1` + `DW_TAG_inlined_subroutine`（6,953 / 9,077 / 13,051 个） | 开启优化与内联，推断 **-O2** |
| `_REENTRANT=1`（line 1）+ NEEDED `libpthread.so.0` | **-pthread** |
| `_GNU_SOURCE=1` | `-D_GNU_SOURCE`（或编译器默认） |
| `LINUX_DIRECTORY_SEPARATOR_CHAR='/'` 等 | 工程自定义宏 |

调试信息完整保留（未 strip，含 `.debug_info/.debug_line/.debug_macinfo`）。

### 1.3 链接方式

| 证据 | 值 |
|---|---|
| NEEDED（三者相同） | `librt.so.1 libstdc++.so.6 libm.so.6 libgcc_s.so.1 libpthread.so.0 libc.so.6` |
| 三方库符号（mysql_*/Tdr*/Ten* 等） | 全部为二进制内定义（静态链接） |
| RPATH/RUNPATH | 无 |
| RELRO | 无（GNU_STACK RW，未启用 `-z relro`） |

即三方库与加密库以**静态对象/归档**链接进最终 ELF；动态依赖只有系统库。

### 1.4 include 路径布局（核心证据）

每个模块的编译单元实际打开的头文件目录（来自 `.debug_line`）：

| 模块（CU 来源） | 实际使用的主要 include 目录 |
|---|---|
| `commlib/zenlib` | `src/commlib/zenlib` + `import/include/opensource` |
| `protocol/common` | `src/protocol/common` + `import/include/...` |
| `commlib/framework` | `src/commlib/framework` + `output/commlib/zenlib/release/include` + `output/protocol/common/release/include` + `import/include/{opensource,tencore}` |
| `commsvr/gunnersvr` / `zergsvr` / `formmog/secagent` | 各自 `src/...` + `output/{commlib/zenlib,commlib/framework,protocol/common}/release/include` + `import/include/{opensource,tencore}` |

配合 DIE 声明位置（`DW_AT_decl_file`）可知：**zenlib / protocol 编译时用 src 头，
构建后把头安装到 `output/<lib>/release/include`；framework 与服务模块再对 installed 头编译**。
这是典型的「源码目录 → 构建输出 release include」流水线（Jenkins workspace 布局）。

### 1.5 构建顺序（推断，依赖关系支持）

```
1. import/ 三方 SDK（预置头，仅 -I 引用）
2. tencrypt_new 独立工程（GCC 4.1.2，src/*.cpp → 静态对象）
3. commlib/zenlib        → output/commlib/zenlib/release/include
4. protocol/common       → output/protocol/common/release/include
5. commlib/framework     → output/commlib/framework/release/include（依赖 3、4）
6. 服务二进制：commsvr/gunnersvr | commsvr/zergsvr | formmog/secagent(+protocol/formmog)
   链接：zenlib + framework + protocol + tencrypt_new + import 静态实现 + -lrt -lstdc++ -lm -lgcc_s -lpthread -lc
```

CI 即 Jenkins（源码路径 `/data/secci/ci/jenkins/workspace/...`）；推断构建脚本为各库
独立的 Makefile/脚本（`output/<lib>/release/` 存在 include，推断另有 `release/lib` 静态库目录）。

## 2. 三方库清单

| 库 | 镜像路径（`import/include/...`） | 版本证据 | 用途 |
|---|---|---|---|
| **rapidxml** | `opensource/rapidxml/rapidxml/`（rapidxml.hpp / _print / _utils，3 头） | 宏 `RAPIDXML_PARSE_ERROR` 等；无 tinyxml | XML 解析（comm_conf_*、TDR XML）；全部模块 |
| **mysqlclient** | `opensource/mysqlclient/`（mysql.h 等 7 头） | `MYSQL_VERSION_ID=50092`、`MYSQL_SERVER_VERSION="5.0.92"` | DB 访问；zenlib `zen_mysql_*` 封装 + 服务 |
| **TenCrypt SDK** | `tencore/tencrypt/`（TenCrypt.h / TenHash.h，2 头） | TSS 平台 | 加密接口声明；framework / 服务 / secagent |
| **tsf4g（TDR + TBus）** | `tencore/tsf4g/tsf4g_base/{tdr,tbus}/`（20 头） | `TDR_*` 宏族、`TDR_MAX_VERSION` | TDR 协议编解码（protocol/common 的 Tdr* 与生成代码）、进程/线程总线 |
| 系统库 | — | libstdc++ 4.1 / glibc 2.4（SUSE） | 标准库 |

> 注意：**没有 boost / tinyxml / openssl / zlib**。`zen_boost_non_copyable.h` /
> `zen_boost_lord_rings.h` 仅名字含 boost，include 闭包中无任何 boost 头。

## 3. 库结构重建（统一 workspace 视图）

三个 tag 的树结构一致，合并后如下（每项为模块/目录职责）：

```
<workspace> (g3_release_suse32 | _bugfix_tag296 | _bugfix_tag435)
├── src/                             # 主工程源码（GCC 4.1.0）
│   ├── commlib/
│   │   ├── zenlib/                  # 基础库：锁/线程/事件/定时器/内存/共享内存/MySQL 封装/TraceLog（40~44 CU）
│   │   └── framework/               # 服务框架：app 生命周期/收发管道/配置/定时器/监控上报（13~15 CU）
│   ├── commsvr/
│   │   ├── gunnersvr/               # 对外接入 + 文件扫描（9 CU，仅 gunnersvr）
│   │   └── zergsvr/                 # zerg 内部通信服务（15 CU，仅 zergsvr）
│   ├── formmog/secagent/            # 反外挂 agent + TSS 消息处理（16 CU，仅 secagent）
│   ├── protocol/
│   │   ├── common/                  # Tdr* 通用编解码 + comm_conf_*/comm_proto_public_*（12~14 CU）
│   │   └── formmog/                 # formmog 协议（antibot_client/public_secsvr/public_tsssdk，4 CU，仅 secagent）
│   └── (无)                          # 主树不含加密库
├── output/
│   ├── commlib/zenlib/release/      # zenlib 构建产物（include/ 已确认；lib/ 推断）
│   ├── commlib/framework/release/   # framework 构建产物
│   └── protocol/common/release/     # protocol 构建产物
├── import/include/                  # 三方/内部 SDK（见 §2）
│   ├── opensource/{rapidxml,mysqlclient}
│   └── tencore/{tencrypt,tsf4g/tsf4g_base/{tdr,tbus}}
└── ── 独立工程 tencrypt_new ──
    （/data/yunfeiyang/dev/branch/src/common/tencrypt_new，GCC 4.1.2）
    ├── src/*.cpp                    # TenHash/md2..sha1/haval/ripemd/gost/adler/crc + TenCrypt/全部对称算法
    ├── include/                     # 对外头（TenCrypt.h 等；仅 secagent 树引用）
    └── inc/                         # 内部头（twofish.h、md5.h 等；三件套加密子集共用）
```

### 模块依赖（谁 include 谁）

| 依赖方 | 依赖 |
|---|---|
| commlib/zenlib | import/opensource（mysql、rapidxml） |
| protocol/common | import/opensource（rapidxml）、tencore/tsf4g |
| commlib/framework | commlib/zenlib、protocol/common、import/tencore（tencrypt、tsf4g）、opensource |
| commsvr/gunnersvr、zergsvr、formmog/secagent | commlib/zenlib、framework、protocol/*、import/*（全量） |
| 全部 | tencrypt_new（Ten* 函数） |

## 4. 各二进制构成（模块 → CU 数）

| 二进制 | TSS 版本 | commsvr/formmog | framework | zenlib | protocol | tencrypt_new | 合计 |
|---|---|---:|---:|---:|---:|---:|---:|
| gunnersvr | **387** | commsvr/gunnersvr 9 | 13 | 40 | common 14 | 12 | 88 |
| zergsvr | **296** | commsvr/zergsvr 15 | 15 | 44 | common 12 | 12 | 98 |
| secagent | **435** | formmog/secagent 16 | 15 | 44 | common 12 + formmog 4 | 59 | 150 |

TSS 版本来自宏 `TSS_BUILD_VER`（387/296/435），与 CI tag 后缀（`_bugfix_tag296/435`）吻合；
gunnersvr 为基准 release `g3_release_suse32`（build 387）。
加密库编译目录为 `/data/yunfeiyang/dev/branch/src/common/tencrypt_new`
（`<built-in>` 命名空间 DIE 的 decl_file 暴露；`yunfeiyang` 亦出现在 TSS 版权字符串作者列表中）。

## 5. 证据来源

- 源码路径：DWARF `DW_AT_name` / `DW_AT_comp_dir` / `DW_AT_decl_file`（三件套 88/98/150 CU）
- 编译参数：`.debug_macinfo` 宏定义（NDEBUG/__OPTIMIZE__/_REENTRANT/MYSQL_VERSION_ID/TSS_BUILD_VER）
- 工具链：`.comment`、`.DW_AT_producer`、`GLIBCXX_3.4`
- 链接：`readelf -d`（NEEDED/RPATH）、符号表（静态三方库）、`readelf -l`（RELRO）
- 三方库：include 闭包（`import/include/...`）+ 宏版本 + 字符串（TSS 平台版权、`*TSF4G_API`）

## 6. 与后续还原的衔接

- 重建桩源码（`../source/<binary>/`）按 §3 的模块结构镜像；补函数体时可按
  zenlib → protocol → framework → 服务专属 TU 的顺序逐模块进行。
- 加密库（tencrypt_new）是独立单元，三件套共用同一批对象，还原一次即可。
- 构建基线建议：GCC 4.1.0 SUSE（i586 / 32 位 / C++98 / -O2 / -DNDEBUG / -pthread），
  加密库用 4.1.2；静态链接三方库（rapidxml 头文件库、mysqlclient 5.0.92、
  TenCrypt SDK、tsf4g TDR 均可按对应版本还原/引用）。

## 关联材料

- 桩还原报告：`df_secsvr_dwarf_restoration.md`
- 专属还原顺序：`decompile_order.md`
- 基本信息与 Ghidra 导入记录：`df_game_secsvr_dbmw_basic_info.md`
- 重建目录骨架：`../build_recon/`
