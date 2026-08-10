# identical 判定口径（Agent 必读，2026-08-10）

## 1. 什么叫“identical”

本项目逐函数比对 ORIG（原版 ELF，位于
`dnf_installer/build/dnf_data/home/template/neople/<svc>/`）与 NEW（重建二进制，
`dnf_decompile/build/<svc>/df_<svc>_r`）。判定以
`source/toolchain/compare_common.py` 的统一口径为准。

- 对函数内每条指令文本做归一化后**逐条**比较。
- **只归一化**：直接跳转/调用指令（`j*` / `call` / `loop*`）中的目标地址 → `<T>`。
- **严格保留（任何差异都判不 identical）**：立即数常量（`cmp $0x7f,%eax` vs `cmp $0x7,%eax`）、
  字段/栈偏移（`0x18(%eax)` vs `0x1c(%eax)`）、寄存器名、寻址形态、全局数据地址。

### 三档口径
| 档位 | 归一化内容 |
|---|---|
| strict | 仅跳转/调用目标地址 `<T>`（**官方统计用这一档**） |
| extended | strict + 大绝对地址（≥0x1000000 的 rodata/数据/全局引用）→ `<A>` |
| full | extended + `__assert_fail` 行号实参 → `$L` |

### 逐函数结论
- `IDENTICAL` = strict 归一化后完全相同。
- `NEAR` = 助记符序列相同、仅操作数/寄存器/地址不同（strict 不 identical）。
- `DIFF` = 助记符序列不同。
- `MISSING` = ORIG 有、NEW 无。

官方水位即 strict 口径的 `IDENTICAL/NEAR/DIFF` 计数（如 channel 204/108/11）。

## 2. 豁免（不计入统计）

用户规则（2026-08-10）：tinyxml、加密/哈希通用算法（CRijndael/CSHA/CTEA/IMethod、
yaSSL/TaoCrypt、AES/DES/SHA/MD5/RIPEMD160 等）、Boost、STL/std/libstdc++、
工具链运行时（`_Unwind_*`/`__cxa_*`/operator new-delete/`__libc_csu_*`），以及
MySQL/zlib/NCrypto 等第三方基础库 —— 获得 identical 豁免，移出 IDENTICAL/NEAR/DIFF
计数；只需语义等价验证。判定实现：`compare_common.is_exempt_symbol()`。

## 3. 目标

每个**项目函数**（非豁免）在 strict 口径下达到 IDENTICAL；做不到的只有两类：

1. **真实语义 bug** → 必须修源码（FIXED）。
2. **编译器尾音/归档伪影** → 带证据归档（ARCHIVED），引用
   `docs/identical_pitfalls.md` 的坑点号。

## 4. FIXED / ARCHIVED / REMAIN 判定

- **FIXED**：源码改动 + 重建后该函数分类**改善**（DIFF→NEAR/IDENTICAL，或
  NEAR→IDENTICAL）。典型真实 bug 类：类型/有符号性（§1）、结构体布局/#pragma pack/
  字段偏移（§2）、布尔物化与 if-else 形态（§3）、循环结构（§4）、调用目标/常量错误。
- **ARCHIVED**（编译器尾音，语义等价即可归档）：
  - 数据地址（§8.1 / §8.2）
  - assert 行号（§8.3）
  - 对齐 nop / 块序（§3.3）
  - 寄存器分配 / 栈槽（§5.1 / §5.2 / §81）
  - callee-saved（§5.3）、分支极性（§6）
  - EH landing pad（§9）
  - 编译器补丁级差异（§36）、lea/折叠形态（§39）、死比较折叠（§104）
  - 归档必须给出证据：差异行 + 坑点号 + 语义等价的理由。
- **REMAIN**：本轮无法解决且原因明确（如需换编译器、外部决策）——只允许极少数，
  必须写明原因。

## 5. 闭环验证（强制）

每次源码改动：**改 → 重建该服务（`bash source/toolchain/build-<svc>.sh`）→
用 `diff_func.py` 或官方比对脚本重测该函数 → 记录改前/改后分类**。
禁止盲改；禁止“改了但分类没变”却报 FIXED。

## 6. 参考资料

- `docs/compare_caliber.md`（口径文档）
- `docs/identical_pitfalls.md`（坑点 §1–§104）
- `source/toolchain/compare_common.py`（判定实现）
- `/tmp/wave_c_verify2/<svc>.water`（最新官方水位）
- `/tmp/disposition/<svc>.tsv`（逐函数预分类：A_* 已归档、R_* 需评审）
