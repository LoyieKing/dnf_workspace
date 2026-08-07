# df_community_r 第四轮复核：链接基座修正 + TU 结构对齐（2026-08-07）

## 本轮目标

在第三轮（单 agent 逐函数修复 8 处源码差异）基础上，进一步缩小「构建结果与原始二进制」的差距，方向：

1. 修正静态 libstdc++ 链接版本（原始证据指向 4.4.x，此前误用 4.1.2）；
2. 复刻原始二进制的每 TU `static ios_base::Init __ioinit;`（老 <iostream> 头行为）；
3. 复刻头文件内 `static` 函数/常量的每 TU 副本分布；
4. 补齐缺失的项目符号（Rand_r、pthread_equal）与 TLS 布局。

## 决定性发现：原始链接的是 4.4.x libstdc++（非 4.1.2）

原始二进制含 `std::error_code`/`system_category`/`__codecvt_abstract_base`/`ctype::_M_widen_init`
等 **gcc 4.4.x 专属符号**，而此前构建链接的是 c5root 的 4.1.2 静态 libstdc++。

实测对比（同一批 .o，仅换静态库）：

| 指标 | 4.1.2 链接 | 4.4.4 链接 |
|---|---|---|
| 符号 MISSING | 233 | **51**（后降至 2） |
| 符号 EXTRA | 54 | **9**（后降至 7） |

已把 `build-c6-444` 的 `CMAKE_CXX_STANDARD_LIBRARIES` 切到
`/tmp/c6root/usr/lib/gcc/i686-redhat-linux/4.4.4/libstdc++.a`。

## 复刻原始 TU 结构（初始化桩 24/24 完全一致）

原始二进制每个含 `<iostream>` 的 TU 都有 `static ios_base::Init __ioinit;`
（gcc 4.1/4.4 头文件行为），产生 `_GLOBAL__I__<首符号>` + `__static_initialization_and_destruction_0`
初始化桩。gcc 4.4.7 命名规则：TU 首符号为函数 → 键函数名；首符号为具名对象 → 键对象名。

本轮修改：

- 16 个 TU 补 `#include <iostream>`：ArchiveLog、BuddyManager、ConfigFileReader、CoreDump、
  global、NetworkSession、PacketDispatcher、CPacketParser、UserManager、ProcessManager、
  SessionManager、User、DNFFileLog、DNFFunctionLib、DateTime、GlobalObjects；
- `g_user_manager` 从 UserManager.cpp 拆到新文件 `GlobalObjects.cpp`（原始为独立 TU，
  `_GLOBAL__I_g_user_manager` 桩构造 ios_base::Init + CUserManager）；
- `global_function::sleep` 拆到新文件 `global_function.cpp`，`global_instance::current_time`
  移到 global.cpp 顶部（原始为两个独立 TU，桩键 `sleep` 与 `current_time`）；
- `timeGetTime` 从 DNFFunctionLib.cpp 移到 DateTime.cpp（原始 DateTime TU 首函数）；
- 各文件重排首函数与原始一致：ArchiveLog 构造、add_buddy、CCoreDump 构造、
  CConfigFileReader 构造（改为显式定义）、CPacketDispatcher 构造（显式定义）、
  CFileLogWriterInstance、check_myself、Char2Hex、command（main.cpp 移到 main 之前）；
- NetworkSession.cpp 静态声明顺序：g_network_session_pool 在 pSessionManager 之前。

结果：**24/24 个 `_GLOBAL__I__` 桩名与原始逐字一致**（此前仅 4 个）。

## comp_by_time：18/18 副本

原始 `comp_by_time`（STGuildCargoLog 时间比较）是头文件内 `static` 函数，18 个 TU 各一份。
本轮把实现从 DNFFunctionLib.cpp 移入 DNFFunctionLib.h，并在 18 个 TU 包含
（原 16 + SessionProxy.cpp 补 `DNFFunctionLib.h`）→ **18/18**。

## 静态常量复刻（.rodata 缺口 28KB → 12KB → 基本清零）

