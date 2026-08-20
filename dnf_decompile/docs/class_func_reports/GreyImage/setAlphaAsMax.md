# setAlphaAsMax

`_ZN9GreyImage13setAlphaAsMaxEiih`

`GreyImage::setAlphaAsMax(int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df636  _ZN9GreyImage13setAlphaAsMaxEiih
#           GreyImage::setAlphaAsMax(int, int, unsigned char)
# range [0x080df636, 0x080df675]
080df636 +0x00:  push   %ebp
080df637 +0x01:  mov    %esp,%ebp
080df639 +0x03:  sub    $0x38,%esp
080df63c +0x06:  mov    0x14(%ebp),%eax
080df63f +0x09:  mov    %al,-0x1c(%ebp)
080df642 +0x0c:  mov    0x8(%ebp),%eax
080df645 +0x0f:  mov    0x8(%eax),%edx
080df648 +0x12:  mov    0x8(%ebp),%eax
080df64b +0x15:  mov    (%eax),%eax
080df64d +0x17:  imul   0x10(%ebp),%eax
080df651 +0x1b:  add    0xc(%ebp),%eax
080df654 +0x1e:  lea    (%edx,%eax,1),%eax
080df657 +0x21:  mov    %eax,-0xc(%ebp)
080df65a +0x24:  lea    -0x1c(%ebp),%eax
080df65d +0x27:  mov    %eax,0x4(%esp)
080df661 +0x2b:  mov    -0xc(%ebp),%eax
080df664 +0x2e:  mov    %eax,(%esp)
080df667 +0x31:  call   080df9ad <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x1c9>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x1c9
080df66c +0x36:  movzbl (%eax),%edx
080df66f +0x39:  mov    -0xc(%ebp),%eax
080df672 +0x3c:  mov    %dl,(%eax)
080df674 +0x3e:  leave
080df675 +0x3f:  ret
```

## 反编译 C

```c
// GreyImage::setAlphaAsMax @ 0x80df636

/* GreyImage::setAlphaAsMax(int, int, unsigned char) */

void __thiscall GreyImage::setAlphaAsMax(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  uchar *puVar1;
  uchar local_20 [16];
  uchar *local_10;
  
  local_20[0] = param_3;
  local_10 = (uchar *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1);
  puVar1 = std::max<unsigned_char>(local_10,local_20);
  *local_10 = *puVar1;
  return;
}
```
