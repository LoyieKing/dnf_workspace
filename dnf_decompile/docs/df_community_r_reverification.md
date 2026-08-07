# df_community_r 重建结果复核报告

复核日期：2026-08-06

对比对象：

- 原始：`dnf_installer/build/dnf_data/home/template/neople/community/df_community_r`（967,844 字节，未 strip）
- 重建：`dnf_decompile/source/build-verify-community/df_community_r`（726,560 字节，含 DWARF，未 strip）

## 结论

重建的主体框架（`main`、会话管理、包分发、用户/好友管理）结构与原始二进制接近，但**当前产物不能视为“几乎相等”**。差异分为两类：

1. 构建参数 / ABI 差异：改变整个二进制结构（PIE、静态链接运行时、编译器版本），是所有指标偏差的系统性来源；
2. 代码实现差异：约 130 个项目函数缺失、包构造函数缺成员初始化、若干签名/命名不符。

---

## 一、构建参数与 ABI 差异（已从 ELF 验证）

| 项 | 原始 | 重建 | 影响 |
|---|---|---|---|
| ELF 类型 | EXEC（固定地址 0x8048000 段基址） | PIE(DYN) | 重建出现大量 `__x86.get_pc_thunk.*`、`.got` 更大；段布局完全不同 |
| libstdc++/libgcc | **静态链入**（动态依赖仅 libpthread/librt/libm/libc/ld-linux；symtab 含 2294 个 `std::`、151 个 `__gnu_cxx::`、46 个 `boost::`、`_Unwind_*`、libiberty `d_*` demangler） | 动态链接 `libstdc++.so.6` + `libgcc_s.so.1` | 符号集合、`.text` 大小（419KB vs 59KB）差异的绝大部分来源 |
| 编译器 | GCC 4.1.2（RedHat）+ 4.4.x 静态库（`.comment` 含 4.1.2/4.4.4/4.4.6/4.4.7） | GCC 13.3.0（Ubuntu） | 指令编码、EH 表、`.ctors/.dtors` vs `.init_array`、模板实现（如 `vector::erase` 229 vs 85 字节） |
| 字符串 ABI | 旧 ABI `std::basic_string` | 新 ABI `std::__cxx11::basic_string`（重建符号中出现） | 含 string 的类布局/内部实现不同 |
| 目标内核 | GNU/Linux 2.6.9 | 3.2.0 | 元信息差异 |

已对齐的项：`-m32`、`-O0`（帧指针、无内联）、`-fstack-protector`（双方均有 `__stack_chk_fail`）、RTTI/异常开启、gnu.hash、REL 重定位、未 strip。

## 二、符号与函数覆盖（精确数字）

| 指标 | 值 |
|---|---:|
| 原始命名函数（T/t/W/w，剔除 `.L`） | 3,115 |
| 重建命名函数 | 706 |
| 精确 mangled 名匹配 | 303 |
| ORIG-only | 2,812（约 2,490 为静态链接运行时；约 320 项目相关，其中约 130 个为真正缺失） |
| NEW-only | 403（绝大多数为现代 libstdc++ 模板实例化；少量为重建特有/改名） |
| 项目级精确匹配率 | 约 39%（202 / 约 513） |

## 三、缺失 / 不一致的项目函数（分类）

- **日志类**：`CFLog`、`CFileLogWriter`、`CMyFileLog`、`CToolFileLog`、`CMyRawFileLog`、`CFileLogWriterInstance()`（来自 ServerCommon/DNFFileLog.cpp 等，未编入 df_community_r 目标）；
- **工具类**：`DNFFLib::*`（Binary2Hex/Hex2Binary/ExplodeString/CharacSetSwitch/ConvertGBKtoUTF8/...）、`CodePage::*`（initCodePage/client/script/database）、`NumberToString`、`StringToNumber`、`timeGetTime`、`Rand_r`、`SDC_Rand`、`Char2Hex`、`Hex2Char`、`PrintBackTrace`、`checkTimeToday`、`GetCurrentResetBaseTime`；
- **整个类缺失**：`CPacketParser`（源码树中不存在）；
- **线程工具**：`CMutex`、`CGuard<CMutex>`；
- **签名 / 命名不符**：
  - `GetPackageDispatcher`（重建）应为 `GetPacketDispatcher`（原始）；
  - `CUser::notice_login_logout(unsigned char)`（重建）应为嵌套枚举 `CUser::eLoginout`（原始 mangled 名 `NS_9eLoginoutE` vs `h`）；
  - `send_other_channel_chat_result(..., char)`（重建）应为枚举 `ENUM_MONITOR_ERROR`（原始 mangled 名含 `18ENUM_MONITOR_ERROR`）；
  - `CAbstractSocket::GetRecvBuff(int, int*)`（重建）应为 `int&`（`Pi` vs `Ri`）；
  - `CNetworkSession::operator delete(void*)`（重建）应为带大小的 `operator delete(void*, unsigned int)`（原始）；
  - `CSessionProxy` 第二参数：原始为模板模板参数（mangled `N12socket_event6CEpollE`），重建为具体类型（`CEpollIS1_E`），导致全部 9 个方法 mangled 名不匹配；
