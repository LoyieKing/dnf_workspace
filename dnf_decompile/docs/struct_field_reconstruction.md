# 无 DWARF 服务：结构体字段结构还原 SOP（v1）

## 目标

把无 DWARF 服务（guild / monitor / dbmw / statics / manager / coserver / relay /
community）里的不透明结构体 `char m_data[N]` 还原为**类型化命名字段**，并用 ORIG
反汇编逐字段校验 offset 正确；随后用正确 offset 反查我们翻译的源码，修掉真实的
偏移/步长/字段宽度 bug。禁止用内联 ASM 强行对齐指令形态。

## 证据源（按可信度排序）

1. **ORIG 反汇编**（最高权威）：`nm -S -C` 定位函数，`objdump -d` 看真实偏移。
   统一用 `source/toolchain/dump_orig_func.sh <svc> <mangled>`（已处理 dbmw 的
   `dbmw_guild` 目录差异）。
2. **源码 log 语句**：`log(...)` / `CMyFileLog` 的格式串给出字段名与类型线索
   （`%d/%u/%s/%lld/%x` → int/uint/char*/long long/...）。
3. **源码裸偏移访问**：`*(T*)((char*)X + 0xoff)`、`RA_<N>`（N=offset）、
   `m_data[off]`、`memcpy/memset((char*)X+off, ...)`、数组步长（`&a + i*stride`）。
4. **Ghidra md**：`function_reports/<svc>/<mangled>.md` 的 `## 2` 段有 local/字段
   偏移线索，但以 ORIG 反汇编为准。

## 逐结构体还原流程

1. 列出该结构体在所有 .cpp 里被访问的每一处（含 log 调用）。
2. 对每处访问，从 cast / log 格式串确定字段类型与位宽（char/short/int/long long）。
3. 用 ORIG 反汇编确定每处访问的**有效偏移**。
   - 注意 `add $0x10,%eax; movzwl 0x7(%eax)` 等价于 `movzwl 0x17(%eax)`，这是等价
     寻址拆分，不是 bug。只有「最终有效地址偏移不同」才是真 bug。
4. 把结构体写成 `__attribute__((packed))` 类型化字段 + `char m_padXX[...]` 补位。
5. 用 `static_assert` / 打印 `sizeof`、`offsetof` 确认与原始 `char m_data[N]` 布局
   **完全一致**（总大小不变、每字段 offset 精确）。
6. 把源里对应的裸偏移访问改写为 `X->m_field` 成员访问（常量偏移才改；变量偏移数组
   索引改成员数组访问）。

## 验证门（每改必过）

- 编译通过（各服务 scratch helper）。
- `sizeof`/`offsetof` 与原始布局一致。
- scratch 对比：DIFF→NEAR→IDENTICAL 或 `diff_pm` 下降算有效；变差/回退必须还原。
- 不删 `printf/puts`（ORIG 里可能存在）；不改共享头（除非该 agent 是唯一 owner）；
  不改 `build/`、`function_reports/`；不用 ASM。

## 已发现并修复的同类真实 bug（参照）

- `Notify_GuildMemberGrade::m12` 标 +0xa 实为 +0x12；`DMBW_Delete_To_BlackList::m2c`
  标 +0xa 实为 +0x2c。
- `ReplyGuildMembersToWeb` 成员数组步长 `count*5*4`（20B）应为 `count*5`（5B）。
- `endurance` 实参 0→1；`enter/success` 偏移整体 +4；`spec_id` 写偏移 0xb→0xa；
  `targetCharNo +4→+8`。

## 分工约束

- 一个服务一个 owner；同一 .cpp 禁止两个 agent 同时改。
- 共享头 `source/shared/...` 由其所属服务 owner 改（当前只有
  `Packet_Monitor_Call_Guild_Members_ToChannel.h`，归 monitor）。
