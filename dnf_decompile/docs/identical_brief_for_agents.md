# identical 判定口径（Agent 必读，2026-08-11）

## 0. 角色与独立性（2026-08-11 用户规范，所有 SubAgent 强制）

- 你是**子 Agent（SubAgent）**，不是主 Agent。你的任务是**独立、自主地完成**
  分配给你的工作，不需要也不应该等待其它 Agent 或主 Agent 的输入才行动。
- 开工即干：读取任务与手册后立即按工作清单推进；每完成一个函数/一项检查，
  立即进入下一个，保持连续进度。
- 遇到阻塞（构建失败、脚本异常、需要决策的疑难函数等）：先自行排查与重试；
  确实无法自行解决时，把情况+证据发给主 Agent 后**继续处理其它可推进的工作**，
  不得停在原地空等主 Agent 回复。
- 不要“轮询等待”其它 agent；不要把自己当成主 Agent 去协调、汇总或审批。
  你的产出就是完成清单上的工作并把结果/阻塞上报。

### 0.1 类粒度子分解（2026-08-11 用户规范，服务级 SubAgent 适用）

- 服务级 SubAgent 拿到剩余 md 后，可按 **class / 所属类 / 所属 TU** 把函数分组，
  每组再用 `spawn_agent` 派生一个子 SubAgent 并行处理（“subagent 再启 subagent”）。
- 子 SubAgent 的工作方式（避免共享 build 目录竞争）：
  1. 只读上下文：手册 + 服务进度 + 该组函数的 md（`function_reports/<svc>/<mangled>.md`）。
  2. 在自己的临时目录（如 `/tmp/sub_<svc>_<class>`）做 scratch 构建：
     从 `build/<svc>/CMakeFiles/<svc>.dir` 复制全部 .o，把本组函数所在 TU 用
     CMake 相同 flags 重编覆盖，按该目录 `link.txt` 同命令链接出 scratch 二进制；
     用 `gen_function_md` 的 `classify_one` 对照 ORIG 检查本组函数。
  3. 每个函数循环：改源码 → 重编 TU → scratch 链接 → classify 复检，直到
     IDENTICAL / IDENTICAL_AE（等价于“md 已删除”），或穷举合理变体后上报证据。
  4. **禁止**：修改 `build/<svc>/` 与 `function_reports/<svc>/`（父 agent 负责
     集成与最终验证）；清空/删除整文件实现；改共享源码（确需改则上报父 agent）。
  5. 完成后把源码改动清单 + 每函数结论发回父 agent。
- 父 SubAgent 集成：收齐所有子 SubAgent 改动后，统一重建 → 先
  `gen_report_manifest.py --services <svc>` 再 `gen_function_md.py --services <svc>`
  全量重生成，确认各组函数 md 已删除；某组改动造成回归则回退并记录。
- 分组建议：以 mangled 前缀/所属类/所属 TU 聚簇（可用 `_cached_collect_object_map`
  或 `function_reports` 的 md 分布），每组分给一个子 SubAgent，组间 TU 尽量不重叠。

## 1. 什么叫“identical”

本项目逐函数比对 ORIG（原版 ELF，位于
`dnf_installer/build/dnf_data/home/template/neople/<svc>/`）与 NEW（重建二进制，
`dnf_decompile/build/<svc>/df_<svc>_r`）。判定以
`source/toolchain/compare_common.py` 的统一口径为准。

- 对函数内每条指令文本做归一化后**逐条**比较。
- **只归一化**：直接跳转/调用指令（`j*` / `call` / `loop*`）中的目标地址 → `<T>`。
- **严格保留（任何差异都判不 identical）**：立即数常量（`cmp $0x7f,%eax` vs `cmp $0x7,%eax`）、
  字段/栈偏移（`0x18(%eax)` vs `0x1c(%eax)`）、寄存器名、寻址形态、全局数据地址。

### 三档口径
| 档位 | 归一化内容 |
|---|---|
| strict | 仅跳转/调用目标地址 `<T>`（**官方统计用这一档**） |
| extended | strict + 大绝对地址（≥0x1000000 的 rodata/数据/全局引用）→ `<A>` |
| full | extended + `__assert_fail` 行号实参 → `$L` |

