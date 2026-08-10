# DWARF 二进制 identical 校验：常见机器码不一致坑点速查

本文档汇总在 `stun/channel/bridge/auction/point` 校验过程中反复遇到、会导致
重建二进制与 ORIG 机器码不一致的坑点，以及对应修复形态。目标是让后续 identical
流程能「看到反汇编差异 → 直接定位源码问题」。

统一术语：
- **ORIG**：原始二进制（`dnf_installer/.../neople/<svc>/df_*_r`）
- **NEW**：重建二进制（`source/build-<svc>/df_*_r`）
- 反汇编统一用 `objdump -d --no-show-raw-insn`（Intel 语法用于阅读）。

---

## 1. 类型 / 有符号性（最容易造成真实语义 bug）

### 1.1 `__int64` 默认被项目头定义为 unsigned
`shared/*.h` 多处 `typedef unsigned long long __int64;`。ORIG DWARF 中 `__int64`
确实是 unsigned，但**个别成员直接声明为 signed `long long`**（不走 typedef）。

- 实例：`ROI_AverageKey::option_index_key`（ORIG DWARF = signed long long，
  源码误用 `__int64`）→ `operator<` 从有符号（jl/jg）变无符号（jb/ja）。
- 修复：把该成员改成 `long long`（不要动全局 `__int64` typedef）。
- 识别：ORIG 64 位比较「高字 jl/jg + 低字 jb」= 有符号；「高字 jb/ja」= 无符号。

### 1.2 union 成员名 / 类型照抄 DWARF
- 实例：`ROI_Category::field_0` 的 union 成员在 ORIG 叫 `_high_category_key`
  （signed long long），源码误写 `_qw`（unsigned __int64）。改后
  `operator<` 严格 IDENTICAL。
- 规则：union/结构体成员名与类型必须逐字段对 DWARF（用 readelf/pyelftools 提取
  `DW_AT_data_member_location` + 解析类型，注意 CU 相对偏移 ref4）。

### 1.3 传参强转的符号扩展
- 实例：`HandlerFor_DB_::onAUCTION_DB_INSERT_AVERAGE_PRICE` 的
  `seperate_upgrade` 用 `(signed char)` 传 SQL %hhd → movsbl（符号扩展）；
  ORIG 是 movzbl → 改成 `(unsigned char)`。
- 识别：ORIG `movzbl` vs NEW `movsbl`（或反过来）同一操作数。

### 1.4 FD_SET / 位运算的有符号除法
- `FD_SET(sock_, &set)` 中 `sock_` 是 signed int → GCC 产出
  `sar+cmovs`（有符号 /32）与 `sar/shr` 组合（有符号 %32）。
- ORIG 用 `shr`（无符号）→ 传 `FD_SET((unsigned int)sock_, &set)`。
- 实例：channel/bridge 全部 `pollRead/Write/ErrorEvent`。

---

## 2. 结构体布局（`#pragma pack`、字段错位、数组尺寸）

### 2.1 缺 `#pragma pack(1)`
- 实例：`PacketHeader`（auction）ORIG 的 `m_dwSrcIp@6` 非对齐（unsigned int 在 6），
  且包结构 packed(1)（`m_nItemId@19` 非对齐）。源码缺 pack → 字段被对齐到 8。
- 识别：ORIG `movl $0,0x6(%eax)`（4 字节未对齐写）vs NEW `movw/movl` 对齐偏移。
- 修复：包结构外包 `#pragma pack(push,1)`/`#pragma pack(pop)`。

### 2.2 字段名 / 数量错
- 实例：`PacketHeader` 源码写成 `m_wDstPort + m_nToken` 两个 ushort，
  ORIG 是 `m_dwSrcIp`（unsigned int）。大小相同（10B）但语义错 → 构造器 4 字节写
  0x6 对不上。

### 2.3 数组尺寸错位（含 ORIG 自身双头版本）
- 实例：`StatisticsCollector::StData::becauseCnt`：ORIG 代码（IncTryCnt/IncFailCnt）
  用 [57]（236B），但多数 TU 的 DWARF/代码用 [55]（228B）+ 48B 尾填充
  （运行时 sizeof=0x19a4）。选择与**多数函数 + 运行时分配大小**一致的布局。
- 注意：ORIG 二进制自身可能存在 ODR 违规（不同 TU 头版本不同），单头文件无法
  同时满足 → 以「函数数量最多 + GlobalInstance 分配大小」为准，其余记为布局 DIFF。
- 识别：同一结构体在 ORIG 不同函数里步长不同（imul 0xec vs 0xe4）。

### 2.4 成员偏移整体平移
- 上述数组尺寸错误会让后续成员整体偏移（如 mpNowTm@0x196c vs 0x199c）。
- 识别：短函数（getter）中 `mov 0x196c(%eax),%eax` vs `mov 0x199c(%eax),%eax`。

---

## 3. 布尔物化 / if-else 形态（最常见的 -O0 坑）

### 3.1 Ghidra 式 `bVar1` if/else 反模式
```cpp
bool bVar1;
if (cond) { bVar1 = true; } else { bVar1 = false; }
if (!bVar1) { ...; }
return !bVar1;
```
→ bVar1 溢出到栈（`mov %al,-0x9(%ebp)` 等），且多出 movzbl/xor。

**ORIG 形态**（bVar1 保持寄存器）：
```cpp
if (cond) { return false; }
...;
return true;
```
- 实例：`DBConnection::get_*` 家族 12 个 + `is_valid_col` 全部严格 IDENTICAL。
- `get_binary` 需三元 `copy_size = (m_len<size) ? m_len : size;`（ORIG 的 if/else
  赋局部形态）。

### 3.2 直接取反 `xor $1` vs 存局部再取反
- ORIG：`call is_valid_col; xor $1; test; je`（不存局部）。
- NEW：`mov %al,-0x9; movzbl; xor; test`（存局部）→ 源码去掉临时 bool。
- 反向也常见：ORIG 存局部（`get_binary` 的 nRet），NEW 直接 → 源码加回临时。

### 3.3 if/else + return 产出 jmp+nop 共享出口
```cpp
if (x == -1) { return; }   // 或 if (x==NULL) { if... } else { return; }
body;
```
多条 body 语句时，GCC 产出 `jmp 出口; nop; 出口:` 形态。
- 实例：`TCPSocket::close`、`EpollReactor::shutdown`（`if (fd==-1) return;`）、
  `GlobalInstance<T>::create`（外层 `if/else + return`）。
- 识别：ORIG 尾部 `jmp <end>; nop; leave; ret`，NEW 直接 `leave; ret`。

### 3.4 `delete p` 关键字 vs 手动 `~X(); operator delete(p)`
- ORIG `delete p` 一次载入 callee-saved 寄存器（ebx）并复用；
  手动形式会溢出栈或多次装载。
- 实例：`App::stop`（auction）`delete nsl::pApp;` → ext/full IDENTICAL。
- 识别：ORIG `mov [g],%ebx; test; je; mov %ebx,(esp); call D1; mov %ebx,(esp);
  call _ZdlPv`。

### 3.5 返回极性
```cpp
if (result == 0) { return false; }   // ORIG 常见：cmp; jne true; mov 0; jmp; true: mov 1
return true;
```
与 `if (result != 0) return true; return false;` 的块布局不同（je/jne 互换）。
- 实例：poll 家族的 `select` 返回值判断。

---

## 4. 循环结构

### 4.1 `while(true)+内部越界判断` vs `while(i<=N)`
```cpp
// 错：条件在顶部内部
while (true) { if (N < i) { return X; } body; i++; }
// 对（ORIG）：条件在底部（jmp cond 形态）
while (i <= N) { body; i++; }
return X;
```
- 实例：`Script::remove_comment`（while(i<=0x3fd)）、`Script::fgetln`。
- 识别：ORIG 顶部 `jmp cond`，cond 在底部 `cmp N; setle; test; jne body`。

### 4.2 break vs 内联 return / goto（块顺序）
- ORIG 把「命中分支」的 memset+return 内联在循环体内（`if (n==2) { memset; return true; }`），
  break+循环后判断会产出不同块序。
- 实例：`remove_comment`（内联 memset+return → EXT）。

### 4.3 FD_ZERO 宏：asm/memset 内联 vs 手写循环
- C6 头 `__FD_ZERO`（GNU 版）= `cld; rep stos`（NEW 原形态）；
  ORIG 用「非 GNU 版」手写循环。
- 修复形态（产生 ORIG 的索引寻址 `[base+i*4]`）：
```cpp
unsigned int __i;
fd_set* __arr = &set;
for (__i = 0; __i < sizeof(fd_set)/sizeof(__fd_mask); ++__i)
    __arr->fds_bits[__i] = 0;
```
- 声明序 `__i` 先于 `__arr` 很关键（否则 shl/add 计算寻址）。
- 实例：channel/bridge 全部 poll 函数。

---

## 5. 栈槽 / 寄存器分配控制

### 5.1 局部变量按「反声明序」分配
- GCC -O0 常把**最后声明**的局部放最高槽位（靠近 ebp）。
- 实例：poll 家族的 `result` 必须**最先声明**，才能落在 -0x24（ORIG 的 result 槽）；
  fd_set 基址 -0x1c、计数 -0x20。
- 识别：ORIG/NEW 同函数只有 `-0xNN(%ebp)` 槽号整体平移 → 调整声明顺序。

### 5.2 临时变量强制溢出
- `int nRet = fcntl(...); if (nRet < 0)` 会把 nRet 放栈（ORIG 若用局部则保留）；
  直接用 `if (fcntl(...) < 0)` 则保持寄存器。两种都见过，以 ORIG 反汇编为准。
- 实例：`setOptNonBlock`（去 nRet → IDENT）、`setOptResize*`（保留 nRet → IDENT）。

### 5.3 callee-saved 寄存器 vs 栈
- ORIG 用 ebx/esi/edi 跨调用保存值；NEW 溢出到栈。控制因素：该值是否被局部变量
  承接、跨几个调用存活、声明顺序。无法穷举时逐个试。
- 实例：`App::stop`（delete 关键字 → ebx）、`CharString::concat`（length 在 edi）。

---

## 6. 分支极性 / 块顺序
- 同一 if/else，GCC 可能落 je 或 jne（取决于「命中分支放前还是后」）。
- 修复：调换 if/else 分支顺序，或改条件为 `if (!cond)` / `if (cond == 0)`。
- 实例：`onAUCTION_DB_INSERT/UPDATE_AVERAGE_PRICE` 的
  `if (!isEmpty()) { ROI } else { basic }`（ROI 分支前置，ORIG xor $1）。
- 识别：ORIG `je <label>` vs NEW `jne <label>`，目标互为补集。

---

## 7. printf vs puts
- `printf("...\n")`（无格式符）→ GCC 4.4 自动转 `puts("...")`。
- 若 ORIG 用 `printf`（串**无结尾 \n**），源码需去掉 `\n`。
- 实例：`TGlobalInstance::create`（"cannot allocate memory..." 无 \n）。
- 识别：ORIG `call printf@plt` vs NEW `call puts@plt`。

---

## 8. 数据地址 / 归一化口径（比对层）

### 8.1 不同二进制数据地址不同
- vtable、rodata 字符串、全局变量地址在 ORIG/NEW 必然不同 → 严格口径（仅跳转/调用
  目标归一化）下此类函数停在 NEAR；ext/full 口径（大地址归一化）才能 IDENTICAL。

### 8.2 大地址范围
- 32 位：`0x8xxxxxxx`（7-8 位十六进制）→ `0x[0-9a-f]{7,8}`。
- 64 位（stun）：`0x40xxxx`（6 位）→ 需额外 `0x40[0-9a-f]{4,6}`。
- 注意**不要**放宽到 `0x4[0-9a-f]{5,7}`：32 位存在 `0x4c4d58`（"XML" 魔数）等
  6 位真实常量会被误归一化。

