# changeSpacilTagStr

`_ZN23RDARScriptStringManager18changeSpacilTagStrERSs`

`RDARScriptStringManager::changeSpacilTagStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa60b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa60b0  _ZN23RDARScriptStringManager18changeSpacilTagStrERSs
#           RDARScriptStringManager::changeSpacilTagStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08aa60b0, 0x08aa6447]
08aa60b0 +0x000:  push   %ebp
08aa60b1 +0x001:  mov    %esp,%ebp
08aa60b3 +0x003:  push   %edi
08aa60b4 +0x004:  push   %esi
08aa60b5 +0x005:  push   %ebx
08aa60b6 +0x006:  sub    $0x4c,%esp
08aa60b9 +0x009:  mov    0xc(%ebp),%eax
08aa60bc +0x00c:  mov    %eax,(%esp)
08aa60bf +0x00f:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08aa60c4 +0x014:  test   %al,%al
08aa60c6 +0x016:  je     08aa60d2 <+0x22>
08aa60c8 +0x018:  mov    $0x0,%ebx
08aa60cd +0x01d:  jmp    08aa643a <+0x38a>
08aa60d2 +0x022:  mov    0xc(%ebp),%eax
08aa60d5 +0x025:  mov    %eax,0x4(%esp)
08aa60d9 +0x029:  lea    -0x28(%ebp),%eax
08aa60dc +0x02c:  mov    %eax,(%esp)
08aa60df +0x02f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08aa60e4 +0x034:  mov    0xc(%ebp),%eax
08aa60e7 +0x037:  mov    %eax,0x4(%esp)
08aa60eb +0x03b:  lea    -0x2c(%ebp),%eax
08aa60ee +0x03e:  mov    %eax,(%esp)
08aa60f1 +0x041:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08aa60f6 +0x046:  movl   $"<URL LINK>",-0x24(%ebp)
08aa60fd +0x04d:  movl   $"</URL LINK>",-0x20(%ebp)
08aa6104 +0x054:  movl   $0x0,0x8(%esp)
08aa610c +0x05c:  mov    -0x24(%ebp),%eax
08aa610f +0x05f:  mov    %eax,0x4(%esp)
08aa6113 +0x063:  mov    0xc(%ebp),%eax
08aa6116 +0x066:  mov    %eax,(%esp)
08aa6119 +0x069:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
08aa611e +0x06e:  mov    %ax,-0x1c(%ebp)
08aa6122 +0x072:  cmpw   $0xffff,-0x1c(%ebp)
08aa6127 +0x077:  jne    08aa6133 <+0x83>
08aa6129 +0x079:  mov    $0x0,%ebx
08aa612e +0x07e:  jmp    08aa6407 <+0x357>
08aa6133 +0x083:  movl   $0xffffffff,0x8(%esp)
08aa613b +0x08b:  mov    -0x20(%ebp),%eax
08aa613e +0x08e:  mov    %eax,0x4(%esp)
08aa6142 +0x092:  mov    0xc(%ebp),%eax
08aa6145 +0x095:  mov    %eax,(%esp)
08aa6148 +0x098:  call   08706b30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x740>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x740
08aa614d +0x09d:  mov    %ax,-0x1a(%ebp)
08aa6151 +0x0a1:  cmpw   $0xffff,-0x1a(%ebp)
08aa6156 +0x0a6:  jne    08aa6162 <+0xb2>
08aa6158 +0x0a8:  mov    $0x0,%ebx
08aa615d +0x0ad:  jmp    08aa6407 <+0x357>
08aa6162 +0x0b2:  movzwl -0x1c(%ebp),%eax
08aa6166 +0x0b6:  cmp    -0x1a(%ebp),%ax
08aa616a +0x0ba:  jne    08aa6176 <+0xc6>
08aa616c +0x0bc:  mov    $0x0,%ebx
08aa6171 +0x0c1:  jmp    08aa6407 <+0x357>
08aa6176 +0x0c6:  movswl -0x1c(%ebp),%edx
08aa617a +0x0ca:  lea    -0x30(%ebp),%eax
08aa617d +0x0cd:  mov    %edx,0xc(%esp)
08aa6181 +0x0d1:  movl   $0x0,0x8(%esp)
08aa6189 +0x0d9:  mov    0xc(%ebp),%edx
08aa618c +0x0dc:  mov    %edx,0x4(%esp)
08aa6190 +0x0e0:  mov    %eax,(%esp)
08aa6193 +0x0e3:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
08aa6198 +0x0e8:  sub    $0x4,%esp
08aa619b +0x0eb:  movswl -0x1a(%ebp),%edx
08aa619f +0x0ef:  movswl -0x1c(%ebp),%eax
08aa61a3 +0x0f3:  mov    %edx,%ecx
08aa61a5 +0x0f5:  sub    %eax,%ecx
08aa61a7 +0x0f7:  mov    %ecx,%eax
08aa61a9 +0x0f9:  mov    %eax,%esi
08aa61ab +0x0fb:  mov    -0x24(%ebp),%eax
08aa61ae +0x0fe:  mov    %eax,(%esp)
08aa61b1 +0x101:  call   0807e3b0 <_init+0xca8>
08aa61b6 +0x106:  sub    %eax,%esi
08aa61b8 +0x108:  movswl -0x1c(%ebp),%edi
08aa61bc +0x10c:  mov    -0x24(%ebp),%eax
08aa61bf +0x10f:  mov    %eax,(%esp)
08aa61c2 +0x112:  call   0807e3b0 <_init+0xca8>
08aa61c7 +0x117:  lea    (%edi,%eax,1),%edx
08aa61ca +0x11a:  lea    -0x34(%ebp),%eax
08aa61cd +0x11d:  mov    %esi,0xc(%esp)
08aa61d1 +0x121:  mov    %edx,0x8(%esp)
08aa61d5 +0x125:  mov    0xc(%ebp),%edx
08aa61d8 +0x128:  mov    %edx,0x4(%esp)
08aa61dc +0x12c:  mov    %eax,(%esp)
08aa61df +0x12f:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
08aa61e4 +0x134:  sub    $0x4,%esp
08aa61e7 +0x137:  mov    0xc(%ebp),%eax
08aa61ea +0x13a:  mov    %eax,(%esp)
08aa61ed +0x13d:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08aa61f2 +0x142:  movswl -0x1a(%ebp),%edx
08aa61f6 +0x146:  mov    %eax,%esi
08aa61f8 +0x148:  sub    %edx,%esi
08aa61fa +0x14a:  mov    -0x20(%ebp),%eax
08aa61fd +0x14d:  mov    %eax,(%esp)
08aa6200 +0x150:  call   0807e3b0 <_init+0xca8>
08aa6205 +0x155:  sub    %eax,%esi
08aa6207 +0x157:  movswl -0x1a(%ebp),%edi
08aa620b +0x15b:  mov    -0x20(%ebp),%eax
08aa620e +0x15e:  mov    %eax,(%esp)
08aa6211 +0x161:  call   0807e3b0 <_init+0xca8>
08aa6216 +0x166:  lea    (%edi,%eax,1),%edx
08aa6219 +0x169:  lea    -0x38(%ebp),%eax
08aa621c +0x16c:  mov    %esi,0xc(%esp)
08aa6220 +0x170:  mov    %edx,0x8(%esp)
08aa6224 +0x174:  mov    0xc(%ebp),%edx
08aa6227 +0x177:  mov    %edx,0x4(%esp)
08aa622b +0x17b:  mov    %eax,(%esp)
08aa622e +0x17e:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
08aa6233 +0x183:  sub    $0x4,%esp
08aa6236 +0x186:  lea    -0x30(%ebp),%eax
08aa6239 +0x189:  mov    %eax,(%esp)
08aa623c +0x18c:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08aa6241 +0x191:  xor    $0x1,%eax
08aa6244 +0x194:  test   %al,%al
08aa6246 +0x196:  je     08aa6261 <+0x1b1>
08aa6248 +0x198:  lea    -0x34(%ebp),%eax
08aa624b +0x19b:  mov    %eax,(%esp)
08aa624e +0x19e:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08aa6253 +0x1a3:  xor    $0x1,%eax
08aa6256 +0x1a6:  test   %al,%al
08aa6258 +0x1a8:  je     08aa6261 <+0x1b1>
08aa625a +0x1aa:  mov    $0x1,%eax
08aa625f +0x1af:  jmp    08aa6266 <+0x1b6>
08aa6261 +0x1b1:  mov    $0x0,%eax
08aa6266 +0x1b6:  test   %al,%al
08aa6268 +0x1b8:  je     08aa635c <+0x2ac>
08aa626e +0x1be:  lea    -0x30(%ebp),%eax
08aa6271 +0x1c1:  mov    %eax,0x4(%esp)
08aa6275 +0x1c5:  lea    -0x3c(%ebp),%eax
08aa6278 +0x1c8:  mov    %eax,(%esp)
08aa627b +0x1cb:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08aa6280 +0x1d0:  movl   $0x1c,0x4(%esp)
08aa6288 +0x1d8:  lea    -0x3c(%ebp),%eax
08aa628b +0x1db:  mov    %eax,(%esp)
08aa628e +0x1de:  call   08708300 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f10
08aa6293 +0x1e3:  lea    -0x34(%ebp),%eax
08aa6296 +0x1e6:  mov    %eax,0x4(%esp)
08aa629a +0x1ea:  lea    -0x3c(%ebp),%eax
08aa629d +0x1ed:  mov    %eax,(%esp)
08aa62a0 +0x1f0:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08aa62a5 +0x1f5:  movl   $0x1d,0x4(%esp)
08aa62ad +0x1fd:  lea    -0x3c(%ebp),%eax
08aa62b0 +0x200:  mov    %eax,(%esp)
08aa62b3 +0x203:  call   08708300 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f10
08aa62b8 +0x208:  lea    -0x38(%ebp),%eax
08aa62bb +0x20b:  mov    %eax,(%esp)
08aa62be +0x20e:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08aa62c3 +0x213:  xor    $0x1,%eax
08aa62c6 +0x216:  test   %al,%al
08aa62c8 +0x218:  je     08aa62dc <+0x22c>
08aa62ca +0x21a:  lea    -0x38(%ebp),%eax
08aa62cd +0x21d:  mov    %eax,0x4(%esp)
08aa62d1 +0x221:  lea    -0x3c(%ebp),%eax
08aa62d4 +0x224:  mov    %eax,(%esp)
08aa62d7 +0x227:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08aa62dc +0x22c:  movl   $"\n",0x4(%esp)
08aa62e4 +0x234:  lea    -0x3c(%ebp),%eax
08aa62e7 +0x237:  mov    %eax,(%esp)
08aa62ea +0x23a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08aa62ef +0x23f:  lea    -0x3c(%ebp),%eax
08aa62f2 +0x242:  mov    %eax,(%esp)
08aa62f5 +0x245:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08aa62fa +0x24a:  xor    $0x1,%eax
08aa62fd +0x24d:  test   %al,%al
08aa62ff +0x24f:  je     08aa632a <+0x27a>
08aa6301 +0x251:  mov    0xc(%ebp),%eax
08aa6304 +0x254:  mov    %eax,(%esp)
08aa6307 +0x257:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08aa630c +0x25c:  lea    -0x3c(%ebp),%eax
08aa630f +0x25f:  mov    %eax,0x4(%esp)
08aa6313 +0x263:  mov    0xc(%ebp),%eax
08aa6316 +0x266:  mov    %eax,(%esp)
08aa6319 +0x269:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08aa631e +0x26e:  mov    $0x1,%ebx
08aa6323 +0x273:  mov    $0x0,%esi
08aa6328 +0x278:  jmp    08aa6346 <+0x296>
08aa632a +0x27a:  mov    $0x1,%esi
08aa632f +0x27f:  jmp    08aa6346 <+0x296>
08aa6331 +0x281:  mov    %edx,%ebx
08aa6333 +0x283:  mov    %eax,%esi
08aa6335 +0x285:  lea    -0x3c(%ebp),%eax
08aa6338 +0x288:  mov    %eax,(%esp)
08aa633b +0x28b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6340 +0x290:  mov    %esi,%eax
08aa6342 +0x292:  mov    %ebx,%edx
08aa6344 +0x294:  jmp    08aa6363 <+0x2b3>
08aa6346 +0x296:  lea    -0x3c(%ebp),%eax
08aa6349 +0x299:  mov    %eax,(%esp)
08aa634c +0x29c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6351 +0x2a1:  test   %esi,%esi
08aa6353 +0x2a3:  jne    08aa635c <+0x2ac>
08aa6355 +0x2a5:  mov    $0x0,%esi
08aa635a +0x2aa:  jmp    08aa6378 <+0x2c8>
08aa635c +0x2ac:  mov    $0x1,%esi
08aa6361 +0x2b1:  jmp    08aa6378 <+0x2c8>
08aa6363 +0x2b3:  mov    %edx,%ebx
08aa6365 +0x2b5:  mov    %eax,%esi
08aa6367 +0x2b7:  lea    -0x38(%ebp),%eax
08aa636a +0x2ba:  mov    %eax,(%esp)
08aa636d +0x2bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6372 +0x2c2:  mov    %esi,%eax
08aa6374 +0x2c4:  mov    %ebx,%edx
08aa6376 +0x2c6:  jmp    08aa6395 <+0x2e5>
08aa6378 +0x2c8:  lea    -0x38(%ebp),%eax
08aa637b +0x2cb:  mov    %eax,(%esp)
08aa637e +0x2ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6383 +0x2d3:  test   %esi,%esi
08aa6385 +0x2d5:  jne    08aa638e <+0x2de>
08aa6387 +0x2d7:  mov    $0x0,%esi
08aa638c +0x2dc:  jmp    08aa63aa <+0x2fa>
08aa638e +0x2de:  mov    $0x1,%esi
08aa6393 +0x2e3:  jmp    08aa63aa <+0x2fa>
08aa6395 +0x2e5:  mov    %edx,%ebx
08aa6397 +0x2e7:  mov    %eax,%esi
08aa6399 +0x2e9:  lea    -0x34(%ebp),%eax
08aa639c +0x2ec:  mov    %eax,(%esp)
08aa639f +0x2ef:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa63a4 +0x2f4:  mov    %esi,%eax
08aa63a6 +0x2f6:  mov    %ebx,%edx
08aa63a8 +0x2f8:  jmp    08aa63c7 <+0x317>
08aa63aa +0x2fa:  lea    -0x34(%ebp),%eax
08aa63ad +0x2fd:  mov    %eax,(%esp)
08aa63b0 +0x300:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa63b5 +0x305:  test   %esi,%esi
08aa63b7 +0x307:  jne    08aa63c0 <+0x310>
08aa63b9 +0x309:  mov    $0x0,%esi
08aa63be +0x30e:  jmp    08aa63dc <+0x32c>
08aa63c0 +0x310:  mov    $0x1,%esi
08aa63c5 +0x315:  jmp    08aa63dc <+0x32c>
08aa63c7 +0x317:  mov    %edx,%ebx
08aa63c9 +0x319:  mov    %eax,%esi
08aa63cb +0x31b:  lea    -0x30(%ebp),%eax
08aa63ce +0x31e:  mov    %eax,(%esp)
08aa63d1 +0x321:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa63d6 +0x326:  mov    %esi,%eax
08aa63d8 +0x328:  mov    %ebx,%edx
08aa63da +0x32a:  jmp    08aa63f2 <+0x342>
08aa63dc +0x32c:  lea    -0x30(%ebp),%eax
08aa63df +0x32f:  mov    %eax,(%esp)
08aa63e2 +0x332:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa63e7 +0x337:  test   %esi,%esi
08aa63e9 +0x339:  je     08aa6407 <+0x357>
08aa63eb +0x33b:  mov    $0x0,%ebx
08aa63f0 +0x340:  jmp    08aa6407 <+0x357>
08aa63f2 +0x342:  mov    %edx,%ebx
08aa63f4 +0x344:  mov    %eax,%esi
08aa63f6 +0x346:  lea    -0x2c(%ebp),%eax
08aa63f9 +0x349:  mov    %eax,(%esp)
08aa63fc +0x34c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6401 +0x351:  mov    %esi,%eax
08aa6403 +0x353:  mov    %ebx,%edx
08aa6405 +0x355:  jmp    08aa6414 <+0x364>
08aa6407 +0x357:  lea    -0x2c(%ebp),%eax
08aa640a +0x35a:  mov    %eax,(%esp)
08aa640d +0x35d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6412 +0x362:  jmp    08aa642f <+0x37f>
08aa6414 +0x364:  mov    %edx,%ebx
08aa6416 +0x366:  mov    %eax,%esi
08aa6418 +0x368:  lea    -0x28(%ebp),%eax
08aa641b +0x36b:  mov    %eax,(%esp)
08aa641e +0x36e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa6423 +0x373:  mov    %esi,%eax
08aa6425 +0x375:  mov    %ebx,%edx
08aa6427 +0x377:  mov    %eax,(%esp)
08aa642a +0x37a:  call   08ae3750 <_Unwind_Resume>
08aa642f +0x37f:  lea    -0x28(%ebp),%eax
08aa6432 +0x382:  mov    %eax,(%esp)
08aa6435 +0x385:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa643a +0x38a:  mov    %ebx,%eax
08aa643c +0x38c:  lea    -0xc(%ebp),%esp
08aa643f +0x38f:  add    $0x0,%esp
08aa6442 +0x392:  pop    %ebx
08aa6443 +0x393:  pop    %esi
08aa6444 +0x394:  pop    %edi
08aa6445 +0x395:  pop    %ebp
08aa6446 +0x396:  ret
08aa6447 +0x397:  nop
```

