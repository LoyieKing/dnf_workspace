# 全量回归进度（2026-08-13 保存点）

## 当前权威状态（2026-08-13，R44 收尾 / R45 中断保存）

**总计 649 个 md**（基线 3324，累计归零 2675）。

| 服务 | 当前 md | 状态 |
|---|---:|---|
| stun | 0 | ✅ 归零 |
| channel | 0 | ✅ 归零 |
| bridge | 0 | ✅ 归零 |
| relay | 0 | ✅ 归零 |
| auction | 0 | ✅ 归零 |
| point | 0 | ✅ 归零 |
| community | 0 | ✅ 归零 |
| coserver | 1 | 攻坚中 |
| manager | 3 | 攻坚中 |
| statics | 53 | 攻坚中 |
| dbmw | 191 | 攻坚中 |
| guild | 205 | 攻坚中 |
| monitor | 196 | 攻坚中 |

## 最近轮次收益

| 轮次 | 提交 | md | 净收益 |
|---|---:|---:|---:|
| R35 | cf936bd5 | 802→776 | -26 |
| R36 | 11686f36 | 776→773 | -3 |
| R37 | 66f8baa5 | 773→768 | -5 |
| R38(中断) | b0f331ae | 768→755 | -13 |
| R39 | 0a443921 | 755→733 | -22 |
| R40 | a785f3eb | 733→705 | -28 |
| R41 | 2aafbb12 | 705→696 | -9 |
| R42 | ab6ec03c | 696→682 | -14 |
| R43 | 1e150bca | 682→666 | -16 |
| R44 | a312bf70 | 666→649 | -17 |

## 关键机制（2026-08-12 起落地）

### 尝试日志（手册 §5.1，跨轮记忆）
- 每个处理过但未归零的函数必须写 `function_reports/<svc>/attempts/<mangled>.tsv`
  （source_excerpt / result / date 三列），agent 开工前先读，禁止重复已试变体。
- 累计 88 个 attempts 文件入库，跨轮避免重复劳动（此前 760 个剩余中 759 个
  从第 8 轮就在、但多数函数实际有效尝试仅 1-2 次是根因）。

### 近端优先分工（手册 §5.2）
- diff ≤20 行的“近端函数”由专项 agent 快速清理（每函数 2-3 变体内解决）。
- 每轮 6 个服务主 agent + 4 个近端专项 agent 并行。

### 逐 TU 混合工具链（手册 §4.1）
- ORIG 是 4.1.2 / 4.4.4 / 4.4.6 / 4.4.7 混合编译，按 CU 查 DW_AT_producer
  后逐文件分流。
- guild：DNFServerHandler/PowerWar→4.4.4、DNFTableBase→去 eh-spec
  （dnf_guild_cxx.sh）。
- monitor：DNFProhibitUserC5/MemoryCashManagerC5→4.1.2-52
  （dnf_monitor_cxx.sh，R44 集成）。

## 已确认的“到头了”（REMAIN，均有 attempts 证据）

- statics `CHWSpecResearcher::SendDBMWErrorLine`：ORIG 中段冗余 mov 拷贝，
  5 编译器 × 10 变体不可复现。
- statics `CCubeStatistic::addStatisticData`：ORIG 内联销毁 make_pair 临时，
  OURS 跳共享 EH 清理块，5 编译器 × 8 变体不可翻转。
- dbmw 21 个近端函数判定为编译器代码生成差异（寄存器/求值顺序/scale 折叠
  等，4 编译器 A/B 均不匹配，attempts 已记录）。

## 剩余差异形态分类（R43 时 666 个）

| 形态 | 数量 | 说明 |
|---|---:|---|
| 字符串/符号地址 | 236 | 两侧引用不同字符串/全局符号 |
| 混合形态 | 211 | 大函数多差异叠加 |
| 指令形态 | 169 | lea/add、movzbl/cmpb、seta/setbe 等 |
| 分支布局 | 40 | 分支顺序/目标偏移 |
| 求值顺序 | 26 | 指令集合相同顺序不同 |
| 寄存器分配 | 14 | 同形态仅寄存器互换 |

## 遗留注意

- community WriteLog 已在 R35 归零（`this->time = now` 隐式拷贝赋值）。
- relay 3 个 NEAR 是解析器字符串合并缺陷（v21→v23 修复），非源码差异。
- 解析器已到 v27（符号区间内部优先于字符串命中，CFLog vtable 修复）。
- R42 曾误改 VillageAttackedManager tGMConfig 名 / SendToClient register 形态、
  R43 曾留下未完成的结构体+签名改动，均已回滚并写入本档提醒。
- R45 于 2026-08-13 中断保存（用户指令），中断前 2 个实验改动已回滚，
  当前工作树与 a312bf70（R44）一致，产物全部重建确认。
