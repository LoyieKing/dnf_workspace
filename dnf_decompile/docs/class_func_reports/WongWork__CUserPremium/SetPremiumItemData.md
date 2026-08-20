# SetPremiumItemData

`_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData`

`WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086af70a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086af70a  _ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData
#           WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&)
# range [0x086af70a, 0x086af7c3]
086af70a +0x00:  push   %ebp
086af70b +0x01:  mov    %esp,%ebp
086af70d +0x03:  sub    $0x48,%esp
086af710 +0x06:  mov    0x8(%ebp),%eax
086af713 +0x09:  test   %eax,%eax
086af715 +0x0b:  jne    086af721 <+0x17>
086af717 +0x0d:  mov    $0x1,%eax
086af71c +0x12:  jmp    086af7c1 <+0xb7>
086af721 +0x17:  lea    -0x38(%ebp),%eax
086af724 +0x1a:  movl   $&g_map_premium_item_data,0x4(%esp)
086af72c +0x22:  mov    %eax,(%esp)
086af72f +0x25:  call   0827e432 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x554>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x554
086af734 +0x2a:  sub    $0x4,%esp
086af737 +0x2d:  lea    -0x34(%ebp),%eax
086af73a +0x30:  lea    0x8(%ebp),%edx
086af73d +0x33:  mov    %edx,0x8(%esp)
086af741 +0x37:  movl   $&g_map_premium_item_data,0x4(%esp)
086af749 +0x3f:  mov    %eax,(%esp)
086af74c +0x42:  call   0827e406 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x528>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x528
086af751 +0x47:  sub    $0x4,%esp
086af754 +0x4a:  lea    -0x38(%ebp),%eax
086af757 +0x4d:  mov    %eax,0x4(%esp)
086af75b +0x51:  lea    -0x34(%ebp),%eax
086af75e +0x54:  mov    %eax,(%esp)
086af761 +0x57:  call   0827e458 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x57a>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x57a
086af766 +0x5c:  test   %al,%al
086af768 +0x5e:  je     086af7bc <+0xb2>
086af76a +0x60:  lea    -0x18(%ebp),%eax
086af76d +0x63:  mov    0xc(%ebp),%edx
086af770 +0x66:  mov    %edx,0x8(%esp)
086af774 +0x6a:  lea    0x8(%ebp),%edx
086af777 +0x6d:  mov    %edx,0x4(%esp)
086af77b +0x71:  mov    %eax,(%esp)
086af77e +0x74:  call   086b0b12 <_GLOBAL__I_g_SPremiumInfo+0x308>  ; global constructors keyed to g_SPremiumInfo+0x308
086af783 +0x79:  sub    $0x4,%esp
086af786 +0x7c:  lea    -0x18(%ebp),%eax
086af789 +0x7f:  mov    %eax,0x4(%esp)
086af78d +0x83:  lea    -0x28(%ebp),%eax
086af790 +0x86:  mov    %eax,(%esp)
086af793 +0x89:  call   086b0b50 <_GLOBAL__I_g_SPremiumInfo+0x346>  ; global constructors keyed to g_SPremiumInfo+0x346
086af798 +0x8e:  lea    -0x30(%ebp),%eax
086af79b +0x91:  lea    -0x28(%ebp),%edx
086af79e +0x94:  mov    %edx,0x8(%esp)
086af7a2 +0x98:  movl   $&g_map_premium_item_data,0x4(%esp)
086af7aa +0xa0:  mov    %eax,(%esp)
086af7ad +0xa3:  call   086b0b8c <_GLOBAL__I_g_SPremiumInfo+0x382>  ; global constructors keyed to g_SPremiumInfo+0x382
086af7b2 +0xa8:  sub    $0x4,%esp
086af7b5 +0xab:  mov    $0x1,%eax
086af7ba +0xb0:  jmp    086af7c1 <+0xb7>
086af7bc +0xb2:  mov    $0x0,%eax
086af7c1 +0xb7:  leave
086af7c2 +0xb8:  ret
086af7c3 +0xb9:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::SetPremiumItemData @ 0x86af70a

/* WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&) */

undefined4 WongWork::CUserPremium::SetPremiumItemData(ulong param_1,STPremiumItemData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_38 [4];
  pair local_34 [8];
  pair<unsigned_long_const,STPremiumItemData> local_2c [16];
  ulong local_1c [6];
  
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::end(local_3c);
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::find((ulong *)local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                      (local_38,(_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      std::make_pair<unsigned_long_const&,STPremiumItemData_const&>
                (local_1c,(STPremiumItemData *)&param_1);
      std::pair<unsigned_long_const,STPremiumItemData>::pair<unsigned_long,STPremiumItemData>
                (local_2c,(pair *)local_1c);
      std::
      map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
      ::insert(local_34);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
