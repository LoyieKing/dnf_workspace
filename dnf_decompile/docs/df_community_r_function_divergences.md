# df_community_r 全量逐函数比对报告（2026-08-07）

## 方法与范围

- 比对对象：重建源码（`source/` 全部 19 个参与编译的 .cpp）vs 原始二进制（Ghidra 反编译）。
- 数据：Ghidra Headless（`source/toolchain/ghidra_decompile_targets.java`）按地址导出 **463 个原始函数**的反编译伪 C（11197 行），按源文件分组（`/tmp/divergence/perfile/`）。
- 结论判定：逐函数人工比对逻辑（分支/循环/缓冲区/返回值/调用目标/成员偏移/字符串），不依赖 overlap 数值。

## 结论汇总

| 文件 | 函数数(在原始) | 结论 |
|---|---:|---|
| Thread.cpp | 10 | 全部一致 |
| DNFFunctionLib.cpp | 32 | 30 一致，2 处修正 |
| DNFFileLog.cpp | 12(类方法) | 修正 5 处后一致 |
| shared/packet ×3 + CPacketParser | 8 | 全部一致 |
| CoreDump / DateTime / FindUser / FindBuddy | 22 | 全部一致（REDNF_LOG 编译期关闭，无二进制差异） |
| ProcessManager.cpp | 9 | 修正 1 处后一致 |
| ArchiveLog.cpp | 11 | 修正 1 处后一致 |
| global.cpp | 11 | 修正 1 处后一致 |
| Epoll / SessionProxy | 15 | 全部一致 |
| AbstractSocket / NetworkSession | 40 | 全部一致（1 处初始化微调） |
| SessionManager.cpp | 10(类方法) | 修正 map 类型后一致 |
| PacketDispatcher.cpp | 3 | 修正 map 键类型后一致 |
| ConfigFileReader.cpp | 7(方法) | 全部一致 |
| main.cpp | 2(含 command) | 全部一致（清 0 循环改为 memset，行为等价） |
| BuddyManager.cpp | 6(方法) | 全部一致 |
| User.cpp | ~30(方法) | 4 个发送函数修正后一致 |
| UserManager.cpp | 7 | 全部一致 |

## 已修正的不一致（共 15 处，均为行为级差异）

### 1. `DNFFunctionLib::Hex2Binary`
原始：`Hex2Char` 失败即 `return 0`；我们原来 `break` 后返回 1。已修正。

### 2. `DNFFunctionLib::PrintTextFile`
原始：`fprintf(f, text)`（text 直接作格式串）；我们原来 `fprintf(f, "%s", text)`。已修正。

### 3-7. `DNFFileLog`（5 处）
- `CFLog` 构造：原始先默认构造 string 再赋值（非拷贝构造）；
- `CFLog` 析构：原始无条件 `fclose(file)`（含 stdout 回退情形）；
- `CFileLogWriter` 析构：原始不释放 map 中的 CFLog 指针（泄漏行为一致）；
- `CMyFileLog::operator()`：原始将格式化缓冲直接作为 `writeLog` 的格式串传递；
- `CToolFileLog::operator()`：同上（两处调用）。

### 8. `CProcessManager::check_pidfile`
原始返回 `access() == 0`（布尔）；我们原来直接返回 `access()`。已修正。

### 9. `CArchiveLog::WriteLog`
原始 `memcpy(&time, &now, 7)`（仅 7 字节）；我们原来复制 `sizeof(DateTime)`=8。已修正。

### 10. `packet_proc::OnLogin` 日志参数
原始 `CHARAC_INFO(%d, %d, %d, %s)` = server_id, channel_no, **charac_no**, buddy_n_user_id_what；我们漏了 charac_no 且类型错位。已修正。

### 11. `CNetworkSession::CreateListenSocket`
原始 `int socket = 0` 初始化；我们未初始化。已修正。

