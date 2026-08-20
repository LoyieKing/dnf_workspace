# MakeNextRoundInfo

`_ZN13CBattle_Field17MakeNextRoundInfoEiRSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEE`

`CBattle_Field::MakeNextRoundInfo(int, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830410c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830410c  _ZN13CBattle_Field17MakeNextRoundInfoEiRSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEE
#           CBattle_Field::MakeNextRoundInfo(int, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)
# range [0x0830410c, 0x08304593]
0830410c +0x000:  push   %ebp
0830410d +0x001:  mov    %esp,%ebp
0830410f +0x003:  push   %esi
08304110 +0x004:  push   %ebx
08304111 +0x005:  sub    $0x170,%esp
08304117 +0x00b:  lea    -0x160(%ebp),%eax
0830411d +0x011:  mov    %eax,(%esp)
08304120 +0x014:  call   0831116e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2d53>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2d53
08304125 +0x019:  movl   $0x0,-0x24(%ebp)
0830412c +0x020:  jmp    08304528 <+0x41c>
08304131 +0x025:  mov    -0x24(%ebp),%eax
08304134 +0x028:  mov    %eax,-0x20(%ebp)
08304137 +0x02b:  mov    -0x24(%ebp),%eax
0830413a +0x02e:  add    $0x1,%eax
0830413d +0x031:  mov    %eax,-0x1c(%ebp)
08304140 +0x034:  mov    -0x20(%ebp),%eax
08304143 +0x037:  mov    %ax,-0x148(%ebp)
0830414a +0x03e:  lea    -0x148(%ebp),%eax
08304150 +0x044:  mov    %eax,0x4(%esp)
08304154 +0x048:  mov    0x10(%ebp),%eax
08304157 +0x04b:  mov    %eax,(%esp)
0830415a +0x04e:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
0830415f +0x053:  mov    0x14(%eax),%eax
08304162 +0x056:  mov    %eax,-0x18(%ebp)
08304165 +0x059:  mov    -0x1c(%ebp),%eax
08304168 +0x05c:  mov    %ax,-0x146(%ebp)
0830416f +0x063:  lea    -0x146(%ebp),%eax
08304175 +0x069:  mov    %eax,0x4(%esp)
08304179 +0x06d:  mov    0x10(%ebp),%eax
0830417c +0x070:  mov    %eax,(%esp)
0830417f +0x073:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304184 +0x078:  mov    0x14(%eax),%eax
08304187 +0x07b:  mov    %eax,-0x14(%ebp)
0830418a +0x07e:  mov    -0x20(%ebp),%eax
0830418d +0x081:  mov    %ax,-0x144(%ebp)
08304194 +0x088:  lea    -0x144(%ebp),%eax
0830419a +0x08e:  mov    %eax,0x4(%esp)
0830419e +0x092:  mov    0x10(%ebp),%eax
083041a1 +0x095:  mov    %eax,(%esp)
083041a4 +0x098:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083041a9 +0x09d:  mov    0x4(%eax),%eax
083041ac +0x0a0:  test   %eax,%eax
083041ae +0x0a2:  sete   %al
083041b1 +0x0a5:  test   %al,%al
083041b3 +0x0a7:  je     08304287 <+0x17b>
083041b9 +0x0ad:  mov    -0x20(%ebp),%eax
083041bc +0x0b0:  mov    %ax,-0x142(%ebp)
083041c3 +0x0b7:  lea    -0x142(%ebp),%eax
083041c9 +0x0bd:  mov    %eax,0x4(%esp)
083041cd +0x0c1:  mov    0x10(%ebp),%eax
083041d0 +0x0c4:  mov    %eax,(%esp)
083041d3 +0x0c7:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083041d8 +0x0cc:  mov    %eax,%edx
083041da +0x0ce:  mov    -0x20(%ebp),%eax
083041dd +0x0d1:  mov    %eax,%ecx
083041df +0x0d3:  shr    $0x1f,%ecx
083041e2 +0x0d6:  lea    (%ecx,%eax,1),%eax
083041e5 +0x0d9:  sar    %eax
083041e7 +0x0db:  mov    %ax,(%edx)
083041ea +0x0de:  mov    -0x20(%ebp),%eax
083041ed +0x0e1:  mov    %ax,-0x100(%ebp)
083041f4 +0x0e8:  lea    -0x100(%ebp),%eax
083041fa +0x0ee:  mov    %eax,0x4(%esp)
083041fe +0x0f2:  mov    0x10(%ebp),%eax
08304201 +0x0f5:  mov    %eax,(%esp)
08304204 +0x0f8:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304209 +0x0fd:  mov    %eax,%ebx
0830420b +0x0ff:  mov    -0x20(%ebp),%eax
0830420e +0x102:  mov    %ax,-0xfe(%ebp)
08304215 +0x109:  lea    -0xfe(%ebp),%eax
0830421b +0x10f:  mov    %eax,0x4(%esp)
0830421f +0x113:  mov    0x10(%ebp),%eax
08304222 +0x116:  mov    %eax,(%esp)
08304225 +0x119:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
0830422a +0x11e:  mov    %eax,%edx
0830422c +0x120:  lea    -0x11c(%ebp),%eax
08304232 +0x126:  mov    %ebx,0x8(%esp)
08304236 +0x12a:  mov    %edx,0x4(%esp)
0830423a +0x12e:  mov    %eax,(%esp)
0830423d +0x131:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
08304242 +0x136:  sub    $0x4,%esp
08304245 +0x139:  lea    -0x11c(%ebp),%eax
0830424b +0x13f:  mov    %eax,0x4(%esp)
0830424f +0x143:  lea    -0x138(%ebp),%eax
08304255 +0x149:  mov    %eax,(%esp)
08304258 +0x14c:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
0830425d +0x151:  lea    -0x140(%ebp),%eax
08304263 +0x157:  lea    -0x138(%ebp),%edx
08304269 +0x15d:  mov    %edx,0x8(%esp)
0830426d +0x161:  lea    -0x160(%ebp),%edx
08304273 +0x167:  mov    %edx,0x4(%esp)
08304277 +0x16b:  mov    %eax,(%esp)
0830427a +0x16e:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
0830427f +0x173:  sub    $0x4,%esp
08304282 +0x176:  jmp    08304524 <+0x418>
08304287 +0x17b:  mov    -0x1c(%ebp),%eax
0830428a +0x17e:  mov    %ax,-0xfc(%ebp)
08304291 +0x185:  lea    -0xfc(%ebp),%eax
08304297 +0x18b:  mov    %eax,0x4(%esp)
0830429b +0x18f:  mov    0x10(%ebp),%eax
0830429e +0x192:  mov    %eax,(%esp)
083042a1 +0x195:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083042a6 +0x19a:  mov    0x4(%eax),%eax
083042a9 +0x19d:  test   %eax,%eax
083042ab +0x19f:  sete   %al
083042ae +0x1a2:  test   %al,%al
083042b0 +0x1a4:  je     08304384 <+0x278>
083042b6 +0x1aa:  mov    -0x1c(%ebp),%eax
083042b9 +0x1ad:  mov    %ax,-0xfa(%ebp)
083042c0 +0x1b4:  lea    -0xfa(%ebp),%eax
083042c6 +0x1ba:  mov    %eax,0x4(%esp)
083042ca +0x1be:  mov    0x10(%ebp),%eax
083042cd +0x1c1:  mov    %eax,(%esp)
083042d0 +0x1c4:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083042d5 +0x1c9:  mov    %eax,%edx
083042d7 +0x1cb:  mov    -0x1c(%ebp),%eax
083042da +0x1ce:  mov    %eax,%ecx
083042dc +0x1d0:  shr    $0x1f,%ecx
083042df +0x1d3:  lea    (%ecx,%eax,1),%eax
083042e2 +0x1d6:  sar    %eax
083042e4 +0x1d8:  mov    %ax,(%edx)
083042e7 +0x1db:  mov    -0x1c(%ebp),%eax
083042ea +0x1de:  mov    %ax,-0xb6(%ebp)
083042f1 +0x1e5:  lea    -0xb6(%ebp),%eax
083042f7 +0x1eb:  mov    %eax,0x4(%esp)
083042fb +0x1ef:  mov    0x10(%ebp),%eax
083042fe +0x1f2:  mov    %eax,(%esp)
08304301 +0x1f5:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304306 +0x1fa:  mov    %eax,%ebx
08304308 +0x1fc:  mov    -0x1c(%ebp),%eax
0830430b +0x1ff:  mov    %ax,-0xb4(%ebp)
08304312 +0x206:  lea    -0xb4(%ebp),%eax
08304318 +0x20c:  mov    %eax,0x4(%esp)
0830431c +0x210:  mov    0x10(%ebp),%eax
0830431f +0x213:  mov    %eax,(%esp)
08304322 +0x216:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304327 +0x21b:  mov    %eax,%edx
08304329 +0x21d:  lea    -0xd4(%ebp),%eax
0830432f +0x223:  mov    %ebx,0x8(%esp)
08304333 +0x227:  mov    %edx,0x4(%esp)
08304337 +0x22b:  mov    %eax,(%esp)
0830433a +0x22e:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
0830433f +0x233:  sub    $0x4,%esp
08304342 +0x236:  lea    -0xd4(%ebp),%eax
08304348 +0x23c:  mov    %eax,0x4(%esp)
0830434c +0x240:  lea    -0xf0(%ebp),%eax
08304352 +0x246:  mov    %eax,(%esp)
08304355 +0x249:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
0830435a +0x24e:  lea    -0xf8(%ebp),%eax
08304360 +0x254:  lea    -0xf0(%ebp),%edx
08304366 +0x25a:  mov    %edx,0x8(%esp)
0830436a +0x25e:  lea    -0x160(%ebp),%edx
08304370 +0x264:  mov    %edx,0x4(%esp)
08304374 +0x268:  mov    %eax,(%esp)
08304377 +0x26b:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
0830437c +0x270:  sub    $0x4,%esp
0830437f +0x273:  jmp    08304524 <+0x418>
08304384 +0x278:  movl   $0x0,-0x10(%ebp)
0830438b +0x27f:  movl   $0x0,-0xc(%ebp)
08304392 +0x286:  mov    -0x18(%ebp),%eax
08304395 +0x289:  mov    %eax,(%esp)
08304398 +0x28c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830439d +0x291:  mov    %eax,-0x10(%ebp)
083043a0 +0x294:  mov    -0x14(%ebp),%eax
083043a3 +0x297:  mov    %eax,(%esp)
083043a6 +0x29a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083043ab +0x29f:  mov    %eax,-0xc(%ebp)
083043ae +0x2a2:  mov    -0x10(%ebp),%eax
083043b1 +0x2a5:  cmp    -0xc(%ebp),%eax
083043b4 +0x2a8:  jle    0830447c <+0x370>
083043ba +0x2ae:  mov    -0x20(%ebp),%eax
083043bd +0x2b1:  mov    %ax,-0xb2(%ebp)
083043c4 +0x2b8:  lea    -0xb2(%ebp),%eax
083043ca +0x2be:  mov    %eax,0x4(%esp)
083043ce +0x2c2:  mov    0x10(%ebp),%eax
083043d1 +0x2c5:  mov    %eax,(%esp)
083043d4 +0x2c8:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083043d9 +0x2cd:  mov    %eax,%edx
083043db +0x2cf:  mov    -0x20(%ebp),%eax
083043de +0x2d2:  mov    %eax,%ecx
083043e0 +0x2d4:  shr    $0x1f,%ecx
083043e3 +0x2d7:  lea    (%ecx,%eax,1),%eax
083043e6 +0x2da:  sar    %eax
083043e8 +0x2dc:  mov    %ax,(%edx)
083043eb +0x2df:  mov    -0x20(%ebp),%eax
083043ee +0x2e2:  mov    %ax,-0x6e(%ebp)
083043f2 +0x2e6:  lea    -0x6e(%ebp),%eax
083043f5 +0x2e9:  mov    %eax,0x4(%esp)
083043f9 +0x2ed:  mov    0x10(%ebp),%eax
083043fc +0x2f0:  mov    %eax,(%esp)
083043ff +0x2f3:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304404 +0x2f8:  mov    %eax,%ebx
08304406 +0x2fa:  mov    -0x20(%ebp),%eax
08304409 +0x2fd:  mov    %ax,-0x6c(%ebp)
0830440d +0x301:  lea    -0x6c(%ebp),%eax
08304410 +0x304:  mov    %eax,0x4(%esp)
08304414 +0x308:  mov    0x10(%ebp),%eax
08304417 +0x30b:  mov    %eax,(%esp)
0830441a +0x30e:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
0830441f +0x313:  mov    %eax,%edx
08304421 +0x315:  lea    -0x8c(%ebp),%eax
08304427 +0x31b:  mov    %ebx,0x8(%esp)
0830442b +0x31f:  mov    %edx,0x4(%esp)
0830442f +0x323:  mov    %eax,(%esp)
08304432 +0x326:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
08304437 +0x32b:  sub    $0x4,%esp
0830443a +0x32e:  lea    -0x8c(%ebp),%eax
08304440 +0x334:  mov    %eax,0x4(%esp)
08304444 +0x338:  lea    -0xa8(%ebp),%eax
0830444a +0x33e:  mov    %eax,(%esp)
0830444d +0x341:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
08304452 +0x346:  lea    -0xb0(%ebp),%eax
08304458 +0x34c:  lea    -0xa8(%ebp),%edx
0830445e +0x352:  mov    %edx,0x8(%esp)
08304462 +0x356:  lea    -0x160(%ebp),%edx
08304468 +0x35c:  mov    %edx,0x4(%esp)
0830446c +0x360:  mov    %eax,(%esp)
0830446f +0x363:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
08304474 +0x368:  sub    $0x4,%esp
08304477 +0x36b:  jmp    08304524 <+0x418>
0830447c +0x370:  mov    -0x1c(%ebp),%eax
0830447f +0x373:  mov    %ax,-0x6a(%ebp)
08304483 +0x377:  lea    -0x6a(%ebp),%eax
08304486 +0x37a:  mov    %eax,0x4(%esp)
0830448a +0x37e:  mov    0x10(%ebp),%eax
0830448d +0x381:  mov    %eax,(%esp)
08304490 +0x384:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
08304495 +0x389:  mov    %eax,%edx
08304497 +0x38b:  mov    -0x1c(%ebp),%eax
0830449a +0x38e:  mov    %eax,%ecx
0830449c +0x390:  shr    $0x1f,%ecx
0830449f +0x393:  lea    (%ecx,%eax,1),%eax
083044a2 +0x396:  sar    %eax
083044a4 +0x398:  mov    %ax,(%edx)
083044a7 +0x39b:  mov    -0x1c(%ebp),%eax
083044aa +0x39e:  mov    %ax,-0x28(%ebp)
083044ae +0x3a2:  lea    -0x28(%ebp),%eax
083044b1 +0x3a5:  mov    %eax,0x4(%esp)
083044b5 +0x3a9:  mov    0x10(%ebp),%eax
083044b8 +0x3ac:  mov    %eax,(%esp)
083044bb +0x3af:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083044c0 +0x3b4:  mov    %eax,%ebx
083044c2 +0x3b6:  mov    -0x1c(%ebp),%eax
083044c5 +0x3b9:  mov    %ax,-0x26(%ebp)
083044c9 +0x3bd:  lea    -0x26(%ebp),%eax
083044cc +0x3c0:  mov    %eax,0x4(%esp)
083044d0 +0x3c4:  mov    0x10(%ebp),%eax
083044d3 +0x3c7:  mov    %eax,(%esp)
083044d6 +0x3ca:  call   083114c4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x30a9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x30a9
083044db +0x3cf:  mov    %eax,%edx
083044dd +0x3d1:  lea    -0x44(%ebp),%eax
083044e0 +0x3d4:  mov    %ebx,0x8(%esp)
083044e4 +0x3d8:  mov    %edx,0x4(%esp)
083044e8 +0x3dc:  mov    %eax,(%esp)
083044eb +0x3df:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
083044f0 +0x3e4:  sub    $0x4,%esp
083044f3 +0x3e7:  lea    -0x44(%ebp),%eax
083044f6 +0x3ea:  mov    %eax,0x4(%esp)
083044fa +0x3ee:  lea    -0x60(%ebp),%eax
083044fd +0x3f1:  mov    %eax,(%esp)
08304500 +0x3f4:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
08304505 +0x3f9:  lea    -0x68(%ebp),%eax
08304508 +0x3fc:  lea    -0x60(%ebp),%edx
0830450b +0x3ff:  mov    %edx,0x8(%esp)
0830450f +0x403:  lea    -0x160(%ebp),%edx
08304515 +0x409:  mov    %edx,0x4(%esp)
08304519 +0x40d:  mov    %eax,(%esp)
0830451c +0x410:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
08304521 +0x415:  sub    $0x4,%esp
08304524 +0x418:  addl   $0x2,-0x24(%ebp)
08304528 +0x41c:  mov    $0x10,%eax
0830452d +0x421:  mov    %eax,%edx
0830452f +0x423:  sar    $0x1f,%edx
08304532 +0x426:  idivl  0xc(%ebp)
08304535 +0x429:  sub    $0x1,%eax
08304538 +0x42c:  cmp    -0x24(%ebp),%eax
0830453b +0x42f:  setg   %al
0830453e +0x432:  test   %al,%al
08304540 +0x434:  jne    08304131 <+0x25>
08304546 +0x43a:  lea    -0x160(%ebp),%eax
0830454c +0x440:  mov    %eax,0x4(%esp)
08304550 +0x444:  mov    0x10(%ebp),%eax
08304553 +0x447:  mov    %eax,(%esp)
08304556 +0x44a:  call   083115be <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x31a3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x31a3
0830455b +0x44f:  jmp    0830457b <+0x46f>
0830455d +0x451:  mov    %edx,%ebx
0830455f +0x453:  mov    %eax,%esi
08304561 +0x455:  lea    -0x160(%ebp),%eax
08304567 +0x45b:  mov    %eax,(%esp)
0830456a +0x45e:  call   0830ee78 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa5d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa5d
0830456f +0x463:  mov    %esi,%eax
08304571 +0x465:  mov    %ebx,%edx
08304573 +0x467:  mov    %eax,(%esp)
08304576 +0x46a:  call   08ae3750 <_Unwind_Resume>
0830457b +0x46f:  lea    -0x160(%ebp),%eax
08304581 +0x475:  mov    %eax,(%esp)
08304584 +0x478:  call   0830ee78 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa5d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa5d
08304589 +0x47d:  lea    -0x8(%ebp),%esp
0830458c +0x480:  add    $0x0,%esp
0830458f +0x483:  pop    %ebx
08304590 +0x484:  pop    %esi
08304591 +0x485:  pop    %ebp
08304592 +0x486:  ret
08304593 +0x487:  nop
```

