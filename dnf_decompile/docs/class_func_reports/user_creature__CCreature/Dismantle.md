# Dismantle

`_ZN13user_creature9CCreature9DismantleEP5CUser`

`user_creature::CCreature::Dismantle(CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337382` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337382  _ZN13user_creature9CCreature9DismantleEP5CUser
#           user_creature::CCreature::Dismantle(CUser*)
# range [0x08337382, 0x083373a9]
08337382 +0x00:  push   %ebp
08337383 +0x01:  mov    %esp,%ebp
08337385 +0x03:  sub    $0x18,%esp
08337388 +0x06:  movl   $0x2,0x8(%esp)
08337390 +0x0e:  mov    0xc(%ebp),%eax
08337393 +0x11:  mov    %eax,0x4(%esp)
08337397 +0x15:  mov    0x8(%ebp),%eax
0833739a +0x18:  mov    %eax,(%esp)
0833739d +0x1b:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
083373a2 +0x20:  mov    $0x1,%eax
083373a7 +0x25:  leave
083373a8 +0x26:  ret
083373a9 +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreature::Dismantle @ 0x8337382

/* user_creature::CCreature::Dismantle(CUser*) */

undefined4 __thiscall user_creature::CCreature::Dismantle(CCreature *this,CUser *param_1)

{
  SetState(this,param_1,2);
  return 1;
}
```
