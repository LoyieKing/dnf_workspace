# parse

`_ZN11game_master19CChangeNPCMaxDayCmd5parseEv`

`game_master::CChangeNPCMaxDayCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeNPCMaxDayCmd` | `0x084aacb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aacb8  _ZN11game_master19CChangeNPCMaxDayCmd5parseEv
#           game_master::CChangeNPCMaxDayCmd::parse()
# range [0x084aacb8, 0x084aadd1]
084aacb8 +0x000:  push   %ebp
084aacb9 +0x001:  mov    %esp,%ebp
084aacbb +0x003:  push   %esi
084aacbc +0x004:  push   %ebx
084aacbd +0x005:  sub    $0x20,%esp
084aacc0 +0x008:  mov    0x8(%ebp),%eax
084aacc3 +0x00b:  mov    0x4(%eax),%eax
084aacc6 +0x00e:  add    $0xc,%eax
084aacc9 +0x011:  mov    %eax,(%esp)
084aaccc +0x014:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084aacd1 +0x019:  mov    0x8(%ebp),%eax
084aacd4 +0x01c:  mov    0x4(%eax),%eax
084aacd7 +0x01f:  add    $0xc,%eax
084aacda +0x022:  movl   $0x0,0x8(%esp)
084aace2 +0x02a:  movl   $" ",0x4(%esp)
084aacea +0x032:  mov    %eax,(%esp)
084aaced +0x035:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084aacf2 +0x03a:  mov    %eax,-0xc(%ebp)
084aacf5 +0x03d:  mov    -0xc(%ebp),%edx
084aacf8 +0x040:  mov    0x8(%ebp),%eax
084aacfb +0x043:  mov    0x4(%eax),%eax
084aacfe +0x046:  lea    0xc(%eax),%ecx
084aad01 +0x049:  lea    -0x10(%ebp),%eax
084aad04 +0x04c:  mov    %edx,0xc(%esp)
084aad08 +0x050:  movl   $0x0,0x8(%esp)
084aad10 +0x058:  mov    %ecx,0x4(%esp)
084aad14 +0x05c:  mov    %eax,(%esp)
084aad17 +0x05f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aad1c +0x064:  sub    $0x4,%esp
084aad1f +0x067:  mov    -0xc(%ebp),%eax
084aad22 +0x06a:  add    $0x1,%eax
084aad25 +0x06d:  mov    %eax,%edx
084aad27 +0x06f:  mov    0x8(%ebp),%eax
084aad2a +0x072:  mov    0x4(%eax),%eax
084aad2d +0x075:  lea    0xc(%eax),%ecx
084aad30 +0x078:  lea    -0x14(%ebp),%eax
084aad33 +0x07b:  movl   $0xffffffff,0xc(%esp)
084aad3b +0x083:  mov    %edx,0x8(%esp)
084aad3f +0x087:  mov    %ecx,0x4(%esp)
084aad43 +0x08b:  mov    %eax,(%esp)
084aad46 +0x08e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aad4b +0x093:  sub    $0x4,%esp
084aad4e +0x096:  lea    -0x10(%ebp),%eax
084aad51 +0x099:  mov    %eax,(%esp)
084aad54 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aad59 +0x0a1:  mov    %eax,(%esp)
084aad5c +0x0a4:  call   0807e6f0 <_init+0xfe8>
084aad61 +0x0a9:  mov    0x8(%ebp),%edx
084aad64 +0x0ac:  mov    %eax,0x8(%edx)
084aad67 +0x0af:  lea    -0x14(%ebp),%eax
084aad6a +0x0b2:  mov    %eax,(%esp)
084aad6d +0x0b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aad72 +0x0ba:  mov    %eax,(%esp)
084aad75 +0x0bd:  call   0807e6f0 <_init+0xfe8>
084aad7a +0x0c2:  mov    0x8(%ebp),%edx
084aad7d +0x0c5:  mov    %eax,0xc(%edx)
084aad80 +0x0c8:  lea    -0x14(%ebp),%eax
084aad83 +0x0cb:  mov    %eax,(%esp)
084aad86 +0x0ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aad8b +0x0d3:  jmp    084aadbd <+0x105>
084aad8d +0x0d5:  mov    %edx,%ebx
084aad8f +0x0d7:  mov    %eax,%esi
084aad91 +0x0d9:  lea    -0x14(%ebp),%eax
084aad94 +0x0dc:  mov    %eax,(%esp)
084aad97 +0x0df:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aad9c +0x0e4:  mov    %esi,%eax
084aad9e +0x0e6:  mov    %ebx,%edx
084aada0 +0x0e8:  jmp    084aada2 <+0xea>
084aada2 +0x0ea:  mov    %edx,%ebx
084aada4 +0x0ec:  mov    %eax,%esi
084aada6 +0x0ee:  lea    -0x10(%ebp),%eax
084aada9 +0x0f1:  mov    %eax,(%esp)
084aadac +0x0f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aadb1 +0x0f9:  mov    %esi,%eax
084aadb3 +0x0fb:  mov    %ebx,%edx
084aadb5 +0x0fd:  mov    %eax,(%esp)
084aadb8 +0x100:  call   08ae3750 <_Unwind_Resume>
084aadbd +0x105:  lea    -0x10(%ebp),%eax
084aadc0 +0x108:  mov    %eax,(%esp)
084aadc3 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aadc8 +0x110:  lea    -0x8(%ebp),%esp
084aadcb +0x113:  add    $0x0,%esp
084aadce +0x116:  pop    %ebx
084aadcf +0x117:  pop    %esi
084aadd0 +0x118:  pop    %ebp
084aadd1 +0x119:  ret
```

## 反编译 C

```c
// game_master::CChangeNPCMaxDayCmd::parse @ 0x84aacb8

/* game_master::CChangeNPCMaxDayCmd::parse() */

void __thiscall game_master::CChangeNPCMaxDayCmd::parse(CChangeNPCMaxDayCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aad46 to 084aad4a has its CatchHandler @ 084aada2 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aad54 to 084aad71 has its CatchHandler @ 084aad8d */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aad86 to 084aad8a has its CatchHandler @ 084aada2 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}
```
