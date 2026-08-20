# getImage

`_ZN9GreyImage8getImageEv`

`GreyImage::getImage()`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df5e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df5e4  _ZN9GreyImage8getImageEv
#           GreyImage::getImage()
# range [0x080df5e4, 0x080df5ef]
080df5e4 +0x00:  push   %ebp
080df5e5 +0x01:  mov    %esp,%ebp
080df5e7 +0x03:  mov    0x8(%ebp),%eax
080df5ea +0x06:  mov    0x8(%eax),%eax
080df5ed +0x09:  pop    %ebp
080df5ee +0x0a:  ret
080df5ef +0x0b:  nop
```

## 反编译 C

```c
// GreyImage::getImage @ 0x80df5e4

/* GreyImage::getImage() */

undefined4 __thiscall GreyImage::getImage(GreyImage *this)

{
  return *(undefined4 *)(this + 8);
}
```
