# IsDieCreature

`_ZN13user_creature9CCreature13IsDieCreatureEv`

`user_creature::CCreature::IsDieCreature()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338478` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338478  _ZN13user_creature9CCreature13IsDieCreatureEv
#           user_creature::CCreature::IsDieCreature()
# range [0x08338478, 0x083384b7]
08338478 +0x00:  push   %ebp
08338479 +0x01:  mov    %esp,%ebp
0833847b +0x03:  sub    $0x28,%esp
0833847e +0x06:  mov    0x8(%ebp),%eax
08338481 +0x09:  movzbl 0x4c(%eax),%eax
08338485 +0x0d:  movzbl %al,%edx
08338488 +0x10:  mov    0x8(%ebp),%eax
0833848b +0x13:  mov    0x3c(%eax),%eax
0833848e +0x16:  mov    0x8(%ebp),%ecx
08338491 +0x19:  add    $0x34,%ecx
08338494 +0x1c:  mov    %edx,0x8(%esp)
08338498 +0x20:  mov    %eax,0x4(%esp)
0833849c +0x24:  mov    %ecx,(%esp)
0833849f +0x27:  call   08336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>  ; user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
083384a4 +0x2c:  fstps  -0xc(%ebp)
083384a7 +0x2f:  flds   -0xc(%ebp)
083384aa +0x32:  fld1
083384ac +0x34:  fucompp
083384ae +0x36:  fnstsw %ax
083384b0 +0x38:  test   $0x45,%ah
083384b3 +0x3b:  sete   %al
083384b6 +0x3e:  leave
083384b7 +0x3f:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsDieCreature @ 0x8338478

/* user_creature::CCreature::IsDieCreature() */

undefined4 __thiscall user_creature::CCreature::IsDieCreature(CCreature *this)

{
  float fVar1;
  undefined2 extraout_var;
  ushort uVar2;
  longdouble lVar3;
  
  lVar3 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  fVar1 = (float)lVar3;
  uVar2 = (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 1.0) << 0xe;
  return CONCAT31((int3)(CONCAT22(extraout_var,uVar2) >> 8),(char)(uVar2 >> 8) == '\0');
}
```
