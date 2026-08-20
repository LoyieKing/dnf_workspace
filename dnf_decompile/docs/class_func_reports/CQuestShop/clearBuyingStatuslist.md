# clearBuyingStatuslist

`_ZN10CQuestShop21clearBuyingStatuslistEv`

`CQuestShop::clearBuyingStatuslist()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eed08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eed08  _ZN10CQuestShop21clearBuyingStatuslistEv
#           CQuestShop::clearBuyingStatuslist()
# range [0x085eed08, 0x085eed29]
085eed08 +0x00:  push   %ebp
085eed09 +0x01:  mov    %esp,%ebp
085eed0b +0x03:  sub    $0x18,%esp
085eed0e +0x06:  mov    0x8(%ebp),%eax
085eed11 +0x09:  mov    %eax,(%esp)
085eed14 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085eed19 +0x11:  mov    0x8(%ebp),%eax
085eed1c +0x14:  add    $0x8,%eax
085eed1f +0x17:  mov    %eax,(%esp)
085eed22 +0x1a:  call   083856bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1515c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1515c
085eed27 +0x1f:  leave
085eed28 +0x20:  ret
085eed29 +0x21:  nop
```

## 反编译 C

```c
// CQuestShop::clearBuyingStatuslist @ 0x85eed08

/* CQuestShop::clearBuyingStatuslist() */

void __thiscall CQuestShop::clearBuyingStatuslist(CQuestShop *this)

{
  charac_expand::CData::alter((CData *)this);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 8));
  return;
}
```
