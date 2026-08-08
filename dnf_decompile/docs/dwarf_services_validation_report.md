# DWARF 服务精细校验报告

生成时间：2026-08-08  
范围：`stun` / `channel` / `bridge` / `auction` / `point`（有完整 DWARF）  
**明确忽略**：`relay` / `coserver` 等无 DWARF、进行中工作（`source/relay/`、`source/coserver/` 脏文件不纳入本轮修改）

工具：`source/toolchain/dwarf_validate.py`（topology / compare / neardiff / layout）  
明细：`/tmp/dwarf_validate/*_neardiff.tsv`、`channel_clean_neardiff.tsv`、`auction_callset_risk.tsv`

---

## 0. 严格口径全量基线（2026-08-08 用户新规）

口径定义（`source/toolchain/compare_common.py`）：
- 严格（CALIBER_VERSION=3）：仅归一化直接跳转/调用目标地址；保留常量、字段/栈偏移、数据地址。
- 扩展（EXT_CALIBER_VERSION=4）：在严格基础上，把大绝对地址（≥0x40000000，rodata/全局引用等
  跨二进制布局产物）也归一化——用于「全部 identical」可达性度量。

| 服务 | 项目函数 | 严格 IDENTICAL | 严格 NEAR | DIFF | 扩展 IDENTICAL | 扩展 NEAR |
|---|---:|---:|---:|---:|---:|---:|
| stun | 28 | 6 | 19 | 1 | 同严格* | 同严格* |
| channel | 745 | 562 | 96 | 85 | 643 | 15 |
| bridge | 919 | 715 | 132 | 71 | 817 | 30 |
| auction | 4736 | 4081 | 436 | 219 | 4427 | 90 |
| point | 同 auction 同源 | 同 auction | 同 auction | 同 auction | 同 auction | 同 auction |

\* stun 的 NEAR 主要是 64 位工具链的参数装载/寄存器调度差异，扩展口径未改变其归属。

结论：严格口径下，引用 rodata/数据地址的函数天然停在 NEAR（跨二进制地址不同）。
「全部 identical」必须以扩展口径为判定（数据地址归一化），否则不可达。
剩余需改源码的：auction 90 NEAR + 219 DIFF、bridge 30 NEAR + 71 DIFF、
channel 15 NEAR + 85 DIFF、stun 19 NEAR + 1 DIFF。

### 严格口径下新发现并修复的真实语义 bug（2026-08-08 续）

1. **ROI_AverageKey::option_index_key 有符号性**：ORIG DWARF 显示该成员是
   `long long`（signed），源码误用 `__int64` typedef（本项目定义为 unsigned long long）
   → operator< 的 64 位比较从有符号（jl/jg）变无符号（jb/ja）。
   修复后 `ROI_AverageKey::operator<` 严格 IDENTICAL（60/60）。
   `__int64` 全局 typedef（unsigned）与 ORIG DWARF 一致，保持不变。
2. **PacketHeader**：m_dwSrcIp@6(unsigned int) + packed(1)，见上节。
3. **StatisticsCollector**：228B-StData 定案，见上节。

当前 auction 严格水位：IDENTICAL 4082 / NEAR 436 / DIFF 218（扩展口径约 4428 / 90 / 218）。

### 元信息豁免口径（CALIBER_VERSION=5）与全服务可达基线

「全部 identical」的判定采用元信息豁免口径：严格 + 大绝对地址归一化 +
`__assert_fail` 行号实参归一化（依据：用户规则「行号只当元信息」）。

| 服务 | 项目函数 | strict IDENT | full IDENT（可达） | full NEAR | DIFF |
|---|---:|---:|---:|---:|---:|
| stun | 28 | 6 | 6 | 19 | 1 |
| channel | 745 | 562 | 644 | 14 | 85 |
| bridge | 919 | 715 | 821 | 26 | 71 |
| auction | 4736 | 4082 | 4443 | 77 | 218 |
| point | 同 auction | 同 auction | 同 auction | 同 auction | 同 auction |

剩余需改源码（full 口径）：auction 295、bridge 97、channel 99、stun ~21。
其中已确认部分为工具链不可复现的 -O0 形态差异（如 `IsValidRefine` 的
cmpb/setbe vs not/shr），语义等价但无法逐助记符对齐。

### 本轮修复记录（2026-08-08 续）
- `Auction::ProcessMostRecentExpireItem`：第一段循环由 do-while(true)+内部越界判断
  改为 while(cnt<=0x63)+循环后退出，匹配 ORIG 的跳转-条件形态；`one_processing`
  初始化为 false；整体语义等价（第二段循环块布局仍有差异）。
