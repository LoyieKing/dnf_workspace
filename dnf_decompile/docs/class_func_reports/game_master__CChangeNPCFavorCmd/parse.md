# parse

`_ZN11game_master18CChangeNPCFavorCmd5parseEv`

`game_master::CChangeNPCFavorCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeNPCFavorCmd` | `0x084aadd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aadd8  _ZN11game_master18CChangeNPCFavorCmd5parseEv
#           game_master::CChangeNPCFavorCmd::parse()
# range [0x084aadd8, 0x084aaef1]
084aadd8 +0x000:  push   %ebp
084aadd9 +0x001:  mov    %esp,%ebp
084aaddb +0x003:  push   %esi
084aaddc +0x004:  push   %ebx
084aaddd +0x005:  sub    $0x20,%esp
084aade0 +0x008:  mov    0x8(%ebp),%eax
084aade3 +0x00b:  mov    0x4(%eax),%eax
084aade6 +0x00e:  add    $0xc,%eax
084aade9 +0x011:  mov    %eax,(%esp)
084aadec +0x014:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084aadf1 +0x019:  mov    0x8(%ebp),%eax
084aadf4 +0x01c:  mov    0x4(%eax),%eax
084aadf7 +0x01f:  add    $0xc,%eax
084aadfa +0x022:  movl   $0x0,0x8(%esp)
084aae02 +0x02a:  movl   $" ",0x4(%esp)
084aae0a +0x032:  mov    %eax,(%esp)
084aae0d +0x035:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084aae12 +0x03a:  mov    %eax,-0xc(%ebp)
084aae15 +0x03d:  mov    -0xc(%ebp),%edx
084aae18 +0x040:  mov    0x8(%ebp),%eax
084aae1b +0x043:  mov    0x4(%eax),%eax
084aae1e +0x046:  lea    0xc(%eax),%ecx
084aae21 +0x049:  lea    -0x10(%ebp),%eax
084aae24 +0x04c:  mov    %edx,0xc(%esp)
084aae28 +0x050:  movl   $0x0,0x8(%esp)
084aae30 +0x058:  mov    %ecx,0x4(%esp)
084aae34 +0x05c:  mov    %eax,(%esp)
084aae37 +0x05f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aae3c +0x064:  sub    $0x4,%esp
084aae3f +0x067:  mov    -0xc(%ebp),%eax
084aae42 +0x06a:  add    $0x1,%eax
084aae45 +0x06d:  mov    %eax,%edx
084aae47 +0x06f:  mov    0x8(%ebp),%eax
084aae4a +0x072:  mov    0x4(%eax),%eax
084aae4d +0x075:  lea    0xc(%eax),%ecx
084aae50 +0x078:  lea    -0x14(%ebp),%eax
084aae53 +0x07b:  movl   $0xffffffff,0xc(%esp)
084aae5b +0x083:  mov    %edx,0x8(%esp)
084aae5f +0x087:  mov    %ecx,0x4(%esp)
084aae63 +0x08b:  mov    %eax,(%esp)
084aae66 +0x08e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aae6b +0x093:  sub    $0x4,%esp
084aae6e +0x096:  lea    -0x10(%ebp),%eax
084aae71 +0x099:  mov    %eax,(%esp)
084aae74 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aae79 +0x0a1:  mov    %eax,(%esp)
084aae7c +0x0a4:  call   0807e6f0 <_init+0xfe8>
084aae81 +0x0a9:  mov    0x8(%ebp),%edx
084aae84 +0x0ac:  mov    %eax,0x8(%edx)
084aae87 +0x0af:  lea    -0x14(%ebp),%eax
084aae8a +0x0b2:  mov    %eax,(%esp)
084aae8d +0x0b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aae92 +0x0ba:  mov    %eax,(%esp)
084aae95 +0x0bd:  call   0807e6f0 <_init+0xfe8>
084aae9a +0x0c2:  mov    0x8(%ebp),%edx
084aae9d +0x0c5:  mov    %eax,0xc(%edx)
084aaea0 +0x0c8:  lea    -0x14(%ebp),%eax
084aaea3 +0x0cb:  mov    %eax,(%esp)
084aaea6 +0x0ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aaeab +0x0d3:  jmp    084aaedd <+0x105>
084aaead +0x0d5:  mov    %edx,%ebx
084aaeaf +0x0d7:  mov    %eax,%esi
084aaeb1 +0x0d9:  lea    -0x14(%ebp),%eax
084aaeb4 +0x0dc:  mov    %eax,(%esp)
084aaeb7 +0x0df:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aaebc +0x0e4:  mov    %esi,%eax
084aaebe +0x0e6:  mov    %ebx,%edx
084aaec0 +0x0e8:  jmp    084aaec2 <+0xea>
084aaec2 +0x0ea:  mov    %edx,%ebx
084aaec4 +0x0ec:  mov    %eax,%esi
084aaec6 +0x0ee:  lea    -0x10(%ebp),%eax
084aaec9 +0x0f1:  mov    %eax,(%esp)
084aaecc +0x0f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aaed1 +0x0f9:  mov    %esi,%eax
084aaed3 +0x0fb:  mov    %ebx,%edx
084aaed5 +0x0fd:  mov    %eax,(%esp)
084aaed8 +0x100:  call   08ae3750 <_Unwind_Resume>
084aaedd +0x105:  lea    -0x10(%ebp),%eax
084aaee0 +0x108:  mov    %eax,(%esp)
084aaee3 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aaee8 +0x110:  lea    -0x8(%ebp),%esp
084aaeeb +0x113:  add    $0x0,%esp
084aaeee +0x116:  pop    %ebx
084aaeef +0x117:  pop    %esi
084aaef0 +0x118:  pop    %ebp
084aaef1 +0x119:  ret
```

## 反编译 C

```c
// game_master::CChangeNPCFavorCmd::parse @ 0x84aadd8

/* game_master::CChangeNPCFavorCmd::parse() */

void __thiscall game_master::CChangeNPCFavorCmd::parse(CChangeNPCFavorCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aae66 to 084aae6a has its CatchHandler @ 084aaec2 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aae74 to 084aae91 has its CatchHandler @ 084aaead */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aaea6 to 084aaeaa has its CatchHandler @ 084aaec2 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}
```