- **全局构造器**：原始约 20 个 `_GLOBAL__I_`（g_network_session_pool、CUserManager::enter_user、CBuddyManager::add_buddy、CPacketDispatcher、CConfigFileReader、CCoreDump 等），重建仅 `g_user_manager` 1 个。

## 四、数据段差异

- 原始数据符号 705 个（含 libstdc++ 内部），重建 20 个；`.bss` 26,916 字节 vs 72 字节。
- 缺失的项目级全局：`g_network_session_pool`、`gClientEncoding` / `gScriptEncoding` / `gDatabaseEncoding`（CodePage）、`gNumberToStringBuffer`、`CFileLogWriterInstance()::instance`、`Rand_r::staticSeed`、`Char2Hex::saucHex` 等。

## 五、代码实现差异（函数级证据）

1. **包构造函数缺成员初始化**：
   - `Packet_Response_PvP_Buddy_Conn_List`：原始 141 字节 = PacketHeader(0x1b5b,0x536) + `charac_no`/`sTGameUserInfo_what3`/`buddyCount` 清零 + 32 次 `PvPBuddyInfo()` 构造 + `memset(buddies,0,0x520)`；重建 50 字节 = 仅 PacketHeader → **发送时成员为未初始化内存**。
   - 同类：`Packet_Monitor_Other_Channel_Chat_ToUser`（136 vs 50）、`Packet_Notice_Add_PvP_Buddy_Result`（106 vs 47）、`Packet_Notice_PvP_Buddy_In_Out`（106 vs 47）、`Packet_Response_Remove_PvP_Buddy`（99 vs 47）等。
   - `PvPBuddyInfo` 原始有构造函数（清零 0x29 字节），重建头文件未声明构造函数。
2. **匹配良好的函数**：`PacketHeader` 构造、`STPvPBuddyDBInfo` 构造逐指令一致（仅重建多了 PIC thunk）；`CNetworkSession::Parsing` 助记符重叠 73.9%、`get_type` 75%、`set_type` 70%。
3. **main**：调用序列基本一致（puts×8、CConfigFileReader 构造/ReadConfigFile/get_value×6/add_tag×3、CSessionManager、CSessionProxy::TryListen/WaitForSessionEvent/CreateEvents、ArchiveLog、command、CCoreDump、global_function::sleep），尺寸 1335 vs 1308 字节，助记符重叠 51.6%；重建多出 memset 与 `__stack_chk_fail_local`，异常处理路径（__cxa_begin/end_catch）计数不同。

## 六、达到“几乎相等”的修复清单

### A. 构建参数（source/CMakeLists.txt）

1. 加 `-no-pie`（消除 32 位 PIE 及其 PIC thunk，是最大的结构差异来源）；
2. 加 `-static-libstdc++ -static-libgcc`（对齐原始“仅 4 个 libc 系动态依赖”）；
3. 加 `-D_GLIBCXX_USE_CXX11_ABI=0`（用 GCC ≥5 时的过渡项，对齐旧 string ABI）；
4. 安装 GCC 4.1.2/4.4.x（RedHat）工具链（`.gitignore` 已预留 `gcc-4.1.2-install/`），才能复现 `.ctors`、指令编码与 EH 布局；
5. 保持 `-m32 -O0 -pthread -fstack-protector`，RTTI/异常开启。

### B. 源码补全

