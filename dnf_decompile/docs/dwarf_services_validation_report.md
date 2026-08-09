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
| auction（最新，见第五十批） | 4737 | 4151 | 448 | 137 | 4541 | 58 |
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

### 第十一批（2026-08-09 续，onAUCTION_DB_GET_REGISTED_ITEM 大函数）

| 修复模式 | 结果 |
|---|---|
| `if (ret)` → `if ((ret = call()) != 0)`（AddAvatarEmblem/Expansion 两处，setne 物化，§54） | setne 对齐 |
| `item_category_temp` 改 `int`（unsigned 会 arg-first/ebx，int 是 this-first/edx，§55） | 最后一个助记符差异消除 |
| 两个发送循环 `pPool` 内联进 getSendMessage（§56） | -4 指令 |
| `register TCPUser* pTCPUser`（§57） | 704→702，ebx 常驻 |
| pArea 声明上移实验后回退（块级槽位为伪影，§58 待补） | — |

结果：**702/702 助记符完全一致（DIFF → NEAR）**，剩余槽位偏移（pck/iter/pArea
±4）、帧大小（0x15c vs 0x16c）与数据地址。坑点文档新增 §54–§57。

### 第十二批（2026-08-09 续，StatisticsCollector / GA / AvatarVariation）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `StData::isValidErrorNo` | 条件改正向区间 `if (err>=0 && err<=0x37) return true; return false;`（js/jg 直跳尾部 false 块） | **严格 IDENTICAL（11/11 零差异）** |
| `IncTryCnt`/`IncFailCnt` | 无法对齐：ORIG 该 TU 用 becauseCnt[57]（236B），DWARF 与多数 TU 为 [55]（228B）——ORIG 双版本头内部矛盾，按用户规则保留 DWARF 布局 | 记录为不可同时满足 |
| `onAUCTION_BUY_ITEM_APIECE_GA` | `register int limit`（ebx）；条件反置 `limit <= mQueueSize`（setcc 物化、0x31 块 fall-through）；pPck/ptr_data 声明序；两次发送 pPool 内联 | 237/241（剩 setge-vs-setle RTL 方向、getCommonDataPool 结果溢出 ×2 伪影） |
| `importAvatarColorVariation` | fopen 检查「赋值在条件内」实验后回退（sete 对齐但循环多 2 条 jmp+nop，净变差） | 66/67（fopen sete 与循环边为不可复现伪影） |

累计：auction strict **4101 IDENTICAL / 451 NEAR / 184 DIFF**（本轮起点 186）。
point 已随头文件改动强制重建（build-point.sh 不检查头依赖，需 touch 源文件触发）。

### 第十三批（2026-08-09 续，nsl::EpollReactor 系列）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `EpollReactor::handleEvents` | 外层 if/else 块互换 + 条件反置（accept 块 fall-through）；`if (!accept()) {destroy} else {success}`（xor 物化）；事件掩码正向 `!=0`（0xf5/0x103 块 fall-through）；`createTCPSocket` 结果内联进 setSocket；`register unsigned int count`（ebx）；`s = (TCPUser*)events_[i].data.ptr` 字段直访（位移折叠） | 261 vs **257**（剩尾部 ORIG 2 组 `jmp;nop` 块布局伪影） |
| `EpollReactor::getNativeEventFilter` | `t` 从 0 起、条件满足 `\|=`（movl $0 + orl 形态） | **严格 IDENTICAL（17/17）** |
| `EpollReactor::registHandle/addConnectedUser/registListenHandle` | 槽位平移（ev@-0x14 vs -0x18）+ 参数暂存序伪影 | 59/59、43/43、38/38（同数） |
| `EpollReactor::shutdown` | 尾部 jmp+nop 伪影 | 25/23 |

注意：Reactor.h 是模板头，改后需 touch 实际实例化 TU（TCPThread/TActiveConnect）
强制重编；弱符号 getNativeEventFilter 由链接器挑选实例，两个 TU 都要更新。

### 第十四批（2026-08-09 续，RecvBuffer / REGIST_CANCEL_GA / TimerThread）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `RecvBuffer::ClearUsedMsgs` | `register unsigned int idLo/idHi/sz`（ebx/esi/edi 常驻） | 137 vs 133（剩循环 cmp 极性、return 物化、args 暂存伪影） |
| `RecvBuffer::Parse` | 合并 parsableLength/lenCheck 双局部；`if ((pMessage = createOrderPool()) == NULL)`（sete 物化）；bOversize 单表达式初始化 | 236 vs **241**（剩 lenCheck cmpl 形态、lea/add、jle/jge、bool 物化位置、ident 64 位暂存伪影） |
| `onAUCTION_REGIST_CANCEL_GA` | pPool 内联；`if (return_code != 0) {失败} else {成功}`（else fall-through） | 172 vs 174（剩 64 位 auction_id 预暂存、return_code=0 位置伪影） |
| `TimerThread::TimerThread` | vtable 存储位置（基类后 vs 成员后）实验分析 | 63/63，vtable 存储顺序不可控，记录 |

累计：auction strict **4102/451/183**。坑点文档新增 §63–§64。

### DWARF 参数名审计（2026-08-09，目标要求「变量名遵守 DWARF」）

- 遍历 auction 全部 CU 的具体 subprogram 及其 DW_AT_specification 声明，
  提取存在名字的形式参数并与源码比对：
  - `HandlerFor_DB_` 系列（insertPackage/insertPackageData/changeAvatarOwner/
    GetAuctionMainFetchResult/各 on*_DB_ handler）参数名全部一致；
  - nsl::DBConnection（get_str/get_int/get_uint/get_ulong/get_short 等）
    的 `col0/buf/buf_size/v` 与源码一致；
  - 其余 CU（TCPUser/Auction/Search/AuctionDictionary/StatisticsCollector 等）
    DWARF 具体 DIE 与声明 DIE 均未携带参数名（头文件声明为无名参数），
    无冲突可言；
  - 此前发现的唯一不一致（CToolFileLog::operator() 的 `seq`→`no`）已修复。
- 结论：凡 DWARF 有名字的参数，源码均与其一致；类布局此前已按 DWARF
  校验（StData 228B、DBTR_HEADER 0x15、EpollReactor 成员等）。

### 第十五批（2026-08-09 续，GA handler 批量 pPool 内联）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| 9 个 GA handler 的单次/双次 `pPool->getSendMessage` 全部内联 getCommonDataPool | §56 模式批量应用（含两处双发送的第二处） | BIDDING 269/271（原 275）、ASK_AVERAGE 237/253（原 255）、BUY_ITEM_APIECE **237/237**（原 241）、REGIST_CANCEL **171/172**（原 174） |
| `onAUCTION_REGIST_CANCEL_GA` | 尾部 `return_code=0; return return_code` → 直接 `return 0`（mov $0 直出） | 剩 1 条 64 位 auction_id 预暂存伪影（§45） |
| `onAUCTION_BUY_ITEM_APIECE_GA` | 此前 register limit/条件反置等 | 剩 1 条 setle-vs-setge（§59，不可复现） |

批量内联注意：双发送站点要连第二处一起内联，否则 pPool 未定义编译失败。

### 第十六批（2026-08-09 续，GP handler 批量 + 块极性/表达式形态）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| 11 个 GP handler 的 pPool 批量内联（含 2 个双发送站点第二处） | §56 | REGIST_CANCEL_GP **仅剩数据地址 → ext/full IDENTICAL**；ASK_OWNER_IS_VIP/ASK_AVERAGE/CHECK_READY 等转 NEAR；**全量 DIFF 183→179** |
| `onAUCTION_BIDDING_GP` | `if (return_code == 0) {success} else {fail}`（success fall-through） | 240/240，仅剩 setle/setge（§59） |
| `onAUCTION_MY_BIDDING_INFO_GP` | setSize 表达式改 `0x1d69 - (0x3c - n) * 0x7d` 加中间局部（防前端常量分发折叠） | 180 vs 181（剩 1 处寄存器选择 + 常量分发伪影，§66） |

坑点新增 §66：`0x1d69 - X*0x7d` 会被 cc1plus_446 前端分发折叠为
`X*(-0x7d) + 0x1d69`（ORIG 4.4.6-3 不折叠）；中间局部只能部分阻止。