### 12. `CSessionManager::map` 类型
原始 `std::map<int, stSessionInfo>`（仅构造使用）；我们误写 `std::map<int, int>`。已改为 `stSessionInfo`（最小结构体），对齐模板符号。

### 13. `CPacketDispatcher::packetTable` 键类型
原始 `std::map<unsigned short, handler>`；我们误用 `int`。已改为 `unsigned short`。

### 14-15. `CUser` 发送函数（4 个函数内多处）
- `send_other_channel_chat`：server_id 与 buddy id 应来自**发送者 user 参数**（原始 param_2），我们误用 this；
- `send_other_channel_chat_hyper_link`：同上；且 `what_0x16f` 应来自 `chat->what_0x173`、`what_0x36` 应来自 `chat->what_0x3a`（我们原来取反且漏设 0x36）；
- `send_other_channel_chat_result`：原始**不设置 server_id**（保持 0），buddy id 来自聊天包 `chat->buddy_n_user_id_what`；
- `send_other_channel_chat_result_hyper_link`：buddy id 来自聊天包。

## 修正后效果（2026-08-07 实测）

| 指标 | 比对前 | 比对修正后 |
|---|---:|---:|
| 精确符号匹配 | 1086 | **1166** |
| 字符串交集 | 1771 | **1856** |
| 助记符完全一致 | 259 | **321** |
| 平均助记符重叠 | 75.89% | **75.96%** |
| 文件大小 | 941,224 | **947,680**（原始 967,844，97.9%） |

## 未修正的已知差异（记录）

- `main` 的 255 字节清零：原始为对齐展开的逐字清零，我们统一 `memset`（行为等价，代码生成不同）。
- `CFileLogWriter::writeLog/writeRawLog` 的“昨日日志”处理按反编译语义实现，异常路径细节可能与原始略有出入。
- `PvPBuddyInfo` 构造函数为隐式数组初始化（原始为构造体内显式循环 + memset，构造后状态一致）。
- 剩余未匹配符号均为编译器/运行时内部符号（libstdc++ locale、`_Unwind_*`、`_GLOBAL__I_` 等）。

## 2026-08-07 追加修正（可靠审计 + 字符串精确还原）

### 新增修正

1. `CSessionManager` 构造：`map`/`packetDispatcher` 改用成员初始化列表（原始直接构造，无临时对象 + operator=）；
2. `CUser` 复制构造：改用成员初始化列表（`buddyManager(other.buddyManager)`，消除临时对象）；
3. `CBuddyManager`：补显式析构（原始：先 `buddies.clear()` 再析构 vector）；
4. `CConfigFileReader::Parse`：比较改 `strcmp(key, tag.c_str())`、插入改 `make_pair(tag, value)`（原始形式）；
5. 字符串精确还原（原始为 EUC-KR 韩文/精确字节）：
   - `ProcessManager`：`%s process id file open 실패\n`、`%d번의 잘못된 process id\n`、`%d번 process로 종료 signal 송신 실패`；
   - `CoreDump::regist_signal`：`%d번 signal 등록 실패`；
   - `CUser::req_remove_buddy`/`res_add_buddy` 日志：修正 typo 与双空格，逐字节一致。

### 审计方法（可靠化）

用 `nm -S` 的地址+尺寸 + `objdump` 地址区间提取助记符（绕开脚本对含 `<>` 模板符号的提取缺陷），逐项目函数（剔除 std/boost/libstdc++）精确对比。

### 最终指标（2026-08-07）

| 指标 | 值 |
|---|---:|
| 项目函数精确匹配（可靠审计） | **381 / 993** |
| 逐函数报告（脚本） | 可匹配 544、精确 324、平均重叠 76.43% |
| 精确符号匹配 | **2880 / 3115（92.5%）** |
| 字符串交集 | **4274** |
| 文件大小（gcc-4.4.7，无 -g） | **846,672**（原始 967,844） |

