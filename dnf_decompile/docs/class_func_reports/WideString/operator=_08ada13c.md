# operator=

`_ZN10WideStringaSERKS_`

`WideString::operator=(WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada13c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada13c  _ZN10WideStringaSERKS_
#           WideString::operator=(WideString const&)
# range [0x08ada13c, 0x08ada159]
08ada13c +0x00:  push   %ebp
08ada13d +0x01:  mov    %esp,%ebp
08ada13f +0x03:  sub    $0x18,%esp
08ada142 +0x06:  mov    0xc(%ebp),%eax
08ada145 +0x09:  mov    %eax,0x4(%esp)
08ada149 +0x0d:  mov    0x8(%ebp),%eax
08ada14c +0x10:  mov    %eax,(%esp)
08ada14f +0x13:  call   08ada034 <_ZN10WideString6assignERKS_>  ; WideString::assign(WideString const&)
08ada154 +0x18:  mov    0x8(%ebp),%eax
08ada157 +0x1b:  leave
08ada158 +0x1c:  ret
08ada159 +0x1d:  nop
```

## 反编译 C

```c
// WideString::operator= @ 0x8ada13c

/* DWARF original prototype: WideString * operator=(WideString * this, WideString * src) */

WideString * __thiscall WideString::operator=(WideString *this,WideString *src)

{
  assign(this,src);
  return this;
}
```
