# HasSlang

`_ZN16CSyncSlangFilter8HasSlangERKSs`

`CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e622` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e622  _ZN16CSyncSlangFilter8HasSlangERKSs
#           CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0862e622, 0x0862e729]
0862e622 +0x000:  push   %ebp
0862e623 +0x001:  mov    %esp,%ebp
0862e625 +0x003:  push   %esi
0862e626 +0x004:  push   %ebx
0862e627 +0x005:  sub    $0x20,%esp
0862e62a +0x008:  movl   $0x0,-0xc(%ebp)
0862e631 +0x00f:  movl   $0x0,-0xc(%ebp)
0862e638 +0x016:  jmp    0862e700 <+0xde>
0862e63d +0x01b:  mov    0x8(%ebp),%eax
0862e640 +0x01e:  add    $0x8,%eax
0862e643 +0x021:  mov    %eax,0x4(%esp)
0862e647 +0x025:  lea    -0x14(%ebp),%eax
0862e64a +0x028:  mov    %eax,(%esp)
0862e64d +0x02b:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
0862e652 +0x030:  mov    0xc(%ebp),%eax
0862e655 +0x033:  mov    %eax,(%esp)
0862e658 +0x036:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e65d +0x03b:  mov    %eax,%edx
0862e65f +0x03d:  sub    -0xc(%ebp),%edx
0862e662 +0x040:  lea    -0x10(%ebp),%eax
0862e665 +0x043:  mov    %edx,0xc(%esp)
0862e669 +0x047:  mov    -0xc(%ebp),%edx
0862e66c +0x04a:  mov    %edx,0x8(%esp)
0862e670 +0x04e:  mov    0xc(%ebp),%edx
0862e673 +0x051:  mov    %edx,0x4(%esp)
0862e677 +0x055:  mov    %eax,(%esp)
0862e67a +0x058:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
0862e67f +0x05d:  sub    $0x4,%esp
0862e682 +0x060:  lea    -0x10(%ebp),%eax
0862e685 +0x063:  mov    %eax,0x4(%esp)
0862e689 +0x067:  mov    0x8(%ebp),%eax
0862e68c +0x06a:  mov    %eax,(%esp)
0862e68f +0x06d:  call   0862e3be <_ZNK16CSyncSlangFilter5matchERKSs>  ; CSyncSlangFilter::match(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
0862e694 +0x072:  test   %eax,%eax
0862e696 +0x074:  setne  %bl
0862e699 +0x077:  lea    -0x10(%ebp),%eax
0862e69c +0x07a:  mov    %eax,(%esp)
0862e69f +0x07d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e6a4 +0x082:  jmp    0862e6bb <+0x99>
0862e6a6 +0x084:  mov    %edx,%ebx
0862e6a8 +0x086:  mov    %eax,%esi
0862e6aa +0x088:  lea    -0x10(%ebp),%eax
0862e6ad +0x08b:  mov    %eax,(%esp)
0862e6b0 +0x08e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e6b5 +0x093:  mov    %esi,%eax
0862e6b7 +0x095:  mov    %ebx,%edx
0862e6b9 +0x097:  jmp    0862e6d2 <+0xb0>
0862e6bb +0x099:  test   %bl,%bl
0862e6bd +0x09b:  je     0862e6cb <+0xa9>
0862e6bf +0x09d:  mov    $0x1,%esi
0862e6c4 +0x0a2:  mov    $0x0,%ebx
0862e6c9 +0x0a7:  jmp    0862e6ed <+0xcb>
0862e6cb +0x0a9:  mov    $0x1,%ebx
0862e6d0 +0x0ae:  jmp    0862e6ed <+0xcb>
0862e6d2 +0x0b0:  mov    %edx,%ebx
0862e6d4 +0x0b2:  mov    %eax,%esi
0862e6d6 +0x0b4:  lea    -0x14(%ebp),%eax
0862e6d9 +0x0b7:  mov    %eax,(%esp)
0862e6dc +0x0ba:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e6e1 +0x0bf:  mov    %esi,%eax
0862e6e3 +0x0c1:  mov    %ebx,%edx
0862e6e5 +0x0c3:  mov    %eax,(%esp)
0862e6e8 +0x0c6:  call   08ae3750 <_Unwind_Resume>
0862e6ed +0x0cb:  lea    -0x14(%ebp),%eax
0862e6f0 +0x0ce:  mov    %eax,(%esp)
0862e6f3 +0x0d1:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e6f8 +0x0d6:  test   %ebx,%ebx
0862e6fa +0x0d8:  je     0862e71e <+0xfc>
0862e6fc +0x0da:  addl   $0x1,-0xc(%ebp)
0862e700 +0x0de:  mov    0xc(%ebp),%eax
0862e703 +0x0e1:  mov    %eax,(%esp)
0862e706 +0x0e4:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e70b +0x0e9:  cmp    -0xc(%ebp),%eax
0862e70e +0x0ec:  seta   %al
0862e711 +0x0ef:  test   %al,%al
0862e713 +0x0f1:  jne    0862e63d <+0x1b>
0862e719 +0x0f7:  mov    $0x0,%esi
0862e71e +0x0fc:  mov    %esi,%eax
0862e720 +0x0fe:  lea    -0x8(%ebp),%esp
0862e723 +0x101:  add    $0x0,%esp
0862e726 +0x104:  pop    %ebx
0862e727 +0x105:  pop    %esi
0862e728 +0x106:  pop    %ebp
0862e729 +0x107:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::HasSlang @ 0x862e622

/* CSyncSlangFilter::HasSlang(std::string const&) */

undefined4 __thiscall CSyncSlangFilter::HasSlang(CSyncSlangFilter *this,string *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  readGuard<rwLock> local_18 [4];
  string local_14;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::string::size((string *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    readGuard<rwLock>::readGuard(local_18,(rwLock *)(this + 8));
                    /* try { // try from 0862e658 to 0862e67e has its CatchHandler @ 0862e6d2 */
    std::string::size((string *)param_1);
    std::string::substr((uint)&local_14,(uint)param_1);
                    /* try { // try from 0862e68f to 0862e693 has its CatchHandler @ 0862e6a6 */
    iVar1 = match(this,&local_14);
                    /* try { // try from 0862e69f to 0862e6a3 has its CatchHandler @ 0862e6d2 */
    std::string::~string((string *)&local_14);
    if (iVar1 != 0) {
      unaff_ESI = 1;
    }
    readGuard<rwLock>::~readGuard(local_18);
    if (iVar1 != 0) break;
    local_10 = local_10 + 1;
  }
  return unaff_ESI;
}
```
