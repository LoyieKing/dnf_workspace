# Visit

`_ZN12TiXmlPrinter5VisitERK12TiXmlUnknown`

`TiXmlPrinter::Visit(TiXmlUnknown const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e45a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e45a0  _ZN12TiXmlPrinter5VisitERK12TiXmlUnknown
#           TiXmlPrinter::Visit(TiXmlUnknown const&)
# range [0x087e45a0, 0x087e4649]
087e45a0 +0x00:  push   %ebp
087e45a1 +0x01:  mov    %esp,%ebp
087e45a3 +0x03:  push   %edi
087e45a4 +0x04:  push   %esi
087e45a5 +0x05:  push   %ebx
087e45a6 +0x06:  sub    $0x2c,%esp
087e45a9 +0x09:  mov    0x8(%ebp),%edi
087e45ac +0x0c:  mov    0x4(%edi),%eax
087e45af +0x0f:  lea    0xc(%edi),%esi
087e45b2 +0x12:  test   %eax,%eax
087e45b4 +0x14:  jle    087e45d7 <+0x37>
087e45b6 +0x16:  lea    0x10(%edi),%eax
087e45b9 +0x19:  xor    %ebx,%ebx
087e45bb +0x1b:  mov    %eax,-0x1c(%ebp)
087e45be +0x1e:  xchg   %ax,%ax
087e45c0 +0x20:  mov    -0x1c(%ebp),%eax
087e45c3 +0x23:  add    $0x1,%ebx
087e45c6 +0x26:  mov    %esi,(%esp)
087e45c9 +0x29:  mov    %eax,0x4(%esp)
087e45cd +0x2d:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e45d2 +0x32:  cmp    0x4(%edi),%ebx
087e45d5 +0x35:  jl     087e45c0 <+0x20>
087e45d7 +0x37:  mov    %esi,(%esp)
087e45da +0x3a:  add    $0x14,%edi
087e45dd +0x3d:  movl   $0x1,0x8(%esp)
087e45e5 +0x45:  movl   $"<",0x4(%esp)
087e45ed +0x4d:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e45f2 +0x52:  mov    0xc(%ebp),%eax
087e45f5 +0x55:  mov    0x20(%eax),%ebx
087e45f8 +0x58:  mov    %ebx,(%esp)
087e45fb +0x5b:  call   0807e3b0 <_init+0xca8>
087e4600 +0x60:  mov    %ebx,0x4(%esp)
087e4604 +0x64:  mov    %esi,(%esp)
087e4607 +0x67:  mov    %eax,0x8(%esp)
087e460b +0x6b:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4610 +0x70:  mov    %esi,(%esp)
087e4613 +0x73:  movl   $0x1,0x8(%esp)
087e461b +0x7b:  movl   $">",0x4(%esp)
087e4623 +0x83:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4628 +0x88:  mov    %edi,0x4(%esp)
087e462c +0x8c:  mov    %esi,(%esp)
087e462f +0x8f:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4634 +0x94:  add    $0x2c,%esp
087e4637 +0x97:  mov    $0x1,%eax
087e463c +0x9c:  pop    %ebx
087e463d +0x9d:  pop    %esi
087e463e +0x9e:  pop    %edi
087e463f +0x9f:  pop    %ebp
087e4640 +0xa0:  ret
087e4641 +0xa1:  nop
087e4642 +0xa2:  lea    0x0(%esi,%eiz,1),%esi
087e4649 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlPrinter::Visit @ 0x87e45a0

/* TiXmlPrinter::Visit(TiXmlUnknown const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlUnknown *param_1)

{
  string *this_00;
  char *__s;
  size_t sVar1;
  int iVar2;
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar2 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<",1);
  __s = *(char **)(param_1 + 0x20);
  sVar1 = strlen(__s);
  std::string::append(this_00,__s,sVar1);
  std::string::append(this_00,">",1);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}
```