## 反编译 C

```c
// CBattle_Field::MakeNextRoundInfo @ 0x830410c

/* CBattle_Field::MakeNextRoundInfo(int, std::map<short, CBattle_Field::TournamentInfo,
   std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&) */

void __thiscall CBattle_Field::MakeNextRoundInfo(CBattle_Field *this,int param_1,map *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  TournamentInfo *pTVar3;
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  local_164 [24];
  short local_14c;
  short local_14a;
  short local_148;
  short local_146;
  pair local_144 [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_13c [28];
  short local_120 [14];
  short local_104;
  short local_102;
  short local_100;
  short local_fe;
  pair local_fc [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_f4 [28];
  short local_d8 [15];
  short local_ba;
  short local_b8;
  short local_b6;
  pair local_b4 [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_ac [28];
  short local_90 [15];
  short local_72;
  short local_70;
  short local_6e;
  pair local_6c [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_64 [28];
  short local_48 [14];
  short local_2c;
  short local_2a;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::map(local_164);
  for (local_28 = 0; local_28 < (int)(0x10 / (longlong)param_1) + -1; local_28 = local_28 + 2) {
    local_24 = local_28;
    local_20 = local_28 + 1;
    local_14c = (short)local_28;
                    /* try { // try from 0830415a to 0830455a has its CatchHandler @ 0830455d */
    iVar1 = std::
            map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
            ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                          *)param_2,&local_14c);
    local_1c = *(int *)(iVar1 + 0x14);
    local_14a = (short)local_20;
    iVar1 = std::
            map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
            ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                          *)param_2,&local_14a);
    local_18 = *(int *)(iVar1 + 0x14);
    local_148 = (short)local_24;
    iVar1 = std::
            map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
            ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                          *)param_2,&local_148);
    if (*(int *)(iVar1 + 4) == 0) {
      local_146 = (short)local_24;
      puVar2 = (undefined2 *)
               std::
               map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
               ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                             *)param_2,&local_146);
      *puVar2 = (short)(local_24 / 2);
      local_104 = (short)local_24;
      std::
      map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
      ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                    *)param_2,&local_104);
      local_102 = (short)local_24;
      pTVar3 = (TournamentInfo *)
               std::
               map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
               ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                             *)param_2,&local_102);
      std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_120,pTVar3);
      std::pair<short_const,CBattle_Field::TournamentInfo>::
      pair<short,CBattle_Field::TournamentInfo>(local_13c,(pair *)local_120);
      std::
      map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
      ::insert(local_144);
    }
    else {
      local_100 = (short)local_20;
      iVar1 = std::
              map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
              ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                            *)param_2,&local_100);
      if (*(int *)(iVar1 + 4) == 0) {
        local_fe = (short)local_20;
        puVar2 = (undefined2 *)
                 std::
                 map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                 ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                               *)param_2,&local_fe);
        *puVar2 = (short)(local_20 / 2);
        local_ba = (short)local_20;
        std::
        map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
        ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                      *)param_2,&local_ba);
        local_b8 = (short)local_20;
        pTVar3 = (TournamentInfo *)
                 std::
                 map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                 ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                               *)param_2,&local_b8);
        std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_d8,pTVar3);
        std::pair<short_const,CBattle_Field::TournamentInfo>::
        pair<short,CBattle_Field::TournamentInfo>(local_f4,(pair *)local_d8);
        std::
        map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
        ::insert(local_fc);
      }
      else {
        local_14 = 0;
        local_10 = 0;
        local_14 = get_rand_int(local_1c);
        local_10 = get_rand_int(local_18);
        if (local_10 < local_14) {
          local_b6 = (short)local_24;
          puVar2 = (undefined2 *)
                   std::
                   map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                   ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                                 *)param_2,&local_b6);
          *puVar2 = (short)(local_24 / 2);
          local_72 = (short)local_24;
          std::
          map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
          ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                        *)param_2,&local_72);
          local_70 = (short)local_24;
          pTVar3 = (TournamentInfo *)
                   std::
                   map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                   ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                                 *)param_2,&local_70);
          std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_90,pTVar3);
          std::pair<short_const,CBattle_Field::TournamentInfo>::
          pair<short,CBattle_Field::TournamentInfo>(local_ac,(pair *)local_90);
          std::
          map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
          ::insert(local_b4);
        }
        else {
          local_6e = (short)local_20;
          puVar2 = (undefined2 *)
                   std::
                   map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                   ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                                 *)param_2,&local_6e);
          *puVar2 = (short)(local_20 / 2);
          local_2c = (short)local_20;
          std::
          map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
          ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                        *)param_2,&local_2c);
          local_2a = (short)local_20;
          pTVar3 = (TournamentInfo *)
                   std::
                   map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                   ::operator[]((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
                                 *)param_2,&local_2a);
          std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_48,pTVar3);
          std::pair<short_const,CBattle_Field::TournamentInfo>::
          pair<short,CBattle_Field::TournamentInfo>(local_64,(pair *)local_48);
          std::
          map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
          ::insert(local_6c);
        }
      }
    }
  }
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::operator=((map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
               *)param_2,(map *)local_164);
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::~map(local_164);
  return;
}
```
