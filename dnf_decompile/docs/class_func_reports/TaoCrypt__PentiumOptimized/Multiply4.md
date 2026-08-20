# Multiply4

`_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_`

`TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PentiumOptimized` | `0x0875b670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875b670  _ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_
#           TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x0875b670, 0x0875b7af]
0875b670 +0x000:  push   %ebp
0875b671 +0x001:  mov    %esp,%ebp
0875b673 +0x003:  sub    $0x8,%esp
0875b676 +0x006:  mov    %esi,(%esp)
0875b679 +0x009:  mov    0x10(%ebp),%ecx
0875b67c +0x00c:  mov    %edi,0x4(%esp)
0875b680 +0x010:  mov    0xc(%ebp),%esi
0875b683 +0x013:  push   %ebx
0875b684 +0x014:  push   %ebp
0875b685 +0x015:  push   0x8(%ebp)
0875b688 +0x018:  xor    %ebp,%ebp
0875b68a +0x01a:  xor    %edi,%edi
0875b68c +0x01c:  xor    %ebx,%ebx
0875b68e +0x01e:  mov    (%ecx),%eax
0875b690 +0x020:  mull   (%esi)
0875b692 +0x022:  add    %eax,%ebp
0875b694 +0x024:  adc    %edx,%edi
0875b696 +0x026:  adc    %bh,%bl
0875b698 +0x028:  mov    %edi,%edx
0875b69a +0x02a:  mov    (%esp),%edi
0875b69d +0x02d:  mov    %ebp,(%edi)
0875b69f +0x02f:  mov    %edx,%ebp
0875b6a1 +0x031:  mov    %ebx,%edi
0875b6a3 +0x033:  xor    %ebx,%ebx
0875b6a5 +0x035:  mov    (%ecx),%eax
0875b6a7 +0x037:  mull   0x4(%esi)
0875b6aa +0x03a:  add    %eax,%ebp
0875b6ac +0x03c:  adc    %edx,%edi
0875b6ae +0x03e:  adc    %bh,%bl
0875b6b0 +0x040:  mov    0x4(%ecx),%eax
0875b6b3 +0x043:  mull   (%esi)
0875b6b5 +0x045:  add    %eax,%ebp
0875b6b7 +0x047:  adc    %edx,%edi
0875b6b9 +0x049:  adc    %bh,%bl
0875b6bb +0x04b:  mov    %edi,%edx
0875b6bd +0x04d:  mov    (%esp),%edi
0875b6c0 +0x050:  mov    %ebp,0x4(%edi)
0875b6c3 +0x053:  mov    %edx,%ebp
0875b6c5 +0x055:  mov    %ebx,%edi
0875b6c7 +0x057:  xor    %ebx,%ebx
0875b6c9 +0x059:  mov    (%ecx),%eax
0875b6cb +0x05b:  mull   0x8(%esi)
0875b6ce +0x05e:  add    %eax,%ebp
0875b6d0 +0x060:  adc    %edx,%edi
0875b6d2 +0x062:  adc    %bh,%bl
0875b6d4 +0x064:  mov    0x4(%ecx),%eax
0875b6d7 +0x067:  mull   0x4(%esi)
0875b6da +0x06a:  add    %eax,%ebp
0875b6dc +0x06c:  adc    %edx,%edi
0875b6de +0x06e:  adc    %bh,%bl
0875b6e0 +0x070:  mov    0x8(%ecx),%eax
0875b6e3 +0x073:  mull   (%esi)
0875b6e5 +0x075:  add    %eax,%ebp
0875b6e7 +0x077:  adc    %edx,%edi
0875b6e9 +0x079:  adc    %bh,%bl
0875b6eb +0x07b:  mov    %edi,%edx
0875b6ed +0x07d:  mov    (%esp),%edi
0875b6f0 +0x080:  mov    %ebp,0x8(%edi)
0875b6f3 +0x083:  mov    %edx,%ebp
0875b6f5 +0x085:  mov    %ebx,%edi
0875b6f7 +0x087:  xor    %ebx,%ebx
0875b6f9 +0x089:  mov    (%ecx),%eax
0875b6fb +0x08b:  mull   0xc(%esi)
0875b6fe +0x08e:  add    %eax,%ebp
0875b700 +0x090:  adc    %edx,%edi
0875b702 +0x092:  adc    %bh,%bl
0875b704 +0x094:  mov    0x4(%ecx),%eax
0875b707 +0x097:  mull   0x8(%esi)
0875b70a +0x09a:  add    %eax,%ebp
0875b70c +0x09c:  adc    %edx,%edi
0875b70e +0x09e:  adc    %bh,%bl
0875b710 +0x0a0:  mov    0x8(%ecx),%eax
0875b713 +0x0a3:  mull   0x4(%esi)
0875b716 +0x0a6:  add    %eax,%ebp
0875b718 +0x0a8:  adc    %edx,%edi
0875b71a +0x0aa:  adc    %bh,%bl
0875b71c +0x0ac:  mov    0xc(%ecx),%eax
0875b71f +0x0af:  mull   (%esi)
0875b721 +0x0b1:  add    %eax,%ebp
0875b723 +0x0b3:  adc    %edx,%edi
0875b725 +0x0b5:  adc    %bh,%bl
0875b727 +0x0b7:  mov    %edi,%edx
0875b729 +0x0b9:  mov    (%esp),%edi
0875b72c +0x0bc:  mov    %ebp,0xc(%edi)
0875b72f +0x0bf:  mov    %edx,%ebp
0875b731 +0x0c1:  mov    %ebx,%edi
0875b733 +0x0c3:  xor    %ebx,%ebx
0875b735 +0x0c5:  mov    0x4(%ecx),%eax
0875b738 +0x0c8:  mull   0xc(%esi)
0875b73b +0x0cb:  add    %eax,%ebp
0875b73d +0x0cd:  adc    %edx,%edi
0875b73f +0x0cf:  adc    %bh,%bl
0875b741 +0x0d1:  mov    0x8(%ecx),%eax
0875b744 +0x0d4:  mull   0x8(%esi)
0875b747 +0x0d7:  add    %eax,%ebp
0875b749 +0x0d9:  adc    %edx,%edi
0875b74b +0x0db:  adc    %bh,%bl
0875b74d +0x0dd:  mov    0xc(%ecx),%eax
0875b750 +0x0e0:  mull   0x4(%esi)
0875b753 +0x0e3:  add    %eax,%ebp
0875b755 +0x0e5:  adc    %edx,%edi
0875b757 +0x0e7:  adc    %bh,%bl
0875b759 +0x0e9:  mov    %edi,%edx
0875b75b +0x0eb:  mov    (%esp),%edi
0875b75e +0x0ee:  mov    %ebp,0x10(%edi)
0875b761 +0x0f1:  mov    %edx,%ebp
0875b763 +0x0f3:  mov    %ebx,%edi
0875b765 +0x0f5:  xor    %ebx,%ebx
0875b767 +0x0f7:  mov    0x8(%ecx),%eax
0875b76a +0x0fa:  mull   0xc(%esi)
0875b76d +0x0fd:  add    %eax,%ebp
0875b76f +0x0ff:  adc    %edx,%edi
0875b771 +0x101:  adc    %bh,%bl
0875b773 +0x103:  mov    0xc(%ecx),%eax
0875b776 +0x106:  mull   0x8(%esi)
0875b779 +0x109:  add    %eax,%ebp
0875b77b +0x10b:  adc    %edx,%edi
0875b77d +0x10d:  adc    %bh,%bl
0875b77f +0x10f:  mov    %edi,%edx
0875b781 +0x111:  mov    (%esp),%edi
0875b784 +0x114:  mov    %ebp,0x14(%edi)
0875b787 +0x117:  mov    %edx,%ebp
0875b789 +0x119:  mov    %ebx,%edi
0875b78b +0x11b:  xor    %ebx,%ebx
0875b78d +0x11d:  mov    0xc(%ecx),%eax
0875b790 +0x120:  mull   0xc(%esi)
0875b793 +0x123:  add    %eax,%ebp
0875b795 +0x125:  adc    %edi,%edx
0875b797 +0x127:  mov    (%esp),%edi
0875b79a +0x12a:  mov    %ebp,0x18(%edi)
0875b79d +0x12d:  mov    %edx,0x1c(%edi)
0875b7a0 +0x130:  add    $0x4,%esp
0875b7a3 +0x133:  pop    %ebp
0875b7a4 +0x134:  pop    %ebx
0875b7a5 +0x135:  mov    (%esp),%esi
0875b7a8 +0x138:  mov    0x4(%esp),%edi
0875b7ac +0x13c:  mov    %ebp,%esp
0875b7ae +0x13e:  pop    %ebp
0875b7af +0x13f:  ret
```

## 反编译 C

```c
// TaoCrypt::PentiumOptimized::Multiply4 @ 0x875b670

/* TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::PentiumOptimized::Multiply4(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar10 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar8 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar8 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                       (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                      (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[4] = uVar12 + uVar13;
  uVar11 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar14 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar3 = uVar8 + uVar11;
  uVar9 = uVar3 + uVar4;
  uVar13 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar5 = (uint)CARRY4(uVar14,uVar7);
  uVar6 = uVar9 + uVar13;
  param_1[5] = uVar14 + uVar7;
  *(ulonglong *)(param_1 + 6) =
       (ulonglong)param_3[3] * (ulonglong)param_2[3] +
       (ulonglong)
       CONCAT14((CARRY4(uVar8,uVar11) || CARRY4(uVar3,uVar4)) +
                (CARRY4(uVar9,uVar13) || CARRY4(uVar6,uVar5)),uVar6 + uVar5);
  return;
}
```