### 第十七批（2026-08-09 续，GA/GP limit 反置 + return 0 + register）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `onAUCTION_BIDDING_GA` | register limit + 条件反置（0x31 fall-through）+ `temp_result_price` 声明不初始化稍后赋值 + 尾部直接 `return 0` | **269/269，仅剩 setle/setge（§59）** |
| `onAUCTION_ASK_REGISTED_ITEM_NUM_GA` | register limit + 条件反置（-1 块 fall-through）+ 尾部 `return 0` | **163/163，仅剩 setle/setge** |
| `onAUCTION_REGIST_ITEM_GA` / `ASK_REGISTED_ITEM_NUM_GA` 尾部 | `return_code=0; return return_code` → `return 0` | REGIST_ITEM 372/374（剩寄存器暂存伪影） |
| `onAUCTION_BIDDING_GP` / `ASK_REGISTED_ITEM_NUM_GP` | `register int maxQueue`（ebx 常驻） | **240/240、130/130，各仅剩 setle/setge** |

全量 DIFF 维持 **179**：本轮 6 个函数全部收敛到「仅剩 setle/setge（§59）或
寄存器暂存」的单条伪影状态，但 setle/setge 为 mnemonic 级差异，分类不变。

### 第十八批（2026-08-09 续，Auction 分类/校验函数）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `Auction::IsAvatarCategory` | 6 个区间 if 改单条 OR 链（共享 return true 块，jle 逐区间跳过） | **严格 IDENTICAL（31/31）** |
| `Auction::isEmblemAvatar` | 同 OR 链（4 区间） | **严格 IDENTICAL（23/23）** |
| `Auction::isValidEmblemAvatar` | switch 值改 `(category % 10) - 2`（跳表 base-2 8 项）；`category = ... - 2` 重赋参数槽；外层 `if (== 0) return true`（then 在 fall-through） | **63/63，仅剩跳表数据地址 → ext/full IDENTICAL** |
| `Auction::GetAvatarColorName` | `iVar2==1` 改调用内联比较（cmp+sete） | 剩 STL map 迭代器比较形态差异 |

坑点新增 §67：多区间判定的共享 return 块——多条 `if (A&&B) return true;`
各自物化返回；单条 OR 链合并为共享 return-true（jle 跳过 + 末段跳共享块）。

### 第十九批（2026-08-09 续，Auction 继续）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `Auction::IsStackableCategory`（头文件内联） | 4 区间改单条 OR 链 | **严格 IDENTICAL（26/26）** |
| `Auction::Bidding` | `GetErrorStr(0)`→`GetErrorStr(return_code)`（局部直传）；`return_code=0x25`→`return 0x25`（eax 直出） | **57/57，仅剩字符串地址 → ext/full IDENTICAL** |
| `Auction::SearchByCategory` | 分析：仅剩尾部 `jmp; mov $0` 死块伪影 | 79/81（单条不可复现） |

本轮累计：**179 → 174 DIFF**（IsAvatarCategory/isEmblemAvatar 严格、
isValidEmblemAvatar/Bidding ext、IsStackableCategory 严格）。

### 第二十批（2026-08-09 续，Search）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `Search::FindByItem` | 尾部 `if (result == 0) {stores; result=0;} return result` 改 `if (result != 0) return result; stores; return 0`（return 块 fall-through、stores 跳转目标） | **144/144，仅剩数据地址 → ext/full IDENTICAL** |
| `Search::FindByCategory` | 同尾部尝试后回退（ORIG 中段 ja/jbe 极性随之翻转，结构不同） | 保持原状（~4 条暂存/跳转伪影） |
| `Search::GetAuctionItemInfo` | `result=0x24/0` 改直接 return 后回退（isEmpty 的 xor 物化不可复现，计数反增） | 保持原状 |

坑点新增 §68：尾部 `if (result==0){A; result=0;} return result;` 改早退
`if (result!=0) return result; A; return 0;` 可对齐共享返回布局；但相邻 if/else
极性会随尾布局联动，整函数评估后再改。

### 第二十一批（2026-08-09 续，AuctionDictionary）

| 函数 | 修复模式 | 结果 |
|---|---|---|
| `AuctionDictionary::BuyItemApiece` | 尾部 `if (A&&B){大块} else return 0x2e` 改 `if (!A\|\|!B) return 0x2e; 大块`（else 早退、大块 fall-through） | **严格 IDENTICAL（147/147）** |
| `AuctionDictionary::Purchase` | commission_rate 提取为局部（FP 暂存对齐） | 340 vs 344（原 346；剩 FP 乘法形态、sete 物化、movzwl 暂存伪影） |

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

### 第二十二批（2026-08-09 上午，Search/AuctionDictionary/Auction 模式驱动修复）

最新全量（`/tmp/dwarf_validate/fast_auc.txt`，4737 项目函数）：
**严格 4109 / 462 / 165，扩展 4477 / 94 / 165，full 4491 / 80 / 165**。
（基线 4106/458/172；DIFF −7 且这 7 个全部落成严格 IDENTICAL。）

#### 本批严格 IDENTICAL 新增（+7）
| 函数 | 关键模式 |
|---|---|
| Search::GetRegisteredInfo | §68 直接 return 消除 result 物化 + §73 声明顺序（67/67） |
| Search::SetOperateParameter | §70 三目包整个表达式（分支内重载+公共 store） |
| Search::SetSearchResult | §72 循环内 `break` 共享尾部 return |
| Search::SearchByItemIdUpgrade | §72 同 + §73 声明顺序 |
| Search::Insert | §78 内联 GetItemInfo（删 pItemInfo 局部） |
| Auction::GetAvatarColorName | §77 tempMap 指针 + NULL 检查照抄 |
| Auction::ProcessMostRecentExpireItem | §72 系统循环 break + 单出口 return error_code |

#### 已对齐到「仅数据地址/1-2 条伪影」（严格 NEAR / 扩展 IDENTICAL）
- Search::Delete：`result = result + f()`（§75）+ 内联 GetItemInfo/SetOperateParameter 实参。
- Search::GetAuctionItemInfo：外层 if/else 早退 + 嵌套 if（§71）+ 内联 getter 实参；
  剩 sort end 的 `add $0x16` 折叠（§80）。
- Search::ROI_SetSearchResult：声明顺序；剩尾部 nop。
- AuctionDictionary::GetRegistedItemInfo / GetBiddingInfo：§76 `iter != end` 包 body、
  §73 声明顺序、§74 ORIG 死 error_code 照抄（永远 return 0）；
  剩 `mov mem,%eax; mov %eax,%edx` 比较伪影（§81）与 0x24 块位置。
- AuctionDictionary::Purchase：删 dVar9/sVar7/命名 getter 局部（§78）；
  剩 FP 暂存槽位（§79）与 sort 折叠（§80）。
- AuctionDictionary::ProcessMostRecentExpireItem：剩 `mov $0x24` 块位置伪影。
- Auction::PrintDnfItemInfo：`uniItemAttr >> 5` 由「先提升 int 再移（sar，值 ≥0x80
  时结果错误）」改为 `((unsigned int)itemInfo.uniItemAttr) >> 5`（shr）——
  **真实语义修复**（对齐 ORIG 的 `shr $0x5,%al`）；仍剩 sprintf 多实参的
  寄存器分配/帧差（0x4c vs 0x5c）。

#### 归档/未动（语义等价）
- StatisticsCollector IncTryCnt/IncFailCnt：StData 双版本头矛盾（DWARF 228B vs
  代码 0xec 步长 236B）——按 DWARF 保留，imul 0xe4 vs 0xec 不可同时满足。
- registFuncMap（Inter/GA/GP）：PMF 常量装载顺序（`mov $addr,%edx; mov %edx,mem`
  vs 直接 `movl $addr,mem`），函数地址本身是跨二进制布局产物。
- WideString/CharString 族：`lea 0x0(,%eax,4)` vs `shl $0x2`（§39 类）、
  assign 尾部 jmp+nop 对齐产物。
- GetRandomOptionName / NumberToString / Char2Hex：寄存器/lea 折叠伪影。

#### 坑点文档同步
`docs/identical_pitfalls.md` 新增 §68–§82（直接 return、块布局、三目包表达式、
嵌套 if 替代 &&、break 共享尾部、DWARF 声明顺序、死变量照抄、+= 展开、
iter!=end 包 body、tempMap 照抄、多余局部删帧、FP 暂存、sort 折叠、
比较载入伪影、全量比对期间禁重编）。

### 第二十三批（2026-08-09 续，DWARF 命名合规 + PutDBSendPackageByExpire）

- **CFileLogWriter::writeLog / writeRawLog**：参数/局部全部按 DWARF 重命名
  （fileName/logMsg；auto1/currTime/result/currtm/args/newTempFileName/
  newFileName/itr/prevtime/result2/prevtm/prevTempFileName/prevFileName/
  prev_itr/newLog）；删 oldLog/inserted 局部改内联（`delete prev_itr->second;`
  `logs.insert(...).second`）→ 帧 0x2ec→0x2dc 与 ORIG 对齐；剩格式串地址与
  EH landing 寄存器态伪影。
