# getInt32

`_ZN8XorRand48getInt32Ev`

`XorRand4::getInt32()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfaba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfaba  _ZN8XorRand48getInt32Ev
#           XorRand4::getInt32()
# range [0x08adfaba, 0x08adfacd]
08adfaba +0x00:  push   %ebp
08adfabb +0x01:  mov    %esp,%ebp
08adfabd +0x03:  sub    $0x18,%esp
08adfac0 +0x06:  mov    0x8(%ebp),%eax
08adfac3 +0x09:  mov    %eax,(%esp)
08adfac6 +0x0c:  call   08adface <_ZN8XorRand49getUInt32Ev>  ; XorRand4::getUInt32()
08adfacb +0x11:  leave
08adfacc +0x12:  ret
08adfacd +0x13:  nop
```

## 反编译 C

```c
// XorRand4::getInt32 @ 0x8adfaba

/* DWARF original prototype: int32 getInt32(XorRand4 * this) */

int32 __thiscall XorRand4::getInt32(XorRand4 *this)

{
  uint32 uVar1;
  
  uVar1 = getUInt32(this);
  return uVar1;
}
```
