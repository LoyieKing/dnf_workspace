# operator=

`_ZN10WideStringaSEw`

`WideString::operator=(wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada196  _ZN10WideStringaSEw
#           WideString::operator=(wchar_t)
# range [0x08ada196, 0x08ada1b3]
08ada196 +0x00:  push   %ebp
08ada197 +0x01:  mov    %esp,%ebp
08ada199 +0x03:  sub    $0x18,%esp
08ada19c +0x06:  mov    0xc(%ebp),%eax
08ada19f +0x09:  mov    %eax,0x4(%esp)
08ada1a3 +0x0d:  mov    0x8(%ebp),%eax
08ada1a6 +0x10:  mov    %eax,(%esp)
08ada1a9 +0x13:  call   08ada080 <_ZN10WideString6assignEw>  ; WideString::assign(wchar_t)
08ada1ae +0x18:  mov    0x8(%ebp),%eax
08ada1b1 +0x1b:  leave
08ada1b2 +0x1c:  ret
08ada1b3 +0x1d:  nop
```

## 反编译 C

```c
// WideString::operator= @ 0x8ada196

/* DWARF original prototype: WideString * operator=(WideString * this, wchar src) */

WideString * __thiscall WideString::operator=(WideString *this,wchar src)

{
  assign(this,src);
  return this;
}
```
