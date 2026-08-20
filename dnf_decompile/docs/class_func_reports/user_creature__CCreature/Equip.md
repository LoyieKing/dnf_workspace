# Equip

`_ZN13user_creature9CCreature5EquipEP5CUser`

`user_creature::CCreature::Equip(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337330  _ZN13user_creature9CCreature5EquipEP5CUser
#           user_creature::CCreature::Equip(CUser*)
# range [0x08337330, 0x08337381]
08337330 +0x00:  push   %ebp
08337331 +0x01:  mov    %esp,%ebp
08337333 +0x03:  sub    $0x18,%esp
08337336 +0x06:  mov    0xc(%ebp),%eax
08337339 +0x09:  mov    %eax,(%esp)
0833733c +0x0c:  call   0867ed68 <_ZN5CUser11is_fightingEv>  ; CUser::is_fighting()
08337341 +0x11:  test   %al,%al
08337343 +0x13:  je     08337361 <+0x31>
08337345 +0x15:  movl   $0x1,0x8(%esp)
0833734d +0x1d:  mov    0xc(%ebp),%eax
08337350 +0x20:  mov    %eax,0x4(%esp)
08337354 +0x24:  mov    0x8(%ebp),%eax
08337357 +0x27:  mov    %eax,(%esp)
0833735a +0x2a:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
0833735f +0x2f:  jmp    0833737b <+0x4b>
08337361 +0x31:  movl   $0x3,0x8(%esp)
08337369 +0x39:  mov    0xc(%ebp),%eax
0833736c +0x3c:  mov    %eax,0x4(%esp)
08337370 +0x40:  mov    0x8(%ebp),%eax
08337373 +0x43:  mov    %eax,(%esp)
08337376 +0x46:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
0833737b +0x4b:  mov    $0x1,%eax
08337380 +0x50:  leave
08337381 +0x51:  ret
```

## 反编译 C

```c
// user_creature::CCreature::Equip @ 0x8337330

/* user_creature::CCreature::Equip(CUser*) */

undefined4 __thiscall user_creature::CCreature::Equip(CCreature *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = CUser::is_fighting(param_1);
  if (cVar1 == '\0') {
    SetState(this,param_1,3);
  }
  else {
    SetState(this,param_1,1);
  }
  return 1;
}
```
