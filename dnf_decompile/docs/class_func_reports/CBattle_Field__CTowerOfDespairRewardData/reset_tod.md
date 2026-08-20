# reset_tod

`_ZN13CBattle_Field25CTowerOfDespairRewardData9reset_todEv`

`CBattle_Field::CTowerOfDespairRewardData::reset_tod()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CTowerOfDespairRewardData` | `0x083071a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083071a6  _ZN13CBattle_Field25CTowerOfDespairRewardData9reset_todEv
#           CBattle_Field::CTowerOfDespairRewardData::reset_tod()
# range [0x083071a6, 0x083071b9]
083071a6 +0x00:  push   %ebp
083071a7 +0x01:  mov    %esp,%ebp
083071a9 +0x03:  sub    $0x18,%esp
083071ac +0x06:  mov    0x8(%ebp),%eax
083071af +0x09:  mov    %eax,(%esp)
083071b2 +0x0c:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
083071b7 +0x11:  leave
083071b8 +0x12:  ret
083071b9 +0x13:  nop
```

## 反编译 C

```c
// CBattle_Field::CTowerOfDespairRewardData::reset_tod @ 0x83071a6

/* CBattle_Field::CTowerOfDespairRewardData::reset_tod() */

void __thiscall CBattle_Field::CTowerOfDespairRewardData::reset_tod(CTowerOfDespairRewardData *this)

{
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)this);
  return;
}
```
