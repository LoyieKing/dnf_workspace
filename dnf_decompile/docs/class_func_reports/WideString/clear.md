# clear

`_ZN10WideString5clearEv`

`WideString::clear()`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada0cc  _ZN10WideString5clearEv
#           WideString::clear()
# range [0x08ada0cc, 0x08ada0f9]
08ada0cc +0x00:  push   %ebp
08ada0cd +0x01:  mov    %esp,%ebp
08ada0cf +0x03:  sub    $0x18,%esp
08ada0d2 +0x06:  mov    0x8(%ebp),%eax
08ada0d5 +0x09:  mov    %eax,(%esp)
08ada0d8 +0x0c:  call   08add2b8 <_ZN10WideString8isupunctEw+0x768>  ; WideString::isupunct(wchar_t)+0x768
08ada0dd +0x11:  test   %al,%al
08ada0df +0x13:  jne    08ada0f7 <+0x2b>
08ada0e1 +0x15:  mov    &_ZL21s_emptyWideStringData,%eax
08ada0e6 +0x1a:  mov    %eax,0x4(%esp)
08ada0ea +0x1e:  mov    0x8(%ebp),%eax
08ada0ed +0x21:  mov    %eax,(%esp)
08ada0f0 +0x24:  call   08ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>  ; WideString::replaceData(WideStringData*)
08ada0f5 +0x29:  jmp    08ada0f8 <+0x2c>
08ada0f7 +0x2b:  nop
08ada0f8 +0x2c:  leave
08ada0f9 +0x2d:  ret
```

## 反编译 C

```c
// WideString::clear @ 0x8ada0cc

/* DWARF original prototype: void clear(WideString * this) */

void __thiscall WideString::clear(WideString *this)

{
  bool bVar1;
  
  bVar1 = isEmpty(this);
  if (!bVar1) {
    replaceData(this,s_emptyWideStringData);
  }
  return;
}
```
