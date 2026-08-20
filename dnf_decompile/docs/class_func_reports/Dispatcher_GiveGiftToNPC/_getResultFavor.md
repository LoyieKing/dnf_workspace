# _getResultFavor

`_ZNK24Dispatcher_GiveGiftToNPC15_getResultFavorEPK5CUserPK15CNPCDynamicInfoRK19stNPCRelationship_tPK5CItemjstR27ENUM_NPC_FAVOR_CHANGE_CONST`

`Dispatcher_GiveGiftToNPC::_getResultFavor(CUser const*, CNPCDynamicInfo const*, stNPCRelationship_t const&, CItem const*, unsigned int, short, unsigned short, ENUM_NPC_FAVOR_CHANGE_CONST&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_GiveGiftToNPC` | `0x0821e486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e486  _ZNK24Dispatcher_GiveGiftToNPC15_getResultFavorEPK5CUserPK15CNPCDynamicInfoRK19stNPCRelationship_tPK5CItemjstR27ENUM_NPC_FAVOR_CHANGE_CONST
#           Dispatcher_GiveGiftToNPC::_getResultFavor(CUser const*, CNPCDynamicInfo const*, stNPCRelationship_t const&, CItem const*, unsigned int, short, unsigned short, ENUM_NPC_FAVOR_CHANGE_CONST&) const
# range [0x0821e486, 0x0821e4ab]
0821e486 +0x00:  push   %ebp
0821e487 +0x01:  mov    %esp,%ebp
0821e489 +0x03:  sub    $0x18,%esp
0821e48c +0x06:  mov    0x20(%ebp),%edx
0821e48f +0x09:  mov    0x24(%ebp),%eax
0821e492 +0x0c:  mov    %dx,-0x14(%ebp)
0821e496 +0x10:  mov    %ax,-0x18(%ebp)
0821e49a +0x14:  movzwl -0x14(%ebp),%eax
0821e49e +0x18:  add    -0x18(%ebp),%ax
0821e4a2 +0x1c:  mov    %ax,-0x2(%ebp)
0821e4a6 +0x20:  movzwl -0x2(%ebp),%eax
0821e4aa +0x24:  leave
0821e4ab +0x25:  ret
```

## 反编译 C

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
