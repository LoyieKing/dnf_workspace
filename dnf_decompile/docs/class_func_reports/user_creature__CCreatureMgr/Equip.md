# Equip

`_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE`

`user_creature::CCreatureMgr::Equip(user_creature::CCreature*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x083392f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083392f6  _ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE
#           user_creature::CCreatureMgr::Equip(user_creature::CCreature*)
# range [0x083392f6, 0x0833934b]
083392f6 +0x00:  push   %ebp
083392f7 +0x01:  mov    %esp,%ebp
083392f9 +0x03:  sub    $0x18,%esp
083392fc +0x06:  mov    0xc(%ebp),%eax
083392ff +0x09:  mov    %eax,(%esp)
08339302 +0x0c:  call   0833ef98 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1065>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1065
08339307 +0x11:  cmp    $0x1,%eax
0833930a +0x14:  setne  %al
0833930d +0x17:  test   %al,%al
0833930f +0x19:  je     08339318 <+0x22>
08339311 +0x1b:  mov    $0x0,%eax
08339316 +0x20:  jmp    08339349 <+0x53>
08339318 +0x22:  mov    0x8(%ebp),%eax
0833931b +0x25:  mov    0x1c(%eax),%eax
0833931e +0x28:  mov    %eax,0x4(%esp)
08339322 +0x2c:  mov    0xc(%ebp),%eax
08339325 +0x2f:  mov    %eax,(%esp)
08339328 +0x32:  call   08337330 <_ZN13user_creature9CCreature5EquipEP5CUser>  ; user_creature::CCreature::Equip(CUser*)
0833932d +0x37:  xor    $0x1,%eax
08339330 +0x3a:  test   %al,%al
08339332 +0x3c:  je     0833933b <+0x45>
08339334 +0x3e:  mov    $0x0,%eax
08339339 +0x43:  jmp    08339349 <+0x53>
0833933b +0x45:  mov    0x8(%ebp),%eax
0833933e +0x48:  mov    0xc(%ebp),%edx
08339341 +0x4b:  mov    %edx,0x18(%eax)
08339344 +0x4e:  mov    $0x1,%eax
08339349 +0x53:  leave
0833934a +0x54:  ret
0833934b +0x55:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::Equip @ 0x83392f6

/* user_creature::CCreatureMgr::Equip(user_creature::CCreature*) */

undefined4 __thiscall user_creature::CCreatureMgr::Equip(CCreatureMgr *this,CCreature *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)param_1);
  if (iVar2 == 1) {
    cVar1 = CCreature::Equip(param_1,*(CUser **)(this + 0x1c));
    if (cVar1 == '\x01') {
      *(CCreature **)(this + 0x18) = param_1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