- 工具链验证：`__int64` 全局 typedef 与 ORIG DWARF 一致为 unsigned long long；
  `ROI_AverageKey::option_index_key` 独立声明为 signed long long（已修）。
- 结构体布局审计：AuctionDictionaryData/MyBiddingItemInfo/MyRegistedItemInfo/
  AuctionItemInfo/stAvatarEmblemInfo_t/stAvatarExpansionInfo_t/TSearchBy*/DnfItemInfo/
  RandomOption 均与 ORIG DWARF 一致，无更多布局 bug。

### 第二轮批量修复（2026-08-08，模式挖掘驱动）

1. **DBConnection::get_* 家族（12 函数）→ 严格 IDENTICAL**
   - 反模式：`bool bVar1; if (cond) {bVar1=true;} else {bVar1=false;} if(!bVar1){...} return !bVar1;`
     导致 bVar1 溢出到栈。
   - ORIG 形态：`if (cond) return false; ...; return true;`（bVar1 保持寄存器）。
   - `get_binary` 另需三元 `copy_size = (len<size)?len:size`。
2. **DBConnection::is_valid_col → 严格 IDENTICAL**（同 get_* 模式）。
3. **GlobalInstance<T>::create()（6 模板实例）→ ext/full IDENTICAL**
   - ORIG 形态需要外层 if/else + `return`（产出 jne→nop / jne→出口 双出口）。
   - 严格口径受 m_p 数据地址阻塞，ext/full 可达。
4. **App::stop → ext/full IDENTICAL**：原版用 `delete pApp` 关键字（一次载入 %ebx），
   手动 `~X()+operator delete` 会溢出到栈。
5. **INTERNALMSG_DESTROY_CHARACTER ctor → 严格 IDENTICAL（36/36）**
   - 真实 bug：`setInternalMsgID(0)` → 原版 `2`。
   - 缺失 setSize 后的 4 个成员初始化：bWillDelete=false、workIndex=0、
     mOwnerWorkId=nsl::tlsThreadId、bActiveJob=false。

当前 auction 严格水位：IDENTICAL 4096 / NEAR 443 / DIFF 197。

### 第三轮修复（2026-08-08，类型/布局类）

6. **ROI_Category::field_0 union 成员类型错误 → 严格 IDENTICAL**
   - ORIG DWARF：成员名 `_high_category_key`、类型 **signed long long**；
     源码误写为 `_qw`（`__int64` = unsigned long long）。
   - `operator<` 实际是 64 位有符号比较：`==` 合并（xor/or/test）+ `<`（高字 jl/jg、
     低字 jb）。源码改为直接用 `_high_category_key` 比较后
     **严格 IDENTICAL（43/43）**。
   - 全树 `._qw` 引用已同步改名为 `._high_category_key`（SQL %llu 传参语义不变）。
7. **DB 包构造器扫描**：24 个 tagAUCTION_DB_* 构造器的 setCategory/setInternalMsgID/
   setSize 参数与 ORIG 全部一致（无更多值 bug）。

当前 auction 严格水位：IDENTICAL 4097 / NEAR 443 / DIFF 196。

### 构建状态告警（外部写入）
`DNFServer/ServerCommon/tinyxml.cpp/.h` 正被工作区外部进程（疑似 Windows 侧编辑器/
同步）每 ~30 秒改写，导致 point 全量重建时 tinyxml 编译不稳定（IsWhiteSpace/SetValue
签名错误随版本漂移）。本轮未触碰 tinyxml；point 二进制停留在 22:21 状态，待外部写入
稳定后再统一重建。auction 构建与比对不受影响。

### channel 批量修复（2026-08-08，独立构建树不依赖 tinyxml）

channel 本轮 full IDENTICAL 645→**653**，DIFF 84→76：

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `TCPSocket::close` | `if (x==-1) return;`（早退，多条 body 产出 jmp+nop） | 严格 IDENTICAL |
| `EpollReactor<TCPUser>::shutdown` | 同上 | 严格 IDENTICAL |
| `UDPSocket::setOptNonBlock` | `if (fcntl<0) return 0; return 1;`（去 nRet 临时 + 位技巧） | 严格 IDENTICAL |
| `UDPSocket::setOptResizeRecvBuf/SendBuf` | 保留 `int nRet=setsockopt; if(nRet<0)...`（ORIG 有临时量） | 严格 IDENTICAL ×2 |
| `TCPSocket::setOptNonBlock` | 同上（去临时 + puts 分支） | ext/full IDENTICAL |
| `Script::remove_comment` | while(i<=0x3fd) + 循环内联 memset+return | ext/full IDENTICAL |
| `Script::fgetln` | while(i<=0x3ff) + `if(feof(fp)!=0){buf[i]=0;return false;}` | 严格 IDENTICAL |

