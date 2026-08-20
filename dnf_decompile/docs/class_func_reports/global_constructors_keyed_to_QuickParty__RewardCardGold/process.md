# process

`_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to QuickParty::RewardCardGold` | `0x0826d9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d9d4  _GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d9d4, 0x0826e8a7]
0826d9d4 +0x000:  push   %ebp
0826d9d5 +0x001:  mov    %esp,%ebp
0826d9d7 +0x003:  sub    $0x18,%esp
0826d9da +0x006:  movl   $0xffff,0x4(%esp)
0826d9e2 +0x00e:  movl   $0x1,(%esp)
0826d9e9 +0x015:  call   0826d994 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0826d9ee +0x01a:  leave
0826d9ef +0x01b:  ret
0826d9f0 +0x01c:  push   %ebp
0826d9f1 +0x01d:  mov    %esp,%ebp
0826d9f3 +0x01f:  push   %esi
0826d9f4 +0x020:  push   %ebx
0826d9f5 +0x021:  sub    $0x10,%esp
0826d9f8 +0x024:  mov    0x8(%ebp),%eax
0826d9fb +0x027:  mov    %eax,(%esp)
0826d9fe +0x02a:  call   0826dde8 <+0x414>
0826da03 +0x02f:  mov    0x8(%ebp),%eax
0826da06 +0x032:  add    $0xc,%eax
0826da09 +0x035:  mov    %eax,(%esp)
0826da0c +0x038:  call   0826de76 <+0x4a2>
0826da11 +0x03d:  mov    0x8(%ebp),%eax
0826da14 +0x040:  movl   $0xffffffff,0x18(%eax)
0826da1b +0x047:  mov    0x8(%ebp),%eax
0826da1e +0x04a:  movl   $0xffffffff,0x1c(%eax)
0826da25 +0x051:  mov    0x8(%ebp),%eax
0826da28 +0x054:  mov    %eax,(%esp)
0826da2b +0x057:  call   0826de5a <+0x486>
0826da30 +0x05c:  mov    0x8(%ebp),%eax
0826da33 +0x05f:  add    $0xc,%eax
0826da36 +0x062:  mov    %eax,(%esp)
0826da39 +0x065:  call   0826dee8 <+0x514>
0826da3e +0x06a:  jmp    0826da73 <+0x9f>
0826da40 +0x06c:  mov    %edx,%ebx
0826da42 +0x06e:  mov    %eax,%esi
0826da44 +0x070:  mov    0x8(%ebp),%eax
0826da47 +0x073:  add    $0xc,%eax
0826da4a +0x076:  mov    %eax,(%esp)
0826da4d +0x079:  call   0826de8a <+0x4b6>
0826da52 +0x07e:  mov    %esi,%eax
0826da54 +0x080:  mov    %ebx,%edx
0826da56 +0x082:  jmp    0826da58 <+0x84>
0826da58 +0x084:  mov    %edx,%ebx
0826da5a +0x086:  mov    %eax,%esi
0826da5c +0x088:  mov    0x8(%ebp),%eax
0826da5f +0x08b:  mov    %eax,(%esp)
0826da62 +0x08e:  call   0826ddfc <+0x428>
0826da67 +0x093:  mov    %esi,%eax
0826da69 +0x095:  mov    %ebx,%edx
0826da6b +0x097:  mov    %eax,(%esp)
0826da6e +0x09a:  call   08ae3750 <_Unwind_Resume>
0826da73 +0x09f:  add    $0x10,%esp
0826da76 +0x0a2:  pop    %ebx
0826da77 +0x0a3:  pop    %esi
0826da78 +0x0a4:  pop    %ebp
0826da79 +0x0a5:  ret
0826da7a +0x0a6:  push   %ebp
0826da7b +0x0a7:  mov    %esp,%ebp
0826da7d +0x0a9:  push   %esi
0826da7e +0x0aa:  push   %ebx
0826da7f +0x0ab:  sub    $0x10,%esp
0826da82 +0x0ae:  mov    0x8(%ebp),%eax
0826da85 +0x0b1:  add    $0xc,%eax
0826da88 +0x0b4:  mov    %eax,(%esp)
0826da8b +0x0b7:  call   0826de8a <+0x4b6>
0826da90 +0x0bc:  jmp    0826daad <+0xd9>
0826da92 +0x0be:  mov    %edx,%ebx
0826da94 +0x0c0:  mov    %eax,%esi
0826da96 +0x0c2:  mov    0x8(%ebp),%eax
0826da99 +0x0c5:  mov    %eax,(%esp)
0826da9c +0x0c8:  call   0826ddfc <+0x428>
0826daa1 +0x0cd:  mov    %esi,%eax
0826daa3 +0x0cf:  mov    %ebx,%edx
0826daa5 +0x0d1:  mov    %eax,(%esp)
0826daa8 +0x0d4:  call   08ae3750 <_Unwind_Resume>
0826daad +0x0d9:  mov    0x8(%ebp),%eax
0826dab0 +0x0dc:  mov    %eax,(%esp)
0826dab3 +0x0df:  call   0826ddfc <+0x428>
0826dab8 +0x0e4:  add    $0x10,%esp
0826dabb +0x0e7:  pop    %ebx
0826dabc +0x0e8:  pop    %esi
0826dabd +0x0e9:  pop    %ebp
0826dabe +0x0ea:  ret
0826dabf +0x0eb:  nop
0826dac0 +0x0ec:  push   %ebp
0826dac1 +0x0ed:  mov    %esp,%ebp
0826dac3 +0x0ef:  sub    $0x18,%esp
0826dac6 +0x0f2:  mov    0x8(%ebp),%eax
0826dac9 +0x0f5:  mov    %eax,(%esp)
0826dacc +0x0f8:  call   0826df2c <+0x558>
0826dad1 +0x0fd:  leave
0826dad2 +0x0fe:  ret
0826dad3 +0x0ff:  nop
0826dad4 +0x100:  push   %ebp
0826dad5 +0x101:  mov    %esp,%ebp
0826dad7 +0x103:  push   %esi
0826dad8 +0x104:  push   %ebx
0826dad9 +0x105:  sub    $0x20,%esp
0826dadc +0x108:  mov    0x8(%ebp),%eax
0826dadf +0x10b:  mov    %eax,(%esp)
0826dae2 +0x10e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0826dae7 +0x113:  mov    0x8(%ebp),%eax
0826daea +0x116:  add    $0xc,%eax
0826daed +0x119:  mov    %eax,(%esp)
0826daf0 +0x11c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0826daf5 +0x121:  mov    0x8(%ebp),%eax
0826daf8 +0x124:  add    $0x18,%eax
0826dafb +0x127:  mov    %eax,(%esp)
0826dafe +0x12a:  call   0826d9f0 <+0x1c>
0826db03 +0x12f:  mov    0x8(%ebp),%eax
0826db06 +0x132:  add    $0x38,%eax
0826db09 +0x135:  mov    %eax,(%esp)
0826db0c +0x138:  call   0826df04 <+0x530>
0826db11 +0x13d:  mov    0x8(%ebp),%eax
0826db14 +0x140:  mov    %eax,(%esp)
0826db17 +0x143:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0826db1c +0x148:  mov    0x8(%ebp),%eax
0826db1f +0x14b:  add    $0xc,%eax
0826db22 +0x14e:  mov    %eax,(%esp)
0826db25 +0x151:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0826db2a +0x156:  mov    0x8(%ebp),%eax
0826db2d +0x159:  add    $0x38,%eax
0826db30 +0x15c:  mov    %eax,(%esp)
0826db33 +0x15f:  call   0826df7e <+0x5aa>
0826db38 +0x164:  movl   $0x0,-0x10(%ebp)
0826db3f +0x16b:  jmp    0826db76 <+0x1a2>
0826db41 +0x16d:  movl   $0x0,-0xc(%ebp)
0826db48 +0x174:  jmp    0826db67 <+0x193>
0826db4a +0x176:  mov    -0x10(%ebp),%ecx
0826db4d +0x179:  mov    -0xc(%ebp),%edx
0826db50 +0x17c:  mov    0x8(%ebp),%eax
0826db53 +0x17f:  shl    $0x2,%ecx
0826db56 +0x182:  lea    (%ecx,%edx,1),%edx
0826db59 +0x185:  add    $0x68,%edx
0826db5c +0x188:  movl   $0xffffffff,(%eax,%edx,4)
0826db63 +0x18f:  addl   $0x1,-0xc(%ebp)
0826db67 +0x193:  cmpl   $0x1,-0xc(%ebp)
0826db6b +0x197:  setle  %al
0826db6e +0x19a:  test   %al,%al
0826db70 +0x19c:  jne    0826db4a <+0x176>
0826db72 +0x19e:  addl   $0x1,-0x10(%ebp)
0826db76 +0x1a2:  cmpl   $0x1,-0x10(%ebp)
0826db7a +0x1a6:  setle  %al
0826db7d +0x1a9:  test   %al,%al
0826db7f +0x1ab:  jne    0826db41 <+0x16d>
0826db81 +0x1ad:  jmp    0826dbe6 <+0x212>
0826db83 +0x1af:  mov    %edx,%ebx
0826db85 +0x1b1:  mov    %eax,%esi
0826db87 +0x1b3:  mov    0x8(%ebp),%eax
0826db8a +0x1b6:  add    $0x38,%eax
0826db8d +0x1b9:  mov    %eax,(%esp)
0826db90 +0x1bc:  call   0826dac0 <+0xec>
0826db95 +0x1c1:  mov    %esi,%eax
0826db97 +0x1c3:  mov    %ebx,%edx
0826db99 +0x1c5:  jmp    0826db9b <+0x1c7>
0826db9b +0x1c7:  mov    %edx,%ebx
0826db9d +0x1c9:  mov    %eax,%esi
0826db9f +0x1cb:  mov    0x8(%ebp),%eax
0826dba2 +0x1ce:  add    $0x18,%eax
0826dba5 +0x1d1:  mov    %eax,(%esp)
0826dba8 +0x1d4:  call   0826da7a <+0xa6>
0826dbad +0x1d9:  mov    %esi,%eax
0826dbaf +0x1db:  mov    %ebx,%edx
0826dbb1 +0x1dd:  jmp    0826dbb3 <+0x1df>
0826dbb3 +0x1df:  mov    %edx,%ebx
0826dbb5 +0x1e1:  mov    %eax,%esi
0826dbb7 +0x1e3:  mov    0x8(%ebp),%eax
0826dbba +0x1e6:  add    $0xc,%eax
0826dbbd +0x1e9:  mov    %eax,(%esp)
0826dbc0 +0x1ec:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826dbc5 +0x1f1:  mov    %esi,%eax
0826dbc7 +0x1f3:  mov    %ebx,%edx
0826dbc9 +0x1f5:  jmp    0826dbcb <+0x1f7>
0826dbcb +0x1f7:  mov    %edx,%ebx
0826dbcd +0x1f9:  mov    %eax,%esi
0826dbcf +0x1fb:  mov    0x8(%ebp),%eax
0826dbd2 +0x1fe:  mov    %eax,(%esp)
0826dbd5 +0x201:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826dbda +0x206:  mov    %esi,%eax
0826dbdc +0x208:  mov    %ebx,%edx
0826dbde +0x20a:  mov    %eax,(%esp)
0826dbe1 +0x20d:  call   08ae3750 <_Unwind_Resume>
0826dbe6 +0x212:  add    $0x20,%esp
0826dbe9 +0x215:  pop    %ebx
0826dbea +0x216:  pop    %esi
0826dbeb +0x217:  pop    %ebp
0826dbec +0x218:  ret
0826dbed +0x219:  nop
0826dbee +0x21a:  push   %ebp
0826dbef +0x21b:  mov    %esp,%ebp
0826dbf1 +0x21d:  mov    0x8(%ebp),%eax
0826dbf4 +0x220:  movl   $&_ZTVN10QuickParty11IRewardTypeE+0x8,(%eax)
0826dbfa +0x226:  mov    0x8(%ebp),%eax
0826dbfd +0x229:  mov    0xc(%ebp),%edx
0826dc00 +0x22c:  mov    %edx,0x4(%eax)
0826dc03 +0x22f:  pop    %ebp
0826dc04 +0x230:  ret
0826dc05 +0x231:  nop
0826dc06 +0x232:  push   %ebp
0826dc07 +0x233:  mov    %esp,%ebp
0826dc09 +0x235:  sub    $0x18,%esp
0826dc0c +0x238:  mov    0x8(%ebp),%eax
0826dc0f +0x23b:  mov    0xc(%ebp),%edx
0826dc12 +0x23e:  mov    %edx,0x4(%esp)
0826dc16 +0x242:  mov    %eax,(%esp)
0826dc19 +0x245:  call   0826dbee <+0x21a>
0826dc1e +0x24a:  mov    0x8(%ebp),%eax
0826dc21 +0x24d:  movl   $&_ZTVN10QuickParty12IBasicRewardE+0x8,(%eax)
0826dc27 +0x253:  leave
0826dc28 +0x254:  ret
0826dc29 +0x255:  nop
0826dc2a +0x256:  push   %ebp
0826dc2b +0x257:  mov    %esp,%ebp
0826dc2d +0x259:  pop    %ebp
0826dc2e +0x25a:  ret
0826dc2f +0x25b:  nop
0826dc30 +0x25c:  push   %ebp
0826dc31 +0x25d:  mov    %esp,%ebp
0826dc33 +0x25f:  sub    $0x18,%esp
0826dc36 +0x262:  mov    0x8(%ebp),%eax
0826dc39 +0x265:  mov    0x10(%ebp),%edx
0826dc3c +0x268:  mov    %edx,0x4(%esp)
0826dc40 +0x26c:  mov    %eax,(%esp)
0826dc43 +0x26f:  call   0826dc06 <+0x232>
0826dc48 +0x274:  mov    0x8(%ebp),%eax
0826dc4b +0x277:  movl   $&_ZTVN10QuickParty14RewardCardGoldE+0x8,(%eax)
0826dc51 +0x27d:  leave
0826dc52 +0x27e:  ret
0826dc53 +0x27f:  nop
0826dc54 +0x280:  push   %ebp
0826dc55 +0x281:  mov    %esp,%ebp
0826dc57 +0x283:  sub    $0x18,%esp
0826dc5a +0x286:  mov    0x8(%ebp),%eax
0826dc5d +0x289:  mov    0x10(%ebp),%edx
0826dc60 +0x28c:  mov    %edx,0x4(%esp)
0826dc64 +0x290:  mov    %eax,(%esp)
0826dc67 +0x293:  call   0826dc06 <+0x232>
0826dc6c +0x298:  mov    0x8(%ebp),%eax
0826dc6f +0x29b:  movl   $&_ZTVN10QuickParty19HellPartyDifficultyE+0x8,(%eax)
0826dc75 +0x2a1:  leave
0826dc76 +0x2a2:  ret
0826dc77 +0x2a3:  nop
0826dc78 +0x2a4:  push   %ebp
0826dc79 +0x2a5:  mov    %esp,%ebp
0826dc7b +0x2a7:  sub    $0x18,%esp
0826dc7e +0x2aa:  mov    0x8(%ebp),%eax
0826dc81 +0x2ad:  mov    0xc(%ebp),%edx
0826dc84 +0x2b0:  mov    %edx,0x4(%esp)
0826dc88 +0x2b4:  mov    %eax,(%esp)
0826dc8b +0x2b7:  call   0826dbee <+0x21a>
0826dc90 +0x2bc:  mov    0x8(%ebp),%eax
0826dc93 +0x2bf:  movl   $&_ZTVN10QuickParty14IRandomwRewardE+0x8,(%eax)
0826dc99 +0x2c5:  leave
0826dc9a +0x2c6:  ret
0826dc9b +0x2c7:  nop
0826dc9c +0x2c8:  push   %ebp
0826dc9d +0x2c9:  mov    %esp,%ebp
0826dc9f +0x2cb:  pop    %ebp
0826dca0 +0x2cc:  ret
0826dca1 +0x2cd:  nop
0826dca2 +0x2ce:  push   %ebp
0826dca3 +0x2cf:  mov    %esp,%ebp
0826dca5 +0x2d1:  sub    $0x18,%esp
0826dca8 +0x2d4:  mov    0x8(%ebp),%eax
0826dcab +0x2d7:  mov    0x10(%ebp),%edx
0826dcae +0x2da:  mov    %edx,0x4(%esp)
0826dcb2 +0x2de:  mov    %eax,(%esp)
0826dcb5 +0x2e1:  call   0826dc78 <+0x2a4>
0826dcba +0x2e6:  mov    0x8(%ebp),%eax
0826dcbd +0x2e9:  movl   $&_ZTVN10QuickParty14KillMonsterExpE+0x8,(%eax)
0826dcc3 +0x2ef:  mov    0x8(%ebp),%eax
0826dcc6 +0x2f2:  mov    0xc(%ebp),%edx
0826dcc9 +0x2f5:  mov    %edx,0x8(%eax)
0826dccc +0x2f8:  leave
0826dccd +0x2f9:  ret
0826dcce +0x2fa:  push   %ebp
0826dccf +0x2fb:  mov    %esp,%ebp
0826dcd1 +0x2fd:  sub    $0x18,%esp
0826dcd4 +0x300:  mov    0x8(%ebp),%eax
0826dcd7 +0x303:  mov    0x10(%ebp),%edx
0826dcda +0x306:  mov    %edx,0x4(%esp)
0826dcde +0x30a:  mov    %eax,(%esp)
0826dce1 +0x30d:  call   0826dc78 <+0x2a4>
0826dce6 +0x312:  mov    0x8(%ebp),%eax
0826dce9 +0x315:  movl   $&_ZTVN10QuickParty17EquipItemDropRateE+0x8,(%eax)
0826dcef +0x31b:  mov    0x8(%ebp),%eax
0826dcf2 +0x31e:  mov    0xc(%ebp),%edx
0826dcf5 +0x321:  mov    %edx,0x8(%eax)
0826dcf8 +0x324:  leave
0826dcf9 +0x325:  ret
0826dcfa +0x326:  push   %ebp
0826dcfb +0x327:  mov    %esp,%ebp
0826dcfd +0x329:  sub    $0x18,%esp
0826dd00 +0x32c:  mov    0x8(%ebp),%eax
0826dd03 +0x32f:  mov    0x10(%ebp),%edx
0826dd06 +0x332:  mov    %edx,0x4(%esp)
0826dd0a +0x336:  mov    %eax,(%esp)
0826dd0d +0x339:  call   0826dc78 <+0x2a4>
0826dd12 +0x33e:  mov    0x8(%ebp),%eax
0826dd15 +0x341:  movl   $&_ZTVN10QuickParty15CointLimitCountE+0x8,(%eax)
0826dd1b +0x347:  mov    0x8(%ebp),%eax
0826dd1e +0x34a:  mov    0xc(%ebp),%edx
0826dd21 +0x34d:  mov    %edx,0x8(%eax)
0826dd24 +0x350:  leave
0826dd25 +0x351:  ret
0826dd26 +0x352:  push   %ebp
0826dd27 +0x353:  mov    %esp,%ebp
0826dd29 +0x355:  sub    $0x18,%esp
0826dd2c +0x358:  mov    0x8(%ebp),%eax
0826dd2f +0x35b:  mov    0x10(%ebp),%edx
0826dd32 +0x35e:  mov    %edx,0x4(%esp)
0826dd36 +0x362:  mov    %eax,(%esp)
0826dd39 +0x365:  call   0826dc78 <+0x2a4>
0826dd3e +0x36a:  mov    0x8(%ebp),%eax
0826dd41 +0x36d:  movl   $&_ZTVN10QuickParty26ReturnAncientDungeonTicketE+0x8,(%eax)
0826dd47 +0x373:  mov    0x8(%ebp),%eax
0826dd4a +0x376:  mov    0xc(%ebp),%edx
0826dd4d +0x379:  mov    %edx,0x8(%eax)
0826dd50 +0x37c:  leave
0826dd51 +0x37d:  ret
0826dd52 +0x37e:  push   %ebp
0826dd53 +0x37f:  mov    %esp,%ebp
0826dd55 +0x381:  push   %esi
0826dd56 +0x382:  push   %ebx
0826dd57 +0x383:  sub    $0x10,%esp
0826dd5a +0x386:  mov    0x8(%ebp),%eax
0826dd5d +0x389:  add    $0x38,%eax
0826dd60 +0x38c:  mov    %eax,(%esp)
0826dd63 +0x38f:  call   0826dac0 <+0xec>
0826dd68 +0x394:  jmp    0826dd82 <+0x3ae>
0826dd6a +0x396:  mov    %edx,%ebx
0826dd6c +0x398:  mov    %eax,%esi
0826dd6e +0x39a:  mov    0x8(%ebp),%eax
0826dd71 +0x39d:  add    $0x18,%eax
0826dd74 +0x3a0:  mov    %eax,(%esp)
0826dd77 +0x3a3:  call   0826da7a <+0xa6>
0826dd7c +0x3a8:  mov    %esi,%eax
0826dd7e +0x3aa:  mov    %ebx,%edx
0826dd80 +0x3ac:  jmp    0826dd92 <+0x3be>
0826dd82 +0x3ae:  mov    0x8(%ebp),%eax
0826dd85 +0x3b1:  add    $0x18,%eax
0826dd88 +0x3b4:  mov    %eax,(%esp)
0826dd8b +0x3b7:  call   0826da7a <+0xa6>
0826dd90 +0x3bc:  jmp    0826ddaa <+0x3d6>
0826dd92 +0x3be:  mov    %edx,%ebx
0826dd94 +0x3c0:  mov    %eax,%esi
0826dd96 +0x3c2:  mov    0x8(%ebp),%eax
0826dd99 +0x3c5:  add    $0xc,%eax
0826dd9c +0x3c8:  mov    %eax,(%esp)
0826dd9f +0x3cb:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826dda4 +0x3d0:  mov    %esi,%eax
0826dda6 +0x3d2:  mov    %ebx,%edx
0826dda8 +0x3d4:  jmp    0826ddba <+0x3e6>
0826ddaa +0x3d6:  mov    0x8(%ebp),%eax
0826ddad +0x3d9:  add    $0xc,%eax
0826ddb0 +0x3dc:  mov    %eax,(%esp)
0826ddb3 +0x3df:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826ddb8 +0x3e4:  jmp    0826ddd5 <+0x401>
0826ddba +0x3e6:  mov    %edx,%ebx
0826ddbc +0x3e8:  mov    %eax,%esi
0826ddbe +0x3ea:  mov    0x8(%ebp),%eax
0826ddc1 +0x3ed:  mov    %eax,(%esp)
0826ddc4 +0x3f0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826ddc9 +0x3f5:  mov    %esi,%eax
0826ddcb +0x3f7:  mov    %ebx,%edx
0826ddcd +0x3f9:  mov    %eax,(%esp)
0826ddd0 +0x3fc:  call   08ae3750 <_Unwind_Resume>
0826ddd5 +0x401:  mov    0x8(%ebp),%eax
0826ddd8 +0x404:  mov    %eax,(%esp)
0826dddb +0x407:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826dde0 +0x40c:  add    $0x10,%esp
0826dde3 +0x40f:  pop    %ebx
0826dde4 +0x410:  pop    %esi
0826dde5 +0x411:  pop    %ebp
0826dde6 +0x412:  ret
0826dde7 +0x413:  nop
0826dde8 +0x414:  push   %ebp
0826dde9 +0x415:  mov    %esp,%ebp
0826ddeb +0x417:  sub    $0x18,%esp
0826ddee +0x41a:  mov    0x8(%ebp),%eax
0826ddf1 +0x41d:  mov    %eax,(%esp)
0826ddf4 +0x420:  call   0826e076 <+0x6a2>
0826ddf9 +0x425:  leave
0826ddfa +0x426:  ret
0826ddfb +0x427:  nop
0826ddfc +0x428:  push   %ebp
0826ddfd +0x429:  mov    %esp,%ebp
0826ddff +0x42b:  push   %esi
0826de00 +0x42c:  push   %ebx
0826de01 +0x42d:  sub    $0x10,%esp
0826de04 +0x430:  mov    0x8(%ebp),%eax
0826de07 +0x433:  mov    %eax,(%esp)
0826de0a +0x436:  call   0826e0f2 <+0x71e>
0826de0f +0x43b:  mov    0x8(%ebp),%edx
0826de12 +0x43e:  mov    0x4(%edx),%ecx
0826de15 +0x441:  mov    0x8(%ebp),%edx
0826de18 +0x444:  mov    (%edx),%edx
0826de1a +0x446:  mov    %eax,0x8(%esp)
0826de1e +0x44a:  mov    %ecx,0x4(%esp)
0826de22 +0x44e:  mov    %edx,(%esp)
0826de25 +0x451:  call   0826e0fa <+0x726>
0826de2a +0x456:  jmp    0826de47 <+0x473>
0826de2c +0x458:  mov    %edx,%ebx
0826de2e +0x45a:  mov    %eax,%esi
0826de30 +0x45c:  mov    0x8(%ebp),%eax
0826de33 +0x45f:  mov    %eax,(%esp)
0826de36 +0x462:  call   0826e08a <+0x6b6>
0826de3b +0x467:  mov    %esi,%eax
0826de3d +0x469:  mov    %ebx,%edx
0826de3f +0x46b:  mov    %eax,(%esp)
0826de42 +0x46e:  call   08ae3750 <_Unwind_Resume>
0826de47 +0x473:  mov    0x8(%ebp),%eax
0826de4a +0x476:  mov    %eax,(%esp)
0826de4d +0x479:  call   0826e08a <+0x6b6>
0826de52 +0x47e:  add    $0x10,%esp
0826de55 +0x481:  pop    %ebx
0826de56 +0x482:  pop    %esi
0826de57 +0x483:  pop    %ebp
0826de58 +0x484:  ret
0826de59 +0x485:  nop
0826de5a +0x486:  push   %ebp
0826de5b +0x487:  mov    %esp,%ebp
0826de5d +0x489:  sub    $0x18,%esp
0826de60 +0x48c:  mov    0x8(%ebp),%eax
0826de63 +0x48f:  mov    (%eax),%eax
0826de65 +0x491:  mov    %eax,0x4(%esp)
0826de69 +0x495:  mov    0x8(%ebp),%eax
0826de6c +0x498:  mov    %eax,(%esp)
0826de6f +0x49b:  call   0826e114 <+0x740>
0826de74 +0x4a0:  leave
0826de75 +0x4a1:  ret
0826de76 +0x4a2:  push   %ebp
0826de77 +0x4a3:  mov    %esp,%ebp
0826de79 +0x4a5:  sub    $0x18,%esp
0826de7c +0x4a8:  mov    0x8(%ebp),%eax
0826de7f +0x4ab:  mov    %eax,(%esp)
0826de82 +0x4ae:  call   0826e15e <+0x78a>
0826de87 +0x4b3:  leave
0826de88 +0x4b4:  ret
0826de89 +0x4b5:  nop
0826de8a +0x4b6:  push   %ebp
0826de8b +0x4b7:  mov    %esp,%ebp
0826de8d +0x4b9:  push   %esi
0826de8e +0x4ba:  push   %ebx
0826de8f +0x4bb:  sub    $0x10,%esp
0826de92 +0x4be:  mov    0x8(%ebp),%eax
0826de95 +0x4c1:  mov    %eax,(%esp)
0826de98 +0x4c4:  call   0826e1da <+0x806>
0826de9d +0x4c9:  mov    0x8(%ebp),%edx
0826dea0 +0x4cc:  mov    0x4(%edx),%ecx
0826dea3 +0x4cf:  mov    0x8(%ebp),%edx
0826dea6 +0x4d2:  mov    (%edx),%edx
0826dea8 +0x4d4:  mov    %eax,0x8(%esp)
0826deac +0x4d8:  mov    %ecx,0x4(%esp)
0826deb0 +0x4dc:  mov    %edx,(%esp)
0826deb3 +0x4df:  call   0826e1e2 <+0x80e>
0826deb8 +0x4e4:  jmp    0826ded5 <+0x501>
0826deba +0x4e6:  mov    %edx,%ebx
0826debc +0x4e8:  mov    %eax,%esi
0826debe +0x4ea:  mov    0x8(%ebp),%eax
0826dec1 +0x4ed:  mov    %eax,(%esp)
0826dec4 +0x4f0:  call   0826e172 <+0x79e>
0826dec9 +0x4f5:  mov    %esi,%eax
0826decb +0x4f7:  mov    %ebx,%edx
0826decd +0x4f9:  mov    %eax,(%esp)
0826ded0 +0x4fc:  call   08ae3750 <_Unwind_Resume>
0826ded5 +0x501:  mov    0x8(%ebp),%eax
0826ded8 +0x504:  mov    %eax,(%esp)
0826dedb +0x507:  call   0826e172 <+0x79e>
0826dee0 +0x50c:  add    $0x10,%esp
0826dee3 +0x50f:  pop    %ebx
0826dee4 +0x510:  pop    %esi
0826dee5 +0x511:  pop    %ebp
0826dee6 +0x512:  ret
0826dee7 +0x513:  nop
0826dee8 +0x514:  push   %ebp
0826dee9 +0x515:  mov    %esp,%ebp
0826deeb +0x517:  sub    $0x18,%esp
0826deee +0x51a:  mov    0x8(%ebp),%eax
0826def1 +0x51d:  mov    (%eax),%eax
0826def3 +0x51f:  mov    %eax,0x4(%esp)
0826def7 +0x523:  mov    0x8(%ebp),%eax
0826defa +0x526:  mov    %eax,(%esp)
0826defd +0x529:  call   0826e1fc <+0x828>
0826df02 +0x52e:  leave
0826df03 +0x52f:  ret
0826df04 +0x530:  push   %ebp
0826df05 +0x531:  mov    %esp,%ebp
0826df07 +0x533:  sub    $0x18,%esp
0826df0a +0x536:  mov    0x8(%ebp),%eax
0826df0d +0x539:  mov    %eax,(%esp)
0826df10 +0x53c:  call   0826e232 <+0x85e>
0826df15 +0x541:  leave
0826df16 +0x542:  ret
0826df17 +0x543:  nop
0826df18 +0x544:  push   %ebp
0826df19 +0x545:  mov    %esp,%ebp
0826df1b +0x547:  sub    $0x18,%esp
0826df1e +0x54a:  mov    0x8(%ebp),%eax
0826df21 +0x54d:  mov    %eax,(%esp)
0826df24 +0x550:  call   0826e246 <+0x872>
0826df29 +0x555:  leave
0826df2a +0x556:  ret
0826df2b +0x557:  nop
0826df2c +0x558:  push   %ebp
0826df2d +0x559:  mov    %esp,%ebp
0826df2f +0x55b:  push   %esi
0826df30 +0x55c:  push   %ebx
0826df31 +0x55d:  sub    $0x10,%esp
0826df34 +0x560:  mov    0x8(%ebp),%eax
0826df37 +0x563:  mov    %eax,(%esp)
0826df3a +0x566:  call   0826e2b0 <+0x8dc>
0826df3f +0x56b:  mov    %eax,0x4(%esp)
0826df43 +0x56f:  mov    0x8(%ebp),%eax
0826df46 +0x572:  mov    %eax,(%esp)
0826df49 +0x575:  call   0826e25a <+0x886>
0826df4e +0x57a:  jmp    0826df6b <+0x597>
0826df50 +0x57c:  mov    %edx,%ebx
0826df52 +0x57e:  mov    %eax,%esi
0826df54 +0x580:  mov    0x8(%ebp),%eax
0826df57 +0x583:  mov    %eax,(%esp)
0826df5a +0x586:  call   0826df18 <+0x544>
0826df5f +0x58b:  mov    %esi,%eax
0826df61 +0x58d:  mov    %ebx,%edx
0826df63 +0x58f:  mov    %eax,(%esp)
0826df66 +0x592:  call   08ae3750 <_Unwind_Resume>
0826df6b +0x597:  mov    0x8(%ebp),%eax
0826df6e +0x59a:  mov    %eax,(%esp)
0826df71 +0x59d:  call   0826df18 <+0x544>
0826df76 +0x5a2:  add    $0x10,%esp
0826df79 +0x5a5:  pop    %ebx
0826df7a +0x5a6:  pop    %esi
0826df7b +0x5a7:  pop    %ebp
0826df7c +0x5a8:  ret
0826df7d +0x5a9:  nop
0826df7e +0x5aa:  push   %ebp
0826df7f +0x5ab:  mov    %esp,%ebp
0826df81 +0x5ad:  sub    $0x18,%esp
0826df84 +0x5b0:  mov    0x8(%ebp),%eax
0826df87 +0x5b3:  mov    %eax,(%esp)
0826df8a +0x5b6:  call   0826e2bc <+0x8e8>
0826df8f +0x5bb:  leave
0826df90 +0x5bc:  ret
0826df91 +0x5bd:  nop
0826df92 +0x5be:  push   %ebp
0826df93 +0x5bf:  mov    %esp,%ebp
0826df95 +0x5c1:  mov    0x8(%ebp),%eax
0826df98 +0x5c4:  mov    0x4(%eax),%eax
0826df9b +0x5c7:  mov    %eax,%edx
0826df9d +0x5c9:  mov    0x8(%ebp),%eax
0826dfa0 +0x5cc:  mov    (%eax),%eax
0826dfa2 +0x5ce:  mov    %edx,%ecx
0826dfa4 +0x5d0:  sub    %eax,%ecx
0826dfa6 +0x5d2:  mov    %ecx,%eax
0826dfa8 +0x5d4:  sar    $0x3,%eax
0826dfab +0x5d7:  pop    %ebp
0826dfac +0x5d8:  ret
0826dfad +0x5d9:  nop
0826dfae +0x5da:  push   %ebp
0826dfaf +0x5db:  mov    %esp,%ebp
0826dfb1 +0x5dd:  mov    0x8(%ebp),%eax
0826dfb4 +0x5e0:  mov    (%eax),%eax
0826dfb6 +0x5e2:  mov    0xc(%ebp),%edx
0826dfb9 +0x5e5:  shl    $0x3,%edx
0826dfbc +0x5e8:  add    %edx,%eax
0826dfbe +0x5ea:  pop    %ebp
0826dfbf +0x5eb:  ret
0826dfc0 +0x5ec:  push   %ebp
0826dfc1 +0x5ed:  mov    %esp,%ebp
0826dfc3 +0x5ef:  mov    0x8(%ebp),%eax
0826dfc6 +0x5f2:  mov    0x4(%eax),%eax
0826dfc9 +0x5f5:  mov    %eax,%edx
0826dfcb +0x5f7:  mov    0x8(%ebp),%eax
0826dfce +0x5fa:  mov    (%eax),%eax
0826dfd0 +0x5fc:  mov    %edx,%ecx
0826dfd2 +0x5fe:  sub    %eax,%ecx
0826dfd4 +0x600:  mov    %ecx,%eax
0826dfd6 +0x602:  sar    $0x3,%eax
0826dfd9 +0x605:  pop    %ebp
0826dfda +0x606:  ret
0826dfdb +0x607:  nop
0826dfdc +0x608:  push   %ebp
0826dfdd +0x609:  mov    %esp,%ebp
0826dfdf +0x60b:  mov    0x8(%ebp),%eax
0826dfe2 +0x60e:  mov    (%eax),%eax
0826dfe4 +0x610:  mov    0xc(%ebp),%edx
0826dfe7 +0x613:  shl    $0x3,%edx
0826dfea +0x616:  add    %edx,%eax
0826dfec +0x618:  pop    %ebp
0826dfed +0x619:  ret
0826dfee +0x61a:  push   %ebp
0826dfef +0x61b:  mov    %esp,%ebp
0826dff1 +0x61d:  push   %ebx
0826dff2 +0x61e:  sub    $0x14,%esp
0826dff5 +0x621:  mov    0x8(%ebp),%ebx
0826dff8 +0x624:  mov    0xc(%ebp),%eax
0826dffb +0x627:  mov    0x10(%ebp),%edx
0826dffe +0x62a:  mov    %edx,0x8(%esp)
0826e002 +0x62e:  mov    %eax,0x4(%esp)
0826e006 +0x632:  mov    %ebx,(%esp)
0826e009 +0x635:  call   0826e332 <+0x95e>
0826e00e +0x63a:  sub    $0x4,%esp
0826e011 +0x63d:  mov    %ebx,%eax
0826e013 +0x63f:  mov    -0x4(%ebp),%ebx
0826e016 +0x642:  leave
0826e017 +0x643:  ret    $0x4
0826e01a +0x646:  push   %ebp
0826e01b +0x647:  mov    %esp,%ebp
0826e01d +0x649:  push   %ebx
0826e01e +0x64a:  sub    $0x14,%esp
0826e021 +0x64d:  mov    0x8(%ebp),%ebx
0826e024 +0x650:  mov    0xc(%ebp),%eax
0826e027 +0x653:  mov    %eax,0x4(%esp)
0826e02b +0x657:  mov    %ebx,(%esp)
0826e02e +0x65a:  call   0826e3f0 <+0xa1c>
0826e033 +0x65f:  sub    $0x4,%esp
0826e036 +0x662:  mov    %ebx,%eax
0826e038 +0x664:  mov    -0x4(%ebp),%ebx
0826e03b +0x667:  leave
0826e03c +0x668:  ret    $0x4
0826e03f +0x66b:  nop
0826e040 +0x66c:  push   %ebp
0826e041 +0x66d:  mov    %esp,%ebp
0826e043 +0x66f:  mov    0x8(%ebp),%eax
0826e046 +0x672:  mov    (%eax),%edx
0826e048 +0x674:  mov    0xc(%ebp),%eax
0826e04b +0x677:  mov    (%eax),%eax
0826e04d +0x679:  cmp    %eax,%edx
0826e04f +0x67b:  sete   %al
0826e052 +0x67e:  pop    %ebp
0826e053 +0x67f:  ret
0826e054 +0x680:  push   %ebp
0826e055 +0x681:  mov    %esp,%ebp
0826e057 +0x683:  mov    0x8(%ebp),%eax
0826e05a +0x686:  mov    (%eax),%eax
0826e05c +0x688:  add    $0x10,%eax
0826e05f +0x68b:  pop    %ebp
0826e060 +0x68c:  ret
0826e061 +0x68d:  nop
0826e062 +0x68e:  push   %ebp
0826e063 +0x68f:  mov    %esp,%ebp
0826e065 +0x691:  sub    $0x18,%esp
0826e068 +0x694:  mov    0x8(%ebp),%eax
0826e06b +0x697:  mov    %eax,(%esp)
0826e06e +0x69a:  call   0826e446 <+0xa72>
0826e073 +0x69f:  leave
0826e074 +0x6a0:  ret
0826e075 +0x6a1:  nop
0826e076 +0x6a2:  push   %ebp
0826e077 +0x6a3:  mov    %esp,%ebp
0826e079 +0x6a5:  sub    $0x18,%esp
0826e07c +0x6a8:  mov    0x8(%ebp),%eax
0826e07f +0x6ab:  mov    %eax,(%esp)
0826e082 +0x6ae:  call   0826e416 <+0xa42>
0826e087 +0x6b3:  leave
0826e088 +0x6b4:  ret
0826e089 +0x6b5:  nop
0826e08a +0x6b6:  push   %ebp
0826e08b +0x6b7:  mov    %esp,%ebp
0826e08d +0x6b9:  push   %esi
0826e08e +0x6ba:  push   %ebx
0826e08f +0x6bb:  sub    $0x10,%esp
0826e092 +0x6be:  mov    0x8(%ebp),%eax
0826e095 +0x6c1:  mov    0x8(%eax),%eax
0826e098 +0x6c4:  mov    %eax,%edx
0826e09a +0x6c6:  mov    0x8(%ebp),%eax
0826e09d +0x6c9:  mov    (%eax),%eax
0826e09f +0x6cb:  mov    %edx,%ecx
0826e0a1 +0x6cd:  sub    %eax,%ecx
0826e0a3 +0x6cf:  mov    %ecx,%eax
0826e0a5 +0x6d1:  sar    $0x3,%eax
0826e0a8 +0x6d4:  mov    %eax,%edx
0826e0aa +0x6d6:  mov    0x8(%ebp),%eax
0826e0ad +0x6d9:  mov    (%eax),%eax
0826e0af +0x6db:  mov    %edx,0x8(%esp)
0826e0b3 +0x6df:  mov    %eax,0x4(%esp)
0826e0b7 +0x6e3:  mov    0x8(%ebp),%eax
0826e0ba +0x6e6:  mov    %eax,(%esp)
0826e0bd +0x6e9:  call   0826e45a <+0xa86>
0826e0c2 +0x6ee:  jmp    0826e0df <+0x70b>
0826e0c4 +0x6f0:  mov    %edx,%ebx
0826e0c6 +0x6f2:  mov    %eax,%esi
0826e0c8 +0x6f4:  mov    0x8(%ebp),%eax
0826e0cb +0x6f7:  mov    %eax,(%esp)
0826e0ce +0x6fa:  call   0826e062 <+0x68e>
0826e0d3 +0x6ff:  mov    %esi,%eax
0826e0d5 +0x701:  mov    %ebx,%edx
0826e0d7 +0x703:  mov    %eax,(%esp)
0826e0da +0x706:  call   08ae3750 <_Unwind_Resume>
0826e0df +0x70b:  mov    0x8(%ebp),%eax
0826e0e2 +0x70e:  mov    %eax,(%esp)
0826e0e5 +0x711:  call   0826e062 <+0x68e>
0826e0ea +0x716:  add    $0x10,%esp
0826e0ed +0x719:  pop    %ebx
0826e0ee +0x71a:  pop    %esi
0826e0ef +0x71b:  pop    %ebp
0826e0f0 +0x71c:  ret
0826e0f1 +0x71d:  nop
0826e0f2 +0x71e:  push   %ebp
0826e0f3 +0x71f:  mov    %esp,%ebp
0826e0f5 +0x721:  mov    0x8(%ebp),%eax
0826e0f8 +0x724:  pop    %ebp
0826e0f9 +0x725:  ret
0826e0fa +0x726:  push   %ebp
0826e0fb +0x727:  mov    %esp,%ebp
0826e0fd +0x729:  sub    $0x18,%esp
0826e100 +0x72c:  mov    0xc(%ebp),%eax
0826e103 +0x72f:  mov    %eax,0x4(%esp)
0826e107 +0x733:  mov    0x8(%ebp),%eax
0826e10a +0x736:  mov    %eax,(%esp)
0826e10d +0x739:  call   0826e481 <+0xaad>
0826e112 +0x73e:  leave
0826e113 +0x73f:  ret
0826e114 +0x740:  push   %ebp
0826e115 +0x741:  mov    %esp,%ebp
0826e117 +0x743:  sub    $0x18,%esp
0826e11a +0x746:  mov    0x8(%ebp),%eax
0826e11d +0x749:  mov    %eax,(%esp)
0826e120 +0x74c:  call   0826e0f2 <+0x71e>
0826e125 +0x751:  mov    0x8(%ebp),%edx
0826e128 +0x754:  mov    0x4(%edx),%edx
0826e12b +0x757:  mov    %eax,0x8(%esp)
0826e12f +0x75b:  mov    %edx,0x4(%esp)
0826e133 +0x75f:  mov    0xc(%ebp),%eax
0826e136 +0x762:  mov    %eax,(%esp)
0826e139 +0x765:  call   0826e0fa <+0x726>
0826e13e +0x76a:  mov    0x8(%ebp),%eax
0826e141 +0x76d:  mov    0xc(%ebp),%edx
0826e144 +0x770:  mov    %edx,0x4(%eax)
0826e147 +0x773:  leave
0826e148 +0x774:  ret
0826e149 +0x775:  nop
0826e14a +0x776:  push   %ebp
0826e14b +0x777:  mov    %esp,%ebp
0826e14d +0x779:  sub    $0x18,%esp
0826e150 +0x77c:  mov    0x8(%ebp),%eax
0826e153 +0x77f:  mov    %eax,(%esp)
0826e156 +0x782:  call   0826e4cc <+0xaf8>
0826e15b +0x787:  leave
0826e15c +0x788:  ret
0826e15d +0x789:  nop
0826e15e +0x78a:  push   %ebp
0826e15f +0x78b:  mov    %esp,%ebp
0826e161 +0x78d:  sub    $0x18,%esp
0826e164 +0x790:  mov    0x8(%ebp),%eax
0826e167 +0x793:  mov    %eax,(%esp)
0826e16a +0x796:  call   0826e49c <+0xac8>
0826e16f +0x79b:  leave
0826e170 +0x79c:  ret
0826e171 +0x79d:  nop
0826e172 +0x79e:  push   %ebp
0826e173 +0x79f:  mov    %esp,%ebp
0826e175 +0x7a1:  push   %esi
0826e176 +0x7a2:  push   %ebx
0826e177 +0x7a3:  sub    $0x10,%esp
0826e17a +0x7a6:  mov    0x8(%ebp),%eax
0826e17d +0x7a9:  mov    0x8(%eax),%eax
0826e180 +0x7ac:  mov    %eax,%edx
0826e182 +0x7ae:  mov    0x8(%ebp),%eax
0826e185 +0x7b1:  mov    (%eax),%eax
0826e187 +0x7b3:  mov    %edx,%ecx
0826e189 +0x7b5:  sub    %eax,%ecx
0826e18b +0x7b7:  mov    %ecx,%eax
0826e18d +0x7b9:  sar    $0x3,%eax
0826e190 +0x7bc:  mov    %eax,%edx
0826e192 +0x7be:  mov    0x8(%ebp),%eax
0826e195 +0x7c1:  mov    (%eax),%eax
0826e197 +0x7c3:  mov    %edx,0x8(%esp)
0826e19b +0x7c7:  mov    %eax,0x4(%esp)
0826e19f +0x7cb:  mov    0x8(%ebp),%eax
0826e1a2 +0x7ce:  mov    %eax,(%esp)
0826e1a5 +0x7d1:  call   0826e4e0 <+0xb0c>
0826e1aa +0x7d6:  jmp    0826e1c7 <+0x7f3>
0826e1ac +0x7d8:  mov    %edx,%ebx
0826e1ae +0x7da:  mov    %eax,%esi
0826e1b0 +0x7dc:  mov    0x8(%ebp),%eax
0826e1b3 +0x7df:  mov    %eax,(%esp)
0826e1b6 +0x7e2:  call   0826e14a <+0x776>
0826e1bb +0x7e7:  mov    %esi,%eax
0826e1bd +0x7e9:  mov    %ebx,%edx
0826e1bf +0x7eb:  mov    %eax,(%esp)
0826e1c2 +0x7ee:  call   08ae3750 <_Unwind_Resume>
0826e1c7 +0x7f3:  mov    0x8(%ebp),%eax
0826e1ca +0x7f6:  mov    %eax,(%esp)
0826e1cd +0x7f9:  call   0826e14a <+0x776>
0826e1d2 +0x7fe:  add    $0x10,%esp
0826e1d5 +0x801:  pop    %ebx
0826e1d6 +0x802:  pop    %esi
0826e1d7 +0x803:  pop    %ebp
0826e1d8 +0x804:  ret
0826e1d9 +0x805:  nop
0826e1da +0x806:  push   %ebp
0826e1db +0x807:  mov    %esp,%ebp
0826e1dd +0x809:  mov    0x8(%ebp),%eax
0826e1e0 +0x80c:  pop    %ebp
0826e1e1 +0x80d:  ret
0826e1e2 +0x80e:  push   %ebp
0826e1e3 +0x80f:  mov    %esp,%ebp
0826e1e5 +0x811:  sub    $0x18,%esp
0826e1e8 +0x814:  mov    0xc(%ebp),%eax
0826e1eb +0x817:  mov    %eax,0x4(%esp)
0826e1ef +0x81b:  mov    0x8(%ebp),%eax
0826e1f2 +0x81e:  mov    %eax,(%esp)
0826e1f5 +0x821:  call   0826e507 <+0xb33>
0826e1fa +0x826:  leave
0826e1fb +0x827:  ret
0826e1fc +0x828:  push   %ebp
0826e1fd +0x829:  mov    %esp,%ebp
0826e1ff +0x82b:  sub    $0x18,%esp
0826e202 +0x82e:  mov    0x8(%ebp),%eax
0826e205 +0x831:  mov    %eax,(%esp)
0826e208 +0x834:  call   0826e1da <+0x806>
0826e20d +0x839:  mov    0x8(%ebp),%edx
0826e210 +0x83c:  mov    0x4(%edx),%edx
0826e213 +0x83f:  mov    %eax,0x8(%esp)
0826e217 +0x843:  mov    %edx,0x4(%esp)
0826e21b +0x847:  mov    0xc(%ebp),%eax
0826e21e +0x84a:  mov    %eax,(%esp)
0826e221 +0x84d:  call   0826e1e2 <+0x80e>
0826e226 +0x852:  mov    0x8(%ebp),%eax
0826e229 +0x855:  mov    0xc(%ebp),%edx
0826e22c +0x858:  mov    %edx,0x4(%eax)
0826e22f +0x85b:  leave
0826e230 +0x85c:  ret
0826e231 +0x85d:  nop
0826e232 +0x85e:  push   %ebp
0826e233 +0x85f:  mov    %esp,%ebp
0826e235 +0x861:  sub    $0x18,%esp
0826e238 +0x864:  mov    0x8(%ebp),%eax
0826e23b +0x867:  mov    %eax,(%esp)
0826e23e +0x86a:  call   0826e522 <+0xb4e>
0826e243 +0x86f:  leave
0826e244 +0x870:  ret
0826e245 +0x871:  nop
0826e246 +0x872:  push   %ebp
0826e247 +0x873:  mov    %esp,%ebp
0826e249 +0x875:  sub    $0x18,%esp
0826e24c +0x878:  mov    0x8(%ebp),%eax
0826e24f +0x87b:  mov    %eax,(%esp)
0826e252 +0x87e:  call   0826e572 <+0xb9e>
0826e257 +0x883:  leave
0826e258 +0x884:  ret
0826e259 +0x885:  nop
0826e25a +0x886:  push   %ebp
0826e25b +0x887:  mov    %esp,%ebp
0826e25d +0x889:  sub    $0x28,%esp
0826e260 +0x88c:  jmp    0826e2a2 <+0x8ce>
0826e262 +0x88e:  mov    0xc(%ebp),%eax
0826e265 +0x891:  mov    %eax,(%esp)
0826e268 +0x894:  call   0826e577 <+0xba3>
0826e26d +0x899:  mov    %eax,0x4(%esp)
0826e271 +0x89d:  mov    0x8(%ebp),%eax
0826e274 +0x8a0:  mov    %eax,(%esp)
0826e277 +0x8a3:  call   0826e25a <+0x886>
0826e27c +0x8a8:  mov    0xc(%ebp),%eax
0826e27f +0x8ab:  mov    %eax,(%esp)
0826e282 +0x8ae:  call   0826e582 <+0xbae>
0826e287 +0x8b3:  mov    %eax,-0xc(%ebp)
0826e28a +0x8b6:  mov    0xc(%ebp),%eax
0826e28d +0x8b9:  mov    %eax,0x4(%esp)
0826e291 +0x8bd:  mov    0x8(%ebp),%eax
0826e294 +0x8c0:  mov    %eax,(%esp)
0826e297 +0x8c3:  call   0826e58e <+0xbba>
0826e29c +0x8c8:  mov    -0xc(%ebp),%eax
0826e29f +0x8cb:  mov    %eax,0xc(%ebp)
0826e2a2 +0x8ce:  cmpl   $0x0,0xc(%ebp)
0826e2a6 +0x8d2:  setne  %al
0826e2a9 +0x8d5:  test   %al,%al
0826e2ab +0x8d7:  jne    0826e262 <+0x88e>
0826e2ad +0x8d9:  leave
0826e2ae +0x8da:  ret
0826e2af +0x8db:  nop
0826e2b0 +0x8dc:  push   %ebp
0826e2b1 +0x8dd:  mov    %esp,%ebp
0826e2b3 +0x8df:  mov    0x8(%ebp),%eax
0826e2b6 +0x8e2:  mov    0x8(%eax),%eax
0826e2b9 +0x8e5:  pop    %ebp
0826e2ba +0x8e6:  ret
0826e2bb +0x8e7:  nop
0826e2bc +0x8e8:  push   %ebp
0826e2bd +0x8e9:  mov    %esp,%ebp
0826e2bf +0x8eb:  push   %ebx
0826e2c0 +0x8ec:  sub    $0x14,%esp
0826e2c3 +0x8ef:  mov    0x8(%ebp),%eax
0826e2c6 +0x8f2:  mov    %eax,(%esp)
0826e2c9 +0x8f5:  call   0826e2b0 <+0x8dc>
0826e2ce +0x8fa:  mov    %eax,0x4(%esp)
0826e2d2 +0x8fe:  mov    0x8(%ebp),%eax
0826e2d5 +0x901:  mov    %eax,(%esp)
0826e2d8 +0x904:  call   0826e25a <+0x886>
0826e2dd +0x909:  mov    0x8(%ebp),%eax
0826e2e0 +0x90c:  mov    %eax,(%esp)
0826e2e3 +0x90f:  call   0826e5ce <+0xbfa>
0826e2e8 +0x914:  mov    %eax,%ebx
0826e2ea +0x916:  mov    0x8(%ebp),%eax
0826e2ed +0x919:  mov    %eax,(%esp)
0826e2f0 +0x91c:  call   0826e5c2 <+0xbee>
0826e2f5 +0x921:  mov    %eax,(%ebx)
0826e2f7 +0x923:  mov    0x8(%ebp),%eax
0826e2fa +0x926:  mov    %eax,(%esp)
0826e2fd +0x929:  call   0826e5da <+0xc06>
0826e302 +0x92e:  movl   $0x0,(%eax)
0826e308 +0x934:  mov    0x8(%ebp),%eax
0826e30b +0x937:  mov    %eax,(%esp)
0826e30e +0x93a:  call   0826e5e6 <+0xc12>
0826e313 +0x93f:  mov    %eax,%ebx
0826e315 +0x941:  mov    0x8(%ebp),%eax
0826e318 +0x944:  mov    %eax,(%esp)
0826e31b +0x947:  call   0826e5c2 <+0xbee>
0826e320 +0x94c:  mov    %eax,(%ebx)
0826e322 +0x94e:  mov    0x8(%ebp),%eax
0826e325 +0x951:  movl   $0x0,0x14(%eax)
0826e32c +0x958:  add    $0x14,%esp
0826e32f +0x95b:  pop    %ebx
0826e330 +0x95c:  pop    %ebp
0826e331 +0x95d:  ret
0826e332 +0x95e:  push   %ebp
0826e333 +0x95f:  mov    %esp,%ebp
0826e335 +0x961:  push   %esi
0826e336 +0x962:  push   %ebx
0826e337 +0x963:  sub    $0x30,%esp
0826e33a +0x966:  mov    0x8(%ebp),%ebx
0826e33d +0x969:  mov    0xc(%ebp),%eax
0826e340 +0x96c:  mov    %eax,(%esp)
0826e343 +0x96f:  call   0826e5fe <+0xc2a>
0826e348 +0x974:  mov    %eax,%esi
0826e34a +0x976:  mov    0xc(%ebp),%eax
0826e34d +0x979:  mov    %eax,(%esp)
0826e350 +0x97c:  call   0826e5f2 <+0xc1e>
0826e355 +0x981:  lea    -0x10(%ebp),%edx
0826e358 +0x984:  mov    0x10(%ebp),%ecx
0826e35b +0x987:  mov    %ecx,0x10(%esp)
0826e35f +0x98b:  mov    %esi,0xc(%esp)
0826e363 +0x98f:  mov    %eax,0x8(%esp)
0826e367 +0x993:  mov    0xc(%ebp),%eax
0826e36a +0x996:  mov    %eax,0x4(%esp)
0826e36e +0x99a:  mov    %edx,(%esp)
0826e371 +0x99d:  call   0826e60a <+0xc36>
0826e376 +0x9a2:  sub    $0x4,%esp
0826e379 +0x9a5:  lea    -0xc(%ebp),%eax
0826e37c +0x9a8:  mov    0xc(%ebp),%edx
0826e37f +0x9ab:  mov    %edx,0x4(%esp)
0826e383 +0x9af:  mov    %eax,(%esp)
0826e386 +0x9b2:  call   0826e3f0 <+0xa1c>
0826e38b +0x9b7:  sub    $0x4,%esp
0826e38e +0x9ba:  lea    -0xc(%ebp),%eax
0826e391 +0x9bd:  mov    %eax,0x4(%esp)
0826e395 +0x9c1:  lea    -0x10(%ebp),%eax
0826e398 +0x9c4:  mov    %eax,(%esp)
0826e39b +0x9c7:  call   0826e040 <+0x66c>
0826e3a0 +0x9cc:  test   %al,%al
0826e3a2 +0x9ce:  jne    0826e3c9 <+0x9f5>
0826e3a4 +0x9d0:  mov    -0x10(%ebp),%eax
0826e3a7 +0x9d3:  mov    %eax,(%esp)
0826e3aa +0x9d6:  call   0826e686 <+0xcb2>
0826e3af +0x9db:  mov    0xc(%ebp),%edx
0826e3b2 +0x9de:  mov    %eax,0x8(%esp)
0826e3b6 +0x9e2:  mov    0x10(%ebp),%eax
0826e3b9 +0x9e5:  mov    %eax,0x4(%esp)
0826e3bd +0x9e9:  mov    %edx,(%esp)
0826e3c0 +0x9ec:  call   0826e6a8 <+0xcd4>
0826e3c5 +0x9f1:  test   %al,%al
0826e3c7 +0x9f3:  je     0826e3dd <+0xa09>
0826e3c9 +0x9f5:  mov    0xc(%ebp),%eax
0826e3cc +0x9f8:  mov    %eax,0x4(%esp)
0826e3d0 +0x9fc:  mov    %ebx,(%esp)
0826e3d3 +0x9ff:  call   0826e3f0 <+0xa1c>
0826e3d8 +0xa04:  sub    $0x4,%esp
0826e3db +0xa07:  jmp    0826e3e2 <+0xa0e>
0826e3dd +0xa09:  mov    -0x10(%ebp),%eax
0826e3e0 +0xa0c:  mov    %eax,(%ebx)
0826e3e2 +0xa0e:  mov    %ebx,%eax
0826e3e4 +0xa10:  lea    -0x8(%ebp),%esp
0826e3e7 +0xa13:  add    $0x0,%esp
0826e3ea +0xa16:  pop    %ebx
0826e3eb +0xa17:  pop    %esi
0826e3ec +0xa18:  pop    %ebp
0826e3ed +0xa19:  ret    $0x4
0826e3f0 +0xa1c:  push   %ebp
0826e3f1 +0xa1d:  mov    %esp,%ebp
0826e3f3 +0xa1f:  push   %ebx
0826e3f4 +0xa20:  sub    $0x14,%esp
0826e3f7 +0xa23:  mov    0x8(%ebp),%ebx
0826e3fa +0xa26:  mov    0xc(%ebp),%eax
0826e3fd +0xa29:  add    $0x4,%eax
0826e400 +0xa2c:  mov    %eax,0x4(%esp)
0826e404 +0xa30:  mov    %ebx,(%esp)
0826e407 +0xa33:  call   0826e6be <+0xcea>
0826e40c +0xa38:  mov    %ebx,%eax
0826e40e +0xa3a:  add    $0x14,%esp
0826e411 +0xa3d:  pop    %ebx
0826e412 +0xa3e:  pop    %ebp
0826e413 +0xa3f:  ret    $0x4
0826e416 +0xa42:  push   %ebp
0826e417 +0xa43:  mov    %esp,%ebp
0826e419 +0xa45:  sub    $0x18,%esp
0826e41c +0xa48:  mov    0x8(%ebp),%eax
0826e41f +0xa4b:  mov    %eax,(%esp)
0826e422 +0xa4e:  call   0826e6cc <+0xcf8>
0826e427 +0xa53:  mov    0x8(%ebp),%eax
0826e42a +0xa56:  movl   $0x0,(%eax)
0826e430 +0xa5c:  mov    0x8(%ebp),%eax
0826e433 +0xa5f:  movl   $0x0,0x4(%eax)
0826e43a +0xa66:  mov    0x8(%ebp),%eax
0826e43d +0xa69:  movl   $0x0,0x8(%eax)
0826e444 +0xa70:  leave
0826e445 +0xa71:  ret
0826e446 +0xa72:  push   %ebp
0826e447 +0xa73:  mov    %esp,%ebp
0826e449 +0xa75:  sub    $0x18,%esp
0826e44c +0xa78:  mov    0x8(%ebp),%eax
0826e44f +0xa7b:  mov    %eax,(%esp)
0826e452 +0xa7e:  call   0826e6e0 <+0xd0c>
0826e457 +0xa83:  leave
0826e458 +0xa84:  ret
0826e459 +0xa85:  nop
0826e45a +0xa86:  push   %ebp
0826e45b +0xa87:  mov    %esp,%ebp
0826e45d +0xa89:  sub    $0x18,%esp
0826e460 +0xa8c:  cmpl   $0x0,0xc(%ebp)
0826e464 +0xa90:  je     0826e47f <+0xaab>
0826e466 +0xa92:  mov    0x8(%ebp),%eax
0826e469 +0xa95:  mov    0x10(%ebp),%edx
0826e46c +0xa98:  mov    %edx,0x8(%esp)
0826e470 +0xa9c:  mov    0xc(%ebp),%edx
0826e473 +0xa9f:  mov    %edx,0x4(%esp)
0826e477 +0xaa3:  mov    %eax,(%esp)
0826e47a +0xaa6:  call   0826e6e6 <+0xd12>
0826e47f +0xaab:  leave
0826e480 +0xaac:  ret
0826e481 +0xaad:  push   %ebp
0826e482 +0xaae:  mov    %esp,%ebp
0826e484 +0xab0:  sub    $0x18,%esp
0826e487 +0xab3:  mov    0xc(%ebp),%eax
0826e48a +0xab6:  mov    %eax,0x4(%esp)
0826e48e +0xaba:  mov    0x8(%ebp),%eax
0826e491 +0xabd:  mov    %eax,(%esp)
0826e494 +0xac0:  call   0826e6f9 <+0xd25>
0826e499 +0xac5:  leave
0826e49a +0xac6:  ret
0826e49b +0xac7:  nop
0826e49c +0xac8:  push   %ebp
0826e49d +0xac9:  mov    %esp,%ebp
0826e49f +0xacb:  sub    $0x18,%esp
0826e4a2 +0xace:  mov    0x8(%ebp),%eax
0826e4a5 +0xad1:  mov    %eax,(%esp)
0826e4a8 +0xad4:  call   0826e6fe <+0xd2a>
0826e4ad +0xad9:  mov    0x8(%ebp),%eax
0826e4b0 +0xadc:  movl   $0x0,(%eax)
0826e4b6 +0xae2:  mov    0x8(%ebp),%eax
0826e4b9 +0xae5:  movl   $0x0,0x4(%eax)
0826e4c0 +0xaec:  mov    0x8(%ebp),%eax
0826e4c3 +0xaef:  movl   $0x0,0x8(%eax)
0826e4ca +0xaf6:  leave
0826e4cb +0xaf7:  ret
0826e4cc +0xaf8:  push   %ebp
0826e4cd +0xaf9:  mov    %esp,%ebp
0826e4cf +0xafb:  sub    $0x18,%esp
0826e4d2 +0xafe:  mov    0x8(%ebp),%eax
0826e4d5 +0xb01:  mov    %eax,(%esp)
0826e4d8 +0xb04:  call   0826e712 <+0xd3e>
0826e4dd +0xb09:  leave
0826e4de +0xb0a:  ret
0826e4df +0xb0b:  nop
0826e4e0 +0xb0c:  push   %ebp
0826e4e1 +0xb0d:  mov    %esp,%ebp
0826e4e3 +0xb0f:  sub    $0x18,%esp
0826e4e6 +0xb12:  cmpl   $0x0,0xc(%ebp)
0826e4ea +0xb16:  je     0826e505 <+0xb31>
0826e4ec +0xb18:  mov    0x8(%ebp),%eax
0826e4ef +0xb1b:  mov    0x10(%ebp),%edx
0826e4f2 +0xb1e:  mov    %edx,0x8(%esp)
0826e4f6 +0xb22:  mov    0xc(%ebp),%edx
0826e4f9 +0xb25:  mov    %edx,0x4(%esp)
0826e4fd +0xb29:  mov    %eax,(%esp)
0826e500 +0xb2c:  call   0826e718 <+0xd44>
0826e505 +0xb31:  leave
0826e506 +0xb32:  ret
0826e507 +0xb33:  push   %ebp
0826e508 +0xb34:  mov    %esp,%ebp
0826e50a +0xb36:  sub    $0x18,%esp
0826e50d +0xb39:  mov    0xc(%ebp),%eax
0826e510 +0xb3c:  mov    %eax,0x4(%esp)
0826e514 +0xb40:  mov    0x8(%ebp),%eax
0826e517 +0xb43:  mov    %eax,(%esp)
0826e51a +0xb46:  call   0826e72b <+0xd57>
0826e51f +0xb4b:  leave
0826e520 +0xb4c:  ret
0826e521 +0xb4d:  nop
0826e522 +0xb4e:  push   %ebp
0826e523 +0xb4f:  mov    %esp,%ebp
0826e525 +0xb51:  sub    $0x18,%esp
0826e528 +0xb54:  mov    0x8(%ebp),%eax
0826e52b +0xb57:  mov    %eax,(%esp)
0826e52e +0xb5a:  call   0826e730 <+0xd5c>
0826e533 +0xb5f:  mov    0x8(%ebp),%eax
0826e536 +0xb62:  movl   $0x0,0x4(%eax)
0826e53d +0xb69:  mov    0x8(%ebp),%eax
0826e540 +0xb6c:  movl   $0x0,0x8(%eax)
0826e547 +0xb73:  mov    0x8(%ebp),%eax
0826e54a +0xb76:  movl   $0x0,0xc(%eax)
0826e551 +0xb7d:  mov    0x8(%ebp),%eax
0826e554 +0xb80:  movl   $0x0,0x10(%eax)
0826e55b +0xb87:  mov    0x8(%ebp),%eax
0826e55e +0xb8a:  movl   $0x0,0x14(%eax)
0826e565 +0xb91:  mov    0x8(%ebp),%eax
0826e568 +0xb94:  mov    %eax,(%esp)
0826e56b +0xb97:  call   0826e744 <+0xd70>
0826e570 +0xb9c:  leave
0826e571 +0xb9d:  ret
0826e572 +0xb9e:  push   %ebp
0826e573 +0xb9f:  mov    %esp,%ebp
0826e575 +0xba1:  pop    %ebp
0826e576 +0xba2:  ret
0826e577 +0xba3:  push   %ebp
0826e578 +0xba4:  mov    %esp,%ebp
0826e57a +0xba6:  mov    0x8(%ebp),%eax
0826e57d +0xba9:  mov    0xc(%eax),%eax
0826e580 +0xbac:  pop    %ebp
0826e581 +0xbad:  ret
0826e582 +0xbae:  push   %ebp
0826e583 +0xbaf:  mov    %esp,%ebp
0826e585 +0xbb1:  mov    0x8(%ebp),%eax
0826e588 +0xbb4:  mov    0x8(%eax),%eax
0826e58b +0xbb7:  pop    %ebp
0826e58c +0xbb8:  ret
0826e58d +0xbb9:  nop
0826e58e +0xbba:  push   %ebp
0826e58f +0xbbb:  mov    %esp,%ebp
0826e591 +0xbbd:  sub    $0x18,%esp
0826e594 +0xbc0:  mov    0x8(%ebp),%eax
0826e597 +0xbc3:  mov    %eax,(%esp)
0826e59a +0xbc6:  call   0826e776 <+0xda2>
0826e59f +0xbcb:  mov    0xc(%ebp),%edx
0826e5a2 +0xbce:  mov    %edx,0x4(%esp)
0826e5a6 +0xbd2:  mov    %eax,(%esp)
0826e5a9 +0xbd5:  call   0826e7f6 <+0xe22>
0826e5ae +0xbda:  mov    0xc(%ebp),%eax
0826e5b1 +0xbdd:  mov    %eax,0x4(%esp)
0826e5b5 +0xbe1:  mov    0x8(%ebp),%eax
0826e5b8 +0xbe4:  mov    %eax,(%esp)
0826e5bb +0xbe7:  call   0826e80a <+0xe36>
0826e5c0 +0xbec:  leave
0826e5c1 +0xbed:  ret
0826e5c2 +0xbee:  push   %ebp
0826e5c3 +0xbef:  mov    %esp,%ebp
0826e5c5 +0xbf1:  mov    0x8(%ebp),%eax
0826e5c8 +0xbf4:  add    $0x4,%eax
0826e5cb +0xbf7:  pop    %ebp
0826e5cc +0xbf8:  ret
0826e5cd +0xbf9:  nop
0826e5ce +0xbfa:  push   %ebp
0826e5cf +0xbfb:  mov    %esp,%ebp
0826e5d1 +0xbfd:  mov    0x8(%ebp),%eax
0826e5d4 +0xc00:  add    $0xc,%eax
0826e5d7 +0xc03:  pop    %ebp
0826e5d8 +0xc04:  ret
0826e5d9 +0xc05:  nop
0826e5da +0xc06:  push   %ebp
0826e5db +0xc07:  mov    %esp,%ebp
0826e5dd +0xc09:  mov    0x8(%ebp),%eax
0826e5e0 +0xc0c:  add    $0x8,%eax
0826e5e3 +0xc0f:  pop    %ebp
0826e5e4 +0xc10:  ret
0826e5e5 +0xc11:  nop
0826e5e6 +0xc12:  push   %ebp
0826e5e7 +0xc13:  mov    %esp,%ebp
0826e5e9 +0xc15:  mov    0x8(%ebp),%eax
0826e5ec +0xc18:  add    $0x10,%eax
0826e5ef +0xc1b:  pop    %ebp
0826e5f0 +0xc1c:  ret
0826e5f1 +0xc1d:  nop
0826e5f2 +0xc1e:  push   %ebp
0826e5f3 +0xc1f:  mov    %esp,%ebp
0826e5f5 +0xc21:  mov    0x8(%ebp),%eax
0826e5f8 +0xc24:  mov    0x8(%eax),%eax
0826e5fb +0xc27:  pop    %ebp
0826e5fc +0xc28:  ret
0826e5fd +0xc29:  nop
0826e5fe +0xc2a:  push   %ebp
0826e5ff +0xc2b:  mov    %esp,%ebp
0826e601 +0xc2d:  mov    0x8(%ebp),%eax
0826e604 +0xc30:  add    $0x4,%eax
0826e607 +0xc33:  pop    %ebp
0826e608 +0xc34:  ret
0826e609 +0xc35:  nop
0826e60a +0xc36:  push   %ebp
0826e60b +0xc37:  mov    %esp,%ebp
0826e60d +0xc39:  push   %ebx
0826e60e +0xc3a:  sub    $0x14,%esp
0826e611 +0xc3d:  mov    0x8(%ebp),%ebx
0826e614 +0xc40:  jmp    0826e662 <+0xc8e>
0826e616 +0xc42:  mov    0x10(%ebp),%eax
0826e619 +0xc45:  mov    %eax,(%esp)
0826e61c +0xc48:  call   0826e82c <+0xe58>
0826e621 +0xc4d:  mov    0xc(%ebp),%edx
0826e624 +0xc50:  mov    0x18(%ebp),%ecx
0826e627 +0xc53:  mov    %ecx,0x8(%esp)
0826e62b +0xc57:  mov    %eax,0x4(%esp)
0826e62f +0xc5b:  mov    %edx,(%esp)
0826e632 +0xc5e:  call   0826e6a8 <+0xcd4>
0826e637 +0xc63:  xor    $0x1,%eax
0826e63a +0xc66:  test   %al,%al
0826e63c +0xc68:  je     0826e654 <+0xc80>
0826e63e +0xc6a:  mov    0x10(%ebp),%eax
0826e641 +0xc6d:  mov    %eax,0x14(%ebp)
0826e644 +0xc70:  mov    0x10(%ebp),%eax
0826e647 +0xc73:  mov    %eax,(%esp)
0826e64a +0xc76:  call   0826e84e <+0xe7a>
0826e64f +0xc7b:  mov    %eax,0x10(%ebp)
0826e652 +0xc7e:  jmp    0826e662 <+0xc8e>
0826e654 +0xc80:  mov    0x10(%ebp),%eax
0826e657 +0xc83:  mov    %eax,(%esp)
0826e65a +0xc86:  call   0826e859 <+0xe85>
0826e65f +0xc8b:  mov    %eax,0x10(%ebp)
0826e662 +0xc8e:  cmpl   $0x0,0x10(%ebp)
0826e666 +0xc92:  setne  %al
0826e669 +0xc95:  test   %al,%al
0826e66b +0xc97:  jne    0826e616 <+0xc42>
0826e66d +0xc99:  mov    0x14(%ebp),%eax
0826e670 +0xc9c:  mov    %eax,0x4(%esp)
0826e674 +0xca0:  mov    %ebx,(%esp)
0826e677 +0xca3:  call   0826e6be <+0xcea>
0826e67c +0xca8:  mov    %ebx,%eax
0826e67e +0xcaa:  add    $0x14,%esp
0826e681 +0xcad:  pop    %ebx
0826e682 +0xcae:  pop    %ebp
0826e683 +0xcaf:  ret    $0x4
0826e686 +0xcb2:  push   %ebp
0826e687 +0xcb3:  mov    %esp,%ebp
0826e689 +0xcb5:  sub    $0x28,%esp
0826e68c +0xcb8:  mov    0x8(%ebp),%eax
0826e68f +0xcbb:  mov    %eax,(%esp)
0826e692 +0xcbe:  call   0826e864 <+0xe90>
0826e697 +0xcc3:  mov    %eax,0x4(%esp)
0826e69b +0xcc7:  lea    -0x9(%ebp),%eax
0826e69e +0xcca:  mov    %eax,(%esp)
0826e6a1 +0xccd:  call   0826e870 <+0xe9c>
0826e6a6 +0xcd2:  leave
0826e6a7 +0xcd3:  ret
0826e6a8 +0xcd4:  push   %ebp
0826e6a9 +0xcd5:  mov    %esp,%ebp
0826e6ab +0xcd7:  mov    0xc(%ebp),%eax
0826e6ae +0xcda:  mov    (%eax),%eax
0826e6b0 +0xcdc:  mov    %eax,%edx
0826e6b2 +0xcde:  mov    0x10(%ebp),%eax
0826e6b5 +0xce1:  mov    (%eax),%eax
0826e6b7 +0xce3:  cmp    %eax,%edx
0826e6b9 +0xce5:  setl   %al
0826e6bc +0xce8:  pop    %ebp
0826e6bd +0xce9:  ret
0826e6be +0xcea:  push   %ebp
0826e6bf +0xceb:  mov    %esp,%ebp
0826e6c1 +0xced:  mov    0xc(%ebp),%edx
0826e6c4 +0xcf0:  mov    0x8(%ebp),%eax
0826e6c7 +0xcf3:  mov    %edx,(%eax)
0826e6c9 +0xcf5:  pop    %ebp
0826e6ca +0xcf6:  ret
0826e6cb +0xcf7:  nop
0826e6cc +0xcf8:  push   %ebp
0826e6cd +0xcf9:  mov    %esp,%ebp
0826e6cf +0xcfb:  sub    $0x18,%esp
0826e6d2 +0xcfe:  mov    0x8(%ebp),%eax
0826e6d5 +0xd01:  mov    %eax,(%esp)
0826e6d8 +0xd04:  call   0826e878 <+0xea4>
0826e6dd +0xd09:  leave
0826e6de +0xd0a:  ret
0826e6df +0xd0b:  nop
0826e6e0 +0xd0c:  push   %ebp
0826e6e1 +0xd0d:  mov    %esp,%ebp
0826e6e3 +0xd0f:  pop    %ebp
0826e6e4 +0xd10:  ret
0826e6e5 +0xd11:  nop
0826e6e6 +0xd12:  push   %ebp
0826e6e7 +0xd13:  mov    %esp,%ebp
0826e6e9 +0xd15:  sub    $0x18,%esp
0826e6ec +0xd18:  mov    0xc(%ebp),%eax
0826e6ef +0xd1b:  mov    %eax,(%esp)
0826e6f2 +0xd1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826e6f7 +0xd23:  leave
0826e6f8 +0xd24:  ret
0826e6f9 +0xd25:  push   %ebp
0826e6fa +0xd26:  mov    %esp,%ebp
0826e6fc +0xd28:  pop    %ebp
0826e6fd +0xd29:  ret
0826e6fe +0xd2a:  push   %ebp
0826e6ff +0xd2b:  mov    %esp,%ebp
0826e701 +0xd2d:  sub    $0x18,%esp
0826e704 +0xd30:  mov    0x8(%ebp),%eax
0826e707 +0xd33:  mov    %eax,(%esp)
0826e70a +0xd36:  call   0826e87e <+0xeaa>
0826e70f +0xd3b:  leave
0826e710 +0xd3c:  ret
0826e711 +0xd3d:  nop
0826e712 +0xd3e:  push   %ebp
0826e713 +0xd3f:  mov    %esp,%ebp
0826e715 +0xd41:  pop    %ebp
0826e716 +0xd42:  ret
0826e717 +0xd43:  nop
0826e718 +0xd44:  push   %ebp
0826e719 +0xd45:  mov    %esp,%ebp
0826e71b +0xd47:  sub    $0x18,%esp
0826e71e +0xd4a:  mov    0xc(%ebp),%eax
0826e721 +0xd4d:  mov    %eax,(%esp)
0826e724 +0xd50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826e729 +0xd55:  leave
0826e72a +0xd56:  ret
0826e72b +0xd57:  push   %ebp
0826e72c +0xd58:  mov    %esp,%ebp
0826e72e +0xd5a:  pop    %ebp
0826e72f +0xd5b:  ret
0826e730 +0xd5c:  push   %ebp
0826e731 +0xd5d:  mov    %esp,%ebp
0826e733 +0xd5f:  sub    $0x18,%esp
0826e736 +0xd62:  mov    0x8(%ebp),%eax
0826e739 +0xd65:  mov    %eax,(%esp)
0826e73c +0xd68:  call   0826e884 <+0xeb0>
0826e741 +0xd6d:  leave
0826e742 +0xd6e:  ret
0826e743 +0xd6f:  nop
0826e744 +0xd70:  push   %ebp
0826e745 +0xd71:  mov    %esp,%ebp
0826e747 +0xd73:  mov    0x8(%ebp),%eax
0826e74a +0xd76:  movl   $0x0,0x4(%eax)
0826e751 +0xd7d:  mov    0x8(%ebp),%eax
0826e754 +0xd80:  movl   $0x0,0x8(%eax)
0826e75b +0xd87:  mov    0x8(%ebp),%eax
0826e75e +0xd8a:  lea    0x4(%eax),%edx
0826e761 +0xd8d:  mov    0x8(%ebp),%eax
0826e764 +0xd90:  mov    %edx,0xc(%eax)
0826e767 +0xd93:  mov    0x8(%ebp),%eax
0826e76a +0xd96:  lea    0x4(%eax),%edx
0826e76d +0xd99:  mov    0x8(%ebp),%eax
0826e770 +0xd9c:  mov    %edx,0x10(%eax)
0826e773 +0xd9f:  pop    %ebp
0826e774 +0xda0:  ret
0826e775 +0xda1:  nop
0826e776 +0xda2:  push   %ebp
0826e777 +0xda3:  mov    %esp,%ebp
0826e779 +0xda5:  mov    0x8(%ebp),%eax
0826e77c +0xda8:  pop    %ebp
0826e77d +0xda9:  ret
0826e77e +0xdaa:  push   %ebp
0826e77f +0xdab:  mov    %esp,%ebp
0826e781 +0xdad:  push   %esi
0826e782 +0xdae:  push   %ebx
0826e783 +0xdaf:  sub    $0x10,%esp
0826e786 +0xdb2:  mov    0x8(%ebp),%eax
0826e789 +0xdb5:  add    $0x8,%eax
0826e78c +0xdb8:  mov    %eax,(%esp)
0826e78f +0xdbb:  call   0826ddfc <+0x428>
0826e794 +0xdc0:  jmp    0826e7b4 <+0xde0>
0826e796 +0xdc2:  mov    %edx,%ebx
0826e798 +0xdc4:  mov    %eax,%esi
0826e79a +0xdc6:  mov    0x8(%ebp),%eax
0826e79d +0xdc9:  add    $0x4,%eax
0826e7a0 +0xdcc:  mov    %eax,(%esp)
0826e7a3 +0xdcf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0826e7a8 +0xdd4:  mov    %esi,%eax
0826e7aa +0xdd6:  mov    %ebx,%edx
0826e7ac +0xdd8:  mov    %eax,(%esp)
0826e7af +0xddb:  call   08ae3750 <_Unwind_Resume>
0826e7b4 +0xde0:  mov    0x8(%ebp),%eax
0826e7b7 +0xde3:  add    $0x4,%eax
0826e7ba +0xde6:  mov    %eax,(%esp)
0826e7bd +0xde9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0826e7c2 +0xdee:  add    $0x10,%esp
0826e7c5 +0xdf1:  pop    %ebx
0826e7c6 +0xdf2:  pop    %esi
0826e7c7 +0xdf3:  pop    %ebp
0826e7c8 +0xdf4:  ret
0826e7c9 +0xdf5:  nop
0826e7ca +0xdf6:  push   %ebp
0826e7cb +0xdf7:  mov    %esp,%ebp
0826e7cd +0xdf9:  sub    $0x18,%esp
0826e7d0 +0xdfc:  mov    0x8(%ebp),%eax
0826e7d3 +0xdff:  add    $0x4,%eax
0826e7d6 +0xe02:  mov    %eax,(%esp)
0826e7d9 +0xe05:  call   0826e77e <+0xdaa>
0826e7de +0xe0a:  leave
0826e7df +0xe0b:  ret
0826e7e0 +0xe0c:  push   %ebp
0826e7e1 +0xe0d:  mov    %esp,%ebp
0826e7e3 +0xe0f:  sub    $0x18,%esp
0826e7e6 +0xe12:  mov    0x8(%ebp),%eax
0826e7e9 +0xe15:  add    $0x10,%eax
0826e7ec +0xe18:  mov    %eax,(%esp)
0826e7ef +0xe1b:  call   0826e7ca <+0xdf6>
0826e7f4 +0xe20:  leave
0826e7f5 +0xe21:  ret
0826e7f6 +0xe22:  push   %ebp
0826e7f7 +0xe23:  mov    %esp,%ebp
0826e7f9 +0xe25:  sub    $0x18,%esp
0826e7fc +0xe28:  mov    0xc(%ebp),%eax
0826e7ff +0xe2b:  mov    %eax,(%esp)
0826e802 +0xe2e:  call   0826e7e0 <+0xe0c>
0826e807 +0xe33:  leave
0826e808 +0xe34:  ret
0826e809 +0xe35:  nop
0826e80a +0xe36:  push   %ebp
0826e80b +0xe37:  mov    %esp,%ebp
0826e80d +0xe39:  sub    $0x18,%esp
0826e810 +0xe3c:  mov    0x8(%ebp),%eax
0826e813 +0xe3f:  movl   $0x1,0x8(%esp)
0826e81b +0xe47:  mov    0xc(%ebp),%edx
0826e81e +0xe4a:  mov    %edx,0x4(%esp)
0826e822 +0xe4e:  mov    %eax,(%esp)
0826e825 +0xe51:  call   0826e88a <+0xeb6>
0826e82a +0xe56:  leave
0826e82b +0xe57:  ret
0826e82c +0xe58:  push   %ebp
0826e82d +0xe59:  mov    %esp,%ebp
0826e82f +0xe5b:  sub    $0x28,%esp
0826e832 +0xe5e:  mov    0x8(%ebp),%eax
0826e835 +0xe61:  mov    %eax,(%esp)
0826e838 +0xe64:  call   0826e89d <+0xec9>
0826e83d +0xe69:  mov    %eax,0x4(%esp)
0826e841 +0xe6d:  lea    -0x9(%ebp),%eax
0826e844 +0xe70:  mov    %eax,(%esp)
0826e847 +0xe73:  call   0826e870 <+0xe9c>
0826e84c +0xe78:  leave
0826e84d +0xe79:  ret
0826e84e +0xe7a:  push   %ebp
0826e84f +0xe7b:  mov    %esp,%ebp
0826e851 +0xe7d:  mov    0x8(%ebp),%eax
0826e854 +0xe80:  mov    0x8(%eax),%eax
0826e857 +0xe83:  pop    %ebp
0826e858 +0xe84:  ret
0826e859 +0xe85:  push   %ebp
0826e85a +0xe86:  mov    %esp,%ebp
0826e85c +0xe88:  mov    0x8(%ebp),%eax
0826e85f +0xe8b:  mov    0xc(%eax),%eax
0826e862 +0xe8e:  pop    %ebp
0826e863 +0xe8f:  ret
0826e864 +0xe90:  push   %ebp
0826e865 +0xe91:  mov    %esp,%ebp
0826e867 +0xe93:  mov    0x8(%ebp),%eax
0826e86a +0xe96:  add    $0x10,%eax
0826e86d +0xe99:  pop    %ebp
0826e86e +0xe9a:  ret
0826e86f +0xe9b:  nop
0826e870 +0xe9c:  push   %ebp
0826e871 +0xe9d:  mov    %esp,%ebp
0826e873 +0xe9f:  mov    0xc(%ebp),%eax
0826e876 +0xea2:  pop    %ebp
0826e877 +0xea3:  ret
0826e878 +0xea4:  push   %ebp
0826e879 +0xea5:  mov    %esp,%ebp
0826e87b +0xea7:  pop    %ebp
0826e87c +0xea8:  ret
0826e87d +0xea9:  nop
0826e87e +0xeaa:  push   %ebp
0826e87f +0xeab:  mov    %esp,%ebp
0826e881 +0xead:  pop    %ebp
0826e882 +0xeae:  ret
0826e883 +0xeaf:  nop
0826e884 +0xeb0:  push   %ebp
0826e885 +0xeb1:  mov    %esp,%ebp
0826e887 +0xeb3:  pop    %ebp
0826e888 +0xeb4:  ret
0826e889 +0xeb5:  nop
0826e88a +0xeb6:  push   %ebp
0826e88b +0xeb7:  mov    %esp,%ebp
0826e88d +0xeb9:  sub    $0x18,%esp
0826e890 +0xebc:  mov    0xc(%ebp),%eax
0826e893 +0xebf:  mov    %eax,(%esp)
0826e896 +0xec2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826e89b +0xec7:  leave
0826e89c +0xec8:  ret
0826e89d +0xec9:  push   %ebp
0826e89e +0xeca:  mov    %esp,%ebp
0826e8a0 +0xecc:  mov    0x8(%ebp),%eax
0826e8a3 +0xecf:  add    $0x10,%eax
0826e8a6 +0xed2:  pop    %ebp
0826e8a7 +0xed3:  ret
```

## 反编译 C

```c
// <global>::global @ 0x826d9d4

/* QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
    */

void QuickParty::RewardCardGold::_GLOBAL__I_process(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
