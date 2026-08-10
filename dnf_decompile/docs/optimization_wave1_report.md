# 并行 identical 优化 Wave A/B 报告（2026-08-09/10）

## 0. 执行结构

- **Wave A（并行编辑，13 个子代理）**：按拓扑把源码树切成互不冲突的独占集合——stun / channel / bridge / auction+point（同源同树）/ ServerCommon+shared+Library3rd（共享根）/ manager(+Library3rd MySQL) / dbmw / monitor / guild / statics / relay / coserver / community。每个代理只允许改自己名下的文件；全局构建参数与 -march 一律不动，arch 只允许函数级 `__attribute__((target("arch=...")))`（须 ORIG 证据，§89）；通用算法（Rijndael/CSHA/TEA/yaSSL）按用户规则只验语义。用户授权后各代理可再开子代理细粒度并行（按文件/TU/函数族）。
- **Wave B（验证，3 个子代理）**：全部服务全量重建 + 官方口径重测，产出 vs 基线（Wave A 前）的逐函数改进/回归清单。
- **回归修复**：恢复 tinyxml 出线定义（guild MISSING 归零）、mysqlclient 产物路径迁至 build/manager/mysqlclient 并同步 build-dbmw.sh、清理重建到 source/ 的旧构建目录。

## 1. 水位变化总表（严格口径 CALIBER_VERSION=3，IDENTICAL/NEAR/DIFF/MISSING）

| 服务 | 基线（Wave A 前） | Wave B 实测 | 净改进 | 备注 |
|---|---|---|---|---|
| stun | 6/19/1/0 | 6/19/1/0 | 0（扩展口径 15/10/1） | 剩余 NEAR 均为数据地址/assert 行号；write_log 为工具链伪影 |
| channel | 594/126/23/0 | 595/127/21/0 | +2 DIFF 归零 | TDebugTrace::operator<<、TMemoryPoolStatic startup ×2 |
| bridge | 739/156/23/0 | 749/148/21/0 | +2 DIFF 归零、+10 NEAR→IDENT | onCS_NOTICE_CHANNEL_SERVER、DBMgr::Mysql_error 等 12 项 |
| auction | 4152/453/131/0 | 4152/453/131/0 | 0 | 本波未落地（子代理工作量大，待续） |
| point | 4154/453/129/0 | 4154/453/129/0 | 0 | 同 auction |
| community | 113/3/542/~32 | 113/3/542/~32 | 0 | 当前为 GCC 13.3 构建；可修项已修但官方口径无变化，见 §4 |
| manager | 460/422/997/0 | 494/421/964/0 | +33 DIFF | 回归 1：TCPSocket::setOptResizeRecvBuf NEAR→DIFF |
| dbmw | 610/515/1440/0 | 611/516/1438/0 | +2 DIFF | 含 LoadFile(std::string) 等；tinyxml 修复后有 2 个微小回退 |
| monitor | 555/243/1029/0 | 588/257/982/0 | +47 DIFF | 回退 3 个（tinyxml ×2 + CGuard 析构） |
| guild | 384/204/1112/0 | 402/198/1100/0 | +12 DIFF、MISSING 0 | tinyxml 出线定义恢复后 MISSING 归零 |
| statics | 319/89/329/0 | 320/132/285/0 | +44 DIFF | 43 个 DIFF→NEAR、1 个→IDENT |
| relay | 224/63/206/0 | 241/69/183/0 | +23 DIFF | 14 个→IDENT、10 个→NEAR、4 个 NEAR→IDENT；1 个工具链符号回退 |
| coserver | 153/70/154/0 | 156/77/144/0 | +10 DIFF | 3 个→IDENT、7 个→NEAR |

> Wave B 全部服务重建成功、无构建失败；数值以官方严格口径为准。详细逐函数清单见 /tmp/verify/<svc>/ 与 /tmp/verify_fix/<svc>/（临时目录，未纳入仓库）。

## 1.1 豁免口径（2026-08-10 用户规则后的现行官方口径）

