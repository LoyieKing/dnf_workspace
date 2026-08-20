# EquipCreatureItem

`_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_`

`user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*, user_creature::CCreature*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x083393a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083393a2  _ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_
#           user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*, user_creature::CCreature*)
# range [0x083393a2, 0x083393fb]
083393a2 +0x00:  push   %ebp
083393a3 +0x01:  mov    %esp,%ebp
083393a5 +0x03:  sub    $0x18,%esp
083393a8 +0x06:  cmpl   $0x0,0xc(%ebp)
083393ac +0x0a:  je     083393ce <+0x2c>
083393ae +0x0c:  mov    0xc(%ebp),%eax
083393b1 +0x0f:  mov    %eax,0x4(%esp)
083393b5 +0x13:  mov    0x8(%ebp),%eax
083393b8 +0x16:  mov    %eax,(%esp)
083393bb +0x19:  call   0833934c <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE>  ; user_creature::CCreatureMgr::Dismantle(user_creature::CCreature*)
083393c0 +0x1e:  xor    $0x1,%eax
083393c3 +0x21:  test   %al,%al
083393c5 +0x23:  je     083393ce <+0x2c>
083393c7 +0x25:  mov    $0x0,%eax
083393cc +0x2a:  jmp    083393f9 <+0x57>
083393ce +0x2c:  cmpl   $0x0,0x10(%ebp)
083393d2 +0x30:  je     083393f4 <+0x52>
083393d4 +0x32:  mov    0x10(%ebp),%eax
083393d7 +0x35:  mov    %eax,0x4(%esp)
083393db +0x39:  mov    0x8(%ebp),%eax
083393de +0x3c:  mov    %eax,(%esp)
083393e1 +0x3f:  call   083392f6 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE>  ; user_creature::CCreatureMgr::Equip(user_creature::CCreature*)
083393e6 +0x44:  xor    $0x1,%eax
083393e9 +0x47:  test   %al,%al
083393eb +0x49:  je     083393f4 <+0x52>
083393ed +0x4b:  mov    $0x0,%eax
083393f2 +0x50:  jmp    083393f9 <+0x57>
083393f4 +0x52:  mov    $0x1,%eax
083393f9 +0x57:  leave
083393fa +0x58:  ret
083393fb +0x59:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::EquipCreatureItem @ 0x83393a2

/* user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*,
   user_creature::CCreature*) */

undefined4 __thiscall
user_creature::CCreatureMgr::EquipCreatureItem
          (CCreatureMgr *this,CCreature *param_1,CCreature *param_2)

{
  char cVar1;
  
  if ((param_1 != (CCreature *)0x0) && (cVar1 = Dismantle(this,param_1), cVar1 != '\x01')) {
    return 0;
  }
  if ((param_2 != (CCreature *)0x0) && (cVar1 = Equip(this,param_2), cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}
```
