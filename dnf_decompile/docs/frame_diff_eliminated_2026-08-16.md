# 帧差全量消除里程碑（2026-08-16）

全量扫描（manifest 中全部 DIFF/NEAR 函数，ORIG/OURS 二进制 objdump 双向核对）：
**monitor / dbmw / guild / statics 四个服务的全部非 identical 函数帧尺寸已与 ORIG 完全一致（0 个帧差函数）。**

## 达成路径

1. 帧差根因分类：缓存局部内联/显式化、块作用域对象拆槽、缓冲共享、
   Packet 结构大小/字段偏移修正、结果槽（char ok）复刻、pkt/app/gs/userMgr
   副本局部复刻。
2. 累计约 45 个函数帧完全对齐；OnRequestGuildCreate 翻越 IDENTICAL_AE；
   OnPvPChannelInfo DIFF→NEAR；8 个语义 bug + 7 个 Packet 结构 MISMATCH 修复。
3. 编译器矩阵复核（c5 / c5r52 / c6444r / c6 / c6446r）确认当前组合最优。

## 剩余差异形态（帧内编译器指令选择）

- movzbl+cmp vs cmpb+movb（同值）
- 寄存器分配（esi/ebx/edi 互换）
- 分支镜像（je↔jne、setcc 极性、块物理序交换）
- 跳转偏移（函数长度差 1~8 字节导致 je/jmp 目标差）
- 局部槽位排列（同集合不同顺序）
- 异常清理块（eh landing pad）摆放

这些差异对源码结构调整不敏感（源码相同仅换编译器变体仍不同），
需要 ORIG 精确构建环境（各 TU 编译器版本 + flags 组合）才能逐函数对齐，
或按 SEMANTIC_EQ 口径归档（多轮 subagent 验证绝大多数函数语义相等）。