### 8.3 assert 行号
- `__assert_fail(file, line, func)` 的 line 实参是源码行号（元信息）。
  full 口径把 `movl $line,0x8(%esp)`（紧跟 assert 调用）归一化。

---

## 9. EH landing pad（try/catch / 构造器异常）
- `new T` + 构造器可能抛异常 → GCC 生成 delete+rethrow 的 EH 清理块，块布局
  （放在 ctor 后 vs 函数末尾）编译版本敏感，很难从源码精确控制。
- 实例：`GlobalInstance<T>::create`（带锁版）60/50 的剩余差异、Rijndael/CSHA。
- 对策：确认调用集/常量一致后按「语义等价 + EH 布局差异」归档，优先压其它家族。

---

## 10. 构建 / 比对流程坑

### 10.1 弱符号多个定义者
- 模板/内联函数（GlobalInstance::create、ROI_Category::operator< 等）在多个 .o 中
  都有弱符号，链接器任选其一 → 改了头文件但二进制仍旧。
- 对策：`nm <obj> | grep ' W <sym>'` 找出所有定义者，全部 touch 重编。

### 10.2 头文件改动不触发重编
- build 脚本只检查「同名 .cpp/.h」mtime，**不追踪间接包含**。
- 改共享头后必须手动 touch 所有包含者（`grep -rln '<Header.h>' | xargs touch`）。

### 10.3 zsh 词分割
- `OBJS=$(ls build-*/*.o ...)` 在 zsh 里不会按空格分词 → 传参用 `${=OBJS}`。

### 10.4 外部并发写入
- 其它 agent/编辑器可能改写共享文件（如 tinyxml）→ 让路，等稳定后再重建；
  构建失败先查 mtime 是否仍在变。

### 10.5 陈旧对象静默链接
- 全量 touch 重编后若二进制仍旧，检查 `.o` mtime 与链接是否真的使用新对象。

---

## 11. 修复后的快速验证清单
1. 单函数：`objdump -d --disassemble=<sym> ORIG/NEW` 并排 diff。
2. 对象级：`w4_compile.sh <src> /tmp/x.o && compare_auc_obj.py <CU> /tmp/x.o`
   （注意 @plt/G_TraceLog 内联别名/静态初始化噪声）。
3. 全量：`strict_compare.py <orig> <new> <fn_prefix> <tag>`（输出 strict/ext/full 三档）。
4. 修完共享头 → touch 所有包含者 → 全量重编 → 确认弱符号定义者已更新。

---

## 12. -O0 布尔/分发的「物化」形态（2026-08-09 补充）

### 12.1 `if (int 返回的调用())` 会物化 `setne`
```cpp
// 错（NEW）：call; test %eax,%eax; setne %al; test %al,%al; je
if (p->isVariableLength()) { A } else { B }
// 对（ORIG）：call; test %eax,%eax; je   ← 直接分支
```
复现 `test; je` 的两种写法：
- **三元**：`p->setSize(p->isVariableLength() ? a : b);`（条件直接测试）
- **switch**：`switch (p->isVariableLength()) { default: ...; break; case 0: ...; break; }`
  （`case 0` 在后、`default` 在前 → `je` 跳到 case0，default 内联；与 if/else 的
  分支直存形态一致）
- 注意：if/else 是「分支直存、test/je」；三元是「合并存储」；两者都要看 ORIG 选哪种。
  实例：`CMsgCell::PAD` 第一段用三元（合并到 setSize 实参）、第二段用 switch（直存 m_wSize）。

### 12.2 `== 0` / `!= 0` / `> 0` 都会物化
`if (f() == 0)` → `sete`；`!= 0` → `setne`；`> 0` → `setg`。均带 `test %al,%al`。
ORIG 的裸 `test %eax,%eax; je` 只来自三元条件或 switch 分派。

### 12.3 多路分发：switch vs if/else-if
`switch (n) { case 1: ...; case 2: ...; default: ... }` → `cmp; je; cmp; je; jmp default`。
if/else-if 链 → 逐条 `jne` 跳过。实例：`Script::get_key_val`。

---

## 13. 函数所属 TU 影响代码生成（关键！）
同一函数在「定义了被调方法」的 TU 与「只看到声明」的 TU 编译，帧大小/局部槽位可能不同：
- 实例：`CMsgCell::PAD` 在 CheckThread.cpp（同 TU 定义 tagPacketHeader::getSize/setSize
  /isVariableLength）→ frame 0x18、pPCK@-0x4；移到 ChannelService.cpp（仅声明可见）
  → frame 0x28、pPCK@-0xc，与 ORIG 完全一致。
- 判定：ORIG 的 DWARF CU（`readelf --debug-dump=info` 找 subprogram 的 CU）决定函数归属。
- 迁移函数到 ORIG 对应 TU 后再比对；不要只改函数体。

---

## 14. 表达式内联 vs 局部变量（决定栈存储）
- `tok.get_token(line, strlen(line))`（内联）→ strlen 结果直接进实参（ORIG）；
  `size_t size = strlen(line); tok.get_token(line, size);` → 多一次 `mov %eax,-0x10; mov -0x10,%eax`。
- `new T(a, b, strlen(b))`（内联）→ 先 `_Znwj` 再 strlen（ORIG 求值序）；
  先存 `size_t len = strlen(b);` 再 new → 顺序颠倒且多栈槽。
- 单次使用的局部尽量内联进调用表达式。

---

## 15. 64 位比较的寄存器形态
`__int64 gap = a - b;` 后：
- `return gap > C;` → 比较结果留在 ecx（mov $1/%ecx + 条件改 0），返回时 `mov %ecx,%eax`。
- `if (gap > C) return true; return false;` → **ORIG 形态**：`mov $1,%ecx; test %edx,%edx;
  jg; test; js; cmp $C,%eax; ja; mov $0,%ecx; test %cl,%cl; je; mov $1,%eax; ...`。
- `if (gap > C) return true; return false;` 中把被减数/减数内联进条件
  （`get_ms_tick() - getLastTickForIdleSession() > C`）→ 第二个调用结果留在 eax/edx 直接参与
  减法（ORIG）；先存局部 → 多 4 字节栈帧且减法操作数顺序相反。
- 实例：`isIdle`（`tickLast_ != 0 && gap > 0x927c0` 的 && 链 + 单一 return false）、
  `isIdleCheckTime`（if/else return + 内联调用）。

---

## 16. 死存储 / 未使用局部也会改变代码
- `int nErr = *__errno_location();`（不再使用）→ ORIG 保留 `call; mov (%eax),%eax;
  mov %eax,-0xc(%ebp)` 的死存储；空函数体则没有。实例：`UDPThread::logError`。
- 未使用局部可能占用槽位（影响后续局部偏移）：声明顺序先于其它局部时尤其如此。
- `return NULL;` 直接返回 vs `ret = NULL; ... return ret;`：前者在函数尾（析构调用前）
  用 callee-saved 寄存器（ebx）保存返回值；后者可能溢出到栈。实例：
  `TCPAcceptThread::lockPopAcceptedUser`。

---

## 17. do-while/for 循环条件形态（2026-08-09 补充）
- `do { ... } while (ret == true);` → `cmpb $0,-0xN; jne`（NEW）。
- **ORIG 形态**：`for (;;) { ...; if (!ret) break; }` → `movzbl ret,%eax; xor $1,%eax;
  test %al,%al; je L_loop`（返回循环顶）。
- 实例：`Script::load`（channel/bridge）。
- `if (ret)` / `if (ret == false)` 对 bool 局部：`if (ret == false)` 与 `if (!ret)` 产生
  `movzbl; xor $1; test; je`；`if (ret)` / `if (ret != false)` 产生 `cmpb; je`。
  实例：`Script::parse_channel_script`（`if (!ret)` + 单行 return false 命中 ORIG）。

---

## 18. errno 分发：switch 与 return 直出
- ORIG 常见 `int err = *__errno_location(); switch (err) { case 0x62: ...; case 0x63: ...;
  case 0: break; default: ...; }`（`cmp; je; cmp; je; test; je; jmp default`）。
  if/else-if 链 → `cmpl; jne` 逐个跳过（NEW）。实例：bridge `UDPSocket::bind`。
- errno 匹配分支的返回：ORIG `if (match) { log; return 0; } log; return -1;`
  （匹配分支 `je` 前置）；把条件写成 `!=` 反向后布局颠倒。实例：bridge `TCPSocket::send`。
- 命中后直接 `return 0;`（mov $0,%eax; jmp）vs `n = 0; return n;`（movl 到局部）。
  实例：bridge `UDPSocket::send/recv`、`TCPSocket::recv`。

---

## 19. 成员直接访问 vs getter 调用
- ORIG 常直接访问成员（`m_szConfigFileName`），不调用 getter（`-O0` 不内联 →
  getter 调用多 2 条指令）。
- 实例：`App::load_script` 用 `m_szConfigFileName`（成员，this+0x404 = 多态基类偏移 4 +
  成员偏移 0x400）；`sprintf(filename, "./cfg/%s.cfg", m_szConfigFileName);`。
- 附带：变参 printf 的多余实参（Ghidra 常见 `printf(fmt, a, b)` 的 b 不存在）要删。

---

## 20. len 局部必须传给系统调用
- `int len = 0x10; ::connect(sock_, &addr, len);`（ORIG 用局部，`mov -0xc,%ecx` 传入）；
  写成字面量 `0x10` → NEW `movl $0x10,0x8(%esp)`，且栈帧少一槽。
- 实例：channel/bridge `TCPSocket::connect`、`UDPSocket::recv`（`int fromLen` +
  `(socklen_t*)&fromLen` 复现 lea 位置）。

---

## 21. GCC __sync 内建展开差异（2026-08-09 auction）
- `__sync_add_and_fetch(&x, -1)` → NEW `mov $0xffffffff,%ecx; xadd; add`；
  **ORIG 形态**：`__sync_sub_and_fetch(&x, 1)` → `mov $1,%eax; mov %eax,%ecx;
  neg %ecx; mov %ecx,%eax; lock xadd %eax,(%edx); add %ecx,%eax`。
- 语义相同、机器码不同——选对内建名即可。实例：`StringData::decRef`。

---

## 22. 局部槽位整体平移：查 ORIG DWARF 局部清单
- ORIG 有而源码没有的「死局部」（声明未用）会占槽位、把其它局部整体下移。
  反之源码多余的局部也会平移。实例：`HandlerFor_TE_::onTIME_AUCTION_TRY_SHUTDOWN`
  的 ORIG 有 `pCharacter`（fbreg 96 → -0x18），但补上后槽位反而对不上
  （i 的分配序不同）——先看完整局部列表与声明序再决定。
- 判定工具：pyelftools 列 subprogram 的 DW_TAG_variable（含嵌套 lexical block）。

---

## 23. else-if 链的真实分支序（2026-08-09 channel）
- `else if (bufferSend_.isEmpty() == 0) { do-while } else { log Error(4) }` 的源码
  分支序与 ORIG 相反：ORIG 是 `setne; test; je L_do`（`isEmpty() != 0` 的 Error(4)
  inline、do-while 在尾部被 je 跳到）。源码应写成
  `else if (isEmpty() != 0) { Error(4) } else { do-while }`。
- 判别：`setne` vs `sete` 的物化 + je/jne 的跳转方向共同决定哪边 inline。
- 实例：`TCPUser::onWrite_`（Error(4) 与 do-while 交换后 setne 命中；函数内层
  `nSize<1` 等检查仍是 jle/jg 极性差异，逐区 success-first 处理）。

---

## 24. 守卫反置 + 常量边界（2026-08-09 channel TCPUser）
- `if (getHandle() > -1) { body } return -2;` → NEW `not; shr; test; je`；
  **ORIG 形态**：`if (getHandle() < 0) { return -2; } body` → `shr; test; je body`
  （body 后置为 je 目标，return -2 内联）。把条件写成 `< 0` 守卫而非 `> -1` 包裹。
