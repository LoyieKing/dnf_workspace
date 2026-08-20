# process

`_ZN10QuickParty26ReturnAncientDungeonTicket7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::ReturnAncientDungeonTicket::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::ReturnAncientDungeonTicket` | `0x0826d598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d598  _ZN10QuickParty26ReturnAncientDungeonTicket7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::ReturnAncientDungeonTicket::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d598, 0x0826d5ab]
0826d598 +0x00:  push   %ebp
0826d599 +0x01:  mov    %esp,%ebp
0826d59b +0x03:  sub    $0x18,%esp
0826d59e +0x06:  mov    0xc(%ebp),%eax
0826d5a1 +0x09:  mov    %eax,(%esp)
0826d5a4 +0x0c:  call   0859bc9a <_ZN6CParty31increase_ancient_dungeon_ticketEv>  ; CParty::increase_ancient_dungeon_ticket()
0826d5a9 +0x11:  leave
0826d5aa +0x12:  ret
0826d5ab +0x13:  nop
```

## 反编译 C

```c
// QuickParty::ReturnAncientDungeonTicket::process @ 0x826d598

/* QuickParty::ReturnAncientDungeonTicket::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::ReturnAncientDungeonTicket::process(undefined4 param_1,CParty *param_2)

{
  CParty::increase_ancient_dungeon_ticket(param_2);
  return;
}
```
