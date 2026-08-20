# parse

`_ZN11game_master7CPickup5parseEv`

`game_master::CPickup::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CPickup` | `0x084ac84c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac84c  _ZN11game_master7CPickup5parseEv
#           game_master::CPickup::parse()
# range [0x084ac84c, 0x084ac965]
084ac84c +0x000:  push   %ebp
084ac84d +0x001:  mov    %esp,%ebp
084ac84f +0x003:  push   %esi
084ac850 +0x004:  push   %ebx
084ac851 +0x005:  sub    $0x20,%esp
084ac854 +0x008:  mov    0x8(%ebp),%eax
084ac857 +0x00b:  mov    0x4(%eax),%eax
084ac85a +0x00e:  add    $0xc,%eax
084ac85d +0x011:  mov    %eax,(%esp)
084ac860 +0x014:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac865 +0x019:  mov    0x8(%ebp),%eax
084ac868 +0x01c:  mov    0x4(%eax),%eax
084ac86b +0x01f:  add    $0xc,%eax
084ac86e +0x022:  movl   $0x0,0x8(%esp)
084ac876 +0x02a:  movl   $" ",0x4(%esp)
084ac87e +0x032:  mov    %eax,(%esp)
084ac881 +0x035:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
084ac886 +0x03a:  mov    %eax,-0xc(%ebp)
084ac889 +0x03d:  mov    -0xc(%ebp),%edx
084ac88c +0x040:  mov    0x8(%ebp),%eax
084ac88f +0x043:  mov    0x4(%eax),%eax
084ac892 +0x046:  lea    0xc(%eax),%ecx
084ac895 +0x049:  lea    -0x10(%ebp),%eax
084ac898 +0x04c:  mov    %edx,0xc(%esp)
084ac89c +0x050:  movl   $0x0,0x8(%esp)
084ac8a4 +0x058:  mov    %ecx,0x4(%esp)
084ac8a8 +0x05c:  mov    %eax,(%esp)
084ac8ab +0x05f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ac8b0 +0x064:  sub    $0x4,%esp
084ac8b3 +0x067:  mov    -0xc(%ebp),%eax
084ac8b6 +0x06a:  add    $0x1,%eax
084ac8b9 +0x06d:  mov    %eax,%edx
084ac8bb +0x06f:  mov    0x8(%ebp),%eax
084ac8be +0x072:  mov    0x4(%eax),%eax
084ac8c1 +0x075:  lea    0xc(%eax),%ecx
084ac8c4 +0x078:  lea    -0x14(%ebp),%eax
084ac8c7 +0x07b:  movl   $0xffffffff,0xc(%esp)
084ac8cf +0x083:  mov    %edx,0x8(%esp)
084ac8d3 +0x087:  mov    %ecx,0x4(%esp)
084ac8d7 +0x08b:  mov    %eax,(%esp)
084ac8da +0x08e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ac8df +0x093:  sub    $0x4,%esp
084ac8e2 +0x096:  lea    -0x10(%ebp),%eax
084ac8e5 +0x099:  mov    %eax,(%esp)
084ac8e8 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac8ed +0x0a1:  mov    %eax,(%esp)
084ac8f0 +0x0a4:  call   0807e6f0 <_init+0xfe8>
084ac8f5 +0x0a9:  mov    0x8(%ebp),%edx
084ac8f8 +0x0ac:  mov    %eax,0x8(%edx)
084ac8fb +0x0af:  lea    -0x14(%ebp),%eax
084ac8fe +0x0b2:  mov    %eax,(%esp)
084ac901 +0x0b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac906 +0x0ba:  mov    %eax,(%esp)
084ac909 +0x0bd:  call   0807e6f0 <_init+0xfe8>
084ac90e +0x0c2:  mov    0x8(%ebp),%edx
084ac911 +0x0c5:  mov    %eax,0xc(%edx)
084ac914 +0x0c8:  lea    -0x14(%ebp),%eax
084ac917 +0x0cb:  mov    %eax,(%esp)
084ac91a +0x0ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ac91f +0x0d3:  jmp    084ac951 <+0x105>
084ac921 +0x0d5:  mov    %edx,%ebx
084ac923 +0x0d7:  mov    %eax,%esi
084ac925 +0x0d9:  lea    -0x14(%ebp),%eax
084ac928 +0x0dc:  mov    %eax,(%esp)
084ac92b +0x0df:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ac930 +0x0e4:  mov    %esi,%eax
084ac932 +0x0e6:  mov    %ebx,%edx
084ac934 +0x0e8:  jmp    084ac936 <+0xea>
084ac936 +0x0ea:  mov    %edx,%ebx
084ac938 +0x0ec:  mov    %eax,%esi
084ac93a +0x0ee:  lea    -0x10(%ebp),%eax
084ac93d +0x0f1:  mov    %eax,(%esp)
084ac940 +0x0f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ac945 +0x0f9:  mov    %esi,%eax
084ac947 +0x0fb:  mov    %ebx,%edx
084ac949 +0x0fd:  mov    %eax,(%esp)
084ac94c +0x100:  call   08ae3750 <_Unwind_Resume>
084ac951 +0x105:  lea    -0x10(%ebp),%eax
084ac954 +0x108:  mov    %eax,(%esp)
084ac957 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ac95c +0x110:  lea    -0x8(%ebp),%esp
084ac95f +0x113:  add    $0x0,%esp
084ac962 +0x116:  pop    %ebx
084ac963 +0x117:  pop    %esi
084ac964 +0x118:  pop    %ebp
084ac965 +0x119:  ret
```

## 反编译 C

```c
// game_master::CPickup::parse @ 0x84ac84c

/* game_master::CPickup::parse() */

void __thiscall game_master::CPickup::parse(CPickup *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac8da to 084ac8de has its CatchHandler @ 084ac936 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac8e8 to 084ac905 has its CatchHandler @ 084ac921 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084ac91a to 084ac91e has its CatchHandler @ 084ac936 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}
```