- `if (sum < 0xa0000) { push } else { ... }` → `setle`；ORIG `setg` 来自
  `if (sum > 0x9ffff) { return -5; }` 守卫（常量是 0x9ffff 而非 0xa0000）。
- `SOCKET h = getHandle(); if (h < 0)` → 局部存储 + `cmpl; jns`；ORIG 直接
  `if (pSock_->getHandle() < 0)`（调用结果内联 → `shr; test; je`）。
- 实例：`TCPUser::send`（全部命中 → ext IDENTICAL 124/124）、`onWrite_`
  （do-while 双分支 + 双 nSent 检查 success-first → ext IDENTICAL 368/368）、
  `onWrite2Buffer`（结构已修，剩 ebx/esi 寄存器残差）。

---

## 25. 日志链的表达式内联 vs 命名局部（2026-08-09 channel）
- `gFileLogInfo << "..." << getACCID() << strerror(*__errno_location()) << bDisconnected_ << endl;`
  （内联）→ GCC 把三个子表达式算进 callee-saved 寄存器（esi/edi/ebx），跨 << 调用保持；
  先存命名局部（`unsigned int nAccID = getACCID();` 等）→ 全部溢出到栈。
- `getACCID()` 返回 int → `<<Ei`；若存成 `unsigned int` 局部再 `<<` → `<<Ej`。
- 实例：`TCPUser::onClose`（内联后寄存器形态命中，剩 dis/szError/nAccID 的
  esi/edi 互换与 `== false` 的 xor 物化残差）。

---

## 26. bridge 镜像与 iVar5 累加模式（2026-08-09）
- channel 的守卫反置 / success-first 修复可直接镜像到 bridge（同源代码）：
  `onWrite_`/`send`/`onWrite2Buffer` 全部 ext IDENTICAL。
- bridge 的 `onWrite2Buffer` ORIG 是「直接 return 常量」（`mov $-N,%ebx; jmp dtor`），
  但 DWARF 里没有 iVar5 局部——Ghidra 反编译的 `iVar5 = -N; ...; return iVar5;`
  累加模式会产生栈存储（`movl $-N,-0xc`）；改成直接 `return -N;` 后命中
  （仅成功路径保留 `int nRet` 局部，DWARF nRet@-0xc）。
- 注意 bridge 的 Error(4) 分支原本已在 do-while 尾部（与 channel 不同），
  镜像时勿重复添加。

---

## 27. `register` 关键字：-O0 下把变量留在 callee-saved 寄存器（2026-08-09 channel）
- `EpollReactor<T>::handleEvents` 的 ORIG 把 `n_event`/`i`/`s` 全部放寄存器
  （push edi/esi/ebx，无栈槽），NEW 全溢出 → DIFF。
- 原因：原版源码用 `register int n_event`、`register int i`、`register TSession* s`。
  加 `register` 后 prologue、比较、循环全部命中（仅剩数据地址/全局地址差异，
  ext/full 可达 IDENTICAL）。
- bridge 的 ORIG 是**溢出**形态（n_event@-0x18、i@-0x14、s@-0x10）——两棵树原版
  风格不同，镜像时先看 ORIG 再决定是否加 register。

## 28. `memset` 第一个参数的装载顺序（2026-08-09 TDebugTrace::endl）
- `memset(&obj, 0, N)` → `movl $N,0x8(%esp); movl $0,0x4(%esp); mov &obj,%eax;
  mov %eax,(%esp)`（常量先、地址后）。
- `memset(obj.m_Buf, 0, N)`（成员数组退化）→ `mov &obj,%eax` 先、常量后。
- ORIG 用成员数组形式（`in_Str.m_FormatBuf`）；`&in_Str` 形式不命中。

## 29. 局部变量类型影响 setcc/寄存器形态（2026-08-09 TDebugTrace::putText）
- `size_t sVar2 = strlen(s); ... snprintf(..., sVar2 + 1, ...)` → `lea 0x1(%eax),%ecx`
  （size 进 ecx，dest 进 edx）。
- `int sVar2 = strlen(s);`（原版类型）→ `add $0x1,%eax`（size 进 eax，dest 进 ecx）。
- 同一表达式因局部类型不同产生完全不同的寄存器分配；先查 ORIG DWARF 类型，
  无 DWARF 时用「哪个形态命中」反推（本函数 DWARF 无局部变量，靠试编译确认 int）。

## 30. 数组局部声明顺序与尺寸（2026-08-09 TDebugTrace::putValue）
- 槽位按「声明顺序」：先声明者地址更低（更远离 ebp）。
- ORIG：`char tmp[12]; char fmt[12];`（tmp 在前、两者 12 字节）→ fmt@-0x20、
  tmp@-0x14；源码若 `char fmt[12]; char tmp[16];` → fmt@-0x14、tmp@-0x24。
- `snprintf(&m_FormatBuf[mPos], ...)`（下标）→ 基址加在 eax 上；
  `snprintf(m_FormatBuf + mPos, ...)`（指针加法）→ 基址先进 edx、索引进 eax、add。

## 31. 循环递增顺序：`for(i=0;i<N;i++)` vs 体内自增（2026-08-09 CSHA）
- `for (i...) { body; pc += 4; }` → 编译序：body、pc+=4、i++、条件。
- ORIG 若先 `i++` 再 `pc += 4` → 源码是 `for (i=0; i<N; ) { body; i++; pc += 4; }`
  （空增量 + 体内自增），或 while 形态。
- 实例：`CSHA::FinalDigest` 的 `for (i<8)` 与 `Transform` 的 Bytes2Word 循环。

## 32. 函数作用域循环变量 vs 循环内声明（2026-08-09 CSHA::Transform）
- 两个循环各自 `for (int i...)` → gcc 分配两个槽（i1@-0x10、i2@-0xc）。
- 函数作用域 `int i;` 共用 → 一个槽（@-0x30），与 ORIG 一致。
- 同理，n0..n7/T1 若声明在函数顶部（循环之前）→ 槽位在循环变量之下；
  ORIG 声明在循环之后 → 槽位在循环变量之上（先声明者地址更低）。
- `Transform` 的 W 展开：`uint uVar1 = sig1(...); uVar2 = ...; uVar3 = ...` 命名临时
  变量会溢出 12 字节；写成单个表达式 `W[i] = sig1(W[i-2]) + W[i-7] + sig0(W[i-15])
  + W[i-0x10];` → 寄存器累加（esi），帧从 0x154 缩回 0x140，与 ORIG 一致。

## 33. 布尔检查：`if (!x)`/`if (x == false)` 会物化 `xor $0x1`
- bool 成员/局部上 `!x`、`x == false`、`x == 0`、`x != true` 在 -O0 全部
  `movzbl; xor $0x1; test; je`。
- 空 then + else 体：`if (x) {} else { body }` → 直接 `test %al,%al; jne skip`。
- 实例：`TCPUser::onClose` 的 `if (bDisconnected_) {} else { destroyTCPUser... }`。

## 34. 比较操作数顺序决定 setcc（2026-08-09 ChannelService::onCS_GET_SCRIPT）
- `if ((int)nLen < getScriptFileSize())` → 先把 nLen 装入 ebx、call 后
  `cmp %eax,%ebx; setl`。
- `if (getScriptFileSize() > (int)nLen)`（原版顺序）→ `call; cmp -0x18(%ebp),%eax;
  setg`（调用结果在左）。
- 语义相同、助记符 setl/setg 不同：先看 ORIG 的操作数顺序再写表达式。

## 35. assert 的 strlen 内联（2026-08-09 Script::on_keyval_tag）
- `if (parent_tag[0] == '\0') assert(strlen(parent_tag));` → 编译出**两次**
  `parent_tag[0]` 检查（if 一次 + assert 的 strlen builtin 一次）。
- ORIG 只有裸 `assert(strlen(parent_tag));`（单检查，strlen 被 builtin 展开成
  首字节测试），行号 162 即 assert 行。

## 36. 工具链不可复现的 -O0 伪影（记录用，勿死磕）
- `TCPSocket::shutdown`：ORIG 有 `cmp $0xffffffff,%eax`（对 sock_ 的丢弃比较），
  任何源码写法（`sock_ == -1;`、空 if、switch）都会被我们的 gcc 消除，差 1 指令。
- `TGlobalInstance<TextOutputDevice_stdout>::create`：ORIG 在 memset 后直接
  `call C1Ev`（无 `_ZnwjPv`）；placement new 语法在我们工具链必然产出
  `_ZnwjPv` 调用，疑似 4.4.6 头文件差异，差 3 指令。
- `TCPUser::onClose` 尾部：ORIG 有 `jmp epilogue; nop`（else 体显式跳转 +
  skip 标签 nop），当前源码形态不产生，差 2 指令。
- `Script::get_server_section`：ORIG 把每个 `return false` 块放在下一个 if 分支
  之后（je/jne 布局交错），当前源码生成内联块或合并块，差几指令但语义一致。
- `TDebugTrace` putText/putValue、`CSHA::AddData` carry 检查：setcc 用 al vs bl
  的寄存器选择差异，语义一致。

## 37. 64 位比较的 Ghidra 式条件还原（2026-08-09 bridge TCPUser::isIdle）
- 原源码 `(gap < 1 && (unsigned int)gap < 0x124f81)` 是 Ghidra 反编译产物，
  语义**错误**：对 gap∈[1,0x124f80] 返回 true，ORIG 返回 false。
- ORIG 反汇编：`js 高字; jg 高字→true; jbe 低字(0x124f80)→false`——
  等价于 `if (tickLast_==0||gap<0) return false; if (gap>0) return true;
  if ((unsigned)gap<=0x124f80) return false; return true;`。
- 复合条件单 return 与顺序 return 均无法复现 ORIG 的「合并 false 块」布局
  （gcc -O0 各自内联 `mov $0`），语义已修正，布局为伪影。

## 38. Ghidra 式 `bool bVar1` 局部（2026-08-09 auction WideString）
- `bool bVar1; if (大条件) { bVar1 = false; } else { bVar1 = true; } return bVar1;`
  → gcc 分配栈槽（sub $0x10）并把 bVar1 溢出（movb %al,-0x1; movzbl）。
- ORIG 是纯叶函数（无 frame）：直接 `return false;` / `return true;`。
- 实例：`WideString::isupunct`/`isuspace` —— 去掉 bVar1 后严格 IDENTICAL。
- isupunct 还需「条件反置」：`if (!(排除链)) return true; return false;`
  （ORIG 的 TRUE 块在前，`if (排除链) return false` 会让 FALSE 块在前，
  全部分支目标偏移 7 字节）。

