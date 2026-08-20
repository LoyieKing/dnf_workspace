# ~GreyImage

`_ZN9GreyImageD1Ev`

`GreyImage::~GreyImage()`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df50a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df50a  _ZN9GreyImageD1Ev
#           GreyImage::~GreyImage()
# range [0x080df50a, 0x080df51d]
080df50a +0x00:  push   %ebp
080df50b +0x01:  mov    %esp,%ebp
080df50d +0x03:  sub    $0x18,%esp
080df510 +0x06:  mov    0x8(%ebp),%eax
080df513 +0x09:  mov    %eax,(%esp)
080df516 +0x0c:  call   080df582 <_ZN9GreyImage5resetEv>  ; GreyImage::reset()
080df51b +0x11:  leave
080df51c +0x12:  ret
080df51d +0x13:  nop
```

## 反编译 C

```c
// GreyImage::~GreyImage @ 0x80df50a

/* GreyImage::~GreyImage() */

void __thiscall GreyImage::~GreyImage(GreyImage *this)

{
  reset(this);
  return;
}
```
