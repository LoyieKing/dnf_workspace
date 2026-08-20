# getImage

`_ZNK9GreyImage8getImageEv`

`GreyImage::getImage() const`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df5d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df5d8  _ZNK9GreyImage8getImageEv
#           GreyImage::getImage() const
# range [0x080df5d8, 0x080df5e3]
080df5d8 +0x00:  push   %ebp
080df5d9 +0x01:  mov    %esp,%ebp
080df5db +0x03:  mov    0x8(%ebp),%eax
080df5de +0x06:  mov    0x8(%eax),%eax
080df5e1 +0x09:  pop    %ebp
080df5e2 +0x0a:  ret
080df5e3 +0x0b:  nop
```

## 反编译 C

```c
// GreyImage::getImage @ 0x80df5d8

/* GreyImage::getImage() const */

undefined4 __thiscall GreyImage::getImage(GreyImage *this)

{
  return *(undefined4 *)(this + 8);
}
```
