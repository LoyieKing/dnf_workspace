# StreamTo

`_ZN9TiXmlBase8StreamToEPSiiPSs`

`TiXmlBase::StreamTo(std::basic_istream<char, std::char_traits<char> >*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e7080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7080  _ZN9TiXmlBase8StreamToEPSiiPSs
#           TiXmlBase::StreamTo(std::basic_istream<char, std::char_traits<char> >*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e7080, 0x087e713a]
087e7080 +0x00:  push   %ebp
087e7081 +0x01:  mov    %esp,%ebp
087e7083 +0x03:  push   %edi
087e7084 +0x04:  push   %esi
087e7085 +0x05:  push   %ebx
087e7086 +0x06:  sub    $0x4c,%esp
087e7089 +0x09:  mov    0x10(%ebp),%edi
087e708c +0x0c:  mov    0x8(%ebp),%ebx
087e708f +0x0f:  mov    %edi,-0x3c(%ebp)
087e7092 +0x12:  jmp    087e7101 <+0x81>
087e7094 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087e7098 +0x18:  mov    %ebx,(%esp)
087e709b +0x1b:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e70a0 +0x20:  cmp    0xc(%ebp),%eax
087e70a3 +0x23:  mov    %eax,%esi
087e70a5 +0x25:  je     087e7118 <+0x98>
087e70a7 +0x27:  test   %eax,%eax
087e70a9 +0x29:  jle    087e710e <+0x8e>
087e70ab +0x2b:  mov    %ebx,(%esp)
087e70ae +0x2e:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e70b3 +0x33:  mov    -0x3c(%ebp),%edx
087e70b6 +0x36:  mov    (%edx),%eax
087e70b8 +0x38:  mov    -0xc(%eax),%edx
087e70bb +0x3b:  lea    -0xc(%eax),%ecx
087e70be +0x3e:  mov    %ecx,-0x1c(%ebp)
087e70c1 +0x41:  lea    0x1(%edx),%edi
087e70c4 +0x44:  cmp    0x4(%ecx),%edi
087e70c7 +0x47:  mov    %edi,-0x2c(%ebp)
087e70ca +0x4a:  ja     087e70d3 <+0x53>
087e70cc +0x4c:  mov    0x8(%ecx),%ecx
087e70cf +0x4f:  test   %ecx,%ecx
087e70d1 +0x51:  jle    087e70ed <+0x6d>
087e70d3 +0x53:  mov    -0x2c(%ebp),%eax
087e70d6 +0x56:  mov    -0x3c(%ebp),%edx
087e70d9 +0x59:  mov    %eax,0x4(%esp)
087e70dd +0x5d:  mov    %edx,(%esp)
087e70e0 +0x60:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e70e5 +0x65:  mov    -0x3c(%ebp),%ecx
087e70e8 +0x68:  mov    (%ecx),%eax
087e70ea +0x6a:  mov    -0xc(%eax),%edx
087e70ed +0x6d:  mov    %esi,%ecx
087e70ef +0x6f:  mov    %cl,(%eax,%edx,1)
087e70f2 +0x72:  mov    -0x3c(%ebp),%edi
087e70f5 +0x75:  mov    (%edi),%edx
087e70f7 +0x77:  lea    -0xc(%edx),%eax
087e70fa +0x7a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e70ff +0x7f:  jne    087e7125 <+0xa5>
087e7101 +0x81:  mov    (%ebx),%eax
087e7103 +0x83:  mov    -0xc(%eax),%eax
087e7106 +0x86:  mov    0x14(%ebx,%eax,1),%edi
087e710a +0x8a:  test   %edi,%edi
087e710c +0x8c:  je     087e7098 <+0x18>
087e710e +0x8e:  add    $0x4c,%esp
087e7111 +0x91:  xor    %eax,%eax
087e7113 +0x93:  pop    %ebx
087e7114 +0x94:  pop    %esi
087e7115 +0x95:  pop    %edi
087e7116 +0x96:  pop    %ebp
087e7117 +0x97:  ret
087e7118 +0x98:  add    $0x4c,%esp
087e711b +0x9b:  mov    $0x1,%eax
087e7120 +0xa0:  pop    %ebx
087e7121 +0xa1:  pop    %esi
087e7122 +0xa2:  pop    %edi
087e7123 +0xa3:  pop    %ebp
087e7124 +0xa4:  ret
087e7125 +0xa5:  mov    -0x2c(%ebp),%ecx
087e7128 +0xa8:  movl   $0x0,0x8(%eax)
087e712f +0xaf:  mov    %ecx,-0xc(%edx)
087e7132 +0xb2:  movb   $0x0,0xc(%eax,%ecx,1)
087e7137 +0xb7:  jmp    087e7101 <+0x81>
087e7139 +0xb9:  nop
087e713a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlBase::StreamTo @ 0x87e7080

/* TiXmlBase::StreamTo(std::istream*, int, std::string*) */

undefined4 TiXmlBase::StreamTo(istream *param_1,int param_2,string *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return 0;
    }
    iVar3 = std::istream::peek(param_1);
    if (iVar3 == param_2) break;
    if (iVar3 < 1) {
      return 0;
    }
    std::istream::get(param_1);
    iVar4 = *(int *)param_3;
    iVar5 = *(int *)(iVar4 + -0xc);
    uVar1 = iVar5 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar1) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_3,uVar1);
      iVar4 = *(int *)param_3;
      iVar5 = *(int *)(iVar4 + -0xc);
    }
    *(char *)(iVar4 + iVar5) = (char)iVar3;
    puVar2 = *(undefined1 **)param_3;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
  }
  return 1;
}
```