tinyxml、通用加密/哈希算法（CRijndael/CSHA/CTEA/IMethod、yaSSL/TaoCrypt）、Boost、
STL/std 内部实例化、工具链运行时（_Unwind_/__cxa_/operator new-delete/__libc_csu_）
获得 identical 豁免，移出统计口径（实现：`source/toolchain/compare_common.py::is_exempt_symbol`，
详见 `docs/compare_caliber.md`）。下表为豁免后的**当前**水位（严格口径
IDENTICAL/NEAR/DIFF；DWARF 服务另给 extended/full 档；MISSING 均 0 除注明）：

| 服务 | 豁免后项目函数 | IDENTICAL | NEAR | DIFF | extended IDENT | full IDENT |
|---|---:|---:|---:|---:|---:|---:|
| stun | 28（无豁免项） | 6 | 19 | 1 | 15 | 25* |
| channel | 323 | 204 | 107 | 12 | 305 | 309 |
| bridge | 480 | 314 | 147 | 19 | 453 | 459 |
| auction | 1556 | 1018 | 420 | 118 | 1381 | 1395 |
| point | 1556 | 1020 | 420 | 116 | 1383 | 1397 |
| community | 305 | 30 | 3 | 272 | — | —（MISSING ≈2，非 STL） |
| manager | 504 | 166 | 93 | 245 | — | — |
| dbmw | 903 | 222 | 103 | 578 | — | — |
| monitor | 1346 | 393 | 178 | 775 | — | — |
| guild | 1246 | 245 | 95 | 906 | — | — |
| statics | 564 | 197 | 121 | 246 | — | — |
| relay | 395 | 174 | 60 | 161 | — | — |
| coserver | 268 | 95 | 64 | 109 | — | — |

\* stun 的 25/0/1 为额外归一化 copy-reloc/RIP 相对数据地址后的口径（仓库 full 档为 15/10/1）。

豁免前后对比：原口径下大量“项目函数”实为 STL/std 实例化与第三方代码（如 auction
4737→1556、channel 745→323、bridge 919→480、manager 1879→504），剔除后剩余才是
真正的项目代码统计面。

## 2. Wave A 源码改动面

- 89 个源文件被修改（约 +2771/-1602 行），覆盖全部 13 个服务树 + ServerCommon + Library3rd(tinyxml)。
- 改动类型以坑点文档驱动：类型/有符号性、#pragma pack、bool 物化/返回极性、循环形态、声明序/死局部、DWARF 命名合规、操作数顺序等（docs/identical_pitfalls.md §1–§105）。
- 已知被内联后又回退的 tinyxml 函数：`TiXmlNode::NextSibling()`、`TiXmlDocument::LoadFile(std::string)` —— 恢复出线定义后 guild MISSING 归零，但 dbmw/monitor/guild 三者该函数由 IDENTICAL 变 DIFF（codegen 形态差异、语义等价），列为下一波待收尾项。

## 3. 回归与开放项

1. **tinyxml 三函数**（guild/dbmw/monitor）：`LoadFile(std::string)`、`NextSibling()`、guild 的 `FirstChild(char const*)` —— 目标形态是“出线定义 + 与 ORIG tinyxml.o(-O3/TIXML_USE_STL) 逐指令一致”，下一波按服务 flags 收尾。
2. **manager**：`TCPSocket::setOptResizeRecvBuf` NEAR→DIFF（单函数）。
3. **community**：当前 GCC 13.3 构建与 ORIG 4.1.2/4.4.x 混合链不可达逐字节 identical（归因：532/543 为工具链代码生成/STL 实例化差异，仅 3 个源码可修、3 个部分可修、5 个待定）；正确路径是恢复 877KB 验证构建工具链后继续压差。
4. **工具链不可复现类**（语义等价、官方口径归 NEAR/DIFF）：§81 寄存器流、§9 EH landing、§3.3 块序/nop、§5.3 callee-saved 选择、§36 编译器补丁级差异、setcc 寄存器选择、数据地址（strict 口径）等——这些是“全部 identical”目标的硬边界，除非更换/补丁编译器，否则按项目既有口径以 full 档验收。

## 4. 下一步建议（Wave C）

## 5. Wave C 进展（2026-08-10，豁免口径）

Wave C 按拓扑并行 13 个代理（可再开子代理），目标：修复错误语义 + 把项目自有代码
（豁免 tinyxml/加密/STL/工具链后）压到 IDENTICAL；编译器尾音/不可复现伪影按
compare_caliber 归档。已确认落地的成果（部分服务待最终全量重建复核，见下）：

