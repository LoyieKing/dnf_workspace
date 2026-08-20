# update_pvp_point

`_ZN5CUser16update_pvp_pointEi`

`CUser::update_pvp_point(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cfd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cfd8  _ZN5CUser16update_pvp_pointEi
#           CUser::update_pvp_point(int)
# range [0x0865cfd8, 0x0865d985]
0865cfd8 +0x000:  push   %ebp
0865cfd9 +0x001:  mov    %esp,%ebp
0865cfdb +0x003:  push   %edi
0865cfdc +0x004:  push   %esi
0865cfdd +0x005:  push   %ebx
0865cfde +0x006:  sub    $0xbc,%esp
0865cfe4 +0x00c:  cmpl   $0x0,0xc(%ebp)
0865cfe8 +0x010:  jne    0865cff4 <+0x1c>
0865cfea +0x012:  mov    $0x1,%eax
0865cfef +0x017:  jmp    0865d97b <+0x9a3>
0865cff4 +0x01c:  cmpl   $0x0,0xc(%ebp)
0865cff8 +0x020:  jns    0865d269 <+0x291>
0865cffe +0x026:  cmpl   $0xfffe7960,0xc(%ebp)
0865d005 +0x02d:  jl     0865d010 <+0x38>
0865d007 +0x02f:  cmpl   $&_ZL14gUnicodeBuffer+0xe174,0xc(%ebp)
0865d00e +0x036:  jle    0865d089 <+0xb1>
0865d010 +0x038:  mov    0x8(%ebp),%eax
0865d013 +0x03b:  mov    %eax,(%esp)
0865d016 +0x03e:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d01b +0x043:  mov    0x8(%eax),%edi
0865d01e +0x046:  mov    0x8(%ebp),%eax
0865d021 +0x049:  mov    %eax,(%esp)
0865d024 +0x04c:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0865d029 +0x051:  mov    %eax,%esi
0865d02b +0x053:  movl   $0xffffffff,0x4(%esp)
0865d033 +0x05b:  mov    0x8(%ebp),%eax
0865d036 +0x05e:  mov    %eax,(%esp)
0865d039 +0x061:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0865d03e +0x066:  mov    %eax,%ebx
0865d040 +0x068:  movl   $0x5,0xc(%esp)
0865d048 +0x070:  movl   $0x35d6,0x8(%esp)
0865d050 +0x078:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x4(%esp)
0865d058 +0x080:  lea    -0x74(%ebp),%eax
0865d05b +0x083:  mov    %eax,(%esp)
0865d05e +0x086:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865d063 +0x08b:  mov    %edi,0x14(%esp)
0865d067 +0x08f:  mov    %esi,0x10(%esp)
0865d06b +0x093:  mov    %ebx,0xc(%esp)
0865d06f +0x097:  mov    0xc(%ebp),%eax
0865d072 +0x09a:  mov    %eax,0x8(%esp)
0865d076 +0x09e:  movl   $"pvp_exp_error5 %d, charac_no(%d), grade(%d), exp(%d)",0x4(%esp)
0865d07e +0x0a6:  lea    -0x74(%ebp),%eax
0865d081 +0x0a9:  mov    %eax,(%esp)
0865d084 +0x0ac:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865d089 +0x0b1:  mov    0x8(%ebp),%eax
0865d08c +0x0b4:  mov    %eax,(%esp)
0865d08f +0x0b7:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d094 +0x0bc:  mov    0x14(%eax),%eax
0865d097 +0x0bf:  cmp    $0x9,%eax
0865d09a +0x0c2:  setle  %al
0865d09d +0x0c5:  test   %al,%al
0865d09f +0x0c7:  je     0865d0ab <+0xd3>
0865d0a1 +0x0c9:  mov    $0x1,%eax
0865d0a6 +0x0ce:  jmp    0865d97b <+0x9a3>
0865d0ab +0x0d3:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0865d0b0 +0x0d8:  movl   $0x36,0x4(%esp)
0865d0b8 +0x0e0:  mov    %eax,(%esp)
0865d0bb +0x0e3:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0865d0c0 +0x0e8:  mov    (%eax),%edx
0865d0c2 +0x0ea:  add    $0x34,%edx
0865d0c5 +0x0ed:  mov    (%edx),%edx
0865d0c7 +0x0ef:  movl   $0x0,0x4(%esp)
0865d0cf +0x0f7:  mov    %eax,(%esp)
0865d0d2 +0x0fa:  call   *%edx
0865d0d4 +0x0fc:  test   %al,%al
0865d0d6 +0x0fe:  je     0865d140 <+0x168>
0865d0d8 +0x100:  mov    0x8(%ebp),%eax
0865d0db +0x103:  mov    %eax,(%esp)
0865d0de +0x106:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d0e3 +0x10b:  mov    0x14(%eax),%eax
0865d0e6 +0x10e:  cmp    $0x9,%eax
0865d0e9 +0x111:  jle    0865d105 <+0x12d>
0865d0eb +0x113:  mov    0x8(%ebp),%eax
0865d0ee +0x116:  mov    %eax,(%esp)
0865d0f1 +0x119:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d0f6 +0x11e:  mov    0x14(%eax),%eax
0865d0f9 +0x121:  cmp    $0x13,%eax
0865d0fc +0x124:  jg     0865d105 <+0x12d>
0865d0fe +0x126:  mov    $0x1,%eax
0865d103 +0x12b:  jmp    0865d10a <+0x132>
0865d105 +0x12d:  mov    $0x0,%eax
0865d10a +0x132:  test   %al,%al
0865d10c +0x134:  je     0865d158 <+0x180>
0865d10e +0x136:  fildl  0xc(%ebp)
0865d111 +0x139:  flds   &data#37066a79(.rodata)
0865d117 +0x13f:  fmulp  %st,%st(1)
0865d119 +0x141:  fnstcw -0x9a(%ebp)
0865d11f +0x147:  movzwl -0x9a(%ebp),%eax
0865d126 +0x14e:  mov    $0xc,%ah
0865d128 +0x150:  mov    %ax,-0x9c(%ebp)
0865d12f +0x157:  fldcw  -0x9c(%ebp)
0865d135 +0x15d:  fistpl 0xc(%ebp)
0865d138 +0x160:  fldcw  -0x9a(%ebp)
0865d13e +0x166:  jmp    0865d16e <+0x196>
0865d140 +0x168:  fnstcw -0x9a(%ebp)
0865d146 +0x16e:  movzwl -0x9a(%ebp),%eax
0865d14d +0x175:  mov    $0xc,%ah
0865d14f +0x177:  mov    %ax,-0x9c(%ebp)
0865d156 +0x17e:  jmp    0865d16e <+0x196>
0865d158 +0x180:  fnstcw -0x9a(%ebp)
0865d15e +0x186:  movzwl -0x9a(%ebp),%eax
0865d165 +0x18d:  mov    $0xc,%ah
0865d167 +0x18f:  mov    %ax,-0x9c(%ebp)
0865d16e +0x196:  fildl  0xc(%ebp)
0865d171 +0x199:  flds   "fff?"
0865d177 +0x19f:  fmulp  %st,%st(1)
0865d179 +0x1a1:  fldcw  -0x9c(%ebp)
0865d17f +0x1a7:  fistpl 0xc(%ebp)
0865d182 +0x1aa:  fldcw  -0x9a(%ebp)
0865d188 +0x1b0:  fildl  0xc(%ebp)
0865d18b +0x1b3:  fstps  -0xa0(%ebp)
0865d191 +0x1b9:  mov    0x8(%ebp),%eax
0865d194 +0x1bc:  mov    %eax,(%esp)
0865d197 +0x1bf:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d19c +0x1c4:  mov    0x14(%eax),%ebx
0865d19f +0x1c7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865d1a4 +0x1cc:  add    $0x68,%eax
0865d1a7 +0x1cf:  mov    %ebx,0x4(%esp)
0865d1ab +0x1d3:  mov    %eax,(%esp)
0865d1ae +0x1d6:  call   08693918 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x16d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x16d
0865d1b3 +0x1db:  fmuls  -0xa0(%ebp)
0865d1b9 +0x1e1:  fnstcw -0x9a(%ebp)
0865d1bf +0x1e7:  movzwl -0x9a(%ebp),%eax
0865d1c6 +0x1ee:  mov    $0xc,%ah
0865d1c8 +0x1f0:  mov    %ax,-0x9c(%ebp)
0865d1cf +0x1f7:  fldcw  -0x9c(%ebp)
0865d1d5 +0x1fd:  fistpl 0xc(%ebp)
0865d1d8 +0x200:  fldcw  -0x9a(%ebp)
0865d1de +0x206:  cmpl   $0xfffe7960,0xc(%ebp)
0865d1e5 +0x20d:  jl     0865d1f0 <+0x218>
0865d1e7 +0x20f:  cmpl   $&_ZL14gUnicodeBuffer+0xe174,0xc(%ebp)
0865d1ee +0x216:  jle    0865d269 <+0x291>
0865d1f0 +0x218:  mov    0x8(%ebp),%eax
0865d1f3 +0x21b:  mov    %eax,(%esp)
0865d1f6 +0x21e:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d1fb +0x223:  mov    0x8(%eax),%edi
0865d1fe +0x226:  mov    0x8(%ebp),%eax
0865d201 +0x229:  mov    %eax,(%esp)
0865d204 +0x22c:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0865d209 +0x231:  mov    %eax,%esi
0865d20b +0x233:  movl   $0xffffffff,0x4(%esp)
0865d213 +0x23b:  mov    0x8(%ebp),%eax
0865d216 +0x23e:  mov    %eax,(%esp)
0865d219 +0x241:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0865d21e +0x246:  mov    %eax,%ebx
0865d220 +0x248:  movl   $0x5,0xc(%esp)
0865d228 +0x250:  movl   $0x35ed,0x8(%esp)
0865d230 +0x258:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x4(%esp)
0865d238 +0x260:  lea    -0x64(%ebp),%eax
0865d23b +0x263:  mov    %eax,(%esp)
0865d23e +0x266:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865d243 +0x26b:  mov    %edi,0x14(%esp)
0865d247 +0x26f:  mov    %esi,0x10(%esp)
0865d24b +0x273:  mov    %ebx,0xc(%esp)
0865d24f +0x277:  mov    0xc(%ebp),%eax
0865d252 +0x27a:  mov    %eax,0x8(%esp)
0865d256 +0x27e:  movl   $"pvp_exp_error6 %d, charac_no(%d), grade(%d), exp(%d)",0x4(%esp)
0865d25e +0x286:  lea    -0x64(%ebp),%eax
0865d261 +0x289:  mov    %eax,(%esp)
0865d264 +0x28c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865d269 +0x291:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d26e +0x296:  mov    %eax,(%esp)
0865d271 +0x299:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0865d276 +0x29e:  test   %al,%al
0865d278 +0x2a0:  je     0865d292 <+0x2ba>
0865d27a +0x2a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865d27f +0x2a7:  mov    %eax,(%esp)
0865d282 +0x2aa:  call   085e68a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x30>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x30
0865d287 +0x2af:  test   %eax,%eax
0865d289 +0x2b1:  jne    0865d292 <+0x2ba>
0865d28b +0x2b3:  mov    $0x1,%eax
0865d290 +0x2b8:  jmp    0865d297 <+0x2bf>
0865d292 +0x2ba:  mov    $0x0,%eax
0865d297 +0x2bf:  test   %al,%al
0865d299 +0x2c1:  je     0865d2bb <+0x2e3>
0865d29b +0x2c3:  mov    0xc(%ebp),%eax
0865d29e +0x2c6:  imul   $0x46,%eax,%ecx
0865d2a1 +0x2c9:  mov    $0x51eb851f,%edx
0865d2a6 +0x2ce:  mov    %ecx,%eax
0865d2a8 +0x2d0:  imul   %edx
0865d2aa +0x2d2:  sar    $0x5,%edx
0865d2ad +0x2d5:  mov    %ecx,%eax
0865d2af +0x2d7:  sar    $0x1f,%eax
0865d2b2 +0x2da:  mov    %edx,%ecx
0865d2b4 +0x2dc:  sub    %eax,%ecx
0865d2b6 +0x2de:  mov    %ecx,%eax
0865d2b8 +0x2e0:  mov    %eax,0xc(%ebp)
0865d2bb +0x2e3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d2c0 +0x2e8:  mov    %eax,(%esp)
0865d2c3 +0x2eb:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865d2c8 +0x2f0:  cmp    $0xf,%eax
0865d2cb +0x2f3:  jne    0865d2da <+0x302>
0865d2cd +0x2f5:  cmpl   $0x0,0xc(%ebp)
0865d2d1 +0x2f9:  jle    0865d2da <+0x302>
0865d2d3 +0x2fb:  mov    $0x1,%eax
0865d2d8 +0x300:  jmp    0865d2df <+0x307>
0865d2da +0x302:  mov    $0x0,%eax
0865d2df +0x307:  test   %al,%al
0865d2e1 +0x309:  je     0865d34a <+0x372>
0865d2e3 +0x30b:  mov    0x8(%ebp),%eax
0865d2e6 +0x30e:  mov    %eax,(%esp)
0865d2e9 +0x311:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d2ee +0x316:  mov    0x14(%eax),%ebx
0865d2f1 +0x319:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865d2f6 +0x31e:  mov    %eax,(%esp)
0865d2f9 +0x321:  call   0822b65a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd04
0865d2fe +0x326:  mov    %ebx,%edx
0865d300 +0x328:  sub    %eax,%edx
0865d302 +0x32a:  mov    %edx,%eax
0865d304 +0x32c:  mov    %eax,-0x2c(%ebp)
0865d307 +0x32f:  cmpl   $0x0,-0x2c(%ebp)
0865d30b +0x333:  jle    0865d34a <+0x372>
0865d30d +0x335:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865d312 +0x33a:  lea    0x68(%eax),%edx
0865d315 +0x33d:  mov    -0x2c(%ebp),%eax
0865d318 +0x340:  mov    %eax,0x4(%esp)
0865d31c +0x344:  mov    %edx,(%esp)
0865d31f +0x347:  call   08693994 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1e9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1e9
0865d324 +0x34c:  mov    %eax,-0x28(%ebp)
0865d327 +0x34f:  mov    0xc(%ebp),%eax
0865d32a +0x352:  mov    %eax,%ecx
0865d32c +0x354:  imul   -0x28(%ebp),%ecx
0865d330 +0x358:  mov    $0x51eb851f,%edx
0865d335 +0x35d:  mov    %ecx,%eax
0865d337 +0x35f:  imul   %edx
0865d339 +0x361:  sar    $0x5,%edx
0865d33c +0x364:  mov    %ecx,%eax
0865d33e +0x366:  sar    $0x1f,%eax
0865d341 +0x369:  mov    %edx,%ecx
0865d343 +0x36b:  sub    %eax,%ecx
0865d345 +0x36d:  mov    %ecx,%eax
0865d347 +0x36f:  mov    %eax,0xc(%ebp)
0865d34a +0x372:  cmpl   $0xfffe7960,0xc(%ebp)
0865d351 +0x379:  jl     0865d35c <+0x384>
0865d353 +0x37b:  cmpl   $&_ZL14gUnicodeBuffer+0xe174,0xc(%ebp)
0865d35a +0x382:  jle    0865d3d5 <+0x3fd>
0865d35c +0x384:  mov    0x8(%ebp),%eax
0865d35f +0x387:  mov    %eax,(%esp)
0865d362 +0x38a:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d367 +0x38f:  mov    0x8(%eax),%edi
0865d36a +0x392:  mov    0x8(%ebp),%eax
0865d36d +0x395:  mov    %eax,(%esp)
0865d370 +0x398:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0865d375 +0x39d:  mov    %eax,%esi
0865d377 +0x39f:  movl   $0xffffffff,0x4(%esp)
0865d37f +0x3a7:  mov    0x8(%ebp),%eax
0865d382 +0x3aa:  mov    %eax,(%esp)
0865d385 +0x3ad:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0865d38a +0x3b2:  mov    %eax,%ebx
0865d38c +0x3b4:  movl   $0x5,0xc(%esp)
0865d394 +0x3bc:  movl   $0x3607,0x8(%esp)
0865d39c +0x3c4:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x4(%esp)
0865d3a4 +0x3cc:  lea    -0x54(%ebp),%eax
0865d3a7 +0x3cf:  mov    %eax,(%esp)
0865d3aa +0x3d2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865d3af +0x3d7:  mov    %edi,0x14(%esp)
0865d3b3 +0x3db:  mov    %esi,0x10(%esp)
0865d3b7 +0x3df:  mov    %ebx,0xc(%esp)
0865d3bb +0x3e3:  mov    0xc(%ebp),%eax
0865d3be +0x3e6:  mov    %eax,0x8(%esp)
0865d3c2 +0x3ea:  movl   $"pvp_exp_error7 %d, charac_no(%d), grade(%d), exp(%d)",0x4(%esp)
0865d3ca +0x3f2:  lea    -0x54(%ebp),%eax
0865d3cd +0x3f5:  mov    %eax,(%esp)
0865d3d0 +0x3f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865d3d5 +0x3fd:  mov    0x8(%ebp),%eax
0865d3d8 +0x400:  mov    %eax,(%esp)
0865d3db +0x403:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0865d3e0 +0x408:  mov    %eax,-0x34(%ebp)
0865d3e3 +0x40b:  cmpl   $0x0,-0x34(%ebp)
0865d3e7 +0x40f:  jne    0865d3f3 <+0x41b>
0865d3e9 +0x411:  mov    $0x1,%eax
0865d3ee +0x416:  jmp    0865d97b <+0x9a3>
0865d3f3 +0x41b:  mov    0x8(%ebp),%eax
0865d3f6 +0x41e:  mov    %eax,0x4(%esp)
0865d3fa +0x422:  mov    -0x34(%ebp),%eax
0865d3fd +0x425:  mov    %eax,(%esp)
0865d400 +0x428:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
0865d405 +0x42d:  mov    %eax,-0x30(%ebp)
0865d408 +0x430:  mov    -0x30(%ebp),%eax
0865d40b +0x433:  mov    %eax,0x4(%esp)
0865d40f +0x437:  mov    -0x34(%ebp),%eax
0865d412 +0x43a:  mov    %eax,(%esp)
0865d415 +0x43d:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
0865d41a +0x442:  test   %al,%al
0865d41c +0x444:  je     0865d428 <+0x450>
0865d41e +0x446:  mov    $0x1,%eax
0865d423 +0x44b:  jmp    0865d97b <+0x9a3>
0865d428 +0x450:  mov    0x8(%ebp),%eax
0865d42b +0x453:  mov    %eax,(%esp)
0865d42e +0x456:  call   0866270a <_ZNK5CUser18has_within_MissionEv>  ; CUser::has_within_Mission() const
0865d433 +0x45b:  test   %ax,%ax
0865d436 +0x45e:  setne  %al
0865d439 +0x461:  test   %al,%al
0865d43b +0x463:  je     0865d5a4 <+0x5cc>
0865d441 +0x469:  lea    -0x80(%ebp),%eax
0865d444 +0x46c:  mov    %eax,(%esp)
0865d447 +0x46f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865d44c +0x474:  cmpl   $0x0,0xc(%ebp)
0865d450 +0x478:  jle    0865d4f7 <+0x51f>
0865d456 +0x47e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d45b +0x483:  mov    %eax,(%esp)
0865d45e +0x486:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865d463 +0x48b:  cmp    $0xf,%eax
0865d466 +0x48e:  setne  %al
0865d469 +0x491:  test   %al,%al
0865d46b +0x493:  je     0865d4eb <+0x513>
0865d46d +0x495:  movl   $0x1b,0x4(%esp)
0865d475 +0x49d:  mov    0x8(%ebp),%eax
0865d478 +0x4a0:  mov    %eax,(%esp)
0865d47b +0x4a3:  call   0866273c <_ZN5CUser14Remove_MissionEs>  ; CUser::Remove_Mission(short)
0865d480 +0x4a8:  movl   $0x7,0x4(%esp)
0865d488 +0x4b0:  mov    0x8(%ebp),%eax
0865d48b +0x4b3:  mov    %eax,(%esp)
0865d48e +0x4b6:  call   0866273c <_ZN5CUser14Remove_MissionEs>  ; CUser::Remove_Mission(short)
0865d493 +0x4bb:  movl   $0x158,0x8(%esp)
0865d49b +0x4c3:  movl   $0x0,0x4(%esp)
0865d4a3 +0x4cb:  lea    -0x80(%ebp),%eax
0865d4a6 +0x4ce:  mov    %eax,(%esp)
0865d4a9 +0x4d1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865d4ae +0x4d6:  movl   $0x0,0x4(%esp)
0865d4b6 +0x4de:  lea    -0x80(%ebp),%eax
0865d4b9 +0x4e1:  mov    %eax,(%esp)
0865d4bc +0x4e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865d4c1 +0x4e9:  movl   $0x1,0x4(%esp)
0865d4c9 +0x4f1:  lea    -0x80(%ebp),%eax
0865d4cc +0x4f4:  mov    %eax,(%esp)
0865d4cf +0x4f7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865d4d4 +0x4fc:  lea    -0x80(%ebp),%eax
0865d4d7 +0x4ff:  mov    %eax,0x4(%esp)
0865d4db +0x503:  mov    0x8(%ebp),%eax
0865d4de +0x506:  mov    %eax,(%esp)
0865d4e1 +0x509:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865d4e6 +0x50e:  jmp    0865d597 <+0x5bf>
0865d4eb +0x513:  movl   $0x0,0xc(%ebp)
0865d4f2 +0x51a:  jmp    0865d597 <+0x5bf>
0865d4f7 +0x51f:  cmpl   $0x0,0xc(%ebp)
0865d4fb +0x523:  jns    0865d597 <+0x5bf>
0865d501 +0x529:  movl   $0x1b,0x4(%esp)
0865d509 +0x531:  mov    0x8(%ebp),%eax
0865d50c +0x534:  mov    %eax,(%esp)
0865d50f +0x537:  call   0866273c <_ZN5CUser14Remove_MissionEs>  ; CUser::Remove_Mission(short)
0865d514 +0x53c:  movl   $0x7,0x4(%esp)
0865d51c +0x544:  mov    0x8(%ebp),%eax
0865d51f +0x547:  mov    %eax,(%esp)
0865d522 +0x54a:  call   0866273c <_ZN5CUser14Remove_MissionEs>  ; CUser::Remove_Mission(short)
0865d527 +0x54f:  movl   $0x158,0x8(%esp)
0865d52f +0x557:  movl   $0x0,0x4(%esp)
0865d537 +0x55f:  lea    -0x80(%ebp),%eax
0865d53a +0x562:  mov    %eax,(%esp)
0865d53d +0x565:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865d542 +0x56a:  movl   $0x1,0x4(%esp)
0865d54a +0x572:  lea    -0x80(%ebp),%eax
0865d54d +0x575:  mov    %eax,(%esp)
0865d550 +0x578:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865d555 +0x57d:  movl   $0x1,0x4(%esp)
0865d55d +0x585:  lea    -0x80(%ebp),%eax
0865d560 +0x588:  mov    %eax,(%esp)
0865d563 +0x58b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865d568 +0x590:  lea    -0x80(%ebp),%eax
0865d56b +0x593:  mov    %eax,0x4(%esp)
0865d56f +0x597:  mov    0x8(%ebp),%eax
0865d572 +0x59a:  mov    %eax,(%esp)
0865d575 +0x59d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865d57a +0x5a2:  jmp    0865d597 <+0x5bf>
0865d57c +0x5a4:  mov    %edx,%ebx
0865d57e +0x5a6:  mov    %eax,%esi
0865d580 +0x5a8:  lea    -0x80(%ebp),%eax
0865d583 +0x5ab:  mov    %eax,(%esp)
0865d586 +0x5ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865d58b +0x5b3:  mov    %esi,%eax
0865d58d +0x5b5:  mov    %ebx,%edx
0865d58f +0x5b7:  mov    %eax,(%esp)
0865d592 +0x5ba:  call   08ae3750 <_Unwind_Resume>
0865d597 +0x5bf:  lea    -0x80(%ebp),%eax
0865d59a +0x5c2:  mov    %eax,(%esp)
0865d59d +0x5c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865d5a2 +0x5ca:  jmp    0865d5d7 <+0x5ff>
0865d5a4 +0x5cc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d5a9 +0x5d1:  mov    %eax,(%esp)
0865d5ac +0x5d4:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865d5b1 +0x5d9:  cmp    $0xf,%eax
0865d5b4 +0x5dc:  sete   %al
0865d5b7 +0x5df:  test   %al,%al
0865d5b9 +0x5e1:  je     0865d5d7 <+0x5ff>
0865d5bb +0x5e3:  mov    0x8(%ebp),%eax
0865d5be +0x5e6:  mov    %eax,(%esp)
0865d5c1 +0x5e9:  call   08662774 <_ZNK5CUser25acceptable_within_missionEv>  ; CUser::acceptable_within_mission() const
0865d5c6 +0x5ee:  test   %al,%al
0865d5c8 +0x5f0:  je     0865d5d7 <+0x5ff>
0865d5ca +0x5f2:  cmpl   $0x0,0xc(%ebp)
0865d5ce +0x5f6:  jle    0865d5d7 <+0x5ff>
0865d5d0 +0x5f8:  movl   $0x0,0xc(%ebp)
0865d5d7 +0x5ff:  cmpl   $0xfffe7960,0xc(%ebp)
0865d5de +0x606:  jl     0865d5e9 <+0x611>
0865d5e0 +0x608:  cmpl   $&_ZL14gUnicodeBuffer+0xe174,0xc(%ebp)
0865d5e7 +0x60f:  jle    0865d662 <+0x68a>
0865d5e9 +0x611:  mov    0x8(%ebp),%eax
0865d5ec +0x614:  mov    %eax,(%esp)
0865d5ef +0x617:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d5f4 +0x61c:  mov    0x8(%eax),%edi
0865d5f7 +0x61f:  mov    0x8(%ebp),%eax
0865d5fa +0x622:  mov    %eax,(%esp)
0865d5fd +0x625:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0865d602 +0x62a:  mov    %eax,%esi
0865d604 +0x62c:  movl   $0xffffffff,0x4(%esp)
0865d60c +0x634:  mov    0x8(%ebp),%eax
0865d60f +0x637:  mov    %eax,(%esp)
0865d612 +0x63a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0865d617 +0x63f:  mov    %eax,%ebx
0865d619 +0x641:  movl   $0x5,0xc(%esp)
0865d621 +0x649:  movl   $0x3653,0x8(%esp)
0865d629 +0x651:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x4(%esp)
0865d631 +0x659:  lea    -0x44(%ebp),%eax
0865d634 +0x65c:  mov    %eax,(%esp)
0865d637 +0x65f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865d63c +0x664:  mov    %edi,0x14(%esp)
0865d640 +0x668:  mov    %esi,0x10(%esp)
0865d644 +0x66c:  mov    %ebx,0xc(%esp)
0865d648 +0x670:  mov    0xc(%ebp),%eax
0865d64b +0x673:  mov    %eax,0x8(%esp)
0865d64f +0x677:  movl   $"pvp_exp_error8 %d, charac_no(%d), grade(%d), exp(%d)",0x4(%esp)
0865d657 +0x67f:  lea    -0x44(%ebp),%eax
0865d65a +0x682:  mov    %eax,(%esp)
0865d65d +0x685:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865d662 +0x68a:  mov    0x8(%ebp),%eax
0865d665 +0x68d:  mov    %eax,(%esp)
0865d668 +0x690:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d66d +0x695:  mov    0x8(%eax),%edx
0865d670 +0x698:  add    0xc(%ebp),%edx
0865d673 +0x69b:  mov    %edx,0x8(%eax)
0865d676 +0x69e:  mov    0x8(%ebp),%eax
0865d679 +0x6a1:  mov    %eax,(%esp)
0865d67c +0x6a4:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d681 +0x6a9:  mov    0x8(%eax),%eax
0865d684 +0x6ac:  shr    $0x1f,%eax
0865d687 +0x6af:  test   %al,%al
0865d689 +0x6b1:  je     0865d6e2 <+0x70a>
0865d68b +0x6b3:  mov    0x8(%ebp),%eax
0865d68e +0x6b6:  mov    %eax,(%esp)
0865d691 +0x6b9:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d696 +0x6be:  mov    0x8(%eax),%eax
0865d699 +0x6c1:  mov    0xc(%ebp),%edx
0865d69c +0x6c4:  mov    %edx,0x18(%esp)
0865d6a0 +0x6c8:  mov    %eax,0x14(%esp)
0865d6a4 +0x6cc:  movl   $"PVP correct now<%d> point<%d>",0x10(%esp)
0865d6ac +0x6d4:  movl   $0x365c,0xc(%esp)
0865d6b4 +0x6dc:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x8(%esp)
0865d6bc +0x6e4:  movl   $"user.cpp",0x4(%esp)
0865d6c4 +0x6ec:  movl   $0x1,(%esp)
0865d6cb +0x6f3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0865d6d0 +0x6f8:  mov    0x8(%ebp),%eax
0865d6d3 +0x6fb:  mov    %eax,(%esp)
0865d6d6 +0x6fe:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d6db +0x703:  movl   $0x0,0x8(%eax)
0865d6e2 +0x70a:  mov    0x8(%ebp),%eax
0865d6e5 +0x70d:  mov    %eax,(%esp)
0865d6e8 +0x710:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d6ed +0x715:  mov    0x14(%eax),%eax
0865d6f0 +0x718:  cmp    $0x1d,%eax
0865d6f3 +0x71b:  setle  %al
0865d6f6 +0x71e:  test   %al,%al
0865d6f8 +0x720:  je     0865d976 <+0x99e>
0865d6fe +0x726:  mov    0x8(%ebp),%eax
0865d701 +0x729:  mov    %eax,(%esp)
0865d704 +0x72c:  call   0866270a <_ZNK5CUser18has_within_MissionEv>  ; CUser::has_within_Mission() const
0865d709 +0x731:  test   %ax,%ax
0865d70c +0x734:  sete   %al
0865d70f +0x737:  test   %al,%al
0865d711 +0x739:  je     0865d735 <+0x75d>
0865d713 +0x73b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d718 +0x740:  mov    %eax,(%esp)
0865d71b +0x743:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865d720 +0x748:  cmp    $0xf,%eax
0865d723 +0x74b:  sete   %al
0865d726 +0x74e:  test   %al,%al
0865d728 +0x750:  je     0865d735 <+0x75d>
0865d72a +0x752:  mov    0x8(%ebp),%eax
0865d72d +0x755:  mov    %eax,(%esp)
0865d730 +0x758:  call   08662774 <_ZNK5CUser25acceptable_within_missionEv>  ; CUser::acceptable_within_mission() const
0865d735 +0x75d:  mov    0x8(%ebp),%eax
0865d738 +0x760:  mov    %eax,(%esp)
0865d73b +0x763:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d740 +0x768:  mov    0x8(%eax),%edx
0865d743 +0x76b:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0865d748 +0x770:  mov    %edx,0x4(%esp)
0865d74c +0x774:  mov    %eax,(%esp)
0865d74f +0x777:  call   085d47ce <_ZNK11RefPvpGrade11GetPvpGradeEi>  ; RefPvpGrade::GetPvpGrade(int) const
0865d754 +0x77c:  mov    %eax,-0x24(%ebp)
0865d757 +0x77f:  cmpl   $0x0,-0x24(%ebp)
0865d75b +0x783:  jle    0865d938 <+0x960>
0865d761 +0x789:  mov    0x8(%ebp),%eax
0865d764 +0x78c:  mov    %eax,(%esp)
0865d767 +0x78f:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d76c +0x794:  mov    0x14(%eax),%eax
0865d76f +0x797:  cmp    -0x24(%ebp),%eax
0865d772 +0x79a:  setg   %al
0865d775 +0x79d:  test   %al,%al
0865d777 +0x79f:  je     0865d7f2 <+0x81a>
0865d779 +0x7a1:  mov    0x8(%ebp),%eax
0865d77c +0x7a4:  mov    %eax,(%esp)
0865d77f +0x7a7:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d784 +0x7ac:  mov    0x14(%eax),%eax
0865d787 +0x7af:  cmp    $0x9,%eax
0865d78a +0x7b2:  jle    0865d7a6 <+0x7ce>
0865d78c +0x7b4:  mov    0x8(%ebp),%eax
0865d78f +0x7b7:  mov    %eax,(%esp)
0865d792 +0x7ba:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d797 +0x7bf:  mov    0x14(%eax),%eax
0865d79a +0x7c2:  cmp    $0xf,%eax
0865d79d +0x7c5:  jg     0865d7a6 <+0x7ce>
0865d79f +0x7c7:  mov    $0x1,%eax
0865d7a4 +0x7cc:  jmp    0865d7ab <+0x7d3>
0865d7a6 +0x7ce:  mov    $0x0,%eax
0865d7ab +0x7d3:  test   %al,%al
0865d7ad +0x7d5:  je     0865d7f2 <+0x81a>
0865d7af +0x7d7:  mov    0x8(%ebp),%eax
0865d7b2 +0x7da:  mov    %eax,(%esp)
0865d7b5 +0x7dd:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d7ba +0x7e2:  mov    %eax,%ebx
0865d7bc +0x7e4:  mov    0x8(%ebp),%eax
0865d7bf +0x7e7:  mov    %eax,(%esp)
0865d7c2 +0x7ea:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d7c7 +0x7ef:  mov    0x14(%eax),%edx
0865d7ca +0x7f2:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0865d7cf +0x7f7:  mov    %edx,0x4(%esp)
0865d7d3 +0x7fb:  mov    %eax,(%esp)
0865d7d6 +0x7fe:  call   085d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>  ; RefPvpGrade::GetPvpPoint(int) const
0865d7db +0x803:  add    $0x1,%eax
0865d7de +0x806:  mov    %eax,0x8(%ebx)
0865d7e1 +0x809:  mov    0x8(%ebp),%eax
0865d7e4 +0x80c:  mov    %eax,(%esp)
0865d7e7 +0x80f:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d7ec +0x814:  mov    0x14(%eax),%eax
0865d7ef +0x817:  mov    %eax,-0x24(%ebp)
0865d7f2 +0x81a:  mov    0x8(%ebp),%eax
0865d7f5 +0x81d:  mov    %eax,(%esp)
0865d7f8 +0x820:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d7fd +0x825:  mov    0x14(%eax),%eax
0865d800 +0x828:  mov    %eax,-0x20(%ebp)
0865d803 +0x82b:  mov    0x8(%ebp),%eax
0865d806 +0x82e:  mov    %eax,(%esp)
0865d809 +0x831:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d80e +0x836:  mov    -0x24(%ebp),%edx
0865d811 +0x839:  mov    %edx,0x14(%eax)
0865d814 +0x83c:  mov    0x8(%ebp),%eax
0865d817 +0x83f:  mov    %eax,(%esp)
0865d81a +0x842:  call   0866270a <_ZNK5CUser18has_within_MissionEv>  ; CUser::has_within_Mission() const
0865d81f +0x847:  test   %ax,%ax
0865d822 +0x84a:  setne  %al
0865d825 +0x84d:  test   %al,%al
0865d827 +0x84f:  je     0865d852 <+0x87a>
0865d829 +0x851:  mov    0x8(%ebp),%eax
0865d82c +0x854:  mov    %eax,(%esp)
0865d82f +0x857:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d834 +0x85c:  mov    0x14(%eax),%eax
0865d837 +0x85f:  cmp    -0x20(%ebp),%eax
0865d83a +0x862:  setg   %al
0865d83d +0x865:  test   %al,%al
0865d83f +0x867:  je     0865d852 <+0x87a>
0865d841 +0x869:  mov    0x8(%ebp),%eax
0865d844 +0x86c:  mov    %eax,(%esp)
0865d847 +0x86f:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d84c +0x874:  mov    -0x20(%ebp),%edx
0865d84f +0x877:  mov    %edx,0x14(%eax)
0865d852 +0x87a:  mov    0x8(%ebp),%eax
0865d855 +0x87d:  mov    %eax,(%esp)
0865d858 +0x880:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d85d +0x885:  mov    0x14(%eax),%eax
0865d860 +0x888:  cmp    -0x20(%ebp),%eax
0865d863 +0x88b:  setne  %al
0865d866 +0x88e:  test   %al,%al
0865d868 +0x890:  je     0865d976 <+0x99e>
0865d86e +0x896:  lea    -0x8c(%ebp),%eax
0865d874 +0x89c:  mov    %eax,(%esp)
0865d877 +0x89f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865d87c +0x8a4:  lea    -0x8c(%ebp),%ebx
0865d882 +0x8aa:  mov    0x8(%ebp),%eax
0865d885 +0x8ad:  mov    %eax,(%esp)
0865d888 +0x8b0:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0865d88d +0x8b5:  mov    %ebx,0x4(%esp)
0865d891 +0x8b9:  mov    %eax,(%esp)
0865d894 +0x8bc:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0865d899 +0x8c1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865d89e +0x8c6:  mov    %eax,(%esp)
0865d8a1 +0x8c9:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865d8a6 +0x8ce:  cmp    $0xf,%eax
0865d8a9 +0x8d1:  setne  %al
0865d8ac +0x8d4:  test   %al,%al
0865d8ae +0x8d6:  je     0865d8f3 <+0x91b>
0865d8b0 +0x8d8:  movl   $0x1e,0x4(%esp)
0865d8b8 +0x8e0:  mov    0x8(%ebp),%eax
0865d8bb +0x8e3:  mov    %eax,(%esp)
0865d8be +0x8e6:  call   0866273c <_ZN5CUser14Remove_MissionEs>  ; CUser::Remove_Mission(short)
0865d8c3 +0x8eb:  movl   $0x8,0x4(%esp)
0865d8cb +0x8f3:  mov    0x8(%ebp),%eax
0865d8ce +0x8f6:  mov    %eax,(%esp)
0865d8d1 +0x8f9:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865d8d6 +0x8fe:  mov    %eax,-0x1c(%ebp)
0865d8d9 +0x901:  movl   $0x1e,0x8(%esp)
0865d8e1 +0x909:  mov    0x8(%ebp),%eax
0865d8e4 +0x90c:  mov    %eax,0x4(%esp)
0865d8e8 +0x910:  mov    -0x1c(%ebp),%eax
0865d8eb +0x913:  mov    %eax,(%esp)
0865d8ee +0x916:  call   085e4fba <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj>  ; CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)
0865d8f3 +0x91b:  lea    -0x8c(%ebp),%eax
0865d8f9 +0x921:  mov    %eax,0x4(%esp)
0865d8fd +0x925:  mov    0x8(%ebp),%eax
0865d900 +0x928:  mov    %eax,(%esp)
0865d903 +0x92b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865d908 +0x930:  jmp    0865d928 <+0x950>
0865d90a +0x932:  mov    %edx,%ebx
0865d90c +0x934:  mov    %eax,%esi
0865d90e +0x936:  lea    -0x8c(%ebp),%eax
0865d914 +0x93c:  mov    %eax,(%esp)
0865d917 +0x93f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865d91c +0x944:  mov    %esi,%eax
0865d91e +0x946:  mov    %ebx,%edx
0865d920 +0x948:  mov    %eax,(%esp)
0865d923 +0x94b:  call   08ae3750 <_Unwind_Resume>
0865d928 +0x950:  lea    -0x8c(%ebp),%eax
0865d92e +0x956:  mov    %eax,(%esp)
0865d931 +0x959:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865d936 +0x95e:  jmp    0865d976 <+0x99e>
0865d938 +0x960:  mov    0x8(%ebp),%eax
0865d93b +0x963:  mov    %eax,(%esp)
0865d93e +0x966:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d943 +0x96b:  mov    0x8(%eax),%eax
0865d946 +0x96e:  mov    %eax,0x14(%esp)
0865d94a +0x972:  movl   $"PVP Grade Incorrect %d",0x10(%esp)
0865d952 +0x97a:  movl   $0x36bc,0xc(%esp)
0865d95a +0x982:  movl   $&_ZZN5CUser16update_pvp_pointEiE19__PRETTY_FUNCTION__,0x8(%esp)
0865d962 +0x98a:  movl   $"user.cpp",0x4(%esp)
0865d96a +0x992:  movl   $0x1,(%esp)
0865d971 +0x999:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0865d976 +0x99e:  mov    $0x1,%eax
0865d97b +0x9a3:  add    $0xbc,%esp
0865d981 +0x9a9:  pop    %ebx
0865d982 +0x9aa:  pop    %esi
0865d983 +0x9ab:  pop    %edi
0865d984 +0x9ac:  pop    %ebp
0865d985 +0x9ad:  ret
```