1. `df_community_r` 目标补入：`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFFunctionLib.cpp`、线程工具（CMutex/CGuard）、Library/Core 工具函数；新建 `CPacketParser`；
2. 修正签名/命名：`GetPacketDispatcher`、枚举类型（eLoginout、ENUM_MONITOR_ERROR）、`GetRecvBuff(int&)`、sized `operator delete`、`CSessionProxy` 模板模板参数写法；
3. 补 `PvPBuddyInfo` 构造函数，并让所有含成员数组的包构造函数按原版初始化；
4. 补全局对象（`g_network_session_pool` 等）与静态初始化器。

### C. 验证流程

每个文件用三项指标回归：函数名精确匹配数、匹配函数助记符重叠率、数据段（全局符号）差异；全部通过后再以 `-no-pie -static-libstdc++` 重建做整体 ELF 结构对比。

---

## 七、2026-08-06 对齐执行结果

### 已修改

- `source/CMakeLists.txt`：新增 `-fno-pie -fno-PIC`、`-no-pie`、`-static-libstdc++ -static-libgcc`、`-D_GLIBCXX_USE_CXX11_ABI=0`、`-lpthread -lrt -lm`。
- 源码：
  - `GetPackageDispatcher` → `GetPacketDispatcher`（ISessionManager.h / SessionManager.h/.cpp / NetworkSession.cpp）；
  - `CUser::eLoginout`、`ENUM_MONITOR_ERROR` 改为命名枚举（mangled 名与原始一致）；
  - `CAbstractSocket::GetRecvBuff(int, int&)`、补 `~CAbstractSocket()`；
  - `CNetworkSession::operator delete(void*, unsigned int)`（原始为 boost::object_pool::free，当前环境无 boost，以 free 对齐签名）；
  - `CProcessManager` 补构造/析构；
  - `CSessionProxy` 第二参数改为模板模板参数；
  - 9 个包构造函数按原始反汇编补齐成员初始化。

### 对齐效果（2026-08-06 实测，对齐前 → 对齐后）

| 指标 | 对齐前 | 对齐后 |
|---|---:|---:|
| ELF 类型 | PIE(DYN) | **EXEC** |
| 动态依赖 | libstdc++/libgcc_s/libc | libc/ld-linux（libstdc++/libgcc 静态链入） |
| 文件大小 | 726,560 | 933,812（原始 967,844） |
| 精确符号匹配 | 303 | 810 |
| 字符串交集 | 539 | 1262 |
| 逐函数可匹配 | 342 | 443 |
| 助记符完全一致 | 0 | 58 |
| 平均助记符重叠 | 46.84% | 53.80% |
| 加权符号命中率 | 39.51% | 53.96% |
| 包构造函数尺寸 | 50–141 字节差距 | 3–12 字节差距 |

### 遗留差异

1. **GCC 版本**：`.init_array` vs 原始 `.ctors`、模板符号名、locale 内部符号、`.text` 190 KB vs 419 KB（其中约 110 KB 为 GCC 4.x 静态 libstdc++ 的实现差异）；需 GCC 4.1.2/4.4（当前环境不可用）才能继续逼近。
2. **NEEDED 列表**：原始含 libpthread/librt/libm，现代 glibc 已并入 libc，无法复现（不影响运行）。
3. **实现缺失**：日志类（CFLog/CFileLogWriter/CMyFileLog/CToolFileLog）、DNFFLib/CodePage、CPacketParser、CMutex/CGuard、工具函数（约 60 个唯一函数）——见 `df_community_r_missing_functions.md`。
4. **PvPBuddyInfo ctor 符号**未生成（包构造以 memset 等价清零，行为一致）。

---

## 八、2026-08-06 最终：gcc-4.4.7 工具链 + 缺失函数全部补齐

### 老 GCC 工具链（CentOS 6.10 vault gcc-4.4.7）

系统无 GCC 4.x、apt 无候选、无 Docker；CentOS 7/6 的 os 仓库 gcc RPM 均不含 `cc1`（只有 gcc-c++ 的 `cc1plus`）。本项目为纯 C++，故可直接使用：

