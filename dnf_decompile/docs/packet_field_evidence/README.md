# df_game_r Packet 字段证据库（2026-08-16）

从 `df_game_r`（0x80a9142 工程 `dnf_project`）提取：对 170 个 Packet 构造函数地址做
全引用（XREF）扫描，得到 525 个引用点、342 个唯一函数，全部反编译后按包聚合。

## 证据文件格式

每个 `<Packet_X>.txt`：
- `== 函数名 @ 地址 (pkt=local_xx) ==`：一个使用点（发包/填字段/接收处理）。
- `+0x.. [NB 类型] local_yy`：字段偏移、大小、Ghidra 拆出的局部变量。
- 缩进行：该字段在该函数里的赋值/使用行（可推断语义）。
- `local_hints: local_x=name,...`：函数内局部变量的 API 调用提示（值流传播用）。
- `strings:`：函数内字符串（日志/SQL/throw/命令名）。

## 使用方法

1. 偏移/类型以 `+0x.. [NB]` 为准，与头文件 `// +0x..` 注释核对。
2. 赋值行里的 API（`CUser::GetUID`/`get_acc_id`/`getCurCharacNo`/`get_charac_guildkey`/
   `GameWorld::GetChannelType` 等）直接给出字段语义。
3. 字符串里的 SQL/日志格式串可提供列名/字段名。
4. 已自动应用一批强证据改名（见 git 历史/头文件注释），弱证据保留 `m_fieldX` 占位。

## 统计

- 169/170 个包有字段访问证据；489 个占位符字段待逐步按证据命名。
- 重新生成：`source/toolchain/ghidra_packet_xrefs.java` + `ghidra_decompile_by_addr.java`
  + `/tmp` 分析脚本（证据提取逻辑见会话记录）。
