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
| auction（最新，见第九批） | 4736 | 4100 | 450 | 186 | 4458 | 92 |
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

### channel 批量修复（第二批，2026-08-08）

channel full IDENTICAL 653→**656**，DIFF 76→73（累计 645→656，DIFF 84→73）：

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `TCPSocket::pollRead/Write/ErrorEvent` ×3 | 手写旧版 FD_ZERO 循环（`unsigned int __i; fd_set* __arr` 声明序）+ `FD_SET((unsigned)sock_)` + `if(result==0) return false; return true;` + result 最先声明（栈槽反分配） | 严格 IDENTICAL（58/58） |

### 关键经验（-O0 形态对齐）
- FD_ZERO 的 asm/memset 内联 vs 手写循环：手写 + 声明序（`__i` 先于 `__arr`）复现索引寻址。
- FD_SET 除法符号：`(unsigned)sock_` 复现 shr（无符号），否则 sar+cmovs（有符号）。
- 返回极性：`if (result == 0) return false; return true;`（ORIG 的 jne→true 布局）。
- 栈槽布局：局部变量按「反声明序」分配，用声明顺序控制槽位。

仍在处理：`TDebugTrace` 系列（寄存器分配）、`TCircularQueueBuffer` 系列（极性/符号）、
`GlobalInstance<T>::create`（EH landing pad）、`CRijndael`/`CSHA`（大函数）。

### channel 批量修复（第三批，2026-08-08）

channel full IDENTICAL 656→**660**，DIFF 73→69（累计 645→660，DIFF 84→69）：

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `UDPSocket::pollRead/Write/ErrorEvent` ×3 | 同 TCPSocket poll 家族（手写 FD_ZERO + 无符号 FD_SET + 返回极性 + 声明序） | 严格 IDENTICAL（58/58） |
| `ScriptRawData::find(parent,child)` | null 路径直接 `return NULL`（不经局部），find 结果存回局部再返回 | 严格 IDENTICAL（22/22） |
| `TGlobalInstance::create`（printf） | ORIG 串无结尾 `\n` → GCC 保持 printf（去掉 \n）；剩余为 EH nop 布局差异（语义等价） | printf 修复保留，仍 NEAR/DIFF |

剩余主要家族：`TDebugTrace`（寄存器分配）、`TCircularQueueBuffer`（极性/符号）、
`GlobalInstance/TGlobalInstance::create`（EH landing pad）、`EpollReactor::handleEvents`、
`ChannelServiceApp::TCPUser::onClose`、`CRijndael`/`CSHA`（大函数）。

### bridge 批量修复（2026-08-08，镜像 channel 模式）

bridge 与 channel 同框架（ChannelOld/DNFChannelBridge），把 channel 已验证的
-O0 形态模式镜像过去，full IDENTICAL 821→**833**，DIFF 71→59：

| 函数 | 模式 | 结果 |
|---|---|---|
| `TCPSocket/UDPSocket::pollRead/Write/ErrorEvent` ×6 | FD_ZERO 手写循环 + 无符号 FD_SET + 返回极性 + 声明序 | 严格 IDENTICAL（58/58） |
| `TCPSocket::close` / `EpollReactor<TCPUser>::shutdown` | 早退 + jmp+nop 出口 | 严格 IDENTICAL |
| `ScriptRawData::find(parent,child)` | null 路径直接 return NULL + 存回局部 | 严格 IDENTICAL |
| `UDPSocket::setOptNonBlock` | `if(fcntl<0) return 0; return 1;` | 严格 IDENTICAL |
| `GlobalInstance<ScriptData/Script>::create` ×2 | 外层 if/else + return | ext/full IDENTICAL（48/48） |

`Script::remove_comment` 在 bridge 已是 full IDENTICAL（仅数据地址）。

### 第四批（2026-08-09，严格口径复核 + 逐函数压差）

本次会话水位（`source/toolchain/strict_compare.py` 严格口径，
仅归一化直接跳转/调用目标；ext/full = 额外归一化大绝对地址/assert 行号）：

| 服务 | strict IDENT | strict NEAR | DIFF | full IDENT | full NEAR | MISSING |
|---|---:|---:|---:|---:|---:|---:|
| channel | 594 | 119 | **30**（此前 40） | 699 | 14 | 0 |
| bridge | 735 | 147 | **36**（此前 42） | 856 | 26 | 0 |
| auction | 4096 | 446 | 194 | ~4465 | ~90 | 0 |

