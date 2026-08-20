# parse

`_ZN11game_master13CEnduranceCmd5parseEv`

`game_master::CEnduranceCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CEnduranceCmd` | `0x084aa73a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa73a  _ZN11game_master13CEnduranceCmd5parseEv
#           game_master::CEnduranceCmd::parse()
# range [0x084aa73a, 0x084aa857]
084aa73a +0x000:  push   %ebp
084aa73b +0x001:  mov    %esp,%ebp
084aa73d +0x003:  push   %esi
084aa73e +0x004:  push   %ebx
084aa73f +0x005:  sub    $0x20,%esp
084aa742 +0x008:  mov    0x8(%ebp),%eax
084aa745 +0x00b:  mov    0x4(%eax),%eax
084aa748 +0x00e:  add    $0xc,%eax
084aa74b +0x011:  mov    %eax,(%esp)
084aa74e +0x014:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084aa753 +0x019:  mov    0x8(%ebp),%eax
084aa756 +0x01c:  mov    0x4(%eax),%eax
084aa759 +0x01f:  add    $0xc,%eax
084aa75c +0x022:  movl   $0x0,0x8(%esp)
084aa764 +0x02a:  movl   $" ",0x4(%esp)
084aa76c +0x032:  mov    %eax,(%esp)
084aa76f +0x035:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084aa774 +0x03a:  mov    %eax,-0xc(%ebp)
084aa777 +0x03d:  mov    -0xc(%ebp),%edx
084aa77a +0x040:  mov    0x8(%ebp),%eax
084aa77d +0x043:  mov    0x4(%eax),%eax
084aa780 +0x046:  lea    0xc(%eax),%ecx
084aa783 +0x049:  lea    -0x10(%ebp),%eax
084aa786 +0x04c:  mov    %edx,0xc(%esp)
084aa78a +0x050:  movl   $0x0,0x8(%esp)
084aa792 +0x058:  mov    %ecx,0x4(%esp)
084aa796 +0x05c:  mov    %eax,(%esp)
084aa799 +0x05f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aa79e +0x064:  sub    $0x4,%esp
084aa7a1 +0x067:  mov    -0xc(%ebp),%eax
084aa7a4 +0x06a:  add    $0x1,%eax
084aa7a7 +0x06d:  mov    %eax,%edx
084aa7a9 +0x06f:  mov    0x8(%ebp),%eax
084aa7ac +0x072:  mov    0x4(%eax),%eax
084aa7af +0x075:  lea    0xc(%eax),%ecx
084aa7b2 +0x078:  lea    -0x14(%ebp),%eax
084aa7b5 +0x07b:  movl   $0xffffffff,0xc(%esp)
084aa7bd +0x083:  mov    %edx,0x8(%esp)
084aa7c1 +0x087:  mov    %ecx,0x4(%esp)
084aa7c5 +0x08b:  mov    %eax,(%esp)
084aa7c8 +0x08e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084aa7cd +0x093:  sub    $0x4,%esp
084aa7d0 +0x096:  lea    -0x10(%ebp),%eax
084aa7d3 +0x099:  mov    %eax,(%esp)
084aa7d6 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa7db +0x0a1:  mov    %eax,(%esp)
084aa7de +0x0a4:  call   0807e6f0 <_init+0xfe8>
084aa7e3 +0x0a9:  mov    0x8(%ebp),%edx
084aa7e6 +0x0ac:  mov    %eax,0x8(%edx)
084aa7e9 +0x0af:  lea    -0x14(%ebp),%eax
084aa7ec +0x0b2:  mov    %eax,(%esp)
084aa7ef +0x0b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa7f4 +0x0ba:  mov    %eax,(%esp)
084aa7f7 +0x0bd:  call   0807e6f0 <_init+0xfe8>
084aa7fc +0x0c2:  mov    %eax,%edx
084aa7fe +0x0c4:  mov    0x8(%ebp),%eax
084aa801 +0x0c7:  mov    %dx,0xc(%eax)
084aa805 +0x0cb:  lea    -0x14(%ebp),%eax
084aa808 +0x0ce:  mov    %eax,(%esp)
084aa80b +0x0d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa810 +0x0d6:  jmp    084aa842 <+0x108>
084aa812 +0x0d8:  mov    %edx,%ebx
084aa814 +0x0da:  mov    %eax,%esi
084aa816 +0x0dc:  lea    -0x14(%ebp),%eax
084aa819 +0x0df:  mov    %eax,(%esp)
084aa81c +0x0e2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa821 +0x0e7:  mov    %esi,%eax
084aa823 +0x0e9:  mov    %ebx,%edx
084aa825 +0x0eb:  jmp    084aa827 <+0xed>
084aa827 +0x0ed:  mov    %edx,%ebx
084aa829 +0x0ef:  mov    %eax,%esi
084aa82b +0x0f1:  lea    -0x10(%ebp),%eax
084aa82e +0x0f4:  mov    %eax,(%esp)
084aa831 +0x0f7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa836 +0x0fc:  mov    %esi,%eax
084aa838 +0x0fe:  mov    %ebx,%edx
084aa83a +0x100:  mov    %eax,(%esp)
084aa83d +0x103:  call   08ae3750 <_Unwind_Resume>
084aa842 +0x108:  lea    -0x10(%ebp),%eax
084aa845 +0x10b:  mov    %eax,(%esp)
084aa848 +0x10e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa84d +0x113:  lea    -0x8(%ebp),%esp
084aa850 +0x116:  add    $0x0,%esp
084aa853 +0x119:  pop    %ebx
084aa854 +0x11a:  pop    %esi
084aa855 +0x11b:  pop    %ebp
084aa856 +0x11c:  ret
084aa857 +0x11d:  nop
```

## 反编译 C

```c
// game_master::CEnduranceCmd::parse @ 0x84aa73a

/* game_master::CEnduranceCmd::parse() */

void __thiscall game_master::CEnduranceCmd::parse(CEnduranceCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aa7c8 to 084aa7cc has its CatchHandler @ 084aa827 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aa7d6 to 084aa7f3 has its CatchHandler @ 084aa812 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(short *)(this + 0xc) = (short)iVar2;
                    /* try { // try from 084aa80b to 084aa80f has its CatchHandler @ 084aa827 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}
```
