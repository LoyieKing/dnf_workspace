# onTimer

`_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj`

`WongWork::CDeathTower::onTimer(TIMER_MESSAGE, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08462aae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08462aae  _ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj
#           WongWork::CDeathTower::onTimer(TIMER_MESSAGE, unsigned int)
# range [0x08462aae, 0x084636f1]
08462aae +0x000:  push   %ebp
08462aaf +0x001:  mov    %esp,%ebp
08462ab1 +0x003:  push   %edi
08462ab2 +0x004:  push   %esi
08462ab3 +0x005:  push   %ebx
08462ab4 +0x006:  sub    $0x14c,%esp
08462aba +0x00c:  mov    0x10(%ebp),%eax
08462abd +0x00f:  mov    %eax,0x8(%esp)
08462ac1 +0x013:  mov    0xc(%ebp),%eax
08462ac4 +0x016:  mov    %eax,0x4(%esp)
08462ac8 +0x01a:  mov    0x8(%ebp),%eax
08462acb +0x01d:  mov    %eax,(%esp)
08462ace +0x020:  call   08469c68 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x34b>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x34b
08462ad3 +0x025:  xor    $0x1,%eax
08462ad6 +0x028:  test   %al,%al
08462ad8 +0x02a:  je     08462ae4 <+0x36>
08462ada +0x02c:  mov    $0x0,%eax
08462adf +0x031:  jmp    084636e7 <+0xc39>
08462ae4 +0x036:  mov    0x8(%ebp),%eax
08462ae7 +0x039:  mov    %eax,(%esp)
08462aea +0x03c:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08462aef +0x041:  test   %eax,%eax
08462af1 +0x043:  sete   %al
08462af4 +0x046:  test   %al,%al
08462af6 +0x048:  je     08462b02 <+0x54>
08462af8 +0x04a:  mov    $0x0,%eax
08462afd +0x04f:  jmp    084636e7 <+0xc39>
08462b02 +0x054:  cmpl   $0x49,0xc(%ebp)
08462b06 +0x058:  jne    08462d01 <+0x253>
08462b0c +0x05e:  mov    0x8(%ebp),%eax
08462b0f +0x061:  mov    (%eax),%eax
08462b11 +0x063:  mov    %eax,(%esp)
08462b14 +0x066:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08462b19 +0x06b:  mov    %eax,-0x60(%ebp)
08462b1c +0x06e:  cmpl   $0x0,-0x60(%ebp)
08462b20 +0x072:  jne    08462b37 <+0x89>
08462b22 +0x074:  mov    0x8(%ebp),%eax
08462b25 +0x077:  mov    %eax,(%esp)
08462b28 +0x07a:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
08462b2d +0x07f:  mov    $0x1,%eax
08462b32 +0x084:  jmp    084636e7 <+0xc39>
08462b37 +0x089:  movb   $0x0,-0x59(%ebp)
08462b3b +0x08d:  movl   $0x0,-0x54(%ebp)
08462b42 +0x094:  jmp    08462c24 <+0x176>
08462b47 +0x099:  movl   $0x0,-0x50(%ebp)
08462b4e +0x0a0:  mov    0x8(%ebp),%eax
08462b51 +0x0a3:  mov    (%eax),%eax
08462b53 +0x0a5:  mov    -0x54(%ebp),%edx
08462b56 +0x0a8:  mov    %edx,0x4(%esp)
08462b5a +0x0ac:  mov    %eax,(%esp)
08462b5d +0x0af:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08462b62 +0x0b4:  mov    %eax,-0x50(%ebp)
08462b65 +0x0b7:  cmpl   $0x0,-0x50(%ebp)
08462b69 +0x0bb:  je     08462b86 <+0xd8>
08462b6b +0x0bd:  mov    0x8(%ebp),%eax
08462b6e +0x0c0:  mov    (%eax),%eax
08462b70 +0x0c2:  mov    -0x54(%ebp),%edx
08462b73 +0x0c5:  mov    %edx,0x4(%esp)
08462b77 +0x0c9:  mov    %eax,(%esp)
08462b7a +0x0cc:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08462b7f +0x0d1:  xor    $0x1,%eax
08462b82 +0x0d4:  test   %al,%al
08462b84 +0x0d6:  je     08462b8d <+0xdf>
08462b86 +0x0d8:  mov    $0x1,%eax
08462b8b +0x0dd:  jmp    08462b92 <+0xe4>
08462b8d +0x0df:  mov    $0x0,%eax
08462b92 +0x0e4:  test   %al,%al
08462b94 +0x0e6:  jne    08462c1f <+0x171>
08462b9a +0x0ec:  mov    0x8(%ebp),%eax
08462b9d +0x0ef:  lea    0x110(%eax),%edx
08462ba3 +0x0f5:  mov    -0x54(%ebp),%eax
08462ba6 +0x0f8:  mov    %eax,0x4(%esp)
08462baa +0x0fc:  mov    %edx,(%esp)
08462bad +0x0ff:  call   08469ba2 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x285>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x285
08462bb2 +0x104:  xor    $0x1,%eax
08462bb5 +0x107:  test   %al,%al
08462bb7 +0x109:  je     08462c20 <+0x172>
08462bb9 +0x10b:  lea    -0x6c(%ebp),%eax
08462bbc +0x10e:  mov    %eax,(%esp)
08462bbf +0x111:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08462bc4 +0x116:  lea    -0x6c(%ebp),%eax
08462bc7 +0x119:  mov    %eax,(%esp)
08462bca +0x11c:  call   0846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>  ; WongWork::CDeathTower::CPacketHandler::makeFinishLoading()
08462bcf +0x121:  lea    -0x6c(%ebp),%eax
08462bd2 +0x124:  mov    %eax,0x4(%esp)
08462bd6 +0x128:  mov    -0x50(%ebp),%eax
08462bd9 +0x12b:  mov    %eax,(%esp)
08462bdc +0x12e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08462be1 +0x133:  mov    -0x50(%ebp),%eax
08462be4 +0x136:  mov    %eax,0x4(%esp)
08462be8 +0x13a:  mov    0x8(%ebp),%eax
08462beb +0x13d:  mov    %eax,(%esp)
08462bee +0x140:  call   08465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>  ; WongWork::CDeathTower::handleLeaveUser(CUser*)
08462bf3 +0x145:  movb   $0x1,-0x59(%ebp)
08462bf7 +0x149:  lea    -0x6c(%ebp),%eax
08462bfa +0x14c:  mov    %eax,(%esp)
08462bfd +0x14f:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462c02 +0x154:  jmp    08462c20 <+0x172>
08462c04 +0x156:  mov    %edx,%ebx
08462c06 +0x158:  mov    %eax,%esi
08462c08 +0x15a:  lea    -0x6c(%ebp),%eax
08462c0b +0x15d:  mov    %eax,(%esp)
08462c0e +0x160:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462c13 +0x165:  mov    %esi,%eax
08462c15 +0x167:  mov    %ebx,%edx
08462c17 +0x169:  mov    %eax,(%esp)
08462c1a +0x16c:  call   08ae3750 <_Unwind_Resume>
08462c1f +0x171:  nop
08462c20 +0x172:  addl   $0x1,-0x54(%ebp)
08462c24 +0x176:  cmpl   $0x3,-0x54(%ebp)
08462c28 +0x17a:  setle  %al
08462c2b +0x17d:  test   %al,%al
08462c2d +0x17f:  jne    08462b47 <+0x99>
08462c33 +0x185:  mov    0x8(%ebp),%eax
08462c36 +0x188:  mov    (%eax),%eax
08462c38 +0x18a:  mov    %eax,(%esp)
08462c3b +0x18d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08462c40 +0x192:  mov    %eax,-0x58(%ebp)
08462c43 +0x195:  cmpb   $0x0,-0x59(%ebp)
08462c47 +0x199:  je     08462ce7 <+0x239>
08462c4d +0x19f:  cmpl   $0x0,-0x58(%ebp)
08462c51 +0x1a3:  jle    08462ce7 <+0x239>
08462c57 +0x1a9:  movl   $0x0,-0x4c(%ebp)
08462c5e +0x1b0:  jmp    08462c84 <+0x1d6>
08462c60 +0x1b2:  mov    0x8(%ebp),%eax
08462c63 +0x1b5:  lea    0x110(%eax),%edx
08462c69 +0x1bb:  movl   $0x1,0x8(%esp)
08462c71 +0x1c3:  mov    -0x4c(%ebp),%eax
08462c74 +0x1c6:  mov    %eax,0x4(%esp)
08462c78 +0x1ca:  mov    %edx,(%esp)
08462c7b +0x1cd:  call   08469b86 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x269>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x269
08462c80 +0x1d2:  addl   $0x1,-0x4c(%ebp)
08462c84 +0x1d6:  cmpl   $0x3,-0x4c(%ebp)
08462c88 +0x1da:  setle  %al
08462c8b +0x1dd:  test   %al,%al
08462c8d +0x1df:  jne    08462c60 <+0x1b2>
08462c8f +0x1e1:  lea    -0x78(%ebp),%eax
08462c92 +0x1e4:  mov    %eax,(%esp)
08462c95 +0x1e7:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08462c9a +0x1ec:  lea    -0x78(%ebp),%eax
08462c9d +0x1ef:  mov    %eax,(%esp)
08462ca0 +0x1f2:  call   0846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>  ; WongWork::CDeathTower::CPacketHandler::makeFinishLoading()
08462ca5 +0x1f7:  mov    0x8(%ebp),%eax
08462ca8 +0x1fa:  mov    (%eax),%eax
08462caa +0x1fc:  lea    -0x78(%ebp),%edx
08462cad +0x1ff:  mov    %edx,0x4(%esp)
08462cb1 +0x203:  mov    %eax,(%esp)
08462cb4 +0x206:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08462cb9 +0x20b:  jmp    08462cd6 <+0x228>
08462cbb +0x20d:  mov    %edx,%ebx
08462cbd +0x20f:  mov    %eax,%esi
08462cbf +0x211:  lea    -0x78(%ebp),%eax
08462cc2 +0x214:  mov    %eax,(%esp)
08462cc5 +0x217:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462cca +0x21c:  mov    %esi,%eax
08462ccc +0x21e:  mov    %ebx,%edx
08462cce +0x220:  mov    %eax,(%esp)
08462cd1 +0x223:  call   08ae3750 <_Unwind_Resume>
08462cd6 +0x228:  lea    -0x78(%ebp),%eax
08462cd9 +0x22b:  mov    %eax,(%esp)
08462cdc +0x22e:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462ce1 +0x233:  nop
08462ce2 +0x234:  jmp    084636e2 <+0xc34>
08462ce7 +0x239:  cmpl   $0x0,-0x58(%ebp)
08462ceb +0x23d:  jne    084636e1 <+0xc33>
08462cf1 +0x243:  mov    0x8(%ebp),%eax
08462cf4 +0x246:  mov    %eax,(%esp)
08462cf7 +0x249:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
08462cfc +0x24e:  jmp    084636e2 <+0xc34>
08462d01 +0x253:  cmpl   $0x4b,0xc(%ebp)
08462d05 +0x257:  jne    08462ff0 <+0x542>
08462d0b +0x25d:  mov    0x8(%ebp),%eax
08462d0e +0x260:  mov    %eax,(%esp)
08462d11 +0x263:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08462d16 +0x268:  cmp    $0x2,%eax
08462d19 +0x26b:  setle  %al
08462d1c +0x26e:  test   %al,%al
08462d1e +0x270:  je     08462d2a <+0x27c>
08462d20 +0x272:  mov    $0x0,%eax
08462d25 +0x277:  jmp    084636e7 <+0xc39>
08462d2a +0x27c:  movl   $0x0,-0x48(%ebp)
08462d31 +0x283:  jmp    08462f79 <+0x4cb>
08462d36 +0x288:  movl   $0x0,-0x44(%ebp)
08462d3d +0x28f:  mov    0x8(%ebp),%eax
08462d40 +0x292:  mov    (%eax),%eax
08462d42 +0x294:  mov    -0x48(%ebp),%edx
08462d45 +0x297:  mov    %edx,0x4(%esp)
08462d49 +0x29b:  mov    %eax,(%esp)
08462d4c +0x29e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08462d51 +0x2a3:  mov    %eax,-0x44(%ebp)
08462d54 +0x2a6:  cmpl   $0x0,-0x44(%ebp)
08462d58 +0x2aa:  je     08462d75 <+0x2c7>
08462d5a +0x2ac:  mov    0x8(%ebp),%eax
08462d5d +0x2af:  mov    (%eax),%eax
08462d5f +0x2b1:  mov    -0x48(%ebp),%edx
08462d62 +0x2b4:  mov    %edx,0x4(%esp)
08462d66 +0x2b8:  mov    %eax,(%esp)
08462d69 +0x2bb:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08462d6e +0x2c0:  xor    $0x1,%eax
08462d71 +0x2c3:  test   %al,%al
08462d73 +0x2c5:  je     08462d7c <+0x2ce>
08462d75 +0x2c7:  mov    $0x1,%eax
08462d7a +0x2cc:  jmp    08462d81 <+0x2d3>
08462d7c +0x2ce:  mov    $0x0,%eax
08462d81 +0x2d3:  test   %al,%al
08462d83 +0x2d5:  jne    08462f74 <+0x4c6>
08462d89 +0x2db:  lea    -0x84(%ebp),%eax
08462d8f +0x2e1:  mov    %eax,(%esp)
08462d92 +0x2e4:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08462d97 +0x2e9:  mov    0x8(%ebp),%eax
08462d9a +0x2ec:  add    $0x110,%eax
08462d9f +0x2f1:  movl   $0x3,0x4(%esp)
08462da7 +0x2f9:  mov    %eax,(%esp)
08462daa +0x2fc:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
08462daf +0x301:  mov    %eax,%edi
08462db1 +0x303:  mov    0x8(%ebp),%eax
08462db4 +0x306:  add    $0x110,%eax
08462db9 +0x30b:  movl   $0x3,0x4(%esp)
08462dc1 +0x313:  mov    %eax,(%esp)
08462dc4 +0x316:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08462dc9 +0x31b:  mov    %eax,-0xfc(%ebp)
08462dcf +0x321:  mov    0x8(%ebp),%eax
08462dd2 +0x324:  add    $0x110,%eax
08462dd7 +0x329:  movl   $0x2,0x4(%esp)
08462ddf +0x331:  mov    %eax,(%esp)
08462de2 +0x334:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
08462de7 +0x339:  mov    %eax,-0xf8(%ebp)
08462ded +0x33f:  mov    0x8(%ebp),%eax
08462df0 +0x342:  add    $0x110,%eax
08462df5 +0x347:  movl   $0x2,0x4(%esp)
08462dfd +0x34f:  mov    %eax,(%esp)
08462e00 +0x352:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08462e05 +0x357:  mov    %eax,-0xf4(%ebp)
08462e0b +0x35d:  mov    0x8(%ebp),%eax
08462e0e +0x360:  add    $0x110,%eax
08462e13 +0x365:  movl   $0x1,0x4(%esp)
08462e1b +0x36d:  mov    %eax,(%esp)
08462e1e +0x370:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
08462e23 +0x375:  mov    %eax,-0xf0(%ebp)
08462e29 +0x37b:  mov    0x8(%ebp),%eax
08462e2c +0x37e:  add    $0x110,%eax
08462e31 +0x383:  movl   $0x1,0x4(%esp)
08462e39 +0x38b:  mov    %eax,(%esp)
08462e3c +0x38e:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08462e41 +0x393:  mov    %eax,-0xec(%ebp)
08462e47 +0x399:  mov    0x8(%ebp),%eax
08462e4a +0x39c:  add    $0x110,%eax
08462e4f +0x3a1:  movl   $0x0,0x4(%esp)
08462e57 +0x3a9:  mov    %eax,(%esp)
08462e5a +0x3ac:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
08462e5f +0x3b1:  mov    %eax,%esi
08462e61 +0x3b3:  mov    0x8(%ebp),%eax
08462e64 +0x3b6:  add    $0x110,%eax
08462e69 +0x3bb:  movl   $0x0,0x4(%esp)
08462e71 +0x3c3:  mov    %eax,(%esp)
08462e74 +0x3c6:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08462e79 +0x3cb:  mov    %eax,%ebx
08462e7b +0x3cd:  mov    0x8(%ebp),%eax
08462e7e +0x3d0:  lea    0x110(%eax),%edx
08462e84 +0x3d6:  mov    -0x48(%ebp),%eax
08462e87 +0x3d9:  mov    %eax,0x4(%esp)
08462e8b +0x3dd:  mov    %edx,(%esp)
08462e8e +0x3e0:  call   08469c1e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x301>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x301
08462e93 +0x3e5:  mov    %edi,0x24(%esp)
08462e97 +0x3e9:  mov    -0xfc(%ebp),%edx
08462e9d +0x3ef:  mov    %edx,0x20(%esp)
08462ea1 +0x3f3:  mov    -0xf8(%ebp),%edx
08462ea7 +0x3f9:  mov    %edx,0x1c(%esp)
08462eab +0x3fd:  mov    -0xf4(%ebp),%edx
08462eb1 +0x403:  mov    %edx,0x18(%esp)
08462eb5 +0x407:  mov    -0xf0(%ebp),%edx
08462ebb +0x40d:  mov    %edx,0x14(%esp)
08462ebf +0x411:  mov    -0xec(%ebp),%edx
08462ec5 +0x417:  mov    %edx,0x10(%esp)
08462ec9 +0x41b:  mov    %esi,0xc(%esp)
08462ecd +0x41f:  mov    %ebx,0x8(%esp)
08462ed1 +0x423:  mov    %eax,0x4(%esp)
08462ed5 +0x427:  lea    -0x84(%ebp),%eax
08462edb +0x42d:  mov    %eax,(%esp)
08462ede +0x430:  call   084602c4 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_>  ; WongWork::CDeathTower::CPacketHandler::makeDisplayReward(int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)
08462ee3 +0x435:  mov    0x8(%ebp),%eax
08462ee6 +0x438:  lea    0x110(%eax),%edx
08462eec +0x43e:  mov    -0x48(%ebp),%eax
08462eef +0x441:  mov    %eax,0x4(%esp)
08462ef3 +0x445:  mov    %edx,(%esp)
08462ef6 +0x448:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
08462efb +0x44d:  mov    %eax,%ebx
08462efd +0x44f:  mov    0x8(%ebp),%eax
08462f00 +0x452:  lea    0x110(%eax),%edx
08462f06 +0x458:  mov    -0x48(%ebp),%eax
08462f09 +0x45b:  mov    %eax,0x4(%esp)
08462f0d +0x45f:  mov    %edx,(%esp)
08462f10 +0x462:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08462f15 +0x467:  mov    %ebx,0xc(%esp)
08462f19 +0x46b:  mov    -0x44(%ebp),%edx
08462f1c +0x46e:  mov    %edx,0x8(%esp)
08462f20 +0x472:  mov    %eax,0x4(%esp)
08462f24 +0x476:  mov    0x8(%ebp),%eax
08462f27 +0x479:  mov    %eax,(%esp)
08462f2a +0x47c:  call   0846966c <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item>  ; WongWork::CDeathTower::deathTowerCardStatistic(int, CUser*, Inven_Item const*)
08462f2f +0x481:  lea    -0x84(%ebp),%eax
08462f35 +0x487:  mov    %eax,0x4(%esp)
08462f39 +0x48b:  mov    -0x44(%ebp),%eax
08462f3c +0x48e:  mov    %eax,(%esp)
08462f3f +0x491:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08462f44 +0x496:  jmp    08462f64 <+0x4b6>
08462f46 +0x498:  mov    %edx,%ebx
08462f48 +0x49a:  mov    %eax,%esi
08462f4a +0x49c:  lea    -0x84(%ebp),%eax
08462f50 +0x4a2:  mov    %eax,(%esp)
08462f53 +0x4a5:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462f58 +0x4aa:  mov    %esi,%eax
08462f5a +0x4ac:  mov    %ebx,%edx
08462f5c +0x4ae:  mov    %eax,(%esp)
08462f5f +0x4b1:  call   08ae3750 <_Unwind_Resume>
08462f64 +0x4b6:  lea    -0x84(%ebp),%eax
08462f6a +0x4bc:  mov    %eax,(%esp)
08462f6d +0x4bf:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08462f72 +0x4c4:  jmp    08462f75 <+0x4c7>
08462f74 +0x4c6:  nop
08462f75 +0x4c7:  addl   $0x1,-0x48(%ebp)
08462f79 +0x4cb:  cmpl   $0x3,-0x48(%ebp)
08462f7d +0x4cf:  setle  %al
08462f80 +0x4d2:  test   %al,%al
08462f82 +0x4d4:  jne    08462d36 <+0x288>
08462f88 +0x4da:  movl   $0x4,0x4(%esp)
08462f90 +0x4e2:  mov    0x8(%ebp),%eax
08462f93 +0x4e5:  mov    %eax,(%esp)
08462f96 +0x4e8:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
08462f9b +0x4ed:  movl   $0x4c,0x4(%esp)
08462fa3 +0x4f5:  mov    0x8(%ebp),%eax
08462fa6 +0x4f8:  mov    %eax,(%esp)
08462fa9 +0x4fb:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
08462fae +0x500:  mov    %eax,%ebx
08462fb0 +0x502:  mov    0x8(%ebp),%eax
08462fb3 +0x505:  mov    0x4(%eax),%esi
08462fb6 +0x508:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08462fbb +0x50d:  movl   $0x4c,0x18(%esp)
08462fc3 +0x515:  mov    %ebx,0x14(%esp)
08462fc7 +0x519:  movl   $0x5,0x10(%esp)
08462fcf +0x521:  movl   $0x4c,0xc(%esp)
08462fd7 +0x529:  mov    %esi,0x8(%esp)
08462fdb +0x52d:  movl   $0x6,0x4(%esp)
08462fe3 +0x535:  mov    %eax,(%esp)
08462fe6 +0x538:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08462feb +0x53d:  jmp    084636e2 <+0xc34>
08462ff0 +0x542:  cmpl   $0x4c,0xc(%ebp)
08462ff4 +0x546:  jne    084635a4 <+0xaf6>
08462ffa +0x54c:  mov    0x8(%ebp),%eax
08462ffd +0x54f:  mov    %eax,(%esp)
08463000 +0x552:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08463005 +0x557:  cmp    $0x3,%eax
08463008 +0x55a:  setle  %al
0846300b +0x55d:  test   %al,%al
0846300d +0x55f:  je     08463019 <+0x56b>
0846300f +0x561:  mov    $0x0,%eax
08463014 +0x566:  jmp    084636e7 <+0xc39>
08463019 +0x56b:  movb   $0x1,-0x3d(%ebp)
0846301d +0x56f:  movl   $0x0,-0x3c(%ebp)
08463024 +0x576:  jmp    084630bf <+0x611>
08463029 +0x57b:  movl   $0x0,-0x38(%ebp)
08463030 +0x582:  mov    0x8(%ebp),%eax
08463033 +0x585:  mov    (%eax),%eax
08463035 +0x587:  mov    -0x3c(%ebp),%edx
08463038 +0x58a:  mov    %edx,0x4(%esp)
0846303c +0x58e:  mov    %eax,(%esp)
0846303f +0x591:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08463044 +0x596:  mov    %eax,-0x38(%ebp)
08463047 +0x599:  cmpl   $0x0,-0x38(%ebp)
0846304b +0x59d:  je     08463068 <+0x5ba>
0846304d +0x59f:  mov    0x8(%ebp),%eax
08463050 +0x5a2:  mov    (%eax),%eax
08463052 +0x5a4:  mov    -0x3c(%ebp),%edx
08463055 +0x5a7:  mov    %edx,0x4(%esp)
08463059 +0x5ab:  mov    %eax,(%esp)
0846305c +0x5ae:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08463061 +0x5b3:  xor    $0x1,%eax
08463064 +0x5b6:  test   %al,%al
08463066 +0x5b8:  je     0846306f <+0x5c1>
08463068 +0x5ba:  mov    $0x1,%eax
0846306d +0x5bf:  jmp    08463074 <+0x5c6>
0846306f +0x5c1:  mov    $0x0,%eax
08463074 +0x5c6:  test   %al,%al
08463076 +0x5c8:  jne    084630ba <+0x60c>
08463078 +0x5ca:  lea    -0xe1(%ebp),%eax
0846307e +0x5d0:  mov    %eax,(%esp)
08463081 +0x5d3:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08463086 +0x5d8:  mov    -0x38(%ebp),%eax
08463089 +0x5db:  mov    %eax,(%esp)
0846308c +0x5de:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08463091 +0x5e3:  lea    -0xe1(%ebp),%edx
08463097 +0x5e9:  mov    %edx,0x8(%esp)
0846309b +0x5ed:  movl   $0x1057,0x4(%esp)
084630a3 +0x5f5:  mov    %eax,(%esp)
084630a6 +0x5f8:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
084630ab +0x5fd:  mov    %eax,-0x34(%ebp)
084630ae +0x600:  cmpl   $0x0,-0x34(%ebp)
084630b2 +0x604:  jns    084630bb <+0x60d>
084630b4 +0x606:  movb   $0x0,-0x3d(%ebp)
084630b8 +0x60a:  jmp    084630ce <+0x620>
084630ba +0x60c:  nop
084630bb +0x60d:  addl   $0x1,-0x3c(%ebp)
084630bf +0x611:  cmpl   $0x3,-0x3c(%ebp)
084630c3 +0x615:  setle  %al
084630c6 +0x618:  test   %al,%al
084630c8 +0x61a:  jne    08463029 <+0x57b>
084630ce +0x620:  lea    -0x90(%ebp),%eax
084630d4 +0x626:  mov    %eax,(%esp)
084630d7 +0x629:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
084630dc +0x62e:  movzbl -0x3d(%ebp),%eax
084630e0 +0x632:  mov    %eax,0x4(%esp)
084630e4 +0x636:  lea    -0x90(%ebp),%eax
084630ea +0x63c:  mov    %eax,(%esp)
084630ed +0x63f:  call   084604b0 <_ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb>  ; WongWork::CDeathTower::CPacketHandler::makeDisplayEPLP(bool)
084630f2 +0x644:  mov    0x8(%ebp),%eax
084630f5 +0x647:  mov    (%eax),%eax
084630f7 +0x649:  lea    -0x90(%ebp),%edx
084630fd +0x64f:  mov    %edx,0x4(%esp)
08463101 +0x653:  mov    %eax,(%esp)
08463104 +0x656:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08463109 +0x65b:  movl   $0x0,-0x30(%ebp)
08463110 +0x662:  jmp    084634ea <+0xa3c>
08463115 +0x667:  movl   $0x0,-0x2c(%ebp)
0846311c +0x66e:  mov    0x8(%ebp),%eax
0846311f +0x671:  mov    (%eax),%eax
08463121 +0x673:  mov    -0x30(%ebp),%edx
08463124 +0x676:  mov    %edx,0x4(%esp)
08463128 +0x67a:  mov    %eax,(%esp)
0846312b +0x67d:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08463130 +0x682:  mov    %eax,-0x2c(%ebp)
08463133 +0x685:  cmpl   $0x0,-0x2c(%ebp)
08463137 +0x689:  je     08463154 <+0x6a6>
08463139 +0x68b:  mov    0x8(%ebp),%eax
0846313c +0x68e:  mov    (%eax),%eax
0846313e +0x690:  mov    -0x30(%ebp),%edx
08463141 +0x693:  mov    %edx,0x4(%esp)
08463145 +0x697:  mov    %eax,(%esp)
08463148 +0x69a:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0846314d +0x69f:  xor    $0x1,%eax
08463150 +0x6a2:  test   %al,%al
08463152 +0x6a4:  je     0846315b <+0x6ad>
08463154 +0x6a6:  mov    $0x1,%eax
08463159 +0x6ab:  jmp    08463160 <+0x6b2>
0846315b +0x6ad:  mov    $0x0,%eax
08463160 +0x6b2:  test   %al,%al
08463162 +0x6b4:  jne    084634e5 <+0xa37>
08463168 +0x6ba:  movl   $0x0,-0x28(%ebp)
0846316f +0x6c1:  jmp    08463400 <+0x952>
08463174 +0x6c6:  mov    0x8(%ebp),%eax
08463177 +0x6c9:  lea    0x110(%eax),%edx
0846317d +0x6cf:  mov    -0x30(%ebp),%eax
08463180 +0x6d2:  mov    %eax,0x4(%esp)
08463184 +0x6d6:  mov    %edx,(%esp)
08463187 +0x6d9:  call   08469c06 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2e9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2e9
0846318c +0x6de:  mov    %eax,-0x24(%ebp)
0846318f +0x6e1:  mov    -0x28(%ebp),%eax
08463192 +0x6e4:  imul   $0x3d,%eax,%eax
08463195 +0x6e7:  add    -0x24(%ebp),%eax
08463198 +0x6ea:  mov    0x2(%eax),%eax
0846319b +0x6ed:  cmp    $0xffffffff,%eax
0846319e +0x6f0:  je     084633fb <+0x94d>
084631a4 +0x6f6:  movl   $0xffffffff,-0x20(%ebp)
084631ab +0x6fd:  mov    -0x28(%ebp),%eax
084631ae +0x700:  imul   $0x3d,%eax,%eax
084631b1 +0x703:  add    -0x24(%ebp),%eax
084631b4 +0x706:  mov    0x2(%eax),%eax
084631b7 +0x709:  test   %eax,%eax
084631b9 +0x70b:  jne    084632c7 <+0x819>
084631bf +0x711:  mov    -0x28(%ebp),%eax
084631c2 +0x714:  imul   $0x3d,%eax,%eax
084631c5 +0x717:  add    -0x24(%ebp),%eax
084631c8 +0x71a:  mov    %eax,(%esp)
084631cb +0x71d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084631d0 +0x722:  mov    %eax,%ebx
084631d2 +0x724:  mov    -0x2c(%ebp),%eax
084631d5 +0x727:  mov    %eax,(%esp)
084631d8 +0x72a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084631dd +0x72f:  movl   $0x0,0x10(%esp)
084631e5 +0x737:  movl   $0x1,0xc(%esp)
084631ed +0x73f:  movl   $0x5,0x8(%esp)
084631f5 +0x747:  mov    %ebx,0x4(%esp)
084631f9 +0x74b:  mov    %eax,(%esp)
084631fc +0x74e:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08463201 +0x753:  mov    %eax,-0x1c(%ebp)
08463204 +0x756:  mov    -0x28(%ebp),%eax
08463207 +0x759:  imul   $0x3d,%eax,%eax
0846320a +0x75c:  add    -0x24(%ebp),%eax
0846320d +0x75f:  mov    %eax,(%esp)
08463210 +0x762:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08463215 +0x767:  cmp    -0x1c(%ebp),%eax
08463218 +0x76a:  setg   %al
0846321b +0x76d:  test   %al,%al
0846321d +0x76f:  je     0846324e <+0x7a0>
0846321f +0x771:  mov    -0x1c(%ebp),%ebx
08463222 +0x774:  mov    -0x28(%ebp),%eax
08463225 +0x777:  imul   $0x3d,%eax,%eax
08463228 +0x77a:  add    -0x24(%ebp),%eax
0846322b +0x77d:  mov    %eax,(%esp)
0846322e +0x780:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08463233 +0x785:  mov    %ebx,0xc(%esp)
08463237 +0x789:  mov    %eax,0x8(%esp)
0846323b +0x78d:  movl   $0x0,0x4(%esp)
08463243 +0x795:  mov    -0x2c(%ebp),%eax
08463246 +0x798:  mov    %eax,(%esp)
08463249 +0x79b:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
0846324e +0x7a0:  movl   $0x0,-0x20(%ebp)
08463255 +0x7a7:  mov    0x8(%ebp),%eax
08463258 +0x7aa:  add    $0xc,%eax
0846325b +0x7ad:  mov    %eax,(%esp)
0846325e +0x7b0:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08463263 +0x7b5:  mov    %eax,(%esp)
08463266 +0x7b8:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0846326b +0x7bd:  cmp    $0x2af8,%eax
08463270 +0x7c2:  sete   %al
08463273 +0x7c5:  test   %al,%al
08463275 +0x7c7:  je     0846329f <+0x7f1>
08463277 +0x7c9:  mov    -0x1c(%ebp),%ebx
0846327a +0x7cc:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
0846327f +0x7d1:  mov    %ebx,0xc(%esp)
08463283 +0x7d5:  mov    -0x2c(%ebp),%edx
08463286 +0x7d8:  mov    %edx,0x8(%esp)
0846328a +0x7dc:  movl   $0x4,0x4(%esp)
08463292 +0x7e4:  mov    %eax,(%esp)
08463295 +0x7e7:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
0846329a +0x7ec:  jmp    08463370 <+0x8c2>
0846329f +0x7f1:  mov    -0x1c(%ebp),%ebx
084632a2 +0x7f4:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
084632a7 +0x7f9:  mov    %ebx,0xc(%esp)
084632ab +0x7fd:  mov    -0x2c(%ebp),%edx
084632ae +0x800:  mov    %edx,0x8(%esp)
084632b2 +0x804:  movl   $0x5,0x4(%esp)
084632ba +0x80c:  mov    %eax,(%esp)
084632bd +0x80f:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
084632c2 +0x814:  jmp    08463370 <+0x8c2>
084632c7 +0x819:  mov    -0x28(%ebp),%eax
084632ca +0x81c:  imul   $0x3d,%eax,%eax
084632cd +0x81f:  mov    %eax,%ebx
084632cf +0x821:  add    -0x24(%ebp),%ebx
084632d2 +0x824:  mov    -0x2c(%ebp),%eax
084632d5 +0x827:  mov    %eax,(%esp)
084632d8 +0x82a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084632dd +0x82f:  movl   $0x1,0x4c(%esp)
084632e5 +0x837:  movl   $0x1,0x48(%esp)
084632ed +0x83f:  movl   $0xb,0x44(%esp)
084632f5 +0x847:  mov    (%ebx),%edx
084632f7 +0x849:  mov    %edx,0x4(%esp)
084632fb +0x84d:  mov    0x4(%ebx),%edx
084632fe +0x850:  mov    %edx,0x8(%esp)
08463302 +0x854:  mov    0x8(%ebx),%edx
08463305 +0x857:  mov    %edx,0xc(%esp)
08463309 +0x85b:  mov    0xc(%ebx),%edx
0846330c +0x85e:  mov    %edx,0x10(%esp)
08463310 +0x862:  mov    0x10(%ebx),%edx
08463313 +0x865:  mov    %edx,0x14(%esp)
08463317 +0x869:  mov    0x14(%ebx),%edx
0846331a +0x86c:  mov    %edx,0x18(%esp)
0846331e +0x870:  mov    0x18(%ebx),%edx
08463321 +0x873:  mov    %edx,0x1c(%esp)
08463325 +0x877:  mov    0x1c(%ebx),%edx
08463328 +0x87a:  mov    %edx,0x20(%esp)
0846332c +0x87e:  mov    0x20(%ebx),%edx
0846332f +0x881:  mov    %edx,0x24(%esp)
08463333 +0x885:  mov    0x24(%ebx),%edx
08463336 +0x888:  mov    %edx,0x28(%esp)
0846333a +0x88c:  mov    0x28(%ebx),%edx
0846333d +0x88f:  mov    %edx,0x2c(%esp)
08463341 +0x893:  mov    0x2c(%ebx),%edx
08463344 +0x896:  mov    %edx,0x30(%esp)
08463348 +0x89a:  mov    0x30(%ebx),%edx
0846334b +0x89d:  mov    %edx,0x34(%esp)
0846334f +0x8a1:  mov    0x34(%ebx),%edx
08463352 +0x8a4:  mov    %edx,0x38(%esp)
08463356 +0x8a8:  mov    0x38(%ebx),%edx
08463359 +0x8ab:  mov    %edx,0x3c(%esp)
0846335d +0x8af:  movzbl 0x3c(%ebx),%edx
08463361 +0x8b3:  mov    %dl,0x40(%esp)
08463365 +0x8b7:  mov    %eax,(%esp)
08463368 +0x8ba:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0846336d +0x8bf:  mov    %eax,-0x20(%ebp)
08463370 +0x8c2:  cmpl   $0x0,-0x20(%ebp)
08463374 +0x8c6:  js     084633fc <+0x94e>
0846337a +0x8cc:  lea    -0xa4(%ebp),%eax
08463380 +0x8d2:  mov    %eax,(%esp)
08463383 +0x8d5:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08463388 +0x8da:  mov    -0x28(%ebp),%eax
0846338b +0x8dd:  imul   $0x3d,%eax,%eax
0846338e +0x8e0:  add    -0x24(%ebp),%eax
08463391 +0x8e3:  mov    %eax,(%esp)
08463394 +0x8e6:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
08463399 +0x8eb:  mov    -0x20(%ebp),%edx
0846339c +0x8ee:  mov    %edx,0xc(%esp)
084633a0 +0x8f2:  mov    %eax,0x8(%esp)
084633a4 +0x8f6:  mov    -0x2c(%ebp),%eax
084633a7 +0x8f9:  mov    %eax,0x4(%esp)
084633ab +0x8fd:  lea    -0xa4(%ebp),%eax
084633b1 +0x903:  mov    %eax,(%esp)
084633b4 +0x906:  call   0846050e <_ZN8WongWork11CDeathTower14CPacketHandler18makeUpdateItemListEP5CUser14ENUM_ITEMSPACEi>  ; WongWork::CDeathTower::CPacketHandler::makeUpdateItemList(CUser*, ENUM_ITEMSPACE, int)
084633b9 +0x90b:  lea    -0xa4(%ebp),%eax
084633bf +0x911:  mov    %eax,0x4(%esp)
084633c3 +0x915:  mov    -0x2c(%ebp),%eax
084633c6 +0x918:  mov    %eax,(%esp)
084633c9 +0x91b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084633ce +0x920:  jmp    084633eb <+0x93d>
084633d0 +0x922:  mov    %edx,%ebx
084633d2 +0x924:  mov    %eax,%esi
084633d4 +0x926:  lea    -0xa4(%ebp),%eax
084633da +0x92c:  mov    %eax,(%esp)
084633dd +0x92f:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
084633e2 +0x934:  mov    %esi,%eax
084633e4 +0x936:  mov    %ebx,%edx
084633e6 +0x938:  jmp    08463573 <+0xac5>
084633eb +0x93d:  lea    -0xa4(%ebp),%eax
084633f1 +0x943:  mov    %eax,(%esp)
084633f4 +0x946:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
084633f9 +0x94b:  jmp    084633fc <+0x94e>
084633fb +0x94d:  nop
084633fc +0x94e:  addl   $0x1,-0x28(%ebp)
08463400 +0x952:  mov    0x8(%ebp),%eax
08463403 +0x955:  lea    0x110(%eax),%edx
08463409 +0x95b:  mov    -0x30(%ebp),%eax
0846340c +0x95e:  mov    %eax,0x4(%esp)
08463410 +0x962:  mov    %edx,(%esp)
08463413 +0x965:  call   08469bec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2cf
08463418 +0x96a:  cmp    -0x28(%ebp),%eax
0846341b +0x96d:  setg   %al
0846341e +0x970:  test   %al,%al
08463420 +0x972:  jne    08463174 <+0x6c6>
08463426 +0x978:  mov    0x8(%ebp),%eax
08463429 +0x97b:  lea    0x110(%eax),%edx
0846342f +0x981:  mov    -0x30(%ebp),%eax
08463432 +0x984:  mov    %eax,0x4(%esp)
08463436 +0x988:  mov    %edx,(%esp)
08463439 +0x98b:  call   08469c1e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x301>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x301
0846343e +0x990:  mov    -0x2c(%ebp),%edx
08463441 +0x993:  movl   $0x0,0x8(%esp)
08463449 +0x99b:  mov    %eax,0x4(%esp)
0846344d +0x99f:  mov    %edx,(%esp)
08463450 +0x9a2:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
08463455 +0x9a7:  movl   $0x0,-0x94(%ebp)
0846345f +0x9b1:  movl   $0x0,-0x98(%ebp)
08463469 +0x9bb:  mov    0x8(%ebp),%eax
0846346c +0x9be:  lea    0x110(%eax),%edx
08463472 +0x9c4:  mov    -0x30(%ebp),%eax
08463475 +0x9c7:  mov    %eax,0x4(%esp)
08463479 +0x9cb:  mov    %edx,(%esp)
0846347c +0x9ce:  call   08469c1e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x301>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x301
08463481 +0x9d3:  movl   $0x0,0x18(%esp)
08463489 +0x9db:  movl   $0x0,0x14(%esp)
08463491 +0x9e3:  movl   $0x2,0x10(%esp)
08463499 +0x9eb:  lea    -0x98(%ebp),%edx
0846349f +0x9f1:  mov    %edx,0xc(%esp)
084634a3 +0x9f5:  lea    -0x94(%ebp),%edx
084634a9 +0x9fb:  mov    %edx,0x8(%esp)
084634ad +0x9ff:  mov    %eax,0x4(%esp)
084634b1 +0xa03:  mov    -0x2c(%ebp),%eax
084634b4 +0xa06:  mov    %eax,(%esp)
084634b7 +0xa09:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
084634bc +0xa0e:  test   %al,%al
084634be +0xa10:  je     084634e6 <+0xa38>
084634c0 +0xa12:  movl   $0x1,0xc(%esp)
084634c8 +0xa1a:  movl   $0x2,0x8(%esp)
084634d0 +0xa22:  movl   $0x2,0x4(%esp)
084634d8 +0xa2a:  mov    -0x2c(%ebp),%eax
084634db +0xa2d:  mov    %eax,(%esp)
084634de +0xa30:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
084634e3 +0xa35:  jmp    084634e6 <+0xa38>
084634e5 +0xa37:  nop
084634e6 +0xa38:  addl   $0x1,-0x30(%ebp)
084634ea +0xa3c:  cmpl   $0x3,-0x30(%ebp)
084634ee +0xa40:  setle  %al
084634f1 +0xa43:  test   %al,%al
084634f3 +0xa45:  jne    08463115 <+0x667>
084634f9 +0xa4b:  movl   $0x5,0x4(%esp)
08463501 +0xa53:  mov    0x8(%ebp),%eax
08463504 +0xa56:  mov    %eax,(%esp)
08463507 +0xa59:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
0846350c +0xa5e:  mov    0x8(%ebp),%eax
0846350f +0xa61:  mov    (%eax),%eax
08463511 +0xa63:  movl   $0x2,0x4(%esp)
08463519 +0xa6b:  mov    %eax,(%esp)
0846351c +0xa6e:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
08463521 +0xa73:  movl   $0x4d,0x4(%esp)
08463529 +0xa7b:  mov    0x8(%ebp),%eax
0846352c +0xa7e:  mov    %eax,(%esp)
0846352f +0xa81:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
08463534 +0xa86:  mov    %eax,%ebx
08463536 +0xa88:  mov    0x8(%ebp),%eax
08463539 +0xa8b:  mov    0x4(%eax),%esi
0846353c +0xa8e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08463541 +0xa93:  movl   $0x4d,0x18(%esp)
08463549 +0xa9b:  mov    %ebx,0x14(%esp)
0846354d +0xa9f:  movl   $0x3c,0x10(%esp)
08463555 +0xaa7:  movl   $0x4d,0xc(%esp)
0846355d +0xaaf:  mov    %esi,0x8(%esp)
08463561 +0xab3:  movl   $0x6,0x4(%esp)
08463569 +0xabb:  mov    %eax,(%esp)
0846356c +0xabe:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08463571 +0xac3:  jmp    08463591 <+0xae3>
08463573 +0xac5:  mov    %edx,%ebx
08463575 +0xac7:  mov    %eax,%esi
08463577 +0xac9:  lea    -0x90(%ebp),%eax
0846357d +0xacf:  mov    %eax,(%esp)
08463580 +0xad2:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08463585 +0xad7:  mov    %esi,%eax
08463587 +0xad9:  mov    %ebx,%edx
08463589 +0xadb:  mov    %eax,(%esp)
0846358c +0xade:  call   08ae3750 <_Unwind_Resume>
08463591 +0xae3:  lea    -0x90(%ebp),%eax
08463597 +0xae9:  mov    %eax,(%esp)
0846359a +0xaec:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846359f +0xaf1:  jmp    084636e2 <+0xc34>
084635a4 +0xaf6:  cmpl   $0x4d,0xc(%ebp)
084635a8 +0xafa:  jne    084635fa <+0xb4c>
084635aa +0xafc:  mov    0x8(%ebp),%eax
084635ad +0xaff:  mov    (%eax),%eax
084635af +0xb01:  mov    %eax,(%esp)
084635b2 +0xb04:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
084635b7 +0xb09:  cmp    $0x2,%al
084635b9 +0xb0b:  setne  %al
084635bc +0xb0e:  test   %al,%al
084635be +0xb10:  je     084635ca <+0xb1c>
084635c0 +0xb12:  mov    $0x0,%eax
084635c5 +0xb17:  jmp    084636e7 <+0xc39>
084635ca +0xb1c:  mov    0x8(%ebp),%eax
084635cd +0xb1f:  mov    (%eax),%eax
084635cf +0xb21:  mov    %eax,(%esp)
084635d2 +0xb24:  call   084699da <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xbd>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xbd
084635d7 +0xb29:  cmp    $0x3,%al
084635d9 +0xb2b:  sete   %al
084635dc +0xb2e:  test   %al,%al
084635de +0xb30:  je     084635ea <+0xb3c>
084635e0 +0xb32:  mov    $0x0,%eax
084635e5 +0xb37:  jmp    084636e7 <+0xc39>
084635ea +0xb3c:  mov    0x8(%ebp),%eax
084635ed +0xb3f:  mov    %eax,(%esp)
084635f0 +0xb42:  call   08467f6e <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv>  ; WongWork::CDeathTower::_onFinishDeathTower()
084635f5 +0xb47:  jmp    084636e2 <+0xc34>
084635fa +0xb4c:  cmpl   $0x4e,0xc(%ebp)
084635fe +0xb50:  jne    08463630 <+0xb82>
08463600 +0xb52:  mov    0x8(%ebp),%eax
08463603 +0xb55:  mov    (%eax),%eax
08463605 +0xb57:  mov    %eax,(%esp)
08463608 +0xb5a:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
0846360d +0xb5f:  cmp    $0x3,%al
0846360f +0xb61:  setne  %al
08463612 +0xb64:  test   %al,%al
08463614 +0xb66:  je     08463620 <+0xb72>
08463616 +0xb68:  mov    $0x0,%eax
0846361b +0xb6d:  jmp    084636e7 <+0xc39>
08463620 +0xb72:  mov    0x8(%ebp),%eax
08463623 +0xb75:  mov    %eax,(%esp)
08463626 +0xb78:  call   08467f6e <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv>  ; WongWork::CDeathTower::_onFinishDeathTower()
0846362b +0xb7d:  jmp    084636e2 <+0xc34>
08463630 +0xb82:  cmpl   $0x4a,0xc(%ebp)
08463634 +0xb86:  jne    084636e2 <+0xc34>
0846363a +0xb8c:  mov    0x8(%ebp),%eax
0846363d +0xb8f:  mov    %eax,(%esp)
08463640 +0xb92:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08463645 +0xb97:  cmp    $0x1,%eax
08463648 +0xb9a:  setle  %al
0846364b +0xb9d:  test   %al,%al
0846364d +0xb9f:  je     08463659 <+0xbab>
0846364f +0xba1:  mov    $0x0,%eax
08463654 +0xba6:  jmp    084636e7 <+0xc39>
08463659 +0xbab:  mov    0x8(%ebp),%eax
0846365c +0xbae:  mov    (%eax),%eax
0846365e +0xbb0:  mov    %eax,(%esp)
08463661 +0xbb3:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08463666 +0xbb8:  test   %eax,%eax
08463668 +0xbba:  setle  %al
0846366b +0xbbd:  test   %al,%al
0846366d +0xbbf:  je     08463681 <+0xbd3>
0846366f +0xbc1:  mov    0x8(%ebp),%eax
08463672 +0xbc4:  mov    %eax,(%esp)
08463675 +0xbc7:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
0846367a +0xbcc:  mov    $0x1,%eax
0846367f +0xbd1:  jmp    084636e7 <+0xc39>
08463681 +0xbd3:  mov    0x8(%ebp),%eax
08463684 +0xbd6:  mov    %eax,(%esp)
08463687 +0xbd9:  call   08467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>  ; WongWork::CDeathTower::_checkMemberDie()
0846368c +0xbde:  test   %al,%al
0846368e +0xbe0:  je     084636a5 <+0xbf7>
08463690 +0xbe2:  movl   $0x0,0x4(%esp)
08463698 +0xbea:  mov    0x8(%ebp),%eax
0846369b +0xbed:  mov    %eax,(%esp)
0846369e +0xbf0:  call   08467208 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb>  ; WongWork::CDeathTower::_beginTowerClearProcess(bool)
084636a3 +0xbf5:  jmp    084636e2 <+0xc34>
084636a5 +0xbf7:  mov    0x8(%ebp),%eax
084636a8 +0xbfa:  add    $0x14,%eax
084636ab +0xbfd:  mov    %eax,(%esp)
084636ae +0xc00:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
084636b3 +0xc05:  mov    %eax,%ebx
084636b5 +0xc07:  mov    0x8(%ebp),%eax
084636b8 +0xc0a:  add    $0xc,%eax
084636bb +0xc0d:  mov    %eax,(%esp)
084636be +0xc10:  call   08469ab4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x197>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x197
084636c3 +0xc15:  cmp    %eax,%ebx
084636c5 +0xc17:  sete   %al
084636c8 +0xc1a:  test   %al,%al
084636ca +0xc1c:  je     084636e2 <+0xc34>
084636cc +0xc1e:  movl   $0x1,0x4(%esp)
084636d4 +0xc26:  mov    0x8(%ebp),%eax
084636d7 +0xc29:  mov    %eax,(%esp)
084636da +0xc2c:  call   08467208 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb>  ; WongWork::CDeathTower::_beginTowerClearProcess(bool)
084636df +0xc31:  jmp    084636e2 <+0xc34>
084636e1 +0xc33:  nop
084636e2 +0xc34:  mov    $0x1,%eax
084636e7 +0xc39:  add    $0x14c,%esp
084636ed +0xc3f:  pop    %ebx
084636ee +0xc40:  pop    %esi
084636ef +0xc41:  pop    %edi
084636f0 +0xc42:  pop    %ebp
084636f1 +0xc43:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::onTimer @ 0x8462aae

/* WongWork::CDeathTower::onTimer(TIMER_MESSAGE, unsigned int) */

undefined4 __thiscall
WongWork::CDeathTower::onTimer(CDeathTower *this,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  Inven_Item *pIVar5;
  Inven_Item *pIVar6;
  int iVar7;
  Inven_Item *pIVar8;
  int iVar9;
  Inven_Item *pIVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  TimerQueue *pTVar14;
  CInventory *pCVar15;
  CDungeon *this_00;
  CCirculationStatistic *pCVar16;
  undefined4 *puVar17;
  Inven_Item local_e5 [61];
  CPacketHandler local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  CPacketHandler local_94 [12];
  CPacketHandler local_88 [12];
  CPacketHandler local_7c [12];
  CPacketHandler local_70 [12];
  int local_64;
  char local_5d;
  int local_5c;
  int local_58;
  CUser *local_54;
  int local_50;
  int local_4c;
  CUser *local_48;
  bool local_41;
  int local_40;
  CUserCharacInfo *local_3c;
  int local_38;
  int local_34;
  CUserCharacInfo *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  cVar1 = _checkTimerKey(this,param_2,param_3);
  if (cVar1 == '\x01') {
    iVar4 = getTowerState(this);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_2 == 0x49) {
        local_64 = CParty::get_member_count(*(CParty **)this);
        if (local_64 == 0) {
          _destroy(this);
          return 1;
        }
        local_5d = '\0';
        for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
          local_54 = (CUser *)0x0;
          local_54 = (CUser *)CParty::get_user(*(CParty **)this,local_58);
          if ((local_54 == (CUser *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_58), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((!bVar2) &&
             (cVar1 = CPlayData::isMemberReady((CPlayData *)(this + 0x110),local_58),
             cVar1 != '\x01')) {
            CPacketHandler::CPacketHandler(local_70);
                    /* try { // try from 08462bca to 08462bf2 has its CatchHandler @ 08462c04 */
            CPacketHandler::makeFinishLoading(local_70);
            CUser::Send(local_54,(PacketGuard *)local_70);
            handleLeaveUser(this,local_54);
            local_5d = '\x01';
            CPacketHandler::~CPacketHandler(local_70);
          }
        }
        local_5c = CParty::get_member_count(*(CParty **)this);
        if ((local_5d == '\0') || (local_5c < 1)) {
          if (local_5c == 0) {
            _destroy(this);
          }
        }
        else {
          for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
            CPlayData::setMemberReady((CPlayData *)(this + 0x110),local_50,true);
          }
          CPacketHandler::CPacketHandler(local_7c);
                    /* try { // try from 08462ca0 to 08462cb8 has its CatchHandler @ 08462cbb */
          CPacketHandler::makeFinishLoading(local_7c);
          CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_7c);
          CPacketHandler::~CPacketHandler(local_7c);
        }
      }
      else if (param_2 == 0x4b) {
        iVar4 = getTowerState(this);
        if (iVar4 < 3) {
          return 0;
        }
        for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
          local_48 = (CUser *)0x0;
          local_48 = (CUser *)CParty::get_user(*(CParty **)this,local_4c);
          if ((local_48 == (CUser *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_4c), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            CPacketHandler::CPacketHandler(local_88);
            pIVar5 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),3);
            iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),3);
            pIVar6 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),2);
            iVar7 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),2);
            pIVar8 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),1);
            iVar9 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),1);
            pIVar10 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),0);
            iVar11 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),0);
            iVar12 = CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_4c);
                    /* try { // try from 08462ede to 08462f43 has its CatchHandler @ 08462f46 */
            CPacketHandler::makeDisplayReward
                      (local_88,iVar12,iVar11,pIVar10,iVar9,pIVar8,iVar7,pIVar6,iVar4,pIVar5);
            pIVar5 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),local_4c);
            iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),local_4c);
            deathTowerCardStatistic(this,iVar4,local_48,pIVar5);
            CUser::Send(local_48,(PacketGuard *)local_88);
            CPacketHandler::~CPacketHandler(local_88);
          }
        }
        setTowerState(this,4);
        uVar13 = _genTimerKey(this,0x4c);
        uVar3 = *(undefined4 *)(this + 4);
        pTVar14 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar14,6,uVar3,0x4c,5,uVar13,0x4c);
      }
      else if (param_2 == 0x4c) {
        iVar4 = getTowerState(this);
        if (iVar4 < 4) {
          return 0;
        }
        local_41 = true;
        for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
          local_3c = (CUserCharacInfo *)0x0;
          local_3c = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_40);
          if ((local_3c == (CUserCharacInfo *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_40), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            Inven_Item::Inven_Item(local_e5);
            pCVar15 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_3c);
            local_38 = CInventory::GetInvenData(pCVar15,0x1057,local_e5);
            if (local_38 < 0) {
              local_41 = false;
              break;
            }
          }
        }
        CPacketHandler::CPacketHandler(local_94);
                    /* try { // try from 084630ed to 08463387 has its CatchHandler @ 08463573 */
        CPacketHandler::makeDisplayEPLP(local_94,local_41);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_94);
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          local_30 = (CUserCharacInfo *)0x0;
          local_30 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_34);
          if ((local_30 == (CUserCharacInfo *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_34), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            local_2c = 0;
            while (iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),local_34),
                  local_2c < iVar4) {
              local_28 = CPlayData::getRewardItem((CPlayData *)(this + 0x110),local_34);
              if (*(int *)(local_2c * 0x3d + local_28 + 2) != -1) {
                local_24 = 0xffffffff;
                if (*(int *)(local_2c * 0x3d + local_28 + 2) == 0) {
                  uVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                  pCVar15 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_30);
                  local_20 = CInventory::gain_money(pCVar15,uVar3,5,1,0);
                  iVar7 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                  iVar4 = local_20;
                  if (local_20 < iVar7) {
                    uVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                    CUser::SendMoneyFullReason((CUser *)local_30,0,uVar3,iVar4);
                  }
                  local_24 = 0;
                  this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
                  iVar7 = CDungeon::get_index(this_00);
                  iVar4 = local_20;
                  if (iVar7 == 11000) {
                    pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                    CCirculationStatistic::AddCirculationStatistic(pCVar16,4,local_30,iVar4);
                  }
                  else {
                    pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                    CCirculationStatistic::AddCirculationStatistic(pCVar16,5,local_30,iVar4);
                  }
                }
                else {
                  puVar17 = (undefined4 *)(local_2c * 0x3d + local_28);
                  uVar3 = CUserCharacInfo::getCurCharacInvenW(local_30);
                  local_24 = CInventory::insertItemIntoInventory
                                       (uVar3,*puVar17,puVar17[1],puVar17[2],puVar17[3],puVar17[4],
                                        puVar17[5],puVar17[6],puVar17[7],puVar17[8],puVar17[9],
                                        puVar17[10],puVar17[0xb],puVar17[0xc],puVar17[0xd],
                                        puVar17[0xe],*(undefined1 *)(puVar17 + 0xf),0xb,1,1);
                }
                if (-1 < local_24) {
                  CPacketHandler::CPacketHandler(local_a8);
                    /* try { // try from 08463394 to 084633cd has its CatchHandler @ 084633d0 */
                  uVar3 = Inven_Item::GetItemSpace((Inven_Item *)(local_2c * 0x3d + local_28));
                  CPacketHandler::makeUpdateItemList(local_a8,local_30,uVar3,local_24);
                  CUser::Send((CUser *)local_30,(PacketGuard *)local_a8);
                    /* try { // try from 084633f4 to 08463570 has its CatchHandler @ 08463573 */
                  CPacketHandler::~CPacketHandler(local_a8);
                }
              }
              local_2c = local_2c + 1;
            }
            bVar2 = (bool)CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_34);
            CUserCharacInfo::calcHelpAbuseRatio((uint)local_30,bVar2);
            local_98 = 0;
            local_9c = 0;
            uVar3 = CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_34);
            cVar1 = CUser::gain_exp_sp((CUser *)local_30,uVar3,&local_98,&local_9c,2,0,0);
            if (cVar1 != '\0') {
              CUser::SendNotiPacket((CUser *)local_30,2,2,1);
            }
          }
        }
        setTowerState(this,5);
        CParty::SetEPLPState(*(CParty **)this,'\x02');
        uVar13 = _genTimerKey(this,0x4d);
        uVar3 = *(undefined4 *)(this + 4);
        pTVar14 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar14,6,uVar3,0x4d,0x3c,uVar13,0x4d);
        CPacketHandler::~CPacketHandler(local_94);
      }
      else if (param_2 == 0x4d) {
        cVar1 = CParty::GetEPLPState(*(CParty **)this);
        if (cVar1 != '\x02') {
          return 0;
        }
        cVar1 = CParty::GetSelectedEPLPCmd(*(CParty **)this);
        if (cVar1 == '\x03') {
          return 0;
        }
        _onFinishDeathTower(this);
      }
      else if (param_2 == 0x4e) {
        cVar1 = CParty::GetEPLPState(*(CParty **)this);
        if (cVar1 != '\x03') {
          return 0;
        }
        _onFinishDeathTower(this);
      }
      else if (param_2 == 0x4a) {
        iVar4 = getTowerState(this);
        if (iVar4 < 2) {
          return 0;
        }
        iVar4 = CParty::get_member_count(*(CParty **)this);
        if (iVar4 < 1) {
          _destroy(this);
          return 1;
        }
        cVar1 = _checkMemberDie(this);
        if (cVar1 == '\0') {
          iVar4 = CStage::getCurrentStage((CStage *)(this + 0x14));
          iVar7 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
          if (iVar4 == iVar7) {
            _beginTowerClearProcess(this,true);
          }
        }
        else {
          _beginTowerClearProcess(this,false);
        }
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
