# ReadName

`_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding`

`TiXmlBase::ReadName(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6c30  _ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding
#           TiXmlBase::ReadName(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, TiXmlEncoding)
# range [0x087e6c30, 0x087e6d29]
087e6c30 +0x00:  push   %ebp
087e6c31 +0x01:  mov    %esp,%ebp
087e6c33 +0x03:  push   %edi
087e6c34 +0x04:  push   %esi
087e6c35 +0x05:  push   %ebx
087e6c36 +0x06:  sub    $0x1c,%esp
087e6c39 +0x09:  mov    0x8(%ebp),%edi
087e6c3c +0x0c:  mov    0xc(%ebp),%eax
087e6c3f +0x0f:  movl   $0x0,0x8(%esp)
087e6c47 +0x17:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e6c4f +0x1f:  mov    %eax,(%esp)
087e6c52 +0x22:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6c57 +0x27:  test   %edi,%edi
087e6c59 +0x29:  je     087e6cfe <+0xce>
087e6c5f +0x2f:  movzbl (%edi),%ebx
087e6c62 +0x32:  test   %bl,%bl
087e6c64 +0x34:  jne    087e6c78 <+0x48>
087e6c66 +0x36:  xor    %esi,%esi
087e6c68 +0x38:  add    $0x1c,%esp
087e6c6b +0x3b:  mov    %esi,%eax
087e6c6d +0x3d:  pop    %ebx
087e6c6e +0x3e:  pop    %esi
087e6c6f +0x3f:  pop    %edi
087e6c70 +0x40:  pop    %ebp
087e6c71 +0x41:  ret
087e6c72 +0x42:  lea    0x0(%esi),%esi
087e6c78 +0x48:  cmp    $0x7e,%bl
087e6c7b +0x4b:  ja     087e6c91 <+0x61>
087e6c7d +0x4d:  movzbl %bl,%eax
087e6c80 +0x50:  mov    %eax,(%esp)
087e6c83 +0x53:  call   0807e4f0 <_init+0xde8>
087e6c88 +0x58:  test   %eax,%eax
087e6c8a +0x5a:  jne    087e6c91 <+0x61>
087e6c8c +0x5c:  cmp    $0x5f,%bl
087e6c8f +0x5f:  jne    087e6c66 <+0x36>
087e6c91 +0x61:  mov    %edi,%esi
087e6c93 +0x63:  nop
087e6c94 +0x64:  lea    0x0(%esi,%eiz,1),%esi
087e6c98 +0x68:  cmp    $0x7e,%bl
087e6c9b +0x6b:  ja     087e6cf0 <+0xc0>
087e6c9d +0x6d:  movzbl %bl,%eax
087e6ca0 +0x70:  mov    %eax,(%esp)
087e6ca3 +0x73:  call   0807dc20 <_init+0x518>
087e6ca8 +0x78:  test   %eax,%eax
087e6caa +0x7a:  jne    087e6cf0 <+0xc0>
087e6cac +0x7c:  cmp    $0x5f,%bl
087e6caf +0x7f:  je     087e6cf0 <+0xc0>
087e6cb1 +0x81:  cmp    $0x2d,%bl
087e6cb4 +0x84:  je     087e6cf0 <+0xc0>
087e6cb6 +0x86:  cmp    $0x2e,%bl
087e6cb9 +0x89:  je     087e6cf0 <+0xc0>
087e6cbb +0x8b:  cmp    $0x3a,%bl
087e6cbe +0x8e:  xchg   %ax,%ax
087e6cc0 +0x90:  je     087e6cf0 <+0xc0>
087e6cc2 +0x92:  lea    0x0(%esi),%esi
087e6cc8 +0x98:  mov    %esi,%eax
087e6cca +0x9a:  sub    %edi,%eax
087e6ccc +0x9c:  test   %eax,%eax
087e6cce +0x9e:  jle    087e6c68 <+0x38>
087e6cd0 +0xa0:  mov    %eax,0x8(%esp)
087e6cd4 +0xa4:  mov    0xc(%ebp),%eax
087e6cd7 +0xa7:  mov    %edi,0x4(%esp)
087e6cdb +0xab:  mov    %eax,(%esp)
087e6cde +0xae:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6ce3 +0xb3:  add    $0x1c,%esp
087e6ce6 +0xb6:  mov    %esi,%eax
087e6ce8 +0xb8:  pop    %ebx
087e6ce9 +0xb9:  pop    %esi
087e6cea +0xba:  pop    %edi
087e6ceb +0xbb:  pop    %ebp
087e6cec +0xbc:  ret
087e6ced +0xbd:  lea    0x0(%esi),%esi
087e6cf0 +0xc0:  add    $0x1,%esi
087e6cf3 +0xc3:  je     087e6cc8 <+0x98>
087e6cf5 +0xc5:  movzbl (%esi),%ebx
087e6cf8 +0xc8:  test   %bl,%bl
087e6cfa +0xca:  je     087e6cc8 <+0x98>
087e6cfc +0xcc:  jmp    087e6c98 <+0x68>
087e6cfe +0xce:  movl   $&_ZZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6d06 +0xd6:  movl   $0x197,0x8(%esp)
087e6d0e +0xde:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e6d16 +0xe6:  movl   $"p",(%esp)
087e6d1d +0xed:  call   0807dc50 <_init+0x548>
087e6d22 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
087e6d29 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlBase::ReadName @ 0x87e6c30

/* TiXmlBase::ReadName(char const*, std::string*, TiXmlEncoding) */

byte * TiXmlBase::ReadName(byte *param_1,string *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  
  std::string::assign(param_2,"",0);
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p","tinyxmlparser.cpp",0x197,
                  "static const char* TiXmlBase::ReadName(const char*, std::string*, TiXmlEncoding)"
                 );
  }
  bVar2 = *param_1;
  if ((bVar2 == 0) ||
     (((pbVar3 = param_1, bVar2 < 0x7f && (iVar1 = isalpha((uint)bVar2), iVar1 == 0)) &&
      (bVar2 != 0x5f)))) {
    pbVar3 = (byte *)0x0;
  }
  else {
    while ((((0x7e < bVar2 || (iVar1 = isalnum((uint)bVar2), iVar1 != 0)) ||
            ((bVar2 == 0x5f || ((bVar2 == 0x2d || (bVar2 == 0x2e)))))) || (bVar2 == 0x3a))) {
      pbVar3 = pbVar3 + 1;
      if ((pbVar3 == (byte *)0x0) || (bVar2 = *pbVar3, bVar2 == 0)) break;
    }
    if (0 < (int)pbVar3 - (int)param_1) {
      std::string::assign(param_2,(char *)param_1,(int)pbVar3 - (int)param_1);
      return pbVar3;
    }
  }
  return pbVar3;
}
```
