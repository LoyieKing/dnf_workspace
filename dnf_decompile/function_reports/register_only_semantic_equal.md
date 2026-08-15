# Register-only Semantic-equal Candidates

本报告汇总所有 function_reports 中「整个汇编 diff 仅由寄存器分配/调度差异组成、语义完全等价」的函数。

扫描口径（放宽版）：
- 只看 `## 1. 汇编 diff` 代码块中以 `-`/`+` 开头的差异行（排除 `---`/`+++`）。
- 允许纯寄存器级指令差异；允许相同指令仅顺序调整；允许 jcc/jmp/call 的跳转目标仅因指令长度不同而产生数值偏移。
- 排除 cmp/test/setcc/push/pop、栈帧大小变化、数据/字符串/全局地址变化、字段偏移变化等真正改变语义的差异。

## 结果
### auction, point

候选数量：2

#### auction / `_ZN3nsl9TCPThread4loopEPv`

- 服务名：auction
- mangled：`_ZN3nsl9TCPThread4loopEPv`
- 语义相等理由：差异仅是同一条 `lea -0x66(%ebp),%eax` 与 `movl $0x0,0x4(%esp)` 在相邻调用前的先后顺序调整，操作数和内存位置均未改变，不改变语义。
- 代表差异行：

```diff
+lea    -0x66(%ebp),%eax
-lea    -0x66(%ebp),%eax
+movl   $0x0,0x4(%esp)
```

#### point / `_ZN3nsl9TCPThread4loopEPv`

- 服务名：point
- mangled：`_ZN3nsl9TCPThread4loopEPv`
- 语义相等理由：差异仅为同一条 `lea -0x66(%ebp),%eax` 与 `movl $0x0,0x4(%esp)` 在相邻调用前的顺序调整，操作数和内存位置不变，不改变语义。
- 代表差异行：

```diff
+lea    -0x66(%ebp),%eax
-lea    -0x66(%ebp),%eax
+movl   $0x0,0x4(%esp)
```

### dbmw

候选数量：14

**`_ZL16allocStackBufferjPPhPi`**
- 语义相等：同一条 `mov 0x8(%ebp),%edx` 仅被前移到相邻独立指令之前，参数加载值不变。
- 代表差异行：
```diff
+mov    0x8(%ebp),%edx
-mov    0x8(%ebp),%edx
```

**`_ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit`**
- 语义相等：两个互斥错误分支的栈槽 `-0x28` 与 `-0x18` 成对互换，分支内引用一致，栈帧大小不变。
- 代表差异行：
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
```

**`_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack`**
- 语义相等：两个互斥分支的栈槽 `-0x28` 与 `-0x20` 成对互换，未改变栈帧大小或数据语义。
- 代表差异行：
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
```

**`_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward`**
- 语义相等：`mov 0xc(%ebp),%eax` 仅被提升到 `mov -0x14(%ebp),%edx` 前，二者无依赖。
- 代表差异行：
```diff
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
```

