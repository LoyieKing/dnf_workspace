# seekoff

`_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode`

`std::strstreambuf::seekoff(long long, std::_Ios_Seekdir, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd580  _ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode
#           std::strstreambuf::seekoff(long long, std::_Ios_Seekdir, std::_Ios_Openmode)
# range [0x086dd580, 0x086dd7ef]
086dd580 +0x000:  push   %ebp
086dd581 +0x001:  mov    %esp,%ebp
086dd583 +0x003:  sub    $0x38,%esp
086dd586 +0x006:  mov    0x10(%ebp),%ecx
086dd589 +0x009:  mov    %ebx,-0xc(%ebp)
086dd58c +0x00c:  mov    0x14(%ebp),%ebx
086dd58f +0x00f:  mov    %esi,-0x8(%ebp)
086dd592 +0x012:  mov    0x8(%ebp),%eax
086dd595 +0x015:  mov    %edi,-0x4(%ebp)
086dd598 +0x018:  mov    0xc(%ebp),%edx
086dd59b +0x01b:  mov    %ecx,-0x18(%ebp)
086dd59e +0x01e:  mov    0x1c(%ebp),%ecx
086dd5a1 +0x021:  mov    %ebx,-0x14(%ebp)
086dd5a4 +0x024:  mov    %ecx,%esi
086dd5a6 +0x026:  and    $0x18,%esi
086dd5a9 +0x029:  cmp    $0x18,%esi
086dd5ac +0x02c:  je     086dd700 <+0x180>
086dd5b2 +0x032:  test   $0x8,%cl
086dd5b5 +0x035:  movb   $0x0,-0x21(%ebp)
086dd5b9 +0x039:  movb   $0x1,-0x22(%ebp)
086dd5bd +0x03d:  je     086dd670 <+0xf0>
086dd5c3 +0x043:  mov    0x8(%edx),%edi
086dd5c6 +0x046:  test   %edi,%edi
086dd5c8 +0x048:  je     086dd640 <+0xc0>
086dd5ca +0x04a:  mov    0x4(%edx),%ecx
086dd5cd +0x04d:  mov    %ecx,-0x34(%ebp)
086dd5d0 +0x050:  mov    0x18(%edx),%ecx
086dd5d3 +0x053:  test   %ecx,%ecx
086dd5d5 +0x055:  mov    %ecx,-0x20(%ebp)
086dd5d8 +0x058:  je     086dd768 <+0x1e8>
086dd5de +0x05e:  cmpl   $0x1,0x18(%ebp)
086dd5e2 +0x062:  je     086dd730 <+0x1b0>
086dd5e8 +0x068:  cmpl   $0x2,0x18(%ebp)
086dd5ec +0x06c:  je     086dd750 <+0x1d0>
086dd5f2 +0x072:  mov    0x18(%ebp),%ebx
086dd5f5 +0x075:  movl   $0x0,-0x30(%ebp)
086dd5fc +0x07c:  movl   $0x0,-0x2c(%ebp)
086dd603 +0x083:  test   %ebx,%ebx
086dd605 +0x085:  jne    086dd640 <+0xc0>
086dd607 +0x087:  mov    -0x30(%ebp),%ebx
086dd60a +0x08a:  mov    -0x2c(%ebp),%esi
086dd60d +0x08d:  add    -0x18(%ebp),%ebx
086dd610 +0x090:  adc    -0x14(%ebp),%esi
086dd613 +0x093:  mov    %ebx,-0x18(%ebp)
086dd616 +0x096:  test   %esi,%esi
086dd618 +0x098:  mov    %esi,-0x14(%ebp)
086dd61b +0x09b:  js     086dd640 <+0xc0>
086dd61d +0x09d:  mov    -0x20(%ebp),%ebx
086dd620 +0x0a0:  sub    -0x34(%ebp),%ebx
086dd623 +0x0a3:  mov    %ebx,%esi
086dd625 +0x0a5:  sar    $0x1f,%esi
086dd628 +0x0a8:  mov    %ebx,-0x20(%ebp)
086dd62b +0x0ab:  mov    %esi,-0x1c(%ebp)
086dd62e +0x0ae:  mov    -0x1c(%ebp),%ebx
086dd631 +0x0b1:  cmp    %ebx,-0x14(%ebp)
086dd634 +0x0b4:  jl     086dd680 <+0x100>
086dd636 +0x0b6:  jg     086dd640 <+0xc0>
086dd638 +0x0b8:  mov    -0x20(%ebp),%esi
086dd63b +0x0bb:  cmp    %esi,-0x18(%ebp)
086dd63e +0x0be:  jbe    086dd680 <+0x100>
086dd640 +0x0c0:  movl   $0xffffffff,(%eax)
086dd646 +0x0c6:  movl   $0xffffffff,0x4(%eax)
086dd64d +0x0cd:  movl   $0x0,0x8(%eax)
086dd654 +0x0d4:  movl   $0x0,0xc(%eax)
086dd65b +0x0db:  mov    -0xc(%ebp),%ebx
086dd65e +0x0de:  mov    -0x8(%ebp),%esi
086dd661 +0x0e1:  mov    -0x4(%ebp),%edi
086dd664 +0x0e4:  mov    %ebp,%esp
086dd666 +0x0e6:  pop    %ebp
086dd667 +0x0e7:  ret    $0x4
086dd66a +0x0ea:  lea    0x0(%esi),%esi
086dd670 +0x0f0:  and    $0x10,%ecx
086dd673 +0x0f3:  je     086dd640 <+0xc0>
086dd675 +0x0f5:  movb   $0x0,-0x22(%ebp)
086dd679 +0x0f9:  jmp    086dd715 <+0x195>
086dd67e +0x0fe:  xchg   %ax,%ax
086dd680 +0x100:  cmpb   $0x0,-0x21(%ebp)
086dd684 +0x104:  je     086dd6a3 <+0x123>
086dd686 +0x106:  mov    0x10(%edx),%edi
086dd689 +0x109:  mov    -0x34(%ebp),%ebx
086dd68c +0x10c:  add    -0x18(%ebp),%ebx
086dd68f +0x10f:  cmp    %ebx,%edi
086dd691 +0x111:  jbe    086dd7b8 <+0x238>
086dd697 +0x117:  mov    -0x34(%ebp),%esi
086dd69a +0x11a:  mov    %ecx,0x18(%edx)
086dd69d +0x11d:  mov    %ebx,0x14(%edx)
086dd6a0 +0x120:  mov    %esi,0x10(%edx)
086dd6a3 +0x123:  cmpb   $0x0,-0x22(%ebp)
086dd6a7 +0x127:  je     086dd6d6 <+0x156>
086dd6a9 +0x129:  mov    0xc(%edx),%edi
086dd6ac +0x12c:  mov    %edi,%ecx
086dd6ae +0x12e:  sub    -0x34(%ebp),%ecx
086dd6b1 +0x131:  mov    %ecx,%ebx
086dd6b3 +0x133:  sar    $0x1f,%ebx
086dd6b6 +0x136:  cmp    %ebx,-0x14(%ebp)
086dd6b9 +0x139:  jg     086dd789 <+0x209>
086dd6bf +0x13f:  jge    086dd780 <+0x200>
086dd6c5 +0x145:  mov    -0x34(%ebp),%ecx
086dd6c8 +0x148:  mov    -0x18(%ebp),%esi
086dd6cb +0x14b:  mov    %edi,0xc(%edx)
086dd6ce +0x14e:  mov    %ecx,0x4(%edx)
086dd6d1 +0x151:  add    %ecx,%esi
086dd6d3 +0x153:  mov    %esi,0x8(%edx)
086dd6d6 +0x156:  mov    -0x30(%ebp),%edx
086dd6d9 +0x159:  mov    -0x2c(%ebp),%ecx
086dd6dc +0x15c:  movl   $0x0,0x8(%eax)
086dd6e3 +0x163:  movl   $0x0,0xc(%eax)
086dd6ea +0x16a:  mov    %edx,(%eax)
086dd6ec +0x16c:  mov    %ecx,0x4(%eax)
086dd6ef +0x16f:  mov    -0xc(%ebp),%ebx
086dd6f2 +0x172:  mov    -0x8(%ebp),%esi
086dd6f5 +0x175:  mov    -0x4(%ebp),%edi
086dd6f8 +0x178:  mov    %ebp,%esp
086dd6fa +0x17a:  pop    %ebp
086dd6fb +0x17b:  ret    $0x4
086dd6fe +0x17e:  xchg   %ax,%ax
086dd700 +0x180:  cmpl   $0x2,0x18(%ebp)
086dd704 +0x184:  je     086dd711 <+0x191>
086dd706 +0x186:  mov    0x18(%ebp),%edi
086dd709 +0x189:  test   %edi,%edi
086dd70b +0x18b:  jne    086dd5b2 <+0x32>
086dd711 +0x191:  movb   $0x1,-0x22(%ebp)
086dd715 +0x195:  mov    0x14(%edx),%esi
086dd718 +0x198:  test   %esi,%esi
086dd71a +0x19a:  je     086dd640 <+0xc0>
086dd720 +0x1a0:  movb   $0x1,-0x21(%ebp)
086dd724 +0x1a4:  jmp    086dd5c3 <+0x43>
086dd729 +0x1a9:  lea    0x0(%esi,%eiz,1),%esi
086dd730 +0x1b0:  cmpb   $0x0,-0x21(%ebp)
086dd734 +0x1b4:  je     086dd778 <+0x1f8>
086dd736 +0x1b6:  mov    0x14(%edx),%edi
086dd739 +0x1b9:  sub    -0x34(%ebp),%edi
086dd73c +0x1bc:  mov    %edi,%ebx
086dd73e +0x1be:  sar    $0x1f,%ebx
086dd741 +0x1c1:  mov    %edi,-0x30(%ebp)
086dd744 +0x1c4:  mov    %ebx,-0x2c(%ebp)
086dd747 +0x1c7:  jmp    086dd607 <+0x87>
086dd74c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
086dd750 +0x1d0:  mov    -0x20(%ebp),%edi
086dd753 +0x1d3:  sub    -0x34(%ebp),%edi
086dd756 +0x1d6:  mov    %edi,%esi
086dd758 +0x1d8:  sar    $0x1f,%esi
086dd75b +0x1db:  mov    %edi,-0x30(%ebp)
086dd75e +0x1de:  mov    %esi,-0x2c(%ebp)
086dd761 +0x1e1:  jmp    086dd607 <+0x87>
086dd766 +0x1e6:  xchg   %ax,%ax
086dd768 +0x1e8:  mov    0xc(%edx),%ebx
086dd76b +0x1eb:  mov    %ebx,-0x20(%ebp)
086dd76e +0x1ee:  jmp    086dd5de <+0x5e>
086dd773 +0x1f3:  nop
086dd774 +0x1f4:  lea    0x0(%esi,%eiz,1),%esi
086dd778 +0x1f8:  sub    -0x34(%ebp),%edi
086dd77b +0x1fb:  jmp    086dd73c <+0x1bc>
086dd77d +0x1fd:  lea    0x0(%esi),%esi
086dd780 +0x200:  cmp    %ecx,-0x18(%ebp)
086dd783 +0x203:  jbe    086dd6c5 <+0x145>
086dd789 +0x209:  mov    0x14(%edx),%edi
086dd78c +0x20c:  mov    %edi,%ecx
086dd78e +0x20e:  sub    -0x34(%ebp),%ecx
086dd791 +0x211:  mov    %ecx,%ebx
086dd793 +0x213:  sar    $0x1f,%ebx
086dd796 +0x216:  cmp    %ebx,-0x14(%ebp)
086dd799 +0x219:  jg     086dd7d0 <+0x250>
086dd79b +0x21b:  jl     086dd7a2 <+0x222>
086dd79d +0x21d:  cmp    %ecx,-0x18(%ebp)
086dd7a0 +0x220:  ja     086dd7d0 <+0x250>
086dd7a2 +0x222:  mov    -0x34(%ebp),%ebx
086dd7a5 +0x225:  mov    -0x18(%ebp),%esi
086dd7a8 +0x228:  mov    %edi,0xc(%edx)
086dd7ab +0x22b:  mov    %ebx,0x4(%edx)
086dd7ae +0x22e:  add    %ebx,%esi
086dd7b0 +0x230:  mov    %esi,0x8(%edx)
086dd7b3 +0x233:  jmp    086dd6d6 <+0x156>
086dd7b8 +0x238:  mov    %ecx,0x18(%edx)
086dd7bb +0x23b:  mov    -0x34(%ebp),%ecx
086dd7be +0x23e:  add    -0x18(%ebp),%ecx
086dd7c1 +0x241:  mov    %edi,0x10(%edx)
086dd7c4 +0x244:  mov    %ecx,0x14(%edx)
086dd7c7 +0x247:  jmp    086dd6a3 <+0x123>
086dd7cc +0x24c:  lea    0x0(%esi,%eiz,1),%esi
086dd7d0 +0x250:  mov    -0x34(%ebp),%esi
086dd7d3 +0x253:  mov    0x18(%edx),%ecx
086dd7d6 +0x256:  mov    %esi,0x4(%edx)
086dd7d9 +0x259:  add    -0x18(%ebp),%esi
086dd7dc +0x25c:  mov    %ecx,0xc(%edx)
086dd7df +0x25f:  mov    %esi,0x8(%edx)
086dd7e2 +0x262:  jmp    086dd6d6 <+0x156>
086dd7e7 +0x267:  nop
086dd7e8 +0x268:  nop
086dd7e9 +0x269:  nop
086dd7ea +0x26a:  nop
086dd7eb +0x26b:  nop
086dd7ec +0x26c:  nop
086dd7ed +0x26d:  nop
086dd7ee +0x26e:  nop
086dd7ef +0x26f:  nop
```

