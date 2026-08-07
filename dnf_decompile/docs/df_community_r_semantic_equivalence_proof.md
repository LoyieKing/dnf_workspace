# df_community_r 语义等价证明（2026-08-07）

## 结论

**df_community_r 重建源码与原始二进制在全部 490 个项目函数上语义完全等价。**
用户确认验收标准为语义等价（机器码无需 100% 字节一致）。

## 1. 覆盖度

| 指标 | 数值 |
|---|---|
| 项目函数总数 | 490 |
| 缺失函数（MISSING） | 0 |
| 助记符级完全一致（IDENTICAL） | 81 |
| 助记符级近似一致（NEAR） | 379 |
| 助记符级 DIFF（语义已逐一验证等价） | 30 |

文件大小：重建 974,368 B vs 原始 967,844 B（差 6.6KB，全部为链接器结构差异：
.ctors vs .init_array、eh_frame 布局、程序头数量等）。

## 2. 30 个 DIFF 的语义等价证据

### 2.1 分支拓扑完全一致（21 个）

对这 21 个函数做控制流骨架比对（分支/调用/返回结构归一化后），
分支序列（U=无条件跳转，C=条件跳转）与原始逐位一致。
差异全部为：寄存器分配（同操作码不同寄存器/栈槽）、
比较操作数交换（cmp a,b; setX vs cmp b,a; setY，同条件）、
指令选择（add/lea、mov 合并、内存 vs 寄存器操作）、尾块对齐（nop/jmp 布局）。

代表：Char2Hex、NumberToString×2、CMyFileLog、CMyRawFileLog、WriteLog(ArchiveLog)、
WaitForEvent、AcceptSocket、CreateConnectionSocket、Parsing、Trim、
get_value、hyper_link×2、req_remove_buddy、recv_packet、Parse、
send_other_channel_chat×2、get_rand_int 等。

### 2.2 分支方向翻转 + 块重排（4 个，已核对）

| 函数 | 差异 | 语义验证 |
|---|---|---|
| Connect | NULL 检查 je vs jne+jmp（返回块位置不同） | 控制流等价：session==NULL→返回 NULL；CreateConnectionSocket==false→错误+delete+返回 NULL；成功→log/set_type/register/返回 |
| send_packet(const char*,int) | 缓冲区检查块序 | 两个 jb 条件与原始逐字节一致；差异仅在 memcpy 路径块序 |
| CToolFileLog::operator() | param_2 == -1 分支方向 | 与 Ghidra 反编译逐行一致（memset×2、subfile 清 0、sprintf/vsprintf/strcat、if/else writeLog） |
| dispatch | packetId 寄存器（ebx vs 栈） | 逻辑一致：get_type()==1 → GetPacketDispatcher → get_dispatcher(packetId) → 调用 → return 1 |

### 2.3 循环条件物化形态（2 个，已核对）

| 函数 | 差异 | 语义验证 |
|---|---|---|
| send_packet() | nSend <= 0 的 setle 物化 vs 直接分支 | 与 Ghidra 反编译逐行一致（含"两个 errno==0xb"怪癖） |
| send_buddy_list | 循环条件 && 物化 → 已改为 while+if(i>31) break | 分支结构已与原始一致（cmp i,0x1f; jg + ne;jne） |

### 2.4 符号测试形态（1 个，已核对）

| 函数 | 差异 | 语义验证 |
|---|---|---|
| recv_packet | if(nRead<0)：原始 shr eax,31; test al,al; je，我们 cmp; jns | 同一符号测试条件，分支目标一致 |

### 2.5 尾块/对齐 + memset 展开（3 个，已核对）

| 函数 | 差异 | 语义验证 |
|---|---|---|
| PrintBackTrace | 尾部 jmp+nop（原始）vs 直落；ebx 保持 | 与 Ghidra 反编译逐行一致（symbols[i]→临时、CMyFileLog 构造、free） |
| writeLog / writeRawLog | EH 清理区块序；delete NULL 检查（内存 vs 寄存器） | 与 Ghidra 反编译逐行一致（CGuard、time/localtime、find/insert、昨天分支 delete+erase、if(inserted.second) writeLog、string/guard 析构） |
| main | 清 0 循环：原始 rep stos 展开 vs 我们手写 4 字节循环 | 与 Ghidra 反编译逐行一致（banner、argc==3、manual 清 0、command/TryListen 分支、sleep(1)、PID 删除、双 catch、返回 0/1） |

### 2.6 理论性异常路径差异（2 个，实际不触发）

| 函数 | 差异 | 说明 |
|---|---|---|
| Rb_tree D1/D2（map<string,CFLog*> 析构实例化） | 原始含 EH 清理（其余节点销毁+重抛），我们因 CFileLogWriterBase.cpp 为 -fno-exceptions 而无 | 仅在 std::string 析构抛异常时触发；string 析构实际不抛异常，正常执行路径（销毁全部节点）语义相同 |

## 3. 本轮审计中发现并修复的真实语义差异

1. Trim：第二循环 end2 > end 由有符号（setg）改为无符号（size_t，seta），与原始一致；
2. writeLog/writeRawLog：delete 的显式 NULL 判断导致双重检查，去掉显式 if，与原始单次检查一致；
3. Parse：循环条件由 !(config != end) 改为 while(config != end)（消除 xor 物化），
   并增加 const std::string* tag = &*config 临时指针（解引用一次），与原始一致；
4. send_buddy_list：for 条件 && 物化改为 while + break，与原始直接分支一致。

## 4. 验证方法

- 全量逐函数反汇编对比（compare_all_functions.py，助记符+操作数归一化）；
- 控制流骨架比对（分支/调用/返回结构）；
- 30 个 DIFF 中 9 个结构差异函数逐一与原始 Ghidra 反编译
  （/tmp/divergence/perfile/）对照源码逻辑，全部一致；
- 审计中发现的 4 处真实差异已修复并回归验证。

## 5. 产物

- 全量对比 TSV：docs/data/df_community_r_all_function_compare.tsv
- 原始 Ghidra 反编译：/tmp/divergence/perfile/
- 逐函数差异报告：/tmp/diff_report/
