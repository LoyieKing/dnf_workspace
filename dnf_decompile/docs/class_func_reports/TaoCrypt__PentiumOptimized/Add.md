# Add

`_ZN8TaoCrypt16PentiumOptimized3AddEPjPKjS3_j`

`TaoCrypt::PentiumOptimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PentiumOptimized` | `0x0875b4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875b4b0  _ZN8TaoCrypt16PentiumOptimized3AddEPjPKjS3_j
#           TaoCrypt::PentiumOptimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875b4b0, 0x0875b4d6]
0875b4b0 +0x00:  push   %ebp
0875b4b1 +0x01:  mov    %esp,%ebp
0875b4b3 +0x03:  sub    $0x8,%esp
0875b4b6 +0x06:  mov    %esi,(%esp)
0875b4b9 +0x09:  mov    0xc(%ebp),%edx
0875b4bc +0x0c:  mov    %edi,0x4(%esp)
0875b4c0 +0x10:  mov    0x14(%ebp),%esi
0875b4c3 +0x13:  mov    0x8(%ebp),%ecx
0875b4c6 +0x16:  push   %ebx
0875b4c7 +0x17:  mov    0x10(%ebp),%ebx
0875b4ca +0x1a:  push   %ebp
0875b4cb +0x1b:  sub    %edx,%ecx
0875b4cd +0x1d:  xor    %eax,%eax
0875b4cf +0x1f:  sub    %esi,%eax
0875b4d1 +0x21:  lea    (%ebx,%esi,4),%ebx
0875b4d4 +0x24:  sar    %eax
0875b4d6 +0x26:  je     0875b4f6 <loopendAdd>
```

## 反编译 C

```c
// TaoCrypt::PentiumOptimized::Add @ 0x875b4b0

/* TaoCrypt::PentiumOptimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

bool TaoCrypt::PentiumOptimized::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = (-param_4 & 1) != 0;
  puVar5 = param_2;
  for (iVar6 = (int)-param_4 >> 1; iVar6 != 0; iVar6 = iVar6 + 1) {
    uVar1 = (uint)bVar7;
    uVar3 = *puVar5 + param_3[param_4 + iVar6 * 2];
    uVar2 = (uint)(CARRY4(*puVar5,param_3[param_4 + iVar6 * 2]) || CARRY4(uVar3,uVar1));
    uVar4 = puVar5[1] + param_3[param_4 + iVar6 * 2 + 1];
    bVar7 = CARRY4(puVar5[1],param_3[param_4 + iVar6 * 2 + 1]) || CARRY4(uVar4,uVar2);
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2)) = uVar3 + uVar1;
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2) + 4) = uVar4 + uVar2;
    puVar5 = puVar5 + 2;
  }
  return bVar7;
}
```
