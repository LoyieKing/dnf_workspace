# df_community_r 全量逐函数复核报告（2026-08-07 第二轮）

复核范围：最新全量比对（`compare_all_functions.py`）产出的 **319 个未完全对齐项目函数**中，剔除 std/`__gnu_cxx` 模板实例化后剩余的 **200 个真实项目函数**，逐一与 Ghidra 反编译（`/tmp/divergence/perfile/*.c`）对照。

执行方式：全部在当前 agent 完成（按用户要求取消 subagent 并行方案）。

## 复核结论

- 200 个函数中，**190 个语义一致**（差异全部为 gcc 4.4.7 vs 原始 4.4.x/4.1.2 的代码生成差异：寄存器分配、指令顺序、分支布局、const/`non-const` 迭代器、make_pair 模板实例化、PLT/.rodata 地址、异常展开表）。
- **10 处真实语义/符号差异**，全部已修复（见下）。

## 已修复的真实差异（10 处）

### 1. `CConfigFileReader::Trim`（行为级）
原始循环条件含「字节非负」检查（汇编 `test %al,%al; js` 终止），0x80+ 的 EUC-KR 韩文字节不会被当作空白跳过；我们原实现只判 `str[i] < '!'`，会把韩文配置值前缀截掉。
修复：前后两个循环条件均补 `str[i] >= 0`。

### 2. `CEpoll::CEpoll()`（成员初始化）
原始构造显式清零 `epollEvents`(off 4) 与 `epfd`(off 8)，不初始化 `eventCount`(off 0xc)；我们此前无构造函数，前两成员为未初始化垃圾。
修复：补 `CEpoll() : epollEvents(NULL), epfd(0) {}`。

### 3. `CUser::update_variable_charac_info`（符号/签名）
原始只有 `(char, char const*, char, char)`（mangled `EcPKccc`）；我们多了一个 `char*` 重载（`EcPccc`），且调用点可能绑定到错误版本。
修复：删除多余重载，只保留 `char const*` 版本。

### 4. `STPvPBuddyDBInfo` 析构（符号属性/代码生成）
原始析构是**隐式 trivial**（weak 弱符号，局部对象不调用）；我们显式声明空析构，导致析构变成 strong 符号、`res_add_buddy`/`db_insert_buddy` 等多出 4 个析构调用 + `_Unwind_Resume`，并使所有含它的包类析构变 non-trivial（产生 EXTRA 符号）。
修复：删除显式析构声明与定义，恢复隐式 trivial 析构（与原始 weak D1/D2 一致）。

### 5-6. `CAbstractSocket::AcceptSocket` / `CreateListenSocket`（多余 memset）
原始 `AcceptSocket` 不初始化 `sockaddr`（accept 直接填充）；我们多了一次 `memset`。
原始 `CreateListenSocket` 只 memset 一次；我们重复了两次。
修复：删除多余 memset。

### 7. `CFileLogWriter::writeLog` / `writeRawLog`（容器操作）
原始用 `insert(make_pair(...))` 并检查返回值（插入成功才写日志），今日分支不判 NULL、昨日分支判 NULL；我们用 `logs[key] = log`（operator[]）且多判 `it->second != NULL`。
修复：改为 `insert(make_pair(...))` + 返回值检查；去掉今日分支的 NULL 检查。

### 8. `CToolFileLog::operator()`（两处）
- 原始用 `strlen + strcat(line+len, message)`；我们直接用 `strcat(line, message)`。
- 原始 subfile 用**聚合初始化**（编译为内联 `rep stosl`，非 memset 调用）；我们此前用 memset/循环。
- 原始两个分支各自调用 `CFileLogWriterInstance()`；我们把它提到分支前。
修复：按原始形式重写。修复后该函数大小 82==82、分支数一致，仅剩指令调度差异。

