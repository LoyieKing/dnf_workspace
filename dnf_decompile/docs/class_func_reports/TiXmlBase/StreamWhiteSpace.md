# StreamWhiteSpace

`_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs`

`TiXmlBase::StreamWhiteSpace(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e7140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7140  _ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs
#           TiXmlBase::StreamWhiteSpace(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e7140, 0x087e7229]
087e7140 +0x00:  push   %ebp
087e7141 +0x01:  mov    %esp,%ebp
087e7143 +0x03:  push   %edi
087e7144 +0x04:  push   %esi
087e7145 +0x05:  push   %ebx
087e7146 +0x06:  sub    $0x4c,%esp
087e7149 +0x09:  mov    0x8(%ebp),%ebx
087e714c +0x0c:  mov    0xc(%ebp),%esi
087e714f +0x0f:  nop
087e7150 +0x10:  mov    (%ebx),%eax
087e7152 +0x12:  mov    -0xc(%eax),%eax
087e7155 +0x15:  mov    0x14(%ebx,%eax,1),%eax
087e7159 +0x19:  test   %eax,%eax
087e715b +0x1b:  jne    087e7218 <+0xd8>
087e7161 +0x21:  mov    %ebx,(%esp)
087e7164 +0x24:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e7169 +0x29:  cmp    $0xff,%eax
087e716e +0x2e:  mov    %eax,%edi
087e7170 +0x30:  jle    087e7180 <+0x40>
087e7172 +0x32:  add    $0x4c,%esp
087e7175 +0x35:  mov    $0x1,%eax
087e717a +0x3a:  pop    %ebx
087e717b +0x3b:  pop    %esi
087e717c +0x3c:  pop    %edi
087e717d +0x3d:  pop    %ebp
087e717e +0x3e:  ret
087e717f +0x3f:  nop
087e7180 +0x40:  mov    %eax,%edx
087e7182 +0x42:  movzbl %al,%eax
087e7185 +0x45:  mov    %eax,(%esp)
087e7188 +0x48:  mov    %dl,-0x20(%ebp)
087e718b +0x4b:  call   0807e280 <_init+0xb78>
087e7190 +0x50:  mov    %edi,%edx
087e7192 +0x52:  test   %eax,%eax
087e7194 +0x54:  jne    087e71a0 <+0x60>
087e7196 +0x56:  cmp    $0xa,%dl
087e7199 +0x59:  je     087e71a0 <+0x60>
087e719b +0x5b:  cmp    $0xd,%dl
087e719e +0x5e:  jne    087e7172 <+0x32>
087e71a0 +0x60:  test   %edi,%edi
087e71a2 +0x62:  jle    087e7172 <+0x32>
087e71a4 +0x64:  mov    %ebx,(%esp)
087e71a7 +0x67:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e71ac +0x6c:  mov    (%esi),%edx
087e71ae +0x6e:  mov    -0xc(%edx),%ecx
087e71b1 +0x71:  mov    %eax,-0x3c(%ebp)
087e71b4 +0x74:  lea    -0xc(%edx),%eax
087e71b7 +0x77:  mov    %eax,-0x1c(%ebp)
087e71ba +0x7a:  lea    0x1(%ecx),%edi
087e71bd +0x7d:  cmp    0x4(%eax),%edi
087e71c0 +0x80:  mov    %edi,-0x2c(%ebp)
087e71c3 +0x83:  jbe    087e7208 <+0xc8>
087e71c5 +0x85:  mov    -0x2c(%ebp),%edi
087e71c8 +0x88:  mov    %esi,(%esp)
087e71cb +0x8b:  mov    %edi,0x4(%esp)
087e71cf +0x8f:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e71d4 +0x94:  mov    (%esi),%edx
087e71d6 +0x96:  mov    -0xc(%edx),%ecx
087e71d9 +0x99:  movzbl -0x3c(%ebp),%eax
087e71dd +0x9d:  mov    %al,(%edx,%ecx,1)
087e71e0 +0xa0:  mov    (%esi),%ecx
087e71e2 +0xa2:  lea    -0xc(%ecx),%edx
087e71e5 +0xa5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e71eb +0xab:  je     087e7150 <+0x10>
087e71f1 +0xb1:  mov    -0x2c(%ebp),%edi
087e71f4 +0xb4:  movl   $0x0,0x8(%edx)
087e71fb +0xbb:  mov    %edi,-0xc(%ecx)
087e71fe +0xbe:  movb   $0x0,0xc(%edx,%edi,1)
087e7203 +0xc3:  jmp    087e7150 <+0x10>
087e7208 +0xc8:  mov    -0x1c(%ebp),%eax
087e720b +0xcb:  mov    0x8(%eax),%edi
087e720e +0xce:  test   %edi,%edi
087e7210 +0xd0:  jg     087e71c5 <+0x85>
087e7212 +0xd2:  jmp    087e71d9 <+0x99>
087e7214 +0xd4:  lea    0x0(%esi,%eiz,1),%esi
087e7218 +0xd8:  add    $0x4c,%esp
087e721b +0xdb:  xor    %eax,%eax
087e721d +0xdd:  pop    %ebx
087e721e +0xde:  pop    %esi
087e721f +0xdf:  pop    %edi
087e7220 +0xe0:  pop    %ebp
087e7221 +0xe1:  ret
087e7222 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
087e7229 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlBase::StreamWhiteSpace @ 0x87e7140

/* TiXmlBase::StreamWhiteSpace(std::istream*, std::string*) */

undefined4 TiXmlBase::StreamWhiteSpace(istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return 0;
    }
    uVar3 = std::istream::peek(param_1);
    if (0xff < (int)uVar3) break;
    iVar4 = isspace(uVar3 & 0xff);
    if (((iVar4 == 0) && ((char)uVar3 != '\n')) && ((char)uVar3 != '\r')) {
      return 1;
    }
    if ((int)uVar3 < 1) {
      return 1;
    }
    uVar2 = std::istream::get(param_1);
    iVar4 = *(int *)param_2;
    iVar5 = *(int *)(iVar4 + -0xc);
    uVar3 = iVar5 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar3) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_2,uVar3);
      iVar4 = *(int *)param_2;
      iVar5 = *(int *)(iVar4 + -0xc);
    }
    *(undefined1 *)(iVar4 + iVar5) = uVar2;
    puVar1 = *(undefined1 **)param_2;
    if (puVar1 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar1 + -4) = 0;
      *(uint *)(puVar1 + -0xc) = uVar3;
      puVar1[uVar3] = 0;
    }
  }
  return 1;
}
```
