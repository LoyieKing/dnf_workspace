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
- `temp * 4`（临时表达式结果）→ ORIG 常发 `lea 0x0(,%eax,4),%reg`（保留源寄存器）；
- `var * 4`（变量）或 NEW 的分配 → `shl $0x2,%eax; mov %eax,%reg`。
- `&global[idx*0x40]` 基址加法：ORIG `lea (%edx,%eax,1),%eax` vs NEW
  `add %eax,%edx`——同为寄存器偏好，语义一致。
- 实例：`WideString::assign(PKwi)`、`trimLeft`、`NumberToString`。

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
