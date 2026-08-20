# SetDoubleAttribute

`_ZN12TiXmlElement18SetDoubleAttributeERKSsd`

`TiXmlElement::SetDoubleAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e41c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e41c0  _ZN12TiXmlElement18SetDoubleAttributeERKSsd
#           TiXmlElement::SetDoubleAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double)
# range [0x087e41c0, 0x087e431e]
087e41c0 +0x000:  push   %ebp
087e41c1 +0x001:  mov    %esp,%ebp
087e41c3 +0x003:  push   %edi
087e41c4 +0x004:  push   %esi
087e41c5 +0x005:  push   %ebx
087e41c6 +0x006:  sub    $0x15c,%esp
087e41cc +0x00c:  mov    0x8(%ebp),%edx
087e41cf +0x00f:  fldl   0x10(%ebp)
087e41d2 +0x012:  mov    0x4c(%edx),%ebx
087e41d5 +0x015:  add    $0x2c,%edx
087e41d8 +0x018:  cmp    %edx,%ebx
087e41da +0x01a:  je     087e4296 <+0xd6>
087e41e0 +0x020:  mov    0xc(%ebp),%eax
087e41e3 +0x023:  mov    %edx,-0x13c(%ebp)
087e41e9 +0x029:  mov    (%eax),%eax
087e41eb +0x02b:  mov    %eax,-0x11c(%ebp)
087e41f1 +0x031:  mov    -0xc(%eax),%eax
087e41f4 +0x034:  jmp    087e4207 <+0x47>
087e41f6 +0x036:  xchg   %ax,%ax
087e41f8 +0x038:  mov    0x20(%ebx),%ebx
087e41fb +0x03b:  cmp    %ebx,-0x13c(%ebp)
087e4201 +0x041:  je     087e4290 <+0xd0>
087e4207 +0x047:  mov    0x14(%ebx),%esi
087e420a +0x04a:  cmp    %eax,-0xc(%esi)
087e420d +0x04d:  jne    087e41f8 <+0x38>
087e420f +0x04f:  mov    -0x11c(%ebp),%edi
087e4215 +0x055:  cmp    %eax,%eax
087e4217 +0x057:  mov    %eax,%ecx
087e4219 +0x059:  repz cmpsb %es:(%edi),%ds:(%esi)
087e421b +0x05b:  jne    087e41f8 <+0x38>
087e421d +0x05d:  lea    -0x118(%ebp),%esi
087e4223 +0x063:  fstpl  0xc(%esp)
087e4227 +0x067:  movl   $"%g",0x8(%esp)
087e422f +0x06f:  movl   $0x100,0x4(%esp)
087e4237 +0x077:  mov    %esi,(%esp)
087e423a +0x07a:  call   0807dbe0 <_init+0x4d8>
087e423f +0x07f:  mov    %esi,%edx
087e4241 +0x081:  mov    (%edx),%ecx
087e4243 +0x083:  add    $0x4,%edx
087e4246 +0x086:  lea    -0x1010101(%ecx),%eax
087e424c +0x08c:  not    %ecx
087e424e +0x08e:  and    %ecx,%eax
087e4250 +0x090:  and    $0x80808080,%eax
087e4255 +0x095:  je     087e4241 <+0x81>
087e4257 +0x097:  mov    %eax,%ecx
087e4259 +0x099:  shr    $0x10,%ecx
087e425c +0x09c:  test   $0x8080,%eax
087e4261 +0x0a1:  cmove  %ecx,%eax
087e4264 +0x0a4:  lea    0x2(%edx),%ecx
087e4267 +0x0a7:  cmove  %ecx,%edx
087e426a +0x0aa:  add    %al,%al
087e426c +0x0ac:  sbb    $0x3,%edx
087e426f +0x0af:  add    $0x18,%ebx
087e4272 +0x0b2:  sub    %esi,%edx
087e4274 +0x0b4:  mov    %esi,0x4(%esp)
087e4278 +0x0b8:  mov    %ebx,(%esp)
087e427b +0x0bb:  mov    %edx,0x8(%esp)
087e427f +0x0bf:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e4284 +0x0c4:  add    $0x15c,%esp
087e428a +0x0ca:  pop    %ebx
087e428b +0x0cb:  pop    %esi
087e428c +0x0cc:  pop    %edi
087e428d +0x0cd:  pop    %ebp
087e428e +0x0ce:  ret
087e428f +0x0cf:  nop
087e4290 +0x0d0:  mov    -0x13c(%ebp),%edx
087e4296 +0x0d6:  fstpl  -0x128(%ebp)
087e429c +0x0dc:  mov    %edx,-0x12c(%ebp)
087e42a2 +0x0e2:  movl   $0x24,(%esp)
087e42a9 +0x0e9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e42ae +0x0ee:  mov    -0x12c(%ebp),%edx
087e42b4 +0x0f4:  movl   $0xffffffff,0x8(%eax)
087e42bb +0x0fb:  mov    %eax,%ebx
087e42bd +0x0fd:  movl   $0xffffffff,0x4(%eax)
087e42c4 +0x104:  movl   $0x0,0xc(%eax)
087e42cb +0x10b:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e42d1 +0x111:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e42d8 +0x118:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e42df +0x11f:  movl   $0x0,0x10(%eax)
087e42e6 +0x126:  movl   $0x0,0x20(%eax)
087e42ed +0x12d:  movl   $0x0,0x1c(%eax)
087e42f4 +0x134:  mov    %eax,0x4(%esp)
087e42f8 +0x138:  mov    %edx,(%esp)
087e42fb +0x13b:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e4300 +0x140:  mov    0xc(%ebp),%eax
087e4303 +0x143:  mov    %eax,0x4(%esp)
087e4307 +0x147:  lea    0x14(%ebx),%eax
087e430a +0x14a:  mov    %eax,(%esp)
087e430d +0x14d:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e4312 +0x152:  fldl   -0x128(%ebp)
087e4318 +0x158:  jmp    087e421d <+0x5d>
087e431d +0x15d:  nop
087e431e +0x15e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlElement::SetDoubleAttribute @ 0x87e41c0

/* TiXmlElement::SetDoubleAttribute(std::string const&, double) */

void __thiscall TiXmlElement::SetDoubleAttribute(TiXmlElement *this,string *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  int iVar5;
  TiXmlAttributeSet *this_00;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint local_11c [67];
  
  pTVar4 = *(TiXmlAttribute **)(this + 0x4c);
  this_00 = (TiXmlAttributeSet *)(this + 0x2c);
  if (pTVar4 != (TiXmlAttribute *)this_00) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar4 + 0x14) + -0xc) == iVar1) {
        bVar10 = true;
        iVar5 = iVar1;
        pcVar8 = *(char **)(pTVar4 + 0x14);
        pcVar9 = *(char **)param_1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (bVar10) goto LAB_087e421d;
      }
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20);
    } while (this_00 != (TiXmlAttributeSet *)pTVar4);
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
  TiXmlAttributeSet::Add(this_00,pTVar4);
  std::string::assign((string *)(pTVar4 + 0x14),param_1);
LAB_087e421d:
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