### 逐函数结论
- `IDENTICAL` = strict 归一化后完全相同。
- `NEAR` = 助记符序列相同、仅操作数/寄存器/地址不同（strict 不 identical）。
- `DIFF` = 助记符序列不同。
- `MISSING` = ORIG 有、NEW 无。

官方水位即 strict 口径的 `IDENTICAL/NEAR/DIFF` 计数（如 channel 204/108/11）。

## 2. 豁免（不计入统计）

用户规则（2026-08-10）：tinyxml、加密/哈希通用算法（CRijndael/CSHA/CTEA/IMethod、
yaSSL/TaoCrypt、AES/DES/SHA/MD5/RIPEMD160 等）、Boost、STL/std/libstdc++、
工具链运行时（`_Unwind_*`/`__cxa_*`/operator new-delete/`__libc_csu_*`），以及
MySQL/zlib/NCrypto 等第三方基础库 —— 获得 identical 豁免，移出 IDENTICAL/NEAR/DIFF
计数；只需语义等价验证。判定实现：`compare_common.is_exempt_symbol()`。

## 3. 目标

每个**项目函数**（非豁免）在 strict 口径下达到 IDENTICAL；做不到的只有两类：

1. **真实语义 bug** → 必须修源码（FIXED）。
2. **编译器尾音/归档伪影** → 带证据归档（ARCHIVED），引用
   `docs/identical_pitfalls.md` 的坑点号。

## 4. FIXED / ARCHIVED / REMAIN 判定

- **FIXED**：源码改动 + 重建后该函数分类**改善**（DIFF→NEAR/IDENTICAL，或
  NEAR→IDENTICAL）。典型真实 bug 类：类型/有符号性（§1）、结构体布局/#pragma pack/
  字段偏移（§2）、布尔物化与 if-else 形态（§3）、循环结构（§4）、调用目标/常量错误。
- **ARCHIVED**（编译器尾音，语义等价即可归档）：
  - 数据地址（§8.1 / §8.2）
  - 对齐 nop / 块序（§3.3）
  - 寄存器分配 / 栈槽（§5.1 / §5.2 / §81）——**必须先按 §4.1 尝试源码修复**，
    穷举合理源码变体仍无法消除、且附差异证据与语义等价理由后才允许归档
  - callee-saved（§5.3）、分支极性（§6）
  - EH landing pad（§9）
  - 编译器补丁级差异（§36）、lea/折叠形态（§39）、死比较折叠（§104）
  - 归档必须给出证据：差异行 + 坑点号 + 语义等价的理由。
- **REMAIN**：本轮无法解决且原因明确（如需换编译器、外部决策）——只允许极少数，
  必须写明原因。

## 4.1 行号 / 偏移类差异 = 真实差异，必须修复（2026-08-11 用户口径）

- **`__LINE__` 及宏展开行号实参**：`__assert_fail` 行号、`DNF_LOG_SCOPE_LINE`
  等日志宏的行号实参两侧不同 → 属于**真实差异**，必须通过**源码行号对齐**修复
  （把对应语句调整到与 ORIG 相同的源码行号），**不得**记为 ARCHIVED /
  caliber_issue 忽略。
- **结构体字段偏移**（如 `mov 0x4(%eax),%eax`、`0x1c(%eax)` 等成员访问）不同 →
  真实差异，必须修复（类成员顺序 / `#pragma pack` / 布局对齐），不得豁免。
- **栈槽偏移 / 寄存器分配 / 求值顺序 / 栈帧形态等代码生成差异**（如
  `InitClientSocket`：`push %ebx+sub $0x24` vs `sub $0x28`、局部变量槽
  `-0x14(%ebp)` vs `-0x10(%ebp)`、先存栈槽再重载 vs 直用、构造与装载顺序不同等）：
  **默认必须当作源码问题修复**——尝试调整变量声明顺序、消除临时变量往返、
  改变表达式/调用结构、拆分或合并语句等，目标让两侧指令逐条一致；
  若该 TU 的工具链与 ORIG 不一致（见下一条工具链不匹配），**优先按逐文件
  工具链指定把编译器版本对齐后再复测**，再进入源码变体穷举；
  只有穷举合理源码变体后仍无法消除、且能给出 diff 证据与语义等价理由时，
  才允许按 §4 ARCHIVED 归档。禁止把“可解释为编译器差异”当作不修的借口。