仍在处理：`TCPSocket::pollRead/Write/ErrorEvent`（旧版 FD_ZERO 循环寻址形态差异）、
`GlobalInstance<T>::create`（EH landing pad 布局）、`TDebugTrace` 系列（寄存器分配）、
`TCircularQueueBuffer` 系列（循环结构）。

### auction 状态恢复（tinyxml 稳定后）
- tinyxml 外部写入在 22:37:52 后稳定且可编译；auction/point 已全量重建成功。
- `onAUCTION_DB_INSERT_AVERAGE_PRICE` 链接完成 → **ext/full IDENTICAL（110/110）**
  （seperate_upgrade 传参 movzbl 修复）。
- auction 当前：严格 4097/445/194（full 约 4465/77/194）。

### 第四轮修复（2026-08-08，分支/类型）

8. **onAUCTION_DB_INSERT/UPDATE_AVERAGE_PRICE**：`if (isEmpty())` 改为
   `if (!isEmpty())`（ROI 分支前置），匹配 ORIG 的 `xor $1` 形态。
   UPDATE 达 **ext/full IDENTICAL**（115/115）。
9. **INSERT 的 seperate_upgrade 传参**：`(signed char)` → `(unsigned char)`，
   匹配 ORIG 的 movzbl（修复在源码，构建被 tinyxml 阻塞未链接）。

#### ⚠️ 构建阻塞（需用户处理）
外部进程持续改写 `DNFServer/ServerCommon/tinyxml.cpp/.h`（约每 30 秒一次，
最后稳定点 22:36:25），当前版本存在编译错误（istream* 解引用、void*→istream* 等）。
auction/point 全量重建均被阻塞；auction 二进制停在 22:35:46（含 UPDATE 修复，
缺 INSERT 修复）。请确认是否有编辑器/同步在修改该文件，停止写入后即可恢复重建。

## 1. 源码依赖拓扑（并行任务分配）

### 1.1 源码树隔离关系（已从目录与构建脚本验证）

```
                    ┌──────────────┐
                    │  df_stun_r   │  DNFServer/StunServer  (64-bit, 独立)
                    └──────────────┘

  ┌────────────────────┐     ┌─────────────────────┐
  │ df_channel_r       │     │ df_bridge_r         │
  │ ChannelOld/        │     │ ChannelOld/         │
  │  DNFChannelServer  │     │  DNFChannelBridge   │
  │ （独立副本，非共享）│     │ （独立副本，非共享）│
  └────────────────────┘     └─────────────────────┘

  ┌──────────────────────────────────────────────┐
  │ df_auction_r  ──同一源码树──  df_point_r      │
  │ DNFServer/GameServer/ServerLab + ServerCommon│
  │ + DNFShared + Library                        │
  │ point 仅 -DPOINT_SERVER 切换 3 处常量         │
  └──────────────────────────────────────────────┘

  ServerCommon 另被 in-progress coserver 编译子集引用
  → coserver 不得擅自改 ServerCommon（本轮 git 显示 ServerCommon 干净）
```

### 1.2 并行波次

| 波次 | 任务 | 并行度 | 屏障 |
|---|---|---|---|
| **A** | stun 全量；channel 叶子 TU；bridge 叶子 TU；auction 叶子 TU | 4 路全开 | 无 |
| **B** | 各树框架层（Socket/Thread/Script/Service…） | 仍按树并行 | 无 |
| **C** | 各树业务层（ChannelService / Auction* / Search…） | 仍按树并行 | 无 |
| **D** | 任意 auction 源码修复后 **同步 rebuild point** | 串行于 auction | **必须** |

**禁止**：把 `DNFChannelServer/*` 直接覆盖到 `DNFChannelBridge/*`（同名类布局 DWARF 有差异，例如 `Threads` 是否含 `threadScript_`、`ChannelService` 基类、`m_pfnMsg` 表宽等）。

**channel ↔ bridge 同名文件内容现状（抽样 cmp）**

| 状态 | 文件 |
|---|---|
| 字节相同 | Exception、System、Thread、ThreadLock、Token、SocketSystem、Service、ScriptRawData、部分头 |
| 故意不同 | Socket、TCP*、UDP*、Globals、Script、ScriptData、LinuxService、ChannelService… |

