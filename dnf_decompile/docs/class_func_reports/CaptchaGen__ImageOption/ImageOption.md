# ImageOption

`_ZN10CaptchaGen11ImageOptionC1Ev`

`CaptchaGen::ImageOption::ImageOption()`

| 类 | 地址 |
|---|---|
| `CaptchaGen::ImageOption` | `0x080de988` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de988  _ZN10CaptchaGen11ImageOptionC1Ev
#           CaptchaGen::ImageOption::ImageOption()
# range [0x080de988, 0x080dea16]
080de988 +0x00:  push   %ebp
080de989 +0x01:  mov    %esp,%ebp
080de98b +0x03:  mov    0x8(%ebp),%eax
080de98e +0x06:  movl   $0x64,(%eax)
080de994 +0x0c:  mov    0x8(%ebp),%eax
080de997 +0x0f:  movl   $0x3,0x4(%eax)
080de99e +0x16:  mov    0x8(%ebp),%eax
080de9a1 +0x19:  movl   $0x2,0x8(%eax)
080de9a8 +0x20:  mov    0x8(%ebp),%eax
080de9ab +0x23:  mov    $0x3f4ccccd,%edx
080de9b0 +0x28:  mov    %edx,0xc(%eax)
080de9b3 +0x2b:  mov    0x8(%ebp),%eax
080de9b6 +0x2e:  mov    $0x3fa66666,%edx
080de9bb +0x33:  mov    %edx,0x10(%eax)
080de9be +0x36:  mov    0x8(%ebp),%eax
080de9c1 +0x39:  mov    $0x0,%edx
080de9c6 +0x3e:  mov    %edx,0x14(%eax)
080de9c9 +0x41:  mov    0x8(%ebp),%eax
080de9cc +0x44:  mov    $0x3f000000,%edx
080de9d1 +0x49:  mov    %edx,0x18(%eax)
080de9d4 +0x4c:  mov    0x8(%ebp),%eax
080de9d7 +0x4f:  movl   $0x8,0x1c(%eax)
080de9de +0x56:  mov    0x8(%ebp),%eax
080de9e1 +0x59:  mov    $0x3f666666,%edx
080de9e6 +0x5e:  mov    %edx,0x20(%eax)
080de9e9 +0x61:  mov    0x8(%ebp),%eax
080de9ec +0x64:  mov    $0x3dcccccd,%edx
080de9f1 +0x69:  mov    %edx,0x24(%eax)
080de9f4 +0x6c:  mov    0x8(%ebp),%eax
080de9f7 +0x6f:  mov    $0x3df5c28f,%edx
080de9fc +0x74:  mov    %edx,0x28(%eax)
080de9ff +0x77:  mov    0x8(%ebp),%eax
080dea02 +0x7a:  mov    $0x40000000,%edx
080dea07 +0x7f:  mov    %edx,0x2c(%eax)
080dea0a +0x82:  mov    0x8(%ebp),%eax
080dea0d +0x85:  mov    $0x40200000,%edx
080dea12 +0x8a:  mov    %edx,0x30(%eax)
080dea15 +0x8d:  pop    %ebp
080dea16 +0x8e:  ret
```

## 反编译 C

```c
// CaptchaGen::ImageOption::ImageOption @ 0x80de988

/* CaptchaGen::ImageOption::ImageOption() */

void __thiscall CaptchaGen::ImageOption::ImageOption(ImageOption *this)

{
  *(undefined4 *)this = 100;
  *(undefined4 *)(this + 4) = 3;
  *(undefined4 *)(this + 8) = 2;
  *(undefined4 *)(this + 0xc) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x10) = 0x3fa66666;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f000000;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x20) = 0x3f666666;
  *(undefined4 *)(this + 0x24) = 0x3dcccccd;
  *(undefined4 *)(this + 0x28) = 0x3df5c28f;
  *(undefined4 *)(this + 0x2c) = 0x40000000;
  *(undefined4 *)(this + 0x30) = 0x40200000;
  return;
}
```