> 2026-08-07 晚更新：经静态库版本实验（glibc 2.5/2.12 无影响；libstdc++ 4.4.x 各版一致；**CentOS 5 的 4.1.2 静态 libstdc++ 显著提升精确度**），最终采用混合方案：gcc-4.4.7 编译 + 4.1.2 静态 libstdc++ + 4.4.7 libgcc（`build-c6-mix2`）。可靠审计：**项目函数精确 452/916**、std 精确 644/1649；符号匹配 2693、字符串 3811。详见 `df_community_r_reverification.md` 第十节。

## 2026-08-07 第二轮全量复核（当前状态）

在混合方案（`build-c6-mix2`）基础上，对全量比对中 319 个未完全对齐项目函数（剔除 std/`__gnu_cxx` 模板后 200 个真实项目函数）逐一人工对照 Ghidra 反编译复核（全部在当前 agent 完成，无 subagent）。**再修复 10 处真实差异**，详见 `docs/function_review/report_review_full_20260807.md`：

1. `CConfigFileReader::Trim`：补「字节非负」检查（EUC-KR 韩文字节不被当空白跳过）；
2. `CEpoll` 构造：显式清零 `epollEvents`/`epfd`（原始不初始化 `eventCount`）；
3. `CUser::update_variable_charac_info`：删除多余的 `char*` 重载（对齐 `EcPKccc`）；
4. `STPvPBuddyDBInfo`：删除显式空析构（对齐原始隐式 trivial/weak D1，消除局部对象多余析构与 EH 展开）；
5. `CAbstractSocket::AcceptSocket`：删除多余 `memset`；
6. `CAbstractSocket::CreateListenSocket`：删除重复 `memset`；
7. `CFileLogWriter::writeLog/writeRawLog`：`operator[]` → `insert(make_pair(...))` + 返回值检查、对齐 NULL 检查位置；
8. `CToolFileLog::operator()`：`strlen+strcat`、subfile 聚合初始化（`rep stosl`）、分支内调用 Instance；
9. `ISessionManager`：删除虚析构（原始无 D0/D1/D2）；
10. `CUser::send_buddy_list`/`notice_login_logout`：迭代器 `operator*`/前缀 `++` 写法对齐。

### 第二轮后指标（实测）

| 指标 | 第二轮前 | 第二轮后 |
|---|---:|---:|
| 文件大小 | 863,088 | **861,356**（原始 967,844） |
| 项目函数符号名精确匹配 | — | **484/490（98.8%）** |
| 项目函数助记符级精确（可靠审计） | 452/916（49.3%） | **278/490（56.7%）** |
| 助记符完全一致 | 324 | **329 / 544** |
| 平均助记符重叠 | 76.43% | **76.83%** |
| EXTRA 项目符号 | 58 | **33** |
| 字符串交集 | 3811 | **3815** |

剩余 36 个 MISALIGN 均经人工确认语义一致（编译器布局/模板实例化差异），明细见第二轮报告。

## 2026-08-07 第三轮：boost::object_pool 复刻（当前状态）

原始 `CNetworkSession::operator new/delete` 使用 boost::object_pool（全局 `g_network_session_pool`）。已按原始反编译实现定制版 boost pool（3 参数 pool 构造、2 参数 object_pool 构造、max_size 限制、4 字段布局），见 `source/shared/BoostPool.h`。boost 47 个符号中 **46 个符号+助记符完全一致**；`CUserManager::find_user(unsigned)`、`CConfigFileReader::get_value` 改为 const_iterator 补齐弱符号。

### 第三轮后指标（实测）

| 指标 | 第二轮后 | 第三轮后 |
|---|---:|---:|
| 文件大小 | 861,356 | **869,804**（原始 967,844） |
| 项目函数符号名精确匹配 | 484/490 | **487/490（99.4%）** |
| 项目函数助记符级精确 | 278/490 | **387/490（79.0%）** |
| 精确符号匹配 | 3254 | **3254 / 3741（87.0%）** |
| boost 函数精确 | 0/47 | **46/47** |
| 助记符完全一致 | 329 | **334 / 548** |
| 平均助记符重叠 | 76.83% | **76.94%** |
| 字符串交集 | 3815 | **3873** |