## 39. `* 4` 的 lea vs shl（2026-08-09 auction）
- **先查 DWARF 类型形态，再判伪影**（2026-08-09 修订，原「不可复现」结论作废）：
- 该家族实为**两个不同机理**，处理方式截然不同：
- **子类 A：数组下标地址的 PLUS**（`base + idx*scale` 作为地址）
- - ORIG `lea (%edx,%eax,1),%eax`（和为目的地=基址寄存器）vs NEW
-   `add %eax,%edx`（目的地=比例寄存器）——取决于 gimplify 树的操作数顺序，
-   而树顺序由**数组类型形态**决定：
- - 反例（已修）：`gNumberToStringBuffer` ORIG DWARF 类型 = `char[8][0x40]`
-   （subrange 7/63），若源码写成 `char[0x200]` + `&buf[index * 0x40]`，
-   PLUS 以比例寄存器为目的地 → `add`；改回二维数组 + 自然下标
-   `sprintf(gNumberToStringBuffer[index], ...)` → 与 ORIG **逐指令一致**
-   （`NumberToString(unsigned)` 22/22、`NumberToString(unsigned long long)` 29/29，
-   仅剩 rodata 格式串地址，ext/full 口径归一化）。
- - 判定法：读 ORIG DWARF 变量 `DW_AT_type` 的 subrange 链；shape 不符就改声明，
-   这同时满足「类布局/字段严格照 DWARF」的硬性要求。
- - 剩余 `RecvBuffer::Parse`/`DBDispatcher::dispatch` 的 lea/add 属于更宽的
-   帧与局部布局差异（§63/§81 类），不是纯数组形态，需整体对齐局部集。
- **子类 B：裸乘 `len * 4`（memcpy 长度等临时值）**
- - ORIG 偶发 `lea 0x0(,%eax,4),%reg`（保留源寄存器、1 条）；NEW 恒为
-   `shl $0x2,%eax; mov %eax,%reg`（2 条）。
- - 实测方向会**反转**：`WideString::C2(PKw)` ORIG 是 `shl+mov`、NEW 反而
-   是 `lea`——证明是逐函数寄存器分配翻转，非编译器固定偏好。
- - 尝试矩阵（全部无效）：`-mtune=i386/i486/i586`、`-march` 全族、
-   `-maccumulate-outgoing-args`、`-g`、gnu++98、十余种 `-fno-*`、
-   4.4.4/4.4.6-3/c6 后端、命名局部/指针算术/整型算术/强转各种写法。
-   `-mtune≤i586` 能强制地址求和变 lea，但会把全二进制 outgoing-args 切成
-   push 风格（ORIG 是槽式），引入海量新 DIFF，不可用。
- - 结论：子类 B 确认为工具链调度伪影，语义等价即可（实例：`WideString::assign(PKwi)`、
-   `concat` ×3、`insert` ×2、`remove`、`trimLeft`、`WideString::C2(PKwi)`）。
- - 连带：±2 字节指令差异会使同函数内 `jmp <T> +0x62` vs `+0x60`（trimLeft/
-   CharString::assign 等），归一化目标符号后仍差 2——是布局后果，非独立缺陷。

## 40. 栈槽按「反声明序」分配（2026-08-09 auction HandlerFor_DB_）
- GCC 4.4 -O0 给局部变量分配栈槽时，**最后声明的变量地址最高**（最靠近
  -0x1c/-0x20），最先声明者地址最低——与直觉相反。
- 实例 `onAUCTION_DB_REGIST_ITEM`：ORIG 槽位 db@-0x28、pContext@-0x24、
  expire_time@-0x20、ret@-0x1c ⇒ 源码声明序应为 `db, pContext, expire_time, ret`。
  写成 `expire_time, db, pContext, ret` 会产生整体 +8 平移。
- 实例 `GetAuctionMainFetchResult`：ORIG bRet@-0xd、i@-0xc ⇒ 声明序
  `bool bRet; int i = 0;`（bRet 先声明，地址更低）。
- 验证方法：改声明序 → 增量编译 → diff_sym 看槽位是否贴合。

## 41. 命名局部 vs 内联进 set_query/snprintf（暂存区承接）（2026-08-09 auction）
- `unsigned char separate_upgrade = ...GetUpgradeSeparate();` +
  `char* guid_str = db->blob_to_str(...)` 作为命名局部，会让 GCC 在「小局部区」
  分配两个槽位（如 -0x20/-0x21），后续暂存时再复制 → 整体槽位 +8、多 1-2 条 mov。
- ORIG 反汇编显示：**无命名局部**，GetUpgradeSeparate/blob_to_str 的返回值直接
  由 snprintf/set_query 变参求值（右到左）落入底部暂存槽（-0xdc/-0xd8 等）。
- 修复：删除命名局部，把表达式直接内联进调用实参。实例 `insertPackageData`：
  内联后 419/419 仅剩数据地址（ext/full IDENTICAL）；`onAUCTION_DB_REGIST_ITEM`、
  `onAUCTION_DB_EXPIRE_HISTORY` 同样受益。
- 注意：EXPIRE_HISTORY 与 REGIST_ITEM 的 `randomOption`+set_query 文本几乎相同，
  批量补丁极易打错函数——先确认函数名上下文再改。

## 42. `return 2` 直出 vs `ret = 2` 共享尾（2026-08-09 auction insertPackage）
- ORIG 错误路径是 `return 2;`：`mov $0x2,%eax; jmp epilogue`（eax 直出，跳过
  共享尾的 `mov ret,%eax`）。
- 写成 `ret = 2;` 后走共享尾 `movl $2,-0x1c; jmp +mov ret`，多 1 条且跳转目标偏移。
- 外层 `if (ret == 0) {...} return ret;` 与内层 `if (ret != 0) return ret;` 的
  代码生成不同：外层 else 路径会「复制装载 + 直跳 epilogue」（je 跳块），内层
  早退会「jne 跳共享尾」。insertPackage 最终形态：
  `if (ret != 0) return ret;`（外层）→ `if (ret == 0) {fetch/get_uint}`（内层）
  → `return ret;`（尾）。

## 43. 用 DWARF 行号表定位 ORIG 语句（2026-08-09 auction）
- `dwarfinfo.line_program_for_CU(cu)` 可把地址映射回 ORIG 源码行号，用于判断
  某条指令属于哪条语句、以及相邻语句的边界。
- 实例 `onAUCTION_DB_REGIST_ITEM`：行 757/758 是两条独立语句，反汇编为
  `movb $0,-0x35; movb $0,-0x4f`（两个名字数组的 +13 字节）——据此还原出
  `owner_name[13] = '\0'; buyer_name[13] = '\0';`，并确认 ORIG **没有**
  `expire_time = 0;`（该语句在我们源码里多出一条 movl）。
- 行号是元信息，不追求一致；但行号表能纠正对语句结构的猜测。

## 44. 无符号字节移位 `shr %al` vs `sar %eax`（2026-08-09 auction）
- ORIG 对 `(unsigned char)x >> 5` 之类表达式发 `shr $0x5,%al; movzbl %al,%eax`
  （字节模式逻辑移位）；本工具链一律先提宽为 int 再 `sar $0x5,%eax`
  （或 `movzbl %al,%eax; sar`）。值域 0-255 下 sar==shr，语义一致，指令数相同，
  属工具链不可复现伪影（已试过 5 种写法：直接移位、内层 cast、外层 cast、
  unsigned char 局部、`(x>>5)&0xff`，均不出 shr %al）。
- 同类：`(x & 0x1f)` 的暂存，ORIG 在 eax 内 and+movzbl，NEW 会 `mov %eax,%edx;
  and %edx`——寄存器偏好伪影。

## 45. 64 位值 ebx:esi 常驻 vs 栈溢出（2026-08-09 auction）
- ORIG `unsigned long long updated = db->getAffectedRowCount();` 的返回值在
  后续 sysLog 传参时仍在 ebx:esi（`mov %eax,%ebx; mov %edx,%esi`）；NEW 会
  溢出到 -0x1c/-0x20 再重载（多 2 条、帧 +16）。声明位置改动无效，寄存器分配
  差异，语义一致。

## 46. `cmpl $imm,mem` 内存直比 vs 先 mov 到 eax（2026-08-09 auction）
- 同一变量反复与常量比较：声明为 `int` 且不加强转时，GCC 发 `cmpl $imm,-0x1c(%ebp)`
  （内存操作数）；声明为 `unsigned int` + `(int)` 强转时，会先 `mov -0x1c,%eax`
  再 `cmp`（每条 +1）。
- 实例 `insertPackageData`：`int check_category`（无强转）+ 条件
  `x >= 0x36b1 && x <= 0x36b4` 后 cmpl 形态对齐；强转版多 2 条。

## 47. 长度判断 `len > 0xff` 与 `len < 0x100` 的块序（2026-08-09 auction）
- `if (len < 0x100) {A} else {B}` 与 `if (len > 0xff) {B} else {A}` 语义相同，
  但 GCC -O0 的 then/else 块落位相反（jbe/ja 极性互换），整段后续地址偏移。
- 对 ORIG 直接写 ORIG 的条件形态：`if (sendPackageInfo->letter_text_length > 0xff)
  { letter_text[0xff]=0 } else { letter_text[len]=0 }` 才能复现 jbe 布局。

## 48. 区间判断的 then/else 形态决定 jle/jg 落点（2026-08-09 auction）
- `else if (x < 0x36b1 || 0x36b4 < x) {双0} else {creature=1}`（De Morgan 形式）
  会把「双 0」块放 fall-through、creature=1 块跳转到后部；
- ORIG 是 `else if (x >= 0x36b1 && x <= 0x36b4) {creature=1} else {双0}`
  ——creature=1 块 fall-through，双 0 块在尾部（jle/jg 直跳尾部）。
- 必须按 ORIG 的正向区间形式书写，勿用 De Morgan 反写。

## 49. 比较操作数 `owner_id != receiver` 的载入寄存器（2026-08-09 auction）
- `(int)sendPackageInfo->receiver` 的强转会改变两侧求值的寄存器分配：
  ORIG `mov 0x1d(%eax),%eax; mov %eax,%edx`（2 条）vs 强转版
  `mov 0x1d(%eax),%edx`（1 条）。去掉强转（int vs unsigned 比较，等值语义
  相同）后复现 ORIG 的 2 条形态。此类 1 指令差异是"寄存器分配随强转变化"的
  又一实例，靠 diff_sym 逐函数比对才能发现。

## 50. DWARF 参数名要照抄（2026-08-09 auction DNFFileLog）
- `CToolFileLog::operator()` 的第二个参数在 ORIG DWARF 里叫 `no`（不是我们
  源码的 `seq`）。参数名不影响代码生成，但用户要求类/字段/变量名严格照 DWARF。
- 用 elftools 按 DW_AT_specification 找类名（CMyFileLog/CMyRawFileLog/
  CToolFileLog 的 operator() 声明行 91/101/109），确认每个函数真实参数表。

## 51. 赋值在条件内才物化比较（2026-08-09 auction GET_ROI_AVERAGE_PRICE）
- `ret = call(); if (ret == 0) break;`（先赋值再判）→ `cmpl $0,ret; je` 直跳；
- `if ((ret = call()) == 0) break;`（赋值在条件内）→ `cmpl $0,ret; sete %al;
  test %al,%al; jne`（比较结果物化，ORIG 形态）。
- `if (!ret)`（int）同样直 je；bool 变量的 `== 0` 则走 `xor $0x1` 物化。
- 10 处循环 get_* 检查全部改成「赋值在条件内」后 sete 全对齐；剩余 lea vs
  `add+mov`、`mov 0x15(%eax)` vs 基址+`(%eax)` 为寻址形态伪影（§39 族）。

## 52. switch case 体顺序用行号表还原（2026-08-09 auction SEND_PACKAGE_BY_EXPIRE）
- GCC -O0 按源码顺序放置 case 体；ORIG 的 case 顺序（行号 1912/1940/1960/1975）
  是 2,1,3,0，与我们的 1,0,2,3 不同 → case 体整体错位（jmp/je 目标差 0x80+）。
- 用行号表把每个 case 体的首地址映射到行号，即可推出 ORIG 的 case 书写顺序。
- 重排后该函数 352/352 仅剩数据地址（ext/full IDENTICAL）。

## 53. bool 条件 `== 0` 物化 xor，正条件直 test（2026-08-09 auction）
- `if (boolVar == 0) {A} else {B}` → `movzbl; xor $0x1; test; je B`（xor 物化）；
- `if (boolVar) {B} else {A}`（正条件、分支互换）→ `movzbl; test; je A`（直 je，
  ORIG 形态）。语义相同，块序不同。
- 实例：case 0 的 `b_exist_buyer` 分支，正条件改写后对齐。

