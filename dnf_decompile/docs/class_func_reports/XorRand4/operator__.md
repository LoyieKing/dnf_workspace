# operator()

`_ZN8XorRand4clEv`

`XorRand4::operator()()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfb3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfb3c  _ZN8XorRand4clEv
#           XorRand4::operator()()
# range [0x08adfb3c, 0x08adfb4f]
08adfb3c +0x00:  push   %ebp
08adfb3d +0x01:  mov    %esp,%ebp
08adfb3f +0x03:  sub    $0x4,%esp
08adfb42 +0x06:  mov    0x8(%ebp),%eax
08adfb45 +0x09:  mov    %eax,(%esp)
08adfb48 +0x0c:  call   08adface <_ZN8XorRand49getUInt32Ev>  ; XorRand4::getUInt32()
08adfb4d +0x11:  leave
08adfb4e +0x12:  ret
08adfb4f +0x13:  nop
```

## 反编译 C

```c
// XorRand4::operator @ 0x8adfb3c

/* DWARF original prototype: uint32 operator()(XorRand4 * this) */

uint32 __thiscall XorRand4::operator()(XorRand4 *this)

{
  uint32 uVar1;
  
  uVar1 = getUInt32(this);
  return uVar1;
}
```