本轮主要修复（全部有 ORIG 反汇编证据，详见 `docs/identical_pitfalls.md` §27–36）：

| 树 | 函数 | 修复模式 | 结果 |
|---|---|---|---|
| 两树 | `TDebugTrace::endl/putText/putValue` ×5 | memset 成员数组退化；`int sVar2`；tmp[12] 在前；`m_FormatBuf + mPos`；endl 显式 return | 只剩字符串地址（ext/full IDENT） |
| 两树 | `EpollReactor<TCPUser>::handleEvents` | channel 加 `register`（n_event/i/s）；events 检查改正条件 if/else-if；isToWrite 去 `!`；channel 空闲检查移入循环（**修正原语义 bug**：原源码在循环外无条件 onClose） | channel ext/full IDENT；bridge 只剩 ++ 物化伪影 |
| channel | `CSHA::Transform/AddData/FinalDigest` | 循环递增顺序；函数作用域 i；n 变量声明后置；W 展开单表达式；pDst 局部 + uiT 复用；`register bool bCarry` | Transform 只剩 K 表地址（2305 指令全对齐）；AddData/FinalDigest 只剩寄存器/地址残差 |
| channel | `Script::on_keyval_tag` | 去掉外层 if，裸 `assert(strlen(parent_tag))` | 只剩 assert 行号 |
| bridge | `Hex2Char` / `DNFFLib::get_rand_int` | 正条件 + 参数自增；**修正 LCG 累加顺序语义 bug**（原源码 `(a<<10)^(b<<10)^c` 应为 `((a<<10)^b)<<10^c`） | Hex2Char 严格 IDENTICAL；get_rand_int 语义正确、剩寄存器伪影 |
| 两树 | `TCPUser::onClose` | `if (b) {} else { body }` 空 then 形态（避免 `xor $0x1` 物化） | 只剩 esi/edi 互换 + jmp/nop 伪影 |
| 两树 | `TCPSocket::shutdown` | 补齐丢弃比较语句（ORIG 行为：只比较不调用 ::shutdown） | 差 1 指令（cmp 被工具链消除） |
| channel | `ChannelService::onCS_GET_SCRIPT` | `getScriptFileSize() > (int)nLen`（操作数顺序） | setg/setl 极性对齐 |

工具链不可复现项（§36）：shutdown 的丢弃 cmp、stdout create 的 `_ZnwjPv` 内联、
onClose 尾部 jmp/nop、get_server_section 的 return-false 块布局、setcc 寄存器选择。
均为语义等价，继续压差性价比低。

### 第五批（2026-08-09 续，语义 bug 修复 + 更多对齐）

| 树 | 函数 | 修复模式 | 结果 |
|---|---|---|---|
| channel | `IMethod::Xor` | `*buff++ ^= *chain++;` 单表达式（保留 buff 于 eax） | 只剩数据地址 |
| channel | `CRijndael::Signature` | acSigData[48]→[12]（ORIG memset 0xc） | memset 尺寸对齐，内联/槽位为伪影 |
| channel | `CheckThread::loop` 序言 | nRet/acUser/bFlag 声明序 + 等待循环 bFlag 结构 | 序言对齐，帧布局留待 |
| bridge | `TCPUser::isIdle` | **修正语义 bug**：`(gap<1 && (unsigned)gap<0x124f81)` 对 gap∈[1,0x124f80] 返回错误；ORIG 为 `gap>0→true; (unsigned)gap<=0x124f80→false` | 语义修正（合并 false 块为伪影） |
| bridge | `ChannelScript::ReloadScript` | **修正 printf 丢参 bug**：`printf("ScriptSize...")` 缺 `lSize` | 全对齐（仅地址） |

第五批后水位：channel 28 DIFF（full IDENT 701）、bridge 35 DIFF（full IDENT 857）。
新增坑点记录：`docs/identical_pitfalls.md` §37（64 位比较 Ghidra 条件还原）。

### 第五批续（2026-08-09 同会话收尾）

