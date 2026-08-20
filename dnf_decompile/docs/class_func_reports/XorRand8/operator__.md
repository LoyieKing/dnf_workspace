# operator()

`_ZN8XorRand8clEv`

`XorRand8::operator()()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfe6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfe6c  _ZN8XorRand8clEv
#           XorRand8::operator()()
# range [0x08adfe6c, 0x08adfe7f]
08adfe6c +0x00:  push   %ebp
08adfe6d +0x01:  mov    %esp,%ebp
08adfe6f +0x03:  sub    $0x8,%esp
08adfe72 +0x06:  mov    0x8(%ebp),%eax
08adfe75 +0x09:  mov    %eax,(%esp)
08adfe78 +0x0c:  call   08adfd00 <_ZN8XorRand89getUInt64Ev>  ; XorRand8::getUInt64()
08adfe7d +0x11:  leave
08adfe7e +0x12:  ret
08adfe7f +0x13:  nop
```

## 反编译 C

```c
// XorRand8::operator @ 0x8adfe6c

/* DWARF original prototype: uint64 operator()(XorRand8 * this) */

uint64 __thiscall XorRand8::operator()(XorRand8 *this)

{
  uint64 uVar1;
  
  uVar1 = getUInt64(this);
  return uVar1;
}
```
