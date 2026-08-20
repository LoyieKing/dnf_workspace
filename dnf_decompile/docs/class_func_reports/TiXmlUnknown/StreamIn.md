# StreamIn

`_ZN12TiXmlUnknown8StreamInEPSiPSs`

`TiXmlUnknown::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlUnknown` | `0x087e9360` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9360  _ZN12TiXmlUnknown8StreamInEPSiPSs
#           TiXmlUnknown::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e9360, 0x087e945f]
087e9360 +0x00:  push   %ebp
087e9361 +0x01:  mov    %esp,%ebp
087e9363 +0x03:  push   %edi
087e9364 +0x04:  push   %esi
087e9365 +0x05:  push   %ebx
087e9366 +0x06:  sub    $0x4c,%esp
087e9369 +0x09:  mov    0x10(%ebp),%esi
087e936c +0x0c:  mov    0xc(%ebp),%ebx
087e936f +0x0f:  mov    %esi,-0x3c(%ebp)
087e9372 +0x12:  lea    0x0(%esi),%esi
087e9378 +0x18:  mov    (%ebx),%eax
087e937a +0x1a:  mov    -0xc(%eax),%eax
087e937d +0x1d:  mov    0x14(%ebx,%eax,1),%esi
087e9381 +0x21:  test   %esi,%esi
087e9383 +0x23:  jne    087e93e9 <+0x89>
087e9385 +0x25:  mov    %ebx,(%esp)
087e9388 +0x28:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e938d +0x2d:  test   %eax,%eax
087e938f +0x2f:  jle    087e93f8 <+0x98>
087e9391 +0x31:  mov    -0x3c(%ebp),%ecx
087e9394 +0x34:  mov    (%ecx),%edx
087e9396 +0x36:  mov    -0xc(%edx),%ecx
087e9399 +0x39:  lea    -0xc(%edx),%esi
087e939c +0x3c:  mov    %esi,-0x1c(%ebp)
087e939f +0x3f:  lea    0x1(%ecx),%edi
087e93a2 +0x42:  cmp    0x4(%esi),%edi
087e93a5 +0x45:  mov    %edi,-0x2c(%ebp)
087e93a8 +0x48:  ja     087e93b1 <+0x51>
087e93aa +0x4a:  mov    0x8(%esi),%edi
087e93ad +0x4d:  test   %edi,%edi
087e93af +0x4f:  jle    087e93d1 <+0x71>
087e93b1 +0x51:  mov    -0x2c(%ebp),%edx
087e93b4 +0x54:  mov    -0x3c(%ebp),%ecx
087e93b7 +0x57:  mov    %eax,-0x20(%ebp)
087e93ba +0x5a:  mov    %edx,0x4(%esp)
087e93be +0x5e:  mov    %ecx,(%esp)
087e93c1 +0x61:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e93c6 +0x66:  mov    -0x3c(%ebp),%esi
087e93c9 +0x69:  mov    -0x20(%ebp),%eax
087e93cc +0x6c:  mov    (%esi),%edx
087e93ce +0x6e:  mov    -0xc(%edx),%ecx
087e93d1 +0x71:  mov    %al,(%edx,%ecx,1)
087e93d4 +0x74:  mov    -0x3c(%ebp),%edi
087e93d7 +0x77:  mov    (%edi),%ecx
087e93d9 +0x79:  lea    -0xc(%ecx),%edx
087e93dc +0x7c:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e93e2 +0x82:  jne    087e944b <+0xeb>
087e93e4 +0x84:  cmp    $0x3e,%eax
087e93e7 +0x87:  jne    087e9378 <+0x18>
087e93e9 +0x89:  add    $0x4c,%esp
087e93ec +0x8c:  pop    %ebx
087e93ed +0x8d:  pop    %esi
087e93ee +0x8e:  pop    %edi
087e93ef +0x8f:  pop    %ebp
087e93f0 +0x90:  ret
087e93f1 +0x91:  lea    0x0(%esi,%eiz,1),%esi
087e93f8 +0x98:  mov    0x8(%ebp),%eax
087e93fb +0x9b:  mov    %eax,(%esp)
087e93fe +0x9e:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e9403 +0xa3:  test   %eax,%eax
087e9405 +0xa5:  mov    %eax,%ebx
087e9407 +0xa7:  je     087e93e9 <+0x89>
087e9409 +0xa9:  cmpb   $0x0,0x2c(%eax)
087e940d +0xad:  jne    087e93e9 <+0x89>
087e940f +0xaf:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%esi
087e9415 +0xb5:  movb   $0x1,0x2c(%eax)
087e9419 +0xb9:  movl   $0xd,0x30(%eax)
087e9420 +0xc0:  mov    %esi,(%esp)
087e9423 +0xc3:  call   0807e3b0 <_init+0xca8>
087e9428 +0xc8:  mov    %esi,0x4(%esp)
087e942c +0xcc:  mov    %eax,0x8(%esp)
087e9430 +0xd0:  lea    0x34(%ebx),%eax
087e9433 +0xd3:  mov    %eax,(%esp)
087e9436 +0xd6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e943b +0xdb:  movl   $0xffffffff,0x40(%ebx)
087e9442 +0xe2:  movl   $0xffffffff,0x3c(%ebx)
087e9449 +0xe9:  jmp    087e93e9 <+0x89>
087e944b +0xeb:  mov    -0x2c(%ebp),%esi
087e944e +0xee:  movl   $0x0,0x8(%edx)
087e9455 +0xf5:  mov    %esi,-0xc(%ecx)
087e9458 +0xf8:  movb   $0x0,0xc(%edx,%esi,1)
087e945d +0xfd:  jmp    087e93e4 <+0x84>
087e945f +0xff:  nop
```

## 反编译 C

```c
// TiXmlUnknown::StreamIn @ 0x87e9360

/* TiXmlUnknown::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlUnknown::StreamIn(TiXmlUnknown *this,istream *param_1,string *param_2)

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