## 54. `if ((ret = call()) != 0)` 物化 setne（2026-08-09 auction GET_REGISTED_ITEM）
- `ret = call(); if (ret != 0)`（先赋值再判）→ `cmpl $0,ret; je` 直跳；
- `if ((ret = call()) != 0)`（赋值在条件内）→ `cmpl $0,ret; setne %al;
  test %al,%al; je`（ORIG 形态，与 §51 的 `== 0`→sete 对称）。
- 实例：AddAvatarEmblemInfo/AddAvatarExpansionInfo 两处错误检查。

## 55. int vs unsigned 局部改变成员调用求值顺序（2026-08-09 auction）
- `if (G_Auction()->IsAvatarCategory(local))`：
  - `int local` → this 先求值（call G_Auction 在前），参数经 **edx**（ORIG 形态）；
  - `unsigned int local` → 参数先载入 **ebx**（callee-saved）再过 this 调用（+1 指令序差异）。
- 实例：`item_category_temp` 由 `unsigned int` 改 `int` 后，最后一个助记符差异消除。
- 验证：最小 harness 复现两种形态，再反推 ORIG 的声明类型。

## 56. 单次 pPool/pSendPool 命名局部内联（2026-08-09 auction）
- `CommonDataPool* pPool = ...getCommonDataPool(...); Message* m = pPool->getSendMessage(u);`
  会多出 `mov %eax,-slot; mov -slot,%eax` 的栈槽往返；
- ORIG 直接 `...getCommonDataPool(...)->getSendMessage(u)`（结果直喂 this，
  无局部）。同类：REGIST_GA 的 `pPool->createCharacter()`。
- GET_REGISTED_ITEM 两个发送循环内联后 -4 指令。

## 57. `register TCPUser* pTCPUser` 常驻 ebx（2026-08-09 auction）
- 发送循环里 `TCPUser* pTCPUser = pSession->getTCPUser();` 会溢出到栈槽
  （`mov %eax,-0x34; ... mov -0x34,%edx; mov %edx,0x4(%esp)`，每循环 +1）；
- ORIG 是 `mov %eax,%ebx`（寄存器局部），`register` 关键字复现（§27 同类）。
- 加 register 后 GET_REGISTED_ITEM 704→702。

## 58. 指针/局部 `== 0` 的 sete 物化不可普遍复现（2026-08-09 auction）
- 指针 `if (p == 0)`、`if (p == NULL)`、`if (!p)` 五种子写法在本工具链都直
  `cmpl $0; jne`；ORIG 的 `sete %al; test; je` 只出现在「赋值在条件内」形态
  （`if ((p = fopen(...)) == 0)`）。
- 但该形态在 importAvatarColorVariation 里让循环多出 2 条 jmp+nop（净变差），
  已回退——这类「对齐一处、恶化另一处」的权衡要整函数评估后再决定。

## 59. 比较 RTL 方向（setle vs setge）不可控（2026-08-09 auction）
- `limit <= mQueueSize`（limit 为 register 局部）：本工具链发 `cmp %ebx,%eax;
  setge`（compare(rhs,lhs)），ORIG 发 `cmp %eax,%ebx; setle`（compare(lhs,rhs)）。
- 已试 5+ 种等价写法（>= 反写、局部中转、三层调用链），均不出 ORIG 方向；
  语义一致，属编译器 RTL 生成差异，记录为不可复现。

## 60. build-point.sh 不检查头文件依赖（2026-08-09）
- build-point.sh 只按 `.cpp` mtime 判断重编（`$base.h` 不参与），头文件改动
  不会触发受影响 TU 重建（§10.2 同类）。修复流程：`touch` 受影响 `.cpp` 后重跑。
- 注意源目录搜索顺序（basic_source 优先于 common_source），要 touch 实际被
  编译的那份源文件。

## 61. if/else 整块互换 + 条件反置（2026-08-09 auction EpollReactor）
- ORIG 常把「else 块」放在 fall-through（`jne/jg` 直跳 then 块）：事件循环里
  accept 块、0xf5/0x103 掩码块都是如此。必须把源码写成正条件 + 分支互换：
  `if (!A && !B && !C) {accept} else {event}`（De Morgan 反写），而不是
  `if (A || B || C) {event} else {accept}`。
- 判定法：看条件检查后的第一条分支指令跳向哪块——je/jne 的目标是 then 还是
  else。一次性换块可消除 0x80+ 的块布局差异。

## 62. 模板头改动与弱符号多实例（2026-08-09 auction Reactor.h）
- Reactor.h 是模板头，改动后 build 脚本不会自动重编引用 TU——需 touch 实际
  实例化该模板的 .cpp（如 TCPThread/TActiveConnect）再跑构建。
- 模板成员是弱符号，链接器从多个实例化 TU 中挑一个进最终二进制；必须把所有
  含该符号的 .o 都重编，否则比对的是旧实例（getNativeEventFilter 教训）。

## 63. 语义重复的局部要合并（2026-08-09 auction RecvBuffer::Parse）
- `unsigned int parsableLength = ...; unsigned int lenCheck = parsableLength;`
  两个同值局部会让 GCC 各占一个栈槽（且多一次拷贝）；ORIG 只有一个
  `unsigned int lenCheck`，后续 `(int)lenCheck < msgSize` 直接复用。
- 教训：Ghidra 反编译常把同一变量拆成两个命名，合并回单一局部才能对上槽位。

## 64. bool 局部物化位置不可控（2026-08-09 auction RecvBuffer::Parse）
- `bool bOversize = (A || B); if (bOversize) return false;`：
  - 普通局部 → `mov %al,-slot; cmpb $0,-slot`（栈槽往返）；
  - `register bool` → `mov %eax,%ebx; test %bl,%bl`（callee-saved）；
  - ORIG 是 `test %al,%al`（留在 eax，无转移）。三态都试过，eax 形态不可复现。
- 同函数还有：lenCheck 的 `mov+cmpl` vs `cmpl mem`、`lea` vs `add`、
  jle/jge 与 jl/jg 的 RTL 方向（§59）——均为工具链伪影，语义一致。

## 65. switch 值命名局部会多一层栈往返（2026-08-09 auction WorkThread::loop）
- `char msgType = recvMessage->mMsgType; switch (msgType)` → 额外
  `mov %al,-slot; movsbl -slot,%eax`（存储+重载）；
- `switch (recvMessage->mMsgType)`（无命名局部）→ ORIG 直接比较 al。
- 同类：`err` 检查改 `if ((err = call()) != 0)`（赋值在条件内 setne，§54）。
- 该函数剩余 ~22 条差异全为 case 内局部往返（dispatch 参数、acUser 字段、
  64 位 Message::ident 暂存）——语义一致，工具链伪影。

## 66. 常量乘减的前端分发折叠（2026-08-09 auction MY_BIDDING_INFO_GP）
- `0x1d69 - X * 0x7d` 被 cc1plus_446 前端分发成 `X * (-0x7d) + 0x1d69`
  （imul 负常量 + add）；ORIG 4.4.6-3 不折叠，保留 `mov $0x3c; sub;
  imul $0x7d; 0x1d69 - result`（正乘后 sub）。
- 中间局部（`int t = 0x3c - n; setSize(0x1d69 - t*0x7d)`）只能阻止
  `0x3c*0x7d` 的完全折叠，减号仍会分发——语义一致，指令形态不可复现。
- 同类批量内联（§56）注意：11 个站点的批量替换要连双发送第二处一起，
  否则编译失败；批量后全量 DIFF 183→179。

## 67. 多区间判定用单条 OR 链共享 return 块（2026-08-09 auction）
- 多条 `if (A && B) return true;` 会各自物化 `mov $1,%eax; jmp`（+10 条）；
- 单条 `if (A1&&B1 || A2&&B2 || ...) return true; return false;` 让 GCC 共享
  一个 return-true 块（每个区间 `jle` 跳过，命中末段 `jle` 跳共享块）——严格
  IDENTICAL（IsAvatarCategory 31/31、isEmblemAvatar 23/23）。
- 跳表 switch 的 base 选择：`switch (x % 10)`（cases 2-9）→ base-0 10 项表；
  `switch (x % 10 - 2)`（cases 0-7）→ base-2 8 项表 + `lea -2`（isValidEmblemAvatar）。

## 68. 直接 return 消除 result 局部物化（2026-08-09 auction Search）
- `if (p==0) { result=0x24; } return result;` → 本工具链必把 result 物化到栈槽
  （`movl $0x24,-0xc(%ebp); mov -0xc(%ebp),%eax`）；
- ORIG（DWARF 有 `result` 局部但代码是死变量）用 `mov $0x24,%eax; jmp` 直出。
- 修复：全部改用 `return 0x24;` / `return 0;`，并**保留 `int result;` 声明不删**
  （gcc 对未使用声明仍出 DWARF 变量条目，保住局部名合规）。GetRegisteredInfo 67/67。
- 若 result 还有真实使用（如 GetAuctionItemInfo 的 GetItemAveragePrice 返回值），
  result 照常用；只有纯赋值后返回的分支改直 return。

## 69. 外层 if/else + 独立 if 的早退块布局（2026-08-09 auction Search）
- ORIG 常见形态：`if (A) { 取数 } else { return err; } if (B) { return err; } 主体;`
  生成 `je err1; 取数; je err2; jmp 主体; err1; err2; 主体`（err1/err2 相邻在主体前）。
- 嵌套在 if 里（`if (A) { if (B) ... } else ...`）会生成不同块序，DIFF。
- 行号表（decodedline）可直接还原块顺序：err1 行号 < err2 行号 < 主体行号即此形态。
- 已用于 GetRegisteredInfo（67/67 严格 IDENTICAL）与 GetAuctionItemInfo 主干。

## 70. 三目包表达式 vs if/else 赋值的公共 store（2026-08-09 auction SetOperateParameter）
- `gap = (c<25000) ? (c-0x59d8) : (c-0x61a8);`（三目包**整个减法表达式**）→
  分支内各 reload c + sub 常量，末段一个公共 `mov %ax,-slot`；与 ORIG 完全一致。
- `if (c<25000) gap=c-0x59d8; else gap=c-0x61a8;` → 每个分支各自 store（重复 store），DIFF。
- `gap = c - (c<25000 ? 0x59d8 : 0x61a8);`（三目只包常量）→ 先预载 c 到 edx、
  再物化常量相减，DIFF（多了 `mov 0xc(%ebp),%eax; movzwl 0x4(%eax),%edx`）。
- 分支里再嵌套 `pOperate->category = (c<25000) ? (gap+19000) : (gap+21000);` 同规则。
- 修复后 SetOperateParameter 仅剩日志格式串地址（扩展口径归一化）。

## 71. 嵌套 if 替代 `&&` 避免布尔物化（2026-08-09 auction GetAuctionItemInfo）
- `if (!isEmpty() && !isMatching()) return 0x24;` → gcc 物化 `mov $1,%eax;
  mov $0,%eax; test; je`（把 && 结果存到栈/寄存器再判）；
- ORIG 是两条独立 `call; xor $0x1,%eax; test %al,%al; je 成功`，中间无物化。
- 改嵌套：`if (!isEmpty()) { if (!isMatching()) { return 0x24; } }` → 与 ORIG 逐条一致。
- 同一函数剩余只有排序 end 指针的 `add $0x16` 折叠伪影（见 §39/§80）。

## 72. 循环内 `break` 共享尾部 return（2026-08-09 auction Search/ProcessMostRecentExpireItem）
- 循环里 `if (cond) return 0;` 且循环后有 `return 0;` → 本工具链内联
  `mov $0,%eax; jmp exit`（两处 return 各自生成）；ORIG 合并到尾部单一出口。
- 改 `if (cond) break;` + 循环后单一 `return 0;` → 与 ORIG 完全一致
  （SetSearchResult、SearchByItemIdUpgrade 均严格 IDENTICAL）。
- 多分支错误路径同理：`if (err==0x2c) break; log; break;` + 末尾
  `return error_code;`（Auction::ProcessMostRecentExpireItem，仅剩日志串地址）。

