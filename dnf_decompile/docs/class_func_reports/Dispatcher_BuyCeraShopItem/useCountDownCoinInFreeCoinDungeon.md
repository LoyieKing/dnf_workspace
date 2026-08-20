# useCountDownCoinInFreeCoinDungeon

`_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM`

`Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon(CUser*, MSG_BUY_CERASHOP_ITEM const&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyCeraShopItem` | `0x081fe4b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fe4b8  _ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM
#           Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon(CUser*, MSG_BUY_CERASHOP_ITEM const&)
# range [0x081fe4b8, 0x081fe577]
081fe4b8 +0x00:  push   %ebp
081fe4b9 +0x01:  mov    %esp,%ebp
081fe4bb +0x03:  push   %ebx
081fe4bc +0x04:  sub    $0x24,%esp
081fe4bf +0x07:  cmpl   $0x0,0xc(%ebp)
081fe4c3 +0x0b:  jne    081fe4cf <+0x17>
081fe4c5 +0x0d:  mov    $0x0,%eax
081fe4ca +0x12:  jmp    081fe571 <+0xb9>
081fe4cf +0x17:  mov    0x10(%ebp),%eax
081fe4d2 +0x1a:  movzbl 0x36(%eax),%eax
081fe4d6 +0x1e:  cmp    $0x1,%al
081fe4d8 +0x20:  je     081fe4e4 <+0x2c>
081fe4da +0x22:  mov    $0x0,%eax
081fe4df +0x27:  jmp    081fe571 <+0xb9>
081fe4e4 +0x2c:  mov    0x10(%ebp),%eax
081fe4e7 +0x2f:  mov    0x39(%eax),%eax
081fe4ea +0x32:  mov    %eax,%ebx
081fe4ec +0x34:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081fe4f1 +0x39:  mov    %ebx,0x4(%esp)
081fe4f5 +0x3d:  mov    %eax,(%esp)
081fe4f8 +0x40:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
081fe4fd +0x45:  mov    %eax,-0x14(%ebp)
081fe500 +0x48:  cmpl   $0x0,-0x14(%ebp)
081fe504 +0x4c:  jne    081fe50d <+0x55>
081fe506 +0x4e:  mov    $0x0,%eax
081fe50b +0x53:  jmp    081fe571 <+0xb9>
081fe50d +0x55:  mov    -0x14(%ebp),%eax
081fe510 +0x58:  mov    %eax,(%esp)
081fe513 +0x5b:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
081fe518 +0x60:  cmp    $0x1,%eax
081fe51b +0x63:  setne  %al
081fe51e +0x66:  test   %al,%al
081fe520 +0x68:  je     081fe529 <+0x71>
081fe522 +0x6a:  mov    $0x0,%eax
081fe527 +0x6f:  jmp    081fe571 <+0xb9>
081fe529 +0x71:  mov    0xc(%ebp),%eax
081fe52c +0x74:  mov    %eax,(%esp)
081fe52f +0x77:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081fe534 +0x7c:  mov    %eax,-0x10(%ebp)
081fe537 +0x7f:  cmpl   $0x0,-0x10(%ebp)
081fe53b +0x83:  je     081fe56c <+0xb4>
081fe53d +0x85:  mov    -0x10(%ebp),%eax
081fe540 +0x88:  mov    0xcac(%eax),%eax
081fe546 +0x8e:  mov    %eax,-0xc(%ebp)
081fe549 +0x91:  cmpl   $0x0,-0xc(%ebp)
081fe54d +0x95:  je     081fe56c <+0xb4>
081fe54f +0x97:  mov    -0xc(%ebp),%eax
081fe552 +0x9a:  mov    %eax,0x4(%esp)
081fe556 +0x9e:  mov    -0x10(%ebp),%eax
081fe559 +0xa1:  mov    %eax,(%esp)
081fe55c +0xa4:  call   085be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>  ; CParty::checkFreeRevivalCondition(CDungeon const*)
081fe561 +0xa9:  test   %al,%al
081fe563 +0xab:  je     081fe56c <+0xb4>
081fe565 +0xad:  mov    $0x1,%eax
081fe56a +0xb2:  jmp    081fe571 <+0xb9>
081fe56c +0xb4:  mov    $0x0,%eax
081fe571 +0xb9:  add    $0x24,%esp
081fe574 +0xbc:  pop    %ebx
081fe575 +0xbd:  pop    %ebp
081fe576 +0xbe:  ret
081fe577 +0xbf:  nop
```

## 反编译 C

```c
// Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon @ 0x81fe4b8

/* Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon(CUser*, MSG_BUY_CERASHOP_ITEM
   const&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon
          (Dispatcher_BuyCeraShopItem *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  char cVar1;
  int iVar2;
  CCeraShopGoods *this_00;
  CParty *this_01;
  
  if ((param_1 != (CUser *)0x0) && (param_2[0x36] == (MSG_BUY_CERASHOP_ITEM)0x1)) {
    iVar2 = G_CDataManager();
    this_00 = (CCeraShopGoods *)CDataManager::FindGoods(iVar2);
    if (((this_00 != (CCeraShopGoods *)0x0) &&
        (((iVar2 = CCeraShopGoods::GetItemIdx(this_00), iVar2 == 1 &&
          (this_01 = (CParty *)CUser::GetParty(param_1), this_01 != (CParty *)0x0)) &&
         (*(CDungeon **)(this_01 + 0xcac) != (CDungeon *)0x0)))) &&
       (cVar1 = CParty::checkFreeRevivalCondition(this_01,*(CDungeon **)(this_01 + 0xcac)),
       cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}
```
