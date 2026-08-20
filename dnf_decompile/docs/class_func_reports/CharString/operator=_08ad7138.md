# operator=

`_ZN10CharStringaSEc`

`CharString::operator=(char)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7138` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7138  _ZN10CharStringaSEc
#           CharString::operator=(char)
# range [0x08ad7138, 0x08ad715b]
08ad7138 +0x00:  push   %ebp
08ad7139 +0x01:  mov    %esp,%ebp
08ad713b +0x03:  sub    $0x28,%esp
08ad713e +0x06:  mov    0xc(%ebp),%eax
08ad7141 +0x09:  mov    %al,-0xc(%ebp)
08ad7144 +0x0c:  movsbl -0xc(%ebp),%eax
08ad7148 +0x10:  mov    %eax,0x4(%esp)
08ad714c +0x14:  mov    0x8(%ebp),%eax
08ad714f +0x17:  mov    %eax,(%esp)
08ad7152 +0x1a:  call   08ad701a <_ZN10CharString6assignEc>  ; CharString::assign(char)
08ad7157 +0x1f:  mov    0x8(%ebp),%eax
08ad715a +0x22:  leave
08ad715b +0x23:  ret
```

## 反编译 C

```c
// CharString::operator= @ 0x8ad7138

/* DWARF original prototype: CharString * operator=(CharString * this, char src) */

CharString * __thiscall CharString::operator=(CharString *this,char src)

{
  assign(this,src);
  return this;
}
```
