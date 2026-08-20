# Square2

`_ZN8TaoCrypt8Portable7Square2EPjPKj`

`TaoCrypt::Portable::Square2(unsigned int*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759b90  _ZN8TaoCrypt8Portable7Square2EPjPKj
#           TaoCrypt::Portable::Square2(unsigned int*, unsigned int const*)
# range [0x08759b90, 0x08759c2c]
08759b90 +0x00:  push   %ebp
08759b91 +0x01:  mov    %esp,%ebp
08759b93 +0x03:  push   %edi
08759b94 +0x04:  push   %esi
08759b95 +0x05:  sub    $0x20,%esp
08759b98 +0x08:  mov    0xc(%ebp),%eax
08759b9b +0x0b:  mov    0x8(%ebp),%ecx
08759b9e +0x0e:  mov    0xc(%ebp),%edi
08759ba1 +0x11:  movl   $0x0,-0xc(%ebp)
08759ba8 +0x18:  mov    (%eax),%esi
08759baa +0x1a:  mov    %esi,%eax
08759bac +0x1c:  mul    %esi
08759bae +0x1e:  mov    %edx,%esi
08759bb0 +0x20:  mov    0xc(%ebp),%edx
08759bb3 +0x23:  mov    %eax,(%ecx)
08759bb5 +0x25:  mov    (%edx),%edx
08759bb7 +0x27:  mov    %edx,%eax
08759bb9 +0x29:  mull   0x4(%edi)
08759bbc +0x2c:  xor    %edi,%edi
08759bbe +0x2e:  add    %eax,%esi
08759bc0 +0x30:  adc    %edx,%edi
08759bc2 +0x32:  mov    %eax,-0x18(%ebp)
08759bc5 +0x35:  mov    %edx,-0x14(%ebp)
08759bc8 +0x38:  mov    %edi,%edx
08759bca +0x3a:  xor    %edi,%edi
08759bcc +0x3c:  add    -0x18(%ebp),%esi
08759bcf +0x3f:  adc    -0x14(%ebp),%edi
08759bd2 +0x42:  mov    %edx,-0x18(%ebp)
08759bd5 +0x45:  mov    -0x18(%ebp),%eax
08759bd8 +0x48:  movl   $0x0,-0x14(%ebp)
08759bdf +0x4f:  mov    -0x14(%ebp),%edx
08759be2 +0x52:  mov    %edi,-0x10(%ebp)
08759be5 +0x55:  add    %eax,-0x10(%ebp)
08759be8 +0x58:  adc    %edx,-0xc(%ebp)
08759beb +0x5b:  mov    -0xc(%ebp),%eax
08759bee +0x5e:  mov    %esi,0x4(%ecx)
08759bf1 +0x61:  mov    -0x10(%ebp),%edx
08759bf4 +0x64:  mov    %eax,-0x18(%ebp)
08759bf7 +0x67:  mov    0xc(%ebp),%eax
08759bfa +0x6a:  mov    %edx,-0x1c(%ebp)
08759bfd +0x6d:  mov    0x4(%eax),%esi
08759c00 +0x70:  mov    %esi,%eax
08759c02 +0x72:  mul    %esi
08759c04 +0x74:  mov    %eax,-0x10(%ebp)
08759c07 +0x77:  mov    -0x1c(%ebp),%eax
08759c0a +0x7a:  mov    %edx,-0xc(%ebp)
08759c0d +0x7d:  xor    %edx,%edx
08759c0f +0x7f:  add    %eax,-0x10(%ebp)
08759c12 +0x82:  adc    %edx,-0xc(%ebp)
08759c15 +0x85:  mov    -0xc(%ebp),%eax
08759c18 +0x88:  mov    -0x10(%ebp),%edx
08759c1b +0x8b:  add    -0x18(%ebp),%eax
08759c1e +0x8e:  mov    %edx,0x8(%ecx)
08759c21 +0x91:  mov    %eax,0xc(%ecx)
08759c24 +0x94:  add    $0x20,%esp
08759c27 +0x97:  pop    %esi
08759c28 +0x98:  pop    %edi
08759c29 +0x99:  pop    %ebp
08759c2a +0x9a:  ret
08759c2b +0x9b:  nop
08759c2c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Portable::Square2 @ 0x8759b90

/* TaoCrypt::Portable::Square2(unsigned int*, unsigned int const*) */

void TaoCrypt::Portable::Square2(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (uint)uVar1;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[1] + (uVar1 >> 0x20);
  uVar3 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[1] + (ulonglong)(uVar4 + uVar3);
  param_1[2] = (uint)lVar2;
  param_1[3] = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar4,uVar3);
  return;
}
```