1. 从 `vault.centos.org/6.10/os/x86_64/Packages/` 下载并解包 gcc/gcc-c++/libgcc/libstdc++(-devel)/glibc(-devel/-headers)/kernel-headers/mpfr/gmp 的 x86_64 与 i686 RPM 至 `/tmp/c6root`（libarchive bsdtar 解包）。
2. 编译 32 位 C++：`g++ -m32` + `-nostdinc -isystem <c6 头文件链>`；链接：宿主 `/usr/lib32` 的 crt/libc + c6root 的 32 位静态 libstdc++/libgcc + `/tmp/h32lib` 的 libpthread/librt 符号链接。
3. 包装脚本：`source/toolchain/c6-g++`（设置 GCC_EXEC_PREFIX/LD_LIBRARY_PATH）。
4. CMakeLists 按 `CMAKE_CXX_COMPILER_VERSION` 分支：GCC≥8 走现代参数（-no-pie 等），旧 GCC 走默认非 PIE。

### 缺失函数补齐（依据 Ghidra Headless 反编译，逐函数实现）

- 新增 `DNFServer/ServerCommon/DNFFileLog.h/.cpp`：CFLog、CFileLogWriter、CMyFileLog、CMyRawFileLog、CToolFileLog、CFileLogWriterInstance（map<string,CFLog*> 缓存 + CMutex 保护，按日建日志）。
- 新增 `DNFServer/ServerCommon/DNFFunctionLib.h/.cpp`：timeGetTime、NumberToString×2、StringToNumber、checkTimeToday、GetCurrentResetBaseTime、Char2Hex（"0123456789abcdef" 表）、Hex2Char、SDC_Rand、PrintBackTrace、comp_by_time、DNFFLib（iconv 转码等 11 个）、CodePage（8 个，含 gClientEncoding/gScriptEncoding/gDatabaseEncoding）。
- 新增 `DNFServer/ServerCommon/Thread.h/.cpp`：CMutex（pthread_mutex_*）、CGuard<CMutex>。
- 新增 `Community/src/CPacketParser.h/.cpp`：空构造/析构。
- `PvPBuddyInfo` 头文件补构造函数（清零 0x29 字节，与反汇编一致）。
- CMake `df_community_r` 目标补入上述 4 个 .cpp 与 `DNFServer/ServerCommon` include 路径。

### 最终指标（2026-08-06 实测）

| 指标 | 初始 | gcc-13 对齐后 | gcc-4.4.7 + 补函数后 |
|---|---:|---:|---:|
| ELF 类型 | PIE | EXEC | **EXEC** |
| NEEDED | libstdc++/libgcc_s/libc | libc/ld-linux | **与原始完全一致**（librt/libm/libpthread/libc/ld-linux） |
| 文件大小 | 726,560 | 933,812 | **941,224**（原始 967,844，97.3%） |
| 精确符号匹配 | 303 | 810 | **1086** |
| 字符串交集 | 539 | 1262 | **1771** |
| 逐函数可匹配 | 342 | 443 | **436** |
| 助记符完全一致 | 0 | 58 | **259** |
| 平均助记符重叠 | 46.84% | 53.80% | **75.89%** |
| 加权符号命中率 | 39.51% | 53.96% | **67.4%** |
| 项目级缺失函数 | ~130 | ~60 | **0** |

### 剩余差异（非项目代码）

- 编译器版本：GCC 4.4.7 vs 原始 4.1.2（主）+ 4.4.x（静态库），`.text` 128 KB vs 419 KB 的差距主要为原始静态链入的 iostream/locale 等 libstdc++ 代码（本项目未使用 iostream）。
- 少量 `_GLOBAL__I_` 静态初始化器命名差异（如 CPacketParser 全局实例）。
- 部分 `(anonymous namespace)` locale/error_category 内部符号来自旧 libstdc++。

---

## 九、2026-08-07：main 对齐 + 编译器版本判定（向“完全相同”收敛）

### 原始编译器判定（实验结论）

下载并搭建了 **CentOS 5.11 gcc-4.1.2-55.el5**（清华镜像 vault，与原始 `.comment` 中的 4.1.2 同版本），完整重建后逐函数对比：

- gcc-4.1.2 构建：项目函数精确 95 / 595；`Packet_Monitor_Other_Channel_Chat_ToUser` 构造 0x87（原始 0x88，差 1 字节）。
- gcc-4.4.7 构建：项目函数精确 173 / 677；同一包构造 **0x88 逐字节一致**。

