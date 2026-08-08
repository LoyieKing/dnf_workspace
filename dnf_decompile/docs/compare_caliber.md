# IDENTICAL 判定口径统一（2026-08-08）

## 背景

改造前，工程内各比对脚本的 IDENTICAL 判定各自为政，存在三套互相矛盾的归一化规则：

| 旧口径 | 脚本（旧版） | 行为 |
|---|---|---|
| 助记符级（抹平所有 0x） | `compare_auc_obj.py` / `compare_stun.py` / `compare_channel.py` / `compare_statics.py` / `dwarf_validate.py` | 所有 `0x` 十六进制数替换为 `0xX`，**忽略立即数常量、字段/栈偏移、全局地址** |
| community 全量 | `compare_all_functions.py` | 仅归一化行尾 `0x` token；objdump 输出的分支/调用目标是裸十六进制，**实际未被归一化**，导致含分支/调用的函数几乎不可能 IDENTICAL（旧数据 458 个 IDENTICAL 全部为无分支叶函数） |
| channel TU 级 | `compare_channel_tu.py` | 连裸十六进制也全部抹成 `0xX`，同样忽略常量与偏移 |

另有一份 `/tmp/compare_strict.py` 草稿（保留小立即数、仅归一化大地址与栈槽）只用于 point 常量差异核查，不在仓库内。

## 统一口径（新）

**IDENTICAL（精准）＝ 单个函数内，除「直接跳转/调用指令的目标地址」外，指令文本（助记符 + 全部操作数）逐条完全一致。**

### 保留（严格一致，任何差异都不得判 IDENTICAL）

- 立即数常量：`cmp $0x7f,%eax` 与 `cmp $0x7,%eax` 视为不同；
- 字段 / 栈偏移：`mov 0x18(%eax),%ecx` 与 `mov 0x1c(%eax),%ecx` 视为不同，`mov 0x8(%ebp),%eax` 与 `mov -0x4(%ebp),%eax` 视为不同；
- 全局数据地址（rodata / 表基址等内存操作数）；
- 寄存器分配、寻址形态、操作数结构。

### 仅归一化

- 直接跳转 / 调用指令（`j*` / `call` / `loop*`）里的绝对目标地址（`0x` 前缀或裸十六进制）→ `<T>`，**随附的目标符号名保留**（目标不同仍判不同）。

目的：消除链接布局 / 重定位造成的目标地址漂移，不放松任何其它局部差异。

### 归一化示例

| 指令（原始 / 重建） | 归一化后 | 判定 |
|---|---|---|
| `jne 8058521 <_Z8SDC_RandPj+0x16>` / `jne 80584e9 <_Z8SDC_RandPj+0x16>` | 均 `jne <T> <_Z8SDC_RandPj+0x16>` | 相同 |
| `call 8057a2b <_Z3foov>` / `call 8057a9b <_Z3foov>` | 均 `call <T> <_Z3foov>` | 相同 |
| `call 8057a2b <_Z3foov>` / `call 8057a2b <_Z3barv>` | 符号名不同 | 不同 |
| `cmp $0x7f,%eax` / `cmp $0x7,%eax` | 原样保留 | 不同 |
| `mov 0x18(%eax),%ecx` / `mov 0x1c(%eax),%ecx` | 原样保留 | 不同 |
| `movzbl 0x80deea0(%eax),%eax` / `movzbl 0x80b9380(%eax),%eax` | 原样保留 | 不同 |
| `jmp *0x80484de(%eax)`（间接跳转） | 原样保留 | 不同 |

## 实现

- 唯一口径实现：[source/toolchain/compare_common.py](../source/toolchain/compare_common.py)
  （`norm_line` / `norm_identical` / `CALIBER_VERSION`）。
- 全部 IDENTICAL / exact 判定脚本已接入统一口径：

| 脚本 | 改动 |
|---|---|
| `source/compare_all_functions.py` | IDENTICAL 判定改用统一 norm_line |
| `source/compare_df_community_functions.py` | `mnemonic_exact` 列改为统一严格口径 `identical` |
| `source/toolchain/audit_full_compare.py` | `mnemonic_exact` 列改为统一严格口径 `identical` |
| `source/toolchain/compare_stun.py` / `compare_channel.py` / `compare_channel_tu.py` / `compare_statics.py` / `compare_auc_obj.py` / `dwarf_validate.py` | 删除各自的 `0xX` 抹平 norm，改用 `norm_identical` |
| `source/toolchain/diff_func.py` | 审查用归一化改为仅跳转/调用目标（`<T>`） |
| `source/toolchain/classify_diffs.py` | 适配 `<T>` 标记 |

- `compare_statics.py` 的签名缓存 key 加入 `CALIBER_VERSION`，防止旧口径缓存污染新判定。

## 验证

- 12 组合成样例（常量 / 字段偏移 / 栈偏移 / 目标漂移 / 目标符号 / Intel 语法 / 间接跳转等）全部符合预期。
- 真实二进制端到端：
  - `compare_stun.py`：IDENTICAL 6 / NEAR 19 / DIFF 1 / MISSING 0；
  - `compare_all_functions.py`（community 全量）：**IDENTICAL 1057 / NEAR 209 / DIFF 1837 / MISSING 2 / EXTRA 6**；
  - 抽查 378 个含分支的新 IDENTICAL 函数：原始反汇编差异全部仅出现在跳转/调用行，归一化后相等，常量与偏移逐条严格一致。

### 新旧数字对比（community 全量）

| 指标 | 旧口径 | 新口径 |
|---|---:|---:|
| IDENTICAL | 458 | 1057 |
| NEAR | 808 | 209 |
| DIFF | 1837 | 1837 |

IDENTICAL 上升是因为旧版未归一化裸十六进制目标地址，带分支的函数被误排除；新口径正确归一化目标地址后，常量/偏移完全一致的分支函数可正常判 IDENTICAL。DIFF 不变（DIFF 取决于助记符序列，与归一化无关）。

## 影响与注意事项

- IDENTICAL 语义变严：**常量与字段偏移不再被忽略**，各服务报告中的历史数字均为旧口径，需重跑比对脚本才能更新；`docs/data/` 与进度文档保留历史口径记录，未改动。
- NEAR 含义不变：助记符序列相同、操作数存在差异。
- 调用目标集合仍需单独核验：归一化只保证「目标符号名一致」的目标地址差异被忽略，跨函数调用目标不同仍须人工 / 单独调用集比对确认（`wave_agent_constraints.md` 约束保留）。
- `semantic_compare.py` 的 ALIGNED / MINOR / MISALIGN 是语义口径，不属于 identical 分类，保持不动。
- `/tmp` 下的草稿脚本（`compare_point.py`、`compare_strict.py` 等）不在仓库内，未改动；如要复用请迁入 `source/toolchain/` 后接入 `compare_common`。

## 复现命令

```bash
# community 全量（写 source/build-verify-community/）
python3 source/compare_all_functions.py
# stun 全量
python3 source/toolchain/compare_stun.py
# 逐函数差异审查（统一归一化）
python3 source/toolchain/diff_func.py <symbol>
```
