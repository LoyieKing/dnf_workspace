# reset_server_fatigue_data

`_ZN5CUser25reset_server_fatigue_dataEv`

`CUser::reset_server_fatigue_data()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d476` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d476  _ZN5CUser25reset_server_fatigue_dataEv
#           CUser::reset_server_fatigue_data()
# range [0x0868d476, 0x0868d4a1]
0868d476 +0x00:  push   %ebp
0868d477 +0x01:  mov    %esp,%ebp
0868d479 +0x03:  sub    $0x18,%esp
0868d47c +0x06:  mov    0x8(%ebp),%eax
0868d47f +0x09:  movb   $0x0,0x8eb4d(%eax)
0868d486 +0x10:  mov    0x8(%ebp),%eax
0868d489 +0x13:  movb   $0x0,0x8eb4c(%eax)
0868d490 +0x1a:  mov    0x8(%ebp),%eax
0868d493 +0x1d:  add    $0x8eb50,%eax
0868d498 +0x22:  mov    %eax,(%esp)
0868d49b +0x25:  call   083856bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1515c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1515c
0868d4a0 +0x2a:  leave
0868d4a1 +0x2b:  ret
```

## 反编译 C

```c
// CUser::reset_server_fatigue_data @ 0x868d476

/* CUser::reset_server_fatigue_data() */

void __thiscall CUser::reset_server_fatigue_data(CUser *this)

{
  this[0x8eb4d] = (CUser)0x0;
  this[0x8eb4c] = (CUser)0x0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 0x8eb50));
  return;
}
```
