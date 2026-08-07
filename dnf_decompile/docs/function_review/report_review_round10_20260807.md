# df_community_r 第十轮复核：无符号比较语义对齐（2026-08-07）

## 本轮发现：`get_size()` 应为无符号返回

`OnReqAddBuddy`/`OnResAddBuddy` 的容量检查，原始为 `cmp eax,0x1f; seta al`
（**无符号** above），我们为 `setg al`（有符号 greater）——说明原始 `CBuddyManager::get_size()`
返回 `unsigned int`（直通 `vector::size()` 的 size_t），或比较按无符号进行。

修改 `get_size()` 返回类型 int → **unsigned int** 后，`seta` 与原始一致
（语义更贴近：vector::size() 本身无符号，容量上限检查本就该无符号比较）。

## 尝试并回退的实验（确认编译器极限）

1. `OnReqAddBuddy` 首检查 `user == NULL || charac != packet` → `&&` 复合物化：
   4.4.4 生成 `sete` + 栈存储，与原始 `mov eax,1/mov eax,0 + test al,al`（AL 寄存器）
   不匹配，且指令数变差（147 vs 153），回退；
2. `OnResAddBuddy` 的 `valid` 布尔改为 `&&` 复合：同样 AL vs 栈差异，且整体指令
   错位（126 vs 127），回退为未初始化 bool + 嵌套 if（126==126，仅 AL/栈差异）。

结论：`bool` 物化的 AL（原始编译器）vs 栈槽（gcc 4.4.4）差异是系统性的，无法源码消除。

## 本轮结束指标（与第九轮一致，确认稳定）

| 指标 | 数值 |
|---|---|
| 项目函数 DIFF | **81** |
| 项目函数 NEAR | **329** |
| 助记符级精确 | **409/490（83.5%）** |
| 文件大小 | 974,376 / 967,844（99.3%） |
| 符号 MISSING/EXTRA | 2/7 |

## 结论

`get_size` 无符号化是本次唯一的实质改进（seta 对齐）。剩余 81 个 DIFF 函数经第九轮
编译器穷尽调查 + 本轮布尔物化实验，确认全部为原始编译器特有的 -O0 生成差异
（AL vs 栈、setcc 组合、rep-stos 展开），在当前工具链下不可消除。

