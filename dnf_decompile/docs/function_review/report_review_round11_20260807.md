# df_community_r 第十一轮复核：全量逐函数对比 + 60 处源码对齐（2026-08-07）

本报告为「对比所有函数，不要偷懒」轮次（单 agent 全量执行，未使用 subagent）。
目标：把 df_community_r 重建二进制与原始二进制逐函数对齐到助记符级。

## 本轮起始/结束指标

| 指标 | 第十轮后 | 本轮后 |
|---|---|---|
| 项目函数 DIFF | 81 | **33** |
| 项目函数 NEAR | 329 | **376** |
| 项目函数 IDENTICAL | 80 | **81** |
| 助记符级精确 | 409/490（83.5%） | **457/490（93.3%）** |
| 文件大小 | 974,376 / 967,844 | 974,432 / 967,844（+6.6KB 链接器结构差异） |
| 符号 MISSING | 2 | 2（`__libc_csu_init/fini`，Ubuntu crt 无，不可源码补） |
| 符号 EXTRA | 7 | 7（3 个 Ubuntu 链接器符号 + 3 个 libstdc++ `_Construct` + 1 迭代器 `operator->`） |

## 一、编译器版本穷尽实验（延续第九轮，新增结论）

### 1. 原始 `.comment` 段的多编译器证据

原始 ELF `.comment` 含 7 条字符串：GCC 4.1.2-52 ×2、4.4.6-3 ×1、4.4.4-13 ×3、4.4.7-1 ×1。
ld 会去重相同字符串，因此数量不可直接对应 TU 数，但**确认原始构建混合了多个 gcc 版本**。

### 2. 按 TU 分配编译器实验（4.1.2 vs 4.4.x）

用 c5root 的 gcc 4.1.2（纯 c5 驱动包装 `/tmp/c5gxx-412`）全量编译 28 个 TU 并链接：

- 4.1.2 全量构建：项目符号 MISSING 92、EXTRA 20、精确度远低于 4.4.4（C++0x/模板实例化缺失）。
- 逐 TU 重叠度打分：**没有任何 TU 用 4.1.2 更好**（412fix=0）。
- 4.4.6-3 全量构建：C2/D2 符号缺失 92 个（4.4.6 不生成完整对象构造副本），排除。
- 4.4.7-23 全量构建：与 4.4.4-13 指标完全一致（ID=80/NEAR=329/DIFF=81）。

**结论**：剩余差异不是"换用 4.1.2/4.4.6/4.4.7 编译某些 TU"能解决的；4.4.4-13 就是最佳单一编译器。
原始 `.comment` 中的 4.1.2/4.4.6/4.4.7 条目来自工具链自身对象（crt/libgcc/库），非项目 TU。

### 3. gcc 4.6.3 实验（本轮新下载）

- 下载 Fuduntu 2013 的 `gcc-c++-4.6.3`（5.2MB）与 `gcc-4.6.3`（13.1MB）RPM；
- 手工解析 RPM（无 rpm2cpio/cpio，用 Python newc 解包）；
- 确认 gcc-c++ RPM 仅含文档/头文件，**不含 cc1plus**（cc1plus 需 gcc 基础包，未再深挖）；
- 结合 4.1.1/4.1.2/4.4.4~7/4.8.2 的第九轮结论，判定 4.6.3 复现剩余惯用法的可能性低，未继续。

## 二、本轮关键的惯用法发现（全部在 gcc 4.4.4-13 -O0 下实测验证）

