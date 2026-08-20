# VisitExit

`_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement`

`TiXmlPrinter::VisitExit(TiXmlElement const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e4700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4700  _ZN12TiXmlPrinter9VisitExitERK12TiXmlElement
#           TiXmlPrinter::VisitExit(TiXmlElement const&)
# range [0x087e4700, 0x087e47cc]
087e4700 +0x00:  push   %ebp
087e4701 +0x01:  mov    %esp,%ebp
087e4703 +0x03:  push   %edi
087e4704 +0x04:  push   %esi
087e4705 +0x05:  push   %ebx
087e4706 +0x06:  sub    $0x2c,%esp
087e4709 +0x09:  mov    0x8(%ebp),%ebx
087e470c +0x0c:  mov    0xc(%ebp),%edx
087e470f +0x0f:  mov    0x4(%ebx),%eax
087e4712 +0x12:  mov    0x18(%edx),%ecx
087e4715 +0x15:  sub    $0x1,%eax
087e4718 +0x18:  test   %ecx,%ecx
087e471a +0x1a:  mov    %eax,0x4(%ebx)
087e471d +0x1d:  je     087e4789 <+0x89>
087e471f +0x1f:  cmpb   $0x0,0x8(%ebx)
087e4723 +0x23:  je     087e4798 <+0x98>
087e4725 +0x25:  movb   $0x0,0x8(%ebx)
087e4729 +0x29:  lea    0xc(%ebx),%edi
087e472c +0x2c:  movl   $0x2,0x8(%esp)
087e4734 +0x34:  add    $0x14,%ebx
087e4737 +0x37:  movl   $"</",0x4(%esp)
087e473f +0x3f:  mov    %edi,(%esp)
087e4742 +0x42:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4747 +0x47:  mov    0xc(%ebp),%eax
087e474a +0x4a:  mov    0x20(%eax),%esi
087e474d +0x4d:  mov    %esi,(%esp)
087e4750 +0x50:  call   0807e3b0 <_init+0xca8>
087e4755 +0x55:  mov    %esi,0x4(%esp)
087e4759 +0x59:  mov    %edi,(%esp)
087e475c +0x5c:  mov    %eax,0x8(%esp)
087e4760 +0x60:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4765 +0x65:  movl   $0x1,0x8(%esp)
087e476d +0x6d:  movl   $">",0x4(%esp)
087e4775 +0x75:  mov    %edi,(%esp)
087e4778 +0x78:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e477d +0x7d:  mov    %ebx,0x4(%esp)
087e4781 +0x81:  mov    %edi,(%esp)
087e4784 +0x84:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4789 +0x89:  add    $0x2c,%esp
087e478c +0x8c:  mov    $0x1,%eax
087e4791 +0x91:  pop    %ebx
087e4792 +0x92:  pop    %esi
087e4793 +0x93:  pop    %edi
087e4794 +0x94:  pop    %ebp
087e4795 +0x95:  ret
087e4796 +0x96:  xchg   %ax,%ax
087e4798 +0x98:  test   %eax,%eax
087e479a +0x9a:  lea    0xc(%ebx),%edi
087e479d +0x9d:  jle    087e472c <+0x2c>
087e479f +0x9f:  lea    0x10(%ebx),%eax
087e47a2 +0xa2:  xor    %esi,%esi
087e47a4 +0xa4:  mov    %eax,-0x1c(%ebp)
087e47a7 +0xa7:  lea    0xc(%ebx),%edi
087e47aa +0xaa:  lea    0x0(%esi),%esi
087e47b0 +0xb0:  mov    -0x1c(%ebp),%edx
087e47b3 +0xb3:  add    $0x1,%esi
087e47b6 +0xb6:  mov    %edi,(%esp)
087e47b9 +0xb9:  mov    %edx,0x4(%esp)
087e47bd +0xbd:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e47c2 +0xc2:  cmp    0x4(%ebx),%esi
087e47c5 +0xc5:  jl     087e47b0 <+0xb0>
087e47c7 +0xc7:  jmp    087e472c <+0x2c>
087e47cc +0xcc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlPrinter::VisitExit @ 0x87e4700

/* TiXmlPrinter::VisitExit(TiXmlElement const&) */

undefined4 __thiscall TiXmlPrinter::VisitExit(TiXmlPrinter *this,TiXmlElement *param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  string *this_00;
  
  iVar3 = *(int *)(this + 4);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(this + 4) = iVar3 + -1;
  if (iVar1 != 0) {
    if (this[8] == (TiXmlPrinter)0x0) {
      if (0 < iVar3 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          std::string::append((string *)(this + 0xc),(string *)(this + 0x10));
        } while (iVar3 < *(int *)(this + 4));
      }
    }
    else {
      this[8] = (TiXmlPrinter)0x0;
    }
    this_00 = (string *)(this + 0xc);
    std::string::append(this_00,"</",2);
    __s = *(char **)(param_1 + 0x20);
    sVar2 = strlen(__s);
    std::string::append(this_00,__s,sVar2);
    std::string::append(this_00,">",1);
    std::string::append(this_00,(string *)(this + 0x14));
  }
  return 1;
}
```
