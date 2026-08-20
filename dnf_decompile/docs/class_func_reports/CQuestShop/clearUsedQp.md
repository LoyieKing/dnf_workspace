# clearUsedQp

`_ZN10CQuestShop11clearUsedQpEP5CUser`

`CQuestShop::clearUsedQp(CUser*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef426` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef426  _ZN10CQuestShop11clearUsedQpEP5CUser
#           CQuestShop::clearUsedQp(CUser*)
# range [0x085ef426, 0x085ef54b]
085ef426 +0x000:  push   %ebp
085ef427 +0x001:  mov    %esp,%ebp
085ef429 +0x003:  sub    $0x38,%esp
085ef42c +0x006:  movl   $0x0,-0x18(%ebp)
085ef433 +0x00d:  mov    0x8(%ebp),%eax
085ef436 +0x010:  mov    %eax,(%esp)
085ef439 +0x013:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085ef43e +0x018:  mov    %eax,0x4(%esp)
085ef442 +0x01c:  mov    0x8(%ebp),%eax
085ef445 +0x01f:  mov    %eax,(%esp)
085ef448 +0x022:  call   085ef1ba <_ZN10CQuestShop11getInitCostEi>  ; CQuestShop::getInitCost(int)
085ef44d +0x027:  mov    %eax,-0x14(%ebp)
085ef450 +0x02a:  mov    0xc(%ebp),%eax
085ef453 +0x02d:  mov    %eax,(%esp)
085ef456 +0x030:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ef45b +0x035:  mov    %eax,(%esp)
085ef45e +0x038:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085ef463 +0x03d:  cmp    -0x14(%ebp),%eax
085ef466 +0x040:  setl   %al
085ef469 +0x043:  test   %al,%al
085ef46b +0x045:  je     085ef477 <+0x51>
085ef46d +0x047:  mov    $0xa,%eax
085ef472 +0x04c:  jmp    085ef549 <+0x123>
085ef477 +0x051:  mov    0xc(%ebp),%eax
085ef47a +0x054:  mov    %eax,(%esp)
085ef47d +0x057:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085ef482 +0x05c:  movl   $0x1,0xc(%esp)
085ef48a +0x064:  movl   $0x2b,0x8(%esp)
085ef492 +0x06c:  mov    -0x14(%ebp),%edx
085ef495 +0x06f:  mov    %edx,0x4(%esp)
085ef499 +0x073:  mov    %eax,(%esp)
085ef49c +0x076:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085ef4a1 +0x07b:  xor    $0x1,%eax
085ef4a4 +0x07e:  test   %al,%al
085ef4a6 +0x080:  je     085ef4b2 <+0x8c>
085ef4a8 +0x082:  mov    $0x1,%eax
085ef4ad +0x087:  jmp    085ef549 <+0x123>
085ef4b2 +0x08c:  mov    0x8(%ebp),%eax
085ef4b5 +0x08f:  mov    %eax,(%esp)
085ef4b8 +0x092:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef4bd +0x097:  mov    %eax,-0x10(%ebp)
085ef4c0 +0x09a:  mov    0x8(%ebp),%eax
085ef4c3 +0x09d:  mov    %eax,(%esp)
085ef4c6 +0x0a0:  call   085eff16 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x82>  ; global constructors keyed to CQuestShop::CQuestShop()+0x82
085ef4cb +0x0a5:  mov    0xc(%ebp),%eax
085ef4ce +0x0a8:  mov    %eax,(%esp)
085ef4d1 +0x0ab:  call   0868adfc <_ZN5CUser17setInitQuestPointEv>  ; CUser::setInitQuestPoint()
085ef4d6 +0x0b0:  mov    0x8(%ebp),%eax
085ef4d9 +0x0b3:  mov    %eax,(%esp)
085ef4dc +0x0b6:  call   085eff38 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xa4>  ; global constructors keyed to CQuestShop::CQuestShop()+0xa4
085ef4e1 +0x0bb:  mov    %eax,-0x18(%ebp)
085ef4e4 +0x0be:  mov    -0x18(%ebp),%eax
085ef4e7 +0x0c1:  mov    %eax,0x4(%esp)
085ef4eb +0x0c5:  mov    0x8(%ebp),%eax
085ef4ee +0x0c8:  mov    %eax,(%esp)
085ef4f1 +0x0cb:  call   085efee0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x4c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x4c
085ef4f6 +0x0d0:  mov    0x8(%ebp),%eax
085ef4f9 +0x0d3:  mov    %eax,(%esp)
085ef4fc +0x0d6:  call   085eed08 <_ZN10CQuestShop21clearBuyingStatuslistEv>  ; CQuestShop::clearBuyingStatuslist()
085ef501 +0x0db:  mov    0x8(%ebp),%eax
085ef504 +0x0de:  mov    %eax,(%esp)
085ef507 +0x0e1:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef50c +0x0e6:  mov    %eax,-0xc(%ebp)
085ef50f +0x0e9:  mov    0x8(%ebp),%eax
085ef512 +0x0ec:  mov    %eax,(%esp)
085ef515 +0x0ef:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085ef51a +0x0f4:  mov    0xc(%ebp),%edx
085ef51d +0x0f7:  lea    0x79700(%edx),%ecx
085ef523 +0x0fd:  mov    -0x14(%ebp),%edx
085ef526 +0x100:  mov    %edx,0x10(%esp)
085ef52a +0x104:  mov    %eax,0xc(%esp)
085ef52e +0x108:  mov    -0xc(%ebp),%eax
085ef531 +0x10b:  mov    %eax,0x8(%esp)
085ef535 +0x10f:  mov    -0x10(%ebp),%eax
085ef538 +0x112:  mov    %eax,0x4(%esp)
085ef53c +0x116:  mov    %ecx,(%esp)
085ef53f +0x119:  call   086888be <_ZN15cUserHistoryLog11ClearUsedQPEiiii>  ; cUserHistoryLog::ClearUsedQP(int, int, int, int)
085ef544 +0x11e:  mov    $0x0,%eax
085ef549 +0x123:  leave
085ef54a +0x124:  ret
085ef54b +0x125:  nop
```

## 反编译 C

```c
// CQuestShop::clearUsedQp @ 0x85ef426

/* CQuestShop::clearUsedQp(CUser*) */

undefined4 __thiscall CQuestShop::clearUsedQp(CQuestShop *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = getInitCount(this);
  iVar2 = getInitCost(this,iVar2);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::get_money(pCVar3);
  if (iVar4 < iVar2) {
    uVar5 = 10;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::use_money(pCVar3,iVar2,0x2b,1);
    if (cVar1 == '\x01') {
      iVar4 = getQp(this);
      incInitCount(this);
      CUser::setInitQuestPoint(param_1);
      iVar6 = getInitQp(this);
      setQp(this,iVar6);
      clearBuyingStatuslist(this);
      iVar6 = getQp(this);
      iVar7 = getInitCount(this);
      cUserHistoryLog::ClearUsedQP((cUserHistoryLog *)(param_1 + 0x79700),iVar4,iVar6,iVar7,iVar2);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```
