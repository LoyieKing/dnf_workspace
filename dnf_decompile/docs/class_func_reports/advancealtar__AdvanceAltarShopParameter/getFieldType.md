# getFieldType

`_ZN12advancealtar25AdvanceAltarShopParameter12getFieldTypeESs`

`advancealtar::AdvanceAltarShopParameter::getFieldType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a27a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a27a2  _ZN12advancealtar25AdvanceAltarShopParameter12getFieldTypeESs
#           advancealtar::AdvanceAltarShopParameter::getFieldType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x088a27a2, 0x088a2b8d]
088a27a2 +0x000:  push   %ebp
088a27a3 +0x001:  mov    %esp,%ebp
088a27a5 +0x003:  sub    $0x28,%esp
088a27a8 +0x006:  movl   $0xffffffff,-0xc(%ebp)
088a27af +0x00d:  movl   $"level",0x4(%esp)
088a27b7 +0x015:  mov    0xc(%ebp),%eax
088a27ba +0x018:  mov    %eax,(%esp)
088a27bd +0x01b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a27c2 +0x020:  test   %eax,%eax
088a27c4 +0x022:  sete   %al
088a27c7 +0x025:  test   %al,%al
088a27c9 +0x027:  je     088a27d7 <+0x35>
088a27cb +0x029:  movl   $0x0,-0xc(%ebp)
088a27d2 +0x030:  jmp    088a2b89 <+0x3e7>
088a27d7 +0x035:  movl   $"index",0x4(%esp)
088a27df +0x03d:  mov    0xc(%ebp),%eax
088a27e2 +0x040:  mov    %eax,(%esp)
088a27e5 +0x043:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a27ea +0x048:  test   %eax,%eax
088a27ec +0x04a:  sete   %al
088a27ef +0x04d:  test   %al,%al
088a27f1 +0x04f:  je     088a27ff <+0x5d>
088a27f3 +0x051:  movl   $0x1,-0xc(%ebp)
088a27fa +0x058:  jmp    088a2b89 <+0x3e7>
088a27ff +0x05d:  movl   $"price",0x4(%esp)
088a2807 +0x065:  mov    0xc(%ebp),%eax
088a280a +0x068:  mov    %eax,(%esp)
088a280d +0x06b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2812 +0x070:  test   %eax,%eax
088a2814 +0x072:  sete   %al
088a2817 +0x075:  test   %al,%al
088a2819 +0x077:  je     088a2827 <+0x85>
088a281b +0x079:  movl   $0x2,-0xc(%ebp)
088a2822 +0x080:  jmp    088a2b89 <+0x3e7>
088a2827 +0x085:  movl   $"name",0x4(%esp)
088a282f +0x08d:  mov    0xc(%ebp),%eax
088a2832 +0x090:  mov    %eax,(%esp)
088a2835 +0x093:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a283a +0x098:  test   %eax,%eax
088a283c +0x09a:  sete   %al
088a283f +0x09d:  test   %al,%al
088a2841 +0x09f:  je     088a284f <+0xad>
088a2843 +0x0a1:  movl   $0x3,-0xc(%ebp)
088a284a +0x0a8:  jmp    088a2b89 <+0x3e7>
088a284f +0x0ad:  movl   $"cooltime",0x4(%esp)
088a2857 +0x0b5:  mov    0xc(%ebp),%eax
088a285a +0x0b8:  mov    %eax,(%esp)
088a285d +0x0bb:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2862 +0x0c0:  test   %eax,%eax
088a2864 +0x0c2:  sete   %al
088a2867 +0x0c5:  test   %al,%al
088a2869 +0x0c7:  je     088a2877 <+0xd5>
088a286b +0x0c9:  movl   $0x4,-0xc(%ebp)
088a2872 +0x0d0:  jmp    088a2b89 <+0x3e7>
088a2877 +0x0d5:  movl   $"need point",0x4(%esp)
088a287f +0x0dd:  mov    0xc(%ebp),%eax
088a2882 +0x0e0:  mov    %eax,(%esp)
088a2885 +0x0e3:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a288a +0x0e8:  test   %eax,%eax
088a288c +0x0ea:  sete   %al
088a288f +0x0ed:  test   %al,%al
088a2891 +0x0ef:  je     088a289f <+0xfd>
088a2893 +0x0f1:  movl   $0x5,-0xc(%ebp)
088a289a +0x0f8:  jmp    088a2b89 <+0x3e7>
088a289f +0x0fd:  movl   $"explain",0x4(%esp)
088a28a7 +0x105:  mov    0xc(%ebp),%eax
088a28aa +0x108:  mov    %eax,(%esp)
088a28ad +0x10b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a28b2 +0x110:  test   %eax,%eax
088a28b4 +0x112:  sete   %al
088a28b7 +0x115:  test   %al,%al
088a28b9 +0x117:  je     088a28c7 <+0x125>
088a28bb +0x119:  movl   $0x6,-0xc(%ebp)
088a28c2 +0x120:  jmp    088a2b89 <+0x3e7>
088a28c7 +0x125:  movl   $"type explain",0x4(%esp)
088a28cf +0x12d:  mov    0xc(%ebp),%eax
088a28d2 +0x130:  mov    %eax,(%esp)
088a28d5 +0x133:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a28da +0x138:  test   %eax,%eax
088a28dc +0x13a:  sete   %al
088a28df +0x13d:  test   %al,%al
088a28e1 +0x13f:  je     088a28ef <+0x14d>
088a28e3 +0x141:  movl   $0x7,-0xc(%ebp)
088a28ea +0x148:  jmp    088a2b89 <+0x3e7>
088a28ef +0x14d:  movl   $"set slot",0x4(%esp)
088a28f7 +0x155:  mov    0xc(%ebp),%eax
088a28fa +0x158:  mov    %eax,(%esp)
088a28fd +0x15b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2902 +0x160:  test   %eax,%eax
088a2904 +0x162:  sete   %al
088a2907 +0x165:  test   %al,%al
088a2909 +0x167:  je     088a2917 <+0x175>
088a290b +0x169:  movl   $0x8,-0xc(%ebp)
088a2912 +0x170:  jmp    088a2b89 <+0x3e7>
088a2917 +0x175:  movl   $"image index",0x4(%esp)
088a291f +0x17d:  mov    0xc(%ebp),%eax
088a2922 +0x180:  mov    %eax,(%esp)
088a2925 +0x183:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a292a +0x188:  test   %eax,%eax
088a292c +0x18a:  sete   %al
088a292f +0x18d:  test   %al,%al
088a2931 +0x18f:  je     088a293f <+0x19d>
088a2933 +0x191:  movl   $0x9,-0xc(%ebp)
088a293a +0x198:  jmp    088a2b89 <+0x3e7>
088a293f +0x19d:  movl   $"hp",0x4(%esp)
088a2947 +0x1a5:  mov    0xc(%ebp),%eax
088a294a +0x1a8:  mov    %eax,(%esp)
088a294d +0x1ab:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2952 +0x1b0:  test   %eax,%eax
088a2954 +0x1b2:  sete   %al
088a2957 +0x1b5:  test   %al,%al
088a2959 +0x1b7:  je     088a2967 <+0x1c5>
088a295b +0x1b9:  movl   $0xa,-0xc(%ebp)
088a2962 +0x1c0:  jmp    088a2b89 <+0x3e7>
088a2967 +0x1c5:  movl   $"dmg",0x4(%esp)
088a296f +0x1cd:  mov    0xc(%ebp),%eax
088a2972 +0x1d0:  mov    %eax,(%esp)
088a2975 +0x1d3:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a297a +0x1d8:  test   %eax,%eax
088a297c +0x1da:  sete   %al
088a297f +0x1dd:  test   %al,%al
088a2981 +0x1df:  je     088a298f <+0x1ed>
088a2983 +0x1e1:  movl   $0xb,-0xc(%ebp)
088a298a +0x1e8:  jmp    088a2b89 <+0x3e7>
088a298f +0x1ed:  movl   $"pic",0x4(%esp)
088a2997 +0x1f5:  mov    0xc(%ebp),%eax
088a299a +0x1f8:  mov    %eax,(%esp)
088a299d +0x1fb:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a29a2 +0x200:  test   %eax,%eax
088a29a4 +0x202:  sete   %al
088a29a7 +0x205:  test   %al,%al
088a29a9 +0x207:  je     088a29b7 <+0x215>
088a29ab +0x209:  movl   $0xc,-0xc(%ebp)
088a29b2 +0x210:  jmp    088a2b89 <+0x3e7>
088a29b7 +0x215:  movl   $"rcv",0x4(%esp)
088a29bf +0x21d:  mov    0xc(%ebp),%eax
088a29c2 +0x220:  mov    %eax,(%esp)
088a29c5 +0x223:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a29ca +0x228:  test   %eax,%eax
088a29cc +0x22a:  sete   %al
088a29cf +0x22d:  test   %al,%al
088a29d1 +0x22f:  je     088a29df <+0x23d>
088a29d3 +0x231:  movl   $0xd,-0xc(%ebp)
088a29da +0x238:  jmp    088a2b89 <+0x3e7>
088a29df +0x23d:  movl   $"sum",0x4(%esp)
088a29e7 +0x245:  mov    0xc(%ebp),%eax
088a29ea +0x248:  mov    %eax,(%esp)
088a29ed +0x24b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a29f2 +0x250:  test   %eax,%eax
088a29f4 +0x252:  sete   %al
088a29f7 +0x255:  test   %al,%al
088a29f9 +0x257:  je     088a2a07 <+0x265>
088a29fb +0x259:  movl   $0xe,-0xc(%ebp)
088a2a02 +0x260:  jmp    088a2b89 <+0x3e7>
088a2a07 +0x265:  movl   $"mht",0x4(%esp)
088a2a0f +0x26d:  mov    0xc(%ebp),%eax
088a2a12 +0x270:  mov    %eax,(%esp)
088a2a15 +0x273:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2a1a +0x278:  test   %eax,%eax
088a2a1c +0x27a:  sete   %al
088a2a1f +0x27d:  test   %al,%al
088a2a21 +0x27f:  je     088a2a2f <+0x28d>
088a2a23 +0x281:  movl   $0xf,-0xc(%ebp)
088a2a2a +0x288:  jmp    088a2b89 <+0x3e7>
088a2a2f +0x28d:  movl   $"rgn",0x4(%esp)
088a2a37 +0x295:  mov    0xc(%ebp),%eax
088a2a3a +0x298:  mov    %eax,(%esp)
088a2a3d +0x29b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2a42 +0x2a0:  test   %eax,%eax
088a2a44 +0x2a2:  sete   %al
088a2a47 +0x2a5:  test   %al,%al
088a2a49 +0x2a7:  je     088a2a57 <+0x2b5>
088a2a4b +0x2a9:  movl   $0x10,-0xc(%ebp)
088a2a52 +0x2b0:  jmp    088a2b89 <+0x3e7>
088a2a57 +0x2b5:  movl   $"msd",0x4(%esp)
088a2a5f +0x2bd:  mov    0xc(%ebp),%eax
088a2a62 +0x2c0:  mov    %eax,(%esp)
088a2a65 +0x2c3:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2a6a +0x2c8:  test   %eax,%eax
088a2a6c +0x2ca:  sete   %al
088a2a6f +0x2cd:  test   %al,%al
088a2a71 +0x2cf:  je     088a2a7f <+0x2dd>
088a2a73 +0x2d1:  movl   $0x11,-0xc(%ebp)
088a2a7a +0x2d8:  jmp    088a2b89 <+0x3e7>
088a2a7f +0x2dd:  movl   $"asd",0x4(%esp)
088a2a87 +0x2e5:  mov    0xc(%ebp),%eax
088a2a8a +0x2e8:  mov    %eax,(%esp)
088a2a8d +0x2eb:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2a92 +0x2f0:  test   %eax,%eax
088a2a94 +0x2f2:  sete   %al
088a2a97 +0x2f5:  test   %al,%al
088a2a99 +0x2f7:  je     088a2aa7 <+0x305>
088a2a9b +0x2f9:  movl   $0x12,-0xc(%ebp)
088a2aa2 +0x300:  jmp    088a2b89 <+0x3e7>
088a2aa7 +0x305:  movl   $"sdt",0x4(%esp)
088a2aaf +0x30d:  mov    0xc(%ebp),%eax
088a2ab2 +0x310:  mov    %eax,(%esp)
088a2ab5 +0x313:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2aba +0x318:  test   %eax,%eax
088a2abc +0x31a:  sete   %al
088a2abf +0x31d:  test   %al,%al
088a2ac1 +0x31f:  je     088a2acf <+0x32d>
088a2ac3 +0x321:  movl   $0x13,-0xc(%ebp)
088a2aca +0x328:  jmp    088a2b89 <+0x3e7>
088a2acf +0x32d:  movl   $"fdt",0x4(%esp)
088a2ad7 +0x335:  mov    0xc(%ebp),%eax
088a2ada +0x338:  mov    %eax,(%esp)
088a2add +0x33b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2ae2 +0x340:  test   %eax,%eax
088a2ae4 +0x342:  sete   %al
088a2ae7 +0x345:  test   %al,%al
088a2ae9 +0x347:  je     088a2af7 <+0x355>
088a2aeb +0x349:  movl   $0x14,-0xc(%ebp)
088a2af2 +0x350:  jmp    088a2b89 <+0x3e7>
088a2af7 +0x355:  movl   $"etc",0x4(%esp)
088a2aff +0x35d:  mov    0xc(%ebp),%eax
088a2b02 +0x360:  mov    %eax,(%esp)
088a2b05 +0x363:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2b0a +0x368:  test   %eax,%eax
088a2b0c +0x36a:  sete   %al
088a2b0f +0x36d:  test   %al,%al
088a2b11 +0x36f:  je     088a2b1c <+0x37a>
088a2b13 +0x371:  movl   $0x15,-0xc(%ebp)
088a2b1a +0x378:  jmp    088a2b89 <+0x3e7>
088a2b1c +0x37a:  movl   $"lrg",0x4(%esp)
088a2b24 +0x382:  mov    0xc(%ebp),%eax
088a2b27 +0x385:  mov    %eax,(%esp)
088a2b2a +0x388:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2b2f +0x38d:  test   %eax,%eax
088a2b31 +0x38f:  sete   %al
088a2b34 +0x392:  test   %al,%al
088a2b36 +0x394:  je     088a2b41 <+0x39f>
088a2b38 +0x396:  movl   $0x16,-0xc(%ebp)
088a2b3f +0x39d:  jmp    088a2b89 <+0x3e7>
088a2b41 +0x39f:  movl   $"spl",0x4(%esp)
088a2b49 +0x3a7:  mov    0xc(%ebp),%eax
088a2b4c +0x3aa:  mov    %eax,(%esp)
088a2b4f +0x3ad:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2b54 +0x3b2:  test   %eax,%eax
088a2b56 +0x3b4:  sete   %al
088a2b59 +0x3b7:  test   %al,%al
088a2b5b +0x3b9:  je     088a2b66 <+0x3c4>
088a2b5d +0x3bb:  movl   $0x17,-0xc(%ebp)
088a2b64 +0x3c2:  jmp    088a2b89 <+0x3e7>
088a2b66 +0x3c4:  movl   $"etc2",0x4(%esp)
088a2b6e +0x3cc:  mov    0xc(%ebp),%eax
088a2b71 +0x3cf:  mov    %eax,(%esp)
088a2b74 +0x3d2:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
088a2b79 +0x3d7:  test   %eax,%eax
088a2b7b +0x3d9:  sete   %al
088a2b7e +0x3dc:  test   %al,%al
088a2b80 +0x3de:  je     088a2b89 <+0x3e7>
088a2b82 +0x3e0:  movl   $0x18,-0xc(%ebp)
088a2b89 +0x3e7:  mov    -0xc(%ebp),%eax
088a2b8c +0x3ea:  leave
088a2b8d +0x3eb:  ret
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::getFieldType @ 0x88a27a2

/* advancealtar::AdvanceAltarShopParameter::getFieldType(std::string) */

undefined4 __thiscall
advancealtar::AdvanceAltarShopParameter::getFieldType(undefined4 this,string *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  iVar1 = std::string::compare(param_2,"level");
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = std::string::compare(param_2,"index");
    if (iVar1 == 0) {
      local_10 = 1;
    }
    else {
      iVar1 = std::string::compare(param_2,"price");
      if (iVar1 == 0) {
        local_10 = 2;
      }
      else {
        iVar1 = std::string::compare(param_2,"name");
        if (iVar1 == 0) {
          local_10 = 3;
        }
        else {
          iVar1 = std::string::compare(param_2,"cooltime");
          if (iVar1 == 0) {
            local_10 = 4;
          }
          else {
            iVar1 = std::string::compare(param_2,"need point");
            if (iVar1 == 0) {
              local_10 = 5;
            }
            else {
              iVar1 = std::string::compare(param_2,"explain");
              if (iVar1 == 0) {
                local_10 = 6;
              }
              else {
                iVar1 = std::string::compare(param_2,"type explain");
                if (iVar1 == 0) {
                  local_10 = 7;
                }
                else {
                  iVar1 = std::string::compare(param_2,"set slot");
                  if (iVar1 == 0) {
                    local_10 = 8;
                  }
                  else {
                    iVar1 = std::string::compare(param_2,"image index");
                    if (iVar1 == 0) {
                      local_10 = 9;
                    }
                    else {
                      iVar1 = std::string::compare(param_2,"hp");
                      if (iVar1 == 0) {
                        local_10 = 10;
                      }
                      else {
                        iVar1 = std::string::compare(param_2,"dmg");
                        if (iVar1 == 0) {
                          local_10 = 0xb;
                        }
                        else {
                          iVar1 = std::string::compare(param_2,"pic");
                          if (iVar1 == 0) {
                            local_10 = 0xc;
                          }
                          else {
                            iVar1 = std::string::compare(param_2,"rcv");
                            if (iVar1 == 0) {
                              local_10 = 0xd;
                            }
                            else {
                              iVar1 = std::string::compare(param_2,"sum");
                              if (iVar1 == 0) {
                                local_10 = 0xe;
                              }
                              else {
                                iVar1 = std::string::compare(param_2,"mht");
                                if (iVar1 == 0) {
                                  local_10 = 0xf;
                                }
                                else {
                                  iVar1 = std::string::compare(param_2,"rgn");
                                  if (iVar1 == 0) {
                                    local_10 = 0x10;
                                  }
                                  else {
                                    iVar1 = std::string::compare(param_2,"msd");
                                    if (iVar1 == 0) {
                                      local_10 = 0x11;
                                    }
                                    else {
                                      iVar1 = std::string::compare(param_2,"asd");
                                      if (iVar1 == 0) {
                                        local_10 = 0x12;
                                      }
                                      else {
                                        iVar1 = std::string::compare(param_2,"sdt");
                                        if (iVar1 == 0) {
                                          local_10 = 0x13;
                                        }
                                        else {
                                          iVar1 = std::string::compare(param_2,"fdt");
                                          if (iVar1 == 0) {
                                            local_10 = 0x14;
                                          }
                                          else {
                                            iVar1 = std::string::compare(param_2,"etc");
                                            if (iVar1 == 0) {
                                              local_10 = 0x15;
                                            }
                                            else {
                                              iVar1 = std::string::compare(param_2,"lrg");
                                              if (iVar1 == 0) {
                                                local_10 = 0x16;
                                              }
                                              else {
                                                iVar1 = std::string::compare(param_2,"spl");
                                                if (iVar1 == 0) {
                                                  local_10 = 0x17;
                                                }
                                                else {
                                                  iVar1 = std::string::compare(param_2,"etc2");
                                                  if (iVar1 == 0) {
                                                    local_10 = 0x18;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_10;
}
```
