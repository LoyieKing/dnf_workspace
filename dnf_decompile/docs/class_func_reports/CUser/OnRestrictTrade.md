# OnRestrictTrade

`_ZN5CUser15OnRestrictTradeEv`

`CUser::OnRestrictTrade()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681312` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681312  _ZN5CUser15OnRestrictTradeEv
#           CUser::OnRestrictTrade()
# range [0x08681312, 0x08681367]
08681312 +0x00:  push   %ebp
08681313 +0x01:  mov    %esp,%ebp
08681315 +0x03:  push   %ebx
08681316 +0x04:  sub    $0x14,%esp
08681319 +0x07:  mov    0x8(%ebp),%eax
0868131c +0x0a:  mov    %eax,(%esp)
0868131f +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08681324 +0x12:  test   %eax,%eax
08681326 +0x14:  setne  %al
08681329 +0x17:  test   %al,%al
0868132b +0x19:  je     08681362 <+0x50>
0868132d +0x1b:  mov    0x8(%ebp),%eax
08681330 +0x1e:  mov    %eax,(%esp)
08681333 +0x21:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08681338 +0x26:  mov    %eax,(%esp)
0868133b +0x29:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08681340 +0x2e:  mov    %eax,%ebx
08681342 +0x30:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
08681347 +0x35:  mov    %ebx,0xc(%esp)
0868134b +0x39:  mov    0x8(%ebp),%edx
0868134e +0x3c:  mov    %edx,0x8(%esp)
08681352 +0x40:  movl   $0x1d,0x4(%esp)
0868135a +0x48:  mov    %eax,(%esp)
0868135d +0x4b:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
08681362 +0x50:  add    $0x14,%esp
08681365 +0x53:  pop    %ebx
08681366 +0x54:  pop    %ebp
08681367 +0x55:  ret
```

## 反编译 C

```c
// CUser::OnRestrictTrade @ 0x8681312

/* CUser::OnRestrictTrade() */

void __thiscall CUser::OnRestrictTrade(CUser *this)

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
    CCirculationStatistic::AddCirculationStatistic(pCVar3,0x1d,this,uVar2);
  }
  return;
}
```