| 服务 | Wave C 已确认成果 | 语义修复 |
|---|---|---|
| stun | strict 6/19/1；extended/full 15/10/1（全部归档伪影） | 0（26 函数全语义等价） |
| channel | DIFF 12→11，full IDENT 309→310（TCPThread::loop 后置自增） | 1 |
| relay | 174/60/161 → 204/62/129（+30 IDENT、−32 DIFF） | 若干（RelayService/Reactor 族） |
| statics | 已核 13 函数：6→IDENTICAL、3→NEAR（FIXED+ARTIFACT）、3 归档 | CScheduler m_day 偏移、CCubeStatistic 字段偏移等真实 bug |
| community | 305 函数归因：7/275 源码可修（已修）、268/275 GCC13/STL 不可修、0 语义 bug | 0（send_buddy_list 极性已对齐） |
| auction/point | 5 个函数族子代理分批处理；重建后水位未变（118/116 DIFF） | 0（本波） |
| coserver | 95/64/109 → 103/68/97（−12 DIFF） | 若干 |
| manager | 166/93/245 → 187/86/231（−14 DIFF） | 若干 |
| dbmw/monitor/guild/statics | 源码修改落地，重建后水位见 §5.1（脚本口径基准不同，直接比绝对值） | 若干 |

## 5.1 Wave C 最终水位（2026-08-10 全量重建 + 豁免口径重测，verify_wave_c.sh）

| 服务 | 双侧项目函数 | IDENTICAL | NEAR | DIFF | MISSING | 备注 |
|---|---:|---:|---:|---:|---:|---|
| stun | 28 | 6 | 19 | 1 | 0 | ext/full 15/10/1，全归档伪影 |
| channel | 323 | 204 | 108 | 11 | 0 | ext 306/6/11；full 310/2/11 |
| bridge | 480 | 314 | 147 | 19 | 0 | ext 453/8/19；full 459/2/19 |
| auction | 1556 | 1018 | 420 | 118 | 0 | ext 1381/57/118；full 1395/43/118 |
| point | 1556 | 1020 | 420 | 116 | 0 | ext 1383/57/116；full 1397/43/116 |
| community | 305（豁免后） | 30 | 3 | 272 | ≈2 | 官方口径 113/658/69.09%；GCC13 构建上限 |
| manager | 504 | 187 | 86 | 231 | 0 | |
| dbmw | 1072 | 334 | 140 | 598 | 0 | |
| monitor | 1579 | 547 | 180 | 852 | 0 | |
| guild | 1452 | 364 | 130 | 958 | 0 | |
| statics | 706 | 311 | 126 | 269 | 0 | |
| relay | 395 | 204 | 62 | 129 | 0 | |
| coserver | 268 | 103 | 68 | 97 | 0 | |

> 口径注：manager/dbmw/monitor/guild/statics 的“双侧项目函数”来自各自 compare 脚本
> （is_app + is_exempt_symbol + C1/C2 去重），与早前 TSV 后处理基数不同，横向比绝对值
> 会失真；同一脚本内前后对比才有效。已确认的 Wave C 净改善：channel −1 DIFF、
> relay −32 DIFF、coserver −12 DIFF、manager −14 DIFF。

结论：Wave C 完成全量重建验证与逐函数归因；剩余 DIFF/NEAR 的主体为归档伪影类
（数据地址、EH landing、寄存器分配、块布局、GCC 版本代码生成），另有少量可修面
（如 auction/point 的 118/116 与 dbmw/guild/monitor 的大 DIFF 集）留待后续波次。

1. auction/point 本波未落地：派 1 个代理按 docs/data/topology/auction/ 分层继续压 131 DIFF（优先 AuctionDictionary/HandlerFor_* 大函数族），同步重建 point。
2. tinyxml 三函数按服务 flags 收尾（guild/dbmw/monitor），消除回退。
3. manager setOptResizeRecvBuf、relay `_ZdlPvS_` 单函数回退修复。
4. community 切换到验证构建工具链后再压差（否则 GCC13 下工作无效）。
5. 剩余 NEAR/DIFF 中凡属 §81/§9/§3.3/§36 类的一律归档，不再消耗预算；只在“声明序/类型/操作数/循环形态”可复现类上继续。