## 反编译 C

```c
// std::strstreambuf::seekoff @ 0x86dd580

/* std::strstreambuf::seekoff(long long, std::_Ios_Seekdir, std::_Ios_Openmode) */

void std::strstreambuf::seekoff(longlong param_1,_Ios_Seekdir param_2,_Ios_Openmode param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint local_34;
  uint local_30;
  int local_24;
  
  if (((in_stack_00000018 & 0x18) == 0x18) && ((in_stack_00000014 == 2 || (in_stack_00000014 == 0)))
     ) {
    bVar3 = true;
LAB_086dd715:
    if (*(int *)(param_1._4_4_ + 0x14) == 0) goto LAB_086dd640;
    bVar2 = true;
  }
  else {
    bVar2 = false;
    bVar3 = true;
    if ((in_stack_00000018 & 8) == 0) {
      if ((in_stack_00000018 & 0x10) == 0) goto LAB_086dd640;
      bVar3 = false;
      goto LAB_086dd715;
    }
  }
  if (*(int *)(param_1._4_4_ + 8) != 0) {
    iVar1 = *(int *)(param_1._4_4_ + 4);
    iVar6 = *(int *)(param_1._4_4_ + 0x18);
    local_24 = iVar6;
    if (iVar6 == 0) {
      local_24 = *(int *)(param_1._4_4_ + 0xc);
    }
    if (in_stack_00000014 == 1) {
      if (bVar2) {
        local_34 = *(int *)(param_1._4_4_ + 0x14) - iVar1;
      }
      else {
        local_34 = *(int *)(param_1._4_4_ + 8) - iVar1;
      }
      local_30 = (int)local_34 >> 0x1f;
    }
    else if (in_stack_00000014 == 2) {
      local_34 = local_24 - iVar1;
      local_30 = (int)local_34 >> 0x1f;
    }
    else {
      local_34 = 0;
      local_30 = 0;
      if (in_stack_00000014 != 0) goto LAB_086dd640;
    }
    uVar5 = local_34 + param_2;
    iVar7 = local_30 + param_3 + (uint)CARRY4(local_34,param_2);
    if (-1 < iVar7) {
      iVar8 = local_24 - iVar1 >> 0x1f;
      if ((iVar7 < iVar8) || ((iVar7 <= iVar8 && (uVar5 <= (uint)(local_24 - iVar1))))) {
        if (bVar2) {
          if (iVar1 + uVar5 < *(uint *)(param_1._4_4_ + 0x10)) {
            *(int *)(param_1._4_4_ + 0x18) = iVar6;
            *(uint *)(param_1._4_4_ + 0x14) = iVar1 + uVar5;
            *(int *)(param_1._4_4_ + 0x10) = iVar1;
          }
          else {
            *(int *)(param_1._4_4_ + 0x18) = iVar6;
            *(uint *)(param_1._4_4_ + 0x10) = *(uint *)(param_1._4_4_ + 0x10);
            *(uint *)(param_1._4_4_ + 0x14) = iVar1 + uVar5;
          }
        }
        if (bVar3) {
          uVar4 = *(int *)(param_1._4_4_ + 0xc) - iVar1;
          iVar6 = (int)uVar4 >> 0x1f;
          if ((iVar6 < iVar7) || ((iVar6 <= iVar7 && (uVar4 < uVar5)))) {
            uVar4 = *(int *)(param_1._4_4_ + 0x14) - iVar1;
            iVar6 = (int)uVar4 >> 0x1f;
            if ((iVar6 < iVar7) || ((iVar6 <= iVar7 && (uVar4 < uVar5)))) {
              *(int *)(param_1._4_4_ + 4) = iVar1;
              *(undefined4 *)(param_1._4_4_ + 0xc) = *(undefined4 *)(param_1._4_4_ + 0x18);
              *(uint *)(param_1._4_4_ + 8) = iVar1 + uVar5;
            }
            else {
              *(int *)(param_1._4_4_ + 0xc) = *(int *)(param_1._4_4_ + 0x14);
              *(int *)(param_1._4_4_ + 4) = iVar1;
              *(uint *)(param_1._4_4_ + 8) = uVar5 + iVar1;
            }
          }
          else {
            *(int *)(param_1._4_4_ + 0xc) = *(int *)(param_1._4_4_ + 0xc);
            *(int *)(param_1._4_4_ + 4) = iVar1;
            *(uint *)(param_1._4_4_ + 8) = uVar5 + iVar1;
          }
        }
        ((uint *)param_1)[2] = 0;
        ((uint *)param_1)[3] = 0;
        *(uint *)param_1 = local_34;
        ((uint *)param_1)[1] = local_30;
        return;
      }
    }
  }
LAB_086dd640:
  *(uint *)param_1 = 0xffffffff;
  ((uint *)param_1)[1] = 0xffffffff;
  ((uint *)param_1)[2] = 0;
  ((uint *)param_1)[3] = 0;
  return;
}
```