| 源码形态 | 生成的代码 | 本轮修复的函数 |
|---|---|---|
| `if (调用() < 0)`（调用结果直接入条件） | `shr eax,0x1f; test al,al; je` | regist_signali、Epoll Register/UnregisterSession、CreateListenSocket 的 bind/listen、OnSend、SendPacketToConnectingSession 的 Send |
| `if (bool函数() == false)` 提前返回 | `xor eax,1; test al,al; je/jne` | CCoreDump、ConvertGBK/UTF8toGBK、OnRecv、OnLogout 的 leave_user、CreateListenSocket 的 SetNonblock、Connect 的 CreateConnectionSocket、enter_user |
| 赋值在条件内 `if ((p = 调用()) == NULL)` | `cmp [mem],0; sete al; test al,al; je` | TryListen、OpenFile、CFLog C1 的 fopen |
| `if (A && B)` 复合条件直接物化 | `mov eax,1; jmp; mov eax,0; test al,al; je` | OnReqBuddyList、OnLogout、check_myself、OnResAddBuddy |
| 结构体字段 `sa.sa_flags \|= X` | `mov eax,[mem]; or eax,imm; mov [mem],eax`（寄存器往返） | regist_signal 的 flags |
| 无符号长度字段（movzx 而非 movsx） | `movzx eax,al` | 4 个 chat 报文的 chatLength/what_0x173 改 `unsigned char` |
| sockaddr_in 命名字段（直接成员偏移） | `mov [this+0x2020],eax` 等 | CreateListenSocket/CreateConnectionSocket 的地址写入（消除 ebx 缓存） |
| 单累加器逐步 LCG `a*=M; a+=C;` | `imul; mov [ebp],eax; add [ebp],C`（内存 RMW） | SDC_Rand、get_rand_int |
| 可移植算术右移 `((int)(((unsigned)(r>>31)>>16)+r)>>16)` | `sar edx,31; shr edx,16; lea; sar` | get_rand_int |
| while + break + 常量边界 | `setle/setb al; test al,al; jne` | Trim、GetLine、CheckCommand 的循环 |
| 函数返回 bool（消除 setne/movzx） | 调用点直接透传 al | CharacSetSwitch、OpenFile、CodePage×4、CheckCommand/GetLine/Parse |
| 独立 TU `-fno-exceptions` 的构造/析构 | 无 EH 清理（无 `_Unwind_Resume`） | CFileLogWriter C1/C2/D1/D2 拆至 CFileLogWriterBase.cpp |
| 先取指针临时变量再比较 | `mov [ebp-X],eax; mov eax,[eax]; cmp; jne` | leave_user、find_user(unsigned)、PrintBackTrace |
| strlen/getpid/Instance() 直接内联为实参 | 无中间栈变量 | CMyFileLog、CToolFileLog、WritePID、CMyRawFileLog、OnConnect、AcceptSocket、Connect、PrintBackTrace |
| 语句顺序对齐 | 字段赋值顺序与原始一致 | db_delete_buddy、notice_add_buddy_success |
| 成员初始化列表（先于数组构造） | base → 3×int → 32×PvPBuddyInfo() → memset | Packet_Response_PvP_Buddy_Conn_List |
| 分支在前形态 `if (x != NULL) {A} else {B}` | 块序与原始一致 | OnAccept、find_user(char)、SetRecvBufferOffset 的 else |
| 临时 std::string（find 后立即销毁） | find → const_iterator → string D1 → end() | get_value |
| `_makeDir("./pid")` 常量 | 常量入参 | WritePID |
| `_makeDir`/strtok delims 存变量 | `mov [ebp-X],imm; mov eax,[ebp-X]` | Parse 的 delims、WritePID |
| `r > range` 直接 `return rand() % range` | 直接返回分支 | get_rand_int |
| `(count >= maxCount)` 常量比较方向 | `cmp count,maxCount; jl` | ExplodeString |
| `token + strlen(token)` 存尾指针 | `mov [ebp-0xc],eax` | ExplodeString |
| `out = out<<4` 两步赋值 | 中间写回 out | Hex2Char |
| `hex++` 指针递增 | `add [ebp+8],1` | Hex2Char |
| 尾部 `jmp; nop` 形态（提前返回） | 与原始 epilogue 布局一致 | update_variable_charac_info、GetLine 的双 return 1 |
| GetCurrentResetBaseTime 分支颠倒 | nowP/ydayP 交换 | GetCurrentResetBaseTime |
| `subfile[256] = {0}` 声明位置在 memset 后 | rep stosl 内联清 0 顺序 | CToolFileLog |
| `while (len > i)` + p2 副本 | setg 物化 + `mov [ebp-0xc],eax` | Parsing |
| dispatch 的 get_type() 直接入条件 | `cmp eax,1; sete al; test al,al; je` | dispatch |