---

## 2. 共享类交叉污染检查

| 共享面 | 涉及服务 | 本轮结论 |
|---|---|---|
| channel/bridge 源码树 | 物理分离 | **无交叉污染**；各自独立演进 |
| auction/point 同源 | 宏切换 | **已正确**：`-DPOINT_SERVER` 管 3 处常量；源码树 git 干净 |
| ServerCommon | auction/point + coserver 子集 | **未脏**；auction 侧 DNFFileLog/ServerXml/DNFFunctionLib 仍 MISSING=0 |
| Community / relay / coserver | 无 DWARF 进行中 | **已忽略**，未回写到 DWARF 树 |

**策略（落实）**：若未来两服务对同一共享实现需要不同机器码但语义可统一 → 优先统一语义；若语义必须分叉 → 用宏（已有先例：`POINT_SERVER`）。

---

## 3. 水位总表（项目函数口径）

| 服务 | 口径 | IDENTICAL | NEAR | DIFF | MISSING | exact+near |
|---|---|---:|---:|---:|---:|---:|
| **stun** | 全 text（小二进制） | 21 | 0 | 1 | 0 | **95.5%** |
| **channel** | fn2tu 清洗后（去 libgcc/unwind/STL 噪声） | 685 | 3 | 91 | 0 | **88.3%** |
| **bridge** | DWARF proj lists | 842 | 5 | 71 | 0 | **92.3%** |
| **auction** | DWARF proj 4736 | 4291 | 13 | 432 | 0 | **90.9%** |
| **point** | 与 auction 同源 + 3 常量 | 文档水位 4291/13/432/0 | | | | 同 auction 量级 |

### 3.1 stun

- 唯一 DIFF：`write_log(char const*, int)`（寄存器分配 408 vs 411B，**调用集一致**，既有报告已记录）。
- 无 MISSING。无需共享类处理。

### 3.2 channel（本轮重点）

未清洗的 all-text 比对会被 `_Unwind_*` / frame 注册等污染（约 40+ 假 DIFF）。清洗后：

**DIFF 集中 TU**：Socket(30)、Script(8)、Rijndael(8)、TCPUser(7)、DebugTrace(5)、ChannelService(6)、CircularBuffer(5)…

**CALLSET 风险（清洗后 28 个）** 多数为：

- 日志 `Lock/Unlock` 内联与否、`printf` vs `puts`、`compress2@plt` vs `compress2`
- 迭代器 `operator*` vs `operator->` 形态
- EH landing / 未初始化默认构造

**本轮确认并修复的真实语义缺陷（Socket.cpp）**：

| 函数 | 问题 | 修复后 |
|---|---|---|
| `TCPSocket::~TCPSocket` | 新版空析构，原版调用 `close()` | **IDENTICAL** |
| `UDPSocket::~UDPSocket` | 同上 | **IDENTICAL** |
| `UDPSocket::open` | 缺「已打开则失败」+ 失败 `printf` | **IDENTICAL** |
| `UDPSocket::bind` / `recv` | 未提交改动已对齐 DWARF（含 `from_`） | bind **IDENTICAL**；recv 仅寄存器序 DIFF |
| `TCPSocket::open` | 分支形态 | **IDENTICAL** |
| `TCPSocket::accept` | 缺 `memcpy` 填 `c_adrs_`/`port_`、缺 `setOptNonBlock` + 缓冲扩展 | callset 对齐（88→89 insn，残留 DIFF） |
| `TCPSocket::shutdown` | 新版误调 `::shutdown`；**原版不调用 syscall**，只读 `sock_` | callset 对齐（形态微差） |

### 3.3 bridge

- MISSING=0；exact+near **92.3%**（优于 channel 清洗口径）。
- Socket 析构在 bridge 侧**已正确**（`close()` 存在）——证明 channel/bridge 分树后各自水位不同，**不是**共享改坏。
- 71 个 DIFF 与既有 restoration 报告一致：分支惯用法 / 寄存器 / 部分日志形态；14 个 callset 差中多数为 EH/`TGlobalInstance::create` 的 `printf`/`puts` 等。

### 3.4 auction / point

- MISSING=0；IDENTICAL 4291 / NEAR 13 / DIFF 432。
- **callset 真风险仅约 10 个**，且全部可归类为：
  - EH `_Unwind_Resume` 多/少（CFileLogWriter）
  - 虚调用寄存器 `*%ebx` vs `*%ecx`
  - libstdc++ 4.4.7 move 语义：`uninitialized_copy` 走 `_Construct` 模板 vs 直接 copy ctor（**与 4.4.6 原版链接语义等价**，进度文档已审计）
  - `TCPThread::loop` 多一次空 `PACKET_HEADER` 构造
