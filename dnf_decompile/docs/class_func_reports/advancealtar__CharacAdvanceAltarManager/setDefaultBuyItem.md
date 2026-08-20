# setDefaultBuyItem

`_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE`

`advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132cb8  _ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE
#           advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
# range [0x08132cb8, 0x08132d1f]
08132cb8 +0x00:  push   %ebp
08132cb9 +0x01:  mov    %esp,%ebp
08132cbb +0x03:  sub    $0x28,%esp
08132cbe +0x06:  mov    0x8(%ebp),%eax
08132cc1 +0x09:  mov    (%eax),%eax
08132cc3 +0x0b:  test   %eax,%eax
08132cc5 +0x0d:  je     08132d19 <+0x61>
08132cc7 +0x0f:  mov    0x8(%ebp),%eax
08132cca +0x12:  mov    (%eax),%eax
08132ccc +0x14:  mov    0xc(%ebp),%edx
08132ccf +0x17:  mov    %edx,0x4(%esp)
08132cd3 +0x1b:  mov    %eax,(%esp)
08132cd6 +0x1e:  call   088999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
08132cdb +0x23:  mov    %eax,-0x10(%ebp)
08132cde +0x26:  cmpl   $0x0,-0x10(%ebp)
08132ce2 +0x2a:  je     08132d1c <+0x64>
08132ce4 +0x2c:  mov    -0x10(%ebp),%eax
08132ce7 +0x2f:  mov    %eax,(%esp)
08132cea +0x32:  call   0813653a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2141>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2141
08132cef +0x37:  movl   $0x0,-0xc(%ebp)
08132cf6 +0x3e:  movl   $0x0,0xc(%esp)
08132cfe +0x46:  mov    -0xc(%ebp),%eax
08132d01 +0x49:  mov    %eax,0x8(%esp)
08132d05 +0x4d:  mov    0xc(%ebp),%eax
08132d08 +0x50:  mov    %eax,0x4(%esp)
08132d0c +0x54:  mov    0x8(%ebp),%eax
08132d0f +0x57:  mov    %eax,(%esp)
08132d12 +0x5a:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
08132d17 +0x5f:  jmp    08132d1d <+0x65>
08132d19 +0x61:  nop
08132d1a +0x62:  jmp    08132d1d <+0x65>
08132d1c +0x64:  nop
08132d1d +0x65:  leave
08132d1e +0x66:  ret
08132d1f +0x67:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem @ 0x8132cb8

/* advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
    */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2)

{
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  *this_00;
  
  if ((*(int *)this != 0) &&
     (this_00 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                 *)AdvanceAltarData::getBuyItemMap(*(AdvanceAltarData **)this,param_2),
     this_00 !=
     (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      *)0x0)) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::clear(this_00);
    setUnlockBuyItem(this,param_2,0,0);
  }
  return;
}
```
