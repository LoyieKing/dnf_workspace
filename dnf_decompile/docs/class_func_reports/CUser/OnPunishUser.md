# OnPunishUser

`_ZN5CUser12OnPunishUserEv`

`CUser::OnPunishUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681368` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681368  _ZN5CUser12OnPunishUserEv
#           CUser::OnPunishUser()
# range [0x08681368, 0x086813bd]
08681368 +0x00:  push   %ebp
08681369 +0x01:  mov    %esp,%ebp
0868136b +0x03:  push   %ebx
0868136c +0x04:  sub    $0x14,%esp
0868136f +0x07:  mov    0x8(%ebp),%eax
08681372 +0x0a:  mov    %eax,(%esp)
08681375 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868137a +0x12:  test   %eax,%eax
0868137c +0x14:  setne  %al
0868137f +0x17:  test   %al,%al
08681381 +0x19:  je     086813b8 <+0x50>
08681383 +0x1b:  mov    0x8(%ebp),%eax
08681386 +0x1e:  mov    %eax,(%esp)
08681389 +0x21:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868138e +0x26:  mov    %eax,(%esp)
08681391 +0x29:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08681396 +0x2e:  mov    %eax,%ebx
08681398 +0x30:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
0868139d +0x35:  mov    %ebx,0xc(%esp)
086813a1 +0x39:  mov    0x8(%ebp),%edx
086813a4 +0x3c:  mov    %edx,0x8(%esp)
086813a8 +0x40:  movl   $0x1c,0x4(%esp)
086813b0 +0x48:  mov    %eax,(%esp)
086813b3 +0x4b:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
086813b8 +0x50:  add    $0x14,%esp
086813bb +0x53:  pop    %ebx
086813bc +0x54:  pop    %ebp
086813bd +0x55:  ret
```

## 反编译 C

```c
// CUser::OnPunishUser @ 0x8681368

/* CUser::OnPunishUser() */

void __thiscall CUser::OnPunishUser(CUser *this)

{
  int iVar1;
  CInventory *this_00;
  undefined4 uVar2;
  CCirculationStatistic *pCVar3;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar2 = CInventory::get_money(this_00);
    pCVar3 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
    CCirculationStatistic::AddCirculationStatistic(pCVar3,0x1c,this,uVar2);
  }
  return;
}
```
