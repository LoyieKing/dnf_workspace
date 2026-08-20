# setAlpha

`_ZN9GreyImage8setAlphaEiih`

`GreyImage::setAlpha(int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df60e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df60e  _ZN9GreyImage8setAlphaEiih
#           GreyImage::setAlpha(int, int, unsigned char)
# range [0x080df60e, 0x080df635]
080df60e +0x00:  push   %ebp
080df60f +0x01:  mov    %esp,%ebp
080df611 +0x03:  sub    $0x4,%esp
080df614 +0x06:  mov    0x14(%ebp),%eax
080df617 +0x09:  mov    %al,-0x4(%ebp)
080df61a +0x0c:  mov    0x8(%ebp),%eax
080df61d +0x0f:  mov    0x8(%eax),%edx
080df620 +0x12:  mov    0x8(%ebp),%eax
080df623 +0x15:  mov    (%eax),%eax
080df625 +0x17:  imul   0x10(%ebp),%eax
080df629 +0x1b:  add    0xc(%ebp),%eax
080df62c +0x1e:  add    %eax,%edx
080df62e +0x20:  movzbl -0x4(%ebp),%eax
080df632 +0x24:  mov    %al,(%edx)
080df634 +0x26:  leave
080df635 +0x27:  ret
```

## 反编译 C

```c
// GreyImage::setAlpha @ 0x80df60e

/* GreyImage::setAlpha(int, int, unsigned char) */

void __thiscall GreyImage::setAlpha(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  *(uchar *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1) = param_3;
  return;
}
```
