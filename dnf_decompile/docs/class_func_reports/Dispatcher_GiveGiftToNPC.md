# Dispatcher_GiveGiftToNPC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _getMaxFavorLevelNPCCnt

```asm
// === 0821e474 Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt  [0x0821e474-0x821e485] ===
 821e474:	55                   	push   %ebp
 821e475:	89 e5                	mov    %esp,%ebp
 821e477:	83 ec 10             	sub    $0x10,%esp
 821e47a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 821e481:	8b 45 fc             	mov    -0x4(%ebp),%eax
 821e484:	c9                   	leave
 821e485:	c3                   	ret

```

```c
// Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt @ 0x821e474

/* Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser const*) const */

undefined4 Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser *param_1)

{
  return 0;
}

```

---

## _getResultFavor

```asm
// === 0821e486 Dispatcher_GiveGiftToNPC::_getResultFavor  [0x0821e486-0x821e4ab] ===
 821e486:	55                   	push   %ebp
 821e487:	89 e5                	mov    %esp,%ebp
 821e489:	83 ec 18             	sub    $0x18,%esp
 821e48c:	8b 55 20             	mov    0x20(%ebp),%edx
 821e48f:	8b 45 24             	mov    0x24(%ebp),%eax
 821e492:	66 89 55 ec          	mov    %dx,-0x14(%ebp)
 821e496:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 821e49a:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 821e49e:	66 03 45 e8          	add    -0x18(%ebp),%ax
 821e4a2:	66 89 45 fe          	mov    %ax,-0x2(%ebp)
 821e4a6:	0f b7 45 fe          	movzwl -0x2(%ebp),%eax
 821e4aa:	c9                   	leave
 821e4ab:	c3                   	ret

```

```c
// Dispatcher_GiveGiftToNPC::_getResultFavor @ 0x821e486

/* Dispatcher_GiveGiftToNPC::_getResultFavor(CUser const*, CNPCDynamicInfo const*,
   stNPCRelationship_t const&, CItem const*, unsigned int, short, unsigned short,
   ENUM_NPC_FAVOR_CHANGE_CONST&) const */

short Dispatcher_GiveGiftToNPC::_getResultFavor
                (CUser *param_1,CNPCDynamicInfo *param_2,stNPCRelationship_t *param_3,CItem *param_4
                ,uint param_5,short param_6,ushort param_7,ENUM_NPC_FAVOR_CHANGE_CONST *param_8)

{
  return param_7 + (short)param_8;
}

```

---

## dispatch_sig

```asm
// === 0821e4ac Dispatcher_GiveGiftToNPC::dispatch_sig  [0x0821e4ac-0x821e4b5] ===
 821e4ac:	55                   	push   %ebp
 821e4ad:	89 e5                	mov    %esp,%ebp
 821e4af:	b8 00 00 00 00       	mov    $0x0,%eax
 821e4b4:	5d                   	pop    %ebp
 821e4b5:	c3                   	ret

```

```c
// Dispatcher_GiveGiftToNPC::dispatch_sig @ 0x821e4ac

/* Dispatcher_GiveGiftToNPC::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GiveGiftToNPC::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}

```

