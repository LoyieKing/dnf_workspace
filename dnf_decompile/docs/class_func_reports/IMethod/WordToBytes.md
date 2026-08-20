# WordToBytes

`_ZN7IMethod11WordToBytesEjPh`

`IMethod::WordToBytes(unsigned int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b4616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b4616  _ZN7IMethod11WordToBytesEjPh
#           IMethod::WordToBytes(unsigned int, unsigned char*)
# range [0x080b4616, 0x080b4657]
080b4616 +0x00:  push   %ebp
080b4617 +0x01:  mov    %esp,%ebp
080b4619 +0x03:  mov    0x8(%ebp),%eax
080b461c +0x06:  shr    $0x18,%eax
080b461f +0x09:  mov    %eax,%edx
080b4621 +0x0b:  mov    0xc(%ebp),%eax
080b4624 +0x0e:  mov    %dl,(%eax)
080b4626 +0x10:  addl   $0x1,0xc(%ebp)
080b462a +0x14:  mov    0x8(%ebp),%eax
080b462d +0x17:  shr    $0x10,%eax
080b4630 +0x1a:  mov    %eax,%edx
080b4632 +0x1c:  mov    0xc(%ebp),%eax
080b4635 +0x1f:  mov    %dl,(%eax)
080b4637 +0x21:  addl   $0x1,0xc(%ebp)
080b463b +0x25:  mov    0x8(%ebp),%eax
080b463e +0x28:  shr    $0x8,%eax
080b4641 +0x2b:  mov    %eax,%edx
080b4643 +0x2d:  mov    0xc(%ebp),%eax
080b4646 +0x30:  mov    %dl,(%eax)
080b4648 +0x32:  addl   $0x1,0xc(%ebp)
080b464c +0x36:  mov    0x8(%ebp),%eax
080b464f +0x39:  mov    %eax,%edx
080b4651 +0x3b:  mov    0xc(%ebp),%eax
080b4654 +0x3e:  mov    %dl,(%eax)
080b4656 +0x40:  pop    %ebp
080b4657 +0x41:  ret
```

## 反编译 C

```c
// IMethod::WordToBytes @ 0x80b4616

/* IMethod::WordToBytes(unsigned int, unsigned char*) */

void IMethod::WordToBytes(uint param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 0x18);
  param_2[1] = (uchar)(param_1 >> 0x10);
  param_2[2] = (uchar)(param_1 >> 8);
  param_2[3] = (uchar)param_1;
  return;
}
```
