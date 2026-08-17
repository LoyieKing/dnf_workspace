# QuickParty__ReturnAncientDungeonTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d598 QuickParty::ReturnAncientDungeonTicket::process  [0x0826d598-0x826d5ab] ===
 826d598:	55                   	push   %ebp
 826d599:	89 e5                	mov    %esp,%ebp
 826d59b:	83 ec 18             	sub    $0x18,%esp
 826d59e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d5a1:	89 04 24             	mov    %eax,(%esp)
 826d5a4:	e8 f1 e6 32 00       	call   859bc9a <_ZN6CParty31increase_ancient_dungeon_ticketEv>
 826d5a9:	c9                   	leave
 826d5aa:	c3                   	ret
 826d5ab:	90                   	nop

```

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