## 73. 局部声明顺序按 DWARF decl_line 排（2026-08-09 auction 多函数）
- gcc -O0 的栈槽分配与声明顺序强相关：DWARF 里 decl_line 靠前的局部
  （如 GetRegistedItemInfo：error_code 2376 → ptr_auc_data 2378 → ptr_data 2380 →
  id_list_iter 2381）若源码顺序颠倒，槽位整体互换（-0x14/-0x10 对调）→ DIFF。
- 修复：把顶层局部按 DWARF decl_line 重排；块内局部（如 ptr_data 在 else 里用）
  也要提升到与 DWARF 一致的层级。GetRegistedItemInfo/GetBiddingInfo 靠此对齐槽位。
- 槽位整体平移（如全部 -0x10）通常是多了非 DWARF 局部（pItemInfo/pPool/sVar4 等），
  删除并内联后帧大小回归（见 §78）。

## 74. ORIG 死变量语义要照抄（2026-08-09 auction GetBiddingInfo）
- ORIG 的 error_code 局部在 break 路径赋值（0x29/0x24），但函数末尾
  `mov $0x0,%eax`（永远 return 0，error_code 从不读回）——原版就是这样。
- 重建必须 `return 0;` 而不是 `return error_code;`，否则语义不等价。
- 行号表 + 反汇编尾部可确认：break 跳转目标落在 `*pInOutItemNum=index_cnt;
  mov $0,%eax; epilogue`，error_code 槽位之后无任何读取。

## 75. `result = result + f()` vs `result += f()`（2026-08-09 auction Search::Delete）
- `result += OperateBy...(…)` → `add %eax,-0x1c(%ebp)`（单条内存加法）；
- ORIG 是 `mov -0x1c(%ebp),%edx; add %edx,%eax; mov %eax,-0x1c(%ebp)`。
- 改显式 `result = result + OperateBy...(…)` → 与 ORIG 一致。Delete 全函数对齐
  （仅静态地址，扩展口径归一化）。

## 76. `iter != end` 包 body + else 错误块（2026-08-09 auction GetRegistedItemInfo）
- `if (iter == end) { err; break; } body;` → 本工具链生成 `call eq; test; je body`
  （eq 方法 + body 落 je 目标）；ORIG 是 `call ne; test; je err`（ne + err 落 je 目标，
  body 顺落）。
- 改 `if (iter != end) { body } else { err; break; }` → 与 ORIG 同形
  （`call ne; test; je err_block; body...`）。仍剩 1 条比较载入伪影（§81 类）。

## 77. 临时 map 指针 + NULL 检查要照抄（2026-08-09 auction GetAvatarColorName）
- ORIG 有 DWARF 局部 `tempMap = &avatarColorInfo.avatarColorNameMap`（指针），
  且随后 `if (tempMap == NULL) return "";`（对必然非空指针做空检查）。
- 直接 `avatarColorInfo.avatarColorNameMap.find(...)` 少了 tempMap 槽位与空检查 → DIFF。
- 补上后 GetAvatarColorName 仅剩 `""` 常量地址（扩展口径归一化）。

## 78. 多余反编译局部导致帧整体变大（2026-08-09 auction 多函数）
- 反编译器命名局部（pItemInfo/pPool/sVar4/pSVar9/pacVar10/dVar9/itemId/
  itemUpgradeValue/itemRefineValue/sub_result 等）大多不在 DWARF → 栈帧 +0x10~0xa0。
- 规则：非 DWARF 局部一律删除，把表达式内联进调用点
  （`mpAuction->GetItemInfo(id)->category_`、`GetItemId()` 直接作实参、循环条件直写）。
- 只有 ORIG 明显暂存的值（如 commission_rate 的 FP 暂存）保留局部。
- Purchase：删 dVar9/sVar7/itemRefineValue/price_00/itemUpgradeValue/uVar8 后帧对齐，
  剩 FP 暂存槽位与 sort 折叠伪影。

## 79. FP 除法暂存要提前（2026-08-09 auction Purchase）
- `(double)price / 100.0` 若在两个分支各写一次，gcc 不公共子表达式提升（-O0）；
  ORIG 在 owner_type 分支**之前** `fildl price; fldl 100.0; fdivrp; fstpl -0x68`
  暂存一次，分支内只 `fmull -0x68`。
- 保留 `double commission_rate = (double)price / 100.0;` 命名局部（虽不在 DWARF，
  但这是复现 ORIG 暂存形态的唯一途径），并把两条分支写成
  `commission = (int)(Get*Commission() * commission_rate);`。

## 80. 排序 end 指针的 add 折叠不可复现（2026-08-09 auction 多处）
- `std::sort((short*)&k.option_index_key, (short*)((int)&k.option_index_key + 6))`
  ORIG 折叠为 `lea base; add $0x16,%eax`；本工具链必拆成 `add $0x10; add $0x6`
  （或 `lea 0x6(%eax)` 位移折叠）。
- 试过 `+3`（指针算术）、`&arr[3]`、`(char*)+6` 均不产生 `add $0x16` 单条形态。
- 1 条指令伪影（§39 同类），记录即可；GetAuctionItemInfo/Purchase 均为此。

## 81. 比较载入的 `mov mem,%eax; mov %eax,%edx` 伪影（2026-08-09 auction）
- `if (*pInOutItemNum == index_cnt)`（静态 int 比较）：ORIG 生成
  `mov (%eax),%eax; mov %eax,%edx; mov idx,%eax; cmp %eax,%edx`（多一条 mov）；
  本工具链直接 `mov (%eax),%edx`。操作数互换（`index_cnt == *p`）无影响。
- 同类：Char2Hex 表查 `movzbl tab(%eax),%eax; mov %eax,%edx` vs 直载 edx；
  GetBiddingInfo 尾部 `*pInOutItemNum = index_cnt` 的 `mov %eax,%edx`。
- 不可复现的寄存器调度伪影，语义一致，记录即可。

## 82. 全量比对期间禁止重编（2026-08-09）
- `fast_strict.py` 全量跑 ~5-6 分钟；期间若重链 df_auction_r，`nm` 读半成品
  返回非零，整轮白跑。先停手等 DONE 再动 build。
- 增量单函数校验用 `/tmp/diff_sym.py`（逐条，秒级），不受影响。

## 83. `unsigned char >> n` 提升后是 sar（2026-08-09 auction PrintDnfItemInfo）
- `(unsigned int)(itemInfo.uniItemAttr >> 5)`：移位发生在**提升后的 int** 上，
  gcc 发 `sar`；uniItemAttr ≥ 0x80 时结果错误（ORIG 是 `shr $0x5,%al`）。
- 必须先转 unsigned 再移：`((unsigned int)itemInfo.uniItemAttr) >> 5` → `shr`。
- 形似而实异的语义坑：外层 `(unsigned int)` 只影响结果截断，不影响移位方向。
- 修复后该函数剩 sprintf 多实参的寄存器分配/帧差（0x4c vs 0x5c，§81 类）。

## 84. DWARF 有、代码不读的死局部（2026-08-09 auction Parse_Table）
- ORIG `int AVATAR_COLOR_SCRIPT = 5;` 只初始化到栈槽（-0xc），调用处仍用字面量
  `ExplodeString(..., 5) == 5`（`movl $0x5,0xc(%esp)`、`cmp $0x5,%eax`）。
- 若在调用处改用该局部（`== AVATAR_COLOR_SCRIPT`），gcc 会读槽位 → DIFF。
- 修复：**声明并初始化死局部（占槽、保 DWARF 名），调用处保持字面量**。
- 同类见 §68（result 死局部保名不读）。Parse_Table 由此对齐帧与调用形态。

## 85. 大函数命名合规：删反编译局部 + 内联单次表达式（2026-08-09 续）
- CFileLogWriter::writeLog/writeRawLog：`delete prev_itr->second;` 与
  `logs.insert(...).second` 内联后帧 0x2ec→0x2dc（少 oldLog 4B + inserted 8B）；
  参数/局部全部对齐 DWARF（fileName/logMsg/auto1/currTime/result/currtm/args/
  newTempFileName/newFileName/itr/prevtime/result2/prevtm/prevTempFileName/
  prevFileName/prev_itr/newLog）。
- TimerThread::loop：`size`/`remain` 非 DWARF 局部内联（printf/sleep 直写表达式），
  命名对齐 temp/startTime/endTime/elapsedTime。
- PutDBSendPackageByExpire：`send_to_buyer.temp_item_id` 读包内
  `item_info.item_id`（ORIG 是包内拷贝非 pAucDicData 直读）；`field_0` 双 32 位
  判断改单条 64 位（or/test）。
- 教训：先查 DWARF decl_line 与局部集，再决定「命名」还是「内联」。

## 86. RegistItem/RegistCancel 收尾（2026-08-09）
- **RegistItem**（573/573 指令对齐，仅剩 SENDER_NPC_NAME 数据地址）：
  - 尾部 Insert 实参全内联（GetItemId/GetUpgradeValue/auctionId/
    `GetUpgradeValue() != 0`/instancePricePerUnit/GetUpgradeSeparate）；
    ORIG 对 `upgrade != 0` 用 `test %al,%al; setne %al`（-0xb0 暂存），
    内联后自动复现；
  - `if (IsStackableCategory(...) && (1 < add_info))` 的 && 物化
    （mov $1/mov $0/test）→ 改嵌套 if，指令数 578→573。
- **RegistCancel**（652/652 指令对齐，剩槽位布局）：
  - 三处 `category`（582/636/657）与 `item_category`（717）按 DWARF 分别命名；
  - pMsg/pNewCell 段（677/678）必须包独立词法块——它与 dbtr_history 的
    pNewCell（522）同作用域，不包块会重声明编译错（DWARF 本就是嵌套块）；
  - pSVar9/pacVar10/ptVar13/pPool 全内联 + 64 位 field_0 检查。

## 87. 伪影（artifact）的机理与还原实验总结（2026-08-09 auction）

### 什么是「伪影」
- 伪影 = 同一源码在 -O0 下、同一语义的多种合法机器码形态：
  PLUS 目的寄存器（add vs lea）、setcc 物化位置、块序/jmp+nop 尾部、
  多余 mov（§81）、callee-saved 偏好（§57）、帧布局（§40/§78）等。
- 它们不是语义差异；口径上严格 NEAR/DIFF，扩展/全量口径部分归一化。

### 机理（以 lea/add 家族为样本，已实证）
- 地址表达式 `base + idx*scale` 的 PLUS 展开会复用某个操作数寄存器作目的地：
  复用**基址寄存器** → `lea (%edx,%eax,1),%eax`；复用**比例寄存器** → `add %eax,%edx`。
- 该选择由 gimplify 树的操作数顺序决定，而树顺序由**数组类型形态**决定
  （`char[8][0x40]`+自然下标 vs `char[0x200]`+手动 `*0x40`）——
  这就是 §39 子类 A 的根因，也是本工程第一个被完整还原的「伪影」。

### 还原实验矩阵（全部在 c6-g++-446r = g++ 4.4.7 驱动 + cc1plus 4.4.6-3 后端下）
| 尝试 | 结果 |
|---|---|
| `-mtune=i386/i486/i586` | 地址求和 → lea ✅；但 outgoing-args 切 push，与 ORIG 槽式不符 ❌ |
| `-maccumulate-outgoing-args` + `-mtune=i386` | 回到 add（两个 knob 纠缠）❌ |
| `-march` 全族 × `-mtune` 全族 | 仅 tune≤i586 出 lea，其余 add ❌ |
| `-g/-g3/-gdwarf-2/-gdwarf-3/-fno-var-tracking` | 无影响（含真 TU 全量验证）❌ |
| `-std=gnu++98/gnu++0x` | 无影响 ❌ |
| `-fno-exceptions/-fno-rtti/-fno-forward-propagate/-fno-cprop-registers` 等十余种 | 无影响 ❌ |
| 4.4.4 / 4.4.6-3 / c6 其它后端 | 同样 add-first ❌ |
| 命名局部（`char* p = ...`） | lea 形态精确复现但 +spill +frame+8 ❌ |
| 指针算术 `buf + idx*0x40` | 第一处 lea，第二处 add，寄存器换位 ❌ |
| 整型算术 `(char*)((uint)buf + idx*0x40)` | 两处 lea 但求值序/装载形态不同 ❌ |
| ✅ 数组形态与 DWARF 一致（`char[8][0x40]` + `buf[index]`） | **逐指令一致**（NumberToString 2/2） |