- **CMyFileLog / CMyRawFileLog / CToolFileLog::operator()**：按 DWARF 重命名
  （filename/format；buff/argsbuff/fbuff/args）；剩 `mov $0x7000,%ebx` vs
  `%edx` 寄存器分配伪影（源码注释已归档）。
- **AuctionDictionary::PutDBSendPackageByExpire**：
  - `send_to_buyer.temp_item_id` 改读 `send_to_buyer.item_info.item_id`
    （ORIG 从包内字段拷贝，非 pAucDicData 直读）；
  - `_reg_roi_category_key.field_0` 的两次 32 位判断改单条 64 位
    `*(long long*)&field_0`（or/test 形态，GetRandomOptionName 守卫与两个
    三目共 3 处）；
  - 内联 first_color_name/pcVar4/uVar2/second_color_name/pcVar6/pPool 局部。
  266 vs 267 指令，剩 §39 add 折叠与块序伪影。
- **AvatarVariation::Parse_Table**：补 DWARF 死局部 `AVATAR_COLOR_SCRIPT = 5`
  （§84：声明保名、调用处保持字面量 5）；帧 0x60→0x70 对齐；剩 pcColumn_Arg
  槽位 4B 差与 && 求值顺序伪影。
- **nsl::TimerThread::loop**：`size`/`remain` 非 DWARF 局部内联（printf/sleep
  直写 `0x14 - (int)elapsedTime`）；命名对齐 temp/startTime/endTime/elapsedTime；
  剩 endTime 载入的块序伪影与格式串地址。

### 第二十四批（2026-08-09 续，makeSuccessfulBid / Bidding 命名合规）

- **AuctionDictionary::makeSuccessfulBid**（1409 vs 1422 指令，原 1484）：
  - 拆出 DWARF 局部 `money`（1564，买受方分支成交价，用于 commission/信件
    snprintf）与 `price`（1504，-0x84，快照后用于 AddItemAveragePrice）——
    ORIG 是**两个局部**，原源码误用一个 price 复用；
  - `commission` 声明位置从函数顶移到 else 内（DWARF 1554）；
  - 内联 uVar3/uVar15/pSVar8/pSVar8b/pacVar9/pcVar16/pacVar12/pcVar14/
    name1/name2/pPool/price_00/sVar18；
  - `_reg_roi_category_key.field_0` 双 32 位判断改单条 64 位（3 处）；
  - delete-item 段包成独立块（pNewCell 作用域，与 DWARF 词法块一致）；
  - pMsg/pNewCell → pNewMsg/pNewCell（DWARF 2068/2069、2225/2226）。
  剩 FP 暂存槽位（-0x7e0/-0x7d8/-0x7d0/-0x7c8，ORIG 的 commission 运算暂存）
  与帧差 0x20、~13 条寄存器/折叠伪影。
- **AuctionDictionary::Bidding**（541 vs 546，原帧 0x2c4→0x2b4）：
  - 内联 pSVar9/pacVar10/ptVar11/pPool/pPool2；`item_category`→DWARF `category`；
    `pMsg2/pNewCell2`→`pNewMsg/pNewCell`；GetRandomOptionName 守卫改 64 位比较。
  剩余差异为声明顺序槽位与寄存器分配伪影。

注：本批均为命名合规/语义修复；严格计数未变（4109/462/165），因这些函数剩余
差异是 §39/§81/§84 类不可复现伪影（数据地址、lea/add 折叠、参数求值顺序、
EH landing 寄存器态），助记符序列仍有出入 → 仍属 DIFF 而非 NEAR。

### 第二十五批（2026-08-09 续，RegistItem / RegistCancel 收尾）

最新全量：**严格 4109 / 463 / 164，扩展 4478 / 94 / 164，full 4492 / 80 / 164**
（DIFF 165→164，ext/full IDENTICAL +1）。

- **AuctionDictionary::RegistItem**：**573/573 指令逐条对齐** → 严格 NEAR /
  扩展+full IDENTICAL。尾部 Insert 实参全内联（getter 直传 + `upgrade != 0`
  自动复现 ORIG 的 `setne` 暂存形态）；`IsStackableCategory && add_info>1`
  的 && 物化改嵌套 if（§71）。仅剩 SENDER_NPC_NAME 数据地址（§EXT 归一化）。
- **AuctionDictionary::RegistCancel**：**652/652 指令对齐**（仍 DIFF，槽位布局）：
  三处 `category`/`item_category` 按 DWARF 分名；pNewMsg/pNewCell 段包独立
  词法块（避免与 dbtr_history 的 pNewCell 重声明）；pSVar9/pacVar10/ptVar13/
  pPool 内联 + 64 位 field_0 检查（§86）。
- **Auction::RegistItem**（包装函数，387 vs 381）：内联 pItemInfo（DWARF 无此
  局部）、itemUpgradeValue/itemId；`db_loaded` 改 `(GetPayType()==POINT) && !isLoad`
  形态；保留 DWARF 的 itemRefineValue（ORIG 经 esi 传参，不可内联 0）。
  剩 `if (db_loaded)` 的槽位往返与 `price/AvePrice < 0.5` 的 FP 暂存形态伪影。
- Bidding / makeSuccessfulBid 命名合规已完成（§85），剩 FP 暂存/槽位伪影。

坑点文档新增 §86（RegistItem 的 && 嵌套与 setne 暂存、RegistCancel 的
pNewCell 词法块作用域）。

### 第二十六批（2026-08-09 续，WorkThread 命名合规）

- **nsl::WorkThread::loop**：按 DWARF 重命名
  （`local_1c`→`CompressLen`、`err`→`return_code`、`pInterMessage`→`pMsg`、
  `dataType`→`DataType`）；`switch (recvMessage->mMsgType)` 直用字段
  （去 msgType 命名局部，§65）；内联 pWorkThread。剩余为槽位偏移（约 0x20
  平移）与 nop 伪影，指令形态与 ORIG 一致。
- **nsl::WorkThread::PushTransaction / PopTransaction**：`u`/`msg` 命名已与
  DWARF（150/275）一致，无需改动。

### 第二十七批（2026-08-09 续，HandlerFor_GA_/GP_ 批量命名）

- HandlerFor_GA_ / HandlerFor_GP_JPN 全部 42 处 `pNewMsg`/`pNewCell` 批量改
  `msg`/`cell`（GA/GP DWARF 统一为 msg/cell，如 MY_REGISTED_ITEM_INFO 1395/1396、
  MY_BIDDING_INFO 1473/1474、GP 1260/1261）。
- HandlerFor_DB_ 保留 `pNewMsg`/`pNewCell`（DB DWARF 用此名，682/683、703/704），
  未误改。
- 嵌套 DWARF 块内 `pItemInfo`/`item_category` 为合规局部（§86 教训：内联会
  造成重复 GetItemInfo 调用）——回归保留。

### 第二十八批（2026-08-09 续，HandlerFor_DB_）

- **onAUCTION_DB_GET_AVERAGE_PRICE**：**236/236 指令对齐** → 严格 NEAR。
  - 内联非 DWARF 的 `updated` 局部（getAffectedRowCount 直喂 sysLog）；
  - 循环内 4 处 `ret = get_*(); if (ret == 0)` 改
    `if ((ret = get_*()) == 0)`（§54 赋值在条件内 → ORIG 的 sete 物化），
    指令数 228→236 补回 8 条。
  剩 `_temp_roi_average` 槽位 3B 差（-0x48 vs -0x45）与数据地址。
- **onAUCTION_DB_GET_ROI_AVERAGE_PRICE**：已用赋值在条件内形态；剩余 12 条为
  §39 lea/add 折叠（`lea 0x15(%eax),%edx` vs `add $0x15` 拆分）。

### 第二十九批（2026-08-09 续，DB 处理器 shr 语义修复）

- **onAUCTION_DB_EXPIRE_HISTORY / onAUCTION_DB_REGIST_ITEM**：两处
  `(unsigned int)(uniItemAttr >> 5)` → `((unsigned int)uniItemAttr) >> 5`
  （§83：先提升 int 再移会发 sar，≥0x80 时结果错误；ORIG 是 `shr $0x5,%al`）。
  语义已对齐；剩 8 位 vs 32 位移位调度伪影（各 +2 条 mov，§81 类，不可复现）。
