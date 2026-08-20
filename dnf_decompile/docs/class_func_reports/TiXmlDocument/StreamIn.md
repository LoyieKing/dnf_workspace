# StreamIn

`_ZN13TiXmlDocument8StreamInEPSiPSs`

`TiXmlDocument::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e8840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e8840  _ZN13TiXmlDocument8StreamInEPSiPSs
#           TiXmlDocument::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e8840, 0x087e8b39]
087e8840 +0x000:  push   %ebp
087e8841 +0x001:  mov    %esp,%ebp
087e8843 +0x003:  push   %edi
087e8844 +0x004:  push   %esi
087e8845 +0x005:  push   %ebx
087e8846 +0x006:  sub    $0x3c,%esp
087e8849 +0x009:  mov    0x10(%ebp),%ebx
087e884c +0x00c:  mov    0xc(%ebp),%esi
087e884f +0x00f:  mov    %ebx,-0x24(%ebp)
087e8852 +0x012:  jmp    087e88c9 <+0x89>
087e8854 +0x014:  lea    0x0(%esi,%eiz,1),%esi
087e8858 +0x018:  mov    %esi,(%esp)
087e885b +0x01b:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e8860 +0x020:  cmp    $0x3c,%eax
087e8863 +0x023:  mov    %eax,%edi
087e8865 +0x025:  je     087e8927 <+0xe7>
087e886b +0x02b:  test   %eax,%eax
087e886d +0x02d:  jle    087e88d6 <+0x96>
087e886f +0x02f:  mov    %esi,(%esp)
087e8872 +0x032:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e8877 +0x037:  mov    -0x24(%ebp),%edx
087e887a +0x03a:  mov    (%edx),%eax
087e887c +0x03c:  mov    -0xc(%eax),%edx
087e887f +0x03f:  lea    -0xc(%eax),%ecx
087e8882 +0x042:  mov    %ecx,-0x1c(%ebp)
087e8885 +0x045:  lea    0x1(%edx),%ebx
087e8888 +0x048:  cmp    0x4(%ecx),%ebx
087e888b +0x04b:  mov    %ebx,-0x20(%ebp)
087e888e +0x04e:  ja     087e8897 <+0x57>
087e8890 +0x050:  mov    0x8(%ecx),%ecx
087e8893 +0x053:  test   %ecx,%ecx
087e8895 +0x055:  jle    087e88b1 <+0x71>
087e8897 +0x057:  mov    -0x20(%ebp),%eax
087e889a +0x05a:  mov    -0x24(%ebp),%edx
087e889d +0x05d:  mov    %eax,0x4(%esp)
087e88a1 +0x061:  mov    %edx,(%esp)
087e88a4 +0x064:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e88a9 +0x069:  mov    -0x24(%ebp),%ecx
087e88ac +0x06c:  mov    (%ecx),%eax
087e88ae +0x06e:  mov    -0xc(%eax),%edx
087e88b1 +0x071:  mov    %edi,%ebx
087e88b3 +0x073:  mov    %bl,(%eax,%edx,1)
087e88b6 +0x076:  mov    -0x24(%ebp),%eax
087e88b9 +0x079:  mov    (%eax),%edx
087e88bb +0x07b:  lea    -0xc(%edx),%eax
087e88be +0x07e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e88c3 +0x083:  jne    087e8b1b <+0x2db>
087e88c9 +0x089:  mov    (%esi),%eax
087e88cb +0x08b:  mov    -0xc(%eax),%eax
087e88ce +0x08e:  mov    0x14(%esi,%eax,1),%ebx
087e88d2 +0x092:  test   %ebx,%ebx
087e88d4 +0x094:  je     087e8858 <+0x18>
087e88d6 +0x096:  mov    0x8(%ebp),%edx
087e88d9 +0x099:  cmpb   $0x0,0x2c(%edx)
087e88dd +0x09d:  jne    087e891f <+0xdf>
087e88df +0x09f:  mov    &_ZN9TiXmlBase11errorStringE+0x1c,%ebx
087e88e5 +0x0a5:  movb   $0x1,0x2c(%edx)
087e88e9 +0x0a9:  movl   $0x7,0x30(%edx)
087e88f0 +0x0b0:  mov    %ebx,(%esp)
087e88f3 +0x0b3:  call   0807e3b0 <_init+0xca8>
087e88f8 +0x0b8:  mov    %ebx,0x4(%esp)
087e88fc +0x0bc:  mov    %eax,0x8(%esp)
087e8900 +0x0c0:  mov    0x8(%ebp),%eax
087e8903 +0x0c3:  add    $0x34,%eax
087e8906 +0x0c6:  mov    %eax,(%esp)
087e8909 +0x0c9:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e890e +0x0ce:  mov    0x8(%ebp),%ebx
087e8911 +0x0d1:  movl   $0xffffffff,0x40(%ebx)
087e8918 +0x0d8:  movl   $0xffffffff,0x3c(%ebx)
087e891f +0x0df:  add    $0x3c,%esp
087e8922 +0x0e2:  pop    %ebx
087e8923 +0x0e3:  pop    %esi
087e8924 +0x0e4:  pop    %edi
087e8925 +0x0e5:  pop    %ebp
087e8926 +0x0e6:  ret
087e8927 +0x0e7:  mov    (%esi),%eax
087e8929 +0x0e9:  mov    0x8(%ebp),%edx
087e892c +0x0ec:  mov    -0x24(%ebp),%ebx
087e892f +0x0ef:  mov    -0xc(%eax),%eax
087e8932 +0x0f2:  add    $0x34,%edx
087e8935 +0x0f5:  mov    %edx,-0x24(%ebp)
087e8938 +0x0f8:  mov    0x14(%esi,%eax,1),%eax
087e893c +0x0fc:  test   %eax,%eax
087e893e +0x0fe:  jne    087e894c <+0x10c>
087e8940 +0x100:  mov    (%ebx),%edx
087e8942 +0x102:  mov    -0xc(%edx),%edx
087e8945 +0x105:  mov    %edx,-0x20(%ebp)
087e8948 +0x108:  test   %eax,%eax
087e894a +0x10a:  je     087e89a0 <+0x160>
087e894c +0x10c:  mov    0x8(%ebp),%ecx
087e894f +0x10f:  cmpb   $0x0,0x2c(%ecx)
087e8953 +0x113:  jne    087e891f <+0xdf>
087e8955 +0x115:  mov    &_ZN9TiXmlBase11errorStringE+0x4,%ebx
087e895b +0x11b:  movb   $0x1,0x2c(%ecx)
087e895f +0x11f:  movl   $0x1,0x30(%ecx)
087e8966 +0x126:  mov    %ebx,(%esp)
087e8969 +0x129:  call   0807e3b0 <_init+0xca8>
087e896e +0x12e:  mov    %ebx,0x4(%esp)
087e8972 +0x132:  mov    -0x24(%ebp),%ebx
087e8975 +0x135:  mov    %ebx,(%esp)
087e8978 +0x138:  mov    %eax,0x8(%esp)
087e897c +0x13c:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e8981 +0x141:  mov    0x8(%ebp),%eax
087e8984 +0x144:  movl   $0xffffffff,0x40(%eax)
087e898b +0x14b:  movl   $0xffffffff,0x3c(%eax)
087e8992 +0x152:  add    $0x3c,%esp
087e8995 +0x155:  pop    %ebx
087e8996 +0x156:  pop    %esi
087e8997 +0x157:  pop    %edi
087e8998 +0x158:  pop    %ebp
087e8999 +0x159:  ret
087e899a +0x15a:  lea    0x0(%esi),%esi
087e89a0 +0x160:  mov    %esi,(%esp)
087e89a3 +0x163:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e89a8 +0x168:  cmp    $0x3e,%eax
087e89ab +0x16b:  je     087e8a10 <+0x1d0>
087e89ad +0x16d:  mov    %esi,(%esp)
087e89b0 +0x170:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e89b5 +0x175:  test   %eax,%eax
087e89b7 +0x177:  mov    %eax,-0x1c(%ebp)
087e89ba +0x17a:  jle    087e8a83 <+0x243>
087e89c0 +0x180:  mov    (%ebx),%eax
087e89c2 +0x182:  mov    -0xc(%eax),%edx
087e89c5 +0x185:  lea    -0xc(%eax),%ecx
087e89c8 +0x188:  lea    0x1(%edx),%edi
087e89cb +0x18b:  cmp    0x4(%ecx),%edi
087e89ce +0x18e:  ja     087e89d7 <+0x197>
087e89d0 +0x190:  mov    0x8(%ecx),%ecx
087e89d3 +0x193:  test   %ecx,%ecx
087e89d5 +0x195:  jle    087e89e8 <+0x1a8>
087e89d7 +0x197:  mov    %edi,0x4(%esp)
087e89db +0x19b:  mov    %ebx,(%esp)
087e89de +0x19e:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e89e3 +0x1a3:  mov    (%ebx),%eax
087e89e5 +0x1a5:  mov    -0xc(%eax),%edx
087e89e8 +0x1a8:  movzbl -0x1c(%ebp),%ecx
087e89ec +0x1ac:  mov    %cl,(%eax,%edx,1)
087e89ef +0x1af:  mov    (%ebx),%edx
087e89f1 +0x1b1:  lea    -0xc(%edx),%eax
087e89f4 +0x1b4:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e89f9 +0x1b9:  jne    087e8b07 <+0x2c7>
087e89ff +0x1bf:  mov    (%esi),%eax
087e8a01 +0x1c1:  mov    -0xc(%eax),%eax
087e8a04 +0x1c4:  mov    0x14(%esi,%eax,1),%eax
087e8a08 +0x1c8:  jmp    087e8948 <+0x108>
087e8a0d +0x1cd:  lea    0x0(%esi),%esi
087e8a10 +0x1d0:  mov    (%esi),%eax
087e8a12 +0x1d2:  mov    -0xc(%eax),%eax
087e8a15 +0x1d5:  mov    0x14(%esi,%eax,1),%eax
087e8a19 +0x1d9:  test   %eax,%eax
087e8a1b +0x1db:  jne    087e894c <+0x10c>
087e8a21 +0x1e1:  mov    -0x20(%ebp),%eax
087e8a24 +0x1e4:  movl   $0x0,0x8(%esp)
087e8a2c +0x1ec:  add    (%ebx),%eax
087e8a2e +0x1ee:  mov    %eax,0x4(%esp)
087e8a32 +0x1f2:  mov    0x8(%ebp),%eax
087e8a35 +0x1f5:  mov    %eax,(%esp)
087e8a38 +0x1f8:  call   087e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>  ; TiXmlNode::Identify(char const*, TiXmlEncoding)
087e8a3d +0x1fd:  test   %eax,%eax
087e8a3f +0x1ff:  mov    %eax,%edi
087e8a41 +0x201:  je     087e8ad7 <+0x297>
087e8a47 +0x207:  mov    (%eax),%eax
087e8a49 +0x209:  mov    %ebx,0x8(%esp)
087e8a4d +0x20d:  mov    %esi,0x4(%esp)
087e8a51 +0x211:  mov    %edi,(%esp)
087e8a54 +0x214:  call   *0x48(%eax)
087e8a57 +0x217:  mov    (%edi),%eax
087e8a59 +0x219:  mov    %edi,(%esp)
087e8a5c +0x21c:  call   *0x2c(%eax)
087e8a5f +0x21f:  mov    (%edi),%edx
087e8a61 +0x221:  mov    %edi,(%esp)
087e8a64 +0x224:  mov    %eax,-0x28(%ebp)
087e8a67 +0x227:  call   *0x4(%edx)
087e8a6a +0x22a:  mov    -0x28(%ebp),%eax
087e8a6d +0x22d:  test   %eax,%eax
087e8a6f +0x22f:  jne    087e891f <+0xdf>
087e8a75 +0x235:  mov    (%esi),%eax
087e8a77 +0x237:  mov    -0xc(%eax),%eax
087e8a7a +0x23a:  mov    0x14(%esi,%eax,1),%eax
087e8a7e +0x23e:  jmp    087e893c <+0xfc>
087e8a83 +0x243:  mov    0x8(%ebp),%eax
087e8a86 +0x246:  cmpb   $0x0,0x2c(%eax)
087e8a8a +0x24a:  jne    087e8a10 <+0x1d0>
087e8a8c +0x24c:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%edi
087e8a92 +0x252:  movb   $0x1,0x2c(%eax)
087e8a96 +0x256:  movl   $0xd,0x30(%eax)
087e8a9d +0x25d:  mov    %edi,(%esp)
087e8aa0 +0x260:  call   0807e3b0 <_init+0xca8>
087e8aa5 +0x265:  mov    -0x24(%ebp),%edx
087e8aa8 +0x268:  mov    %edi,0x4(%esp)
087e8aac +0x26c:  mov    %edx,(%esp)
087e8aaf +0x26f:  mov    %eax,0x8(%esp)
087e8ab3 +0x273:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e8ab8 +0x278:  mov    0x8(%ebp),%ecx
087e8abb +0x27b:  mov    (%esi),%eax
087e8abd +0x27d:  movl   $0xffffffff,0x40(%ecx)
087e8ac4 +0x284:  movl   $0xffffffff,0x3c(%ecx)
087e8acb +0x28b:  mov    -0xc(%eax),%eax
087e8ace +0x28e:  mov    0x14(%esi,%eax,1),%eax
087e8ad2 +0x292:  jmp    087e8a19 <+0x1d9>
087e8ad7 +0x297:  mov    0x8(%ebp),%edx
087e8ada +0x29a:  movl   $0x0,0x10(%esp)
087e8ae2 +0x2a2:  movl   $0x0,0xc(%esp)
087e8aea +0x2aa:  movl   $0x0,0x8(%esp)
087e8af2 +0x2b2:  movl   $0x1,0x4(%esp)
087e8afa +0x2ba:  mov    %edx,(%esp)
087e8afd +0x2bd:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8b02 +0x2c2:  jmp    087e891f <+0xdf>
087e8b07 +0x2c7:  movl   $0x0,0x8(%eax)
087e8b0e +0x2ce:  mov    %edi,-0xc(%edx)
087e8b11 +0x2d1:  movb   $0x0,0xc(%eax,%edi,1)
087e8b16 +0x2d6:  jmp    087e89ff <+0x1bf>
087e8b1b +0x2db:  mov    -0x20(%ebp),%ecx
087e8b1e +0x2de:  movl   $0x0,0x8(%eax)
087e8b25 +0x2e5:  mov    %ecx,-0xc(%edx)
087e8b28 +0x2e8:  movb   $0x0,0xc(%eax,%ecx,1)
087e8b2d +0x2ed:  jmp    087e88c9 <+0x89>
087e8b32 +0x2f2:  lea    0x0(%esi,%eiz,1),%esi
087e8b39 +0x2f9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDocument::StreamIn @ 0x87e8840

/* TiXmlDocument::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlDocument::StreamIn(TiXmlDocument *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_20;
  
  while (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) == 0) {
    iVar4 = std::istream::peek(param_1);
    if (iVar4 == 0x3c) {
      iVar4 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
      goto LAB_087e893c;
    }
    if (iVar4 < 1) break;
    std::istream::get(param_1);
    iVar6 = *(int *)param_2;
    iVar7 = *(int *)(iVar6 + -0xc);
    uVar1 = iVar7 + 1;
    if ((*(uint *)(iVar6 + -8) < uVar1) || (0 < *(int *)(iVar6 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar6 = *(int *)param_2;
      iVar7 = *(int *)(iVar6 + -0xc);
    }
    *(char *)(iVar6 + iVar7) = (char)iVar4;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
  }
  uVar3 = TiXmlBase::errorString._28_4_;
  if (this[0x2c] == (TiXmlDocument)0x0) {
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 7;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
  }
  return;
LAB_087e893c:
  if (iVar4 != 0) {
LAB_087e894c:
    uVar3 = TiXmlBase::errorString._4_4_;
    if (this[0x2c] != (TiXmlDocument)0x0) {
      return;
    }
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 1;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    return;
  }
  iVar4 = *(int *)(*(int *)param_2 + -0xc);
  iVar6 = 0;
  while( true ) {
    if (iVar6 != 0) goto LAB_087e894c;
    iVar6 = std::istream::peek(param_1);
    if (iVar6 == 0x3e) goto LAB_087e8a10;
    iVar6 = std::istream::get(param_1);
    uVar3 = TiXmlBase::errorString._52_4_;
    if (iVar6 < 1) break;
    iVar7 = *(int *)param_2;
    iVar9 = *(int *)(iVar7 + -0xc);
    uVar1 = iVar9 + 1;
    if ((*(uint *)(iVar7 + -8) < uVar1) || (0 < *(int *)(iVar7 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar7 = *(int *)param_2;
      iVar9 = *(int *)(iVar7 + -0xc);
    }
    local_20 = (undefined1)iVar6;
    *(undefined1 *)(iVar7 + iVar9) = local_20;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    iVar6 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  }
  if (this[0x2c] == (TiXmlDocument)0x0) {
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 0xd;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    iVar6 = *(int *)param_1;
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    iVar6 = *(int *)(param_1 + *(int *)(iVar6 + -0xc) + 0x14);
  }
  else {
LAB_087e8a10:
    iVar6 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  }
  if (iVar6 != 0) goto LAB_087e894c;
  piVar8 = (int *)TiXmlNode::Identify((TiXmlNode *)this,iVar4 + *(int *)param_2,0);
  if (piVar8 == (int *)0x0) {
    SetError(this,1,0,0,0);
    return;
  }
  (**(code **)(*piVar8 + 0x48))(piVar8,param_1,param_2);
  iVar4 = (**(code **)(*piVar8 + 0x2c))(piVar8);
  (**(code **)(*piVar8 + 4))(piVar8);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  goto LAB_087e893c;
}
```
