# HasSlangName

`_ZN16CSyncSlangFilter12HasSlangNameERKSs`

`CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e16e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e16e  _ZN16CSyncSlangFilter12HasSlangNameERKSs
#           CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0862e16e, 0x0862e275]
0862e16e +0x000:  push   %ebp
0862e16f +0x001:  mov    %esp,%ebp
0862e171 +0x003:  push   %esi
0862e172 +0x004:  push   %ebx
0862e173 +0x005:  sub    $0x20,%esp
0862e176 +0x008:  movl   $0x0,-0xc(%ebp)
0862e17d +0x00f:  movl   $0x0,-0xc(%ebp)
0862e184 +0x016:  jmp    0862e24c <+0xde>
0862e189 +0x01b:  mov    0x8(%ebp),%eax
0862e18c +0x01e:  add    $0x8,%eax
0862e18f +0x021:  mov    %eax,0x4(%esp)
0862e193 +0x025:  lea    -0x14(%ebp),%eax
0862e196 +0x028:  mov    %eax,(%esp)
0862e199 +0x02b:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
0862e19e +0x030:  mov    0xc(%ebp),%eax
0862e1a1 +0x033:  mov    %eax,(%esp)
0862e1a4 +0x036:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e1a9 +0x03b:  mov    %eax,%edx
0862e1ab +0x03d:  sub    -0xc(%ebp),%edx
0862e1ae +0x040:  lea    -0x10(%ebp),%eax
0862e1b1 +0x043:  mov    %edx,0xc(%esp)
0862e1b5 +0x047:  mov    -0xc(%ebp),%edx
0862e1b8 +0x04a:  mov    %edx,0x8(%esp)
0862e1bc +0x04e:  mov    0xc(%ebp),%edx
0862e1bf +0x051:  mov    %edx,0x4(%esp)
0862e1c3 +0x055:  mov    %eax,(%esp)
0862e1c6 +0x058:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
0862e1cb +0x05d:  sub    $0x4,%esp
0862e1ce +0x060:  lea    -0x10(%ebp),%eax
0862e1d1 +0x063:  mov    %eax,0x4(%esp)
0862e1d5 +0x067:  mov    0x8(%ebp),%eax
0862e1d8 +0x06a:  mov    %eax,(%esp)
0862e1db +0x06d:  call   0862e0c0 <_ZNK16CSyncSlangFilter9MatchNameERKSs>  ; CSyncSlangFilter::MatchName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
0862e1e0 +0x072:  test   %eax,%eax
0862e1e2 +0x074:  setne  %bl
0862e1e5 +0x077:  lea    -0x10(%ebp),%eax
0862e1e8 +0x07a:  mov    %eax,(%esp)
0862e1eb +0x07d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e1f0 +0x082:  jmp    0862e207 <+0x99>
0862e1f2 +0x084:  mov    %edx,%ebx
0862e1f4 +0x086:  mov    %eax,%esi
0862e1f6 +0x088:  lea    -0x10(%ebp),%eax
0862e1f9 +0x08b:  mov    %eax,(%esp)
0862e1fc +0x08e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e201 +0x093:  mov    %esi,%eax
0862e203 +0x095:  mov    %ebx,%edx
0862e205 +0x097:  jmp    0862e21e <+0xb0>
0862e207 +0x099:  test   %bl,%bl
0862e209 +0x09b:  je     0862e217 <+0xa9>
0862e20b +0x09d:  mov    $0x1,%esi
0862e210 +0x0a2:  mov    $0x0,%ebx
0862e215 +0x0a7:  jmp    0862e239 <+0xcb>
0862e217 +0x0a9:  mov    $0x1,%ebx
0862e21c +0x0ae:  jmp    0862e239 <+0xcb>
0862e21e +0x0b0:  mov    %edx,%ebx
0862e220 +0x0b2:  mov    %eax,%esi
0862e222 +0x0b4:  lea    -0x14(%ebp),%eax
0862e225 +0x0b7:  mov    %eax,(%esp)
0862e228 +0x0ba:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e22d +0x0bf:  mov    %esi,%eax
0862e22f +0x0c1:  mov    %ebx,%edx
0862e231 +0x0c3:  mov    %eax,(%esp)
0862e234 +0x0c6:  call   08ae3750 <_Unwind_Resume>
0862e239 +0x0cb:  lea    -0x14(%ebp),%eax
0862e23c +0x0ce:  mov    %eax,(%esp)
0862e23f +0x0d1:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e244 +0x0d6:  test   %ebx,%ebx
0862e246 +0x0d8:  je     0862e26a <+0xfc>
0862e248 +0x0da:  addl   $0x1,-0xc(%ebp)
0862e24c +0x0de:  mov    0xc(%ebp),%eax
0862e24f +0x0e1:  mov    %eax,(%esp)
0862e252 +0x0e4:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e257 +0x0e9:  cmp    -0xc(%ebp),%eax
0862e25a +0x0ec:  seta   %al
0862e25d +0x0ef:  test   %al,%al
0862e25f +0x0f1:  jne    0862e189 <+0x1b>
0862e265 +0x0f7:  mov    $0x0,%esi
0862e26a +0x0fc:  mov    %esi,%eax
0862e26c +0x0fe:  lea    -0x8(%ebp),%esp
0862e26f +0x101:  add    $0x0,%esp
0862e272 +0x104:  pop    %ebx
0862e273 +0x105:  pop    %esi
0862e274 +0x106:  pop    %ebp
0862e275 +0x107:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::HasSlangName @ 0x862e16e

/* CSyncSlangFilter::HasSlangName(std::string const&) */

undefined4 __thiscall CSyncSlangFilter::HasSlangName(CSyncSlangFilter *this,string *param_1)

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
                    /* try { // try from 0862e1a4 to 0862e1ca has its CatchHandler @ 0862e21e */
    std::string::size((string *)param_1);
    std::string::substr((uint)&local_14,(uint)param_1);
                    /* try { // try from 0862e1db to 0862e1df has its CatchHandler @ 0862e1f2 */
    iVar1 = MatchName(this,&local_14);
                    /* try { // try from 0862e1eb to 0862e1ef has its CatchHandler @ 0862e21e */
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
