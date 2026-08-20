# SetAttribute

`_ZN12TiXmlElement12SetAttributeERKSsi`

`TiXmlElement::SetAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e4320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4320  _ZN12TiXmlElement12SetAttributeERKSsi
#           TiXmlElement::SetAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
# range [0x087e4320, 0x087e4459]
087e4320 +0x000:  push   %ebp
087e4321 +0x001:  mov    %esp,%ebp
087e4323 +0x003:  push   %edi
087e4324 +0x004:  push   %esi
087e4325 +0x005:  push   %ebx
087e4326 +0x006:  sub    $0x7c,%esp
087e4329 +0x009:  mov    0x8(%ebp),%edx
087e432c +0x00c:  mov    0x4c(%edx),%ebx
087e432f +0x00f:  add    $0x2c,%edx
087e4332 +0x012:  cmp    %edx,%ebx
087e4334 +0x014:  je     087e43e3 <+0xc3>
087e433a +0x01a:  mov    0xc(%ebp),%eax
087e433d +0x01d:  mov    %edx,-0x6c(%ebp)
087e4340 +0x020:  mov    (%eax),%eax
087e4342 +0x022:  mov    %eax,-0x5c(%ebp)
087e4345 +0x025:  mov    -0xc(%eax),%eax
087e4348 +0x028:  jmp    087e435c <+0x3c>
087e434a +0x02a:  lea    0x0(%esi),%esi
087e4350 +0x030:  mov    0x20(%ebx),%ebx
087e4353 +0x033:  cmp    %ebx,-0x6c(%ebp)
087e4356 +0x036:  je     087e43e0 <+0xc0>
087e435c +0x03c:  mov    0x14(%ebx),%esi
087e435f +0x03f:  cmp    %eax,-0xc(%esi)
087e4362 +0x042:  jne    087e4350 <+0x30>
087e4364 +0x044:  mov    -0x5c(%ebp),%edi
087e4367 +0x047:  cmp    %eax,%eax
087e4369 +0x049:  mov    %eax,%ecx
087e436b +0x04b:  repz cmpsb %es:(%edi),%ds:(%esi)
087e436d +0x04d:  jne    087e4350 <+0x30>
087e436f +0x04f:  mov    0x10(%ebp),%eax
087e4372 +0x052:  lea    -0x58(%ebp),%esi
087e4375 +0x055:  movl   $"%d",0x8(%esp)
087e437d +0x05d:  movl   $0x40,0x4(%esp)
087e4385 +0x065:  mov    %esi,(%esp)
087e4388 +0x068:  mov    %eax,0xc(%esp)
087e438c +0x06c:  call   0807dbe0 <_init+0x4d8>
087e4391 +0x071:  mov    %esi,%edx
087e4393 +0x073:  mov    (%edx),%ecx
087e4395 +0x075:  add    $0x4,%edx
087e4398 +0x078:  lea    -0x1010101(%ecx),%eax
087e439e +0x07e:  not    %ecx
087e43a0 +0x080:  and    %ecx,%eax
087e43a2 +0x082:  and    $0x80808080,%eax
087e43a7 +0x087:  je     087e4393 <+0x73>
087e43a9 +0x089:  mov    %eax,%ecx
087e43ab +0x08b:  shr    $0x10,%ecx
087e43ae +0x08e:  test   $0x8080,%eax
087e43b3 +0x093:  cmove  %ecx,%eax
087e43b6 +0x096:  lea    0x2(%edx),%ecx
087e43b9 +0x099:  cmove  %ecx,%edx
087e43bc +0x09c:  add    %al,%al
087e43be +0x09e:  sbb    $0x3,%edx
087e43c1 +0x0a1:  add    $0x18,%ebx
087e43c4 +0x0a4:  sub    %esi,%edx
087e43c6 +0x0a6:  mov    %esi,0x4(%esp)
087e43ca +0x0aa:  mov    %ebx,(%esp)
087e43cd +0x0ad:  mov    %edx,0x8(%esp)
087e43d1 +0x0b1:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e43d6 +0x0b6:  add    $0x7c,%esp
087e43d9 +0x0b9:  pop    %ebx
087e43da +0x0ba:  pop    %esi
087e43db +0x0bb:  pop    %edi
087e43dc +0x0bc:  pop    %ebp
087e43dd +0x0bd:  ret
087e43de +0x0be:  xchg   %ax,%ax
087e43e0 +0x0c0:  mov    -0x6c(%ebp),%edx
087e43e3 +0x0c3:  mov    %edx,-0x60(%ebp)
087e43e6 +0x0c6:  movl   $0x24,(%esp)
087e43ed +0x0cd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e43f2 +0x0d2:  mov    -0x60(%ebp),%edx
087e43f5 +0x0d5:  movl   $0xffffffff,0x8(%eax)
087e43fc +0x0dc:  mov    %eax,%ebx
087e43fe +0x0de:  movl   $0xffffffff,0x4(%eax)
087e4405 +0x0e5:  movl   $0x0,0xc(%eax)
087e440c +0x0ec:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e4412 +0x0f2:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e4419 +0x0f9:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e4420 +0x100:  movl   $0x0,0x10(%eax)
087e4427 +0x107:  movl   $0x0,0x20(%eax)
087e442e +0x10e:  movl   $0x0,0x1c(%eax)
087e4435 +0x115:  mov    %eax,0x4(%esp)
087e4439 +0x119:  mov    %edx,(%esp)
087e443c +0x11c:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e4441 +0x121:  mov    0xc(%ebp),%eax
087e4444 +0x124:  mov    %eax,0x4(%esp)
087e4448 +0x128:  lea    0x14(%ebx),%eax
087e444b +0x12b:  mov    %eax,(%esp)
087e444e +0x12e:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e4453 +0x133:  jmp    087e436f <+0x4f>
087e4458 +0x138:  nop
087e4459 +0x139:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlElement::SetAttribute @ 0x87e4320

/* TiXmlElement::SetAttribute(std::string const&, int) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,string *param_1,int param_2)

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
  uint local_5c [19];
  
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
        if (bVar10) goto LAB_087e436f;
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
LAB_087e436f:
  snprintf((char *)local_5c,0x40,"%d",param_2);
  puVar7 = local_5c;
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
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_5c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_5c)));
  return;
}
```