- 判为“相同/豁免”前，必须核对 md 的完整 diff；任何被跳过或替换的地址/偏移都要
  能解释其等价依据（字符串内容、符号名、区段相对布局等）。
- **工具链不匹配（2026-08-11）**：把差异归为“编译器代码生成差异”前，必须先查
  ORIG 的编译器版本（`readelf -p .comment <ORIG>`）。若 ORIG 与重建工具链版本不同
  （如 ORIG 为 GCC 4.1.2、重建用 4.4.x），这类寄存器分配/栈布局差异的正确修复是
  **工具链对齐**（参考 stun：4.1.2 还原后 25/26 助记符一致），而不是直接归档。
  **子 Agent 有权自行按 cpp 文件指定不同的 GCC 版本（逐 TU 混合工具链）来对齐，
  不需要等待主 Agent 逐次批准**；只有逐文件指定仍无法消除差异时，才按 §4.2
  向主 Agent 报告待决策。CSV 记录为 `toolchain_mismatch` 时须附：ORIG .comment
  版本、重建编译器版本、差异证据（虚调用寄存器形态等）。禁止把“源码无法控制
  寄存器”当作最终结论而不做工具链核实。

- **逐文件（TU）工具链指定（2026-08-11 新增授权）**：为让单个或多个 cpp 文件的
  代码生成与 ORIG 对齐，子 Agent 可直接修改对应服务的 `build-<svc>.sh`，为不同
  cpp 文件配置不同编译器/头文件/flags。先例：`build-relay.sh` 中
  `UserPool.cpp`/`DNFRelayServer.cpp` 用 4.4.6-3 + gnu++0x（`C6CXX`/`C6FLAGS`），
  其余 TU 用 4.1.2（`CXX`/`COMMON_FLAGS`）；coserver 的 `CFrameCountHandler`/
  `CDNFUserInOutCounter` 等 TU 若 ORIG 为 4.1.2 编译（memset 内联形态不同），
  同样按此路线处理。

  判定某 TU 原版编译器版本的方法（按可用性优先）：
  1. DWARF：`readelf --debug-dump=info <ORIG>` 按编译单元查 `DW_AT_name` 与
     `DW_AT_producer`，可精确到每个 CU 的编译器版本；
  2. `.comment`：`readelf -p .comment <ORIG>` 只有链接后的整服务条目，可作
     服务级混合证据（如 coserver = 4.1.2×3 + 4.4.6×1），但不能精确定位 TU；
  3. A/B 试编译：把该 cpp 分别用候选编译器（`c5-g++` 4.1.2 / `c6-g++` 4.4.7 /
     `c6-g++-446r` 4.4.6-3）编译并反汇编，与 ORIG 对应函数逐条对比，取助记符
     序列/寄存器形态最一致者。

  实施要点：
  - 在 build 脚本中按 basename 分流：保留默认 `CXX`/`FLAGS`，再为指定文件定义
    专用变量（如 `C6CXX`/`C6FLAGS` 或 `C5CXX`/`C5FLAGS`）并按文件分发；
    共享 include 路径与链接行尽量不动，避免影响其它 TU。
  - 头文件必须与所选编译器匹配：4.1.2 TU 用 c5root 头链，4.4.x TU 用
    c6root/lsd44 头链，禁止跨版本混用头文件造成 ODR/类布局漂移。
  - 混链顺序沿用既有先例（relay/coserver：4.4.4 libstdc++.a + libgcc_eh.a +
    4.1.1 libstdc++.a + libgcc.a/e_h.a）；切换个别 TU 编译器一般无需改链接行。
  - 改完必须闭环：重建该服务 → 单函数 md 复检目标函数
    （`gen_function_md.py --services <svc> --function <mangled>`，md 删除才算
    完成）→ 全服务重跑 manifest/全量 md，确认其它已 identical 函数不回归。
  - 记录证据：CSV/备注写明 TU→编译器版本映射、判定依据（DWARF producer /
    A/B 试编译对比）、改前/改后分类；重建后 `.comment` 出现多个版本条目属预期
    （与 ORIG 混合条目一致）。
