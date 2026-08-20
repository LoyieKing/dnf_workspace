# Inter_NpcLimitBuyItemInfo

`_ZN25Inter_NpcLimitBuyItemInfoC1Ev`

`Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo()`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6502` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6502  _ZN25Inter_NpcLimitBuyItemInfoC1Ev
#           Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo()
# range [0x084e6502, 0x084e6553]
084e6502 +0x00:  push   %ebp
084e6503 +0x01:  mov    %esp,%ebp
084e6505 +0x03:  sub    $0x18,%esp
084e6508 +0x06:  mov    0x8(%ebp),%eax
084e650b +0x09:  mov    %eax,(%esp)
084e650e +0x0c:  call   084e9b00 <_GLOBAL__I__Z7getUserj+0xab2>  ; global constructors keyed to getUser(unsigned int)+0xab2
084e6513 +0x11:  mov    0x8(%ebp),%eax
084e6516 +0x14:  movl   $&_ZTV25Inter_NpcLimitBuyItemInfo+0x8,(%eax)
084e651c +0x1a:  mov    0x8(%ebp),%eax
084e651f +0x1d:  add    $0x8,%eax
084e6522 +0x20:  mov    %eax,(%esp)
084e6525 +0x23:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
084e652a +0x28:  mov    0x8(%ebp),%eax
084e652d +0x2b:  add    $0x1d,%eax
084e6530 +0x2e:  mov    %eax,(%esp)
084e6533 +0x31:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e6538 +0x36:  mov    0x8(%ebp),%eax
084e653b +0x39:  add    $0x5a,%eax
084e653e +0x3c:  mov    %eax,(%esp)
084e6541 +0x3f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e6546 +0x44:  mov    0x8(%ebp),%eax
084e6549 +0x47:  mov    %eax,(%esp)
084e654c +0x4a:  call   084e6e1a <_ZN25Inter_NpcLimitBuyItemInfo5resetEv>  ; Inter_NpcLimitBuyItemInfo::reset()
084e6551 +0x4f:  leave
084e6552 +0x50:  ret
084e6553 +0x51:  nop
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo @ 0x84e6502

/* Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e528;
  std::pair<int,int>::pair((pair<int,int> *)(this + 8));
  Inven_Item::Inven_Item((Inven_Item *)(this + 0x1d));
  Inven_Item::Inven_Item((Inven_Item *)(this + 0x5a));
  reset(this);
  return;
}
```