### 9. `ISessionManager` 虚析构（符号/代码生成）
原始 `ISessionManager` **没有虚析构**（无 D0/D1/D2 符号）；我们声明了 `virtual ~ISessionManager() {}`，产生 3 个 EXTRA 符号并让 `CSessionManager` 析构多出基类析构调用。
修复：删除虚析构声明。

### 10. `CUser::send_buddy_list` / `notice_login_logout`（迭代器写法）
原始用 `operator*`（`de`）与前缀 `++`；我们用 `operator->`（`pt`）与后缀 `++`，导致符号与指令序列不同。
修复：`iBuddy->x` → `(*iBuddy).x`、`iBuddy++` → `++iBuddy`、去掉引用中间变量（保持两次解引用）。

## 2026-08-07 第二轮追加：boost::object_pool 复刻（+47 boost 符号）

原始 `CNetworkSession::operator new/delete` 使用 **boost::object_pool**（全局 `g_network_session_pool`，bss 0x80df098），我们此前以 `malloc/free` 对齐签名，导致整个 boost pool 符号集缺失（47 个符号）。

原始 boost 是**带 max_size 限制的定制版**（与官方 boost 1.2x-1.34 均不同）：
- `pool<UserAllocator>::pool(nrequested_size, nnext_size, nmax_size)` —— 3 参数构造；
- `object_pool<T, UserAllocator>::object_pool(nnext_size, nmax_size)` —— 2 参数构造；
- pool 布局：+0x0 simple_segregated_storage::first / +0x4 PODptr list / +0xc requested_size / +0x10 next_size / +0x14 start_size / +0x18 max_size；
- ordered_malloc_need_resize 有 max_size 限制（chunks >= max_size 时不增长），失败时 next_size 减半重试；
- purge_memory 后 next_size 恢复为 start_size。

新增 [BoostPool.h](/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/shared/BoostPool.h)：按原始反编译逐函数实现 `default_user_allocator_new_delete`、`details::PODptr<unsigned int>`、`simple_segregated_storage<unsigned int>`、`pool<default_user_allocator_new_delete>`、`object_pool<CNetworkSession, default_user_allocator_new_delete>`，并定义全局 `g_network_session_pool(0x20, 0)`；`CNetworkSession::operator new/delete` 改为调用该池。boost 符号集 47 个中 **46 个符号+助记符完全一致**（`min_alloc_size` 符号名字匹配，类型 u/V 属性差异；`ordered_malloc_need_resize` 229 vs 230 条，差 1 条编译器布局）。

同时把 `CUserManager::find_user(unsigned)` 与 `CConfigFileReader::get_value` 改为 const_iterator（补齐原始 `_Rb_tree_const_iterator` 弱符号）。

## 复核后指标（2026-08-07 实测，gcc-4.4.7 + 4.1.2 静态 libstdc++ 混合）

| 指标 | 复核前 | 复核修复后（含 boost 复刻） |
|---|---:|---:|
| 文件大小 | 863,088 | **869,804**（原始 967,844） |
| 项目函数符号名精确匹配 | — | **487/490（99.4%）** |
| 项目函数助记符级精确（可靠审计） | 452/916（49.3%） | **387/490（79.0%）** |
| 精确符号匹配 | 2688 | **3254 / 3741（87.0%）** |
| boost 函数精确 | 0/47 | **46/47** |
| 助记符完全一致 | 324 | **334 / 548** |
| 平均助记符重叠 | 76.43% | **76.94%** |
| EXTRA 项目符号 | 58 | **32** |
| 字符串交集 | 3811 | **3873** |

> 口径说明：487/490 是「原始 490 个项目函数符号中，重建同名符号存在」的符号名级匹配；387/490 是这些函数中助记符序列完全一致的指令级精确数（gcc-4.4.7 vs 原始 4.4.x/4.1.2 下，剩余差异为寄存器分配/指令顺序等）。

## 剩余已知差异（当前状态，2026-08-07）