剩余差异：3 个 `_M_get_Node_allocator` 弱符号（libstdc++ 4.1.2 vs 4.4.4 头文件内部实现差异）、`ordered_malloc_need_resize` 1 条指令、`min_alloc_size` 符号属性 u/V，以及 34 个已确认语义一致的 MISALIGN（编译器布局差异）。

## 2026-08-07 第四轮（决定性）：确认原始编译模式为 gnu++0x

关键证据（原始 ELF 符号）：
- `_ZSt9make_pairIRj5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_` —— 带 `std::decay_and_strip` 的 **C++0x 版 make_pair**（右值引用参数 OS）；
- `_ZN9__gnu_cxx13new_allocator...9constructII...EEEvPS_DpOT_` —— 变参模板 construct（C++0x）；
- `_ZNSt6vectorISsSaISsEE9push_backEOSs` —— 右值引用 push_back；
- `_Rb_tree::_M_create_node` 走 `_M_get_Node_allocator()`（C++0x 分支），而非 C++98 的 `get_allocator()`。

此前所有构建均用 gnu++98（CMakeLists `CMAKE_CXX_STANDARD 98`），导致大量 STL 模板实例化差异（make_pair 值版/引用版、push_back 拷贝/移动、construct 变参、迭代器 const 性）。改为 **`-std=gnu++0x`** 后：

| 指标 | gnu++98 | **gnu++0x（当前）** |
|---|---:|---:|
| 项目函数符号精确 | 487/490 | **490/490（100%）** |
| 项目函数助记符级精确 | 387/490 | **394/490（80.4%）** |
| 精确符号匹配 | 3254/3741 | **3399/3741（90.9%）** |
| MISSING 项目函数 | 3 | **0** |
| EXTRA 项目函数 | 2 | **0** |
| 字符串交集 | 3873 | **4018（78.0%）** |
| boost 函数精确 | 46/47 | **45/47**（C++0x 下 make_pair 相关微调后 45） |

CMakeLists 已改为默认 `-std=gnu++0x`（可用 `-DDF_CXX_STANDARD=gnu++98` 回退）。构建目录 `build-c6-cxx0xr4` 为最终产物。

剩余差异均为编译器微版本（4.4.7 vs 原始 4.4.x/4.1.2 混合）与静态库（4.1.2 libstdc++）的指令布局/模板内部实现差异，非项目源码可修。

## 2026-08-07 最终状态（gnu++0x + 逐函数核对后）

### 指标

| 指标 | gnu++0x 最终值 |
|---|---:|
| 项目函数符号精确 | **490 / 490（100%）** |
| 项目函数助记符级精确（可靠审计） | **394 / 490（80.4%）** |
| MISSING 项目函数 | **0** |
| EXTRA 项目函数 | **0** |
| 精确符号匹配（全 ELF） | **3399 / 3741（90.9%）** |
| missing（全部为 libstdc++/编译器内部） | 342 |
| extra（全部为 libstdc++/编译器内部） | 128 |
| 字符串交集 | **4018 / 5154（78.0%）** |
| 文件大小 | **877,264**（原始 967,844，90.6%） |

### 剩余差异定性

- **95 个业务函数助记符不精确**：全部为编译器微版本差异（gcc 4.4.7 vs 原始 4.4.4/4.4.6/4.4.7 混合对象）的栈槽/寄存器/分支布局（例如 `ArchiveLog C1` 的 `__cxa_guard_abort` EH cleanup、`ConfigFileReader::Parse` 的局部变量槽位、`GetCurrentResetBaseTime` 的 tm 字段布局）。逐个对照 Ghidra 反编译确认语义完全一致。
- **342 missing / 128 extra 符号**：均为 libstdc++ 4.1.2 静态库与编译器内部符号（`_ZNKSt*`、`_GLOBAL__I_*`、locale/exception 内部实现），非项目代码。
- **字符串交集 78%**：其余为静态链接的 libstdc++ locale/facet 字符串（4.1.2 vs 4.4.x 内容差异）。