| 树 | 函数 | 修复模式 | 结果 |
|---|---|---|---|
| bridge | `DNFFLib::Hex2Binary` | while 循环 + `if (!Hex2Char(...)) return false`（内联条件去 ret 局部） | **严格 IDENTICAL** |
| bridge | `DNFFLib::ExplodeString` | pToken 声明在前 + `pEnd = cStr+strlen` 预计算 + `iTokenCnt >= iMax` 操作数序 + `pTmp = pToken+strlen` | 只剩返回载入合并伪影 |
| bridge | `App::load_script` | 尾部 `if (ret == false) return false; return true;` 物化形态 | 只剩格式串地址 |
| bridge | `ChannelService::startup` | 线程指针直接存成员（去命名局部，帧 0x5c→0x3c） | 全对齐（仅地址） |
| bridge | `ChannelService::onCS_GET_GC_INFO` | count 声明前置 + 冗余 `count=0`（ORIG 686 行）+ 第一循环空增量 `iter++; count++;` | 只剩 map 数据地址 |
| bridge | `Script::on_keyval_tag` | 裸 `assert(strlen(parent_tag))`（同 channel） | 只剩 assert 行号 |
| bridge | `DBMgr::Mysql_query` | `return NULL` 直返（去 res=NULL 冗余存） | 只剩 sete 伪影 |
| bridge | `TCPUser::isIdle` | **语义 bug 修复**（见 §37） | 语义正确，块合并伪影 |

最终水位（本会话）：channel **28** DIFF / full IDENT 701；bridge **29** DIFF / full IDENT 863；
auction 194 DIFF（未动，让路 tinyxml）。各服务 strict IDENTICAL：channel 594、bridge 736、
auction 4096，MISSING 全 0。

### 第六批（2026-08-09 续，auction Strings 修复）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `WideString::isuspace` | 去掉 Ghidra `bool bVar1` 局部，直接 return | **严格 IDENTICAL** |
| `WideString::isupunct` | 去 bVar1 + 条件反置 `if (!(排除链)) return true;`（ORIG TRUE 块在前） | **严格 IDENTICAL** |
| channel `TCPSocket::accept` | memcpy 源改直接成员 `&adrs_.sin_addr` | 全对齐（仅日志串地址） |

auction 194→**192** DIFF（isuspace/isupunct 严格一致）。剩余 auction String 函数多为
lea/shl、lea/add 寄存器偏好与 jmp+nop 块布局伪影（§38/39 已记录）。
坑点文档新增 §38（bVar1 局部）、§39（`*4` lea vs shl）。

### 第七批（2026-08-09 续，auction ROI_Category/RandomOption）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `ROI_Category::isEmpty` | 改用自然 64 位比较 `field_0._high_category_key == 0`（gcc 自动 or 合并双字） | **严格 IDENTICAL** |
| `RandomOption::change_option` | `if (A||B) return false; else return true` → `return (A==false) && (B)` 直接表达式（消除二次物化） | 17→11（剩 `and/movzbl` 寄存器序伪影） |
| `GetRandomOptionName` | uVar11 改 register + 三元初始化 | 104→89（剩帧/寄存器偏好） |

auction 192→**191** DIFF。坑点补充：64 位 `==0` 用自然 long long 比较（gcc 出
`or` 合并），不要拆成两个 int 判断；`return (A)&&(B)` 直接表达式避免 if/else 二次物化。

