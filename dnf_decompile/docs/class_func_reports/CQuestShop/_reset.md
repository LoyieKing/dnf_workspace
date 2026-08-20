# _reset

`_ZN10CQuestShop6_resetEv`

`CQuestShop::_reset()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085efd74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085efd74  _ZN10CQuestShop6_resetEv
#           CQuestShop::_reset()
# range [0x085efd74, 0x085efdbf]
085efd74 +0x00:  push   %ebp
085efd75 +0x01:  mov    %esp,%ebp
085efd77 +0x03:  sub    $0x18,%esp
085efd7a +0x06:  mov    0x8(%ebp),%eax
085efd7d +0x09:  add    $0x8,%eax
085efd80 +0x0c:  mov    %eax,(%esp)
085efd83 +0x0f:  call   083856bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1515c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1515c
085efd88 +0x14:  mov    0x8(%ebp),%eax
085efd8b +0x17:  movl   $0x0,0x38(%eax)
085efd92 +0x1e:  mov    0x8(%ebp),%eax
085efd95 +0x21:  movl   $0x0,0x3c(%eax)
085efd9c +0x28:  mov    0x8(%ebp),%eax
085efd9f +0x2b:  movl   $0x0,0x40(%eax)
085efda6 +0x32:  mov    0x8(%ebp),%eax
085efda9 +0x35:  add    $0x20,%eax
085efdac +0x38:  mov    %eax,(%esp)
085efdaf +0x3b:  call   083856bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1515c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1515c
085efdb4 +0x40:  mov    0x8(%ebp),%eax
085efdb7 +0x43:  movl   $0x0,0x44(%eax)
085efdbe +0x4a:  leave
085efdbf +0x4b:  ret
```

## 反编译 C

```c
// CQuestShop::_reset @ 0x85efd74

/* CQuestShop::_reset() */

void __thiscall CQuestShop::_reset(CQuestShop *this)

{
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 0x20));
  *(undefined4 *)(this + 0x44) = 0;
  return;
}
```
