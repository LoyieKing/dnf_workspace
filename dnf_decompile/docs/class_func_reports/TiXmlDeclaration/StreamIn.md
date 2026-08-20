# StreamIn

`_ZN16TiXmlDeclaration8StreamInEPSiPSs`

`TiXmlDeclaration::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e9100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9100  _ZN16TiXmlDeclaration8StreamInEPSiPSs
#           TiXmlDeclaration::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e9100, 0x087e91ff]
087e9100 +0x00:  push   %ebp
087e9101 +0x01:  mov    %esp,%ebp
087e9103 +0x03:  push   %edi
087e9104 +0x04:  push   %esi
087e9105 +0x05:  push   %ebx
087e9106 +0x06:  sub    $0x4c,%esp
087e9109 +0x09:  mov    0x10(%ebp),%esi
087e910c +0x0c:  mov    0xc(%ebp),%ebx
087e910f +0x0f:  mov    %esi,-0x3c(%ebp)
087e9112 +0x12:  lea    0x0(%esi),%esi
087e9118 +0x18:  mov    (%ebx),%eax
087e911a +0x1a:  mov    -0xc(%eax),%eax
087e911d +0x1d:  mov    0x14(%ebx,%eax,1),%esi
087e9121 +0x21:  test   %esi,%esi
087e9123 +0x23:  jne    087e9189 <+0x89>
087e9125 +0x25:  mov    %ebx,(%esp)
087e9128 +0x28:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e912d +0x2d:  test   %eax,%eax
087e912f +0x2f:  jle    087e9198 <+0x98>
087e9131 +0x31:  mov    -0x3c(%ebp),%ecx
087e9134 +0x34:  mov    (%ecx),%edx
087e9136 +0x36:  mov    -0xc(%edx),%ecx
087e9139 +0x39:  lea    -0xc(%edx),%esi
087e913c +0x3c:  mov    %esi,-0x1c(%ebp)
087e913f +0x3f:  lea    0x1(%ecx),%edi
087e9142 +0x42:  cmp    0x4(%esi),%edi
087e9145 +0x45:  mov    %edi,-0x2c(%ebp)
087e9148 +0x48:  ja     087e9151 <+0x51>
087e914a +0x4a:  mov    0x8(%esi),%edi
087e914d +0x4d:  test   %edi,%edi
087e914f +0x4f:  jle    087e9171 <+0x71>
087e9151 +0x51:  mov    -0x2c(%ebp),%edx
087e9154 +0x54:  mov    -0x3c(%ebp),%ecx
087e9157 +0x57:  mov    %eax,-0x20(%ebp)
087e915a +0x5a:  mov    %edx,0x4(%esp)
087e915e +0x5e:  mov    %ecx,(%esp)
087e9161 +0x61:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e9166 +0x66:  mov    -0x3c(%ebp),%esi
087e9169 +0x69:  mov    -0x20(%ebp),%eax
087e916c +0x6c:  mov    (%esi),%edx
087e916e +0x6e:  mov    -0xc(%edx),%ecx
087e9171 +0x71:  mov    %al,(%edx,%ecx,1)
087e9174 +0x74:  mov    -0x3c(%ebp),%edi
087e9177 +0x77:  mov    (%edi),%ecx
087e9179 +0x79:  lea    -0xc(%ecx),%edx
087e917c +0x7c:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e9182 +0x82:  jne    087e91eb <+0xeb>
087e9184 +0x84:  cmp    $0x3e,%eax
087e9187 +0x87:  jne    087e9118 <+0x18>
087e9189 +0x89:  add    $0x4c,%esp
087e918c +0x8c:  pop    %ebx
087e918d +0x8d:  pop    %esi
087e918e +0x8e:  pop    %edi
087e918f +0x8f:  pop    %ebp
087e9190 +0x90:  ret
087e9191 +0x91:  lea    0x0(%esi,%eiz,1),%esi
087e9198 +0x98:  mov    0x8(%ebp),%eax
087e919b +0x9b:  mov    %eax,(%esp)
087e919e +0x9e:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e91a3 +0xa3:  test   %eax,%eax
087e91a5 +0xa5:  mov    %eax,%ebx
087e91a7 +0xa7:  je     087e9189 <+0x89>
087e91a9 +0xa9:  cmpb   $0x0,0x2c(%eax)
087e91ad +0xad:  jne    087e9189 <+0x89>
087e91af +0xaf:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%esi
087e91b5 +0xb5:  movb   $0x1,0x2c(%eax)
087e91b9 +0xb9:  movl   $0xd,0x30(%eax)
087e91c0 +0xc0:  mov    %esi,(%esp)
087e91c3 +0xc3:  call   0807e3b0 <_init+0xca8>
087e91c8 +0xc8:  mov    %esi,0x4(%esp)
087e91cc +0xcc:  mov    %eax,0x8(%esp)
087e91d0 +0xd0:  lea    0x34(%ebx),%eax
087e91d3 +0xd3:  mov    %eax,(%esp)
087e91d6 +0xd6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e91db +0xdb:  movl   $0xffffffff,0x40(%ebx)
087e91e2 +0xe2:  movl   $0xffffffff,0x3c(%ebx)
087e91e9 +0xe9:  jmp    087e9189 <+0x89>
087e91eb +0xeb:  mov    -0x2c(%ebp),%esi
087e91ee +0xee:  movl   $0x0,0x8(%edx)
087e91f5 +0xf5:  mov    %esi,-0xc(%ecx)
087e91f8 +0xf8:  movb   $0x0,0xc(%edx,%esi,1)
087e91fd +0xfd:  jmp    087e9184 <+0x84>
087e91ff +0xff:  nop
```

## 反编译 C

```c
// TiXmlDeclaration::StreamIn @ 0x87e9100

/* TiXmlDeclaration::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlDeclaration::StreamIn(TiXmlDeclaration *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 __s;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return;
    }
    iVar3 = std::istream::get(param_1);
    if (iVar3 < 1) break;
    iVar6 = *(int *)param_2;
    iVar5 = *(int *)(iVar6 + -0xc);
    uVar1 = iVar5 + 1;
    if ((*(uint *)(iVar6 + -8) < uVar1) || (0 < *(int *)(iVar6 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar6 = *(int *)param_2;
      iVar5 = *(int *)(iVar6 + -0xc);
    }
    *(char *)(iVar6 + iVar5) = (char)iVar3;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    if (iVar3 == 0x3e) {
      return;
    }
  }
  iVar3 = TiXmlNode::GetDocument((TiXmlNode *)this);
  __s = TiXmlBase::errorString._52_4_;
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar3 + 0x2c) = 1;
  *(undefined4 *)(iVar3 + 0x30) = 0xd;
  sVar4 = strlen((char *)__s);
  std::string::assign((string *)(iVar3 + 0x34),(char *)__s,sVar4);
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  return;
}
```