- 全库 grep 确认无其它 `uniItemAttr >> 5` 残留（仅 PrintDnfItemInfo 与上述两处，
  均已修复）。

### 第三十批（2026-08-09 续，EpollReactor）

- **addConnectedUser**：内联非 DWARF 的 `pcVar4`（`isServerUser ? "true":"false"`
  直喂 sysLog）→ **43/43 指令对齐，mnemonic 相等 → 严格 NEAR**（剩 "true"/"false"
  与格式串数据地址）。
- **registHandle**：内联非 DWARF 的 `iResult`（`epoll_ctl(...) < 0` 直判 +
  显式 else return）→ **59/59 指令对齐**；剩 ev 槽位 4B（-0x14 vs -0x18）与
  `< 0` 检查形态（ORIG `shr $0x1f; test` vs 本工具链 `cmpl $0; jns`，§53 类）。
- registListenHandle / shutdown：剩槽位偏移与尾部 nop 伪影。

### 第三十一批（2026-08-09 续，TCPUser 语义修复）

- **TCPUser::onPassiveClose**：**真实语义修复**——ORIG 是
  `if (bDisconnected_ != false)`（已断连才走 destroy/发送检查），原源码误写
  `== false`（未断连才清理，逻辑反了）。反汇编追踪：ORIG `test; je return-true`
  （bDisconnected_==0 直返 true，销毁块在其后）。修正后 **102/102 指令对齐**。
  同时内联非 DWARF 的 bBinded/bSync/bDisc/bAbout 局部（直喂 sysLog）。
- **TCPUser::onActiveClose**：内联 8 个非 DWARF 局部（getter 直喂 sysLog/
  printf），`bool bDebug` 改 `if (ddebug++ <= 0x13)`（ORIG 后置自增+setle 物化）→
  帧 0x68→0x4c 对齐，121 vs 120（剩 return-true 块放置伪影，§61 类）。

### 第三十二批（2026-08-09 续，nsl::GetErrorStr）

- **nsl::GetErrorStr**：**54/54 指令逐条对齐 → 严格 NEAR，扩展+full IDENTICAL**。
  未命中路径 `it = find(0xffffffff); return it->second.c_str();` 改
  `return find(0xffffffff)->second.c_str();`（ORIG 用独立临时 -0x10 直取，
  不做 it 复制；原写法多一次迭代器拷贝 + 帧 +0x10）。

### 第三十三批（2026-08-09 续，TCPDispatcher / ServiceFactory）

- **nsl::TCPDispatcher::dispatch**：内联非 DWARF 的 adrs/b0-b3（getPeerAdrs()[i]
  直喂 sysLog，同 onActiveClose 模式）→ 帧 0x6c→0x5c 对齐；剩
  `cmpl $0,mem` vs `mov;test` 装载形态（167 vs 169，§81 类）。
- **nsl::ServiceFactory::startup**：network_iter/db_iter/inter_iter 按 DWARF 统一
  命名 `iter`（三个独立词法块）；`-1 < ret` 改 `ret > -1`（RTL 方向尝试，未复现
  ORIG 的 `shr $0x1f` 形态）；p*Dispatcher 保留命名局部+throw() 别名 ctor
  （试过 `new` 内联会引入 EH pads +24 条，已还原）——帧 0x5c vs 0x4c（3 个
  命名局部 12B），491 vs 494 指令。

### 第三十四批（2026-08-09 续，GA 处理器声明顺序）

- HandlerFor_GA_::onAUCTION_MY_BIDDING_INFO_GA 等：局部声明顺序按 DWARF
  decl_line 调整（return_code 1412 → packet 1424 → packet_array_size 1425 →
  pPck 1427），命名合规达成；代码计数不变（221 vs 214，剩余为 ebx/edx
  寄存器分配与 packet_array_size 初始化块位伪影，§81/§61 类）。

### 第三十五批（2026-08-09 续，NSLDBThread::loop）

- nsl::NSLDBThread::loop：pMsg 声明提到 pDbDispatcher 前（DWARF 115<117），
  内联非 DWARF 的 pDbTr（GetDBTr() 直链到 do-while 条件与 mbWillDelete=true）
  → 49 vs 48 指令（剩 1 条 nop 对齐与 4B 槽位差，§81 类）。

### 第三十六批（2026-08-09 续，HandlerFor_TE_）

- **onTIME_AUCTION_TRY_SHUTDOWN**：按 DWARF 重命名
  `result`→`return_code`（240）、`pSession`→`pCharacter`（275）；内联非 DWARF
  的 `u`（`getSendMessage(pCharacter->getTCPUser())` 直链）→ 145 vs 142
  指令（剩 pendingWorkNumSum 累加形态与槽位差）。
- **onTIME_AUCTION_EXPIRE_EVENT_CHECK**：修复既有编译级 bug——声明
  `return_code` 但误用 `result`（ORIG DWARF 为 return_code 157），现可编译。

### 第三十七批（2026-08-09 续，伪影还原：数组类型形态）

- **首次完整还原 §39 类「伪影」**：`NumberToString(unsigned)` 22/22、
  `NumberToString(unsigned long long)` 29/29 指令逐条对齐（仅剩 rodata 格式串
  地址，ext/full 口径归一化 → 扩展 IDENTICAL）。
- 根因：ORIG DWARF 中 `gNumberToStringBuffer` 类型为 `char[8][0x40]`
  （subrange 7/63），源码曾写成 `char[0x200]` + `&buf[index * 0x40]`，导致
  地址 PLUS 以比例寄存器为目的地（`add %eax,%edx`）；改回二维数组 + 自然下标
  `gNumberToStringBuffer[index]` 后以基址寄存器为目的地（`lea`），与 ORIG 一致。
- 判据：读 ORIG DWARF 变量类型的 subrange 链；数组形态不符既是机器码伪影的
  来源，也违反「类型/字段严格照 DWARF」的硬性要求，必须修。
- 全量排查：161 个 DIFF 中 O-scale 9 个（裸乘 `*4`，`WideString` assign/concat/
  insert/remove/trimLeft/C2，方向随函数反转，判工具链调度伪影，见
  `identical_pitfalls.md` §39 子类 B/§87）；O-lea/N-add 2 个
  （RecvBuffer::Parse、DBDispatcher::dispatch，属帧/局部整体布局差异，非纯数组
  形态）；无其它可归因于数组形态的 DIFF。
- **构建/比对注意**：`fast_strict.py` 的缓存键含路径与 mtime/size；本次因传入
  相对路径撞上旧版 3 元组缓存报错，改用绝对路径后正常（§82 同类纪律）。
- **水位（全量比对）**：strict 4109/468/159（NEAR +2、DIFF −2）；
  extended 4482/95/159（+2 ID）；full 4496/81/159（+2 ID）。point 同源同步，
  单函数比对确认 NumberToString 全对齐。

### 第三十八批（2026-08-09 续，逐函数压差：死局部 / 初始化序 / 表达式形态）

本批 13 个函数压到 ext/full IDENTICAL（多数严格口径也全对齐），另 2 个消除
主体差异（剩 §81 类寄存器伪影）：

| 函数 | 修法 | 结果 |
|---|---|---|
| `nsl::IHandler::IHandler` | ORIG ctor 只写 vtable（6 条）；删 sendTCP_/pTimeHandler 清零 | 6/6（仅 vtable 数据地址） |
| `nsl::TraceLog::TraceLog` | logmask=0 移入初始化列表（声明序在 lock 前，锁 ctor 前写 0x33c） | 17/17（仅 vtable） |
| `Auction::SendMessageToMonitor` | m_nNotifyNo 赋值先于 m_nItemId（槽序 -0x1c/-0x1b） | 65/65（仅 rodata） |
| `CharString/WideString::assign(ERKS_)` | 改早退 `if (getData()==src.getData()) return;`（尾部 jmp+nop 布局） | 28/28 严格 ID |
| `DnfItemInfo::isIdentified` | `(unsigned char)~x >> 7 & 1`（& 1 逼出字节移位 shr $7,%al，去 sar/test/setne） | 8/8 严格 ID |
| `IArea::isIterEnd` | `if (==) return true; return false;` 显式物化（**注意 je 在 al==0 跳，初版写反靠反汇编复核**） | 22/22 严格 ID |
| `Auction::SearchByItemId/Category` | error_no==0 分支显式 `return 0`（ORIG 有 mov $0+尾 jmp） | 39/39、81/81（仅 rodata） |
| `INTERNALMSG_SERVICE_UNAVAILABLE` ctor | setSize 后补 bWillDelete/workIndex/mOwnerWorkId 显式清零（memset 冗余但机器码可见） | 33/33 严格 ID |
| `nsl::Script::findIntValue` | 补命名局部 `ret`（atoi 结果先入栈再回寄存器，DWARF decl 43） | 45/45 严格 ID |
| `onAUCTION_CLOSE_PRIVATE_STORE_GA` | 补死局部 `mId = pPck->m_id`（DWARF decl 1541，调用处仍重读） | 45/45（仅 rodata） |
| `onAUCTION_CHECK_AUCION_READY_GA` | if/else 显式赋 db_work_done（test+je; movb 1; jmp; movb 0） | 73/73（仅 rodata/全局地址） |
| `DB_REGIST_ITEM`/`DB_EXPIRE_HISTORY` | `(x>>5)&0x1f` 字节移位形态（shr $5,%al 复现） | 主体对齐，剩 and 寄存器（§81） |