### 结论
- §39 子类 A（数组下标）：**可还原**，修法 = 按 DWARF subrange 改声明形态。
- §39 子类 B（裸乘 `*4`）：**不可还原**——方向随函数反转（`WideString::C2(PKw)`
  ORIG 是 shl / NEW 是 lea），判定为 4.4.6-3 构建上下文的分配翻转，语义等价即可。
- 其它伪影（§36/§59/§61/§80/§81）机理同源：-O0 展开/分配自由度；记录即可，
  不阻塞验收。压差优先级仍为：callset/控制流/常量 > 助记符形态 > 行号。

## 88. 第三十八批压差速记（2026-08-09 auction）
- **字节移位复现**：`(x >> 5) & 0x1f` 或 `(x & 0xe0) >> 5` → `shr $0x5,%al;
  movzbl %al,%eax`（ORIG 形态）。反例：
  - `((unsigned int)x) >> 5`（先转 unsigned）→ 32 位 `shr $0x5,%eax`；
  - `(unsigned char)(x >> 5)`（先移再截断）→ **`sar`**（x 提升为 int 后符号移，
    且 32 位）——提升陷阱，先 & 0x1f/0xe0 或加掩码才安全。
- **bool 物化**：`packet.b = call()` 直赋 → `mov %al,slot`；if/else 显式赋
  → `test %al,%al; je L; movb $1; jmp L2; L: movb $0; L2`（ORIG 形态）。
- **死局部保名**：ORIG 里「赋值后未读」的局部必须声明并初始化（占槽、保 DWARF
  名），调用处保持重读/字面量（§84 同类）：
  - `onAUCTION_CLOSE_PRIVATE_STORE_GA` 的 `mId = pPck->m_id`（DWARF decl 1541，
    ClosePrivateStore 仍传 `pPck->m_id`）；
  - `Script::findIntValue` 的 `ret = atoi(...)`（DWARF decl 43，return ret）。
- **初始化列表顺序**：`TraceLog` 的 `logmask=0` 在 ctor body 会晚于成员锁构造；
  移入 init-list（声明序在锁前）才与 ORIG 一致（0x33c 先于 TThreadLock ctor）。
- **冗余清零要照抄**：`INTERNALMSG_SERVICE_UNAVAILABLE` 的 ctor 在 memset(0x24)
  之后仍显式清 bWillDelete/workIndex/mOwnerWorkId（机器码可见，缺 6 条）。
- **分支语义复核**：`test %al,%al; je` 是 al==0 才跳；改块序（`isIterEnd` 的
  双 return）先对反汇编确认 je 目标再落笔，避免把语义写反。
- **早退布局**：`if (cond) return; body;` 产生 `jne SKIP; body; jmp EPI; SKIP:
  nop; EPI`；`if (cond) {} else { body; }` 产生 fall-through（少 jmp+nop）。
- **error_no==0 显式返回**：`if (err) {log} else { return 0; } return err;`
  复现 ORIG 的 `mov $0,%eax` 尾；`if (err) {log} return err;` 会 je 直跳 epilogue。

## 89. i586 arch 实验与函数级 target 覆盖（2026-08-09 auction）
- **现象**：ORIG 的 FP 比较是 `fucompp+fnstsw %ax+test $0x45,%ah+sete`（i386/i586
  形态），NEW（-march=i686）发 `fucomip+seta`（P6+）。FP 形态由 **-march** 决定，
  -mtune 不影响；ORIG 工程代码无任何 i686+ 指令（唯一 bsr 属 i386），
  疑似 i586 指令集编译。
- **实验 1（全 TU i586，已回滚）**：`-march=i586 -maccumulate-outgoing-args`
  全量编译 → strict 4116→**3667**、DIFF 143→**648**。i586 改变字节装载
  （`movzbl mem,%reg` → `xor;mov mem,%l`）、寻址形态等，破坏大批按 i686
  校准到 ORIG 的函数——ORIG 并非全局 i586。
- **实验 2（按 TU i586，已回滚）**：仅 Auction/AuctionDictionary/
  AveragePriceDictionary 三个含 FP 差异的 TU 用 i586 → strict 4023、DIFF 235。
  仍负（同 TU 其它函数连带回归，如 SendMessageToMonitor 65→60 对齐）。
- **方案定案（函数级属性，保留）**：GCC 4.4.6-3 支持
  `__attribute__((target("arch=i586")))`（`#pragma GCC target("arch=...")` 无效）。
  只加在 4 个 FP 函数（makeSuccessfulBid/RegistItem/AddItemAveragePrice/
  UpdateAveragePirce）：FP 比较形态与 ORIG 对齐、参数仍槽式（属性不改
  push-args 默认）、同 TU 其它函数零影响；全量总量不变（它们其余差异仍在）。
  注意该属性会同时把函数内字节装载切成 i586 形态，是取舍不是纯收益。
- 维护：I586_TUS/ARCH_OVERRIDE 保留在 build-auction/point.sh（当前名单为空），
  后续若发现其它需要函数级覆盖的点，直接加属性即可。

## 90. 通用算法语义策略 + Rijndael 解密尾字轮转坑（2026-08-09 channel）

- **策略**：Rijndael（AES，FIPS-197 公开标准）属通用算法，按用户指示只验证
  **输入输出正确性**，不追机器码逐条一致。验证工具：
  `source/toolchain/verify_rijndael.sh`（FIPS-197 AES-128/192/256 向量 +
  ECB/CBC 多块往返），全 PASS。
- **真实 bug 实例——尾字轮转映射照抄错了**：重写 DefDecryptBlock 时，把
  result[4..15] 的 a 下标按「加密侧」轮转抄（a3,a2,a1,a0），ORIG 是「解密侧」
  轮转（与解密循环 t0..t3 同构：a1,a0,a3,a2 / a2,a1,a0,a3 / a3,a2,a1,a0）。
  症状：解密输出第 2/3/4 字各字节多 0x80 位（0x44→0xc4、0x55→0xd5…）。
  **教训：解密函数的尾字表（tt=Kdr[j] 组）必须与解密循环 t_j 的轮转一致，
  不能按加密侧类推；改完先跑语义测试再谈机器码。**
- **Rijndael -O0 机器码形态速记**（第五十五批，供同类对照）：
  - a0 装载 = `a = (unsigned char)*in++ << 24; a |= ...`（先存槽、读后即
    in++）；不能用单条大表达式（会寄存器累积 + 末尾统一 in++）；
  - `Ker = &m_Ke[0][0]` / 循环内 `&m_Ke[r][0]`：常数 0x38 被 gcc 拆成
    `add $0x30` + `add $0x8`（成员数组取址固有形态），无需刻意拼接；
  - 移位混型：int 局部只有 `(unsigned)a >> 24` 项发 shr，`(a >> 16) & 0xff`、
    `(a >> 8) & 0xff` 发 sar——DWARF 类型 int 时照抄，不要统一转 unsigned；
  - 尾部 `(unsigned char)(tt >> N)` 必须是有符号 sar（无 unsigned cast），
    低字节结果与 shr 相同但机器码不同；
  - 声明序决定槽位：a0..a3 先声明才与 ORIG 的槽位分组一致（DWARF decl_line
    与机器码槽序冲突时以机器码为准）。

## 91. 「正条件 + else（错误块置尾）」布局家族（2026-08-09 channel/bridge）

同一个「检查失败就 return/报错」的语义，ORIG 常写成**正条件 + else**，
错误块被 gcc 放到函数/块末尾（跳转目标），而不是 `if (!x) return;` 的内联形态。
这是本会话最反复出现的可复现坑族，已借此把 channel/bridge 的
`get_server_section`/`get_db_section`/`onRead`/`onRead_` 压到 IDENTICAL。

- **识别**：ORIG `jne BODY; jmp RET_prev; RET: mov 0; jmp END; BODY: ...`
  （return/错误块延迟到「下一个检查之后」）；NEW 是 `jne BODY; mov 0; jmp END`
  内联。
- **修法**：写成
  ```cpp
  if (pos_cond) { body; } else { return false; /* 或 GLOG+return */ }
  ```
  其中 `pos_cond` 是 ORIG 的跳转极性所对应的条件（对照反汇编的 je/jne 目标）。
  链式检查（get_server_section 7 段、onRead_ 的 peekCopy/peekPop 分支）全部
  同法。
- **反向案例**：`if (nRead < 1) {...} else {...}` 编译成 `jg` 内联；ORIG 是
  `if (nRead >= 1) {...} else if (nRead < 0) {...}` → `jle` 置尾布局。
- **对照表（本会话实证）**：

  | 源码形态 | 机器码 |
  |---|---|
  | `if (x < 0) return;` / `if (x < 0) {} else {body}` | `shr $0x1f; test; jne SKIP`（早退块尾部） |
  | `if (x > -1)` / `if (x >= 0)` | `not; shr $0x1f; test; je`（注意 not！） |
  | `if ((unsigned)x > 0xa)` | `cmp $0xa; seta` |
  | `if (x < 0xb)`（int） | `setl/setle`；要 setb/setbe 必须 unsigned cast |
  | `if (A() \|\| B()) return;` | bool 物化 `jne L1; je L2; L1: mov $1; L2: mov $0; test; jne SKIP` |
  | `if (!(A() \|\| B())) {...}` | 每个调用后 `xor $0x1`（De Morgan 展开） |
  | 连续单条 `if (c) return;` | 每条 return 块内联（`jne BODY; mov 0; jmp END`） |
  | 正条件 else 链 | return 块延迟置尾（`jne BODY; jmp RET_prev; RET: ...`） |

- **DWARF 数组尺寸**：`DW_AT_upper_bound` 是**含端点**下标
  （upper_bound=11 → 12 元素）。onRead_ 的 `char s[12]` 写成 `[11]` 会让 buf
  槽位整体差 1 字节（-0x3c vs -0x3b），全函数错位。
- **指针链**：`char* s = (char*)peekPop(); tagPacketHeader* hdr =
  (tagPacketHeader*)s;` 产生 ORIG 的双槽/双存（-0x24/-0x20）；直接
  `hdr = (tagPacketHeader*)peekPop()` 少 2 条。
- **VLA 陷阱**：bridge `onRead_` 的 `char szBuf[nMessageSize]` 在深层嵌套
  正条件结构下触发 gcc 4.4 帧膨胀（0xa0058→0xa00c0、指令+160）；ORIG 的 VLA
  布局依赖其自身块结构，复现不了就改用 malloc+free（语义等价，指令数更近）。

## 92. 64 位比较的语义还原 + 防「条件被改坏」核查（2026-08-09 bridge isIdle）

- **ORIG 形态**：`__int64 gap <= 0x124f80` 编译成
  `cmpl $0,high; js FALSE; cmpl $0,high; jg TRUE; cmpl $0x124f80,low; jbe
  FALSE`（js/jg 顺序 gcc 版本相关，见 §91 表）。
- **反例（真实语义 bug）**：还原时把条件写成
  `(gap <= 0 && (unsigned int)gap <= 0x124f80)`——对正 gap 恒假，导致
  **任何正 gap 都返回 idle**，0x124f80 阈值失效。症状：机器码多 5 条
  （64 位比较被拆成高低字两段独立判断）。