## 反编译 C

```c
// CUser::update_pvp_point @ 0x865cfd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::update_pvp_point(int) */

undefined4 __thiscall CUser::update_pvp_point(CUser *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  GameWorld *pGVar10;
  CDataManager *pCVar11;
  int iVar12;
  UserQuest *this_00;
  longdouble lVar13;
  PacketGuard local_90 [12];
  PacketGuard local_84 [12];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  PvP_Room *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CMissionList_Charac *local_20;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 < 0) {
    if ((param_1 < -100000) || (100000 < param_1)) {
      iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
      uVar1 = *(undefined4 *)(iVar6 + 8);
      uVar7 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      uVar8 = get_charac_no(this,-1);
      cMyTrace::cMyTrace(local_78,"bool CUser::update_pvp_point(int)",0x35d6,5);
      cMyTrace::operator()
                (local_78,"pvp_exp_error5 %d, charac_no(%d), grade(%d), exp(%d)",param_1,uVar8,uVar7
                 ,uVar1);
    }
    iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
    if (*(int *)(iVar6 + 0x14) < 10) {
      return 1;
    }
    piVar9 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x36);
    cVar4 = (**(code **)(*piVar9 + 0x34))(piVar9,0);
    if (cVar4 != '\0') {
      iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
      if ((*(int *)(iVar6 + 0x14) < 10) ||
         (iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this),
         0x13 < *(int *)(iVar6 + 0x14))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        param_1 = (int)ROUND(_DAT_08cf396c * (float)param_1);
      }
    }
    fVar3 = _DAT_08cf3970 * (float)param_1;
    CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
    iVar6 = G_CDataManager();
    lVar13 = (longdouble)ServerParameterScript::GetPvPPenaltyRevision(iVar6 + 0x68);
    param_1 = (int)ROUND(lVar13 * (longdouble)(int)ROUND(fVar3));
    if ((param_1 < -100000) || (100000 < param_1)) {
      iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
      uVar1 = *(undefined4 *)(iVar6 + 8);
      uVar7 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      uVar8 = get_charac_no(this,-1);
      cMyTrace::cMyTrace(local_68,"bool CUser::update_pvp_point(int)",0x35ed,5);
      cMyTrace::operator()
                (local_68,"pvp_exp_error6 %d, charac_no(%d), grade(%d), exp(%d)",param_1,uVar8,uVar7
                 ,uVar1);
    }
  }
  pGVar10 = (GameWorld *)G_GameWorld();
  cVar4 = GameWorld::IsIntegratedPvPBaseChannel(pGVar10);
  if (cVar4 != '\0') {
    pCVar11 = (CDataManager *)G_CDataManager();
    iVar6 = CDataManager::GetPvPChannelType(pCVar11);
    if (iVar6 == 0) {
      bVar2 = true;
      goto LAB_0865d297;
    }
  }
  bVar2 = false;
LAB_0865d297:
  if (bVar2) {
    param_1 = (param_1 * 0x46) / 100;
  }
  pGVar10 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar10);
  if ((iVar6 == 0xf) && (0 < param_1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
    iVar6 = *(int *)(iVar6 + 0x14);
    pCVar11 = (CDataManager *)G_CDataManager();
    local_30 = CDataManager::GetMaxGradePvPChannel(pCVar11);
    local_30 = iVar6 - local_30;
    if (0 < local_30) {
      iVar6 = G_CDataManager();
      local_2c = ServerParameterScript::GetPvPChannelGradePenalty(iVar6 + 0x68);
      param_1 = (param_1 * local_2c) / 100;
    }
  }
  if ((param_1 < -100000) || (100000 < param_1)) {
    iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
    uVar1 = *(undefined4 *)(iVar6 + 8);
    uVar7 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
    uVar8 = get_charac_no(this,-1);
    cMyTrace::cMyTrace(local_58,"bool CUser::update_pvp_point(int)",0x3607,5);
    cMyTrace::operator()
              (local_58,"pvp_exp_error7 %d, charac_no(%d), grade(%d), exp(%d)",param_1,uVar8,uVar7,
               uVar1);
  }
  local_38 = (PvP_Room *)GetPVPRoom(this);
  if (local_38 != (PvP_Room *)0x0) {
    local_34 = PvP_Room::get_user_seat(local_38,this);
    cVar4 = PvP_Room::IsPvpObserver(local_38,local_34);
    if (cVar4 == '\0') {
      sVar5 = has_within_Mission(this);
      if (sVar5 == 0) {
        pGVar10 = (GameWorld *)G_GameWorld();
        iVar6 = GameWorld::GetChannelType(pGVar10);
        if (((iVar6 == 0xf) && (cVar4 = acceptable_within_mission(this), cVar4 != '\0')) &&
           (0 < param_1)) {
          param_1 = 0;
        }
      }
      else {
        PacketGuard::PacketGuard(local_84);
        if (param_1 < 1) {
          if (param_1 < 0) {
            Remove_Mission(this,0x1b);
            Remove_Mission(this,7);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0x158);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,1);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
            Send(this,local_84);
          }
        }
        else {
                    /* try { // try from 0865d456 to 0865d579 has its CatchHandler @ 0865d57c */
          pGVar10 = (GameWorld *)G_GameWorld();
          iVar6 = GameWorld::GetChannelType(pGVar10);
          if (iVar6 == 0xf) {
            param_1 = 0;
          }
          else {
            Remove_Mission(this,0x1b);
            Remove_Mission(this,7);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0x158);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
            Send(this,local_84);
          }
        }
        PacketGuard::~PacketGuard(local_84);
      }
      if ((param_1 < -100000) || (100000 < param_1)) {
        iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
        uVar1 = *(undefined4 *)(iVar6 + 8);
        uVar7 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
        uVar8 = get_charac_no(this,-1);
        cMyTrace::cMyTrace(local_48,"bool CUser::update_pvp_point(int)",0x3653,5);
        cMyTrace::operator()
                  (local_48,"pvp_exp_error8 %d, charac_no(%d), grade(%d), exp(%d)",param_1,uVar8,
                   uVar7,uVar1);
      }
      iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + param_1;
      iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
      if (*(int *)(iVar6 + 8) < 0) {
        iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
        LogManager::logFormat
                  (1,"user.cpp","bool CUser::update_pvp_point(int)",0x365c,
                   "PVP correct now<%d> point<%d>",*(undefined4 *)(iVar6 + 8),param_1);
        iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
      if (*(int *)(iVar6 + 0x14) < 0x1e) {
        sVar5 = has_within_Mission(this);
        if (sVar5 == 0) {
          pGVar10 = (GameWorld *)G_GameWorld();
          iVar6 = GameWorld::GetChannelType(pGVar10);
          if (iVar6 == 0xf) {
            acceptable_within_mission(this);
          }
        }
        iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
        local_28 = RefPvpGrade::GetPvpGrade(GlobalData::s_ref_pvp_grade,*(int *)(iVar6 + 8));
        if (local_28 < 1) {
          iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
          LogManager::logFormat
                    (1,"user.cpp","bool CUser::update_pvp_point(int)",0x36bc,
                     "PVP Grade Incorrect %d",*(undefined4 *)(iVar6 + 8));
        }
        else {
          iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
          if (local_28 < *(int *)(iVar6 + 0x14)) {
            iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
            if ((*(int *)(iVar6 + 0x14) < 10) ||
               (iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this),
               0xf < *(int *)(iVar6 + 0x14))) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
              iVar12 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
              iVar12 = RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,*(int *)(iVar12 + 0x14))
              ;
              *(int *)(iVar6 + 8) = iVar12 + 1;
              iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
              local_28 = *(int *)(iVar6 + 0x14);
            }
          }
          iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
          local_24 = *(int *)(iVar6 + 0x14);
          iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
          *(int *)(iVar6 + 0x14) = local_28;
          sVar5 = has_within_Mission(this);
          if ((sVar5 != 0) &&
             (iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this),
             local_24 < *(int *)(iVar6 + 0x14))) {
            iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
            *(int *)(iVar6 + 0x14) = local_24;
          }
          iVar6 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
          if (*(int *)(iVar6 + 0x14) != local_24) {
            PacketGuard::PacketGuard(local_90);
            this_00 = (UserQuest *)getCurCharacQuestR(this);
                    /* try { // try from 0865d894 to 0865d907 has its CatchHandler @ 0865d90a */
            UserQuest::get_quest_info(this_00,(char *)local_90);
            pGVar10 = (GameWorld *)G_GameWorld();
            iVar6 = GameWorld::GetChannelType(pGVar10);
            if (iVar6 != 0xf) {
              Remove_Mission(this,0x1e);
              local_20 = (CMissionList_Charac *)GetCharacExpandData(this,8);
              CMissionList_Charac::MakeMissionList_JustKind(local_20,this,0x1e);
            }
            Send(this,local_90);
            PacketGuard::~PacketGuard(local_90);
          }
        }
      }
    }
  }
  return 1;
}
```
