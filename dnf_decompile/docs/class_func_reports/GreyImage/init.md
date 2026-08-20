# init

`_ZN9GreyImage4initEiih`

`GreyImage::init(int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df51e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df51e  _ZN9GreyImage4initEiih
#           GreyImage::init(int, int, unsigned char)
# range [0x080df51e, 0x080df581]
080df51e +0x00:  push   %ebp
080df51f +0x01:  mov    %esp,%ebp
080df521 +0x03:  sub    $0x28,%esp
080df524 +0x06:  mov    0x14(%ebp),%eax
080df527 +0x09:  mov    %al,-0xc(%ebp)
080df52a +0x0c:  mov    0x8(%ebp),%eax
080df52d +0x0f:  mov    %eax,(%esp)
080df530 +0x12:  call   080df582 <_ZN9GreyImage5resetEv>  ; GreyImage::reset()
080df535 +0x17:  mov    0x8(%ebp),%eax
080df538 +0x1a:  mov    0xc(%ebp),%edx
080df53b +0x1d:  mov    %edx,(%eax)
080df53d +0x1f:  mov    0x8(%ebp),%eax
080df540 +0x22:  mov    0x10(%ebp),%edx
080df543 +0x25:  mov    %edx,0x4(%eax)
080df546 +0x28:  mov    0xc(%ebp),%eax
080df549 +0x2b:  imul   0x10(%ebp),%eax
080df54d +0x2f:  mov    %eax,(%esp)
080df550 +0x32:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
080df555 +0x37:  mov    %eax,%edx
080df557 +0x39:  mov    0x8(%ebp),%eax
080df55a +0x3c:  mov    %edx,0x8(%eax)
080df55d +0x3f:  mov    0xc(%ebp),%eax
080df560 +0x42:  imul   0x10(%ebp),%eax
080df564 +0x46:  mov    %eax,%ecx
080df566 +0x48:  movzbl -0xc(%ebp),%edx
080df56a +0x4c:  mov    0x8(%ebp),%eax
080df56d +0x4f:  mov    0x8(%eax),%eax
080df570 +0x52:  mov    %ecx,0x8(%esp)
080df574 +0x56:  mov    %edx,0x4(%esp)
080df578 +0x5a:  mov    %eax,(%esp)
080df57b +0x5d:  call   0807dcc0 <_init+0x5b8>
080df580 +0x62:  leave
080df581 +0x63:  ret
```

## 反编译 C

```c
// GreyImage::init @ 0x80df51e

/* GreyImage::init(int, int, unsigned char) */

void __thiscall GreyImage::init(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  void *pvVar1;
  
  reset(this);
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  pvVar1 = operator_new__(param_1 * param_2);
  *(void **)(this + 8) = pvVar1;
  memset(*(void **)(this + 8),(uint)param_3,param_1 * param_2);
  return;
}
```
