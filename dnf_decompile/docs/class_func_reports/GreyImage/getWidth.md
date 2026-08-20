# getWidth

`_ZNK9GreyImage8getWidthEv`

`GreyImage::getWidth() const`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df5c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df5c2  _ZNK9GreyImage8getWidthEv
#           GreyImage::getWidth() const
# range [0x080df5c2, 0x080df5cb]
080df5c2 +0x00:  push   %ebp
080df5c3 +0x01:  mov    %esp,%ebp
080df5c5 +0x03:  mov    0x8(%ebp),%eax
080df5c8 +0x06:  mov    (%eax),%eax
080df5ca +0x08:  pop    %ebp
080df5cb +0x09:  ret
```

## 反编译 C

```c
// GreyImage::getWidth @ 0x80df5c2

/* GreyImage::getWidth() const */

undefined4 __thiscall GreyImage::getWidth(GreyImage *this)

{
  return *(undefined4 *)this;
}
```
