# SetDoubleAttribute

`_ZN12TiXmlElement18SetDoubleAttributeEPKcd`

`TiXmlElement::SetDoubleAttribute(char const*, double)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e55f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e55f0  _ZN12TiXmlElement18SetDoubleAttributeEPKcd
#           TiXmlElement::SetDoubleAttribute(char const*, double)
# range [0x087e55f0, 0x087e572b]
087e55f0 +0x000:  push   %ebp
087e55f1 +0x001:  mov    %esp,%ebp
087e55f3 +0x003:  push   %edi
087e55f4 +0x004:  push   %esi
087e55f5 +0x005:  push   %ebx
087e55f6 +0x006:  sub    $0x13c,%esp
087e55fc +0x00c:  mov    0x8(%ebp),%esi
087e55ff +0x00f:  fldl   0x10(%ebp)
087e5602 +0x012:  mov    0xc(%ebp),%edi
087e5605 +0x015:  fstpl  -0x120(%ebp)
087e560b +0x01b:  mov    0x4c(%esi),%ebx
087e560e +0x01e:  add    $0x2c,%esi
087e5611 +0x021:  cmp    %esi,%ebx
087e5613 +0x023:  jne    087e562b <+0x3b>
087e5615 +0x025:  jmp    087e56b8 <+0xc8>
087e561a +0x02a:  lea    0x0(%esi),%esi
087e5620 +0x030:  mov    0x20(%ebx),%ebx
087e5623 +0x033:  cmp    %esi,%ebx
087e5625 +0x035:  je     087e56b8 <+0xc8>
087e562b +0x03b:  mov    0x14(%ebx),%eax
087e562e +0x03e:  mov    %edi,0x4(%esp)
087e5632 +0x042:  mov    %eax,(%esp)
087e5635 +0x045:  call   0807e4e0 <_init+0xdd8>
087e563a +0x04a:  test   %eax,%eax
087e563c +0x04c:  jne    087e5620 <+0x30>
087e563e +0x04e:  fldl   -0x120(%ebp)
087e5644 +0x054:  lea    -0x118(%ebp),%esi
087e564a +0x05a:  fstpl  0xc(%esp)
087e564e +0x05e:  movl   $"%g",0x8(%esp)
087e5656 +0x066:  movl   $0x100,0x4(%esp)
087e565e +0x06e:  mov    %esi,(%esp)
087e5661 +0x071:  call   0807dbe0 <_init+0x4d8>
087e5666 +0x076:  mov    %esi,%edx
087e5668 +0x078:  mov    (%edx),%ecx
087e566a +0x07a:  add    $0x4,%edx
087e566d +0x07d:  lea    -0x1010101(%ecx),%eax
087e5673 +0x083:  not    %ecx
087e5675 +0x085:  and    %ecx,%eax
087e5677 +0x087:  and    $0x80808080,%eax
087e567c +0x08c:  je     087e5668 <+0x78>
087e567e +0x08e:  mov    %eax,%ecx
087e5680 +0x090:  shr    $0x10,%ecx
087e5683 +0x093:  test   $0x8080,%eax
087e5688 +0x098:  cmove  %ecx,%eax
087e568b +0x09b:  lea    0x2(%edx),%ecx
087e568e +0x09e:  cmove  %ecx,%edx
087e5691 +0x0a1:  add    %al,%al
087e5693 +0x0a3:  sbb    $0x3,%edx
087e5696 +0x0a6:  add    $0x18,%ebx
087e5699 +0x0a9:  sub    %esi,%edx
087e569b +0x0ab:  mov    %esi,0x4(%esp)
087e569f +0x0af:  mov    %ebx,(%esp)
087e56a2 +0x0b2:  mov    %edx,0x8(%esp)
087e56a6 +0x0b6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e56ab +0x0bb:  add    $0x13c,%esp
087e56b1 +0x0c1:  pop    %ebx
087e56b2 +0x0c2:  pop    %esi
087e56b3 +0x0c3:  pop    %edi
087e56b4 +0x0c4:  pop    %ebp
087e56b5 +0x0c5:  ret
087e56b6 +0x0c6:  xchg   %ax,%ax
087e56b8 +0x0c8:  movl   $0x24,(%esp)
087e56bf +0x0cf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e56c4 +0x0d4:  movl   $0xffffffff,0x8(%eax)
087e56cb +0x0db:  mov    %eax,%ebx
087e56cd +0x0dd:  movl   $0xffffffff,0x4(%eax)
087e56d4 +0x0e4:  movl   $0x0,0xc(%eax)
087e56db +0x0eb:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e56e1 +0x0f1:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e56e8 +0x0f8:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e56ef +0x0ff:  movl   $0x0,0x10(%eax)
087e56f6 +0x106:  movl   $0x0,0x20(%eax)
087e56fd +0x10d:  movl   $0x0,0x1c(%eax)
087e5704 +0x114:  mov    %eax,0x4(%esp)
087e5708 +0x118:  mov    %esi,(%esp)
087e570b +0x11b:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e5710 +0x120:  mov    %edi,(%esp)
087e5713 +0x123:  call   0807e3b0 <_init+0xca8>
087e5718 +0x128:  mov    %edi,0x4(%esp)
087e571c +0x12c:  mov    %eax,0x8(%esp)
087e5720 +0x130:  lea    0x14(%ebx),%eax
087e5723 +0x133:  mov    %eax,(%esp)
087e5726 +0x136:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e572b +0x13b:  jmp    087e563e <+0x4e>
```

## 反编译 C

```c
// TiXmlElement::SetDoubleAttribute @ 0x87e55f0

/* TiXmlElement::SetDoubleAttribute(char const*, double) */

void __thiscall TiXmlElement::SetDoubleAttribute(TiXmlElement *this,char *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  size_t sVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_11c [67];
  
  for (pTVar4 = *(TiXmlAttribute **)(this + 0x4c); pTVar4 != (TiXmlAttribute *)(this + 0x2c);
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar4 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e563e;
  }
  pTVar4 = operator_new(0x24);
  *(undefined4 *)(pTVar4 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0xc) = 0;
  *(undefined ***)pTVar4 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar4 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar4 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x20) = 0;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar4);
  sVar5 = strlen(param_1);
  std::string::assign((string *)(pTVar4 + 0x14),param_1,sVar5);
LAB_087e563e:
  snprintf((char *)local_11c,0x100,"%g",param_2);
  puVar7 = local_11c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar7 = (uint *)((int)puVar6 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_11c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_11c)));
  return;
}
```
