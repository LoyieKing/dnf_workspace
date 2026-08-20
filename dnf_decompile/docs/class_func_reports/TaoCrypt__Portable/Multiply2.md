# Multiply2

`_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_`

`TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759530  _ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_
#           TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x08759530, 0x0875965a]
08759530 +0x000:  push   %ebp
08759531 +0x001:  mov    %esp,%ebp
08759533 +0x003:  push   %edi
08759534 +0x004:  push   %esi
08759535 +0x005:  sub    $0x48,%esp
08759538 +0x008:  mov    0xc(%ebp),%eax
0875953b +0x00b:  mov    0x4(%eax),%ecx
0875953e +0x00e:  mov    (%eax),%edx
08759540 +0x010:  mov    0x10(%ebp),%eax
08759543 +0x013:  mov    %ecx,%esi
08759545 +0x015:  sub    %edx,%esi
08759547 +0x017:  mov    %esi,-0x18(%ebp)
0875954a +0x01a:  mov    %edx,%esi
0875954c +0x01c:  sub    %ecx,%esi
0875954e +0x01e:  mov    %esi,-0x14(%ebp)
08759551 +0x021:  mov    0x10(%ebp),%esi
08759554 +0x024:  mov    %edx,-0x50(%ebp)
08759557 +0x027:  mov    (%esi),%esi
08759559 +0x029:  mov    %esi,-0x4c(%ebp)
0875955c +0x02c:  mov    0x4(%eax),%esi
0875955f +0x02f:  mov    -0x4c(%ebp),%edi
08759562 +0x032:  sub    %esi,%edi
08759564 +0x034:  mov    %edi,-0x10(%ebp)
08759567 +0x037:  mov    %esi,%edi
08759569 +0x039:  sub    -0x4c(%ebp),%edi
0875956c +0x03c:  cmp    %edx,%ecx
0875956e +0x03e:  setb   %cl
08759571 +0x041:  movzbl %cl,%ecx
08759574 +0x044:  mov    %ecx,-0x2c(%ebp)
08759577 +0x047:  xor    %ecx,%ecx
08759579 +0x049:  cmp    %esi,-0x4c(%ebp)
0875957c +0x04c:  mov    -0x2c(%ebp),%esi
0875957f +0x04f:  mov    %edi,-0xc(%ebp)
08759582 +0x052:  setb   %cl
08759585 +0x055:  and    %ecx,%esi
08759587 +0x057:  xor    $0x1,%ecx
0875958a +0x05a:  lea    0x2(%esi),%edi
0875958d +0x05d:  mov    -0x18(%ebp,%esi,4),%esi
08759591 +0x061:  mov    -0x18(%ebp,%edi,4),%eax
08759595 +0x065:  add    -0x2c(%ebp),%ecx
08759598 +0x068:  movl   $0x0,-0xc(%ebp)
0875959f +0x06f:  movl   $0x0,-0x14(%ebp)
087595a6 +0x076:  mul    %esi
087595a8 +0x078:  mov    -0x18(%ebp,%ecx,4),%ecx
087595ac +0x07c:  mov    %eax,-0x3c(%ebp)
087595af +0x07f:  mov    -0x4c(%ebp),%eax
087595b2 +0x082:  mov    %edx,-0x38(%ebp)
087595b5 +0x085:  mull   -0x50(%ebp)
087595b8 +0x088:  mov    %ecx,-0x2c(%ebp)
087595bb +0x08b:  mov    %edx,%esi
087595bd +0x08d:  mov    %eax,-0x20(%ebp)
087595c0 +0x090:  mov    -0x20(%ebp),%ecx
087595c3 +0x093:  mov    0x8(%ebp),%edx
087595c6 +0x096:  mov    %eax,-0x28(%ebp)
087595c9 +0x099:  mov    0xc(%ebp),%eax
087595cc +0x09c:  movl   $0x0,-0x24(%ebp)
087595d3 +0x0a3:  mov    %ecx,(%edx)
087595d5 +0x0a5:  mov    0x10(%ebp),%ecx
087595d8 +0x0a8:  mov    0x4(%eax),%edi
087595db +0x0ab:  mov    0x4(%ecx),%eax
087595de +0x0ae:  mov    -0x3c(%ebp),%ecx
087595e1 +0x0b1:  mul    %edi
087595e3 +0x0b3:  xor    %edi,%edi
087595e5 +0x0b5:  mov    %eax,-0x20(%ebp)
087595e8 +0x0b8:  mov    %eax,-0x40(%ebp)
087595eb +0x0bb:  mov    -0x28(%ebp),%eax
087595ee +0x0be:  mov    %ecx,-0x28(%ebp)
087595f1 +0x0c1:  mov    -0x40(%ebp),%ecx
087595f4 +0x0c4:  mov    %edx,-0x1c(%ebp)
087595f7 +0x0c7:  mov    %edx,-0x44(%ebp)
087595fa +0x0ca:  xor    %edx,%edx
087595fc +0x0cc:  add    %esi,%eax
087595fe +0x0ce:  adc    %edi,%edx
08759600 +0x0d0:  add    -0x28(%ebp),%eax
08759603 +0x0d3:  mov    %ecx,-0x28(%ebp)
08759606 +0x0d6:  mov    0x8(%ebp),%ecx
08759609 +0x0d9:  adc    -0x24(%ebp),%edx
0875960c +0x0dc:  add    -0x28(%ebp),%eax
0875960f +0x0df:  movl   $0x0,-0x24(%ebp)
08759616 +0x0e6:  adc    -0x24(%ebp),%edx
08759619 +0x0e9:  mov    %eax,0x4(%ecx)
0875961c +0x0ec:  mov    %edx,-0x28(%ebp)
0875961f +0x0ef:  mov    -0x28(%ebp),%eax
08759622 +0x0f2:  xor    %edx,%edx
08759624 +0x0f4:  add    %esi,%eax
08759626 +0x0f6:  mov    -0x38(%ebp),%esi
08759629 +0x0f9:  adc    %edi,%edx
0875962b +0x0fb:  xor    %edi,%edi
0875962d +0x0fd:  add    %esi,%eax
0875962f +0x0ff:  mov    -0x44(%ebp),%esi
08759632 +0x102:  adc    %edi,%edx
08759634 +0x104:  xor    %edi,%edi
08759636 +0x106:  add    %esi,%eax
08759638 +0x108:  mov    -0x2c(%ebp),%esi
0875963b +0x10b:  adc    %edi,%edx
0875963d +0x10d:  add    -0x20(%ebp),%eax
08759640 +0x110:  adc    -0x1c(%ebp),%edx
08759643 +0x113:  xor    %edi,%edi
08759645 +0x115:  sub    %esi,%eax
08759647 +0x117:  sbb    %edi,%edx
08759649 +0x119:  mov    %edx,-0x28(%ebp)
0875964c +0x11c:  mov    %eax,0x8(%ecx)
0875964f +0x11f:  mov    %edx,0xc(%ecx)
08759652 +0x122:  add    $0x48,%esp
08759655 +0x125:  pop    %esi
08759656 +0x126:  pop    %edi
08759657 +0x127:  pop    %ebp
08759658 +0x128:  ret
08759659 +0x129:  nop
0875965a +0x12a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply2 @ 0x8759530

/* TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply2(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_40;
  uint local_3c;
  uint local_1c [4];
  
  uVar1 = param_2[1];
  uVar4 = *param_2;
  local_1c[0] = uVar1 - uVar4;
  local_1c[1] = uVar4 - uVar1;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_1c[2] = uVar5 - uVar6;
  local_1c[3] = uVar6 - uVar5;
  uVar9 = (uint)(uVar1 < uVar4 && uVar5 < uVar6);
  uVar2 = local_1c[uVar9];
  uVar9 = local_1c[uVar9 + 2];
  local_1c[3] = 0;
  local_1c[1] = 0;
  uVar1 = local_1c[(uVar5 < uVar6 ^ 1) + (uint)(uVar1 < uVar4)];
  uVar6 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20);
  uVar4 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4);
  *param_1 = uVar4;
  local_40 = (uint)((ulonglong)uVar9 * (ulonglong)uVar2);
  lVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1];
  uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar5 = uVar4 + uVar6 + local_40;
  uVar8 = (uint)CARRY4(uVar4,uVar6) + (uint)CARRY4(uVar4 + uVar6,local_40) +
          (uint)CARRY4(uVar5,(uint)lVar3);
  param_1[1] = uVar5 + (uint)lVar3;
  uVar4 = uVar8 + uVar6;
  local_3c = (uint)((ulonglong)uVar9 * (ulonglong)uVar2 >> 0x20);
  uVar5 = uVar4 + local_3c;
  lVar3 = lVar3 + CONCAT44((uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar4,local_3c) +
                           (uint)CARRY4(uVar5,uVar7),uVar5 + uVar7);
  uVar4 = (uint)lVar3;
  param_1[2] = uVar4 - uVar1;
  param_1[3] = (int)((ulonglong)lVar3 >> 0x20) - (uint)(uVar4 < uVar1);
  return;
}
```
