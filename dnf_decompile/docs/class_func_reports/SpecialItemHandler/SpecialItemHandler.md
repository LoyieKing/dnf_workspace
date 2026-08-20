# SpecialItemHandler

`_ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE`

`SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827bcec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827bcec  _ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE
#           SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)
# range [0x0827bcec, 0x0827be09]
0827bcec +0x000:  push   %ebp
0827bced +0x001:  mov    %esp,%ebp
0827bcef +0x003:  sub    $0x10,%esp
0827bcf2 +0x006:  mov    0x8(%ebp),%eax
0827bcf5 +0x009:  mov    0xc(%ebp),%edx
0827bcf8 +0x00c:  mov    %edx,(%eax)
0827bcfa +0x00e:  movl   $0x0,-0x4(%ebp)
0827bd01 +0x015:  jmp    0827bd20 <+0x34>
0827bd03 +0x017:  mov    -0x4(%ebp),%eax
0827bd06 +0x01a:  mov    0x8(%ebp),%edx
0827bd09 +0x01d:  movl   $0x0,0x4(%edx,%eax,8)
0827bd11 +0x025:  mov    0x8(%ebp),%edx
0827bd14 +0x028:  movl   $0x0,0x8(%edx,%eax,8)
0827bd1c +0x030:  addl   $0x1,-0x4(%ebp)
0827bd20 +0x034:  cmpl   $0xd,-0x4(%ebp)
0827bd24 +0x038:  setle  %al
0827bd27 +0x03b:  test   %al,%al
0827bd29 +0x03d:  jne    0827bd03 <+0x17>
0827bd2b +0x03f:  mov    0x8(%ebp),%eax
0827bd2e +0x042:  movl   $&_ZN18SpecialItemHandler26respond_special_item_cargoEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0xc(%eax)
0827bd35 +0x049:  mov    0x8(%ebp),%eax
0827bd38 +0x04c:  movl   $0x0,0x10(%eax)
0827bd3f +0x053:  mov    0x8(%ebp),%eax
0827bd42 +0x056:  movl   $&_ZN18SpecialItemHandler30respond_special_item_cargo_absEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x3c(%eax)
0827bd49 +0x05d:  mov    0x8(%ebp),%eax
0827bd4c +0x060:  movl   $0x0,0x40(%eax)
0827bd53 +0x067:  mov    0x8(%ebp),%eax
0827bd56 +0x06a:  movl   $&_ZN18SpecialItemHandler38respond_special_item_inventory_upgradeEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x5c(%eax)
0827bd5d +0x071:  mov    0x8(%ebp),%eax
0827bd60 +0x074:  movl   $0x0,0x60(%eax)
0827bd67 +0x07b:  mov    0x8(%ebp),%eax
0827bd6a +0x07e:  movl   $&_ZN18SpecialItemHandler39respond_special_item_charac_slot_extendEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x44(%eax)
0827bd71 +0x085:  mov    0x8(%ebp),%eax
0827bd74 +0x088:  movl   $0x0,0x48(%eax)
0827bd7b +0x08f:  mov    0x8(%ebp),%eax
0827bd7e +0x092:  movl   $&_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x2c(%eax)
0827bd85 +0x099:  mov    0x8(%ebp),%eax
0827bd88 +0x09c:  movl   $0x0,0x30(%eax)
0827bd8f +0x0a3:  mov    0x8(%ebp),%eax
0827bd92 +0x0a6:  movl   $&_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x34(%eax)
0827bd99 +0x0ad:  mov    0x8(%ebp),%eax
0827bd9c +0x0b0:  movl   $0x0,0x38(%eax)
0827bda3 +0x0b7:  mov    0x8(%ebp),%eax
0827bda6 +0x0ba:  movl   $&_ZN18SpecialItemHandler38respond_special_item_booster_selectionEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x64(%eax)
0827bdad +0x0c1:  mov    0x8(%ebp),%eax
0827bdb0 +0x0c4:  movl   $0x0,0x68(%eax)
0827bdb7 +0x0cb:  mov    0x8(%ebp),%eax
0827bdba +0x0ce:  movl   $&_ZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x4c(%eax)
0827bdc1 +0x0d5:  mov    0x8(%ebp),%eax
0827bdc4 +0x0d8:  movl   $0x0,0x50(%eax)
0827bdcb +0x0df:  mov    0x8(%ebp),%eax
0827bdce +0x0e2:  movl   $&_ZN18SpecialItemHandler37respond_special_item_skill_tree_styleEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x54(%eax)
0827bdd5 +0x0e9:  mov    0x8(%ebp),%eax
0827bdd8 +0x0ec:  movl   $0x0,0x58(%eax)
0827bddf +0x0f3:  mov    0x8(%ebp),%eax
0827bde2 +0x0f6:  movl   $&_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x14(%eax)
0827bde9 +0x0fd:  mov    0x8(%ebp),%eax
0827bdec +0x100:  movl   $0x0,0x18(%eax)
0827bdf3 +0x107:  mov    0x8(%ebp),%eax
0827bdf6 +0x10a:  movl   $&_ZN18SpecialItemHandler39respond_special_item_cerapoint_giftcardEiRK19STSpecailItem_ParamR20STSpecailItem_Result,0x6c(%eax)
0827bdfd +0x111:  mov    0x8(%ebp),%eax
0827be00 +0x114:  movl   $0x0,0x70(%eax)
0827be07 +0x11b:  leave
0827be08 +0x11c:  ret
0827be09 +0x11d:  nop
```

## 反编译 C

```c
// SpecialItemHandler::SpecialItemHandler @ 0x827bcec

/* SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*) */

void __thiscall SpecialItemHandler::SpecialItemHandler(SpecialItemHandler *this,CCeraShop *param_1)

{
  int local_8;
  
  *(CCeraShop **)this = param_1;
  for (local_8 = 0; local_8 < 0xe; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 8 + 4) = 0;
    *(undefined4 *)(this + local_8 * 8 + 8) = 0;
  }
  *(code **)(this + 0xc) = respond_special_item_cargo;
  *(undefined4 *)(this + 0x10) = 0;
  *(code **)(this + 0x3c) = respond_special_item_cargo_abs;
  *(undefined4 *)(this + 0x40) = 0;
  *(code **)(this + 0x5c) = respond_special_item_inventory_upgrade;
  *(undefined4 *)(this + 0x60) = 0;
  *(code **)(this + 0x44) = respond_special_item_charac_slot_extend;
  *(undefined4 *)(this + 0x48) = 0;
  *(code **)(this + 0x2c) = respond_special_item_package;
  *(undefined4 *)(this + 0x30) = 0;
  *(code **)(this + 0x34) = respond_special_item_booster;
  *(undefined4 *)(this + 0x38) = 0;
  *(code **)(this + 100) = respond_special_item_booster_selection;
  *(undefined4 *)(this + 0x68) = 0;
  *(code **)(this + 0x4c) = respond_special_item_skill_confirm;
  *(undefined4 *)(this + 0x50) = 0;
  *(code **)(this + 0x54) = respond_special_item_skill_tree_style;
  *(undefined4 *)(this + 0x58) = 0;
  *(code **)(this + 0x14) = respond_special_item_premium;
  *(undefined4 *)(this + 0x18) = 0;
  *(code **)(this + 0x6c) = respond_special_item_cerapoint_giftcard;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}
```
