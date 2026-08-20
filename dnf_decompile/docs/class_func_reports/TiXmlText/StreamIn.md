# StreamIn

`_ZN9TiXmlText8StreamInEPSiPSs`

`TiXmlText::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e8b40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e8b40  _ZN9TiXmlText8StreamInEPSiPSs
#           TiXmlText::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e8b40, 0x087e8ccb]
087e8b40 +0x000:  push   %ebp
087e8b41 +0x001:  mov    %esp,%ebp
087e8b43 +0x003:  push   %edi
087e8b44 +0x004:  push   %esi
087e8b45 +0x005:  push   %ebx
087e8b46 +0x006:  sub    $0x4c,%esp
087e8b49 +0x009:  mov    0x10(%ebp),%edi
087e8b4c +0x00c:  mov    0xc(%ebp),%ebx
087e8b4f +0x00f:  mov    %edi,-0x3c(%ebp)
087e8b52 +0x012:  lea    0x0(%esi),%esi
087e8b58 +0x018:  mov    (%ebx),%eax
087e8b5a +0x01a:  mov    -0xc(%eax),%eax
087e8b5d +0x01d:  mov    0x14(%ebx,%eax,1),%esi
087e8b61 +0x021:  test   %esi,%esi
087e8b63 +0x023:  jne    087e8c58 <+0x118>
087e8b69 +0x029:  mov    %ebx,(%esp)
087e8b6c +0x02c:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e8b71 +0x031:  mov    %eax,%esi
087e8b73 +0x033:  mov    0x8(%ebp),%eax
087e8b76 +0x036:  cmpb   $0x0,0x2c(%eax)
087e8b7a +0x03a:  jne    087e8b85 <+0x45>
087e8b7c +0x03c:  cmp    $0x3c,%esi
087e8b7f +0x03f:  je     087e8c58 <+0x118>
087e8b85 +0x045:  test   %esi,%esi
087e8b87 +0x047:  jle    087e8c60 <+0x120>
087e8b8d +0x04d:  mov    -0x3c(%ebp),%ecx
087e8b90 +0x050:  mov    (%ecx),%eax
087e8b92 +0x052:  mov    -0xc(%eax),%edx
087e8b95 +0x055:  lea    -0xc(%eax),%edi
087e8b98 +0x058:  mov    %edi,-0x1c(%ebp)
087e8b9b +0x05b:  lea    0x1(%edx),%ecx
087e8b9e +0x05e:  cmp    0x4(%edi),%ecx
087e8ba1 +0x061:  mov    %ecx,-0x2c(%ebp)
087e8ba4 +0x064:  ja     087e8bad <+0x6d>
087e8ba6 +0x066:  mov    0x8(%edi),%ecx
087e8ba9 +0x069:  test   %ecx,%ecx
087e8bab +0x06b:  jle    087e8bc7 <+0x87>
087e8bad +0x06d:  mov    -0x3c(%ebp),%eax
087e8bb0 +0x070:  mov    -0x2c(%ebp),%edi
087e8bb3 +0x073:  mov    %eax,(%esp)
087e8bb6 +0x076:  mov    %edi,0x4(%esp)
087e8bba +0x07a:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e8bbf +0x07f:  mov    -0x3c(%ebp),%edx
087e8bc2 +0x082:  mov    (%edx),%eax
087e8bc4 +0x084:  mov    -0xc(%eax),%edx
087e8bc7 +0x087:  mov    %esi,%ecx
087e8bc9 +0x089:  mov    %cl,(%eax,%edx,1)
087e8bcc +0x08c:  mov    -0x3c(%ebp),%edi
087e8bcf +0x08f:  mov    (%edi),%edx
087e8bd1 +0x091:  lea    -0xc(%edx),%eax
087e8bd4 +0x094:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e8bd9 +0x099:  jne    087e8cb9 <+0x179>
087e8bdf +0x09f:  mov    %ebx,(%esp)
087e8be2 +0x0a2:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e8be7 +0x0a7:  mov    0x8(%ebp),%edi
087e8bea +0x0aa:  cmpb   $0x0,0x2c(%edi)
087e8bee +0x0ae:  je     087e8b58 <+0x18>
087e8bf4 +0x0b4:  cmp    $0x3e,%esi
087e8bf7 +0x0b7:  jne    087e8b58 <+0x18>
087e8bfd +0x0bd:  mov    -0x3c(%ebp),%edx
087e8c00 +0x0c0:  mov    (%edx),%eax
087e8c02 +0x0c2:  mov    -0xc(%eax),%esi
087e8c05 +0x0c5:  lea    -0xc(%eax),%edx
087e8c08 +0x0c8:  cmp    $0x2,%esi
087e8c0b +0x0cb:  jbe    087e8b58 <+0x18>
087e8c11 +0x0d1:  mov    0x8(%edx),%edx
087e8c14 +0x0d4:  test   %edx,%edx
087e8c16 +0x0d6:  js     087e8c28 <+0xe8>
087e8c18 +0x0d8:  mov    -0x3c(%ebp),%ecx
087e8c1b +0x0db:  mov    %ecx,(%esp)
087e8c1e +0x0de:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087e8c23 +0x0e3:  mov    -0x3c(%ebp),%edi
087e8c26 +0x0e6:  mov    (%edi),%eax
087e8c28 +0x0e8:  cmpb   $0x5d,-0x2(%eax,%esi,1)
087e8c2d +0x0ed:  jne    087e8b58 <+0x18>
087e8c33 +0x0f3:  mov    -0x4(%eax),%edi
087e8c36 +0x0f6:  test   %edi,%edi
087e8c38 +0x0f8:  js     087e8c4a <+0x10a>
087e8c3a +0x0fa:  mov    -0x3c(%ebp),%eax
087e8c3d +0x0fd:  mov    %eax,(%esp)
087e8c40 +0x100:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087e8c45 +0x105:  mov    -0x3c(%ebp),%edx
087e8c48 +0x108:  mov    (%edx),%eax
087e8c4a +0x10a:  cmpb   $0x5d,-0x3(%eax,%esi,1)
087e8c4f +0x10f:  jne    087e8b58 <+0x18>
087e8c55 +0x115:  lea    0x0(%esi),%esi
087e8c58 +0x118:  add    $0x4c,%esp
087e8c5b +0x11b:  pop    %ebx
087e8c5c +0x11c:  pop    %esi
087e8c5d +0x11d:  pop    %edi
087e8c5e +0x11e:  pop    %ebp
087e8c5f +0x11f:  ret
087e8c60 +0x120:  mov    0x8(%ebp),%edx
087e8c63 +0x123:  mov    %edx,(%esp)
087e8c66 +0x126:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e8c6b +0x12b:  test   %eax,%eax
087e8c6d +0x12d:  mov    %eax,%ebx
087e8c6f +0x12f:  je     087e8c58 <+0x118>
087e8c71 +0x131:  cmpb   $0x0,0x2c(%eax)
087e8c75 +0x135:  jne    087e8c58 <+0x118>
087e8c77 +0x137:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%esi
087e8c7d +0x13d:  movb   $0x1,0x2c(%eax)
087e8c81 +0x141:  movl   $0xd,0x30(%eax)
087e8c88 +0x148:  mov    %esi,(%esp)
087e8c8b +0x14b:  call   0807e3b0 <_init+0xca8>
087e8c90 +0x150:  mov    %esi,0x4(%esp)
087e8c94 +0x154:  mov    %eax,0x8(%esp)
087e8c98 +0x158:  lea    0x34(%ebx),%eax
087e8c9b +0x15b:  mov    %eax,(%esp)
087e8c9e +0x15e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e8ca3 +0x163:  movl   $0xffffffff,0x40(%ebx)
087e8caa +0x16a:  movl   $0xffffffff,0x3c(%ebx)
087e8cb1 +0x171:  add    $0x4c,%esp
087e8cb4 +0x174:  pop    %ebx
087e8cb5 +0x175:  pop    %esi
087e8cb6 +0x176:  pop    %edi
087e8cb7 +0x177:  pop    %ebp
087e8cb8 +0x178:  ret
087e8cb9 +0x179:  mov    -0x2c(%ebp),%ecx
087e8cbc +0x17c:  movl   $0x0,0x8(%eax)
087e8cc3 +0x183:  mov    %ecx,-0xc(%edx)
087e8cc6 +0x186:  movb   $0x0,0xc(%eax,%ecx,1)
087e8ccb +0x18b:  jmp    087e8bdf <+0x9f>
```

