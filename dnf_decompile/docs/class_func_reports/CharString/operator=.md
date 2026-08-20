# operator=

`_ZN10CharStringaSEPKc`

`CharString::operator=(char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad70c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad70c0  _ZN10CharStringaSEPKc
#           CharString::operator=(char const*)
# range [0x08ad70c0, 0x08ad70dd]
08ad70c0 +0x00:  push   %ebp
08ad70c1 +0x01:  mov    %esp,%ebp
08ad70c3 +0x03:  sub    $0x18,%esp
08ad70c6 +0x06:  mov    0xc(%ebp),%eax
08ad70c9 +0x09:  mov    %eax,0x4(%esp)
08ad70cd +0x0d:  mov    0x8(%ebp),%eax
08ad70d0 +0x10:  mov    %eax,(%esp)
08ad70d3 +0x13:  call   08ad6f42 <_ZN10CharString6assignEPKc>  ; CharString::assign(char const*)
08ad70d8 +0x18:  mov    0x8(%ebp),%eax
08ad70db +0x1b:  leave
08ad70dc +0x1c:  ret
08ad70dd +0x1d:  nop
```

## 反编译 C

```c
// CharString::operator= @ 0x8ad70c0

/* DWARF original prototype: CharString * operator=(CharString * this, char * src) */

CharString * __thiscall CharString::operator=(CharString *this,char *src)

{
  assign(this,src);
  return this;
}
```
