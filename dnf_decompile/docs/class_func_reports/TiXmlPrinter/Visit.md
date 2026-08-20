# Visit

`_ZN12TiXmlPrinter5VisitERK16TiXmlDeclaration`

`TiXmlPrinter::Visit(TiXmlDeclaration const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e0ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0ed0  _ZN12TiXmlPrinter5VisitERK16TiXmlDeclaration
#           TiXmlPrinter::Visit(TiXmlDeclaration const&)
# range [0x087e0ed0, 0x087e0f49]
087e0ed0 +0x00:  push   %ebp
087e0ed1 +0x01:  mov    %esp,%ebp
087e0ed3 +0x03:  push   %edi
087e0ed4 +0x04:  push   %esi
087e0ed5 +0x05:  push   %ebx
087e0ed6 +0x06:  sub    $0x2c,%esp
087e0ed9 +0x09:  mov    0x8(%ebp),%esi
087e0edc +0x0c:  mov    0x4(%esi),%ebx
087e0edf +0x0f:  lea    0xc(%esi),%edi
087e0ee2 +0x12:  test   %ebx,%ebx
087e0ee4 +0x14:  jle    087e0f07 <+0x37>
087e0ee6 +0x16:  lea    0x10(%esi),%eax
087e0ee9 +0x19:  xor    %ebx,%ebx
087e0eeb +0x1b:  mov    %eax,-0x1c(%ebp)
087e0eee +0x1e:  xchg   %ax,%ax
087e0ef0 +0x20:  mov    -0x1c(%ebp),%edx
087e0ef3 +0x23:  add    $0x1,%ebx
087e0ef6 +0x26:  mov    %edi,(%esp)
087e0ef9 +0x29:  mov    %edx,0x4(%esp)
087e0efd +0x2d:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e0f02 +0x32:  cmp    0x4(%esi),%ebx
087e0f05 +0x35:  jl     087e0ef0 <+0x20>
087e0f07 +0x37:  mov    0xc(%ebp),%edx
087e0f0a +0x3a:  add    $0x14,%esi
087e0f0d +0x3d:  mov    (%edx),%eax
087e0f0f +0x3f:  mov    %edi,0xc(%esp)
087e0f13 +0x43:  mov    %edx,(%esp)
087e0f16 +0x46:  movl   $0x0,0x8(%esp)
087e0f1e +0x4e:  movl   $0x0,0x4(%esp)
087e0f26 +0x56:  call   *0x4c(%eax)
087e0f29 +0x59:  mov    %esi,0x4(%esp)
087e0f2d +0x5d:  mov    %edi,(%esp)
087e0f30 +0x60:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e0f35 +0x65:  add    $0x2c,%esp
087e0f38 +0x68:  mov    $0x1,%eax
087e0f3d +0x6d:  pop    %ebx
087e0f3e +0x6e:  pop    %esi
087e0f3f +0x6f:  pop    %edi
087e0f40 +0x70:  pop    %ebp
087e0f41 +0x71:  ret
087e0f42 +0x72:  lea    0x0(%esi,%eiz,1),%esi
087e0f49 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlPrinter::Visit @ 0x87e0ed0

/* TiXmlPrinter::Visit(TiXmlDeclaration const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlDeclaration *param_1)

{
  string *this_00;
  int iVar1;
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar1 < *(int *)(this + 4));
  }
  (**(code **)(*(int *)param_1 + 0x4c))(param_1,0,0,this_00);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}
```
