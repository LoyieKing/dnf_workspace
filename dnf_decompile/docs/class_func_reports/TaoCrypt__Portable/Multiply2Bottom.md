# Multiply2Bottom

`_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_`

`TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759660  _ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_
#           TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x08759660, 0x087596a9]
08759660 +0x00:  push   %ebp
08759661 +0x01:  mov    %esp,%ebp
08759663 +0x03:  sub    $0x10,%esp
08759666 +0x06:  mov    %edi,-0x4(%ebp)
08759669 +0x09:  mov    0xc(%ebp),%eax
0875966c +0x0c:  mov    0x10(%ebp),%edi
0875966f +0x0f:  mov    %esi,-0x8(%ebp)
08759672 +0x12:  mov    0x8(%ebp),%ecx
08759675 +0x15:  mov    (%eax),%esi
08759677 +0x17:  mov    (%edi),%eax
08759679 +0x19:  mul    %esi
0875967b +0x1b:  mov    %edx,%esi
0875967d +0x1d:  mov    0xc(%ebp),%edx
08759680 +0x20:  mov    %eax,(%ecx)
08759682 +0x22:  mov    %edi,%eax
08759684 +0x24:  mov    (%edi),%edi
08759686 +0x26:  imul   0x4(%edx),%edi
0875968a +0x2a:  mov    0x4(%eax),%edx
0875968d +0x2d:  lea    (%edi,%esi,1),%esi
08759690 +0x30:  mov    0xc(%ebp),%edi
08759693 +0x33:  imul   (%edi),%edx
08759696 +0x36:  lea    (%esi,%edx,1),%edx
08759699 +0x39:  mov    %edx,0x4(%ecx)
0875969c +0x3c:  mov    -0x8(%ebp),%esi
0875969f +0x3f:  mov    -0x4(%ebp),%edi
087596a2 +0x42:  mov    %ebp,%esp
087596a4 +0x44:  pop    %ebp
087596a5 +0x45:  ret
087596a6 +0x46:  lea    0x0(%esi),%esi
087596a9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply2Bottom @ 0x8759660

/* TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply2Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  param_1[1] = *param_3 * param_2[1] + (int)((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20) +
               param_3[1] * *param_2;
  return;
}
```
