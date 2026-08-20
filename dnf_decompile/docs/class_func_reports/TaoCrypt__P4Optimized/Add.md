# Add

`_ZN8TaoCrypt11P4Optimized3AddEPjPKjS3_j`

`TaoCrypt::P4Optimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::P4Optimized` | `0x0875b570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875b570  _ZN8TaoCrypt11P4Optimized3AddEPjPKjS3_j
#           TaoCrypt::P4Optimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875b570, 0x0875b595]
0875b570 +0x00:  push   %ebp
0875b571 +0x01:  mov    %esp,%ebp
0875b573 +0x03:  sub    $0x8,%esp
0875b576 +0x06:  mov    %esi,(%esp)
0875b579 +0x09:  mov    0xc(%ebp),%edx
0875b57c +0x0c:  mov    %edi,0x4(%esp)
0875b580 +0x10:  mov    0x14(%ebp),%esi
0875b583 +0x13:  mov    0x8(%ebp),%ecx
0875b586 +0x16:  push   %ebx
0875b587 +0x17:  mov    0x10(%ebp),%ebx
0875b58a +0x1a:  push   %ebp
0875b58b +0x1b:  xor    %eax,%eax
0875b58d +0x1d:  neg    %esi
0875b58f +0x1f:  je     0875b5d5 <loopendAddP4>
0875b591 +0x21:  mov    (%edx),%edi
0875b593 +0x23:  mov    (%ebx),%ebp
0875b595 +0x25:  jmp    0875b5a8 <carry1AddP4>
```

## 反编译 C

```c
// TaoCrypt::P4Optimized::Add @ 0x875b570

/* TaoCrypt::P4Optimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
    */

void TaoCrypt::P4Optimized::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
      *param_1 = uVar5 + uVar3;
      if (CARRY4(uVar5,uVar3)) {
        uVar2 = 1;
      }
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      uVar5 = param_2[1] + uVar2;
      if (!CARRY4(param_2[1],uVar2)) {
        uVar2 = 0;
      }
      if (CARRY4(uVar5,*puVar1)) {
        uVar2 = 1;
      }
      param_1[1] = uVar5 + *puVar1;
      iVar4 = iVar4 + 2;
      if (iVar4 == 0) break;
      puVar1 = param_2 + 2;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = *param_3;
      uVar5 = *puVar1 + uVar2;
      if (!CARRY4(*puVar1,uVar2)) {
        uVar2 = 0;
      }
    }
  }
  return;
}
```
