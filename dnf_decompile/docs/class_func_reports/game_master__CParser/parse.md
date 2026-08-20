# parse

`_ZN11game_master7CParser5parseEv`

`game_master::CParser::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CParser` | `0x084a8ab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8ab6  _ZN11game_master7CParser5parseEv
#           game_master::CParser::parse()
# range [0x084a8ab6, 0x084a8c05]
084a8ab6 +0x000:  push   %ebp
084a8ab7 +0x001:  mov    %esp,%ebp
084a8ab9 +0x003:  push   %esi
084a8aba +0x004:  push   %ebx
084a8abb +0x005:  sub    $0x20,%esp
084a8abe +0x008:  mov    0x8(%ebp),%eax
084a8ac1 +0x00b:  lea    0x1c(%eax),%edx
084a8ac4 +0x00e:  mov    0x8(%ebp),%eax
084a8ac7 +0x011:  add    $0x10,%eax
084a8aca +0x014:  mov    %edx,0x4(%esp)
084a8ace +0x018:  mov    %eax,(%esp)
084a8ad1 +0x01b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
084a8ad6 +0x020:  mov    0x8(%ebp),%eax
084a8ad9 +0x023:  add    $0x10,%eax
084a8adc +0x026:  movl   $0x0,0x8(%esp)
084a8ae4 +0x02e:  movl   $" ",0x4(%esp)
084a8aec +0x036:  mov    %eax,(%esp)
084a8aef +0x039:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084a8af4 +0x03e:  mov    %eax,%edx
084a8af6 +0x040:  mov    0x8(%ebp),%eax
084a8af9 +0x043:  mov    %edx,0x14(%eax)
084a8afc +0x046:  mov    0x8(%ebp),%eax
084a8aff +0x049:  mov    0x14(%eax),%eax
084a8b02 +0x04c:  mov    %eax,%edx
084a8b04 +0x04e:  mov    0x8(%ebp),%eax
084a8b07 +0x051:  lea    0x10(%eax),%ecx
084a8b0a +0x054:  lea    -0x10(%ebp),%eax
084a8b0d +0x057:  mov    %edx,0xc(%esp)
084a8b11 +0x05b:  movl   $0x0,0x8(%esp)
084a8b19 +0x063:  mov    %ecx,0x4(%esp)
084a8b1d +0x067:  mov    %eax,(%esp)
084a8b20 +0x06a:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084a8b25 +0x06f:  sub    $0x4,%esp
084a8b28 +0x072:  mov    0x8(%ebp),%eax
084a8b2b +0x075:  lea    0x8(%eax),%edx
084a8b2e +0x078:  lea    -0x10(%ebp),%eax
084a8b31 +0x07b:  mov    %eax,0x4(%esp)
084a8b35 +0x07f:  mov    %edx,(%esp)
084a8b38 +0x082:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084a8b3d +0x087:  jmp    084a8b5a <+0xa4>
084a8b3f +0x089:  mov    %edx,%ebx
084a8b41 +0x08b:  mov    %eax,%esi
084a8b43 +0x08d:  lea    -0x10(%ebp),%eax
084a8b46 +0x090:  mov    %eax,(%esp)
084a8b49 +0x093:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a8b4e +0x098:  mov    %esi,%eax
084a8b50 +0x09a:  mov    %ebx,%edx
084a8b52 +0x09c:  mov    %eax,(%esp)
084a8b55 +0x09f:  call   08ae3750 <_Unwind_Resume>
084a8b5a +0x0a4:  lea    -0x10(%ebp),%eax
084a8b5d +0x0a7:  mov    %eax,(%esp)
084a8b60 +0x0aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a8b65 +0x0af:  mov    0x8(%ebp),%eax
084a8b68 +0x0b2:  mov    0x14(%eax),%eax
084a8b6b +0x0b5:  add    $0x1,%eax
084a8b6e +0x0b8:  mov    %eax,%edx
084a8b70 +0x0ba:  mov    0x8(%ebp),%eax
084a8b73 +0x0bd:  lea    0x10(%eax),%ecx
084a8b76 +0x0c0:  lea    -0xc(%ebp),%eax
084a8b79 +0x0c3:  movl   $0xffffffff,0xc(%esp)
084a8b81 +0x0cb:  mov    %edx,0x8(%esp)
084a8b85 +0x0cf:  mov    %ecx,0x4(%esp)
084a8b89 +0x0d3:  mov    %eax,(%esp)
084a8b8c +0x0d6:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084a8b91 +0x0db:  sub    $0x4,%esp
084a8b94 +0x0de:  mov    0x8(%ebp),%eax
084a8b97 +0x0e1:  lea    0xc(%eax),%edx
084a8b9a +0x0e4:  lea    -0xc(%ebp),%eax
084a8b9d +0x0e7:  mov    %eax,0x4(%esp)
084a8ba1 +0x0eb:  mov    %edx,(%esp)
084a8ba4 +0x0ee:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084a8ba9 +0x0f3:  jmp    084a8bc6 <+0x110>
084a8bab +0x0f5:  mov    %edx,%ebx
084a8bad +0x0f7:  mov    %eax,%esi
084a8baf +0x0f9:  lea    -0xc(%ebp),%eax
084a8bb2 +0x0fc:  mov    %eax,(%esp)
084a8bb5 +0x0ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a8bba +0x104:  mov    %esi,%eax
084a8bbc +0x106:  mov    %ebx,%edx
084a8bbe +0x108:  mov    %eax,(%esp)
084a8bc1 +0x10b:  call   08ae3750 <_Unwind_Resume>
084a8bc6 +0x110:  lea    -0xc(%ebp),%eax
084a8bc9 +0x113:  mov    %eax,(%esp)
084a8bcc +0x116:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a8bd1 +0x11b:  mov    0x8(%ebp),%eax
084a8bd4 +0x11e:  add    $0x8,%eax
084a8bd7 +0x121:  mov    %eax,(%esp)
084a8bda +0x124:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084a8bdf +0x129:  mov    0x8(%ebp),%eax
084a8be2 +0x12c:  add    $0x8,%eax
084a8be5 +0x12f:  mov    %eax,(%esp)
084a8be8 +0x132:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a8bed +0x137:  mov    %eax,(%esp)
084a8bf0 +0x13a:  call   0807e6f0 <_init+0xfe8>
084a8bf5 +0x13f:  mov    0x8(%ebp),%edx
084a8bf8 +0x142:  mov    %eax,0x18(%edx)
084a8bfb +0x145:  lea    -0x8(%ebp),%esp
084a8bfe +0x148:  add    $0x0,%esp
084a8c01 +0x14b:  pop    %ebx
084a8c02 +0x14c:  pop    %esi
084a8c03 +0x14d:  pop    %ebp
084a8c04 +0x14e:  ret
084a8c05 +0x14f:  nop
```

## 反编译 C

```c
// game_master::CParser::parse @ 0x84a8ab6

/* game_master::CParser::parse() */

void __thiscall game_master::CParser::parse(CParser *this)

{
  undefined4 uVar1;
  char *__nptr;
  int iVar2;
  string local_14 [4];
  string local_10 [4];
  
  std::string::operator=((string *)(this + 0x10),(char *)(this + 0x1c));
  uVar1 = std::string::find((string *)(this + 0x10)," ",0);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::string::substr((uint)local_14,(uint)(this + 0x10));
                    /* try { // try from 084a8b38 to 084a8b3c has its CatchHandler @ 084a8b3f */
  std::string::operator=((string *)(this + 8),local_14);
  std::string::~string(local_14);
  std::string::substr((uint)local_10,(uint)(this + 0x10));
                    /* try { // try from 084a8ba4 to 084a8ba8 has its CatchHandler @ 084a8bab */
  std::string::operator=((string *)(this + 0xc),local_10);
  std::string::~string(local_10);
  trim((string *)(this + 8));
  __nptr = (char *)std::string::c_str((string *)(this + 8));
  iVar2 = atoi(__nptr);
  *(int *)(this + 0x18) = iVar2;
  return;
}
```