### 第三十八批新增坑点速记（详见 identical_pitfalls.md §88）
- 字节移位复现：`(x >> 5) & 0x1f` / `(x & 0xe0) >> 5` → `shr $5,%al; movzbl`；
  先转 unsigned 再移仍是 32 位 `shr`；`(unsigned char)(x>>5)` 反而出 `sar`（提升陷阱）。
- bool 物化：`x = cond` 直赋 → `mov %al`；if/else 显式赋 → test+je+movb+jmp+movb。
- 死局部必须保 DWARF 名（mId/ret），调用处保持重读/直用，否则帧/指令差 2-4 条。
- 分支语义复核：`je` 在 `test %al,%al` 后是 al==0 才跳；改块序前先对反汇编核对方向。
- **水位（全量比对）**：strict 4115/476/145（+6 ID、−14 DIFF）；extended
  4496/95/145（+14 ID）；full 4510/81/145（+14 ID）。point 已全量同步重建。

### 第三十九批（2026-08-09 续，块布局 / 条件形态压差）

| 函数 | 修法 | 结果 |
|---|---|---|
| `EpollReactor<TCPUser>::shutdown` | 改外层早退 `if (epoll_fd_ == -1) return;`（外层 je→nop、内层 je→EPI、delete 后 jmp EPI+nop） | 25/25 **严格 ID** |
| `TCPUser::onActiveClose` | `bDisconnected_ == false` 改 `!bDisconnected_`（== false 物化 xor+test，正条件直 test+je） | 121/120 仅 rodata/全局地址 |
| `TraceLog::set_mask` | `if (yesno == NULL) return;` 外层早退（else-if 链尾 jmp+nop） | 50/50 仅 rodata |
| `DB_REGIST_ITEM`/`DB_EXPIRE_HISTORY` | `(x>>5)&0x1f` 字节移位已对齐（shr $5,%al） | 剩 and 寄存器选择（§81） |

确认不可控并记录：`CSHA::AddData` 进位检查 setb+test+je vs jae（§59 同类，
同一 `if (a<b)` 源码，仅 ORIG 物化 setb）、`sysLog` 尾部 nop+jmp 布局、
`GetAuctionItemInfo` 的 `add $0x16` 折叠（§80）、`trimLeft` 的 `*4` lea（§39 B）。
- **水位（全量比对）**：strict 4116/477/143（+1 ID、−2 DIFF）；extended
  4498/95/143（+2 ID）；full 4512/81/143（+2 ID）。point 已全量同步重建。

### 第四十批（2026-08-09 续，操作数顺序 / 早退布尔形态 / i586 选择性覆盖）

| 函数 | 修法 | 结果 |
|---|---|---|
| `TraceLog::get_mask` | 操作数顺序 `logmask & (1<<bit)`（ORIG 先载 logmask 到 edx、1<<bit 走 ebx/esi callee-saved） | 22/22 **严格 ID** |
| `Message::getDataTypeMask` | 同上顺序 + `if (0 < (...)) return 1; return 0;`（test; jle; mov $1; jmp; mov $0 物化） | 22/22 **严格 ID** |
| `DnfItemInfo::getAbilityType` | 改双早退 `if (!hasAbility()) return 0; if (!isIdentified()) return 0x80;`（每个条件 xor $1 物化） | 23/23 **严格 ID** |
| `DnfItemInfo::getAbilityValue` | 改 `if (!(hasAbility() && isIdentified())) return 0;`（单 bool 寄存器物化再 test，ORIG 与 getAbilityType 的写法不同） | 26/26 **严格 ID** |

**i586 指令集排查定案**（详见 identical_pitfalls.md §89）：
- ORIG 的 FP 比较为 fucompp+fnstsw（i586 形态），-march=i686 发 fucomip。
- 全 TU i586（4116→3667）与按 TU i586（→4023）均回归，已回滚；
- 采用函数级 `__attribute__((target("arch=i586")))` 施加于 4 个 FP 函数
  （makeSuccessfulBid/RegistItem/AddItemAveragePrice/UpdateAveragePirce），
  零连带（全量总量不变），FP 比较形态与 ORIG 对齐；
- `build-auction/point.sh` 保留 I586_TUS 机制（当前空名单）供后续使用。
- **水位（全量比对）**：strict 4120/477/139（+4 ID、−4 DIFF）；extended
  4502/95/139（+4 ID）；full 4516/81/139（+4 ID）。point 已全量同步重建。

### 第四十一批（2026-08-09 续，局部类型严格照 DWARF）

| 函数 | 修法 | 结果 |
|---|---|---|
| `CharString/WideString::startsWith` | ORIG DWARF：`patLength` 为 **int32**（原 size_t）。int 型才产生 `cmp mem,%eax` 直比 + ebx 预载跨调用 | 48/48、48/48 **严格 ID** |
| `CharString/WideString::pattern` | 同上 `patternLen` int32（size_t 使 `patternLen*count` 的 imul 形态偏出） | 54/54、56/56 **严格 ID**（原 NEAR） |
| `Threads::getScopedLittleWorkIdx` | `most_little_queue_size` size_t → **unsigned int**（DWARF 合规；码不变） | 43/43 保持 ID |

`CharString/WideString::endsWith`：int32 已修，剩余 `c_str()+(length()-patLength)` 的
§81 类寄存器洗牌（mov mem→eax→edx→ecx），记录不可复现。

**方法**：对 NEAR/DIFF 函数逐个核对 ORIG DWARF 局部类型（`DW_AT_type` 链），
`size_t` 与 int32/unsigned int 在本平台同宽但会改变比较/乘法/跨调用暂存的发射形态，
是「既违反类型合规又产生码差」的高价值修复类。
- **水位（全量比对）**：strict 4124/475/137（+4 ID、−2 DIFF、−2 NEAR）；
  extended 4506/93/137（+4 ID）；full 4520/79/137（+4 ID）。point 已同步。

### 第四十二批（2026-08-09 续，NEAR 族：表达式形态 / 声明序 / 自增序）

从「full 口径仍 NEAR」的 79 个函数切入，修复 12 个到 identical：

| 函数 | 修法 | 结果 |
|---|---|---|
| `TCPSocket::setOptResizeSendBuf/RecvBuf` | 死局部声明序（optlen 先声明不初始化、unused 后声明、optlen=4 体中赋值） | 27/27 ×2 严格 ID |
| `CSHA::CH/MAJ` | 表达式形态：`z ^ (x & (y ^ z))`、`(x | y) & z | x & y`（装载序由源码操作数顺序决定） | 9/9、12/12 严格 ID |
| `CSHA::SIG0/SIG1` | 旋转项顺序：SIG0=2,13,22、SIG1=6,11,25（xor 交换律等价） | 13/13 ×2 严格 ID |
| `DNFFLib(Wrapper)::Binary2Hex` | DWARF 局部 i/szHex/pucBinStr1：声明不初始化 + 体中按序赋值 + i 先自增 | 30/30 ×2 严格 ID |
| `DNFFLib(Wrapper)::Hex2Binary` | 自增序 count→pszHexStr→pucBinStr | 29/29 ×2 严格 ID |
| `save_pid` | 声明序 buf→write_byte→fd（ORIG DWARF 618/619/620） | 65/65 仅 rodata |
| `Neof_sendSuspendSignal` | 声明序 ret→pid→fp（344/345/346），声明不初始化体中赋值（确有两个 sprintf） | 96/96 仅 rodata |
| `Neof_sendTerminateSignal` | 同上（238/239/240） | 109/109 仅 rodata |

