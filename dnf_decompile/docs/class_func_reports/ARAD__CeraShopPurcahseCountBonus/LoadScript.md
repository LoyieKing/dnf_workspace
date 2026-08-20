# LoadScript

`_ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv`

`ARAD::CeraShopPurcahseCountBonus::LoadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::CeraShopPurcahseCountBonus` | `0x081abf14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081abf14  _ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv
#           ARAD::CeraShopPurcahseCountBonus::LoadScript()
# range [0x081abf14, 0x081abf43]
081abf14 +0x00:  push   %ebp
081abf15 +0x01:  mov    %esp,%ebp
081abf17 +0x03:  sub    $0x18,%esp
081abf1a +0x06:  mov    0x8(%ebp),%eax
081abf1d +0x09:  mov    %eax,0x4(%esp)
081abf21 +0x0d:  movl   $"CashShop/PurcahseBonusItem.shp",(%esp)
081abf28 +0x14:  call   088b62ec <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE>  ; ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)
081abf2d +0x19:  test   %eax,%eax
081abf2f +0x1b:  setg   %al
081abf32 +0x1e:  test   %al,%al
081abf34 +0x20:  je     081abf3d <+0x29>
081abf36 +0x22:  mov    $0x0,%eax
081abf3b +0x27:  jmp    081abf42 <+0x2e>
081abf3d +0x29:  mov    $0x1,%eax
081abf42 +0x2e:  leave
081abf43 +0x2f:  ret
```

## 反编译 C

```c
// ARAD::CeraShopPurcahseCountBonus::LoadScript @ 0x81abf14

/* ARAD::CeraShopPurcahseCountBonus::LoadScript() */

bool __thiscall ARAD::CeraShopPurcahseCountBonus::LoadScript(CeraShopPurcahseCountBonus *this)

{
  int iVar1;
  
  iVar1 = importCashShopPurcahseBonusItemList("CashShop/PurcahseBonusItem.shp",(map *)this);
  return iVar1 < 1;
}
```