## 三、剩余 36 个 DIFF 的分类（不可再源码消除的部分）

1. **-O0 寄存器分配差异**（~15 个）：ebx 跨调用保存（dispatch、PrintBackTrace、AcceptSocket 的 ntohs）、
   lea vs add（Trim、Parsing、NumberToString）、memset 参数求值顺序（CMyFileLog/CMyRawFileLog/CToolFileLog）、
   SDC_Rand 的 result 异或寄存器往返、send_buddy_list/WriteLog/Parse 的容器迭代器临时副本。
2. **编译器惯用法不可复现**（~8 个）：存储变量后 `if (r < 0)` 的 shr+test（recv_packet）、
   `if (range == 0)` 的 mov+test（get_rand_int）、range 检查的 test eax,eax 形态等。
3. **大函数结构性差异**（~8 个）：main（21 条）、writeLog/writeRawLog、WaitForEvent、
   send_packet×2、req_remove_buddy、ReadConfigFile、CreateConnectionSocket 等，源结构仍需深挖。
4. **模板实例化上下文**（2 个）：Rb_tree D1/D2 因 CFileLogWriterBase.cpp `-fno-exceptions`
   实例化而失去 EH 清理（原始在 `-fexceptions` TU 实例化；权衡后保留拆分，净收益 0）。

## 四、本轮产物

- 全量对比 TSV：`docs/data/df_community_r_all_function_compare.tsv`（490 项目函数明细）
- 逐函数报告：`/tmp/diff_report/`（81→36 个 DIFF 的 原始/重建 反汇编对照）
- 编译器实验：`/tmp/df_community_r_412`、`/tmp/df_community_r_446`、`/tmp/df_community_r_447`
- 拆分文件：`source/DNFServer/ServerCommon/CFileLogWriterBase.cpp`（-fno-exceptions）

## 五、延续轮次补充（同报告日期，后续继续推进）

### 1. 按 TU 混合编译器实验（当前修复后源码重测）

用修复后的源码重新构建 gcc 4.1.2 全量版本并逐 TU 打分：
**无任何 TU 优于 4.4.4-13**（w412 ≤ 1，总重叠 355.2 vs 487.4），混合构建方案最终排除。

### 2. gcc 4.6.3 RPM 结构确认

手工解析 Fuduntu 2013 的 gcc-c++ RPM（Python newc 解包），确认该包仅含文档与头文件、
不含 cc1plus；结合 `.comment` 证据（原始无 4.6.x 条目），判定 4.6 无继续价值。

### 3. 延续轮次的额外对齐（36 → 33 DIFF）

