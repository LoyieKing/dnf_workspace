# operator==

`_ZN15AvatarVariation8colorRGBeqERKS0_`

`AvatarVariation::colorRGB::operator==(AvatarVariation::colorRGB const&)`

| 类 | 地址 |
|---|---|
| `AvatarVariation::colorRGB` | `0x088d440a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d440a  _ZN15AvatarVariation8colorRGBeqERKS0_
#           AvatarVariation::colorRGB::operator==(AvatarVariation::colorRGB const&)
# range [0x088d440a, 0x088d444e]
088d440a +0x00:  push   %ebp
088d440b +0x01:  mov    %esp,%ebp
088d440d +0x03:  mov    0x8(%ebp),%eax
088d4410 +0x06:  movzbl (%eax),%edx
088d4413 +0x09:  mov    0xc(%ebp),%eax
088d4416 +0x0c:  movzbl (%eax),%eax
088d4419 +0x0f:  cmp    %al,%dl
088d441b +0x11:  jne    088d4448 <+0x3e>
088d441d +0x13:  mov    0x8(%ebp),%eax
088d4420 +0x16:  movzbl 0x1(%eax),%edx
088d4424 +0x1a:  mov    0xc(%ebp),%eax
088d4427 +0x1d:  movzbl 0x1(%eax),%eax
088d442b +0x21:  cmp    %al,%dl
088d442d +0x23:  jne    088d4448 <+0x3e>
088d442f +0x25:  mov    0x8(%ebp),%eax
088d4432 +0x28:  movzbl 0x2(%eax),%edx
088d4436 +0x2c:  mov    0xc(%ebp),%eax
088d4439 +0x2f:  movzbl 0x2(%eax),%eax
088d443d +0x33:  cmp    %al,%dl
088d443f +0x35:  jne    088d4448 <+0x3e>
088d4441 +0x37:  mov    $0x1,%eax
088d4446 +0x3c:  jmp    088d444d <+0x43>
088d4448 +0x3e:  mov    $0x0,%eax
088d444d +0x43:  pop    %ebp
088d444e +0x44:  ret
```

## 反编译 C

```c
// AvatarVariation::colorRGB::operator== @ 0x88d440a

/* AvatarVariation::colorRGB::TEMPNAMEPLACEHOLDERVALUE(AvatarVariation::colorRGB const&) */

undefined4 __thiscall AvatarVariation::colorRGB::operator==(colorRGB *this,colorRGB *param_1)

{
  undefined4 uVar1;
  
  if (((*this == *param_1) && (this[1] == param_1[1])) && (this[2] == param_1[2])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
