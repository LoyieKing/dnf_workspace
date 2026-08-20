# CountryCode

`_ZN11CountryCodeC1Eh`

`CountryCode::CountryCode(unsigned char)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad3172` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3172  _ZN11CountryCodeC1Eh
#           CountryCode::CountryCode(unsigned char)
# range [0x08ad3172, 0x08ad3189]
08ad3172 +0x00:  push   %ebp
08ad3173 +0x01:  mov    %esp,%ebp
08ad3175 +0x03:  sub    $0x4,%esp
08ad3178 +0x06:  mov    0xc(%ebp),%eax
08ad317b +0x09:  mov    %al,-0x4(%ebp)
08ad317e +0x0c:  mov    0x8(%ebp),%eax
08ad3181 +0x0f:  movzbl -0x4(%ebp),%edx
08ad3185 +0x13:  mov    %dl,(%eax)
08ad3187 +0x15:  leave
08ad3188 +0x16:  ret
08ad3189 +0x17:  nop
```

## 反编译 C

```c
// CountryCode::CountryCode @ 0x8ad3172

/* DWARF original prototype: void CountryCode(CountryCode * this, byte idx) */

void __thiscall CountryCode::CountryCode(CountryCode *this,byte idx)

{
  this->idx_ = idx;
  return;
}
```
