# secsvr 三件套还原顺序（专属工作区）

生成时间：2026-08-09（随 `df_secsvr_dwarf_restoration.md` 一起迁入独立工作区）

本文档是 secsvr（gunnersvr / zergsvr / secagent）在 `dnf_secsvr/` 专属工作区内的还原
顺序与策略，从主工程 `dnf_decompile/docs/decompile_order.md` 移出并独立维护。

## 目标与源码关系

- 三件套同源（同一 CI 工作区不同 tag），共享 `commlib/framework`、`commlib/zenlib`、
  `protocol/common` 与 `src/` 加密库；服务专属代码量小
  （gunnersvr ≈10 个 `gunner_*`、zergsvr ≈16 个 `zerg_*`、secagent ≈17 个 `secagent_*`）。
- 与 `dnf_decompile` 中其他二进制（DNFServer / ChannelOld / ServerLab / ../../Include）
  **无项目源码关联**，不能直接复用其实现；第三方 SDK（tencrypt/tsf4g/rapidxml/mysqlclient）
  与其他服务是各自副本。
- 三件套均为 **GCC 4.1.0 SUSE**（4.1.2 用于加密库 CU），首次出现的工具链版本。

## 指标（来自 `df_game_secsvr_dbmw_basic_info.md` / 实测）

| 顺序 | 二进制 | 规模 | 命名函数(T/W) | 字符串 | CU | DWARF | 现状 |
|---|---:|---:|---:|---|---:|---|---|
| 1 | `gunnersvr` | 13.5 MB | 1,883 | 307.1k | 91（C++ 88） | 完整 | 桩已生成 |
| 2 | `zergsvr` | 15.5 MB | 2,059 | 358.3k | 101（C++ 98） | 完整 | 桩已生成 |
| 3 | `secagent` | 18.7 MB | 4,035 | 388.2k | 153（C++ 150） | 完整 | 桩已生成 |

## 还原策略

1. **补桩路线**（桩已就位，见 `df_secsvr_dwarf_restoration.md`）：
   桩位于 `../source/<binary>/`，镜像原始路径（`src/`、`output/`、`import/`、`inc/`），
   类型信息与参数/变量名已还原，函数体为空。
2. **共享优先**：gunnersvr 与 zergsvr 先整体复用 `commlib/framework` +
   `commlib/zenlib` + `protocol/common` 的公共实现，再补各自专属 TU；
   secagent 最后（含 TenCrypt/对称加密库）。
3. **构建基线**：C++98 / 32 位 / O0，GCC 4.1.0 SUSE 单独评估；每补完一个服务先补
   `main` 使目标可链接，再纳入构建。
4. **验收**：沿用主工程 `compare_df_community_functions.py` 同款方法（符号命中、
   字符串命中、助记符重叠）；桩内保留的行号 / mangled 名 / 参数名直接对照 Ghidra
   反编译结果（Ghidra 工程仍为 `dnf_decompile/dnf_project.rep`）。

## 已知限制（详见还原报告）

- GCC 4.1 DWARF2 不携带模板实参（`std::vector` 等无 `<T>`），人工还原时补全。
- 签名中的匿名类型降级为 `/*anon*/ int`；声明形参无名处用 `argN`。
- 编译器生成的 inline 克隆 / `__tcf_*` 不输出到桩。

## 关联材料

- 桩还原报告：`df_secsvr_dwarf_restoration.md`
- 基本信息与 Ghidra 导入记录：`df_game_secsvr_dbmw_basic_info.md`
- 生成器：`../toolchain/gen_dwarf_stubs.py`
