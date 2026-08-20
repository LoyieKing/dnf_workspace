# Dismantle

`_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE`

`user_creature::CCreatureMgr::Dismantle(user_creature::CCreature*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833934c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833934c  _ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE
#           user_creature::CCreatureMgr::Dismantle(user_creature::CCreature*)
# range [0x0833934c, 0x083393a1]
0833934c +0x00:  push   %ebp
0833934d +0x01:  mov    %esp,%ebp
0833934f +0x03:  sub    $0x18,%esp
08339352 +0x06:  mov    0xc(%ebp),%eax
08339355 +0x09:  mov    %eax,(%esp)
08339358 +0x0c:  call   0833ef98 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1065>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1065
0833935d +0x11:  cmp    $0x1,%eax
08339360 +0x14:  setne  %al
08339363 +0x17:  test   %al,%al
08339365 +0x19:  je     0833936e <+0x22>
08339367 +0x1b:  mov    $0x0,%eax
0833936c +0x20:  jmp    083393a0 <+0x54>
0833936e +0x22:  mov    0x8(%ebp),%eax
08339371 +0x25:  mov    0x1c(%eax),%eax
08339374 +0x28:  mov    %eax,0x4(%esp)
08339378 +0x2c:  mov    0xc(%ebp),%eax
0833937b +0x2f:  mov    %eax,(%esp)
0833937e +0x32:  call   08337382 <_ZN13user_creature9CCreature9DismantleEP5CUser>  ; user_creature::CCreature::Dismantle(CUser*)
08339383 +0x37:  xor    $0x1,%eax
08339386 +0x3a:  test   %al,%al
08339388 +0x3c:  je     08339391 <+0x45>
0833938a +0x3e:  mov    $0x0,%eax
0833938f +0x43:  jmp    083393a0 <+0x54>
08339391 +0x45:  mov    0x8(%ebp),%eax
08339394 +0x48:  movl   $0x0,0x18(%eax)
0833939b +0x4f:  mov    $0x1,%eax
083393a0 +0x54:  leave
083393a1 +0x55:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::Dismantle @ 0x833934c

/* user_creature::CCreatureMgr::Dismantle(user_creature::CCreature*) */

undefined4 __thiscall user_creature::CCreatureMgr::Dismantle(CCreatureMgr *this,CCreature *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)param_1);
  if (iVar2 == 1) {
    cVar1 = CCreature::Dismantle(param_1,*(CUser **)(this + 0x1c));
    if (cVar1 == '\x01') {
      *(undefined4 *)(this + 0x18) = 0;
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