**方法**：NEAR 函数在 full 口径下仍不同的，逐一对照 ORIG DWARF 的局部集
（decl_line 决定声明序）与表达式操作数顺序；「声明不初始化 + 体中赋值」与
「操作数/自增顺序」是两类高频可复现形态。
- **水位（全量比对）**：strict 4134/465/137（+10 ID、−10 NEAR）；extended
  4519/80/137（+13 ID）；full 4533/66/137（+13 ID）。point 已同步。

### 第四十三批（2026-08-09 续，NEAR 族：声明序 / 命名照 DWARF）

| 函数 | 修法 | 结果 |
|---|---|---|
| `TCPSocket/UDPSocket::poll{Read,Write,Error}Event` ×6 | 局部按 ORIG DWARF 命名 set/waitTimeStr/result；声明序 result→i→p（p 与 i 互换、result 先于 p） | 58/58 ×6 严格 ID |
| `Auction::AddAvatarEmblemInfo/ExpansionInfo` | DWARF 声明序 new_emblem_info(770) 先于 iter(772) | 73/73 ×2 严格 ID |

记录不可复现：`StatisticsCollector::DataInitialization` 帧保留差（0x38 vs 0x18，
可见局部 i×2/参数全部对齐，多出 0x20 保留区无 DWARF 依据）、
`CSHA::Bytes2Word`/`TransErrToReason`（§81/switch 降级差异）。

**方法**：NEAR 函数对 ORIG DWARF 的局部名与 decl_line 声明序逐一核对——
命名与声明序不符是 NEAR 差异的高频来源（poll 族 6 连、AddAvatar 对一次修平）。
- **水位（全量比对）**：strict 4142/457/137（+8 ID、−8 NEAR）；extended
  4527/72/137（+8 ID）；full 4541/58/137（+8 ID）。point 已同步。

### 第四十四批（2026-08-09 续，NEAR 族：switch 处理器序 / 循环怪癖 / 声明序）

| 函数 | 修法 | 结果 |
|---|---|---|
| `Auction::TransErrToReason` | switch case 处理器按 ORIG 源码书写序重排（0x24,0x2b,0x2d,0x2e,0x2f,0x23,0x31,0x1f/0x26,0x37；非升序） | 29/29 仅跳表地址（ext/full ID） |
| `CharString::find(pos, c)` | ORIG 循环内固定检查 `strBuf[pos]`（返回 thisPos）——照抄 ORIG 怪癖 | 51/51 严格 ID |
| `DNFFLib::ExplodeString` | 局部改 ORIG 名 iTokenCnt/pToken/pLast/pTail；pToken 先声明（159）但体中先赋 pLast（160） | 66/66 严格 ID |
| `Threads::setMostLittleQueue` | compare(54) 先于 most_little_queue(56) 声明；if 体内 `most_little_queue=compare` 先于 `mMostLittle*Queue=i` | 64/64 严格 ID |

记录待推敲：`GetCurrentResetBaseTime`（7 局部 yester_time/result1/result2/tm_ptr/
tm_ptr_yester/day/reset_time，帧 0x88 与发射序需进一步对照）、
`CSHA::Bytes2Word`（§81）、`StatisticsCollector::DataInitialization`（帧保留差）。
- **水位（全量比对）**：strict 4145/454/137（+3 ID、−3 NEAR）；extended
  4531/68/137（+4 ID）；full 4545/54/137（+4 ID）。point 已同步。

### 第四十五批（2026-08-09 续，NEAR 族：多余局部 / 双数组）

| 函数 | 修法 | 结果 |
|---|---|---|
| `Zone::Zone` | 删命名局部 pArea（ORIG DWARF 无局部；`mArea[0] = new GSArea(0)` 直存） | 32/32 严格 ID |
| `CTEA::EncryptBlock/DecryptBlock` | ORIG DWARF 有 v(98) 与 w(99) 双数组：v 存输入字、w 存输出字（原复用 v） | 78/78 ×2 严格 ID |

记录待推敲：`CharacSetSwitch`（7 局部 SrcPtr/DstPtr/size1/size2/string_size/cc/it，
槽位映射与零初始化发射序需进一步对照，本轮尝试后回滚保持 NEAR）、
`GetCurrentResetBaseTime`（同前）、`StatisticsCollectorC2`（rodata+EH 布局）。
- **水位（全量比对）**：strict 4148/451/137（+3 ID、−3 NEAR）；extended
  4534/65/137（+3 ID）；full 4548/51/137（+3 ID）。point 已同步。

### 第四十六批（2026-08-09 续，NEAR 族：声明序 / 帧打包记录）

| 函数 | 修法 | 结果 |
|---|---|---|
| `CharacterDictionary::AddAuctionId` | DWARF 声明序 ptr_data(10) 先于 find_iter(11) | 110/110 严格 ID |

记录不可复现（帧打包/布局伪影，声明序不可控）：
- `HandlerFor_DB_::DecryptPassword`：ORIG p_decrypt@-0x48/p_binary@-0x88
  （72B 数组在上）；本工具链固定 p_decrypt@-0x90/p_binary@-0x48，两种声明序
  均不变，试过并回滚。
- `ROI_Category::_sort`：交换临时 ORIG@-0x4/-0x1（帧顶），本工具链@-0xc/-0x9；
  已改函数级声明（更贴 DWARF decl 2585/2586），槽位差异保留。
- `ActiveNetClose::pushActiveClose`（§81 寄存器互换）、`StatisticsCollector::DataInitialization`。
- **水位（全量比对）**：strict 4149/450/137（+1 ID、−1 NEAR）；extended
  4535/64/137（+1 ID）；full 4549/50/137（+1 ID）。point 已同步。

### 第四十七批（2026-08-09 续，NEAR 族：switch case 序 / while 形循环）

| 函数 | 修法 | 结果 |
|---|---|---|
| `StatisticsCollector::StatisticsCollector` | ctor 内 switch case 按 ORIG 升序 0,1,2（原 1,0,2，块序/跳转目标互换） | 97/97 仅 rodata（ext/full ID） |
| `CSHA::FinalDigest` | 循环改 while 形（体内 i++ 先于 pcDigest+=4，for 形式发射序相反） | 114/114 仅 rodata（ext/full ID） |

部分改善：`CharString::insert` 装载序对齐（srcLength 先载），剩 edx/ecx 寄存器
互换（§81）。

记录不可复现：`CFileLogWriter::writeLog/writeRawLog`（EH 块共享导致
`mov $0,%ebx` 差异，2 条）、`GetAuctionMainFetchResult`（成员字节清零的
`movb $0,off(%eax)` 偏移折叠，多种写法均物化 add）。
- **水位（全量比对）**：strict 4149/450/137（不变）；extended 4537/62/137
  （+2 ID）；full 4551/48/137（+2 ID）。point 已同步。

### 第四十八批（2026-08-09 续，NEAR 族：while 形循环 / 声明序）

| 函数 | 修法 | 结果 |
|---|---|---|
| `IMethod::Pad` | switch 内三个填充循环改 while 形（体内 i++ 先于 pin++，同 FinalDigest） | 106/106 仅 rodata（ext/full ID） |
| `CTEA::Initialize` | bSameKey/bSameChain 声明序对调（ORIG 槽位 -0x1a/-0x19） | 246/246 仅 rodata（ext/full ID） |

记录不可复现：`RBTree<...>::RBIterator` 枚举 ctor（模板实例化下
`mov 0xc`/`mov 0x8` 装载序差异，2 条；独立 harness 复现 ORIG 序但模板上下文
相反，判 §81 类）、`TThreadStateControl` ctor（1 条冗余 mov）。
- **水位（全量比对）**：strict 4149/450/137（不变）；extended 4539/60/137
  （+2 ID）；full 4553/46/137（+2 ID）。point 已同步。
- **比对注意**：/mnt/d 偶发 nm I/O 失败（§82 同类），已改为拷到 /tmp 副本比对。

### 第四十九批（2026-08-09 续，NEAR 族：声明位置 / DWARF 命名）

| 函数 | 修法 | 结果 |
|---|---|---|
| `GetCurrentResetBaseTime` | 重构为 ORIG 结构：yester_time/now/yday → localtime_r 调用 → 声明 reset_time=0/day → day=hour（此前卡住的帧 0x88 与发射序由此解出） | 52/52 **严格 ID** |

`Search::SearchByLv` 按 ORIG DWARF 改名 result(1682)/pos(1684)/pSearchResult(1685)
并调整声明序（合规改善；槽位仍差 4 字节，判分配伪影）。

