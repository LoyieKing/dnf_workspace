# checkAndCreateDefaultRidable

`_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv`

`advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131426` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131426  _ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv
#           advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable()
# range [0x08131426, 0x08131599]
08131426 +0x000:  push   %ebp
08131427 +0x001:  mov    %esp,%ebp
08131429 +0x003:  sub    $0x28,%esp
0813142c +0x006:  movb   $0x0,-0x11(%ebp)
08131430 +0x00a:  movl   $0x0,-0x10(%ebp)
08131437 +0x011:  movl   $0x0,-0xc(%ebp)
0813143e +0x018:  jmp    081314e6 <+0xc0>
08131443 +0x01d:  mov    -0xc(%ebp),%eax
08131446 +0x020:  mov    0x8(%ebp),%edx
08131449 +0x023:  imul   $0xd0,%eax,%eax
0813144f +0x029:  lea    (%edx,%eax,1),%eax
08131452 +0x02c:  add    $0x4,%eax
08131455 +0x02f:  mov    (%eax),%eax
08131457 +0x031:  cmp    $0x1,%eax
0813145a +0x034:  jne    081314e2 <+0xbc>
08131460 +0x03a:  mov    -0xc(%ebp),%eax
08131463 +0x03d:  imul   $0xd0,%eax,%eax
08131469 +0x043:  add    $0x30,%eax
0813146c +0x046:  add    0x8(%ebp),%eax
0813146f +0x049:  add    $0x10,%eax
08131472 +0x04c:  mov    %eax,(%esp)
08131475 +0x04f:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
0813147a +0x054:  test   %eax,%eax
0813147c +0x056:  jne    081314c1 <+0x9b>
0813147e +0x058:  mov    -0xc(%ebp),%eax
08131481 +0x05b:  imul   $0xd0,%eax,%eax
08131487 +0x061:  add    $0x50,%eax
0813148a +0x064:  add    0x8(%ebp),%eax
0813148d +0x067:  add    $0x8,%eax
08131490 +0x06a:  mov    %eax,(%esp)
08131493 +0x06d:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
08131498 +0x072:  test   %eax,%eax
0813149a +0x074:  jne    081314c1 <+0x9b>
0813149c +0x076:  mov    -0xc(%ebp),%eax
0813149f +0x079:  imul   $0xd0,%eax,%eax
081314a5 +0x07f:  add    $0x60,%eax
081314a8 +0x082:  add    0x8(%ebp),%eax
081314ab +0x085:  add    $0x10,%eax
081314ae +0x088:  mov    %eax,(%esp)
081314b1 +0x08b:  call   08135ea2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1aa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1aa9
081314b6 +0x090:  test   %eax,%eax
081314b8 +0x092:  jne    081314c1 <+0x9b>
081314ba +0x094:  mov    $0x1,%eax
081314bf +0x099:  jmp    081314c6 <+0xa0>
081314c1 +0x09b:  mov    $0x0,%eax
081314c6 +0x0a0:  test   %al,%al
081314c8 +0x0a2:  je     081314de <+0xb8>
081314ca +0x0a4:  mov    -0xc(%ebp),%eax
081314cd +0x0a7:  imul   $0xd0,%eax,%eax
081314d3 +0x0ad:  add    0x8(%ebp),%eax
081314d6 +0x0b0:  add    $0x4,%eax
081314d9 +0x0b3:  mov    %eax,-0x10(%ebp)
081314dc +0x0b6:  jmp    081314f5 <+0xcf>
081314de +0x0b8:  movb   $0x1,-0x11(%ebp)
081314e2 +0x0bc:  addl   $0x1,-0xc(%ebp)
081314e6 +0x0c0:  cmpl   $0x0,-0xc(%ebp)
081314ea +0x0c4:  setle  %al
081314ed +0x0c7:  test   %al,%al
081314ef +0x0c9:  jne    08131443 <+0x1d>
081314f5 +0x0cf:  cmpb   $0x0,-0x11(%ebp)
081314f9 +0x0d3:  jne    08131597 <+0x171>
081314ff +0x0d9:  cmpl   $0x0,-0x10(%ebp)
08131503 +0x0dd:  jne    0813150e <+0xe8>
08131505 +0x0df:  mov    0x8(%ebp),%eax
08131508 +0x0e2:  add    $0x4,%eax
0813150b +0x0e5:  mov    %eax,-0x10(%ebp)
0813150e +0x0e8:  mov    -0x10(%ebp),%eax
08131511 +0x0eb:  movb   $0x1,0xcc(%eax)
08131518 +0x0f2:  mov    -0x10(%ebp),%eax
0813151b +0x0f5:  movl   $0x1,(%eax)
08131521 +0x0fb:  mov    -0x10(%ebp),%eax
08131524 +0x0fe:  mov    (%eax),%eax
08131526 +0x100:  mov    %eax,0x4(%esp)
0813152a +0x104:  mov    0x8(%ebp),%eax
0813152d +0x107:  mov    %eax,(%esp)
08131530 +0x10a:  call   08131254 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE>  ; advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)
08131535 +0x10f:  mov    0x8(%ebp),%eax
08131538 +0x112:  mov    %eax,(%esp)
0813153b +0x115:  call   08132f8e <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv>  ; advancealtar::CharacAdvanceAltarManager::setDefaultSlot()
08131540 +0x11a:  mov    0x8(%ebp),%eax
08131543 +0x11d:  mov    %eax,(%esp)
08131546 +0x120:  call   08132f72 <_ZN12advancealtar25CharacAdvanceAltarManager15setDefaultStageEv>  ; advancealtar::CharacAdvanceAltarManager::setDefaultStage()
0813154b +0x125:  movl   $0x0,0x4(%esp)
08131553 +0x12d:  mov    0x8(%ebp),%eax
08131556 +0x130:  mov    %eax,(%esp)
08131559 +0x133:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
0813155e +0x138:  movl   $0x1,0x4(%esp)
08131566 +0x140:  mov    0x8(%ebp),%eax
08131569 +0x143:  mov    %eax,(%esp)
0813156c +0x146:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
08131571 +0x14b:  movl   $0x2,0x4(%esp)
08131579 +0x153:  mov    0x8(%ebp),%eax
0813157c +0x156:  mov    %eax,(%esp)
0813157f +0x159:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
08131584 +0x15e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08131589 +0x163:  mov    0x6364(%eax),%edx
0813158f +0x169:  mov    -0x10(%ebp),%eax
08131592 +0x16c:  mov    %edx,0x4(%eax)
08131595 +0x16f:  jmp    08131598 <+0x172>
08131597 +0x171:  nop
08131598 +0x172:  leave
08131599 +0x173:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable @ 0x8131426

/* advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable
          (CharacAdvanceAltarManager *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  CharacAdvanceAltarManager *local_14;
  int local_10;
  
  bVar2 = false;
  local_14 = (CharacAdvanceAltarManager *)0x0;
  local_10 = 0;
  do {
    if (0 < local_10) {
LAB_081314f5:
      if (!bVar2) {
        if (local_14 == (CharacAdvanceAltarManager *)0x0) {
          local_14 = this + 4;
        }
        local_14[0xcc] = (CharacAdvanceAltarManager)0x1;
        *(undefined4 *)local_14 = 1;
        setCurrentAdvanceAltarData(this,*(undefined4 *)local_14);
        setDefaultSlot(this);
        setDefaultStage(this);
        setDefaultBuyItem(this,0);
        setDefaultBuyItem(this,1);
        setDefaultBuyItem(this,2);
        iVar3 = G_CDataManager();
        *(undefined4 *)(local_14 + 4) = *(undefined4 *)(iVar3 + 0x6364);
      }
      return;
    }
    if (*(int *)(this + local_10 * 0xd0 + 4) == 1) {
      iVar3 = std::
              map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                      *)(this + local_10 * 0xd0 + 0x40));
      if (iVar3 == 0) {
        iVar3 = std::
                map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                        *)(this + local_10 * 0xd0 + 0x58));
        if (iVar3 != 0) goto LAB_081314c1;
        iVar3 = std::
                map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                        *)(this + local_10 * 0xd0 + 0x70));
        if (iVar3 != 0) goto LAB_081314c1;
        bVar1 = true;
      }
      else {
LAB_081314c1:
        bVar1 = false;
      }
      if (bVar1) {
        local_14 = this + local_10 * 0xd0 + 4;
        goto LAB_081314f5;
      }
      bVar2 = true;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
