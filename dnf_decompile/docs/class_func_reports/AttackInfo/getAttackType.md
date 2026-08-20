# getAttackType

`_ZN10AttackInfo13getAttackTypeERSs`

`AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x088908c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088908c6  _ZN10AttackInfo13getAttackTypeERSs
#           AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x088908c6, 0x08891abf]
088908c6 +0x0000:  push   %ebp
088908c7 +0x0001:  mov    %esp,%ebp
088908c9 +0x0003:  sub    $0x28,%esp
088908cc +0x0006:  movl   $0x7,-0xc(%ebp)
088908d3 +0x000d:  movl   $"attack type physical",0x4(%esp)
088908db +0x0015:  mov    0x8(%ebp),%eax
088908de +0x0018:  mov    %eax,(%esp)
088908e1 +0x001b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088908e6 +0x0020:  test   %al,%al
088908e8 +0x0022:  je     088908f3 <+0x2d>
088908ea +0x0024:  movl   $0x0,-0xc(%ebp)
088908f1 +0x002b:  jmp    08890931 <+0x6b>
088908f3 +0x002d:  movl   $"attack type magical",0x4(%esp)
088908fb +0x0035:  mov    0x8(%ebp),%eax
088908fe +0x0038:  mov    %eax,(%esp)
08890901 +0x003b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08890906 +0x0040:  test   %al,%al
08890908 +0x0042:  je     08890913 <+0x4d>
0889090a +0x0044:  movl   $0x1,-0xc(%ebp)
08890911 +0x004b:  jmp    08890931 <+0x6b>
08890913 +0x004d:  movl   $"attack type absolute",0x4(%esp)
0889091b +0x0055:  mov    0x8(%ebp),%eax
0889091e +0x0058:  mov    %eax,(%esp)
08890921 +0x005b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08890926 +0x0060:  test   %al,%al
08890928 +0x0062:  je     08890931 <+0x6b>
0889092a +0x0064:  movl   $0x2,-0xc(%ebp)
08890931 +0x006b:  mov    -0xc(%ebp),%eax
08890934 +0x006e:  leave
08890935 +0x006f:  ret
08890936 +0x0070:  push   %ebp
08890937 +0x0071:  mov    %esp,%ebp
08890939 +0x0073:  sub    $0x28,%esp
0889093c +0x0076:  mov    0x8(%ebp),%eax
0889093f +0x0079:  mov    $0x0,%edx
08890944 +0x007e:  mov    %edx,(%eax)
08890946 +0x0080:  mov    0x8(%ebp),%eax
08890949 +0x0083:  movb   $0x0,0x4(%eax)
0889094d +0x0087:  mov    0x8(%ebp),%eax
08890950 +0x008a:  movb   $0x0,0x5(%eax)
08890954 +0x008e:  mov    0x8(%ebp),%eax
08890957 +0x0091:  mov    $0x3f800000,%edx
0889095c +0x0096:  mov    %edx,0x6(%eax)
0889095f +0x0099:  mov    0x8(%ebp),%eax
08890962 +0x009c:  add    $0xa,%eax
08890965 +0x009f:  movl   $0x4,0x8(%esp)
0889096d +0x00a7:  movl   $0x0,0x4(%esp)
08890975 +0x00af:  mov    %eax,(%esp)
08890978 +0x00b2:  call   0807dcc0 <_init+0x5b8>
0889097d +0x00b7:  mov    0x8(%ebp),%eax
08890980 +0x00ba:  movb   $0x0,0xe(%eax)
08890984 +0x00be:  mov    0x8(%ebp),%eax
08890987 +0x00c1:  mov    $0x0,%edx
0889098c +0x00c6:  mov    %edx,0xf(%eax)
0889098f +0x00c9:  mov    0x8(%ebp),%eax
08890992 +0x00cc:  mov    $0x3f800000,%edx
08890997 +0x00d1:  mov    %edx,0x13(%eax)
0889099a +0x00d4:  mov    0x8(%ebp),%eax
0889099d +0x00d7:  mov    $0x3f800000,%edx
088909a2 +0x00dc:  mov    %edx,0x17(%eax)
088909a5 +0x00df:  mov    0x8(%ebp),%eax
088909a8 +0x00e2:  mov    $0x3f800000,%edx
088909ad +0x00e7:  mov    %edx,0x1b(%eax)
088909b0 +0x00ea:  movl   $0x0,-0x14(%ebp)
088909b7 +0x00f1:  jmp    088909cf <+0x109>
088909b9 +0x00f3:  mov    -0x14(%ebp),%edx
088909bc +0x00f6:  mov    0x8(%ebp),%eax
088909bf +0x00f9:  lea    0x4(%edx),%ecx
088909c2 +0x00fc:  mov    $0x3f800000,%edx
088909c7 +0x0101:  mov    %edx,0xf(%eax,%ecx,4)
088909cb +0x0105:  addl   $0x1,-0x14(%ebp)
088909cf +0x0109:  cmpl   $0x2,-0x14(%ebp)
088909d3 +0x010d:  setle  %al
088909d6 +0x0110:  test   %al,%al
088909d8 +0x0112:  jne    088909b9 <+0xf3>
088909da +0x0114:  mov    0x8(%ebp),%eax
088909dd +0x0117:  mov    $0x3f800000,%edx
088909e2 +0x011c:  mov    %edx,0x2b(%eax)
088909e5 +0x011f:  mov    0x8(%ebp),%eax
088909e8 +0x0122:  mov    $0x0,%edx
088909ed +0x0127:  mov    %edx,0x2f(%eax)
088909f0 +0x012a:  mov    0x8(%ebp),%eax
088909f3 +0x012d:  mov    $0x0,%edx
088909f8 +0x0132:  mov    %edx,0x33(%eax)
088909fb +0x0135:  mov    0x8(%ebp),%eax
088909fe +0x0138:  mov    $0x3f800000,%edx
08890a03 +0x013d:  mov    %edx,0x37(%eax)
08890a06 +0x0140:  mov    0x8(%ebp),%eax
08890a09 +0x0143:  mov    $0x3f800000,%edx
08890a0e +0x0148:  mov    %edx,0x3b(%eax)
08890a11 +0x014b:  mov    0x8(%ebp),%eax
08890a14 +0x014e:  mov    $0x0,%edx
08890a19 +0x0153:  mov    %edx,0x3f(%eax)
08890a1c +0x0156:  mov    0x8(%ebp),%eax
08890a1f +0x0159:  mov    $0x0,%edx
08890a24 +0x015e:  mov    %edx,0x43(%eax)
08890a27 +0x0161:  mov    0x8(%ebp),%eax
08890a2a +0x0164:  mov    $0x3f800000,%edx
08890a2f +0x0169:  mov    %edx,0x47(%eax)
08890a32 +0x016c:  mov    0x8(%ebp),%eax
08890a35 +0x016f:  mov    $0x3f800000,%edx
08890a3a +0x0174:  mov    %edx,0x4b(%eax)
08890a3d +0x0177:  mov    0x8(%ebp),%eax
08890a40 +0x017a:  mov    $0x3f800000,%edx
08890a45 +0x017f:  mov    %edx,0x4f(%eax)
08890a48 +0x0182:  mov    0x8(%ebp),%eax
08890a4b +0x0185:  mov    $0x3f800000,%edx
08890a50 +0x018a:  mov    %edx,0x53(%eax)
08890a53 +0x018d:  mov    0x8(%ebp),%eax
08890a56 +0x0190:  mov    $0x3f800000,%edx
08890a5b +0x0195:  mov    %edx,0x57(%eax)
08890a5e +0x0198:  mov    0x8(%ebp),%eax
08890a61 +0x019b:  mov    $0x3f800000,%edx
08890a66 +0x01a0:  mov    %edx,0x5b(%eax)
08890a69 +0x01a3:  mov    0x8(%ebp),%eax
08890a6c +0x01a6:  mov    $0x3f800000,%edx
08890a71 +0x01ab:  mov    %edx,0x5f(%eax)
08890a74 +0x01ae:  mov    0x8(%ebp),%eax
08890a77 +0x01b1:  movl   $0x0,0x63(%eax)
08890a7e +0x01b8:  mov    0x8(%ebp),%eax
08890a81 +0x01bb:  movl   $0x0,0x67(%eax)
08890a88 +0x01c2:  mov    0x8(%ebp),%eax
08890a8b +0x01c5:  mov    $0x3f800000,%edx
08890a90 +0x01ca:  mov    %edx,0x6b(%eax)
08890a93 +0x01cd:  mov    0x8(%ebp),%eax
08890a96 +0x01d0:  mov    $0x3f800000,%edx
08890a9b +0x01d5:  mov    %edx,0x6f(%eax)
08890a9e +0x01d8:  mov    0x8(%ebp),%eax
08890aa1 +0x01db:  mov    $0x0,%edx
08890aa6 +0x01e0:  mov    %edx,0x73(%eax)
08890aa9 +0x01e3:  mov    0x8(%ebp),%eax
08890aac +0x01e6:  mov    $0x3f800000,%edx
08890ab1 +0x01eb:  mov    %edx,0x77(%eax)
08890ab4 +0x01ee:  mov    0x8(%ebp),%eax
08890ab7 +0x01f1:  movl   $0x0,0x7b(%eax)
08890abe +0x01f8:  movl   $0x0,-0x10(%ebp)
08890ac5 +0x01ff:  jmp    08890adc <+0x216>
08890ac7 +0x0201:  mov    -0x10(%ebp),%edx
08890aca +0x0204:  mov    0x8(%ebp),%eax
08890acd +0x0207:  add    $0x1c,%edx
08890ad0 +0x020a:  movl   $0x0,0xf(%eax,%edx,4)
08890ad8 +0x0212:  addl   $0x1,-0x10(%ebp)
08890adc +0x0216:  cmpl   $0x3,-0x10(%ebp)
08890ae0 +0x021a:  setle  %al
08890ae3 +0x021d:  test   %al,%al
08890ae5 +0x021f:  jne    08890ac7 <+0x201>
08890ae7 +0x0221:  mov    0x8(%ebp),%eax
08890aea +0x0224:  mov    $0x3f800000,%edx
08890aef +0x0229:  mov    %edx,0x8f(%eax)
08890af5 +0x022f:  mov    0x8(%ebp),%eax
08890af8 +0x0232:  movl   $0x0,0x93(%eax)
08890b02 +0x023c:  mov    0x8(%ebp),%eax
08890b05 +0x023f:  movl   $0x1,0x97(%eax)
08890b0f +0x0249:  mov    0x8(%ebp),%eax
08890b12 +0x024c:  mov    $0x0,%edx
08890b17 +0x0251:  mov    %edx,0x9b(%eax)
08890b1d +0x0257:  mov    0x8(%ebp),%eax
08890b20 +0x025a:  movl   $0x0,0x9f(%eax)
08890b2a +0x0264:  mov    0x8(%ebp),%eax
08890b2d +0x0267:  movl   $0x1,0xa3(%eax)
08890b37 +0x0271:  mov    0x8(%ebp),%eax
08890b3a +0x0274:  mov    $0x0,%edx
08890b3f +0x0279:  mov    %edx,0xa7(%eax)
08890b45 +0x027f:  mov    0x8(%ebp),%eax
08890b48 +0x0282:  mov    $0x0,%edx
08890b4d +0x0287:  mov    %edx,0xab(%eax)
08890b53 +0x028d:  mov    0x8(%ebp),%eax
08890b56 +0x0290:  mov    $0x0,%edx
08890b5b +0x0295:  mov    %edx,0xaf(%eax)
08890b61 +0x029b:  mov    0x8(%ebp),%eax
08890b64 +0x029e:  mov    $0x3f800000,%edx
08890b69 +0x02a3:  mov    %edx,0xb3(%eax)
08890b6f +0x02a9:  mov    0x8(%ebp),%eax
08890b72 +0x02ac:  movl   $0x0,0xb7(%eax)
08890b7c +0x02b6:  mov    0x8(%ebp),%eax
08890b7f +0x02b9:  movl   $0x0,0xbb(%eax)
08890b89 +0x02c3:  mov    0x8(%ebp),%eax
08890b8c +0x02c6:  movl   $0x0,0xc7(%eax)
08890b96 +0x02d0:  mov    0x8(%ebp),%eax
08890b99 +0x02d3:  movl   $0x0,0xcb(%eax)
08890ba3 +0x02dd:  mov    0x8(%ebp),%eax
08890ba6 +0x02e0:  mov    $0x0,%edx
08890bab +0x02e5:  mov    %edx,0xcf(%eax)
08890bb1 +0x02eb:  mov    0x8(%ebp),%eax
08890bb4 +0x02ee:  movb   $0x0,0xd3(%eax)
08890bbb +0x02f5:  mov    0x8(%ebp),%eax
08890bbe +0x02f8:  movb   $0x0,0xd4(%eax)
08890bc5 +0x02ff:  mov    0x8(%ebp),%eax
08890bc8 +0x0302:  movb   $0x0,0xd5(%eax)
08890bcf +0x0309:  movl   $0x0,-0xc(%ebp)
08890bd6 +0x0310:  jmp    08890c00 <+0x33a>
08890bd8 +0x0312:  mov    -0xc(%ebp),%edx
08890bdb +0x0315:  mov    0x8(%ebp),%eax
08890bde +0x0318:  lea    0x34(%edx),%ecx
08890be1 +0x031b:  mov    $0x3f800000,%edx
08890be6 +0x0320:  mov    %edx,0x6(%eax,%ecx,4)
08890bea +0x0324:  mov    -0xc(%ebp),%edx
08890bed +0x0327:  mov    0x8(%ebp),%eax
08890bf0 +0x032a:  lea    0x4e(%edx),%ecx
08890bf3 +0x032d:  mov    $0x3f800000,%edx
08890bf8 +0x0332:  mov    %edx,0x6(%eax,%ecx,4)
08890bfc +0x0336:  addl   $0x1,-0xc(%ebp)
08890c00 +0x033a:  cmpl   $0x19,-0xc(%ebp)
08890c04 +0x033e:  setle  %al
08890c07 +0x0341:  test   %al,%al
08890c09 +0x0343:  jne    08890bd8 <+0x312>
08890c0b +0x0345:  mov    0x8(%ebp),%eax
08890c0e +0x0348:  mov    $0x3f800000,%edx
08890c13 +0x034d:  mov    %edx,0x1a6(%eax)
08890c19 +0x0353:  mov    0x8(%ebp),%eax
08890c1c +0x0356:  fldz
08890c1e +0x0358:  fstpl  0x1aa(%eax)
08890c24 +0x035e:  mov    0x8(%ebp),%eax
08890c27 +0x0361:  movb   $0x0,0x1b2(%eax)
08890c2e +0x0368:  mov    0x8(%ebp),%eax
08890c31 +0x036b:  movb   $0x1,0x1b3(%eax)
08890c38 +0x0372:  mov    0x8(%ebp),%eax
08890c3b +0x0375:  movb   $0x1,0x1b4(%eax)
08890c42 +0x037c:  mov    0x8(%ebp),%eax
08890c45 +0x037f:  movb   $0x0,0x1b5(%eax)
08890c4c +0x0386:  mov    0x8(%ebp),%eax
08890c4f +0x0389:  movb   $0x0,0x1b6(%eax)
08890c56 +0x0390:  mov    0x8(%ebp),%eax
08890c59 +0x0393:  movb   $0x0,0x1b7(%eax)
08890c60 +0x039a:  mov    0x8(%ebp),%eax
08890c63 +0x039d:  movb   $0x0,0x1b8(%eax)
08890c6a +0x03a4:  mov    0x8(%ebp),%eax
08890c6d +0x03a7:  movb   $0x0,0x1b9(%eax)
08890c74 +0x03ae:  mov    0x8(%ebp),%eax
08890c77 +0x03b1:  movl   $0x0,0x1ba(%eax)
08890c81 +0x03bb:  mov    0x8(%ebp),%eax
08890c84 +0x03be:  movl   $0x0,0x1be(%eax)
08890c8e +0x03c8:  mov    0x8(%ebp),%eax
08890c91 +0x03cb:  movl   $0x0,0x1c2(%eax)
08890c9b +0x03d5:  mov    0x8(%ebp),%eax
08890c9e +0x03d8:  movl   $0x0,0x1c6(%eax)
08890ca8 +0x03e2:  mov    0x8(%ebp),%eax
08890cab +0x03e5:  movl   $0x0,0x1ca(%eax)
08890cb5 +0x03ef:  mov    0x8(%ebp),%eax
08890cb8 +0x03f2:  movb   $0x0,0x1ce(%eax)
08890cbf +0x03f9:  mov    0x8(%ebp),%eax
08890cc2 +0x03fc:  movb   $0x0,0x1cf(%eax)
08890cc9 +0x0403:  mov    0x8(%ebp),%eax
08890ccc +0x0406:  movl   $0x0,0x1d0(%eax)
08890cd6 +0x0410:  mov    0x8(%ebp),%eax
08890cd9 +0x0413:  movb   $0x0,0x1d4(%eax)
08890ce0 +0x041a:  mov    0x8(%ebp),%eax
08890ce3 +0x041d:  movl   $0x1,0x1d5(%eax)
08890ced +0x0427:  mov    0x8(%ebp),%eax
08890cf0 +0x042a:  movl   $0x0,0x1d9(%eax)
08890cfa +0x0434:  mov    0x8(%ebp),%eax
08890cfd +0x0437:  movb   $0x0,0x1dd(%eax)
08890d04 +0x043e:  mov    0x8(%ebp),%eax
08890d07 +0x0441:  movb   $0x0,0x1de(%eax)
08890d0e +0x0448:  mov    0x8(%ebp),%eax
08890d11 +0x044b:  movb   $0x0,0x1df(%eax)
08890d18 +0x0452:  mov    0x8(%ebp),%eax
08890d1b +0x0455:  movb   $0x0,0x1e0(%eax)
08890d22 +0x045c:  mov    0x8(%ebp),%eax
08890d25 +0x045f:  movl   $0x0,0x1e1(%eax)
08890d2f +0x0469:  mov    0x8(%ebp),%eax
08890d32 +0x046c:  movb   $0x0,0x1e5(%eax)
08890d39 +0x0473:  mov    0x8(%ebp),%eax
08890d3c +0x0476:  movl   $0x0,0x1e6(%eax)
08890d46 +0x0480:  mov    0x8(%ebp),%eax
08890d49 +0x0483:  movb   $0x0,0x1ea(%eax)
08890d50 +0x048a:  mov    0x8(%ebp),%eax
08890d53 +0x048d:  movl   $0x0,0x1eb(%eax)
08890d5d +0x0497:  mov    0x8(%ebp),%eax
08890d60 +0x049a:  movb   $0x0,0x1ef(%eax)
08890d67 +0x04a1:  mov    0x8(%ebp),%eax
08890d6a +0x04a4:  mov    $0x3f800000,%edx
08890d6f +0x04a9:  mov    %edx,0x1f0(%eax)
08890d75 +0x04af:  mov    0x8(%ebp),%eax
08890d78 +0x04b2:  mov    $0x0,%edx
08890d7d +0x04b7:  mov    %edx,0x1f4(%eax)
08890d83 +0x04bd:  mov    0x8(%ebp),%eax
08890d86 +0x04c0:  mov    $0x0,%edx
08890d8b +0x04c5:  mov    %edx,0x1f8(%eax)
08890d91 +0x04cb:  mov    0x8(%ebp),%eax
08890d94 +0x04ce:  mov    $0x0,%edx
08890d99 +0x04d3:  mov    %edx,0xbf(%eax)
08890d9f +0x04d9:  mov    0x8(%ebp),%eax
08890da2 +0x04dc:  mov    $0x0,%edx
08890da7 +0x04e1:  mov    %edx,0xc3(%eax)
08890dad +0x04e7:  leave
08890dae +0x04e8:  ret
08890daf +0x04e9:  nop
08890db0 +0x04ea:  push   %ebp
08890db1 +0x04eb:  mov    %esp,%ebp
08890db3 +0x04ed:  sub    $0x18,%esp
08890db6 +0x04f0:  mov    0x8(%ebp),%eax
08890db9 +0x04f3:  mov    %eax,(%esp)
08890dbc +0x04f6:  call   08890ea8 <+0x5e2>
08890dc1 +0x04fb:  leave
08890dc2 +0x04fc:  ret
08890dc3 +0x04fd:  nop
08890dc4 +0x04fe:  push   %ebp
08890dc5 +0x04ff:  mov    %esp,%ebp
08890dc7 +0x0501:  sub    $0x18,%esp
08890dca +0x0504:  mov    0x8(%ebp),%eax
08890dcd +0x0507:  mov    %eax,(%esp)
08890dd0 +0x050a:  call   08890ebc <+0x5f6>
08890dd5 +0x050f:  leave
08890dd6 +0x0510:  ret
08890dd7 +0x0511:  nop
08890dd8 +0x0512:  push   %ebp
08890dd9 +0x0513:  mov    %esp,%ebp
08890ddb +0x0515:  sub    $0x18,%esp
08890dde +0x0518:  mov    0x8(%ebp),%eax
08890de1 +0x051b:  mov    %eax,(%esp)
08890de4 +0x051e:  call   08890ed0 <+0x60a>
08890de9 +0x0523:  leave
08890dea +0x0524:  ret
08890deb +0x0525:  nop
08890dec +0x0526:  push   %ebp
08890ded +0x0527:  mov    %esp,%ebp
08890def +0x0529:  sub    $0x18,%esp
08890df2 +0x052c:  mov    0x8(%ebp),%eax
08890df5 +0x052f:  mov    (%eax),%eax
08890df7 +0x0531:  mov    %eax,0x4(%esp)
08890dfb +0x0535:  mov    0x8(%ebp),%eax
08890dfe +0x0538:  mov    %eax,(%esp)
08890e01 +0x053b:  call   08890f46 <+0x680>
08890e06 +0x0540:  leave
08890e07 +0x0541:  ret
08890e08 +0x0542:  push   %ebp
08890e09 +0x0543:  mov    %esp,%ebp
08890e0b +0x0545:  sub    $0x18,%esp
08890e0e +0x0548:  mov    0x8(%ebp),%eax
08890e11 +0x054b:  mov    0xc(%ebp),%edx
08890e14 +0x054e:  mov    %edx,0x4(%esp)
08890e18 +0x0552:  mov    %eax,(%esp)
08890e1b +0x0555:  call   08890f7c <+0x6b6>
08890e20 +0x055a:  leave
08890e21 +0x055b:  ret
08890e22 +0x055c:  push   %ebp
08890e23 +0x055d:  mov    %esp,%ebp
08890e25 +0x055f:  push   %ebx
08890e26 +0x0560:  sub    $0x24,%esp
08890e29 +0x0563:  mov    0x8(%ebp),%ebx
08890e2c +0x0566:  mov    0xc(%ebp),%edx
08890e2f +0x0569:  lea    -0x10(%ebp),%eax
08890e32 +0x056c:  mov    0x10(%ebp),%ecx
08890e35 +0x056f:  mov    %ecx,0x8(%esp)
08890e39 +0x0573:  mov    %edx,0x4(%esp)
08890e3d +0x0577:  mov    %eax,(%esp)
08890e40 +0x057a:  call   08890fdc <+0x716>
08890e45 +0x057f:  sub    $0x4,%esp
08890e48 +0x0582:  lea    -0x10(%ebp),%eax
08890e4b +0x0585:  add    $0x4,%eax
08890e4e +0x0588:  mov    %eax,0x8(%esp)
08890e52 +0x058c:  lea    -0x10(%ebp),%eax
08890e55 +0x058f:  mov    %eax,0x4(%esp)
08890e59 +0x0593:  mov    %ebx,(%esp)
08890e5c +0x0596:  call   088911ac <+0x8e6>
08890e61 +0x059b:  mov    %ebx,%eax
08890e63 +0x059d:  mov    -0x4(%ebp),%ebx
08890e66 +0x05a0:  leave
08890e67 +0x05a1:  ret    $0x4
08890e6a +0x05a4:  push   %ebp
08890e6b +0x05a5:  mov    %esp,%ebp
08890e6d +0x05a7:  push   %ebx
08890e6e +0x05a8:  sub    $0x14,%esp
08890e71 +0x05ab:  mov    0x8(%ebp),%ebx
08890e74 +0x05ae:  mov    0xc(%ebp),%eax
08890e77 +0x05b1:  movl   $0x4,0x8(%esp)
08890e7f +0x05b9:  mov    %eax,0x4(%esp)
08890e83 +0x05bd:  mov    %ebx,(%esp)
08890e86 +0x05c0:  call   0807d880 <_init+0x178>
08890e8b +0x05c5:  mov    0xc(%ebp),%eax
08890e8e +0x05c8:  mov    (%eax),%eax
08890e90 +0x05ca:  mov    %eax,(%esp)
08890e93 +0x05cd:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08890e98 +0x05d2:  mov    0xc(%ebp),%edx
08890e9b +0x05d5:  mov    %eax,(%edx)
08890e9d +0x05d7:  mov    %ebx,%eax
08890e9f +0x05d9:  add    $0x14,%esp
08890ea2 +0x05dc:  pop    %ebx
08890ea3 +0x05dd:  pop    %ebp
08890ea4 +0x05de:  ret    $0x4
08890ea7 +0x05e1:  nop
08890ea8 +0x05e2:  push   %ebp
08890ea9 +0x05e3:  mov    %esp,%ebp
08890eab +0x05e5:  sub    $0x18,%esp
08890eae +0x05e8:  mov    0x8(%ebp),%eax
08890eb1 +0x05eb:  mov    %eax,(%esp)
08890eb4 +0x05ee:  call   088911e2 <+0x91c>
08890eb9 +0x05f3:  leave
08890eba +0x05f4:  ret
08890ebb +0x05f5:  nop
08890ebc +0x05f6:  push   %ebp
08890ebd +0x05f7:  mov    %esp,%ebp
08890ebf +0x05f9:  sub    $0x18,%esp
08890ec2 +0x05fc:  mov    0x8(%ebp),%eax
08890ec5 +0x05ff:  mov    %eax,(%esp)
08890ec8 +0x0602:  call   08891232 <+0x96c>
08890ecd +0x0607:  leave
08890ece +0x0608:  ret
08890ecf +0x0609:  nop
08890ed0 +0x060a:  push   %ebp
08890ed1 +0x060b:  mov    %esp,%ebp
08890ed3 +0x060d:  push   %ebx
08890ed4 +0x060e:  sub    $0x14,%esp
08890ed7 +0x0611:  mov    0x8(%ebp),%eax
08890eda +0x0614:  mov    %eax,(%esp)
08890edd +0x0617:  call   083440d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x61a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x61a5
08890ee2 +0x061c:  mov    %eax,0x4(%esp)
08890ee6 +0x0620:  mov    0x8(%ebp),%eax
08890ee9 +0x0623:  mov    %eax,(%esp)
08890eec +0x0626:  call   08344082 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x614f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x614f
08890ef1 +0x062b:  mov    0x8(%ebp),%eax
08890ef4 +0x062e:  mov    %eax,(%esp)
08890ef7 +0x0631:  call   0889126e <+0x9a8>
08890efc +0x0636:  mov    %eax,%ebx
08890efe +0x0638:  mov    0x8(%ebp),%eax
08890f01 +0x063b:  mov    %eax,(%esp)
08890f04 +0x063e:  call   08891262 <+0x99c>
08890f09 +0x0643:  mov    %eax,(%ebx)
08890f0b +0x0645:  mov    0x8(%ebp),%eax
08890f0e +0x0648:  mov    %eax,(%esp)
08890f11 +0x064b:  call   0889127a <+0x9b4>
08890f16 +0x0650:  movl   $0x0,(%eax)
08890f1c +0x0656:  mov    0x8(%ebp),%eax
08890f1f +0x0659:  mov    %eax,(%esp)
08890f22 +0x065c:  call   08891286 <+0x9c0>
08890f27 +0x0661:  mov    %eax,%ebx
08890f29 +0x0663:  mov    0x8(%ebp),%eax
08890f2c +0x0666:  mov    %eax,(%esp)
08890f2f +0x0669:  call   08891262 <+0x99c>
08890f34 +0x066e:  mov    %eax,(%ebx)
08890f36 +0x0670:  mov    0x8(%ebp),%eax
08890f39 +0x0673:  movl   $0x0,0x14(%eax)
08890f40 +0x067a:  add    $0x14,%esp
08890f43 +0x067d:  pop    %ebx
08890f44 +0x067e:  pop    %ebp
08890f45 +0x067f:  ret
08890f46 +0x0680:  push   %ebp
08890f47 +0x0681:  mov    %esp,%ebp
08890f49 +0x0683:  sub    $0x18,%esp
08890f4c +0x0686:  mov    0x8(%ebp),%eax
08890f4f +0x0689:  mov    %eax,(%esp)
08890f52 +0x068c:  call   08344166 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x6233>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x6233
08890f57 +0x0691:  mov    0x8(%ebp),%edx
08890f5a +0x0694:  mov    0x4(%edx),%edx
08890f5d +0x0697:  mov    %eax,0x8(%esp)
08890f61 +0x069b:  mov    %edx,0x4(%esp)
08890f65 +0x069f:  mov    0xc(%ebp),%eax
08890f68 +0x06a2:  mov    %eax,(%esp)
08890f6b +0x06a5:  call   0834416e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x623b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x623b
08890f70 +0x06aa:  mov    0x8(%ebp),%eax
08890f73 +0x06ad:  mov    0xc(%ebp),%edx
08890f76 +0x06b0:  mov    %edx,0x4(%eax)
08890f79 +0x06b3:  leave
08890f7a +0x06b4:  ret
08890f7b +0x06b5:  nop
08890f7c +0x06b6:  push   %ebp
08890f7d +0x06b7:  mov    %esp,%ebp
08890f7f +0x06b9:  sub    $0x28,%esp
08890f82 +0x06bc:  lea    -0x14(%ebp),%eax
08890f85 +0x06bf:  mov    0xc(%ebp),%edx
08890f88 +0x06c2:  mov    %edx,0x8(%esp)
08890f8c +0x06c6:  mov    0x8(%ebp),%edx
08890f8f +0x06c9:  mov    %edx,0x4(%esp)
08890f93 +0x06cd:  mov    %eax,(%esp)
08890f96 +0x06d0:  call   08891292 <+0x9cc>
08890f9b +0x06d5:  sub    $0x4,%esp
08890f9e +0x06d8:  mov    0x8(%ebp),%eax
08890fa1 +0x06db:  mov    %eax,(%esp)
08890fa4 +0x06de:  call   083441b2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x627f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x627f
08890fa9 +0x06e3:  mov    %eax,-0xc(%ebp)
08890fac +0x06e6:  mov    -0x10(%ebp),%eax
08890faf +0x06e9:  mov    %eax,0x8(%esp)
08890fb3 +0x06ed:  mov    -0x14(%ebp),%eax
08890fb6 +0x06f0:  mov    %eax,0x4(%esp)
08890fba +0x06f4:  mov    0x8(%ebp),%eax
08890fbd +0x06f7:  mov    %eax,(%esp)
08890fc0 +0x06fa:  call   08891420 <+0xb5a>
08890fc5 +0x06ff:  mov    0x8(%ebp),%eax
08890fc8 +0x0702:  mov    %eax,(%esp)
08890fcb +0x0705:  call   083441b2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x627f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x627f
08890fd0 +0x070a:  mov    -0xc(%ebp),%edx
08890fd3 +0x070d:  mov    %edx,%ecx
08890fd5 +0x070f:  sub    %eax,%ecx
08890fd7 +0x0711:  mov    %ecx,%eax
08890fd9 +0x0713:  leave
08890fda +0x0714:  ret
08890fdb +0x0715:  nop
08890fdc +0x0716:  push   %ebp
08890fdd +0x0717:  mov    %esp,%ebp
08890fdf +0x0719:  push   %esi
08890fe0 +0x071a:  push   %ebx
08890fe1 +0x071b:  sub    $0x50,%esp
08890fe4 +0x071e:  mov    0x8(%ebp),%ebx
08890fe7 +0x0721:  mov    0xc(%ebp),%eax
08890fea +0x0724:  mov    %eax,(%esp)
08890fed +0x0727:  call   083440d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x61a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x61a5
08890ff2 +0x072c:  mov    %eax,-0x14(%ebp)
08890ff5 +0x072f:  mov    0xc(%ebp),%eax
08890ff8 +0x0732:  mov    %eax,(%esp)
08890ffb +0x0735:  call   08891262 <+0x99c>
08891000 +0x073a:  mov    %eax,-0x10(%ebp)
08891003 +0x073d:  movb   $0x1,-0x9(%ebp)
08891007 +0x0741:  jmp    08891065 <+0x79f>
08891009 +0x0743:  mov    -0x14(%ebp),%eax
0889100c +0x0746:  mov    %eax,-0x10(%ebp)
0889100f +0x0749:  mov    -0x14(%ebp),%eax
08891012 +0x074c:  mov    %eax,(%esp)
08891015 +0x074f:  call   088914e8 <+0xc22>
0889101a +0x0754:  mov    %eax,%esi
0889101c +0x0756:  mov    0x10(%ebp),%eax
0889101f +0x0759:  mov    %eax,0x4(%esp)
08891023 +0x075d:  lea    -0x2d(%ebp),%eax
08891026 +0x0760:  mov    %eax,(%esp)
08891029 +0x0763:  call   088914e0 <+0xc1a>
0889102e +0x0768:  mov    0xc(%ebp),%edx
08891031 +0x076b:  mov    %esi,0x8(%esp)
08891035 +0x076f:  mov    %eax,0x4(%esp)
08891039 +0x0773:  mov    %edx,(%esp)
0889103c +0x0776:  call   0889150a <+0xc44>
08891041 +0x077b:  mov    %al,-0x9(%ebp)
08891044 +0x077e:  cmpb   $0x0,-0x9(%ebp)
08891048 +0x0782:  je     08891057 <+0x791>
0889104a +0x0784:  mov    -0x14(%ebp),%eax
0889104d +0x0787:  mov    %eax,(%esp)
08891050 +0x078a:  call   083454e8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75b5
08891055 +0x078f:  jmp    08891062 <+0x79c>
08891057 +0x0791:  mov    -0x14(%ebp),%eax
0889105a +0x0794:  mov    %eax,(%esp)
0889105d +0x0797:  call   083454dd <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75aa>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75aa
08891062 +0x079c:  mov    %eax,-0x14(%ebp)
08891065 +0x079f:  cmpl   $0x0,-0x14(%ebp)
08891069 +0x07a3:  setne  %al
0889106c +0x07a6:  test   %al,%al
0889106e +0x07a8:  jne    08891009 <+0x743>
08891070 +0x07aa:  mov    -0x10(%ebp),%eax
08891073 +0x07ad:  mov    %eax,0x4(%esp)
08891077 +0x07b1:  lea    -0x34(%ebp),%eax
0889107a +0x07b4:  mov    %eax,(%esp)
0889107d +0x07b7:  call   08891520 <+0xc5a>
08891082 +0x07bc:  cmpb   $0x0,-0x9(%ebp)
08891086 +0x07c0:  je     08891107 <+0x841>
08891088 +0x07c2:  lea    -0x2c(%ebp),%eax
0889108b +0x07c5:  mov    0xc(%ebp),%edx
0889108e +0x07c8:  mov    %edx,0x4(%esp)
08891092 +0x07cc:  mov    %eax,(%esp)
08891095 +0x07cf:  call   0889152e <+0xc68>
0889109a +0x07d4:  sub    $0x4,%esp
0889109d +0x07d7:  lea    -0x2c(%ebp),%eax
088910a0 +0x07da:  mov    %eax,0x4(%esp)
088910a4 +0x07de:  lea    -0x34(%ebp),%eax
088910a7 +0x07e1:  mov    %eax,(%esp)
088910aa +0x07e4:  call   08891554 <+0xc8e>
088910af +0x07e9:  test   %al,%al
088910b1 +0x07eb:  je     088910fc <+0x836>
088910b3 +0x07ed:  movb   $0x1,-0x25(%ebp)
088910b7 +0x07f1:  mov    -0x10(%ebp),%ecx
088910ba +0x07f4:  mov    -0x14(%ebp),%edx
088910bd +0x07f7:  lea    -0x24(%ebp),%eax
088910c0 +0x07fa:  mov    0x10(%ebp),%esi
088910c3 +0x07fd:  mov    %esi,0x10(%esp)
088910c7 +0x0801:  mov    %ecx,0xc(%esp)
088910cb +0x0805:  mov    %edx,0x8(%esp)
088910cf +0x0809:  mov    0xc(%ebp),%edx
088910d2 +0x080c:  mov    %edx,0x4(%esp)
088910d6 +0x0810:  mov    %eax,(%esp)
088910d9 +0x0813:  call   08891568 <+0xca2>
088910de +0x0818:  sub    $0x4,%esp
088910e1 +0x081b:  lea    -0x25(%ebp),%eax
088910e4 +0x081e:  mov    %eax,0x8(%esp)
088910e8 +0x0822:  lea    -0x24(%ebp),%eax
088910eb +0x0825:  mov    %eax,0x4(%esp)
088910ef +0x0829:  mov    %ebx,(%esp)
088910f2 +0x082c:  call   08891630 <+0xd6a>
088910f7 +0x0831:  jmp    0889119d <+0x8d7>
088910fc +0x0836:  lea    -0x34(%ebp),%eax
088910ff +0x0839:  mov    %eax,(%esp)
08891102 +0x083c:  call   0889165e <+0xd98>
08891107 +0x0841:  mov    0x10(%ebp),%eax
0889110a +0x0844:  mov    %eax,0x4(%esp)
0889110e +0x0848:  lea    -0x1e(%ebp),%eax
08891111 +0x084b:  mov    %eax,(%esp)
08891114 +0x084e:  call   088914e0 <+0xc1a>
08891119 +0x0853:  mov    %eax,%esi
0889111b +0x0855:  mov    -0x34(%ebp),%eax
0889111e +0x0858:  mov    %eax,(%esp)
08891121 +0x085b:  call   0889167b <+0xdb5>
08891126 +0x0860:  mov    0xc(%ebp),%edx
08891129 +0x0863:  mov    %esi,0x8(%esp)
0889112d +0x0867:  mov    %eax,0x4(%esp)
08891131 +0x086b:  mov    %edx,(%esp)
08891134 +0x086e:  call   0889150a <+0xc44>
08891139 +0x0873:  test   %al,%al
0889113b +0x0875:  je     08891183 <+0x8bd>
0889113d +0x0877:  movb   $0x1,-0x1d(%ebp)
08891141 +0x087b:  mov    -0x10(%ebp),%ecx
08891144 +0x087e:  mov    -0x14(%ebp),%edx
08891147 +0x0881:  lea    -0x1c(%ebp),%eax
0889114a +0x0884:  mov    0x10(%ebp),%esi
0889114d +0x0887:  mov    %esi,0x10(%esp)
08891151 +0x088b:  mov    %ecx,0xc(%esp)
08891155 +0x088f:  mov    %edx,0x8(%esp)
08891159 +0x0893:  mov    0xc(%ebp),%edx
0889115c +0x0896:  mov    %edx,0x4(%esp)
08891160 +0x089a:  mov    %eax,(%esp)
08891163 +0x089d:  call   08891568 <+0xca2>
08891168 +0x08a2:  sub    $0x4,%esp
0889116b +0x08a5:  lea    -0x1d(%ebp),%eax
0889116e +0x08a8:  mov    %eax,0x8(%esp)
08891172 +0x08ac:  lea    -0x1c(%ebp),%eax
08891175 +0x08af:  mov    %eax,0x4(%esp)
08891179 +0x08b3:  mov    %ebx,(%esp)
0889117c +0x08b6:  call   08891630 <+0xd6a>
08891181 +0x08bb:  jmp    0889119d <+0x8d7>
08891183 +0x08bd:  movb   $0x0,-0x15(%ebp)
08891187 +0x08c1:  lea    -0x15(%ebp),%eax
0889118a +0x08c4:  mov    %eax,0x8(%esp)
0889118e +0x08c8:  lea    -0x34(%ebp),%eax
08891191 +0x08cb:  mov    %eax,0x4(%esp)
08891195 +0x08cf:  mov    %ebx,(%esp)
08891198 +0x08d2:  call   0889169e <+0xdd8>
0889119d +0x08d7:  mov    %ebx,%eax
0889119f +0x08d9:  lea    -0x8(%ebp),%esp
088911a2 +0x08dc:  add    $0x0,%esp
088911a5 +0x08df:  pop    %ebx
088911a6 +0x08e0:  pop    %esi
088911a7 +0x08e1:  pop    %ebp
088911a8 +0x08e2:  ret    $0x4
088911ab +0x08e5:  nop
088911ac +0x08e6:  push   %ebp
088911ad +0x08e7:  mov    %esp,%ebp
088911af +0x08e9:  sub    $0x18,%esp
088911b2 +0x08ec:  mov    0xc(%ebp),%eax
088911b5 +0x08ef:  mov    %eax,(%esp)
088911b8 +0x08f2:  call   088916cc <+0xe06>
088911bd +0x08f7:  mov    0x8(%ebp),%edx
088911c0 +0x08fa:  mov    %eax,0x4(%esp)
088911c4 +0x08fe:  mov    %edx,(%esp)
088911c7 +0x0901:  call   088916d4 <+0xe0e>
088911cc +0x0906:  mov    0x10(%ebp),%eax
088911cf +0x0909:  mov    %eax,(%esp)
088911d2 +0x090c:  call   080db505 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x16a2>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x16a2
088911d7 +0x0911:  movzbl (%eax),%edx
088911da +0x0914:  mov    0x8(%ebp),%eax
088911dd +0x0917:  mov    %dl,0x4(%eax)
088911e0 +0x091a:  leave
088911e1 +0x091b:  ret
088911e2 +0x091c:  push   %ebp
088911e3 +0x091d:  mov    %esp,%ebp
088911e5 +0x091f:  sub    $0x18,%esp
088911e8 +0x0922:  mov    0x8(%ebp),%eax
088911eb +0x0925:  mov    %eax,(%esp)
088911ee +0x0928:  call   088916e4 <+0xe1e>
088911f3 +0x092d:  mov    0x8(%ebp),%eax
088911f6 +0x0930:  movl   $0x0,0x4(%eax)
088911fd +0x0937:  mov    0x8(%ebp),%eax
08891200 +0x093a:  movl   $0x0,0x8(%eax)
08891207 +0x0941:  mov    0x8(%ebp),%eax
0889120a +0x0944:  movl   $0x0,0xc(%eax)
08891211 +0x094b:  mov    0x8(%ebp),%eax
08891214 +0x094e:  movl   $0x0,0x10(%eax)
0889121b +0x0955:  mov    0x8(%ebp),%eax
0889121e +0x0958:  movl   $0x0,0x14(%eax)
08891225 +0x095f:  mov    0x8(%ebp),%eax
08891228 +0x0962:  mov    %eax,(%esp)
0889122b +0x0965:  call   088916f8 <+0xe32>
08891230 +0x096a:  leave
08891231 +0x096b:  ret
08891232 +0x096c:  push   %ebp
08891233 +0x096d:  mov    %esp,%ebp
08891235 +0x096f:  sub    $0x18,%esp
08891238 +0x0972:  mov    0x8(%ebp),%eax
0889123b +0x0975:  mov    %eax,(%esp)
0889123e +0x0978:  call   0889172a <+0xe64>
08891243 +0x097d:  mov    0x8(%ebp),%eax
08891246 +0x0980:  movl   $0x0,(%eax)
0889124c +0x0986:  mov    0x8(%ebp),%eax
0889124f +0x0989:  movl   $0x0,0x4(%eax)
08891256 +0x0990:  mov    0x8(%ebp),%eax
08891259 +0x0993:  movl   $0x0,0x8(%eax)
08891260 +0x099a:  leave
08891261 +0x099b:  ret
08891262 +0x099c:  push   %ebp
08891263 +0x099d:  mov    %esp,%ebp
08891265 +0x099f:  mov    0x8(%ebp),%eax
08891268 +0x09a2:  add    $0x4,%eax
0889126b +0x09a5:  pop    %ebp
0889126c +0x09a6:  ret
0889126d +0x09a7:  nop
0889126e +0x09a8:  push   %ebp
0889126f +0x09a9:  mov    %esp,%ebp
08891271 +0x09ab:  mov    0x8(%ebp),%eax
08891274 +0x09ae:  add    $0xc,%eax
08891277 +0x09b1:  pop    %ebp
08891278 +0x09b2:  ret
08891279 +0x09b3:  nop
0889127a +0x09b4:  push   %ebp
0889127b +0x09b5:  mov    %esp,%ebp
0889127d +0x09b7:  mov    0x8(%ebp),%eax
08891280 +0x09ba:  add    $0x8,%eax
08891283 +0x09bd:  pop    %ebp
08891284 +0x09be:  ret
08891285 +0x09bf:  nop
08891286 +0x09c0:  push   %ebp
08891287 +0x09c1:  mov    %esp,%ebp
08891289 +0x09c3:  mov    0x8(%ebp),%eax
0889128c +0x09c6:  add    $0x10,%eax
0889128f +0x09c9:  pop    %ebp
08891290 +0x09ca:  ret
08891291 +0x09cb:  nop
08891292 +0x09cc:  push   %ebp
08891293 +0x09cd:  mov    %esp,%ebp
08891295 +0x09cf:  push   %ebx
08891296 +0x09d0:  sub    $0x44,%esp
08891299 +0x09d3:  mov    0x8(%ebp),%ebx
0889129c +0x09d6:  mov    0xc(%ebp),%eax
0889129f +0x09d9:  mov    %eax,(%esp)
088912a2 +0x09dc:  call   083440d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x61a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x61a5
088912a7 +0x09e1:  mov    %eax,-0x18(%ebp)
088912aa +0x09e4:  mov    0xc(%ebp),%eax
088912ad +0x09e7:  mov    %eax,(%esp)
088912b0 +0x09ea:  call   08891262 <+0x99c>
088912b5 +0x09ef:  mov    %eax,-0x14(%ebp)
088912b8 +0x09f2:  jmp    088913cd <+0xb07>
088912bd +0x09f7:  mov    -0x18(%ebp),%eax
088912c0 +0x09fa:  mov    %eax,(%esp)
088912c3 +0x09fd:  call   088914e8 <+0xc22>
088912c8 +0x0a02:  mov    0xc(%ebp),%edx
088912cb +0x0a05:  mov    0x10(%ebp),%ecx
088912ce +0x0a08:  mov    %ecx,0x8(%esp)
088912d2 +0x0a0c:  mov    %eax,0x4(%esp)
088912d6 +0x0a10:  mov    %edx,(%esp)
088912d9 +0x0a13:  call   0889150a <+0xc44>
088912de +0x0a18:  test   %al,%al
088912e0 +0x0a1a:  je     088912f5 <+0xa2f>
088912e2 +0x0a1c:  mov    -0x18(%ebp),%eax
088912e5 +0x0a1f:  mov    %eax,(%esp)
088912e8 +0x0a22:  call   083454dd <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75aa>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75aa
088912ed +0x0a27:  mov    %eax,-0x18(%ebp)
088912f0 +0x0a2a:  jmp    088913cd <+0xb07>
088912f5 +0x0a2f:  mov    -0x18(%ebp),%eax
088912f8 +0x0a32:  mov    %eax,(%esp)
088912fb +0x0a35:  call   088914e8 <+0xc22>
08891300 +0x0a3a:  mov    0xc(%ebp),%edx
08891303 +0x0a3d:  mov    %eax,0x8(%esp)
08891307 +0x0a41:  mov    0x10(%ebp),%eax
0889130a +0x0a44:  mov    %eax,0x4(%esp)
0889130e +0x0a48:  mov    %edx,(%esp)
08891311 +0x0a4b:  call   0889150a <+0xc44>
08891316 +0x0a50:  test   %al,%al
08891318 +0x0a52:  je     08891333 <+0xa6d>
0889131a +0x0a54:  mov    -0x18(%ebp),%eax
0889131d +0x0a57:  mov    %eax,-0x14(%ebp)
08891320 +0x0a5a:  mov    -0x18(%ebp),%eax
08891323 +0x0a5d:  mov    %eax,(%esp)
08891326 +0x0a60:  call   083454e8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75b5
0889132b +0x0a65:  mov    %eax,-0x18(%ebp)
0889132e +0x0a68:  jmp    088913cd <+0xb07>
08891333 +0x0a6d:  mov    -0x18(%ebp),%eax
08891336 +0x0a70:  mov    %eax,-0x10(%ebp)
08891339 +0x0a73:  mov    -0x14(%ebp),%eax
0889133c +0x0a76:  mov    %eax,-0xc(%ebp)
0889133f +0x0a79:  mov    -0x18(%ebp),%eax
08891342 +0x0a7c:  mov    %eax,-0x14(%ebp)
08891345 +0x0a7f:  mov    -0x18(%ebp),%eax
08891348 +0x0a82:  mov    %eax,(%esp)
0889134b +0x0a85:  call   083454e8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75b5
08891350 +0x0a8a:  mov    %eax,-0x18(%ebp)
08891353 +0x0a8d:  mov    -0x10(%ebp),%eax
08891356 +0x0a90:  mov    %eax,(%esp)
08891359 +0x0a93:  call   083454dd <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75aa>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75aa
0889135e +0x0a98:  mov    %eax,-0x10(%ebp)
08891361 +0x0a9b:  lea    -0x28(%ebp),%eax
08891364 +0x0a9e:  mov    0x10(%ebp),%edx
08891367 +0x0aa1:  mov    %edx,0x10(%esp)
0889136b +0x0aa5:  mov    -0xc(%ebp),%edx
0889136e +0x0aa8:  mov    %edx,0xc(%esp)
08891372 +0x0aac:  mov    -0x10(%ebp),%edx
08891375 +0x0aaf:  mov    %edx,0x8(%esp)
08891379 +0x0ab3:  mov    0xc(%ebp),%edx
0889137c +0x0ab6:  mov    %edx,0x4(%esp)
08891380 +0x0aba:  mov    %eax,(%esp)
08891383 +0x0abd:  call   088917ba <+0xef4>
08891388 +0x0ac2:  sub    $0x4,%esp
0889138b +0x0ac5:  lea    -0x24(%ebp),%eax
0889138e +0x0ac8:  mov    0x10(%ebp),%edx
08891391 +0x0acb:  mov    %edx,0x10(%esp)
08891395 +0x0acf:  mov    -0x14(%ebp),%edx
08891398 +0x0ad2:  mov    %edx,0xc(%esp)
0889139c +0x0ad6:  mov    -0x18(%ebp),%edx
0889139f +0x0ad9:  mov    %edx,0x8(%esp)
088913a3 +0x0add:  mov    0xc(%ebp),%edx
088913a6 +0x0ae0:  mov    %edx,0x4(%esp)
088913aa +0x0ae4:  mov    %eax,(%esp)
088913ad +0x0ae7:  call   0889173e <+0xe78>
088913b2 +0x0aec:  sub    $0x4,%esp
088913b5 +0x0aef:  lea    -0x28(%ebp),%eax
088913b8 +0x0af2:  mov    %eax,0x8(%esp)
088913bc +0x0af6:  lea    -0x24(%ebp),%eax
088913bf +0x0af9:  mov    %eax,0x4(%esp)
088913c3 +0x0afd:  mov    %ebx,(%esp)
088913c6 +0x0b00:  call   08891834 <+0xf6e>
088913cb +0x0b05:  jmp    08891416 <+0xb50>
088913cd +0x0b07:  cmpl   $0x0,-0x18(%ebp)
088913d1 +0x0b0b:  setne  %al
088913d4 +0x0b0e:  test   %al,%al
088913d6 +0x0b10:  jne    088912bd <+0x9f7>
088913dc +0x0b16:  mov    -0x14(%ebp),%eax
088913df +0x0b19:  mov    %eax,0x4(%esp)
088913e3 +0x0b1d:  lea    -0x20(%ebp),%eax
088913e6 +0x0b20:  mov    %eax,(%esp)
088913e9 +0x0b23:  call   08891520 <+0xc5a>
088913ee +0x0b28:  mov    -0x14(%ebp),%eax
088913f1 +0x0b2b:  mov    %eax,0x4(%esp)
088913f5 +0x0b2f:  lea    -0x1c(%ebp),%eax
088913f8 +0x0b32:  mov    %eax,(%esp)
088913fb +0x0b35:  call   08891520 <+0xc5a>
08891400 +0x0b3a:  lea    -0x20(%ebp),%eax
08891403 +0x0b3d:  mov    %eax,0x8(%esp)
08891407 +0x0b41:  lea    -0x1c(%ebp),%eax
0889140a +0x0b44:  mov    %eax,0x4(%esp)
0889140e +0x0b48:  mov    %ebx,(%esp)
08891411 +0x0b4b:  call   08891834 <+0xf6e>
08891416 +0x0b50:  mov    %ebx,%eax
08891418 +0x0b52:  mov    -0x4(%ebp),%ebx
0889141b +0x0b55:  leave
0889141c +0x0b56:  ret    $0x4
0889141f +0x0b59:  nop
08891420 +0x0b5a:  push   %ebp
08891421 +0x0b5b:  mov    %esp,%ebp
08891423 +0x0b5d:  sub    $0x28,%esp
08891426 +0x0b60:  lea    -0x14(%ebp),%eax
08891429 +0x0b63:  mov    0x8(%ebp),%edx
0889142c +0x0b66:  mov    %edx,0x4(%esp)
08891430 +0x0b6a:  mov    %eax,(%esp)
08891433 +0x0b6d:  call   0889152e <+0xc68>
08891438 +0x0b72:  sub    $0x4,%esp
0889143b +0x0b75:  lea    -0x14(%ebp),%eax
0889143e +0x0b78:  mov    %eax,0x4(%esp)
08891442 +0x0b7c:  lea    0xc(%ebp),%eax
08891445 +0x0b7f:  mov    %eax,(%esp)
08891448 +0x0b82:  call   08891554 <+0xc8e>
0889144d +0x0b87:  test   %al,%al
0889144f +0x0b89:  je     08891483 <+0xbbd>
08891451 +0x0b8b:  lea    -0x10(%ebp),%eax
08891454 +0x0b8e:  mov    0x8(%ebp),%edx
08891457 +0x0b91:  mov    %edx,0x4(%esp)
0889145b +0x0b95:  mov    %eax,(%esp)
0889145e +0x0b98:  call   08891862 <+0xf9c>
08891463 +0x0b9d:  sub    $0x4,%esp
08891466 +0x0ba0:  lea    -0x10(%ebp),%eax
08891469 +0x0ba3:  mov    %eax,0x4(%esp)
0889146d +0x0ba7:  lea    0x10(%ebp),%eax
08891470 +0x0baa:  mov    %eax,(%esp)
08891473 +0x0bad:  call   08891554 <+0xc8e>
08891478 +0x0bb2:  test   %al,%al
0889147a +0x0bb4:  je     08891483 <+0xbbd>
0889147c +0x0bb6:  mov    $0x1,%eax
08891481 +0x0bbb:  jmp    08891488 <+0xbc2>
08891483 +0x0bbd:  mov    $0x0,%eax
08891488 +0x0bc2:  test   %al,%al
0889148a +0x0bc4:  je     088914c8 <+0xc02>
0889148c +0x0bc6:  mov    0x8(%ebp),%eax
0889148f +0x0bc9:  mov    %eax,(%esp)
08891492 +0x0bcc:  call   08890ed0 <+0x60a>
08891497 +0x0bd1:  jmp    088914de <+0xc18>
08891499 +0x0bd3:  lea    -0xc(%ebp),%eax
0889149c +0x0bd6:  movl   $0x0,0x8(%esp)
088914a4 +0x0bde:  lea    0xc(%ebp),%edx
088914a7 +0x0be1:  mov    %edx,0x4(%esp)
088914ab +0x0be5:  mov    %eax,(%esp)
088914ae +0x0be8:  call   0889189c <+0xfd6>
088914b3 +0x0bed:  sub    $0x4,%esp
088914b6 +0x0bf0:  mov    -0xc(%ebp),%eax
088914b9 +0x0bf3:  mov    %eax,0x4(%esp)
088914bd +0x0bf7:  mov    0x8(%ebp),%eax
088914c0 +0x0bfa:  mov    %eax,(%esp)
088914c3 +0x0bfd:  call   088918da <+0x1014>
088914c8 +0x0c02:  lea    0x10(%ebp),%eax
088914cb +0x0c05:  mov    %eax,0x4(%esp)
088914cf +0x0c09:  lea    0xc(%ebp),%eax
088914d2 +0x0c0c:  mov    %eax,(%esp)
088914d5 +0x0c0f:  call   08891888 <+0xfc2>
088914da +0x0c14:  test   %al,%al
088914dc +0x0c16:  jne    08891499 <+0xbd3>
088914de +0x0c18:  leave
088914df +0x0c19:  ret
088914e0 +0x0c1a:  push   %ebp
088914e1 +0x0c1b:  mov    %esp,%ebp
088914e3 +0x0c1d:  mov    0xc(%ebp),%eax
088914e6 +0x0c20:  pop    %ebp
088914e7 +0x0c21:  ret
088914e8 +0x0c22:  push   %ebp
088914e9 +0x0c23:  mov    %esp,%ebp
088914eb +0x0c25:  sub    $0x28,%esp
088914ee +0x0c28:  mov    0x8(%ebp),%eax
088914f1 +0x0c2b:  mov    %eax,(%esp)
088914f4 +0x0c2e:  call   0889191b <+0x1055>
088914f9 +0x0c33:  mov    %eax,0x4(%esp)
088914fd +0x0c37:  lea    -0x9(%ebp),%eax
08891500 +0x0c3a:  mov    %eax,(%esp)
08891503 +0x0c3d:  call   088914e0 <+0xc1a>
08891508 +0x0c42:  leave
08891509 +0x0c43:  ret
0889150a +0x0c44:  push   %ebp
0889150b +0x0c45:  mov    %esp,%ebp
0889150d +0x0c47:  mov    0xc(%ebp),%eax
08891510 +0x0c4a:  mov    (%eax),%eax
08891512 +0x0c4c:  mov    %eax,%edx
08891514 +0x0c4e:  mov    0x10(%ebp),%eax
08891517 +0x0c51:  mov    (%eax),%eax
08891519 +0x0c53:  cmp    %eax,%edx
0889151b +0x0c55:  setl   %al
0889151e +0x0c58:  pop    %ebp
0889151f +0x0c59:  ret
08891520 +0x0c5a:  push   %ebp
08891521 +0x0c5b:  mov    %esp,%ebp
08891523 +0x0c5d:  mov    0xc(%ebp),%edx
08891526 +0x0c60:  mov    0x8(%ebp),%eax
08891529 +0x0c63:  mov    %edx,(%eax)
0889152b +0x0c65:  pop    %ebp
0889152c +0x0c66:  ret
0889152d +0x0c67:  nop
0889152e +0x0c68:  push   %ebp
0889152f +0x0c69:  mov    %esp,%ebp
08891531 +0x0c6b:  push   %ebx
08891532 +0x0c6c:  sub    $0x14,%esp
08891535 +0x0c6f:  mov    0x8(%ebp),%ebx
08891538 +0x0c72:  mov    0xc(%ebp),%eax
0889153b +0x0c75:  mov    0xc(%eax),%eax
0889153e +0x0c78:  mov    %eax,0x4(%esp)
08891542 +0x0c7c:  mov    %ebx,(%esp)
08891545 +0x0c7f:  call   08891520 <+0xc5a>
0889154a +0x0c84:  mov    %ebx,%eax
0889154c +0x0c86:  add    $0x14,%esp
0889154f +0x0c89:  pop    %ebx
08891550 +0x0c8a:  pop    %ebp
08891551 +0x0c8b:  ret    $0x4
08891554 +0x0c8e:  push   %ebp
08891555 +0x0c8f:  mov    %esp,%ebp
08891557 +0x0c91:  mov    0x8(%ebp),%eax
0889155a +0x0c94:  mov    (%eax),%edx
0889155c +0x0c96:  mov    0xc(%ebp),%eax
0889155f +0x0c99:  mov    (%eax),%eax
08891561 +0x0c9b:  cmp    %eax,%edx
08891563 +0x0c9d:  sete   %al
08891566 +0x0ca0:  pop    %ebp
08891567 +0x0ca1:  ret
08891568 +0x0ca2:  push   %ebp
08891569 +0x0ca3:  mov    %esp,%ebp
0889156b +0x0ca5:  push   %esi
0889156c +0x0ca6:  push   %ebx
0889156d +0x0ca7:  sub    $0x20,%esp
08891570 +0x0caa:  mov    0x8(%ebp),%esi
08891573 +0x0cad:  cmpl   $0x0,0x10(%ebp)
08891577 +0x0cb1:  jne    088915bf <+0xcf9>
08891579 +0x0cb3:  mov    0xc(%ebp),%eax
0889157c +0x0cb6:  mov    %eax,(%esp)
0889157f +0x0cb9:  call   08891262 <+0x99c>
08891584 +0x0cbe:  cmp    0x14(%ebp),%eax
08891587 +0x0cc1:  je     088915bf <+0xcf9>
08891589 +0x0cc3:  mov    0x14(%ebp),%eax
0889158c +0x0cc6:  mov    %eax,(%esp)
0889158f +0x0cc9:  call   0889167b <+0xdb5>
08891594 +0x0cce:  mov    %eax,%ebx
08891596 +0x0cd0:  mov    0x18(%ebp),%eax
08891599 +0x0cd3:  mov    %eax,0x4(%esp)
0889159d +0x0cd7:  lea    -0xe(%ebp),%eax
088915a0 +0x0cda:  mov    %eax,(%esp)
088915a3 +0x0cdd:  call   088914e0 <+0xc1a>
088915a8 +0x0ce2:  mov    0xc(%ebp),%edx
088915ab +0x0ce5:  mov    %ebx,0x8(%esp)
088915af +0x0ce9:  mov    %eax,0x4(%esp)
088915b3 +0x0ced:  mov    %edx,(%esp)
088915b6 +0x0cf0:  call   0889150a <+0xc44>
088915bb +0x0cf5:  test   %al,%al
088915bd +0x0cf7:  je     088915c6 <+0xd00>
088915bf +0x0cf9:  mov    $0x1,%eax
088915c4 +0x0cfe:  jmp    088915cb <+0xd05>
088915c6 +0x0d00:  mov    $0x0,%eax
088915cb +0x0d05:  mov    %al,-0xd(%ebp)
088915ce +0x0d08:  mov    0x18(%ebp),%eax
088915d1 +0x0d0b:  mov    %eax,0x4(%esp)
088915d5 +0x0d0f:  mov    0xc(%ebp),%eax
088915d8 +0x0d12:  mov    %eax,(%esp)
088915db +0x0d15:  call   08891926 <+0x1060>
088915e0 +0x0d1a:  mov    %eax,-0xc(%ebp)
088915e3 +0x0d1d:  mov    0xc(%ebp),%eax
088915e6 +0x0d20:  lea    0x4(%eax),%ecx
088915e9 +0x0d23:  mov    -0xc(%ebp),%edx
088915ec +0x0d26:  movzbl -0xd(%ebp),%eax
088915f0 +0x0d2a:  mov    %ecx,0xc(%esp)
088915f4 +0x0d2e:  mov    0x14(%ebp),%ecx
088915f7 +0x0d31:  mov    %ecx,0x8(%esp)
088915fb +0x0d35:  mov    %edx,0x4(%esp)
088915ff +0x0d39:  mov    %eax,(%esp)
08891602 +0x0d3c:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08891607 +0x0d41:  mov    0xc(%ebp),%eax
0889160a +0x0d44:  mov    0x14(%eax),%eax
0889160d +0x0d47:  lea    0x1(%eax),%edx
08891610 +0x0d4a:  mov    0xc(%ebp),%eax
08891613 +0x0d4d:  mov    %edx,0x14(%eax)
08891616 +0x0d50:  mov    -0xc(%ebp),%eax
08891619 +0x0d53:  mov    %eax,0x4(%esp)
0889161d +0x0d57:  mov    %esi,(%esp)
08891620 +0x0d5a:  call   08891520 <+0xc5a>
08891625 +0x0d5f:  mov    %esi,%eax
08891627 +0x0d61:  add    $0x20,%esp
0889162a +0x0d64:  pop    %ebx
0889162b +0x0d65:  pop    %esi
0889162c +0x0d66:  pop    %ebp
0889162d +0x0d67:  ret    $0x4
08891630 +0x0d6a:  push   %ebp
08891631 +0x0d6b:  mov    %esp,%ebp
08891633 +0x0d6d:  sub    $0x18,%esp
08891636 +0x0d70:  mov    0xc(%ebp),%eax
08891639 +0x0d73:  mov    %eax,(%esp)
0889163c +0x0d76:  call   088919a7 <+0x10e1>
08891641 +0x0d7b:  mov    0x8(%ebp),%edx
08891644 +0x0d7e:  mov    (%eax),%eax
08891646 +0x0d80:  mov    %eax,(%edx)
08891648 +0x0d82:  mov    0x10(%ebp),%eax
0889164b +0x0d85:  mov    %eax,(%esp)
0889164e +0x0d88:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08891653 +0x0d8d:  movzbl (%eax),%edx
08891656 +0x0d90:  mov    0x8(%ebp),%eax
08891659 +0x0d93:  mov    %dl,0x4(%eax)
0889165c +0x0d96:  leave
0889165d +0x0d97:  ret
0889165e +0x0d98:  push   %ebp
0889165f +0x0d99:  mov    %esp,%ebp
08891661 +0x0d9b:  sub    $0x18,%esp
08891664 +0x0d9e:  mov    0x8(%ebp),%eax
08891667 +0x0da1:  mov    (%eax),%eax
08891669 +0x0da3:  mov    %eax,(%esp)
0889166c +0x0da6:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08891671 +0x0dab:  mov    0x8(%ebp),%edx
08891674 +0x0dae:  mov    %eax,(%edx)
08891676 +0x0db0:  mov    0x8(%ebp),%eax
08891679 +0x0db3:  leave
0889167a +0x0db4:  ret
0889167b +0x0db5:  push   %ebp
0889167c +0x0db6:  mov    %esp,%ebp
0889167e +0x0db8:  sub    $0x28,%esp
08891681 +0x0dbb:  mov    0x8(%ebp),%eax
08891684 +0x0dbe:  mov    %eax,(%esp)
08891687 +0x0dc1:  call   088919af <+0x10e9>
0889168c +0x0dc6:  mov    %eax,0x4(%esp)
08891690 +0x0dca:  lea    -0x9(%ebp),%eax
08891693 +0x0dcd:  mov    %eax,(%esp)
08891696 +0x0dd0:  call   088914e0 <+0xc1a>
0889169b +0x0dd5:  leave
0889169c +0x0dd6:  ret
0889169d +0x0dd7:  nop
0889169e +0x0dd8:  push   %ebp
0889169f +0x0dd9:  mov    %esp,%ebp
088916a1 +0x0ddb:  sub    $0x18,%esp
088916a4 +0x0dde:  mov    0xc(%ebp),%eax
088916a7 +0x0de1:  mov    %eax,(%esp)
088916aa +0x0de4:  call   088916cc <+0xe06>
088916af +0x0de9:  mov    0x8(%ebp),%edx
088916b2 +0x0dec:  mov    (%eax),%eax
088916b4 +0x0dee:  mov    %eax,(%edx)
088916b6 +0x0df0:  mov    0x10(%ebp),%eax
088916b9 +0x0df3:  mov    %eax,(%esp)
088916bc +0x0df6:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
088916c1 +0x0dfb:  movzbl (%eax),%edx
088916c4 +0x0dfe:  mov    0x8(%ebp),%eax
088916c7 +0x0e01:  mov    %dl,0x4(%eax)
088916ca +0x0e04:  leave
088916cb +0x0e05:  ret
088916cc +0x0e06:  push   %ebp
088916cd +0x0e07:  mov    %esp,%ebp
088916cf +0x0e09:  mov    0x8(%ebp),%eax
088916d2 +0x0e0c:  pop    %ebp
088916d3 +0x0e0d:  ret
088916d4 +0x0e0e:  push   %ebp
088916d5 +0x0e0f:  mov    %esp,%ebp
088916d7 +0x0e11:  mov    0xc(%ebp),%eax
088916da +0x0e14:  mov    (%eax),%edx
088916dc +0x0e16:  mov    0x8(%ebp),%eax
088916df +0x0e19:  mov    %edx,(%eax)
088916e1 +0x0e1b:  pop    %ebp
088916e2 +0x0e1c:  ret
088916e3 +0x0e1d:  nop
088916e4 +0x0e1e:  push   %ebp
088916e5 +0x0e1f:  mov    %esp,%ebp
088916e7 +0x0e21:  sub    $0x18,%esp
088916ea +0x0e24:  mov    0x8(%ebp),%eax
088916ed +0x0e27:  mov    %eax,(%esp)
088916f0 +0x0e2a:  call   088919ba <+0x10f4>
088916f5 +0x0e2f:  leave
088916f6 +0x0e30:  ret
088916f7 +0x0e31:  nop
088916f8 +0x0e32:  push   %ebp
088916f9 +0x0e33:  mov    %esp,%ebp
088916fb +0x0e35:  mov    0x8(%ebp),%eax
088916fe +0x0e38:  movl   $0x0,0x4(%eax)
08891705 +0x0e3f:  mov    0x8(%ebp),%eax
08891708 +0x0e42:  movl   $0x0,0x8(%eax)
0889170f +0x0e49:  mov    0x8(%ebp),%eax
08891712 +0x0e4c:  lea    0x4(%eax),%edx
08891715 +0x0e4f:  mov    0x8(%ebp),%eax
08891718 +0x0e52:  mov    %edx,0xc(%eax)
0889171b +0x0e55:  mov    0x8(%ebp),%eax
0889171e +0x0e58:  lea    0x4(%eax),%edx
08891721 +0x0e5b:  mov    0x8(%ebp),%eax
08891724 +0x0e5e:  mov    %edx,0x10(%eax)
08891727 +0x0e61:  pop    %ebp
08891728 +0x0e62:  ret
08891729 +0x0e63:  nop
0889172a +0x0e64:  push   %ebp
0889172b +0x0e65:  mov    %esp,%ebp
0889172d +0x0e67:  sub    $0x18,%esp
08891730 +0x0e6a:  mov    0x8(%ebp),%eax
08891733 +0x0e6d:  mov    %eax,(%esp)
08891736 +0x0e70:  call   088919c0 <+0x10fa>
0889173b +0x0e75:  leave
0889173c +0x0e76:  ret
0889173d +0x0e77:  nop
0889173e +0x0e78:  push   %ebp
0889173f +0x0e79:  mov    %esp,%ebp
08891741 +0x0e7b:  push   %ebx
08891742 +0x0e7c:  sub    $0x14,%esp
08891745 +0x0e7f:  mov    0x8(%ebp),%ebx
08891748 +0x0e82:  jmp    08891796 <+0xed0>
0889174a +0x0e84:  mov    0x10(%ebp),%eax
0889174d +0x0e87:  mov    %eax,(%esp)
08891750 +0x0e8a:  call   088914e8 <+0xc22>
08891755 +0x0e8f:  mov    0xc(%ebp),%edx
08891758 +0x0e92:  mov    0x18(%ebp),%ecx
0889175b +0x0e95:  mov    %ecx,0x8(%esp)
0889175f +0x0e99:  mov    %eax,0x4(%esp)
08891763 +0x0e9d:  mov    %edx,(%esp)
08891766 +0x0ea0:  call   0889150a <+0xc44>
0889176b +0x0ea5:  xor    $0x1,%eax
0889176e +0x0ea8:  test   %al,%al
08891770 +0x0eaa:  je     08891788 <+0xec2>
08891772 +0x0eac:  mov    0x10(%ebp),%eax
08891775 +0x0eaf:  mov    %eax,0x14(%ebp)
08891778 +0x0eb2:  mov    0x10(%ebp),%eax
0889177b +0x0eb5:  mov    %eax,(%esp)
0889177e +0x0eb8:  call   083454e8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75b5
08891783 +0x0ebd:  mov    %eax,0x10(%ebp)
08891786 +0x0ec0:  jmp    08891796 <+0xed0>
08891788 +0x0ec2:  mov    0x10(%ebp),%eax
0889178b +0x0ec5:  mov    %eax,(%esp)
0889178e +0x0ec8:  call   083454dd <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75aa>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75aa
08891793 +0x0ecd:  mov    %eax,0x10(%ebp)
08891796 +0x0ed0:  cmpl   $0x0,0x10(%ebp)
0889179a +0x0ed4:  setne  %al
0889179d +0x0ed7:  test   %al,%al
0889179f +0x0ed9:  jne    0889174a <+0xe84>
088917a1 +0x0edb:  mov    0x14(%ebp),%eax
088917a4 +0x0ede:  mov    %eax,0x4(%esp)
088917a8 +0x0ee2:  mov    %ebx,(%esp)
088917ab +0x0ee5:  call   08891520 <+0xc5a>
088917b0 +0x0eea:  mov    %ebx,%eax
088917b2 +0x0eec:  add    $0x14,%esp
088917b5 +0x0eef:  pop    %ebx
088917b6 +0x0ef0:  pop    %ebp
088917b7 +0x0ef1:  ret    $0x4
088917ba +0x0ef4:  push   %ebp
088917bb +0x0ef5:  mov    %esp,%ebp
088917bd +0x0ef7:  push   %ebx
088917be +0x0ef8:  sub    $0x14,%esp
088917c1 +0x0efb:  mov    0x8(%ebp),%ebx
088917c4 +0x0efe:  jmp    0889180f <+0xf49>
088917c6 +0x0f00:  mov    0x10(%ebp),%eax
088917c9 +0x0f03:  mov    %eax,(%esp)
088917cc +0x0f06:  call   088914e8 <+0xc22>
088917d1 +0x0f0b:  mov    0xc(%ebp),%edx
088917d4 +0x0f0e:  mov    %eax,0x8(%esp)
088917d8 +0x0f12:  mov    0x18(%ebp),%eax
088917db +0x0f15:  mov    %eax,0x4(%esp)
088917df +0x0f19:  mov    %edx,(%esp)
088917e2 +0x0f1c:  call   0889150a <+0xc44>
088917e7 +0x0f21:  test   %al,%al
088917e9 +0x0f23:  je     08891801 <+0xf3b>
088917eb +0x0f25:  mov    0x10(%ebp),%eax
088917ee +0x0f28:  mov    %eax,0x14(%ebp)
088917f1 +0x0f2b:  mov    0x10(%ebp),%eax
088917f4 +0x0f2e:  mov    %eax,(%esp)
088917f7 +0x0f31:  call   083454e8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75b5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75b5
088917fc +0x0f36:  mov    %eax,0x10(%ebp)
088917ff +0x0f39:  jmp    0889180f <+0xf49>
08891801 +0x0f3b:  mov    0x10(%ebp),%eax
08891804 +0x0f3e:  mov    %eax,(%esp)
08891807 +0x0f41:  call   083454dd <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75aa>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75aa
0889180c +0x0f46:  mov    %eax,0x10(%ebp)
0889180f +0x0f49:  cmpl   $0x0,0x10(%ebp)
08891813 +0x0f4d:  setne  %al
08891816 +0x0f50:  test   %al,%al
08891818 +0x0f52:  jne    088917c6 <+0xf00>
0889181a +0x0f54:  mov    0x14(%ebp),%eax
0889181d +0x0f57:  mov    %eax,0x4(%esp)
08891821 +0x0f5b:  mov    %ebx,(%esp)
08891824 +0x0f5e:  call   08891520 <+0xc5a>
08891829 +0x0f63:  mov    %ebx,%eax
0889182b +0x0f65:  add    $0x14,%esp
0889182e +0x0f68:  pop    %ebx
0889182f +0x0f69:  pop    %ebp
08891830 +0x0f6a:  ret    $0x4
08891833 +0x0f6d:  nop
08891834 +0x0f6e:  push   %ebp
08891835 +0x0f6f:  mov    %esp,%ebp
08891837 +0x0f71:  sub    $0x18,%esp
0889183a +0x0f74:  mov    0xc(%ebp),%eax
0889183d +0x0f77:  mov    %eax,(%esp)
08891840 +0x0f7a:  call   088919a7 <+0x10e1>
08891845 +0x0f7f:  mov    0x8(%ebp),%edx
08891848 +0x0f82:  mov    (%eax),%eax
0889184a +0x0f84:  mov    %eax,(%edx)
0889184c +0x0f86:  mov    0x10(%ebp),%eax
0889184f +0x0f89:  mov    %eax,(%esp)
08891852 +0x0f8c:  call   088919a7 <+0x10e1>
08891857 +0x0f91:  mov    0x8(%ebp),%edx
0889185a +0x0f94:  mov    (%eax),%eax
0889185c +0x0f96:  mov    %eax,0x4(%edx)
0889185f +0x0f99:  leave
08891860 +0x0f9a:  ret
08891861 +0x0f9b:  nop
08891862 +0x0f9c:  push   %ebp
08891863 +0x0f9d:  mov    %esp,%ebp
08891865 +0x0f9f:  push   %ebx
08891866 +0x0fa0:  sub    $0x14,%esp
08891869 +0x0fa3:  mov    0x8(%ebp),%ebx
0889186c +0x0fa6:  mov    0xc(%ebp),%eax
0889186f +0x0fa9:  add    $0x4,%eax
08891872 +0x0fac:  mov    %eax,0x4(%esp)
08891876 +0x0fb0:  mov    %ebx,(%esp)
08891879 +0x0fb3:  call   08891520 <+0xc5a>
0889187e +0x0fb8:  mov    %ebx,%eax
08891880 +0x0fba:  add    $0x14,%esp
08891883 +0x0fbd:  pop    %ebx
08891884 +0x0fbe:  pop    %ebp
08891885 +0x0fbf:  ret    $0x4
08891888 +0x0fc2:  push   %ebp
08891889 +0x0fc3:  mov    %esp,%ebp
0889188b +0x0fc5:  mov    0x8(%ebp),%eax
0889188e +0x0fc8:  mov    (%eax),%edx
08891890 +0x0fca:  mov    0xc(%ebp),%eax
08891893 +0x0fcd:  mov    (%eax),%eax
08891895 +0x0fcf:  cmp    %eax,%edx
08891897 +0x0fd1:  setne  %al
0889189a +0x0fd4:  pop    %ebp
0889189b +0x0fd5:  ret
0889189c +0x0fd6:  push   %ebp
0889189d +0x0fd7:  mov    %esp,%ebp
0889189f +0x0fd9:  push   %ebx
088918a0 +0x0fda:  sub    $0x14,%esp
088918a3 +0x0fdd:  mov    0x8(%ebp),%ebx
088918a6 +0x0fe0:  mov    0xc(%ebp),%eax
088918a9 +0x0fe3:  movl   $0x4,0x8(%esp)
088918b1 +0x0feb:  mov    %eax,0x4(%esp)
088918b5 +0x0fef:  mov    %ebx,(%esp)
088918b8 +0x0ff2:  call   0807d880 <_init+0x178>
088918bd +0x0ff7:  mov    0xc(%ebp),%eax
088918c0 +0x0ffa:  mov    (%eax),%eax
088918c2 +0x0ffc:  mov    %eax,(%esp)
088918c5 +0x0fff:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
088918ca +0x1004:  mov    0xc(%ebp),%edx
088918cd +0x1007:  mov    %eax,(%edx)
088918cf +0x1009:  mov    %ebx,%eax
088918d1 +0x100b:  add    $0x14,%esp
088918d4 +0x100e:  pop    %ebx
088918d5 +0x100f:  pop    %ebp
088918d6 +0x1010:  ret    $0x4
088918d9 +0x1013:  nop
088918da +0x1014:  push   %ebp
088918db +0x1015:  mov    %esp,%ebp
088918dd +0x1017:  sub    $0x28,%esp
088918e0 +0x101a:  mov    0x8(%ebp),%eax
088918e3 +0x101d:  lea    0x4(%eax),%edx
088918e6 +0x1020:  mov    0xc(%ebp),%eax
088918e9 +0x1023:  mov    %edx,0x4(%esp)
088918ed +0x1027:  mov    %eax,(%esp)
088918f0 +0x102a:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
088918f5 +0x102f:  mov    %eax,-0xc(%ebp)
088918f8 +0x1032:  mov    -0xc(%ebp),%eax
088918fb +0x1035:  mov    %eax,0x4(%esp)
088918ff +0x1039:  mov    0x8(%ebp),%eax
08891902 +0x103c:  mov    %eax,(%esp)
08891905 +0x103f:  call   083454f4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x75c1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x75c1
0889190a +0x1044:  mov    0x8(%ebp),%eax
0889190d +0x1047:  mov    0x14(%eax),%eax
08891910 +0x104a:  lea    -0x1(%eax),%edx
08891913 +0x104d:  mov    0x8(%ebp),%eax
08891916 +0x1050:  mov    %edx,0x14(%eax)
08891919 +0x1053:  leave
0889191a +0x1054:  ret
0889191b +0x1055:  push   %ebp
0889191c +0x1056:  mov    %esp,%ebp
0889191e +0x1058:  mov    0x8(%ebp),%eax
08891921 +0x105b:  add    $0x10,%eax
08891924 +0x105e:  pop    %ebp
08891925 +0x105f:  ret
08891926 +0x1060:  push   %ebp
08891927 +0x1061:  mov    %esp,%ebp
08891929 +0x1063:  push   %esi
0889192a +0x1064:  push   %ebx
0889192b +0x1065:  sub    $0x20,%esp
0889192e +0x1068:  mov    0x8(%ebp),%eax
08891931 +0x106b:  mov    %eax,(%esp)
08891934 +0x106e:  call   088919c6 <+0x1100>
08891939 +0x1073:  mov    %eax,-0xc(%ebp)
0889193c +0x1076:  mov    0xc(%ebp),%eax
0889193f +0x1079:  mov    %eax,(%esp)
08891942 +0x107c:  call   088919e9 <+0x1123>
08891947 +0x1081:  mov    %eax,%ebx
08891949 +0x1083:  mov    0x8(%ebp),%eax
0889194c +0x1086:  mov    %eax,(%esp)
0889194f +0x1089:  call   083466b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x8785>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x8785
08891954 +0x108e:  mov    %ebx,0x8(%esp)
08891958 +0x1092:  mov    -0xc(%ebp),%edx
0889195b +0x1095:  mov    %edx,0x4(%esp)
0889195f +0x1099:  mov    %eax,(%esp)
08891962 +0x109c:  call   088919f2 <+0x112c>
08891967 +0x10a1:  jmp    0889199d <+0x10d7>
08891969 +0x10a3:  mov    %eax,(%esp)
0889196c +0x10a6:  call   08725ce0 <__cxa_begin_catch>
08891971 +0x10ab:  mov    -0xc(%ebp),%eax
08891974 +0x10ae:  mov    %eax,0x4(%esp)
08891978 +0x10b2:  mov    0x8(%ebp),%eax
0889197b +0x10b5:  mov    %eax,(%esp)
0889197e +0x10b8:  call   083466da <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x87a7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x87a7
08891983 +0x10bd:  call   08724be0 <__cxa_rethrow>
08891988 +0x10c2:  mov    %edx,%ebx
0889198a +0x10c4:  mov    %eax,%esi
0889198c +0x10c6:  call   08725c30 <__cxa_end_catch>
08891991 +0x10cb:  mov    %esi,%eax
08891993 +0x10cd:  mov    %ebx,%edx
08891995 +0x10cf:  mov    %eax,(%esp)
08891998 +0x10d2:  call   08ae3750 <_Unwind_Resume>
0889199d +0x10d7:  mov    -0xc(%ebp),%eax
088919a0 +0x10da:  add    $0x20,%esp
088919a3 +0x10dd:  pop    %ebx
088919a4 +0x10de:  pop    %esi
088919a5 +0x10df:  pop    %ebp
088919a6 +0x10e0:  ret
088919a7 +0x10e1:  push   %ebp
088919a8 +0x10e2:  mov    %esp,%ebp
088919aa +0x10e4:  mov    0x8(%ebp),%eax
088919ad +0x10e7:  pop    %ebp
088919ae +0x10e8:  ret
088919af +0x10e9:  push   %ebp
088919b0 +0x10ea:  mov    %esp,%ebp
088919b2 +0x10ec:  mov    0x8(%ebp),%eax
088919b5 +0x10ef:  add    $0x10,%eax
088919b8 +0x10f2:  pop    %ebp
088919b9 +0x10f3:  ret
088919ba +0x10f4:  push   %ebp
088919bb +0x10f5:  mov    %esp,%ebp
088919bd +0x10f7:  pop    %ebp
088919be +0x10f8:  ret
088919bf +0x10f9:  nop
088919c0 +0x10fa:  push   %ebp
088919c1 +0x10fb:  mov    %esp,%ebp
088919c3 +0x10fd:  pop    %ebp
088919c4 +0x10fe:  ret
088919c5 +0x10ff:  nop
088919c6 +0x1100:  push   %ebp
088919c7 +0x1101:  mov    %esp,%ebp
088919c9 +0x1103:  sub    $0x18,%esp
088919cc +0x1106:  mov    0x8(%ebp),%eax
088919cf +0x1109:  movl   $0x0,0x8(%esp)
088919d7 +0x1111:  movl   $0x1,0x4(%esp)
088919df +0x1119:  mov    %eax,(%esp)
088919e2 +0x111c:  call   08891a32 <+0x116c>
088919e7 +0x1121:  leave
088919e8 +0x1122:  ret
088919e9 +0x1123:  push   %ebp
088919ea +0x1124:  mov    %esp,%ebp
088919ec +0x1126:  mov    0x8(%ebp),%eax
088919ef +0x1129:  pop    %ebp
088919f0 +0x112a:  ret
088919f1 +0x112b:  nop
088919f2 +0x112c:  push   %ebp
088919f3 +0x112d:  mov    %esp,%ebp
088919f5 +0x112f:  push   %ebx
088919f6 +0x1130:  sub    $0x14,%esp
088919f9 +0x1133:  mov    0x10(%ebp),%eax
088919fc +0x1136:  mov    %eax,(%esp)
088919ff +0x1139:  call   088919e9 <+0x1123>
08891a04 +0x113e:  mov    %eax,%ebx
08891a06 +0x1140:  mov    0xc(%ebp),%eax
08891a09 +0x1143:  mov    %eax,0x4(%esp)
08891a0d +0x1147:  movl   $0x14,(%esp)
08891a14 +0x114e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08891a19 +0x1153:  mov    %eax,%edx
08891a1b +0x1155:  test   %edx,%edx
08891a1d +0x1157:  je     08891a2b <+0x1165>
08891a1f +0x1159:  mov    %ebx,0x4(%esp)
08891a23 +0x115d:  mov    %eax,(%esp)
08891a26 +0x1160:  call   08891a72 <+0x11ac>
08891a2b +0x1165:  add    $0x14,%esp
08891a2e +0x1168:  pop    %ebx
08891a2f +0x1169:  pop    %ebp
08891a30 +0x116a:  ret
08891a31 +0x116b:  nop
08891a32 +0x116c:  push   %ebp
08891a33 +0x116d:  mov    %esp,%ebp
08891a35 +0x116f:  sub    $0x18,%esp
08891a38 +0x1172:  mov    0x8(%ebp),%eax
08891a3b +0x1175:  mov    %eax,(%esp)
08891a3e +0x1178:  call   08891ab4 <+0x11ee>
08891a43 +0x117d:  cmp    0xc(%ebp),%eax
08891a46 +0x1180:  setb   %al
08891a49 +0x1183:  movzbl %al,%eax
08891a4c +0x1186:  test   %eax,%eax
08891a4e +0x1188:  setne  %al
08891a51 +0x118b:  test   %al,%al
08891a53 +0x118d:  je     08891a5a <+0x1194>
08891a55 +0x118f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08891a5a +0x1194:  mov    0xc(%ebp),%edx
08891a5d +0x1197:  mov    %edx,%eax
08891a5f +0x1199:  shl    $0x2,%eax
08891a62 +0x119c:  add    %edx,%eax
08891a64 +0x119e:  shl    $0x2,%eax
08891a67 +0x11a1:  mov    %eax,(%esp)
08891a6a +0x11a4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08891a6f +0x11a9:  leave
08891a70 +0x11aa:  ret
08891a71 +0x11ab:  nop
08891a72 +0x11ac:  push   %ebp
08891a73 +0x11ad:  mov    %esp,%ebp
08891a75 +0x11af:  sub    $0x18,%esp
08891a78 +0x11b2:  mov    0x8(%ebp),%eax
08891a7b +0x11b5:  movl   $0x0,(%eax)
08891a81 +0x11bb:  mov    0x8(%ebp),%eax
08891a84 +0x11be:  movl   $0x0,0x4(%eax)
08891a8b +0x11c5:  mov    0x8(%ebp),%eax
08891a8e +0x11c8:  movl   $0x0,0x8(%eax)
08891a95 +0x11cf:  mov    0x8(%ebp),%eax
08891a98 +0x11d2:  movl   $0x0,0xc(%eax)
08891a9f +0x11d9:  mov    0xc(%ebp),%eax
08891aa2 +0x11dc:  mov    %eax,(%esp)
08891aa5 +0x11df:  call   088919e9 <+0x1123>
08891aaa +0x11e4:  mov    (%eax),%edx
08891aac +0x11e6:  mov    0x8(%ebp),%eax
08891aaf +0x11e9:  mov    %edx,0x10(%eax)
08891ab2 +0x11ec:  leave
08891ab3 +0x11ed:  ret
08891ab4 +0x11ee:  push   %ebp
08891ab5 +0x11ef:  mov    %esp,%ebp
08891ab7 +0x11f1:  mov    $0xccccccc,%eax
08891abc +0x11f6:  pop    %ebp
08891abd +0x11f7:  ret
08891abe +0x11f8:  nop
08891abf +0x11f9:  nop
```

## 反编译 C

```c
// AttackInfo::getAttackType @ 0x88908c6

/* AttackInfo::getAttackType(std::string&) */

undefined4 AttackInfo::getAttackType(string *param_1)

{
  bool bVar1;
  undefined4 local_10;
  
  local_10 = 7;
  bVar1 = std::operator==((string *)param_1,"attack type physical");
  if (bVar1) {
    local_10 = 0;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"attack type magical");
    if (bVar1) {
      local_10 = 1;
    }
    else {
      bVar1 = std::operator==((string *)param_1,"attack type absolute");
      if (bVar1) {
        local_10 = 2;
      }
    }
  }
  return local_10;
}
```