记录不可复现：`convertToUtf8`（双循环局部槽位分配反转）、`initInterEvent`
（帧 0x128 vs 0x118 大局部布局）、`CharString::remove`（pos/removeLength 装载序
上下文相关，独立 harness 反例）、`getHash`（循环后 nop 填充）。
- **水位（全量比对）**：strict 4150/449/137（+1 ID、−1 NEAR）；extended
  4540/59/137（+1 ID）；full 4554/45/137（+1 ID）。point 已同步。

### 第五十批（2026-08-09 续，NEAR 族：成员写序）

| 函数 | 修法 | 结果 |
|---|---|---|
| `TThreadStateControl<...>::TThreadStateControl` | ctor 体按 ORIG 写序：m_bisStarted(+4) 先写，再 m_bisStop/m_bisTerminating/m_bIsTerminated（原按声明序写，多 1 次 this 重载） | 17/17 严格 ID |

记录不可复现（本轮探索）：`convertFromUtf8`/`AuctionC2`（临时槽位）、
`onActvieClose`/`IMethod::Xor`（§81 寄存器互换）、`ASK_AVERAGE_PRICE_GP`/`PrintOut`
（大局部帧布局）、`initTimeEvent`（getArg 调用位置）、`DataInitialization`（帧保留差）。
- **水位（全量比对）**：strict 4151/448/137（+1 ID、−1 NEAR）；extended
  4541/58/137（+1 ID）；full 4555/44/137（+1 ID）。point 已同步。

### 第五十一批（2026-08-09 续，channel：语义缺陷修复 + 基线）

- **channel 基线（全量）**：strict 594/122/27、ext 697/19/27、full 702/14/27。
- **CRijndael::EncryptBlock/DecryptBlock 语义缺陷修复**：ORIG 在 m_bInit!=true 时
  throw `CCryptorException("EncryptBlock",0x4e7/...,sm_szErrorMsg1)`，我们的源码
  只做 if 包裹无 throw（未初始化时静默返回）——已补 throw 并对齐 throw 块。
- BC 计算：ORIG 用 `(unsigned)(m_blockSize >> 31) >> 0x1e`（shr $30），我们误用
  `/4`（shr $2）——已修正表达式（含 (int) 转换使末次 >>2 为 sar）。
- 残留（记录待续）：ORIG 的 `mov %eax,%edx` copy 模式 vs 我们的重载、ORIG 局部
  `tt`（读指针）用法（试加后指令反增，回滚）；`DefEncrypt/DefDecryptBlock`
  各 429 vs 462 指令（NEW 多 33 条，结构差异待查）——已由第五十五批重写解决。

### 第五十二批（2026-08-09 续，channel：类型合规）

- **`ChannelScript::getScriptFileSize` 返回类型**：ORIG DWARF 为 **unsigned int**，
  源码误用 int——修正声明与定义（onCS_GET_SCRIPT 的 GLOG operator<< 由 int 版
  转回 unsigned 版）。属 DWARF 类型合规修复；handler 剩余差异为 cmp 装载形态
  （§46）与 setg 方向（§59）。

### 第五十三批（2026-08-09 续，bridge：基线 + 跨树修复同步）

- **bridge 基线（全量）**：strict 736/153/29 →（ExplodeString 修复后）
  strict 737/153/28、ext 858/32/28、full 864/26/28。
- **`DNFFLib::ExplodeString`（bridge 树）**：同步 auction 已对齐的形态
  （pToken 先声明/pLast 后声明、体中赋值、pTail 命名、break 替代 return），
  66/66 全对齐。
- **构建注意**：bridge 的 DNFFunctionLib.o 在 `build-bridge/DNFServerCommon/`
  子目录，`ls build-bridge/*.o` 会漏掉导致链接缺失符号——必须用默认完整源列表
  （含 `DNFServerCommon/DNFFunctionLib` 路径）重建。

### 第五十四批（2026-08-09 续，bridge：条件形态）

- `CMsgCell::PAD`：两处 `if/else` 改**三元**（if/else 会 setne+test 物化；
  三元直 test+je，与 ORIG 一致）。剩余帧/槽位分配差异（ORIG 0x28 vs NEW 0x18、
  ORIG 无命名 nSize 局部但编译器 temp 帧更大）——记录。
- `TCPAcceptThread::lockPopAcceptedUser`：探索 `register ret`（ORIG 用 ebx 载
  返回），试后指令 58→56（更少，不匹配 ORIG 的槽位+ebx 双路径），回滚。
- bridge 全量维持 strict 737/153/28、ext 858/32/28、full 864/26/28。

### 第五十五批（2026-08-09 续，channel Rijndael：DWARF 形态还原 + 通用算法语义策略）

- **策略变更（用户指示）**：Rijndael 是公开通用算法（AES 前身，FIPS-197），
  **只要求输入输出正确**，不再追机器码逐条 identical。DWARF 局部名/形态仍照
  原版还原，但残余助记符差异（数据地址 + 寄存器分配）按可接受处理。
- **DefEncryptBlock/DefDecryptBlock 按 ORIG DWARF 重写**：
  - 局部名严格对齐：`Ker`/`Kdr`（int*，指向 m_Ke[0][0]/m_Kd[0][0]）、
    `t0..t3`、`a0..a3`（int）、`tt`（int）、`r`（int，循环内层块）；
  - a0..a3 装载形态：`a = (unsigned char)*in++ << 24; a |= ...`（每字节读后
    立即 in++，先存槽再 or 槽——与 ORIG 的 `mov %eax,-0x40; addl in; or` 逐条
    一致），xor `Ker[0..3]`；
  - 循环内每轮重导 `Ker = &m_Ke[r][0]`（gcc 生成 `shl $5; add $0x30; add
    this; add $8`，与 ORIG 一致——常数 0x38 拆两段是成员数组取址的固有形态）；
  - t0..t3 移位混型：`sm_T1[(unsigned)a0 >> 24]`（shr）与
    `sm_T2[(a1 >> 16) & 0xff]`（sar）——DWARF 类型为 int，仅 >>24 项显式
    unsigned cast，其余保持有符号 sar + 掩码；
  - 尾部 `tt = Ker[0..3]`，结果字节 `(unsigned char)(tt >> N)`（有符号 sar，
    与 ORIG 一致，不能转 unsigned）。
  - 声明序注意：a0..a3 必须先于 t0..t3 声明（槽位分组才能与 ORIG 对齐；
    虽然 DWARF decl_line 显示 t 在 1095-1107、a 在 1111，机器码槽序证明
    gcc 4.4.6 按声明序分配槽位——以机器码为准）。
  - 指令数：DefEncryptBlock 462→430、DefDecryptBlock 462→430（ORIG 429）。
    ext 口径残差 2/8 条：result[0] 的 `xor %edx,%eax; mov %eax,%edx` vs ORIG
    `xor %eax,%edx`（寄存器分配伪影）+ DefDecrypt 尾部两处 a0/a3 槽位装载
    顺序（同一分配伪影）。按通用算法策略不再追。
- **语义验证（FIPS-197）**：`source/toolchain/verify_rijndael.sh` +
  `rijndael_fips_test.cpp`。AES-128/192/256 加密输出与标准向量逐字节一致
  （69c4e0d8…/dda97ca4…/8ea2b7ca…），解密还原明文，多块 ECB/CBC 往返通过。
- **过程中抓到并修复的真实语义 bug**：重写 DefDecryptBlock 尾部时把字节轮转
  映射误写成加密侧顺序（a3,a2,a1,a0），ORIG 是解密侧顺序
  （a1,a0,a3,a2 / a2,a1,a0,a3 / a3,a2,a1,a0）——解密输出第 2 字差 0x80 位
  （0x44→0xc4 等）。语义测试立即暴露，已修正并全量重测 PASS。

### 第五十六批（2026-08-09 续，channel：Script/TCPUser 布局家族）

- **`Script::get_server_section` → ext/full IDENTICAL**（137/137）。ORIG 是
  「正条件 + else」扁平链：`if (val != NULL) { body } else { return false; }`
  （7 段）。此前 `if (val == NULL) return false;` 编译成内联 return 块；
  正条件形态产生 ORIG 的「延迟 return 块」（`jne BODY; jmp RET_prev; RET:
  mov 0; jmp END`）。声明序 a0..a3 必须先于 t0..t3 同理（槽位分组）。
- **`TCPUser::onRead` → ext/full IDENTICAL**（89/89）。外层 `if (getHandle()
  < 0) return;`（`shr $0x1f` 形态，不能用 `> -1`——后者编译成 `not;shr`），
  内层 `if (isAboutToDisconnect() || isDisconnected()) return;`（bool 物化
  `jne/je + mov $1/$0`），尾部 `jmp END; nop` 块来自**早退 return** 形态
  （空 if/else 形态会合并成直通 epilogue，少 4 条）。
