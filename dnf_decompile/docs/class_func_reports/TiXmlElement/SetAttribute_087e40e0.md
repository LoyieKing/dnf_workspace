# SetAttribute

`_ZN12TiXmlElement12SetAttributeERKSsS1_`

`TiXmlElement::SetAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e40e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e40e0  _ZN12TiXmlElement12SetAttributeERKSsS1_
#           TiXmlElement::SetAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087e40e0, 0x087e41bb]
087e40e0 +0x00:  push   %ebp
087e40e1 +0x01:  mov    %esp,%ebp
087e40e3 +0x03:  push   %edi
087e40e4 +0x04:  push   %esi
087e40e5 +0x05:  push   %ebx
087e40e6 +0x06:  sub    $0x3c,%esp
087e40e9 +0x09:  mov    0x8(%ebp),%edx
087e40ec +0x0c:  mov    0xc(%ebp),%eax
087e40ef +0x0f:  mov    0x10(%ebp),%ecx
087e40f2 +0x12:  mov    0x4c(%edx),%ebx
087e40f5 +0x15:  add    $0x2c,%edx
087e40f8 +0x18:  mov    %eax,-0x20(%ebp)
087e40fb +0x1b:  mov    %ecx,-0x24(%ebp)
087e40fe +0x1e:  cmp    %edx,%ebx
087e4100 +0x20:  je     087e414b <+0x6b>
087e4102 +0x22:  mov    (%eax),%eax
087e4104 +0x24:  mov    %edx,-0x2c(%ebp)
087e4107 +0x27:  mov    %eax,-0x1c(%ebp)
087e410a +0x2a:  mov    -0xc(%eax),%eax
087e410d +0x2d:  jmp    087e4118 <+0x38>
087e410f +0x2f:  nop
087e4110 +0x30:  mov    0x20(%ebx),%ebx
087e4113 +0x33:  cmp    %ebx,-0x2c(%ebp)
087e4116 +0x36:  je     087e4148 <+0x68>
087e4118 +0x38:  mov    0x14(%ebx),%esi
087e411b +0x3b:  cmp    %eax,-0xc(%esi)
087e411e +0x3e:  jne    087e4110 <+0x30>
087e4120 +0x40:  mov    -0x1c(%ebp),%edi
087e4123 +0x43:  cmp    %eax,%eax
087e4125 +0x45:  mov    %eax,%ecx
087e4127 +0x47:  repz cmpsb %es:(%edi),%ds:(%esi)
087e4129 +0x49:  jne    087e4110 <+0x30>
087e412b +0x4b:  mov    -0x24(%ebp),%edx
087e412e +0x4e:  add    $0x18,%ebx
087e4131 +0x51:  mov    %ebx,0x8(%ebp)
087e4134 +0x54:  mov    %edx,0xc(%ebp)
087e4137 +0x57:  add    $0x3c,%esp
087e413a +0x5a:  pop    %ebx
087e413b +0x5b:  pop    %esi
087e413c +0x5c:  pop    %edi
087e413d +0x5d:  pop    %ebp
087e413e +0x5e:  jmp    08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e4143 +0x63:  nop
087e4144 +0x64:  lea    0x0(%esi,%eiz,1),%esi
087e4148 +0x68:  mov    -0x2c(%ebp),%edx
087e414b +0x6b:  mov    %edx,-0x28(%ebp)
087e414e +0x6e:  movl   $0x24,(%esp)
087e4155 +0x75:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e415a +0x7a:  mov    -0x28(%ebp),%edx
087e415d +0x7d:  movl   $0xffffffff,0x8(%eax)
087e4164 +0x84:  mov    %eax,%ebx
087e4166 +0x86:  movl   $0xffffffff,0x4(%eax)
087e416d +0x8d:  movl   $0x0,0xc(%eax)
087e4174 +0x94:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e417a +0x9a:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e4181 +0xa1:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e4188 +0xa8:  movl   $0x0,0x10(%eax)
087e418f +0xaf:  movl   $0x0,0x20(%eax)
087e4196 +0xb6:  movl   $0x0,0x1c(%eax)
087e419d +0xbd:  mov    %eax,0x4(%esp)
087e41a1 +0xc1:  mov    %edx,(%esp)
087e41a4 +0xc4:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e41a9 +0xc9:  mov    -0x20(%ebp),%eax
087e41ac +0xcc:  mov    %eax,0x4(%esp)
087e41b0 +0xd0:  lea    0x14(%ebx),%eax
087e41b3 +0xd3:  mov    %eax,(%esp)
087e41b6 +0xd6:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e41bb +0xdb:  jmp    087e412b <+0x4b>
```

## 反编译 C

```c
// TiXmlElement::SetAttribute @ 0x87e40e0

/* TiXmlElement::SetAttribute(std::string const&, std::string const&) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,string *param_1,string *param_2)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  int iVar3;
  TiXmlAttributeSet *this_00;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar2 = *(TiXmlAttribute **)(this + 0x4c);
  this_00 = (TiXmlAttributeSet *)(this + 0x2c);
  if (pTVar2 != (TiXmlAttribute *)this_00) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar2 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar3 = iVar1;
        pcVar4 = *(char **)(pTVar2 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) goto LAB_087e412b;
      }
      pTVar2 = *(TiXmlAttribute **)(pTVar2 + 0x20);
    } while (this_00 != (TiXmlAttributeSet *)pTVar2);
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
  TiXmlAttributeSet::Add(this_00,pTVar2);
  std::string::assign((string *)(pTVar2 + 0x14),param_1);
LAB_087e412b:
  std::string::assign((string *)(pTVar2 + 0x18),param_2);
  return;
}
```
