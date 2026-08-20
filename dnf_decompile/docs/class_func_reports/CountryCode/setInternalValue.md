# setInternalValue

`_ZN11CountryCode16setInternalValueEh`

`CountryCode::setInternalValue(unsigned char)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad32ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad32ca  _ZN11CountryCode16setInternalValueEh
#           CountryCode::setInternalValue(unsigned char)
# range [0x08ad32ca, 0x08ad32e1]
08ad32ca +0x00:  push   %ebp
08ad32cb +0x01:  mov    %esp,%ebp
08ad32cd +0x03:  sub    $0x4,%esp
08ad32d0 +0x06:  mov    0xc(%ebp),%eax
08ad32d3 +0x09:  mov    %al,-0x4(%ebp)
08ad32d6 +0x0c:  mov    0x8(%ebp),%eax
08ad32d9 +0x0f:  movzbl -0x4(%ebp),%edx
08ad32dd +0x13:  mov    %dl,(%eax)
08ad32df +0x15:  leave
08ad32e0 +0x16:  ret
08ad32e1 +0x17:  nop
```

## 反编译 C

```c
// CountryCode::setInternalValue @ 0x8ad32ca

/* DWARF original prototype: void setInternalValue(CountryCode * this, byte value) */

void __thiscall CountryCode::setInternalValue(CountryCode *this,byte value)

{
  this->idx_ = value;
  return;
}
```