- **`TCPUser::onClose` → 89/89**，剩 GLOG 两个临时量的 esi/edi 互换
  （§5.3 寄存器偏好伪影，记录）。
- **`TCPUser::onRead_` → ext/full IDENTICAL**（449/449）。要点：
  - `if (nRead >= 1) {...} else if (nRead < 0) {...}`（f2 形态，`jle` 布局）；
  - 外层 `if ((unsigned)getPopLengthToEnd() > 0xa) {peekPop 路径} else
    {peekCopy 路径}`——**必须 unsigned cast**（ORIG `cmp $0xa; seta`）；
  - peekPop 路径：`char* s = (char*)peekPop(); tagPacketHeader* hdr =
    (tagPacketHeader*)s;`（s/hdr 双槽、getSize 用 hdr、dispatch 用 s）；
  - peekCopy 路径：`char s[12]`（DWARF upper_bound=11 → **12 元素**，差 1
    字节会整体错位）、`hdr = (tagPacketHeader*)s` 在 peekCopy **调用之后**；
  - 所有错误块用**正条件 + else 置尾**（`if (peekCopy(...)) {...} else
    {GLOG; return;}`、`if (nMessageSize >= 1) {...} else {...}`、
    `if (pushed >= nMessageSize) {...} else {...}`、
    `if (popCopy(...)) {...} else {...}`）；
  - 循环尾 `while (!bufferRecv_.isEmpty())`（`sete; jne` 形态），不是
    `if (isEmpty()) return; while(true)`。
- 参数名合规：`TCPSocket::shutdown` 参数 ORIG DWARF 为 **opt**（两树都是），
  源码 `how` → `opt`。

### 第五十七批（2026-08-09 续，bridge：跨树同步 + VLA 记录）

- **`Script::get_server_section` → strict IDENTICAL**（82/82，0 差异）。
- **`Script::get_db_section` → ext/full IDENTICAL**（82/82）——同一扁平正条件
  形态。
- **`TCPUser::onRead` → strict IDENTICAL**（58/58）——同一早退形态，且 bridge
  无 GLOG 字符串引用。
- **`TCPUser::onClose` → ext/full IDENTICAL**（78/78）。
- **`TCPUser::onRead_` → 377 vs 379（语义等价，DIFF 记录）**：bridge ORIG 用
  **VLA**（`char szBuf[nMessageSize]`，无 malloc/free）、peekCopy 路径 pushed
  检查无 GLOG。我们的嵌套正条件形态下 VLA 触发 gcc 4.4 帧膨胀（0xa0058 →
  0xa00c0，指令 541），复现不了 ORIG 的 VLA 布局；改用 malloc+free 后 377 条
  最接近，按语义等价归档（VLA vs malloc 语义等价）。

**水位（fast_strict，项目函数）**：

| 服务 | strict | extended | full |
|---|---:|---:|---:|
| channel | 594 IDENT / 125 NEAR / 24 DIFF | 700 / 19 / 24 | 704 / 15 / 24 |
| bridge | 738 / 156 / 24 | 862 / 32 / 24 | 868 / 26 / 24 |

channel 剩余 24 DIFF：Rijndael 8（通用算法语义已验证）+ EpollReactor、
GlobalInstance/TGlobalInstance create（EH landing 伪影 §9）、CheckThread/
TCPThread/UDPThread loop、ChannelService handler ×5、TMemoryPoolStatic
startup ×2、TCPSocket::shutdown（§36 伪影）、_Rb_tree _M_create_node（STL）。

### 第五十八批（2026-08-09 续，bridge/channel：语义修复 + 小函数清零）

- **`TCPUser::isIdle`（bridge）语义 bug 修复**：原条件
  `(gap <= 0 && (unsigned int)gap <= 0x124f80)` 会让**任何正 gap 都判 idle**
  （0x124f80 阈值形同虚设）；ORIG 是 `gap <= 0x124f80`（64 位比较，js/jg/低
  字 jbe 三段）。修正后只剩 js/jg 两条指令的顺序伪影（§91 对照表）。
- **`UDPSocket::close`（bridge）→ strict IDENTICAL**（19/19）。源码
  `if (sock_ != -1) { body }` → 早退 `if (sock_ == -1) return; body;`
  （后者产生 ORIG 的 `je SKIP; body; jmp END; SKIP: nop`，§91）。
- **`ScriptThread::loop`（bridge）DWARF 命名**：局部 `db` → `DBMgr_`、
  `cur_server_id` → `tm_id`。帧差（0x94c vs 0xa7c）源于 ORIG 子查询数组在
  嵌套作用域（gcc 可跨作用域复用栈槽），当前源码全在函数顶无法复用——
  记录，待按 decl_line 重排作用域。
- **`UDPThread::loop`（channel）GLOG 修复**：`gFileLogWarn << ... << endl`
  裸流 → `GLOG(gFileLogWarn, "UDP read=" << nRead)`（ORIG 带 Lock/Unlock）。
  剩 `jmp LOOP; nop`（§3.3 块布局伪影，2 条）。
- **记录为伪影**：`Char2Hex`（§81 mov 到 eax 再 copy edx，1 条）、
  `get_rand_int`（`mov; test` 与 `cmpl` 及 seed 计算寄存器流，§81）、
  `ScriptThread::loop` 首查询后 ORIG 有一段恒假条件的死 `exit(1)` 块
  （`mov $0,%eax; test; je`——来源写法无法从常量假条件复现，死代码语义无关）。

**水位（fast_strict，第五十八批后）**：

| 服务 | strict | extended | full |
|---|---:|---:|---:|
| channel | 594 / 125 / 24 | 700 / 19 / 24 | 704 / 15 / 24 |
| bridge | 739 / 156 / 23 | 863 / 32 / 23 | 869 / 26 / 23 |

### 第五十九批（2026-08-09 续，channel：handler 类型/命名/死局部对齐）

- **`onCS_GET_SCRIPT`（294 insns）**：按 ORIG DWARF 修正局部
  `size_t nLen` → **`int len`**、`int nCompLen` → **`unsigned int
  CompressLen`**（compress2 长度参数）；`getScriptFileSize() > len` 补
  `(int)` cast 使比较恢复 setg（unsigned 比较会 seta）。循环体 lea 形态
  随之全对齐；剩 wrapEncrypt 前 tmpbuffer/size 的 **esi/ebx 寄存器互换**
  （4 条，§5.3）。
- **`onSC_GET_SCRIPT`（77 insns）**：补 ORIG 的死局部 **`int ret =
  fwrite(...)`**（decl 1190，存槽未读，§84 模式）——槽位整体对齐；剩
  `getSize() - 0xb` 的 `lea` vs `sub` + 参数寄存器形态（7 条，§80/§81）。
- **TMemoryPoolStatic::startup（两树）**：循环内 `T* t = repository_ + i;`
  死局部删除（ORIG 无 t，DWARF 只声明 i）——`freeq_.push(repository_ + i)`
  内联；剩 printf 后 `jmp LOOP_INIT` 的块序（§3.3，1 条）。
- **`DBMgr::Mysql_query/Mysql_error`（bridge）**：Mysql_query 的 res==NULL
  检查 ORIG 是 `sete; test; je` 物化形态、Mysql_error 尾 `jmp; nop`——
  均为代码生成形态差异（§81/§3.3），语义已对齐。
- **`isIdle`（bridge）**：修正后剩 64 位比较的 `js/jg` 顺序（§92 记录）。

**当前剩余 DIFF 构成**：channel 24 = Rijndael 8（语义已验证）+ 布局/寄存器
伪影 16；bridge 23 = 布局/寄存器/STL 伪影。handler 家族（onCS_GET_SCRIPT
等）已从结构差异压到「寄存器分配 + lea/sub 形态」残差。

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

**最新 fast_strict 水位（2026-08-09 第五十七批后）**：

| 服务 | 严格口径 | 扩展口径 | full 口径 |
|---|---:|---:|---:|
| channel | 594 / 125 / 24 | 700 / 19 / 24 | 704 / 15 / 24 |
| bridge | 739 / 156 / 23 | 863 / 32 / 23 | 869 / 26 / 23 |
| auction | 4151 / 448 / 137 | 4541 / 58 / 137 | 4555 / 44 / 137 |

（channel/bridge 的 24 DIFF 中：Rijndael 8 个已按通用算法策略语义验证；
其余为 EH landing / 布局 / STL 模板类伪影，见第五十五~五十七批与
`docs/identical_pitfalls.md`。）

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