- **教训**：还原 64 位比较先对照反汇编的 `js/jg/jbe` 三段，直接按
  `gap <= 阈值`（64 位）落笔，不要凭「语义直觉」改写；改完用边界值
  （gap = 阈值±1、负值、0）过一遍语义。
- **`mov $0,%eax; test %al,%al; je`（恒假死代码）**：ScriptThread::loop 的
  首查询后 ORIG 有这段死 `exit(1)` 块；常量假条件（`if (0)`/`1==0`）在我们
  工具链会被折叠，复现不了该写法——死代码语义无关，记录即可。

## 93. 后置 ++ 与 x=x+1 的 GIMPLE 形态差异（2026-08-09 auction StatisticsCollector）

- 同一语义 `a[k].f = a[k].f + 1` 与 `a[k].f++` 在 gcc 4.4 -O0 下生成
  **不同的寄存器流**：
  - `x = x + 1`：RHS 与 LHS 的地址计算各自装载 `k`，生成两个伪寄存器
    （`mov 0xc,%eax; mov 0xc,%edx; imul %edx`——多 1 条 mov）；
  - `x++`：单装载 `k`，RHS/LHS 复用同一寄存器
    （`mov 0xc,%eax; imul $0xec,%eax,%edx; ... imul $0xec,%eax,%eax`）。
  - 实测 `+= 1` 与 `= + 1` 同属前者；**只有 `++`（含后置）复现单装载**。
- 适用场景：`mStDataPerDay[kind].failCnt++` 这类数组元素自增；改完后
  IncTryCnt 41/41、IncFailCnt 109/109 逐指令对齐（仅日志字符串地址伪影）。

## 94. 原版双版本头（ODR 违背）的按 TU 还原（2026-08-09 auction StatisticsCollector）

- **现象**：`StatisticsCollector::StData` 在原版不同 CU 里尺寸不同——
  StatisticsCollector.cpp CU DWARF byte_size 228（becauseCnt[55]），
  HandlerFor_GA_/HandlerFor_GP_JPN CU DWARF byte_size 236（becauseCnt[57]）；
  IncTryCnt/IncFailCnt 是头文件内联弱符号，只在 GA/GP 两个调用方 TU 发出，
  用 236B 步长（`imul $0xec`/`imul $0x3b`），其余方法用 228B。
- **还原**：头文件数组尺寸用 `#ifdef STATISTICS_STDATA_57` 切换；GA/GP 两个
  TU 编译时加 `-DSTATISTICS_STDATA_57`（build-auction.sh / build-point.sh
  按 base 名加分支）；IncTryCnt/IncFailCnt 移入头文件内联（与 ORIG 弱符号
  位置一致），其余 TU 保持声明 + StatisticsCollector.cpp 定义。
- **排查要点**：同函数 diff 里步长常量不同（0xe4 vs 0xec）先查 DWARF
  `DW_AT_byte_size`（按 CU 分开查，别只看符号所在 CU）；同地址范围出现在
  多个 CU 的 subprogram = 头文件内联弱符号的痕迹。

## 95. 原版「先自增再报错」的隐藏语句（2026-08-09 auction StatisticsCollector）

- ORIG `IncFailCnt` 的 else（无效 error_no）分支在打日志**之前**先执行
  `mStDataPerDay[kind].becauseCnt[56]++` 与
  `mStDataPerSec[kind].becauseCnt[56]++`（[57] 版最后一个桶，反汇编为
  `add $0xec`/`add $0x3b0` 后 `mov (%edx); add $0x1; mov %edx,(%eax)`）。
- 还原时若只写日志、漏掉这两个自增，else 块短 24 条指令、且分支目标偏移
  全变——这类「错误路径里的业务副作用」在逐函数比对时最容易漏。

## 96. switch vs if/else-if 的多路分发形态（2026-08-09 auction RegistCancel）

- 同一逻辑 `switch (t) { case 1: ; case 2: A; case 3: B; }`（case 序
  1/2/3）在 gcc 4.4 -O0 反序发射 `cmp 2; je; cmp 3; je; cmp 1; jmp
  default`（连续比较 + 尾 jmp）；`if (t==2) A; else if (t==3) B;` 则发
  `cmpl; jne L1; A; jmp END; L1: cmpl; jne L2; B; ...`（jne 反转链）。
  ORIG 用前者（cmp/je/jmp 序列），还原多路分发先试 switch。
- 注意 case 顺序：源里 case 1 在 2/3 之前，gcc 反序发射 2/3/1；空 case
  与 default 合并时 `cmp 1` 后的 je 会消失（只剩 jmp），要保留
  `cmp $1; jmp` 需 case 1 单独存在。

## 97. 64 位成员判零：成员直取 vs `*(long long*)&` cast（2026-08-09 auction）

- `X->key.field0._high_category_key != 0`（long long 成员）→
  `mov 0x54(%eax),%eax; mov 0x58(%eax),%edx; or; test`（双位移直取，
  高字先入 edx）；
- `*(long long*)&X->key.field0 != 0` → `add $0x54,%eax; mov (%eax);
  mov 0x4(%eax); or; test`（先算地址再按 0/4 偏移）。
- 语义等价但机器码不同；还原以 ORIG 反汇编为准选前者。同类注意
  GetItemInfo 参数来源：ORIG 在同一段里 category 用源指针、sName 用
  dbtr 副本（`send_to_owner.item_info.item_id`）——逐调用核对，别一刀切。

## 98. 批量替换的误伤防范（2026-08-09 auction）

- `apply_patch` 里无函数头上下文时，`return error_code;\n}` 这类短模式会
  命中**别的函数**（实例：想把 RegistCancel 尾部改 `return 0`，实际改到
  GetRegistedItemInfo）。批量/短模式替换前先 `grep -n` 全部命中点，或带上
  函数签名上下文；改完用 `git diff` 核对每个 hunk 落在预期函数。

## 99. 结构体整赋值 vs 逐字段赋值的装载/存储形态（2026-08-09 auction）

- `dst.option_category = src.option_category;`（12B 结构）→ gcc 4.4 -O0
  逐对 `mov [src+off]; mov [dst+off]`（基址寄存器保持，无重载）；
- `dst.option_category.field_0._high_category_key = src...;` +
  `dst.option_category.field_1._low_category_key = src...;`（逐字段）→
  先取两字（edx/eax）再连存 + 第三个字段前**重载基址**（多 1 条 mov）。
- 字段布局相同、语义相同，但整赋值少 1 条且寻址形态一致；ORIG 用整赋值。

## 100. 短字段 vararg 的 cast 影响（2026-08-09 auction）

- `sysLog("... %hu", (unsigned short)x)` → gcc 发 `movzwl`（零扩展）；
  `sysLog("... %hu", x)`（x 为 unsigned long/int）→ 直接 `mov 4字节`
  （vararg 提升后原值入栈，%hu 只读低 2 字节，语义等价）。
- ORIG 用后者（`mov 0x15(%eax),%edi`）；还原时删掉多余 cast。

## 101. FP 区间阶梯的复合条件重检形态（2026-08-09 auction makeSuccessfulBid）

- 同一语义 `else if (a >= 1.6 && a < 1.7)` 与 `else if (a < 1.7)` 机器码
  不同：前者 gcc 4.4 -O0 在 else 里**重检上界**（NaN 语义），生成
  `fxch; fucompp; fnstsw; sahf; setae`（>= 形态）+ `fucompp; fnstsw;
  test $0x45; sete`（< 形态）两个独立比较；后者只发 `<` 一个比较。
- ORIG 用复合条件（`>= 1.6 && < 1.7`），且最外层 else 里还有冗余
  `if (PriceRate >= 1.5)` 重检——逐分支形态还原时先数 ORIG 的比较次数
  （sahf/setae 出现次数），据此决定写不写复合条件。
- 三元 `cond ? A : B` 与 if/else 两块的机器码不同（前者常物化 setcc+
  mov，后者每分支独立转换块）；ORIG 里大块分支用 if/else，布尔赋值用
  三元（`isInstantBuying ? 1 : 0` → mov $1/mov $0/jmp 链）。

## 102. FP 转换的 cw 设置块归属（2026-08-09 auction makeSuccessfulBid）

- `commission = (int)((double)x * (double)y)` 的 fnstcw/fldcw 设置在
  gcc 4.4 -O0 下会随基本块布局**落在不同块**：ORIG 把设置放在阶梯
  0x32/0x50 赋值块内（随后 jmp 到转换，转换复用 `fldcw -0x7b8`），
  我方工具链把设置放在转换块自身（阶梯块无设置 + 转换块 fnstcw）。
- 语义、指令数、mnemonic 内容完全一致，仅块边界归属不同——属 -O0 布局
  伪影，记录即可，不阻塞语义验收。

## 103. 整数范围检查的嵌套 if vs && 链（2026-08-09 auction makeSuccessfulBid）

- `if (pay()==1 && a<x && x<b)`（单链）→ 整链布尔物化（jne L0; ...;
  mov 1; jmp; L0: mov 0; test; je）；
- 嵌套 `if (pay()==1) { if (a<x && x<b) {...} }` → 首个 == 用
  `cmp; sete; test; je`（比较结果物化），内层范围检查用 `jbe/ja` 直跳
  （无物化）。
- ORIG 用嵌套形态；`0x28d287 < item_id && item_id < 0x28d294` 这类
  unsigned long 范围检查在嵌套下直接 jbe/ja。

## 104. 死比较表达式 `x == -1;`（2026-08-09 channel TCPSocket::shutdown）

- 裸表达式语句 `sock_ == -1;`（结果未用）：ORIG 4.4.6-3 保留
  `cmp $0xffffffff,%eax`；本工具链（4.4.7 前端）在 gimplify 阶段折叠该
  纯比较（无副作用）。试过 `(void)(x==-1)`、空 if、volatile 赋值均无法
  复现裸 cmp（volatile 会多出 setcc+存储）。
- 结论：工具链不可复现，语义等价即可（该比较无副作用）。

## 105. begin() 返回的迭代器临时槽（2026-08-09 channel EpollReactor）

- `iterator iter = map_.begin();` 在 ORIG 生成：`lea tmp; call begin();
  mov tmp→iter`（两个槽，begin 结果先落临时再拷贝到循环变量）；本工具链
  直写 `lea iter; call begin()`（单槽）。同源码不同编译器版本的 -O0
  展开差异，无法用源码形态复现，记录即可。

## 106. `x == true` 与 `x != true` 的 if 形态（2026-08-09 channel）

- `if (isReadyToStart == true) { body }`（大块）→ 本工具链
  `test %al; je L_out`；ORIG 是 `if (isReadyToStart != true) return 0;`
  → `movzbl; xor $1; test; je L_body; mov 0; jmp END`。
- 同一 bool 语义，**早退 if（!= true + return）**产生 xor $1 物化，
  正条件大块被折叠成直测——还原时按 ORIG 反汇编选形态。

## 107. 日志的中间变量会多占槽位（2026-08-09 channel）

- `gFileLogInfo << ... << gc_no << endl;` 直接用字段/变量，ORIG 无多余
  局部；还原时若写成 `unsigned int uVar = gc_no; ... << uVar`，会多出
  一个槽位拷贝（mov 到中间槽再取），指令多 1-2 条且 DWARF 多一个不
  存在的局部。用 ORIG DWARF 局部清单反查：凡 ORIG 没有的 u* 中间变量
  一律删掉。

## 108. 迭代器解引用 operator* vs operator->（2026-08-09 channel）

- `it->second` → `call operator->(ptEv)`；`(*it).second` →
  `call operator*(deEv)`。ORIG 用 `(*it).second`（deEv），调用符号不同
  导致 mnemonic 判定 DIFF；还原时按 ORIG 反汇编的调用符号选 `*` 或 `->`。