结论：**项目源码层已与原始完全对齐**（所有项目函数存在、符号名一致、语义一致）；二进制级剩余差异由「原始为多编译器版本混合链接」与「libstdc++ 静态库版本」决定，无法通过源码继续收敛。

### 编译器版本穷尽实验（2026-08-07 补记）

原始 `.comment` 含 4.1.2×3 / 4.4.4×3 / 4.4.6×1 / 4.4.7×1（混合链接）。为排除编译器微版本因素，下载并实测：

- **真正的 gcc-4.4.4（20100726）**：从 CentOS 6.0 vault 取得 cc1plus（10,383,440 字节，与 4.4.7 不同）→ 完整构建；
- **gcc-4.4.6（20110731）**：从 CentOS 6.2 vault 取得 → 完整构建；
- **gcc-4.4.7**：现有工具链。

三者对相同源码生成的指令**逐函数完全一致**（项目助记符精确均为 394/490、符号 3399/3741、大小 877264/877308 差异仅 44 字节）。结论：剩余 96 个函数差异与编译器微版本无关。

另测 gcc-4.1.2 单文件编译（ArchiveLog.cpp）：同样生成 `__cxa_guard_abort`/`_Unwind_Resume`，与原始（无 guard_abort）不符。原始 ArchiveLog C1 缺少 guard_abort 属于其特定编译环境（可能 -fno-exceptions 或构造内联判定）的编译器行为，非本项目源码可复现。

**最终结论**：项目源码与原始二进制的对齐已达环境极限——符号 490/490（100%）、语义全部一致、指令级 394/490（80.4%）；剩余差异全部为编译器内部行为（EH guard 布局、栈槽分配）与静态库（libstdc++ 4.1.2 内部符号 342 缺失 / 128 多余）决定。

### 2026-08-07 末轮：源码写法对齐（394 → 403 指令级精确）

在编译器版本穷尽后，确认剩余差异为**源码写法（形式）差异**而非编译器版本。逐函数对照 Ghidra 反编译调整写法，新增精确函数：

- `PacketHeader`：`reversed2` 由两个 ushort 修正为 **4 字节 uint**（原始一次 movl 清零），并加 packed；
- `CGuard<CMutex>`：先 `mutex->lock()` 再保存成员（原始顺序）；
- `CBuddyManager::del_buddy`：直接 `if (it != end) { erase; return true; } return false`（不存 bool 变量）；
- `CPacketDispatcher::get_dispatcher`：分支方向改为 `if (found != end) return ...; return NULL`；
- `Epoll::RegisterSession/UnregisterSession`：返回值比较方向、存局部变量；
- `CSessionProxy::TryConnect`：去掉 `bool registered` 局部变量；`TryListen` 改 `bool ret = false; if/else` 结构；
- `CProcessManager::check_pidfile`：`access` 结果存局部变量再比较；
- `CSessionManager` 构造：去掉显式成员初始化列表、循环改 `for (int i = 0; i < size; i++)`（CALLS/BRANCH/SIZE 全一致，仅 vtable 地址差异）；
- `CCoreDump`：`regist_signals` 宏改回临时变量、`CCoreDump` 构造 char 局部变量、`regist_signal` sa_flags 用 `|=`；
- `CArchiveLog::CreateLogFile(DateTime&)`：清 0 改 `char buffer[1024] = {0}`（rep stosl，逐指令一致）；
- `DNFFLib::ConvertGBKtoUTF8/ConvertUTF8toGBK`：返回值比较形式；`CharacSetSwitch` 显式变量初始化；
- `CNetworkSession::OnRecv`：`SetRecvBufferOffset` 结果存变量；`Disconnect`：去掉 `if (this != NULL)`（delete this 直接）；
- **ArchiveLog.cpp 以 `-fno-exceptions` 编译**（关键发现）：原始 ArchiveLog C1 无 `__cxa_guard_abort`/`_Unwind_Resume`（仅 guard acquire/release/atexit），与其余文件（-fexceptions）混合。验证 -fno-exceptions 编译 ArchiveLog.cpp 后 ArchiveLog C1 从 69 → **50 条逐指令一致**；其余 19 个文件 -fno-exceptions 均更差，保持 -fexceptions。

