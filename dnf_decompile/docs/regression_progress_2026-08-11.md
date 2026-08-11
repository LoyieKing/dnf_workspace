# 函数对比报告与回归修补进度（2026-08-11）

## 一、md 报告流水线（脚本均位于 `source/toolchain/`）

| 脚本 | 作用 |
|---|---|
| `gen_report_manifest.py` | 全量分类（strict + IDENTICAL_AE；`--strict-only` 可复算严格基线） |
| `gen_function_md.py` | 全量生成 md；`--function <mangled>` 单函数模式（相同则删除 md，否则生成/更新） |
| `report_resolve.py` | 汇编伪代码化：字符串/全局/函数符号、vtable+偏移、匿名表指针归一化哈希、区段相对、`.bss`、零尺寸符号（`__dso_handle`） |
| `record_issue.py` | 把“待决策/无法源码修复”原因写入 `function_reports/<svc>/caliber_issues.csv` |
| `run_service_report.sh` | 单服务流水线：独立 Ghidra 工程 → 反编译 → md |
| `gen_report_readme.py` | 顶层 README + 目录树 |

输出目录：`function_reports/<svc>/`（每服务一个文件夹，每个非 identical 函数一个 md）。

## 二、identical 判定口径演进

- 基线：`compare_common` strict（仅归一化直接跳转/调用目标地址）。
- 新增 `IDENTICAL_AE`（视为相同、不生成 md）：
  - 字符串/全局/函数地址不同但指向内容或符号相同；
  - vtable 等符号区间引用（`&_ZTV...+0x8`）；
  - 匿名数据表按 64 字节指针归一化哈希等价（跳转表/函数指针表）；
  - `@`/`@@` 版本后缀、`@plt` 注解；
  - 尾部 `nop` 对齐填充；
  - assert/日志宏行号、栈预留差异：**按用户决定不再自动豁免**（必须源码修复）。
- 口径基线对比：严格基线 10177 → 当前 7950（-2227，-21.9%），全部来自 AE 豁免；
  明细见 `function_reports/baseline_comparison.tsv`。

## 三、已完成的源码 / 构建修复

1. **channel**：`build-channel.sh` 编译时切到源目录传 basename，`__FILE__` 与 ORIG 一致（仅文件名），assert 路径差异消除。
2. **auction/point**：`AuctionDictionary::getCharacterName` 失败分支硬编码 ORIG 地址 `0x8151740` → 改为等价静态缓冲 `"iiiEC2Ej"`（重建验证）。
3. **coserver 工具链对齐**：ORIG `.comment` = GCC 4.1.2×3 + 4.4.6×1；`build-coserver.sh` 切到 `c6-g++-446r`（4.4.6-3 精确后端），虚调用寄存器分配类差异消除（如 `CApplication::Free` 恢复 `call *%edx`）。
4. **coserver TLS 重复符号**：`DNFFunctionLib.cpp` 删除伪造的匿名命名空间 `get_global()`——该符号实为 libstdc++ `eh_globals.o` 内部符号，伪造定义导致 LOCAL 同名 TLS 符号不合并、TLS 块多 8 字节、`gNumberToStringBuffer` 偏移从 GS-0x208 变 GS-0x210（`NumberToString` 系列修复）。
5. **coserver `PrintBackTrace`**：硬编码行号实参 `0x1d1`（按 DWARF 猜测）→ 按 ORIG 二进制实测改为 `0x186`。
6. **解析器零尺寸符号**：`__dso_handle` 在 `nm -S` 下无 size 列（3 列格式），此前被丢弃；已支持，`__cxa_atexit` 的 DSO handle 实参全部解析为 `&__dso_handle`（单例函数批量修复）。
7. **auction CMake `__FILE__` 覆盖**：`source/cmake/auction/auction_filepath_override.h` + 逐 TU `-DAUCTION_FILEPATH_<TU>`，复现 ORIG 的相对路径字符串。

共享修复在 `source/DNFServer/ServerCommon/DNFFunctionLib.cpp`，其余服务重建后自动生效。

## 四、操作手册规则（`docs/identical_brief_for_agents.md`）

- §0 子 Agent 角色与独立性：独立干活、不等待他人；阻塞自行排查或上报后继续其它工作。
- §4.1 差异处理优先级：行号/宏行号 → 源码行号对齐修复；结构体字段偏移 → 布局修复；
  栈槽/寄存器/求值顺序 → 默认源码修复、穷举失败附证据才可归档；
  工具链不匹配 → 查 ORIG `.comment`、工具链对齐、记录 `toolchain_mismatch` 并上报；
  TLS 重复符号 → 验证符号来源、删除伪造定义；
  硬编码常量 → 以 ORIG 二进制实测为准，不得凭 DWARF/反编译猜测；
  还原必须基于二进制证据。
- §4.2 全量源码回归强制口径：每个非 identical 函数必须源码修复到
  IDENTICAL/IDENTICAL_AE（md 删除）才算完成；CSV 记录≠完成；确认真实不可修
  必须上报主 Agent 等待决策，不得自行了结。

## 五、回归修补状态（保存时刻快照）

| 服务 | 剩余 md | CSV 记录 |
|---|---:|---:|
| auction | 179 | 0 |
| point | 190 | 0 |
| bridge | 17 | 17 |
| channel | 22 | 21 |
| community | 25 | 78 |
| coserver | 56（严格回归进行中） | 0（旧 lenient CSV 已移 /tmp） |
| dbmw | 617 | 35 |
| guild | 851 | 851 |
| manager | 238 | 0 |
| monitor | 793 | 93 |
| relay | 88 | 88 |
| statics | 238 | 149 |
| stun | 10 | 0 |
| **合计** | **3424** | |

说明：第一轮 13 个 agent 的处理多为“记录 CSV 后宣称完成”，按 §4.2 判定为未完成；
当前仅 `fix_coserver_strict` 在运行（coserver 56 个 md 严格源码修复）。

## 六、TODO

1. coserver 严格回归收尾（56 个 md 源码修复或上报待决策）。
2. 共享修复（`DNFFunctionLib.cpp`）推广：其余 12 个服务重建验证
   `NumberToString` / `PrintBackTrace` / `__dso_handle` 类函数。
3. 无 DWARF 服务（relay/statics/guild/monitor/manager/dbmw）工具链对齐评估
   （查 ORIG `.comment`，按 coserver 模式切 4.4.6-3 并预演）。
4. 其余服务按 §4.2 全量严格回归（并行 agent，遵守 §0 独立性与共享源码并发约束）。
5. 收尾：重生成 manifest/summary/README，更新基线对比，汇总待决策清单。

## 七、复现

```bash
# 分类（全部服务）
python3 source/toolchain/gen_report_manifest.py
# 严格基线复算
python3 source/toolchain/gen_report_manifest.py --strict-only --out /tmp/baseline_strict
# 全量 md（会清空并重建某服务目录）
python3 source/toolchain/gen_function_md.py --services coserver
# 单函数（相同删 md / 不同更新）
python3 source/toolchain/gen_function_md.py --services coserver --function <mangled>
```
