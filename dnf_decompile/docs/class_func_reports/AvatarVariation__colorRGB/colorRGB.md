# colorRGB

`_ZN15AvatarVariation8colorRGBC1Ev`

`AvatarVariation::colorRGB::colorRGB()`

| 类 | 地址 |
|---|---|
| `AvatarVariation::colorRGB` | `0x088d43f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d43f0  _ZN15AvatarVariation8colorRGBC1Ev
#           AvatarVariation::colorRGB::colorRGB()
# range [0x088d43f0, 0x088d4409]
088d43f0 +0x00:  push   %ebp
088d43f1 +0x01:  mov    %esp,%ebp
088d43f3 +0x03:  mov    0x8(%ebp),%eax
088d43f6 +0x06:  movb   $0xff,(%eax)
088d43f9 +0x09:  mov    0x8(%ebp),%eax
088d43fc +0x0c:  movb   $0xff,0x1(%eax)
088d4400 +0x10:  mov    0x8(%ebp),%eax
088d4403 +0x13:  movb   $0xff,0x2(%eax)
088d4407 +0x17:  pop    %ebp
088d4408 +0x18:  ret
088d4409 +0x19:  nop
```

## 反编译 C

```c
// AvatarVariation::colorRGB::colorRGB @ 0x88d43f0

/* AvatarVariation::colorRGB::colorRGB() */

void __thiscall AvatarVariation::colorRGB::colorRGB(colorRGB *this)

{
  *this = (colorRGB)0xff;
  this[1] = (colorRGB)0xff;
  this[2] = (colorRGB)0xff;
  return;
}
```
