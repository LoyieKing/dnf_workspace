# CheckDiedCreature

`_ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser`

`user_creature::CCreature::CheckDiedCreature(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083384b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083384b8  _ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser
#           user_creature::CCreature::CheckDiedCreature(CUser*)
# range [0x083384b8, 0x083384ed]
083384b8 +0x00:  push   %ebp
083384b9 +0x01:  mov    %esp,%ebp
083384bb +0x03:  sub    $0x18,%esp
083384be +0x06:  mov    0x8(%ebp),%eax
083384c1 +0x09:  mov    %eax,(%esp)
083384c4 +0x0c:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
083384c9 +0x11:  test   %al,%al
083384cb +0x13:  je     083384e6 <+0x2e>
083384cd +0x15:  mov    0xc(%ebp),%eax
083384d0 +0x18:  mov    %eax,0x4(%esp)
083384d4 +0x1c:  mov    0x8(%ebp),%eax
083384d7 +0x1f:  mov    %eax,(%esp)
083384da +0x22:  call   08338536 <_ZN13user_creature9CCreature3DieEP5CUser>  ; user_creature::CCreature::Die(CUser*)
083384df +0x27:  mov    $0x1,%eax
083384e4 +0x2c:  jmp    083384eb <+0x33>
083384e6 +0x2e:  mov    $0x0,%eax
083384eb +0x33:  leave
083384ec +0x34:  ret
083384ed +0x35:  nop
```

## 反编译 C

```c
// user_creature::CCreature::CheckDiedCreature @ 0x83384b8

/* user_creature::CCreature::CheckDiedCreature(CUser*) */

bool __thiscall user_creature::CCreature::CheckDiedCreature(CCreature *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = IsDieCreature(this);
  if (cVar1 != '\0') {
    Die(this,param_1);
  }
  return cVar1 != '\0';
}
```
