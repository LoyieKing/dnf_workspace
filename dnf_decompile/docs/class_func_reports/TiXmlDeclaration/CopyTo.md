# CopyTo

`_ZNK16TiXmlDeclaration6CopyToEPS_`

`TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e2680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2680  _ZNK16TiXmlDeclaration6CopyToEPS_
#           TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const
# range [0x087e2680, 0x087e2709]
087e2680 +0x00:  push   %ebp
087e2681 +0x01:  mov    %esp,%ebp
087e2683 +0x03:  sub    $0x28,%esp
087e2686 +0x06:  mov    %esi,-0x8(%ebp)
087e2689 +0x09:  mov    0x8(%ebp),%esi
087e268c +0x0c:  mov    %ebx,-0xc(%ebp)
087e268f +0x0f:  mov    0xc(%ebp),%ebx
087e2692 +0x12:  mov    %edi,-0x4(%ebp)
087e2695 +0x15:  mov    0x20(%esi),%edi
087e2698 +0x18:  mov    %edi,(%esp)
087e269b +0x1b:  call   0807e3b0 <_init+0xca8>
087e26a0 +0x20:  mov    %edi,0x4(%esp)
087e26a4 +0x24:  mov    %eax,0x8(%esp)
087e26a8 +0x28:  lea    0x20(%ebx),%eax
087e26ab +0x2b:  mov    %eax,(%esp)
087e26ae +0x2e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e26b3 +0x33:  mov    0xc(%esi),%eax
087e26b6 +0x36:  mov    0x8(%esi),%edx
087e26b9 +0x39:  mov    %eax,0xc(%ebx)
087e26bc +0x3c:  mov    0x4(%esi),%eax
087e26bf +0x3f:  mov    %edx,0x8(%ebx)
087e26c2 +0x42:  mov    %eax,0x4(%ebx)
087e26c5 +0x45:  lea    0x2c(%esi),%eax
087e26c8 +0x48:  mov    %eax,0x4(%esp)
087e26cc +0x4c:  lea    0x2c(%ebx),%eax
087e26cf +0x4f:  mov    %eax,(%esp)
087e26d2 +0x52:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e26d7 +0x57:  lea    0x30(%esi),%eax
087e26da +0x5a:  add    $0x34,%esi
087e26dd +0x5d:  mov    %eax,0x4(%esp)
087e26e1 +0x61:  lea    0x30(%ebx),%eax
087e26e4 +0x64:  add    $0x34,%ebx
087e26e7 +0x67:  mov    %eax,(%esp)
087e26ea +0x6a:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e26ef +0x6f:  mov    -0x4(%ebp),%edi
087e26f2 +0x72:  mov    %esi,0xc(%ebp)
087e26f5 +0x75:  mov    -0x8(%ebp),%esi
087e26f8 +0x78:  mov    %ebx,0x8(%ebp)
087e26fb +0x7b:  mov    -0xc(%ebp),%ebx
087e26fe +0x7e:  mov    %ebp,%esp
087e2700 +0x80:  pop    %ebp
087e2701 +0x81:  jmp    08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e2706 +0x86:  lea    0x0(%esi),%esi
087e2709 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDeclaration::CopyTo @ 0x87e2680

/* TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const */

void __thiscall TiXmlDeclaration::CopyTo(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  __s = *(char **)(this + 0x20);
  sVar3 = strlen(__s);
  std::string::assign((string *)(param_1 + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  std::string::assign((string *)(param_1 + 0x2c),(string *)(this + 0x2c));
  std::string::assign((string *)(param_1 + 0x30),(string *)(this + 0x30));
  std::string::assign((string *)(param_1 + 0x34),(string *)(this + 0x34));
  return;
}
```