## 反编译 C

```c
// TiXmlText::StreamIn @ 0x87e8b40

/* TiXmlText::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlText::StreamIn(TiXmlText *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 __s;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return;
    }
    iVar3 = std::istream::peek(param_1);
    if ((this[0x2c] == (TiXmlText)0x0) && (iVar3 == 0x3c)) {
      return;
    }
    if (iVar3 < 1) break;
    iVar4 = *(int *)param_2;
    iVar6 = *(int *)(iVar4 + -0xc);
    uVar1 = iVar6 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar1) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar4 = *(int *)param_2;
      iVar6 = *(int *)(iVar4 + -0xc);
    }
    *(char *)(iVar4 + iVar6) = (char)iVar3;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    std::istream::get(param_1);
    if ((this[0x2c] != (TiXmlText)0x0) && (iVar3 == 0x3e)) {
      iVar3 = *(int *)param_2;
      uVar1 = *(uint *)(iVar3 + -0xc);
      if (2 < uVar1) {
        if (-1 < *(int *)(iVar3 + -4)) {
          std::string::_M_leak_hard(param_2);
          iVar3 = *(int *)param_2;
        }
        if (*(char *)(iVar3 + -2 + uVar1) == ']') {
          if (-1 < *(int *)(iVar3 + -4)) {
            std::string::_M_leak_hard(param_2);
            iVar3 = *(int *)param_2;
          }
          if (*(char *)(iVar3 + -3 + uVar1) == ']') {
            return;
          }
        }
      }
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
  sVar5 = strlen((char *)__s);
  std::string::assign((string *)(iVar3 + 0x34),(char *)__s,sVar5);
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  return;
}
```