## 反编译 C

```c
// RDARScriptStringManager::changeSpacilTagStr @ 0x8aa60b0

/* RDARScriptStringManager::changeSpacilTagStr(std::string&) */

undefined4 __thiscall
RDARScriptStringManager::changeSpacilTagStr(RDARScriptStringManager *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 unaff_EBX;
  string local_40 [4];
  string local_3c [4];
  string local_38 [4];
  string local_34 [4];
  string local_30 [4];
  string local_2c [4];
  char *local_28;
  char *local_24;
  short local_20;
  short local_1e;
  
  cVar2 = std::string::empty(param_1);
  if (cVar2 != '\0') {
    return 0;
  }
  std::string::string(local_2c,param_1);
                    /* try { // try from 08aa60f1 to 08aa60f5 has its CatchHandler @ 08aa6414 */
  std::string::string(local_30,param_1);
  local_28 = "<URL LINK>";
  local_24 = "</URL LINK>";
                    /* try { // try from 08aa6119 to 08aa6197 has its CatchHandler @ 08aa63f2 */
  local_20 = std::string::find(param_1,"<URL LINK>",0);
  if (local_20 == -1) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  local_1e = std::string::rfind(param_1,local_24,0xffffffff);
  if (local_1e == -1) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  if (local_20 == local_1e) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  std::string::substr((uint)local_34,(uint)param_1);
  strlen(local_28);
  strlen(local_28);
                    /* try { // try from 08aa61df to 08aa61e3 has its CatchHandler @ 08aa63c7 */
  std::string::substr((uint)local_38,(uint)param_1);
                    /* try { // try from 08aa61ed to 08aa6232 has its CatchHandler @ 08aa6395 */
  std::string::length(param_1);
  strlen(local_24);
  strlen(local_24);
  std::string::substr((uint)local_3c,(uint)param_1);
                    /* try { // try from 08aa623c to 08aa627f has its CatchHandler @ 08aa6363 */
  cVar2 = std::string::empty(local_34);
  if ((cVar2 == '\x01') || (cVar2 = std::string::empty(local_38), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    std::string::string(local_40,local_34);
                    /* try { // try from 08aa628e to 08aa631d has its CatchHandler @ 08aa6331 */
    std::string::operator+=(local_40,'\x1c');
    std::string::operator+=(local_40,local_38);
    std::string::operator+=(local_40,'\x1d');
    cVar2 = std::string::empty(local_3c);
    if (cVar2 != '\x01') {
      std::string::operator+=(local_40,local_3c);
    }
    std::string::operator+=(local_40,"\n");
    cVar2 = std::string::empty(local_40);
    if (cVar2 != '\x01') {
      std::string::clear(param_1);
      std::string::operator=(param_1,local_40);
      unaff_EBX = 1;
    }
                    /* try { // try from 08aa634c to 08aa6350 has its CatchHandler @ 08aa6363 */
    std::string::~string(local_40);
    if (cVar2 == '\x01') goto LAB_08aa635c;
    bVar1 = false;
  }
  else {
LAB_08aa635c:
    bVar1 = true;
  }
                    /* try { // try from 08aa637e to 08aa6382 has its CatchHandler @ 08aa6395 */
  std::string::~string(local_3c);
                    /* try { // try from 08aa63b0 to 08aa63b4 has its CatchHandler @ 08aa63c7 */
  std::string::~string(local_38);
                    /* try { // try from 08aa63e2 to 08aa63e6 has its CatchHandler @ 08aa63f2 */
  std::string::~string(local_34);
  if (bVar1) {
    unaff_EBX = 0;
  }
LAB_08aa6407:
                    /* try { // try from 08aa640d to 08aa6411 has its CatchHandler @ 08aa6414 */
  std::string::~string(local_30);
  std::string::~string(local_2c);
  return unaff_EBX;
}
```
