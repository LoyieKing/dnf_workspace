# start_pvp

`_ZN8PvP_Room9start_pvpEv`

`PvP_Room::start_pvp()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d8c3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d8c3a  _ZN8PvP_Room9start_pvpEv
#           PvP_Room::start_pvp()
# range [0x085d8c3a, 0x085d91e1]
085d8c3a +0x000:  push   %ebp
085d8c3b +0x001:  mov    %esp,%ebp
085d8c3d +0x003:  push   %esi
085d8c3e +0x004:  push   %ebx
085d8c3f +0x005:  sub    $0x60,%esp
085d8c42 +0x008:  mov    0x8(%ebp),%eax
085d8c45 +0x00b:  mov    %eax,(%esp)
085d8c48 +0x00e:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d8c4d +0x013:  cmp    $0x1,%eax
085d8c50 +0x016:  setle  %al
085d8c53 +0x019:  test   %al,%al
085d8c55 +0x01b:  jne    085d91d9 <+0x59f>
085d8c5b +0x021:  mov    0x8(%ebp),%eax
085d8c5e +0x024:  mov    0x6e4(%eax),%eax
085d8c64 +0x02a:  mov    (%eax),%eax
085d8c66 +0x02c:  add    $0x18,%eax
085d8c69 +0x02f:  mov    (%eax),%edx
085d8c6b +0x031:  mov    0x8(%ebp),%eax
085d8c6e +0x034:  lea    0x4(%eax),%ebx
085d8c71 +0x037:  mov    0x8(%ebp),%eax
085d8c74 +0x03a:  lea    0x5c4(%eax),%ecx
085d8c7a +0x040:  mov    0x8(%ebp),%eax
085d8c7d +0x043:  mov    0x6e4(%eax),%eax
085d8c83 +0x049:  mov    %ebx,0x8(%esp)
085d8c87 +0x04d:  mov    %ecx,0x4(%esp)
085d8c8b +0x051:  mov    %eax,(%esp)
085d8c8e +0x054:  call   *%edx
085d8c90 +0x056:  mov    0x8(%ebp),%eax
085d8c93 +0x059:  movzwl 0x5c4(%eax),%eax
085d8c9a +0x060:  test   %ax,%ax
085d8c9d +0x063:  js     085d8cc0 <+0x86>
085d8c9f +0x065:  mov    0x8(%ebp),%eax
085d8ca2 +0x068:  movzwl 0x5c4(%eax),%eax
085d8ca9 +0x06f:  movswl %ax,%ebx
085d8cac +0x072:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d8cb1 +0x077:  mov    0x4(%eax),%eax
085d8cb4 +0x07a:  mov    %eax,(%esp)
085d8cb7 +0x07d:  call   085df796 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1d
085d8cbc +0x082:  cmp    %eax,%ebx
085d8cbe +0x084:  jle    085d8cc7 <+0x8d>
085d8cc0 +0x086:  mov    $0x1,%eax
085d8cc5 +0x08b:  jmp    085d8ccc <+0x92>
085d8cc7 +0x08d:  mov    $0x0,%eax
085d8ccc +0x092:  test   %al,%al
085d8cce +0x094:  je     085d8d23 <+0xe9>
085d8cd0 +0x096:  mov    0x8(%ebp),%eax
085d8cd3 +0x099:  movzwl 0x5c4(%eax),%eax
085d8cda +0x0a0:  movswl %ax,%ebx
085d8cdd +0x0a3:  movl   $0x0,0xc(%esp)
085d8ce5 +0x0ab:  movl   $0x880,0x8(%esp)
085d8ced +0x0b3:  movl   $&_ZZN8PvP_Room9start_pvpEvE19__PRETTY_FUNCTION__,0x4(%esp)
085d8cf5 +0x0bb:  lea    -0x44(%ebp),%eax
085d8cf8 +0x0be:  mov    %eax,(%esp)
085d8cfb +0x0c1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d8d00 +0x0c6:  mov    %ebx,0x8(%esp)
085d8d04 +0x0ca:  movl   $"START_PVP request_map_index(%d)",0x4(%esp)
085d8d0c +0x0d2:  lea    -0x44(%ebp),%eax
085d8d0f +0x0d5:  mov    %eax,(%esp)
085d8d12 +0x0d8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d8d17 +0x0dd:  mov    0x8(%ebp),%eax
085d8d1a +0x0e0:  movw   $0x0,0x5c4(%eax)
085d8d23 +0x0e9:  mov    0x8(%ebp),%eax
085d8d26 +0x0ec:  movzwl 0x5c4(%eax),%eax
085d8d2d +0x0f3:  test   %ax,%ax
085d8d30 +0x0f6:  jne    085d8dd6 <+0x19c>
085d8d36 +0x0fc:  mov    0x8(%ebp),%eax
085d8d39 +0x0ff:  mov    %eax,(%esp)
085d8d3c +0x102:  call   085d8bbc <_ZN8PvP_Room15SelectRandomMapEv>  ; PvP_Room::SelectRandomMap()
085d8d41 +0x107:  mov    %eax,%edx
085d8d43 +0x109:  mov    0x8(%ebp),%eax
085d8d46 +0x10c:  mov    %dx,0x5c6(%eax)
085d8d4d +0x113:  mov    0x8(%ebp),%eax
085d8d50 +0x116:  movzwl 0x5c6(%eax),%eax
085d8d57 +0x11d:  test   %ax,%ax
085d8d5a +0x120:  js     085d8d7d <+0x143>
085d8d5c +0x122:  mov    0x8(%ebp),%eax
085d8d5f +0x125:  movzwl 0x5c6(%eax),%eax
085d8d66 +0x12c:  movswl %ax,%ebx
085d8d69 +0x12f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d8d6e +0x134:  mov    0x4(%eax),%eax
085d8d71 +0x137:  mov    %eax,(%esp)
085d8d74 +0x13a:  call   085df796 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1d
085d8d79 +0x13f:  cmp    %eax,%ebx
085d8d7b +0x141:  jl     085d8d84 <+0x14a>
085d8d7d +0x143:  mov    $0x1,%eax
085d8d82 +0x148:  jmp    085d8d89 <+0x14f>
085d8d84 +0x14a:  mov    $0x0,%eax
085d8d89 +0x14f:  test   %al,%al
085d8d8b +0x151:  je     085d8dea <+0x1b0>
085d8d8d +0x153:  mov    0x8(%ebp),%eax
085d8d90 +0x156:  movzwl 0x5c6(%eax),%eax
085d8d97 +0x15d:  movswl %ax,%ebx
085d8d9a +0x160:  movl   $0x0,0xc(%esp)
085d8da2 +0x168:  movl   $0x88b,0x8(%esp)
085d8daa +0x170:  movl   $&_ZZN8PvP_Room9start_pvpEvE19__PRETTY_FUNCTION__,0x4(%esp)
085d8db2 +0x178:  lea    -0x34(%ebp),%eax
085d8db5 +0x17b:  mov    %eax,(%esp)
085d8db8 +0x17e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d8dbd +0x183:  mov    %ebx,0x8(%esp)
085d8dc1 +0x187:  movl   $"START_PVP select_map_index(%d)",0x4(%esp)
085d8dc9 +0x18f:  lea    -0x34(%ebp),%eax
085d8dcc +0x192:  mov    %eax,(%esp)
085d8dcf +0x195:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d8dd4 +0x19a:  jmp    085d8dea <+0x1b0>
085d8dd6 +0x19c:  mov    0x8(%ebp),%eax
085d8dd9 +0x19f:  movzwl 0x5c4(%eax),%edx
085d8de0 +0x1a6:  mov    0x8(%ebp),%eax
085d8de3 +0x1a9:  mov    %dx,0x5c6(%eax)
085d8dea +0x1b0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d8def +0x1b5:  mov    %eax,(%esp)
085d8df2 +0x1b8:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d8df7 +0x1bd:  cmp    $0x6,%eax
085d8dfa +0x1c0:  sete   %al
085d8dfd +0x1c3:  test   %al,%al
085d8dff +0x1c5:  je     085d8e22 <+0x1e8>
085d8e01 +0x1c7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d8e08 +0x1ce:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d8e0d +0x1d3:  mov    0x8(%ebp),%edx
085d8e10 +0x1d6:  add    $0xc4,%edx
085d8e16 +0x1dc:  mov    %eax,0x4(%esp)
085d8e1a +0x1e0:  mov    %edx,(%esp)
085d8e1d +0x1e3:  call   085df7f0 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x77>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x77
085d8e22 +0x1e8:  movl   $0x0,-0x14(%ebp)
085d8e29 +0x1ef:  lea    -0x50(%ebp),%eax
085d8e2c +0x1f2:  mov    %eax,(%esp)
085d8e2f +0x1f5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d8e34 +0x1fa:  movl   $0x0,-0xc(%ebp)
085d8e3b +0x201:  jmp    085d8fae <+0x374>
085d8e40 +0x206:  mov    -0xc(%ebp),%edx
085d8e43 +0x209:  mov    0x8(%ebp),%eax
085d8e46 +0x20c:  add    $0xc,%edx
085d8e49 +0x20f:  mov    (%eax,%edx,4),%eax
085d8e4c +0x212:  test   %eax,%eax
085d8e4e +0x214:  je     085d8faa <+0x370>
085d8e54 +0x21a:  addl   $0x1,-0x14(%ebp)
085d8e58 +0x21e:  mov    -0xc(%ebp),%eax
085d8e5b +0x221:  mov    0x8(%ebp),%edx
085d8e5e +0x224:  movb   $0x1,0x5c8(%edx,%eax,1)
085d8e66 +0x22c:  mov    -0xc(%ebp),%eax
085d8e69 +0x22f:  mov    -0xc(%ebp),%ecx
085d8e6c +0x232:  mov    0x8(%ebp),%edx
085d8e6f +0x235:  add    $0x14,%ecx
085d8e72 +0x238:  mov    (%edx,%ecx,4),%edx
085d8e75 +0x23b:  mov    %edx,%ecx
085d8e77 +0x23d:  mov    0x8(%ebp),%edx
085d8e7a +0x240:  mov    %cl,0x5d0(%edx,%eax,1)
085d8e81 +0x247:  mov    -0xc(%ebp),%eax
085d8e84 +0x24a:  mov    0x8(%ebp),%edx
085d8e87 +0x24d:  movzbl 0x5d0(%edx,%eax,1),%eax
085d8e8f +0x255:  movzbl %al,%eax
085d8e92 +0x258:  mov    0x8(%ebp),%edx
085d8e95 +0x25b:  add    $0x620,%edx
085d8e9b +0x261:  mov    %eax,0x8(%esp)
085d8e9f +0x265:  mov    -0xc(%ebp),%eax
085d8ea2 +0x268:  mov    %eax,0x4(%esp)
085d8ea6 +0x26c:  mov    %edx,(%esp)
085d8ea9 +0x26f:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d8eae +0x274:  mov    -0xc(%ebp),%edx
085d8eb1 +0x277:  mov    0x8(%ebp),%eax
085d8eb4 +0x27a:  add    $0xc,%edx
085d8eb7 +0x27d:  mov    (%eax,%edx,4),%eax
085d8eba +0x280:  mov    %eax,(%esp)
085d8ebd +0x283:  call   0865cf6c <_ZN5CUser32reset_pvp_masterid_walkingout_meEv>  ; CUser::reset_pvp_masterid_walkingout_me()
085d8ec2 +0x288:  lea    -0x50(%ebp),%eax
085d8ec5 +0x28b:  mov    %eax,(%esp)
085d8ec8 +0x28e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085d8ecd +0x293:  movl   $0x2d,0x8(%esp)
085d8ed5 +0x29b:  movl   $0x0,0x4(%esp)
085d8edd +0x2a3:  lea    -0x50(%ebp),%eax
085d8ee0 +0x2a6:  mov    %eax,(%esp)
085d8ee3 +0x2a9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d8ee8 +0x2ae:  mov    0x8(%ebp),%eax
085d8eeb +0x2b1:  movzwl 0x5c6(%eax),%eax
085d8ef2 +0x2b8:  cwtl
085d8ef3 +0x2b9:  mov    %eax,0x4(%esp)
085d8ef7 +0x2bd:  lea    -0x50(%ebp),%eax
085d8efa +0x2c0:  mov    %eax,(%esp)
085d8efd +0x2c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d8f02 +0x2c8:  mov    0x8(%ebp),%eax
085d8f05 +0x2cb:  mov    0x4(%eax),%eax
085d8f08 +0x2ce:  mov    %eax,0x4(%esp)
085d8f0c +0x2d2:  lea    -0x50(%ebp),%eax
085d8f0f +0x2d5:  mov    %eax,(%esp)
085d8f12 +0x2d8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d8f17 +0x2dd:  movl   $0x1,0x4(%esp)
085d8f1f +0x2e5:  lea    -0x50(%ebp),%eax
085d8f22 +0x2e8:  mov    %eax,(%esp)
085d8f25 +0x2eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d8f2a +0x2f0:  mov    -0xc(%ebp),%edx
085d8f2d +0x2f3:  mov    0x8(%ebp),%eax
085d8f30 +0x2f6:  add    $0xc,%edx
085d8f33 +0x2f9:  mov    (%eax,%edx,4),%eax
085d8f36 +0x2fc:  lea    -0x50(%ebp),%edx
085d8f39 +0x2ff:  mov    %edx,0x4(%esp)
085d8f3d +0x303:  mov    %eax,(%esp)
085d8f40 +0x306:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d8f45 +0x30b:  mov    -0xc(%ebp),%edx
085d8f48 +0x30e:  mov    0x8(%ebp),%eax
085d8f4b +0x311:  add    $0xc,%edx
085d8f4e +0x314:  mov    (%eax,%edx,4),%eax
085d8f51 +0x317:  movl   $0x7,0x4(%esp)
085d8f59 +0x31f:  mov    %eax,(%esp)
085d8f5c +0x322:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
085d8f61 +0x327:  mov    -0xc(%ebp),%edx
085d8f64 +0x32a:  mov    0x8(%ebp),%eax
085d8f67 +0x32d:  add    $0xc,%edx
085d8f6a +0x330:  mov    (%eax,%edx,4),%ebx
085d8f6d +0x333:  mov    -0xc(%ebp),%edx
085d8f70 +0x336:  mov    0x8(%ebp),%eax
085d8f73 +0x339:  add    $0xc,%edx
085d8f76 +0x33c:  mov    (%eax,%edx,4),%eax
085d8f79 +0x33f:  mov    %eax,(%esp)
085d8f7c +0x342:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085d8f81 +0x347:  mov    %ebx,0x4(%esp)
085d8f85 +0x34b:  mov    %eax,(%esp)
085d8f88 +0x34e:  call   080f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>  ; WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)
085d8f8d +0x353:  mov    -0xc(%ebp),%edx
085d8f90 +0x356:  mov    0x8(%ebp),%eax
085d8f93 +0x359:  add    $0xc,%edx
085d8f96 +0x35c:  mov    (%eax,%edx,4),%ebx
085d8f99 +0x35f:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
085d8f9e +0x364:  mov    %ebx,0x4(%esp)
085d8fa2 +0x368:  mov    %eax,(%esp)
085d8fa5 +0x36b:  call   08472272 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)
085d8faa +0x370:  addl   $0x1,-0xc(%ebp)
085d8fae +0x374:  cmpl   $0x7,-0xc(%ebp)
085d8fb2 +0x378:  setle  %al
085d8fb5 +0x37b:  test   %al,%al
085d8fb7 +0x37d:  jne    085d8e40 <+0x206>
085d8fbd +0x383:  mov    0x8(%ebp),%eax
085d8fc0 +0x386:  mov    0x4(%eax),%eax
085d8fc3 +0x389:  mov    %eax,%edx
085d8fc5 +0x38b:  mov    0x8(%ebp),%eax
085d8fc8 +0x38e:  movzwl 0x5c6(%eax),%eax
085d8fcf +0x395:  cwtl
085d8fd0 +0x396:  mov    -0x14(%ebp),%ecx
085d8fd3 +0x399:  mov    %ecx,0x8(%esp)
085d8fd7 +0x39d:  mov    %edx,0x4(%esp)
085d8fdb +0x3a1:  mov    %eax,(%esp)
085d8fde +0x3a4:  call   0860b8d8 <_ZN10Statistics8PVPPlay2Eiii>  ; Statistics::PVPPlay2(int, int, int)
085d8fe3 +0x3a9:  mov    0x8(%ebp),%eax
085d8fe6 +0x3ac:  mov    %eax,(%esp)
085d8fe9 +0x3af:  call   085dc778 <_ZN8PvP_Room19calculate_pvp_pointEv>  ; PvP_Room::calculate_pvp_point()
085d8fee +0x3b4:  mov    0x8(%ebp),%eax
085d8ff1 +0x3b7:  mov    %eax,(%esp)
085d8ff4 +0x3ba:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d8ff9 +0x3bf:  mov    0x8(%ebp),%edx
085d8ffc +0x3c2:  mov    %eax,0xbc(%edx)
085d9002 +0x3c8:  mov    0x8(%ebp),%eax
085d9005 +0x3cb:  movl   $0x2,0xb8(%eax)
085d900f +0x3d5:  mov    0x8(%ebp),%eax
085d9012 +0x3d8:  mov    0x4(%eax),%eax
085d9015 +0x3db:  cmp    $0x3,%eax
085d9018 +0x3de:  jne    085d902a <+0x3f0>
085d901a +0x3e0:  mov    0x8(%ebp),%eax
085d901d +0x3e3:  add    $0x620,%eax
085d9022 +0x3e8:  mov    %eax,(%esp)
085d9025 +0x3eb:  call   085de29c <_ZN15CRelayBattleMgr7OnStartEv>  ; CRelayBattleMgr::OnStart()
085d902a +0x3f0:  mov    0x8(%ebp),%eax
085d902d +0x3f3:  mov    0x4(%eax),%eax
085d9030 +0x3f6:  cmp    $0x4,%eax
085d9033 +0x3f9:  je     085d9040 <+0x406>
085d9035 +0x3fb:  mov    0x8(%ebp),%eax
085d9038 +0x3fe:  mov    0x4(%eax),%eax
085d903b +0x401:  cmp    $0x5,%eax
085d903e +0x404:  jne    085d9050 <+0x416>
085d9040 +0x406:  mov    0x8(%ebp),%eax
085d9043 +0x409:  add    $0x69c,%eax
085d9048 +0x40e:  mov    %eax,(%esp)
085d904b +0x411:  call   085deeca <_ZN20CDeathMatchBattleMgr7OnStartEv>  ; CDeathMatchBattleMgr::OnStart()
085d9050 +0x416:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d9057 +0x41d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d905c +0x422:  mov    0x8(%ebp),%edx
085d905f +0x425:  mov    %eax,0x618(%edx)
085d9065 +0x42b:  movl   $0x0,-0x10(%ebp)
085d906c +0x432:  mov    0x8(%ebp),%eax
085d906f +0x435:  mov    0x4(%eax),%eax
085d9072 +0x438:  cmp    $0x5,%eax
085d9075 +0x43b:  ja     085d90c6 <+0x48c>
085d9077 +0x43d:  mov    &data#bf6175f4(.rodata)(,%eax,4),%eax
085d907e +0x444:  jmp    *%eax
085d9080 +0x446:  cmpl   $0x2,-0x14(%ebp)
085d9084 +0x44a:  jle    085d908f <+0x455>
085d9086 +0x44c:  movl   $0x1,-0x10(%ebp)
085d908d +0x453:  jmp    085d90c6 <+0x48c>
085d908f +0x455:  movl   $0x0,-0x10(%ebp)
085d9096 +0x45c:  jmp    085d90c6 <+0x48c>
085d9098 +0x45e:  cmpl   $0x2,-0x14(%ebp)
085d909c +0x462:  jle    085d90a7 <+0x46d>
085d909e +0x464:  movl   $0x5,-0x10(%ebp)
085d90a5 +0x46b:  jmp    085d90c6 <+0x48c>
085d90a7 +0x46d:  movl   $0x4,-0x10(%ebp)
085d90ae +0x474:  jmp    085d90c6 <+0x48c>
085d90b0 +0x476:  cmpl   $0x2,-0x14(%ebp)
085d90b4 +0x47a:  jle    085d90bf <+0x485>
085d90b6 +0x47c:  movl   $0x3,-0x10(%ebp)
085d90bd +0x483:  jmp    085d90c6 <+0x48c>
085d90bf +0x485:  movl   $0x2,-0x10(%ebp)
085d90c6 +0x48c:  mov    -0x10(%ebp),%ebx
085d90c9 +0x48f:  call   0860e765 <_Z30GetInstanceCommonStatisticsMgrv>  ; GetInstanceCommonStatisticsMgr()
085d90ce +0x494:  mov    %ebx,0x8(%esp)
085d90d2 +0x498:  movl   $0x1,0x4(%esp)
085d90da +0x4a0:  mov    %eax,(%esp)
085d90dd +0x4a3:  call   0860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>  ; CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)
085d90e2 +0x4a8:  mov    0x8(%ebp),%eax
085d90e5 +0x4ab:  movzwl 0x5c6(%eax),%eax
085d90ec +0x4b2:  test   %ax,%ax
085d90ef +0x4b5:  js     085d9119 <+0x4df>
085d90f1 +0x4b7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d90f6 +0x4bc:  mov    0x4(%eax),%eax
085d90f9 +0x4bf:  mov    %eax,(%esp)
085d90fc +0x4c2:  call   085df796 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1d
085d9101 +0x4c7:  mov    0x8(%ebp),%edx
085d9104 +0x4ca:  movzwl 0x5c6(%edx),%edx
085d910b +0x4d1:  movswl %dx,%edx
085d910e +0x4d4:  cmp    %edx,%eax
085d9110 +0x4d6:  jle    085d9119 <+0x4df>
085d9112 +0x4d8:  mov    $0x1,%eax
085d9117 +0x4dd:  jmp    085d911e <+0x4e4>
085d9119 +0x4df:  mov    $0x0,%eax
085d911e +0x4e4:  test   %al,%al
085d9120 +0x4e6:  je     085d914a <+0x510>
085d9122 +0x4e8:  mov    0x8(%ebp),%eax
085d9125 +0x4eb:  movzwl 0x5c6(%eax),%eax
085d912c +0x4f2:  movswl %ax,%ebx
085d912f +0x4f5:  call   0860e765 <_Z30GetInstanceCommonStatisticsMgrv>  ; GetInstanceCommonStatisticsMgr()
085d9134 +0x4fa:  mov    %ebx,0x8(%esp)
085d9138 +0x4fe:  movl   $0x2,0x4(%esp)
085d9140 +0x506:  mov    %eax,(%esp)
085d9143 +0x509:  call   0860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>  ; CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)
085d9148 +0x50e:  jmp    085d9191 <+0x557>
085d914a +0x510:  mov    0x8(%ebp),%eax
085d914d +0x513:  movzwl 0x5c6(%eax),%eax
085d9154 +0x51a:  movswl %ax,%ebx
085d9157 +0x51d:  movl   $0x0,0xc(%esp)
085d915f +0x525:  movl   $0x942,0x8(%esp)
085d9167 +0x52d:  movl   $&_ZZN8PvP_Room9start_pvpEvE19__PRETTY_FUNCTION__,0x4(%esp)
085d916f +0x535:  lea    -0x24(%ebp),%eax
085d9172 +0x538:  mov    %eax,(%esp)
085d9175 +0x53b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d917a +0x540:  mov    %ebx,0x8(%esp)
085d917e +0x544:  movl   $"START_PVP filter select_map_index(%d)",0x4(%esp)
085d9186 +0x54c:  lea    -0x24(%ebp),%eax
085d9189 +0x54f:  mov    %eax,(%esp)
085d918c +0x552:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d9191 +0x557:  mov    0x8(%ebp),%eax
085d9194 +0x55a:  mov    0x6e4(%eax),%eax
085d919a +0x560:  mov    (%eax),%eax
085d919c +0x562:  add    $0x3c,%eax
085d919f +0x565:  mov    (%eax),%edx
085d91a1 +0x567:  mov    0x8(%ebp),%eax
085d91a4 +0x56a:  mov    0x6e4(%eax),%eax
085d91aa +0x570:  mov    %eax,(%esp)
085d91ad +0x573:  call   *%edx
085d91af +0x575:  jmp    085d91cc <+0x592>
085d91b1 +0x577:  mov    %edx,%ebx
085d91b3 +0x579:  mov    %eax,%esi
085d91b5 +0x57b:  lea    -0x50(%ebp),%eax
085d91b8 +0x57e:  mov    %eax,(%esp)
085d91bb +0x581:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d91c0 +0x586:  mov    %esi,%eax
085d91c2 +0x588:  mov    %ebx,%edx
085d91c4 +0x58a:  mov    %eax,(%esp)
085d91c7 +0x58d:  call   08ae3750 <_Unwind_Resume>
085d91cc +0x592:  lea    -0x50(%ebp),%eax
085d91cf +0x595:  mov    %eax,(%esp)
085d91d2 +0x598:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d91d7 +0x59d:  jmp    085d91da <+0x5a0>
085d91d9 +0x59f:  nop
085d91da +0x5a0:  add    $0x60,%esp
085d91dd +0x5a3:  pop    %ebx
085d91de +0x5a4:  pop    %esi
085d91df +0x5a5:  pop    %ebp
085d91e0 +0x5a6:  ret
085d91e1 +0x5a7:  nop
```

