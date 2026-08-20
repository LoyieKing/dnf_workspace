# getAlpha

`_ZN9GreyImage8getAlphaEii`

`GreyImage::getAlpha(int, int)`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df5f0  _ZN9GreyImage8getAlphaEii
#           GreyImage::getAlpha(int, int)
# range [0x080df5f0, 0x080df60d]
080df5f0 +0x00:  push   %ebp
080df5f1 +0x01:  mov    %esp,%ebp
080df5f3 +0x03:  mov    0x8(%ebp),%eax
080df5f6 +0x06:  mov    0x8(%eax),%edx
080df5f9 +0x09:  mov    0x8(%ebp),%eax
080df5fc +0x0c:  mov    (%eax),%eax
080df5fe +0x0e:  imul   0x10(%ebp),%eax
080df602 +0x12:  add    0xc(%ebp),%eax
080df605 +0x15:  lea    (%edx,%eax,1),%eax
080df608 +0x18:  movzbl (%eax),%eax
080df60b +0x1b:  pop    %ebp
080df60c +0x1c:  ret
080df60d +0x1d:  nop
```

## 反编译 C

```c
// GreyImage::getAlpha @ 0x80df5f0

/* GreyImage::getAlpha(int, int) */

undefined1 __thiscall GreyImage::getAlpha(GreyImage *this,int param_1,int param_2)

{
  return *(undefined1 *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1);
}
```
