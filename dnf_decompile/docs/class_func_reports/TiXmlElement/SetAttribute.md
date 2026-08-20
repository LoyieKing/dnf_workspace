# SetAttribute

`_ZN12TiXmlElement12SetAttributeEPKci`

`TiXmlElement::SetAttribute(char const*, int)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3fb0  _ZN12TiXmlElement12SetAttributeEPKci
#           TiXmlElement::SetAttribute(char const*, int)
# range [0x087e3fb0, 0x087e40d9]
087e3fb0 +0x000:  push   %ebp
087e3fb1 +0x001:  mov    %esp,%ebp
087e3fb3 +0x003:  push   %edi
087e3fb4 +0x004:  push   %esi
087e3fb5 +0x005:  push   %ebx
087e3fb6 +0x006:  sub    $0x5c,%esp
087e3fb9 +0x009:  mov    0x8(%ebp),%esi
087e3fbc +0x00c:  mov    0xc(%ebp),%edi
087e3fbf +0x00f:  mov    0x4c(%esi),%ebx
087e3fc2 +0x012:  add    $0x2c,%esi
087e3fc5 +0x015:  cmp    %esi,%ebx
087e3fc7 +0x017:  jne    087e3fdb <+0x2b>
087e3fc9 +0x019:  jmp    087e4060 <+0xb0>
087e3fce +0x01e:  xchg   %ax,%ax
087e3fd0 +0x020:  mov    0x20(%ebx),%ebx
087e3fd3 +0x023:  cmp    %esi,%ebx
087e3fd5 +0x025:  je     087e4060 <+0xb0>
087e3fdb +0x02b:  mov    0x14(%ebx),%eax
087e3fde +0x02e:  mov    %edi,0x4(%esp)
087e3fe2 +0x032:  mov    %eax,(%esp)
087e3fe5 +0x035:  call   0807e4e0 <_init+0xdd8>
087e3fea +0x03a:  test   %eax,%eax
087e3fec +0x03c:  jne    087e3fd0 <+0x20>
087e3fee +0x03e:  mov    0x10(%ebp),%eax
087e3ff1 +0x041:  lea    -0x58(%ebp),%esi
087e3ff4 +0x044:  movl   $"%d",0x8(%esp)
087e3ffc +0x04c:  movl   $0x40,0x4(%esp)
087e4004 +0x054:  mov    %esi,(%esp)
087e4007 +0x057:  mov    %eax,0xc(%esp)
087e400b +0x05b:  call   0807dbe0 <_init+0x4d8>
087e4010 +0x060:  mov    %esi,%edx
087e4012 +0x062:  mov    (%edx),%ecx
087e4014 +0x064:  add    $0x4,%edx
087e4017 +0x067:  lea    -0x1010101(%ecx),%eax
087e401d +0x06d:  not    %ecx
087e401f +0x06f:  and    %ecx,%eax
087e4021 +0x071:  and    $0x80808080,%eax
087e4026 +0x076:  je     087e4012 <+0x62>
087e4028 +0x078:  mov    %eax,%ecx
087e402a +0x07a:  shr    $0x10,%ecx
087e402d +0x07d:  test   $0x8080,%eax
087e4032 +0x082:  cmove  %ecx,%eax
087e4035 +0x085:  lea    0x2(%edx),%ecx
087e4038 +0x088:  cmove  %ecx,%edx
087e403b +0x08b:  add    %al,%al
087e403d +0x08d:  sbb    $0x3,%edx
087e4040 +0x090:  add    $0x18,%ebx
087e4043 +0x093:  sub    %esi,%edx
087e4045 +0x095:  mov    %esi,0x4(%esp)
087e4049 +0x099:  mov    %ebx,(%esp)
087e404c +0x09c:  mov    %edx,0x8(%esp)
087e4050 +0x0a0:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e4055 +0x0a5:  add    $0x5c,%esp
087e4058 +0x0a8:  pop    %ebx
087e4059 +0x0a9:  pop    %esi
087e405a +0x0aa:  pop    %edi
087e405b +0x0ab:  pop    %ebp
087e405c +0x0ac:  ret
087e405d +0x0ad:  lea    0x0(%esi),%esi
087e4060 +0x0b0:  movl   $0x24,(%esp)
087e4067 +0x0b7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e406c +0x0bc:  movl   $0xffffffff,0x8(%eax)
087e4073 +0x0c3:  mov    %eax,%ebx
087e4075 +0x0c5:  movl   $0xffffffff,0x4(%eax)
087e407c +0x0cc:  movl   $0x0,0xc(%eax)
087e4083 +0x0d3:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e4089 +0x0d9:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e4090 +0x0e0:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e4097 +0x0e7:  movl   $0x0,0x10(%eax)
087e409e +0x0ee:  movl   $0x0,0x20(%eax)
087e40a5 +0x0f5:  movl   $0x0,0x1c(%eax)
087e40ac +0x0fc:  mov    %eax,0x4(%esp)
087e40b0 +0x100:  mov    %esi,(%esp)
087e40b3 +0x103:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e40b8 +0x108:  mov    %edi,(%esp)
087e40bb +0x10b:  call   0807e3b0 <_init+0xca8>
087e40c0 +0x110:  mov    %edi,0x4(%esp)
087e40c4 +0x114:  mov    %eax,0x8(%esp)
087e40c8 +0x118:  lea    0x14(%ebx),%eax
087e40cb +0x11b:  mov    %eax,(%esp)
087e40ce +0x11e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e40d3 +0x123:  jmp    087e3fee <+0x3e>
087e40d8 +0x128:  nop
087e40d9 +0x129:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlElement::SetAttribute @ 0x87e3fb0

/* TiXmlElement::SetAttribute(char const*, int) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  size_t sVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_5c [19];
  
  for (pTVar4 = *(TiXmlAttribute **)(this + 0x4c); pTVar4 != (TiXmlAttribute *)(this + 0x2c);
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar4 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e3fee;
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
LAB_087e3fee:
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