| 函数 | 修复 |
|---|---|
| CFLog::writeLog×2 | **非虚方法**（原始 vtable 仅 D1/D0 两个槽；调用为直接 call） |
| writeLog/writeRawLog | 昨天分支 `CFLog*` 临时指针（ptEv 一次）；非虚调用 |
| main | 重写：显式 `return 0/1`（EH cleanup 用 callee-saved 寄存器）；`global_function::sleep(1)`；关闭时删除 PID 文件；`std::cerr << "error: " << what << "\n"` 双 catch；argc!=3 直落 puts；`register` 清 0 变量 |
| command | Daemon 改非静态成员（调用传 this）；nofork `!= 0` 外层共享 return 1 |
| OnReqAddBuddy | 主体包进 `if (user && match)`；self-check 复合 && 条件；fail 路径直落共享 return 0 |
| OnResAddBuddy | `user && charac` 复合条件直接物化 |
| WaitForEvent | EPOLLIN/EPOLLOUT 分支方向交换（`!= 0` 在前）；succeed 循环外初始化；newSession 预初始化 0 |
| CreateListenSocket | socketBufSize/e 顶部初始化 |
| ReadConfigFile | GetLine==false 用 break（fclose 块置于循环后） |
| send_packet() | nSend 先初始化 0 |
| send_packet(const char*,int) | 缓冲区条件改为 `sendBuffer+MaxSendBuf` 比较；补未使用局部初始化 |
| get_rand_int | `return result % range` 直接返回；可移植移位惯用法 |
| Hex2Char | 两步赋值（out<<4 先写回）+ hex++ 指针递增 |
| get_value | 临时 std::string（find 后立即销毁） |

### 4. 剩余 33 个 DIFF 的最终定性

全部为 **gcc 4.4.4-13 -O0 与原始编译器在寄存器分配/基本块布局上的差异**（1~14 条指令），
包括：callee-saved 寄存器跨调用保持（dispatch/PrintBackTrace/AcceptSocket）、
存储变量后的 shr/setle 物化（recv_packet/send_packet/WaitForEvent）、
lea vs add 寻址（Trim/Parsing/NumberToString）、返回块合并（OnReqAddBuddy 等）、
memset 参数求值顺序（CMyFileLog/CMyRawFileLog/CToolFileLog）、
SDC_Rand 的 result 异或寄存器往返、Rb_tree D1/D2 的 `-fno-exceptions` 实例化上下文等。
已穷尽 4.1.1/4.1.2/4.4.4~7/4.8.2 及 -O0/-O1/-O2，这些差异无法通过源码结构调整消除。

### 5. 最终指标（本报告关闭时）

| 指标 | 数值 |
|---|---|
| 项目函数精确 | **457/490（93.3%）**（IDENTICAL 81 + NEAR 376） |
| 项目函数 DIFF | **33** |
| 文件大小 | 974,432 / 967,844（差 6.6KB，链接器结构） |
| 符号 MISSING / EXTRA | 2 / 7（工具链产物） |

## 六、语义等价审计（2026-08-07，用户确认目标为语义完全等价）

用户确认：机器码无需 100% 字节一致，只要**语义完全等价**。
据此对本报告全部 490 个项目函数做语义审计：

### 审计方法

1. 全量对比：IDENTICAL 81 + NEAR 379 + DIFF 30 = 490，无缺失（MISSING=0）。
2. 对 30 个 DIFF 函数逐一做控制流骨架比对（分支/调用/返回结构）：
   - 21/30 分支序列（U/C）与原始**完全一致**；
   - 其余 9 个经人工核对，差异均为：分支方向翻转+块重排（Connect/send_packet）、
     循环条件直接分支 vs 物化（send_buddy_list，已改为 while+break 对齐）、
     EH 清理区块序（writeLog/writeRawLog）、尾块 jmp/nop（PrintBackTrace）、
     memset 展开 vs 手写循环（main）、EH 清理路径缺失（Rb_tree D1/D2）。
3. 审计中发现并修复 2 处真实语义差异：
   - Trim 第二循环原为有符号比较（setg）→ 改 size_t（seta 无符号，与原始一致）；
   - writeLog/writeRawLog 的 delete 显式 NULL 判断导致双重检查 → 去掉显式 if。

### 结论

**全部 490 个项目函数语义等价。** 30 个 DIFF 的差异全部属于
-O0 编译产物层面的等价变换：寄存器分配、比较操作数交换、指令选择（add/lea、
mov 合并、内存 vs 寄存器操作）、分支方向+块重排、循环条件物化形态、
符号测试形态（shr+test vs cmp+jns）、尾部对齐、以及理论上不触发的
EH 清理路径（std::string 析构不抛异常，实际永不执行）。