### 第八批（2026-08-09 续，HandlerFor_DB_ 系列 + DNFFileLog）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `insertPackage` | `if (ret == 0){...} return ret` 嵌套改扁平：外层 `if (ret != 0) return ret;`、内层 `if (ret == 0){fetch/get_uint}`、错误路径 `return 2` 直出 eax（不走 ret 局部） | **164/164，仅剩数据地址 → ext/full IDENTICAL** |
| `insertPackageData` | 长度判断改 `len > 0xff`（then 块在前）；分类链改 `x>=0x36b1 && x<=0x36b4` 正向区间（jle/jg 直跳尾部）；`int check_category` 无强转（cmpl 内存直比）；`owner_id != receiver` 去 (int) 强转；`separate_upgrade`/`guid_str` 内联进 set_query（暂存区承接）；postal 段错误路径 `return ret`/`return 2` 直出 | **419/419，仅剩数据地址 → ext/full IDENTICAL** |
| `GetAuctionMainFetchResult` | 嵌套 if 金字塔改扁平早退；`i` 后置自增直传列号（无 col 局部）；声明序 `bool bRet; int i=0;`（bRet@-0xd、i@-0xc）；uniItemAttr 两行改 `(upgrade & 0x1f) | (uniItemAttr & 0xe0)`（操作数序）与 `((seal_cnt & 0x7) << 5)` | 457 vs **460**（剩 2 处 `movb $0,disp` vs `add+movb`、uniItemAttr 双重 and 寄存器序伪影） |
| `onAUCTION_DB_REGIST_ITEM` | 声明序 `db,pContext,expire_time,ret`（反声明序槽位，见 pitfalls §40）；行号表定位 757/758 两行 `name[13]=0`（去 `expire_time=0`）；separate_upgrade/guid_str 内联；`(unsigned char)>>5` 表达式 | 321 vs **322**（剩 `shr %al` vs `sar %eax`、and 暂存 edx 伪影） |
| `onAUCTION_DB_EXPIRE_HISTORY` | separate_upgrade/guid_str 内联进 set_query | 255 vs **256**（剩 shr/sar + ecx 伪影） |
| `onAUCTION_DB_GET_AVERAGE_PRICE` | `updated` 64 位局部声明上移 | 236 vs 234（ORIG 64 位值常驻 ebx:esi，NEW 栈溢出——寄存器分配伪影，见 §45） |
| `CMyFileLog`/`CMyRawFileLog`/`CToolFileLog::operator()` | memset 尺寸：`register size_t n`（CMyFileLog/CToolFileLog 45/45、82/82，仅 edx/ebx 差）；CMyRawFileLog 用字面量（26 vs 27，装载形态差）；`CToolFileLog` 参数按 DWARF 改名 `seq`→`no` | 全部语义一致，剩寄存器/装载伪影 |

累计：auction strict DIFF **189→187**（insertPackage/insertPackageData 出列转 NEAR）；
point 已用同源重建（PayType: Point 保留）。坑点文档新增 §40–§50。

### 第九批（2026-08-09 续，switch 顺序 / sete 物化 / bool 条件极性）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `onGAME_DB_SEND_PACKAGE_BY_EXPIRE` | 行号表推出 ORIG switch case 顺序 **2,1,3,0**（非源码 1,0,2,3）→ 重排 case 体；case 0 的 `b_exist_buyer == 0` 改正条件 `if (b_exist_buyer)`（分支互换，避免 bool `==0` 的 xor 物化） | **352/352，仅剩数据地址 → ext/full IDENTICAL** |
| `onAUCTION_DB_GET_ROI_AVERAGE_PRICE` | 循环 10 处 get_* 检查改 `if ((ret = get_X()) == 0)`（赋值在条件内 → cmpl+sete+test+jne 物化，先赋值再判是直 je）；`int bRet` 实验后回退 `bool bRet`（fetch 走 xor 形态） | 409 vs **421**（sete 全对齐；剩 lea vs add+mov、基址+`(%eax)` 寻址伪影，见 §51） |

累计：auction strict DIFF **187→186**；point 同源重建后两函数同样对齐
（SEND_PACKAGE_BY_EXPIRE 352/352、GET_ROI 同状态）。坑点文档新增 §51–§53。

### 第十批（2026-08-09 续，GA/GP handler 起步）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `HandlerFor_GA_::onAUCTION_REGIST_GA` | pPool 命名局部内联进 createCharacter（ORIG 的 getCommonDataPool 结果直喂 this，无栈槽） | 117→**115** vs 111（剩调用结果临时溢出 +2 与槽位差） |

GA/GP 其余 26 个 handler 结构相似（IsGoldServer 早退 + pPool/pSendPool 内联 +
PCK 构造 + SendMessage），逐个压差中；多数剩 1–6 条寄存器/临时槽伪影。

### stun 数据地址归一化修复（2026-08-08）
stun 是 64 位 ET_EXEC，代码/数据地址在 0x40xxxx 区间（6 位十六进制），原扩展归一化
（7-8 位）无法覆盖 → 增加 `0x40[0-9a-f]{4,6}` 规则（刻意不收宽到 0x4xxxxxxx，
避免误伤 32 位 `0x4c4d58` 等魔数常量）。
修复后 stun：strict-IDENT 3 / **ext-IDENT 7** / NEAR 12 / DIFF 1。
其余 12 NEAR + 1 DIFF 为 4.1.2 -O0 栈槽/寄存器差异（逐函数高成本）。

### 当前各服务（full 口径）
| 服务 | full IDENTICAL | NEAR | DIFF |
|---|---:|---:|---:|
| stun | ~10（含 ext-IDENT 7） | ~12 | 1 |
| channel | **683** | 13 | **47** |
| bridge | **838** | 26 | **54** |
| auction | ~4465 | 77 | 194 |
| point | 同 auction | | |