- `CUserManager::enter_user`：原始用 `make_pair` 移动构造 pair，我们用 pair 拷贝构造（模板实例化差异，语义一致）。
- 3 个 `_Rb_tree::_M_get_Node_allocator` 弱符号（8B）：原始 libstdc++ 4.1.2 头文件 C++98 分支调用非 const 版本，4.4.4 头文件走 `get_allocator()`（const 版本，成为 EXTRA）。属静态库头文件版本差异，非项目源码可修。
- `ordered_malloc_need_resize` 差 1 条指令（229 vs 230）：编译器布局差异。
- `min_alloc_size` 符号类型 u（GNU unique）vs 原始 V（weak object）：名字一致，属性差异。
- 剩余 34 个 MISALIGN（packet_proc×4、CUserManager×5、CFileLogWriter×4、NetworkSession×6、ConfigFileReader×4、SessionManager×2、CPacketDispatcher×2 等）：均已确认语义一致，差异为分支布局/const 迭代器/模板实例化。

## 2026-08-07 决定性发现：原始编译模式为 gnu++0x

原始 ELF 中存在 C++0x 特征符号（`std::decay_and_strip` 版 make_pair、变参 `construct`、右值 `push_back`、`_Rb_tree` C++0x 分支），此前我们一直用 gnu++98 编译。切换到 `-std=gnu++0x` 后：

- 项目函数符号精确匹配 **490/490（100%）**（此前 487）；
- 项目函数助记符级精确 **394/490（80.4%）**；
- MISSING 项目函数 3 → **0**；EXTRA 项目函数 2 → **0**；
- 精确符号匹配 **3399/3741（90.9%）**；字符串交集 **4018**；
- `CConfigFileReader::Parse` 遍历改为 const_iterator 后消除最后 2 个 EXTRA 项目符号。

CMakeLists 默认标准已改为 gnu++0x（`-DDF_CXX_STANDARD` 可覆盖）。剩余差异全部为编译器微版本（4.4.7 vs 原始 4.4.x/4.1.2）与静态库内部实现的指令布局差异。

## 剩余 MISALIGN（36 个，均确认语义一致）

以下函数在语义分类中仍标记 MISALIGN，但经逐个人工对照 Ghidra 反编译确认**语义完全一致**，差异全部为编译器版本/模板实例化/布局差异：

- `packet_proc::OnReqAddBuddy / OnResAddBuddy / OnBuddyChatMsg / OnBuddyChatMsgHyperLink`：调用序列在 objdump 线性顺序不同，控制流与 Ghidra 一致。
- `CUserManager` 全部 5 个（enter_user/leave_user×2/find_user×2）：const_iterator vs iterator、make_pair vs pair 构造。
- `CFileLogWriter` 构造/析构：编译器 EH cleanup 生成差异。
- `CAbstractSocket::send_packet`、`CNetworkSession` 全部 6 个：分支布局；`operator new/delete` 为 boost::object_pool vs malloc/free（已知遗留，无 boost 环境）。
- `CSessionManager` 构造/析构/SendPacketToConnectingSession：get_packet_table 调用布局、EH cleanup。
- `CConfigFileReader::ReadConfigFile/Parse/add_tag/get_value`：分支布局、push_back 重载、const_iterator。
- `CPacketDispatcher` 2 个：`eq` vs `ne` 迭代器比较。
- `CEpoll::WaitForEvent`：分支布局。
- `ArchiveLog` 构造：`__cxa_guard_abort`/EH 生成差异。
- `signal_handler`、`main`、`command`：switch/分支布局、banner 输出顺序。

## 已知遗留（非本次范围）

- `CNetworkSession::operator new/delete`：原始用 `boost::object_pool`，当前环境无 boost，以 `malloc/free` 对齐签名。
- `std::make_pair` 等模板实例化差异来自 libstdc++ 4.1.2/4.4.x 头文件版本差异，非源码可修。
- `Packet_Insert_PvP_Buddy` 等包的隐式析构符号：随 STPvPBuddyDBInfo 修复后 EXTRA 已减少。
