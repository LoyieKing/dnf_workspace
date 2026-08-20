# parse

`_ZN11game_master7CRefund5parseEv`

`game_master::CRefund::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CRefund` | `0x084ac96c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac96c  _ZN11game_master7CRefund5parseEv
#           game_master::CRefund::parse()
# range [0x084ac96c, 0x084aca85]
084ac96c +0x000:  push   %ebp
084ac96d +0x001:  mov    %esp,%ebp
084ac96f +0x003:  push   %esi
084ac970 +0x004:  push   %ebx
084ac971 +0x005:  sub    $0x20,%esp
084ac974 +0x008:  mov    0x8(%ebp),%eax
084ac977 +0x00b:  mov    0x4(%eax),%eax
084ac97a +0x00e:  add    $0xc,%eax
084ac97d +0x011:  mov    %eax,(%esp)
084ac980 +0x014:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac985 +0x019:  mov    0x8(%ebp),%eax
084ac988 +0x01c:  mov    0x4(%eax),%eax
084ac98b +0x01f:  add    $0xc,%eax
084ac98e +0x022:  movl   $0x0,0x8(%esp)
084ac996 +0x02a:  movl   $" ",0x4(%esp)
084ac99e +0x032:  mov    %eax,(%esp)
084ac9a1 +0x035:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084ac9a6 +0x03a:  mov    %eax,-0xc(%ebp)
084ac9a9 +0x03d:  mov    -0xc(%ebp),%edx
084ac9ac +0x040:  mov    0x8(%ebp),%eax
084ac9af +0x043:  mov    0x4(%eax),%eax
084ac9b2 +0x046:  lea    0xc(%eax),%ecx
084ac9b5 +0x049:  lea    -0x10(%ebp),%eax
084ac9b8 +0x04c:  mov    %edx,0xc(%esp)
084ac9bc +0x050:  movl   $0x0,0x8(%esp)
084ac9c4 +0x058:  mov    %ecx,0x4(%esp)
084ac9c8 +0x05c:  mov    %eax,(%esp)
084ac9cb +0x05f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ac9d0 +0x064:  sub    $0x4,%esp
084ac9d3 +0x067:  mov    -0xc(%ebp),%eax
084ac9d6 +0x06a:  add    $0x1,%eax
084ac9d9 +0x06d:  mov    %eax,%edx
084ac9db +0x06f:  mov    0x8(%ebp),%eax
084ac9de +0x072:  mov    0x4(%eax),%eax
084ac9e1 +0x075:  lea    0xc(%eax),%ecx
084ac9e4 +0x078:  lea    -0x14(%ebp),%eax
084ac9e7 +0x07b:  movl   $0xffffffff,0xc(%esp)
084ac9ef +0x083:  mov    %edx,0x8(%esp)
084ac9f3 +0x087:  mov    %ecx,0x4(%esp)
084ac9f7 +0x08b:  mov    %eax,(%esp)
084ac9fa +0x08e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ac9ff +0x093:  sub    $0x4,%esp
084aca02 +0x096:  lea    -0x10(%ebp),%eax
084aca05 +0x099:  mov    %eax,(%esp)
084aca08 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aca0d +0x0a1:  mov    %eax,(%esp)
084aca10 +0x0a4:  call   0807e6f0 <_init+0xfe8>
084aca15 +0x0a9:  mov    0x8(%ebp),%edx
084aca18 +0x0ac:  mov    %eax,0x8(%edx)
084aca1b +0x0af:  lea    -0x14(%ebp),%eax
084aca1e +0x0b2:  mov    %eax,(%esp)
084aca21 +0x0b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aca26 +0x0ba:  mov    %eax,(%esp)
084aca29 +0x0bd:  call   0807e6f0 <_init+0xfe8>
084aca2e +0x0c2:  mov    0x8(%ebp),%edx
084aca31 +0x0c5:  mov    %eax,0xc(%edx)
084aca34 +0x0c8:  lea    -0x14(%ebp),%eax
084aca37 +0x0cb:  mov    %eax,(%esp)
084aca3a +0x0ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aca3f +0x0d3:  jmp    084aca71 <+0x105>
084aca41 +0x0d5:  mov    %edx,%ebx
084aca43 +0x0d7:  mov    %eax,%esi
084aca45 +0x0d9:  lea    -0x14(%ebp),%eax
084aca48 +0x0dc:  mov    %eax,(%esp)
084aca4b +0x0df:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aca50 +0x0e4:  mov    %esi,%eax
084aca52 +0x0e6:  mov    %ebx,%edx
084aca54 +0x0e8:  jmp    084aca56 <+0xea>
084aca56 +0x0ea:  mov    %edx,%ebx
084aca58 +0x0ec:  mov    %eax,%esi
084aca5a +0x0ee:  lea    -0x10(%ebp),%eax
084aca5d +0x0f1:  mov    %eax,(%esp)
084aca60 +0x0f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aca65 +0x0f9:  mov    %esi,%eax
084aca67 +0x0fb:  mov    %ebx,%edx
084aca69 +0x0fd:  mov    %eax,(%esp)
084aca6c +0x100:  call   08ae3750 <_Unwind_Resume>
084aca71 +0x105:  lea    -0x10(%ebp),%eax
084aca74 +0x108:  mov    %eax,(%esp)
084aca77 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aca7c +0x110:  lea    -0x8(%ebp),%esp
084aca7f +0x113:  add    $0x0,%esp
084aca82 +0x116:  pop    %ebx
084aca83 +0x117:  pop    %esi
084aca84 +0x118:  pop    %ebp
084aca85 +0x119:  ret
```

## 反编译 C

```c
// game_master::CRefund::parse @ 0x84ac96c

/* game_master::CRefund::parse() */

void __thiscall game_master::CRefund::parse(CRefund *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac9fa to 084ac9fe has its CatchHandler @ 084aca56 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aca08 to 084aca25 has its CatchHandler @ 084aca41 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aca3a to 084aca3e has its CatchHandler @ 084aca56 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}
```
