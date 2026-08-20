# SetAttribute

`_ZN12TiXmlElement12SetAttributeEPKcS1_`

`TiXmlElement::SetAttribute(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e5510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e5510  _ZN12TiXmlElement12SetAttributeEPKcS1_
#           TiXmlElement::SetAttribute(char const*, char const*)
# range [0x087e5510, 0x087e55eb]
087e5510 +0x00:  push   %ebp
087e5511 +0x01:  mov    %esp,%ebp
087e5513 +0x03:  push   %edi
087e5514 +0x04:  push   %esi
087e5515 +0x05:  push   %ebx
087e5516 +0x06:  sub    $0x2c,%esp
087e5519 +0x09:  mov    0x8(%ebp),%esi
087e551c +0x0c:  mov    0x10(%ebp),%eax
087e551f +0x0f:  mov    0xc(%ebp),%edi
087e5522 +0x12:  mov    0x4c(%esi),%ebx
087e5525 +0x15:  add    $0x2c,%esi
087e5528 +0x18:  mov    %eax,-0x1c(%ebp)
087e552b +0x1b:  cmp    %esi,%ebx
087e552d +0x1d:  jne    087e553f <+0x2f>
087e552f +0x1f:  jmp    087e5578 <+0x68>
087e5531 +0x21:  lea    0x0(%esi,%eiz,1),%esi
087e5538 +0x28:  mov    0x20(%ebx),%ebx
087e553b +0x2b:  cmp    %esi,%ebx
087e553d +0x2d:  je     087e5578 <+0x68>
087e553f +0x2f:  mov    0x14(%ebx),%eax
087e5542 +0x32:  mov    %edi,0x4(%esp)
087e5546 +0x36:  mov    %eax,(%esp)
087e5549 +0x39:  call   0807e4e0 <_init+0xdd8>
087e554e +0x3e:  test   %eax,%eax
087e5550 +0x40:  jne    087e5538 <+0x28>
087e5552 +0x42:  mov    -0x1c(%ebp),%eax
087e5555 +0x45:  add    $0x18,%ebx
087e5558 +0x48:  mov    %eax,(%esp)
087e555b +0x4b:  call   0807e3b0 <_init+0xca8>
087e5560 +0x50:  mov    %ebx,0x8(%ebp)
087e5563 +0x53:  mov    %eax,0x10(%ebp)
087e5566 +0x56:  mov    -0x1c(%ebp),%eax
087e5569 +0x59:  mov    %eax,0xc(%ebp)
087e556c +0x5c:  add    $0x2c,%esp
087e556f +0x5f:  pop    %ebx
087e5570 +0x60:  pop    %esi
087e5571 +0x61:  pop    %edi
087e5572 +0x62:  pop    %ebp
087e5573 +0x63:  jmp    087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e5578 +0x68:  movl   $0x24,(%esp)
087e557f +0x6f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e5584 +0x74:  movl   $0xffffffff,0x8(%eax)
087e558b +0x7b:  mov    %eax,%ebx
087e558d +0x7d:  movl   $0xffffffff,0x4(%eax)
087e5594 +0x84:  movl   $0x0,0xc(%eax)
087e559b +0x8b:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e55a1 +0x91:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e55a8 +0x98:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e55af +0x9f:  movl   $0x0,0x10(%eax)
087e55b6 +0xa6:  movl   $0x0,0x20(%eax)
087e55bd +0xad:  movl   $0x0,0x1c(%eax)
087e55c4 +0xb4:  mov    %eax,0x4(%esp)
087e55c8 +0xb8:  mov    %esi,(%esp)
087e55cb +0xbb:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e55d0 +0xc0:  mov    %edi,(%esp)
087e55d3 +0xc3:  call   0807e3b0 <_init+0xca8>
087e55d8 +0xc8:  mov    %edi,0x4(%esp)
087e55dc +0xcc:  mov    %eax,0x8(%esp)
087e55e0 +0xd0:  lea    0x14(%ebx),%eax
087e55e3 +0xd3:  mov    %eax,(%esp)
087e55e6 +0xd6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e55eb +0xdb:  jmp    087e5552 <+0x42>
```

## 反编译 C

```c
// TiXmlElement::SetAttribute @ 0x87e5510

/* TiXmlElement::SetAttribute(char const*, char const*) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,char *param_1,char *param_2)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  size_t sVar3;
  
  for (pTVar2 = *(TiXmlAttribute **)(this + 0x4c); pTVar2 != (TiXmlAttribute *)(this + 0x2c);
      pTVar2 = *(TiXmlAttribute **)(pTVar2 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar2 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e5552;
  }
  pTVar2 = operator_new(0x24);
  *(undefined4 *)(pTVar2 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 0xc) = 0;
  *(undefined ***)pTVar2 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar2 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar2 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar2 + 0x10) = 0;
  *(undefined4 *)(pTVar2 + 0x20) = 0;
  *(undefined4 *)(pTVar2 + 0x1c) = 0;
  TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar2);
  sVar3 = strlen(param_1);
  std::string::assign((string *)(pTVar2 + 0x14),param_1,sVar3);
LAB_087e5552:
  sVar3 = strlen(param_2);
  std::string::assign((string *)(pTVar2 + 0x18),param_2,sVar3);
  return;
}
```
