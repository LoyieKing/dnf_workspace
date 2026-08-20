# clear

`_ZN17combo_script_data5clearEv`

`combo_script_data::clear()`

| 类 | 地址 |
|---|---|
| `combo_script_data` | `0x08a5a7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5a7f4  _ZN17combo_script_data5clearEv
#           combo_script_data::clear()
# range [0x08a5a7f4, 0x08a5a81b]
08a5a7f4 +0x00:  push   %ebp
08a5a7f5 +0x01:  mov    %esp,%ebp
08a5a7f7 +0x03:  sub    $0x18,%esp
08a5a7fa +0x06:  mov    0x8(%ebp),%eax
08a5a7fd +0x09:  mov    %eax,(%esp)
08a5a800 +0x0c:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08a5a805 +0x11:  mov    0x8(%ebp),%eax
08a5a808 +0x14:  movl   $0x0,0xc(%eax)
08a5a80f +0x1b:  mov    0x8(%ebp),%eax
08a5a812 +0x1e:  movl   $0x0,0x10(%eax)
08a5a819 +0x25:  leave
08a5a81a +0x26:  ret
08a5a81b +0x27:  nop
```

## 反编译 C

```c
// combo_script_data::clear @ 0x8a5a7f4

/* combo_script_data::clear() */

void __thiscall combo_script_data::clear(combo_script_data *this)

{
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```