## 反编译 C

```c
// PvP_Room::start_pvp @ 0x85d8c3a

/* PvP_Room::start_pvp() */

void __thiscall PvP_Room::start_pvp(PvP_Room *this)

{
  short sVar1;
  CUser *pCVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  GameWorld *this_00;
  long lVar6;
  CHackAnalyzer *this_01;
  CDisconnectDetecter *this_02;
  undefined4 uVar7;
  undefined4 uVar8;
  PacketGuard local_54 [12];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar5 = get_waiter_count(this);
  if (iVar5 < 2) {
    return;
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x18))
            (*(undefined4 *)(this + 0x6e4),this + 0x5c4,this + 4);
  if (*(short *)(this + 0x5c4) < 0) {
LAB_085d8cc0:
    bVar3 = true;
  }
  else {
    sVar1 = *(short *)(this + 0x5c4);
    iVar5 = G_CDataManager();
    iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
    if (iVar5 < sVar1) goto LAB_085d8cc0;
    bVar3 = false;
  }
  if (bVar3) {
    sVar1 = *(short *)(this + 0x5c4);
    cMyTrace::cMyTrace(local_48,"void PvP_Room::start_pvp()",0x880,0);
    cMyTrace::operator()(local_48,"START_PVP request_map_index(%d)",(int)sVar1);
    *(undefined2 *)(this + 0x5c4) = 0;
  }
  if (*(short *)(this + 0x5c4) == 0) {
    uVar4 = SelectRandomMap(this);
    *(undefined2 *)(this + 0x5c6) = uVar4;
    if (*(short *)(this + 0x5c6) < 0) {
LAB_085d8d7d:
      bVar3 = true;
    }
    else {
      sVar1 = *(short *)(this + 0x5c6);
      iVar5 = G_CDataManager();
      iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
      if (iVar5 <= sVar1) goto LAB_085d8d7d;
      bVar3 = false;
    }
    if (bVar3) {
      sVar1 = *(short *)(this + 0x5c6);
      cMyTrace::cMyTrace(local_38,"void PvP_Room::start_pvp()",0x88b,0);
      cMyTrace::operator()(local_38,"START_PVP select_map_index(%d)",(int)sVar1);
    }
  }
  else {
    *(undefined2 *)(this + 0x5c6) = *(undefined2 *)(this + 0x5c4);
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(this_00);
  if (iVar5 == 6) {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    PvP_GuildWar_Log::SetpvpStartTime((PvP_GuildWar_Log *)(this + 0xc4),lVar6);
  }
  local_18 = 0;
  PacketGuard::PacketGuard(local_54);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      local_18 = local_18 + 1;
      this[local_10 + 0x5c8] = (PvP_Room)0x1;
      this[local_10 + 0x5d0] = SUB41(*(undefined4 *)(this + (local_10 + 0x14) * 4),0);
      CRelayBattleMgr::OnChangeTeam
                ((CRelayBattleMgr *)(this + 0x620),local_10,(uint)(byte)this[local_10 + 0x5d0]);
                    /* try { // try from 085d8ebd to 085d91ae has its CatchHandler @ 085d91b1 */
      CUser::reset_pvp_masterid_walkingout_me(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_54);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x2d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,(int)*(short *)(this + 0x5c6));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,*(int *)(this + 4));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),local_54);
      CUser::set_state(*(CUser **)(this + (local_10 + 0xc) * 4),7);
      pCVar2 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_01 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0xc) * 4));
      WongWork::CHackAnalyzer::beginCollectHackInfo(this_01,pCVar2);
      pCVar2 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_02 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
      disconnect_detecter::CDisconnectDetecter::RegisterUser(this_02,pCVar2);
    }
  }
  Statistics::PVPPlay2((int)*(short *)(this + 0x5c6),*(int *)(this + 4),local_18);
  calculate_pvp_point(this);
  uVar7 = get_waiter_count(this);
  *(undefined4 *)(this + 0xbc) = uVar7;
  *(undefined4 *)(this + 0xb8) = 2;
  if (*(int *)(this + 4) == 3) {
    CRelayBattleMgr::OnStart((CRelayBattleMgr *)(this + 0x620));
  }
  if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
    CDeathMatchBattleMgr::OnStart((CDeathMatchBattleMgr *)(this + 0x69c));
  }
  uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x618) = uVar7;
  local_14 = 0;
  switch(*(undefined4 *)(this + 4)) {
  case 1:
  case 4:
    if (local_18 < 3) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
    break;
  case 2:
  case 5:
    if (local_18 < 3) {
      local_14 = 2;
    }
    else {
      local_14 = 3;
    }
    break;
  case 3:
    if (local_18 < 3) {
      local_14 = 4;
    }
    else {
      local_14 = 5;
    }
  }
  uVar7 = local_14;
  uVar8 = GetInstanceCommonStatisticsMgr();
  CCommonStatisticsMgr::IncreaseQuantity(uVar8,1,uVar7);
  if (-1 < *(short *)(this + 0x5c6)) {
    iVar5 = G_CDataManager();
    iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
    if (*(short *)(this + 0x5c6) < iVar5) {
      bVar3 = true;
      goto LAB_085d911e;
    }
  }
  bVar3 = false;
LAB_085d911e:
  if (bVar3) {
    sVar1 = *(short *)(this + 0x5c6);
    uVar7 = GetInstanceCommonStatisticsMgr();
    CCommonStatisticsMgr::IncreaseQuantity(uVar7,2,(int)sVar1);
  }
  else {
    sVar1 = *(short *)(this + 0x5c6);
    cMyTrace::cMyTrace(local_28,"void PvP_Room::start_pvp()",0x942,0);
    cMyTrace::operator()(local_28,"START_PVP filter select_map_index(%d)",(int)sVar1);
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x3c))(*(undefined4 *)(this + 0x6e4));
  PacketGuard::~PacketGuard(local_54);
  return;
}
```