原始 .rodata 有 451 个唯一命名常量（`LOGIN_FLAG`/`kURLLength`/`MAX_STAMINA`/
`MAX_GUILD_CNT` 等），按副本数分三组：198 个 ×18 副本、173 个 ×7 副本、78 个 ×1 副本。
值从原始 ELF .rodata 小端读取。

- 新建 `source/Community/src/CommonConstants.h`（183 个 18 副本常量），18 个 TU 包含；
- 新建 `source/Community/src/GuildConstants.h`（169 个 7 副本常量），7 个 TU 包含
  （User、BuddyManager、NetworkSession、SessionManager、ProcessManager、global、UserManager）；
- 副本数实测：LOGIN_FLAG 7/7、kURLLength 18/18、MAX_STAMINA 18/18 ✓。

## 补齐缺失符号

- `Rand_r(unsigned int*)`：原始 DateTime TU 内函数（staticSeed 初值 0x05397fb1，
  seed==NULL 时 `staticSeed += timeGetTime()` 后递归），已实现并验证；
- `pthread_equal`：原始静态链入 libpthread 的弱符号（a==b 比较），在 Thread.cpp 以
  `__attribute__((weak))` 补回；
- TLS 缓冲 `gNumberToStringBuffer`：原始 .tbss 0x208（符号 0x200 = 8×0x40 槽），
  我们原用 0x100×0x40（16KB）__thread 数组，改为 0x200。

## 本轮结束指标（build-verify-community/df_community_r）

| 指标 | 本轮前 | 本轮后 |
|---|---|---|
| 文件大小 | 877,612（4.1.2 链接） | **960,864 / 967,844（99.28%）** |
| 符号 MISSING | 207 | **2**（仅 CRT `__libc_csu_init/fini`） |
| 符号 EXTRA | 53 | **7**（3 CRT + 3 libstdc++ _Construct + 1 迭代器） |
| 项目函数符号 | 490/490 | 490/490（MISSING/EXTRA 项目均 0） |
| `_GLOBAL__I__` 桩 | 4/24 一致 | **24/24 一致** |
| comp_by_time 副本 | 1 | **18/18** |
| 项目函数 IDENTICAL/NEAR | 80/320 | 80/320（保持不变，.o 未受影响） |

## 剩余差异（均已定位，均为环境/编译器产物）

1. `__libc_csu_init/fini`（MISSING 2）：原始 RHEL glibc crt1.o 的启动函数，Ubuntu
   crt 对象不含，无法以源码补回（强加会破坏启动流程）。
2. EXTRA 7：`_start`/`__x86.get_pc_thunk.bx`/`_dl_relocate_static_pie`（Ubuntu 链接器
   环境）、3 个 libstdc++ `_Construct` 实例化与 `__normal_iterator::operator->`
   （4.4.7 头文件代码生成差异）。
3. `.symtab`/`.strtab`：原始多出约 13KB 符号表元数据（更多本地数据符号与 TU 数）。
4. `.eh_frame` +5.4KB：异常帧生成差异（编译器微版本）；`.eh_frame_hdr` 原始为 8 字节空表
   （RHEL5 ld 行为），Ubuntu ld 生成 21KB，无法精确复现，保留以维持运行时 EH。
5. `.rodata` 残差约 1.4KB：17 个类成员常量（EmoticonType/InformNotice 等，需类定义）
   与若干数组表（guild_att_exp 612B、_S_CHARAC_JOB_MASTARY 220B、CSWTCH 240B）。
6. 项目函数指令级：400/490（81.6%）助记符精确，其余为 -O0 代码生成差异（见第三轮报告）。

## 复现方式

```sh
cd source
cmake -DCMAKE_CXX_STANDARD_LIBRARIES=/tmp/c6root/usr/lib/gcc/i686-redhat-linux/4.4.4/libstdc++.a build-c6-444
make -C build-c6-444 df_community_r -j1
cp build-c6-444/df_community_r build-verify-community/df_community_r
python3 compare_all_functions.py
```