**`_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE`**
- 语义相等：同一 `jmp` 目标符号的偏移仅由指令长度差异从 `+0x25b` 变为 `+0x25a`。
- 代表差异行：
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
```

**`_ZN14CNetworkThread8dispatchEPv`**
- 语义相等：同一清理代码块整体移动，块内指令逐字相同；仅块首 `jmp` 偏移因布局变化由 `+0x1c0` 变为 `+0x1c7`。
- 代表差异行：
```diff
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c7>
```

---

**dbmw 补充候选（放宽：内存操作数不变，仅寄存器分配/顺序变化）**

补充候选数量：8；补充后 dbmw 总候选数量：14

**`_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History`**
- 语义相等：掩码/零扩展操作改为先保存到 `%edx`，目标栈槽 `-0x144(%ebp)` 与掩码 `$0x1f` 不变；另一处仅 `%edi`→`%edx` 寄存器分配变化，je/jmp 目标偏移随指令长度变化。
- 代表差异行：
```diff
-and    $0x1f,%eax
+and    $0x1f,%edx
+mov    %edx,-0x144(%ebp)
```

**`_ZN12CApplication4LoadEiPPc`**
- 语义相等：参数指针从 `%edx` 改用 `%eax`，原 `%eax` 先移入 `%edx`，字段位移 `0x18` 不变；尾部 `mov %ebx,%eax; mov %eax,%edx` 合并为 `mov %ebx,%edx`；je/jmp 偏移仅随指令长度变化。
- 代表差异行：
```diff
-mov    0x18(%edx),%edx
+mov    0x18(%eax),%eax
+mov    %ebx,%edx
```

**`_ZN13CTcpNetSystem14OpenTcpServiceERiPKct`**
- 语义相等：错误分支栈槽 `-0x20`/`-0x18` 成对互换；`movzwl -0x2c(%ebp)` 结果由 `%ebx` 改为 `%eax` 再写入同一 `0x10(%esp)`，内存位移不变。
- 代表差异行：
```diff
-movzwl -0x2c(%ebp),%ebx
+movzwl -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
```

**`_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader`**
- 语义相等：同一栈槽 `-0x38(%ebp)` 的加载目标由 `%edx` 改为 `%eax`，再用额外 `mov %eax,%edx` 恢复；其余 je/jmp 仅偏移变化。
- 代表差异行：
```diff
-mov    -0x38(%ebp),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
```

**`_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader`**
- 语义相等：同一栈槽 `-0x38(%ebp)` 的加载目标由 `%edx` 改为 `%eax`，再用额外 `mov %eax,%edx` 恢复；其余 je/jmp 仅偏移变化。
- 代表差异行：
```diff
-mov    -0x38(%ebp),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
```

**`_ZN6CMySql4execEj`**
- 语义相等：对象指针从 `%edx` 改用 `%eax`，原值先存入 `%edx`，字段位移 `0x18` 不变；jmp/jne/je 仅偏移变化。
- 代表差异行：
```diff
-mov    %eax,0x18(%edx)
+mov    %edx,0x18(%eax)
+mov    %eax,%edx
```

**`_ZN6CMySql4openEPKcS1_S1_S1_`**
- 语义相等：对象指针先加载到 `%edx`，再直接写入同一 `0x42088(%edx)`；字段位移与参数位移均不变，je/jmp 仅偏移变化。
- 代表差异行：
```diff
-mov    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
```

**`_ZN6CMySql4openEPKcjS1_S1_S1_`**
- 语义相等：对象指针先加载到 `%edx`，再直接写入同一 `0x42088(%edx)`；字段位移与参数位移均不变，je/jmp 仅偏移变化。
- 代表差异行：
```diff
-mov    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
```


### monitor

候选数量：8

#### `_ZN13CMemberExpTbl17GetMemberExpLevelEj`
- 语义相等理由：新增的 `movzbl %al,%eax` 是冗余零扩展，`nop` 无副作用；jcc/jmp 助记符与目标基址不变，仅数值偏移因指令长度变化而平移。
- 代表差异行：

```diff
-ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x41>
+ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x44>
+movzbl %al,%eax
```

#### `_ZN13CTcpNetSystem4InitEt`
- 语义相等理由：两处 `mov %ebx,%eax; mov %eax,%edx` 被合并为 `mov %ebx,%edx`，最终 edx 值相同；跳转目标仅因指令长度变化平移。
- 代表差异行：

```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
```

#### `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE`
- 语义相等理由：仅删除一个 `nop`，后续 `jmp` 目标数值偏移相应减 1，控制流和语义不变。
- 代表差异行：

```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
-nop
```

#### `_ZN14CServerHandler20GetTcpGameServerByChEh`
- 语义相等理由：删除一个 `nop` 使后续跳转目标数值偏移减 1；所有 jcc/jmp 的助记符与目标基址不变。
- 代表差异行：

```diff
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x63>
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x62>
-nop
```

#### `_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb`
- 语义相等理由：`movzwl -0x4(%ebp),%edx` 与 `mov 0x8(%ebp),%eax` 顺序互换，写入不同寄存器且读取不冲突。
- 代表差异行：

```diff
+movzwl -0x4(%ebp),%edx
-movzwl -0x4(%ebp),%edx
```

#### `_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start`
- 语义相等理由：`mov -0x10(%ebp),%edx` 与 `mov 0xc(%ebp),%eax` 顺序互换，写入不同寄存器，后续使用前值均已就绪。
- 代表差异行：

```diff
+mov    -0x10(%ebp),%edx
-mov    -0x10(%ebp),%edx
```

#### `_ZNK11CUdpHandler12SendToServerEPcitPKc`
- 语义相等理由：`lea -0x48(%ebp),%eax` 与两个栈参数 `movl` 写入顺序互换，地址计算和参数写入互不依赖。
- 代表差异行：

```diff
-lea    -0x48(%ebp),%eax
+lea    -0x48(%ebp),%eax
```

#### `_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t`
- 语义相等理由：`mov 0x8(%ebp),%eax` 与 `mov 0xc(%ebp),%edx` 顺序互换，写入不同寄存器，后续 `movsl` 使用前值已确定。
- 代表差异行：

```diff
+mov    0x8(%ebp),%eax
-mov    0x8(%ebp),%eax
```


### statics

候选数量：3

**`_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler`**
- 语义相等：ORIG 把字段 `0x4(%eax)` 先装入 `%eax` 再搬运到 `%edx`，OURS 直接装入 `%edx`；字段偏移与最终 `%edx` 值均不变，属于编译器冗余寄存器搬运。所有 `je`/`jmp` 目标符号不变，数值偏移因少一条 2 字节 `mov` 而统一平移 2。
- 代表差异行：
```diff
-mov    0x4(%eax),%eax
-mov    %eax,%edx
+mov    0x4(%eax),%edx
```

**`_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler`**
- 语义相等：ORIG 把地址 `0xc(%ecx,%eax,4)` 的值直接装入 `%ecx`，OURS 先装入 `%eax` 再复制到 `%ecx`；地址表达式与最终 `%ecx` 值不变，仅多一条冗余寄存器搬运。4 处 jcc/jmp 目标因新增 2 字节 `mov` 统一平移 +2。
- 代表差异行：
```diff
-mov    0xc(%ecx,%eax,4),%ecx
+mov    0xc(%ecx,%eax,4),%eax
+mov    %eax,%ecx
```

**`_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler`**
- 语义相等：ORIG 把 `0xc0/0xbc/0xa4(%eax)` 分别直接装入 `%esi/%edi/%ebx`，OURS 先装入 `%eax` 再复制到对应寄存器；`-0x43c..-0x42c` 的临时栈槽存/取只是等价重排，最终传给 `snprintf` 的字段值不变。`jmp`/`je` 目标因净增 6 字节统一平移 +6。
- 代表差异行：
```diff
-mov    0xc0(%eax),%esi
+mov    0xc0(%eax),%eax
+mov    %eax,%esi
```


### guild

候选数量：32

- `_ZN11CGuild12AddGuildFundEj`
  - 语义相等理由：两个日志对象的栈槽 `-0x28` 与 `-0x30` 对应的 `lea` 指令成对交换，调用参数与数据流不变。
  - `-lea    -0x28(%ebp),%eax`
  - `+lea    -0x30(%ebp),%eax`
  - `-lea    -0x30(%ebp),%eax`
- `_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii`
  - 语义相等理由：同一条 `mov 0x1c(%ebp),%edx` 仅调度到 `mov 0xc(%ebp),%eax` 之前，无数据依赖变化。
  - `+mov    0x1c(%ebp),%edx`
  - `-mov    0x1c(%ebp),%edx`
- `_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption`
  - 语义相等理由：同一结构体拷贝序列仅把基址寄存器从 `%eax` 换成 `%ebx`、中间搬运寄存器从 `%edx` 换成 `%eax`；字段偏移与目标栈槽不变。
  - `-mov    0x20(%ebp),%eax`
  - `+mov    0x20(%ebp),%ebx`
  - `-mov    (%eax),%edx`
- `_ZN11CGuildCargo14SendGuildCargoEP5CUser`
  - 语义相等理由：同一条 `movl $0x18dc,0x8(%esp)` 仅向前调度，立即数与目标均不变。
  - `+movl   $0x18dc,0x8(%esp)`
  - `-movl   $0x18dc,0x8(%esp)`
- `_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri`
  - 语义相等理由：栈槽 `-0x14`/`-0x10` 重新编号，冗余 store/load 被省略，`add $0x12,%edx` 改写为 `lea 0x12(%eax),%edx`；字段偏移与调用参数不变。
  - `-mov    %eax,-0x14(%ebp)`
  - `+mov    %eax,-0x10(%ebp)`
  - `-add    $0x12,%edx`
- `_ZN11CTcpHandlerC1Ev`
  - 语义相等理由：`mov %ebx,%eax; mov %eax,%edx` 合并为 `mov %ebx,%edx`，仅省略中间寄存器 eax，最终 edx 值不变。
  - `-mov    %ebx,%eax`
  - `-mov    %eax,%edx`
  - `+mov    %ebx,%edx`
- `_ZN11CTcpHandlerC2Ev`
  - 语义相等理由：`mov %ebx,%eax; mov %eax,%edx` 合并为 `mov %ebx,%edx`，仅省略中间寄存器 eax，最终 edx 值不变。
  - `-mov    %ebx,%eax`
  - `-mov    %eax,%edx`
  - `+mov    %ebx,%edx`
- `_ZN11CUdpHandler16InitServerSocketEi`
  - 语义相等理由：sockaddr 与接收缓冲区等局部栈槽统一平移，所有引用一致，栈帧大小不变。
  - `-lea    -0x24(%ebp),%eax`
  - `+lea    -0x28(%ebp),%eax`
  - `-movw   $0x2,-0x24(%ebp)`
- `_ZN12CUserManager17DeleteUser_CharNoEj`
  - 语义相等理由：`%ebx`/`%esi` 两个寄存器角色互换，参数写入 `0x10(%esp)`/`0xc(%esp)` 的位置保持对应值不变。
  - `-mov    %eax,%ebx`
  - `+mov    %eax,%esi`
  - `-mov    0xc(%ebp),%esi`
- `_ZN12CUserManager17InsertUser_CharNoEjP5CUser`
  - 语义相等理由：局部 pair/map 迭代器栈槽重新编号，`%edi/%esi/%ebx` 寄存器角色互换，写入参数槽的值保持一致。
  - `-lea    -0x28(%ebp),%eax`
  - `+lea    -0x20(%ebp),%eax`
  - `-mov    %eax,%esi`
- `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser`
  - 语义相等理由：局部 pair 栈槽重新编号，`%ebx/%esi` 寄存器角色互换，参数槽写入对应值不变。
  - `-lea    -0x18(%ebp),%eax`
  - `+lea    -0x10(%ebp),%eax`
  - `-mov    %eax,%ebx`
- `_ZN13CAppStartInit4InitEP12CApplicationiPPc`
  - 语义相等理由：两处 `mov %ebx,%eax; mov %eax,%edx` 被合并为 `mov %ebx,%edx`；其余 jmp/jcc 目标仅因指令缩短发生数值偏移，控制流等价。
  - `-mov    %ebx,%eax`
  - `-mov    %eax,%edx`
  - `+mov    %ebx,%edx`
- `_ZN13CGuildManager16GetAttendanceExpEji`
  - 语义相等理由：eax/edx 交换承担两个子表达式，后续 `add %edx,%eax` 的加法交换律保证最终结果不变。
  - `-movzbl %al,%edx`
  - `+movzbl %al,%eax`
  - `-mov    %ebx,%eax`
- `_ZN13CPowerManager23SendPowerWarProcessInfoEj`
  - 语义相等理由：`%ebx` 改为 `%edx` 承担局部值，`mov -0xc(%ebp),%eax` 仅调度顺序变化。
  - `-mov    -0x14(%ebp),%ebx`
  - `+mov    -0x14(%ebp),%edx`
  - `+mov    -0xc(%ebp),%eax`
- `_ZN13CTcpNetSystem10SendPacketEv`
  - 语义相等理由：两组 `lea -0x50(%ebp),%eax` 与 `lea -0x4c(%ebp),%eax` 在所有使用处成对交换位置/栈槽，数据流不变。
  - `-lea    -0x50(%ebp),%eax`
  - `+lea    -0x4c(%ebp),%eax`
  - `-lea    -0x4c(%ebp),%eax`
- `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE`
  - 语义相等理由：末尾 `nop` 被删除，`jmp` 目标由 +0x25b 变为 +0x25a，仅因指令长度变化产生数值偏移，控制流不变。
  - `-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>`
  - `+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>`
  - `-nop`
- `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader`
  - 语义相等理由：`movzwl %ax,%edx; add $0x4,%edx` 与 `movzwl %ax,%eax; lea 0x4(%eax),%edx` 等价，`nop` 删除使跳转目标平移。
  - `-movzwl %ax,%edx`
  - `+movzwl %ax,%eax`
  - `+lea    0x4(%eax),%edx`
- `_ZN14CPacketDecoderC1Ev`
  - 语义相等理由：`add $0x4,%edx` 改写为 `lea 0x4(%eax),%edx` 并调整 `mov` 顺序，寄存器数据流不变。
  - `-mov    -0x4(%ebp),%edx`
  - `+mov    -0x4(%ebp),%eax`
  - `+lea    0x4(%eax),%edx`
- `_ZN14CPacketDecoderC2Ev`
  - 语义相等理由：`add $0x4,%edx` 改写为 `lea 0x4(%eax),%edx` 并调整 `mov` 顺序，寄存器数据流不变。
  - `-mov    -0x4(%ebp),%edx`
  - `+mov    -0x4(%ebp),%eax`
  - `+lea    0x4(%eax),%edx`
- `_ZN17STGuildDBInfoOnlyC1Ev`
  - 语义相等理由：`movzbl 0x1c(%eax),%edx` 拆成 `movzbl 0x1c(%eax),%eax; mov %eax,%edx` 并重载 `0x8(%ebp)`，字段偏移与最终 edx 不变。
  - `-movzbl 0x1c(%eax),%edx`
  - `+movzbl 0x1c(%eax),%eax`
  - `+mov    %eax,%edx`
- `_ZN17STGuildDBInfoOnlyC2Ev`
  - 语义相等理由：`movzbl 0x1c(%eax),%edx` 拆成 `movzbl 0x1c(%eax),%eax; mov %eax,%edx` 并重载 `0x8(%ebp)`，字段偏移与最终 edx 不变。
  - `-movzbl 0x1c(%eax),%edx`
  - `+movzbl 0x1c(%eax),%eax`
  - `+mov    %eax,%edx`
- `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt`
  - 语义相等理由：两条独立的参数加载 `mov 0xc(%ebp),%edx` 与 `mov 0x10(%ebp),%edx` 仅交换顺序。
  - `+mov    0xc(%ebp),%edx`
  - `-mov    0xc(%ebp),%edx`
  - `+mov    0x10(%ebp),%edx`
- `_ZN5CPeer11send_packetEPci`
  - 语义相等理由：`mov 0x1834(%eax),%edx; ... add %eax,%edx` 与 `mov 0x1834(%eax),%eax; mov %eax,%edx; add 0x10(%ebp),%edx` 等价，字段偏移与最终 edx 不变。
  - `-mov    0x1834(%eax),%edx`
  - `+mov    0x1834(%eax),%eax`
  - `+add    0x10(%ebp),%edx`
- `_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember`
  - 语义相等理由：同一条 `mov 0xc(%ebp),%edx` 仅调度到 `mov 0x8(%ebp),%eax` 之前。
  - `+mov    0xc(%ebp),%edx`
  - `-mov    0xc(%ebp),%edx`
- `_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc`
  - 语义相等理由：地址计算 `+0xf0 + base +0x19` 与 `+0x100 + base +0x9` 等价，`mov 0x8(%ebp),%ecx` 调度到使用前，字段偏移与跳转目标基址不变。
  - `-add    $0xf0,%eax`
  - `+add    $0x100,%eax`
  - `-add    0x8(%ebp),%eax`
- `_ZN6CGuild22NotifyTodayGuildMemberEP5CUser`
  - 语义相等理由：每次字段加载前重新从 `0x8(%ebp)` 装入 this 指针，字段偏移 `0x66ec..0x6710` 与写入栈槽均不变。
  - `-mov    0x66ec(%eax),%edx`
  - `+mov    0x66ec(%eax),%eax`
  - `+mov    0x8(%ebp),%eax`
- `_ZN6CGuild25ChangeGuildMemberCharNameEjPc`
  - 语义相等理由：栈槽 `-0xd` 平移到 `-0x11`，地址偏移 `0xd0+0x11` 等价改写为 `0xe0+0x1`，字段访问最终地址不变。
  - `-movb   $0x0,-0xd(%ebp)`
  - `+movb   $0x0,-0x11(%ebp)`
  - `-add    $0xd0,%eax`
- `_ZN6CGuild29getUnconnectedGuildMemberNameEj`
  - 语义相等理由：同一条 `mov 0x8(%ebp),%ecx` 仅调整调度位置，寄存器与数据流不变。
  - `+mov    0x8(%ebp),%ecx`
  - `-mov    0x8(%ebp),%ecx`
- `_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji`
  - 语义相等理由：`add $0xf0,%eax; mov %cl,0x14(%eax)` 与 `add $0x104,%eax; mov %cl,(%eax)` 最终地址相同，跳转目标仅平移。
  - `-add    $0xf0,%eax`
  - `+add    $0x104,%eax`
  - `-mov    %cl,0x14(%eax)`
- `_ZN8WongWork11CGMAccounts4isGMEj`
  - 语义相等理由：局部 pair/迭代器栈槽整体重新编号，栈帧大小不变，数据流一致。
  - `-movl   $0x0,-0x20(%ebp)`
  - `+movl   $0x0,-0x18(%ebp)`
  - `-lea    -0x18(%ebp),%eax`
- `_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info`
  - 语义相等理由：多次 `add base,%eax` 改写为 `lea (%base,%eax,1),%eax` 并提前 `add $0x4/$0x8`，最终结构体字段地址相同，跳转目标仅平移。
  - `-add    0xc(%ebp),%ebx`
  - `+lea    (%ecx,%eax,1),%ebx`
  - `-mov    %eax,0x4(%ebx)`
- `_ZNK11CUdpHandler12SendToServerEPcitPKc`
  - 语义相等理由：同一条 `lea -0x48(%ebp),%eax` 相对 memset 参数加载仅调整顺序。
  - `-lea    -0x48(%ebp),%eax`
  - `+lea    -0x48(%ebp),%eax`
