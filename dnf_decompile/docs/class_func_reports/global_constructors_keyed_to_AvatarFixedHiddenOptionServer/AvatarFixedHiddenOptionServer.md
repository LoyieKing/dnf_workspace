# AvatarFixedHiddenOptionServer

`_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev`

`global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to AvatarFixedHiddenOptionServer` | `0x0817edcf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817edcf  _GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev
#           global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()
# range [0x0817edcf, 0x0817f2cf]
0817edcf +0x000:  push   %ebp
0817edd0 +0x001:  mov    %esp,%ebp
0817edd2 +0x003:  sub    $0x18,%esp
0817edd5 +0x006:  movl   $0xffff,0x4(%esp)
0817eddd +0x00e:  movl   $0x1,(%esp)
0817ede4 +0x015:  call   0817ed8f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0817ede9 +0x01a:  leave
0817edea +0x01b:  ret
0817edeb +0x01c:  nop
0817edec +0x01d:  push   %ebp
0817eded +0x01e:  mov    %esp,%ebp
0817edef +0x020:  mov    0x8(%ebp),%eax
0817edf2 +0x023:  movzbl 0xf8(%eax),%eax
0817edf9 +0x02a:  pop    %ebp
0817edfa +0x02b:  ret
0817edfb +0x02c:  nop
0817edfc +0x02d:  push   %ebp
0817edfd +0x02e:  mov    %esp,%ebp
0817edff +0x030:  sub    $0x18,%esp
0817ee02 +0x033:  mov    0x8(%ebp),%eax
0817ee05 +0x036:  mov    %eax,(%esp)
0817ee08 +0x039:  call   0817ee10 <+0x41>
0817ee0d +0x03e:  leave
0817ee0e +0x03f:  ret
0817ee0f +0x040:  nop
0817ee10 +0x041:  push   %ebp
0817ee11 +0x042:  mov    %esp,%ebp
0817ee13 +0x044:  mov    0x8(%ebp),%eax
0817ee16 +0x047:  movl   $0x0,(%eax)
0817ee1c +0x04d:  mov    0x8(%ebp),%eax
0817ee1f +0x050:  movl   $0x0,0x4(%eax)
0817ee26 +0x057:  mov    0x8(%ebp),%eax
0817ee29 +0x05a:  movl   $0x0,0x8(%eax)
0817ee30 +0x061:  mov    0x8(%ebp),%eax
0817ee33 +0x064:  movw   $0x0,0xc(%eax)
0817ee39 +0x06a:  mov    0x8(%ebp),%eax
0817ee3c +0x06d:  movw   $0x0,0xe(%eax)
0817ee42 +0x073:  pop    %ebp
0817ee43 +0x074:  ret
0817ee44 +0x075:  push   %ebp
0817ee45 +0x076:  mov    %esp,%ebp
0817ee47 +0x078:  sub    $0x28,%esp
0817ee4a +0x07b:  mov    0x8(%ebp),%eax
0817ee4d +0x07e:  mov    %eax,(%esp)
0817ee50 +0x081:  call   0808e292 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x102>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x102
0817ee55 +0x086:  cmp    0xc(%ebp),%eax
0817ee58 +0x089:  setb   %al
0817ee5b +0x08c:  test   %al,%al
0817ee5d +0x08e:  je     0817ee6b <+0x9c>
0817ee5f +0x090:  movl   $"vector::reserve",(%esp)
0817ee66 +0x097:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0817ee6b +0x09c:  mov    0x8(%ebp),%eax
0817ee6e +0x09f:  mov    %eax,(%esp)
0817ee71 +0x0a2:  call   080ceada <_GLOBAL__I__ZN10BingoEventC2Ev+0x3927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3927
0817ee76 +0x0a7:  cmp    0xc(%ebp),%eax
0817ee79 +0x0aa:  setb   %al
0817ee7c +0x0ad:  test   %al,%al
0817ee7e +0x0af:  je     0817ef65 <+0x196>
0817ee84 +0x0b5:  mov    0x8(%ebp),%eax
0817ee87 +0x0b8:  mov    %eax,(%esp)
0817ee8a +0x0bb:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0817ee8f +0x0c0:  mov    %eax,-0x10(%ebp)
0817ee92 +0x0c3:  mov    0x8(%ebp),%eax
0817ee95 +0x0c6:  lea    0x4(%eax),%edx
0817ee98 +0x0c9:  lea    -0x18(%ebp),%eax
0817ee9b +0x0cc:  mov    %edx,0x4(%esp)
0817ee9f +0x0d0:  mov    %eax,(%esp)
0817eea2 +0x0d3:  call   0808e2ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x11d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x11d
0817eea7 +0x0d8:  sub    $0x4,%esp
0817eeaa +0x0db:  mov    0x8(%ebp),%edx
0817eead +0x0de:  lea    -0x14(%ebp),%eax
0817eeb0 +0x0e1:  mov    %edx,0x4(%esp)
0817eeb4 +0x0e5:  mov    %eax,(%esp)
0817eeb7 +0x0e8:  call   0808e2ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x11d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x11d
0817eebc +0x0ed:  sub    $0x4,%esp
0817eebf +0x0f0:  mov    -0x18(%ebp),%eax
0817eec2 +0x0f3:  mov    %eax,0xc(%esp)
0817eec6 +0x0f7:  mov    -0x14(%ebp),%eax
0817eec9 +0x0fa:  mov    %eax,0x8(%esp)
0817eecd +0x0fe:  mov    0xc(%ebp),%eax
0817eed0 +0x101:  mov    %eax,0x4(%esp)
0817eed4 +0x105:  mov    0x8(%ebp),%eax
0817eed7 +0x108:  mov    %eax,(%esp)
0817eeda +0x10b:  call   0817f138 <+0x369>
0817eedf +0x110:  mov    %eax,-0xc(%ebp)
0817eee2 +0x113:  mov    0x8(%ebp),%eax
0817eee5 +0x116:  mov    %eax,(%esp)
0817eee8 +0x119:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
0817eeed +0x11e:  mov    0x8(%ebp),%edx
0817eef0 +0x121:  mov    0x4(%edx),%ecx
0817eef3 +0x124:  mov    0x8(%ebp),%edx
0817eef6 +0x127:  mov    (%edx),%edx
0817eef8 +0x129:  mov    %eax,0x8(%esp)
0817eefc +0x12d:  mov    %ecx,0x4(%esp)
0817ef00 +0x131:  mov    %edx,(%esp)
0817ef03 +0x134:  call   08083f16 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x159>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x159
0817ef08 +0x139:  mov    0x8(%ebp),%eax
0817ef0b +0x13c:  mov    0x8(%eax),%eax
0817ef0e +0x13f:  mov    %eax,%edx
0817ef10 +0x141:  mov    0x8(%ebp),%eax
0817ef13 +0x144:  mov    (%eax),%eax
0817ef15 +0x146:  mov    %edx,%ecx
0817ef17 +0x148:  sub    %eax,%ecx
0817ef19 +0x14a:  mov    %ecx,%eax
0817ef1b +0x14c:  sar    $0x2,%eax
0817ef1e +0x14f:  mov    %eax,%ecx
0817ef20 +0x151:  mov    0x8(%ebp),%eax
0817ef23 +0x154:  mov    (%eax),%edx
0817ef25 +0x156:  mov    0x8(%ebp),%eax
0817ef28 +0x159:  mov    %ecx,0x8(%esp)
0817ef2c +0x15d:  mov    %edx,0x4(%esp)
0817ef30 +0x161:  mov    %eax,(%esp)
0817ef33 +0x164:  call   08083f30 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x173>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x173
0817ef38 +0x169:  mov    0x8(%ebp),%eax
0817ef3b +0x16c:  mov    -0xc(%ebp),%edx
0817ef3e +0x16f:  mov    %edx,(%eax)
0817ef40 +0x171:  mov    -0x10(%ebp),%eax
0817ef43 +0x174:  shl    $0x2,%eax
0817ef46 +0x177:  mov    %eax,%edx
0817ef48 +0x179:  add    -0xc(%ebp),%edx
0817ef4b +0x17c:  mov    0x8(%ebp),%eax
0817ef4e +0x17f:  mov    %edx,0x4(%eax)
0817ef51 +0x182:  mov    0x8(%ebp),%eax
0817ef54 +0x185:  mov    (%eax),%eax
0817ef56 +0x187:  mov    0xc(%ebp),%edx
0817ef59 +0x18a:  shl    $0x2,%edx
0817ef5c +0x18d:  lea    (%eax,%edx,1),%edx
0817ef5f +0x190:  mov    0x8(%ebp),%eax
0817ef62 +0x193:  mov    %edx,0x8(%eax)
0817ef65 +0x196:  leave
0817ef66 +0x197:  ret
0817ef67 +0x198:  nop
0817ef68 +0x199:  push   %ebp
0817ef69 +0x19a:  mov    %esp,%ebp
0817ef6b +0x19c:  pop    %ebp
0817ef6c +0x19d:  ret
0817ef6d +0x19e:  nop
0817ef6e +0x19f:  push   %ebp
0817ef6f +0x1a0:  mov    %esp,%ebp
0817ef71 +0x1a2:  sub    $0x28,%esp
0817ef74 +0x1a5:  movl   $0x1,-0x10(%ebp)
0817ef7b +0x1ac:  lea    -0xc(%ebp),%eax
0817ef7e +0x1af:  mov    0x8(%ebp),%edx
0817ef81 +0x1b2:  mov    %edx,0x4(%esp)
0817ef85 +0x1b6:  mov    %eax,(%esp)
0817ef88 +0x1b9:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0817ef8d +0x1be:  sub    $0x4,%esp
0817ef90 +0x1c1:  lea    -0x14(%ebp),%eax
0817ef93 +0x1c4:  lea    -0x10(%ebp),%edx
0817ef96 +0x1c7:  mov    %edx,0x8(%esp)
0817ef9a +0x1cb:  lea    -0xc(%ebp),%edx
0817ef9d +0x1ce:  mov    %edx,0x4(%esp)
0817efa1 +0x1d2:  mov    %eax,(%esp)
0817efa4 +0x1d5:  call   0817f1c2 <+0x3f3>
0817efa9 +0x1da:  sub    $0x4,%esp
0817efac +0x1dd:  lea    -0x14(%ebp),%eax
0817efaf +0x1e0:  mov    %eax,(%esp)
0817efb2 +0x1e3:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0817efb7 +0x1e8:  leave
0817efb8 +0x1e9:  ret
0817efb9 +0x1ea:  push   %ebp
0817efba +0x1eb:  mov    %esp,%ebp
0817efbc +0x1ed:  push   %esi
0817efbd +0x1ee:  push   %ebx
0817efbe +0x1ef:  sub    $0x20,%esp
0817efc1 +0x1f2:  mov    0x8(%ebp),%ebx
0817efc4 +0x1f5:  mov    0x10(%ebp),%eax
0817efc7 +0x1f8:  mov    %eax,0x4(%esp)
0817efcb +0x1fc:  mov    0xc(%ebp),%eax
0817efce +0x1ff:  mov    %eax,(%esp)
0817efd1 +0x202:  call   0817f1fa <+0x42b>
0817efd6 +0x207:  mov    %eax,-0x10(%ebp)
0817efd9 +0x20a:  lea    -0x14(%ebp),%eax
0817efdc +0x20d:  mov    %eax,(%esp)
0817efdf +0x210:  call   0817f232 <+0x463>
0817efe4 +0x215:  jmp    0817f04c <+0x27d>
0817efe6 +0x217:  mov    -0x10(%ebp),%eax
0817efe9 +0x21a:  sar    %eax
0817efeb +0x21c:  mov    %eax,-0xc(%ebp)
0817efee +0x21f:  mov    0xc(%ebp),%eax
0817eff1 +0x222:  mov    %eax,-0x14(%ebp)
0817eff4 +0x225:  mov    -0xc(%ebp),%eax
0817eff7 +0x228:  mov    %eax,0x4(%esp)
0817effb +0x22c:  lea    -0x14(%ebp),%eax
0817effe +0x22f:  mov    %eax,(%esp)
0817f001 +0x232:  call   0817f240 <+0x471>
0817f006 +0x237:  mov    0x14(%ebp),%eax
0817f009 +0x23a:  mov    (%eax),%esi
0817f00b +0x23c:  lea    -0x14(%ebp),%eax
0817f00e +0x23f:  mov    %eax,(%esp)
0817f011 +0x242:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0817f016 +0x247:  mov    (%eax),%eax
0817f018 +0x249:  cmp    %eax,%esi
0817f01a +0x24b:  setl   %al
0817f01d +0x24e:  test   %al,%al
0817f01f +0x250:  je     0817f029 <+0x25a>
0817f021 +0x252:  mov    -0xc(%ebp),%eax
0817f024 +0x255:  mov    %eax,-0x10(%ebp)
0817f027 +0x258:  jmp    0817f04c <+0x27d>
0817f029 +0x25a:  mov    -0x14(%ebp),%eax
0817f02c +0x25d:  mov    %eax,0xc(%ebp)
0817f02f +0x260:  lea    0xc(%ebp),%eax
0817f032 +0x263:  mov    %eax,(%esp)
0817f035 +0x266:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0817f03a +0x26b:  mov    -0xc(%ebp),%eax
0817f03d +0x26e:  mov    -0x10(%ebp),%edx
0817f040 +0x271:  mov    %edx,%ecx
0817f042 +0x273:  sub    %eax,%ecx
0817f044 +0x275:  mov    %ecx,%eax
0817f046 +0x277:  sub    $0x1,%eax
0817f049 +0x27a:  mov    %eax,-0x10(%ebp)
0817f04c +0x27d:  cmpl   $0x0,-0x10(%ebp)
0817f050 +0x281:  setg   %al
0817f053 +0x284:  test   %al,%al
0817f055 +0x286:  jne    0817efe6 <+0x217>
0817f057 +0x288:  mov    0xc(%ebp),%eax
0817f05a +0x28b:  mov    %eax,(%ebx)
0817f05c +0x28d:  mov    %ebx,%eax
0817f05e +0x28f:  add    $0x20,%esp
0817f061 +0x292:  pop    %ebx
0817f062 +0x293:  pop    %esi
0817f063 +0x294:  pop    %ebp
0817f064 +0x295:  ret    $0x4
0817f067 +0x298:  nop
0817f068 +0x299:  push   %ebp
0817f069 +0x29a:  mov    %esp,%ebp
0817f06b +0x29c:  mov    0x8(%ebp),%eax
0817f06e +0x29f:  mov    0x4(%eax),%eax
0817f071 +0x2a2:  mov    %eax,%edx
0817f073 +0x2a4:  mov    0x8(%ebp),%eax
0817f076 +0x2a7:  mov    (%eax),%eax
0817f078 +0x2a9:  mov    %edx,%ecx
0817f07a +0x2ab:  sub    %eax,%ecx
0817f07c +0x2ad:  mov    %ecx,%eax
0817f07e +0x2af:  sar    $0x2,%eax
0817f081 +0x2b2:  imul   $0xcccccccd,%eax,%eax
0817f087 +0x2b8:  pop    %ebp
0817f088 +0x2b9:  ret
0817f089 +0x2ba:  nop
0817f08a +0x2bb:  push   %ebp
0817f08b +0x2bc:  mov    %esp,%ebp
0817f08d +0x2be:  mov    0x8(%ebp),%eax
0817f090 +0x2c1:  mov    (%eax),%ecx
0817f092 +0x2c3:  mov    0xc(%ebp),%edx
0817f095 +0x2c6:  mov    %edx,%eax
0817f097 +0x2c8:  shl    $0x2,%eax
0817f09a +0x2cb:  add    %edx,%eax
0817f09c +0x2cd:  shl    $0x2,%eax
0817f09f +0x2d0:  lea    (%ecx,%eax,1),%eax
0817f0a2 +0x2d3:  pop    %ebp
0817f0a3 +0x2d4:  ret
0817f0a4 +0x2d5:  push   %ebp
0817f0a5 +0x2d6:  mov    %esp,%ebp
0817f0a7 +0x2d8:  push   %edi
0817f0a8 +0x2d9:  push   %esi
0817f0a9 +0x2da:  push   %ebx
0817f0aa +0x2db:  sub    $0x1c,%esp
0817f0ad +0x2de:  mov    $&_ZGVZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,%eax
0817f0b2 +0x2e3:  movzbl (%eax),%eax
0817f0b5 +0x2e6:  test   %al,%al
0817f0b7 +0x2e8:  jne    0817f12a <+0x35b>
0817f0b9 +0x2ea:  movl   $&_ZGVZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,(%esp)
0817f0c0 +0x2f1:  call   08725330 <__cxa_guard_acquire>
0817f0c5 +0x2f6:  test   %eax,%eax
0817f0c7 +0x2f8:  setne  %al
0817f0ca +0x2fb:  test   %al,%al
0817f0cc +0x2fd:  je     0817f12a <+0x35b>
0817f0ce +0x2ff:  mov    $0x0,%ebx
0817f0d3 +0x304:  movl   $&_ZZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,(%esp)
0817f0da +0x30b:  call   0817e02c <_ZN29AvatarFixedHiddenOptionServerC1Ev>  ; AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()
0817f0df +0x310:  movl   $&_ZGVZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,(%esp)
0817f0e6 +0x317:  call   08725250 <__cxa_guard_release>
0817f0eb +0x31c:  mov    $&_ZN29AvatarFixedHiddenOptionServerD1Ev,%eax
0817f0f0 +0x321:  movl   $&__dso_handle,0x8(%esp)
0817f0f8 +0x329:  movl   $&_ZZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,0x4(%esp)
0817f100 +0x331:  mov    %eax,(%esp)
0817f103 +0x334:  call   0807ddd0 <_init+0x6c8>
0817f108 +0x339:  jmp    0817f12a <+0x35b>
0817f10a +0x33b:  mov    %edx,%esi
0817f10c +0x33d:  mov    %eax,%edi
0817f10e +0x33f:  test   %bl,%bl
0817f110 +0x341:  jne    0817f11e <+0x34f>
0817f112 +0x343:  movl   $&_ZGVZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,(%esp)
0817f119 +0x34a:  call   087252c0 <__cxa_guard_abort>
0817f11e +0x34f:  mov    %edi,%eax
0817f120 +0x351:  mov    %esi,%edx
0817f122 +0x353:  mov    %eax,(%esp)
0817f125 +0x356:  call   08ae3750 <_Unwind_Resume>
0817f12a +0x35b:  mov    $&_ZZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEvE3obj,%eax
0817f12f +0x360:  add    $0x1c,%esp
0817f132 +0x363:  pop    %ebx
0817f133 +0x364:  pop    %esi
0817f134 +0x365:  pop    %edi
0817f135 +0x366:  pop    %ebp
0817f136 +0x367:  ret
0817f137 +0x368:  nop
0817f138 +0x369:  push   %ebp
0817f139 +0x36a:  mov    %esp,%ebp
0817f13b +0x36c:  push   %esi
0817f13c +0x36d:  push   %ebx
0817f13d +0x36e:  sub    $0x20,%esp
0817f140 +0x371:  mov    0x8(%ebp),%eax
0817f143 +0x374:  mov    0xc(%ebp),%edx
0817f146 +0x377:  mov    %edx,0x4(%esp)
0817f14a +0x37b:  mov    %eax,(%esp)
0817f14d +0x37e:  call   0808e396 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x206>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x206
0817f152 +0x383:  mov    %eax,-0xc(%ebp)
0817f155 +0x386:  mov    0x8(%ebp),%eax
0817f158 +0x389:  mov    %eax,(%esp)
0817f15b +0x38c:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
0817f160 +0x391:  mov    %eax,0xc(%esp)
0817f164 +0x395:  mov    -0xc(%ebp),%eax
0817f167 +0x398:  mov    %eax,0x8(%esp)
0817f16b +0x39c:  mov    0x14(%ebp),%eax
0817f16e +0x39f:  mov    %eax,0x4(%esp)
0817f172 +0x3a3:  mov    0x10(%ebp),%eax
0817f175 +0x3a6:  mov    %eax,(%esp)
0817f178 +0x3a9:  call   0808e3fd <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x26d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x26d
0817f17d +0x3ae:  mov    -0xc(%ebp),%eax
0817f180 +0x3b1:  add    $0x20,%esp
0817f183 +0x3b4:  pop    %ebx
0817f184 +0x3b5:  pop    %esi
0817f185 +0x3b6:  pop    %ebp
0817f186 +0x3b7:  ret
0817f187 +0x3b8:  mov    %eax,(%esp)
0817f18a +0x3bb:  call   08725ce0 <__cxa_begin_catch>
0817f18f +0x3c0:  mov    0x8(%ebp),%eax
0817f192 +0x3c3:  mov    0xc(%ebp),%edx
0817f195 +0x3c6:  mov    %edx,0x8(%esp)
0817f199 +0x3ca:  mov    -0xc(%ebp),%edx
0817f19c +0x3cd:  mov    %edx,0x4(%esp)
0817f1a0 +0x3d1:  mov    %eax,(%esp)
0817f1a3 +0x3d4:  call   08083f30 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x173>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x173
0817f1a8 +0x3d9:  call   08724be0 <__cxa_rethrow>
0817f1ad +0x3de:  mov    %edx,%ebx
0817f1af +0x3e0:  mov    %eax,%esi
0817f1b1 +0x3e2:  call   08725c30 <__cxa_end_catch>
0817f1b6 +0x3e7:  mov    %esi,%eax
0817f1b8 +0x3e9:  mov    %ebx,%edx
0817f1ba +0x3eb:  mov    %eax,(%esp)
0817f1bd +0x3ee:  call   08ae3750 <_Unwind_Resume>
0817f1c2 +0x3f3:  push   %ebp
0817f1c3 +0x3f4:  mov    %esp,%ebp
0817f1c5 +0x3f6:  push   %ebx
0817f1c6 +0x3f7:  sub    $0x24,%esp
0817f1c9 +0x3fa:  mov    0x8(%ebp),%ebx
0817f1cc +0x3fd:  mov    0xc(%ebp),%eax
0817f1cf +0x400:  mov    (%eax),%edx
0817f1d1 +0x402:  mov    0x10(%ebp),%eax
0817f1d4 +0x405:  mov    (%eax),%eax
0817f1d6 +0x407:  shl    $0x2,%eax
0817f1d9 +0x40a:  neg    %eax
0817f1db +0x40c:  lea    (%edx,%eax,1),%eax
0817f1de +0x40f:  mov    %eax,-0xc(%ebp)
0817f1e1 +0x412:  lea    -0xc(%ebp),%eax
0817f1e4 +0x415:  mov    %eax,0x4(%esp)
0817f1e8 +0x419:  mov    %ebx,(%esp)
0817f1eb +0x41c:  call   0808e3c6 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x236>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x236
0817f1f0 +0x421:  mov    %ebx,%eax
0817f1f2 +0x423:  add    $0x24,%esp
0817f1f5 +0x426:  pop    %ebx
0817f1f6 +0x427:  pop    %ebp
0817f1f7 +0x428:  ret    $0x4
0817f1fa +0x42b:  push   %ebp
0817f1fb +0x42c:  mov    %esp,%ebp
0817f1fd +0x42e:  push   %ebx
0817f1fe +0x42f:  sub    $0x24,%esp
0817f201 +0x432:  lea    -0x9(%ebp),%eax
0817f204 +0x435:  lea    0x8(%ebp),%edx
0817f207 +0x438:  mov    %edx,0x4(%esp)
0817f20b +0x43c:  mov    %eax,(%esp)
0817f20e +0x43f:  call   080fa195 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x9a1>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x9a1
0817f213 +0x444:  sub    $0x4,%esp
0817f216 +0x447:  mov    %bl,0x8(%esp)
0817f21a +0x44b:  mov    0xc(%ebp),%eax
0817f21d +0x44e:  mov    %eax,0x4(%esp)
0817f221 +0x452:  mov    0x8(%ebp),%eax
0817f224 +0x455:  mov    %eax,(%esp)
0817f227 +0x458:  call   0817f27d <+0x4ae>
0817f22c +0x45d:  mov    -0x4(%ebp),%ebx
0817f22f +0x460:  leave
0817f230 +0x461:  ret
0817f231 +0x462:  nop
0817f232 +0x463:  push   %ebp
0817f233 +0x464:  mov    %esp,%ebp
0817f235 +0x466:  mov    0x8(%ebp),%eax
0817f238 +0x469:  movl   $0x0,(%eax)
0817f23e +0x46f:  pop    %ebp
0817f23f +0x470:  ret
0817f240 +0x471:  push   %ebp
0817f241 +0x472:  mov    %esp,%ebp
0817f243 +0x474:  push   %ebx
0817f244 +0x475:  sub    $0x24,%esp
0817f247 +0x478:  mov    0xc(%ebp),%eax
0817f24a +0x47b:  mov    %eax,-0xc(%ebp)
0817f24d +0x47e:  lea    -0xd(%ebp),%eax
0817f250 +0x481:  mov    0x8(%ebp),%edx
0817f253 +0x484:  mov    %edx,0x4(%esp)
0817f257 +0x488:  mov    %eax,(%esp)
0817f25a +0x48b:  call   080fa195 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x9a1>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x9a1
0817f25f +0x490:  sub    $0x4,%esp
0817f262 +0x493:  mov    %bl,0x8(%esp)
0817f266 +0x497:  mov    -0xc(%ebp),%eax
0817f269 +0x49a:  mov    %eax,0x4(%esp)
0817f26d +0x49e:  mov    0x8(%ebp),%eax
0817f270 +0x4a1:  mov    %eax,(%esp)
0817f273 +0x4a4:  call   0817f297 <+0x4c8>
0817f278 +0x4a9:  mov    -0x4(%ebp),%ebx
0817f27b +0x4ac:  leave
0817f27c +0x4ad:  ret
0817f27d +0x4ae:  push   %ebp
0817f27e +0x4af:  mov    %esp,%ebp
0817f280 +0x4b1:  sub    $0x18,%esp
0817f283 +0x4b4:  lea    0x8(%ebp),%eax
0817f286 +0x4b7:  mov    %eax,0x4(%esp)
0817f28a +0x4bb:  lea    0xc(%ebp),%eax
0817f28d +0x4be:  mov    %eax,(%esp)
0817f290 +0x4c1:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
0817f295 +0x4c6:  leave
0817f296 +0x4c7:  ret
0817f297 +0x4c8:  push   %ebp
0817f298 +0x4c9:  mov    %esp,%ebp
0817f29a +0x4cb:  sub    $0x18,%esp
0817f29d +0x4ce:  lea    0xc(%ebp),%eax
0817f2a0 +0x4d1:  mov    %eax,0x4(%esp)
0817f2a4 +0x4d5:  mov    0x8(%ebp),%eax
0817f2a7 +0x4d8:  mov    %eax,(%esp)
0817f2aa +0x4db:  call   0817f2b2 <+0x4e3>
0817f2af +0x4e0:  leave
0817f2b0 +0x4e1:  ret
0817f2b1 +0x4e2:  nop
0817f2b2 +0x4e3:  push   %ebp
0817f2b3 +0x4e4:  mov    %esp,%ebp
0817f2b5 +0x4e6:  mov    0x8(%ebp),%eax
0817f2b8 +0x4e9:  mov    (%eax),%edx
0817f2ba +0x4eb:  mov    0xc(%ebp),%eax
0817f2bd +0x4ee:  mov    (%eax),%eax
0817f2bf +0x4f0:  shl    $0x2,%eax
0817f2c2 +0x4f3:  add    %eax,%edx
0817f2c4 +0x4f5:  mov    0x8(%ebp),%eax
0817f2c7 +0x4f8:  mov    %edx,(%eax)
0817f2c9 +0x4fa:  mov    0x8(%ebp),%eax
0817f2cc +0x4fd:  pop    %ebp
0817f2cd +0x4fe:  ret
0817f2ce +0x4ff:  nop
0817f2cf +0x500:  nop
```

## 反编译 C

```c
// <global>::global @ 0x817edcf

/* AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer() */

void AvatarFixedHiddenOptionServer::_GLOBAL__I_AvatarFixedHiddenOptionServer(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
