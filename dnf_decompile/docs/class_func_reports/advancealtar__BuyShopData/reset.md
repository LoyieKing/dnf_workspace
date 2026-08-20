# reset

`_ZN12advancealtar11BuyShopData5resetEv`

`advancealtar::BuyShopData::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyShopData` | `0x088a1090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a1090  _ZN12advancealtar11BuyShopData5resetEv
#           advancealtar::BuyShopData::reset()
# range [0x088a1090, 0x088a10cb]
088a1090 +0x00:  push   %ebp
088a1091 +0x01:  mov    %esp,%ebp
088a1093 +0x03:  sub    $0x18,%esp
088a1096 +0x06:  mov    0x8(%ebp),%eax
088a1099 +0x09:  movl   $0x0,(%eax)
088a109f +0x0f:  mov    0x8(%ebp),%eax
088a10a2 +0x12:  add    $0x4,%eax
088a10a5 +0x15:  mov    %eax,(%esp)
088a10a8 +0x18:  call   088a3a5c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x57a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x57a
088a10ad +0x1d:  mov    0x8(%ebp),%eax
088a10b0 +0x20:  add    $0x10,%eax
088a10b3 +0x23:  mov    %eax,(%esp)
088a10b6 +0x26:  call   088a3a5c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x57a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x57a
088a10bb +0x2b:  mov    0x8(%ebp),%eax
088a10be +0x2e:  add    $0x1c,%eax
088a10c1 +0x31:  mov    %eax,(%esp)
088a10c4 +0x34:  call   088a3a5c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x57a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x57a
088a10c9 +0x39:  leave
088a10ca +0x3a:  ret
088a10cb +0x3b:  nop
```

## 反编译 C

```c
// advancealtar::BuyShopData::reset @ 0x88a1090

/* advancealtar::BuyShopData::reset() */

void __thiscall advancealtar::BuyShopData::reset(BuyShopData *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 4));
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 0x10));
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 0x1c));
  return;
}
```
