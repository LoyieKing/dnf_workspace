# RestrictGeolocation

`_GLOBAL__I__ZN19RestrictGeolocationC2Ev`

`global constructors keyed to RestrictGeolocation::RestrictGeolocation()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to RestrictGeolocation` | `0x0817113b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817113b  _GLOBAL__I__ZN19RestrictGeolocationC2Ev
#           global constructors keyed to RestrictGeolocation::RestrictGeolocation()
# range [0x0817113b, 0x08172fb3]
0817113b +0x0000:  push   %ebp
0817113c +0x0001:  mov    %esp,%ebp
0817113e +0x0003:  sub    $0x18,%esp
08171141 +0x0006:  movl   $0xffff,0x4(%esp)
08171149 +0x000e:  movl   $0x1,(%esp)
08171150 +0x0015:  call   081710fb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08171155 +0x001a:  leave
08171156 +0x001b:  ret
08171157 +0x001c:  push   %ebp
08171158 +0x001d:  mov    %esp,%ebp
0817115a +0x001f:  sub    $0x18,%esp
0817115d +0x0022:  mov    0x10(%ebp),%eax
08171160 +0x0025:  mov    %eax,0x8(%esp)
08171164 +0x0029:  mov    0xc(%ebp),%eax
08171167 +0x002c:  mov    %eax,0x4(%esp)
0817116b +0x0030:  mov    0x8(%ebp),%eax
0817116e +0x0033:  mov    %eax,(%esp)
08171171 +0x0036:  call   0807dc90 <_init+0x588>
08171176 +0x003b:  leave
08171177 +0x003c:  ret
08171178 +0x003d:  push   %ebp
08171179 +0x003e:  mov    %esp,%ebp
0817117b +0x0040:  sub    $0x28,%esp
0817117e +0x0043:  movl   $&_ZN5boost9unordered6detail19prime_list_templateIjE5valueE,-0x14(%ebp)
08171185 +0x004a:  movl   $&data#199e3a4d(.rodata),-0x10(%ebp)
0817118c +0x0051:  mov    $&data#199e3a4d(.rodata),%eax
08171191 +0x0056:  lea    0x8(%ebp),%edx
08171194 +0x0059:  mov    %edx,0x8(%esp)
08171198 +0x005d:  mov    %eax,0x4(%esp)
0817119c +0x0061:  movl   $&_ZN5boost9unordered6detail19prime_list_templateIjE5valueE,(%esp)
081711a3 +0x0068:  call   081712e3 <+0x1a8>
081711a8 +0x006d:  mov    %eax,-0xc(%ebp)
081711ab +0x0070:  mov    $&data#199e3a4d(.rodata),%eax
081711b0 +0x0075:  cmp    %eax,-0xc(%ebp)
081711b3 +0x0078:  jne    081711b9 <+0x7e>
081711b5 +0x007a:  subl   $0x4,-0xc(%ebp)
081711b9 +0x007e:  mov    -0xc(%ebp),%eax
081711bc +0x0081:  mov    (%eax),%eax
081711be +0x0083:  leave
081711bf +0x0084:  ret
081711c0 +0x0085:  push   %ebp
081711c1 +0x0086:  mov    %esp,%ebp
081711c3 +0x0088:  mov    0x8(%ebp),%eax
081711c6 +0x008b:  movl   $0x0,(%eax)
081711cc +0x0091:  pop    %ebp
081711cd +0x0092:  ret
081711ce +0x0093:  push   %ebp
081711cf +0x0094:  mov    %esp,%ebp
081711d1 +0x0096:  mov    0x8(%ebp),%eax
081711d4 +0x0099:  pop    %ebp
081711d5 +0x009a:  ret
081711d6 +0x009b:  push   %ebp
081711d7 +0x009c:  mov    %esp,%ebp
081711d9 +0x009e:  sub    $0x28,%esp
081711dc +0x00a1:  mov    0x8(%ebp),%eax
081711df +0x00a4:  mov    %eax,-0x10(%ebp)
081711e2 +0x00a7:  mov    0xc(%ebp),%eax
081711e5 +0x00aa:  mov    %eax,-0xc(%ebp)
081711e8 +0x00ad:  call   080cb3c7 <_GLOBAL__I__ZN10BingoEventC2Ev+0x214>  ; global constructors keyed to BingoEvent::BingoEvent()+0x214
081711ed +0x00b2:  mov    $0x0,%edx
081711f2 +0x00b7:  mov    %eax,-0x20(%ebp)
081711f5 +0x00ba:  mov    %edx,-0x1c(%ebp)
081711f8 +0x00bd:  fildll -0x20(%ebp)
081711fb +0x00c0:  fldl   -0x10(%ebp)
081711fe +0x00c3:  fucompp
08171200 +0x00c5:  fnstsw %ax
08171202 +0x00c7:  test   $0x5,%ah
08171205 +0x00ca:  sete   %al
08171208 +0x00cd:  test   %al,%al
0817120a +0x00cf:  je     08171213 <+0xd8>
0817120c +0x00d1:  call   080cb3c7 <_GLOBAL__I__ZN10BingoEventC2Ev+0x214>  ; global constructors keyed to BingoEvent::BingoEvent()+0x214
08171211 +0x00d6:  jmp    08171232 <+0xf7>
08171213 +0x00d8:  fldl   -0x10(%ebp)
08171216 +0x00db:  fnstcw -0x12(%ebp)
08171219 +0x00de:  movzwl -0x12(%ebp),%eax
0817121d +0x00e2:  mov    $0xc,%ah
0817121f +0x00e4:  mov    %ax,-0x14(%ebp)
08171223 +0x00e8:  fldcw  -0x14(%ebp)
08171226 +0x00eb:  fistpll -0x20(%ebp)
08171229 +0x00ee:  fldcw  -0x12(%ebp)
0817122c +0x00f1:  mov    -0x20(%ebp),%eax
0817122f +0x00f4:  mov    -0x1c(%ebp),%edx
08171232 +0x00f7:  leave
08171233 +0x00f8:  ret
08171234 +0x00f9:  push   %ebp
08171235 +0x00fa:  mov    %esp,%ebp
08171237 +0x00fc:  sub    $0x4,%esp
0817123a +0x00ff:  mov    0x8(%ebp),%eax
0817123d +0x0102:  mov    %al,-0x4(%ebp)
08171240 +0x0105:  movsbl -0x4(%ebp),%eax
08171244 +0x0109:  leave
08171245 +0x010a:  ret
08171246 +0x010b:  push   %ebp
08171247 +0x010c:  mov    %esp,%ebp
08171249 +0x010e:  sub    $0x28,%esp
0817124c +0x0111:  mov    0xc(%ebp),%eax
0817124f +0x0114:  mov    %al,-0xc(%ebp)
08171252 +0x0117:  movsbl -0xc(%ebp),%eax
08171256 +0x011b:  mov    %eax,(%esp)
08171259 +0x011e:  call   08171234 <+0xf9>
0817125e +0x0123:  leave
0817125f +0x0124:  ret
08171260 +0x0125:  push   %ebp
08171261 +0x0126:  mov    %esp,%ebp
08171263 +0x0128:  sub    $0x18,%esp
08171266 +0x012b:  mov    0xc(%ebp),%eax
08171269 +0x012e:  mov    %eax,(%esp)
0817126c +0x0131:  call   08171362 <+0x227>
08171271 +0x0136:  leave
08171272 +0x0137:  ret
08171273 +0x0138:  push   %ebp
08171274 +0x0139:  mov    %esp,%ebp
08171276 +0x013b:  push   %esi
08171277 +0x013c:  push   %ebx
08171278 +0x013d:  sub    $0x10,%esp
0817127b +0x0140:  mov    0x8(%ebp),%eax
0817127e +0x0143:  mov    %eax,(%esp)
08171281 +0x0146:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08171286 +0x014b:  mov    %eax,%ebx
08171288 +0x014d:  mov    0xc(%ebp),%eax
0817128b +0x0150:  mov    %eax,(%esp)
0817128e +0x0153:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08171293 +0x0158:  cmp    %eax,%ebx
08171295 +0x015a:  jne    081712d7 <+0x19c>
08171297 +0x015c:  mov    0x8(%ebp),%eax
0817129a +0x015f:  mov    %eax,(%esp)
0817129d +0x0162:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081712a2 +0x0167:  mov    %eax,%esi
081712a4 +0x0169:  mov    0xc(%ebp),%eax
081712a7 +0x016c:  mov    %eax,(%esp)
081712aa +0x016f:  call   08706720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x330
081712af +0x0174:  mov    %eax,%ebx
081712b1 +0x0176:  mov    0x8(%ebp),%eax
081712b4 +0x0179:  mov    %eax,(%esp)
081712b7 +0x017c:  call   08706720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x330
081712bc +0x0181:  mov    %esi,0x8(%esp)
081712c0 +0x0185:  mov    %ebx,0x4(%esp)
081712c4 +0x0189:  mov    %eax,(%esp)
081712c7 +0x018c:  call   08171157 <+0x1c>
081712cc +0x0191:  test   %eax,%eax
081712ce +0x0193:  jne    081712d7 <+0x19c>
081712d0 +0x0195:  mov    $0x1,%eax
081712d5 +0x019a:  jmp    081712dc <+0x1a1>
081712d7 +0x019c:  mov    $0x0,%eax
081712dc +0x01a1:  add    $0x10,%esp
081712df +0x01a4:  pop    %ebx
081712e0 +0x01a5:  pop    %esi
081712e1 +0x01a6:  pop    %ebp
081712e2 +0x01a7:  ret
081712e3 +0x01a8:  push   %ebp
081712e4 +0x01a9:  mov    %esp,%ebp
081712e6 +0x01ab:  sub    $0x28,%esp
081712e9 +0x01ae:  mov    0xc(%ebp),%eax
081712ec +0x01b1:  mov    %eax,0x4(%esp)
081712f0 +0x01b5:  mov    0x8(%ebp),%eax
081712f3 +0x01b8:  mov    %eax,(%esp)
081712f6 +0x01bb:  call   08171547 <+0x40c>
081712fb +0x01c0:  mov    %eax,-0x10(%ebp)
081712fe +0x01c3:  jmp    08171352 <+0x217>
08171300 +0x01c5:  mov    -0x10(%ebp),%eax
08171303 +0x01c8:  sar    %eax
08171305 +0x01ca:  mov    %eax,-0xc(%ebp)
08171308 +0x01cd:  mov    0x8(%ebp),%eax
0817130b +0x01d0:  mov    %eax,-0x14(%ebp)
0817130e +0x01d3:  mov    -0xc(%ebp),%eax
08171311 +0x01d6:  mov    %eax,0x4(%esp)
08171315 +0x01da:  lea    -0x14(%ebp),%eax
08171318 +0x01dd:  mov    %eax,(%esp)
0817131b +0x01e0:  call   0817157e <+0x443>
08171320 +0x01e5:  mov    -0x14(%ebp),%eax
08171323 +0x01e8:  mov    (%eax),%edx
08171325 +0x01ea:  mov    0x10(%ebp),%eax
08171328 +0x01ed:  mov    (%eax),%eax
0817132a +0x01ef:  cmp    %eax,%edx
0817132c +0x01f1:  jae    0817134c <+0x211>
0817132e +0x01f3:  mov    -0x14(%ebp),%eax
08171331 +0x01f6:  mov    %eax,0x8(%ebp)
08171334 +0x01f9:  addl   $0x4,0x8(%ebp)
08171338 +0x01fd:  mov    -0xc(%ebp),%eax
0817133b +0x0200:  mov    -0x10(%ebp),%edx
0817133e +0x0203:  mov    %edx,%ecx
08171340 +0x0205:  sub    %eax,%ecx
08171342 +0x0207:  mov    %ecx,%eax
08171344 +0x0209:  sub    $0x1,%eax
08171347 +0x020c:  mov    %eax,-0x10(%ebp)
0817134a +0x020f:  jmp    08171352 <+0x217>
0817134c +0x0211:  mov    -0xc(%ebp),%eax
0817134f +0x0214:  mov    %eax,-0x10(%ebp)
08171352 +0x0217:  cmpl   $0x0,-0x10(%ebp)
08171356 +0x021b:  setg   %al
08171359 +0x021e:  test   %al,%al
0817135b +0x0220:  jne    08171300 <+0x1c5>
0817135d +0x0222:  mov    0x8(%ebp),%eax
08171360 +0x0225:  leave
08171361 +0x0226:  ret
08171362 +0x0227:  push   %ebp
08171363 +0x0228:  mov    %esp,%ebp
08171365 +0x022a:  sub    $0x28,%esp
08171368 +0x022d:  lea    -0x10(%ebp),%eax
0817136b +0x0230:  mov    0x8(%ebp),%edx
0817136e +0x0233:  mov    %edx,0x4(%esp)
08171372 +0x0237:  mov    %eax,(%esp)
08171375 +0x023a:  call   08706600 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x210>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x210
0817137a +0x023f:  sub    $0x4,%esp
0817137d +0x0242:  lea    -0xc(%ebp),%eax
08171380 +0x0245:  mov    0x8(%ebp),%edx
08171383 +0x0248:  mov    %edx,0x4(%esp)
08171387 +0x024c:  mov    %eax,(%esp)
0817138a +0x024f:  call   087065e0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f0
0817138f +0x0254:  sub    $0x4,%esp
08171392 +0x0257:  mov    -0x10(%ebp),%eax
08171395 +0x025a:  mov    %eax,0x4(%esp)
08171399 +0x025e:  mov    -0xc(%ebp),%eax
0817139c +0x0261:  mov    %eax,(%esp)
0817139f +0x0264:  call   081715bb <+0x480>
081713a4 +0x0269:  leave
081713a5 +0x026a:  ret
081713a6 +0x026b:  push   %ebp
081713a7 +0x026c:  mov    %esp,%ebp
081713a9 +0x026e:  pop    %ebp
081713aa +0x026f:  ret
081713ab +0x0270:  nop
081713ac +0x0271:  push   %ebp
081713ad +0x0272:  mov    %esp,%ebp
081713af +0x0274:  push   %esi
081713b0 +0x0275:  push   %ebx
081713b1 +0x0276:  sub    $0x10,%esp
081713b4 +0x0279:  mov    0x8(%ebp),%eax
081713b7 +0x027c:  add    $0xd,%eax
081713ba +0x027f:  mov    %eax,(%esp)
081713bd +0x0282:  call   081716f0 <+0x5b5>
081713c2 +0x0287:  jmp    081713df <+0x2a4>
081713c4 +0x0289:  mov    %edx,%ebx
081713c6 +0x028b:  mov    %eax,%esi
081713c8 +0x028d:  mov    0x8(%ebp),%eax
081713cb +0x0290:  mov    %eax,(%esp)
081713ce +0x0293:  call   081716a8 <+0x56d>
081713d3 +0x0298:  mov    %esi,%eax
081713d5 +0x029a:  mov    %ebx,%edx
081713d7 +0x029c:  mov    %eax,(%esp)
081713da +0x029f:  call   08ae3750 <_Unwind_Resume>
081713df +0x02a4:  mov    0x8(%ebp),%eax
081713e2 +0x02a7:  mov    %eax,(%esp)
081713e5 +0x02aa:  call   081716a8 <+0x56d>
081713ea +0x02af:  add    $0x10,%esp
081713ed +0x02b2:  pop    %ebx
081713ee +0x02b3:  pop    %esi
081713ef +0x02b4:  pop    %ebp
081713f0 +0x02b5:  ret
081713f1 +0x02b6:  nop
081713f2 +0x02b7:  push   %ebp
081713f3 +0x02b8:  mov    %esp,%ebp
081713f5 +0x02ba:  sub    $0x18,%esp
081713f8 +0x02bd:  mov    0x8(%ebp),%eax
081713fb +0x02c0:  mov    %eax,(%esp)
081713fe +0x02c3:  call   081713ac <+0x271>
08171403 +0x02c8:  leave
08171404 +0x02c9:  ret
08171405 +0x02ca:  nop
08171406 +0x02cb:  push   %ebp
08171407 +0x02cc:  mov    %esp,%ebp
08171409 +0x02ce:  push   %esi
0817140a +0x02cf:  push   %ebx
0817140b +0x02d0:  sub    $0x30,%esp
0817140e +0x02d3:  mov    0x18(%ebp),%eax
08171411 +0x02d6:  mov    %eax,0x4(%esp)
08171415 +0x02da:  lea    -0x9(%ebp),%eax
08171418 +0x02dd:  mov    %eax,(%esp)
0817141b +0x02e0:  call   0817160a <+0x4cf>
08171420 +0x02e5:  mov    0x8(%ebp),%eax
08171423 +0x02e8:  lea    -0x9(%ebp),%edx
08171426 +0x02eb:  mov    %edx,0x10(%esp)
0817142a +0x02ef:  mov    0x14(%ebp),%edx
0817142d +0x02f2:  mov    %edx,0xc(%esp)
08171431 +0x02f6:  mov    0x10(%ebp),%edx
08171434 +0x02f9:  mov    %edx,0x8(%esp)
08171438 +0x02fd:  mov    0xc(%ebp),%edx
0817143b +0x0300:  mov    %edx,0x4(%esp)
0817143f +0x0304:  mov    %eax,(%esp)
08171442 +0x0307:  call   08171632 <+0x4f7>
08171447 +0x030c:  jmp    08171464 <+0x329>
08171449 +0x030e:  mov    %edx,%ebx
0817144b +0x0310:  mov    %eax,%esi
0817144d +0x0312:  lea    -0x9(%ebp),%eax
08171450 +0x0315:  mov    %eax,(%esp)
08171453 +0x0318:  call   0817161e <+0x4e3>
08171458 +0x031d:  mov    %esi,%eax
0817145a +0x031f:  mov    %ebx,%edx
0817145c +0x0321:  mov    %eax,(%esp)
0817145f +0x0324:  call   08ae3750 <_Unwind_Resume>
08171464 +0x0329:  lea    -0x9(%ebp),%eax
08171467 +0x032c:  mov    %eax,(%esp)
0817146a +0x032f:  call   0817161e <+0x4e3>
0817146f +0x0334:  add    $0x30,%esp
08171472 +0x0337:  pop    %ebx
08171473 +0x0338:  pop    %esi
08171474 +0x0339:  pop    %ebp
08171475 +0x033a:  ret
08171476 +0x033b:  push   %ebp
08171477 +0x033c:  mov    %esp,%ebp
08171479 +0x033e:  sub    $0x18,%esp
0817147c +0x0341:  mov    0x8(%ebp),%eax
0817147f +0x0344:  mov    %eax,(%esp)
08171482 +0x0347:  call   081713f2 <+0x2b7>
08171487 +0x034c:  leave
08171488 +0x034d:  ret
08171489 +0x034e:  nop
0817148a +0x034f:  push   %ebp
0817148b +0x0350:  mov    %esp,%ebp
0817148d +0x0352:  push   %ebx
0817148e +0x0353:  sub    $0x14,%esp
08171491 +0x0356:  mov    0x8(%ebp),%ebx
08171494 +0x0359:  mov    %ebx,(%esp)
08171497 +0x035c:  call   0817173e <+0x603>
0817149c +0x0361:  mov    %ebx,%eax
0817149e +0x0363:  add    $0x14,%esp
081714a1 +0x0366:  pop    %ebx
081714a2 +0x0367:  pop    %ebp
081714a3 +0x0368:  ret    $0x4
081714a6 +0x036b:  push   %ebp
081714a7 +0x036c:  mov    %esp,%ebp
081714a9 +0x036e:  push   %ebx
081714aa +0x036f:  sub    $0x24,%esp
081714ad +0x0372:  mov    0x8(%ebp),%ebx
081714b0 +0x0375:  mov    0xc(%ebp),%eax
081714b3 +0x0378:  mov    0x10(%ebp),%edx
081714b6 +0x037b:  mov    %edx,0x4(%esp)
081714ba +0x037f:  mov    %eax,(%esp)
081714bd +0x0382:  call   0817175a <+0x61f>
081714c2 +0x0387:  mov    %eax,-0xc(%ebp)
081714c5 +0x038a:  lea    -0xc(%ebp),%eax
081714c8 +0x038d:  mov    %eax,0x4(%esp)
081714cc +0x0391:  mov    %ebx,(%esp)
081714cf +0x0394:  call   081717c0 <+0x685>
081714d4 +0x0399:  mov    %ebx,%eax
081714d6 +0x039b:  add    $0x24,%esp
081714d9 +0x039e:  pop    %ebx
081714da +0x039f:  pop    %ebp
081714db +0x03a0:  ret    $0x4
081714de +0x03a3:  push   %ebp
081714df +0x03a4:  mov    %esp,%ebp
081714e1 +0x03a6:  mov    0x8(%ebp),%eax
081714e4 +0x03a9:  mov    (%eax),%edx
081714e6 +0x03ab:  mov    0xc(%ebp),%eax
081714e9 +0x03ae:  mov    (%eax),%eax
081714eb +0x03b0:  cmp    %eax,%edx
081714ed +0x03b2:  setne  %al
081714f0 +0x03b5:  pop    %ebp
081714f1 +0x03b6:  ret
081714f2 +0x03b7:  push   %ebp
081714f3 +0x03b8:  mov    %esp,%ebp
081714f5 +0x03ba:  push   %ebx
081714f6 +0x03bb:  sub    $0x14,%esp
081714f9 +0x03be:  mov    0x8(%ebp),%ebx
081714fc +0x03c1:  mov    0x10(%ebp),%eax
081714ff +0x03c4:  mov    %eax,0x8(%esp)
08171503 +0x03c8:  mov    0xc(%ebp),%eax
08171506 +0x03cb:  mov    %eax,0x4(%esp)
0817150a +0x03cf:  mov    %ebx,(%esp)
0817150d +0x03d2:  call   081717de <+0x6a3>
08171512 +0x03d7:  sub    $0x4,%esp
08171515 +0x03da:  mov    %ebx,%eax
08171517 +0x03dc:  mov    -0x4(%ebp),%ebx
0817151a +0x03df:  leave
0817151b +0x03e0:  ret    $0x4
0817151e +0x03e3:  push   %ebp
0817151f +0x03e4:  mov    %esp,%ebp
08171521 +0x03e6:  sub    $0x18,%esp
08171524 +0x03e9:  mov    0x8(%ebp),%eax
08171527 +0x03ec:  mov    %eax,(%esp)
0817152a +0x03ef:  call   08171824 <+0x6e9>
0817152f +0x03f4:  leave
08171530 +0x03f5:  ret
08171531 +0x03f6:  nop
08171532 +0x03f7:  push   %ebp
08171533 +0x03f8:  mov    %esp,%ebp
08171535 +0x03fa:  sub    $0x18,%esp
08171538 +0x03fd:  mov    0x8(%ebp),%eax
0817153b +0x0400:  mov    (%eax),%eax
0817153d +0x0402:  mov    %eax,(%esp)
08171540 +0x0405:  call   081718d0 <+0x795>
08171545 +0x040a:  leave
08171546 +0x040b:  ret
08171547 +0x040c:  push   %ebp
08171548 +0x040d:  mov    %esp,%ebp
0817154a +0x040f:  push   %ebx
0817154b +0x0410:  sub    $0x24,%esp
0817154e +0x0413:  lea    -0x9(%ebp),%eax
08171551 +0x0416:  lea    0x8(%ebp),%edx
08171554 +0x0419:  mov    %edx,0x4(%esp)
08171558 +0x041d:  mov    %eax,(%esp)
0817155b +0x0420:  call   0817193a <+0x7ff>
08171560 +0x0425:  sub    $0x4,%esp
08171563 +0x0428:  mov    0x8(%ebp),%eax
08171566 +0x042b:  mov    %bl,0x8(%esp)
0817156a +0x042f:  mov    0xc(%ebp),%edx
0817156d +0x0432:  mov    %edx,0x4(%esp)
08171571 +0x0436:  mov    %eax,(%esp)
08171574 +0x0439:  call   08171944 <+0x809>
08171579 +0x043e:  mov    -0x4(%ebp),%ebx
0817157c +0x0441:  leave
0817157d +0x0442:  ret
0817157e +0x0443:  push   %ebp
0817157f +0x0444:  mov    %esp,%ebp
08171581 +0x0446:  push   %ebx
08171582 +0x0447:  sub    $0x24,%esp
08171585 +0x044a:  mov    0xc(%ebp),%eax
08171588 +0x044d:  mov    %eax,-0xc(%ebp)
0817158b +0x0450:  lea    -0xd(%ebp),%eax
0817158e +0x0453:  mov    0x8(%ebp),%edx
08171591 +0x0456:  mov    %edx,0x4(%esp)
08171595 +0x045a:  mov    %eax,(%esp)
08171598 +0x045d:  call   0817193a <+0x7ff>
0817159d +0x0462:  sub    $0x4,%esp
081715a0 +0x0465:  mov    %bl,0x8(%esp)
081715a4 +0x0469:  mov    -0xc(%ebp),%eax
081715a7 +0x046c:  mov    %eax,0x4(%esp)
081715ab +0x0470:  mov    0x8(%ebp),%eax
081715ae +0x0473:  mov    %eax,(%esp)
081715b1 +0x0476:  call   08171958 <+0x81d>
081715b6 +0x047b:  mov    -0x4(%ebp),%ebx
081715b9 +0x047e:  leave
081715ba +0x047f:  ret
081715bb +0x0480:  push   %ebp
081715bc +0x0481:  mov    %esp,%ebp
081715be +0x0483:  sub    $0x28,%esp
081715c1 +0x0486:  movl   $0x0,-0xc(%ebp)
081715c8 +0x048d:  jmp    081715ef <+0x4b4>
081715ca +0x048f:  lea    0x8(%ebp),%eax
081715cd +0x0492:  mov    %eax,(%esp)
081715d0 +0x0495:  call   080d5100 <_GLOBAL__I__ZN10BingoEventC2Ev+0x9f4d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x9f4d
081715d5 +0x049a:  mov    %eax,0x4(%esp)
081715d9 +0x049e:  lea    -0xc(%ebp),%eax
081715dc +0x04a1:  mov    %eax,(%esp)
081715df +0x04a4:  call   08171970 <+0x835>
081715e4 +0x04a9:  lea    0x8(%ebp),%eax
081715e7 +0x04ac:  mov    %eax,(%esp)
081715ea +0x04af:  call   080d510a <_GLOBAL__I__ZN10BingoEventC2Ev+0x9f57>  ; global constructors keyed to BingoEvent::BingoEvent()+0x9f57
081715ef +0x04b4:  lea    0xc(%ebp),%eax
081715f2 +0x04b7:  mov    %eax,0x4(%esp)
081715f6 +0x04bb:  lea    0x8(%ebp),%eax
081715f9 +0x04be:  mov    %eax,(%esp)
081715fc +0x04c1:  call   080d46f1 <_GLOBAL__I__ZN10BingoEventC2Ev+0x953e>  ; global constructors keyed to BingoEvent::BingoEvent()+0x953e
08171601 +0x04c6:  test   %al,%al
08171603 +0x04c8:  jne    081715ca <+0x48f>
08171605 +0x04ca:  mov    -0xc(%ebp),%eax
08171608 +0x04cd:  leave
08171609 +0x04ce:  ret
0817160a +0x04cf:  push   %ebp
0817160b +0x04d0:  mov    %esp,%ebp
0817160d +0x04d2:  sub    $0x18,%esp
08171610 +0x04d5:  mov    0x8(%ebp),%eax
08171613 +0x04d8:  mov    %eax,(%esp)
08171616 +0x04db:  call   081719be <+0x883>
0817161b +0x04e0:  leave
0817161c +0x04e1:  ret
0817161d +0x04e2:  nop
0817161e +0x04e3:  push   %ebp
0817161f +0x04e4:  mov    %esp,%ebp
08171621 +0x04e6:  sub    $0x18,%esp
08171624 +0x04e9:  mov    0x8(%ebp),%eax
08171627 +0x04ec:  mov    %eax,(%esp)
0817162a +0x04ef:  call   081719c4 <+0x889>
0817162f +0x04f4:  leave
08171630 +0x04f5:  ret
08171631 +0x04f6:  nop
08171632 +0x04f7:  push   %ebp
08171633 +0x04f8:  mov    %esp,%ebp
08171635 +0x04fa:  sub    $0x28,%esp
08171638 +0x04fd:  mov    0x8(%ebp),%eax
0817163b +0x0500:  mov    0x18(%ebp),%edx
0817163e +0x0503:  mov    %edx,0x10(%esp)
08171642 +0x0507:  mov    0x14(%ebp),%edx
08171645 +0x050a:  mov    %edx,0xc(%esp)
08171649 +0x050e:  mov    0x10(%ebp),%edx
0817164c +0x0511:  mov    %edx,0x8(%esp)
08171650 +0x0515:  mov    0xc(%ebp),%edx
08171653 +0x0518:  mov    %edx,0x4(%esp)
08171657 +0x051c:  mov    %eax,(%esp)
0817165a +0x051f:  call   081719ca <+0x88f>
0817165f +0x0524:  leave
08171660 +0x0525:  ret
08171661 +0x0526:  nop
08171662 +0x0527:  push   %ebp
08171663 +0x0528:  mov    %esp,%ebp
08171665 +0x052a:  sub    $0x18,%esp
08171668 +0x052d:  mov    0x8(%ebp),%eax
0817166b +0x0530:  mov    %eax,(%esp)
0817166e +0x0533:  call   08171a46 <+0x90b>
08171673 +0x0538:  leave
08171674 +0x0539:  ret
08171675 +0x053a:  nop
08171676 +0x053b:  push   %ebp
08171677 +0x053c:  mov    %esp,%ebp
08171679 +0x053e:  sub    $0x18,%esp
0817167c +0x0541:  mov    0x8(%ebp),%eax
0817167f +0x0544:  mov    %eax,(%esp)
08171682 +0x0547:  call   0817161e <+0x4e3>
08171687 +0x054c:  leave
08171688 +0x054d:  ret
08171689 +0x054e:  nop
0817168a +0x054f:  push   %ebp
0817168b +0x0550:  mov    %esp,%ebp
0817168d +0x0552:  sub    $0x18,%esp
08171690 +0x0555:  mov    0x8(%ebp),%eax
08171693 +0x0558:  mov    %eax,(%esp)
08171696 +0x055b:  call   08171676 <+0x53b>
0817169b +0x0560:  mov    0x8(%ebp),%eax
0817169e +0x0563:  mov    %eax,(%esp)
081716a1 +0x0566:  call   08171662 <+0x527>
081716a6 +0x056b:  leave
081716a7 +0x056c:  ret
081716a8 +0x056d:  push   %ebp
081716a9 +0x056e:  mov    %esp,%ebp
081716ab +0x0570:  push   %esi
081716ac +0x0571:  push   %ebx
081716ad +0x0572:  sub    $0x10,%esp
081716b0 +0x0575:  mov    0x8(%ebp),%eax
081716b3 +0x0578:  mov    %eax,(%esp)
081716b6 +0x057b:  call   08171a5a <+0x91f>
081716bb +0x0580:  jmp    081716db <+0x5a0>
081716bd +0x0582:  mov    %edx,%ebx
081716bf +0x0584:  mov    %eax,%esi
081716c1 +0x0586:  mov    0x8(%ebp),%eax
081716c4 +0x0589:  add    $0xc,%eax
081716c7 +0x058c:  mov    %eax,(%esp)
081716ca +0x058f:  call   0817168a <+0x54f>
081716cf +0x0594:  mov    %esi,%eax
081716d1 +0x0596:  mov    %ebx,%edx
081716d3 +0x0598:  mov    %eax,(%esp)
081716d6 +0x059b:  call   08ae3750 <_Unwind_Resume>
081716db +0x05a0:  mov    0x8(%ebp),%eax
081716de +0x05a3:  add    $0xc,%eax
081716e1 +0x05a6:  mov    %eax,(%esp)
081716e4 +0x05a9:  call   0817168a <+0x54f>
081716e9 +0x05ae:  add    $0x10,%esp
081716ec +0x05b1:  pop    %ebx
081716ed +0x05b2:  pop    %esi
081716ee +0x05b3:  pop    %ebp
081716ef +0x05b4:  ret
081716f0 +0x05b5:  push   %ebp
081716f1 +0x05b6:  mov    %esp,%ebp
081716f3 +0x05b8:  sub    $0x18,%esp
081716f6 +0x05bb:  mov    0x8(%ebp),%eax
081716f9 +0x05be:  movzbl (%eax),%eax
081716fc +0x05c1:  movzbl %al,%eax
081716ff +0x05c4:  mov    %eax,0x4(%esp)
08171703 +0x05c8:  mov    0x8(%ebp),%eax
08171706 +0x05cb:  mov    %eax,(%esp)
08171709 +0x05ce:  call   08171b6a <+0xa2f>
0817170e +0x05d3:  leave
0817170f +0x05d4:  ret
08171710 +0x05d5:  push   %ebp
08171711 +0x05d6:  mov    %esp,%ebp
08171713 +0x05d8:  pop    %ebp
08171714 +0x05d9:  ret
08171715 +0x05da:  nop
08171716 +0x05db:  push   %ebp
08171717 +0x05dc:  mov    %esp,%ebp
08171719 +0x05de:  sub    $0x18,%esp
0817171c +0x05e1:  mov    0x8(%ebp),%eax
0817171f +0x05e4:  mov    %eax,(%esp)
08171722 +0x05e7:  call   08171710 <+0x5d5>
08171727 +0x05ec:  leave
08171728 +0x05ed:  ret
08171729 +0x05ee:  nop
0817172a +0x05ef:  push   %ebp
0817172b +0x05f0:  mov    %esp,%ebp
0817172d +0x05f2:  sub    $0x18,%esp
08171730 +0x05f5:  mov    0x8(%ebp),%eax
08171733 +0x05f8:  mov    %eax,(%esp)
08171736 +0x05fb:  call   08171716 <+0x5db>
0817173b +0x0600:  leave
0817173c +0x0601:  ret
0817173d +0x0602:  nop
0817173e +0x0603:  push   %ebp
0817173f +0x0604:  mov    %esp,%ebp
08171741 +0x0606:  sub    $0x18,%esp
08171744 +0x0609:  mov    0x8(%ebp),%eax
08171747 +0x060c:  mov    %eax,(%esp)
0817174a +0x060f:  call   0817172a <+0x5ef>
0817174f +0x0614:  mov    0x8(%ebp),%eax
08171752 +0x0617:  movl   $0x0,(%eax)
08171758 +0x061d:  leave
08171759 +0x061e:  ret
0817175a +0x061f:  push   %ebp
0817175b +0x0620:  mov    %esp,%ebp
0817175d +0x0622:  push   %ebx
0817175e +0x0623:  sub    $0x14,%esp
08171761 +0x0626:  mov    0x8(%ebp),%eax
08171764 +0x0629:  mov    0x8(%eax),%eax
08171767 +0x062c:  test   %eax,%eax
08171769 +0x062e:  jne    08171772 <+0x637>
0817176b +0x0630:  mov    $0x0,%eax
08171770 +0x0635:  jmp    081717b9 <+0x67e>
08171772 +0x0637:  mov    0x8(%ebp),%eax
08171775 +0x063a:  add    $0xd,%eax
08171778 +0x063d:  mov    %eax,(%esp)
0817177b +0x0640:  call   08171ba6 <+0xa6b>
08171780 +0x0645:  mov    %eax,%ebx
08171782 +0x0647:  mov    0x8(%ebp),%eax
08171785 +0x064a:  add    $0xd,%eax
08171788 +0x064d:  mov    %eax,(%esp)
0817178b +0x0650:  call   08171b8a <+0xa4f>
08171790 +0x0655:  mov    0xc(%ebp),%edx
08171793 +0x0658:  mov    %edx,0x4(%esp)
08171797 +0x065c:  mov    %eax,(%esp)
0817179a +0x065f:  call   08171260 <+0x125>
0817179f +0x0664:  mov    0x8(%ebp),%edx
081717a2 +0x0667:  mov    %ebx,0xc(%esp)
081717a6 +0x066b:  mov    0xc(%ebp),%ecx
081717a9 +0x066e:  mov    %ecx,0x8(%esp)
081717ad +0x0672:  mov    %eax,0x4(%esp)
081717b1 +0x0676:  mov    %edx,(%esp)
081717b4 +0x0679:  call   08171bc2 <+0xa87>
081717b9 +0x067e:  add    $0x14,%esp
081717bc +0x0681:  pop    %ebx
081717bd +0x0682:  pop    %ebp
081717be +0x0683:  ret
081717bf +0x0684:  nop
081717c0 +0x0685:  push   %ebp
081717c1 +0x0686:  mov    %esp,%ebp
081717c3 +0x0688:  sub    $0x18,%esp
081717c6 +0x068b:  mov    0x8(%ebp),%eax
081717c9 +0x068e:  mov    %eax,(%esp)
081717cc +0x0691:  call   0817172a <+0x5ef>
081717d1 +0x0696:  mov    0xc(%ebp),%eax
081717d4 +0x0699:  mov    (%eax),%edx
081717d6 +0x069b:  mov    0x8(%ebp),%eax
081717d9 +0x069e:  mov    %edx,(%eax)
081717db +0x06a0:  leave
081717dc +0x06a1:  ret
081717dd +0x06a2:  nop
081717de +0x06a3:  push   %ebp
081717df +0x06a4:  mov    %esp,%ebp
081717e1 +0x06a6:  push   %ebx
081717e2 +0x06a7:  sub    $0x24,%esp
081717e5 +0x06aa:  mov    0x8(%ebp),%ebx
081717e8 +0x06ad:  mov    0x10(%ebp),%eax
081717eb +0x06b0:  mov    %eax,(%esp)
081717ee +0x06b3:  call   08171c8a <+0xb4f>
081717f3 +0x06b8:  mov    0xc(%ebp),%ecx
081717f6 +0x06bb:  lea    -0x10(%ebp),%edx
081717f9 +0x06be:  mov    %eax,0x8(%esp)
081717fd +0x06c2:  mov    %ecx,0x4(%esp)
08171801 +0x06c6:  mov    %edx,(%esp)
08171804 +0x06c9:  call   08171c92 <+0xb57>
08171809 +0x06ce:  sub    $0x4,%esp
0817180c +0x06d1:  lea    -0x10(%ebp),%eax
0817180f +0x06d4:  mov    %eax,0x4(%esp)
08171813 +0x06d8:  mov    %ebx,(%esp)
08171816 +0x06db:  call   08171ce6 <+0xbab>
0817181b +0x06e0:  mov    %ebx,%eax
0817181d +0x06e2:  mov    -0x4(%ebp),%ebx
08171820 +0x06e5:  leave
08171821 +0x06e6:  ret    $0x4
08171824 +0x06e9:  push   %ebp
08171825 +0x06ea:  mov    %esp,%ebp
08171827 +0x06ec:  sub    $0x28,%esp
0817182a +0x06ef:  mov    0x8(%ebp),%eax
0817182d +0x06f2:  mov    0x8(%eax),%eax
08171830 +0x06f5:  test   %eax,%eax
08171832 +0x06f7:  je     081718cc <+0x791>
08171838 +0x06fd:  mov    0x8(%ebp),%eax
0817183b +0x0700:  mov    %eax,(%esp)
0817183e +0x0703:  call   08171d20 <+0xbe5>
08171843 +0x0708:  mov    %eax,-0x18(%ebp)
08171846 +0x070b:  jmp    08171880 <+0x745>
08171848 +0x070d:  mov    -0x18(%ebp),%eax
0817184b +0x0710:  mov    (%eax),%eax
0817184d +0x0712:  test   %eax,%eax
0817184f +0x0714:  je     0817185b <+0x720>
08171851 +0x0716:  mov    -0x18(%ebp),%eax
08171854 +0x0719:  mov    (%eax),%eax
08171856 +0x071b:  sub    $0x4,%eax
08171859 +0x071e:  jmp    08171860 <+0x725>
0817185b +0x0720:  mov    $0x0,%eax
08171860 +0x0725:  mov    %eax,-0x10(%ebp)
08171863 +0x0728:  mov    -0x10(%ebp),%eax
08171866 +0x072b:  mov    0x4(%eax),%edx
08171869 +0x072e:  mov    -0x18(%ebp),%eax
0817186c +0x0731:  mov    %edx,(%eax)
0817186e +0x0733:  mov    -0x10(%ebp),%eax
08171871 +0x0736:  mov    %eax,0x4(%esp)
08171875 +0x073a:  mov    0x8(%ebp),%eax
08171878 +0x073d:  mov    %eax,(%esp)
0817187b +0x0740:  call   08171d46 <+0xc0b>
08171880 +0x0745:  mov    -0x18(%ebp),%eax
08171883 +0x0748:  mov    (%eax),%eax
08171885 +0x074a:  test   %eax,%eax
08171887 +0x074c:  setne  %al
0817188a +0x074f:  test   %al,%al
0817188c +0x0751:  jne    08171848 <+0x70d>
0817188e +0x0753:  mov    0x8(%ebp),%eax
08171891 +0x0756:  mov    0x4(%eax),%eax
08171894 +0x0759:  mov    %eax,0x4(%esp)
08171898 +0x075d:  mov    0x8(%ebp),%eax
0817189b +0x0760:  mov    %eax,(%esp)
0817189e +0x0763:  call   08171dbc <+0xc81>
081718a3 +0x0768:  mov    %eax,-0x14(%ebp)
081718a6 +0x076b:  mov    0x8(%ebp),%eax
081718a9 +0x076e:  mov    (%eax),%eax
081718ab +0x0770:  mov    %eax,-0xc(%ebp)
081718ae +0x0773:  jmp    081718bd <+0x782>
081718b0 +0x0775:  mov    -0xc(%ebp),%eax
081718b3 +0x0778:  movl   $0x0,(%eax)
081718b9 +0x077e:  addl   $0x4,-0xc(%ebp)
081718bd +0x0782:  mov    -0xc(%ebp),%eax
081718c0 +0x0785:  cmp    -0x14(%ebp),%eax
081718c3 +0x0788:  setne  %al
081718c6 +0x078b:  test   %al,%al
081718c8 +0x078d:  jne    081718b0 <+0x775>
081718ca +0x078f:  jmp    081718cd <+0x792>
081718cc +0x0791:  nop
081718cd +0x0792:  leave
081718ce +0x0793:  ret
081718cf +0x0794:  nop
081718d0 +0x0795:  push   %ebp
081718d1 +0x0796:  mov    %esp,%ebp
081718d3 +0x0798:  sub    $0x28,%esp
081718d6 +0x079b:  jmp    081718f4 <+0x7b9>
081718d8 +0x079d:  mov    0x8(%ebp),%eax
081718db +0x07a0:  mov    %eax,(%esp)
081718de +0x07a3:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
081718e3 +0x07a8:  add    %eax,%eax
081718e5 +0x07aa:  mov    %eax,0x4(%esp)
081718e9 +0x07ae:  mov    0x8(%ebp),%eax
081718ec +0x07b1:  mov    %eax,(%esp)
081718ef +0x07b4:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
081718f4 +0x07b9:  movl   $0x20,0x4(%esp)
081718fc +0x07c1:  mov    0x8(%ebp),%eax
081718ff +0x07c4:  mov    %eax,(%esp)
08171902 +0x07c7:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08171907 +0x07cc:  xor    $0x1,%eax
0817190a +0x07cf:  test   %al,%al
0817190c +0x07d1:  jne    081718d8 <+0x79d>
0817190e +0x07d3:  mov    0x8(%ebp),%eax
08171911 +0x07d6:  mov    0x8(%eax),%eax
08171914 +0x07d9:  mov    %eax,%edx
08171916 +0x07db:  mov    0x8(%ebp),%eax
08171919 +0x07de:  mov    0xc(%eax),%eax
0817191c +0x07e1:  lea    (%edx,%eax,1),%eax
0817191f +0x07e4:  mov    %eax,-0xc(%ebp)
08171922 +0x07e7:  movl   $0x20,0x4(%esp)
0817192a +0x07ef:  mov    0x8(%ebp),%eax
0817192d +0x07f2:  mov    %eax,(%esp)
08171930 +0x07f5:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08171935 +0x07fa:  mov    -0xc(%ebp),%eax
08171938 +0x07fd:  leave
08171939 +0x07fe:  ret
0817193a +0x07ff:  push   %ebp
0817193b +0x0800:  mov    %esp,%ebp
0817193d +0x0802:  mov    0x8(%ebp),%eax
08171940 +0x0805:  pop    %ebp
08171941 +0x0806:  ret    $0x4
08171944 +0x0809:  push   %ebp
08171945 +0x080a:  mov    %esp,%ebp
08171947 +0x080c:  mov    0xc(%ebp),%edx
0817194a +0x080f:  mov    0x8(%ebp),%eax
0817194d +0x0812:  mov    %edx,%ecx
0817194f +0x0814:  sub    %eax,%ecx
08171951 +0x0816:  mov    %ecx,%eax
08171953 +0x0818:  sar    $0x2,%eax
08171956 +0x081b:  pop    %ebp
08171957 +0x081c:  ret
08171958 +0x081d:  push   %ebp
08171959 +0x081e:  mov    %esp,%ebp
0817195b +0x0820:  mov    0x8(%ebp),%eax
0817195e +0x0823:  mov    (%eax),%eax
08171960 +0x0825:  mov    0xc(%ebp),%edx
08171963 +0x0828:  shl    $0x2,%edx
08171966 +0x082b:  lea    (%eax,%edx,1),%edx
08171969 +0x082e:  mov    0x8(%ebp),%eax
0817196c +0x0831:  mov    %edx,(%eax)
0817196e +0x0833:  pop    %ebp
0817196f +0x0834:  ret
08171970 +0x0835:  push   %ebp
08171971 +0x0836:  mov    %esp,%ebp
08171973 +0x0838:  push   %ebx
08171974 +0x0839:  sub    $0x24,%esp
08171977 +0x083c:  mov    0x8(%ebp),%eax
0817197a +0x083f:  mov    (%eax),%ebx
0817197c +0x0841:  mov    0xc(%ebp),%eax
0817197f +0x0844:  movzbl (%eax),%eax
08171982 +0x0847:  movsbl %al,%eax
08171985 +0x084a:  mov    %eax,0x4(%esp)
08171989 +0x084e:  lea    -0x9(%ebp),%eax
0817198c +0x0851:  mov    %eax,(%esp)
0817198f +0x0854:  call   08171246 <+0x10b>
08171994 +0x0859:  mov    0x8(%ebp),%edx
08171997 +0x085c:  mov    (%edx),%edx
08171999 +0x085e:  shl    $0x6,%edx
0817199c +0x0861:  lea    (%eax,%edx,1),%edx
0817199f +0x0864:  mov    0x8(%ebp),%eax
081719a2 +0x0867:  mov    (%eax),%eax
081719a4 +0x0869:  shr    $0x2,%eax
081719a7 +0x086c:  lea    (%edx,%eax,1),%eax
081719aa +0x086f:  sub    $0x61c88647,%eax
081719af +0x0874:  mov    %ebx,%edx
081719b1 +0x0876:  xor    %eax,%edx
081719b3 +0x0878:  mov    0x8(%ebp),%eax
081719b6 +0x087b:  mov    %edx,(%eax)
081719b8 +0x087d:  add    $0x24,%esp
081719bb +0x0880:  pop    %ebx
081719bc +0x0881:  pop    %ebp
081719bd +0x0882:  ret
081719be +0x0883:  push   %ebp
081719bf +0x0884:  mov    %esp,%ebp
081719c1 +0x0886:  pop    %ebp
081719c2 +0x0887:  ret
081719c3 +0x0888:  nop
081719c4 +0x0889:  push   %ebp
081719c5 +0x088a:  mov    %esp,%ebp
081719c7 +0x088c:  pop    %ebp
081719c8 +0x088d:  ret
081719c9 +0x088e:  nop
081719ca +0x088f:  push   %ebp
081719cb +0x0890:  mov    %esp,%ebp
081719cd +0x0892:  push   %esi
081719ce +0x0893:  push   %ebx
081719cf +0x0894:  sub    $0x10,%esp
081719d2 +0x0897:  mov    0xc(%ebp),%eax
081719d5 +0x089a:  mov    %eax,(%esp)
081719d8 +0x089d:  call   08171178 <+0x3d>
081719dd +0x08a2:  mov    0x8(%ebp),%edx
081719e0 +0x08a5:  mov    %eax,0x8(%esp)
081719e4 +0x08a9:  mov    0x18(%ebp),%eax
081719e7 +0x08ac:  mov    %eax,0x4(%esp)
081719eb +0x08b0:  mov    %edx,(%esp)
081719ee +0x08b3:  call   08171dce <+0xc93>
081719f3 +0x08b8:  mov    0x8(%ebp),%eax
081719f6 +0x08bb:  lea    0xd(%eax),%edx
081719f9 +0x08be:  mov    0x14(%ebp),%eax
081719fc +0x08c1:  mov    %eax,0x8(%esp)
08171a00 +0x08c5:  mov    0x10(%ebp),%eax
08171a03 +0x08c8:  mov    %eax,0x4(%esp)
08171a07 +0x08cc:  mov    %edx,(%esp)
08171a0a +0x08cf:  call   08171e0e <+0xcd3>
08171a0f +0x08d4:  mov    0x8(%ebp),%eax
08171a12 +0x08d7:  mov    $0x3f800000,%edx
08171a17 +0x08dc:  mov    %edx,0x10(%eax)
08171a1a +0x08df:  mov    0x8(%ebp),%eax
08171a1d +0x08e2:  movl   $0x0,0x14(%eax)
08171a24 +0x08e9:  add    $0x10,%esp
08171a27 +0x08ec:  pop    %ebx
08171a28 +0x08ed:  pop    %esi
08171a29 +0x08ee:  pop    %ebp
08171a2a +0x08ef:  ret
08171a2b +0x08f0:  mov    %edx,%ebx
08171a2d +0x08f2:  mov    %eax,%esi
08171a2f +0x08f4:  mov    0x8(%ebp),%eax
08171a32 +0x08f7:  mov    %eax,(%esp)
08171a35 +0x08fa:  call   081716a8 <+0x56d>
08171a3a +0x08ff:  mov    %esi,%eax
08171a3c +0x0901:  mov    %ebx,%edx
08171a3e +0x0903:  mov    %eax,(%esp)
08171a41 +0x0906:  call   08ae3750 <_Unwind_Resume>
08171a46 +0x090b:  push   %ebp
08171a47 +0x090c:  mov    %esp,%ebp
08171a49 +0x090e:  sub    $0x18,%esp
08171a4c +0x0911:  mov    0x8(%ebp),%eax
08171a4f +0x0914:  mov    %eax,(%esp)
08171a52 +0x0917:  call   08171e42 <+0xd07>
08171a57 +0x091c:  leave
08171a58 +0x091d:  ret
08171a59 +0x091e:  nop
08171a5a +0x091f:  push   %ebp
08171a5b +0x0920:  mov    %esp,%ebp
08171a5d +0x0922:  push   %esi
08171a5e +0x0923:  push   %ebx
08171a5f +0x0924:  sub    $0x20,%esp
08171a62 +0x0927:  mov    0x8(%ebp),%eax
08171a65 +0x092a:  mov    (%eax),%eax
08171a67 +0x092c:  test   %eax,%eax
08171a69 +0x092e:  je     08171b63 <+0xa28>
08171a6f +0x0934:  mov    0x8(%ebp),%eax
08171a72 +0x0937:  mov    %eax,(%esp)
08171a75 +0x093a:  call   08171d20 <+0xbe5>
08171a7a +0x093f:  mov    %eax,-0x18(%ebp)
08171a7d +0x0942:  jmp    08171ab7 <+0x97c>
08171a7f +0x0944:  mov    -0x18(%ebp),%eax
08171a82 +0x0947:  mov    (%eax),%eax
08171a84 +0x0949:  test   %eax,%eax
08171a86 +0x094b:  je     08171a92 <+0x957>
08171a88 +0x094d:  mov    -0x18(%ebp),%eax
08171a8b +0x0950:  mov    (%eax),%eax
08171a8d +0x0952:  sub    $0x4,%eax
08171a90 +0x0955:  jmp    08171a97 <+0x95c>
08171a92 +0x0957:  mov    $0x0,%eax
08171a97 +0x095c:  mov    %eax,-0x10(%ebp)
08171a9a +0x095f:  mov    -0x10(%ebp),%eax
08171a9d +0x0962:  mov    0x4(%eax),%edx
08171aa0 +0x0965:  mov    -0x18(%ebp),%eax
08171aa3 +0x0968:  mov    %edx,(%eax)
08171aa5 +0x096a:  mov    -0x10(%ebp),%eax
08171aa8 +0x096d:  mov    %eax,0x4(%esp)
08171aac +0x0971:  mov    0x8(%ebp),%eax
08171aaf +0x0974:  mov    %eax,(%esp)
08171ab2 +0x0977:  call   08171d46 <+0xc0b>
08171ab7 +0x097c:  mov    -0x18(%ebp),%eax
08171aba +0x097f:  mov    (%eax),%eax
08171abc +0x0981:  test   %eax,%eax
08171abe +0x0983:  setne  %al
08171ac1 +0x0986:  test   %al,%al
08171ac3 +0x0988:  jne    08171a7f <+0x944>
08171ac5 +0x098a:  mov    -0x18(%ebp),%eax
08171ac8 +0x098d:  mov    %eax,0x4(%esp)
08171acc +0x0991:  mov    0x8(%ebp),%eax
08171acf +0x0994:  mov    %eax,(%esp)
08171ad2 +0x0997:  call   08171e48 <+0xd0d>
08171ad7 +0x099c:  mov    0x8(%ebp),%eax
08171ada +0x099f:  mov    0x4(%eax),%eax
08171add +0x09a2:  add    $0x1,%eax
08171ae0 +0x09a5:  mov    %eax,0x4(%esp)
08171ae4 +0x09a9:  mov    0x8(%ebp),%eax
08171ae7 +0x09ac:  mov    %eax,(%esp)
08171aea +0x09af:  call   08171dbc <+0xc81>
08171aef +0x09b4:  mov    %eax,-0x14(%ebp)
08171af2 +0x09b7:  mov    0x8(%ebp),%eax
08171af5 +0x09ba:  mov    (%eax),%eax
08171af7 +0x09bc:  mov    %eax,-0xc(%ebp)
08171afa +0x09bf:  jmp    08171b24 <+0x9e9>
08171afc +0x09c1:  mov    -0xc(%ebp),%eax
08171aff +0x09c4:  mov    %eax,(%esp)
08171b02 +0x09c7:  call   08171e64 <+0xd29>
08171b07 +0x09cc:  mov    %eax,%ebx
08171b09 +0x09ce:  mov    0x8(%ebp),%eax
08171b0c +0x09d1:  mov    %eax,(%esp)
08171b0f +0x09d4:  call   08171e4e <+0xd13>
08171b14 +0x09d9:  mov    %ebx,0x4(%esp)
08171b18 +0x09dd:  mov    %eax,(%esp)
08171b1b +0x09e0:  call   08171e99 <+0xd5e>
08171b20 +0x09e5:  addl   $0x4,-0xc(%ebp)
08171b24 +0x09e9:  mov    -0xc(%ebp),%eax
08171b27 +0x09ec:  cmp    -0x14(%ebp),%eax
08171b2a +0x09ef:  setne  %al
08171b2d +0x09f2:  test   %al,%al
08171b2f +0x09f4:  jne    08171afc <+0x9c1>
08171b31 +0x09f6:  mov    0x8(%ebp),%eax
08171b34 +0x09f9:  mov    0x4(%eax),%eax
08171b37 +0x09fc:  lea    0x1(%eax),%esi
08171b3a +0x09ff:  mov    0x8(%ebp),%eax
08171b3d +0x0a02:  mov    (%eax),%ebx
08171b3f +0x0a04:  mov    0x8(%ebp),%eax
08171b42 +0x0a07:  mov    %eax,(%esp)
08171b45 +0x0a0a:  call   08171e4e <+0xd13>
08171b4a +0x0a0f:  mov    %esi,0x8(%esp)
08171b4e +0x0a13:  mov    %ebx,0x4(%esp)
08171b52 +0x0a17:  mov    %eax,(%esp)
08171b55 +0x0a1a:  call   08171eb3 <+0xd78>
08171b5a +0x0a1f:  mov    0x8(%ebp),%eax
08171b5d +0x0a22:  movl   $0x0,(%eax)
08171b63 +0x0a28:  add    $0x20,%esp
08171b66 +0x0a2b:  pop    %ebx
08171b67 +0x0a2c:  pop    %esi
08171b68 +0x0a2d:  pop    %ebp
08171b69 +0x0a2e:  ret
08171b6a +0x0a2f:  push   %ebp
08171b6b +0x0a30:  mov    %esp,%ebp
08171b6d +0x0a32:  sub    $0x28,%esp
08171b70 +0x0a35:  mov    0xc(%ebp),%eax
08171b73 +0x0a38:  mov    %al,-0xc(%ebp)
08171b76 +0x0a3b:  movzbl -0xc(%ebp),%eax
08171b7a +0x0a3f:  add    0x8(%ebp),%eax
08171b7d +0x0a42:  add    $0x1,%eax
08171b80 +0x0a45:  mov    %eax,(%esp)
08171b83 +0x0a48:  call   08171ed9 <+0xd9e>
08171b88 +0x0a4d:  leave
08171b89 +0x0a4e:  ret
08171b8a +0x0a4f:  push   %ebp
08171b8b +0x0a50:  mov    %esp,%ebp
08171b8d +0x0a52:  sub    $0x18,%esp
08171b90 +0x0a55:  mov    0x8(%ebp),%eax
08171b93 +0x0a58:  mov    %eax,(%esp)
08171b96 +0x0a5b:  call   08171eec <+0xdb1>
08171b9b +0x0a60:  mov    %eax,(%esp)
08171b9e +0x0a63:  call   08171f00 <+0xdc5>
08171ba3 +0x0a68:  leave
08171ba4 +0x0a69:  ret
08171ba5 +0x0a6a:  nop
08171ba6 +0x0a6b:  push   %ebp
08171ba7 +0x0a6c:  mov    %esp,%ebp
08171ba9 +0x0a6e:  sub    $0x18,%esp
08171bac +0x0a71:  mov    0x8(%ebp),%eax
08171baf +0x0a74:  mov    %eax,(%esp)
08171bb2 +0x0a77:  call   08171eec <+0xdb1>
08171bb7 +0x0a7c:  mov    %eax,(%esp)
08171bba +0x0a7f:  call   08171f14 <+0xdd9>
08171bbf +0x0a84:  leave
08171bc0 +0x0a85:  ret
08171bc1 +0x0a86:  nop
08171bc2 +0x0a87:  push   %ebp
08171bc3 +0x0a88:  mov    %esp,%ebp
08171bc5 +0x0a8a:  sub    $0x28,%esp
08171bc8 +0x0a8d:  mov    0x8(%ebp),%eax
08171bcb +0x0a90:  mov    0x4(%eax),%ecx
08171bce +0x0a93:  mov    0xc(%ebp),%eax
08171bd1 +0x0a96:  mov    $0x0,%edx
08171bd6 +0x0a9b:  div    %ecx
08171bd8 +0x0a9d:  mov    %edx,-0x14(%ebp)
08171bdb +0x0aa0:  mov    0x8(%ebp),%eax
08171bde +0x0aa3:  mov    -0x14(%ebp),%edx
08171be1 +0x0aa6:  mov    %edx,0x4(%esp)
08171be5 +0x0aaa:  mov    %eax,(%esp)
08171be8 +0x0aad:  call   08171f28 <+0xded>
08171bed +0x0ab2:  mov    %eax,-0x10(%ebp)
08171bf0 +0x0ab5:  cmpl   $0x0,-0x10(%ebp)
08171bf4 +0x0ab9:  jne    08171bfe <+0xac3>
08171bf6 +0x0abb:  mov    -0x10(%ebp),%eax
08171bf9 +0x0abe:  jmp    08171c88 <+0xb4d>
08171bfe +0x0ac3:  mov    -0x10(%ebp),%eax
08171c01 +0x0ac6:  mov    0x8(%eax),%eax
08171c04 +0x0ac9:  mov    %eax,-0xc(%ebp)
08171c07 +0x0acc:  mov    0xc(%ebp),%eax
08171c0a +0x0acf:  cmp    -0xc(%ebp),%eax
08171c0d +0x0ad2:  jne    08171c48 <+0xb0d>
08171c0f +0x0ad4:  mov    -0x10(%ebp),%eax
08171c12 +0x0ad7:  mov    %eax,(%esp)
08171c15 +0x0ada:  call   08171f6a <+0xe2f>
08171c1a +0x0adf:  mov    0x8(%ebp),%edx
08171c1d +0x0ae2:  mov    %eax,0x4(%esp)
08171c21 +0x0ae6:  mov    %edx,(%esp)
08171c24 +0x0ae9:  call   08171f72 <+0xe37>
08171c29 +0x0aee:  mov    %eax,0x8(%esp)
08171c2d +0x0af2:  mov    0x10(%ebp),%eax
08171c30 +0x0af5:  mov    %eax,0x4(%esp)
08171c34 +0x0af9:  mov    0x14(%ebp),%eax
08171c37 +0x0afc:  mov    %eax,(%esp)
08171c3a +0x0aff:  call   08171f86 <+0xe4b>
08171c3f +0x0b04:  test   %al,%al
08171c41 +0x0b06:  je     08171c66 <+0xb2b>
08171c43 +0x0b08:  mov    -0x10(%ebp),%eax
08171c46 +0x0b0b:  jmp    08171c88 <+0xb4d>
08171c48 +0x0b0d:  mov    0x8(%ebp),%eax
08171c4b +0x0b10:  mov    0x4(%eax),%ecx
08171c4e +0x0b13:  mov    -0xc(%ebp),%eax
08171c51 +0x0b16:  mov    $0x0,%edx
08171c56 +0x0b1b:  div    %ecx
08171c58 +0x0b1d:  mov    %edx,%eax
08171c5a +0x0b1f:  cmp    -0x14(%ebp),%eax
08171c5d +0x0b22:  je     08171c66 <+0xb2b>
08171c5f +0x0b24:  mov    $0x0,%eax
08171c64 +0x0b29:  jmp    08171c88 <+0xb4d>
08171c66 +0x0b2b:  mov    -0x10(%ebp),%eax
08171c69 +0x0b2e:  mov    0x4(%eax),%eax
08171c6c +0x0b31:  test   %eax,%eax
08171c6e +0x0b33:  je     08171c7b <+0xb40>
08171c70 +0x0b35:  mov    -0x10(%ebp),%eax
08171c73 +0x0b38:  mov    0x4(%eax),%eax
08171c76 +0x0b3b:  sub    $0x4,%eax
08171c79 +0x0b3e:  jmp    08171c80 <+0xb45>
08171c7b +0x0b40:  mov    $0x0,%eax
08171c80 +0x0b45:  mov    %eax,-0x10(%ebp)
08171c83 +0x0b48:  jmp    08171bf0 <+0xab5>
08171c88 +0x0b4d:  leave
08171c89 +0x0b4e:  ret
08171c8a +0x0b4f:  push   %ebp
08171c8b +0x0b50:  mov    %esp,%ebp
08171c8d +0x0b52:  mov    0x8(%ebp),%eax
08171c90 +0x0b55:  pop    %ebp
08171c91 +0x0b56:  ret
08171c92 +0x0b57:  push   %ebp
08171c93 +0x0b58:  mov    %esp,%ebp
08171c95 +0x0b5a:  push   %esi
08171c96 +0x0b5b:  push   %ebx
08171c97 +0x0b5c:  sub    $0x10,%esp
08171c9a +0x0b5f:  mov    0x8(%ebp),%esi
08171c9d +0x0b62:  mov    0x10(%ebp),%eax
08171ca0 +0x0b65:  mov    %eax,(%esp)
08171ca3 +0x0b68:  call   08171c8a <+0xb4f>
08171ca8 +0x0b6d:  mov    %eax,%ebx
08171caa +0x0b6f:  mov    0x10(%ebp),%eax
08171cad +0x0b72:  mov    %eax,(%esp)
08171cb0 +0x0b75:  call   08171c8a <+0xb4f>
08171cb5 +0x0b7a:  mov    %eax,(%esp)
08171cb8 +0x0b7d:  call   08171fa0 <+0xe65>
08171cbd +0x0b82:  mov    %ebx,0xc(%esp)
08171cc1 +0x0b86:  mov    %eax,0x8(%esp)
08171cc5 +0x0b8a:  mov    0xc(%ebp),%eax
08171cc8 +0x0b8d:  mov    %eax,0x4(%esp)
08171ccc +0x0b91:  mov    %esi,(%esp)
08171ccf +0x0b94:  call   08171fa8 <+0xe6d>
08171cd4 +0x0b99:  sub    $0x4,%esp
08171cd7 +0x0b9c:  mov    %esi,%eax
08171cd9 +0x0b9e:  lea    -0x8(%ebp),%esp
08171cdc +0x0ba1:  add    $0x0,%esp
08171cdf +0x0ba4:  pop    %ebx
08171ce0 +0x0ba5:  pop    %esi
08171ce1 +0x0ba6:  pop    %ebp
08171ce2 +0x0ba7:  ret    $0x4
08171ce5 +0x0baa:  nop
08171ce6 +0x0bab:  push   %ebp
08171ce7 +0x0bac:  mov    %esp,%ebp
08171ce9 +0x0bae:  sub    $0x18,%esp
08171cec +0x0bb1:  mov    0xc(%ebp),%eax
08171cef +0x0bb4:  mov    %eax,(%esp)
08171cf2 +0x0bb7:  call   081720f9 <+0xfbe>
08171cf7 +0x0bbc:  mov    0x8(%ebp),%edx
08171cfa +0x0bbf:  mov    %eax,0x4(%esp)
08171cfe +0x0bc3:  mov    %edx,(%esp)
08171d01 +0x0bc6:  call   08172102 <+0xfc7>
08171d06 +0x0bcb:  mov    0xc(%ebp),%eax
08171d09 +0x0bce:  add    $0x4,%eax
08171d0c +0x0bd1:  mov    %eax,(%esp)
08171d0f +0x0bd4:  call   08080fe4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x100a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x100a
08171d14 +0x0bd9:  movzbl (%eax),%edx
08171d17 +0x0bdc:  mov    0x8(%ebp),%eax
08171d1a +0x0bdf:  mov    %dl,0x4(%eax)
08171d1d +0x0be2:  leave
08171d1e +0x0be3:  ret
08171d1f +0x0be4:  nop
08171d20 +0x0be5:  push   %ebp
08171d21 +0x0be6:  mov    %esp,%ebp
08171d23 +0x0be8:  sub    $0x18,%esp
08171d26 +0x0beb:  mov    0x8(%ebp),%eax
08171d29 +0x0bee:  mov    0x4(%eax),%eax
08171d2c +0x0bf1:  mov    %eax,0x4(%esp)
08171d30 +0x0bf5:  mov    0x8(%ebp),%eax
08171d33 +0x0bf8:  mov    %eax,(%esp)
08171d36 +0x0bfb:  call   08171dbc <+0xc81>
08171d3b +0x0c00:  mov    %eax,(%esp)
08171d3e +0x0c03:  call   081711ce <+0x93>
08171d43 +0x0c08:  leave
08171d44 +0x0c09:  ret
08171d45 +0x0c0a:  nop
08171d46 +0x0c0b:  push   %ebp
08171d47 +0x0c0c:  mov    %esp,%ebp
08171d49 +0x0c0e:  push   %ebx
08171d4a +0x0c0f:  sub    $0x14,%esp
08171d4d +0x0c12:  mov    0xc(%ebp),%eax
08171d50 +0x0c15:  mov    %eax,(%esp)
08171d53 +0x0c18:  call   08172120 <+0xfe5>
08171d58 +0x0c1d:  mov    %eax,(%esp)
08171d5b +0x0c20:  call   08172128 <+0xfed>
08171d60 +0x0c25:  mov    0xc(%ebp),%eax
08171d63 +0x0c28:  mov    %eax,(%esp)
08171d66 +0x0c2b:  call   08172152 <+0x1017>
08171d6b +0x0c30:  mov    %eax,%ebx
08171d6d +0x0c32:  mov    0x8(%ebp),%eax
08171d70 +0x0c35:  mov    %eax,(%esp)
08171d73 +0x0c38:  call   0817213c <+0x1001>
08171d78 +0x0c3d:  mov    %ebx,0x4(%esp)
08171d7c +0x0c41:  mov    %eax,(%esp)
08171d7f +0x0c44:  call   08172187 <+0x104c>
08171d84 +0x0c49:  mov    0x8(%ebp),%eax
08171d87 +0x0c4c:  mov    %eax,(%esp)
08171d8a +0x0c4f:  call   0817213c <+0x1001>
08171d8f +0x0c54:  movl   $0x1,0x8(%esp)
08171d97 +0x0c5c:  mov    0xc(%ebp),%edx
08171d9a +0x0c5f:  mov    %edx,0x4(%esp)
08171d9e +0x0c63:  mov    %eax,(%esp)
08171da1 +0x0c66:  call   081721a1 <+0x1066>
08171da6 +0x0c6b:  mov    0x8(%ebp),%eax
08171da9 +0x0c6e:  mov    0x8(%eax),%eax
08171dac +0x0c71:  lea    -0x1(%eax),%edx
08171daf +0x0c74:  mov    0x8(%ebp),%eax
08171db2 +0x0c77:  mov    %edx,0x8(%eax)
08171db5 +0x0c7a:  add    $0x14,%esp
08171db8 +0x0c7d:  pop    %ebx
08171db9 +0x0c7e:  pop    %ebp
08171dba +0x0c7f:  ret
08171dbb +0x0c80:  nop
08171dbc +0x0c81:  push   %ebp
08171dbd +0x0c82:  mov    %esp,%ebp
08171dbf +0x0c84:  mov    0x8(%ebp),%eax
08171dc2 +0x0c87:  mov    (%eax),%eax
08171dc4 +0x0c89:  mov    0xc(%ebp),%edx
08171dc7 +0x0c8c:  shl    $0x2,%edx
08171dca +0x0c8f:  add    %edx,%eax
08171dcc +0x0c91:  pop    %ebp
08171dcd +0x0c92:  ret
08171dce +0x0c93:  push   %ebp
08171dcf +0x0c94:  mov    %esp,%ebp
08171dd1 +0x0c96:  sub    $0x18,%esp
08171dd4 +0x0c99:  mov    0x8(%ebp),%eax
08171dd7 +0x0c9c:  movl   $0x0,(%eax)
08171ddd +0x0ca2:  mov    0x8(%ebp),%eax
08171de0 +0x0ca5:  mov    0x10(%ebp),%edx
08171de3 +0x0ca8:  mov    %edx,0x4(%eax)
08171de6 +0x0cab:  mov    0x8(%ebp),%eax
08171de9 +0x0cae:  movl   $0x0,0x8(%eax)
08171df0 +0x0cb5:  mov    0x8(%ebp),%eax
08171df3 +0x0cb8:  lea    0xc(%eax),%edx
08171df6 +0x0cbb:  mov    0xc(%ebp),%eax
08171df9 +0x0cbe:  mov    %eax,0x8(%esp)
08171dfd +0x0cc2:  mov    0xc(%ebp),%eax
08171e00 +0x0cc5:  mov    %eax,0x4(%esp)
08171e04 +0x0cc9:  mov    %edx,(%esp)
08171e07 +0x0ccc:  call   081721c2 <+0x1087>
08171e0c +0x0cd1:  leave
08171e0d +0x0cd2:  ret
08171e0e +0x0cd3:  push   %ebp
08171e0f +0x0cd4:  mov    %esp,%ebp
08171e11 +0x0cd6:  sub    $0x18,%esp
08171e14 +0x0cd9:  mov    0x8(%ebp),%eax
08171e17 +0x0cdc:  movb   $0x0,(%eax)
08171e1a +0x0cdf:  mov    0x8(%ebp),%eax
08171e1d +0x0ce2:  movzbl (%eax),%eax
08171e20 +0x0ce5:  movzbl %al,%eax
08171e23 +0x0ce8:  mov    0x10(%ebp),%edx
08171e26 +0x0ceb:  mov    %edx,0xc(%esp)
08171e2a +0x0cef:  mov    0xc(%ebp),%edx
08171e2d +0x0cf2:  mov    %edx,0x8(%esp)
08171e31 +0x0cf6:  mov    %eax,0x4(%esp)
08171e35 +0x0cfa:  mov    0x8(%ebp),%eax
08171e38 +0x0cfd:  mov    %eax,(%esp)
08171e3b +0x0d00:  call   0817220c <+0x10d1>
08171e40 +0x0d05:  leave
08171e41 +0x0d06:  ret
08171e42 +0x0d07:  push   %ebp
08171e43 +0x0d08:  mov    %esp,%ebp
08171e45 +0x0d0a:  pop    %ebp
08171e46 +0x0d0b:  ret
08171e47 +0x0d0c:  nop
08171e48 +0x0d0d:  push   %ebp
08171e49 +0x0d0e:  mov    %esp,%ebp
08171e4b +0x0d10:  pop    %ebp
08171e4c +0x0d11:  ret
08171e4d +0x0d12:  nop
08171e4e +0x0d13:  push   %ebp
08171e4f +0x0d14:  mov    %esp,%ebp
08171e51 +0x0d16:  sub    $0x18,%esp
08171e54 +0x0d19:  mov    0x8(%ebp),%eax
08171e57 +0x0d1c:  add    $0xc,%eax
08171e5a +0x0d1f:  mov    %eax,(%esp)
08171e5d +0x0d22:  call   0817227e <+0x1143>
08171e62 +0x0d27:  leave
08171e63 +0x0d28:  ret
08171e64 +0x0d29:  push   %ebp
08171e65 +0x0d2a:  mov    %esp,%ebp
08171e67 +0x0d2c:  sub    $0x28,%esp
08171e6a +0x0d2f:  mov    0x8(%ebp),%eax
08171e6d +0x0d32:  mov    %eax,0x4(%esp)
08171e71 +0x0d36:  lea    -0xc(%ebp),%eax
08171e74 +0x0d39:  mov    %eax,(%esp)
08171e77 +0x0d3c:  call   08172292 <+0x1157>
08171e7c +0x0d41:  lea    -0xc(%ebp),%eax
08171e7f +0x0d44:  mov    %eax,(%esp)
08171e82 +0x0d47:  call   081722a0 <+0x1165>
08171e87 +0x0d4c:  movl   $0x0,0x4(%esp)
08171e8f +0x0d54:  mov    %eax,(%esp)
08171e92 +0x0d57:  call   081722aa <+0x116f>
08171e97 +0x0d5c:  leave
08171e98 +0x0d5d:  ret
08171e99 +0x0d5e:  push   %ebp
08171e9a +0x0d5f:  mov    %esp,%ebp
08171e9c +0x0d61:  sub    $0x18,%esp
08171e9f +0x0d64:  mov    0x8(%ebp),%eax
08171ea2 +0x0d67:  mov    0xc(%ebp),%edx
08171ea5 +0x0d6a:  mov    %edx,0x4(%esp)
08171ea9 +0x0d6e:  mov    %eax,(%esp)
08171eac +0x0d71:  call   081722b8 <+0x117d>
08171eb1 +0x0d76:  leave
08171eb2 +0x0d77:  ret
08171eb3 +0x0d78:  push   %ebp
08171eb4 +0x0d79:  mov    %esp,%ebp
08171eb6 +0x0d7b:  sub    $0x18,%esp
08171eb9 +0x0d7e:  mov    0x8(%ebp),%eax
08171ebc +0x0d81:  mov    0x10(%ebp),%edx
08171ebf +0x0d84:  mov    %edx,0x8(%esp)
08171ec3 +0x0d88:  mov    0xc(%ebp),%edx
08171ec6 +0x0d8b:  mov    %edx,0x4(%esp)
08171eca +0x0d8f:  mov    %eax,(%esp)
08171ecd +0x0d92:  call   081722cc <+0x1191>
08171ed2 +0x0d97:  leave
08171ed3 +0x0d98:  ret
08171ed4 +0x0d99:  push   %ebp
08171ed5 +0x0d9a:  mov    %esp,%ebp
08171ed7 +0x0d9c:  pop    %ebp
08171ed8 +0x0d9d:  ret
08171ed9 +0x0d9e:  push   %ebp
08171eda +0x0d9f:  mov    %esp,%ebp
08171edc +0x0da1:  sub    $0x18,%esp
08171edf +0x0da4:  mov    0x8(%ebp),%eax
08171ee2 +0x0da7:  mov    %eax,(%esp)
08171ee5 +0x0daa:  call   08171ed4 <+0xd99>
08171eea +0x0daf:  leave
08171eeb +0x0db0:  ret
08171eec +0x0db1:  push   %ebp
08171eed +0x0db2:  mov    %esp,%ebp
08171eef +0x0db4:  mov    0x8(%ebp),%eax
08171ef2 +0x0db7:  movzbl (%eax),%eax
08171ef5 +0x0dba:  movzbl %al,%eax
08171ef8 +0x0dbd:  add    0x8(%ebp),%eax
08171efb +0x0dc0:  add    $0x1,%eax
08171efe +0x0dc3:  pop    %ebp
08171eff +0x0dc4:  ret
08171f00 +0x0dc5:  push   %ebp
08171f01 +0x0dc6:  mov    %esp,%ebp
08171f03 +0x0dc8:  sub    $0x18,%esp
08171f06 +0x0dcb:  mov    0x8(%ebp),%eax
08171f09 +0x0dce:  mov    %eax,(%esp)
08171f0c +0x0dd1:  call   081722e0 <+0x11a5>
08171f11 +0x0dd6:  leave
08171f12 +0x0dd7:  ret
08171f13 +0x0dd8:  nop
08171f14 +0x0dd9:  push   %ebp
08171f15 +0x0dda:  mov    %esp,%ebp
08171f17 +0x0ddc:  sub    $0x18,%esp
08171f1a +0x0ddf:  mov    0x8(%ebp),%eax
08171f1d +0x0de2:  mov    %eax,(%esp)
08171f20 +0x0de5:  call   081722e8 <+0x11ad>
08171f25 +0x0dea:  leave
08171f26 +0x0deb:  ret
08171f27 +0x0dec:  nop
08171f28 +0x0ded:  push   %ebp
08171f29 +0x0dee:  mov    %esp,%ebp
08171f2b +0x0df0:  sub    $0x28,%esp
08171f2e +0x0df3:  mov    0xc(%ebp),%eax
08171f31 +0x0df6:  mov    %eax,0x4(%esp)
08171f35 +0x0dfa:  mov    0x8(%ebp),%eax
08171f38 +0x0dfd:  mov    %eax,(%esp)
08171f3b +0x0e00:  call   081722f0 <+0x11b5>
08171f40 +0x0e05:  mov    %eax,-0xc(%ebp)
08171f43 +0x0e08:  cmpl   $0x0,-0xc(%ebp)
08171f47 +0x0e0c:  je     08171f63 <+0xe28>
08171f49 +0x0e0e:  mov    -0xc(%ebp),%eax
08171f4c +0x0e11:  mov    (%eax),%eax
08171f4e +0x0e13:  test   %eax,%eax
08171f50 +0x0e15:  je     08171f5c <+0xe21>
08171f52 +0x0e17:  mov    -0xc(%ebp),%eax
08171f55 +0x0e1a:  mov    (%eax),%eax
08171f57 +0x0e1c:  sub    $0x4,%eax
08171f5a +0x0e1f:  jmp    08171f61 <+0xe26>
08171f5c +0x0e21:  mov    $0x0,%eax
08171f61 +0x0e26:  jmp    08171f68 <+0xe2d>
08171f63 +0x0e28:  mov    $0x0,%eax
08171f68 +0x0e2d:  leave
08171f69 +0x0e2e:  ret
08171f6a +0x0e2f:  push   %ebp
08171f6b +0x0e30:  mov    %esp,%ebp
08171f6d +0x0e32:  mov    0x8(%ebp),%eax
08171f70 +0x0e35:  pop    %ebp
08171f71 +0x0e36:  ret
08171f72 +0x0e37:  push   %ebp
08171f73 +0x0e38:  mov    %esp,%ebp
08171f75 +0x0e3a:  sub    $0x18,%esp
08171f78 +0x0e3d:  mov    0xc(%ebp),%eax
08171f7b +0x0e40:  mov    %eax,(%esp)
08171f7e +0x0e43:  call   08171fa0 <+0xe65>
08171f83 +0x0e48:  leave
08171f84 +0x0e49:  ret
08171f85 +0x0e4a:  nop
08171f86 +0x0e4b:  push   %ebp
08171f87 +0x0e4c:  mov    %esp,%ebp
08171f89 +0x0e4e:  sub    $0x18,%esp
08171f8c +0x0e51:  mov    0x10(%ebp),%eax
08171f8f +0x0e54:  mov    %eax,0x4(%esp)
08171f93 +0x0e58:  mov    0xc(%ebp),%eax
08171f96 +0x0e5b:  mov    %eax,(%esp)
08171f99 +0x0e5e:  call   08171273 <+0x138>
08171f9e +0x0e63:  leave
08171f9f +0x0e64:  ret
08171fa0 +0x0e65:  push   %ebp
08171fa1 +0x0e66:  mov    %esp,%ebp
08171fa3 +0x0e68:  mov    0x8(%ebp),%eax
08171fa6 +0x0e6b:  pop    %ebp
08171fa7 +0x0e6c:  ret
08171fa8 +0x0e6d:  push   %ebp
08171fa9 +0x0e6e:  mov    %esp,%ebp
08171fab +0x0e70:  push   %esi
08171fac +0x0e71:  push   %ebx
08171fad +0x0e72:  sub    $0x40,%esp
08171fb0 +0x0e75:  mov    0x8(%ebp),%ebx
08171fb3 +0x0e78:  mov    0xc(%ebp),%eax
08171fb6 +0x0e7b:  add    $0xd,%eax
08171fb9 +0x0e7e:  mov    %eax,(%esp)
08171fbc +0x0e81:  call   08171b8a <+0xa4f>
08171fc1 +0x0e86:  mov    0x10(%ebp),%edx
08171fc4 +0x0e89:  mov    %edx,0x4(%esp)
08171fc8 +0x0e8d:  mov    %eax,(%esp)
08171fcb +0x0e90:  call   08171260 <+0x125>
08171fd0 +0x0e95:  mov    %eax,-0xc(%ebp)
08171fd3 +0x0e98:  mov    0xc(%ebp),%eax
08171fd6 +0x0e9b:  mov    0x10(%ebp),%edx
08171fd9 +0x0e9e:  mov    %edx,0x8(%esp)
08171fdd +0x0ea2:  mov    -0xc(%ebp),%edx
08171fe0 +0x0ea5:  mov    %edx,0x4(%esp)
08171fe4 +0x0ea9:  mov    %eax,(%esp)
08171fe7 +0x0eac:  call   0817230c <+0x11d1>
08171fec +0x0eb1:  mov    %eax,-0x24(%ebp)
08171fef +0x0eb4:  mov    -0x24(%ebp),%eax
08171ff2 +0x0eb7:  test   %eax,%eax
08171ff4 +0x0eb9:  je     08172027 <+0xeec>
08171ff6 +0x0ebb:  movb   $0x0,-0x1d(%ebp)
08171ffa +0x0ebf:  lea    -0x24(%ebp),%eax
08171ffd +0x0ec2:  mov    %eax,0x4(%esp)
08172001 +0x0ec6:  lea    -0x1c(%ebp),%eax
08172004 +0x0ec9:  mov    %eax,(%esp)
08172007 +0x0ecc:  call   0817237e <+0x1243>
0817200c +0x0ed1:  lea    -0x1d(%ebp),%eax
0817200f +0x0ed4:  mov    %eax,0x8(%esp)
08172013 +0x0ed8:  lea    -0x1c(%ebp),%eax
08172016 +0x0edb:  mov    %eax,0x4(%esp)
0817201a +0x0edf:  mov    %ebx,(%esp)
0817201d +0x0ee2:  call   0817239c <+0x1261>
08172022 +0x0ee7:  jmp    081720ee <+0xfb3>
08172027 +0x0eec:  mov    0xc(%ebp),%eax
0817202a +0x0eef:  mov    %eax,(%esp)
0817202d +0x0ef2:  call   0817213c <+0x1001>
08172032 +0x0ef7:  mov    %eax,0x4(%esp)
08172036 +0x0efb:  lea    -0x30(%ebp),%eax
08172039 +0x0efe:  mov    %eax,(%esp)
0817203c +0x0f01:  call   081723ca <+0x128f>
08172041 +0x0f06:  lea    -0x30(%ebp),%eax
08172044 +0x0f09:  mov    %eax,(%esp)
08172047 +0x0f0c:  call   0817246c <+0x1331>
0817204c +0x0f11:  mov    0x14(%ebp),%eax
0817204f +0x0f14:  mov    %eax,(%esp)
08172052 +0x0f17:  call   08171c8a <+0xb4f>
08172057 +0x0f1c:  mov    %eax,0x4(%esp)
0817205b +0x0f20:  lea    -0x30(%ebp),%eax
0817205e +0x0f23:  mov    %eax,(%esp)
08172061 +0x0f26:  call   0817253a <+0x13ff>
08172066 +0x0f2b:  mov    0xc(%ebp),%eax
08172069 +0x0f2e:  mov    0x8(%eax),%eax
0817206c +0x0f31:  lea    0x1(%eax),%edx
0817206f +0x0f34:  mov    0xc(%ebp),%eax
08172072 +0x0f37:  mov    %edx,0x4(%esp)
08172076 +0x0f3b:  mov    %eax,(%esp)
08172079 +0x0f3e:  call   08172576 <+0x143b>
0817207e +0x0f43:  movb   $0x1,-0x15(%ebp)
08172082 +0x0f47:  mov    -0xc(%ebp),%eax
08172085 +0x0f4a:  mov    %eax,0x8(%esp)
08172089 +0x0f4e:  lea    -0x30(%ebp),%eax
0817208c +0x0f51:  mov    %eax,0x4(%esp)
08172090 +0x0f55:  mov    0xc(%ebp),%eax
08172093 +0x0f58:  mov    %eax,(%esp)
08172096 +0x0f5b:  call   0817264c <+0x1511>
0817209b +0x0f60:  mov    %eax,-0x10(%ebp)
0817209e +0x0f63:  lea    -0x10(%ebp),%eax
081720a1 +0x0f66:  mov    %eax,0x4(%esp)
081720a5 +0x0f6a:  lea    -0x14(%ebp),%eax
081720a8 +0x0f6d:  mov    %eax,(%esp)
081720ab +0x0f70:  call   0817237e <+0x1243>
081720b0 +0x0f75:  lea    -0x15(%ebp),%eax
081720b3 +0x0f78:  mov    %eax,0x8(%esp)
081720b7 +0x0f7c:  lea    -0x14(%ebp),%eax
081720ba +0x0f7f:  mov    %eax,0x4(%esp)
081720be +0x0f83:  mov    %ebx,(%esp)
081720c1 +0x0f86:  call   0817239c <+0x1261>
081720c6 +0x0f8b:  jmp    081720e3 <+0xfa8>
081720c8 +0x0f8d:  mov    %edx,%ebx
081720ca +0x0f8f:  mov    %eax,%esi
081720cc +0x0f91:  lea    -0x30(%ebp),%eax
081720cf +0x0f94:  mov    %eax,(%esp)
081720d2 +0x0f97:  call   081723f0 <+0x12b5>
081720d7 +0x0f9c:  mov    %esi,%eax
081720d9 +0x0f9e:  mov    %ebx,%edx
081720db +0x0fa0:  mov    %eax,(%esp)
081720de +0x0fa3:  call   08ae3750 <_Unwind_Resume>
081720e3 +0x0fa8:  lea    -0x30(%ebp),%eax
081720e6 +0x0fab:  mov    %eax,(%esp)
081720e9 +0x0fae:  call   081723f0 <+0x12b5>
081720ee +0x0fb3:  mov    %ebx,%eax
081720f0 +0x0fb5:  add    $0x40,%esp
081720f3 +0x0fb8:  pop    %ebx
081720f4 +0x0fb9:  pop    %esi
081720f5 +0x0fba:  pop    %ebp
081720f6 +0x0fbb:  ret    $0x4
081720f9 +0x0fbe:  push   %ebp
081720fa +0x0fbf:  mov    %esp,%ebp
081720fc +0x0fc1:  mov    0x8(%ebp),%eax
081720ff +0x0fc4:  pop    %ebp
08172100 +0x0fc5:  ret
08172101 +0x0fc6:  nop
08172102 +0x0fc7:  push   %ebp
08172103 +0x0fc8:  mov    %esp,%ebp
08172105 +0x0fca:  sub    $0x18,%esp
08172108 +0x0fcd:  mov    0x8(%ebp),%eax
0817210b +0x0fd0:  mov    %eax,(%esp)
0817210e +0x0fd3:  call   0817172a <+0x5ef>
08172113 +0x0fd8:  mov    0xc(%ebp),%eax
08172116 +0x0fdb:  mov    (%eax),%edx
08172118 +0x0fdd:  mov    0x8(%ebp),%eax
0817211b +0x0fe0:  mov    %edx,(%eax)
0817211d +0x0fe2:  leave
0817211e +0x0fe3:  ret
0817211f +0x0fe4:  nop
08172120 +0x0fe5:  push   %ebp
08172121 +0x0fe6:  mov    %esp,%ebp
08172123 +0x0fe8:  mov    0x8(%ebp),%eax
08172126 +0x0feb:  pop    %ebp
08172127 +0x0fec:  ret
08172128 +0x0fed:  push   %ebp
08172129 +0x0fee:  mov    %esp,%ebp
0817212b +0x0ff0:  sub    $0x18,%esp
0817212e +0x0ff3:  mov    0x8(%ebp),%eax
08172131 +0x0ff6:  mov    %eax,(%esp)
08172134 +0x0ff9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08172139 +0x0ffe:  leave
0817213a +0x0fff:  ret
0817213b +0x1000:  nop
0817213c +0x1001:  push   %ebp
0817213d +0x1002:  mov    %esp,%ebp
0817213f +0x1004:  sub    $0x18,%esp
08172142 +0x1007:  mov    0x8(%ebp),%eax
08172145 +0x100a:  add    $0xc,%eax
08172148 +0x100d:  mov    %eax,(%esp)
0817214b +0x1010:  call   08172766 <+0x162b>
08172150 +0x1015:  leave
08172151 +0x1016:  ret
08172152 +0x1017:  push   %ebp
08172153 +0x1018:  mov    %esp,%ebp
08172155 +0x101a:  sub    $0x28,%esp
08172158 +0x101d:  mov    0x8(%ebp),%eax
0817215b +0x1020:  mov    %eax,0x4(%esp)
0817215f +0x1024:  lea    -0xc(%ebp),%eax
08172162 +0x1027:  mov    %eax,(%esp)
08172165 +0x102a:  call   0817277a <+0x163f>
0817216a +0x102f:  lea    -0xc(%ebp),%eax
0817216d +0x1032:  mov    %eax,(%esp)
08172170 +0x1035:  call   08172788 <+0x164d>
08172175 +0x103a:  movl   $0x0,0x4(%esp)
0817217d +0x1042:  mov    %eax,(%esp)
08172180 +0x1045:  call   08172792 <+0x1657>
08172185 +0x104a:  leave
08172186 +0x104b:  ret
08172187 +0x104c:  push   %ebp
08172188 +0x104d:  mov    %esp,%ebp
0817218a +0x104f:  sub    $0x18,%esp
0817218d +0x1052:  mov    0x8(%ebp),%eax
08172190 +0x1055:  mov    0xc(%ebp),%edx
08172193 +0x1058:  mov    %edx,0x4(%esp)
08172197 +0x105c:  mov    %eax,(%esp)
0817219a +0x105f:  call   081727a0 <+0x1665>
0817219f +0x1064:  leave
081721a0 +0x1065:  ret
081721a1 +0x1066:  push   %ebp
081721a2 +0x1067:  mov    %esp,%ebp
081721a4 +0x1069:  sub    $0x18,%esp
081721a7 +0x106c:  mov    0x8(%ebp),%eax
081721aa +0x106f:  mov    0x10(%ebp),%edx
081721ad +0x1072:  mov    %edx,0x8(%esp)
081721b1 +0x1076:  mov    0xc(%ebp),%edx
081721b4 +0x1079:  mov    %edx,0x4(%esp)
081721b8 +0x107d:  mov    %eax,(%esp)
081721bb +0x1080:  call   081727b4 <+0x1679>
081721c0 +0x1085:  leave
081721c1 +0x1086:  ret
081721c2 +0x1087:  push   %ebp
081721c3 +0x1088:  mov    %esp,%ebp
081721c5 +0x108a:  sub    $0x28,%esp
081721c8 +0x108d:  mov    0xc(%ebp),%eax
081721cb +0x1090:  mov    %eax,0x4(%esp)
081721cf +0x1094:  lea    -0x9(%ebp),%eax
081721d2 +0x1097:  mov    %eax,(%esp)
081721d5 +0x109a:  call   081727c8 <+0x168d>
081721da +0x109f:  mov    0x8(%ebp),%eax
081721dd +0x10a2:  lea    -0x9(%ebp),%edx
081721e0 +0x10a5:  mov    %edx,0x4(%esp)
081721e4 +0x10a9:  mov    %eax,(%esp)
081721e7 +0x10ac:  call   081727dc <+0x16a1>
081721ec +0x10b1:  lea    -0x9(%ebp),%eax
081721ef +0x10b4:  mov    %eax,(%esp)
081721f2 +0x10b7:  call   08171a46 <+0x90b>
081721f7 +0x10bc:  mov    0x8(%ebp),%eax
081721fa +0x10bf:  mov    0x10(%ebp),%edx
081721fd +0x10c2:  mov    %edx,0x4(%esp)
08172201 +0x10c6:  mov    %eax,(%esp)
08172204 +0x10c9:  call   081727f6 <+0x16bb>
08172209 +0x10ce:  leave
0817220a +0x10cf:  ret
0817220b +0x10d0:  nop
0817220c +0x10d1:  push   %ebp
0817220d +0x10d2:  mov    %esp,%ebp
0817220f +0x10d4:  push   %edi
08172210 +0x10d5:  push   %esi
08172211 +0x10d6:  push   %ebx
08172212 +0x10d7:  sub    $0x2c,%esp
08172215 +0x10da:  mov    0xc(%ebp),%eax
08172218 +0x10dd:  mov    %al,-0x1c(%ebp)
0817221b +0x10e0:  movzbl -0x1c(%ebp),%eax
0817221f +0x10e4:  add    0x8(%ebp),%eax
08172222 +0x10e7:  lea    0x1(%eax),%esi
08172225 +0x10ea:  mov    %esi,0x4(%esp)
08172229 +0x10ee:  movl   $0x1,(%esp)
08172230 +0x10f5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08172235 +0x10fa:  mov    %eax,%ebx
08172237 +0x10fc:  mov    %ebx,%eax
08172239 +0x10fe:  test   %eax,%eax
0817223b +0x1100:  je     08172275 <+0x113a>
0817223d +0x1102:  mov    %ebx,%eax
0817223f +0x1104:  mov    0x14(%ebp),%edx
08172242 +0x1107:  mov    %edx,0x8(%esp)
08172246 +0x110b:  mov    0x10(%ebp),%edx
08172249 +0x110e:  mov    %edx,0x4(%esp)
0817224d +0x1112:  mov    %eax,(%esp)
08172250 +0x1115:  call   08172810 <+0x16d5>
08172255 +0x111a:  jmp    08172275 <+0x113a>
08172257 +0x111c:  mov    %edx,%edi
08172259 +0x111e:  mov    %eax,-0x20(%ebp)
0817225c +0x1121:  mov    %esi,0x4(%esp)
08172260 +0x1125:  mov    %ebx,(%esp)
08172263 +0x1128:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08172268 +0x112d:  mov    -0x20(%ebp),%eax
0817226b +0x1130:  mov    %edi,%edx
0817226d +0x1132:  mov    %eax,(%esp)
08172270 +0x1135:  call   08ae3750 <_Unwind_Resume>
08172275 +0x113a:  add    $0x2c,%esp
08172278 +0x113d:  pop    %ebx
08172279 +0x113e:  pop    %esi
0817227a +0x113f:  pop    %edi
0817227b +0x1140:  pop    %ebp
0817227c +0x1141:  ret
0817227d +0x1142:  nop
0817227e +0x1143:  push   %ebp
0817227f +0x1144:  mov    %esp,%ebp
08172281 +0x1146:  sub    $0x18,%esp
08172284 +0x1149:  mov    0x8(%ebp),%eax
08172287 +0x114c:  mov    %eax,(%esp)
0817228a +0x114f:  call   0817283c <+0x1701>
0817228f +0x1154:  leave
08172290 +0x1155:  ret
08172291 +0x1156:  nop
08172292 +0x1157:  push   %ebp
08172293 +0x1158:  mov    %esp,%ebp
08172295 +0x115a:  mov    0x8(%ebp),%eax
08172298 +0x115d:  mov    0xc(%ebp),%edx
0817229b +0x1160:  mov    %edx,(%eax)
0817229d +0x1162:  pop    %ebp
0817229e +0x1163:  ret
0817229f +0x1164:  nop
081722a0 +0x1165:  push   %ebp
081722a1 +0x1166:  mov    %esp,%ebp
081722a3 +0x1168:  mov    0x8(%ebp),%eax
081722a6 +0x116b:  mov    (%eax),%eax
081722a8 +0x116d:  pop    %ebp
081722a9 +0x116e:  ret
081722aa +0x116f:  push   %ebp
081722ab +0x1170:  mov    %esp,%ebp
081722ad +0x1172:  mov    0x8(%ebp),%eax
081722b0 +0x1175:  pop    %ebp
081722b1 +0x1176:  ret
081722b2 +0x1177:  push   %ebp
081722b3 +0x1178:  mov    %esp,%ebp
081722b5 +0x117a:  pop    %ebp
081722b6 +0x117b:  ret
081722b7 +0x117c:  nop
081722b8 +0x117d:  push   %ebp
081722b9 +0x117e:  mov    %esp,%ebp
081722bb +0x1180:  sub    $0x18,%esp
081722be +0x1183:  mov    0xc(%ebp),%eax
081722c1 +0x1186:  mov    %eax,(%esp)
081722c4 +0x1189:  call   081722b2 <+0x1177>
081722c9 +0x118e:  leave
081722ca +0x118f:  ret
081722cb +0x1190:  nop
081722cc +0x1191:  push   %ebp
081722cd +0x1192:  mov    %esp,%ebp
081722cf +0x1194:  sub    $0x18,%esp
081722d2 +0x1197:  mov    0xc(%ebp),%eax
081722d5 +0x119a:  mov    %eax,(%esp)
081722d8 +0x119d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081722dd +0x11a2:  leave
081722de +0x11a3:  ret
081722df +0x11a4:  nop
081722e0 +0x11a5:  push   %ebp
081722e1 +0x11a6:  mov    %esp,%ebp
081722e3 +0x11a8:  mov    0x8(%ebp),%eax
081722e6 +0x11ab:  pop    %ebp
081722e7 +0x11ac:  ret
081722e8 +0x11ad:  push   %ebp
081722e9 +0x11ae:  mov    %esp,%ebp
081722eb +0x11b0:  mov    0x8(%ebp),%eax
081722ee +0x11b3:  pop    %ebp
081722ef +0x11b4:  ret
081722f0 +0x11b5:  push   %ebp
081722f1 +0x11b6:  mov    %esp,%ebp
081722f3 +0x11b8:  sub    $0x18,%esp
081722f6 +0x11bb:  mov    0xc(%ebp),%eax
081722f9 +0x11be:  mov    %eax,0x4(%esp)
081722fd +0x11c2:  mov    0x8(%ebp),%eax
08172300 +0x11c5:  mov    %eax,(%esp)
08172303 +0x11c8:  call   08171dbc <+0xc81>
08172308 +0x11cd:  mov    (%eax),%eax
0817230a +0x11cf:  leave
0817230b +0x11d0:  ret
0817230c +0x11d1:  push   %ebp
0817230d +0x11d2:  mov    %esp,%ebp
0817230f +0x11d4:  sub    $0x18,%esp
08172312 +0x11d7:  mov    0x8(%ebp),%eax
08172315 +0x11da:  mov    0x8(%eax),%eax
08172318 +0x11dd:  test   %eax,%eax
0817231a +0x11df:  jne    08172323 <+0x11e8>
0817231c +0x11e1:  mov    $0x0,%eax
08172321 +0x11e6:  jmp    0817234e <+0x1213>
08172323 +0x11e8:  mov    0x8(%ebp),%eax
08172326 +0x11eb:  add    $0xd,%eax
08172329 +0x11ee:  mov    %eax,(%esp)
0817232c +0x11f1:  call   08171ba6 <+0xa6b>
08172331 +0x11f6:  mov    0x8(%ebp),%edx
08172334 +0x11f9:  mov    %eax,0xc(%esp)
08172338 +0x11fd:  mov    0x10(%ebp),%eax
0817233b +0x1200:  mov    %eax,0x8(%esp)
0817233f +0x1204:  mov    0xc(%ebp),%eax
08172342 +0x1207:  mov    %eax,0x4(%esp)
08172346 +0x120b:  mov    %edx,(%esp)
08172349 +0x120e:  call   08171bc2 <+0xa87>
0817234e +0x1213:  leave
0817234f +0x1214:  ret
08172350 +0x1215:  push   %ebp
08172351 +0x1216:  mov    %esp,%ebp
08172353 +0x1218:  pop    %ebp
08172354 +0x1219:  ret
08172355 +0x121a:  nop
08172356 +0x121b:  push   %ebp
08172357 +0x121c:  mov    %esp,%ebp
08172359 +0x121e:  sub    $0x18,%esp
0817235c +0x1221:  mov    0x8(%ebp),%eax
0817235f +0x1224:  mov    %eax,(%esp)
08172362 +0x1227:  call   08172350 <+0x1215>
08172367 +0x122c:  leave
08172368 +0x122d:  ret
08172369 +0x122e:  nop
0817236a +0x122f:  push   %ebp
0817236b +0x1230:  mov    %esp,%ebp
0817236d +0x1232:  sub    $0x18,%esp
08172370 +0x1235:  mov    0x8(%ebp),%eax
08172373 +0x1238:  mov    %eax,(%esp)
08172376 +0x123b:  call   08172356 <+0x121b>
0817237b +0x1240:  leave
0817237c +0x1241:  ret
0817237d +0x1242:  nop
0817237e +0x1243:  push   %ebp
0817237f +0x1244:  mov    %esp,%ebp
08172381 +0x1246:  sub    $0x18,%esp
08172384 +0x1249:  mov    0x8(%ebp),%eax
08172387 +0x124c:  mov    %eax,(%esp)
0817238a +0x124f:  call   0817236a <+0x122f>
0817238f +0x1254:  mov    0xc(%ebp),%eax
08172392 +0x1257:  mov    (%eax),%edx
08172394 +0x1259:  mov    0x8(%ebp),%eax
08172397 +0x125c:  mov    %edx,(%eax)
08172399 +0x125e:  leave
0817239a +0x125f:  ret
0817239b +0x1260:  nop
0817239c +0x1261:  push   %ebp
0817239d +0x1262:  mov    %esp,%ebp
0817239f +0x1264:  sub    $0x18,%esp
081723a2 +0x1267:  mov    0xc(%ebp),%eax
081723a5 +0x126a:  mov    %eax,(%esp)
081723a8 +0x126d:  call   08172844 <+0x1709>
081723ad +0x1272:  mov    0x8(%ebp),%edx
081723b0 +0x1275:  mov    (%eax),%eax
081723b2 +0x1277:  mov    %eax,(%edx)
081723b4 +0x1279:  mov    0x10(%ebp),%eax
081723b7 +0x127c:  mov    %eax,(%esp)
081723ba +0x127f:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081723bf +0x1284:  movzbl (%eax),%edx
081723c2 +0x1287:  mov    0x8(%ebp),%eax
081723c5 +0x128a:  mov    %dl,0x4(%eax)
081723c8 +0x128d:  leave
081723c9 +0x128e:  ret
081723ca +0x128f:  push   %ebp
081723cb +0x1290:  mov    %esp,%ebp
081723cd +0x1292:  mov    0x8(%ebp),%eax
081723d0 +0x1295:  mov    0xc(%ebp),%edx
081723d3 +0x1298:  mov    %edx,(%eax)
081723d5 +0x129a:  mov    0x8(%ebp),%eax
081723d8 +0x129d:  movl   $0x0,0x4(%eax)
081723df +0x12a4:  mov    0x8(%ebp),%eax
081723e2 +0x12a7:  movb   $0x0,0x8(%eax)
081723e6 +0x12ab:  mov    0x8(%ebp),%eax
081723e9 +0x12ae:  movb   $0x0,0x9(%eax)
081723ed +0x12b2:  pop    %ebp
081723ee +0x12b3:  ret
081723ef +0x12b4:  nop
081723f0 +0x12b5:  push   %ebp
081723f1 +0x12b6:  mov    %esp,%ebp
081723f3 +0x12b8:  sub    $0x18,%esp
081723f6 +0x12bb:  mov    0x8(%ebp),%eax
081723f9 +0x12be:  mov    0x4(%eax),%eax
081723fc +0x12c1:  test   %eax,%eax
081723fe +0x12c3:  je     0817246a <+0x132f>
08172400 +0x12c5:  mov    0x8(%ebp),%eax
08172403 +0x12c8:  movzbl 0x9(%eax),%eax
08172407 +0x12cc:  test   %al,%al
08172409 +0x12ce:  je     08172421 <+0x12e6>
0817240b +0x12d0:  mov    0x8(%ebp),%eax
0817240e +0x12d3:  mov    0x4(%eax),%eax
08172411 +0x12d6:  mov    %eax,(%esp)
08172414 +0x12d9:  call   08172120 <+0xfe5>
08172419 +0x12de:  mov    %eax,(%esp)
0817241c +0x12e1:  call   08172128 <+0xfed>
08172421 +0x12e6:  mov    0x8(%ebp),%eax
08172424 +0x12e9:  movzbl 0x8(%eax),%eax
08172428 +0x12ed:  test   %al,%al
0817242a +0x12ef:  je     0817244b <+0x1310>
0817242c +0x12f1:  mov    0x8(%ebp),%eax
0817242f +0x12f4:  mov    0x4(%eax),%eax
08172432 +0x12f7:  mov    %eax,(%esp)
08172435 +0x12fa:  call   08172152 <+0x1017>
0817243a +0x12ff:  mov    0x8(%ebp),%edx
0817243d +0x1302:  mov    (%edx),%edx
0817243f +0x1304:  mov    %eax,0x4(%esp)
08172443 +0x1308:  mov    %edx,(%esp)
08172446 +0x130b:  call   08172187 <+0x104c>
0817244b +0x1310:  mov    0x8(%ebp),%eax
0817244e +0x1313:  mov    0x4(%eax),%edx
08172451 +0x1316:  mov    0x8(%ebp),%eax
08172454 +0x1319:  mov    (%eax),%eax
08172456 +0x131b:  movl   $0x1,0x8(%esp)
0817245e +0x1323:  mov    %edx,0x4(%esp)
08172462 +0x1327:  mov    %eax,(%esp)
08172465 +0x132a:  call   081721a1 <+0x1066>
0817246a +0x132f:  leave
0817246b +0x1330:  ret
0817246c +0x1331:  push   %ebp
0817246d +0x1332:  mov    %esp,%ebp
0817246f +0x1334:  sub    $0x28,%esp
08172472 +0x1337:  mov    0x8(%ebp),%eax
08172475 +0x133a:  mov    0x4(%eax),%eax
08172478 +0x133d:  test   %eax,%eax
0817247a +0x133f:  jne    0817250f <+0x13d4>
08172480 +0x1345:  mov    0x8(%ebp),%eax
08172483 +0x1348:  movb   $0x0,0x8(%eax)
08172487 +0x134c:  mov    0x8(%ebp),%eax
0817248a +0x134f:  movb   $0x0,0x9(%eax)
0817248e +0x1353:  mov    0x8(%ebp),%eax
08172491 +0x1356:  mov    (%eax),%eax
08172493 +0x1358:  movl   $0x1,0x4(%esp)
0817249b +0x1360:  mov    %eax,(%esp)
0817249e +0x1363:  call   0817284c <+0x1711>
081724a3 +0x1368:  mov    0x8(%ebp),%edx
081724a6 +0x136b:  mov    %eax,0x4(%edx)
081724a9 +0x136e:  lea    -0x14(%ebp),%eax
081724ac +0x1371:  mov    %eax,(%esp)
081724af +0x1374:  call   08172874 <+0x1739>
081724b4 +0x1379:  mov    0x8(%ebp),%eax
081724b7 +0x137c:  mov    0x4(%eax),%eax
081724ba +0x137f:  mov    %eax,(%esp)
081724bd +0x1382:  call   08172152 <+0x1017>
081724c2 +0x1387:  mov    0x8(%ebp),%edx
081724c5 +0x138a:  mov    (%edx),%edx
081724c7 +0x138c:  lea    -0x14(%ebp),%ecx
081724ca +0x138f:  mov    %ecx,0x8(%esp)
081724ce +0x1393:  mov    %eax,0x4(%esp)
081724d2 +0x1397:  mov    %edx,(%esp)
081724d5 +0x139a:  call   0817289f <+0x1764>
081724da +0x139f:  mov    0x8(%ebp),%eax
081724dd +0x13a2:  mov    0x4(%eax),%eax
081724e0 +0x13a5:  test   %eax,%eax
081724e2 +0x13a7:  je     081724ef <+0x13b4>
081724e4 +0x13a9:  mov    0x8(%ebp),%eax
081724e7 +0x13ac:  mov    0x4(%eax),%eax
081724ea +0x13af:  add    $0x4,%eax
081724ed +0x13b2:  jmp    081724f4 <+0x13b9>
081724ef +0x13b4:  mov    $0x0,%eax
081724f4 +0x13b9:  mov    0x8(%ebp),%edx
081724f7 +0x13bc:  mov    0x4(%edx),%edx
081724fa +0x13bf:  mov    %eax,0x4(%esp)
081724fe +0x13c3:  mov    %edx,(%esp)
08172501 +0x13c6:  call   081728c0 <+0x1785>
08172506 +0x13cb:  mov    0x8(%ebp),%eax
08172509 +0x13ce:  movb   $0x1,0x8(%eax)
0817250d +0x13d2:  jmp    08172537 <+0x13fc>
0817250f +0x13d4:  mov    0x8(%ebp),%eax
08172512 +0x13d7:  movzbl 0x9(%eax),%eax
08172516 +0x13db:  test   %al,%al
08172518 +0x13dd:  je     08172537 <+0x13fc>
0817251a +0x13df:  mov    0x8(%ebp),%eax
0817251d +0x13e2:  mov    0x4(%eax),%eax
08172520 +0x13e5:  mov    %eax,(%esp)
08172523 +0x13e8:  call   08172120 <+0xfe5>
08172528 +0x13ed:  mov    %eax,(%esp)
0817252b +0x13f0:  call   08172128 <+0xfed>
08172530 +0x13f5:  mov    0x8(%ebp),%eax
08172533 +0x13f8:  movb   $0x0,0x9(%eax)
08172537 +0x13fc:  leave
08172538 +0x13fd:  ret
08172539 +0x13fe:  nop
0817253a +0x13ff:  push   %ebp
0817253b +0x1400:  mov    %esp,%ebp
0817253d +0x1402:  push   %ebx
0817253e +0x1403:  sub    $0x14,%esp
08172541 +0x1406:  mov    0xc(%ebp),%eax
08172544 +0x1409:  mov    %eax,(%esp)
08172547 +0x140c:  call   08171c8a <+0xb4f>
0817254c +0x1411:  mov    %eax,%ebx
0817254e +0x1413:  mov    0x8(%ebp),%eax
08172551 +0x1416:  mov    0x4(%eax),%eax
08172554 +0x1419:  mov    %eax,(%esp)
08172557 +0x141c:  call   08172120 <+0xfe5>
0817255c +0x1421:  mov    %ebx,0x4(%esp)
08172560 +0x1425:  mov    %eax,(%esp)
08172563 +0x1428:  call   081728c5 <+0x178a>
08172568 +0x142d:  mov    0x8(%ebp),%eax
0817256b +0x1430:  movb   $0x1,0x9(%eax)
0817256f +0x1434:  add    $0x14,%esp
08172572 +0x1437:  pop    %ebx
08172573 +0x1438:  pop    %ebp
08172574 +0x1439:  ret
08172575 +0x143a:  nop
08172576 +0x143b:  push   %ebp
08172577 +0x143c:  mov    %esp,%ebp
08172579 +0x143e:  sub    $0x28,%esp
0817257c +0x1441:  mov    0x8(%ebp),%eax
0817257f +0x1444:  mov    (%eax),%eax
08172581 +0x1446:  test   %eax,%eax
08172583 +0x1448:  jne    081725d5 <+0x149a>
08172585 +0x144a:  mov    0xc(%ebp),%eax
08172588 +0x144d:  mov    %eax,0x4(%esp)
0817258c +0x1451:  mov    0x8(%ebp),%eax
0817258f +0x1454:  mov    %eax,(%esp)
08172592 +0x1457:  call   0817292c <+0x17f1>
08172597 +0x145c:  mov    %eax,-0x14(%ebp)
0817259a +0x145f:  mov    0x8(%ebp),%eax
0817259d +0x1462:  lea    0x4(%eax),%edx
081725a0 +0x1465:  lea    -0x14(%ebp),%eax
081725a3 +0x1468:  mov    %eax,0x4(%esp)
081725a7 +0x146c:  mov    %edx,(%esp)
081725aa +0x146f:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081725af +0x1474:  mov    (%eax),%edx
081725b1 +0x1476:  mov    0x8(%ebp),%eax
081725b4 +0x1479:  mov    %edx,0x4(%eax)
081725b7 +0x147c:  mov    0x8(%ebp),%eax
081725ba +0x147f:  mov    %eax,(%esp)
081725bd +0x1482:  call   08172968 <+0x182d>
081725c2 +0x1487:  mov    0x8(%ebp),%eax
081725c5 +0x148a:  mov    %eax,(%esp)
081725c8 +0x148d:  call   081729f2 <+0x18b7>
081725cd +0x1492:  mov    0x8(%ebp),%edx
081725d0 +0x1495:  mov    %eax,0x14(%edx)
081725d3 +0x1498:  jmp    0817264a <+0x150f>
081725d5 +0x149a:  mov    0x8(%ebp),%eax
081725d8 +0x149d:  mov    0x14(%eax),%edx
081725db +0x14a0:  mov    0xc(%ebp),%eax
081725de +0x14a3:  cmp    %eax,%edx
081725e0 +0x14a5:  ja     0817264a <+0x150f>
081725e2 +0x14a7:  mov    0x8(%ebp),%eax
081725e5 +0x14aa:  mov    0x8(%eax),%edx
081725e8 +0x14ad:  mov    0x8(%ebp),%eax
081725eb +0x14b0:  mov    0x8(%eax),%eax
081725ee +0x14b3:  shr    %eax
081725f0 +0x14b5:  lea    (%edx,%eax,1),%eax
081725f3 +0x14b8:  mov    %eax,-0x10(%ebp)
081725f6 +0x14bb:  lea    -0x10(%ebp),%eax
081725f9 +0x14be:  mov    %eax,0x4(%esp)
081725fd +0x14c2:  lea    0xc(%ebp),%eax
08172600 +0x14c5:  mov    %eax,(%esp)
08172603 +0x14c8:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08172608 +0x14cd:  mov    (%eax),%eax
0817260a +0x14cf:  mov    %eax,0x4(%esp)
0817260e +0x14d3:  mov    0x8(%ebp),%eax
08172611 +0x14d6:  mov    %eax,(%esp)
08172614 +0x14d9:  call   0817292c <+0x17f1>
08172619 +0x14de:  mov    %eax,-0xc(%ebp)
0817261c +0x14e1:  mov    0x8(%ebp),%eax
0817261f +0x14e4:  mov    0x4(%eax),%eax
08172622 +0x14e7:  cmp    -0xc(%ebp),%eax
08172625 +0x14ea:  je     0817264a <+0x150f>
08172627 +0x14ec:  mov    0x8(%ebp),%eax
0817262a +0x14ef:  mov    -0xc(%ebp),%edx
0817262d +0x14f2:  mov    %edx,0x4(%esp)
08172631 +0x14f6:  mov    %eax,(%esp)
08172634 +0x14f9:  call   08172a26 <+0x18eb>
08172639 +0x14fe:  mov    0x8(%ebp),%eax
0817263c +0x1501:  mov    %eax,(%esp)
0817263f +0x1504:  call   081729f2 <+0x18b7>
08172644 +0x1509:  mov    0x8(%ebp),%edx
08172647 +0x150c:  mov    %eax,0x14(%edx)
0817264a +0x150f:  leave
0817264b +0x1510:  ret
0817264c +0x1511:  push   %ebp
0817264d +0x1512:  mov    %esp,%ebp
0817264f +0x1514:  sub    $0x28,%esp
08172652 +0x1517:  mov    0xc(%ebp),%eax
08172655 +0x151a:  mov    %eax,(%esp)
08172658 +0x151d:  call   08172b14 <+0x19d9>
0817265d +0x1522:  mov    %eax,-0x14(%ebp)
08172660 +0x1525:  mov    -0x14(%ebp),%eax
08172663 +0x1528:  mov    0x10(%ebp),%edx
08172666 +0x152b:  mov    %edx,0x8(%eax)
08172669 +0x152e:  mov    0x8(%ebp),%eax
0817266c +0x1531:  mov    0x4(%eax),%ecx
0817266f +0x1534:  mov    0x10(%ebp),%eax
08172672 +0x1537:  mov    $0x0,%edx
08172677 +0x153c:  div    %ecx
08172679 +0x153e:  mov    0x8(%ebp),%eax
0817267c +0x1541:  mov    %edx,0x4(%esp)
08172680 +0x1545:  mov    %eax,(%esp)
08172683 +0x1548:  call   08171dbc <+0xc81>
08172688 +0x154d:  mov    %eax,-0x10(%ebp)
0817268b +0x1550:  mov    -0x10(%ebp),%eax
0817268e +0x1553:  mov    (%eax),%eax
08172690 +0x1555:  test   %eax,%eax
08172692 +0x1557:  jne    0817272a <+0x15ef>
08172698 +0x155d:  mov    0x8(%ebp),%eax
0817269b +0x1560:  mov    %eax,(%esp)
0817269e +0x1563:  call   08171d20 <+0xbe5>
081726a3 +0x1568:  mov    %eax,-0xc(%ebp)
081726a6 +0x156b:  mov    -0xc(%ebp),%eax
081726a9 +0x156e:  mov    (%eax),%eax
081726ab +0x1570:  test   %eax,%eax
081726ad +0x1572:  je     081726fd <+0x15c2>
081726af +0x1574:  mov    -0xc(%ebp),%eax
081726b2 +0x1577:  mov    (%eax),%eax
081726b4 +0x1579:  test   %eax,%eax
081726b6 +0x157b:  je     081726c2 <+0x1587>
081726b8 +0x157d:  mov    -0xc(%ebp),%eax
081726bb +0x1580:  mov    (%eax),%eax
081726bd +0x1582:  sub    $0x4,%eax
081726c0 +0x1585:  jmp    081726c7 <+0x158c>
081726c2 +0x1587:  mov    $0x0,%eax
081726c7 +0x158c:  mov    0x8(%eax),%eax
081726ca +0x158f:  mov    0x8(%ebp),%edx
081726cd +0x1592:  mov    0x4(%edx),%ecx
081726d0 +0x1595:  mov    $0x0,%edx
081726d5 +0x159a:  div    %ecx
081726d7 +0x159c:  mov    0x8(%ebp),%eax
081726da +0x159f:  mov    %edx,0x4(%esp)
081726de +0x15a3:  mov    %eax,(%esp)
081726e1 +0x15a6:  call   08171dbc <+0xc81>
081726e6 +0x15ab:  mov    %eax,%edx
081726e8 +0x15ad:  cmpl   $0x0,-0x14(%ebp)
081726ec +0x15b1:  je     081726f6 <+0x15bb>
081726ee +0x15b3:  mov    -0x14(%ebp),%eax
081726f1 +0x15b6:  add    $0x4,%eax
081726f4 +0x15b9:  jmp    081726fb <+0x15c0>
081726f6 +0x15bb:  mov    $0x0,%eax
081726fb +0x15c0:  mov    %eax,(%edx)
081726fd +0x15c2:  mov    -0x10(%ebp),%eax
08172700 +0x15c5:  mov    -0xc(%ebp),%edx
08172703 +0x15c8:  mov    %edx,(%eax)
08172705 +0x15ca:  mov    -0xc(%ebp),%eax
08172708 +0x15cd:  mov    (%eax),%edx
0817270a +0x15cf:  mov    -0x14(%ebp),%eax
0817270d +0x15d2:  mov    %edx,0x4(%eax)
08172710 +0x15d5:  cmpl   $0x0,-0x14(%ebp)
08172714 +0x15d9:  je     0817271e <+0x15e3>
08172716 +0x15db:  mov    -0x14(%ebp),%eax
08172719 +0x15de:  add    $0x4,%eax
0817271c +0x15e1:  jmp    08172723 <+0x15e8>
0817271e +0x15e3:  mov    $0x0,%eax
08172723 +0x15e8:  mov    -0xc(%ebp),%edx
08172726 +0x15eb:  mov    %eax,(%edx)
08172728 +0x15ed:  jmp    08172751 <+0x1616>
0817272a +0x15ef:  mov    -0x10(%ebp),%eax
0817272d +0x15f2:  mov    (%eax),%eax
0817272f +0x15f4:  mov    (%eax),%edx
08172731 +0x15f6:  mov    -0x14(%ebp),%eax
08172734 +0x15f9:  mov    %edx,0x4(%eax)
08172737 +0x15fc:  mov    -0x10(%ebp),%eax
0817273a +0x15ff:  mov    (%eax),%edx
0817273c +0x1601:  cmpl   $0x0,-0x14(%ebp)
08172740 +0x1605:  je     0817274a <+0x160f>
08172742 +0x1607:  mov    -0x14(%ebp),%eax
08172745 +0x160a:  add    $0x4,%eax
08172748 +0x160d:  jmp    0817274f <+0x1614>
0817274a +0x160f:  mov    $0x0,%eax
0817274f +0x1614:  mov    %eax,(%edx)
08172751 +0x1616:  mov    0x8(%ebp),%eax
08172754 +0x1619:  mov    0x8(%eax),%eax
08172757 +0x161c:  lea    0x1(%eax),%edx
0817275a +0x161f:  mov    0x8(%ebp),%eax
0817275d +0x1622:  mov    %edx,0x8(%eax)
08172760 +0x1625:  mov    -0x14(%ebp),%eax
08172763 +0x1628:  leave
08172764 +0x1629:  ret
08172765 +0x162a:  nop
08172766 +0x162b:  push   %ebp
08172767 +0x162c:  mov    %esp,%ebp
08172769 +0x162e:  sub    $0x18,%esp
0817276c +0x1631:  mov    0x8(%ebp),%eax
0817276f +0x1634:  mov    %eax,(%esp)
08172772 +0x1637:  call   08172b32 <+0x19f7>
08172777 +0x163c:  leave
08172778 +0x163d:  ret
08172779 +0x163e:  nop
0817277a +0x163f:  push   %ebp
0817277b +0x1640:  mov    %esp,%ebp
0817277d +0x1642:  mov    0x8(%ebp),%eax
08172780 +0x1645:  mov    0xc(%ebp),%edx
08172783 +0x1648:  mov    %edx,(%eax)
08172785 +0x164a:  pop    %ebp
08172786 +0x164b:  ret
08172787 +0x164c:  nop
08172788 +0x164d:  push   %ebp
08172789 +0x164e:  mov    %esp,%ebp
0817278b +0x1650:  mov    0x8(%ebp),%eax
0817278e +0x1653:  mov    (%eax),%eax
08172790 +0x1655:  pop    %ebp
08172791 +0x1656:  ret
08172792 +0x1657:  push   %ebp
08172793 +0x1658:  mov    %esp,%ebp
08172795 +0x165a:  mov    0x8(%ebp),%eax
08172798 +0x165d:  pop    %ebp
08172799 +0x165e:  ret
0817279a +0x165f:  push   %ebp
0817279b +0x1660:  mov    %esp,%ebp
0817279d +0x1662:  pop    %ebp
0817279e +0x1663:  ret
0817279f +0x1664:  nop
081727a0 +0x1665:  push   %ebp
081727a1 +0x1666:  mov    %esp,%ebp
081727a3 +0x1668:  sub    $0x18,%esp
081727a6 +0x166b:  mov    0xc(%ebp),%eax
081727a9 +0x166e:  mov    %eax,(%esp)
081727ac +0x1671:  call   0817279a <+0x165f>
081727b1 +0x1676:  leave
081727b2 +0x1677:  ret
081727b3 +0x1678:  nop
081727b4 +0x1679:  push   %ebp
081727b5 +0x167a:  mov    %esp,%ebp
081727b7 +0x167c:  sub    $0x18,%esp
081727ba +0x167f:  mov    0xc(%ebp),%eax
081727bd +0x1682:  mov    %eax,(%esp)
081727c0 +0x1685:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081727c5 +0x168a:  leave
081727c6 +0x168b:  ret
081727c7 +0x168c:  nop
081727c8 +0x168d:  push   %ebp
081727c9 +0x168e:  mov    %esp,%ebp
081727cb +0x1690:  sub    $0x18,%esp
081727ce +0x1693:  mov    0x8(%ebp),%eax
081727d1 +0x1696:  mov    %eax,(%esp)
081727d4 +0x1699:  call   08172b3a <+0x19ff>
081727d9 +0x169e:  leave
081727da +0x169f:  ret
081727db +0x16a0:  nop
081727dc +0x16a1:  push   %ebp
081727dd +0x16a2:  mov    %esp,%ebp
081727df +0x16a4:  sub    $0x18,%esp
081727e2 +0x16a7:  mov    0x8(%ebp),%eax
081727e5 +0x16aa:  mov    0xc(%ebp),%edx
081727e8 +0x16ad:  mov    %edx,0x4(%esp)
081727ec +0x16b1:  mov    %eax,(%esp)
081727ef +0x16b4:  call   08172b40 <+0x1a05>
081727f4 +0x16b9:  leave
081727f5 +0x16ba:  ret
081727f6 +0x16bb:  push   %ebp
081727f7 +0x16bc:  mov    %esp,%ebp
081727f9 +0x16be:  sub    $0x18,%esp
081727fc +0x16c1:  mov    0x8(%ebp),%eax
081727ff +0x16c4:  mov    0xc(%ebp),%edx
08172802 +0x16c7:  mov    %edx,0x4(%esp)
08172806 +0x16cb:  mov    %eax,(%esp)
08172809 +0x16ce:  call   08172b5a <+0x1a1f>
0817280e +0x16d3:  leave
0817280f +0x16d4:  ret
08172810 +0x16d5:  push   %ebp
08172811 +0x16d6:  mov    %esp,%ebp
08172813 +0x16d8:  sub    $0x18,%esp
08172816 +0x16db:  mov    0x8(%ebp),%eax
08172819 +0x16de:  mov    0xc(%ebp),%edx
0817281c +0x16e1:  mov    %edx,0x4(%esp)
08172820 +0x16e5:  mov    %eax,(%esp)
08172823 +0x16e8:  call   08172b74 <+0x1a39>
08172828 +0x16ed:  mov    0x8(%ebp),%eax
0817282b +0x16f0:  mov    0x10(%ebp),%edx
0817282e +0x16f3:  mov    %edx,0x4(%esp)
08172832 +0x16f7:  mov    %eax,(%esp)
08172835 +0x16fa:  call   08172b7a <+0x1a3f>
0817283a +0x16ff:  leave
0817283b +0x1700:  ret
0817283c +0x1701:  push   %ebp
0817283d +0x1702:  mov    %esp,%ebp
0817283f +0x1704:  mov    0x8(%ebp),%eax
08172842 +0x1707:  pop    %ebp
08172843 +0x1708:  ret
08172844 +0x1709:  push   %ebp
08172845 +0x170a:  mov    %esp,%ebp
08172847 +0x170c:  mov    0x8(%ebp),%eax
0817284a +0x170f:  pop    %ebp
0817284b +0x1710:  ret
0817284c +0x1711:  push   %ebp
0817284d +0x1712:  mov    %esp,%ebp
0817284f +0x1714:  sub    $0x18,%esp
08172852 +0x1717:  mov    0x8(%ebp),%eax
08172855 +0x171a:  movl   $0x0,0x8(%esp)
0817285d +0x1722:  mov    0xc(%ebp),%edx
08172860 +0x1725:  mov    %edx,0x4(%esp)
08172864 +0x1729:  mov    %eax,(%esp)
08172867 +0x172c:  call   08172b80 <+0x1a45>
0817286c +0x1731:  leave
0817286d +0x1732:  ret
0817286e +0x1733:  push   %ebp
0817286f +0x1734:  mov    %esp,%ebp
08172871 +0x1736:  pop    %ebp
08172872 +0x1737:  ret
08172873 +0x1738:  nop
08172874 +0x1739:  push   %ebp
08172875 +0x173a:  mov    %esp,%ebp
08172877 +0x173c:  sub    $0x18,%esp
0817287a +0x173f:  mov    0x8(%ebp),%eax
0817287d +0x1742:  mov    %eax,(%esp)
08172880 +0x1745:  call   0817286e <+0x1733>
08172885 +0x174a:  mov    0x8(%ebp),%eax
08172888 +0x174d:  add    $0x4,%eax
0817288b +0x1750:  mov    %eax,(%esp)
0817288e +0x1753:  call   081711c0 <+0x85>
08172893 +0x1758:  mov    0x8(%ebp),%eax
08172896 +0x175b:  movl   $0x0,0x8(%eax)
0817289d +0x1762:  leave
0817289e +0x1763:  ret
0817289f +0x1764:  push   %ebp
081728a0 +0x1765:  mov    %esp,%ebp
081728a2 +0x1767:  sub    $0x18,%esp
081728a5 +0x176a:  mov    0x8(%ebp),%eax
081728a8 +0x176d:  mov    0x10(%ebp),%edx
081728ab +0x1770:  mov    %edx,0x8(%esp)
081728af +0x1774:  mov    0xc(%ebp),%edx
081728b2 +0x1777:  mov    %edx,0x4(%esp)
081728b6 +0x177b:  mov    %eax,(%esp)
081728b9 +0x177e:  call   08172bbe <+0x1a83>
081728be +0x1783:  leave
081728bf +0x1784:  ret
081728c0 +0x1785:  push   %ebp
081728c1 +0x1786:  mov    %esp,%ebp
081728c3 +0x1788:  pop    %ebp
081728c4 +0x1789:  ret
081728c5 +0x178a:  push   %ebp
081728c6 +0x178b:  mov    %esp,%ebp
081728c8 +0x178d:  push   %edi
081728c9 +0x178e:  push   %esi
081728ca +0x178f:  push   %ebx
081728cb +0x1790:  sub    $0x2c,%esp
081728ce +0x1793:  mov    0xc(%ebp),%eax
081728d1 +0x1796:  mov    %eax,(%esp)
081728d4 +0x1799:  call   08171c8a <+0xb4f>
081728d9 +0x179e:  mov    %eax,%edi
081728db +0x17a0:  mov    0x8(%ebp),%esi
081728de +0x17a3:  mov    %esi,0x4(%esp)
081728e2 +0x17a7:  movl   $0x4,(%esp)
081728e9 +0x17ae:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081728ee +0x17b3:  mov    %eax,%ebx
081728f0 +0x17b5:  mov    %ebx,%eax
081728f2 +0x17b7:  test   %eax,%eax
081728f4 +0x17b9:  je     08172924 <+0x17e9>
081728f6 +0x17bb:  mov    %ebx,%eax
081728f8 +0x17bd:  mov    %edi,0x4(%esp)
081728fc +0x17c1:  mov    %eax,(%esp)
081728ff +0x17c4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08172904 +0x17c9:  jmp    08172924 <+0x17e9>
08172906 +0x17cb:  mov    %edx,%edi
08172908 +0x17cd:  mov    %eax,-0x1c(%ebp)
0817290b +0x17d0:  mov    %esi,0x4(%esp)
0817290f +0x17d4:  mov    %ebx,(%esp)
08172912 +0x17d7:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08172917 +0x17dc:  mov    -0x1c(%ebp),%eax
0817291a +0x17df:  mov    %edi,%edx
0817291c +0x17e1:  mov    %eax,(%esp)
0817291f +0x17e4:  call   08ae3750 <_Unwind_Resume>
08172924 +0x17e9:  add    $0x2c,%esp
08172927 +0x17ec:  pop    %ebx
08172928 +0x17ed:  pop    %esi
08172929 +0x17ee:  pop    %edi
0817292a +0x17ef:  pop    %ebp
0817292b +0x17f0:  ret
0817292c +0x17f1:  push   %ebp
0817292d +0x17f2:  mov    %esp,%ebp
0817292f +0x17f4:  sub    $0x28,%esp
08172932 +0x17f7:  mov    0xc(%ebp),%eax
08172935 +0x17fa:  mov    $0x0,%edx
0817293a +0x17ff:  mov    %eax,-0x10(%ebp)
0817293d +0x1802:  mov    %edx,-0xc(%ebp)
08172940 +0x1805:  fildll -0x10(%ebp)
08172943 +0x1808:  mov    0x8(%ebp),%eax
08172946 +0x180b:  flds   0x10(%eax)
08172949 +0x180e:  fdivrp %st,%st(1)
0817294b +0x1810:  fstpl  (%esp)
0817294e +0x1813:  call   0807db70 <_init+0x468>
08172953 +0x1818:  fstpl  (%esp)
08172956 +0x181b:  call   081711d6 <+0x9b>
0817295b +0x1820:  add    $0x1,%eax
0817295e +0x1823:  mov    %eax,(%esp)
08172961 +0x1826:  call   08171178 <+0x3d>
08172966 +0x182b:  leave
08172967 +0x182c:  ret
08172968 +0x182d:  push   %ebp
08172969 +0x182e:  mov    %esp,%ebp
0817296b +0x1830:  push   %esi
0817296c +0x1831:  push   %ebx
0817296d +0x1832:  sub    $0x30,%esp
08172970 +0x1835:  mov    0x8(%ebp),%eax
08172973 +0x1838:  mov    %eax,(%esp)
08172976 +0x183b:  call   08171e4e <+0xd13>
0817297b +0x1840:  mov    %eax,0x4(%esp)
0817297f +0x1844:  lea    -0x1c(%ebp),%eax
08172982 +0x1847:  mov    %eax,(%esp)
08172985 +0x184a:  call   08172bf2 <+0x1ab7>
0817298a +0x184f:  mov    0x8(%ebp),%eax
0817298d +0x1852:  mov    0x4(%eax),%eax
08172990 +0x1855:  lea    0x1(%eax),%ebx
08172993 +0x1858:  lea    -0xc(%ebp),%eax
08172996 +0x185b:  mov    %eax,(%esp)
08172999 +0x185e:  call   081711c0 <+0x85>
0817299e +0x1863:  mov    %ebx,0x8(%esp)
081729a2 +0x1867:  lea    -0xc(%ebp),%eax
081729a5 +0x186a:  mov    %eax,0x4(%esp)
081729a9 +0x186e:  lea    -0x1c(%ebp),%eax
081729ac +0x1871:  mov    %eax,(%esp)
081729af +0x1874:  call   08172ca0 <+0x1b65>
081729b4 +0x1879:  nop
081729b5 +0x187a:  lea    -0x1c(%ebp),%eax
081729b8 +0x187d:  mov    %eax,(%esp)
081729bb +0x1880:  call   08172d36 <+0x1bfb>
081729c0 +0x1885:  mov    0x8(%ebp),%edx
081729c3 +0x1888:  mov    %eax,(%edx)
081729c5 +0x188a:  lea    -0x1c(%ebp),%eax
081729c8 +0x188d:  mov    %eax,(%esp)
081729cb +0x1890:  call   08172c32 <+0x1af7>
081729d0 +0x1895:  add    $0x30,%esp
081729d3 +0x1898:  pop    %ebx
081729d4 +0x1899:  pop    %esi
081729d5 +0x189a:  pop    %ebp
081729d6 +0x189b:  ret
081729d7 +0x189c:  mov    %edx,%ebx
081729d9 +0x189e:  mov    %eax,%esi
081729db +0x18a0:  lea    -0x1c(%ebp),%eax
081729de +0x18a3:  mov    %eax,(%esp)
081729e1 +0x18a6:  call   08172c32 <+0x1af7>
081729e6 +0x18ab:  mov    %esi,%eax
081729e8 +0x18ad:  mov    %ebx,%edx
081729ea +0x18af:  mov    %eax,(%esp)
081729ed +0x18b2:  call   08ae3750 <_Unwind_Resume>
081729f2 +0x18b7:  push   %ebp
081729f3 +0x18b8:  mov    %esp,%ebp
081729f5 +0x18ba:  sub    $0x28,%esp
081729f8 +0x18bd:  mov    0x8(%ebp),%eax
081729fb +0x18c0:  flds   0x10(%eax)
081729fe +0x18c3:  mov    0x8(%ebp),%eax
08172a01 +0x18c6:  mov    0x4(%eax),%eax
08172a04 +0x18c9:  mov    $0x0,%edx
08172a09 +0x18ce:  mov    %eax,-0x10(%ebp)
08172a0c +0x18d1:  mov    %edx,-0xc(%ebp)
08172a0f +0x18d4:  fildll -0x10(%ebp)
08172a12 +0x18d7:  fmulp  %st,%st(1)
08172a14 +0x18d9:  fstpl  (%esp)
08172a17 +0x18dc:  call   0807e3c0 <_init+0xcb8>
08172a1c +0x18e1:  fstpl  (%esp)
08172a1f +0x18e4:  call   081711d6 <+0x9b>
08172a24 +0x18e9:  leave
08172a25 +0x18ea:  ret
08172a26 +0x18eb:  push   %ebp
08172a27 +0x18ec:  mov    %esp,%ebp
08172a29 +0x18ee:  push   %esi
08172a2a +0x18ef:  push   %ebx
08172a2b +0x18f0:  sub    $0x30,%esp
08172a2e +0x18f3:  mov    0x8(%ebp),%eax
08172a31 +0x18f6:  mov    %eax,(%esp)
08172a34 +0x18f9:  call   0817213c <+0x1001>
08172a39 +0x18fe:  mov    0xc(%ebp),%edx
08172a3c +0x1901:  mov    %edx,0x8(%esp)
08172a40 +0x1905:  mov    %eax,0x4(%esp)
08172a44 +0x1909:  lea    -0x28(%ebp),%eax
08172a47 +0x190c:  mov    %eax,(%esp)
08172a4a +0x190f:  call   08171dce <+0xc93>
08172a4f +0x1914:  lea    -0x28(%ebp),%eax
08172a52 +0x1917:  mov    %eax,(%esp)
08172a55 +0x191a:  call   08172968 <+0x182d>
08172a5a +0x191f:  mov    0x8(%ebp),%eax
08172a5d +0x1922:  mov    %eax,(%esp)
08172a60 +0x1925:  call   08171d20 <+0xbe5>
08172a65 +0x192a:  mov    %eax,-0x14(%ebp)
08172a68 +0x192d:  lea    -0x28(%ebp),%eax
08172a6b +0x1930:  mov    %eax,(%esp)
08172a6e +0x1933:  call   08171d20 <+0xbe5>
08172a73 +0x1938:  mov    %eax,-0x10(%ebp)
08172a76 +0x193b:  mov    -0x14(%ebp),%eax
08172a79 +0x193e:  mov    (%eax),%edx
08172a7b +0x1940:  mov    -0x10(%ebp),%eax
08172a7e +0x1943:  mov    %edx,(%eax)
08172a80 +0x1945:  mov    -0x14(%ebp),%eax
08172a83 +0x1948:  movl   $0x0,(%eax)
08172a89 +0x194e:  mov    0x8(%ebp),%eax
08172a8c +0x1951:  mov    0x8(%eax),%eax
08172a8f +0x1954:  mov    %eax,-0x20(%ebp)
08172a92 +0x1957:  mov    0x8(%ebp),%eax
08172a95 +0x195a:  movl   $0x0,0x8(%eax)
08172a9c +0x1961:  lea    -0x28(%ebp),%eax
08172a9f +0x1964:  mov    %eax,(%esp)
08172aa2 +0x1967:  call   08171d20 <+0xbe5>
08172aa7 +0x196c:  mov    %eax,-0xc(%ebp)
08172aaa +0x196f:  jmp    08172ac1 <+0x1986>
08172aac +0x1971:  mov    -0xc(%ebp),%eax
08172aaf +0x1974:  mov    %eax,0x4(%esp)
08172ab3 +0x1978:  lea    -0x28(%ebp),%eax
08172ab6 +0x197b:  mov    %eax,(%esp)
08172ab9 +0x197e:  call   08172d54 <+0x1c19>
08172abe +0x1983:  mov    %eax,-0xc(%ebp)
08172ac1 +0x1986:  mov    -0xc(%ebp),%eax
08172ac4 +0x1989:  mov    (%eax),%eax
08172ac6 +0x198b:  test   %eax,%eax
08172ac8 +0x198d:  setne  %al
08172acb +0x1990:  test   %al,%al
08172acd +0x1992:  jne    08172aac <+0x1971>
08172acf +0x1994:  mov    0x8(%ebp),%eax
08172ad2 +0x1997:  mov    %bl,0x8(%esp)
08172ad6 +0x199b:  mov    %eax,0x4(%esp)
08172ada +0x199f:  lea    -0x28(%ebp),%eax
08172add +0x19a2:  mov    %eax,(%esp)
08172ae0 +0x19a5:  call   08172dfa <+0x1cbf>
08172ae5 +0x19aa:  jmp    08172b02 <+0x19c7>
08172ae7 +0x19ac:  mov    %edx,%ebx
08172ae9 +0x19ae:  mov    %eax,%esi
08172aeb +0x19b0:  lea    -0x28(%ebp),%eax
08172aee +0x19b3:  mov    %eax,(%esp)
08172af1 +0x19b6:  call   081716a8 <+0x56d>
08172af6 +0x19bb:  mov    %esi,%eax
08172af8 +0x19bd:  mov    %ebx,%edx
08172afa +0x19bf:  mov    %eax,(%esp)
08172afd +0x19c2:  call   08ae3750 <_Unwind_Resume>
08172b02 +0x19c7:  lea    -0x28(%ebp),%eax
08172b05 +0x19ca:  mov    %eax,(%esp)
08172b08 +0x19cd:  call   081716a8 <+0x56d>
08172b0d +0x19d2:  add    $0x30,%esp
08172b10 +0x19d5:  pop    %ebx
08172b11 +0x19d6:  pop    %esi
08172b12 +0x19d7:  pop    %ebp
08172b13 +0x19d8:  ret
08172b14 +0x19d9:  push   %ebp
08172b15 +0x19da:  mov    %esp,%ebp
08172b17 +0x19dc:  sub    $0x10,%esp
08172b1a +0x19df:  mov    0x8(%ebp),%eax
08172b1d +0x19e2:  mov    0x4(%eax),%eax
08172b20 +0x19e5:  mov    %eax,-0x4(%ebp)
08172b23 +0x19e8:  mov    0x8(%ebp),%eax
08172b26 +0x19eb:  movl   $0x0,0x4(%eax)
08172b2d +0x19f2:  mov    -0x4(%ebp),%eax
08172b30 +0x19f5:  leave
08172b31 +0x19f6:  ret
08172b32 +0x19f7:  push   %ebp
08172b33 +0x19f8:  mov    %esp,%ebp
08172b35 +0x19fa:  mov    0x8(%ebp),%eax
08172b38 +0x19fd:  pop    %ebp
08172b39 +0x19fe:  ret
08172b3a +0x19ff:  push   %ebp
08172b3b +0x1a00:  mov    %esp,%ebp
08172b3d +0x1a02:  pop    %ebp
08172b3e +0x1a03:  ret
08172b3f +0x1a04:  nop
08172b40 +0x1a05:  push   %ebp
08172b41 +0x1a06:  mov    %esp,%ebp
08172b43 +0x1a08:  sub    $0x18,%esp
08172b46 +0x1a0b:  mov    0xc(%ebp),%edx
08172b49 +0x1a0e:  mov    0x8(%ebp),%eax
08172b4c +0x1a11:  mov    %edx,0x4(%esp)
08172b50 +0x1a15:  mov    %eax,(%esp)
08172b53 +0x1a18:  call   08172e44 <+0x1d09>
08172b58 +0x1a1d:  leave
08172b59 +0x1a1e:  ret
08172b5a +0x1a1f:  push   %ebp
08172b5b +0x1a20:  mov    %esp,%ebp
08172b5d +0x1a22:  sub    $0x18,%esp
08172b60 +0x1a25:  mov    0xc(%ebp),%edx
08172b63 +0x1a28:  mov    0x8(%ebp),%eax
08172b66 +0x1a2b:  mov    %edx,0x4(%esp)
08172b6a +0x1a2f:  mov    %eax,(%esp)
08172b6d +0x1a32:  call   08172e4a <+0x1d0f>
08172b72 +0x1a37:  leave
08172b73 +0x1a38:  ret
08172b74 +0x1a39:  push   %ebp
08172b75 +0x1a3a:  mov    %esp,%ebp
08172b77 +0x1a3c:  pop    %ebp
08172b78 +0x1a3d:  ret
08172b79 +0x1a3e:  nop
08172b7a +0x1a3f:  push   %ebp
08172b7b +0x1a40:  mov    %esp,%ebp
08172b7d +0x1a42:  pop    %ebp
08172b7e +0x1a43:  ret
08172b7f +0x1a44:  nop
08172b80 +0x1a45:  push   %ebp
08172b81 +0x1a46:  mov    %esp,%ebp
08172b83 +0x1a48:  sub    $0x18,%esp
08172b86 +0x1a4b:  mov    0x8(%ebp),%eax
08172b89 +0x1a4e:  mov    %eax,(%esp)
08172b8c +0x1a51:  call   08172e50 <+0x1d15>
08172b91 +0x1a56:  cmp    0xc(%ebp),%eax
08172b94 +0x1a59:  setb   %al
08172b97 +0x1a5c:  movzbl %al,%eax
08172b9a +0x1a5f:  test   %eax,%eax
08172b9c +0x1a61:  setne  %al
08172b9f +0x1a64:  test   %al,%al
08172ba1 +0x1a66:  je     08172ba8 <+0x1a6d>
08172ba3 +0x1a68:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08172ba8 +0x1a6d:  mov    0xc(%ebp),%edx
08172bab +0x1a70:  mov    %edx,%eax
08172bad +0x1a72:  add    %eax,%eax
08172baf +0x1a74:  add    %edx,%eax
08172bb1 +0x1a76:  shl    $0x2,%eax
08172bb4 +0x1a79:  mov    %eax,(%esp)
08172bb7 +0x1a7c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08172bbc +0x1a81:  leave
08172bbd +0x1a82:  ret
08172bbe +0x1a83:  push   %ebp
08172bbf +0x1a84:  mov    %esp,%ebp
08172bc1 +0x1a86:  sub    $0x18,%esp
08172bc4 +0x1a89:  mov    0xc(%ebp),%eax
08172bc7 +0x1a8c:  mov    %eax,0x4(%esp)
08172bcb +0x1a90:  movl   $0xc,(%esp)
08172bd2 +0x1a97:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08172bd7 +0x1a9c:  mov    %eax,%edx
08172bd9 +0x1a9e:  test   %edx,%edx
08172bdb +0x1aa0:  je     08172bf0 <+0x1ab5>
08172bdd +0x1aa2:  mov    0x10(%ebp),%edx
08172be0 +0x1aa5:  mov    (%edx),%ecx
08172be2 +0x1aa7:  mov    %ecx,(%eax)
08172be4 +0x1aa9:  mov    0x4(%edx),%ecx
08172be7 +0x1aac:  mov    %ecx,0x4(%eax)
08172bea +0x1aaf:  mov    0x8(%edx),%edx
08172bed +0x1ab2:  mov    %edx,0x8(%eax)
08172bf0 +0x1ab5:  leave
08172bf1 +0x1ab6:  ret
08172bf2 +0x1ab7:  push   %ebp
08172bf3 +0x1ab8:  mov    %esp,%ebp
08172bf5 +0x1aba:  mov    0x8(%ebp),%eax
08172bf8 +0x1abd:  mov    0xc(%ebp),%edx
08172bfb +0x1ac0:  mov    %edx,(%eax)
08172bfd +0x1ac2:  mov    0x8(%ebp),%eax
08172c00 +0x1ac5:  movl   $0x0,0x4(%eax)
08172c07 +0x1acc:  mov    0x8(%ebp),%eax
08172c0a +0x1acf:  movl   $0x0,0x8(%eax)
08172c11 +0x1ad6:  mov    0x8(%ebp),%eax
08172c14 +0x1ad9:  movl   $0x0,0xc(%eax)
08172c1b +0x1ae0:  mov    0x8(%ebp),%eax
08172c1e +0x1ae3:  movl   $0x0,0x8(%eax)
08172c25 +0x1aea:  mov    0x8(%ebp),%eax
08172c28 +0x1aed:  movl   $0x0,0x4(%eax)
08172c2f +0x1af4:  pop    %ebp
08172c30 +0x1af5:  ret
08172c31 +0x1af6:  nop
08172c32 +0x1af7:  push   %ebp
08172c33 +0x1af8:  mov    %esp,%ebp
08172c35 +0x1afa:  sub    $0x28,%esp
08172c38 +0x1afd:  mov    0x8(%ebp),%eax
08172c3b +0x1b00:  mov    0x4(%eax),%eax
08172c3e +0x1b03:  test   %eax,%eax
08172c40 +0x1b05:  je     08172c9e <+0x1b63>
08172c42 +0x1b07:  mov    0x8(%ebp),%eax
08172c45 +0x1b0a:  mov    0x4(%eax),%eax
08172c48 +0x1b0d:  mov    %eax,-0xc(%ebp)
08172c4b +0x1b10:  jmp    08172c6d <+0x1b32>
08172c4d +0x1b12:  mov    -0xc(%ebp),%eax
08172c50 +0x1b15:  mov    %eax,(%esp)
08172c53 +0x1b18:  call   08171e64 <+0xd29>
08172c58 +0x1b1d:  mov    0x8(%ebp),%edx
08172c5b +0x1b20:  mov    (%edx),%edx
08172c5d +0x1b22:  mov    %eax,0x4(%esp)
08172c61 +0x1b26:  mov    %edx,(%esp)
08172c64 +0x1b29:  call   08171e99 <+0xd5e>
08172c69 +0x1b2e:  addl   $0x4,-0xc(%ebp)
08172c6d +0x1b32:  mov    0x8(%ebp),%eax
08172c70 +0x1b35:  mov    0x8(%eax),%eax
08172c73 +0x1b38:  cmp    -0xc(%ebp),%eax
08172c76 +0x1b3b:  setne  %al
08172c79 +0x1b3e:  test   %al,%al
08172c7b +0x1b40:  jne    08172c4d <+0x1b12>
08172c7d +0x1b42:  mov    0x8(%ebp),%eax
08172c80 +0x1b45:  mov    0xc(%eax),%ecx
08172c83 +0x1b48:  mov    0x8(%ebp),%eax
08172c86 +0x1b4b:  mov    0x4(%eax),%edx
08172c89 +0x1b4e:  mov    0x8(%ebp),%eax
08172c8c +0x1b51:  mov    (%eax),%eax
08172c8e +0x1b53:  mov    %ecx,0x8(%esp)
08172c92 +0x1b57:  mov    %edx,0x4(%esp)
08172c96 +0x1b5b:  mov    %eax,(%esp)
08172c99 +0x1b5e:  call   08171eb3 <+0xd78>
08172c9e +0x1b63:  leave
08172c9f +0x1b64:  ret
08172ca0 +0x1b65:  push   %ebp
08172ca1 +0x1b66:  mov    %esp,%ebp
08172ca3 +0x1b68:  sub    $0x28,%esp
08172ca6 +0x1b6b:  mov    0x8(%ebp),%eax
08172ca9 +0x1b6e:  mov    0x10(%ebp),%edx
08172cac +0x1b71:  mov    %edx,0xc(%eax)
08172caf +0x1b74:  mov    0x8(%ebp),%eax
08172cb2 +0x1b77:  mov    0xc(%eax),%edx
08172cb5 +0x1b7a:  mov    0x8(%ebp),%eax
08172cb8 +0x1b7d:  mov    (%eax),%eax
08172cba +0x1b7f:  mov    %edx,0x4(%esp)
08172cbe +0x1b83:  mov    %eax,(%esp)
08172cc1 +0x1b86:  call   08172e5a <+0x1d1f>
08172cc6 +0x1b8b:  mov    0x8(%ebp),%edx
08172cc9 +0x1b8e:  mov    %eax,0x4(%edx)
08172ccc +0x1b91:  mov    0x8(%ebp),%eax
08172ccf +0x1b94:  mov    0x4(%eax),%edx
08172cd2 +0x1b97:  mov    0x8(%ebp),%eax
08172cd5 +0x1b9a:  mov    0xc(%eax),%eax
08172cd8 +0x1b9d:  shl    $0x2,%eax
08172cdb +0x1ba0:  lea    (%edx,%eax,1),%eax
08172cde +0x1ba3:  mov    %eax,-0xc(%ebp)
08172ce1 +0x1ba6:  mov    0x8(%ebp),%eax
08172ce4 +0x1ba9:  mov    0x4(%eax),%edx
08172ce7 +0x1bac:  mov    0x8(%ebp),%eax
08172cea +0x1baf:  mov    %edx,0x8(%eax)
08172ced +0x1bb2:  jmp    08172d24 <+0x1be9>
08172cef +0x1bb4:  mov    0x8(%ebp),%eax
08172cf2 +0x1bb7:  mov    0x8(%eax),%eax
08172cf5 +0x1bba:  mov    %eax,(%esp)
08172cf8 +0x1bbd:  call   08171e64 <+0xd29>
08172cfd +0x1bc2:  mov    0x8(%ebp),%edx
08172d00 +0x1bc5:  mov    (%edx),%edx
08172d02 +0x1bc7:  mov    0xc(%ebp),%ecx
08172d05 +0x1bca:  mov    %ecx,0x8(%esp)
08172d09 +0x1bce:  mov    %eax,0x4(%esp)
08172d0d +0x1bd2:  mov    %edx,(%esp)
08172d10 +0x1bd5:  call   08172e7c <+0x1d41>
08172d15 +0x1bda:  mov    0x8(%ebp),%eax
08172d18 +0x1bdd:  mov    0x8(%eax),%eax
08172d1b +0x1be0:  lea    0x4(%eax),%edx
08172d1e +0x1be3:  mov    0x8(%ebp),%eax
08172d21 +0x1be6:  mov    %edx,0x8(%eax)
08172d24 +0x1be9:  mov    0x8(%ebp),%eax
08172d27 +0x1bec:  mov    0x8(%eax),%eax
08172d2a +0x1bef:  cmp    -0xc(%ebp),%eax
08172d2d +0x1bf2:  setne  %al
08172d30 +0x1bf5:  test   %al,%al
08172d32 +0x1bf7:  jne    08172cef <+0x1bb4>
08172d34 +0x1bf9:  leave
08172d35 +0x1bfa:  ret
08172d36 +0x1bfb:  push   %ebp
08172d37 +0x1bfc:  mov    %esp,%ebp
08172d39 +0x1bfe:  sub    $0x10,%esp
08172d3c +0x1c01:  mov    0x8(%ebp),%eax
08172d3f +0x1c04:  mov    0x4(%eax),%eax
08172d42 +0x1c07:  mov    %eax,-0x4(%ebp)
08172d45 +0x1c0a:  mov    0x8(%ebp),%eax
08172d48 +0x1c0d:  movl   $0x0,0x4(%eax)
08172d4f +0x1c14:  mov    -0x4(%ebp),%eax
08172d52 +0x1c17:  leave
08172d53 +0x1c18:  ret
08172d54 +0x1c19:  push   %ebp
08172d55 +0x1c1a:  mov    %esp,%ebp
08172d57 +0x1c1c:  sub    $0x28,%esp
08172d5a +0x1c1f:  mov    0xc(%ebp),%eax
08172d5d +0x1c22:  mov    (%eax),%eax
08172d5f +0x1c24:  test   %eax,%eax
08172d61 +0x1c26:  je     08172d6d <+0x1c32>
08172d63 +0x1c28:  mov    0xc(%ebp),%eax
08172d66 +0x1c2b:  mov    (%eax),%eax
08172d68 +0x1c2d:  sub    $0x4,%eax
08172d6b +0x1c30:  jmp    08172d72 <+0x1c37>
08172d6d +0x1c32:  mov    $0x0,%eax
08172d72 +0x1c37:  mov    %eax,-0x10(%ebp)
08172d75 +0x1c3a:  mov    -0x10(%ebp),%eax
08172d78 +0x1c3d:  mov    0x8(%eax),%eax
08172d7b +0x1c40:  mov    0x8(%ebp),%edx
08172d7e +0x1c43:  mov    0x4(%edx),%ecx
08172d81 +0x1c46:  mov    $0x0,%edx
08172d86 +0x1c4b:  div    %ecx
08172d88 +0x1c4d:  mov    %edx,%eax
08172d8a +0x1c4f:  mov    %eax,0x4(%esp)
08172d8e +0x1c53:  mov    0x8(%ebp),%eax
08172d91 +0x1c56:  mov    %eax,(%esp)
08172d94 +0x1c59:  call   08171dbc <+0xc81>
08172d99 +0x1c5e:  mov    %eax,-0xc(%ebp)
08172d9c +0x1c61:  mov    -0xc(%ebp),%eax
08172d9f +0x1c64:  mov    (%eax),%eax
08172da1 +0x1c66:  test   %eax,%eax
08172da3 +0x1c68:  jne    08172dc2 <+0x1c87>
08172da5 +0x1c6a:  mov    -0xc(%ebp),%eax
08172da8 +0x1c6d:  mov    0xc(%ebp),%edx
08172dab +0x1c70:  mov    %edx,(%eax)
08172dad +0x1c72:  cmpl   $0x0,-0x10(%ebp)
08172db1 +0x1c76:  je     08172dbb <+0x1c80>
08172db3 +0x1c78:  mov    -0x10(%ebp),%eax
08172db6 +0x1c7b:  add    $0x4,%eax
08172db9 +0x1c7e:  jmp    08172dc0 <+0x1c85>
08172dbb +0x1c80:  mov    $0x0,%eax
08172dc0 +0x1c85:  jmp    08172df7 <+0x1cbc>
08172dc2 +0x1c87:  mov    -0x10(%ebp),%eax
08172dc5 +0x1c8a:  mov    0x4(%eax),%edx
08172dc8 +0x1c8d:  mov    0xc(%ebp),%eax
08172dcb +0x1c90:  mov    %edx,(%eax)
08172dcd +0x1c92:  mov    -0xc(%ebp),%eax
08172dd0 +0x1c95:  mov    (%eax),%eax
08172dd2 +0x1c97:  mov    (%eax),%edx
08172dd4 +0x1c99:  mov    -0x10(%ebp),%eax
08172dd7 +0x1c9c:  mov    %edx,0x4(%eax)
08172dda +0x1c9f:  mov    -0xc(%ebp),%eax
08172ddd +0x1ca2:  mov    (%eax),%edx
08172ddf +0x1ca4:  cmpl   $0x0,-0x10(%ebp)
08172de3 +0x1ca8:  je     08172ded <+0x1cb2>
08172de5 +0x1caa:  mov    -0x10(%ebp),%eax
08172de8 +0x1cad:  add    $0x4,%eax
08172deb +0x1cb0:  jmp    08172df2 <+0x1cb7>
08172ded +0x1cb2:  mov    $0x0,%eax
08172df2 +0x1cb7:  mov    %eax,(%edx)
08172df4 +0x1cb9:  mov    0xc(%ebp),%eax
08172df7 +0x1cbc:  leave
08172df8 +0x1cbd:  ret
08172df9 +0x1cbe:  nop
08172dfa +0x1cbf:  push   %ebp
08172dfb +0x1cc0:  mov    %esp,%ebp
08172dfd +0x1cc2:  sub    $0x18,%esp
08172e00 +0x1cc5:  mov    0xc(%ebp),%edx
08172e03 +0x1cc8:  mov    0x8(%ebp),%eax
08172e06 +0x1ccb:  mov    %edx,0x4(%esp)
08172e0a +0x1ccf:  mov    %eax,(%esp)
08172e0d +0x1cd2:  call   08172e9d <+0x1d62>
08172e12 +0x1cd7:  mov    0xc(%ebp),%eax
08172e15 +0x1cda:  lea    0x4(%eax),%edx
08172e18 +0x1cdd:  mov    0x8(%ebp),%eax
08172e1b +0x1ce0:  add    $0x4,%eax
08172e1e +0x1ce3:  mov    %edx,0x4(%esp)
08172e22 +0x1ce7:  mov    %eax,(%esp)
08172e25 +0x1cea:  call   08172eb7 <+0x1d7c>
08172e2a +0x1cef:  mov    0xc(%ebp),%eax
08172e2d +0x1cf2:  lea    0x8(%eax),%edx
08172e30 +0x1cf5:  mov    0x8(%ebp),%eax
08172e33 +0x1cf8:  add    $0x8,%eax
08172e36 +0x1cfb:  mov    %edx,0x4(%esp)
08172e3a +0x1cff:  mov    %eax,(%esp)
08172e3d +0x1d02:  call   08172eb7 <+0x1d7c>
08172e42 +0x1d07:  leave
08172e43 +0x1d08:  ret
08172e44 +0x1d09:  push   %ebp
08172e45 +0x1d0a:  mov    %esp,%ebp
08172e47 +0x1d0c:  pop    %ebp
08172e48 +0x1d0d:  ret
08172e49 +0x1d0e:  nop
08172e4a +0x1d0f:  push   %ebp
08172e4b +0x1d10:  mov    %esp,%ebp
08172e4d +0x1d12:  pop    %ebp
08172e4e +0x1d13:  ret
08172e4f +0x1d14:  nop
08172e50 +0x1d15:  push   %ebp
08172e51 +0x1d16:  mov    %esp,%ebp
08172e53 +0x1d18:  mov    $0x15555555,%eax
08172e58 +0x1d1d:  pop    %ebp
08172e59 +0x1d1e:  ret
08172e5a +0x1d1f:  push   %ebp
08172e5b +0x1d20:  mov    %esp,%ebp
08172e5d +0x1d22:  sub    $0x18,%esp
08172e60 +0x1d25:  mov    0x8(%ebp),%eax
08172e63 +0x1d28:  movl   $0x0,0x8(%esp)
08172e6b +0x1d30:  mov    0xc(%ebp),%edx
08172e6e +0x1d33:  mov    %edx,0x4(%esp)
08172e72 +0x1d37:  mov    %eax,(%esp)
08172e75 +0x1d3a:  call   08172ed2 <+0x1d97>
08172e7a +0x1d3f:  leave
08172e7b +0x1d40:  ret
08172e7c +0x1d41:  push   %ebp
08172e7d +0x1d42:  mov    %esp,%ebp
08172e7f +0x1d44:  sub    $0x18,%esp
08172e82 +0x1d47:  mov    0x8(%ebp),%eax
08172e85 +0x1d4a:  mov    0x10(%ebp),%edx
08172e88 +0x1d4d:  mov    %edx,0x8(%esp)
08172e8c +0x1d51:  mov    0xc(%ebp),%edx
08172e8f +0x1d54:  mov    %edx,0x4(%esp)
08172e93 +0x1d58:  mov    %eax,(%esp)
08172e96 +0x1d5b:  call   08172f0a <+0x1dcf>
08172e9b +0x1d60:  leave
08172e9c +0x1d61:  ret
08172e9d +0x1d62:  push   %ebp
08172e9e +0x1d63:  mov    %esp,%ebp
08172ea0 +0x1d65:  sub    $0x18,%esp
08172ea3 +0x1d68:  mov    0xc(%ebp),%eax
08172ea6 +0x1d6b:  mov    %eax,0x4(%esp)
08172eaa +0x1d6f:  mov    0x8(%ebp),%eax
08172ead +0x1d72:  mov    %eax,(%esp)
08172eb0 +0x1d75:  call   08172f32 <+0x1df7>
08172eb5 +0x1d7a:  leave
08172eb6 +0x1d7b:  ret
08172eb7 +0x1d7c:  push   %ebp
08172eb8 +0x1d7d:  mov    %esp,%ebp
08172eba +0x1d7f:  sub    $0x18,%esp
08172ebd +0x1d82:  mov    0xc(%ebp),%eax
08172ec0 +0x1d85:  mov    %eax,0x4(%esp)
08172ec4 +0x1d89:  mov    0x8(%ebp),%eax
08172ec7 +0x1d8c:  mov    %eax,(%esp)
08172eca +0x1d8f:  call   08172f4c <+0x1e11>
08172ecf +0x1d94:  leave
08172ed0 +0x1d95:  ret
08172ed1 +0x1d96:  nop
08172ed2 +0x1d97:  push   %ebp
08172ed3 +0x1d98:  mov    %esp,%ebp
08172ed5 +0x1d9a:  sub    $0x18,%esp
08172ed8 +0x1d9d:  mov    0x8(%ebp),%eax
08172edb +0x1da0:  mov    %eax,(%esp)
08172ede +0x1da3:  call   08172f66 <+0x1e2b>
08172ee3 +0x1da8:  cmp    0xc(%ebp),%eax
08172ee6 +0x1dab:  setb   %al
08172ee9 +0x1dae:  movzbl %al,%eax
08172eec +0x1db1:  test   %eax,%eax
08172eee +0x1db3:  setne  %al
08172ef1 +0x1db6:  test   %al,%al
08172ef3 +0x1db8:  je     08172efa <+0x1dbf>
08172ef5 +0x1dba:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08172efa +0x1dbf:  mov    0xc(%ebp),%eax
08172efd +0x1dc2:  shl    $0x2,%eax
08172f00 +0x1dc5:  mov    %eax,(%esp)
08172f03 +0x1dc8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08172f08 +0x1dcd:  leave
08172f09 +0x1dce:  ret
08172f0a +0x1dcf:  push   %ebp
08172f0b +0x1dd0:  mov    %esp,%ebp
08172f0d +0x1dd2:  sub    $0x18,%esp
08172f10 +0x1dd5:  mov    0xc(%ebp),%eax
08172f13 +0x1dd8:  mov    %eax,0x4(%esp)
08172f17 +0x1ddc:  movl   $0x4,(%esp)
08172f1e +0x1de3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08172f23 +0x1de8:  mov    %eax,%edx
08172f25 +0x1dea:  test   %edx,%edx
08172f27 +0x1dec:  je     08172f30 <+0x1df5>
08172f29 +0x1dee:  mov    0x10(%ebp),%edx
08172f2c +0x1df1:  mov    (%edx),%edx
08172f2e +0x1df3:  mov    %edx,(%eax)
08172f30 +0x1df5:  leave
08172f31 +0x1df6:  ret
08172f32 +0x1df7:  push   %ebp
08172f33 +0x1df8:  mov    %esp,%ebp
08172f35 +0x1dfa:  sub    $0x18,%esp
08172f38 +0x1dfd:  mov    0xc(%ebp),%eax
08172f3b +0x1e00:  mov    %eax,0x4(%esp)
08172f3f +0x1e04:  mov    0x8(%ebp),%eax
08172f42 +0x1e07:  mov    %eax,(%esp)
08172f45 +0x1e0a:  call   08172f70 <+0x1e35>
08172f4a +0x1e0f:  leave
08172f4b +0x1e10:  ret
08172f4c +0x1e11:  push   %ebp
08172f4d +0x1e12:  mov    %esp,%ebp
08172f4f +0x1e14:  sub    $0x18,%esp
08172f52 +0x1e17:  mov    0xc(%ebp),%eax
08172f55 +0x1e1a:  mov    %eax,0x4(%esp)
08172f59 +0x1e1e:  mov    0x8(%ebp),%eax
08172f5c +0x1e21:  mov    %eax,(%esp)
08172f5f +0x1e24:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
08172f64 +0x1e29:  leave
08172f65 +0x1e2a:  ret
08172f66 +0x1e2b:  push   %ebp
08172f67 +0x1e2c:  mov    %esp,%ebp
08172f69 +0x1e2e:  mov    $0x3fffffff,%eax
08172f6e +0x1e33:  pop    %ebp
08172f6f +0x1e34:  ret
08172f70 +0x1e35:  push   %ebp
08172f71 +0x1e36:  mov    %esp,%ebp
08172f73 +0x1e38:  sub    $0x28,%esp
08172f76 +0x1e3b:  mov    0x8(%ebp),%eax
08172f79 +0x1e3e:  mov    %eax,(%esp)
08172f7c +0x1e41:  call   08172fac <+0x1e71>
08172f81 +0x1e46:  mov    (%eax),%eax
08172f83 +0x1e48:  mov    %eax,-0xc(%ebp)
08172f86 +0x1e4b:  mov    0xc(%ebp),%eax
08172f89 +0x1e4e:  mov    %eax,(%esp)
08172f8c +0x1e51:  call   08172fac <+0x1e71>
08172f91 +0x1e56:  mov    (%eax),%edx
08172f93 +0x1e58:  mov    0x8(%ebp),%eax
08172f96 +0x1e5b:  mov    %edx,(%eax)
08172f98 +0x1e5d:  lea    -0xc(%ebp),%eax
08172f9b +0x1e60:  mov    %eax,(%esp)
08172f9e +0x1e63:  call   08172fac <+0x1e71>
08172fa3 +0x1e68:  mov    (%eax),%edx
08172fa5 +0x1e6a:  mov    0xc(%ebp),%eax
08172fa8 +0x1e6d:  mov    %edx,(%eax)
08172faa +0x1e6f:  leave
08172fab +0x1e70:  ret
08172fac +0x1e71:  push   %ebp
08172fad +0x1e72:  mov    %esp,%ebp
08172faf +0x1e74:  mov    0x8(%ebp),%eax
08172fb2 +0x1e77:  pop    %ebp
08172fb3 +0x1e78:  ret
```

## 反编译 C

```c
// <global>::global @ 0x817113b

/* RestrictGeolocation::RestrictGeolocation() */

void RestrictGeolocation::_GLOBAL__I_RestrictGeolocation(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
