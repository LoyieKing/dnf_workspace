# GarenaCyberCafe

`_ZN6Taiwan15GarenaCyberCafeEt`

`Taiwan::GarenaCyberCafe(unsigned short)`

| 类 | 地址 |
|---|---|
| `Taiwan` | `0x0817305a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817305a  _ZN6Taiwan15GarenaCyberCafeEt
#           Taiwan::GarenaCyberCafe(unsigned short)
# range [0x0817305a, 0x0817307f]
0817305a +0x00:  push   %ebp
0817305b +0x01:  mov    %esp,%ebp
0817305d +0x03:  sub    $0x4,%esp
08173060 +0x06:  mov    0x8(%ebp),%eax
08173063 +0x09:  mov    %ax,-0x4(%ebp)
08173067 +0x0d:  movzwl -0x4(%ebp),%eax
0817306b +0x11:  and    $0x1,%eax
0817306e +0x14:  test   %al,%al
08173070 +0x16:  je     08173079 <+0x1f>
08173072 +0x18:  mov    $0x1,%eax
08173077 +0x1d:  jmp    0817307e <+0x24>
08173079 +0x1f:  mov    $0x0,%eax
0817307e +0x24:  leave
0817307f +0x25:  ret
```

## 反编译 C

```c
// Taiwan::GarenaCyberCafe @ 0x817305a

/* Taiwan::GarenaCyberCafe(unsigned short) */

bool Taiwan::GarenaCyberCafe(ushort param_1)

{
  return (param_1 & 1) != 0;
}
```