**结论：原始 df_community_r 的项目代码主体由 GCC 4.4.x 编译**（`.comment` 中 4.1.2 来自个别对象或环境标注），4.4.7 是最接近的可用编译器；CMakeLists 头部“GCC 4.1.2”注释为旧假设，仅对 stun/auction 等其他目标成立。

### main 对齐（还原 try/catch 与 iostream）

依据反编译，原始 `main` 整体包在 `try/catch` 中：

- `catch (std::exception& e)`：`std::cout << "error: " << e.what() << "\n"`，`success = true`；
- `catch (...)`：`std::cout << "Exception of unknown type!\n"`，`success = false`；
- argc 分支与 command 分支均**无提前 return**（我们原先有，已移除）；
- 255 字节清 0 恢复为原始“按地址对齐展开”的循环（非 memset）。

`<iostream>` 的使用同时把原始二进制静态链入的 ostream/locale 运行时代码拉入重建，效果显著：

| 指标 | 2026-08-07 早 | 加 iostream 后 |
|---|---:|---:|
| .text | 190,468 | **420,042**（原始 418,988，99.75%） |
| .bss | 19,524 | **26,340**（原始 26,916，97.9%） |
| 精确符号匹配 | 1166 | **2876**（原始 3115，92.3%） |
| 字符串交集 | 1856 | **4264** |
| 文件大小（无 -g） | — | **860,844**（原始 967,844） |

### 与“完全相同”的剩余差距（均已定位，非源码可修复）

1. `.rodata` 少约 28 KB：libstdc++ locale/facet 字符串（4.4.7 vs 原始 4.4.4/4.4.6 混合）。
2. `.symtab/.strtab` 原始更大（更多模板实例化/局部符号）。
3. `main` 0x5ea vs 0x537：异常处理 landing pad 代码生成的编译器微版本差异（320 vs 328 条助记符，逻辑一致）。
4. 个别非精确函数：同样为编译器微版本差异。

### 最终产物

- `source/build-c6-rel/df_community_r`（gcc-4.4.7，无 -g）为最接近的二进制；`build-verify-community/df_community_r` 同步。
- 工具链：`source/toolchain/c6-g++`（4.4.7，主）、`source/toolchain/c5-g++`（4.1.2，用于判定实验）。

---

## 十、2026-08-07：静态库版本实验与最终混合方案

### 实验

1. **glibc 头文件版本**：gcc-4.4.7 + CentOS 5.11 glibc-2.5 头文件 vs CentOS 6 glibc-2.12 —— 两个二进制**逐字节相同**，头文件不影响本项目代码生成。
2. **libstdc++ 静态库版本**：用同一批 .o 分别链接 CentOS 6.0/6.1/6.2/6.4 的 libstdc++-devel（4.4.4/4.4.5/4.4.6/4.4.7）——结果相同（RHEL 4.4.x 的 .a 内容一致）。
3. **CentOS 5.11 gcc-4.1.2 的 libstdc++/libgcc**：显著提升 std 函数精确匹配（498→644），说明**原始静态运行时是 4.1.2 时代产物**（与 .comment 首条 4.1.2 一致）。

### 最终方案：gcc-4.4.7 编译项目代码 + 4.1.2 静态 libstdc++（+ 4.4.7 libgcc）

`build-c6-mix2`（`CMAKE_CXX_STANDARD_LIBRARIES=/tmp/c5root/.../4.1.2/32/libstdc++.a`），复现原始“项目代码 4.4.x + 静态运行时 4.1.2”的混合结构。

| 指标 | 4.4.7 纯库 | **混合（最终）** |
|---|---:|---:|
| 项目函数精确（可靠审计） | 381/993 | **452/916（49.3%）** |
| std 函数精确 | 498/1742 | **644/1649** |
| 精确符号匹配 | 2880 | 2693 |
| 字符串交集 | 4274 | 3811 |
| .text | 416,282（-2.7KB） | 451,754（+33KB） |
| 文件大小 | 846,672 | 863,088 |

取舍说明：混合版在**逐函数字节精确**上大幅领先（项目 452 vs 381），代价是丢失部分 4.4.x 静态库内部符号/字符串（ORIG 同时含 4.1.2 与 4.4.x 组件，单一方案无法两全）。以“实现完全相同”为目标的逐函数精确数优先，故采用混合方案。
