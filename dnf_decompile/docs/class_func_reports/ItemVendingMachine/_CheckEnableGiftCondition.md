# _CheckEnableGiftCondition

`_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc`

`ItemVendingMachine::_CheckEnableGiftCondition(CCeraShopGoods const*, CUser*, char)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08176722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08176722  _ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc
#           ItemVendingMachine::_CheckEnableGiftCondition(CCeraShopGoods const*, CUser*, char)
# range [0x08176722, 0x08176793]
08176722 +0x00:  push   %ebp
08176723 +0x01:  mov    %esp,%ebp
08176725 +0x03:  sub    $0x28,%esp
08176728 +0x06:  mov    0x14(%ebp),%eax
0817672b +0x09:  mov    %al,-0xc(%ebp)
0817672e +0x0c:  mov    0x10(%ebp),%eax
08176731 +0x0f:  mov    %eax,(%esp)
08176734 +0x12:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
08176739 +0x17:  test   %al,%al
0817673b +0x19:  je     08176744 <+0x22>
0817673d +0x1b:  mov    $0x1,%eax
08176742 +0x20:  jmp    08176791 <+0x6f>
08176744 +0x22:  mov    0xc(%ebp),%eax
08176747 +0x25:  mov    %eax,(%esp)
0817674a +0x28:  call   0817a060 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xde>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xde
0817674f +0x2d:  cmp    $0x63,%eax
08176752 +0x30:  sete   %al
08176755 +0x33:  test   %al,%al
08176757 +0x35:  je     08176760 <+0x3e>
08176759 +0x37:  mov    $0x0,%eax
0817675e +0x3c:  jmp    08176791 <+0x6f>
08176760 +0x3e:  cmpb   $0x1,-0xc(%ebp)
08176764 +0x42:  jne    0817677c <+0x5a>
08176766 +0x44:  mov    0xc(%ebp),%eax
08176769 +0x47:  mov    %eax,(%esp)
0817676c +0x4a:  call   0817a078 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf6
08176771 +0x4f:  test   %al,%al
08176773 +0x51:  je     0817677c <+0x5a>
08176775 +0x53:  mov    $0x1,%eax
0817677a +0x58:  jmp    08176781 <+0x5f>
0817677c +0x5a:  mov    $0x0,%eax
08176781 +0x5f:  test   %al,%al
08176783 +0x61:  je     0817678c <+0x6a>
08176785 +0x63:  mov    $0x0,%eax
0817678a +0x68:  jmp    08176791 <+0x6f>
0817678c +0x6a:  mov    $0x1,%eax
08176791 +0x6f:  leave
08176792 +0x70:  ret
08176793 +0x71:  nop
```

## 反编译 C

```c
// ItemVendingMachine::_CheckEnableGiftCondition @ 0x8176722

/* ItemVendingMachine::_CheckEnableGiftCondition(CCeraShopGoods const*, CUser*, char) */

bool __thiscall
ItemVendingMachine::_CheckEnableGiftCondition
          (ItemVendingMachine *this,CCeraShopGoods *param_1,CUser *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CUser::IsGameMasterMode(param_2);
  if (cVar2 != '\0') {
    return true;
  }
  iVar3 = CCeraShopGoods::GetSticker(param_1);
  if (iVar3 != 99) {
    if ((param_3 == '\x01') && (cVar2 = CCeraShopGoods::isGiftDisallowance_(param_1), cVar2 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    return !bVar1;
  }
  return false;
}
```