- **TLS 布局 / 重复符号（2026-08-11，`NumberToString` 案例）**：TLS 偏移差异
  （如 `lea -0x208(%eax)` vs `-0x210(%eax)`）是真实布局差异，必须修复。还原
  ORIG 中的符号前必须先验证其来源：用 `nm <静态库>`/`readelf` 判断是否为
  标准库内部符号（如 libstdc++ `eh_globals.o` 的
  `_ZZN12_GLOBAL__N_110get_globalEvE6global`）。**不得**把标准库符号误当项目
  函数在源码里伪造同名定义——LOCAL 同名 TLS 符号链接不合并，会撑大 TLS 块、
  使其它 TLS 变量偏移整体漂移（本例 +8 字节）。修复 = 删除伪造定义，只保留
  库提供的唯一副本。
- **硬编码常量以 ORIG 二进制实测为准（2026-08-11，`PrintBackTrace` 案例）**：
  行号实参、偏移、魔数等硬编码常量必须以 ORIG 二进制实测值（objdump /
  readelf / 字符串表）为准；**不得**凭 DWARF decl_line 或反编译伪 C 猜测
  （本例猜 0x1d1=465，二进制实测为 0x186=390）。发现猜测值与实测不符必须修正。
- **禁止硬套内联 asm（2026-08-11 用户规矩，覆盖此前所有轮次的 asm 实验）**：
  - **唯一允许的 asm 用途**：插入纯 `nop` 做对齐/块布局填充（如
    `__asm__ __volatile__("nop")` 复现 ORIG 的空块落地/对齐伪影）。
  - **禁止**用内联 asm 强制其它指令形态：死比较/死存储复现（`cmp`/`test`
    类）、寄存器钉住（`register int v asm("eax")`）、call 序列复现
    （`call memset`/`call ctor`）、`asm goto` 控制流/跳转落地、参数装载顺序
    强控等——一律**不得**硬套。
  - 若某函数只能靠硬套 asm 才能逐字节对齐：判定该函数**已到头**，把
    差异证据 + 已尝试变体总结进 `caliber_issues.csv`（REMAIN/到头了），
    源码保留**语义还原**版本（不写 asm），不再追求该函数的 identical。
  - 已硬套的 asm 必须回滚为语义还原版本（2026-08-11 已回滚
    channel/bridge/relay/guild/monitor/manager/auction/point/community 的
    shutdown 死比较、ChannelService memset/ctor、ScriptThread 死比较、
    ArchiveLog memcpy、relay UDPHandler/Script asm-goto 等）。
- **还原优先“二进制证据”**：任何新增的符号/常量/布局都要能指向 ORIG 二进制
  中的直接证据；没有证据的还原属于错误还原，一律按真实差异修复。

## 4.2 全量源码回归修复（2026-08-11 用户强制口径，对 coserver 及后续所有服务生效）

- 每个非 identical 函数**必须**通过修改重建源码达到
  `IDENTICAL` / `IDENTICAL_AE`，以
  `gen_function_md.py --services <svc> --function <mangled>` 输出
  “md 已删除”为**唯一完成标准**。
- `caliber_issues.csv` 只是修复过程的证据记录，**不构成完成状态**；
  **禁止**“记录 CSV 后宣称完成 / 跳过该函数”。CSV 中已有的
  toolchain_mismatch / caliber_issue / codegen_diff 记录，一律视为未完成，
  必须回头按源码修复路径重做。