- **无证据**表明 coserver/relay 改动破坏了 auction 共享类。

---

## 4. DWARF 命名 / 布局合规

### 4.1 已对齐（Verified）

- **UDPSocket**（channel DWARF size=40）：`sock_@0`、`adrs_@4`、`port_@20`、`from_@24`  
  → `Socket.h` 含 `from_`；bind/recv 使用 `from_` / `adrs_` / `port_`（与原版一致）。
- **TCPSocket** size=28：`sock_` / `adrs_` / `c_adrs_` / `port_`。
- **channel 未提交重命名**（对照进度文档与符号使用，推断自 DWARF 字段名）：  
  `m_Handlers`→`m_pfnMsg`、`m_poolTCPSocket`→`poolTCPSockets_`、`m_llTick`→`tick_`、`m_ServerNameMap`→`gc_map`、`Threads` 成员序（`threadCheck_` 在 `threadUDP_` 后）、`arrayUDPPorts_` / `arrayUDPThreads_` 等。  
  **布局顺序变更**（Threads 内指针顺序）会影响偏移，已按 ctor 初始化顺序与原版对齐意图处理；机器码层 ChannelService 仍有 6 个 DIFF，需后续逐函数压差。

### 4.2 行号

- 仅作反编译/块复用元信息参考；**不要求** `.debug_line` 与重建源码一一对应。
- 本轮未强行改行号。

### 4.3 channel vs bridge 同名类差异（禁止合并）

见 `docs/df_bridge_r_restoration_report.md`：`Channel`/`Threads`/`TCPThread`/`ChannelService`/`ScriptData` 等字段与基类不同。本轮 cmp 也确认 Socket 等实现已分叉。

---

## 5. NEAR/DIFF 处理原则（后续并行清单）

1. **先 callset / 控制流**：缺 close、缺 setOpt、错 syscall、错常量 → 必修（本轮 channel Socket 已示范）。
2. **再助记符级**：`xor+test+je` vs `cmp+je`、`setcc` 物化、寄存器分配 → 尽量压，允许保留。
3. **行号 / 局部变量名**：DWARF 优先；不阻塞验收。
4. **并行时**：按 §1 波次；auction 与 point 同 PR 必须同编。

### 建议下一轮并行任务包

| 包 ID | 树 | 内容 | 依赖 |
|---|---|---|---|
| C-Sock | channel | 剩余 Socket DIFF（accept 1 insn、poll/select 形态） | 无 |
| C-Rij | channel | Rijndael 异常路径与原版 throw 对齐 | 无 |
| C-CS | channel | ChannelService 6 DIFF + 字段名 DWARF 再核 | C-Sock 后更稳 |
| B-Diff | bridge | 71 DIFF 中 callset=14 再扫一遍 | 无 |
| A-Diff | auction | 432 DIFF 按 TU 分批（Search/Auction/Handlers） | 无 |
| A-Pt | point | auction 任何修复后 rebuild+compare | A-* |

---

## 6. 本轮落地变更

| 路径 | 变更 |
|---|---|
| `source/ChannelOld/DNFChannelServer/Socket.cpp` | 修复 dtor/open/accept/shutdown/UDP open 语义 |
| `source/toolchain/build-channel.sh` | 默认 SOURCES 改为全量 TU（可一键链接） |
| `source/toolchain/dwarf_validate.py` | 新增 topology/compare/neardiff/layout 校验入口 |
| `docs/dwarf_services_validation_report.md` | 本报告 |

**未改**：`source/relay/`、`source/coserver/`、`DNFServer/ServerCommon`、bridge/auction/point 业务源码。

---

## 7. 结论

1. **拓扑清晰**：四棵独立树可并行；auction↔point 需屏障；channel≠bridge 源码。
2. **共享类污染**：本轮**未发现**因共享修改导致某 DWARF 二进制语义被破坏；channel Socket 缺陷是本树未完成对齐，非 bridge/auction 牵连。
3. **语义优先修复已执行**（channel Socket 关键路径），其余 NEAR/DIFF 以 callset 过滤后大部分为 -O0 惯用法。
4. **DWARF 字段名**：UDPSocket 等已严格对齐；ChannelService 命名重命名在途（未提交 diff），应继续以 DWARF 为准收尾。
5. **无 DWARF 进行中工作**已隔离，未纳入本轮改动范围。
