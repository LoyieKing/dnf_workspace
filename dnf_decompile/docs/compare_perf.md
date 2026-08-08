# 比对 / 构建性能优化（2026-08-08）

## 原则

只清理「明显很垃圾」的性能问题，不新增激进缓存：

- 比对侧全部是纯算法改造（整文件一次性解析 + 地址切片、批量 demangle），
  结果与优化前逐项一致，且全部为进程内结构、不落盘；
- 构建侧只做并行编译（各 TU 独立，产物不变），**不新增**增量编译缓存；
  各脚本既有的 `-nt` 增量判断原样保留。

## 比对脚本

### 问题

- 每个函数单独起一次 `objdump` 解析整个二进制（community 全量 ~3100 函数 → 6200+ 次子进程）；
- 每个符号单独起一次 `c++filt`；
- `audit_full_compare.py` 对每个函数额外再跑两次 `objdump` 提取立即数。

### 修复

在 [compare_common.py](../source/toolchain/compare_common.py) 增加共享实现：

| 函数 | 作用 |
|---|---|
| `load_disasm(bin, intel=False)` | 整二进制/目标文件一次 `objdump -d` → `{addr: text}` + 有序地址表 |
| `disasm_slice(loaded, start, stop)` | 按符号地址范围二分切片取指令 |
| `demangle_batch(names)` | 单次 `c++filt` 批量还原所有符号 |

接入脚本：

- `source/compare_all_functions.py`、`source/compare_df_community_functions.py`
- `source/toolchain/compare_stun.py`、`compare_channel.py`、`compare_channel_tu.py`
- `source/toolchain/dwarf_validate.py`、`audit_full_compare.py`

`audit_full_compare.py` 另去掉了每个函数的二次 `objdump`，立即数直接复用已取出的指令文本。

## 构建脚本

9 个 `source/toolchain/build-*.sh`（stun / channel / bridge / auction / point /
statics / coserver / guild / relay）改为并行编译：

- `JOBS` 环境变量控制并行度，默认取 `nproc`；
- 分批后台编译，链接前 `wait`；**逐个 PID 校验退出码**，任一编译失败立即中断
  （避免静默产出缺失/陈旧 .o）；
- 不改变编译命令、编译产物与链接顺序，不影响可复现性。

## 验证

| 场景 | 优化前 | 优化后 | 结果一致性 |
|---|---:|---:|---|
| community 全量比对（3100+ 函数） | ~126 s | ~1.8 s（约 70x） | 分类完全一致（IDENTICAL 1057 / NEAR 209 / DIFF 1837 / MISSING 2 / EXTRA 6） |
| stun 全量比对 | ~1.0 s | ~0.35 s | 一致（IDENTICAL 6 / NEAR 19 / DIFF 1） |
| compare_df_community_functions | 逐符号 objdump + demangle | ~1.6 s，IDENTICAL 440/552 | 统一严格口径下正常 |
| compare_channel_tu（Exception.cpp） | — | 正常，8 IDENTICAL / 4 NEAR | 与严格口径一致 |
| dwarf_validate compare stun | — | 正常 | — |
| 并行构建失败检测 | — | 模拟编译失败 → 退出码 1，中断 | 可靠 |

## 使用

```bash
# 默认按核数并行
source/toolchain/build-auction.sh
# 限制并行度
JOBS=4 source/toolchain/build-auction.sh
```
