# Subtract

`_ZN8TaoCrypt11P4Optimized8SubtractEPjPKjS3_j`

`TaoCrypt::P4Optimized::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::P4Optimized` | `0x0875b5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875b5f0  _ZN8TaoCrypt11P4Optimized8SubtractEPjPKjS3_j
#           TaoCrypt::P4Optimized::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875b5f0, 0x0875b615]
0875b5f0 +0x00:  push   %ebp
0875b5f1 +0x01:  mov    %esp,%ebp
0875b5f3 +0x03:  sub    $0x8,%esp
0875b5f6 +0x06:  mov    %esi,(%esp)
0875b5f9 +0x09:  mov    0xc(%ebp),%edx
0875b5fc +0x0c:  mov    %edi,0x4(%esp)
0875b600 +0x10:  mov    0x14(%ebp),%esi
0875b603 +0x13:  mov    0x8(%ebp),%ecx
0875b606 +0x16:  push   %ebx
0875b607 +0x17:  mov    0x10(%ebp),%ebx
0875b60a +0x1a:  push   %ebp
0875b60b +0x1b:  xor    %eax,%eax
0875b60d +0x1d:  neg    %esi
0875b60f +0x1f:  je     0875b655 <loopendSubP4>
0875b611 +0x21:  mov    (%edx),%edi
0875b613 +0x23:  mov    (%ebx),%ebp
0875b615 +0x25:  jmp    0875b628 <carry1SubP4>
```

## 反编译 C

```c
// TaoCrypt::P4Optimized::Subtract @ 0x875b5f0

/* TaoCrypt::P4Optimized::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

void TaoCrypt::P4Optimized::Subtract(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  iVar4 = -param_4;
  if (iVar4 != 0) {
    uVar5 = *param_2;
    uVar3 = *param_3;
    while( true ) {
      *param_1 = uVar5 - uVar3;
      if (uVar5 < uVar3) {
        uVar2 = 1;
      }
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      uVar5 = param_2[1] - uVar2;
      if (uVar2 <= param_2[1]) {
        uVar2 = 0;
      }
      if (uVar5 < *puVar1) {
        uVar2 = 1;
      }
      param_1[1] = uVar5 - *puVar1;
      iVar4 = iVar4 + 2;
      if (iVar4 == 0) break;
      puVar1 = param_2 + 2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      uVar3 = *param_3;
      uVar5 = *puVar1 - uVar2;
      if (uVar2 <= *puVar1) {
        uVar2 = 0;
      }
    }
  }
  return;
}
```
