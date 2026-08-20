# clear

`_GLOBAL__I__ZN16HeroMissionValue5clearEv`

`global constructors keyed to HeroMissionValue::clear()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to HeroMissionValue` | `0x0816819f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816819f  _GLOBAL__I__ZN16HeroMissionValue5clearEv
#           global constructors keyed to HeroMissionValue::clear()
# range [0x0816819f, 0x0816baaf]
0816819f +0x0000:  push   %ebp
081681a0 +0x0001:  mov    %esp,%ebp
081681a2 +0x0003:  sub    $0x18,%esp
081681a5 +0x0006:  movl   $0xffff,0x4(%esp)
081681ad +0x000e:  movl   $0x1,(%esp)
081681b4 +0x0015:  call   0816815f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081681b9 +0x001a:  leave
081681ba +0x001b:  ret
081681bb +0x001c:  push   %ebp
081681bc +0x001d:  mov    %esp,%ebp
081681be +0x001f:  mov    0x8(%ebp),%edx
081681c1 +0x0022:  mov    0xc(%ebp),%eax
081681c4 +0x0025:  or     %edx,%eax
081681c6 +0x0027:  pop    %ebp
081681c7 +0x0028:  ret
081681c8 +0x0029:  push   %ebp
081681c9 +0x002a:  mov    %esp,%ebp
081681cb +0x002c:  push   %esi
081681cc +0x002d:  push   %ebx
081681cd +0x002e:  sub    $0x10,%esp
081681d0 +0x0031:  mov    0x8(%ebp),%eax
081681d3 +0x0034:  add    $0xc,%eax
081681d6 +0x0037:  mov    %eax,(%esp)
081681d9 +0x003a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081681de +0x003f:  mov    0x8(%ebp),%eax
081681e1 +0x0042:  add    $0x10,%eax
081681e4 +0x0045:  mov    %eax,(%esp)
081681e7 +0x0048:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081681ec +0x004d:  mov    0x8(%ebp),%eax
081681ef +0x0050:  add    $0x14,%eax
081681f2 +0x0053:  mov    %eax,(%esp)
081681f5 +0x0056:  call   081683ae <+0x20f>
081681fa +0x005b:  mov    0x8(%ebp),%eax
081681fd +0x005e:  add    $0x20,%eax
08168200 +0x0061:  mov    %eax,(%esp)
08168203 +0x0064:  call   08168420 <+0x281>
08168208 +0x0069:  jmp    08168258 <+0xb9>
0816820a +0x006b:  mov    %edx,%ebx
0816820c +0x006d:  mov    %eax,%esi
0816820e +0x006f:  mov    0x8(%ebp),%eax
08168211 +0x0072:  add    $0x14,%eax
08168214 +0x0075:  mov    %eax,(%esp)
08168217 +0x0078:  call   081683c2 <+0x223>
0816821c +0x007d:  mov    %esi,%eax
0816821e +0x007f:  mov    %ebx,%edx
08168220 +0x0081:  jmp    08168222 <+0x83>
08168222 +0x0083:  mov    %edx,%ebx
08168224 +0x0085:  mov    %eax,%esi
08168226 +0x0087:  mov    0x8(%ebp),%eax
08168229 +0x008a:  add    $0x10,%eax
0816822c +0x008d:  mov    %eax,(%esp)
0816822f +0x0090:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08168234 +0x0095:  mov    %esi,%eax
08168236 +0x0097:  mov    %ebx,%edx
08168238 +0x0099:  jmp    0816823a <+0x9b>
0816823a +0x009b:  mov    %edx,%ebx
0816823c +0x009d:  mov    %eax,%esi
0816823e +0x009f:  mov    0x8(%ebp),%eax
08168241 +0x00a2:  add    $0xc,%eax
08168244 +0x00a5:  mov    %eax,(%esp)
08168247 +0x00a8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0816824c +0x00ad:  mov    %esi,%eax
0816824e +0x00af:  mov    %ebx,%edx
08168250 +0x00b1:  mov    %eax,(%esp)
08168253 +0x00b4:  call   08ae3750 <_Unwind_Resume>
08168258 +0x00b9:  add    $0x10,%esp
0816825b +0x00bc:  pop    %ebx
0816825c +0x00bd:  pop    %esi
0816825d +0x00be:  pop    %ebp
0816825e +0x00bf:  ret
0816825f +0x00c0:  nop
08168260 +0x00c1:  push   %ebp
08168261 +0x00c2:  mov    %esp,%ebp
08168263 +0x00c4:  push   %esi
08168264 +0x00c5:  push   %ebx
08168265 +0x00c6:  sub    $0x10,%esp
08168268 +0x00c9:  mov    0x8(%ebp),%eax
0816826b +0x00cc:  add    $0x20,%eax
0816826e +0x00cf:  mov    %eax,(%esp)
08168271 +0x00d2:  call   08168350 <+0x1b1>
08168276 +0x00d7:  jmp    08168290 <+0xf1>
08168278 +0x00d9:  mov    %edx,%ebx
0816827a +0x00db:  mov    %eax,%esi
0816827c +0x00dd:  mov    0x8(%ebp),%eax
0816827f +0x00e0:  add    $0x14,%eax
08168282 +0x00e3:  mov    %eax,(%esp)
08168285 +0x00e6:  call   081683c2 <+0x223>
0816828a +0x00eb:  mov    %esi,%eax
0816828c +0x00ed:  mov    %ebx,%edx
0816828e +0x00ef:  jmp    081682a0 <+0x101>
08168290 +0x00f1:  mov    0x8(%ebp),%eax
08168293 +0x00f4:  add    $0x14,%eax
08168296 +0x00f7:  mov    %eax,(%esp)
08168299 +0x00fa:  call   081683c2 <+0x223>
0816829e +0x00ff:  jmp    081682b8 <+0x119>
081682a0 +0x0101:  mov    %edx,%ebx
081682a2 +0x0103:  mov    %eax,%esi
081682a4 +0x0105:  mov    0x8(%ebp),%eax
081682a7 +0x0108:  add    $0x10,%eax
081682aa +0x010b:  mov    %eax,(%esp)
081682ad +0x010e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081682b2 +0x0113:  mov    %esi,%eax
081682b4 +0x0115:  mov    %ebx,%edx
081682b6 +0x0117:  jmp    081682c8 <+0x129>
081682b8 +0x0119:  mov    0x8(%ebp),%eax
081682bb +0x011c:  add    $0x10,%eax
081682be +0x011f:  mov    %eax,(%esp)
081682c1 +0x0122:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081682c6 +0x0127:  jmp    081682e6 <+0x147>
081682c8 +0x0129:  mov    %edx,%ebx
081682ca +0x012b:  mov    %eax,%esi
081682cc +0x012d:  mov    0x8(%ebp),%eax
081682cf +0x0130:  add    $0xc,%eax
081682d2 +0x0133:  mov    %eax,(%esp)
081682d5 +0x0136:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081682da +0x013b:  mov    %esi,%eax
081682dc +0x013d:  mov    %ebx,%edx
081682de +0x013f:  mov    %eax,(%esp)
081682e1 +0x0142:  call   08ae3750 <_Unwind_Resume>
081682e6 +0x0147:  mov    0x8(%ebp),%eax
081682e9 +0x014a:  add    $0xc,%eax
081682ec +0x014d:  mov    %eax,(%esp)
081682ef +0x0150:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081682f4 +0x0155:  add    $0x10,%esp
081682f7 +0x0158:  pop    %ebx
081682f8 +0x0159:  pop    %esi
081682f9 +0x015a:  pop    %ebp
081682fa +0x015b:  ret
081682fb +0x015c:  nop
081682fc +0x015d:  push   %ebp
081682fd +0x015e:  mov    %esp,%ebp
081682ff +0x0160:  sub    $0x18,%esp
08168302 +0x0163:  mov    0x8(%ebp),%eax
08168305 +0x0166:  mov    %eax,(%esp)
08168308 +0x0169:  call   081685ba <+0x41b>
0816830d +0x016e:  leave
0816830e +0x016f:  ret
0816830f +0x0170:  nop
08168310 +0x0171:  push   %ebp
08168311 +0x0172:  mov    %esp,%ebp
08168313 +0x0174:  sub    $0x18,%esp
08168316 +0x0177:  mov    0x8(%ebp),%eax
08168319 +0x017a:  mov    %eax,(%esp)
0816831c +0x017d:  call   08168634 <+0x495>
08168321 +0x0182:  leave
08168322 +0x0183:  ret
08168323 +0x0184:  nop
08168324 +0x0185:  push   %ebp
08168325 +0x0186:  mov    %esp,%ebp
08168327 +0x0188:  sub    $0x18,%esp
0816832a +0x018b:  mov    0x8(%ebp),%eax
0816832d +0x018e:  add    $0x4,%eax
08168330 +0x0191:  mov    %eax,(%esp)
08168333 +0x0194:  call   0816869a <+0x4fb>
08168338 +0x0199:  leave
08168339 +0x019a:  ret
0816833a +0x019b:  push   %ebp
0816833b +0x019c:  mov    %esp,%ebp
0816833d +0x019e:  sub    $0x18,%esp
08168340 +0x01a1:  mov    0x8(%ebp),%eax
08168343 +0x01a4:  add    $0x4,%eax
08168346 +0x01a7:  mov    %eax,(%esp)
08168349 +0x01aa:  call   0816869a <+0x4fb>
0816834e +0x01af:  leave
0816834f +0x01b0:  ret
08168350 +0x01b1:  push   %ebp
08168351 +0x01b2:  mov    %esp,%ebp
08168353 +0x01b4:  push   %esi
08168354 +0x01b5:  push   %ebx
08168355 +0x01b6:  sub    $0x10,%esp
08168358 +0x01b9:  mov    0x8(%ebp),%eax
0816835b +0x01bc:  mov    %eax,(%esp)
0816835e +0x01bf:  call   08168c6e <+0xacf>
08168363 +0x01c4:  mov    0x8(%ebp),%edx
08168366 +0x01c7:  mov    0x4(%edx),%ecx
08168369 +0x01ca:  mov    0x8(%ebp),%edx
0816836c +0x01cd:  mov    (%edx),%edx
0816836e +0x01cf:  mov    %eax,0x8(%esp)
08168372 +0x01d3:  mov    %ecx,0x4(%esp)
08168376 +0x01d7:  mov    %edx,(%esp)
08168379 +0x01da:  call   08168c76 <+0xad7>
0816837e +0x01df:  jmp    0816839b <+0x1fc>
08168380 +0x01e1:  mov    %edx,%ebx
08168382 +0x01e3:  mov    %eax,%esi
08168384 +0x01e5:  mov    0x8(%ebp),%eax
08168387 +0x01e8:  mov    %eax,(%esp)
0816838a +0x01eb:  call   08168c08 <+0xa69>
0816838f +0x01f0:  mov    %esi,%eax
08168391 +0x01f2:  mov    %ebx,%edx
08168393 +0x01f4:  mov    %eax,(%esp)
08168396 +0x01f7:  call   08ae3750 <_Unwind_Resume>
0816839b +0x01fc:  mov    0x8(%ebp),%eax
0816839e +0x01ff:  mov    %eax,(%esp)
081683a1 +0x0202:  call   08168c08 <+0xa69>
081683a6 +0x0207:  add    $0x10,%esp
081683a9 +0x020a:  pop    %ebx
081683aa +0x020b:  pop    %esi
081683ab +0x020c:  pop    %ebp
081683ac +0x020d:  ret
081683ad +0x020e:  nop
081683ae +0x020f:  push   %ebp
081683af +0x0210:  mov    %esp,%ebp
081683b1 +0x0212:  sub    $0x18,%esp
081683b4 +0x0215:  mov    0x8(%ebp),%eax
081683b7 +0x0218:  mov    %eax,(%esp)
081683ba +0x021b:  call   08168ca4 <+0xb05>
081683bf +0x0220:  leave
081683c0 +0x0221:  ret
081683c1 +0x0222:  nop
081683c2 +0x0223:  push   %ebp
081683c3 +0x0224:  mov    %esp,%ebp
081683c5 +0x0226:  push   %esi
081683c6 +0x0227:  push   %ebx
081683c7 +0x0228:  sub    $0x10,%esp
081683ca +0x022b:  mov    0x8(%ebp),%eax
081683cd +0x022e:  mov    %eax,(%esp)
081683d0 +0x0231:  call   08168d20 <+0xb81>
081683d5 +0x0236:  mov    0x8(%ebp),%edx
081683d8 +0x0239:  mov    0x4(%edx),%ecx
081683db +0x023c:  mov    0x8(%ebp),%edx
081683de +0x023f:  mov    (%edx),%edx
081683e0 +0x0241:  mov    %eax,0x8(%esp)
081683e4 +0x0245:  mov    %ecx,0x4(%esp)
081683e8 +0x0249:  mov    %edx,(%esp)
081683eb +0x024c:  call   08168d28 <+0xb89>
081683f0 +0x0251:  jmp    0816840d <+0x26e>
081683f2 +0x0253:  mov    %edx,%ebx
081683f4 +0x0255:  mov    %eax,%esi
081683f6 +0x0257:  mov    0x8(%ebp),%eax
081683f9 +0x025a:  mov    %eax,(%esp)
081683fc +0x025d:  call   08168cb8 <+0xb19>
08168401 +0x0262:  mov    %esi,%eax
08168403 +0x0264:  mov    %ebx,%edx
08168405 +0x0266:  mov    %eax,(%esp)
08168408 +0x0269:  call   08ae3750 <_Unwind_Resume>
0816840d +0x026e:  mov    0x8(%ebp),%eax
08168410 +0x0271:  mov    %eax,(%esp)
08168413 +0x0274:  call   08168cb8 <+0xb19>
08168418 +0x0279:  add    $0x10,%esp
0816841b +0x027c:  pop    %ebx
0816841c +0x027d:  pop    %esi
0816841d +0x027e:  pop    %ebp
0816841e +0x027f:  ret
0816841f +0x0280:  nop
08168420 +0x0281:  push   %ebp
08168421 +0x0282:  mov    %esp,%ebp
08168423 +0x0284:  sub    $0x18,%esp
08168426 +0x0287:  mov    0x8(%ebp),%eax
08168429 +0x028a:  mov    %eax,(%esp)
0816842c +0x028d:  call   08168d42 <+0xba3>
08168431 +0x0292:  leave
08168432 +0x0293:  ret
08168433 +0x0294:  nop
08168434 +0x0295:  push   %ebp
08168435 +0x0296:  mov    %esp,%ebp
08168437 +0x0298:  push   %ebx
08168438 +0x0299:  sub    $0x14,%esp
0816843b +0x029c:  mov    0x8(%ebp),%ebx
0816843e +0x029f:  mov    0xc(%ebp),%eax
08168441 +0x02a2:  mov    %eax,0x4(%esp)
08168445 +0x02a6:  mov    %ebx,(%esp)
08168448 +0x02a9:  call   08168d56 <+0xbb7>
0816844d +0x02ae:  mov    %ebx,%eax
0816844f +0x02b0:  add    $0x14,%esp
08168452 +0x02b3:  pop    %ebx
08168453 +0x02b4:  pop    %ebp
08168454 +0x02b5:  ret    $0x4
08168457 +0x02b8:  nop
08168458 +0x02b9:  push   %ebp
08168459 +0x02ba:  mov    %esp,%ebp
0816845b +0x02bc:  push   %ebx
0816845c +0x02bd:  sub    $0x14,%esp
0816845f +0x02c0:  mov    0x8(%ebp),%ebx
08168462 +0x02c3:  mov    0xc(%ebp),%eax
08168465 +0x02c6:  add    $0x4,%eax
08168468 +0x02c9:  mov    %eax,0x4(%esp)
0816846c +0x02cd:  mov    %ebx,(%esp)
0816846f +0x02d0:  call   08168d56 <+0xbb7>
08168474 +0x02d5:  mov    %ebx,%eax
08168476 +0x02d7:  add    $0x14,%esp
08168479 +0x02da:  pop    %ebx
0816847a +0x02db:  pop    %ebp
0816847b +0x02dc:  ret    $0x4
0816847e +0x02df:  push   %ebp
0816847f +0x02e0:  mov    %esp,%ebp
08168481 +0x02e2:  push   %ebx
08168482 +0x02e3:  sub    $0x14,%esp
08168485 +0x02e6:  mov    0x8(%ebp),%eax
08168488 +0x02e9:  mov    %eax,(%esp)
0816848b +0x02ec:  call   08168d66 <+0xbc7>
08168490 +0x02f1:  mov    (%eax),%ebx
08168492 +0x02f3:  mov    0xc(%ebp),%eax
08168495 +0x02f6:  mov    %eax,(%esp)
08168498 +0x02f9:  call   08168d66 <+0xbc7>
0816849d +0x02fe:  mov    (%eax),%eax
0816849f +0x0300:  cmp    %eax,%ebx
081684a1 +0x0302:  setne  %al
081684a4 +0x0305:  add    $0x14,%esp
081684a7 +0x0308:  pop    %ebx
081684a8 +0x0309:  pop    %ebp
081684a9 +0x030a:  ret
081684aa +0x030b:  push   %ebp
081684ab +0x030c:  mov    %esp,%ebp
081684ad +0x030e:  mov    0x8(%ebp),%eax
081684b0 +0x0311:  mov    (%eax),%eax
081684b2 +0x0313:  lea    0x8(%eax),%edx
081684b5 +0x0316:  mov    0x8(%ebp),%eax
081684b8 +0x0319:  mov    %edx,(%eax)
081684ba +0x031b:  mov    0x8(%ebp),%eax
081684bd +0x031e:  pop    %ebp
081684be +0x031f:  ret
081684bf +0x0320:  nop
081684c0 +0x0321:  push   %ebp
081684c1 +0x0322:  mov    %esp,%ebp
081684c3 +0x0324:  mov    0x8(%ebp),%eax
081684c6 +0x0327:  mov    (%eax),%eax
081684c8 +0x0329:  pop    %ebp
081684c9 +0x032a:  ret
081684ca +0x032b:  push   %ebp
081684cb +0x032c:  mov    %esp,%ebp
081684cd +0x032e:  mov    0x8(%ebp),%eax
081684d0 +0x0331:  mov    (%eax),%eax
081684d2 +0x0333:  mov    0xc(%ebp),%edx
081684d5 +0x0336:  add    %edx,%edx
081684d7 +0x0338:  add    %edx,%eax
081684d9 +0x033a:  pop    %ebp
081684da +0x033b:  ret
081684db +0x033c:  nop
081684dc +0x033d:  push   %ebp
081684dd +0x033e:  mov    %esp,%ebp
081684df +0x0340:  mov    0x8(%ebp),%eax
081684e2 +0x0343:  mov    0x4(%eax),%eax
081684e5 +0x0346:  mov    %eax,%edx
081684e7 +0x0348:  mov    0x8(%ebp),%eax
081684ea +0x034b:  mov    (%eax),%eax
081684ec +0x034d:  mov    %edx,%ecx
081684ee +0x034f:  sub    %eax,%ecx
081684f0 +0x0351:  mov    %ecx,%eax
081684f2 +0x0353:  sar    %eax
081684f4 +0x0355:  pop    %ebp
081684f5 +0x0356:  ret
081684f6 +0x0357:  push   %ebp
081684f7 +0x0358:  mov    %esp,%ebp
081684f9 +0x035a:  push   %ebx
081684fa +0x035b:  sub    $0x14,%esp
081684fd +0x035e:  mov    0x8(%ebp),%ebx
08168500 +0x0361:  mov    0xc(%ebp),%eax
08168503 +0x0364:  mov    %eax,0x4(%esp)
08168507 +0x0368:  mov    %ebx,(%esp)
0816850a +0x036b:  call   08168d6e <+0xbcf>
0816850f +0x0370:  mov    %ebx,%eax
08168511 +0x0372:  add    $0x14,%esp
08168514 +0x0375:  pop    %ebx
08168515 +0x0376:  pop    %ebp
08168516 +0x0377:  ret    $0x4
08168519 +0x037a:  nop
0816851a +0x037b:  push   %ebp
0816851b +0x037c:  mov    %esp,%ebp
0816851d +0x037e:  push   %ebx
0816851e +0x037f:  sub    $0x14,%esp
08168521 +0x0382:  mov    0x8(%ebp),%ebx
08168524 +0x0385:  mov    0xc(%ebp),%eax
08168527 +0x0388:  add    $0x4,%eax
0816852a +0x038b:  mov    %eax,0x4(%esp)
0816852e +0x038f:  mov    %ebx,(%esp)
08168531 +0x0392:  call   08168d6e <+0xbcf>
08168536 +0x0397:  mov    %ebx,%eax
08168538 +0x0399:  add    $0x14,%esp
0816853b +0x039c:  pop    %ebx
0816853c +0x039d:  pop    %ebp
0816853d +0x039e:  ret    $0x4
08168540 +0x03a1:  push   %ebp
08168541 +0x03a2:  mov    %esp,%ebp
08168543 +0x03a4:  push   %ebx
08168544 +0x03a5:  sub    $0x14,%esp
08168547 +0x03a8:  mov    0x8(%ebp),%eax
0816854a +0x03ab:  mov    %eax,(%esp)
0816854d +0x03ae:  call   08168d7e <+0xbdf>
08168552 +0x03b3:  mov    (%eax),%ebx
08168554 +0x03b5:  mov    0xc(%ebp),%eax
08168557 +0x03b8:  mov    %eax,(%esp)
0816855a +0x03bb:  call   08168d7e <+0xbdf>
0816855f +0x03c0:  mov    (%eax),%eax
08168561 +0x03c2:  cmp    %eax,%ebx
08168563 +0x03c4:  setne  %al
08168566 +0x03c7:  add    $0x14,%esp
08168569 +0x03ca:  pop    %ebx
0816856a +0x03cb:  pop    %ebp
0816856b +0x03cc:  ret
0816856c +0x03cd:  push   %ebp
0816856d +0x03ce:  mov    %esp,%ebp
0816856f +0x03d0:  mov    0x8(%ebp),%eax
08168572 +0x03d3:  mov    (%eax),%eax
08168574 +0x03d5:  lea    0xc(%eax),%edx
08168577 +0x03d8:  mov    0x8(%ebp),%eax
0816857a +0x03db:  mov    %edx,(%eax)
0816857c +0x03dd:  mov    0x8(%ebp),%eax
0816857f +0x03e0:  pop    %ebp
08168580 +0x03e1:  ret
08168581 +0x03e2:  nop
08168582 +0x03e3:  push   %ebp
08168583 +0x03e4:  mov    %esp,%ebp
08168585 +0x03e6:  mov    0x8(%ebp),%eax
08168588 +0x03e9:  mov    (%eax),%eax
0816858a +0x03eb:  pop    %ebp
0816858b +0x03ec:  ret
0816858c +0x03ed:  push   %ebp
0816858d +0x03ee:  mov    %esp,%ebp
0816858f +0x03f0:  pop    %ebp
08168590 +0x03f1:  ret
08168591 +0x03f2:  nop
08168592 +0x03f3:  push   %ebp
08168593 +0x03f4:  mov    %esp,%ebp
08168595 +0x03f6:  sub    $0x18,%esp
08168598 +0x03f9:  mov    0x8(%ebp),%eax
0816859b +0x03fc:  mov    %eax,(%esp)
0816859e +0x03ff:  call   08168d86 <+0xbe7>
081685a3 +0x0404:  leave
081685a4 +0x0405:  ret
081685a5 +0x0406:  nop
081685a6 +0x0407:  push   %ebp
081685a7 +0x0408:  mov    %esp,%ebp
081685a9 +0x040a:  sub    $0x18,%esp
081685ac +0x040d:  mov    0x8(%ebp),%eax
081685af +0x0410:  mov    %eax,(%esp)
081685b2 +0x0413:  call   08168d9a <+0xbfb>
081685b7 +0x0418:  leave
081685b8 +0x0419:  ret
081685b9 +0x041a:  nop
081685ba +0x041b:  push   %ebp
081685bb +0x041c:  mov    %esp,%ebp
081685bd +0x041e:  push   %esi
081685be +0x041f:  push   %ebx
081685bf +0x0420:  sub    $0x10,%esp
081685c2 +0x0423:  mov    0x8(%ebp),%eax
081685c5 +0x0426:  mov    %eax,(%esp)
081685c8 +0x0429:  call   08168e04 <+0xc65>
081685cd +0x042e:  mov    %eax,0x4(%esp)
081685d1 +0x0432:  mov    0x8(%ebp),%eax
081685d4 +0x0435:  mov    %eax,(%esp)
081685d7 +0x0438:  call   08168dae <+0xc0f>
081685dc +0x043d:  jmp    081685f9 <+0x45a>
081685de +0x043f:  mov    %edx,%ebx
081685e0 +0x0441:  mov    %eax,%esi
081685e2 +0x0443:  mov    0x8(%ebp),%eax
081685e5 +0x0446:  mov    %eax,(%esp)
081685e8 +0x0449:  call   081685a6 <+0x407>
081685ed +0x044e:  mov    %esi,%eax
081685ef +0x0450:  mov    %ebx,%edx
081685f1 +0x0452:  mov    %eax,(%esp)
081685f4 +0x0455:  call   08ae3750 <_Unwind_Resume>
081685f9 +0x045a:  mov    0x8(%ebp),%eax
081685fc +0x045d:  mov    %eax,(%esp)
081685ff +0x0460:  call   081685a6 <+0x407>
08168604 +0x0465:  add    $0x10,%esp
08168607 +0x0468:  pop    %ebx
08168608 +0x0469:  pop    %esi
08168609 +0x046a:  pop    %ebp
0816860a +0x046b:  ret
0816860b +0x046c:  nop
0816860c +0x046d:  push   %ebp
0816860d +0x046e:  mov    %esp,%ebp
0816860f +0x0470:  sub    $0x18,%esp
08168612 +0x0473:  mov    0x8(%ebp),%eax
08168615 +0x0476:  mov    %eax,(%esp)
08168618 +0x0479:  call   08168e10 <+0xc71>
0816861d +0x047e:  leave
0816861e +0x047f:  ret
0816861f +0x0480:  nop
08168620 +0x0481:  push   %ebp
08168621 +0x0482:  mov    %esp,%ebp
08168623 +0x0484:  sub    $0x18,%esp
08168626 +0x0487:  mov    0x8(%ebp),%eax
08168629 +0x048a:  mov    %eax,(%esp)
0816862c +0x048d:  call   08168e24 <+0xc85>
08168631 +0x0492:  leave
08168632 +0x0493:  ret
08168633 +0x0494:  nop
08168634 +0x0495:  push   %ebp
08168635 +0x0496:  mov    %esp,%ebp
08168637 +0x0498:  push   %esi
08168638 +0x0499:  push   %ebx
08168639 +0x049a:  sub    $0x10,%esp
0816863c +0x049d:  mov    0x8(%ebp),%eax
0816863f +0x04a0:  mov    %eax,(%esp)
08168642 +0x04a3:  call   08168e8e <+0xcef>
08168647 +0x04a8:  mov    %eax,0x4(%esp)
0816864b +0x04ac:  mov    0x8(%ebp),%eax
0816864e +0x04af:  mov    %eax,(%esp)
08168651 +0x04b2:  call   08168e38 <+0xc99>
08168656 +0x04b7:  jmp    08168673 <+0x4d4>
08168658 +0x04b9:  mov    %edx,%ebx
0816865a +0x04bb:  mov    %eax,%esi
0816865c +0x04bd:  mov    0x8(%ebp),%eax
0816865f +0x04c0:  mov    %eax,(%esp)
08168662 +0x04c3:  call   08168620 <+0x481>
08168667 +0x04c8:  mov    %esi,%eax
08168669 +0x04ca:  mov    %ebx,%edx
0816866b +0x04cc:  mov    %eax,(%esp)
0816866e +0x04cf:  call   08ae3750 <_Unwind_Resume>
08168673 +0x04d4:  mov    0x8(%ebp),%eax
08168676 +0x04d7:  mov    %eax,(%esp)
08168679 +0x04da:  call   08168620 <+0x481>
0816867e +0x04df:  add    $0x10,%esp
08168681 +0x04e2:  pop    %ebx
08168682 +0x04e3:  pop    %esi
08168683 +0x04e4:  pop    %ebp
08168684 +0x04e5:  ret
08168685 +0x04e6:  nop
08168686 +0x04e7:  push   %ebp
08168687 +0x04e8:  mov    %esp,%ebp
08168689 +0x04ea:  sub    $0x18,%esp
0816868c +0x04ed:  mov    0x8(%ebp),%eax
0816868f +0x04f0:  mov    %eax,(%esp)
08168692 +0x04f3:  call   08168eae <+0xd0f>
08168697 +0x04f8:  leave
08168698 +0x04f9:  ret
08168699 +0x04fa:  nop
0816869a +0x04fb:  push   %ebp
0816869b +0x04fc:  mov    %esp,%ebp
0816869d +0x04fe:  push   %esi
0816869e +0x04ff:  push   %ebx
0816869f +0x0500:  sub    $0x10,%esp
081686a2 +0x0503:  mov    0x8(%ebp),%eax
081686a5 +0x0506:  mov    %eax,(%esp)
081686a8 +0x0509:  call   08168f30 <+0xd91>
081686ad +0x050e:  mov    0x8(%ebp),%edx
081686b0 +0x0511:  mov    0x4(%edx),%ecx
081686b3 +0x0514:  mov    0x8(%ebp),%edx
081686b6 +0x0517:  mov    (%edx),%edx
081686b8 +0x0519:  mov    %eax,0x8(%esp)
081686bc +0x051d:  mov    %ecx,0x4(%esp)
081686c0 +0x0521:  mov    %edx,(%esp)
081686c3 +0x0524:  call   08168f38 <+0xd99>
081686c8 +0x0529:  jmp    081686e5 <+0x546>
081686ca +0x052b:  mov    %edx,%ebx
081686cc +0x052d:  mov    %eax,%esi
081686ce +0x052f:  mov    0x8(%ebp),%eax
081686d1 +0x0532:  mov    %eax,(%esp)
081686d4 +0x0535:  call   08168ec2 <+0xd23>
081686d9 +0x053a:  mov    %esi,%eax
081686db +0x053c:  mov    %ebx,%edx
081686dd +0x053e:  mov    %eax,(%esp)
081686e0 +0x0541:  call   08ae3750 <_Unwind_Resume>
081686e5 +0x0546:  mov    0x8(%ebp),%eax
081686e8 +0x0549:  mov    %eax,(%esp)
081686eb +0x054c:  call   08168ec2 <+0xd23>
081686f0 +0x0551:  add    $0x10,%esp
081686f3 +0x0554:  pop    %ebx
081686f4 +0x0555:  pop    %esi
081686f5 +0x0556:  pop    %ebp
081686f6 +0x0557:  ret
081686f7 +0x0558:  nop
081686f8 +0x0559:  push   %ebp
081686f9 +0x055a:  mov    %esp,%ebp
081686fb +0x055c:  push   %ebx
081686fc +0x055d:  sub    $0x14,%esp
081686ff +0x0560:  mov    0x8(%ebp),%ebx
08168702 +0x0563:  mov    0xc(%ebp),%eax
08168705 +0x0566:  mov    %eax,0x4(%esp)
08168709 +0x056a:  mov    %ebx,(%esp)
0816870c +0x056d:  call   08168f52 <+0xdb3>
08168711 +0x0572:  sub    $0x4,%esp
08168714 +0x0575:  mov    %ebx,%eax
08168716 +0x0577:  mov    -0x4(%ebp),%ebx
08168719 +0x057a:  leave
0816871a +0x057b:  ret    $0x4
0816871d +0x057e:  nop
0816871e +0x057f:  push   %ebp
0816871f +0x0580:  mov    %esp,%ebp
08168721 +0x0582:  push   %ebx
08168722 +0x0583:  sub    $0x14,%esp
08168725 +0x0586:  mov    0x8(%ebp),%ebx
08168728 +0x0589:  mov    0xc(%ebp),%eax
0816872b +0x058c:  mov    %eax,0x4(%esp)
0816872f +0x0590:  mov    %ebx,(%esp)
08168732 +0x0593:  call   08168f78 <+0xdd9>
08168737 +0x0598:  sub    $0x4,%esp
0816873a +0x059b:  mov    %ebx,%eax
0816873c +0x059d:  mov    -0x4(%ebp),%ebx
0816873f +0x05a0:  leave
08168740 +0x05a1:  ret    $0x4
08168743 +0x05a4:  nop
08168744 +0x05a5:  push   %ebp
08168745 +0x05a6:  mov    %esp,%ebp
08168747 +0x05a8:  mov    0x8(%ebp),%eax
0816874a +0x05ab:  mov    (%eax),%edx
0816874c +0x05ad:  mov    0xc(%ebp),%eax
0816874f +0x05b0:  mov    (%eax),%eax
08168751 +0x05b2:  cmp    %eax,%edx
08168753 +0x05b4:  setne  %al
08168756 +0x05b7:  pop    %ebp
08168757 +0x05b8:  ret
08168758 +0x05b9:  push   %ebp
08168759 +0x05ba:  mov    %esp,%ebp
0816875b +0x05bc:  sub    $0x18,%esp
0816875e +0x05bf:  mov    0x8(%ebp),%eax
08168761 +0x05c2:  mov    (%eax),%eax
08168763 +0x05c4:  mov    %eax,(%esp)
08168766 +0x05c7:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0816876b +0x05cc:  mov    0x8(%ebp),%edx
0816876e +0x05cf:  mov    %eax,(%edx)
08168770 +0x05d1:  mov    0x8(%ebp),%eax
08168773 +0x05d4:  leave
08168774 +0x05d5:  ret
08168775 +0x05d6:  nop
08168776 +0x05d7:  push   %ebp
08168777 +0x05d8:  mov    %esp,%ebp
08168779 +0x05da:  mov    0x8(%ebp),%eax
0816877c +0x05dd:  mov    (%eax),%eax
0816877e +0x05df:  add    $0x10,%eax
08168781 +0x05e2:  pop    %ebp
08168782 +0x05e3:  ret
08168783 +0x05e4:  nop
08168784 +0x05e5:  push   %ebp
08168785 +0x05e6:  mov    %esp,%ebp
08168787 +0x05e8:  sub    $0x28,%esp
0816878a +0x05eb:  mov    0x8(%ebp),%eax
0816878d +0x05ee:  mov    0x4(%eax),%edx
08168790 +0x05f1:  mov    0x8(%ebp),%eax
08168793 +0x05f4:  mov    0x8(%eax),%eax
08168796 +0x05f7:  cmp    %eax,%edx
08168798 +0x05f9:  je     081687c7 <+0x628>
0816879a +0x05fb:  mov    0x8(%ebp),%eax
0816879d +0x05fe:  mov    0x4(%eax),%edx
081687a0 +0x0601:  mov    0x8(%ebp),%eax
081687a3 +0x0604:  mov    0xc(%ebp),%ecx
081687a6 +0x0607:  mov    %ecx,0x8(%esp)
081687aa +0x060b:  mov    %edx,0x4(%esp)
081687ae +0x060f:  mov    %eax,(%esp)
081687b1 +0x0612:  call   08168f9e <+0xdff>
081687b6 +0x0617:  mov    0x8(%ebp),%eax
081687b9 +0x061a:  mov    0x4(%eax),%eax
081687bc +0x061d:  lea    0xc(%eax),%edx
081687bf +0x0620:  mov    0x8(%ebp),%eax
081687c2 +0x0623:  mov    %edx,0x4(%eax)
081687c5 +0x0626:  jmp    081687f5 <+0x656>
081687c7 +0x0628:  lea    -0xc(%ebp),%eax
081687ca +0x062b:  mov    0x8(%ebp),%edx
081687cd +0x062e:  mov    %edx,0x4(%esp)
081687d1 +0x0632:  mov    %eax,(%esp)
081687d4 +0x0635:  call   0816851a <+0x37b>
081687d9 +0x063a:  sub    $0x4,%esp
081687dc +0x063d:  mov    0xc(%ebp),%eax
081687df +0x0640:  mov    %eax,0x8(%esp)
081687e3 +0x0644:  mov    -0xc(%ebp),%eax
081687e6 +0x0647:  mov    %eax,0x4(%esp)
081687ea +0x064b:  mov    0x8(%ebp),%eax
081687ed +0x064e:  mov    %eax,(%esp)
081687f0 +0x0651:  call   08168fd2 <+0xe33>
081687f5 +0x0656:  leave
081687f6 +0x0657:  ret
081687f7 +0x0658:  nop
081687f8 +0x0659:  push   %ebp
081687f9 +0x065a:  mov    %esp,%ebp
081687fb +0x065c:  push   %ebx
081687fc +0x065d:  sub    $0x14,%esp
081687ff +0x0660:  mov    0x8(%ebp),%ebx
08168802 +0x0663:  mov    0xc(%ebp),%eax
08168805 +0x0666:  mov    0x10(%ebp),%edx
08168808 +0x0669:  mov    %edx,0x8(%esp)
0816880c +0x066d:  mov    %eax,0x4(%esp)
08168810 +0x0671:  mov    %ebx,(%esp)
08168813 +0x0674:  call   081692ac <+0x110d>
08168818 +0x0679:  sub    $0x4,%esp
0816881b +0x067c:  mov    %ebx,%eax
0816881d +0x067e:  mov    -0x4(%ebp),%ebx
08168820 +0x0681:  leave
08168821 +0x0682:  ret    $0x4
08168824 +0x0685:  push   %ebp
08168825 +0x0686:  mov    %esp,%ebp
08168827 +0x0688:  push   %ebx
08168828 +0x0689:  sub    $0x14,%esp
0816882b +0x068c:  mov    0x8(%ebp),%ebx
0816882e +0x068f:  mov    0xc(%ebp),%eax
08168831 +0x0692:  mov    %eax,0x4(%esp)
08168835 +0x0696:  mov    %ebx,(%esp)
08168838 +0x0699:  call   0816936a <+0x11cb>
0816883d +0x069e:  sub    $0x4,%esp
08168840 +0x06a1:  mov    %ebx,%eax
08168842 +0x06a3:  mov    -0x4(%ebp),%ebx
08168845 +0x06a6:  leave
08168846 +0x06a7:  ret    $0x4
08168849 +0x06aa:  nop
0816884a +0x06ab:  push   %ebp
0816884b +0x06ac:  mov    %esp,%ebp
0816884d +0x06ae:  mov    0x8(%ebp),%eax
08168850 +0x06b1:  mov    (%eax),%edx
08168852 +0x06b3:  mov    0xc(%ebp),%eax
08168855 +0x06b6:  mov    (%eax),%eax
08168857 +0x06b8:  cmp    %eax,%edx
08168859 +0x06ba:  setne  %al
0816885c +0x06bd:  pop    %ebp
0816885d +0x06be:  ret
0816885e +0x06bf:  push   %ebp
0816885f +0x06c0:  mov    %esp,%ebp
08168861 +0x06c2:  sub    $0x18,%esp
08168864 +0x06c5:  mov    0x8(%ebp),%eax
08168867 +0x06c8:  mov    0xc(%ebp),%edx
0816886a +0x06cb:  mov    %edx,0x4(%esp)
0816886e +0x06cf:  mov    %eax,(%esp)
08168871 +0x06d2:  call   08169390 <+0x11f1>
08168876 +0x06d7:  leave
08168877 +0x06d8:  ret
08168878 +0x06d9:  push   %ebp
08168879 +0x06da:  mov    %esp,%ebp
0816887b +0x06dc:  push   %edi
0816887c +0x06dd:  push   %esi
0816887d +0x06de:  push   %ebx
0816887e +0x06df:  sub    $0x2c,%esp
08168881 +0x06e2:  mov    0x8(%ebp),%ebx
08168884 +0x06e5:  mov    %ebx,%edi
08168886 +0x06e7:  mov    0x10(%ebp),%eax
08168889 +0x06ea:  mov    %eax,(%esp)
0816888c +0x06ed:  call   081693ef <+0x1250>
08168891 +0x06f2:  mov    %eax,%esi
08168893 +0x06f4:  mov    0xc(%ebp),%eax
08168896 +0x06f7:  mov    %eax,(%esp)
08168899 +0x06fa:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0816889e +0x06ff:  mov    (%eax),%eax
081688a0 +0x0701:  mov    %eax,-0x1c(%ebp)
081688a3 +0x0704:  mov    %esi,0x8(%esp)
081688a7 +0x0708:  lea    -0x1c(%ebp),%eax
081688aa +0x070b:  mov    %eax,0x4(%esp)
081688ae +0x070f:  mov    %edi,(%esp)
081688b1 +0x0712:  call   081693f8 <+0x1259>
081688b6 +0x0717:  mov    %ebx,%eax
081688b8 +0x0719:  mov    %ebx,%eax
081688ba +0x071b:  add    $0x2c,%esp
081688bd +0x071e:  pop    %ebx
081688be +0x071f:  pop    %esi
081688bf +0x0720:  pop    %edi
081688c0 +0x0721:  pop    %ebp
081688c1 +0x0722:  ret    $0x4
081688c4 +0x0725:  push   %ebp
081688c5 +0x0726:  mov    %esp,%ebp
081688c7 +0x0728:  sub    $0x18,%esp
081688ca +0x072b:  mov    0xc(%ebp),%eax
081688cd +0x072e:  mov    %eax,(%esp)
081688d0 +0x0731:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
081688d5 +0x0736:  mov    (%eax),%eax
081688d7 +0x0738:  mov    %eax,%edx
081688d9 +0x073a:  mov    0x8(%ebp),%eax
081688dc +0x073d:  mov    %edx,(%eax)
081688de +0x073f:  mov    0xc(%ebp),%eax
081688e1 +0x0742:  add    $0x4,%eax
081688e4 +0x0745:  mov    %eax,(%esp)
081688e7 +0x0748:  call   0816942f <+0x1290>
081688ec +0x074d:  mov    0x8(%ebp),%edx
081688ef +0x0750:  add    $0x4,%edx
081688f2 +0x0753:  mov    %eax,0x4(%esp)
081688f6 +0x0757:  mov    %edx,(%esp)
081688f9 +0x075a:  call   08169438 <+0x1299>
081688fe +0x075f:  leave
081688ff +0x0760:  ret
08168900 +0x0761:  push   %ebp
08168901 +0x0762:  mov    %esp,%ebp
08168903 +0x0764:  push   %ebx
08168904 +0x0765:  sub    $0x14,%esp
08168907 +0x0768:  mov    0x8(%ebp),%ebx
0816890a +0x076b:  mov    0xc(%ebp),%eax
0816890d +0x076e:  mov    0x10(%ebp),%edx
08168910 +0x0771:  mov    %edx,0x8(%esp)
08168914 +0x0775:  mov    %eax,0x4(%esp)
08168918 +0x0779:  mov    %ebx,(%esp)
0816891b +0x077c:  call   0816945a <+0x12bb>
08168920 +0x0781:  sub    $0x4,%esp
08168923 +0x0784:  mov    %ebx,%eax
08168925 +0x0786:  mov    -0x4(%ebp),%ebx
08168928 +0x0789:  leave
08168929 +0x078a:  ret    $0x4
0816892c +0x078d:  push   %ebp
0816892d +0x078e:  mov    %esp,%ebp
0816892f +0x0790:  mov    0x8(%ebp),%eax
08168932 +0x0793:  mov    (%eax),%edx
08168934 +0x0795:  mov    0xc(%ebp),%eax
08168937 +0x0798:  mov    (%eax),%eax
08168939 +0x079a:  cmp    %eax,%edx
0816893b +0x079c:  sete   %al
0816893e +0x079f:  pop    %ebp
0816893f +0x07a0:  ret
08168940 +0x07a1:  push   %ebp
08168941 +0x07a2:  mov    %esp,%ebp
08168943 +0x07a4:  mov    0x8(%ebp),%eax
08168946 +0x07a7:  mov    (%eax),%eax
08168948 +0x07a9:  add    $0x10,%eax
0816894b +0x07ac:  pop    %ebp
0816894c +0x07ad:  ret
0816894d +0x07ae:  nop
0816894e +0x07af:  push   %ebp
0816894f +0x07b0:  mov    %esp,%ebp
08168951 +0x07b2:  sub    $0x18,%esp
08168954 +0x07b5:  mov    0x8(%ebp),%eax
08168957 +0x07b8:  mov    (%eax),%eax
08168959 +0x07ba:  mov    %eax,(%esp)
0816895c +0x07bd:  call   0816962a <+0x148b>
08168961 +0x07c2:  leave
08168962 +0x07c3:  ret
08168963 +0x07c4:  nop
08168964 +0x07c5:  push   %ebp
08168965 +0x07c6:  mov    %esp,%ebp
08168967 +0x07c8:  push   %ebx
08168968 +0x07c9:  sub    $0x14,%esp
0816896b +0x07cc:  mov    0x8(%ebp),%ebx
0816896e +0x07cf:  mov    0xc(%ebp),%eax
08168971 +0x07d2:  mov    0x10(%ebp),%edx
08168974 +0x07d5:  mov    %edx,0x8(%esp)
08168978 +0x07d9:  mov    %eax,0x4(%esp)
0816897c +0x07dd:  mov    %ebx,(%esp)
0816897f +0x07e0:  call   08169694 <+0x14f5>
08168984 +0x07e5:  sub    $0x4,%esp
08168987 +0x07e8:  mov    %ebx,%eax
08168989 +0x07ea:  mov    -0x4(%ebp),%ebx
0816898c +0x07ed:  leave
0816898d +0x07ee:  ret    $0x4
08168990 +0x07f1:  push   %ebp
08168991 +0x07f2:  mov    %esp,%ebp
08168993 +0x07f4:  mov    0x8(%ebp),%eax
08168996 +0x07f7:  mov    (%eax),%edx
08168998 +0x07f9:  mov    0xc(%ebp),%eax
0816899b +0x07fc:  mov    (%eax),%eax
0816899d +0x07fe:  cmp    %eax,%edx
0816899f +0x0800:  sete   %al
081689a2 +0x0803:  pop    %ebp
081689a3 +0x0804:  ret
081689a4 +0x0805:  push   %ebp
081689a5 +0x0806:  mov    %esp,%ebp
081689a7 +0x0808:  mov    0x8(%ebp),%eax
081689aa +0x080b:  mov    0x4(%eax),%eax
081689ad +0x080e:  mov    %eax,%edx
081689af +0x0810:  mov    0x8(%ebp),%eax
081689b2 +0x0813:  mov    (%eax),%eax
081689b4 +0x0815:  mov    %edx,%ecx
081689b6 +0x0817:  sub    %eax,%ecx
081689b8 +0x0819:  mov    %ecx,%eax
081689ba +0x081b:  sar    $0x2,%eax
081689bd +0x081e:  imul   $0xaaaaaaab,%eax,%eax
081689c3 +0x0824:  pop    %ebp
081689c4 +0x0825:  ret
081689c5 +0x0826:  nop
081689c6 +0x0827:  push   %ebp
081689c7 +0x0828:  mov    %esp,%ebp
081689c9 +0x082a:  push   %ebx
081689ca +0x082b:  sub    $0x44,%esp
081689cd +0x082e:  lea    -0x20(%ebp),%eax
081689d0 +0x0831:  mov    0xc(%ebp),%edx
081689d3 +0x0834:  mov    %edx,0x8(%esp)
081689d7 +0x0838:  mov    0x8(%ebp),%edx
081689da +0x083b:  mov    %edx,0x4(%esp)
081689de +0x083f:  mov    %eax,(%esp)
081689e1 +0x0842:  call   08169752 <+0x15b3>
081689e6 +0x0847:  sub    $0x4,%esp
081689e9 +0x084a:  lea    -0x1c(%ebp),%eax
081689ec +0x084d:  mov    0x8(%ebp),%edx
081689ef +0x0850:  mov    %edx,0x4(%esp)
081689f3 +0x0854:  mov    %eax,(%esp)
081689f6 +0x0857:  call   0816871e <+0x57f>
081689fb +0x085c:  sub    $0x4,%esp
081689fe +0x085f:  lea    -0x1c(%ebp),%eax
08168a01 +0x0862:  mov    %eax,0x4(%esp)
08168a05 +0x0866:  lea    -0x20(%ebp),%eax
08168a08 +0x0869:  mov    %eax,(%esp)
08168a0b +0x086c:  call   08168990 <+0x7f1>
08168a10 +0x0871:  test   %al,%al
08168a12 +0x0873:  jne    08168a50 <+0x8b1>
08168a14 +0x0875:  lea    -0x20(%ebp),%eax
08168a17 +0x0878:  mov    %eax,(%esp)
08168a1a +0x087b:  call   081697a4 <+0x1605>
08168a1f +0x0880:  mov    %eax,%ebx
08168a21 +0x0882:  lea    -0x15(%ebp),%eax
08168a24 +0x0885:  mov    0x8(%ebp),%edx
08168a27 +0x0888:  mov    %edx,0x4(%esp)
08168a2b +0x088c:  mov    %eax,(%esp)
08168a2e +0x088f:  call   0816977e <+0x15df>
08168a33 +0x0894:  sub    $0x4,%esp
08168a36 +0x0897:  mov    %ebx,0x8(%esp)
08168a3a +0x089b:  mov    0xc(%ebp),%eax
08168a3d +0x089e:  mov    %eax,0x4(%esp)
08168a41 +0x08a2:  lea    -0x15(%ebp),%eax
08168a44 +0x08a5:  mov    %eax,(%esp)
08168a47 +0x08a8:  call   081697b2 <+0x1613>
08168a4c +0x08ad:  test   %al,%al
08168a4e +0x08af:  je     08168a57 <+0x8b8>
08168a50 +0x08b1:  mov    $0x1,%eax
08168a55 +0x08b6:  jmp    08168a5c <+0x8bd>
08168a57 +0x08b8:  mov    $0x0,%eax
08168a5c +0x08bd:  test   %al,%al
08168a5e +0x08bf:  je     08168aa9 <+0x90a>
08168a60 +0x08c1:  movl   $0x0,-0xc(%ebp)
08168a67 +0x08c8:  lea    -0xc(%ebp),%eax
08168a6a +0x08cb:  mov    %eax,0x8(%esp)
08168a6e +0x08cf:  mov    0xc(%ebp),%eax
08168a71 +0x08d2:  mov    %eax,0x4(%esp)
08168a75 +0x08d6:  lea    -0x14(%ebp),%eax
08168a78 +0x08d9:  mov    %eax,(%esp)
08168a7b +0x08dc:  call   081697c8 <+0x1629>
08168a80 +0x08e1:  lea    -0x2c(%ebp),%eax
08168a83 +0x08e4:  lea    -0x14(%ebp),%edx
08168a86 +0x08e7:  mov    %edx,0xc(%esp)
08168a8a +0x08eb:  mov    -0x20(%ebp),%edx
08168a8d +0x08ee:  mov    %edx,0x8(%esp)
08168a91 +0x08f2:  mov    0x8(%ebp),%edx
08168a94 +0x08f5:  mov    %edx,0x4(%esp)
08168a98 +0x08f9:  mov    %eax,(%esp)
08168a9b +0x08fc:  call   081697f6 <+0x1657>
08168aa0 +0x0901:  sub    $0x4,%esp
08168aa3 +0x0904:  mov    -0x2c(%ebp),%eax
08168aa6 +0x0907:  mov    %eax,-0x20(%ebp)
08168aa9 +0x090a:  lea    -0x20(%ebp),%eax
08168aac +0x090d:  mov    %eax,(%esp)
08168aaf +0x0910:  call   081697a4 <+0x1605>
08168ab4 +0x0915:  add    $0x4,%eax
08168ab7 +0x0918:  mov    -0x4(%ebp),%ebx
08168aba +0x091b:  leave
08168abb +0x091c:  ret
08168abc +0x091d:  push   %ebp
08168abd +0x091e:  mov    %esp,%ebp
08168abf +0x0920:  sub    $0x18,%esp
08168ac2 +0x0923:  mov    0x8(%ebp),%eax
08168ac5 +0x0926:  mov    %eax,(%esp)
08168ac8 +0x0929:  call   08169850 <+0x16b1>
08168acd +0x092e:  leave
08168ace +0x092f:  ret
08168acf +0x0930:  nop
08168ad0 +0x0931:  push   %ebp
08168ad1 +0x0932:  mov    %esp,%ebp
08168ad3 +0x0934:  push   %esi
08168ad4 +0x0935:  push   %ebx
08168ad5 +0x0936:  sub    $0x10,%esp
08168ad8 +0x0939:  mov    0x8(%ebp),%eax
08168adb +0x093c:  mov    %eax,(%esp)
08168ade +0x093f:  call   081698d2 <+0x1733>
08168ae3 +0x0944:  mov    0x8(%ebp),%edx
08168ae6 +0x0947:  mov    0x4(%edx),%ecx
08168ae9 +0x094a:  mov    0x8(%ebp),%edx
08168aec +0x094d:  mov    (%edx),%edx
08168aee +0x094f:  mov    %eax,0x8(%esp)
08168af2 +0x0953:  mov    %ecx,0x4(%esp)
08168af6 +0x0957:  mov    %edx,(%esp)
08168af9 +0x095a:  call   081698da <+0x173b>
08168afe +0x095f:  jmp    08168b1b <+0x97c>
08168b00 +0x0961:  mov    %edx,%ebx
08168b02 +0x0963:  mov    %eax,%esi
08168b04 +0x0965:  mov    0x8(%ebp),%eax
08168b07 +0x0968:  mov    %eax,(%esp)
08168b0a +0x096b:  call   08169864 <+0x16c5>
08168b0f +0x0970:  mov    %esi,%eax
08168b11 +0x0972:  mov    %ebx,%edx
08168b13 +0x0974:  mov    %eax,(%esp)
08168b16 +0x0977:  call   08ae3750 <_Unwind_Resume>
08168b1b +0x097c:  mov    0x8(%ebp),%eax
08168b1e +0x097f:  mov    %eax,(%esp)
08168b21 +0x0982:  call   08169864 <+0x16c5>
08168b26 +0x0987:  add    $0x10,%esp
08168b29 +0x098a:  pop    %ebx
08168b2a +0x098b:  pop    %esi
08168b2b +0x098c:  pop    %ebp
08168b2c +0x098d:  ret
08168b2d +0x098e:  nop
08168b2e +0x098f:  push   %ebp
08168b2f +0x0990:  mov    %esp,%ebp
08168b31 +0x0992:  push   %ebx
08168b32 +0x0993:  sub    $0x14,%esp
08168b35 +0x0996:  mov    0x8(%ebp),%ebx
08168b38 +0x0999:  mov    0xc(%ebp),%eax
08168b3b +0x099c:  mov    %eax,0x4(%esp)
08168b3f +0x09a0:  mov    %ebx,(%esp)
08168b42 +0x09a3:  call   081698f4 <+0x1755>
08168b47 +0x09a8:  mov    %ebx,%eax
08168b49 +0x09aa:  add    $0x14,%esp
08168b4c +0x09ad:  pop    %ebx
08168b4d +0x09ae:  pop    %ebp
08168b4e +0x09af:  ret    $0x4
08168b51 +0x09b2:  nop
08168b52 +0x09b3:  push   %ebp
08168b53 +0x09b4:  mov    %esp,%ebp
08168b55 +0x09b6:  push   %ebx
08168b56 +0x09b7:  sub    $0x14,%esp
08168b59 +0x09ba:  mov    0x8(%ebp),%ebx
08168b5c +0x09bd:  mov    0xc(%ebp),%eax
08168b5f +0x09c0:  add    $0x4,%eax
08168b62 +0x09c3:  mov    %eax,0x4(%esp)
08168b66 +0x09c7:  mov    %ebx,(%esp)
08168b69 +0x09ca:  call   081698f4 <+0x1755>
08168b6e +0x09cf:  mov    %ebx,%eax
08168b70 +0x09d1:  add    $0x14,%esp
08168b73 +0x09d4:  pop    %ebx
08168b74 +0x09d5:  pop    %ebp
08168b75 +0x09d6:  ret    $0x4
08168b78 +0x09d9:  push   %ebp
08168b79 +0x09da:  mov    %esp,%ebp
08168b7b +0x09dc:  push   %ebx
08168b7c +0x09dd:  sub    $0x14,%esp
08168b7f +0x09e0:  mov    0x8(%ebp),%eax
08168b82 +0x09e3:  mov    %eax,(%esp)
08168b85 +0x09e6:  call   08169904 <+0x1765>
08168b8a +0x09eb:  mov    (%eax),%ebx
08168b8c +0x09ed:  mov    0xc(%ebp),%eax
08168b8f +0x09f0:  mov    %eax,(%esp)
08168b92 +0x09f3:  call   08169904 <+0x1765>
08168b97 +0x09f8:  mov    (%eax),%eax
08168b99 +0x09fa:  cmp    %eax,%ebx
08168b9b +0x09fc:  setne  %al
08168b9e +0x09ff:  add    $0x14,%esp
08168ba1 +0x0a02:  pop    %ebx
08168ba2 +0x0a03:  pop    %ebp
08168ba3 +0x0a04:  ret
08168ba4 +0x0a05:  push   %ebp
08168ba5 +0x0a06:  mov    %esp,%ebp
08168ba7 +0x0a08:  mov    0x8(%ebp),%eax
08168baa +0x0a0b:  mov    (%eax),%eax
08168bac +0x0a0d:  lea    0x2c(%eax),%edx
08168baf +0x0a10:  mov    0x8(%ebp),%eax
08168bb2 +0x0a13:  mov    %edx,(%eax)
08168bb4 +0x0a15:  mov    0x8(%ebp),%eax
08168bb7 +0x0a18:  pop    %ebp
08168bb8 +0x0a19:  ret
08168bb9 +0x0a1a:  nop
08168bba +0x0a1b:  push   %ebp
08168bbb +0x0a1c:  mov    %esp,%ebp
08168bbd +0x0a1e:  mov    0x8(%ebp),%eax
08168bc0 +0x0a21:  mov    (%eax),%eax
08168bc2 +0x0a23:  pop    %ebp
08168bc3 +0x0a24:  ret
08168bc4 +0x0a25:  push   %ebp
08168bc5 +0x0a26:  mov    %esp,%ebp
08168bc7 +0x0a28:  mov    0x8(%ebp),%eax
08168bca +0x0a2b:  mov    (%eax),%eax
08168bcc +0x0a2d:  pop    %ebp
08168bcd +0x0a2e:  ret
08168bce +0x0a2f:  push   %ebp
08168bcf +0x0a30:  mov    %esp,%ebp
08168bd1 +0x0a32:  sub    $0x18,%esp
08168bd4 +0x0a35:  mov    0x8(%ebp),%eax
08168bd7 +0x0a38:  mov    (%eax),%eax
08168bd9 +0x0a3a:  mov    %eax,0x4(%esp)
08168bdd +0x0a3e:  mov    0x8(%ebp),%eax
08168be0 +0x0a41:  mov    %eax,(%esp)
08168be3 +0x0a44:  call   0816990c <+0x176d>
08168be8 +0x0a49:  leave
08168be9 +0x0a4a:  ret
08168bea +0x0a4b:  push   %ebp
08168beb +0x0a4c:  mov    %esp,%ebp
08168bed +0x0a4e:  mov    0x8(%ebp),%eax
08168bf0 +0x0a51:  mov    (%eax),%eax
08168bf2 +0x0a53:  pop    %ebp
08168bf3 +0x0a54:  ret
08168bf4 +0x0a55:  push   %ebp
08168bf5 +0x0a56:  mov    %esp,%ebp
08168bf7 +0x0a58:  sub    $0x18,%esp
08168bfa +0x0a5b:  mov    0x8(%ebp),%eax
08168bfd +0x0a5e:  mov    %eax,(%esp)
08168c00 +0x0a61:  call   08169942 <+0x17a3>
08168c05 +0x0a66:  leave
08168c06 +0x0a67:  ret
08168c07 +0x0a68:  nop
08168c08 +0x0a69:  push   %ebp
08168c09 +0x0a6a:  mov    %esp,%ebp
08168c0b +0x0a6c:  push   %esi
08168c0c +0x0a6d:  push   %ebx
08168c0d +0x0a6e:  sub    $0x10,%esp
08168c10 +0x0a71:  mov    0x8(%ebp),%eax
08168c13 +0x0a74:  mov    0x8(%eax),%eax
08168c16 +0x0a77:  mov    %eax,%edx
08168c18 +0x0a79:  mov    0x8(%ebp),%eax
08168c1b +0x0a7c:  mov    (%eax),%eax
08168c1d +0x0a7e:  mov    %edx,%ecx
08168c1f +0x0a80:  sub    %eax,%ecx
08168c21 +0x0a82:  mov    %ecx,%eax
08168c23 +0x0a84:  sar    %eax
08168c25 +0x0a86:  mov    %eax,%edx
08168c27 +0x0a88:  mov    0x8(%ebp),%eax
08168c2a +0x0a8b:  mov    (%eax),%eax
08168c2c +0x0a8d:  mov    %edx,0x8(%esp)
08168c30 +0x0a91:  mov    %eax,0x4(%esp)
08168c34 +0x0a95:  mov    0x8(%ebp),%eax
08168c37 +0x0a98:  mov    %eax,(%esp)
08168c3a +0x0a9b:  call   08169956 <+0x17b7>
08168c3f +0x0aa0:  jmp    08168c5c <+0xabd>
08168c41 +0x0aa2:  mov    %edx,%ebx
08168c43 +0x0aa4:  mov    %eax,%esi
08168c45 +0x0aa6:  mov    0x8(%ebp),%eax
08168c48 +0x0aa9:  mov    %eax,(%esp)
08168c4b +0x0aac:  call   08168bf4 <+0xa55>
08168c50 +0x0ab1:  mov    %esi,%eax
08168c52 +0x0ab3:  mov    %ebx,%edx
08168c54 +0x0ab5:  mov    %eax,(%esp)
08168c57 +0x0ab8:  call   08ae3750 <_Unwind_Resume>
08168c5c +0x0abd:  mov    0x8(%ebp),%eax
08168c5f +0x0ac0:  mov    %eax,(%esp)
08168c62 +0x0ac3:  call   08168bf4 <+0xa55>
08168c67 +0x0ac8:  add    $0x10,%esp
08168c6a +0x0acb:  pop    %ebx
08168c6b +0x0acc:  pop    %esi
08168c6c +0x0acd:  pop    %ebp
08168c6d +0x0ace:  ret
08168c6e +0x0acf:  push   %ebp
08168c6f +0x0ad0:  mov    %esp,%ebp
08168c71 +0x0ad2:  mov    0x8(%ebp),%eax
08168c74 +0x0ad5:  pop    %ebp
08168c75 +0x0ad6:  ret
08168c76 +0x0ad7:  push   %ebp
08168c77 +0x0ad8:  mov    %esp,%ebp
08168c79 +0x0ada:  sub    $0x18,%esp
08168c7c +0x0add:  mov    0xc(%ebp),%eax
08168c7f +0x0ae0:  mov    %eax,0x4(%esp)
08168c83 +0x0ae4:  mov    0x8(%ebp),%eax
08168c86 +0x0ae7:  mov    %eax,(%esp)
08168c89 +0x0aea:  call   0816997d <+0x17de>
08168c8e +0x0aef:  leave
08168c8f +0x0af0:  ret
08168c90 +0x0af1:  push   %ebp
08168c91 +0x0af2:  mov    %esp,%ebp
08168c93 +0x0af4:  sub    $0x18,%esp
08168c96 +0x0af7:  mov    0x8(%ebp),%eax
08168c99 +0x0afa:  mov    %eax,(%esp)
08168c9c +0x0afd:  call   081699c8 <+0x1829>
08168ca1 +0x0b02:  leave
08168ca2 +0x0b03:  ret
08168ca3 +0x0b04:  nop
08168ca4 +0x0b05:  push   %ebp
08168ca5 +0x0b06:  mov    %esp,%ebp
08168ca7 +0x0b08:  sub    $0x18,%esp
08168caa +0x0b0b:  mov    0x8(%ebp),%eax
08168cad +0x0b0e:  mov    %eax,(%esp)
08168cb0 +0x0b11:  call   08169998 <+0x17f9>
08168cb5 +0x0b16:  leave
08168cb6 +0x0b17:  ret
08168cb7 +0x0b18:  nop
08168cb8 +0x0b19:  push   %ebp
08168cb9 +0x0b1a:  mov    %esp,%ebp
08168cbb +0x0b1c:  push   %esi
08168cbc +0x0b1d:  push   %ebx
08168cbd +0x0b1e:  sub    $0x10,%esp
08168cc0 +0x0b21:  mov    0x8(%ebp),%eax
08168cc3 +0x0b24:  mov    0x8(%eax),%eax
08168cc6 +0x0b27:  mov    %eax,%edx
08168cc8 +0x0b29:  mov    0x8(%ebp),%eax
08168ccb +0x0b2c:  mov    (%eax),%eax
08168ccd +0x0b2e:  mov    %edx,%ecx
08168ccf +0x0b30:  sub    %eax,%ecx
08168cd1 +0x0b32:  mov    %ecx,%eax
08168cd3 +0x0b34:  sar    $0x3,%eax
08168cd6 +0x0b37:  mov    %eax,%edx
08168cd8 +0x0b39:  mov    0x8(%ebp),%eax
08168cdb +0x0b3c:  mov    (%eax),%eax
08168cdd +0x0b3e:  mov    %edx,0x8(%esp)
08168ce1 +0x0b42:  mov    %eax,0x4(%esp)
08168ce5 +0x0b46:  mov    0x8(%ebp),%eax
08168ce8 +0x0b49:  mov    %eax,(%esp)
08168ceb +0x0b4c:  call   081699dc <+0x183d>
08168cf0 +0x0b51:  jmp    08168d0d <+0xb6e>
08168cf2 +0x0b53:  mov    %edx,%ebx
08168cf4 +0x0b55:  mov    %eax,%esi
08168cf6 +0x0b57:  mov    0x8(%ebp),%eax
08168cf9 +0x0b5a:  mov    %eax,(%esp)
08168cfc +0x0b5d:  call   08168c90 <+0xaf1>
08168d01 +0x0b62:  mov    %esi,%eax
08168d03 +0x0b64:  mov    %ebx,%edx
08168d05 +0x0b66:  mov    %eax,(%esp)
08168d08 +0x0b69:  call   08ae3750 <_Unwind_Resume>
08168d0d +0x0b6e:  mov    0x8(%ebp),%eax
08168d10 +0x0b71:  mov    %eax,(%esp)
08168d13 +0x0b74:  call   08168c90 <+0xaf1>
08168d18 +0x0b79:  add    $0x10,%esp
08168d1b +0x0b7c:  pop    %ebx
08168d1c +0x0b7d:  pop    %esi
08168d1d +0x0b7e:  pop    %ebp
08168d1e +0x0b7f:  ret
08168d1f +0x0b80:  nop
08168d20 +0x0b81:  push   %ebp
08168d21 +0x0b82:  mov    %esp,%ebp
08168d23 +0x0b84:  mov    0x8(%ebp),%eax
08168d26 +0x0b87:  pop    %ebp
08168d27 +0x0b88:  ret
08168d28 +0x0b89:  push   %ebp
08168d29 +0x0b8a:  mov    %esp,%ebp
08168d2b +0x0b8c:  sub    $0x18,%esp
08168d2e +0x0b8f:  mov    0xc(%ebp),%eax
08168d31 +0x0b92:  mov    %eax,0x4(%esp)
08168d35 +0x0b96:  mov    0x8(%ebp),%eax
08168d38 +0x0b99:  mov    %eax,(%esp)
08168d3b +0x0b9c:  call   08169a03 <+0x1864>
08168d40 +0x0ba1:  leave
08168d41 +0x0ba2:  ret
08168d42 +0x0ba3:  push   %ebp
08168d43 +0x0ba4:  mov    %esp,%ebp
08168d45 +0x0ba6:  sub    $0x18,%esp
08168d48 +0x0ba9:  mov    0x8(%ebp),%eax
08168d4b +0x0bac:  mov    %eax,(%esp)
08168d4e +0x0baf:  call   08169a1e <+0x187f>
08168d53 +0x0bb4:  leave
08168d54 +0x0bb5:  ret
08168d55 +0x0bb6:  nop
08168d56 +0x0bb7:  push   %ebp
08168d57 +0x0bb8:  mov    %esp,%ebp
08168d59 +0x0bba:  mov    0xc(%ebp),%eax
08168d5c +0x0bbd:  mov    (%eax),%edx
08168d5e +0x0bbf:  mov    0x8(%ebp),%eax
08168d61 +0x0bc2:  mov    %edx,(%eax)
08168d63 +0x0bc4:  pop    %ebp
08168d64 +0x0bc5:  ret
08168d65 +0x0bc6:  nop
08168d66 +0x0bc7:  push   %ebp
08168d67 +0x0bc8:  mov    %esp,%ebp
08168d69 +0x0bca:  mov    0x8(%ebp),%eax
08168d6c +0x0bcd:  pop    %ebp
08168d6d +0x0bce:  ret
08168d6e +0x0bcf:  push   %ebp
08168d6f +0x0bd0:  mov    %esp,%ebp
08168d71 +0x0bd2:  mov    0xc(%ebp),%eax
08168d74 +0x0bd5:  mov    (%eax),%edx
08168d76 +0x0bd7:  mov    0x8(%ebp),%eax
08168d79 +0x0bda:  mov    %edx,(%eax)
08168d7b +0x0bdc:  pop    %ebp
08168d7c +0x0bdd:  ret
08168d7d +0x0bde:  nop
08168d7e +0x0bdf:  push   %ebp
08168d7f +0x0be0:  mov    %esp,%ebp
08168d81 +0x0be2:  mov    0x8(%ebp),%eax
08168d84 +0x0be5:  pop    %ebp
08168d85 +0x0be6:  ret
08168d86 +0x0be7:  push   %ebp
08168d87 +0x0be8:  mov    %esp,%ebp
08168d89 +0x0bea:  sub    $0x18,%esp
08168d8c +0x0bed:  mov    0x8(%ebp),%eax
08168d8f +0x0bf0:  mov    %eax,(%esp)
08168d92 +0x0bf3:  call   08169a4e <+0x18af>
08168d97 +0x0bf8:  leave
08168d98 +0x0bf9:  ret
08168d99 +0x0bfa:  nop
08168d9a +0x0bfb:  push   %ebp
08168d9b +0x0bfc:  mov    %esp,%ebp
08168d9d +0x0bfe:  sub    $0x18,%esp
08168da0 +0x0c01:  mov    0x8(%ebp),%eax
08168da3 +0x0c04:  mov    %eax,(%esp)
08168da6 +0x0c07:  call   08169a9e <+0x18ff>
08168dab +0x0c0c:  leave
08168dac +0x0c0d:  ret
08168dad +0x0c0e:  nop
08168dae +0x0c0f:  push   %ebp
08168daf +0x0c10:  mov    %esp,%ebp
08168db1 +0x0c12:  sub    $0x28,%esp
08168db4 +0x0c15:  jmp    08168df6 <+0xc57>
08168db6 +0x0c17:  mov    0xc(%ebp),%eax
08168db9 +0x0c1a:  mov    %eax,(%esp)
08168dbc +0x0c1d:  call   08169aa3 <+0x1904>
08168dc1 +0x0c22:  mov    %eax,0x4(%esp)
08168dc5 +0x0c26:  mov    0x8(%ebp),%eax
08168dc8 +0x0c29:  mov    %eax,(%esp)
08168dcb +0x0c2c:  call   08168dae <+0xc0f>
08168dd0 +0x0c31:  mov    0xc(%ebp),%eax
08168dd3 +0x0c34:  mov    %eax,(%esp)
08168dd6 +0x0c37:  call   08169aae <+0x190f>
08168ddb +0x0c3c:  mov    %eax,-0xc(%ebp)
08168dde +0x0c3f:  mov    0xc(%ebp),%eax
08168de1 +0x0c42:  mov    %eax,0x4(%esp)
08168de5 +0x0c46:  mov    0x8(%ebp),%eax
08168de8 +0x0c49:  mov    %eax,(%esp)
08168deb +0x0c4c:  call   08169aba <+0x191b>
08168df0 +0x0c51:  mov    -0xc(%ebp),%eax
08168df3 +0x0c54:  mov    %eax,0xc(%ebp)
08168df6 +0x0c57:  cmpl   $0x0,0xc(%ebp)
08168dfa +0x0c5b:  setne  %al
08168dfd +0x0c5e:  test   %al,%al
08168dff +0x0c60:  jne    08168db6 <+0xc17>
08168e01 +0x0c62:  leave
08168e02 +0x0c63:  ret
08168e03 +0x0c64:  nop
08168e04 +0x0c65:  push   %ebp
08168e05 +0x0c66:  mov    %esp,%ebp
08168e07 +0x0c68:  mov    0x8(%ebp),%eax
08168e0a +0x0c6b:  mov    0x8(%eax),%eax
08168e0d +0x0c6e:  pop    %ebp
08168e0e +0x0c6f:  ret
08168e0f +0x0c70:  nop
08168e10 +0x0c71:  push   %ebp
08168e11 +0x0c72:  mov    %esp,%ebp
08168e13 +0x0c74:  sub    $0x18,%esp
08168e16 +0x0c77:  mov    0x8(%ebp),%eax
08168e19 +0x0c7a:  mov    %eax,(%esp)
08168e1c +0x0c7d:  call   08169aee <+0x194f>
08168e21 +0x0c82:  leave
08168e22 +0x0c83:  ret
08168e23 +0x0c84:  nop
08168e24 +0x0c85:  push   %ebp
08168e25 +0x0c86:  mov    %esp,%ebp
08168e27 +0x0c88:  sub    $0x18,%esp
08168e2a +0x0c8b:  mov    0x8(%ebp),%eax
08168e2d +0x0c8e:  mov    %eax,(%esp)
08168e30 +0x0c91:  call   08169b3e <+0x199f>
08168e35 +0x0c96:  leave
08168e36 +0x0c97:  ret
08168e37 +0x0c98:  nop
08168e38 +0x0c99:  push   %ebp
08168e39 +0x0c9a:  mov    %esp,%ebp
08168e3b +0x0c9c:  sub    $0x28,%esp
08168e3e +0x0c9f:  jmp    08168e80 <+0xce1>
08168e40 +0x0ca1:  mov    0xc(%ebp),%eax
08168e43 +0x0ca4:  mov    %eax,(%esp)
08168e46 +0x0ca7:  call   08169b43 <+0x19a4>
08168e4b +0x0cac:  mov    %eax,0x4(%esp)
08168e4f +0x0cb0:  mov    0x8(%ebp),%eax
08168e52 +0x0cb3:  mov    %eax,(%esp)
08168e55 +0x0cb6:  call   08168e38 <+0xc99>
08168e5a +0x0cbb:  mov    0xc(%ebp),%eax
08168e5d +0x0cbe:  mov    %eax,(%esp)
08168e60 +0x0cc1:  call   08169b4e <+0x19af>
08168e65 +0x0cc6:  mov    %eax,-0xc(%ebp)
08168e68 +0x0cc9:  mov    0xc(%ebp),%eax
08168e6b +0x0ccc:  mov    %eax,0x4(%esp)
08168e6f +0x0cd0:  mov    0x8(%ebp),%eax
08168e72 +0x0cd3:  mov    %eax,(%esp)
08168e75 +0x0cd6:  call   08169b5a <+0x19bb>
08168e7a +0x0cdb:  mov    -0xc(%ebp),%eax
08168e7d +0x0cde:  mov    %eax,0xc(%ebp)
08168e80 +0x0ce1:  cmpl   $0x0,0xc(%ebp)
08168e84 +0x0ce5:  setne  %al
08168e87 +0x0ce8:  test   %al,%al
08168e89 +0x0cea:  jne    08168e40 <+0xca1>
08168e8b +0x0cec:  leave
08168e8c +0x0ced:  ret
08168e8d +0x0cee:  nop
08168e8e +0x0cef:  push   %ebp
08168e8f +0x0cf0:  mov    %esp,%ebp
08168e91 +0x0cf2:  mov    0x8(%ebp),%eax
08168e94 +0x0cf5:  mov    0x8(%eax),%eax
08168e97 +0x0cf8:  pop    %ebp
08168e98 +0x0cf9:  ret
08168e99 +0x0cfa:  nop
08168e9a +0x0cfb:  push   %ebp
08168e9b +0x0cfc:  mov    %esp,%ebp
08168e9d +0x0cfe:  sub    $0x18,%esp
08168ea0 +0x0d01:  mov    0x8(%ebp),%eax
08168ea3 +0x0d04:  mov    %eax,(%esp)
08168ea6 +0x0d07:  call   08169bbe <+0x1a1f>
08168eab +0x0d0c:  leave
08168eac +0x0d0d:  ret
08168ead +0x0d0e:  nop
08168eae +0x0d0f:  push   %ebp
08168eaf +0x0d10:  mov    %esp,%ebp
08168eb1 +0x0d12:  sub    $0x18,%esp
08168eb4 +0x0d15:  mov    0x8(%ebp),%eax
08168eb7 +0x0d18:  mov    %eax,(%esp)
08168eba +0x0d1b:  call   08169b8e <+0x19ef>
08168ebf +0x0d20:  leave
08168ec0 +0x0d21:  ret
08168ec1 +0x0d22:  nop
08168ec2 +0x0d23:  push   %ebp
08168ec3 +0x0d24:  mov    %esp,%ebp
08168ec5 +0x0d26:  push   %esi
08168ec6 +0x0d27:  push   %ebx
08168ec7 +0x0d28:  sub    $0x10,%esp
08168eca +0x0d2b:  mov    0x8(%ebp),%eax
08168ecd +0x0d2e:  mov    0x8(%eax),%eax
08168ed0 +0x0d31:  mov    %eax,%edx
08168ed2 +0x0d33:  mov    0x8(%ebp),%eax
08168ed5 +0x0d36:  mov    (%eax),%eax
08168ed7 +0x0d38:  mov    %edx,%ecx
08168ed9 +0x0d3a:  sub    %eax,%ecx
08168edb +0x0d3c:  mov    %ecx,%eax
08168edd +0x0d3e:  sar    $0x2,%eax
08168ee0 +0x0d41:  imul   $0xaaaaaaab,%eax,%eax
08168ee6 +0x0d47:  mov    %eax,%edx
08168ee8 +0x0d49:  mov    0x8(%ebp),%eax
08168eeb +0x0d4c:  mov    (%eax),%eax
08168eed +0x0d4e:  mov    %edx,0x8(%esp)
08168ef1 +0x0d52:  mov    %eax,0x4(%esp)
08168ef5 +0x0d56:  mov    0x8(%ebp),%eax
08168ef8 +0x0d59:  mov    %eax,(%esp)
08168efb +0x0d5c:  call   08169bd2 <+0x1a33>
08168f00 +0x0d61:  jmp    08168f1d <+0xd7e>
08168f02 +0x0d63:  mov    %edx,%ebx
08168f04 +0x0d65:  mov    %eax,%esi
08168f06 +0x0d67:  mov    0x8(%ebp),%eax
08168f09 +0x0d6a:  mov    %eax,(%esp)
08168f0c +0x0d6d:  call   08168e9a <+0xcfb>
08168f11 +0x0d72:  mov    %esi,%eax
08168f13 +0x0d74:  mov    %ebx,%edx
08168f15 +0x0d76:  mov    %eax,(%esp)
08168f18 +0x0d79:  call   08ae3750 <_Unwind_Resume>
08168f1d +0x0d7e:  mov    0x8(%ebp),%eax
08168f20 +0x0d81:  mov    %eax,(%esp)
08168f23 +0x0d84:  call   08168e9a <+0xcfb>
08168f28 +0x0d89:  add    $0x10,%esp
08168f2b +0x0d8c:  pop    %ebx
08168f2c +0x0d8d:  pop    %esi
08168f2d +0x0d8e:  pop    %ebp
08168f2e +0x0d8f:  ret
08168f2f +0x0d90:  nop
08168f30 +0x0d91:  push   %ebp
08168f31 +0x0d92:  mov    %esp,%ebp
08168f33 +0x0d94:  mov    0x8(%ebp),%eax
08168f36 +0x0d97:  pop    %ebp
08168f37 +0x0d98:  ret
08168f38 +0x0d99:  push   %ebp
08168f39 +0x0d9a:  mov    %esp,%ebp
08168f3b +0x0d9c:  sub    $0x18,%esp
08168f3e +0x0d9f:  mov    0xc(%ebp),%eax
08168f41 +0x0da2:  mov    %eax,0x4(%esp)
08168f45 +0x0da6:  mov    0x8(%ebp),%eax
08168f48 +0x0da9:  mov    %eax,(%esp)
08168f4b +0x0dac:  call   08169bf9 <+0x1a5a>
08168f50 +0x0db1:  leave
08168f51 +0x0db2:  ret
08168f52 +0x0db3:  push   %ebp
08168f53 +0x0db4:  mov    %esp,%ebp
08168f55 +0x0db6:  push   %ebx
08168f56 +0x0db7:  sub    $0x14,%esp
08168f59 +0x0dba:  mov    0x8(%ebp),%ebx
08168f5c +0x0dbd:  mov    0xc(%ebp),%eax
08168f5f +0x0dc0:  mov    0xc(%eax),%eax
08168f62 +0x0dc3:  mov    %eax,0x4(%esp)
08168f66 +0x0dc7:  mov    %ebx,(%esp)
08168f69 +0x0dca:  call   08169c14 <+0x1a75>
08168f6e +0x0dcf:  mov    %ebx,%eax
08168f70 +0x0dd1:  add    $0x14,%esp
08168f73 +0x0dd4:  pop    %ebx
08168f74 +0x0dd5:  pop    %ebp
08168f75 +0x0dd6:  ret    $0x4
08168f78 +0x0dd9:  push   %ebp
08168f79 +0x0dda:  mov    %esp,%ebp
08168f7b +0x0ddc:  push   %ebx
08168f7c +0x0ddd:  sub    $0x14,%esp
08168f7f +0x0de0:  mov    0x8(%ebp),%ebx
08168f82 +0x0de3:  mov    0xc(%ebp),%eax
08168f85 +0x0de6:  add    $0x4,%eax
08168f88 +0x0de9:  mov    %eax,0x4(%esp)
08168f8c +0x0ded:  mov    %ebx,(%esp)
08168f8f +0x0df0:  call   08169c14 <+0x1a75>
08168f94 +0x0df5:  mov    %ebx,%eax
08168f96 +0x0df7:  add    $0x14,%esp
08168f99 +0x0dfa:  pop    %ebx
08168f9a +0x0dfb:  pop    %ebp
08168f9b +0x0dfc:  ret    $0x4
08168f9e +0x0dff:  push   %ebp
08168f9f +0x0e00:  mov    %esp,%ebp
08168fa1 +0x0e02:  sub    $0x18,%esp
08168fa4 +0x0e05:  mov    0xc(%ebp),%eax
08168fa7 +0x0e08:  mov    %eax,0x4(%esp)
08168fab +0x0e0c:  movl   $0xc,(%esp)
08168fb2 +0x0e13:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08168fb7 +0x0e18:  mov    %eax,%edx
08168fb9 +0x0e1a:  test   %edx,%edx
08168fbb +0x0e1c:  je     08168fd0 <+0xe31>
08168fbd +0x0e1e:  mov    0x10(%ebp),%edx
08168fc0 +0x0e21:  mov    (%edx),%ecx
08168fc2 +0x0e23:  mov    %ecx,(%eax)
08168fc4 +0x0e25:  mov    0x4(%edx),%ecx
08168fc7 +0x0e28:  mov    %ecx,0x4(%eax)
08168fca +0x0e2b:  mov    0x8(%edx),%edx
08168fcd +0x0e2e:  mov    %edx,0x8(%eax)
08168fd0 +0x0e31:  leave
08168fd1 +0x0e32:  ret
08168fd2 +0x0e33:  push   %ebp
08168fd3 +0x0e34:  mov    %esp,%ebp
08168fd5 +0x0e36:  push   %esi
08168fd6 +0x0e37:  push   %ebx
08168fd7 +0x0e38:  sub    $0x30,%esp
08168fda +0x0e3b:  mov    0x8(%ebp),%eax
08168fdd +0x0e3e:  mov    0x4(%eax),%edx
08168fe0 +0x0e41:  mov    0x8(%ebp),%eax
08168fe3 +0x0e44:  mov    0x8(%eax),%eax
08168fe6 +0x0e47:  cmp    %eax,%edx
08168fe8 +0x0e49:  je     08169083 <+0xee4>
08168fee +0x0e4f:  mov    0x8(%ebp),%eax
08168ff1 +0x0e52:  mov    0x4(%eax),%eax
08168ff4 +0x0e55:  sub    $0xc,%eax
08168ff7 +0x0e58:  mov    %eax,(%esp)
08168ffa +0x0e5b:  call   08169c21 <+0x1a82>
08168fff +0x0e60:  mov    0x8(%ebp),%edx
08169002 +0x0e63:  mov    0x4(%edx),%ecx
08169005 +0x0e66:  mov    0x8(%ebp),%edx
08169008 +0x0e69:  mov    %eax,0x8(%esp)
0816900c +0x0e6d:  mov    %ecx,0x4(%esp)
08169010 +0x0e71:  mov    %edx,(%esp)
08169013 +0x0e74:  call   08169c2a <+0x1a8b>
08169018 +0x0e79:  mov    0x8(%ebp),%eax
0816901b +0x0e7c:  mov    0x4(%eax),%eax
0816901e +0x0e7f:  lea    0xc(%eax),%edx
08169021 +0x0e82:  mov    0x8(%ebp),%eax
08169024 +0x0e85:  mov    %edx,0x4(%eax)
08169027 +0x0e88:  mov    0x8(%ebp),%eax
0816902a +0x0e8b:  mov    0x4(%eax),%eax
0816902d +0x0e8e:  lea    -0xc(%eax),%esi
08169030 +0x0e91:  mov    0x8(%ebp),%eax
08169033 +0x0e94:  mov    0x4(%eax),%eax
08169036 +0x0e97:  lea    -0x18(%eax),%ebx
08169039 +0x0e9a:  lea    0xc(%ebp),%eax
0816903c +0x0e9d:  mov    %eax,(%esp)
0816903f +0x0ea0:  call   08168d7e <+0xbdf>
08169044 +0x0ea5:  mov    (%eax),%eax
08169046 +0x0ea7:  mov    %esi,0x8(%esp)
0816904a +0x0eab:  mov    %ebx,0x4(%esp)
0816904e +0x0eaf:  mov    %eax,(%esp)
08169051 +0x0eb2:  call   08169c78 <+0x1ad9>
08169056 +0x0eb7:  lea    0xc(%ebp),%eax
08169059 +0x0eba:  mov    %eax,(%esp)
0816905c +0x0ebd:  call   08168bea <+0xa4b>
08169061 +0x0ec2:  mov    %eax,%ebx
08169063 +0x0ec4:  mov    0x10(%ebp),%eax
08169066 +0x0ec7:  mov    %eax,(%esp)
08169069 +0x0eca:  call   08169cb0 <+0x1b11>
0816906e +0x0ecf:  mov    (%eax),%edx
08169070 +0x0ed1:  mov    %edx,(%ebx)
08169072 +0x0ed3:  mov    0x4(%eax),%edx
08169075 +0x0ed6:  mov    %edx,0x4(%ebx)
08169078 +0x0ed9:  mov    0x8(%eax),%eax
0816907b +0x0edc:  mov    %eax,0x8(%ebx)
0816907e +0x0edf:  jmp    081692a2 <+0x1103>
08169083 +0x0ee4:  movl   $"vector::_M_insert_aux",0x8(%esp)
0816908b +0x0eec:  movl   $0x1,0x4(%esp)
08169093 +0x0ef4:  mov    0x8(%ebp),%eax
08169096 +0x0ef7:  mov    %eax,(%esp)
08169099 +0x0efa:  call   08169cb8 <+0x1b19>
0816909e +0x0eff:  mov    %eax,-0x18(%ebp)
081690a1 +0x0f02:  lea    -0x1c(%ebp),%eax
081690a4 +0x0f05:  mov    0x8(%ebp),%edx
081690a7 +0x0f08:  mov    %edx,0x4(%esp)
081690ab +0x0f0c:  mov    %eax,(%esp)
081690ae +0x0f0f:  call   081684f6 <+0x357>
081690b3 +0x0f14:  sub    $0x4,%esp
081690b6 +0x0f17:  lea    -0x1c(%ebp),%eax
081690b9 +0x0f1a:  mov    %eax,0x4(%esp)
081690bd +0x0f1e:  lea    0xc(%ebp),%eax
081690c0 +0x0f21:  mov    %eax,(%esp)
081690c3 +0x0f24:  call   08169d5d <+0x1bbe>
081690c8 +0x0f29:  mov    %eax,-0x14(%ebp)
081690cb +0x0f2c:  mov    0x8(%ebp),%eax
081690ce +0x0f2f:  mov    -0x18(%ebp),%edx
081690d1 +0x0f32:  mov    %edx,0x4(%esp)
081690d5 +0x0f36:  mov    %eax,(%esp)
081690d8 +0x0f39:  call   08169d96 <+0x1bf7>
081690dd +0x0f3e:  mov    %eax,-0x10(%ebp)
081690e0 +0x0f41:  mov    -0x10(%ebp),%eax
081690e3 +0x0f44:  mov    %eax,-0xc(%ebp)
081690e6 +0x0f47:  mov    0x10(%ebp),%eax
081690e9 +0x0f4a:  mov    %eax,(%esp)
081690ec +0x0f4d:  call   08169cb0 <+0x1b11>
081690f1 +0x0f52:  mov    %eax,%ecx
081690f3 +0x0f54:  mov    -0x14(%ebp),%edx
081690f6 +0x0f57:  mov    %edx,%eax
081690f8 +0x0f59:  add    %eax,%eax
081690fa +0x0f5b:  add    %edx,%eax
081690fc +0x0f5d:  shl    $0x2,%eax
081690ff +0x0f60:  mov    %eax,%edx
08169101 +0x0f62:  add    -0x10(%ebp),%edx
08169104 +0x0f65:  mov    0x8(%ebp),%eax
08169107 +0x0f68:  mov    %ecx,0x8(%esp)
0816910b +0x0f6c:  mov    %edx,0x4(%esp)
0816910f +0x0f70:  mov    %eax,(%esp)
08169112 +0x0f73:  call   08168f9e <+0xdff>
08169117 +0x0f78:  movl   $0x0,-0xc(%ebp)
0816911e +0x0f7f:  mov    0x8(%ebp),%eax
08169121 +0x0f82:  mov    %eax,(%esp)
08169124 +0x0f85:  call   08168f30 <+0xd91>
08169129 +0x0f8a:  mov    %eax,%ebx
0816912b +0x0f8c:  lea    0xc(%ebp),%eax
0816912e +0x0f8f:  mov    %eax,(%esp)
08169131 +0x0f92:  call   08168d7e <+0xbdf>
08169136 +0x0f97:  mov    (%eax),%edx
08169138 +0x0f99:  mov    0x8(%ebp),%eax
0816913b +0x0f9c:  mov    (%eax),%eax
0816913d +0x0f9e:  mov    %ebx,0xc(%esp)
08169141 +0x0fa2:  mov    -0x10(%ebp),%ecx
08169144 +0x0fa5:  mov    %ecx,0x8(%esp)
08169148 +0x0fa9:  mov    %edx,0x4(%esp)
0816914c +0x0fad:  mov    %eax,(%esp)
0816914f +0x0fb0:  call   08169dc5 <+0x1c26>
08169154 +0x0fb5:  mov    %eax,-0xc(%ebp)
08169157 +0x0fb8:  addl   $0xc,-0xc(%ebp)
0816915b +0x0fbc:  mov    0x8(%ebp),%eax
0816915e +0x0fbf:  mov    %eax,(%esp)
08169161 +0x0fc2:  call   08168f30 <+0xd91>
08169166 +0x0fc7:  mov    %eax,%ebx
08169168 +0x0fc9:  mov    0x8(%ebp),%eax
0816916b +0x0fcc:  mov    0x4(%eax),%esi
0816916e +0x0fcf:  lea    0xc(%ebp),%eax
08169171 +0x0fd2:  mov    %eax,(%esp)
08169174 +0x0fd5:  call   08168d7e <+0xbdf>
08169179 +0x0fda:  mov    (%eax),%eax
0816917b +0x0fdc:  mov    %ebx,0xc(%esp)
0816917f +0x0fe0:  mov    -0xc(%ebp),%edx
08169182 +0x0fe3:  mov    %edx,0x8(%esp)
08169186 +0x0fe7:  mov    %esi,0x4(%esp)
0816918a +0x0feb:  mov    %eax,(%esp)
0816918d +0x0fee:  call   08169dc5 <+0x1c26>
08169192 +0x0ff3:  mov    %eax,-0xc(%ebp)
08169195 +0x0ff6:  mov    0x8(%ebp),%eax
08169198 +0x0ff9:  mov    %eax,(%esp)
0816919b +0x0ffc:  call   08168f30 <+0xd91>
081691a0 +0x1001:  mov    0x8(%ebp),%edx
081691a3 +0x1004:  mov    0x4(%edx),%ecx
081691a6 +0x1007:  mov    0x8(%ebp),%edx
081691a9 +0x100a:  mov    (%edx),%edx
081691ab +0x100c:  mov    %eax,0x8(%esp)
081691af +0x1010:  mov    %ecx,0x4(%esp)
081691b3 +0x1014:  mov    %edx,(%esp)
081691b6 +0x1017:  call   08168f38 <+0xd99>
081691bb +0x101c:  mov    0x8(%ebp),%eax
081691be +0x101f:  mov    0x8(%eax),%eax
081691c1 +0x1022:  mov    %eax,%edx
081691c3 +0x1024:  mov    0x8(%ebp),%eax
081691c6 +0x1027:  mov    (%eax),%eax
081691c8 +0x1029:  mov    %edx,%ecx
081691ca +0x102b:  sub    %eax,%ecx
081691cc +0x102d:  mov    %ecx,%eax
081691ce +0x102f:  sar    $0x2,%eax
081691d1 +0x1032:  imul   $0xaaaaaaab,%eax,%eax
081691d7 +0x1038:  mov    %eax,%ecx
081691d9 +0x103a:  mov    0x8(%ebp),%eax
081691dc +0x103d:  mov    (%eax),%edx
081691de +0x103f:  mov    0x8(%ebp),%eax
081691e1 +0x1042:  mov    %ecx,0x8(%esp)
081691e5 +0x1046:  mov    %edx,0x4(%esp)
081691e9 +0x104a:  mov    %eax,(%esp)
081691ec +0x104d:  call   08169bd2 <+0x1a33>
081691f1 +0x1052:  mov    0x8(%ebp),%eax
081691f4 +0x1055:  mov    -0x10(%ebp),%edx
081691f7 +0x1058:  mov    %edx,(%eax)
081691f9 +0x105a:  mov    0x8(%ebp),%eax
081691fc +0x105d:  mov    -0xc(%ebp),%edx
081691ff +0x1060:  mov    %edx,0x4(%eax)
08169202 +0x1063:  mov    -0x18(%ebp),%edx
08169205 +0x1066:  mov    %edx,%eax
08169207 +0x1068:  add    %eax,%eax
08169209 +0x106a:  add    %edx,%eax
0816920b +0x106c:  shl    $0x2,%eax
0816920e +0x106f:  mov    %eax,%edx
08169210 +0x1071:  add    -0x10(%ebp),%edx
08169213 +0x1074:  mov    0x8(%ebp),%eax
08169216 +0x1077:  mov    %edx,0x8(%eax)
08169219 +0x107a:  jmp    081692a2 <+0x1103>
0816921e +0x107f:  mov    %eax,(%esp)
08169221 +0x1082:  call   08725ce0 <__cxa_begin_catch>
08169226 +0x1087:  cmpl   $0x0,-0xc(%ebp)
0816922a +0x108b:  jne    0816924e <+0x10af>
0816922c +0x108d:  mov    -0x14(%ebp),%edx
0816922f +0x1090:  mov    %edx,%eax
08169231 +0x1092:  add    %eax,%eax
08169233 +0x1094:  add    %edx,%eax
08169235 +0x1096:  shl    $0x2,%eax
08169238 +0x1099:  mov    %eax,%edx
0816923a +0x109b:  add    -0x10(%ebp),%edx
0816923d +0x109e:  mov    0x8(%ebp),%eax
08169240 +0x10a1:  mov    %edx,0x4(%esp)
08169244 +0x10a5:  mov    %eax,(%esp)
08169247 +0x10a8:  call   08169e1e <+0x1c7f>
0816924c +0x10ad:  jmp    0816926f <+0x10d0>
0816924e +0x10af:  mov    0x8(%ebp),%eax
08169251 +0x10b2:  mov    %eax,(%esp)
08169254 +0x10b5:  call   08168f30 <+0xd91>
08169259 +0x10ba:  mov    %eax,0x8(%esp)
0816925d +0x10be:  mov    -0xc(%ebp),%eax
08169260 +0x10c1:  mov    %eax,0x4(%esp)
08169264 +0x10c5:  mov    -0x10(%ebp),%eax
08169267 +0x10c8:  mov    %eax,(%esp)
0816926a +0x10cb:  call   08168f38 <+0xd99>
0816926f +0x10d0:  mov    0x8(%ebp),%eax
08169272 +0x10d3:  mov    -0x18(%ebp),%edx
08169275 +0x10d6:  mov    %edx,0x8(%esp)
08169279 +0x10da:  mov    -0x10(%ebp),%edx
0816927c +0x10dd:  mov    %edx,0x4(%esp)
08169280 +0x10e1:  mov    %eax,(%esp)
08169283 +0x10e4:  call   08169bd2 <+0x1a33>
08169288 +0x10e9:  call   08724be0 <__cxa_rethrow>
0816928d +0x10ee:  mov    %edx,%ebx
0816928f +0x10f0:  mov    %eax,%esi
08169291 +0x10f2:  call   08725c30 <__cxa_end_catch>
08169296 +0x10f7:  mov    %esi,%eax
08169298 +0x10f9:  mov    %ebx,%edx
0816929a +0x10fb:  mov    %eax,(%esp)
0816929d +0x10fe:  call   08ae3750 <_Unwind_Resume>
081692a2 +0x1103:  lea    -0x8(%ebp),%esp
081692a5 +0x1106:  add    $0x0,%esp
081692a8 +0x1109:  pop    %ebx
081692a9 +0x110a:  pop    %esi
081692aa +0x110b:  pop    %ebp
081692ab +0x110c:  ret
081692ac +0x110d:  push   %ebp
081692ad +0x110e:  mov    %esp,%ebp
081692af +0x1110:  push   %esi
081692b0 +0x1111:  push   %ebx
081692b1 +0x1112:  sub    $0x30,%esp
081692b4 +0x1115:  mov    0x8(%ebp),%ebx
081692b7 +0x1118:  mov    0xc(%ebp),%eax
081692ba +0x111b:  mov    %eax,(%esp)
081692bd +0x111e:  call   08169e32 <+0x1c93>
081692c2 +0x1123:  mov    %eax,%esi
081692c4 +0x1125:  mov    0xc(%ebp),%eax
081692c7 +0x1128:  mov    %eax,(%esp)
081692ca +0x112b:  call   08168e8e <+0xcef>
081692cf +0x1130:  lea    -0x10(%ebp),%edx
081692d2 +0x1133:  mov    0x10(%ebp),%ecx
081692d5 +0x1136:  mov    %ecx,0x10(%esp)
081692d9 +0x113a:  mov    %esi,0xc(%esp)
081692dd +0x113e:  mov    %eax,0x8(%esp)
081692e1 +0x1142:  mov    0xc(%ebp),%eax
081692e4 +0x1145:  mov    %eax,0x4(%esp)
081692e8 +0x1149:  mov    %edx,(%esp)
081692eb +0x114c:  call   08169e3e <+0x1c9f>
081692f0 +0x1151:  sub    $0x4,%esp
081692f3 +0x1154:  lea    -0xc(%ebp),%eax
081692f6 +0x1157:  mov    0xc(%ebp),%edx
081692f9 +0x115a:  mov    %edx,0x4(%esp)
081692fd +0x115e:  mov    %eax,(%esp)
08169300 +0x1161:  call   0816936a <+0x11cb>
08169305 +0x1166:  sub    $0x4,%esp
08169308 +0x1169:  lea    -0xc(%ebp),%eax
0816930b +0x116c:  mov    %eax,0x4(%esp)
0816930f +0x1170:  lea    -0x10(%ebp),%eax
08169312 +0x1173:  mov    %eax,(%esp)
08169315 +0x1176:  call   0816892c <+0x78d>
0816931a +0x117b:  test   %al,%al
0816931c +0x117d:  jne    08169343 <+0x11a4>
0816931e +0x117f:  mov    -0x10(%ebp),%eax
08169321 +0x1182:  mov    %eax,(%esp)
08169324 +0x1185:  call   08169eba <+0x1d1b>
08169329 +0x118a:  mov    0xc(%ebp),%edx
0816932c +0x118d:  mov    %eax,0x8(%esp)
08169330 +0x1191:  mov    0x10(%ebp),%eax
08169333 +0x1194:  mov    %eax,0x4(%esp)
08169337 +0x1198:  mov    %edx,(%esp)
0816933a +0x119b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0816933f +0x11a0:  test   %al,%al
08169341 +0x11a2:  je     08169357 <+0x11b8>
08169343 +0x11a4:  mov    0xc(%ebp),%eax
08169346 +0x11a7:  mov    %eax,0x4(%esp)
0816934a +0x11ab:  mov    %ebx,(%esp)
0816934d +0x11ae:  call   0816936a <+0x11cb>
08169352 +0x11b3:  sub    $0x4,%esp
08169355 +0x11b6:  jmp    0816935c <+0x11bd>
08169357 +0x11b8:  mov    -0x10(%ebp),%eax
0816935a +0x11bb:  mov    %eax,(%ebx)
0816935c +0x11bd:  mov    %ebx,%eax
0816935e +0x11bf:  lea    -0x8(%ebp),%esp
08169361 +0x11c2:  add    $0x0,%esp
08169364 +0x11c5:  pop    %ebx
08169365 +0x11c6:  pop    %esi
08169366 +0x11c7:  pop    %ebp
08169367 +0x11c8:  ret    $0x4
0816936a +0x11cb:  push   %ebp
0816936b +0x11cc:  mov    %esp,%ebp
0816936d +0x11ce:  push   %ebx
0816936e +0x11cf:  sub    $0x14,%esp
08169371 +0x11d2:  mov    0x8(%ebp),%ebx
08169374 +0x11d5:  mov    0xc(%ebp),%eax
08169377 +0x11d8:  add    $0x4,%eax
0816937a +0x11db:  mov    %eax,0x4(%esp)
0816937e +0x11df:  mov    %ebx,(%esp)
08169381 +0x11e2:  call   08169edc <+0x1d3d>
08169386 +0x11e7:  mov    %ebx,%eax
08169388 +0x11e9:  add    $0x14,%esp
0816938b +0x11ec:  pop    %ebx
0816938c +0x11ed:  pop    %ebp
0816938d +0x11ee:  ret    $0x4
08169390 +0x11f1:  push   %ebp
08169391 +0x11f2:  mov    %esp,%ebp
08169393 +0x11f4:  sub    $0x28,%esp
08169396 +0x11f7:  lea    -0x14(%ebp),%eax
08169399 +0x11fa:  mov    0xc(%ebp),%edx
0816939c +0x11fd:  mov    %edx,0x8(%esp)
081693a0 +0x1201:  mov    0x8(%ebp),%edx
081693a3 +0x1204:  mov    %edx,0x4(%esp)
081693a7 +0x1208:  mov    %eax,(%esp)
081693aa +0x120b:  call   08169eea <+0x1d4b>
081693af +0x1210:  sub    $0x4,%esp
081693b2 +0x1213:  mov    0x8(%ebp),%eax
081693b5 +0x1216:  mov    %eax,(%esp)
081693b8 +0x1219:  call   0816a078 <+0x1ed9>
081693bd +0x121e:  mov    %eax,-0xc(%ebp)
081693c0 +0x1221:  mov    -0x10(%ebp),%eax
081693c3 +0x1224:  mov    %eax,0x8(%esp)
081693c7 +0x1228:  mov    -0x14(%ebp),%eax
081693ca +0x122b:  mov    %eax,0x4(%esp)
081693ce +0x122f:  mov    0x8(%ebp),%eax
081693d1 +0x1232:  mov    %eax,(%esp)
081693d4 +0x1235:  call   0816a084 <+0x1ee5>
081693d9 +0x123a:  mov    0x8(%ebp),%eax
081693dc +0x123d:  mov    %eax,(%esp)
081693df +0x1240:  call   0816a078 <+0x1ed9>
081693e4 +0x1245:  mov    -0xc(%ebp),%edx
081693e7 +0x1248:  mov    %edx,%ecx
081693e9 +0x124a:  sub    %eax,%ecx
081693eb +0x124c:  mov    %ecx,%eax
081693ed +0x124e:  leave
081693ee +0x124f:  ret
081693ef +0x1250:  push   %ebp
081693f0 +0x1251:  mov    %esp,%ebp
081693f2 +0x1253:  mov    0x8(%ebp),%eax
081693f5 +0x1256:  pop    %ebp
081693f6 +0x1257:  ret
081693f7 +0x1258:  nop
081693f8 +0x1259:  push   %ebp
081693f9 +0x125a:  mov    %esp,%ebp
081693fb +0x125c:  sub    $0x18,%esp
081693fe +0x125f:  mov    0xc(%ebp),%eax
08169401 +0x1262:  mov    %eax,(%esp)
08169404 +0x1265:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
08169409 +0x126a:  mov    (%eax),%edx
0816940b +0x126c:  mov    0x8(%ebp),%eax
0816940e +0x126f:  mov    %edx,(%eax)
08169410 +0x1271:  mov    0x10(%ebp),%eax
08169413 +0x1274:  mov    %eax,(%esp)
08169416 +0x1277:  call   081693ef <+0x1250>
0816941b +0x127c:  mov    0x8(%ebp),%edx
0816941e +0x127f:  add    $0x4,%edx
08169421 +0x1282:  mov    %eax,0x4(%esp)
08169425 +0x1286:  mov    %edx,(%esp)
08169428 +0x1289:  call   0816a144 <+0x1fa5>
0816942d +0x128e:  leave
0816942e +0x128f:  ret
0816942f +0x1290:  push   %ebp
08169430 +0x1291:  mov    %esp,%ebp
08169432 +0x1293:  mov    0x8(%ebp),%eax
08169435 +0x1296:  pop    %ebp
08169436 +0x1297:  ret
08169437 +0x1298:  nop
08169438 +0x1299:  push   %ebp
08169439 +0x129a:  mov    %esp,%ebp
0816943b +0x129c:  sub    $0x18,%esp
0816943e +0x129f:  mov    0xc(%ebp),%eax
08169441 +0x12a2:  mov    %eax,(%esp)
08169444 +0x12a5:  call   0816a1f8 <+0x2059>
08169449 +0x12aa:  mov    0x8(%ebp),%edx
0816944c +0x12ad:  mov    %eax,0x4(%esp)
08169450 +0x12b1:  mov    %edx,(%esp)
08169453 +0x12b4:  call   0816a200 <+0x2061>
08169458 +0x12b9:  leave
08169459 +0x12ba:  ret
0816945a +0x12bb:  push   %ebp
0816945b +0x12bc:  mov    %esp,%ebp
0816945d +0x12be:  push   %esi
0816945e +0x12bf:  push   %ebx
0816945f +0x12c0:  sub    $0x50,%esp
08169462 +0x12c3:  mov    0x8(%ebp),%ebx
08169465 +0x12c6:  mov    0xc(%ebp),%eax
08169468 +0x12c9:  mov    %eax,(%esp)
0816946b +0x12cc:  call   08168e8e <+0xcef>
08169470 +0x12d1:  mov    %eax,-0x14(%ebp)
08169473 +0x12d4:  mov    0xc(%ebp),%eax
08169476 +0x12d7:  mov    %eax,(%esp)
08169479 +0x12da:  call   08169e32 <+0x1c93>
0816947e +0x12df:  mov    %eax,-0x10(%ebp)
08169481 +0x12e2:  movb   $0x1,-0x9(%ebp)
08169485 +0x12e6:  jmp    081694e3 <+0x1344>
08169487 +0x12e8:  mov    -0x14(%ebp),%eax
0816948a +0x12eb:  mov    %eax,-0x10(%ebp)
0816948d +0x12ee:  mov    -0x14(%ebp),%eax
08169490 +0x12f1:  mov    %eax,(%esp)
08169493 +0x12f4:  call   0816a26a <+0x20cb>
08169498 +0x12f9:  mov    %eax,%esi
0816949a +0x12fb:  mov    0x10(%ebp),%eax
0816949d +0x12fe:  mov    %eax,0x4(%esp)
081694a1 +0x1302:  lea    -0x2d(%ebp),%eax
081694a4 +0x1305:  mov    %eax,(%esp)
081694a7 +0x1308:  call   0816a262 <+0x20c3>
081694ac +0x130d:  mov    0xc(%ebp),%edx
081694af +0x1310:  mov    %esi,0x8(%esp)
081694b3 +0x1314:  mov    %eax,0x4(%esp)
081694b7 +0x1318:  mov    %edx,(%esp)
081694ba +0x131b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081694bf +0x1320:  mov    %al,-0x9(%ebp)
081694c2 +0x1323:  cmpb   $0x0,-0x9(%ebp)
081694c6 +0x1327:  je     081694d5 <+0x1336>
081694c8 +0x1329:  mov    -0x14(%ebp),%eax
081694cb +0x132c:  mov    %eax,(%esp)
081694ce +0x132f:  call   08169b4e <+0x19af>
081694d3 +0x1334:  jmp    081694e0 <+0x1341>
081694d5 +0x1336:  mov    -0x14(%ebp),%eax
081694d8 +0x1339:  mov    %eax,(%esp)
081694db +0x133c:  call   08169b43 <+0x19a4>
081694e0 +0x1341:  mov    %eax,-0x14(%ebp)
081694e3 +0x1344:  cmpl   $0x0,-0x14(%ebp)
081694e7 +0x1348:  setne  %al
081694ea +0x134b:  test   %al,%al
081694ec +0x134d:  jne    08169487 <+0x12e8>
081694ee +0x134f:  mov    -0x10(%ebp),%eax
081694f1 +0x1352:  mov    %eax,0x4(%esp)
081694f5 +0x1356:  lea    -0x34(%ebp),%eax
081694f8 +0x1359:  mov    %eax,(%esp)
081694fb +0x135c:  call   08169edc <+0x1d3d>
08169500 +0x1361:  cmpb   $0x0,-0x9(%ebp)
08169504 +0x1365:  je     08169585 <+0x13e6>
08169506 +0x1367:  lea    -0x2c(%ebp),%eax
08169509 +0x136a:  mov    0xc(%ebp),%edx
0816950c +0x136d:  mov    %edx,0x4(%esp)
08169510 +0x1371:  mov    %eax,(%esp)
08169513 +0x1374:  call   0816a28c <+0x20ed>
08169518 +0x1379:  sub    $0x4,%esp
0816951b +0x137c:  lea    -0x2c(%ebp),%eax
0816951e +0x137f:  mov    %eax,0x4(%esp)
08169522 +0x1383:  lea    -0x34(%ebp),%eax
08169525 +0x1386:  mov    %eax,(%esp)
08169528 +0x1389:  call   0816892c <+0x78d>
0816952d +0x138e:  test   %al,%al
0816952f +0x1390:  je     0816957a <+0x13db>
08169531 +0x1392:  movb   $0x1,-0x25(%ebp)
08169535 +0x1396:  mov    -0x10(%ebp),%ecx
08169538 +0x1399:  mov    -0x14(%ebp),%edx
0816953b +0x139c:  lea    -0x24(%ebp),%eax
0816953e +0x139f:  mov    0x10(%ebp),%esi
08169541 +0x13a2:  mov    %esi,0x10(%esp)
08169545 +0x13a6:  mov    %ecx,0xc(%esp)
08169549 +0x13aa:  mov    %edx,0x8(%esp)
0816954d +0x13ae:  mov    0xc(%ebp),%edx
08169550 +0x13b1:  mov    %edx,0x4(%esp)
08169554 +0x13b5:  mov    %eax,(%esp)
08169557 +0x13b8:  call   0816a2b2 <+0x2113>
0816955c +0x13bd:  sub    $0x4,%esp
0816955f +0x13c0:  lea    -0x25(%ebp),%eax
08169562 +0x13c3:  mov    %eax,0x8(%esp)
08169566 +0x13c7:  lea    -0x24(%ebp),%eax
08169569 +0x13ca:  mov    %eax,0x4(%esp)
0816956d +0x13ce:  mov    %ebx,(%esp)
08169570 +0x13d1:  call   0816a37a <+0x21db>
08169575 +0x13d6:  jmp    0816961b <+0x147c>
0816957a +0x13db:  lea    -0x34(%ebp),%eax
0816957d +0x13de:  mov    %eax,(%esp)
08169580 +0x13e1:  call   0816a3a8 <+0x2209>
08169585 +0x13e6:  mov    0x10(%ebp),%eax
08169588 +0x13e9:  mov    %eax,0x4(%esp)
0816958c +0x13ed:  lea    -0x1e(%ebp),%eax
0816958f +0x13f0:  mov    %eax,(%esp)
08169592 +0x13f3:  call   0816a262 <+0x20c3>
08169597 +0x13f8:  mov    %eax,%esi
08169599 +0x13fa:  mov    -0x34(%ebp),%eax
0816959c +0x13fd:  mov    %eax,(%esp)
0816959f +0x1400:  call   08169eba <+0x1d1b>
081695a4 +0x1405:  mov    0xc(%ebp),%edx
081695a7 +0x1408:  mov    %esi,0x8(%esp)
081695ab +0x140c:  mov    %eax,0x4(%esp)
081695af +0x1410:  mov    %edx,(%esp)
081695b2 +0x1413:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081695b7 +0x1418:  test   %al,%al
081695b9 +0x141a:  je     08169601 <+0x1462>
081695bb +0x141c:  movb   $0x1,-0x1d(%ebp)
081695bf +0x1420:  mov    -0x10(%ebp),%ecx
081695c2 +0x1423:  mov    -0x14(%ebp),%edx
081695c5 +0x1426:  lea    -0x1c(%ebp),%eax
081695c8 +0x1429:  mov    0x10(%ebp),%esi
081695cb +0x142c:  mov    %esi,0x10(%esp)
081695cf +0x1430:  mov    %ecx,0xc(%esp)
081695d3 +0x1434:  mov    %edx,0x8(%esp)
081695d7 +0x1438:  mov    0xc(%ebp),%edx
081695da +0x143b:  mov    %edx,0x4(%esp)
081695de +0x143f:  mov    %eax,(%esp)
081695e1 +0x1442:  call   0816a2b2 <+0x2113>
081695e6 +0x1447:  sub    $0x4,%esp
081695e9 +0x144a:  lea    -0x1d(%ebp),%eax
081695ec +0x144d:  mov    %eax,0x8(%esp)
081695f0 +0x1451:  lea    -0x1c(%ebp),%eax
081695f3 +0x1454:  mov    %eax,0x4(%esp)
081695f7 +0x1458:  mov    %ebx,(%esp)
081695fa +0x145b:  call   0816a37a <+0x21db>
081695ff +0x1460:  jmp    0816961b <+0x147c>
08169601 +0x1462:  movb   $0x0,-0x15(%ebp)
08169605 +0x1466:  lea    -0x15(%ebp),%eax
08169608 +0x1469:  mov    %eax,0x8(%esp)
0816960c +0x146d:  lea    -0x34(%ebp),%eax
0816960f +0x1470:  mov    %eax,0x4(%esp)
08169613 +0x1474:  mov    %ebx,(%esp)
08169616 +0x1477:  call   0816a3c6 <+0x2227>
0816961b +0x147c:  mov    %ebx,%eax
0816961d +0x147e:  lea    -0x8(%ebp),%esp
08169620 +0x1481:  add    $0x0,%esp
08169623 +0x1484:  pop    %ebx
08169624 +0x1485:  pop    %esi
08169625 +0x1486:  pop    %ebp
08169626 +0x1487:  ret    $0x4
08169629 +0x148a:  nop
0816962a +0x148b:  push   %ebp
0816962b +0x148c:  mov    %esp,%ebp
0816962d +0x148e:  sub    $0x28,%esp
08169630 +0x1491:  jmp    0816964e <+0x14af>
08169632 +0x1493:  mov    0x8(%ebp),%eax
08169635 +0x1496:  mov    %eax,(%esp)
08169638 +0x1499:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0816963d +0x149e:  add    %eax,%eax
0816963f +0x14a0:  mov    %eax,0x4(%esp)
08169643 +0x14a4:  mov    0x8(%ebp),%eax
08169646 +0x14a7:  mov    %eax,(%esp)
08169649 +0x14aa:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0816964e +0x14af:  movl   $0x104,0x4(%esp)
08169656 +0x14b7:  mov    0x8(%ebp),%eax
08169659 +0x14ba:  mov    %eax,(%esp)
0816965c +0x14bd:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08169661 +0x14c2:  xor    $0x1,%eax
08169664 +0x14c5:  test   %al,%al
08169666 +0x14c7:  jne    08169632 <+0x1493>
08169668 +0x14c9:  mov    0x8(%ebp),%eax
0816966b +0x14cc:  mov    0x8(%eax),%eax
0816966e +0x14cf:  mov    %eax,%edx
08169670 +0x14d1:  mov    0x8(%ebp),%eax
08169673 +0x14d4:  mov    0xc(%eax),%eax
08169676 +0x14d7:  lea    (%edx,%eax,1),%eax
08169679 +0x14da:  mov    %eax,-0xc(%ebp)
0816967c +0x14dd:  movl   $0x104,0x4(%esp)
08169684 +0x14e5:  mov    0x8(%ebp),%eax
08169687 +0x14e8:  mov    %eax,(%esp)
0816968a +0x14eb:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0816968f +0x14f0:  mov    -0xc(%ebp),%eax
08169692 +0x14f3:  leave
08169693 +0x14f4:  ret
08169694 +0x14f5:  push   %ebp
08169695 +0x14f6:  mov    %esp,%ebp
08169697 +0x14f8:  push   %esi
08169698 +0x14f9:  push   %ebx
08169699 +0x14fa:  sub    $0x30,%esp
0816969c +0x14fd:  mov    0x8(%ebp),%ebx
0816969f +0x1500:  mov    0xc(%ebp),%eax
081696a2 +0x1503:  mov    %eax,(%esp)
081696a5 +0x1506:  call   0816a3f4 <+0x2255>
081696aa +0x150b:  mov    %eax,%esi
081696ac +0x150d:  mov    0xc(%ebp),%eax
081696af +0x1510:  mov    %eax,(%esp)
081696b2 +0x1513:  call   08168e04 <+0xc65>
081696b7 +0x1518:  lea    -0x10(%ebp),%edx
081696ba +0x151b:  mov    0x10(%ebp),%ecx
081696bd +0x151e:  mov    %ecx,0x10(%esp)
081696c1 +0x1522:  mov    %esi,0xc(%esp)
081696c5 +0x1526:  mov    %eax,0x8(%esp)
081696c9 +0x152a:  mov    0xc(%ebp),%eax
081696cc +0x152d:  mov    %eax,0x4(%esp)
081696d0 +0x1531:  mov    %edx,(%esp)
081696d3 +0x1534:  call   0816a400 <+0x2261>
081696d8 +0x1539:  sub    $0x4,%esp
081696db +0x153c:  lea    -0xc(%ebp),%eax
081696de +0x153f:  mov    0xc(%ebp),%edx
081696e1 +0x1542:  mov    %edx,0x4(%esp)
081696e5 +0x1546:  mov    %eax,(%esp)
081696e8 +0x1549:  call   08168f78 <+0xdd9>
081696ed +0x154e:  sub    $0x4,%esp
081696f0 +0x1551:  lea    -0xc(%ebp),%eax
081696f3 +0x1554:  mov    %eax,0x4(%esp)
081696f7 +0x1558:  lea    -0x10(%ebp),%eax
081696fa +0x155b:  mov    %eax,(%esp)
081696fd +0x155e:  call   08168990 <+0x7f1>
08169702 +0x1563:  test   %al,%al
08169704 +0x1565:  jne    0816972b <+0x158c>
08169706 +0x1567:  mov    -0x10(%ebp),%eax
08169709 +0x156a:  mov    %eax,(%esp)
0816970c +0x156d:  call   0816a47c <+0x22dd>
08169711 +0x1572:  mov    0xc(%ebp),%edx
08169714 +0x1575:  mov    %eax,0x8(%esp)
08169718 +0x1579:  mov    0x10(%ebp),%eax
0816971b +0x157c:  mov    %eax,0x4(%esp)
0816971f +0x1580:  mov    %edx,(%esp)
08169722 +0x1583:  call   081697b2 <+0x1613>
08169727 +0x1588:  test   %al,%al
08169729 +0x158a:  je     0816973f <+0x15a0>
0816972b +0x158c:  mov    0xc(%ebp),%eax
0816972e +0x158f:  mov    %eax,0x4(%esp)
08169732 +0x1593:  mov    %ebx,(%esp)
08169735 +0x1596:  call   08168f78 <+0xdd9>
0816973a +0x159b:  sub    $0x4,%esp
0816973d +0x159e:  jmp    08169744 <+0x15a5>
0816973f +0x15a0:  mov    -0x10(%ebp),%eax
08169742 +0x15a3:  mov    %eax,(%ebx)
08169744 +0x15a5:  mov    %ebx,%eax
08169746 +0x15a7:  lea    -0x8(%ebp),%esp
08169749 +0x15aa:  add    $0x0,%esp
0816974c +0x15ad:  pop    %ebx
0816974d +0x15ae:  pop    %esi
0816974e +0x15af:  pop    %ebp
0816974f +0x15b0:  ret    $0x4
08169752 +0x15b3:  push   %ebp
08169753 +0x15b4:  mov    %esp,%ebp
08169755 +0x15b6:  push   %ebx
08169756 +0x15b7:  sub    $0x14,%esp
08169759 +0x15ba:  mov    0x8(%ebp),%ebx
0816975c +0x15bd:  mov    0xc(%ebp),%eax
0816975f +0x15c0:  mov    0x10(%ebp),%edx
08169762 +0x15c3:  mov    %edx,0x8(%esp)
08169766 +0x15c7:  mov    %eax,0x4(%esp)
0816976a +0x15cb:  mov    %ebx,(%esp)
0816976d +0x15ce:  call   0816a49e <+0x22ff>
08169772 +0x15d3:  sub    $0x4,%esp
08169775 +0x15d6:  mov    %ebx,%eax
08169777 +0x15d8:  mov    -0x4(%ebp),%ebx
0816977a +0x15db:  leave
0816977b +0x15dc:  ret    $0x4
0816977e +0x15df:  push   %ebp
0816977f +0x15e0:  mov    %esp,%ebp
08169781 +0x15e2:  push   %ebx
08169782 +0x15e3:  sub    $0x14,%esp
08169785 +0x15e6:  mov    0x8(%ebp),%ebx
08169788 +0x15e9:  mov    0xc(%ebp),%eax
0816978b +0x15ec:  mov    %eax,0x4(%esp)
0816978f +0x15f0:  mov    %ebx,(%esp)
08169792 +0x15f3:  call   0816a4f0 <+0x2351>
08169797 +0x15f8:  sub    $0x4,%esp
0816979a +0x15fb:  mov    %ebx,%eax
0816979c +0x15fd:  mov    -0x4(%ebp),%ebx
0816979f +0x1600:  leave
081697a0 +0x1601:  ret    $0x4
081697a3 +0x1604:  nop
081697a4 +0x1605:  push   %ebp
081697a5 +0x1606:  mov    %esp,%ebp
081697a7 +0x1608:  mov    0x8(%ebp),%eax
081697aa +0x160b:  mov    (%eax),%eax
081697ac +0x160d:  add    $0x10,%eax
081697af +0x1610:  pop    %ebp
081697b0 +0x1611:  ret
081697b1 +0x1612:  nop
081697b2 +0x1613:  push   %ebp
081697b3 +0x1614:  mov    %esp,%ebp
081697b5 +0x1616:  mov    0xc(%ebp),%eax
081697b8 +0x1619:  mov    (%eax),%eax
081697ba +0x161b:  mov    %eax,%edx
081697bc +0x161d:  mov    0x10(%ebp),%eax
081697bf +0x1620:  mov    (%eax),%eax
081697c1 +0x1622:  cmp    %eax,%edx
081697c3 +0x1624:  setl   %al
081697c6 +0x1627:  pop    %ebp
081697c7 +0x1628:  ret
081697c8 +0x1629:  push   %ebp
081697c9 +0x162a:  mov    %esp,%ebp
081697cb +0x162c:  sub    $0x18,%esp
081697ce +0x162f:  mov    0xc(%ebp),%eax
081697d1 +0x1632:  mov    %eax,(%esp)
081697d4 +0x1635:  call   0816a4fa <+0x235b>
081697d9 +0x163a:  mov    (%eax),%edx
081697db +0x163c:  mov    0x8(%ebp),%eax
081697de +0x163f:  mov    %edx,(%eax)
081697e0 +0x1641:  mov    0x10(%ebp),%eax
081697e3 +0x1644:  mov    %eax,(%esp)
081697e6 +0x1647:  call   0816a502 <+0x2363>
081697eb +0x164c:  mov    (%eax),%edx
081697ed +0x164e:  mov    0x8(%ebp),%eax
081697f0 +0x1651:  mov    %edx,0x4(%eax)
081697f3 +0x1654:  leave
081697f4 +0x1655:  ret
081697f5 +0x1656:  nop
081697f6 +0x1657:  push   %ebp
081697f7 +0x1658:  mov    %esp,%ebp
081697f9 +0x165a:  push   %ebx
081697fa +0x165b:  sub    $0x24,%esp
081697fd +0x165e:  mov    0x8(%ebp),%ebx
08169800 +0x1661:  lea    0x10(%ebp),%eax
08169803 +0x1664:  mov    %eax,0x4(%esp)
08169807 +0x1668:  lea    -0xc(%ebp),%eax
0816980a +0x166b:  mov    %eax,(%esp)
0816980d +0x166e:  call   0816a50a <+0x236b>
08169812 +0x1673:  mov    0xc(%ebp),%eax
08169815 +0x1676:  mov    0x14(%ebp),%edx
08169818 +0x1679:  mov    %edx,0xc(%esp)
0816981c +0x167d:  mov    -0xc(%ebp),%edx
0816981f +0x1680:  mov    %edx,0x8(%esp)
08169823 +0x1684:  mov    %eax,0x4(%esp)
08169827 +0x1688:  mov    %ebx,(%esp)
0816982a +0x168b:  call   0816a51a <+0x237b>
0816982f +0x1690:  sub    $0x4,%esp
08169832 +0x1693:  mov    %ebx,%eax
08169834 +0x1695:  mov    -0x4(%ebp),%ebx
08169837 +0x1698:  leave
08169838 +0x1699:  ret    $0x4
0816983b +0x169c:  nop
0816983c +0x169d:  push   %ebp
0816983d +0x169e:  mov    %esp,%ebp
0816983f +0x16a0:  sub    $0x18,%esp
08169842 +0x16a3:  mov    0x8(%ebp),%eax
08169845 +0x16a6:  mov    %eax,(%esp)
08169848 +0x16a9:  call   0816a910 <+0x2771>
0816984d +0x16ae:  leave
0816984e +0x16af:  ret
0816984f +0x16b0:  nop
08169850 +0x16b1:  push   %ebp
08169851 +0x16b2:  mov    %esp,%ebp
08169853 +0x16b4:  sub    $0x18,%esp
08169856 +0x16b7:  mov    0x8(%ebp),%eax
08169859 +0x16ba:  mov    %eax,(%esp)
0816985c +0x16bd:  call   0816a8e0 <+0x2741>
08169861 +0x16c2:  leave
08169862 +0x16c3:  ret
08169863 +0x16c4:  nop
08169864 +0x16c5:  push   %ebp
08169865 +0x16c6:  mov    %esp,%ebp
08169867 +0x16c8:  push   %esi
08169868 +0x16c9:  push   %ebx
08169869 +0x16ca:  sub    $0x10,%esp
0816986c +0x16cd:  mov    0x8(%ebp),%eax
0816986f +0x16d0:  mov    0x8(%eax),%eax
08169872 +0x16d3:  mov    %eax,%edx
08169874 +0x16d5:  mov    0x8(%ebp),%eax
08169877 +0x16d8:  mov    (%eax),%eax
08169879 +0x16da:  mov    %edx,%ecx
0816987b +0x16dc:  sub    %eax,%ecx
0816987d +0x16de:  mov    %ecx,%eax
0816987f +0x16e0:  sar    $0x2,%eax
08169882 +0x16e3:  imul   $0xba2e8ba3,%eax,%eax
08169888 +0x16e9:  mov    %eax,%edx
0816988a +0x16eb:  mov    0x8(%ebp),%eax
0816988d +0x16ee:  mov    (%eax),%eax
0816988f +0x16f0:  mov    %edx,0x8(%esp)
08169893 +0x16f4:  mov    %eax,0x4(%esp)
08169897 +0x16f8:  mov    0x8(%ebp),%eax
0816989a +0x16fb:  mov    %eax,(%esp)
0816989d +0x16fe:  call   0816a924 <+0x2785>
081698a2 +0x1703:  jmp    081698bf <+0x1720>
081698a4 +0x1705:  mov    %edx,%ebx
081698a6 +0x1707:  mov    %eax,%esi
081698a8 +0x1709:  mov    0x8(%ebp),%eax
081698ab +0x170c:  mov    %eax,(%esp)
081698ae +0x170f:  call   0816983c <+0x169d>
081698b3 +0x1714:  mov    %esi,%eax
081698b5 +0x1716:  mov    %ebx,%edx
081698b7 +0x1718:  mov    %eax,(%esp)
081698ba +0x171b:  call   08ae3750 <_Unwind_Resume>
081698bf +0x1720:  mov    0x8(%ebp),%eax
081698c2 +0x1723:  mov    %eax,(%esp)
081698c5 +0x1726:  call   0816983c <+0x169d>
081698ca +0x172b:  add    $0x10,%esp
081698cd +0x172e:  pop    %ebx
081698ce +0x172f:  pop    %esi
081698cf +0x1730:  pop    %ebp
081698d0 +0x1731:  ret
081698d1 +0x1732:  nop
081698d2 +0x1733:  push   %ebp
081698d3 +0x1734:  mov    %esp,%ebp
081698d5 +0x1736:  mov    0x8(%ebp),%eax
081698d8 +0x1739:  pop    %ebp
081698d9 +0x173a:  ret
081698da +0x173b:  push   %ebp
081698db +0x173c:  mov    %esp,%ebp
081698dd +0x173e:  sub    $0x18,%esp
081698e0 +0x1741:  mov    0xc(%ebp),%eax
081698e3 +0x1744:  mov    %eax,0x4(%esp)
081698e7 +0x1748:  mov    0x8(%ebp),%eax
081698ea +0x174b:  mov    %eax,(%esp)
081698ed +0x174e:  call   0816a94b <+0x27ac>
081698f2 +0x1753:  leave
081698f3 +0x1754:  ret
081698f4 +0x1755:  push   %ebp
081698f5 +0x1756:  mov    %esp,%ebp
081698f7 +0x1758:  mov    0xc(%ebp),%eax
081698fa +0x175b:  mov    (%eax),%edx
081698fc +0x175d:  mov    0x8(%ebp),%eax
081698ff +0x1760:  mov    %edx,(%eax)
08169901 +0x1762:  pop    %ebp
08169902 +0x1763:  ret
08169903 +0x1764:  nop
08169904 +0x1765:  push   %ebp
08169905 +0x1766:  mov    %esp,%ebp
08169907 +0x1768:  mov    0x8(%ebp),%eax
0816990a +0x176b:  pop    %ebp
0816990b +0x176c:  ret
0816990c +0x176d:  push   %ebp
0816990d +0x176e:  mov    %esp,%ebp
0816990f +0x1770:  sub    $0x18,%esp
08169912 +0x1773:  mov    0x8(%ebp),%eax
08169915 +0x1776:  mov    %eax,(%esp)
08169918 +0x1779:  call   081698d2 <+0x1733>
0816991d +0x177e:  mov    0x8(%ebp),%edx
08169920 +0x1781:  mov    0x4(%edx),%edx
08169923 +0x1784:  mov    %eax,0x8(%esp)
08169927 +0x1788:  mov    %edx,0x4(%esp)
0816992b +0x178c:  mov    0xc(%ebp),%eax
0816992e +0x178f:  mov    %eax,(%esp)
08169931 +0x1792:  call   081698da <+0x173b>
08169936 +0x1797:  mov    0x8(%ebp),%eax
08169939 +0x179a:  mov    0xc(%ebp),%edx
0816993c +0x179d:  mov    %edx,0x4(%eax)
0816993f +0x17a0:  leave
08169940 +0x17a1:  ret
08169941 +0x17a2:  nop
08169942 +0x17a3:  push   %ebp
08169943 +0x17a4:  mov    %esp,%ebp
08169945 +0x17a6:  sub    $0x18,%esp
08169948 +0x17a9:  mov    0x8(%ebp),%eax
0816994b +0x17ac:  mov    %eax,(%esp)
0816994e +0x17af:  call   0816a966 <+0x27c7>
08169953 +0x17b4:  leave
08169954 +0x17b5:  ret
08169955 +0x17b6:  nop
08169956 +0x17b7:  push   %ebp
08169957 +0x17b8:  mov    %esp,%ebp
08169959 +0x17ba:  sub    $0x18,%esp
0816995c +0x17bd:  cmpl   $0x0,0xc(%ebp)
08169960 +0x17c1:  je     0816997b <+0x17dc>
08169962 +0x17c3:  mov    0x8(%ebp),%eax
08169965 +0x17c6:  mov    0x10(%ebp),%edx
08169968 +0x17c9:  mov    %edx,0x8(%esp)
0816996c +0x17cd:  mov    0xc(%ebp),%edx
0816996f +0x17d0:  mov    %edx,0x4(%esp)
08169973 +0x17d4:  mov    %eax,(%esp)
08169976 +0x17d7:  call   0816a96c <+0x27cd>
0816997b +0x17dc:  leave
0816997c +0x17dd:  ret
0816997d +0x17de:  push   %ebp
0816997e +0x17df:  mov    %esp,%ebp
08169980 +0x17e1:  sub    $0x18,%esp
08169983 +0x17e4:  mov    0xc(%ebp),%eax
08169986 +0x17e7:  mov    %eax,0x4(%esp)
0816998a +0x17eb:  mov    0x8(%ebp),%eax
0816998d +0x17ee:  mov    %eax,(%esp)
08169990 +0x17f1:  call   0816a97f <+0x27e0>
08169995 +0x17f6:  leave
08169996 +0x17f7:  ret
08169997 +0x17f8:  nop
08169998 +0x17f9:  push   %ebp
08169999 +0x17fa:  mov    %esp,%ebp
0816999b +0x17fc:  sub    $0x18,%esp
0816999e +0x17ff:  mov    0x8(%ebp),%eax
081699a1 +0x1802:  mov    %eax,(%esp)
081699a4 +0x1805:  call   0816a984 <+0x27e5>
081699a9 +0x180a:  mov    0x8(%ebp),%eax
081699ac +0x180d:  movl   $0x0,(%eax)
081699b2 +0x1813:  mov    0x8(%ebp),%eax
081699b5 +0x1816:  movl   $0x0,0x4(%eax)
081699bc +0x181d:  mov    0x8(%ebp),%eax
081699bf +0x1820:  movl   $0x0,0x8(%eax)
081699c6 +0x1827:  leave
081699c7 +0x1828:  ret
081699c8 +0x1829:  push   %ebp
081699c9 +0x182a:  mov    %esp,%ebp
081699cb +0x182c:  sub    $0x18,%esp
081699ce +0x182f:  mov    0x8(%ebp),%eax
081699d1 +0x1832:  mov    %eax,(%esp)
081699d4 +0x1835:  call   0816a998 <+0x27f9>
081699d9 +0x183a:  leave
081699da +0x183b:  ret
081699db +0x183c:  nop
081699dc +0x183d:  push   %ebp
081699dd +0x183e:  mov    %esp,%ebp
081699df +0x1840:  sub    $0x18,%esp
081699e2 +0x1843:  cmpl   $0x0,0xc(%ebp)
081699e6 +0x1847:  je     08169a01 <+0x1862>
081699e8 +0x1849:  mov    0x8(%ebp),%eax
081699eb +0x184c:  mov    0x10(%ebp),%edx
081699ee +0x184f:  mov    %edx,0x8(%esp)
081699f2 +0x1853:  mov    0xc(%ebp),%edx
081699f5 +0x1856:  mov    %edx,0x4(%esp)
081699f9 +0x185a:  mov    %eax,(%esp)
081699fc +0x185d:  call   0816a99e <+0x27ff>
08169a01 +0x1862:  leave
08169a02 +0x1863:  ret
08169a03 +0x1864:  push   %ebp
08169a04 +0x1865:  mov    %esp,%ebp
08169a06 +0x1867:  sub    $0x18,%esp
08169a09 +0x186a:  mov    0xc(%ebp),%eax
08169a0c +0x186d:  mov    %eax,0x4(%esp)
08169a10 +0x1871:  mov    0x8(%ebp),%eax
08169a13 +0x1874:  mov    %eax,(%esp)
08169a16 +0x1877:  call   0816a9b1 <+0x2812>
08169a1b +0x187c:  leave
08169a1c +0x187d:  ret
08169a1d +0x187e:  nop
08169a1e +0x187f:  push   %ebp
08169a1f +0x1880:  mov    %esp,%ebp
08169a21 +0x1882:  sub    $0x18,%esp
08169a24 +0x1885:  mov    0x8(%ebp),%eax
08169a27 +0x1888:  mov    %eax,(%esp)
08169a2a +0x188b:  call   0816a9b6 <+0x2817>
08169a2f +0x1890:  mov    0x8(%ebp),%eax
08169a32 +0x1893:  movl   $0x0,(%eax)
08169a38 +0x1899:  mov    0x8(%ebp),%eax
08169a3b +0x189c:  movl   $0x0,0x4(%eax)
08169a42 +0x18a3:  mov    0x8(%ebp),%eax
08169a45 +0x18a6:  movl   $0x0,0x8(%eax)
08169a4c +0x18ad:  leave
08169a4d +0x18ae:  ret
08169a4e +0x18af:  push   %ebp
08169a4f +0x18b0:  mov    %esp,%ebp
08169a51 +0x18b2:  sub    $0x18,%esp
08169a54 +0x18b5:  mov    0x8(%ebp),%eax
08169a57 +0x18b8:  mov    %eax,(%esp)
08169a5a +0x18bb:  call   0816a9ca <+0x282b>
08169a5f +0x18c0:  mov    0x8(%ebp),%eax
08169a62 +0x18c3:  movl   $0x0,0x4(%eax)
08169a69 +0x18ca:  mov    0x8(%ebp),%eax
08169a6c +0x18cd:  movl   $0x0,0x8(%eax)
08169a73 +0x18d4:  mov    0x8(%ebp),%eax
08169a76 +0x18d7:  movl   $0x0,0xc(%eax)
08169a7d +0x18de:  mov    0x8(%ebp),%eax
08169a80 +0x18e1:  movl   $0x0,0x10(%eax)
08169a87 +0x18e8:  mov    0x8(%ebp),%eax
08169a8a +0x18eb:  movl   $0x0,0x14(%eax)
08169a91 +0x18f2:  mov    0x8(%ebp),%eax
08169a94 +0x18f5:  mov    %eax,(%esp)
08169a97 +0x18f8:  call   0816a9de <+0x283f>
08169a9c +0x18fd:  leave
08169a9d +0x18fe:  ret
08169a9e +0x18ff:  push   %ebp
08169a9f +0x1900:  mov    %esp,%ebp
08169aa1 +0x1902:  pop    %ebp
08169aa2 +0x1903:  ret
08169aa3 +0x1904:  push   %ebp
08169aa4 +0x1905:  mov    %esp,%ebp
08169aa6 +0x1907:  mov    0x8(%ebp),%eax
08169aa9 +0x190a:  mov    0xc(%eax),%eax
08169aac +0x190d:  pop    %ebp
08169aad +0x190e:  ret
08169aae +0x190f:  push   %ebp
08169aaf +0x1910:  mov    %esp,%ebp
08169ab1 +0x1912:  mov    0x8(%ebp),%eax
08169ab4 +0x1915:  mov    0x8(%eax),%eax
08169ab7 +0x1918:  pop    %ebp
08169ab8 +0x1919:  ret
08169ab9 +0x191a:  nop
08169aba +0x191b:  push   %ebp
08169abb +0x191c:  mov    %esp,%ebp
08169abd +0x191e:  sub    $0x18,%esp
08169ac0 +0x1921:  mov    0x8(%ebp),%eax
08169ac3 +0x1924:  mov    %eax,(%esp)
08169ac6 +0x1927:  call   0816aa10 <+0x2871>
08169acb +0x192c:  mov    0xc(%ebp),%edx
08169ace +0x192f:  mov    %edx,0x4(%esp)
08169ad2 +0x1933:  mov    %eax,(%esp)
08169ad5 +0x1936:  call   0816aa1e <+0x287f>
08169ada +0x193b:  mov    0xc(%ebp),%eax
08169add +0x193e:  mov    %eax,0x4(%esp)
08169ae1 +0x1942:  mov    0x8(%ebp),%eax
08169ae4 +0x1945:  mov    %eax,(%esp)
08169ae7 +0x1948:  call   0816aa32 <+0x2893>
08169aec +0x194d:  leave
08169aed +0x194e:  ret
08169aee +0x194f:  push   %ebp
08169aef +0x1950:  mov    %esp,%ebp
08169af1 +0x1952:  sub    $0x18,%esp
08169af4 +0x1955:  mov    0x8(%ebp),%eax
08169af7 +0x1958:  mov    %eax,(%esp)
08169afa +0x195b:  call   0816aa54 <+0x28b5>
08169aff +0x1960:  mov    0x8(%ebp),%eax
08169b02 +0x1963:  movl   $0x0,0x4(%eax)
08169b09 +0x196a:  mov    0x8(%ebp),%eax
08169b0c +0x196d:  movl   $0x0,0x8(%eax)
08169b13 +0x1974:  mov    0x8(%ebp),%eax
08169b16 +0x1977:  movl   $0x0,0xc(%eax)
08169b1d +0x197e:  mov    0x8(%ebp),%eax
08169b20 +0x1981:  movl   $0x0,0x10(%eax)
08169b27 +0x1988:  mov    0x8(%ebp),%eax
08169b2a +0x198b:  movl   $0x0,0x14(%eax)
08169b31 +0x1992:  mov    0x8(%ebp),%eax
08169b34 +0x1995:  mov    %eax,(%esp)
08169b37 +0x1998:  call   0816aa68 <+0x28c9>
08169b3c +0x199d:  leave
08169b3d +0x199e:  ret
08169b3e +0x199f:  push   %ebp
08169b3f +0x19a0:  mov    %esp,%ebp
08169b41 +0x19a2:  pop    %ebp
08169b42 +0x19a3:  ret
08169b43 +0x19a4:  push   %ebp
08169b44 +0x19a5:  mov    %esp,%ebp
08169b46 +0x19a7:  mov    0x8(%ebp),%eax
08169b49 +0x19aa:  mov    0xc(%eax),%eax
08169b4c +0x19ad:  pop    %ebp
08169b4d +0x19ae:  ret
08169b4e +0x19af:  push   %ebp
08169b4f +0x19b0:  mov    %esp,%ebp
08169b51 +0x19b2:  mov    0x8(%ebp),%eax
08169b54 +0x19b5:  mov    0x8(%eax),%eax
08169b57 +0x19b8:  pop    %ebp
08169b58 +0x19b9:  ret
08169b59 +0x19ba:  nop
08169b5a +0x19bb:  push   %ebp
08169b5b +0x19bc:  mov    %esp,%ebp
08169b5d +0x19be:  sub    $0x18,%esp
08169b60 +0x19c1:  mov    0x8(%ebp),%eax
08169b63 +0x19c4:  mov    %eax,(%esp)
08169b66 +0x19c7:  call   0816aa9a <+0x28fb>
08169b6b +0x19cc:  mov    0xc(%ebp),%edx
08169b6e +0x19cf:  mov    %edx,0x4(%esp)
08169b72 +0x19d3:  mov    %eax,(%esp)
08169b75 +0x19d6:  call   0816aab8 <+0x2919>
08169b7a +0x19db:  mov    0xc(%ebp),%eax
08169b7d +0x19de:  mov    %eax,0x4(%esp)
08169b81 +0x19e2:  mov    0x8(%ebp),%eax
08169b84 +0x19e5:  mov    %eax,(%esp)
08169b87 +0x19e8:  call   0816aacc <+0x292d>
08169b8c +0x19ed:  leave
08169b8d +0x19ee:  ret
08169b8e +0x19ef:  push   %ebp
08169b8f +0x19f0:  mov    %esp,%ebp
08169b91 +0x19f2:  sub    $0x18,%esp
08169b94 +0x19f5:  mov    0x8(%ebp),%eax
08169b97 +0x19f8:  mov    %eax,(%esp)
08169b9a +0x19fb:  call   0816aaee <+0x294f>
08169b9f +0x1a00:  mov    0x8(%ebp),%eax
08169ba2 +0x1a03:  movl   $0x0,(%eax)
08169ba8 +0x1a09:  mov    0x8(%ebp),%eax
08169bab +0x1a0c:  movl   $0x0,0x4(%eax)
08169bb2 +0x1a13:  mov    0x8(%ebp),%eax
08169bb5 +0x1a16:  movl   $0x0,0x8(%eax)
08169bbc +0x1a1d:  leave
08169bbd +0x1a1e:  ret
08169bbe +0x1a1f:  push   %ebp
08169bbf +0x1a20:  mov    %esp,%ebp
08169bc1 +0x1a22:  sub    $0x18,%esp
08169bc4 +0x1a25:  mov    0x8(%ebp),%eax
08169bc7 +0x1a28:  mov    %eax,(%esp)
08169bca +0x1a2b:  call   0816ab02 <+0x2963>
08169bcf +0x1a30:  leave
08169bd0 +0x1a31:  ret
08169bd1 +0x1a32:  nop
08169bd2 +0x1a33:  push   %ebp
08169bd3 +0x1a34:  mov    %esp,%ebp
08169bd5 +0x1a36:  sub    $0x18,%esp
08169bd8 +0x1a39:  cmpl   $0x0,0xc(%ebp)
08169bdc +0x1a3d:  je     08169bf7 <+0x1a58>
08169bde +0x1a3f:  mov    0x8(%ebp),%eax
08169be1 +0x1a42:  mov    0x10(%ebp),%edx
08169be4 +0x1a45:  mov    %edx,0x8(%esp)
08169be8 +0x1a49:  mov    0xc(%ebp),%edx
08169beb +0x1a4c:  mov    %edx,0x4(%esp)
08169bef +0x1a50:  mov    %eax,(%esp)
08169bf2 +0x1a53:  call   0816ab08 <+0x2969>
08169bf7 +0x1a58:  leave
08169bf8 +0x1a59:  ret
08169bf9 +0x1a5a:  push   %ebp
08169bfa +0x1a5b:  mov    %esp,%ebp
08169bfc +0x1a5d:  sub    $0x18,%esp
08169bff +0x1a60:  mov    0xc(%ebp),%eax
08169c02 +0x1a63:  mov    %eax,0x4(%esp)
08169c06 +0x1a67:  mov    0x8(%ebp),%eax
08169c09 +0x1a6a:  mov    %eax,(%esp)
08169c0c +0x1a6d:  call   0816ab1b <+0x297c>
08169c11 +0x1a72:  leave
08169c12 +0x1a73:  ret
08169c13 +0x1a74:  nop
08169c14 +0x1a75:  push   %ebp
08169c15 +0x1a76:  mov    %esp,%ebp
08169c17 +0x1a78:  mov    0xc(%ebp),%edx
08169c1a +0x1a7b:  mov    0x8(%ebp),%eax
08169c1d +0x1a7e:  mov    %edx,(%eax)
08169c1f +0x1a80:  pop    %ebp
08169c20 +0x1a81:  ret
08169c21 +0x1a82:  push   %ebp
08169c22 +0x1a83:  mov    %esp,%ebp
08169c24 +0x1a85:  mov    0x8(%ebp),%eax
08169c27 +0x1a88:  pop    %ebp
08169c28 +0x1a89:  ret
08169c29 +0x1a8a:  nop
08169c2a +0x1a8b:  push   %ebp
08169c2b +0x1a8c:  mov    %esp,%ebp
08169c2d +0x1a8e:  sub    $0x28,%esp
08169c30 +0x1a91:  mov    0x10(%ebp),%eax
08169c33 +0x1a94:  mov    %eax,(%esp)
08169c36 +0x1a97:  call   0816ab20 <+0x2981>
08169c3b +0x1a9c:  mov    (%eax),%edx
08169c3d +0x1a9e:  mov    %edx,-0x14(%ebp)
08169c40 +0x1aa1:  mov    0x4(%eax),%edx
08169c43 +0x1aa4:  mov    %edx,-0x10(%ebp)
08169c46 +0x1aa7:  mov    0x8(%eax),%eax
08169c49 +0x1aaa:  mov    %eax,-0xc(%ebp)
08169c4c +0x1aad:  mov    0xc(%ebp),%eax
08169c4f +0x1ab0:  mov    %eax,0x4(%esp)
08169c53 +0x1ab4:  movl   $0xc,(%esp)
08169c5a +0x1abb:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08169c5f +0x1ac0:  mov    %eax,%edx
08169c61 +0x1ac2:  test   %edx,%edx
08169c63 +0x1ac4:  je     08169c76 <+0x1ad7>
08169c65 +0x1ac6:  mov    -0x14(%ebp),%edx
08169c68 +0x1ac9:  mov    %edx,(%eax)
08169c6a +0x1acb:  mov    -0x10(%ebp),%edx
08169c6d +0x1ace:  mov    %edx,0x4(%eax)
08169c70 +0x1ad1:  mov    -0xc(%ebp),%edx
08169c73 +0x1ad4:  mov    %edx,0x8(%eax)
08169c76 +0x1ad7:  leave
08169c77 +0x1ad8:  ret
08169c78 +0x1ad9:  push   %ebp
08169c79 +0x1ada:  mov    %esp,%ebp
08169c7b +0x1adc:  push   %ebx
08169c7c +0x1add:  sub    $0x14,%esp
08169c7f +0x1ae0:  mov    0xc(%ebp),%eax
08169c82 +0x1ae3:  mov    %eax,(%esp)
08169c85 +0x1ae6:  call   0816ab28 <+0x2989>
08169c8a +0x1aeb:  mov    %eax,%ebx
08169c8c +0x1aed:  mov    0x8(%ebp),%eax
08169c8f +0x1af0:  mov    %eax,(%esp)
08169c92 +0x1af3:  call   0816ab28 <+0x2989>
08169c97 +0x1af8:  mov    0x10(%ebp),%edx
08169c9a +0x1afb:  mov    %edx,0x8(%esp)
08169c9e +0x1aff:  mov    %ebx,0x4(%esp)
08169ca2 +0x1b03:  mov    %eax,(%esp)
08169ca5 +0x1b06:  call   0816ab30 <+0x2991>
08169caa +0x1b0b:  add    $0x14,%esp
08169cad +0x1b0e:  pop    %ebx
08169cae +0x1b0f:  pop    %ebp
08169caf +0x1b10:  ret
08169cb0 +0x1b11:  push   %ebp
08169cb1 +0x1b12:  mov    %esp,%ebp
08169cb3 +0x1b14:  mov    0x8(%ebp),%eax
08169cb6 +0x1b17:  pop    %ebp
08169cb7 +0x1b18:  ret
08169cb8 +0x1b19:  push   %ebp
08169cb9 +0x1b1a:  mov    %esp,%ebp
08169cbb +0x1b1c:  push   %ebx
08169cbc +0x1b1d:  sub    $0x24,%esp
08169cbf +0x1b20:  mov    0x8(%ebp),%eax
08169cc2 +0x1b23:  mov    %eax,(%esp)
08169cc5 +0x1b26:  call   0816ab74 <+0x29d5>
08169cca +0x1b2b:  mov    %eax,%ebx
08169ccc +0x1b2d:  mov    0x8(%ebp),%eax
08169ccf +0x1b30:  mov    %eax,(%esp)
08169cd2 +0x1b33:  call   081689a4 <+0x805>
08169cd7 +0x1b38:  mov    %ebx,%edx
08169cd9 +0x1b3a:  sub    %eax,%edx
08169cdb +0x1b3c:  mov    0xc(%ebp),%eax
08169cde +0x1b3f:  cmp    %eax,%edx
08169ce0 +0x1b41:  setb   %al
08169ce3 +0x1b44:  test   %al,%al
08169ce5 +0x1b46:  je     08169cf2 <+0x1b53>
08169ce7 +0x1b48:  mov    0x10(%ebp),%eax
08169cea +0x1b4b:  mov    %eax,(%esp)
08169ced +0x1b4e:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08169cf2 +0x1b53:  mov    0x8(%ebp),%eax
08169cf5 +0x1b56:  mov    %eax,(%esp)
08169cf8 +0x1b59:  call   081689a4 <+0x805>
08169cfd +0x1b5e:  mov    %eax,%ebx
08169cff +0x1b60:  mov    0x8(%ebp),%eax
08169d02 +0x1b63:  mov    %eax,(%esp)
08169d05 +0x1b66:  call   081689a4 <+0x805>
08169d0a +0x1b6b:  mov    %eax,-0x10(%ebp)
08169d0d +0x1b6e:  lea    0xc(%ebp),%eax
08169d10 +0x1b71:  mov    %eax,0x4(%esp)
08169d14 +0x1b75:  lea    -0x10(%ebp),%eax
08169d17 +0x1b78:  mov    %eax,(%esp)
08169d1a +0x1b7b:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08169d1f +0x1b80:  mov    (%eax),%eax
08169d21 +0x1b82:  lea    (%ebx,%eax,1),%eax
08169d24 +0x1b85:  mov    %eax,-0xc(%ebp)
08169d27 +0x1b88:  mov    0x8(%ebp),%eax
08169d2a +0x1b8b:  mov    %eax,(%esp)
08169d2d +0x1b8e:  call   081689a4 <+0x805>
08169d32 +0x1b93:  cmp    -0xc(%ebp),%eax
08169d35 +0x1b96:  ja     08169d47 <+0x1ba8>
08169d37 +0x1b98:  mov    0x8(%ebp),%eax
08169d3a +0x1b9b:  mov    %eax,(%esp)
08169d3d +0x1b9e:  call   0816ab74 <+0x29d5>
08169d42 +0x1ba3:  cmp    -0xc(%ebp),%eax
08169d45 +0x1ba6:  jae    08169d54 <+0x1bb5>
08169d47 +0x1ba8:  mov    0x8(%ebp),%eax
08169d4a +0x1bab:  mov    %eax,(%esp)
08169d4d +0x1bae:  call   0816ab74 <+0x29d5>
08169d52 +0x1bb3:  jmp    08169d57 <+0x1bb8>
08169d54 +0x1bb5:  mov    -0xc(%ebp),%eax
08169d57 +0x1bb8:  add    $0x24,%esp
08169d5a +0x1bbb:  pop    %ebx
08169d5b +0x1bbc:  pop    %ebp
08169d5c +0x1bbd:  ret
08169d5d +0x1bbe:  push   %ebp
08169d5e +0x1bbf:  mov    %esp,%ebp
08169d60 +0x1bc1:  push   %ebx
08169d61 +0x1bc2:  sub    $0x14,%esp
08169d64 +0x1bc5:  mov    0x8(%ebp),%eax
08169d67 +0x1bc8:  mov    %eax,(%esp)
08169d6a +0x1bcb:  call   08168d7e <+0xbdf>
08169d6f +0x1bd0:  mov    (%eax),%eax
08169d71 +0x1bd2:  mov    %eax,%ebx
08169d73 +0x1bd4:  mov    0xc(%ebp),%eax
08169d76 +0x1bd7:  mov    %eax,(%esp)
08169d79 +0x1bda:  call   08168d7e <+0xbdf>
08169d7e +0x1bdf:  mov    (%eax),%eax
08169d80 +0x1be1:  mov    %ebx,%edx
08169d82 +0x1be3:  sub    %eax,%edx
08169d84 +0x1be5:  mov    %edx,%eax
08169d86 +0x1be7:  sar    $0x2,%eax
08169d89 +0x1bea:  imul   $0xaaaaaaab,%eax,%eax
08169d8f +0x1bf0:  add    $0x14,%esp
08169d92 +0x1bf3:  pop    %ebx
08169d93 +0x1bf4:  pop    %ebp
08169d94 +0x1bf5:  ret
08169d95 +0x1bf6:  nop
08169d96 +0x1bf7:  push   %ebp
08169d97 +0x1bf8:  mov    %esp,%ebp
08169d99 +0x1bfa:  sub    $0x18,%esp
08169d9c +0x1bfd:  cmpl   $0x0,0xc(%ebp)
08169da0 +0x1c01:  je     08169dbe <+0x1c1f>
08169da2 +0x1c03:  mov    0x8(%ebp),%eax
08169da5 +0x1c06:  movl   $0x0,0x8(%esp)
08169dad +0x1c0e:  mov    0xc(%ebp),%edx
08169db0 +0x1c11:  mov    %edx,0x4(%esp)
08169db4 +0x1c15:  mov    %eax,(%esp)
08169db7 +0x1c18:  call   0816ab90 <+0x29f1>
08169dbc +0x1c1d:  jmp    08169dc3 <+0x1c24>
08169dbe +0x1c1f:  mov    $0x0,%eax
08169dc3 +0x1c24:  leave
08169dc4 +0x1c25:  ret
08169dc5 +0x1c26:  push   %ebp
08169dc6 +0x1c27:  mov    %esp,%ebp
08169dc8 +0x1c29:  sub    $0x28,%esp
08169dcb +0x1c2c:  lea    -0x10(%ebp),%eax
08169dce +0x1c2f:  lea    0xc(%ebp),%edx
08169dd1 +0x1c32:  mov    %edx,0x4(%esp)
08169dd5 +0x1c36:  mov    %eax,(%esp)
08169dd8 +0x1c39:  call   0816abce <+0x2a2f>
08169ddd +0x1c3e:  sub    $0x4,%esp
08169de0 +0x1c41:  lea    -0xc(%ebp),%eax
08169de3 +0x1c44:  lea    0x8(%ebp),%edx
08169de6 +0x1c47:  mov    %edx,0x4(%esp)
08169dea +0x1c4b:  mov    %eax,(%esp)
08169ded +0x1c4e:  call   0816abce <+0x2a2f>
08169df2 +0x1c53:  sub    $0x4,%esp
08169df5 +0x1c56:  mov    0x14(%ebp),%eax
08169df8 +0x1c59:  mov    %eax,0xc(%esp)
08169dfc +0x1c5d:  mov    0x10(%ebp),%eax
08169dff +0x1c60:  mov    %eax,0x8(%esp)
08169e03 +0x1c64:  mov    -0x10(%ebp),%eax
08169e06 +0x1c67:  mov    %eax,0x4(%esp)
08169e0a +0x1c6b:  mov    -0xc(%ebp),%eax
08169e0d +0x1c6e:  mov    %eax,(%esp)
08169e10 +0x1c71:  call   0816abf3 <+0x2a54>
08169e15 +0x1c76:  leave
08169e16 +0x1c77:  ret
08169e17 +0x1c78:  nop
08169e18 +0x1c79:  push   %ebp
08169e19 +0x1c7a:  mov    %esp,%ebp
08169e1b +0x1c7c:  pop    %ebp
08169e1c +0x1c7d:  ret
08169e1d +0x1c7e:  nop
08169e1e +0x1c7f:  push   %ebp
08169e1f +0x1c80:  mov    %esp,%ebp
08169e21 +0x1c82:  sub    $0x18,%esp
08169e24 +0x1c85:  mov    0xc(%ebp),%eax
08169e27 +0x1c88:  mov    %eax,(%esp)
08169e2a +0x1c8b:  call   08169e18 <+0x1c79>
08169e2f +0x1c90:  leave
08169e30 +0x1c91:  ret
08169e31 +0x1c92:  nop
08169e32 +0x1c93:  push   %ebp
08169e33 +0x1c94:  mov    %esp,%ebp
08169e35 +0x1c96:  mov    0x8(%ebp),%eax
08169e38 +0x1c99:  add    $0x4,%eax
08169e3b +0x1c9c:  pop    %ebp
08169e3c +0x1c9d:  ret
08169e3d +0x1c9e:  nop
08169e3e +0x1c9f:  push   %ebp
08169e3f +0x1ca0:  mov    %esp,%ebp
08169e41 +0x1ca2:  push   %ebx
08169e42 +0x1ca3:  sub    $0x14,%esp
08169e45 +0x1ca6:  mov    0x8(%ebp),%ebx
08169e48 +0x1ca9:  jmp    08169e96 <+0x1cf7>
08169e4a +0x1cab:  mov    0x10(%ebp),%eax
08169e4d +0x1cae:  mov    %eax,(%esp)
08169e50 +0x1cb1:  call   0816a26a <+0x20cb>
08169e55 +0x1cb6:  mov    0xc(%ebp),%edx
08169e58 +0x1cb9:  mov    0x18(%ebp),%ecx
08169e5b +0x1cbc:  mov    %ecx,0x8(%esp)
08169e5f +0x1cc0:  mov    %eax,0x4(%esp)
08169e63 +0x1cc4:  mov    %edx,(%esp)
08169e66 +0x1cc7:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08169e6b +0x1ccc:  xor    $0x1,%eax
08169e6e +0x1ccf:  test   %al,%al
08169e70 +0x1cd1:  je     08169e88 <+0x1ce9>
08169e72 +0x1cd3:  mov    0x10(%ebp),%eax
08169e75 +0x1cd6:  mov    %eax,0x14(%ebp)
08169e78 +0x1cd9:  mov    0x10(%ebp),%eax
08169e7b +0x1cdc:  mov    %eax,(%esp)
08169e7e +0x1cdf:  call   08169b4e <+0x19af>
08169e83 +0x1ce4:  mov    %eax,0x10(%ebp)
08169e86 +0x1ce7:  jmp    08169e96 <+0x1cf7>
08169e88 +0x1ce9:  mov    0x10(%ebp),%eax
08169e8b +0x1cec:  mov    %eax,(%esp)
08169e8e +0x1cef:  call   08169b43 <+0x19a4>
08169e93 +0x1cf4:  mov    %eax,0x10(%ebp)
08169e96 +0x1cf7:  cmpl   $0x0,0x10(%ebp)
08169e9a +0x1cfb:  setne  %al
08169e9d +0x1cfe:  test   %al,%al
08169e9f +0x1d00:  jne    08169e4a <+0x1cab>
08169ea1 +0x1d02:  mov    0x14(%ebp),%eax
08169ea4 +0x1d05:  mov    %eax,0x4(%esp)
08169ea8 +0x1d09:  mov    %ebx,(%esp)
08169eab +0x1d0c:  call   08169edc <+0x1d3d>
08169eb0 +0x1d11:  mov    %ebx,%eax
08169eb2 +0x1d13:  add    $0x14,%esp
08169eb5 +0x1d16:  pop    %ebx
08169eb6 +0x1d17:  pop    %ebp
08169eb7 +0x1d18:  ret    $0x4
08169eba +0x1d1b:  push   %ebp
08169ebb +0x1d1c:  mov    %esp,%ebp
08169ebd +0x1d1e:  sub    $0x28,%esp
08169ec0 +0x1d21:  mov    0x8(%ebp),%eax
08169ec3 +0x1d24:  mov    %eax,(%esp)
08169ec6 +0x1d27:  call   0816ac14 <+0x2a75>
08169ecb +0x1d2c:  mov    %eax,0x4(%esp)
08169ecf +0x1d30:  lea    -0x9(%ebp),%eax
08169ed2 +0x1d33:  mov    %eax,(%esp)
08169ed5 +0x1d36:  call   0816a262 <+0x20c3>
08169eda +0x1d3b:  leave
08169edb +0x1d3c:  ret
08169edc +0x1d3d:  push   %ebp
08169edd +0x1d3e:  mov    %esp,%ebp
08169edf +0x1d40:  mov    0xc(%ebp),%edx
08169ee2 +0x1d43:  mov    0x8(%ebp),%eax
08169ee5 +0x1d46:  mov    %edx,(%eax)
08169ee7 +0x1d48:  pop    %ebp
08169ee8 +0x1d49:  ret
08169ee9 +0x1d4a:  nop
08169eea +0x1d4b:  push   %ebp
08169eeb +0x1d4c:  mov    %esp,%ebp
08169eed +0x1d4e:  push   %ebx
08169eee +0x1d4f:  sub    $0x44,%esp
08169ef1 +0x1d52:  mov    0x8(%ebp),%ebx
08169ef4 +0x1d55:  mov    0xc(%ebp),%eax
08169ef7 +0x1d58:  mov    %eax,(%esp)
08169efa +0x1d5b:  call   08168e8e <+0xcef>
08169eff +0x1d60:  mov    %eax,-0x18(%ebp)
08169f02 +0x1d63:  mov    0xc(%ebp),%eax
08169f05 +0x1d66:  mov    %eax,(%esp)
08169f08 +0x1d69:  call   08169e32 <+0x1c93>
08169f0d +0x1d6e:  mov    %eax,-0x14(%ebp)
08169f10 +0x1d71:  jmp    0816a025 <+0x1e86>
08169f15 +0x1d76:  mov    -0x18(%ebp),%eax
08169f18 +0x1d79:  mov    %eax,(%esp)
08169f1b +0x1d7c:  call   0816a26a <+0x20cb>
08169f20 +0x1d81:  mov    0xc(%ebp),%edx
08169f23 +0x1d84:  mov    0x10(%ebp),%ecx
08169f26 +0x1d87:  mov    %ecx,0x8(%esp)
08169f2a +0x1d8b:  mov    %eax,0x4(%esp)
08169f2e +0x1d8f:  mov    %edx,(%esp)
08169f31 +0x1d92:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08169f36 +0x1d97:  test   %al,%al
08169f38 +0x1d99:  je     08169f4d <+0x1dae>
08169f3a +0x1d9b:  mov    -0x18(%ebp),%eax
08169f3d +0x1d9e:  mov    %eax,(%esp)
08169f40 +0x1da1:  call   08169b43 <+0x19a4>
08169f45 +0x1da6:  mov    %eax,-0x18(%ebp)
08169f48 +0x1da9:  jmp    0816a025 <+0x1e86>
08169f4d +0x1dae:  mov    -0x18(%ebp),%eax
08169f50 +0x1db1:  mov    %eax,(%esp)
08169f53 +0x1db4:  call   0816a26a <+0x20cb>
08169f58 +0x1db9:  mov    0xc(%ebp),%edx
08169f5b +0x1dbc:  mov    %eax,0x8(%esp)
08169f5f +0x1dc0:  mov    0x10(%ebp),%eax
08169f62 +0x1dc3:  mov    %eax,0x4(%esp)
08169f66 +0x1dc7:  mov    %edx,(%esp)
08169f69 +0x1dca:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08169f6e +0x1dcf:  test   %al,%al
08169f70 +0x1dd1:  je     08169f8b <+0x1dec>
08169f72 +0x1dd3:  mov    -0x18(%ebp),%eax
08169f75 +0x1dd6:  mov    %eax,-0x14(%ebp)
08169f78 +0x1dd9:  mov    -0x18(%ebp),%eax
08169f7b +0x1ddc:  mov    %eax,(%esp)
08169f7e +0x1ddf:  call   08169b4e <+0x19af>
08169f83 +0x1de4:  mov    %eax,-0x18(%ebp)
08169f86 +0x1de7:  jmp    0816a025 <+0x1e86>
08169f8b +0x1dec:  mov    -0x18(%ebp),%eax
08169f8e +0x1def:  mov    %eax,-0x10(%ebp)
08169f91 +0x1df2:  mov    -0x14(%ebp),%eax
08169f94 +0x1df5:  mov    %eax,-0xc(%ebp)
08169f97 +0x1df8:  mov    -0x18(%ebp),%eax
08169f9a +0x1dfb:  mov    %eax,-0x14(%ebp)
08169f9d +0x1dfe:  mov    -0x18(%ebp),%eax
08169fa0 +0x1e01:  mov    %eax,(%esp)
08169fa3 +0x1e04:  call   08169b4e <+0x19af>
08169fa8 +0x1e09:  mov    %eax,-0x18(%ebp)
08169fab +0x1e0c:  mov    -0x10(%ebp),%eax
08169fae +0x1e0f:  mov    %eax,(%esp)
08169fb1 +0x1e12:  call   08169b43 <+0x19a4>
08169fb6 +0x1e17:  mov    %eax,-0x10(%ebp)
08169fb9 +0x1e1a:  lea    -0x28(%ebp),%eax
08169fbc +0x1e1d:  mov    0x10(%ebp),%edx
08169fbf +0x1e20:  mov    %edx,0x10(%esp)
08169fc3 +0x1e24:  mov    -0xc(%ebp),%edx
08169fc6 +0x1e27:  mov    %edx,0xc(%esp)
08169fca +0x1e2b:  mov    -0x10(%ebp),%edx
08169fcd +0x1e2e:  mov    %edx,0x8(%esp)
08169fd1 +0x1e32:  mov    0xc(%ebp),%edx
08169fd4 +0x1e35:  mov    %edx,0x4(%esp)
08169fd8 +0x1e39:  mov    %eax,(%esp)
08169fdb +0x1e3c:  call   0816ac20 <+0x2a81>
08169fe0 +0x1e41:  sub    $0x4,%esp
08169fe3 +0x1e44:  lea    -0x24(%ebp),%eax
08169fe6 +0x1e47:  mov    0x10(%ebp),%edx
08169fe9 +0x1e4a:  mov    %edx,0x10(%esp)
08169fed +0x1e4e:  mov    -0x14(%ebp),%edx
08169ff0 +0x1e51:  mov    %edx,0xc(%esp)
08169ff4 +0x1e55:  mov    -0x18(%ebp),%edx
08169ff7 +0x1e58:  mov    %edx,0x8(%esp)
08169ffb +0x1e5c:  mov    0xc(%ebp),%edx
08169ffe +0x1e5f:  mov    %edx,0x4(%esp)
0816a002 +0x1e63:  mov    %eax,(%esp)
0816a005 +0x1e66:  call   08169e3e <+0x1c9f>
0816a00a +0x1e6b:  sub    $0x4,%esp
0816a00d +0x1e6e:  lea    -0x28(%ebp),%eax
0816a010 +0x1e71:  mov    %eax,0x8(%esp)
0816a014 +0x1e75:  lea    -0x24(%ebp),%eax
0816a017 +0x1e78:  mov    %eax,0x4(%esp)
0816a01b +0x1e7c:  mov    %ebx,(%esp)
0816a01e +0x1e7f:  call   0816ac9a <+0x2afb>
0816a023 +0x1e84:  jmp    0816a06e <+0x1ecf>
0816a025 +0x1e86:  cmpl   $0x0,-0x18(%ebp)
0816a029 +0x1e8a:  setne  %al
0816a02c +0x1e8d:  test   %al,%al
0816a02e +0x1e8f:  jne    08169f15 <+0x1d76>
0816a034 +0x1e95:  mov    -0x14(%ebp),%eax
0816a037 +0x1e98:  mov    %eax,0x4(%esp)
0816a03b +0x1e9c:  lea    -0x20(%ebp),%eax
0816a03e +0x1e9f:  mov    %eax,(%esp)
0816a041 +0x1ea2:  call   08169edc <+0x1d3d>
0816a046 +0x1ea7:  mov    -0x14(%ebp),%eax
0816a049 +0x1eaa:  mov    %eax,0x4(%esp)
0816a04d +0x1eae:  lea    -0x1c(%ebp),%eax
0816a050 +0x1eb1:  mov    %eax,(%esp)
0816a053 +0x1eb4:  call   08169edc <+0x1d3d>
0816a058 +0x1eb9:  lea    -0x20(%ebp),%eax
0816a05b +0x1ebc:  mov    %eax,0x8(%esp)
0816a05f +0x1ec0:  lea    -0x1c(%ebp),%eax
0816a062 +0x1ec3:  mov    %eax,0x4(%esp)
0816a066 +0x1ec7:  mov    %ebx,(%esp)
0816a069 +0x1eca:  call   0816ac9a <+0x2afb>
0816a06e +0x1ecf:  mov    %ebx,%eax
0816a070 +0x1ed1:  mov    -0x4(%ebp),%ebx
0816a073 +0x1ed4:  leave
0816a074 +0x1ed5:  ret    $0x4
0816a077 +0x1ed8:  nop
0816a078 +0x1ed9:  push   %ebp
0816a079 +0x1eda:  mov    %esp,%ebp
0816a07b +0x1edc:  mov    0x8(%ebp),%eax
0816a07e +0x1edf:  mov    0x14(%eax),%eax
0816a081 +0x1ee2:  pop    %ebp
0816a082 +0x1ee3:  ret
0816a083 +0x1ee4:  nop
0816a084 +0x1ee5:  push   %ebp
0816a085 +0x1ee6:  mov    %esp,%ebp
0816a087 +0x1ee8:  sub    $0x28,%esp
0816a08a +0x1eeb:  lea    -0x14(%ebp),%eax
0816a08d +0x1eee:  mov    0x8(%ebp),%edx
0816a090 +0x1ef1:  mov    %edx,0x4(%esp)
0816a094 +0x1ef5:  mov    %eax,(%esp)
0816a097 +0x1ef8:  call   0816a28c <+0x20ed>
0816a09c +0x1efd:  sub    $0x4,%esp
0816a09f +0x1f00:  lea    -0x14(%ebp),%eax
0816a0a2 +0x1f03:  mov    %eax,0x4(%esp)
0816a0a6 +0x1f07:  lea    0xc(%ebp),%eax
0816a0a9 +0x1f0a:  mov    %eax,(%esp)
0816a0ac +0x1f0d:  call   0816892c <+0x78d>
0816a0b1 +0x1f12:  test   %al,%al
0816a0b3 +0x1f14:  je     0816a0e7 <+0x1f48>
0816a0b5 +0x1f16:  lea    -0x10(%ebp),%eax
0816a0b8 +0x1f19:  mov    0x8(%ebp),%edx
0816a0bb +0x1f1c:  mov    %edx,0x4(%esp)
0816a0bf +0x1f20:  mov    %eax,(%esp)
0816a0c2 +0x1f23:  call   0816936a <+0x11cb>
0816a0c7 +0x1f28:  sub    $0x4,%esp
0816a0ca +0x1f2b:  lea    -0x10(%ebp),%eax
0816a0cd +0x1f2e:  mov    %eax,0x4(%esp)
0816a0d1 +0x1f32:  lea    0x10(%ebp),%eax
0816a0d4 +0x1f35:  mov    %eax,(%esp)
0816a0d7 +0x1f38:  call   0816892c <+0x78d>
0816a0dc +0x1f3d:  test   %al,%al
0816a0de +0x1f3f:  je     0816a0e7 <+0x1f48>
0816a0e0 +0x1f41:  mov    $0x1,%eax
0816a0e5 +0x1f46:  jmp    0816a0ec <+0x1f4d>
0816a0e7 +0x1f48:  mov    $0x0,%eax
0816a0ec +0x1f4d:  test   %al,%al
0816a0ee +0x1f4f:  je     0816a12c <+0x1f8d>
0816a0f0 +0x1f51:  mov    0x8(%ebp),%eax
0816a0f3 +0x1f54:  mov    %eax,(%esp)
0816a0f6 +0x1f57:  call   0816acc8 <+0x2b29>
0816a0fb +0x1f5c:  jmp    0816a142 <+0x1fa3>
0816a0fd +0x1f5e:  lea    -0xc(%ebp),%eax
0816a100 +0x1f61:  movl   $0x0,0x8(%esp)
0816a108 +0x1f69:  lea    0xc(%ebp),%edx
0816a10b +0x1f6c:  mov    %edx,0x4(%esp)
0816a10f +0x1f70:  mov    %eax,(%esp)
0816a112 +0x1f73:  call   0816ad3e <+0x2b9f>
0816a117 +0x1f78:  sub    $0x4,%esp
0816a11a +0x1f7b:  mov    -0xc(%ebp),%eax
0816a11d +0x1f7e:  mov    %eax,0x4(%esp)
0816a121 +0x1f82:  mov    0x8(%ebp),%eax
0816a124 +0x1f85:  mov    %eax,(%esp)
0816a127 +0x1f88:  call   0816ad7c <+0x2bdd>
0816a12c +0x1f8d:  lea    0x10(%ebp),%eax
0816a12f +0x1f90:  mov    %eax,0x4(%esp)
0816a133 +0x1f94:  lea    0xc(%ebp),%eax
0816a136 +0x1f97:  mov    %eax,(%esp)
0816a139 +0x1f9a:  call   0816884a <+0x6ab>
0816a13e +0x1f9f:  test   %al,%al
0816a140 +0x1fa1:  jne    0816a0fd <+0x1f5e>
0816a142 +0x1fa3:  leave
0816a143 +0x1fa4:  ret
0816a144 +0x1fa5:  push   %ebp
0816a145 +0x1fa6:  mov    %esp,%ebp
0816a147 +0x1fa8:  push   %esi
0816a148 +0x1fa9:  push   %ebx
0816a149 +0x1faa:  sub    $0x20,%esp
0816a14c +0x1fad:  mov    0xc(%ebp),%eax
0816a14f +0x1fb0:  mov    %eax,(%esp)
0816a152 +0x1fb3:  call   0816adbe <+0x2c1f>
0816a157 +0x1fb8:  mov    %eax,%ebx
0816a159 +0x1fba:  mov    0xc(%ebp),%eax
0816a15c +0x1fbd:  mov    %eax,(%esp)
0816a15f +0x1fc0:  call   081689a4 <+0x805>
0816a164 +0x1fc5:  mov    0x8(%ebp),%edx
0816a167 +0x1fc8:  mov    %ebx,0x8(%esp)
0816a16b +0x1fcc:  mov    %eax,0x4(%esp)
0816a16f +0x1fd0:  mov    %edx,(%esp)
0816a172 +0x1fd3:  call   0816adc6 <+0x2c27>
0816a177 +0x1fd8:  mov    0x8(%ebp),%eax
0816a17a +0x1fdb:  mov    %eax,(%esp)
0816a17d +0x1fde:  call   08168f30 <+0xd91>
0816a182 +0x1fe3:  mov    %eax,%ebx
0816a184 +0x1fe5:  mov    0x8(%ebp),%eax
0816a187 +0x1fe8:  mov    (%eax),%esi
0816a189 +0x1fea:  lea    -0x10(%ebp),%eax
0816a18c +0x1fed:  mov    0xc(%ebp),%edx
0816a18f +0x1ff0:  mov    %edx,0x4(%esp)
0816a193 +0x1ff4:  mov    %eax,(%esp)
0816a196 +0x1ff7:  call   0816ae6a <+0x2ccb>
0816a19b +0x1ffc:  sub    $0x4,%esp
0816a19e +0x1fff:  lea    -0xc(%ebp),%eax
0816a1a1 +0x2002:  mov    0xc(%ebp),%edx
0816a1a4 +0x2005:  mov    %edx,0x4(%esp)
0816a1a8 +0x2009:  mov    %eax,(%esp)
0816a1ab +0x200c:  call   0816ae3e <+0x2c9f>
0816a1b0 +0x2011:  sub    $0x4,%esp
0816a1b3 +0x2014:  mov    %ebx,0xc(%esp)
0816a1b7 +0x2018:  mov    %esi,0x8(%esp)
0816a1bb +0x201c:  mov    -0x10(%ebp),%eax
0816a1be +0x201f:  mov    %eax,0x4(%esp)
0816a1c2 +0x2023:  mov    -0xc(%ebp),%eax
0816a1c5 +0x2026:  mov    %eax,(%esp)
0816a1c8 +0x2029:  call   0816ae96 <+0x2cf7>
0816a1cd +0x202e:  mov    0x8(%ebp),%edx
0816a1d0 +0x2031:  mov    %eax,0x4(%edx)
0816a1d3 +0x2034:  lea    -0x8(%ebp),%esp
0816a1d6 +0x2037:  add    $0x0,%esp
0816a1d9 +0x203a:  pop    %ebx
0816a1da +0x203b:  pop    %esi
0816a1db +0x203c:  pop    %ebp
0816a1dc +0x203d:  ret
0816a1dd +0x203e:  mov    %edx,%ebx
0816a1df +0x2040:  mov    %eax,%esi
0816a1e1 +0x2042:  mov    0x8(%ebp),%eax
0816a1e4 +0x2045:  mov    %eax,(%esp)
0816a1e7 +0x2048:  call   08168ec2 <+0xd23>
0816a1ec +0x204d:  mov    %esi,%eax
0816a1ee +0x204f:  mov    %ebx,%edx
0816a1f0 +0x2051:  mov    %eax,(%esp)
0816a1f3 +0x2054:  call   08ae3750 <_Unwind_Resume>
0816a1f8 +0x2059:  push   %ebp
0816a1f9 +0x205a:  mov    %esp,%ebp
0816a1fb +0x205c:  mov    0x8(%ebp),%eax
0816a1fe +0x205f:  pop    %ebp
0816a1ff +0x2060:  ret
0816a200 +0x2061:  push   %ebp
0816a201 +0x2062:  mov    %esp,%ebp
0816a203 +0x2064:  sub    $0x18,%esp
0816a206 +0x2067:  mov    0xc(%ebp),%eax
0816a209 +0x206a:  mov    %eax,(%esp)
0816a20c +0x206d:  call   08168f30 <+0xd91>
0816a211 +0x2072:  mov    0x8(%ebp),%edx
0816a214 +0x2075:  mov    %eax,0x4(%esp)
0816a218 +0x2079:  mov    %edx,(%esp)
0816a21b +0x207c:  call   0816aeb8 <+0x2d19>
0816a220 +0x2081:  mov    0xc(%ebp),%eax
0816a223 +0x2084:  mov    (%eax),%edx
0816a225 +0x2086:  mov    0x8(%ebp),%eax
0816a228 +0x2089:  mov    %edx,(%eax)
0816a22a +0x208b:  mov    0xc(%ebp),%eax
0816a22d +0x208e:  mov    0x4(%eax),%edx
0816a230 +0x2091:  mov    0x8(%ebp),%eax
0816a233 +0x2094:  mov    %edx,0x4(%eax)
0816a236 +0x2097:  mov    0xc(%ebp),%eax
0816a239 +0x209a:  mov    0x8(%eax),%edx
0816a23c +0x209d:  mov    0x8(%ebp),%eax
0816a23f +0x20a0:  mov    %edx,0x8(%eax)
0816a242 +0x20a3:  mov    0xc(%ebp),%eax
0816a245 +0x20a6:  movl   $0x0,(%eax)
0816a24b +0x20ac:  mov    0xc(%ebp),%eax
0816a24e +0x20af:  movl   $0x0,0x4(%eax)
0816a255 +0x20b6:  mov    0xc(%ebp),%eax
0816a258 +0x20b9:  movl   $0x0,0x8(%eax)
0816a25f +0x20c0:  leave
0816a260 +0x20c1:  ret
0816a261 +0x20c2:  nop
0816a262 +0x20c3:  push   %ebp
0816a263 +0x20c4:  mov    %esp,%ebp
0816a265 +0x20c6:  mov    0xc(%ebp),%eax
0816a268 +0x20c9:  pop    %ebp
0816a269 +0x20ca:  ret
0816a26a +0x20cb:  push   %ebp
0816a26b +0x20cc:  mov    %esp,%ebp
0816a26d +0x20ce:  sub    $0x28,%esp
0816a270 +0x20d1:  mov    0x8(%ebp),%eax
0816a273 +0x20d4:  mov    %eax,(%esp)
0816a276 +0x20d7:  call   0816aeef <+0x2d50>
0816a27b +0x20dc:  mov    %eax,0x4(%esp)
0816a27f +0x20e0:  lea    -0x9(%ebp),%eax
0816a282 +0x20e3:  mov    %eax,(%esp)
0816a285 +0x20e6:  call   0816a262 <+0x20c3>
0816a28a +0x20eb:  leave
0816a28b +0x20ec:  ret
0816a28c +0x20ed:  push   %ebp
0816a28d +0x20ee:  mov    %esp,%ebp
0816a28f +0x20f0:  push   %ebx
0816a290 +0x20f1:  sub    $0x14,%esp
0816a293 +0x20f4:  mov    0x8(%ebp),%ebx
0816a296 +0x20f7:  mov    0xc(%ebp),%eax
0816a299 +0x20fa:  mov    0xc(%eax),%eax
0816a29c +0x20fd:  mov    %eax,0x4(%esp)
0816a2a0 +0x2101:  mov    %ebx,(%esp)
0816a2a3 +0x2104:  call   08169edc <+0x1d3d>
0816a2a8 +0x2109:  mov    %ebx,%eax
0816a2aa +0x210b:  add    $0x14,%esp
0816a2ad +0x210e:  pop    %ebx
0816a2ae +0x210f:  pop    %ebp
0816a2af +0x2110:  ret    $0x4
0816a2b2 +0x2113:  push   %ebp
0816a2b3 +0x2114:  mov    %esp,%ebp
0816a2b5 +0x2116:  push   %esi
0816a2b6 +0x2117:  push   %ebx
0816a2b7 +0x2118:  sub    $0x20,%esp
0816a2ba +0x211b:  mov    0x8(%ebp),%esi
0816a2bd +0x211e:  cmpl   $0x0,0x10(%ebp)
0816a2c1 +0x2122:  jne    0816a309 <+0x216a>
0816a2c3 +0x2124:  mov    0xc(%ebp),%eax
0816a2c6 +0x2127:  mov    %eax,(%esp)
0816a2c9 +0x212a:  call   08169e32 <+0x1c93>
0816a2ce +0x212f:  cmp    0x14(%ebp),%eax
0816a2d1 +0x2132:  je     0816a309 <+0x216a>
0816a2d3 +0x2134:  mov    0x14(%ebp),%eax
0816a2d6 +0x2137:  mov    %eax,(%esp)
0816a2d9 +0x213a:  call   08169eba <+0x1d1b>
0816a2de +0x213f:  mov    %eax,%ebx
0816a2e0 +0x2141:  mov    0x18(%ebp),%eax
0816a2e3 +0x2144:  mov    %eax,0x4(%esp)
0816a2e7 +0x2148:  lea    -0xe(%ebp),%eax
0816a2ea +0x214b:  mov    %eax,(%esp)
0816a2ed +0x214e:  call   0816a262 <+0x20c3>
0816a2f2 +0x2153:  mov    0xc(%ebp),%edx
0816a2f5 +0x2156:  mov    %ebx,0x8(%esp)
0816a2f9 +0x215a:  mov    %eax,0x4(%esp)
0816a2fd +0x215e:  mov    %edx,(%esp)
0816a300 +0x2161:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0816a305 +0x2166:  test   %al,%al
0816a307 +0x2168:  je     0816a310 <+0x2171>
0816a309 +0x216a:  mov    $0x1,%eax
0816a30e +0x216f:  jmp    0816a315 <+0x2176>
0816a310 +0x2171:  mov    $0x0,%eax
0816a315 +0x2176:  mov    %al,-0xd(%ebp)
0816a318 +0x2179:  mov    0x18(%ebp),%eax
0816a31b +0x217c:  mov    %eax,0x4(%esp)
0816a31f +0x2180:  mov    0xc(%ebp),%eax
0816a322 +0x2183:  mov    %eax,(%esp)
0816a325 +0x2186:  call   0816aefa <+0x2d5b>
0816a32a +0x218b:  mov    %eax,-0xc(%ebp)
0816a32d +0x218e:  mov    0xc(%ebp),%eax
0816a330 +0x2191:  lea    0x4(%eax),%ecx
0816a333 +0x2194:  mov    -0xc(%ebp),%edx
0816a336 +0x2197:  movzbl -0xd(%ebp),%eax
0816a33a +0x219b:  mov    %ecx,0xc(%esp)
0816a33e +0x219f:  mov    0x14(%ebp),%ecx
0816a341 +0x21a2:  mov    %ecx,0x8(%esp)
0816a345 +0x21a6:  mov    %edx,0x4(%esp)
0816a349 +0x21aa:  mov    %eax,(%esp)
0816a34c +0x21ad:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0816a351 +0x21b2:  mov    0xc(%ebp),%eax
0816a354 +0x21b5:  mov    0x14(%eax),%eax
0816a357 +0x21b8:  lea    0x1(%eax),%edx
0816a35a +0x21bb:  mov    0xc(%ebp),%eax
0816a35d +0x21be:  mov    %edx,0x14(%eax)
0816a360 +0x21c1:  mov    -0xc(%ebp),%eax
0816a363 +0x21c4:  mov    %eax,0x4(%esp)
0816a367 +0x21c8:  mov    %esi,(%esp)
0816a36a +0x21cb:  call   08169edc <+0x1d3d>
0816a36f +0x21d0:  mov    %esi,%eax
0816a371 +0x21d2:  add    $0x20,%esp
0816a374 +0x21d5:  pop    %ebx
0816a375 +0x21d6:  pop    %esi
0816a376 +0x21d7:  pop    %ebp
0816a377 +0x21d8:  ret    $0x4
0816a37a +0x21db:  push   %ebp
0816a37b +0x21dc:  mov    %esp,%ebp
0816a37d +0x21de:  sub    $0x18,%esp
0816a380 +0x21e1:  mov    0xc(%ebp),%eax
0816a383 +0x21e4:  mov    %eax,(%esp)
0816a386 +0x21e7:  call   0816af7b <+0x2ddc>
0816a38b +0x21ec:  mov    0x8(%ebp),%edx
0816a38e +0x21ef:  mov    (%eax),%eax
0816a390 +0x21f1:  mov    %eax,(%edx)
0816a392 +0x21f3:  mov    0x10(%ebp),%eax
0816a395 +0x21f6:  mov    %eax,(%esp)
0816a398 +0x21f9:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0816a39d +0x21fe:  movzbl (%eax),%edx
0816a3a0 +0x2201:  mov    0x8(%ebp),%eax
0816a3a3 +0x2204:  mov    %dl,0x4(%eax)
0816a3a6 +0x2207:  leave
0816a3a7 +0x2208:  ret
0816a3a8 +0x2209:  push   %ebp
0816a3a9 +0x220a:  mov    %esp,%ebp
0816a3ab +0x220c:  sub    $0x18,%esp
0816a3ae +0x220f:  mov    0x8(%ebp),%eax
0816a3b1 +0x2212:  mov    (%eax),%eax
0816a3b3 +0x2214:  mov    %eax,(%esp)
0816a3b6 +0x2217:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0816a3bb +0x221c:  mov    0x8(%ebp),%edx
0816a3be +0x221f:  mov    %eax,(%edx)
0816a3c0 +0x2221:  mov    0x8(%ebp),%eax
0816a3c3 +0x2224:  leave
0816a3c4 +0x2225:  ret
0816a3c5 +0x2226:  nop
0816a3c6 +0x2227:  push   %ebp
0816a3c7 +0x2228:  mov    %esp,%ebp
0816a3c9 +0x222a:  sub    $0x18,%esp
0816a3cc +0x222d:  mov    0xc(%ebp),%eax
0816a3cf +0x2230:  mov    %eax,(%esp)
0816a3d2 +0x2233:  call   0816af83 <+0x2de4>
0816a3d7 +0x2238:  mov    0x8(%ebp),%edx
0816a3da +0x223b:  mov    (%eax),%eax
0816a3dc +0x223d:  mov    %eax,(%edx)
0816a3de +0x223f:  mov    0x10(%ebp),%eax
0816a3e1 +0x2242:  mov    %eax,(%esp)
0816a3e4 +0x2245:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0816a3e9 +0x224a:  movzbl (%eax),%edx
0816a3ec +0x224d:  mov    0x8(%ebp),%eax
0816a3ef +0x2250:  mov    %dl,0x4(%eax)
0816a3f2 +0x2253:  leave
0816a3f3 +0x2254:  ret
0816a3f4 +0x2255:  push   %ebp
0816a3f5 +0x2256:  mov    %esp,%ebp
0816a3f7 +0x2258:  mov    0x8(%ebp),%eax
0816a3fa +0x225b:  add    $0x4,%eax
0816a3fd +0x225e:  pop    %ebp
0816a3fe +0x225f:  ret
0816a3ff +0x2260:  nop
0816a400 +0x2261:  push   %ebp
0816a401 +0x2262:  mov    %esp,%ebp
0816a403 +0x2264:  push   %ebx
0816a404 +0x2265:  sub    $0x14,%esp
0816a407 +0x2268:  mov    0x8(%ebp),%ebx
0816a40a +0x226b:  jmp    0816a458 <+0x22b9>
0816a40c +0x226d:  mov    0x10(%ebp),%eax
0816a40f +0x2270:  mov    %eax,(%esp)
0816a412 +0x2273:  call   0816af8b <+0x2dec>
0816a417 +0x2278:  mov    0xc(%ebp),%edx
0816a41a +0x227b:  mov    0x18(%ebp),%ecx
0816a41d +0x227e:  mov    %ecx,0x8(%esp)
0816a421 +0x2282:  mov    %eax,0x4(%esp)
0816a425 +0x2286:  mov    %edx,(%esp)
0816a428 +0x2289:  call   081697b2 <+0x1613>
0816a42d +0x228e:  xor    $0x1,%eax
0816a430 +0x2291:  test   %al,%al
0816a432 +0x2293:  je     0816a44a <+0x22ab>
0816a434 +0x2295:  mov    0x10(%ebp),%eax
0816a437 +0x2298:  mov    %eax,0x14(%ebp)
0816a43a +0x229b:  mov    0x10(%ebp),%eax
0816a43d +0x229e:  mov    %eax,(%esp)
0816a440 +0x22a1:  call   08169aae <+0x190f>
0816a445 +0x22a6:  mov    %eax,0x10(%ebp)
0816a448 +0x22a9:  jmp    0816a458 <+0x22b9>
0816a44a +0x22ab:  mov    0x10(%ebp),%eax
0816a44d +0x22ae:  mov    %eax,(%esp)
0816a450 +0x22b1:  call   08169aa3 <+0x1904>
0816a455 +0x22b6:  mov    %eax,0x10(%ebp)
0816a458 +0x22b9:  cmpl   $0x0,0x10(%ebp)
0816a45c +0x22bd:  setne  %al
0816a45f +0x22c0:  test   %al,%al
0816a461 +0x22c2:  jne    0816a40c <+0x226d>
0816a463 +0x22c4:  mov    0x14(%ebp),%eax
0816a466 +0x22c7:  mov    %eax,0x4(%esp)
0816a46a +0x22cb:  mov    %ebx,(%esp)
0816a46d +0x22ce:  call   08169c14 <+0x1a75>
0816a472 +0x22d3:  mov    %ebx,%eax
0816a474 +0x22d5:  add    $0x14,%esp
0816a477 +0x22d8:  pop    %ebx
0816a478 +0x22d9:  pop    %ebp
0816a479 +0x22da:  ret    $0x4
0816a47c +0x22dd:  push   %ebp
0816a47d +0x22de:  mov    %esp,%ebp
0816a47f +0x22e0:  sub    $0x28,%esp
0816a482 +0x22e3:  mov    0x8(%ebp),%eax
0816a485 +0x22e6:  mov    %eax,(%esp)
0816a488 +0x22e9:  call   0816afad <+0x2e0e>
0816a48d +0x22ee:  mov    %eax,0x4(%esp)
0816a491 +0x22f2:  lea    -0x9(%ebp),%eax
0816a494 +0x22f5:  mov    %eax,(%esp)
0816a497 +0x22f8:  call   0816afb8 <+0x2e19>
0816a49c +0x22fd:  leave
0816a49d +0x22fe:  ret
0816a49e +0x22ff:  push   %ebp
0816a49f +0x2300:  mov    %esp,%ebp
0816a4a1 +0x2302:  push   %esi
0816a4a2 +0x2303:  push   %ebx
0816a4a3 +0x2304:  sub    $0x20,%esp
0816a4a6 +0x2307:  mov    0x8(%ebp),%esi
0816a4a9 +0x230a:  mov    0xc(%ebp),%eax
0816a4ac +0x230d:  mov    %eax,(%esp)
0816a4af +0x2310:  call   0816a3f4 <+0x2255>
0816a4b4 +0x2315:  mov    %eax,%ebx
0816a4b6 +0x2317:  mov    0xc(%ebp),%eax
0816a4b9 +0x231a:  mov    %eax,(%esp)
0816a4bc +0x231d:  call   08168e04 <+0xc65>
0816a4c1 +0x2322:  mov    0x10(%ebp),%edx
0816a4c4 +0x2325:  mov    %edx,0x10(%esp)
0816a4c8 +0x2329:  mov    %ebx,0xc(%esp)
0816a4cc +0x232d:  mov    %eax,0x8(%esp)
0816a4d0 +0x2331:  mov    0xc(%ebp),%eax
0816a4d3 +0x2334:  mov    %eax,0x4(%esp)
0816a4d7 +0x2338:  mov    %esi,(%esp)
0816a4da +0x233b:  call   0816a400 <+0x2261>
0816a4df +0x2340:  sub    $0x4,%esp
0816a4e2 +0x2343:  mov    %esi,%eax
0816a4e4 +0x2345:  lea    -0x8(%ebp),%esp
0816a4e7 +0x2348:  add    $0x0,%esp
0816a4ea +0x234b:  pop    %ebx
0816a4eb +0x234c:  pop    %esi
0816a4ec +0x234d:  pop    %ebp
0816a4ed +0x234e:  ret    $0x4
0816a4f0 +0x2351:  push   %ebp
0816a4f1 +0x2352:  mov    %esp,%ebp
0816a4f3 +0x2354:  mov    0x8(%ebp),%eax
0816a4f6 +0x2357:  pop    %ebp
0816a4f7 +0x2358:  ret    $0x4
0816a4fa +0x235b:  push   %ebp
0816a4fb +0x235c:  mov    %esp,%ebp
0816a4fd +0x235e:  mov    0x8(%ebp),%eax
0816a500 +0x2361:  pop    %ebp
0816a501 +0x2362:  ret
0816a502 +0x2363:  push   %ebp
0816a503 +0x2364:  mov    %esp,%ebp
0816a505 +0x2366:  mov    0x8(%ebp),%eax
0816a508 +0x2369:  pop    %ebp
0816a509 +0x236a:  ret
0816a50a +0x236b:  push   %ebp
0816a50b +0x236c:  mov    %esp,%ebp
0816a50d +0x236e:  mov    0xc(%ebp),%eax
0816a510 +0x2371:  mov    (%eax),%edx
0816a512 +0x2373:  mov    0x8(%ebp),%eax
0816a515 +0x2376:  mov    %edx,(%eax)
0816a517 +0x2378:  pop    %ebp
0816a518 +0x2379:  ret
0816a519 +0x237a:  nop
0816a51a +0x237b:  push   %ebp
0816a51b +0x237c:  mov    %esp,%ebp
0816a51d +0x237e:  push   %esi
0816a51e +0x237f:  push   %ebx
0816a51f +0x2380:  sub    $0x50,%esp
0816a522 +0x2383:  mov    0x8(%ebp),%ebx
0816a525 +0x2386:  mov    0x10(%ebp),%esi
0816a528 +0x2389:  mov    0xc(%ebp),%eax
0816a52b +0x238c:  mov    %eax,(%esp)
0816a52e +0x238f:  call   0816a3f4 <+0x2255>
0816a533 +0x2394:  cmp    %eax,%esi
0816a535 +0x2396:  sete   %al
0816a538 +0x2399:  test   %al,%al
0816a53a +0x239b:  je     0816a5fc <+0x245d>
0816a540 +0x23a1:  mov    0xc(%ebp),%eax
0816a543 +0x23a4:  mov    %eax,(%esp)
0816a546 +0x23a7:  call   0816afcc <+0x2e2d>
0816a54b +0x23ac:  test   %eax,%eax
0816a54d +0x23ae:  je     0816a596 <+0x23f7>
0816a54f +0x23b0:  mov    0x14(%ebp),%eax
0816a552 +0x23b3:  mov    %eax,0x4(%esp)
0816a556 +0x23b7:  lea    -0x29(%ebp),%eax
0816a559 +0x23ba:  mov    %eax,(%esp)
0816a55c +0x23bd:  call   0816afb8 <+0x2e19>
0816a561 +0x23c2:  mov    %eax,%esi
0816a563 +0x23c4:  mov    0xc(%ebp),%eax
0816a566 +0x23c7:  mov    %eax,(%esp)
0816a569 +0x23ca:  call   0816afc0 <+0x2e21>
0816a56e +0x23cf:  mov    (%eax),%eax
0816a570 +0x23d1:  mov    %eax,(%esp)
0816a573 +0x23d4:  call   0816a47c <+0x22dd>
0816a578 +0x23d9:  mov    0xc(%ebp),%edx
0816a57b +0x23dc:  mov    %esi,0x8(%esp)
0816a57f +0x23e0:  mov    %eax,0x4(%esp)
0816a583 +0x23e4:  mov    %edx,(%esp)
0816a586 +0x23e7:  call   081697b2 <+0x1613>
0816a58b +0x23ec:  test   %al,%al
0816a58d +0x23ee:  je     0816a596 <+0x23f7>
0816a58f +0x23f0:  mov    $0x1,%eax
0816a594 +0x23f5:  jmp    0816a59b <+0x23fc>
0816a596 +0x23f7:  mov    $0x0,%eax
0816a59b +0x23fc:  test   %al,%al
0816a59d +0x23fe:  je     0816a5d6 <+0x2437>
0816a59f +0x2400:  mov    0xc(%ebp),%eax
0816a5a2 +0x2403:  mov    %eax,(%esp)
0816a5a5 +0x2406:  call   0816afc0 <+0x2e21>
0816a5aa +0x240b:  mov    (%eax),%eax
0816a5ac +0x240d:  mov    0x14(%ebp),%edx
0816a5af +0x2410:  mov    %edx,0x10(%esp)
0816a5b3 +0x2414:  mov    %eax,0xc(%esp)
0816a5b7 +0x2418:  movl   $0x0,0x8(%esp)
0816a5bf +0x2420:  mov    0xc(%ebp),%eax
0816a5c2 +0x2423:  mov    %eax,0x4(%esp)
0816a5c6 +0x2427:  mov    %ebx,(%esp)
0816a5c9 +0x242a:  call   0816afd8 <+0x2e39>
0816a5ce +0x242f:  sub    $0x4,%esp
0816a5d1 +0x2432:  jmp    0816a8d1 <+0x2732>
0816a5d6 +0x2437:  lea    -0x28(%ebp),%eax
0816a5d9 +0x243a:  mov    0x14(%ebp),%edx
0816a5dc +0x243d:  mov    %edx,0x8(%esp)
0816a5e0 +0x2441:  mov    0xc(%ebp),%edx
0816a5e3 +0x2444:  mov    %edx,0x4(%esp)
0816a5e7 +0x2448:  mov    %eax,(%esp)
0816a5ea +0x244b:  call   0816b0a0 <+0x2f01>
0816a5ef +0x2450:  sub    $0x4,%esp
0816a5f2 +0x2453:  mov    -0x28(%ebp),%eax
0816a5f5 +0x2456:  mov    %eax,(%ebx)
0816a5f7 +0x2458:  jmp    0816a8d1 <+0x2732>
0816a5fc +0x245d:  mov    0x10(%ebp),%eax
0816a5ff +0x2460:  mov    %eax,(%esp)
0816a602 +0x2463:  call   0816a47c <+0x22dd>
0816a607 +0x2468:  mov    %eax,%esi
0816a609 +0x246a:  mov    0x14(%ebp),%eax
0816a60c +0x246d:  mov    %eax,0x4(%esp)
0816a610 +0x2471:  lea    -0x1e(%ebp),%eax
0816a613 +0x2474:  mov    %eax,(%esp)
0816a616 +0x2477:  call   0816afb8 <+0x2e19>
0816a61b +0x247c:  mov    0xc(%ebp),%edx
0816a61e +0x247f:  mov    %esi,0x8(%esp)
0816a622 +0x2483:  mov    %eax,0x4(%esp)
0816a626 +0x2487:  mov    %edx,(%esp)
0816a629 +0x248a:  call   081697b2 <+0x1613>
0816a62e +0x248f:  test   %al,%al
0816a630 +0x2491:  je     0816a768 <+0x25c9>
0816a636 +0x2497:  mov    0x10(%ebp),%eax
0816a639 +0x249a:  mov    %eax,-0x30(%ebp)
0816a63c +0x249d:  mov    0x10(%ebp),%esi
0816a63f +0x24a0:  mov    0xc(%ebp),%eax
0816a642 +0x24a3:  mov    %eax,(%esp)
0816a645 +0x24a6:  call   0816b270 <+0x30d1>
0816a64a +0x24ab:  mov    (%eax),%eax
0816a64c +0x24ad:  cmp    %eax,%esi
0816a64e +0x24af:  sete   %al
0816a651 +0x24b2:  test   %al,%al
0816a653 +0x24b4:  je     0816a695 <+0x24f6>
0816a655 +0x24b6:  mov    0xc(%ebp),%eax
0816a658 +0x24b9:  mov    %eax,(%esp)
0816a65b +0x24bc:  call   0816b270 <+0x30d1>
0816a660 +0x24c1:  mov    (%eax),%esi
0816a662 +0x24c3:  mov    0xc(%ebp),%eax
0816a665 +0x24c6:  mov    %eax,(%esp)
0816a668 +0x24c9:  call   0816b270 <+0x30d1>
0816a66d +0x24ce:  mov    (%eax),%eax
0816a66f +0x24d0:  mov    0x14(%ebp),%edx
0816a672 +0x24d3:  mov    %edx,0x10(%esp)
0816a676 +0x24d7:  mov    %esi,0xc(%esp)
0816a67a +0x24db:  mov    %eax,0x8(%esp)
0816a67e +0x24df:  mov    0xc(%ebp),%eax
0816a681 +0x24e2:  mov    %eax,0x4(%esp)
0816a685 +0x24e6:  mov    %ebx,(%esp)
0816a688 +0x24e9:  call   0816afd8 <+0x2e39>
0816a68d +0x24ee:  sub    $0x4,%esp
0816a690 +0x24f1:  jmp    0816a8d1 <+0x2732>
0816a695 +0x24f6:  mov    0x14(%ebp),%eax
0816a698 +0x24f9:  mov    %eax,0x4(%esp)
0816a69c +0x24fd:  lea    -0x1d(%ebp),%eax
0816a69f +0x2500:  mov    %eax,(%esp)
0816a6a2 +0x2503:  call   0816afb8 <+0x2e19>
0816a6a7 +0x2508:  mov    %eax,%esi
0816a6a9 +0x250a:  lea    -0x30(%ebp),%eax
0816a6ac +0x250d:  mov    %eax,(%esp)
0816a6af +0x2510:  call   0816b27c <+0x30dd>
0816a6b4 +0x2515:  mov    (%eax),%eax
0816a6b6 +0x2517:  mov    %eax,(%esp)
0816a6b9 +0x251a:  call   0816a47c <+0x22dd>
0816a6be +0x251f:  mov    0xc(%ebp),%edx
0816a6c1 +0x2522:  mov    %esi,0x8(%esp)
0816a6c5 +0x2526:  mov    %eax,0x4(%esp)
0816a6c9 +0x252a:  mov    %edx,(%esp)
0816a6cc +0x252d:  call   081697b2 <+0x1613>
0816a6d1 +0x2532:  test   %al,%al
0816a6d3 +0x2534:  je     0816a742 <+0x25a3>
0816a6d5 +0x2536:  mov    -0x30(%ebp),%eax
0816a6d8 +0x2539:  mov    %eax,(%esp)
0816a6db +0x253c:  call   0816b299 <+0x30fa>
0816a6e0 +0x2541:  test   %eax,%eax
0816a6e2 +0x2543:  sete   %al
0816a6e5 +0x2546:  test   %al,%al
0816a6e7 +0x2548:  je     0816a716 <+0x2577>
0816a6e9 +0x254a:  mov    -0x30(%ebp),%eax
0816a6ec +0x254d:  mov    0x14(%ebp),%edx
0816a6ef +0x2550:  mov    %edx,0x10(%esp)
0816a6f3 +0x2554:  mov    %eax,0xc(%esp)
0816a6f7 +0x2558:  movl   $0x0,0x8(%esp)
0816a6ff +0x2560:  mov    0xc(%ebp),%eax
0816a702 +0x2563:  mov    %eax,0x4(%esp)
0816a706 +0x2567:  mov    %ebx,(%esp)
0816a709 +0x256a:  call   0816afd8 <+0x2e39>
0816a70e +0x256f:  sub    $0x4,%esp
0816a711 +0x2572:  jmp    0816a8d1 <+0x2732>
0816a716 +0x2577:  mov    0x10(%ebp),%edx
0816a719 +0x257a:  mov    0x10(%ebp),%eax
0816a71c +0x257d:  mov    0x14(%ebp),%ecx
0816a71f +0x2580:  mov    %ecx,0x10(%esp)
0816a723 +0x2584:  mov    %edx,0xc(%esp)
0816a727 +0x2588:  mov    %eax,0x8(%esp)
0816a72b +0x258c:  mov    0xc(%ebp),%eax
0816a72e +0x258f:  mov    %eax,0x4(%esp)
0816a732 +0x2593:  mov    %ebx,(%esp)
0816a735 +0x2596:  call   0816afd8 <+0x2e39>
0816a73a +0x259b:  sub    $0x4,%esp
0816a73d +0x259e:  jmp    0816a8d1 <+0x2732>
0816a742 +0x25a3:  lea    -0x1c(%ebp),%eax
0816a745 +0x25a6:  mov    0x14(%ebp),%edx
0816a748 +0x25a9:  mov    %edx,0x8(%esp)
0816a74c +0x25ad:  mov    0xc(%ebp),%edx
0816a74f +0x25b0:  mov    %edx,0x4(%esp)
0816a753 +0x25b4:  mov    %eax,(%esp)
0816a756 +0x25b7:  call   0816b0a0 <+0x2f01>
0816a75b +0x25bc:  sub    $0x4,%esp
0816a75e +0x25bf:  mov    -0x1c(%ebp),%eax
0816a761 +0x25c2:  mov    %eax,(%ebx)
0816a763 +0x25c4:  jmp    0816a8d1 <+0x2732>
0816a768 +0x25c9:  mov    0x14(%ebp),%eax
0816a76b +0x25cc:  mov    %eax,0x4(%esp)
0816a76f +0x25d0:  lea    -0x12(%ebp),%eax
0816a772 +0x25d3:  mov    %eax,(%esp)
0816a775 +0x25d6:  call   0816afb8 <+0x2e19>
0816a77a +0x25db:  mov    %eax,%esi
0816a77c +0x25dd:  mov    0x10(%ebp),%eax
0816a77f +0x25e0:  mov    %eax,(%esp)
0816a782 +0x25e3:  call   0816a47c <+0x22dd>
0816a787 +0x25e8:  mov    0xc(%ebp),%edx
0816a78a +0x25eb:  mov    %esi,0x8(%esp)
0816a78e +0x25ef:  mov    %eax,0x4(%esp)
0816a792 +0x25f3:  mov    %edx,(%esp)
0816a795 +0x25f6:  call   081697b2 <+0x1613>
0816a79a +0x25fb:  test   %al,%al
0816a79c +0x25fd:  je     0816a8c2 <+0x2723>
0816a7a2 +0x2603:  mov    0x10(%ebp),%eax
0816a7a5 +0x2606:  mov    %eax,-0x34(%ebp)
0816a7a8 +0x2609:  mov    0x10(%ebp),%esi
0816a7ab +0x260c:  mov    0xc(%ebp),%eax
0816a7ae +0x260f:  mov    %eax,(%esp)
0816a7b1 +0x2612:  call   0816afc0 <+0x2e21>
0816a7b6 +0x2617:  mov    (%eax),%eax
0816a7b8 +0x2619:  cmp    %eax,%esi
0816a7ba +0x261b:  sete   %al
0816a7bd +0x261e:  test   %al,%al
0816a7bf +0x2620:  je     0816a7f8 <+0x2659>
0816a7c1 +0x2622:  mov    0xc(%ebp),%eax
0816a7c4 +0x2625:  mov    %eax,(%esp)
0816a7c7 +0x2628:  call   0816afc0 <+0x2e21>
0816a7cc +0x262d:  mov    (%eax),%eax
0816a7ce +0x262f:  mov    0x14(%ebp),%edx
0816a7d1 +0x2632:  mov    %edx,0x10(%esp)
0816a7d5 +0x2636:  mov    %eax,0xc(%esp)
0816a7d9 +0x263a:  movl   $0x0,0x8(%esp)
0816a7e1 +0x2642:  mov    0xc(%ebp),%eax
0816a7e4 +0x2645:  mov    %eax,0x4(%esp)
0816a7e8 +0x2649:  mov    %ebx,(%esp)
0816a7eb +0x264c:  call   0816afd8 <+0x2e39>
0816a7f0 +0x2651:  sub    $0x4,%esp
0816a7f3 +0x2654:  jmp    0816a8d1 <+0x2732>
0816a7f8 +0x2659:  lea    -0x34(%ebp),%eax
0816a7fb +0x265c:  mov    %eax,(%esp)
0816a7fe +0x265f:  call   0816b2a4 <+0x3105>
0816a803 +0x2664:  mov    (%eax),%eax
0816a805 +0x2666:  mov    %eax,(%esp)
0816a808 +0x2669:  call   0816a47c <+0x22dd>
0816a80d +0x266e:  mov    %eax,%esi
0816a80f +0x2670:  mov    0x14(%ebp),%eax
0816a812 +0x2673:  mov    %eax,0x4(%esp)
0816a816 +0x2677:  lea    -0x11(%ebp),%eax
0816a819 +0x267a:  mov    %eax,(%esp)
0816a81c +0x267d:  call   0816afb8 <+0x2e19>
0816a821 +0x2682:  mov    0xc(%ebp),%edx
0816a824 +0x2685:  mov    %esi,0x8(%esp)
0816a828 +0x2689:  mov    %eax,0x4(%esp)
0816a82c +0x268d:  mov    %edx,(%esp)
0816a82f +0x2690:  call   081697b2 <+0x1613>
0816a834 +0x2695:  test   %al,%al
0816a836 +0x2697:  je     0816a89f <+0x2700>
0816a838 +0x2699:  mov    0x10(%ebp),%eax
0816a83b +0x269c:  mov    %eax,(%esp)
0816a83e +0x269f:  call   0816b299 <+0x30fa>
0816a843 +0x26a4:  test   %eax,%eax
0816a845 +0x26a6:  sete   %al
0816a848 +0x26a9:  test   %al,%al
0816a84a +0x26ab:  je     0816a876 <+0x26d7>
0816a84c +0x26ad:  mov    0x10(%ebp),%eax
0816a84f +0x26b0:  mov    0x14(%ebp),%edx
0816a852 +0x26b3:  mov    %edx,0x10(%esp)
0816a856 +0x26b7:  mov    %eax,0xc(%esp)
0816a85a +0x26bb:  movl   $0x0,0x8(%esp)
0816a862 +0x26c3:  mov    0xc(%ebp),%eax
0816a865 +0x26c6:  mov    %eax,0x4(%esp)
0816a869 +0x26ca:  mov    %ebx,(%esp)
0816a86c +0x26cd:  call   0816afd8 <+0x2e39>
0816a871 +0x26d2:  sub    $0x4,%esp
0816a874 +0x26d5:  jmp    0816a8d1 <+0x2732>
0816a876 +0x26d7:  mov    -0x34(%ebp),%edx
0816a879 +0x26da:  mov    -0x34(%ebp),%eax
0816a87c +0x26dd:  mov    0x14(%ebp),%ecx
0816a87f +0x26e0:  mov    %ecx,0x10(%esp)
0816a883 +0x26e4:  mov    %edx,0xc(%esp)
0816a887 +0x26e8:  mov    %eax,0x8(%esp)
0816a88b +0x26ec:  mov    0xc(%ebp),%eax
0816a88e +0x26ef:  mov    %eax,0x4(%esp)
0816a892 +0x26f3:  mov    %ebx,(%esp)
0816a895 +0x26f6:  call   0816afd8 <+0x2e39>
0816a89a +0x26fb:  sub    $0x4,%esp
0816a89d +0x26fe:  jmp    0816a8d1 <+0x2732>
0816a89f +0x2700:  lea    -0x10(%ebp),%eax
0816a8a2 +0x2703:  mov    0x14(%ebp),%edx
0816a8a5 +0x2706:  mov    %edx,0x8(%esp)
0816a8a9 +0x270a:  mov    0xc(%ebp),%edx
0816a8ac +0x270d:  mov    %edx,0x4(%esp)
0816a8b0 +0x2711:  mov    %eax,(%esp)
0816a8b3 +0x2714:  call   0816b0a0 <+0x2f01>
0816a8b8 +0x2719:  sub    $0x4,%esp
0816a8bb +0x271c:  mov    -0x10(%ebp),%eax
0816a8be +0x271f:  mov    %eax,(%ebx)
0816a8c0 +0x2721:  jmp    0816a8d1 <+0x2732>
0816a8c2 +0x2723:  mov    0x10(%ebp),%eax
0816a8c5 +0x2726:  mov    %eax,0x4(%esp)
0816a8c9 +0x272a:  mov    %ebx,(%esp)
0816a8cc +0x272d:  call   08169c14 <+0x1a75>
0816a8d1 +0x2732:  mov    %ebx,%eax
0816a8d3 +0x2734:  lea    -0x8(%ebp),%esp
0816a8d6 +0x2737:  add    $0x0,%esp
0816a8d9 +0x273a:  pop    %ebx
0816a8da +0x273b:  pop    %esi
0816a8db +0x273c:  pop    %ebp
0816a8dc +0x273d:  ret    $0x4
0816a8df +0x2740:  nop
0816a8e0 +0x2741:  push   %ebp
0816a8e1 +0x2742:  mov    %esp,%ebp
0816a8e3 +0x2744:  sub    $0x18,%esp
0816a8e6 +0x2747:  mov    0x8(%ebp),%eax
0816a8e9 +0x274a:  mov    %eax,(%esp)
0816a8ec +0x274d:  call   0816b2c2 <+0x3123>
0816a8f1 +0x2752:  mov    0x8(%ebp),%eax
0816a8f4 +0x2755:  movl   $0x0,(%eax)
0816a8fa +0x275b:  mov    0x8(%ebp),%eax
0816a8fd +0x275e:  movl   $0x0,0x4(%eax)
0816a904 +0x2765:  mov    0x8(%ebp),%eax
0816a907 +0x2768:  movl   $0x0,0x8(%eax)
0816a90e +0x276f:  leave
0816a90f +0x2770:  ret
0816a910 +0x2771:  push   %ebp
0816a911 +0x2772:  mov    %esp,%ebp
0816a913 +0x2774:  sub    $0x18,%esp
0816a916 +0x2777:  mov    0x8(%ebp),%eax
0816a919 +0x277a:  mov    %eax,(%esp)
0816a91c +0x277d:  call   0816b2d6 <+0x3137>
0816a921 +0x2782:  leave
0816a922 +0x2783:  ret
0816a923 +0x2784:  nop
0816a924 +0x2785:  push   %ebp
0816a925 +0x2786:  mov    %esp,%ebp
0816a927 +0x2788:  sub    $0x18,%esp
0816a92a +0x278b:  cmpl   $0x0,0xc(%ebp)
0816a92e +0x278f:  je     0816a949 <+0x27aa>
0816a930 +0x2791:  mov    0x8(%ebp),%eax
0816a933 +0x2794:  mov    0x10(%ebp),%edx
0816a936 +0x2797:  mov    %edx,0x8(%esp)
0816a93a +0x279b:  mov    0xc(%ebp),%edx
0816a93d +0x279e:  mov    %edx,0x4(%esp)
0816a941 +0x27a2:  mov    %eax,(%esp)
0816a944 +0x27a5:  call   0816b2dc <+0x313d>
0816a949 +0x27aa:  leave
0816a94a +0x27ab:  ret
0816a94b +0x27ac:  push   %ebp
0816a94c +0x27ad:  mov    %esp,%ebp
0816a94e +0x27af:  sub    $0x18,%esp
0816a951 +0x27b2:  mov    0xc(%ebp),%eax
0816a954 +0x27b5:  mov    %eax,0x4(%esp)
0816a958 +0x27b9:  mov    0x8(%ebp),%eax
0816a95b +0x27bc:  mov    %eax,(%esp)
0816a95e +0x27bf:  call   0816b2ef <+0x3150>
0816a963 +0x27c4:  leave
0816a964 +0x27c5:  ret
0816a965 +0x27c6:  nop
0816a966 +0x27c7:  push   %ebp
0816a967 +0x27c8:  mov    %esp,%ebp
0816a969 +0x27ca:  pop    %ebp
0816a96a +0x27cb:  ret
0816a96b +0x27cc:  nop
0816a96c +0x27cd:  push   %ebp
0816a96d +0x27ce:  mov    %esp,%ebp
0816a96f +0x27d0:  sub    $0x18,%esp
0816a972 +0x27d3:  mov    0xc(%ebp),%eax
0816a975 +0x27d6:  mov    %eax,(%esp)
0816a978 +0x27d9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816a97d +0x27de:  leave
0816a97e +0x27df:  ret
0816a97f +0x27e0:  push   %ebp
0816a980 +0x27e1:  mov    %esp,%ebp
0816a982 +0x27e3:  pop    %ebp
0816a983 +0x27e4:  ret
0816a984 +0x27e5:  push   %ebp
0816a985 +0x27e6:  mov    %esp,%ebp
0816a987 +0x27e8:  sub    $0x18,%esp
0816a98a +0x27eb:  mov    0x8(%ebp),%eax
0816a98d +0x27ee:  mov    %eax,(%esp)
0816a990 +0x27f1:  call   0816b316 <+0x3177>
0816a995 +0x27f6:  leave
0816a996 +0x27f7:  ret
0816a997 +0x27f8:  nop
0816a998 +0x27f9:  push   %ebp
0816a999 +0x27fa:  mov    %esp,%ebp
0816a99b +0x27fc:  pop    %ebp
0816a99c +0x27fd:  ret
0816a99d +0x27fe:  nop
0816a99e +0x27ff:  push   %ebp
0816a99f +0x2800:  mov    %esp,%ebp
0816a9a1 +0x2802:  sub    $0x18,%esp
0816a9a4 +0x2805:  mov    0xc(%ebp),%eax
0816a9a7 +0x2808:  mov    %eax,(%esp)
0816a9aa +0x280b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816a9af +0x2810:  leave
0816a9b0 +0x2811:  ret
0816a9b1 +0x2812:  push   %ebp
0816a9b2 +0x2813:  mov    %esp,%ebp
0816a9b4 +0x2815:  pop    %ebp
0816a9b5 +0x2816:  ret
0816a9b6 +0x2817:  push   %ebp
0816a9b7 +0x2818:  mov    %esp,%ebp
0816a9b9 +0x281a:  sub    $0x18,%esp
0816a9bc +0x281d:  mov    0x8(%ebp),%eax
0816a9bf +0x2820:  mov    %eax,(%esp)
0816a9c2 +0x2823:  call   0816b31c <+0x317d>
0816a9c7 +0x2828:  leave
0816a9c8 +0x2829:  ret
0816a9c9 +0x282a:  nop
0816a9ca +0x282b:  push   %ebp
0816a9cb +0x282c:  mov    %esp,%ebp
0816a9cd +0x282e:  sub    $0x18,%esp
0816a9d0 +0x2831:  mov    0x8(%ebp),%eax
0816a9d3 +0x2834:  mov    %eax,(%esp)
0816a9d6 +0x2837:  call   0816b322 <+0x3183>
0816a9db +0x283c:  leave
0816a9dc +0x283d:  ret
0816a9dd +0x283e:  nop
0816a9de +0x283f:  push   %ebp
0816a9df +0x2840:  mov    %esp,%ebp
0816a9e1 +0x2842:  mov    0x8(%ebp),%eax
0816a9e4 +0x2845:  movl   $0x0,0x4(%eax)
0816a9eb +0x284c:  mov    0x8(%ebp),%eax
0816a9ee +0x284f:  movl   $0x0,0x8(%eax)
0816a9f5 +0x2856:  mov    0x8(%ebp),%eax
0816a9f8 +0x2859:  lea    0x4(%eax),%edx
0816a9fb +0x285c:  mov    0x8(%ebp),%eax
0816a9fe +0x285f:  mov    %edx,0xc(%eax)
0816aa01 +0x2862:  mov    0x8(%ebp),%eax
0816aa04 +0x2865:  lea    0x4(%eax),%edx
0816aa07 +0x2868:  mov    0x8(%ebp),%eax
0816aa0a +0x286b:  mov    %edx,0x10(%eax)
0816aa0d +0x286e:  pop    %ebp
0816aa0e +0x286f:  ret
0816aa0f +0x2870:  nop
0816aa10 +0x2871:  push   %ebp
0816aa11 +0x2872:  mov    %esp,%ebp
0816aa13 +0x2874:  mov    0x8(%ebp),%eax
0816aa16 +0x2877:  pop    %ebp
0816aa17 +0x2878:  ret
0816aa18 +0x2879:  push   %ebp
0816aa19 +0x287a:  mov    %esp,%ebp
0816aa1b +0x287c:  pop    %ebp
0816aa1c +0x287d:  ret
0816aa1d +0x287e:  nop
0816aa1e +0x287f:  push   %ebp
0816aa1f +0x2880:  mov    %esp,%ebp
0816aa21 +0x2882:  sub    $0x18,%esp
0816aa24 +0x2885:  mov    0xc(%ebp),%eax
0816aa27 +0x2888:  mov    %eax,(%esp)
0816aa2a +0x288b:  call   0816aa18 <+0x2879>
0816aa2f +0x2890:  leave
0816aa30 +0x2891:  ret
0816aa31 +0x2892:  nop
0816aa32 +0x2893:  push   %ebp
0816aa33 +0x2894:  mov    %esp,%ebp
0816aa35 +0x2896:  sub    $0x18,%esp
0816aa38 +0x2899:  mov    0x8(%ebp),%eax
0816aa3b +0x289c:  movl   $0x1,0x8(%esp)
0816aa43 +0x28a4:  mov    0xc(%ebp),%edx
0816aa46 +0x28a7:  mov    %edx,0x4(%esp)
0816aa4a +0x28ab:  mov    %eax,(%esp)
0816aa4d +0x28ae:  call   0816b328 <+0x3189>
0816aa52 +0x28b3:  leave
0816aa53 +0x28b4:  ret
0816aa54 +0x28b5:  push   %ebp
0816aa55 +0x28b6:  mov    %esp,%ebp
0816aa57 +0x28b8:  sub    $0x18,%esp
0816aa5a +0x28bb:  mov    0x8(%ebp),%eax
0816aa5d +0x28be:  mov    %eax,(%esp)
0816aa60 +0x28c1:  call   0816b33c <+0x319d>
0816aa65 +0x28c6:  leave
0816aa66 +0x28c7:  ret
0816aa67 +0x28c8:  nop
0816aa68 +0x28c9:  push   %ebp
0816aa69 +0x28ca:  mov    %esp,%ebp
0816aa6b +0x28cc:  mov    0x8(%ebp),%eax
0816aa6e +0x28cf:  movl   $0x0,0x4(%eax)
0816aa75 +0x28d6:  mov    0x8(%ebp),%eax
0816aa78 +0x28d9:  movl   $0x0,0x8(%eax)
0816aa7f +0x28e0:  mov    0x8(%ebp),%eax
0816aa82 +0x28e3:  lea    0x4(%eax),%edx
0816aa85 +0x28e6:  mov    0x8(%ebp),%eax
0816aa88 +0x28e9:  mov    %edx,0xc(%eax)
0816aa8b +0x28ec:  mov    0x8(%ebp),%eax
0816aa8e +0x28ef:  lea    0x4(%eax),%edx
0816aa91 +0x28f2:  mov    0x8(%ebp),%eax
0816aa94 +0x28f5:  mov    %edx,0x10(%eax)
0816aa97 +0x28f8:  pop    %ebp
0816aa98 +0x28f9:  ret
0816aa99 +0x28fa:  nop
0816aa9a +0x28fb:  push   %ebp
0816aa9b +0x28fc:  mov    %esp,%ebp
0816aa9d +0x28fe:  mov    0x8(%ebp),%eax
0816aaa0 +0x2901:  pop    %ebp
0816aaa1 +0x2902:  ret
0816aaa2 +0x2903:  push   %ebp
0816aaa3 +0x2904:  mov    %esp,%ebp
0816aaa5 +0x2906:  sub    $0x18,%esp
0816aaa8 +0x2909:  mov    0x8(%ebp),%eax
0816aaab +0x290c:  add    $0x10,%eax
0816aaae +0x290f:  mov    %eax,(%esp)
0816aab1 +0x2912:  call   0816833a <+0x19b>
0816aab6 +0x2917:  leave
0816aab7 +0x2918:  ret
0816aab8 +0x2919:  push   %ebp
0816aab9 +0x291a:  mov    %esp,%ebp
0816aabb +0x291c:  sub    $0x18,%esp
0816aabe +0x291f:  mov    0xc(%ebp),%eax
0816aac1 +0x2922:  mov    %eax,(%esp)
0816aac4 +0x2925:  call   0816aaa2 <+0x2903>
0816aac9 +0x292a:  leave
0816aaca +0x292b:  ret
0816aacb +0x292c:  nop
0816aacc +0x292d:  push   %ebp
0816aacd +0x292e:  mov    %esp,%ebp
0816aacf +0x2930:  sub    $0x18,%esp
0816aad2 +0x2933:  mov    0x8(%ebp),%eax
0816aad5 +0x2936:  movl   $0x1,0x8(%esp)
0816aadd +0x293e:  mov    0xc(%ebp),%edx
0816aae0 +0x2941:  mov    %edx,0x4(%esp)
0816aae4 +0x2945:  mov    %eax,(%esp)
0816aae7 +0x2948:  call   0816b342 <+0x31a3>
0816aaec +0x294d:  leave
0816aaed +0x294e:  ret
0816aaee +0x294f:  push   %ebp
0816aaef +0x2950:  mov    %esp,%ebp
0816aaf1 +0x2952:  sub    $0x18,%esp
0816aaf4 +0x2955:  mov    0x8(%ebp),%eax
0816aaf7 +0x2958:  mov    %eax,(%esp)
0816aafa +0x295b:  call   0816b356 <+0x31b7>
0816aaff +0x2960:  leave
0816ab00 +0x2961:  ret
0816ab01 +0x2962:  nop
0816ab02 +0x2963:  push   %ebp
0816ab03 +0x2964:  mov    %esp,%ebp
0816ab05 +0x2966:  pop    %ebp
0816ab06 +0x2967:  ret
0816ab07 +0x2968:  nop
0816ab08 +0x2969:  push   %ebp
0816ab09 +0x296a:  mov    %esp,%ebp
0816ab0b +0x296c:  sub    $0x18,%esp
0816ab0e +0x296f:  mov    0xc(%ebp),%eax
0816ab11 +0x2972:  mov    %eax,(%esp)
0816ab14 +0x2975:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816ab19 +0x297a:  leave
0816ab1a +0x297b:  ret
0816ab1b +0x297c:  push   %ebp
0816ab1c +0x297d:  mov    %esp,%ebp
0816ab1e +0x297f:  pop    %ebp
0816ab1f +0x2980:  ret
0816ab20 +0x2981:  push   %ebp
0816ab21 +0x2982:  mov    %esp,%ebp
0816ab23 +0x2984:  mov    0x8(%ebp),%eax
0816ab26 +0x2987:  pop    %ebp
0816ab27 +0x2988:  ret
0816ab28 +0x2989:  push   %ebp
0816ab29 +0x298a:  mov    %esp,%ebp
0816ab2b +0x298c:  mov    0x8(%ebp),%eax
0816ab2e +0x298f:  pop    %ebp
0816ab2f +0x2990:  ret
0816ab30 +0x2991:  push   %ebp
0816ab31 +0x2992:  mov    %esp,%ebp
0816ab33 +0x2994:  push   %esi
0816ab34 +0x2995:  push   %ebx
0816ab35 +0x2996:  sub    $0x10,%esp
0816ab38 +0x2999:  mov    0x10(%ebp),%eax
0816ab3b +0x299c:  mov    %eax,(%esp)
0816ab3e +0x299f:  call   0816b35b <+0x31bc>
0816ab43 +0x29a4:  mov    %eax,%esi
0816ab45 +0x29a6:  mov    0xc(%ebp),%eax
0816ab48 +0x29a9:  mov    %eax,(%esp)
0816ab4b +0x29ac:  call   0816b35b <+0x31bc>
0816ab50 +0x29b1:  mov    %eax,%ebx
0816ab52 +0x29b3:  mov    0x8(%ebp),%eax
0816ab55 +0x29b6:  mov    %eax,(%esp)
0816ab58 +0x29b9:  call   0816b35b <+0x31bc>
0816ab5d +0x29be:  mov    %esi,0x8(%esp)
0816ab61 +0x29c2:  mov    %ebx,0x4(%esp)
0816ab65 +0x29c6:  mov    %eax,(%esp)
0816ab68 +0x29c9:  call   0816b363 <+0x31c4>
0816ab6d +0x29ce:  add    $0x10,%esp
0816ab70 +0x29d1:  pop    %ebx
0816ab71 +0x29d2:  pop    %esi
0816ab72 +0x29d3:  pop    %ebp
0816ab73 +0x29d4:  ret
0816ab74 +0x29d5:  push   %ebp
0816ab75 +0x29d6:  mov    %esp,%ebp
0816ab77 +0x29d8:  sub    $0x18,%esp
0816ab7a +0x29db:  mov    0x8(%ebp),%eax
0816ab7d +0x29de:  mov    %eax,(%esp)
0816ab80 +0x29e1:  call   0816adbe <+0x2c1f>
0816ab85 +0x29e6:  mov    %eax,(%esp)
0816ab88 +0x29e9:  call   0816b388 <+0x31e9>
0816ab8d +0x29ee:  leave
0816ab8e +0x29ef:  ret
0816ab8f +0x29f0:  nop
0816ab90 +0x29f1:  push   %ebp
0816ab91 +0x29f2:  mov    %esp,%ebp
0816ab93 +0x29f4:  sub    $0x18,%esp
0816ab96 +0x29f7:  mov    0x8(%ebp),%eax
0816ab99 +0x29fa:  mov    %eax,(%esp)
0816ab9c +0x29fd:  call   0816b388 <+0x31e9>
0816aba1 +0x2a02:  cmp    0xc(%ebp),%eax
0816aba4 +0x2a05:  setb   %al
0816aba7 +0x2a08:  movzbl %al,%eax
0816abaa +0x2a0b:  test   %eax,%eax
0816abac +0x2a0d:  setne  %al
0816abaf +0x2a10:  test   %al,%al
0816abb1 +0x2a12:  je     0816abb8 <+0x2a19>
0816abb3 +0x2a14:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0816abb8 +0x2a19:  mov    0xc(%ebp),%edx
0816abbb +0x2a1c:  mov    %edx,%eax
0816abbd +0x2a1e:  add    %eax,%eax
0816abbf +0x2a20:  add    %edx,%eax
0816abc1 +0x2a22:  shl    $0x2,%eax
0816abc4 +0x2a25:  mov    %eax,(%esp)
0816abc7 +0x2a28:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816abcc +0x2a2d:  leave
0816abcd +0x2a2e:  ret
0816abce +0x2a2f:  push   %ebp
0816abcf +0x2a30:  mov    %esp,%ebp
0816abd1 +0x2a32:  push   %ebx
0816abd2 +0x2a33:  sub    $0x14,%esp
0816abd5 +0x2a36:  mov    0x8(%ebp),%ebx
0816abd8 +0x2a39:  mov    0xc(%ebp),%eax
0816abdb +0x2a3c:  mov    (%eax),%eax
0816abdd +0x2a3e:  mov    %eax,0x4(%esp)
0816abe1 +0x2a42:  mov    %ebx,(%esp)
0816abe4 +0x2a45:  call   0816b392 <+0x31f3>
0816abe9 +0x2a4a:  mov    %ebx,%eax
0816abeb +0x2a4c:  add    $0x14,%esp
0816abee +0x2a4f:  pop    %ebx
0816abef +0x2a50:  pop    %ebp
0816abf0 +0x2a51:  ret    $0x4
0816abf3 +0x2a54:  push   %ebp
0816abf4 +0x2a55:  mov    %esp,%ebp
0816abf6 +0x2a57:  sub    $0x18,%esp
0816abf9 +0x2a5a:  mov    0x10(%ebp),%eax
0816abfc +0x2a5d:  mov    %eax,0x8(%esp)
0816ac00 +0x2a61:  mov    0xc(%ebp),%eax
0816ac03 +0x2a64:  mov    %eax,0x4(%esp)
0816ac07 +0x2a68:  mov    0x8(%ebp),%eax
0816ac0a +0x2a6b:  mov    %eax,(%esp)
0816ac0d +0x2a6e:  call   0816b39f <+0x3200>
0816ac12 +0x2a73:  leave
0816ac13 +0x2a74:  ret
0816ac14 +0x2a75:  push   %ebp
0816ac15 +0x2a76:  mov    %esp,%ebp
0816ac17 +0x2a78:  mov    0x8(%ebp),%eax
0816ac1a +0x2a7b:  add    $0x10,%eax
0816ac1d +0x2a7e:  pop    %ebp
0816ac1e +0x2a7f:  ret
0816ac1f +0x2a80:  nop
0816ac20 +0x2a81:  push   %ebp
0816ac21 +0x2a82:  mov    %esp,%ebp
0816ac23 +0x2a84:  push   %ebx
0816ac24 +0x2a85:  sub    $0x14,%esp
0816ac27 +0x2a88:  mov    0x8(%ebp),%ebx
0816ac2a +0x2a8b:  jmp    0816ac75 <+0x2ad6>
0816ac2c +0x2a8d:  mov    0x10(%ebp),%eax
0816ac2f +0x2a90:  mov    %eax,(%esp)
0816ac32 +0x2a93:  call   0816a26a <+0x20cb>
0816ac37 +0x2a98:  mov    0xc(%ebp),%edx
0816ac3a +0x2a9b:  mov    %eax,0x8(%esp)
0816ac3e +0x2a9f:  mov    0x18(%ebp),%eax
0816ac41 +0x2aa2:  mov    %eax,0x4(%esp)
0816ac45 +0x2aa6:  mov    %edx,(%esp)
0816ac48 +0x2aa9:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0816ac4d +0x2aae:  test   %al,%al
0816ac4f +0x2ab0:  je     0816ac67 <+0x2ac8>
0816ac51 +0x2ab2:  mov    0x10(%ebp),%eax
0816ac54 +0x2ab5:  mov    %eax,0x14(%ebp)
0816ac57 +0x2ab8:  mov    0x10(%ebp),%eax
0816ac5a +0x2abb:  mov    %eax,(%esp)
0816ac5d +0x2abe:  call   08169b4e <+0x19af>
0816ac62 +0x2ac3:  mov    %eax,0x10(%ebp)
0816ac65 +0x2ac6:  jmp    0816ac75 <+0x2ad6>
0816ac67 +0x2ac8:  mov    0x10(%ebp),%eax
0816ac6a +0x2acb:  mov    %eax,(%esp)
0816ac6d +0x2ace:  call   08169b43 <+0x19a4>
0816ac72 +0x2ad3:  mov    %eax,0x10(%ebp)
0816ac75 +0x2ad6:  cmpl   $0x0,0x10(%ebp)
0816ac79 +0x2ada:  setne  %al
0816ac7c +0x2add:  test   %al,%al
0816ac7e +0x2adf:  jne    0816ac2c <+0x2a8d>
0816ac80 +0x2ae1:  mov    0x14(%ebp),%eax
0816ac83 +0x2ae4:  mov    %eax,0x4(%esp)
0816ac87 +0x2ae8:  mov    %ebx,(%esp)
0816ac8a +0x2aeb:  call   08169edc <+0x1d3d>
0816ac8f +0x2af0:  mov    %ebx,%eax
0816ac91 +0x2af2:  add    $0x14,%esp
0816ac94 +0x2af5:  pop    %ebx
0816ac95 +0x2af6:  pop    %ebp
0816ac96 +0x2af7:  ret    $0x4
0816ac99 +0x2afa:  nop
0816ac9a +0x2afb:  push   %ebp
0816ac9b +0x2afc:  mov    %esp,%ebp
0816ac9d +0x2afe:  sub    $0x18,%esp
0816aca0 +0x2b01:  mov    0xc(%ebp),%eax
0816aca3 +0x2b04:  mov    %eax,(%esp)
0816aca6 +0x2b07:  call   0816af7b <+0x2ddc>
0816acab +0x2b0c:  mov    0x8(%ebp),%edx
0816acae +0x2b0f:  mov    (%eax),%eax
0816acb0 +0x2b11:  mov    %eax,(%edx)
0816acb2 +0x2b13:  mov    0x10(%ebp),%eax
0816acb5 +0x2b16:  mov    %eax,(%esp)
0816acb8 +0x2b19:  call   0816af7b <+0x2ddc>
0816acbd +0x2b1e:  mov    0x8(%ebp),%edx
0816acc0 +0x2b21:  mov    (%eax),%eax
0816acc2 +0x2b23:  mov    %eax,0x4(%edx)
0816acc5 +0x2b26:  leave
0816acc6 +0x2b27:  ret
0816acc7 +0x2b28:  nop
0816acc8 +0x2b29:  push   %ebp
0816acc9 +0x2b2a:  mov    %esp,%ebp
0816accb +0x2b2c:  push   %ebx
0816accc +0x2b2d:  sub    $0x14,%esp
0816accf +0x2b30:  mov    0x8(%ebp),%eax
0816acd2 +0x2b33:  mov    %eax,(%esp)
0816acd5 +0x2b36:  call   08168e8e <+0xcef>
0816acda +0x2b3b:  mov    %eax,0x4(%esp)
0816acde +0x2b3f:  mov    0x8(%ebp),%eax
0816ace1 +0x2b42:  mov    %eax,(%esp)
0816ace4 +0x2b45:  call   08168e38 <+0xc99>
0816ace9 +0x2b4a:  mov    0x8(%ebp),%eax
0816acec +0x2b4d:  mov    %eax,(%esp)
0816acef +0x2b50:  call   0816b3c0 <+0x3221>
0816acf4 +0x2b55:  mov    %eax,%ebx
0816acf6 +0x2b57:  mov    0x8(%ebp),%eax
0816acf9 +0x2b5a:  mov    %eax,(%esp)
0816acfc +0x2b5d:  call   08169e32 <+0x1c93>
0816ad01 +0x2b62:  mov    %eax,(%ebx)
0816ad03 +0x2b64:  mov    0x8(%ebp),%eax
0816ad06 +0x2b67:  mov    %eax,(%esp)
0816ad09 +0x2b6a:  call   0816b3cc <+0x322d>
0816ad0e +0x2b6f:  movl   $0x0,(%eax)
0816ad14 +0x2b75:  mov    0x8(%ebp),%eax
0816ad17 +0x2b78:  mov    %eax,(%esp)
0816ad1a +0x2b7b:  call   0816b3d8 <+0x3239>
0816ad1f +0x2b80:  mov    %eax,%ebx
0816ad21 +0x2b82:  mov    0x8(%ebp),%eax
0816ad24 +0x2b85:  mov    %eax,(%esp)
0816ad27 +0x2b88:  call   08169e32 <+0x1c93>
0816ad2c +0x2b8d:  mov    %eax,(%ebx)
0816ad2e +0x2b8f:  mov    0x8(%ebp),%eax
0816ad31 +0x2b92:  movl   $0x0,0x14(%eax)
0816ad38 +0x2b99:  add    $0x14,%esp
0816ad3b +0x2b9c:  pop    %ebx
0816ad3c +0x2b9d:  pop    %ebp
0816ad3d +0x2b9e:  ret
0816ad3e +0x2b9f:  push   %ebp
0816ad3f +0x2ba0:  mov    %esp,%ebp
0816ad41 +0x2ba2:  push   %ebx
0816ad42 +0x2ba3:  sub    $0x14,%esp
0816ad45 +0x2ba6:  mov    0x8(%ebp),%ebx
0816ad48 +0x2ba9:  mov    0xc(%ebp),%eax
0816ad4b +0x2bac:  movl   $0x4,0x8(%esp)
0816ad53 +0x2bb4:  mov    %eax,0x4(%esp)
0816ad57 +0x2bb8:  mov    %ebx,(%esp)
0816ad5a +0x2bbb:  call   0807d880 <_init+0x178>
0816ad5f +0x2bc0:  mov    0xc(%ebp),%eax
0816ad62 +0x2bc3:  mov    (%eax),%eax
0816ad64 +0x2bc5:  mov    %eax,(%esp)
0816ad67 +0x2bc8:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0816ad6c +0x2bcd:  mov    0xc(%ebp),%edx
0816ad6f +0x2bd0:  mov    %eax,(%edx)
0816ad71 +0x2bd2:  mov    %ebx,%eax
0816ad73 +0x2bd4:  add    $0x14,%esp
0816ad76 +0x2bd7:  pop    %ebx
0816ad77 +0x2bd8:  pop    %ebp
0816ad78 +0x2bd9:  ret    $0x4
0816ad7b +0x2bdc:  nop
0816ad7c +0x2bdd:  push   %ebp
0816ad7d +0x2bde:  mov    %esp,%ebp
0816ad7f +0x2be0:  sub    $0x28,%esp
0816ad82 +0x2be3:  mov    0x8(%ebp),%eax
0816ad85 +0x2be6:  lea    0x4(%eax),%edx
0816ad88 +0x2be9:  mov    0xc(%ebp),%eax
0816ad8b +0x2bec:  mov    %edx,0x4(%esp)
0816ad8f +0x2bf0:  mov    %eax,(%esp)
0816ad92 +0x2bf3:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0816ad97 +0x2bf8:  mov    %eax,-0xc(%ebp)
0816ad9a +0x2bfb:  mov    -0xc(%ebp),%eax
0816ad9d +0x2bfe:  mov    %eax,0x4(%esp)
0816ada1 +0x2c02:  mov    0x8(%ebp),%eax
0816ada4 +0x2c05:  mov    %eax,(%esp)
0816ada7 +0x2c08:  call   08169b5a <+0x19bb>
0816adac +0x2c0d:  mov    0x8(%ebp),%eax
0816adaf +0x2c10:  mov    0x14(%eax),%eax
0816adb2 +0x2c13:  lea    -0x1(%eax),%edx
0816adb5 +0x2c16:  mov    0x8(%ebp),%eax
0816adb8 +0x2c19:  mov    %edx,0x14(%eax)
0816adbb +0x2c1c:  leave
0816adbc +0x2c1d:  ret
0816adbd +0x2c1e:  nop
0816adbe +0x2c1f:  push   %ebp
0816adbf +0x2c20:  mov    %esp,%ebp
0816adc1 +0x2c22:  mov    0x8(%ebp),%eax
0816adc4 +0x2c25:  pop    %ebp
0816adc5 +0x2c26:  ret
0816adc6 +0x2c27:  push   %ebp
0816adc7 +0x2c28:  mov    %esp,%ebp
0816adc9 +0x2c2a:  push   %esi
0816adca +0x2c2b:  push   %ebx
0816adcb +0x2c2c:  sub    $0x10,%esp
0816adce +0x2c2f:  mov    0x8(%ebp),%eax
0816add1 +0x2c32:  mov    0x10(%ebp),%edx
0816add4 +0x2c35:  mov    %edx,0x4(%esp)
0816add8 +0x2c39:  mov    %eax,(%esp)
0816addb +0x2c3c:  call   0816aeb8 <+0x2d19>
0816ade0 +0x2c41:  mov    0xc(%ebp),%eax
0816ade3 +0x2c44:  mov    %eax,0x4(%esp)
0816ade7 +0x2c48:  mov    0x8(%ebp),%eax
0816adea +0x2c4b:  mov    %eax,(%esp)
0816aded +0x2c4e:  call   08169d96 <+0x1bf7>
0816adf2 +0x2c53:  mov    0x8(%ebp),%edx
0816adf5 +0x2c56:  mov    %eax,(%edx)
0816adf7 +0x2c58:  mov    0x8(%ebp),%eax
0816adfa +0x2c5b:  mov    (%eax),%edx
0816adfc +0x2c5d:  mov    0x8(%ebp),%eax
0816adff +0x2c60:  mov    %edx,0x4(%eax)
0816ae02 +0x2c63:  mov    0x8(%ebp),%eax
0816ae05 +0x2c66:  mov    (%eax),%ecx
0816ae07 +0x2c68:  mov    0xc(%ebp),%edx
0816ae0a +0x2c6b:  mov    %edx,%eax
0816ae0c +0x2c6d:  add    %eax,%eax
0816ae0e +0x2c6f:  add    %edx,%eax
0816ae10 +0x2c71:  shl    $0x2,%eax
0816ae13 +0x2c74:  lea    (%ecx,%eax,1),%edx
0816ae16 +0x2c77:  mov    0x8(%ebp),%eax
0816ae19 +0x2c7a:  mov    %edx,0x8(%eax)
0816ae1c +0x2c7d:  add    $0x10,%esp
0816ae1f +0x2c80:  pop    %ebx
0816ae20 +0x2c81:  pop    %esi
0816ae21 +0x2c82:  pop    %ebp
0816ae22 +0x2c83:  ret
0816ae23 +0x2c84:  mov    %edx,%ebx
0816ae25 +0x2c86:  mov    %eax,%esi
0816ae27 +0x2c88:  mov    0x8(%ebp),%eax
0816ae2a +0x2c8b:  mov    %eax,(%esp)
0816ae2d +0x2c8e:  call   08168e9a <+0xcfb>
0816ae32 +0x2c93:  mov    %esi,%eax
0816ae34 +0x2c95:  mov    %ebx,%edx
0816ae36 +0x2c97:  mov    %eax,(%esp)
0816ae39 +0x2c9a:  call   08ae3750 <_Unwind_Resume>
0816ae3e +0x2c9f:  push   %ebp
0816ae3f +0x2ca0:  mov    %esp,%ebp
0816ae41 +0x2ca2:  push   %ebx
0816ae42 +0x2ca3:  sub    $0x24,%esp
0816ae45 +0x2ca6:  mov    0x8(%ebp),%ebx
0816ae48 +0x2ca9:  mov    0xc(%ebp),%eax
0816ae4b +0x2cac:  mov    (%eax),%eax
0816ae4d +0x2cae:  mov    %eax,-0xc(%ebp)
0816ae50 +0x2cb1:  lea    -0xc(%ebp),%eax
0816ae53 +0x2cb4:  mov    %eax,0x4(%esp)
0816ae57 +0x2cb8:  mov    %ebx,(%esp)
0816ae5a +0x2cbb:  call   0816b3e4 <+0x3245>
0816ae5f +0x2cc0:  mov    %ebx,%eax
0816ae61 +0x2cc2:  add    $0x24,%esp
0816ae64 +0x2cc5:  pop    %ebx
0816ae65 +0x2cc6:  pop    %ebp
0816ae66 +0x2cc7:  ret    $0x4
0816ae69 +0x2cca:  nop
0816ae6a +0x2ccb:  push   %ebp
0816ae6b +0x2ccc:  mov    %esp,%ebp
0816ae6d +0x2cce:  push   %ebx
0816ae6e +0x2ccf:  sub    $0x24,%esp
0816ae71 +0x2cd2:  mov    0x8(%ebp),%ebx
0816ae74 +0x2cd5:  mov    0xc(%ebp),%eax
0816ae77 +0x2cd8:  mov    0x4(%eax),%eax
0816ae7a +0x2cdb:  mov    %eax,-0xc(%ebp)
0816ae7d +0x2cde:  lea    -0xc(%ebp),%eax
0816ae80 +0x2ce1:  mov    %eax,0x4(%esp)
0816ae84 +0x2ce5:  mov    %ebx,(%esp)
0816ae87 +0x2ce8:  call   0816b3e4 <+0x3245>
0816ae8c +0x2ced:  mov    %ebx,%eax
0816ae8e +0x2cef:  add    $0x24,%esp
0816ae91 +0x2cf2:  pop    %ebx
0816ae92 +0x2cf3:  pop    %ebp
0816ae93 +0x2cf4:  ret    $0x4
0816ae96 +0x2cf7:  push   %ebp
0816ae97 +0x2cf8:  mov    %esp,%ebp
0816ae99 +0x2cfa:  sub    $0x18,%esp
0816ae9c +0x2cfd:  mov    0x10(%ebp),%eax
0816ae9f +0x2d00:  mov    %eax,0x8(%esp)
0816aea3 +0x2d04:  mov    0xc(%ebp),%eax
0816aea6 +0x2d07:  mov    %eax,0x4(%esp)
0816aeaa +0x2d0b:  mov    0x8(%ebp),%eax
0816aead +0x2d0e:  mov    %eax,(%esp)
0816aeb0 +0x2d11:  call   0816b3f3 <+0x3254>
0816aeb5 +0x2d16:  leave
0816aeb6 +0x2d17:  ret
0816aeb7 +0x2d18:  nop
0816aeb8 +0x2d19:  push   %ebp
0816aeb9 +0x2d1a:  mov    %esp,%ebp
0816aebb +0x2d1c:  sub    $0x18,%esp
0816aebe +0x2d1f:  mov    0x8(%ebp),%eax
0816aec1 +0x2d22:  mov    0xc(%ebp),%edx
0816aec4 +0x2d25:  mov    %edx,0x4(%esp)
0816aec8 +0x2d29:  mov    %eax,(%esp)
0816aecb +0x2d2c:  call   0816b414 <+0x3275>
0816aed0 +0x2d31:  mov    0x8(%ebp),%eax
0816aed3 +0x2d34:  movl   $0x0,(%eax)
0816aed9 +0x2d3a:  mov    0x8(%ebp),%eax
0816aedc +0x2d3d:  movl   $0x0,0x4(%eax)
0816aee3 +0x2d44:  mov    0x8(%ebp),%eax
0816aee6 +0x2d47:  movl   $0x0,0x8(%eax)
0816aeed +0x2d4e:  leave
0816aeee +0x2d4f:  ret
0816aeef +0x2d50:  push   %ebp
0816aef0 +0x2d51:  mov    %esp,%ebp
0816aef2 +0x2d53:  mov    0x8(%ebp),%eax
0816aef5 +0x2d56:  add    $0x10,%eax
0816aef8 +0x2d59:  pop    %ebp
0816aef9 +0x2d5a:  ret
0816aefa +0x2d5b:  push   %ebp
0816aefb +0x2d5c:  mov    %esp,%ebp
0816aefd +0x2d5e:  push   %esi
0816aefe +0x2d5f:  push   %ebx
0816aeff +0x2d60:  sub    $0x20,%esp
0816af02 +0x2d63:  mov    0x8(%ebp),%eax
0816af05 +0x2d66:  mov    %eax,(%esp)
0816af08 +0x2d69:  call   0816b42e <+0x328f>
0816af0d +0x2d6e:  mov    %eax,-0xc(%ebp)
0816af10 +0x2d71:  mov    0xc(%ebp),%eax
0816af13 +0x2d74:  mov    %eax,(%esp)
0816af16 +0x2d77:  call   0816b451 <+0x32b2>
0816af1b +0x2d7c:  mov    %eax,%ebx
0816af1d +0x2d7e:  mov    0x8(%ebp),%eax
0816af20 +0x2d81:  mov    %eax,(%esp)
0816af23 +0x2d84:  call   0816aa9a <+0x28fb>
0816af28 +0x2d89:  mov    %ebx,0x8(%esp)
0816af2c +0x2d8d:  mov    -0xc(%ebp),%edx
0816af2f +0x2d90:  mov    %edx,0x4(%esp)
0816af33 +0x2d94:  mov    %eax,(%esp)
0816af36 +0x2d97:  call   0816b45a <+0x32bb>
0816af3b +0x2d9c:  jmp    0816af71 <+0x2dd2>
0816af3d +0x2d9e:  mov    %eax,(%esp)
0816af40 +0x2da1:  call   08725ce0 <__cxa_begin_catch>
0816af45 +0x2da6:  mov    -0xc(%ebp),%eax
0816af48 +0x2da9:  mov    %eax,0x4(%esp)
0816af4c +0x2dad:  mov    0x8(%ebp),%eax
0816af4f +0x2db0:  mov    %eax,(%esp)
0816af52 +0x2db3:  call   0816aacc <+0x292d>
0816af57 +0x2db8:  call   08724be0 <__cxa_rethrow>
0816af5c +0x2dbd:  mov    %edx,%ebx
0816af5e +0x2dbf:  mov    %eax,%esi
0816af60 +0x2dc1:  call   08725c30 <__cxa_end_catch>
0816af65 +0x2dc6:  mov    %esi,%eax
0816af67 +0x2dc8:  mov    %ebx,%edx
0816af69 +0x2dca:  mov    %eax,(%esp)
0816af6c +0x2dcd:  call   08ae3750 <_Unwind_Resume>
0816af71 +0x2dd2:  mov    -0xc(%ebp),%eax
0816af74 +0x2dd5:  add    $0x20,%esp
0816af77 +0x2dd8:  pop    %ebx
0816af78 +0x2dd9:  pop    %esi
0816af79 +0x2dda:  pop    %ebp
0816af7a +0x2ddb:  ret
0816af7b +0x2ddc:  push   %ebp
0816af7c +0x2ddd:  mov    %esp,%ebp
0816af7e +0x2ddf:  mov    0x8(%ebp),%eax
0816af81 +0x2de2:  pop    %ebp
0816af82 +0x2de3:  ret
0816af83 +0x2de4:  push   %ebp
0816af84 +0x2de5:  mov    %esp,%ebp
0816af86 +0x2de7:  mov    0x8(%ebp),%eax
0816af89 +0x2dea:  pop    %ebp
0816af8a +0x2deb:  ret
0816af8b +0x2dec:  push   %ebp
0816af8c +0x2ded:  mov    %esp,%ebp
0816af8e +0x2def:  sub    $0x28,%esp
0816af91 +0x2df2:  mov    0x8(%ebp),%eax
0816af94 +0x2df5:  mov    %eax,(%esp)
0816af97 +0x2df8:  call   0816b4c1 <+0x3322>
0816af9c +0x2dfd:  mov    %eax,0x4(%esp)
0816afa0 +0x2e01:  lea    -0x9(%ebp),%eax
0816afa3 +0x2e04:  mov    %eax,(%esp)
0816afa6 +0x2e07:  call   0816afb8 <+0x2e19>
0816afab +0x2e0c:  leave
0816afac +0x2e0d:  ret
0816afad +0x2e0e:  push   %ebp
0816afae +0x2e0f:  mov    %esp,%ebp
0816afb0 +0x2e11:  mov    0x8(%ebp),%eax
0816afb3 +0x2e14:  add    $0x10,%eax
0816afb6 +0x2e17:  pop    %ebp
0816afb7 +0x2e18:  ret
0816afb8 +0x2e19:  push   %ebp
0816afb9 +0x2e1a:  mov    %esp,%ebp
0816afbb +0x2e1c:  mov    0xc(%ebp),%eax
0816afbe +0x2e1f:  pop    %ebp
0816afbf +0x2e20:  ret
0816afc0 +0x2e21:  push   %ebp
0816afc1 +0x2e22:  mov    %esp,%ebp
0816afc3 +0x2e24:  mov    0x8(%ebp),%eax
0816afc6 +0x2e27:  add    $0x10,%eax
0816afc9 +0x2e2a:  pop    %ebp
0816afca +0x2e2b:  ret
0816afcb +0x2e2c:  nop
0816afcc +0x2e2d:  push   %ebp
0816afcd +0x2e2e:  mov    %esp,%ebp
0816afcf +0x2e30:  mov    0x8(%ebp),%eax
0816afd2 +0x2e33:  mov    0x14(%eax),%eax
0816afd5 +0x2e36:  pop    %ebp
0816afd6 +0x2e37:  ret
0816afd7 +0x2e38:  nop
0816afd8 +0x2e39:  push   %ebp
0816afd9 +0x2e3a:  mov    %esp,%ebp
0816afdb +0x2e3c:  push   %esi
0816afdc +0x2e3d:  push   %ebx
0816afdd +0x2e3e:  sub    $0x20,%esp
0816afe0 +0x2e41:  mov    0x8(%ebp),%esi
0816afe3 +0x2e44:  cmpl   $0x0,0x10(%ebp)
0816afe7 +0x2e48:  jne    0816b02f <+0x2e90>
0816afe9 +0x2e4a:  mov    0xc(%ebp),%eax
0816afec +0x2e4d:  mov    %eax,(%esp)
0816afef +0x2e50:  call   0816a3f4 <+0x2255>
0816aff4 +0x2e55:  cmp    0x14(%ebp),%eax
0816aff7 +0x2e58:  je     0816b02f <+0x2e90>
0816aff9 +0x2e5a:  mov    0x14(%ebp),%eax
0816affc +0x2e5d:  mov    %eax,(%esp)
0816afff +0x2e60:  call   0816a47c <+0x22dd>
0816b004 +0x2e65:  mov    %eax,%ebx
0816b006 +0x2e67:  mov    0x18(%ebp),%eax
0816b009 +0x2e6a:  mov    %eax,0x4(%esp)
0816b00d +0x2e6e:  lea    -0xe(%ebp),%eax
0816b010 +0x2e71:  mov    %eax,(%esp)
0816b013 +0x2e74:  call   0816afb8 <+0x2e19>
0816b018 +0x2e79:  mov    0xc(%ebp),%edx
0816b01b +0x2e7c:  mov    %ebx,0x8(%esp)
0816b01f +0x2e80:  mov    %eax,0x4(%esp)
0816b023 +0x2e84:  mov    %edx,(%esp)
0816b026 +0x2e87:  call   081697b2 <+0x1613>
0816b02b +0x2e8c:  test   %al,%al
0816b02d +0x2e8e:  je     0816b036 <+0x2e97>
0816b02f +0x2e90:  mov    $0x1,%eax
0816b034 +0x2e95:  jmp    0816b03b <+0x2e9c>
0816b036 +0x2e97:  mov    $0x0,%eax
0816b03b +0x2e9c:  mov    %al,-0xd(%ebp)
0816b03e +0x2e9f:  mov    0x18(%ebp),%eax
0816b041 +0x2ea2:  mov    %eax,0x4(%esp)
0816b045 +0x2ea6:  mov    0xc(%ebp),%eax
0816b048 +0x2ea9:  mov    %eax,(%esp)
0816b04b +0x2eac:  call   0816b4cc <+0x332d>
0816b050 +0x2eb1:  mov    %eax,-0xc(%ebp)
0816b053 +0x2eb4:  mov    0xc(%ebp),%eax
0816b056 +0x2eb7:  lea    0x4(%eax),%ecx
0816b059 +0x2eba:  mov    -0xc(%ebp),%edx
0816b05c +0x2ebd:  movzbl -0xd(%ebp),%eax
0816b060 +0x2ec1:  mov    %ecx,0xc(%esp)
0816b064 +0x2ec5:  mov    0x14(%ebp),%ecx
0816b067 +0x2ec8:  mov    %ecx,0x8(%esp)
0816b06b +0x2ecc:  mov    %edx,0x4(%esp)
0816b06f +0x2ed0:  mov    %eax,(%esp)
0816b072 +0x2ed3:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0816b077 +0x2ed8:  mov    0xc(%ebp),%eax
0816b07a +0x2edb:  mov    0x14(%eax),%eax
0816b07d +0x2ede:  lea    0x1(%eax),%edx
0816b080 +0x2ee1:  mov    0xc(%ebp),%eax
0816b083 +0x2ee4:  mov    %edx,0x14(%eax)
0816b086 +0x2ee7:  mov    -0xc(%ebp),%eax
0816b089 +0x2eea:  mov    %eax,0x4(%esp)
0816b08d +0x2eee:  mov    %esi,(%esp)
0816b090 +0x2ef1:  call   08169c14 <+0x1a75>
0816b095 +0x2ef6:  mov    %esi,%eax
0816b097 +0x2ef8:  add    $0x20,%esp
0816b09a +0x2efb:  pop    %ebx
0816b09b +0x2efc:  pop    %esi
0816b09c +0x2efd:  pop    %ebp
0816b09d +0x2efe:  ret    $0x4
0816b0a0 +0x2f01:  push   %ebp
0816b0a1 +0x2f02:  mov    %esp,%ebp
0816b0a3 +0x2f04:  push   %esi
0816b0a4 +0x2f05:  push   %ebx
0816b0a5 +0x2f06:  sub    $0x50,%esp
0816b0a8 +0x2f09:  mov    0x8(%ebp),%ebx
0816b0ab +0x2f0c:  mov    0xc(%ebp),%eax
0816b0ae +0x2f0f:  mov    %eax,(%esp)
0816b0b1 +0x2f12:  call   08168e04 <+0xc65>
0816b0b6 +0x2f17:  mov    %eax,-0x14(%ebp)
0816b0b9 +0x2f1a:  mov    0xc(%ebp),%eax
0816b0bc +0x2f1d:  mov    %eax,(%esp)
0816b0bf +0x2f20:  call   0816a3f4 <+0x2255>
0816b0c4 +0x2f25:  mov    %eax,-0x10(%ebp)
0816b0c7 +0x2f28:  movb   $0x1,-0x9(%ebp)
0816b0cb +0x2f2c:  jmp    0816b129 <+0x2f8a>
0816b0cd +0x2f2e:  mov    -0x14(%ebp),%eax
0816b0d0 +0x2f31:  mov    %eax,-0x10(%ebp)
0816b0d3 +0x2f34:  mov    -0x14(%ebp),%eax
0816b0d6 +0x2f37:  mov    %eax,(%esp)
0816b0d9 +0x2f3a:  call   0816af8b <+0x2dec>
0816b0de +0x2f3f:  mov    %eax,%esi
0816b0e0 +0x2f41:  mov    0x10(%ebp),%eax
0816b0e3 +0x2f44:  mov    %eax,0x4(%esp)
0816b0e7 +0x2f48:  lea    -0x2d(%ebp),%eax
0816b0ea +0x2f4b:  mov    %eax,(%esp)
0816b0ed +0x2f4e:  call   0816afb8 <+0x2e19>
0816b0f2 +0x2f53:  mov    0xc(%ebp),%edx
0816b0f5 +0x2f56:  mov    %esi,0x8(%esp)
0816b0f9 +0x2f5a:  mov    %eax,0x4(%esp)
0816b0fd +0x2f5e:  mov    %edx,(%esp)
0816b100 +0x2f61:  call   081697b2 <+0x1613>
0816b105 +0x2f66:  mov    %al,-0x9(%ebp)
0816b108 +0x2f69:  cmpb   $0x0,-0x9(%ebp)
0816b10c +0x2f6d:  je     0816b11b <+0x2f7c>
0816b10e +0x2f6f:  mov    -0x14(%ebp),%eax
0816b111 +0x2f72:  mov    %eax,(%esp)
0816b114 +0x2f75:  call   08169aae <+0x190f>
0816b119 +0x2f7a:  jmp    0816b126 <+0x2f87>
0816b11b +0x2f7c:  mov    -0x14(%ebp),%eax
0816b11e +0x2f7f:  mov    %eax,(%esp)
0816b121 +0x2f82:  call   08169aa3 <+0x1904>
0816b126 +0x2f87:  mov    %eax,-0x14(%ebp)
0816b129 +0x2f8a:  cmpl   $0x0,-0x14(%ebp)
0816b12d +0x2f8e:  setne  %al
0816b130 +0x2f91:  test   %al,%al
0816b132 +0x2f93:  jne    0816b0cd <+0x2f2e>
0816b134 +0x2f95:  mov    -0x10(%ebp),%eax
0816b137 +0x2f98:  mov    %eax,0x4(%esp)
0816b13b +0x2f9c:  lea    -0x34(%ebp),%eax
0816b13e +0x2f9f:  mov    %eax,(%esp)
0816b141 +0x2fa2:  call   08169c14 <+0x1a75>
0816b146 +0x2fa7:  cmpb   $0x0,-0x9(%ebp)
0816b14a +0x2fab:  je     0816b1cb <+0x302c>
0816b14c +0x2fad:  lea    -0x2c(%ebp),%eax
0816b14f +0x2fb0:  mov    0xc(%ebp),%edx
0816b152 +0x2fb3:  mov    %edx,0x4(%esp)
0816b156 +0x2fb7:  mov    %eax,(%esp)
0816b159 +0x2fba:  call   08168f52 <+0xdb3>
0816b15e +0x2fbf:  sub    $0x4,%esp
0816b161 +0x2fc2:  lea    -0x2c(%ebp),%eax
0816b164 +0x2fc5:  mov    %eax,0x4(%esp)
0816b168 +0x2fc9:  lea    -0x34(%ebp),%eax
0816b16b +0x2fcc:  mov    %eax,(%esp)
0816b16e +0x2fcf:  call   08168990 <+0x7f1>
0816b173 +0x2fd4:  test   %al,%al
0816b175 +0x2fd6:  je     0816b1c0 <+0x3021>
0816b177 +0x2fd8:  movb   $0x1,-0x25(%ebp)
0816b17b +0x2fdc:  mov    -0x10(%ebp),%ecx
0816b17e +0x2fdf:  mov    -0x14(%ebp),%edx
0816b181 +0x2fe2:  lea    -0x24(%ebp),%eax
0816b184 +0x2fe5:  mov    0x10(%ebp),%esi
0816b187 +0x2fe8:  mov    %esi,0x10(%esp)
0816b18b +0x2fec:  mov    %ecx,0xc(%esp)
0816b18f +0x2ff0:  mov    %edx,0x8(%esp)
0816b193 +0x2ff4:  mov    0xc(%ebp),%edx
0816b196 +0x2ff7:  mov    %edx,0x4(%esp)
0816b19a +0x2ffb:  mov    %eax,(%esp)
0816b19d +0x2ffe:  call   0816afd8 <+0x2e39>
0816b1a2 +0x3003:  sub    $0x4,%esp
0816b1a5 +0x3006:  lea    -0x25(%ebp),%eax
0816b1a8 +0x3009:  mov    %eax,0x8(%esp)
0816b1ac +0x300d:  lea    -0x24(%ebp),%eax
0816b1af +0x3010:  mov    %eax,0x4(%esp)
0816b1b3 +0x3014:  mov    %ebx,(%esp)
0816b1b6 +0x3017:  call   0816b54e <+0x33af>
0816b1bb +0x301c:  jmp    0816b261 <+0x30c2>
0816b1c0 +0x3021:  lea    -0x34(%ebp),%eax
0816b1c3 +0x3024:  mov    %eax,(%esp)
0816b1c6 +0x3027:  call   0816b57c <+0x33dd>
0816b1cb +0x302c:  mov    0x10(%ebp),%eax
0816b1ce +0x302f:  mov    %eax,0x4(%esp)
0816b1d2 +0x3033:  lea    -0x1e(%ebp),%eax
0816b1d5 +0x3036:  mov    %eax,(%esp)
0816b1d8 +0x3039:  call   0816afb8 <+0x2e19>
0816b1dd +0x303e:  mov    %eax,%esi
0816b1df +0x3040:  mov    -0x34(%ebp),%eax
0816b1e2 +0x3043:  mov    %eax,(%esp)
0816b1e5 +0x3046:  call   0816a47c <+0x22dd>
0816b1ea +0x304b:  mov    0xc(%ebp),%edx
0816b1ed +0x304e:  mov    %esi,0x8(%esp)
0816b1f1 +0x3052:  mov    %eax,0x4(%esp)
0816b1f5 +0x3056:  mov    %edx,(%esp)
0816b1f8 +0x3059:  call   081697b2 <+0x1613>
0816b1fd +0x305e:  test   %al,%al
0816b1ff +0x3060:  je     0816b247 <+0x30a8>
0816b201 +0x3062:  movb   $0x1,-0x1d(%ebp)
0816b205 +0x3066:  mov    -0x10(%ebp),%ecx
0816b208 +0x3069:  mov    -0x14(%ebp),%edx
0816b20b +0x306c:  lea    -0x1c(%ebp),%eax
0816b20e +0x306f:  mov    0x10(%ebp),%esi
0816b211 +0x3072:  mov    %esi,0x10(%esp)
0816b215 +0x3076:  mov    %ecx,0xc(%esp)
0816b219 +0x307a:  mov    %edx,0x8(%esp)
0816b21d +0x307e:  mov    0xc(%ebp),%edx
0816b220 +0x3081:  mov    %edx,0x4(%esp)
0816b224 +0x3085:  mov    %eax,(%esp)
0816b227 +0x3088:  call   0816afd8 <+0x2e39>
0816b22c +0x308d:  sub    $0x4,%esp
0816b22f +0x3090:  lea    -0x1d(%ebp),%eax
0816b232 +0x3093:  mov    %eax,0x8(%esp)
0816b236 +0x3097:  lea    -0x1c(%ebp),%eax
0816b239 +0x309a:  mov    %eax,0x4(%esp)
0816b23d +0x309e:  mov    %ebx,(%esp)
0816b240 +0x30a1:  call   0816b54e <+0x33af>
0816b245 +0x30a6:  jmp    0816b261 <+0x30c2>
0816b247 +0x30a8:  movb   $0x0,-0x15(%ebp)
0816b24b +0x30ac:  lea    -0x15(%ebp),%eax
0816b24e +0x30af:  mov    %eax,0x8(%esp)
0816b252 +0x30b3:  lea    -0x34(%ebp),%eax
0816b255 +0x30b6:  mov    %eax,0x4(%esp)
0816b259 +0x30ba:  mov    %ebx,(%esp)
0816b25c +0x30bd:  call   0816b59a <+0x33fb>
0816b261 +0x30c2:  mov    %ebx,%eax
0816b263 +0x30c4:  lea    -0x8(%ebp),%esp
0816b266 +0x30c7:  add    $0x0,%esp
0816b269 +0x30ca:  pop    %ebx
0816b26a +0x30cb:  pop    %esi
0816b26b +0x30cc:  pop    %ebp
0816b26c +0x30cd:  ret    $0x4
0816b26f +0x30d0:  nop
0816b270 +0x30d1:  push   %ebp
0816b271 +0x30d2:  mov    %esp,%ebp
0816b273 +0x30d4:  mov    0x8(%ebp),%eax
0816b276 +0x30d7:  add    $0xc,%eax
0816b279 +0x30da:  pop    %ebp
0816b27a +0x30db:  ret
0816b27b +0x30dc:  nop
0816b27c +0x30dd:  push   %ebp
0816b27d +0x30de:  mov    %esp,%ebp
0816b27f +0x30e0:  sub    $0x18,%esp
0816b282 +0x30e3:  mov    0x8(%ebp),%eax
0816b285 +0x30e6:  mov    (%eax),%eax
0816b287 +0x30e8:  mov    %eax,(%esp)
0816b28a +0x30eb:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
0816b28f +0x30f0:  mov    0x8(%ebp),%edx
0816b292 +0x30f3:  mov    %eax,(%edx)
0816b294 +0x30f5:  mov    0x8(%ebp),%eax
0816b297 +0x30f8:  leave
0816b298 +0x30f9:  ret
0816b299 +0x30fa:  push   %ebp
0816b29a +0x30fb:  mov    %esp,%ebp
0816b29c +0x30fd:  mov    0x8(%ebp),%eax
0816b29f +0x3100:  mov    0xc(%eax),%eax
0816b2a2 +0x3103:  pop    %ebp
0816b2a3 +0x3104:  ret
0816b2a4 +0x3105:  push   %ebp
0816b2a5 +0x3106:  mov    %esp,%ebp
0816b2a7 +0x3108:  sub    $0x18,%esp
0816b2aa +0x310b:  mov    0x8(%ebp),%eax
0816b2ad +0x310e:  mov    (%eax),%eax
0816b2af +0x3110:  mov    %eax,(%esp)
0816b2b2 +0x3113:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0816b2b7 +0x3118:  mov    0x8(%ebp),%edx
0816b2ba +0x311b:  mov    %eax,(%edx)
0816b2bc +0x311d:  mov    0x8(%ebp),%eax
0816b2bf +0x3120:  leave
0816b2c0 +0x3121:  ret
0816b2c1 +0x3122:  nop
0816b2c2 +0x3123:  push   %ebp
0816b2c3 +0x3124:  mov    %esp,%ebp
0816b2c5 +0x3126:  sub    $0x18,%esp
0816b2c8 +0x3129:  mov    0x8(%ebp),%eax
0816b2cb +0x312c:  mov    %eax,(%esp)
0816b2ce +0x312f:  call   0816b5c8 <+0x3429>
0816b2d3 +0x3134:  leave
0816b2d4 +0x3135:  ret
0816b2d5 +0x3136:  nop
0816b2d6 +0x3137:  push   %ebp
0816b2d7 +0x3138:  mov    %esp,%ebp
0816b2d9 +0x313a:  pop    %ebp
0816b2da +0x313b:  ret
0816b2db +0x313c:  nop
0816b2dc +0x313d:  push   %ebp
0816b2dd +0x313e:  mov    %esp,%ebp
0816b2df +0x3140:  sub    $0x18,%esp
0816b2e2 +0x3143:  mov    0xc(%ebp),%eax
0816b2e5 +0x3146:  mov    %eax,(%esp)
0816b2e8 +0x3149:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816b2ed +0x314e:  leave
0816b2ee +0x314f:  ret
0816b2ef +0x3150:  push   %ebp
0816b2f0 +0x3151:  mov    %esp,%ebp
0816b2f2 +0x3153:  sub    $0x18,%esp
0816b2f5 +0x3156:  jmp    0816b306 <+0x3167>
0816b2f7 +0x3158:  mov    0x8(%ebp),%eax
0816b2fa +0x315b:  mov    %eax,(%esp)
0816b2fd +0x315e:  call   0816b5cd <+0x342e>
0816b302 +0x3163:  addl   $0x2c,0x8(%ebp)
0816b306 +0x3167:  mov    0x8(%ebp),%eax
0816b309 +0x316a:  cmp    0xc(%ebp),%eax
0816b30c +0x316d:  setne  %al
0816b30f +0x3170:  test   %al,%al
0816b311 +0x3172:  jne    0816b2f7 <+0x3158>
0816b313 +0x3174:  leave
0816b314 +0x3175:  ret
0816b315 +0x3176:  nop
0816b316 +0x3177:  push   %ebp
0816b317 +0x3178:  mov    %esp,%ebp
0816b319 +0x317a:  pop    %ebp
0816b31a +0x317b:  ret
0816b31b +0x317c:  nop
0816b31c +0x317d:  push   %ebp
0816b31d +0x317e:  mov    %esp,%ebp
0816b31f +0x3180:  pop    %ebp
0816b320 +0x3181:  ret
0816b321 +0x3182:  nop
0816b322 +0x3183:  push   %ebp
0816b323 +0x3184:  mov    %esp,%ebp
0816b325 +0x3186:  pop    %ebp
0816b326 +0x3187:  ret
0816b327 +0x3188:  nop
0816b328 +0x3189:  push   %ebp
0816b329 +0x318a:  mov    %esp,%ebp
0816b32b +0x318c:  sub    $0x18,%esp
0816b32e +0x318f:  mov    0xc(%ebp),%eax
0816b331 +0x3192:  mov    %eax,(%esp)
0816b334 +0x3195:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816b339 +0x319a:  leave
0816b33a +0x319b:  ret
0816b33b +0x319c:  nop
0816b33c +0x319d:  push   %ebp
0816b33d +0x319e:  mov    %esp,%ebp
0816b33f +0x31a0:  pop    %ebp
0816b340 +0x31a1:  ret
0816b341 +0x31a2:  nop
0816b342 +0x31a3:  push   %ebp
0816b343 +0x31a4:  mov    %esp,%ebp
0816b345 +0x31a6:  sub    $0x18,%esp
0816b348 +0x31a9:  mov    0xc(%ebp),%eax
0816b34b +0x31ac:  mov    %eax,(%esp)
0816b34e +0x31af:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816b353 +0x31b4:  leave
0816b354 +0x31b5:  ret
0816b355 +0x31b6:  nop
0816b356 +0x31b7:  push   %ebp
0816b357 +0x31b8:  mov    %esp,%ebp
0816b359 +0x31ba:  pop    %ebp
0816b35a +0x31bb:  ret
0816b35b +0x31bc:  push   %ebp
0816b35c +0x31bd:  mov    %esp,%ebp
0816b35e +0x31bf:  mov    0x8(%ebp),%eax
0816b361 +0x31c2:  pop    %ebp
0816b362 +0x31c3:  ret
0816b363 +0x31c4:  push   %ebp
0816b364 +0x31c5:  mov    %esp,%ebp
0816b366 +0x31c7:  sub    $0x28,%esp
0816b369 +0x31ca:  movb   $0x1,-0x9(%ebp)
0816b36d +0x31ce:  mov    0x10(%ebp),%eax
0816b370 +0x31d1:  mov    %eax,0x8(%esp)
0816b374 +0x31d5:  mov    0xc(%ebp),%eax
0816b377 +0x31d8:  mov    %eax,0x4(%esp)
0816b37b +0x31dc:  mov    0x8(%ebp),%eax
0816b37e +0x31df:  mov    %eax,(%esp)
0816b381 +0x31e2:  call   0816b5e0 <+0x3441>
0816b386 +0x31e7:  leave
0816b387 +0x31e8:  ret
0816b388 +0x31e9:  push   %ebp
0816b389 +0x31ea:  mov    %esp,%ebp
0816b38b +0x31ec:  mov    $0x15555555,%eax
0816b390 +0x31f1:  pop    %ebp
0816b391 +0x31f2:  ret
0816b392 +0x31f3:  push   %ebp
0816b393 +0x31f4:  mov    %esp,%ebp
0816b395 +0x31f6:  mov    0x8(%ebp),%eax
0816b398 +0x31f9:  mov    0xc(%ebp),%edx
0816b39b +0x31fc:  mov    %edx,(%eax)
0816b39d +0x31fe:  pop    %ebp
0816b39e +0x31ff:  ret
0816b39f +0x3200:  push   %ebp
0816b3a0 +0x3201:  mov    %esp,%ebp
0816b3a2 +0x3203:  sub    $0x18,%esp
0816b3a5 +0x3206:  mov    0x10(%ebp),%eax
0816b3a8 +0x3209:  mov    %eax,0x8(%esp)
0816b3ac +0x320d:  mov    0xc(%ebp),%eax
0816b3af +0x3210:  mov    %eax,0x4(%esp)
0816b3b3 +0x3214:  mov    0x8(%ebp),%eax
0816b3b6 +0x3217:  mov    %eax,(%esp)
0816b3b9 +0x321a:  call   0816b643 <+0x34a4>
0816b3be +0x321f:  leave
0816b3bf +0x3220:  ret
0816b3c0 +0x3221:  push   %ebp
0816b3c1 +0x3222:  mov    %esp,%ebp
0816b3c3 +0x3224:  mov    0x8(%ebp),%eax
0816b3c6 +0x3227:  add    $0xc,%eax
0816b3c9 +0x322a:  pop    %ebp
0816b3ca +0x322b:  ret
0816b3cb +0x322c:  nop
0816b3cc +0x322d:  push   %ebp
0816b3cd +0x322e:  mov    %esp,%ebp
0816b3cf +0x3230:  mov    0x8(%ebp),%eax
0816b3d2 +0x3233:  add    $0x8,%eax
0816b3d5 +0x3236:  pop    %ebp
0816b3d6 +0x3237:  ret
0816b3d7 +0x3238:  nop
0816b3d8 +0x3239:  push   %ebp
0816b3d9 +0x323a:  mov    %esp,%ebp
0816b3db +0x323c:  mov    0x8(%ebp),%eax
0816b3de +0x323f:  add    $0x10,%eax
0816b3e1 +0x3242:  pop    %ebp
0816b3e2 +0x3243:  ret
0816b3e3 +0x3244:  nop
0816b3e4 +0x3245:  push   %ebp
0816b3e5 +0x3246:  mov    %esp,%ebp
0816b3e7 +0x3248:  mov    0xc(%ebp),%eax
0816b3ea +0x324b:  mov    (%eax),%edx
0816b3ec +0x324d:  mov    0x8(%ebp),%eax
0816b3ef +0x3250:  mov    %edx,(%eax)
0816b3f1 +0x3252:  pop    %ebp
0816b3f2 +0x3253:  ret
0816b3f3 +0x3254:  push   %ebp
0816b3f4 +0x3255:  mov    %esp,%ebp
0816b3f6 +0x3257:  sub    $0x18,%esp
0816b3f9 +0x325a:  mov    0x10(%ebp),%eax
0816b3fc +0x325d:  mov    %eax,0x8(%esp)
0816b400 +0x3261:  mov    0xc(%ebp),%eax
0816b403 +0x3264:  mov    %eax,0x4(%esp)
0816b407 +0x3268:  mov    0x8(%ebp),%eax
0816b40a +0x326b:  mov    %eax,(%esp)
0816b40d +0x326e:  call   0816b664 <+0x34c5>
0816b412 +0x3273:  leave
0816b413 +0x3274:  ret
0816b414 +0x3275:  push   %ebp
0816b415 +0x3276:  mov    %esp,%ebp
0816b417 +0x3278:  sub    $0x18,%esp
0816b41a +0x327b:  mov    0xc(%ebp),%edx
0816b41d +0x327e:  mov    0x8(%ebp),%eax
0816b420 +0x3281:  mov    %edx,0x4(%esp)
0816b424 +0x3285:  mov    %eax,(%esp)
0816b427 +0x3288:  call   0816b686 <+0x34e7>
0816b42c +0x328d:  leave
0816b42d +0x328e:  ret
0816b42e +0x328f:  push   %ebp
0816b42f +0x3290:  mov    %esp,%ebp
0816b431 +0x3292:  sub    $0x18,%esp
0816b434 +0x3295:  mov    0x8(%ebp),%eax
0816b437 +0x3298:  movl   $0x0,0x8(%esp)
0816b43f +0x32a0:  movl   $0x1,0x4(%esp)
0816b447 +0x32a8:  mov    %eax,(%esp)
0816b44a +0x32ab:  call   0816b68c <+0x34ed>
0816b44f +0x32b0:  leave
0816b450 +0x32b1:  ret
0816b451 +0x32b2:  push   %ebp
0816b452 +0x32b3:  mov    %esp,%ebp
0816b454 +0x32b5:  mov    0x8(%ebp),%eax
0816b457 +0x32b8:  pop    %ebp
0816b458 +0x32b9:  ret
0816b459 +0x32ba:  nop
0816b45a +0x32bb:  push   %ebp
0816b45b +0x32bc:  mov    %esp,%ebp
0816b45d +0x32be:  push   %edi
0816b45e +0x32bf:  push   %esi
0816b45f +0x32c0:  push   %ebx
0816b460 +0x32c1:  sub    $0x2c,%esp
0816b463 +0x32c4:  mov    0x10(%ebp),%eax
0816b466 +0x32c7:  mov    %eax,(%esp)
0816b469 +0x32ca:  call   0816b451 <+0x32b2>
0816b46e +0x32cf:  mov    %eax,%edi
0816b470 +0x32d1:  mov    0xc(%ebp),%esi
0816b473 +0x32d4:  mov    %esi,0x4(%esp)
0816b477 +0x32d8:  movl   $0x20,(%esp)
0816b47e +0x32df:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0816b483 +0x32e4:  mov    %eax,%ebx
0816b485 +0x32e6:  mov    %ebx,%eax
0816b487 +0x32e8:  test   %eax,%eax
0816b489 +0x32ea:  je     0816b4b9 <+0x331a>
0816b48b +0x32ec:  mov    %ebx,%eax
0816b48d +0x32ee:  mov    %edi,0x4(%esp)
0816b491 +0x32f2:  mov    %eax,(%esp)
0816b494 +0x32f5:  call   0816b6ee <+0x354f>
0816b499 +0x32fa:  jmp    0816b4b9 <+0x331a>
0816b49b +0x32fc:  mov    %edx,%edi
0816b49d +0x32fe:  mov    %eax,-0x1c(%ebp)
0816b4a0 +0x3301:  mov    %esi,0x4(%esp)
0816b4a4 +0x3305:  mov    %ebx,(%esp)
0816b4a7 +0x3308:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
0816b4ac +0x330d:  mov    -0x1c(%ebp),%eax
0816b4af +0x3310:  mov    %edi,%edx
0816b4b1 +0x3312:  mov    %eax,(%esp)
0816b4b4 +0x3315:  call   08ae3750 <_Unwind_Resume>
0816b4b9 +0x331a:  add    $0x2c,%esp
0816b4bc +0x331d:  pop    %ebx
0816b4bd +0x331e:  pop    %esi
0816b4be +0x331f:  pop    %edi
0816b4bf +0x3320:  pop    %ebp
0816b4c0 +0x3321:  ret
0816b4c1 +0x3322:  push   %ebp
0816b4c2 +0x3323:  mov    %esp,%ebp
0816b4c4 +0x3325:  mov    0x8(%ebp),%eax
0816b4c7 +0x3328:  add    $0x10,%eax
0816b4ca +0x332b:  pop    %ebp
0816b4cb +0x332c:  ret
0816b4cc +0x332d:  push   %ebp
0816b4cd +0x332e:  mov    %esp,%ebp
0816b4cf +0x3330:  push   %esi
0816b4d0 +0x3331:  push   %ebx
0816b4d1 +0x3332:  sub    $0x20,%esp
0816b4d4 +0x3335:  mov    0x8(%ebp),%eax
0816b4d7 +0x3338:  mov    %eax,(%esp)
0816b4da +0x333b:  call   0816b73a <+0x359b>
0816b4df +0x3340:  mov    %eax,-0xc(%ebp)
0816b4e2 +0x3343:  mov    0xc(%ebp),%eax
0816b4e5 +0x3346:  mov    %eax,(%esp)
0816b4e8 +0x3349:  call   0816b75d <+0x35be>
0816b4ed +0x334e:  mov    %eax,%ebx
0816b4ef +0x3350:  mov    0x8(%ebp),%eax
0816b4f2 +0x3353:  mov    %eax,(%esp)
0816b4f5 +0x3356:  call   0816aa10 <+0x2871>
0816b4fa +0x335b:  mov    %ebx,0x8(%esp)
0816b4fe +0x335f:  mov    -0xc(%ebp),%edx
0816b501 +0x3362:  mov    %edx,0x4(%esp)
0816b505 +0x3366:  mov    %eax,(%esp)
0816b508 +0x3369:  call   0816b766 <+0x35c7>
0816b50d +0x336e:  jmp    0816b543 <+0x33a4>
0816b50f +0x3370:  mov    %eax,(%esp)
0816b512 +0x3373:  call   08725ce0 <__cxa_begin_catch>
0816b517 +0x3378:  mov    -0xc(%ebp),%eax
0816b51a +0x337b:  mov    %eax,0x4(%esp)
0816b51e +0x337f:  mov    0x8(%ebp),%eax
0816b521 +0x3382:  mov    %eax,(%esp)
0816b524 +0x3385:  call   0816aa32 <+0x2893>
0816b529 +0x338a:  call   08724be0 <__cxa_rethrow>
0816b52e +0x338f:  mov    %edx,%ebx
0816b530 +0x3391:  mov    %eax,%esi
0816b532 +0x3393:  call   08725c30 <__cxa_end_catch>
0816b537 +0x3398:  mov    %esi,%eax
0816b539 +0x339a:  mov    %ebx,%edx
0816b53b +0x339c:  mov    %eax,(%esp)
0816b53e +0x339f:  call   08ae3750 <_Unwind_Resume>
0816b543 +0x33a4:  mov    -0xc(%ebp),%eax
0816b546 +0x33a7:  add    $0x20,%esp
0816b549 +0x33aa:  pop    %ebx
0816b54a +0x33ab:  pop    %esi
0816b54b +0x33ac:  pop    %ebp
0816b54c +0x33ad:  ret
0816b54d +0x33ae:  nop
0816b54e +0x33af:  push   %ebp
0816b54f +0x33b0:  mov    %esp,%ebp
0816b551 +0x33b2:  sub    $0x18,%esp
0816b554 +0x33b5:  mov    0xc(%ebp),%eax
0816b557 +0x33b8:  mov    %eax,(%esp)
0816b55a +0x33bb:  call   0816b7a5 <+0x3606>
0816b55f +0x33c0:  mov    0x8(%ebp),%edx
0816b562 +0x33c3:  mov    (%eax),%eax
0816b564 +0x33c5:  mov    %eax,(%edx)
0816b566 +0x33c7:  mov    0x10(%ebp),%eax
0816b569 +0x33ca:  mov    %eax,(%esp)
0816b56c +0x33cd:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0816b571 +0x33d2:  movzbl (%eax),%edx
0816b574 +0x33d5:  mov    0x8(%ebp),%eax
0816b577 +0x33d8:  mov    %dl,0x4(%eax)
0816b57a +0x33db:  leave
0816b57b +0x33dc:  ret
0816b57c +0x33dd:  push   %ebp
0816b57d +0x33de:  mov    %esp,%ebp
0816b57f +0x33e0:  sub    $0x18,%esp
0816b582 +0x33e3:  mov    0x8(%ebp),%eax
0816b585 +0x33e6:  mov    (%eax),%eax
0816b587 +0x33e8:  mov    %eax,(%esp)
0816b58a +0x33eb:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0816b58f +0x33f0:  mov    0x8(%ebp),%edx
0816b592 +0x33f3:  mov    %eax,(%edx)
0816b594 +0x33f5:  mov    0x8(%ebp),%eax
0816b597 +0x33f8:  leave
0816b598 +0x33f9:  ret
0816b599 +0x33fa:  nop
0816b59a +0x33fb:  push   %ebp
0816b59b +0x33fc:  mov    %esp,%ebp
0816b59d +0x33fe:  sub    $0x18,%esp
0816b5a0 +0x3401:  mov    0xc(%ebp),%eax
0816b5a3 +0x3404:  mov    %eax,(%esp)
0816b5a6 +0x3407:  call   0816b7ad <+0x360e>
0816b5ab +0x340c:  mov    0x8(%ebp),%edx
0816b5ae +0x340f:  mov    (%eax),%eax
0816b5b0 +0x3411:  mov    %eax,(%edx)
0816b5b2 +0x3413:  mov    0x10(%ebp),%eax
0816b5b5 +0x3416:  mov    %eax,(%esp)
0816b5b8 +0x3419:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0816b5bd +0x341e:  movzbl (%eax),%edx
0816b5c0 +0x3421:  mov    0x8(%ebp),%eax
0816b5c3 +0x3424:  mov    %dl,0x4(%eax)
0816b5c6 +0x3427:  leave
0816b5c7 +0x3428:  ret
0816b5c8 +0x3429:  push   %ebp
0816b5c9 +0x342a:  mov    %esp,%ebp
0816b5cb +0x342c:  pop    %ebp
0816b5cc +0x342d:  ret
0816b5cd +0x342e:  push   %ebp
0816b5ce +0x342f:  mov    %esp,%ebp
0816b5d0 +0x3431:  sub    $0x18,%esp
0816b5d3 +0x3434:  mov    0x8(%ebp),%eax
0816b5d6 +0x3437:  mov    %eax,(%esp)
0816b5d9 +0x343a:  call   08168260 <+0xc1>
0816b5de +0x343f:  leave
0816b5df +0x3440:  ret
0816b5e0 +0x3441:  push   %ebp
0816b5e1 +0x3442:  mov    %esp,%ebp
0816b5e3 +0x3444:  sub    $0x28,%esp
0816b5e6 +0x3447:  mov    0xc(%ebp),%edx
0816b5e9 +0x344a:  mov    0x8(%ebp),%eax
0816b5ec +0x344d:  mov    %edx,%ecx
0816b5ee +0x344f:  sub    %eax,%ecx
0816b5f0 +0x3451:  mov    %ecx,%eax
0816b5f2 +0x3453:  sar    $0x2,%eax
0816b5f5 +0x3456:  imul   $0xaaaaaaab,%eax,%eax
0816b5fb +0x345c:  mov    %eax,-0xc(%ebp)
0816b5fe +0x345f:  mov    -0xc(%ebp),%edx
0816b601 +0x3462:  mov    %edx,%eax
0816b603 +0x3464:  add    %eax,%eax
0816b605 +0x3466:  add    %edx,%eax
0816b607 +0x3468:  shl    $0x2,%eax
0816b60a +0x346b:  mov    %eax,%ecx
0816b60c +0x346d:  mov    -0xc(%ebp),%edx
0816b60f +0x3470:  mov    %edx,%eax
0816b611 +0x3472:  add    %eax,%eax
0816b613 +0x3474:  add    %edx,%eax
0816b615 +0x3476:  shl    $0x2,%eax
0816b618 +0x3479:  neg    %eax
0816b61a +0x347b:  add    0x10(%ebp),%eax
0816b61d +0x347e:  mov    %ecx,0x8(%esp)
0816b621 +0x3482:  mov    0x8(%ebp),%edx
0816b624 +0x3485:  mov    %edx,0x4(%esp)
0816b628 +0x3489:  mov    %eax,(%esp)
0816b62b +0x348c:  call   0807d880 <_init+0x178>
0816b630 +0x3491:  mov    -0xc(%ebp),%edx
0816b633 +0x3494:  mov    %edx,%eax
0816b635 +0x3496:  add    %eax,%eax
0816b637 +0x3498:  add    %edx,%eax
0816b639 +0x349a:  shl    $0x2,%eax
0816b63c +0x349d:  neg    %eax
0816b63e +0x349f:  add    0x10(%ebp),%eax
0816b641 +0x34a2:  leave
0816b642 +0x34a3:  ret
0816b643 +0x34a4:  push   %ebp
0816b644 +0x34a5:  mov    %esp,%ebp
0816b646 +0x34a7:  sub    $0x18,%esp
0816b649 +0x34aa:  mov    0x10(%ebp),%eax
0816b64c +0x34ad:  mov    %eax,0x8(%esp)
0816b650 +0x34b1:  mov    0xc(%ebp),%eax
0816b653 +0x34b4:  mov    %eax,0x4(%esp)
0816b657 +0x34b8:  mov    0x8(%ebp),%eax
0816b65a +0x34bb:  mov    %eax,(%esp)
0816b65d +0x34be:  call   0816b7b5 <+0x3616>
0816b662 +0x34c3:  leave
0816b663 +0x34c4:  ret
0816b664 +0x34c5:  push   %ebp
0816b665 +0x34c6:  mov    %esp,%ebp
0816b667 +0x34c8:  sub    $0x18,%esp
0816b66a +0x34cb:  mov    0x10(%ebp),%eax
0816b66d +0x34ce:  mov    %eax,0x8(%esp)
0816b671 +0x34d2:  mov    0xc(%ebp),%eax
0816b674 +0x34d5:  mov    %eax,0x4(%esp)
0816b678 +0x34d9:  mov    0x8(%ebp),%eax
0816b67b +0x34dc:  mov    %eax,(%esp)
0816b67e +0x34df:  call   0816b7ed <+0x364e>
0816b683 +0x34e4:  leave
0816b684 +0x34e5:  ret
0816b685 +0x34e6:  nop
0816b686 +0x34e7:  push   %ebp
0816b687 +0x34e8:  mov    %esp,%ebp
0816b689 +0x34ea:  pop    %ebp
0816b68a +0x34eb:  ret
0816b68b +0x34ec:  nop
0816b68c +0x34ed:  push   %ebp
0816b68d +0x34ee:  mov    %esp,%ebp
0816b68f +0x34f0:  sub    $0x18,%esp
0816b692 +0x34f3:  mov    0x8(%ebp),%eax
0816b695 +0x34f6:  mov    %eax,(%esp)
0816b698 +0x34f9:  call   0816b838 <+0x3699>
0816b69d +0x34fe:  cmp    0xc(%ebp),%eax
0816b6a0 +0x3501:  setb   %al
0816b6a3 +0x3504:  movzbl %al,%eax
0816b6a6 +0x3507:  test   %eax,%eax
0816b6a8 +0x3509:  setne  %al
0816b6ab +0x350c:  test   %al,%al
0816b6ad +0x350e:  je     0816b6b4 <+0x3515>
0816b6af +0x3510:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0816b6b4 +0x3515:  mov    0xc(%ebp),%eax
0816b6b7 +0x3518:  shl    $0x5,%eax
0816b6ba +0x351b:  mov    %eax,(%esp)
0816b6bd +0x351e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816b6c2 +0x3523:  leave
0816b6c3 +0x3524:  ret
0816b6c4 +0x3525:  push   %ebp
0816b6c5 +0x3526:  mov    %esp,%ebp
0816b6c7 +0x3528:  sub    $0x18,%esp
0816b6ca +0x352b:  mov    0xc(%ebp),%eax
0816b6cd +0x352e:  mov    (%eax),%edx
0816b6cf +0x3530:  mov    0x8(%ebp),%eax
0816b6d2 +0x3533:  mov    %edx,(%eax)
0816b6d4 +0x3535:  mov    0xc(%ebp),%eax
0816b6d7 +0x3538:  lea    0x4(%eax),%edx
0816b6da +0x353b:  mov    0x8(%ebp),%eax
0816b6dd +0x353e:  add    $0x4,%eax
0816b6e0 +0x3541:  mov    %edx,0x4(%esp)
0816b6e4 +0x3545:  mov    %eax,(%esp)
0816b6e7 +0x3548:  call   0816a144 <+0x1fa5>
0816b6ec +0x354d:  leave
0816b6ed +0x354e:  ret
0816b6ee +0x354f:  push   %ebp
0816b6ef +0x3550:  mov    %esp,%ebp
0816b6f1 +0x3552:  sub    $0x18,%esp
0816b6f4 +0x3555:  mov    0x8(%ebp),%eax
0816b6f7 +0x3558:  movl   $0x0,(%eax)
0816b6fd +0x355e:  mov    0x8(%ebp),%eax
0816b700 +0x3561:  movl   $0x0,0x4(%eax)
0816b707 +0x3568:  mov    0x8(%ebp),%eax
0816b70a +0x356b:  movl   $0x0,0x8(%eax)
0816b711 +0x3572:  mov    0x8(%ebp),%eax
0816b714 +0x3575:  movl   $0x0,0xc(%eax)
0816b71b +0x357c:  mov    0xc(%ebp),%eax
0816b71e +0x357f:  mov    %eax,(%esp)
0816b721 +0x3582:  call   0816b451 <+0x32b2>
0816b726 +0x3587:  mov    0x8(%ebp),%edx
0816b729 +0x358a:  add    $0x10,%edx
0816b72c +0x358d:  mov    %eax,0x4(%esp)
0816b730 +0x3591:  mov    %edx,(%esp)
0816b733 +0x3594:  call   0816b6c4 <+0x3525>
0816b738 +0x3599:  leave
0816b739 +0x359a:  ret
0816b73a +0x359b:  push   %ebp
0816b73b +0x359c:  mov    %esp,%ebp
0816b73d +0x359e:  sub    $0x18,%esp
0816b740 +0x35a1:  mov    0x8(%ebp),%eax
0816b743 +0x35a4:  movl   $0x0,0x8(%esp)
0816b74b +0x35ac:  movl   $0x1,0x4(%esp)
0816b753 +0x35b4:  mov    %eax,(%esp)
0816b756 +0x35b7:  call   0816b842 <+0x36a3>
0816b75b +0x35bc:  leave
0816b75c +0x35bd:  ret
0816b75d +0x35be:  push   %ebp
0816b75e +0x35bf:  mov    %esp,%ebp
0816b760 +0x35c1:  mov    0x8(%ebp),%eax
0816b763 +0x35c4:  pop    %ebp
0816b764 +0x35c5:  ret
0816b765 +0x35c6:  nop
0816b766 +0x35c7:  push   %ebp
0816b767 +0x35c8:  mov    %esp,%ebp
0816b769 +0x35ca:  push   %ebx
0816b76a +0x35cb:  sub    $0x14,%esp
0816b76d +0x35ce:  mov    0x10(%ebp),%eax
0816b770 +0x35d1:  mov    %eax,(%esp)
0816b773 +0x35d4:  call   0816b75d <+0x35be>
0816b778 +0x35d9:  mov    %eax,%ebx
0816b77a +0x35db:  mov    0xc(%ebp),%eax
0816b77d +0x35de:  mov    %eax,0x4(%esp)
0816b781 +0x35e2:  movl   $0x18,(%esp)
0816b788 +0x35e9:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0816b78d +0x35ee:  mov    %eax,%edx
0816b78f +0x35f0:  test   %edx,%edx
0816b791 +0x35f2:  je     0816b79f <+0x3600>
0816b793 +0x35f4:  mov    %ebx,0x4(%esp)
0816b797 +0x35f8:  mov    %eax,(%esp)
0816b79a +0x35fb:  call   0816b880 <+0x36e1>
0816b79f +0x3600:  add    $0x14,%esp
0816b7a2 +0x3603:  pop    %ebx
0816b7a3 +0x3604:  pop    %ebp
0816b7a4 +0x3605:  ret
0816b7a5 +0x3606:  push   %ebp
0816b7a6 +0x3607:  mov    %esp,%ebp
0816b7a8 +0x3609:  mov    0x8(%ebp),%eax
0816b7ab +0x360c:  pop    %ebp
0816b7ac +0x360d:  ret
0816b7ad +0x360e:  push   %ebp
0816b7ae +0x360f:  mov    %esp,%ebp
0816b7b0 +0x3611:  mov    0x8(%ebp),%eax
0816b7b3 +0x3614:  pop    %ebp
0816b7b4 +0x3615:  ret
0816b7b5 +0x3616:  push   %ebp
0816b7b6 +0x3617:  mov    %esp,%ebp
0816b7b8 +0x3619:  push   %ebx
0816b7b9 +0x361a:  sub    $0x14,%esp
0816b7bc +0x361d:  mov    0xc(%ebp),%eax
0816b7bf +0x3620:  mov    %eax,(%esp)
0816b7c2 +0x3623:  call   0816b8c8 <+0x3729>
0816b7c7 +0x3628:  mov    %eax,%ebx
0816b7c9 +0x362a:  mov    0x8(%ebp),%eax
0816b7cc +0x362d:  mov    %eax,(%esp)
0816b7cf +0x3630:  call   0816b8c8 <+0x3729>
0816b7d4 +0x3635:  mov    0x10(%ebp),%edx
0816b7d7 +0x3638:  mov    %edx,0x8(%esp)
0816b7db +0x363c:  mov    %ebx,0x4(%esp)
0816b7df +0x3640:  mov    %eax,(%esp)
0816b7e2 +0x3643:  call   0816b8db <+0x373c>
0816b7e7 +0x3648:  add    $0x14,%esp
0816b7ea +0x364b:  pop    %ebx
0816b7eb +0x364c:  pop    %ebp
0816b7ec +0x364d:  ret
0816b7ed +0x364e:  push   %ebp
0816b7ee +0x364f:  mov    %esp,%ebp
0816b7f0 +0x3651:  sub    $0x28,%esp
0816b7f3 +0x3654:  lea    -0x10(%ebp),%eax
0816b7f6 +0x3657:  mov    0xc(%ebp),%edx
0816b7f9 +0x365a:  mov    %edx,0x4(%esp)
0816b7fd +0x365e:  mov    %eax,(%esp)
0816b800 +0x3661:  call   0816b91f <+0x3780>
0816b805 +0x3666:  sub    $0x4,%esp
0816b808 +0x3669:  lea    -0xc(%ebp),%eax
0816b80b +0x366c:  mov    0x8(%ebp),%edx
0816b80e +0x366f:  mov    %edx,0x4(%esp)
0816b812 +0x3673:  mov    %eax,(%esp)
0816b815 +0x3676:  call   0816b91f <+0x3780>
0816b81a +0x367b:  sub    $0x4,%esp
0816b81d +0x367e:  mov    0x10(%ebp),%eax
0816b820 +0x3681:  mov    %eax,0x8(%esp)
0816b824 +0x3685:  mov    -0x10(%ebp),%eax
0816b827 +0x3688:  mov    %eax,0x4(%esp)
0816b82b +0x368c:  mov    -0xc(%ebp),%eax
0816b82e +0x368f:  mov    %eax,(%esp)
0816b831 +0x3692:  call   0816b92e <+0x378f>
0816b836 +0x3697:  leave
0816b837 +0x3698:  ret
0816b838 +0x3699:  push   %ebp
0816b839 +0x369a:  mov    %esp,%ebp
0816b83b +0x369c:  mov    $0x7ffffff,%eax
0816b840 +0x36a1:  pop    %ebp
0816b841 +0x36a2:  ret
0816b842 +0x36a3:  push   %ebp
0816b843 +0x36a4:  mov    %esp,%ebp
0816b845 +0x36a6:  sub    $0x18,%esp
0816b848 +0x36a9:  mov    0x8(%ebp),%eax
0816b84b +0x36ac:  mov    %eax,(%esp)
0816b84e +0x36af:  call   0816b972 <+0x37d3>
0816b853 +0x36b4:  cmp    0xc(%ebp),%eax
0816b856 +0x36b7:  setb   %al
0816b859 +0x36ba:  movzbl %al,%eax
0816b85c +0x36bd:  test   %eax,%eax
0816b85e +0x36bf:  setne  %al
0816b861 +0x36c2:  test   %al,%al
0816b863 +0x36c4:  je     0816b86a <+0x36cb>
0816b865 +0x36c6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0816b86a +0x36cb:  mov    0xc(%ebp),%edx
0816b86d +0x36ce:  mov    %edx,%eax
0816b86f +0x36d0:  add    %eax,%eax
0816b871 +0x36d2:  add    %edx,%eax
0816b873 +0x36d4:  shl    $0x3,%eax
0816b876 +0x36d7:  mov    %eax,(%esp)
0816b879 +0x36da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816b87e +0x36df:  leave
0816b87f +0x36e0:  ret
0816b880 +0x36e1:  push   %ebp
0816b881 +0x36e2:  mov    %esp,%ebp
0816b883 +0x36e4:  sub    $0x18,%esp
0816b886 +0x36e7:  mov    0x8(%ebp),%eax
0816b889 +0x36ea:  movl   $0x0,(%eax)
0816b88f +0x36f0:  mov    0x8(%ebp),%eax
0816b892 +0x36f3:  movl   $0x0,0x4(%eax)
0816b899 +0x36fa:  mov    0x8(%ebp),%eax
0816b89c +0x36fd:  movl   $0x0,0x8(%eax)
0816b8a3 +0x3704:  mov    0x8(%ebp),%eax
0816b8a6 +0x3707:  movl   $0x0,0xc(%eax)
0816b8ad +0x370e:  mov    0xc(%ebp),%eax
0816b8b0 +0x3711:  mov    %eax,(%esp)
0816b8b3 +0x3714:  call   0816b75d <+0x35be>
0816b8b8 +0x3719:  mov    0x8(%ebp),%ecx
0816b8bb +0x371c:  mov    0x4(%eax),%edx
0816b8be +0x371f:  mov    (%eax),%eax
0816b8c0 +0x3721:  mov    %eax,0x10(%ecx)
0816b8c3 +0x3724:  mov    %edx,0x14(%ecx)
0816b8c6 +0x3727:  leave
0816b8c7 +0x3728:  ret
0816b8c8 +0x3729:  push   %ebp
0816b8c9 +0x372a:  mov    %esp,%ebp
0816b8cb +0x372c:  sub    $0x18,%esp
0816b8ce +0x372f:  lea    0x8(%ebp),%eax
0816b8d1 +0x3732:  mov    %eax,(%esp)
0816b8d4 +0x3735:  call   0816b97c <+0x37dd>
0816b8d9 +0x373a:  leave
0816b8da +0x373b:  ret
0816b8db +0x373c:  push   %ebp
0816b8dc +0x373d:  mov    %esp,%ebp
0816b8de +0x373f:  push   %esi
0816b8df +0x3740:  push   %ebx
0816b8e0 +0x3741:  sub    $0x10,%esp
0816b8e3 +0x3744:  mov    0x10(%ebp),%eax
0816b8e6 +0x3747:  mov    %eax,(%esp)
0816b8e9 +0x374a:  call   0816b35b <+0x31bc>
0816b8ee +0x374f:  mov    %eax,%esi
0816b8f0 +0x3751:  mov    0xc(%ebp),%eax
0816b8f3 +0x3754:  mov    %eax,(%esp)
0816b8f6 +0x3757:  call   0816b35b <+0x31bc>
0816b8fb +0x375c:  mov    %eax,%ebx
0816b8fd +0x375e:  mov    0x8(%ebp),%eax
0816b900 +0x3761:  mov    %eax,(%esp)
0816b903 +0x3764:  call   0816b35b <+0x31bc>
0816b908 +0x3769:  mov    %esi,0x8(%esp)
0816b90c +0x376d:  mov    %ebx,0x4(%esp)
0816b910 +0x3771:  mov    %eax,(%esp)
0816b913 +0x3774:  call   0816b986 <+0x37e7>
0816b918 +0x3779:  add    $0x10,%esp
0816b91b +0x377c:  pop    %ebx
0816b91c +0x377d:  pop    %esi
0816b91d +0x377e:  pop    %ebp
0816b91e +0x377f:  ret
0816b91f +0x3780:  push   %ebp
0816b920 +0x3781:  mov    %esp,%ebp
0816b922 +0x3783:  mov    0x8(%ebp),%eax
0816b925 +0x3786:  mov    0xc(%ebp),%edx
0816b928 +0x3789:  mov    %edx,(%eax)
0816b92a +0x378b:  pop    %ebp
0816b92b +0x378c:  ret    $0x4
0816b92e +0x378f:  push   %ebp
0816b92f +0x3790:  mov    %esp,%ebp
0816b931 +0x3792:  push   %esi
0816b932 +0x3793:  push   %ebx
0816b933 +0x3794:  sub    $0x10,%esp
0816b936 +0x3797:  mov    0x10(%ebp),%eax
0816b939 +0x379a:  mov    %eax,(%esp)
0816b93c +0x379d:  call   0816b35b <+0x31bc>
0816b941 +0x37a2:  mov    %eax,%esi
0816b943 +0x37a4:  mov    0xc(%ebp),%eax
0816b946 +0x37a7:  mov    %eax,(%esp)
0816b949 +0x37aa:  call   0816b9ab <+0x380c>
0816b94e +0x37af:  mov    %eax,%ebx
0816b950 +0x37b1:  mov    0x8(%ebp),%eax
0816b953 +0x37b4:  mov    %eax,(%esp)
0816b956 +0x37b7:  call   0816b9ab <+0x380c>
0816b95b +0x37bc:  mov    %esi,0x8(%esp)
0816b95f +0x37c0:  mov    %ebx,0x4(%esp)
0816b963 +0x37c4:  mov    %eax,(%esp)
0816b966 +0x37c7:  call   0816b9c0 <+0x3821>
0816b96b +0x37cc:  add    $0x10,%esp
0816b96e +0x37cf:  pop    %ebx
0816b96f +0x37d0:  pop    %esi
0816b970 +0x37d1:  pop    %ebp
0816b971 +0x37d2:  ret
0816b972 +0x37d3:  push   %ebp
0816b973 +0x37d4:  mov    %esp,%ebp
0816b975 +0x37d6:  mov    $0xaaaaaaa,%eax
0816b97a +0x37db:  pop    %ebp
0816b97b +0x37dc:  ret
0816b97c +0x37dd:  push   %ebp
0816b97d +0x37de:  mov    %esp,%ebp
0816b97f +0x37e0:  mov    0x8(%ebp),%eax
0816b982 +0x37e3:  mov    (%eax),%eax
0816b984 +0x37e5:  pop    %ebp
0816b985 +0x37e6:  ret
0816b986 +0x37e7:  push   %ebp
0816b987 +0x37e8:  mov    %esp,%ebp
0816b989 +0x37ea:  sub    $0x28,%esp
0816b98c +0x37ed:  movb   $0x1,-0x9(%ebp)
0816b990 +0x37f1:  mov    0x10(%ebp),%eax
0816b993 +0x37f4:  mov    %eax,0x8(%esp)
0816b997 +0x37f8:  mov    0xc(%ebp),%eax
0816b99a +0x37fb:  mov    %eax,0x4(%esp)
0816b99e +0x37ff:  mov    0x8(%ebp),%eax
0816b9a1 +0x3802:  mov    %eax,(%esp)
0816b9a4 +0x3805:  call   0816b9e5 <+0x3846>
0816b9a9 +0x380a:  leave
0816b9aa +0x380b:  ret
0816b9ab +0x380c:  push   %ebp
0816b9ac +0x380d:  mov    %esp,%ebp
0816b9ae +0x380f:  sub    $0x18,%esp
0816b9b1 +0x3812:  lea    0x8(%ebp),%eax
0816b9b4 +0x3815:  mov    %eax,(%esp)
0816b9b7 +0x3818:  call   0816ba46 <+0x38a7>
0816b9bc +0x381d:  mov    (%eax),%eax
0816b9be +0x381f:  leave
0816b9bf +0x3820:  ret
0816b9c0 +0x3821:  push   %ebp
0816b9c1 +0x3822:  mov    %esp,%ebp
0816b9c3 +0x3824:  sub    $0x28,%esp
0816b9c6 +0x3827:  movb   $0x1,-0x9(%ebp)
0816b9ca +0x382b:  mov    0x10(%ebp),%eax
0816b9cd +0x382e:  mov    %eax,0x8(%esp)
0816b9d1 +0x3832:  mov    0xc(%ebp),%eax
0816b9d4 +0x3835:  mov    %eax,0x4(%esp)
0816b9d8 +0x3839:  mov    0x8(%ebp),%eax
0816b9db +0x383c:  mov    %eax,(%esp)
0816b9de +0x383f:  call   0816ba4e <+0x38af>
0816b9e3 +0x3844:  leave
0816b9e4 +0x3845:  ret
0816b9e5 +0x3846:  push   %ebp
0816b9e6 +0x3847:  mov    %esp,%ebp
0816b9e8 +0x3849:  sub    $0x18,%esp
0816b9eb +0x384c:  mov    0xc(%ebp),%edx
0816b9ee +0x384f:  mov    0x8(%ebp),%eax
0816b9f1 +0x3852:  mov    %edx,%ecx
0816b9f3 +0x3854:  sub    %eax,%ecx
0816b9f5 +0x3856:  mov    %ecx,%eax
0816b9f7 +0x3858:  sar    $0x2,%eax
0816b9fa +0x385b:  imul   $0xaaaaaaab,%eax,%eax
0816ba00 +0x3861:  mov    %eax,%edx
0816ba02 +0x3863:  mov    %edx,%eax
0816ba04 +0x3865:  add    %eax,%eax
0816ba06 +0x3867:  add    %edx,%eax
0816ba08 +0x3869:  shl    $0x2,%eax
0816ba0b +0x386c:  mov    %eax,0x8(%esp)
0816ba0f +0x3870:  mov    0x8(%ebp),%eax
0816ba12 +0x3873:  mov    %eax,0x4(%esp)
0816ba16 +0x3877:  mov    0x10(%ebp),%eax
0816ba19 +0x387a:  mov    %eax,(%esp)
0816ba1c +0x387d:  call   0807d880 <_init+0x178>
0816ba21 +0x3882:  mov    0xc(%ebp),%edx
0816ba24 +0x3885:  mov    0x8(%ebp),%eax
0816ba27 +0x3888:  mov    %edx,%ecx
0816ba29 +0x388a:  sub    %eax,%ecx
0816ba2b +0x388c:  mov    %ecx,%eax
0816ba2d +0x388e:  sar    $0x2,%eax
0816ba30 +0x3891:  imul   $0xaaaaaaab,%eax,%eax
0816ba36 +0x3897:  mov    %eax,%edx
0816ba38 +0x3899:  mov    %edx,%eax
0816ba3a +0x389b:  add    %eax,%eax
0816ba3c +0x389d:  add    %edx,%eax
0816ba3e +0x389f:  shl    $0x2,%eax
0816ba41 +0x38a2:  add    0x10(%ebp),%eax
0816ba44 +0x38a5:  leave
0816ba45 +0x38a6:  ret
0816ba46 +0x38a7:  push   %ebp
0816ba47 +0x38a8:  mov    %esp,%ebp
0816ba49 +0x38aa:  mov    0x8(%ebp),%eax
0816ba4c +0x38ad:  pop    %ebp
0816ba4d +0x38ae:  ret
0816ba4e +0x38af:  push   %ebp
0816ba4f +0x38b0:  mov    %esp,%ebp
0816ba51 +0x38b2:  sub    $0x18,%esp
0816ba54 +0x38b5:  mov    0xc(%ebp),%edx
0816ba57 +0x38b8:  mov    0x8(%ebp),%eax
0816ba5a +0x38bb:  mov    %edx,%ecx
0816ba5c +0x38bd:  sub    %eax,%ecx
0816ba5e +0x38bf:  mov    %ecx,%eax
0816ba60 +0x38c1:  sar    $0x2,%eax
0816ba63 +0x38c4:  imul   $0xaaaaaaab,%eax,%eax
0816ba69 +0x38ca:  mov    %eax,%edx
0816ba6b +0x38cc:  mov    %edx,%eax
0816ba6d +0x38ce:  add    %eax,%eax
0816ba6f +0x38d0:  add    %edx,%eax
0816ba71 +0x38d2:  shl    $0x2,%eax
0816ba74 +0x38d5:  mov    %eax,0x8(%esp)
0816ba78 +0x38d9:  mov    0x8(%ebp),%eax
0816ba7b +0x38dc:  mov    %eax,0x4(%esp)
0816ba7f +0x38e0:  mov    0x10(%ebp),%eax
0816ba82 +0x38e3:  mov    %eax,(%esp)
0816ba85 +0x38e6:  call   0807d880 <_init+0x178>
0816ba8a +0x38eb:  mov    0xc(%ebp),%edx
0816ba8d +0x38ee:  mov    0x8(%ebp),%eax
0816ba90 +0x38f1:  mov    %edx,%ecx
0816ba92 +0x38f3:  sub    %eax,%ecx
0816ba94 +0x38f5:  mov    %ecx,%eax
0816ba96 +0x38f7:  sar    $0x2,%eax
0816ba99 +0x38fa:  imul   $0xaaaaaaab,%eax,%eax
0816ba9f +0x3900:  mov    %eax,%edx
0816baa1 +0x3902:  mov    %edx,%eax
0816baa3 +0x3904:  add    %eax,%eax
0816baa5 +0x3906:  add    %edx,%eax
0816baa7 +0x3908:  shl    $0x2,%eax
0816baaa +0x390b:  add    0x10(%ebp),%eax
0816baad +0x390e:  leave
0816baae +0x390f:  ret
0816baaf +0x3910:  nop
```

## 反编译 C

```c
// <global>::global @ 0x816819f

/* HeroMissionValue::clear() */

void HeroMissionValue::_GLOBAL__I_clear(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
