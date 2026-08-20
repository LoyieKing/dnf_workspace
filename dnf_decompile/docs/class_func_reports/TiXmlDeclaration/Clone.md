# Clone

`_ZNK16TiXmlDeclaration5CloneEv`

`TiXmlDeclaration::Clone() const`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e27c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e27c0  _ZNK16TiXmlDeclaration5CloneEv
#           TiXmlDeclaration::Clone() const
# range [0x087e27c0, 0x087e28ac]
087e27c0 +0x00:  push   %ebp
087e27c1 +0x01:  mov    %esp,%ebp
087e27c3 +0x03:  push   %edi
087e27c4 +0x04:  push   %esi
087e27c5 +0x05:  push   %ebx
087e27c6 +0x06:  sub    $0x1c,%esp
087e27c9 +0x09:  mov    0x8(%ebp),%esi
087e27cc +0x0c:  movl   $0x38,(%esp)
087e27d3 +0x13:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e27d8 +0x18:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%eax)
087e27df +0x1f:  mov    0x20(%esi),%edi
087e27e2 +0x22:  mov    %eax,%ebx
087e27e4 +0x24:  movl   $0xffffffff,0x8(%eax)
087e27eb +0x2b:  movl   $0xffffffff,0x4(%eax)
087e27f2 +0x32:  movl   $0x0,0xc(%eax)
087e27f9 +0x39:  movl   $0x0,0x10(%eax)
087e2800 +0x40:  movl   $0x5,0x14(%eax)
087e2807 +0x47:  movl   $0x0,0x18(%eax)
087e280e +0x4e:  movl   $0x0,0x1c(%eax)
087e2815 +0x55:  movl   $0x0,0x24(%eax)
087e281c +0x5c:  movl   $0x0,0x28(%eax)
087e2823 +0x63:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%eax)
087e2829 +0x69:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x2c(%eax)
087e2830 +0x70:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x30(%eax)
087e2837 +0x77:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%eax)
087e283e +0x7e:  mov    %edi,(%esp)
087e2841 +0x81:  call   0807e3b0 <_init+0xca8>
087e2846 +0x86:  mov    %edi,0x4(%esp)
087e284a +0x8a:  mov    %eax,0x8(%esp)
087e284e +0x8e:  lea    0x20(%ebx),%eax
087e2851 +0x91:  mov    %eax,(%esp)
087e2854 +0x94:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2859 +0x99:  mov    0xc(%esi),%eax
087e285c +0x9c:  mov    0x8(%esi),%edx
087e285f +0x9f:  mov    %eax,0xc(%ebx)
087e2862 +0xa2:  mov    0x4(%esi),%eax
087e2865 +0xa5:  mov    %edx,0x8(%ebx)
087e2868 +0xa8:  mov    %eax,0x4(%ebx)
087e286b +0xab:  lea    0x2c(%esi),%eax
087e286e +0xae:  mov    %eax,0x4(%esp)
087e2872 +0xb2:  lea    0x2c(%ebx),%eax
087e2875 +0xb5:  mov    %eax,(%esp)
087e2878 +0xb8:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e287d +0xbd:  lea    0x30(%esi),%eax
087e2880 +0xc0:  add    $0x34,%esi
087e2883 +0xc3:  mov    %eax,0x4(%esp)
087e2887 +0xc7:  lea    0x30(%ebx),%eax
087e288a +0xca:  mov    %eax,(%esp)
087e288d +0xcd:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e2892 +0xd2:  lea    0x34(%ebx),%eax
087e2895 +0xd5:  mov    %esi,0x4(%esp)
087e2899 +0xd9:  mov    %eax,(%esp)
087e289c +0xdc:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e28a1 +0xe1:  add    $0x1c,%esp
087e28a4 +0xe4:  mov    %ebx,%eax
087e28a6 +0xe6:  pop    %ebx
087e28a7 +0xe7:  pop    %esi
087e28a8 +0xe8:  pop    %edi
087e28a9 +0xe9:  pop    %ebp
087e28aa +0xea:  ret
087e28ab +0xeb:  nop
087e28ac +0xec:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlDeclaration::Clone @ 0x87e27c0

/* TiXmlDeclaration::Clone() const */

undefined4 * __thiscall TiXmlDeclaration::Clone(TiXmlDeclaration *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x38);
  puVar3[8] = &DAT_0948ccfc;
  __s = *(char **)(this + 0x20);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 5;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlDeclaration_08de1108;
  puVar3[0xb] = &DAT_0948ccfc;
  puVar3[0xc] = &DAT_0948ccfc;
  puVar3[0xd] = &DAT_0948ccfc;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  std::string::assign((string *)(puVar3 + 0xb),(string *)(this + 0x2c));
  std::string::assign((string *)(puVar3 + 0xc),(string *)(this + 0x30));
  std::string::assign((string *)(puVar3 + 0xd),(string *)(this + 0x34));
  return puVar3;
}
```
