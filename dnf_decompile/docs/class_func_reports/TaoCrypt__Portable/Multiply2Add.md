# Multiply2Add

`_ZN8TaoCrypt8Portable12Multiply2AddEPjPKjS3_`

`TaoCrypt::Portable::Multiply2Add(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x087596b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087596b0  _ZN8TaoCrypt8Portable12Multiply2AddEPjPKjS3_
#           TaoCrypt::Portable::Multiply2Add(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x087596b0, 0x0875980e]
087596b0 +0x000:  push   %ebp
087596b1 +0x001:  mov    %esp,%ebp
087596b3 +0x003:  push   %edi
087596b4 +0x004:  push   %esi
087596b5 +0x005:  sub    $0x48,%esp
087596b8 +0x008:  mov    0xc(%ebp),%ecx
087596bb +0x00b:  mov    0x10(%ebp),%edi
087596be +0x00e:  mov    0x4(%ecx),%esi
087596c1 +0x011:  mov    %esi,%eax
087596c3 +0x013:  sub    (%ecx),%eax
087596c5 +0x015:  mov    %eax,-0x18(%ebp)
087596c8 +0x018:  mov    (%ecx),%eax
087596ca +0x01a:  sub    %esi,%eax
087596cc +0x01c:  mov    %eax,-0x14(%ebp)
087596cf +0x01f:  mov    0x10(%ebp),%eax
087596d2 +0x022:  mov    0x4(%edi),%edx
087596d5 +0x025:  mov    (%eax),%eax
087596d7 +0x027:  mov    %eax,%edi
087596d9 +0x029:  sub    %edx,%edi
087596db +0x02b:  mov    %edi,-0x10(%ebp)
087596de +0x02e:  mov    %edx,%edi
087596e0 +0x030:  sub    %eax,%edi
087596e2 +0x032:  mov    %edi,-0xc(%ebp)
087596e5 +0x035:  cmp    (%ecx),%esi
087596e7 +0x037:  mov    %eax,-0x48(%ebp)
087596ea +0x03a:  setb   %al
087596ed +0x03d:  cmp    %edx,-0x48(%ebp)
087596f0 +0x040:  movzbl %al,%edi
087596f3 +0x043:  mov    %edi,-0x30(%ebp)
087596f6 +0x046:  setb   %al
087596f9 +0x049:  movzbl %al,%edi
087596fc +0x04c:  mov    -0x30(%ebp),%eax
087596ff +0x04f:  and    %edi,%eax
08759701 +0x051:  xor    $0x1,%edi
08759704 +0x054:  lea    0x2(%eax),%esi
08759707 +0x057:  mov    -0x18(%ebp,%eax,4),%eax
0875970b +0x05b:  mull   -0x18(%ebp,%esi,4)
0875970f +0x05f:  add    -0x30(%ebp),%edi
08759712 +0x062:  movl   $0x0,-0xc(%ebp)
08759719 +0x069:  movl   $0x0,-0x14(%ebp)
08759720 +0x070:  mov    %eax,-0x3c(%ebp)
08759723 +0x073:  mov    -0x48(%ebp),%eax
08759726 +0x076:  mov    -0x18(%ebp,%edi,4),%edi
0875972a +0x07a:  mov    %edx,-0x34(%ebp)
0875972d +0x07d:  mov    %edx,-0x38(%ebp)
08759730 +0x080:  mull   (%ecx)
08759732 +0x082:  mov    %edi,-0x30(%ebp)
08759735 +0x085:  xor    %edi,%edi
08759737 +0x087:  mov    %eax,-0x20(%ebp)
0875973a +0x08a:  mov    %edx,-0x1c(%ebp)
0875973d +0x08d:  mov    %edx,-0x44(%ebp)
08759740 +0x090:  mov    0x8(%ebp),%edx
08759743 +0x093:  mov    %eax,-0x40(%ebp)
08759746 +0x096:  movl   $0x0,-0x24(%ebp)
0875974d +0x09d:  mov    (%edx),%esi
0875974f +0x09f:  add    -0x20(%ebp),%esi
08759752 +0x0a2:  adc    -0x1c(%ebp),%edi
08759755 +0x0a5:  movl   $0x0,-0x1c(%ebp)
0875975c +0x0ac:  mov    %esi,(%edx)
0875975e +0x0ae:  mov    0x10(%ebp),%esi
08759761 +0x0b1:  mov    0x4(%ecx),%ecx
08759764 +0x0b4:  mov    %edi,-0x4c(%ebp)
08759767 +0x0b7:  xor    %edi,%edi
08759769 +0x0b9:  mov    0x4(%esi),%eax
0875976c +0x0bc:  mov    -0x40(%ebp),%esi
0875976f +0x0bf:  mul    %ecx
08759771 +0x0c1:  mov    %eax,-0x28(%ebp)
08759774 +0x0c4:  mov    -0x4c(%ebp),%eax
08759777 +0x0c7:  mov    %edx,-0x2c(%ebp)
0875977a +0x0ca:  xor    %edx,%edx
0875977c +0x0cc:  add    %eax,%esi
0875977e +0x0ce:  adc    %edx,%edi
08759780 +0x0d0:  mov    -0x3c(%ebp),%edx
08759783 +0x0d3:  xor    %ecx,%ecx
08759785 +0x0d5:  add    %edx,%esi
08759787 +0x0d7:  mov    0x8(%ebp),%edx
0875978a +0x0da:  adc    %ecx,%edi
0875978c +0x0dc:  add    -0x28(%ebp),%esi
0875978f +0x0df:  adc    -0x24(%ebp),%edi
08759792 +0x0e2:  mov    0x4(%edx),%eax
08759795 +0x0e5:  xor    %edx,%edx
08759797 +0x0e7:  add    %eax,%esi
08759799 +0x0e9:  mov    0x8(%ebp),%eax
0875979c +0x0ec:  adc    %edx,%edi
0875979e +0x0ee:  mov    -0x2c(%ebp),%edx
087597a1 +0x0f1:  mov    %edi,-0x4c(%ebp)
087597a4 +0x0f4:  xor    %edi,%edi
087597a6 +0x0f6:  mov    %esi,0x4(%eax)
087597a9 +0x0f9:  mov    -0x4c(%ebp),%esi
087597ac +0x0fc:  mov    %edx,-0x20(%ebp)
087597af +0x0ff:  mov    -0x44(%ebp),%edx
087597b2 +0x102:  add    -0x28(%ebp),%esi
087597b5 +0x105:  adc    -0x24(%ebp),%edi
087597b8 +0x108:  xor    %ecx,%ecx
087597ba +0x10a:  mov    0x8(%eax),%eax
087597bd +0x10d:  add    %edx,%esi
087597bf +0x10f:  mov    -0x38(%ebp),%edx
087597c2 +0x112:  adc    %ecx,%edi
087597c4 +0x114:  xor    %ecx,%ecx
087597c6 +0x116:  add    %edx,%esi
087597c8 +0x118:  adc    %ecx,%edi
087597ca +0x11a:  add    -0x20(%ebp),%esi
087597cd +0x11d:  adc    -0x1c(%ebp),%edi
087597d0 +0x120:  xor    %edx,%edx
087597d2 +0x122:  add    %eax,%esi
087597d4 +0x124:  adc    %edx,%edi
087597d6 +0x126:  mov    -0x30(%ebp),%edx
087597d9 +0x129:  xor    %ecx,%ecx
087597db +0x12b:  sub    %edx,%esi
087597dd +0x12d:  sbb    %ecx,%edi
087597df +0x12f:  mov    %edi,-0x4c(%ebp)
087597e2 +0x132:  mov    0x8(%ebp),%eax
087597e5 +0x135:  xor    %edi,%edi
087597e7 +0x137:  mov    %esi,0x8(%eax)
087597ea +0x13a:  mov    -0x4c(%ebp),%esi
087597ed +0x13d:  mov    0xc(%eax),%eax
087597f0 +0x140:  add    -0x20(%ebp),%esi
087597f3 +0x143:  adc    -0x1c(%ebp),%edi
087597f6 +0x146:  xor    %edx,%edx
087597f8 +0x148:  add    %eax,%esi
087597fa +0x14a:  mov    0x8(%ebp),%eax
087597fd +0x14d:  adc    %edx,%edi
087597ff +0x14f:  mov    %edi,-0x4c(%ebp)
08759802 +0x152:  mov    %esi,0xc(%eax)
08759805 +0x155:  add    $0x48,%esp
08759808 +0x158:  mov    %edi,%eax
0875980a +0x15a:  pop    %esi
0875980b +0x15b:  pop    %edi
0875980c +0x15c:  pop    %ebp
0875980d +0x15d:  ret
0875980e +0x15e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply2Add @ 0x87596b0

/* TaoCrypt::Portable::Multiply2Add(unsigned int*, unsigned int const*, unsigned int const*) */

char TaoCrypt::Portable::Multiply2Add(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
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
  uint local_1c [4];
  
  uVar1 = param_2[1];
  local_1c[0] = uVar1 - *param_2;
  local_1c[1] = *param_2 - uVar1;
  uVar4 = param_3[1];
  uVar6 = *param_3;
  local_1c[2] = uVar6 - uVar4;
  local_1c[3] = uVar4 - uVar6;
  uVar3 = (uint)(uVar1 < *param_2 && uVar6 < uVar4);
  uVar5 = (uint)((ulonglong)local_1c[uVar3] * (ulonglong)local_1c[uVar3 + 2] >> 0x20);
  uVar3 = (uint)((ulonglong)local_1c[uVar3] * (ulonglong)local_1c[uVar3 + 2]);
  local_1c[3] = 0;
  local_1c[1] = 0;
  uVar1 = local_1c[(uVar6 < uVar4 ^ 1) + (uint)(uVar1 < *param_2)];
  lVar2 = (ulonglong)uVar6 * (ulonglong)*param_2;
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uint)(lVar2 + (ulonglong)*param_1 >> 0x20);
  *param_1 = (uint)(lVar2 + (ulonglong)*param_1);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar8 = (uint)lVar2 + uVar11;
  uVar9 = uVar8 + uVar3;
  uVar10 = uVar9 + uVar4;
  uVar12 = (uint)CARRY4((uint)lVar2,uVar11) + (uint)CARRY4(uVar8,uVar3) + (uint)CARRY4(uVar9,uVar4)
           + (uint)CARRY4(uVar10,param_1[1]);
  param_1[1] = uVar10 + param_1[1];
  uVar3 = uVar12 + uVar4;
  uVar8 = uVar3 + uVar6;
  uVar9 = uVar8 + uVar5;
  uVar10 = uVar9 + uVar7;
  uVar11 = uVar10 + param_1[2];
  uVar6 = ((uint)CARRY4(uVar12,uVar4) + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar8,uVar5) +
           (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar10,param_1[2])) - (uint)(uVar11 < uVar1);
  param_1[2] = uVar11 - uVar1;
  uVar1 = param_1[3];
  uVar4 = uVar6 + uVar7;
  param_1[3] = uVar4 + uVar1;
  return CARRY4(uVar6,uVar7) + CARRY4(uVar4,uVar1);
}
```
