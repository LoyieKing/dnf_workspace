# SetError

`_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e6d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6d30  _ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e6d30, 0x087e6dfa]
087e6d30 +0x00:  push   %ebp
087e6d31 +0x01:  mov    %esp,%ebp
087e6d33 +0x03:  sub    $0x28,%esp
087e6d36 +0x06:  mov    %ebx,-0xc(%ebp)
087e6d39 +0x09:  mov    0x8(%ebp),%ebx
087e6d3c +0x0c:  mov    %esi,-0x8(%ebp)
087e6d3f +0x0f:  mov    0xc(%ebp),%eax
087e6d42 +0x12:  mov    %edi,-0x4(%ebp)
087e6d45 +0x15:  mov    0x14(%ebp),%esi
087e6d48 +0x18:  cmpb   $0x0,0x2c(%ebx)
087e6d4c +0x1c:  jne    087e6d91 <+0x61>
087e6d4e +0x1e:  lea    -0x1(%eax),%edx
087e6d51 +0x21:  cmp    $0xe,%edx
087e6d54 +0x24:  ja     087e6dd5 <+0xa5>
087e6d56 +0x26:  mov    &_ZN9TiXmlBase11errorStringE(,%eax,4),%edi
087e6d5d +0x2d:  movb   $0x1,0x2c(%ebx)
087e6d61 +0x31:  mov    %eax,0x30(%ebx)
087e6d64 +0x34:  mov    %edi,(%esp)
087e6d67 +0x37:  call   0807e3b0 <_init+0xca8>
087e6d6c +0x3c:  mov    %edi,0x4(%esp)
087e6d70 +0x40:  mov    %eax,0x8(%esp)
087e6d74 +0x44:  lea    0x34(%ebx),%eax
087e6d77 +0x47:  mov    %eax,(%esp)
087e6d7a +0x4a:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6d7f +0x4f:  test   %esi,%esi
087e6d81 +0x51:  movl   $0xffffffff,0x40(%ebx)
087e6d88 +0x58:  movl   $0xffffffff,0x3c(%ebx)
087e6d8f +0x5f:  jne    087e6da0 <+0x70>
087e6d91 +0x61:  mov    -0xc(%ebp),%ebx
087e6d94 +0x64:  mov    -0x8(%ebp),%esi
087e6d97 +0x67:  mov    -0x4(%ebp),%edi
087e6d9a +0x6a:  mov    %ebp,%esp
087e6d9c +0x6c:  pop    %ebp
087e6d9d +0x6d:  ret
087e6d9e +0x6e:  xchg   %ax,%ax
087e6da0 +0x70:  mov    0x10(%ebp),%eax
087e6da3 +0x73:  test   %eax,%eax
087e6da5 +0x75:  je     087e6d91 <+0x61>
087e6da7 +0x77:  mov    0x18(%ebp),%eax
087e6daa +0x7a:  mov    %esi,(%esp)
087e6dad +0x7d:  mov    %eax,0x8(%esp)
087e6db1 +0x81:  mov    0x10(%ebp),%eax
087e6db4 +0x84:  mov    %eax,0x4(%esp)
087e6db8 +0x88:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e6dbd +0x8d:  mov    (%esi),%eax
087e6dbf +0x8f:  mov    0x4(%esi),%edx
087e6dc2 +0x92:  mov    %eax,0x3c(%ebx)
087e6dc5 +0x95:  mov    %edx,0x40(%ebx)
087e6dc8 +0x98:  mov    -0xc(%ebp),%ebx
087e6dcb +0x9b:  mov    -0x8(%ebp),%esi
087e6dce +0x9e:  mov    -0x4(%ebp),%edi
087e6dd1 +0xa1:  mov    %ebp,%esp
087e6dd3 +0xa3:  pop    %ebp
087e6dd4 +0xa4:  ret
087e6dd5 +0xa5:  movl   $&_ZZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6ddd +0xad:  movl   $0x324,0x8(%esp)
087e6de5 +0xb5:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e6ded +0xbd:  movl   $"err > 0 && err < TIXML_ERROR_STRING_COUNT",(%esp)
087e6df4 +0xc4:  call   0807dc50 <_init+0x548>
087e6df9 +0xc9:  nop
087e6dfa +0xca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlDocument::SetError @ 0x87e6d30

/* TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding) */

void __thiscall
TiXmlDocument::SetError
          (TiXmlDocument *this,int param_1,int param_2,TiXmlParsingData *param_3,undefined4 param_5)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  
  if (this[0x2c] == (TiXmlDocument)0x0) {
    if (0xe < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("err > 0 && err < TIXML_ERROR_STRING_COUNT","tinyxmlparser.cpp",0x324,
                    "void TiXmlDocument::SetError(int, const char*, TiXmlParsingData*, TiXmlEncoding)"
                   );
    }
    __s = *(char **)(TiXmlBase::errorString + param_1 * 4);
    this[0x2c] = (TiXmlDocument)0x1;
    *(int *)(this + 0x30) = param_1;
    sVar2 = strlen(__s);
    std::string::assign((string *)(this + 0x34),__s,sVar2);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    if ((param_3 != (TiXmlParsingData *)0x0) && (param_2 != 0)) {
      TiXmlParsingData::Stamp(param_3,param_2,param_5);
      uVar1 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(this + 0x3c) = *(undefined4 *)param_3;
      *(undefined4 *)(this + 0x40) = uVar1;
      return;
    }
  }
  return;
}
```