### 最新指标（2026-08-07 末）

| 指标 | 值 |
|---|---:|
| 项目函数符号精确 | **490/490（100%）** |
| 项目函数指令级精确 | **403/490（82.2%）** |
| 精确符号匹配 | **3400/3741（90.9%）** |
| 助记符完全一致 | **351 / 552** |
| 平均助记符重叠 | **77.72%** |
| 字符串交集 | **4020（78.0%）** |
| 文件大小 | **873,332**（原始 967,844） |

剩余 87 个函数差异均为 gcc 4.4 对等价源码的指令选择差异（`int 变量 < 0` vs `返回 < 0` 的 cmpl/jns vs shr/test、栈槽分配、bool 比较形式），已在三版本 gcc 4.4.x 验证无法通过源码消除。

### 2026-08-07 再末轮：4.1.2 混合假设排除 + 结构对齐（403 → 403 指令级，整体指标提升）

**4.1.2 混合编译假设排除**：原始 `.comment` 含 3 个 4.1.2 对象，推测部分文件用 gcc-4.1.2 + gnu++98 编译。搭建 4.1.2 完整工具链（c5root cc1plus + 4.1.2 头文件）逐文件编译对比，**所有 12 个文件在 4.4.x (gnu++0x) 下函数精确数均远高于 4.1.2**（如 ConfigFileReader 4.1.2=36/97 vs 4.4=100/106；main 13/56 vs 64/66）。结论：原始项目文件全部用 4.4.x + gnu++0x 编译，.comment 的 4.1.2 来自静态 libstdc++ 库对象。

**CFileLogWriter C1/D1 EH cleanup 穷尽分析**：原始 C1 15 条 / D1 21 条无 `_Unwind_Resume`，我们 gcc 4.4 生成 31/37 条（含 16 条 EH cleanup）。逐项实验：内联空构造、隐式构造、显式初始化列表 `: logs(), mutex()`、无初始化列表、-O1/-O2/-Os、4.1.2 编译——均无法消除 map 成员构造的 EH cleanup（gcc 4.4 对非内联 map 成员构造固定生成 EH；原始无 EH 原因未明，可能为原始编译环境特殊标志）。

**结构对齐改善**：
- `CConfigFileReader::Parse`：do-while + break + `if (config == end) printf` 结构（匹配时也走 check 点），141 → 140 条（Δ14 → 1）；
- `checkTimeToday`：`tm*` 指针访问 + 嵌套 if/else 结果变量，35 → 33 条（Δ8 → 2）；
- `GetCurrentResetBaseTime`：`tm*` 指针访问，52 → 49 条（Δ13 → 3）；
- `CFileLogWriter` 构造恢复 .cpp 定义（内联方案无效且引发重定义，已回退）。

### 最新指标（2026-08-07 再末）

| 指标 | 值 |
|---|---:|
| 项目函数符号精确 | **490/490（100%）** |
| 项目函数指令级精确 | **403/490（82.2%）** |
| 精确符号匹配 | **3402/3741（91.0%）** |
| 助记符完全一致 | **351 / 552** |
| 平均助记符重叠 | **77.80%** |
| 字符串交集 | **4022（78.0%）** |
| 文件大小 | **873,408**（原始 967,844） |

剩余 ~84 个函数差异均为 gcc 4.4 对等价源码的指令选择/栈槽分配差异（`||` 分支布局、`tm*` 局部变量槽位、EH cleanup 生成），经 4.1.2 混合假设排除与三版本 4.4.x 验证，无法通过源码继续消除。