### 2026-08-09 继续压差（strict 口径新基线）
| 服务 | strict IDENTICAL | strict NEAR | strict DIFF | 说明 |
|---|---:|---:|---:|---|
| channel | 594 | 109 | **40** | full 690/13/40 |
| bridge | 734 | 139 | **45** | full 847/26/45 |
| auction | 4096 | 446 | **194** | full 4465/77/194（tinyxml 稳定后重建） |

本轮 channel/bridge 新增严格 IDENTICAL 函数：
- **TCircularQueueBuffer\<655360\>** ×5（push/pop/popCopy/peekCopy/isPopStraight）：
  成功路径 fall-through + 错误 return 放尾部（channel）；bridge 侧 push 用 unsigned jae、
  isPopStraight 用 switch-case 0 + 日志尾部。
- **Socket 家族**：setOptLinger/ReuseAdrs/ResizeSendBuf/ResizeRecvBuf、UDPSocket
  close/send/recv 严格 IDENTICAL；listen/bind/send/recv/connect ext IDENTICAL。
- **CMsgCell::PAD**（迁移到 ChannelService.cpp 后严格 IDENTICAL —— TU 归属影响帧布局，见
  identical_pitfalls.md §13）。
- **isIdle / isIdleCheckTime**（64 位比较形态，见 §15）。
- **Script::get_key_val / UDPThread::logError / TCPAcceptThread::lockPopAcceptedUser**。
- **bridge**：TCircularQueueBuffer ×5（pop/popCopy/peekCopy/push 严格、isPopStraight ext）。

### 2026-08-09 会话续（模式驱动修复）
- **channel 新增**：`Script::on_parent_tag`（`if (s == NULL) return false;` 直返）、
  `Script::parse_channel_script`（`if (!ret)` xor 形态 + 直返）、`Script::load`
  （`for(;;)+if(!ret)break` 循环）、`App::load_script`（成员直访 + 删多余 printf 实参）。
- **bridge 新增**：`Script::get_key_val`（switch+内联 strlen）、`Script::load`、
  `Script::on_parent_tag`、`TCPSocket::recv/send/connect`、`UDPSocket::send/recv/bind`
  （errno 分支 switch/直返/len 传参）。
- 归档新增：`Script::get_server_section`/`get_db_section`（块放置不可复现）、
  `IMethod::Xor`（循环寄存器分配）、`TCPSocket::shutdown`（残留 cmp）、
  `TMemoryPoolStatic::startup`（EH landing 布局）、CSHA 家族（大型寄存器差异）。

### 2026-08-09 auction 批次
- **新增 full IDENTICAL**：`StringData::decRef`（`__sync_sub_and_fetch(&x,1)` 复现
  neg+xadd 展开，见 pitfalls §21）、`nsl::UDPSocket::recv`（`int fromLen` +
  `(socklen_t*)&fromLen`）。
- 分析并归档：`TCPSocket::send`（setg 寄存器物化不可复现）、`NumberToString`/`Char2Hex`
  （lea/add 与查表寄存器）、`CharString/WideString::assign`（jmp+nop 对齐产物）、
  `HandlerFor_TE_::onTIME_AUCTION_TRY_SHUTDOWN`（局部槽位序，见 §22）。

### 2026-08-09 channel TCPUser 批次
- **新增 ext IDENTICAL**：`TCPUser::onWrite_`（368/368）、`TCPUser::send`（124/124）：
  守卫反置（`< 0` 而非 `> -1` 包裹）、`> 0x9ffff` 常量、success-first 重构
  `nSize<1`/`nSent<1` 双分支（见 pitfalls §24）。
- **`TCPUser::onWrite2Buffer`（171/171）ext IDENTICAL**：内联 getHandle、容量守卫、
  成功路径 `return nRet;`（ORIG 返回 push 结果而非 0）。
- `TCPUser::onClose` 日志链内联后寄存器形态命中（§25），剩 esi/edi 互换与
  `== false` xor 物化残差。
- `onRead_`（449/451，27 区）与 `onClose` 待续。

归档（语义等价、工具链不可复现/纯寄存器形态）：
- TCPSocket::shutdown（残留 cmp，7/6 指令）；TDebugTrace putText/putValue（lea/add 寄存器）；
  Script::on_keyval_tag（add/lea 寻址 + assert 行号）。

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
