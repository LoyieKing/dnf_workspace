# GreyImage

`_ZN9GreyImageC1Ev`

`GreyImage::GreyImage()`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df4e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df4e8  _ZN9GreyImageC1Ev
#           GreyImage::GreyImage()
# range [0x080df4e8, 0x080df509]
080df4e8 +0x00:  push   %ebp
080df4e9 +0x01:  mov    %esp,%ebp
080df4eb +0x03:  mov    0x8(%ebp),%eax
080df4ee +0x06:  movl   $0x0,(%eax)
080df4f4 +0x0c:  mov    0x8(%ebp),%eax
080df4f7 +0x0f:  movl   $0x0,0x4(%eax)
080df4fe +0x16:  mov    0x8(%ebp),%eax
080df501 +0x19:  movl   $0x0,0x8(%eax)
080df508 +0x20:  pop    %ebp
080df509 +0x21:  ret
```

## 反编译 C

```c
// GreyImage::GreyImage @ 0x80df4e8

/* GreyImage::GreyImage() */

void __thiscall GreyImage::GreyImage(GreyImage *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
