# CopyTo

`_ZNK12TiXmlElement6CopyToEPS_`

`TiXmlElement::CopyTo(TiXmlElement*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3c20  _ZNK12TiXmlElement6CopyToEPS_
#           TiXmlElement::CopyTo(TiXmlElement*) const
# range [0x087e3c20, 0x087e3dda]
087e3c20 +0x000:  push   %ebp
087e3c21 +0x001:  mov    %esp,%ebp
087e3c23 +0x003:  push   %edi
087e3c24 +0x004:  push   %esi
087e3c25 +0x005:  push   %ebx
087e3c26 +0x006:  sub    $0x2c,%esp
087e3c29 +0x009:  mov    0x8(%ebp),%eax
087e3c2c +0x00c:  mov    0x20(%eax),%ebx
087e3c2f +0x00f:  mov    %ebx,(%esp)
087e3c32 +0x012:  call   0807e3b0 <_init+0xca8>
087e3c37 +0x017:  mov    %ebx,0x4(%esp)
087e3c3b +0x01b:  mov    %eax,0x8(%esp)
087e3c3f +0x01f:  mov    0xc(%ebp),%eax
087e3c42 +0x022:  add    $0x20,%eax
087e3c45 +0x025:  mov    %eax,(%esp)
087e3c48 +0x028:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e3c4d +0x02d:  mov    0x8(%ebp),%edx
087e3c50 +0x030:  mov    0xc(%ebp),%ecx
087e3c53 +0x033:  mov    0xc(%edx),%eax
087e3c56 +0x036:  mov    %eax,0xc(%ecx)
087e3c59 +0x039:  mov    0x4(%edx),%eax
087e3c5c +0x03c:  mov    0xc(%ebp),%ecx
087e3c5f +0x03f:  mov    0x8(%edx),%edx
087e3c62 +0x042:  mov    %eax,0x4(%ecx)
087e3c65 +0x045:  mov    0x8(%ebp),%eax
087e3c68 +0x048:  mov    %edx,0x8(%ecx)
087e3c6b +0x04b:  mov    0x4c(%eax),%eax
087e3c6e +0x04e:  mov    %eax,-0x1c(%ebp)
087e3c71 +0x051:  mov    0x8(%ebp),%eax
087e3c74 +0x054:  add    $0x2c,%eax
087e3c77 +0x057:  cmp    %eax,-0x1c(%ebp)
087e3c7a +0x05a:  je     087e3d9e <+0x17e>
087e3c80 +0x060:  mov    -0x1c(%ebp),%ebx
087e3c83 +0x063:  test   %ebx,%ebx
087e3c85 +0x065:  je     087e3d9e <+0x17e>
087e3c8b +0x06b:  mov    -0x1c(%ebp),%edx
087e3c8e +0x06e:  mov    %ecx,%edi
087e3c90 +0x070:  mov    -0x1c(%ebp),%ecx
087e3c93 +0x073:  add    $0x2c,%edi
087e3c96 +0x076:  mov    0x18(%edx),%edx
087e3c99 +0x079:  mov    0x14(%ecx),%esi
087e3c9c +0x07c:  mov    %edx,-0x20(%ebp)
087e3c9f +0x07f:  mov    0xc(%ebp),%eax
087e3ca2 +0x082:  mov    0x4c(%eax),%ebx
087e3ca5 +0x085:  cmp    %edi,%ebx
087e3ca7 +0x087:  jne    087e3cb7 <+0x97>
087e3ca9 +0x089:  jmp    087e3d18 <+0xf8>
087e3cab +0x08b:  nop
087e3cac +0x08c:  lea    0x0(%esi,%eiz,1),%esi
087e3cb0 +0x090:  mov    0x20(%ebx),%ebx
087e3cb3 +0x093:  cmp    %edi,%ebx
087e3cb5 +0x095:  je     087e3d18 <+0xf8>
087e3cb7 +0x097:  mov    0x14(%ebx),%eax
087e3cba +0x09a:  mov    %esi,0x4(%esp)
087e3cbe +0x09e:  mov    %eax,(%esp)
087e3cc1 +0x0a1:  call   0807e4e0 <_init+0xdd8>
087e3cc6 +0x0a6:  test   %eax,%eax
087e3cc8 +0x0a8:  jne    087e3cb0 <+0x90>
087e3cca +0x0aa:  mov    -0x20(%ebp),%edx
087e3ccd +0x0ad:  add    $0x18,%ebx
087e3cd0 +0x0b0:  mov    %edx,(%esp)
087e3cd3 +0x0b3:  call   0807e3b0 <_init+0xca8>
087e3cd8 +0x0b8:  mov    -0x20(%ebp),%ecx
087e3cdb +0x0bb:  mov    %ebx,(%esp)
087e3cde +0x0be:  mov    %ecx,0x4(%esp)
087e3ce2 +0x0c2:  mov    %eax,0x8(%esp)
087e3ce6 +0x0c6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e3ceb +0x0cb:  mov    -0x1c(%ebp),%eax
087e3cee +0x0ce:  mov    0x20(%eax),%eax
087e3cf1 +0x0d1:  mov    0x18(%eax),%edx
087e3cf4 +0x0d4:  mov    %eax,-0x1c(%ebp)
087e3cf7 +0x0d7:  mov    -0xc(%edx),%ecx
087e3cfa +0x0da:  mov    %edx,-0x20(%ebp)
087e3cfd +0x0dd:  test   %ecx,%ecx
087e3cff +0x0df:  je     087e3d90 <+0x170>
087e3d05 +0x0e5:  mov    0x14(%eax),%esi
087e3d08 +0x0e8:  mov    0xc(%ebp),%eax
087e3d0b +0x0eb:  mov    0x4c(%eax),%ebx
087e3d0e +0x0ee:  cmp    %edi,%ebx
087e3d10 +0x0f0:  jne    087e3cb7 <+0x97>
087e3d12 +0x0f2:  lea    0x0(%esi),%esi
087e3d18 +0x0f8:  movl   $0x24,(%esp)
087e3d1f +0x0ff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e3d24 +0x104:  movl   $0xffffffff,0x8(%eax)
087e3d2b +0x10b:  mov    %eax,%ebx
087e3d2d +0x10d:  movl   $0xffffffff,0x4(%eax)
087e3d34 +0x114:  movl   $0x0,0xc(%eax)
087e3d3b +0x11b:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e3d41 +0x121:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e3d48 +0x128:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e3d4f +0x12f:  movl   $0x0,0x10(%eax)
087e3d56 +0x136:  movl   $0x0,0x20(%eax)
087e3d5d +0x13d:  movl   $0x0,0x1c(%eax)
087e3d64 +0x144:  mov    %eax,0x4(%esp)
087e3d68 +0x148:  mov    %edi,(%esp)
087e3d6b +0x14b:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e3d70 +0x150:  mov    %esi,(%esp)
087e3d73 +0x153:  call   0807e3b0 <_init+0xca8>
087e3d78 +0x158:  mov    %esi,0x4(%esp)
087e3d7c +0x15c:  mov    %eax,0x8(%esp)
087e3d80 +0x160:  lea    0x14(%ebx),%eax
087e3d83 +0x163:  mov    %eax,(%esp)
087e3d86 +0x166:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e3d8b +0x16b:  jmp    087e3cca <+0xaa>
087e3d90 +0x170:  mov    0x14(%eax),%esi
087e3d93 +0x173:  mov    -0xc(%esi),%edx
087e3d96 +0x176:  test   %edx,%edx
087e3d98 +0x178:  jne    087e3c9f <+0x7f>
087e3d9e +0x17e:  mov    0x8(%ebp),%edx
087e3da1 +0x181:  mov    0x18(%edx),%ebx
087e3da4 +0x184:  test   %ebx,%ebx
087e3da6 +0x186:  je     087e3dcb <+0x1ab>
087e3da8 +0x188:  mov    0xc(%ebp),%esi
087e3dab +0x18b:  nop
087e3dac +0x18c:  lea    0x0(%esi,%eiz,1),%esi
087e3db0 +0x190:  mov    (%ebx),%eax
087e3db2 +0x192:  mov    %ebx,(%esp)
087e3db5 +0x195:  call   *0x40(%eax)
087e3db8 +0x198:  mov    %esi,(%esp)
087e3dbb +0x19b:  mov    %eax,0x4(%esp)
087e3dbf +0x19f:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e3dc4 +0x1a4:  mov    0x28(%ebx),%ebx
087e3dc7 +0x1a7:  test   %ebx,%ebx
087e3dc9 +0x1a9:  jne    087e3db0 <+0x190>
087e3dcb +0x1ab:  add    $0x2c,%esp
087e3dce +0x1ae:  pop    %ebx
087e3dcf +0x1af:  pop    %esi
087e3dd0 +0x1b0:  pop    %edi
087e3dd1 +0x1b1:  pop    %ebp
087e3dd2 +0x1b2:  ret
087e3dd3 +0x1b3:  nop
087e3dd4 +0x1b4:  lea    0x0(%esi),%esi
087e3dda +0x1ba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::CopyTo @ 0x87e3c20

/* TiXmlElement::CopyTo(TiXmlElement*) const */

void __thiscall TiXmlElement::CopyTo(TiXmlElement *this,TiXmlElement *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  TiXmlAttribute *pTVar5;
  TiXmlNode *pTVar6;
  char *pcVar7;
  TiXmlAttributeSet *this_00;
  char *local_24;
  TiXmlElement *local_20;
  
  pcVar7 = *(char **)(this + 0x20);
  sVar3 = strlen(pcVar7);
  std::string::assign((string *)(param_1 + 0x20),pcVar7,sVar3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  local_20 = *(TiXmlElement **)(this + 0x4c);
  if ((local_20 != this + 0x2c) && (local_20 != (TiXmlElement *)0x0)) {
    this_00 = (TiXmlAttributeSet *)(param_1 + 0x2c);
    local_24 = *(char **)(local_20 + 0x18);
    pcVar7 = *(char **)(local_20 + 0x14);
    do {
      pTVar5 = *(TiXmlAttribute **)(param_1 + 0x4c);
      if (pTVar5 != (TiXmlAttribute *)this_00) goto LAB_087e3cb7;
LAB_087e3d18:
      pTVar5 = operator_new(0x24);
      *(undefined4 *)(pTVar5 + 8) = 0xffffffff;
      *(undefined4 *)(pTVar5 + 4) = 0xffffffff;
      *(undefined4 *)(pTVar5 + 0xc) = 0;
      *(undefined ***)pTVar5 = &PTR__TiXmlAttribute_08de2028;
      *(undefined1 **)(pTVar5 + 0x14) = &DAT_0948ccfc;
      *(undefined1 **)(pTVar5 + 0x18) = &DAT_0948ccfc;
      *(undefined4 *)(pTVar5 + 0x10) = 0;
      *(undefined4 *)(pTVar5 + 0x20) = 0;
      *(undefined4 *)(pTVar5 + 0x1c) = 0;
      TiXmlAttributeSet::Add(this_00,pTVar5);
      sVar3 = strlen(pcVar7);
      std::string::assign((string *)(pTVar5 + 0x14),pcVar7,sVar3);
      while( true ) {
        sVar3 = strlen(local_24);
        std::string::assign((string *)(pTVar5 + 0x18),local_24,sVar3);
        local_20 = *(TiXmlElement **)(local_20 + 0x20);
        local_24 = *(char **)(local_20 + 0x18);
        if (*(int *)(local_24 + -0xc) == 0) break;
        pcVar7 = *(char **)(local_20 + 0x14);
        pTVar5 = *(TiXmlAttribute **)(param_1 + 0x4c);
        while( true ) {
          if (pTVar5 == (TiXmlAttribute *)this_00) goto LAB_087e3d18;
LAB_087e3cb7:
          iVar4 = strcmp(*(char **)(pTVar5 + 0x14),pcVar7);
          if (iVar4 == 0) break;
          pTVar5 = *(TiXmlAttribute **)(pTVar5 + 0x20);
        }
      }
      pcVar7 = *(char **)(local_20 + 0x14);
    } while (*(int *)(pcVar7 + -0xc) != 0);
  }
  for (piVar2 = *(int **)(this + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[10]) {
    pTVar6 = (TiXmlNode *)(**(code **)(*piVar2 + 0x40))(piVar2);
    TiXmlNode::LinkEndChild((TiXmlNode *)param_1,pTVar6);
  }
  return;
}
```