- 修复循环：改源码（含按 §4.1 逐文件切换工具链）→ 重建 → 单函数复检；
  反复尝试合理源码变体（变量/成员声明顺序、表达式与调用结构、宏展开形态、
  类布局、行号对齐、常量以二进制实测为准、逐 TU 编译器版本等），直到 md 删除。
- 确认真实无法通过源码修复的（工具链根本差异、第三方库、模板/宏无字面定义等）：
  **不得自行了结**，必须向主 Agent 报告并等待决策；报告需附 diff 证据、
  已尝试的源码变体清单与结论。
- 本轮不再允许仅凭“语义等价/编译器差异”归档跳过；ARCHIVED/REMAIN
  判定需主 Agent 明确批准。

## 5. 闭环验证（强制）

每次源码改动：**改 → 重建该服务（`bash source/toolchain/build-<svc>.sh`）→
用单函数模式 `python3 source/toolchain/gen_function_md.py --services <svc>
--function <mangled>` 重测该函数（相同则 md 自动删除）→ 记录改前/改后分类**。
禁止盲改；禁止“改了但分类没变”却报 FIXED。

## 5.1 尝试日志（2026-08-12 用户要求，所有 SubAgent 强制）

跨轮 agent 之间没有记忆，是剩余函数“被反复轮询却长期不消失”的根因
（根 agent 核实：760 个剩余 md 中 759 个在第 8 轮快照就已存在，但多数函数
实际被有效尝试的次数只有 1-2 次——每轮新 agent 从零开始，重复相同变体或
无人认领）。为此：

1. **每个你处理过、但未达到 IDENTICAL/IDENTICAL_AE 的函数，必须把
   已尝试变体写进 `function_reports/<svc>/attempts/<mangled>.tsv`**：
   - 每行一个变体：`source_excerpt<TAB>result<TAB>date`
     - `source_excerpt`：你改动的关键源码形态（如 `if (x==-1) return;`、
       `switch(cond){case 0:break;case 1:break;}`、`register int n`、
       `m_remainSendLen > ret` vs `(int)m_remainSendLen > ret`、`&pkt+0x11+count*0xe`
       运算顺序等），一两句话说明即可，不用贴整段；
     - `result`：`NEAR(同)/DIFF(更差)/NEAR(更近)`——以单函数重测分类为准；
     - `date`：`YYYY-MM-DD`。
   - 该函数若从未有过 attempts 文件，先建目录和文件；已有文件则在末尾追加。
2. **开工前必读尝试日志**：处理任何函数前，先 `cat
   function_reports/<svc>/attempts/<mangled>.tsv`（不存在则跳过），
   **不得重复尝试日志里已记录的变体**；尝试新变体必须与日志中所有条目
   不同，否则换方向。
3. **每轮“真实尝试清单”**：最终报告必须逐函数给出：本轮是否实际尝试
   （Y/N）、尝试了几个新变体、每个的结果。禁止只写“已读 diff / 已分析”
   冒充尝试；未实际尝试的函数如实标 N。
4. attempts 文件纳入 git（根 agent 每轮统一提交），跨轮累积。

## 5.2 近端函数优先（2026-08-12 根 agent 分工）

- diff 行数 ≤20 的“近端函数”由专项 agent 集中快速清理（每函数目标
  1-3 个变体内解决）；服务 agent 拿到的组应优先覆盖剩余的大 diff 函数。
- 判断近端：md 的 diff 段 `sed -n '/```diff/,/```/p' <md>` 中
  `^[+-]` 行数 ≤20。
- 近端函数通常只差寄存器分配/栈槽/求值顺序，解法见 §4.1 纯 C++ 形态
  技巧；试 2-3 个变体仍不中就记入 attempts 并转给下一轮，不恋战。

## 6. 参考资料

- `docs/compare_caliber.md`（口径文档）
- `docs/identical_pitfalls.md`（坑点 §1–§104）
- `source/toolchain/compare_common.py`（判定实现）
- `/tmp/wave_c_verify2/<svc>.water`（最新官方水位）
- `/tmp/disposition/<svc>.tsv`（逐函数预分类：A_* 已归档、R_* 需评审）
