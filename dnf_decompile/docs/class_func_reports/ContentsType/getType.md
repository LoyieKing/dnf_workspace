# getType

`_ZN12ContentsType7getTypeEPKc`

`ContentsType::getType(char const*)`

| 类 | 地址 |
|---|---|
| `ContentsType` | `0x08ac34a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac34a4  _ZN12ContentsType7getTypeEPKc
#           ContentsType::getType(char const*)
# range [0x08ac34a4, 0x08ac35cb]
08ac34a4 +0x000:  push   %ebp
08ac34a5 +0x001:  mov    %esp,%ebp
08ac34a7 +0x003:  push   %esi
08ac34a8 +0x004:  push   %ebx
08ac34a9 +0x005:  sub    $0x30,%esp
08ac34ac +0x008:  movl   $0x0,-0xc(%ebp)
08ac34b3 +0x00f:  jmp    08ac35b1 <+0x10d>
08ac34b8 +0x014:  lea    -0x15(%ebp),%eax
08ac34bb +0x017:  mov    %eax,(%esp)
08ac34be +0x01a:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08ac34c3 +0x01f:  mov    -0xc(%ebp),%eax
08ac34c6 +0x022:  mov    %eax,(%esp)
08ac34c9 +0x025:  call   08ac3434 <_ZN12ContentsType9getStringENS_1TE>  ; ContentsType::getString(ContentsType::T)
08ac34ce +0x02a:  lea    -0x15(%ebp),%edx
08ac34d1 +0x02d:  mov    %edx,0x8(%esp)
08ac34d5 +0x031:  mov    %eax,0x4(%esp)
08ac34d9 +0x035:  lea    -0x1c(%ebp),%eax
08ac34dc +0x038:  mov    %eax,(%esp)
08ac34df +0x03b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ac34e4 +0x040:  lea    -0xd(%ebp),%eax
08ac34e7 +0x043:  mov    %eax,(%esp)
08ac34ea +0x046:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08ac34ef +0x04b:  lea    -0xd(%ebp),%eax
08ac34f2 +0x04e:  mov    %eax,0x8(%esp)
08ac34f6 +0x052:  mov    0x8(%ebp),%eax
08ac34f9 +0x055:  mov    %eax,0x4(%esp)
08ac34fd +0x059:  lea    -0x14(%ebp),%eax
08ac3500 +0x05c:  mov    %eax,(%esp)
08ac3503 +0x05f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ac3508 +0x064:  lea    -0x1c(%ebp),%eax
08ac350b +0x067:  mov    %eax,0x4(%esp)
08ac350f +0x06b:  lea    -0x14(%ebp),%eax
08ac3512 +0x06e:  mov    %eax,(%esp)
08ac3515 +0x071:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
08ac351a +0x076:  mov    %eax,%ebx
08ac351c +0x078:  lea    -0x14(%ebp),%eax
08ac351f +0x07b:  mov    %eax,(%esp)
08ac3522 +0x07e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac3527 +0x083:  jmp    08ac3566 <+0xc2>
08ac3529 +0x085:  mov    %edx,%ebx
08ac352b +0x087:  mov    %eax,%esi
08ac352d +0x089:  lea    -0x14(%ebp),%eax
08ac3530 +0x08c:  mov    %eax,(%esp)
08ac3533 +0x08f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac3538 +0x094:  mov    %esi,%eax
08ac353a +0x096:  mov    %ebx,%edx
08ac353c +0x098:  jmp    08ac353e <+0x9a>
08ac353e +0x09a:  mov    %edx,%ebx
08ac3540 +0x09c:  mov    %eax,%esi
08ac3542 +0x09e:  lea    -0xd(%ebp),%eax
08ac3545 +0x0a1:  mov    %eax,(%esp)
08ac3548 +0x0a4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ac354d +0x0a9:  mov    %esi,%eax
08ac354f +0x0ab:  mov    %ebx,%edx
08ac3551 +0x0ad:  mov    %edx,%ebx
08ac3553 +0x0af:  mov    %eax,%esi
08ac3555 +0x0b1:  lea    -0x1c(%ebp),%eax
08ac3558 +0x0b4:  mov    %eax,(%esp)
08ac355b +0x0b7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac3560 +0x0bc:  mov    %esi,%eax
08ac3562 +0x0be:  mov    %ebx,%edx
08ac3564 +0x0c0:  jmp    08ac357e <+0xda>
08ac3566 +0x0c2:  lea    -0xd(%ebp),%eax
08ac3569 +0x0c5:  mov    %eax,(%esp)
08ac356c +0x0c8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ac3571 +0x0cd:  lea    -0x1c(%ebp),%eax
08ac3574 +0x0d0:  mov    %eax,(%esp)
08ac3577 +0x0d3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac357c +0x0d8:  jmp    08ac3599 <+0xf5>
08ac357e +0x0da:  mov    %edx,%ebx
08ac3580 +0x0dc:  mov    %eax,%esi
08ac3582 +0x0de:  lea    -0x15(%ebp),%eax
08ac3585 +0x0e1:  mov    %eax,(%esp)
08ac3588 +0x0e4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ac358d +0x0e9:  mov    %esi,%eax
08ac358f +0x0eb:  mov    %ebx,%edx
08ac3591 +0x0ed:  mov    %eax,(%esp)
08ac3594 +0x0f0:  call   08ae3750 <_Unwind_Resume>
08ac3599 +0x0f5:  lea    -0x15(%ebp),%eax
08ac359c +0x0f8:  mov    %eax,(%esp)
08ac359f +0x0fb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ac35a4 +0x100:  test   %bl,%bl
08ac35a6 +0x102:  je     08ac35ad <+0x109>
08ac35a8 +0x104:  mov    -0xc(%ebp),%eax
08ac35ab +0x107:  jmp    08ac35c5 <+0x121>
08ac35ad +0x109:  addl   $0x1,-0xc(%ebp)
08ac35b1 +0x10d:  cmpl   $0xc,-0xc(%ebp)
08ac35b5 +0x111:  setle  %al
08ac35b8 +0x114:  test   %al,%al
08ac35ba +0x116:  jne    08ac34b8 <+0x14>
08ac35c0 +0x11c:  mov    $0x0,%eax
08ac35c5 +0x121:  add    $0x30,%esp
08ac35c8 +0x124:  pop    %ebx
08ac35c9 +0x125:  pop    %esi
08ac35ca +0x126:  pop    %ebp
08ac35cb +0x127:  ret
```

## 反编译 C

```c
// ContentsType::getType @ 0x8ac34a4

/* ContentsType::getType(char const*) */

int ContentsType::getType(char *param_1)

{
  char cVar1;
  char *pcVar2;
  string local_20;
  allocator<char> local_19;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0xc < local_10) {
      return 0;
    }
    std::allocator<char>::allocator();
    pcVar2 = (char *)getString(local_10);
                    /* try { // try from 08ac34df to 08ac34e3 has its CatchHandler @ 08ac357e */
    std::string::string((string *)&local_20,pcVar2,(allocator *)&local_19);
    std::allocator<char>::allocator();
                    /* try { // try from 08ac3503 to 08ac3507 has its CatchHandler @ 08ac353e */
    std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 08ac3515 to 08ac3519 has its CatchHandler @ 08ac3529 */
    cVar1 = std::operator==(&local_18,&local_20);
                    /* try { // try from 08ac3522 to 08ac3526 has its CatchHandler @ 08ac353e */
    std::string::~string((string *)&local_18);
    std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 08ac3577 to 08ac357b has its CatchHandler @ 08ac357e */
    std::string::~string((string *)&local_20);
    std::allocator<char>::~allocator(&local_19);
    if (cVar1 != '\0') break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
