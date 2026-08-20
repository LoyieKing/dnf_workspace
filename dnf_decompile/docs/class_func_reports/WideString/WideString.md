# WideString

`_ZN10WideStringC1Ev`

`WideString::WideString()`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad99fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad99fe  _ZN10WideStringC1Ev
#           WideString::WideString()
# range [0x08ad99fe, 0x08ad9a19]
08ad99fe +0x00:  push   %ebp
08ad99ff +0x01:  mov    %esp,%ebp
08ad9a01 +0x03:  sub    $0x18,%esp
08ad9a04 +0x06:  mov    &_ZL21s_emptyWideStringData,%eax
08ad9a09 +0x0b:  mov    %eax,0x4(%esp)
08ad9a0d +0x0f:  mov    0x8(%ebp),%eax
08ad9a10 +0x12:  mov    %eax,(%esp)
08ad9a13 +0x15:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9a18 +0x1a:  leave
08ad9a19 +0x1b:  ret
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad99fe

/* DWARF original prototype: void WideString(WideString * this) */

void __thiscall WideString::WideString(WideString *this)

{
  attachData(this,s_emptyWideStringData);
  return;
}
```
