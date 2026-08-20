# join_room

`_ZN8PvP_Room9join_roomEP5CUserRib`

`PvP_Room::join_room(CUser*, int&, bool)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6cf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6cf2  _ZN8PvP_Room9join_roomEP5CUserRib
#           PvP_Room::join_room(CUser*, int&, bool)
# range [0x085d6cf2, 0x085d7725]
085d6cf2 +0x000:  push   %ebp
085d6cf3 +0x001:  mov    %esp,%ebp
085d6cf5 +0x003:  push   %edi
085d6cf6 +0x004:  push   %esi
085d6cf7 +0x005:  push   %ebx
085d6cf8 +0x006:  sub    $0x9c,%esp
085d6cfe +0x00c:  mov    0x14(%ebp),%eax
085d6d01 +0x00f:  mov    %al,-0x7c(%ebp)
085d6d04 +0x012:  mov    0x8(%ebp),%eax
085d6d07 +0x015:  mov    %eax,(%esp)
085d6d0a +0x018:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d6d0f +0x01d:  mov    %eax,%edi
085d6d11 +0x01f:  movzbl -0x7c(%ebp),%eax
085d6d15 +0x023:  mov    %eax,-0x88(%ebp)
085d6d1b +0x029:  mov    0x8(%ebp),%eax
085d6d1e +0x02c:  mov    0x4(%eax),%eax
085d6d21 +0x02f:  mov    %eax,-0x84(%ebp)
085d6d27 +0x035:  mov    0x8(%ebp),%eax
085d6d2a +0x038:  mov    (%eax),%eax
085d6d2c +0x03a:  mov    %eax,-0x80(%ebp)
085d6d2f +0x03d:  mov    0xc(%ebp),%eax
085d6d32 +0x040:  mov    %eax,(%esp)
085d6d35 +0x043:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085d6d3a +0x048:  mov    %eax,%esi
085d6d3c +0x04a:  mov    0xc(%ebp),%eax
085d6d3f +0x04d:  mov    %eax,(%esp)
085d6d42 +0x050:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085d6d47 +0x055:  mov    %eax,%ebx
085d6d49 +0x057:  movl   $0x0,0x10(%esp)
085d6d51 +0x05f:  movl   $0x0,0xc(%esp)
085d6d59 +0x067:  movl   $0x4a8,0x8(%esp)
085d6d61 +0x06f:  movl   $&_ZZN8PvP_Room9join_roomEP5CUserRibE19__PRETTY_FUNCTION__,0x4(%esp)
085d6d69 +0x077:  lea    -0x54(%ebp),%eax
085d6d6c +0x07a:  mov    %eax,(%esp)
085d6d6f +0x07d:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d6d74 +0x082:  mov    %edi,0x1c(%esp)
085d6d78 +0x086:  mov    -0x88(%ebp),%eax
085d6d7e +0x08c:  mov    %eax,0x18(%esp)
085d6d82 +0x090:  mov    -0x84(%ebp),%eax
085d6d88 +0x096:  mov    %eax,0x14(%esp)
085d6d8c +0x09a:  mov    -0x80(%ebp),%eax
085d6d8f +0x09d:  mov    %eax,0x10(%esp)
085d6d93 +0x0a1:  mov    %esi,0xc(%esp)
085d6d97 +0x0a5:  mov    %ebx,0x8(%esp)
085d6d9b +0x0a9:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d",0x4(%esp)
085d6da3 +0x0b1:  lea    -0x54(%ebp),%eax
085d6da6 +0x0b4:  mov    %eax,(%esp)
085d6da9 +0x0b7:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d6dae +0x0bc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d6db3 +0x0c1:  mov    %eax,(%esp)
085d6db6 +0x0c4:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d6dbb +0x0c9:  cmp    $0xf,%eax
085d6dbe +0x0cc:  je     085d6dd2 <+0xe0>
085d6dc0 +0x0ce:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d6dc5 +0x0d3:  mov    %eax,(%esp)
085d6dc8 +0x0d6:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d6dcd +0x0db:  cmp    $0x10,%eax
085d6dd0 +0x0de:  jne    085d6dd9 <+0xe7>
085d6dd2 +0x0e0:  mov    $0x1,%eax
085d6dd7 +0x0e5:  jmp    085d6dde <+0xec>
085d6dd9 +0x0e7:  mov    $0x0,%eax
085d6dde +0x0ec:  test   %al,%al
085d6de0 +0x0ee:  je     085d6e60 <+0x16e>
085d6de2 +0x0f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d6de7 +0x0f5:  mov    %eax,(%esp)
085d6dea +0x0f8:  call   0822b65a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd04
085d6def +0x0fd:  mov    %eax,%ebx
085d6df1 +0x0ff:  mov    0xc(%ebp),%eax
085d6df4 +0x102:  mov    %eax,(%esp)
085d6df7 +0x105:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085d6dfc +0x10a:  cmp    %eax,%ebx
085d6dfe +0x10c:  setl   %al
085d6e01 +0x10f:  test   %al,%al
085d6e03 +0x111:  je     085d6e0f <+0x11d>
085d6e05 +0x113:  mov    $0xd,%ebx
085d6e0a +0x118:  jmp    085d7719 <+0xa27>
085d6e0f +0x11d:  movl   $0x7,0x4(%esp)
085d6e17 +0x125:  mov    0xc(%ebp),%eax
085d6e1a +0x128:  mov    %eax,(%esp)
085d6e1d +0x12b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d6e22 +0x130:  mov    %eax,(%esp)
085d6e25 +0x133:  call   08234f64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa60e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa60e
085d6e2a +0x138:  mov    %eax,%esi
085d6e2c +0x13a:  mov    0xc(%ebp),%eax
085d6e2f +0x13d:  mov    %eax,(%esp)
085d6e32 +0x140:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085d6e37 +0x145:  mov    %eax,%ebx
085d6e39 +0x147:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d6e3e +0x14c:  add    $0x68,%eax
085d6e41 +0x14f:  mov    %ebx,0x4(%esp)
085d6e45 +0x153:  mov    %eax,(%esp)
085d6e48 +0x156:  call   0822adfc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a6
085d6e4d +0x15b:  cmp    %eax,%esi
085d6e4f +0x15d:  setle  %al
085d6e52 +0x160:  test   %al,%al
085d6e54 +0x162:  je     085d6e60 <+0x16e>
085d6e56 +0x164:  mov    $0x7,%ebx
085d6e5b +0x169:  jmp    085d7719 <+0xa27>
085d6e60 +0x16e:  mov    0xc(%ebp),%eax
085d6e63 +0x171:  mov    %eax,(%esp)
085d6e66 +0x174:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d6e6b +0x179:  test   %eax,%eax
085d6e6d +0x17b:  sete   %al
085d6e70 +0x17e:  test   %al,%al
085d6e72 +0x180:  je     085d6e7e <+0x18c>
085d6e74 +0x182:  mov    $0x13,%ebx
085d6e79 +0x187:  jmp    085d7719 <+0xa27>
085d6e7e +0x18c:  mov    0x8(%ebp),%eax
085d6e81 +0x18f:  mov    0xb8(%eax),%eax
085d6e87 +0x195:  cmp    $0x2,%eax
085d6e8a +0x198:  jne    085d6e96 <+0x1a4>
085d6e8c +0x19a:  mov    $0x13,%ebx
085d6e91 +0x19f:  jmp    085d7719 <+0xa27>
085d6e96 +0x1a4:  mov    0x8(%ebp),%eax
085d6e99 +0x1a7:  mov    %eax,(%esp)
085d6e9c +0x1aa:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d6ea1 +0x1af:  mov    %eax,-0x44(%ebp)
085d6ea4 +0x1b2:  lea    -0x60(%ebp),%eax
085d6ea7 +0x1b5:  mov    %eax,(%esp)
085d6eaa +0x1b8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d6eaf +0x1bd:  lea    -0x6c(%ebp),%eax
085d6eb2 +0x1c0:  mov    %eax,(%esp)
085d6eb5 +0x1c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d6eba +0x1c8:  movl   $0x2,0x8(%esp)
085d6ec2 +0x1d0:  movl   $0x0,0x4(%esp)
085d6eca +0x1d8:  lea    -0x60(%ebp),%eax
085d6ecd +0x1db:  mov    %eax,(%esp)
085d6ed0 +0x1de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d6ed5 +0x1e3:  movl   $0xb,0x8(%esp)
085d6edd +0x1eb:  movl   $0x0,0x4(%esp)
085d6ee5 +0x1f3:  lea    -0x6c(%ebp),%eax
085d6ee8 +0x1f6:  mov    %eax,(%esp)
085d6eeb +0x1f9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d6ef0 +0x1fe:  movl   $0x1,0x4(%esp)
085d6ef8 +0x206:  lea    -0x60(%ebp),%eax
085d6efb +0x209:  mov    %eax,(%esp)
085d6efe +0x20c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d6f03 +0x211:  mov    -0x44(%ebp),%eax
085d6f06 +0x214:  mov    %eax,0x4(%esp)
085d6f0a +0x218:  lea    -0x60(%ebp),%eax
085d6f0d +0x21b:  mov    %eax,(%esp)
085d6f10 +0x21e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d6f15 +0x223:  mov    -0x44(%ebp),%eax
085d6f18 +0x226:  mov    %eax,0x4(%esp)
085d6f1c +0x22a:  lea    -0x6c(%ebp),%eax
085d6f1f +0x22d:  mov    %eax,(%esp)
085d6f22 +0x230:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d6f27 +0x235:  movl   $0x0,-0x38(%ebp)
085d6f2e +0x23c:  jmp    085d70e1 <+0x3ef>
085d6f33 +0x241:  mov    -0x38(%ebp),%edx
085d6f36 +0x244:  mov    0x8(%ebp),%eax
085d6f39 +0x247:  add    $0xc,%edx
085d6f3c +0x24a:  mov    (%eax,%edx,4),%eax
085d6f3f +0x24d:  test   %eax,%eax
085d6f41 +0x24f:  je     085d70dd <+0x3eb>
085d6f47 +0x255:  lea    -0x60(%ebp),%edx
085d6f4a +0x258:  mov    -0x38(%ebp),%ecx
085d6f4d +0x25b:  mov    0x8(%ebp),%eax
085d6f50 +0x25e:  add    $0xc,%ecx
085d6f53 +0x261:  mov    (%eax,%ecx,4),%eax
085d6f56 +0x264:  movl   $0x1,0x8(%esp)
085d6f5e +0x26c:  mov    %edx,0x4(%esp)
085d6f62 +0x270:  mov    %eax,(%esp)
085d6f65 +0x273:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085d6f6a +0x278:  mov    -0x38(%ebp),%edx
085d6f6d +0x27b:  mov    0x8(%ebp),%eax
085d6f70 +0x27e:  add    $0xc,%edx
085d6f73 +0x281:  mov    (%eax,%edx,4),%eax
085d6f76 +0x284:  mov    %eax,(%esp)
085d6f79 +0x287:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085d6f7e +0x28c:  movzwl %ax,%eax
085d6f81 +0x28f:  mov    %eax,0x4(%esp)
085d6f85 +0x293:  lea    -0x6c(%ebp),%eax
085d6f88 +0x296:  mov    %eax,(%esp)
085d6f8b +0x299:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d6f90 +0x29e:  mov    -0x38(%ebp),%edx
085d6f93 +0x2a1:  mov    0x8(%ebp),%eax
085d6f96 +0x2a4:  add    $0xc,%edx
085d6f99 +0x2a7:  mov    (%eax,%edx,4),%eax
085d6f9c +0x2aa:  add    $0xe0,%eax
085d6fa1 +0x2af:  mov    %eax,(%esp)
085d6fa4 +0x2b2:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
085d6fa9 +0x2b7:  mov    %eax,0x4(%esp)
085d6fad +0x2bb:  lea    -0x6c(%ebp),%eax
085d6fb0 +0x2be:  mov    %eax,(%esp)
085d6fb3 +0x2c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d6fb8 +0x2c6:  mov    -0x38(%ebp),%edx
085d6fbb +0x2c9:  mov    0x8(%ebp),%eax
085d6fbe +0x2cc:  add    $0xc,%edx
085d6fc1 +0x2cf:  mov    (%eax,%edx,4),%eax
085d6fc4 +0x2d2:  add    $0xe0,%eax
085d6fc9 +0x2d7:  mov    %eax,(%esp)
085d6fcc +0x2da:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
085d6fd1 +0x2df:  mov    %eax,0x4(%esp)
085d6fd5 +0x2e3:  lea    -0x6c(%ebp),%eax
085d6fd8 +0x2e6:  mov    %eax,(%esp)
085d6fdb +0x2e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d6fe0 +0x2ee:  mov    -0x38(%ebp),%edx
085d6fe3 +0x2f1:  mov    0x8(%ebp),%eax
085d6fe6 +0x2f4:  add    $0xc,%edx
085d6fe9 +0x2f7:  mov    (%eax,%edx,4),%eax
085d6fec +0x2fa:  add    $0xe0,%eax
085d6ff1 +0x2ff:  mov    %eax,(%esp)
085d6ff4 +0x302:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
085d6ff9 +0x307:  movzwl %ax,%eax
085d6ffc +0x30a:  mov    %eax,0x4(%esp)
085d7000 +0x30e:  lea    -0x6c(%ebp),%eax
085d7003 +0x311:  mov    %eax,(%esp)
085d7006 +0x314:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d700b +0x319:  mov    -0x38(%ebp),%edx
085d700e +0x31c:  mov    0x8(%ebp),%eax
085d7011 +0x31f:  add    $0xc,%edx
085d7014 +0x322:  mov    (%eax,%edx,4),%eax
085d7017 +0x325:  mov    %eax,(%esp)
085d701a +0x328:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085d701f +0x32d:  mov    %eax,0x4(%esp)
085d7023 +0x331:  lea    -0x6c(%ebp),%eax
085d7026 +0x334:  mov    %eax,(%esp)
085d7029 +0x337:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d702e +0x33c:  mov    -0x38(%ebp),%edx
085d7031 +0x33f:  mov    0x8(%ebp),%eax
085d7034 +0x342:  add    $0xc,%edx
085d7037 +0x345:  mov    (%eax,%edx,4),%eax
085d703a +0x348:  add    $0xe0,%eax
085d703f +0x34d:  mov    %eax,(%esp)
085d7042 +0x350:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
085d7047 +0x355:  movsbl %al,%eax
085d704a +0x358:  mov    %eax,0x4(%esp)
085d704e +0x35c:  lea    -0x6c(%ebp),%eax
085d7051 +0x35f:  mov    %eax,(%esp)
085d7054 +0x362:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d7059 +0x367:  mov    -0x38(%ebp),%edx
085d705c +0x36a:  mov    0x8(%ebp),%eax
085d705f +0x36d:  add    $0xc,%edx
085d7062 +0x370:  mov    (%eax,%edx,4),%eax
085d7065 +0x373:  add    $0xe0,%eax
085d706a +0x378:  mov    %eax,(%esp)
085d706d +0x37b:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
085d7072 +0x380:  mov    %eax,0x4(%esp)
085d7076 +0x384:  lea    -0x6c(%ebp),%eax
085d7079 +0x387:  mov    %eax,(%esp)
085d707c +0x38a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d7081 +0x38f:  mov    -0x38(%ebp),%edx
085d7084 +0x392:  mov    0x8(%ebp),%eax
085d7087 +0x395:  add    $0xc,%edx
085d708a +0x398:  mov    (%eax,%edx,4),%eax
085d708d +0x39b:  mov    %eax,(%esp)
085d7090 +0x39e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d7095 +0x3a3:  test   %eax,%eax
085d7097 +0x3a5:  setne  %al
085d709a +0x3a8:  test   %al,%al
085d709c +0x3aa:  je     085d70ca <+0x3d8>
085d709e +0x3ac:  mov    -0x38(%ebp),%edx
085d70a1 +0x3af:  mov    0x8(%ebp),%eax
085d70a4 +0x3b2:  add    $0xc,%edx
085d70a7 +0x3b5:  mov    (%eax,%edx,4),%eax
085d70aa +0x3b8:  mov    %eax,(%esp)
085d70ad +0x3bb:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d70b2 +0x3c0:  movzbl 0x75(%eax),%eax
085d70b6 +0x3c4:  movzbl %al,%eax
085d70b9 +0x3c7:  mov    %eax,0x4(%esp)
085d70bd +0x3cb:  lea    -0x6c(%ebp),%eax
085d70c0 +0x3ce:  mov    %eax,(%esp)
085d70c3 +0x3d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d70c8 +0x3d6:  jmp    085d70dd <+0x3eb>
085d70ca +0x3d8:  movl   $0x0,0x4(%esp)
085d70d2 +0x3e0:  lea    -0x6c(%ebp),%eax
085d70d5 +0x3e3:  mov    %eax,(%esp)
085d70d8 +0x3e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d70dd +0x3eb:  addl   $0x1,-0x38(%ebp)
085d70e1 +0x3ef:  cmpl   $0x7,-0x38(%ebp)
085d70e5 +0x3f3:  setle  %al
085d70e8 +0x3f6:  test   %al,%al
085d70ea +0x3f8:  jne    085d6f33 <+0x241>
085d70f0 +0x3fe:  mov    0x8(%ebp),%eax
085d70f3 +0x401:  mov    %eax,(%esp)
085d70f6 +0x404:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d70fb +0x409:  movl   $0x1,0x4(%esp)
085d7103 +0x411:  lea    -0x60(%ebp),%eax
085d7106 +0x414:  mov    %eax,(%esp)
085d7109 +0x417:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d710e +0x41c:  movl   $0x1,0x4(%esp)
085d7116 +0x424:  lea    -0x6c(%ebp),%eax
085d7119 +0x427:  mov    %eax,(%esp)
085d711c +0x42a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d7121 +0x42f:  mov    0x8(%ebp),%eax
085d7124 +0x432:  mov    %eax,(%esp)
085d7127 +0x435:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d712c +0x43a:  movl   $0x0,-0x40(%ebp)
085d7133 +0x441:  mov    0x8(%ebp),%eax
085d7136 +0x444:  mov    0x6e4(%eax),%eax
085d713c +0x44a:  mov    (%eax),%eax
085d713e +0x44c:  add    $0x70,%eax
085d7141 +0x44f:  mov    (%eax),%ecx
085d7143 +0x451:  mov    0x8(%ebp),%eax
085d7146 +0x454:  mov    0x6e4(%eax),%eax
085d714c +0x45a:  mov    0xc(%ebp),%edx
085d714f +0x45d:  mov    %edx,0x8(%esp)
085d7153 +0x461:  mov    0x8(%ebp),%edx
085d7156 +0x464:  mov    %edx,0x4(%esp)
085d715a +0x468:  mov    %eax,(%esp)
085d715d +0x46b:  call   *%ecx
085d715f +0x46d:  mov    %eax,-0x40(%ebp)
085d7162 +0x470:  cmpl   $0x0,-0x40(%ebp)
085d7166 +0x474:  setne  %al
085d7169 +0x477:  test   %al,%al
085d716b +0x479:  je     085d7180 <+0x48e>
085d716d +0x47b:  mov    0x8(%ebp),%eax
085d7170 +0x47e:  mov    %eax,(%esp)
085d7173 +0x481:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d7178 +0x486:  mov    -0x40(%ebp),%ebx
085d717b +0x489:  jmp    085d76e6 <+0x9f4>
085d7180 +0x48e:  movl   $0xffffffff,-0x3c(%ebp)
085d7187 +0x495:  movl   $0x0,-0x34(%ebp)
085d718e +0x49c:  jmp    085d71eb <+0x4f9>
085d7190 +0x49e:  mov    -0x34(%ebp),%edx
085d7193 +0x4a1:  mov    0x8(%ebp),%eax
085d7196 +0x4a4:  add    $0xc,%edx
085d7199 +0x4a7:  mov    (%eax,%edx,4),%eax
085d719c +0x4aa:  test   %eax,%eax
085d719e +0x4ac:  jne    085d71e7 <+0x4f5>
085d71a0 +0x4ae:  mov    -0x34(%ebp),%edx
085d71a3 +0x4b1:  mov    0x8(%ebp),%eax
085d71a6 +0x4b4:  add    $0x14,%edx
085d71a9 +0x4b7:  mov    (%eax,%edx,4),%eax
085d71ac +0x4ba:  cmp    $0xff,%eax
085d71b1 +0x4bf:  jne    085d71e7 <+0x4f5>
085d71b3 +0x4c1:  mov    -0x34(%ebp),%eax
085d71b6 +0x4c4:  mov    %eax,-0x3c(%ebp)
085d71b9 +0x4c7:  mov    -0x34(%ebp),%edx
085d71bc +0x4ca:  mov    0x8(%ebp),%eax
085d71bf +0x4cd:  lea    0xc(%edx),%ecx
085d71c2 +0x4d0:  mov    0xc(%ebp),%edx
085d71c5 +0x4d3:  mov    %edx,(%eax,%ecx,4)
085d71c8 +0x4d6:  mov    0x8(%ebp),%eax
085d71cb +0x4d9:  mov    (%eax),%eax
085d71cd +0x4db:  cwtl
085d71ce +0x4dc:  mov    %eax,0x4(%esp)
085d71d2 +0x4e0:  mov    0xc(%ebp),%eax
085d71d5 +0x4e3:  mov    %eax,(%esp)
085d71d8 +0x4e6:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d71dd +0x4eb:  mov    0x10(%ebp),%eax
085d71e0 +0x4ee:  mov    -0x34(%ebp),%edx
085d71e3 +0x4f1:  mov    %edx,(%eax)
085d71e5 +0x4f3:  jmp    085d71f6 <+0x504>
085d71e7 +0x4f5:  addl   $0x1,-0x34(%ebp)
085d71eb +0x4f9:  cmpl   $0x7,-0x34(%ebp)
085d71ef +0x4fd:  setle  %al
085d71f2 +0x500:  test   %al,%al
085d71f4 +0x502:  jne    085d7190 <+0x49e>
085d71f6 +0x504:  cmpl   $0xffffffff,-0x3c(%ebp)
085d71fa +0x508:  jne    085d7211 <+0x51f>
085d71fc +0x50a:  mov    0x8(%ebp),%eax
085d71ff +0x50d:  mov    %eax,(%esp)
085d7202 +0x510:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d7207 +0x515:  mov    $0x4,%ebx
085d720c +0x51a:  jmp    085d76e6 <+0x9f4>
085d7211 +0x51f:  lea    -0x60(%ebp),%eax
085d7214 +0x522:  mov    %eax,0x4(%esp)
085d7218 +0x526:  mov    0xc(%ebp),%eax
085d721b +0x529:  mov    %eax,(%esp)
085d721e +0x52c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d7223 +0x531:  lea    -0x6c(%ebp),%eax
085d7226 +0x534:  mov    %eax,0x4(%esp)
085d722a +0x538:  mov    0xc(%ebp),%eax
085d722d +0x53b:  mov    %eax,(%esp)
085d7230 +0x53e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d7235 +0x543:  mov    0x8(%ebp),%eax
085d7238 +0x546:  mov    0x4(%eax),%eax
085d723b +0x549:  cmp    $0x1,%eax
085d723e +0x54c:  jne    085d7275 <+0x583>
085d7240 +0x54e:  mov    -0x3c(%ebp),%edx
085d7243 +0x551:  mov    0x8(%ebp),%eax
085d7246 +0x554:  add    $0x14,%edx
085d7249 +0x557:  movl   $0x0,(%eax,%edx,4)
085d7250 +0x55e:  mov    0x8(%ebp),%eax
085d7253 +0x561:  lea    0x620(%eax),%edx
085d7259 +0x567:  movl   $0x0,0x8(%esp)
085d7261 +0x56f:  mov    -0x3c(%ebp),%eax
085d7264 +0x572:  mov    %eax,0x4(%esp)
085d7268 +0x576:  mov    %edx,(%esp)
085d726b +0x579:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d7270 +0x57e:  jmp    085d73aa <+0x6b8>
085d7275 +0x583:  mov    0x8(%ebp),%eax
085d7278 +0x586:  mov    0x4(%eax),%eax
085d727b +0x589:  cmp    $0x4,%eax
085d727e +0x58c:  jne    085d7295 <+0x5a3>
085d7280 +0x58e:  mov    -0x3c(%ebp),%edx
085d7283 +0x591:  mov    0x8(%ebp),%eax
085d7286 +0x594:  add    $0x14,%edx
085d7289 +0x597:  movl   $0x0,(%eax,%edx,4)
085d7290 +0x59e:  jmp    085d73aa <+0x6b8>
085d7295 +0x5a3:  cmpb   $0x0,-0x7c(%ebp)
085d7299 +0x5a7:  je     085d72d5 <+0x5e3>
085d729b +0x5a9:  movl   $0x1,-0x30(%ebp)
085d72a2 +0x5b0:  mov    -0x3c(%ebp),%edx
085d72a5 +0x5b3:  mov    0x8(%ebp),%eax
085d72a8 +0x5b6:  lea    0x14(%edx),%ecx
085d72ab +0x5b9:  mov    -0x30(%ebp),%edx
085d72ae +0x5bc:  mov    %edx,(%eax,%ecx,4)
085d72b1 +0x5bf:  mov    0x8(%ebp),%eax
085d72b4 +0x5c2:  lea    0x620(%eax),%edx
085d72ba +0x5c8:  mov    -0x30(%ebp),%eax
085d72bd +0x5cb:  mov    %eax,0x8(%esp)
085d72c1 +0x5cf:  mov    -0x3c(%ebp),%eax
085d72c4 +0x5d2:  mov    %eax,0x4(%esp)
085d72c8 +0x5d6:  mov    %edx,(%esp)
085d72cb +0x5d9:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d72d0 +0x5de:  jmp    085d73aa <+0x6b8>
085d72d5 +0x5e3:  movl   $0x0,-0x78(%ebp)
085d72dc +0x5ea:  movl   $0x0,-0x74(%ebp)
085d72e3 +0x5f1:  movl   $0x0,-0x70(%ebp)
085d72ea +0x5f8:  movl   $0x0,-0x24(%ebp)
085d72f1 +0x5ff:  jmp    085d732f <+0x63d>
085d72f3 +0x601:  mov    -0x24(%ebp),%edx
085d72f6 +0x604:  mov    0x8(%ebp),%eax
085d72f9 +0x607:  add    $0x14,%edx
085d72fc +0x60a:  mov    (%eax,%edx,4),%eax
085d72ff +0x60d:  test   %eax,%eax
085d7301 +0x60f:  jle    085d732b <+0x639>
085d7303 +0x611:  mov    -0x24(%ebp),%edx
085d7306 +0x614:  mov    0x8(%ebp),%eax
085d7309 +0x617:  add    $0x14,%edx
085d730c +0x61a:  mov    (%eax,%edx,4),%eax
085d730f +0x61d:  cmp    $0x2,%eax
085d7312 +0x620:  jg     085d732b <+0x639>
085d7314 +0x622:  mov    -0x24(%ebp),%edx
085d7317 +0x625:  mov    0x8(%ebp),%eax
085d731a +0x628:  add    $0x14,%edx
085d731d +0x62b:  mov    (%eax,%edx,4),%eax
085d7320 +0x62e:  mov    -0x78(%ebp,%eax,4),%edx
085d7324 +0x632:  add    $0x1,%edx
085d7327 +0x635:  mov    %edx,-0x78(%ebp,%eax,4)
085d732b +0x639:  addl   $0x1,-0x24(%ebp)
085d732f +0x63d:  cmpl   $0x7,-0x24(%ebp)
085d7333 +0x641:  setle  %al
085d7336 +0x644:  test   %al,%al
085d7338 +0x646:  jne    085d72f3 <+0x601>
085d733a +0x648:  movl   $0x8,-0x2c(%ebp)
085d7341 +0x64f:  movl   $0x1,-0x28(%ebp)
085d7348 +0x656:  movl   $0x1,-0x20(%ebp)
085d734f +0x65d:  jmp    085d7371 <+0x67f>
085d7351 +0x65f:  mov    -0x20(%ebp),%eax
085d7354 +0x662:  mov    -0x78(%ebp,%eax,4),%eax
085d7358 +0x666:  cmp    -0x2c(%ebp),%eax
085d735b +0x669:  jg     085d736d <+0x67b>
085d735d +0x66b:  mov    -0x20(%ebp),%eax
085d7360 +0x66e:  mov    %eax,-0x28(%ebp)
085d7363 +0x671:  mov    -0x20(%ebp),%eax
085d7366 +0x674:  mov    -0x78(%ebp,%eax,4),%eax
085d736a +0x678:  mov    %eax,-0x2c(%ebp)
085d736d +0x67b:  addl   $0x1,-0x20(%ebp)
085d7371 +0x67f:  cmpl   $0x2,-0x20(%ebp)
085d7375 +0x683:  setle  %al
085d7378 +0x686:  test   %al,%al
085d737a +0x688:  jne    085d7351 <+0x65f>
085d737c +0x68a:  mov    -0x3c(%ebp),%edx
085d737f +0x68d:  mov    0x8(%ebp),%eax
085d7382 +0x690:  lea    0x14(%edx),%ecx
085d7385 +0x693:  mov    -0x28(%ebp),%edx
085d7388 +0x696:  mov    %edx,(%eax,%ecx,4)
085d738b +0x699:  mov    0x8(%ebp),%eax
085d738e +0x69c:  lea    0x620(%eax),%edx
085d7394 +0x6a2:  mov    -0x28(%ebp),%eax
085d7397 +0x6a5:  mov    %eax,0x8(%esp)
085d739b +0x6a9:  mov    -0x3c(%ebp),%eax
085d739e +0x6ac:  mov    %eax,0x4(%esp)
085d73a2 +0x6b0:  mov    %edx,(%esp)
085d73a5 +0x6b3:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d73aa +0x6b8:  mov    0x8(%ebp),%eax
085d73ad +0x6bb:  mov    %eax,(%esp)
085d73b0 +0x6be:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d73b5 +0x6c3:  lea    -0x60(%ebp),%eax
085d73b8 +0x6c6:  mov    %eax,(%esp)
085d73bb +0x6c9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085d73c0 +0x6ce:  movl   $0x2,0x8(%esp)
085d73c8 +0x6d6:  movl   $0x0,0x4(%esp)
085d73d0 +0x6de:  lea    -0x60(%ebp),%eax
085d73d3 +0x6e1:  mov    %eax,(%esp)
085d73d6 +0x6e4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d73db +0x6e9:  movl   $0x1,0x4(%esp)
085d73e3 +0x6f1:  lea    -0x60(%ebp),%eax
085d73e6 +0x6f4:  mov    %eax,(%esp)
085d73e9 +0x6f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d73ee +0x6fc:  movl   $0x1,0x4(%esp)
085d73f6 +0x704:  lea    -0x60(%ebp),%eax
085d73f9 +0x707:  mov    %eax,(%esp)
085d73fc +0x70a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d7401 +0x70f:  lea    -0x60(%ebp),%eax
085d7404 +0x712:  movl   $0x1,0x8(%esp)
085d740c +0x71a:  mov    %eax,0x4(%esp)
085d7410 +0x71e:  mov    0xc(%ebp),%eax
085d7413 +0x721:  mov    %eax,(%esp)
085d7416 +0x724:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085d741b +0x729:  movl   $0x1,0x4(%esp)
085d7423 +0x731:  lea    -0x60(%ebp),%eax
085d7426 +0x734:  mov    %eax,(%esp)
085d7429 +0x737:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d742e +0x73c:  lea    -0x60(%ebp),%eax
085d7431 +0x73f:  mov    %eax,0x4(%esp)
085d7435 +0x743:  mov    0x8(%ebp),%eax
085d7438 +0x746:  mov    %eax,(%esp)
085d743b +0x749:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085d7440 +0x74e:  lea    -0x6c(%ebp),%eax
085d7443 +0x751:  mov    %eax,(%esp)
085d7446 +0x754:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085d744b +0x759:  movl   $0xb,0x8(%esp)
085d7453 +0x761:  movl   $0x0,0x4(%esp)
085d745b +0x769:  lea    -0x6c(%ebp),%eax
085d745e +0x76c:  mov    %eax,(%esp)
085d7461 +0x76f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d7466 +0x774:  movl   $0x1,0x4(%esp)
085d746e +0x77c:  lea    -0x6c(%ebp),%eax
085d7471 +0x77f:  mov    %eax,(%esp)
085d7474 +0x782:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d7479 +0x787:  mov    0xc(%ebp),%eax
085d747c +0x78a:  mov    %eax,(%esp)
085d747f +0x78d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085d7484 +0x792:  movzwl %ax,%eax
085d7487 +0x795:  mov    %eax,0x4(%esp)
085d748b +0x799:  lea    -0x6c(%ebp),%eax
085d748e +0x79c:  mov    %eax,(%esp)
085d7491 +0x79f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d7496 +0x7a4:  mov    0xc(%ebp),%eax
085d7499 +0x7a7:  add    $0xe0,%eax
085d749e +0x7ac:  mov    %eax,(%esp)
085d74a1 +0x7af:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
085d74a6 +0x7b4:  mov    %eax,0x4(%esp)
085d74aa +0x7b8:  lea    -0x6c(%ebp),%eax
085d74ad +0x7bb:  mov    %eax,(%esp)
085d74b0 +0x7be:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d74b5 +0x7c3:  mov    0xc(%ebp),%eax
085d74b8 +0x7c6:  add    $0xe0,%eax
085d74bd +0x7cb:  mov    %eax,(%esp)
085d74c0 +0x7ce:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
085d74c5 +0x7d3:  mov    %eax,0x4(%esp)
085d74c9 +0x7d7:  lea    -0x6c(%ebp),%eax
085d74cc +0x7da:  mov    %eax,(%esp)
085d74cf +0x7dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d74d4 +0x7e2:  mov    0xc(%ebp),%eax
085d74d7 +0x7e5:  add    $0xe0,%eax
085d74dc +0x7ea:  mov    %eax,(%esp)
085d74df +0x7ed:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
085d74e4 +0x7f2:  movzwl %ax,%eax
085d74e7 +0x7f5:  mov    %eax,0x4(%esp)
085d74eb +0x7f9:  lea    -0x6c(%ebp),%eax
085d74ee +0x7fc:  mov    %eax,(%esp)
085d74f1 +0x7ff:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d74f6 +0x804:  mov    0xc(%ebp),%eax
085d74f9 +0x807:  mov    %eax,(%esp)
085d74fc +0x80a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085d7501 +0x80f:  mov    %eax,0x4(%esp)
085d7505 +0x813:  lea    -0x6c(%ebp),%eax
085d7508 +0x816:  mov    %eax,(%esp)
085d750b +0x819:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d7510 +0x81e:  mov    0xc(%ebp),%eax
085d7513 +0x821:  add    $0xe0,%eax
085d7518 +0x826:  mov    %eax,(%esp)
085d751b +0x829:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
085d7520 +0x82e:  movsbl %al,%eax
085d7523 +0x831:  mov    %eax,0x4(%esp)
085d7527 +0x835:  lea    -0x6c(%ebp),%eax
085d752a +0x838:  mov    %eax,(%esp)
085d752d +0x83b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d7532 +0x840:  mov    0xc(%ebp),%eax
085d7535 +0x843:  add    $0xe0,%eax
085d753a +0x848:  mov    %eax,(%esp)
085d753d +0x84b:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
085d7542 +0x850:  mov    %eax,0x4(%esp)
085d7546 +0x854:  lea    -0x6c(%ebp),%eax
085d7549 +0x857:  mov    %eax,(%esp)
085d754c +0x85a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d7551 +0x85f:  mov    0xc(%ebp),%eax
085d7554 +0x862:  mov    %eax,(%esp)
085d7557 +0x865:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d755c +0x86a:  test   %eax,%eax
085d755e +0x86c:  setne  %al
085d7561 +0x86f:  test   %al,%al
085d7563 +0x871:  je     085d7588 <+0x896>
085d7565 +0x873:  mov    0xc(%ebp),%eax
085d7568 +0x876:  mov    %eax,(%esp)
085d756b +0x879:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d7570 +0x87e:  movzbl 0x75(%eax),%eax
085d7574 +0x882:  movzbl %al,%eax
085d7577 +0x885:  mov    %eax,0x4(%esp)
085d757b +0x889:  lea    -0x6c(%ebp),%eax
085d757e +0x88c:  mov    %eax,(%esp)
085d7581 +0x88f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d7586 +0x894:  jmp    085d759b <+0x8a9>
085d7588 +0x896:  movl   $0x0,0x4(%esp)
085d7590 +0x89e:  lea    -0x6c(%ebp),%eax
085d7593 +0x8a1:  mov    %eax,(%esp)
085d7596 +0x8a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d759b +0x8a9:  movl   $0x1,0x4(%esp)
085d75a3 +0x8b1:  lea    -0x6c(%ebp),%eax
085d75a6 +0x8b4:  mov    %eax,(%esp)
085d75a9 +0x8b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d75ae +0x8bc:  lea    -0x6c(%ebp),%eax
085d75b1 +0x8bf:  mov    %eax,0x4(%esp)
085d75b5 +0x8c3:  mov    0x8(%ebp),%eax
085d75b8 +0x8c6:  mov    %eax,(%esp)
085d75bb +0x8c9:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085d75c0 +0x8ce:  lea    -0x60(%ebp),%eax
085d75c3 +0x8d1:  mov    %eax,(%esp)
085d75c6 +0x8d4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085d75cb +0x8d9:  movl   $0x36,0x8(%esp)
085d75d3 +0x8e1:  movl   $0x1,0x4(%esp)
085d75db +0x8e9:  lea    -0x60(%ebp),%eax
085d75de +0x8ec:  mov    %eax,(%esp)
085d75e1 +0x8ef:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d75e6 +0x8f4:  movl   $0x1,0x4(%esp)
085d75ee +0x8fc:  lea    -0x60(%ebp),%eax
085d75f1 +0x8ff:  mov    %eax,(%esp)
085d75f4 +0x902:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d75f9 +0x907:  mov    0x8(%ebp),%eax
085d75fc +0x90a:  mov    %eax,(%esp)
085d75ff +0x90d:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d7604 +0x912:  movl   $0x0,-0x1c(%ebp)
085d760b +0x919:  jmp    085d762e <+0x93c>
085d760d +0x91b:  mov    -0x1c(%ebp),%eax
085d7610 +0x91e:  mov    0x8(%ebp),%edx
085d7613 +0x921:  movzbl 0x70(%edx,%eax,1),%eax
085d7618 +0x926:  movzbl %al,%eax
085d761b +0x929:  mov    %eax,0x4(%esp)
085d761f +0x92d:  lea    -0x60(%ebp),%eax
085d7622 +0x930:  mov    %eax,(%esp)
085d7625 +0x933:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d762a +0x938:  addl   $0x1,-0x1c(%ebp)
085d762e +0x93c:  cmpl   $0x7,-0x1c(%ebp)
085d7632 +0x940:  setle  %al
085d7635 +0x943:  test   %al,%al
085d7637 +0x945:  jne    085d760d <+0x91b>
085d7639 +0x947:  mov    0x8(%ebp),%eax
085d763c +0x94a:  mov    %eax,(%esp)
085d763f +0x94d:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d7644 +0x952:  movl   $0x1,0x4(%esp)
085d764c +0x95a:  lea    -0x60(%ebp),%eax
085d764f +0x95d:  mov    %eax,(%esp)
085d7652 +0x960:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d7657 +0x965:  lea    -0x60(%ebp),%eax
085d765a +0x968:  mov    %eax,0x4(%esp)
085d765e +0x96c:  mov    0xc(%ebp),%eax
085d7661 +0x96f:  mov    %eax,(%esp)
085d7664 +0x972:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d7669 +0x977:  mov    0xc(%ebp),%eax
085d766c +0x97a:  movl   $0x0,0x796fc(%eax)
085d7676 +0x984:  mov    0x8(%ebp),%eax
085d7679 +0x987:  mov    0x600(%eax),%eax
085d767f +0x98d:  lea    0x1(%eax),%edx
085d7682 +0x990:  mov    0x8(%ebp),%eax
085d7685 +0x993:  mov    %edx,0x600(%eax)
085d768b +0x999:  mov    0x10(%ebp),%eax
085d768e +0x99c:  mov    (%eax),%eax
085d7690 +0x99e:  mov    0x8(%ebp),%edx
085d7693 +0x9a1:  add    $0x620,%edx
085d7699 +0x9a7:  mov    %eax,0x4(%esp)
085d769d +0x9ab:  mov    %edx,(%esp)
085d76a0 +0x9ae:  call   085de0de <_ZN15CRelayBattleMgr10OnJoinRoomEi>  ; CRelayBattleMgr::OnJoinRoom(int)
085d76a5 +0x9b3:  mov    0x8(%ebp),%eax
085d76a8 +0x9b6:  mov    0x6e4(%eax),%eax
085d76ae +0x9bc:  mov    (%eax),%eax
085d76b0 +0x9be:  add    $0x28,%eax
085d76b3 +0x9c1:  mov    (%eax),%ecx
085d76b5 +0x9c3:  mov    0x8(%ebp),%eax
085d76b8 +0x9c6:  mov    0x6e4(%eax),%eax
085d76be +0x9cc:  mov    0xc(%ebp),%edx
085d76c1 +0x9cf:  mov    %edx,0x4(%esp)
085d76c5 +0x9d3:  mov    %eax,(%esp)
085d76c8 +0x9d6:  call   *%ecx
085d76ca +0x9d8:  mov    $0x0,%ebx
085d76cf +0x9dd:  jmp    085d76e6 <+0x9f4>
085d76d1 +0x9df:  mov    %edx,%ebx
085d76d3 +0x9e1:  mov    %eax,%esi
085d76d5 +0x9e3:  lea    -0x6c(%ebp),%eax
085d76d8 +0x9e6:  mov    %eax,(%esp)
085d76db +0x9e9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d76e0 +0x9ee:  mov    %esi,%eax
085d76e2 +0x9f0:  mov    %ebx,%edx
085d76e4 +0x9f2:  jmp    085d76f3 <+0xa01>
085d76e6 +0x9f4:  lea    -0x6c(%ebp),%eax
085d76e9 +0x9f7:  mov    %eax,(%esp)
085d76ec +0x9fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d76f1 +0x9ff:  jmp    085d770e <+0xa1c>
085d76f3 +0xa01:  mov    %edx,%ebx
085d76f5 +0xa03:  mov    %eax,%esi
085d76f7 +0xa05:  lea    -0x60(%ebp),%eax
085d76fa +0xa08:  mov    %eax,(%esp)
085d76fd +0xa0b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d7702 +0xa10:  mov    %esi,%eax
085d7704 +0xa12:  mov    %ebx,%edx
085d7706 +0xa14:  mov    %eax,(%esp)
085d7709 +0xa17:  call   08ae3750 <_Unwind_Resume>
085d770e +0xa1c:  lea    -0x60(%ebp),%eax
085d7711 +0xa1f:  mov    %eax,(%esp)
085d7714 +0xa22:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d7719 +0xa27:  mov    %ebx,%eax
085d771b +0xa29:  add    $0x9c,%esp
085d7721 +0xa2f:  pop    %ebx
085d7722 +0xa30:  pop    %esi
085d7723 +0xa31:  pop    %edi
085d7724 +0xa32:  pop    %ebp
085d7725 +0xa33:  ret
```

## 反编译 C

```c
// PvP_Room::join_room @ 0x85d6cf2

/* PvP_Room::join_room(CUser*, int&, bool) */

int __thiscall PvP_Room::join_room(PvP_Room *this,CUser *param_1,int *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *pGVar8;
  int iVar9;
  CDataManager *this_00;
  int iVar10;
  CFairPvPScore *this_01;
  int iVar11;
  uint uVar12;
  int local_7c [3];
  PacketGuard local_70 [12];
  PacketGuard local_64 [12];
  CSwitchLog local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar5 = get_waiter_count(this);
  uVar1 = *(undefined4 *)(this + 4);
  uVar2 = *(undefined4 *)this;
  uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_58,"int PvP_Room::join_room(CUser*, int&, bool)",0x4a8,0,0);
  CSwitchLog::operator()
            (local_58,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar2,uVar1,(uint)param_3,uVar5)
  ;
  pGVar8 = (GameWorld *)G_GameWorld();
  iVar9 = GameWorld::GetChannelType(pGVar8);
  if (iVar9 != 0xf) {
    pGVar8 = (GameWorld *)G_GameWorld();
    iVar9 = GameWorld::GetChannelType(pGVar8);
    if (iVar9 != 0x10) {
      bVar3 = false;
      goto LAB_085d6dde;
    }
  }
  bVar3 = true;
LAB_085d6dde:
  if (bVar3) {
    this_00 = (CDataManager *)G_CDataManager();
    iVar9 = CDataManager::GetMaxGradePvPChannel(this_00);
    iVar10 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    if (iVar9 < iVar10) {
      return 0xd;
    }
    this_01 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    iVar9 = fair_pvp::CFairPvPScore::GetGiveItem(this_01);
    iVar10 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar11 = G_CDataManager();
    iVar10 = ServerParameterScript::get_pvp_item_give
                       ((ServerParameterScript *)(iVar11 + 0x68),iVar10);
    if (iVar9 <= iVar10) {
      return 7;
    }
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    iVar9 = 0x13;
  }
  else if (*(int *)(this + 0xb8) == 2) {
    iVar9 = 0x13;
  }
  else {
    local_48 = get_waiter_count(this);
    PacketGuard::PacketGuard(local_64);
                    /* try { // try from 085d6eb5 to 085d6eb9 has its CatchHandler @ 085d76f3 */
    PacketGuard::PacketGuard(local_70);
                    /* try { // try from 085d6ed0 to 085d76c9 has its CatchHandler @ 085d76d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,2);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_70,0,0xb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,local_48);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,local_48);
    for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
      if (*(int *)(this + (local_3c + 0xc) * 4) != 0) {
        CUser::make_basic_info(*(CUser **)(this + (local_3c + 0xc) * 4),(char *)local_64,'\x01');
        uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_3c + 0xc) * 4));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CNetwork<4096,450000>::get_inner_ip
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CNetwork<4096,450000>::get_ip
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        uVar12 = CNetwork<4096,450000>::get_port
                           ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0))
        ;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CUser::get_acc_id(*(CUser **)(this + (local_3c + 0xc) * 4));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        cVar4 = CNetwork<4096,450000>::get_nat_type
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(int)cVar4);
        iVar9 = CNetwork<4096,450000>::get_mtu
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_3c + 0xc) * 4));
        if (iVar9 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,0);
        }
        else {
          iVar9 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_3c + 0xc) * 4))
          ;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(uint)*(byte *)(iVar9 + 0x75))
          ;
        }
      }
    }
    unlock();
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_70,true);
    lock();
    local_44 = 0;
    local_44 = (**(code **)(**(int **)(this + 0x6e4) + 0x70))
                         (*(undefined4 *)(this + 0x6e4),this,param_1);
    if (local_44 == 0) {
      local_40 = -1;
      for (local_38 = 0; local_38 < 8; local_38 = local_38 + 1) {
        if ((*(int *)(this + (local_38 + 0xc) * 4) == 0) &&
           (*(int *)(this + (local_38 + 0x14) * 4) == 0xff)) {
          local_40 = local_38;
          *(CUser **)(this + (local_38 + 0xc) * 4) = param_1;
          CUser::SetPvpIndex(param_1,(short)*(undefined4 *)this);
          *param_2 = local_38;
          break;
        }
      }
      if (local_40 == -1) {
        unlock();
        iVar9 = 4;
      }
      else {
        CUser::Send(param_1,local_64);
        CUser::Send(param_1,local_70);
        if (*(int *)(this + 4) == 1) {
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 0;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,0);
        }
        else if (*(int *)(this + 4) == 4) {
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 0;
        }
        else if (param_3) {
          local_34 = 1;
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 1;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,1);
        }
        else {
          local_7c[0] = 0;
          local_7c[1] = 0;
          local_7c[2] = 0;
          for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
            if ((0 < *(int *)(this + (local_28 + 0x14) * 4)) &&
               (*(int *)(this + (local_28 + 0x14) * 4) < 3)) {
              local_7c[*(int *)(this + (local_28 + 0x14) * 4)] =
                   local_7c[*(int *)(this + (local_28 + 0x14) * 4)] + 1;
            }
          }
          local_30 = 8;
          local_2c = 1;
          for (local_24 = 1; local_24 < 3; local_24 = local_24 + 1) {
            if (local_7c[local_24] <= local_30) {
              local_2c = local_24;
              local_30 = local_7c[local_24];
            }
          }
          *(int *)(this + (local_40 + 0x14) * 4) = local_2c;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,local_2c);
        }
        unlock();
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,1);
        CUser::make_basic_info(param_1,(char *)local_64,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
        send_to_pvp(this,local_64);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_70);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_70,0,0xb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,1);
        uVar12 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        uVar12 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CUser::get_acc_id(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        cVar4 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(int)cVar4);
        iVar9 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar9 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,0);
        }
        else {
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(uint)*(byte *)(iVar9 + 0x75))
          ;
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_70,true);
        send_to_pvp(this,local_70);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x36);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
        lock();
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_64,(uint)(byte)this[local_20 + 0x70]);
        }
        unlock();
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
        CUser::Send(param_1,local_64);
        *(undefined4 *)(param_1 + 0x796fc) = 0;
        *(int *)(this + 0x600) = *(int *)(this + 0x600) + 1;
        CRelayBattleMgr::OnJoinRoom((int)(this + 0x620));
        (**(code **)(**(int **)(this + 0x6e4) + 0x28))(*(undefined4 *)(this + 0x6e4),param_1);
        iVar9 = 0;
      }
    }
    else {
      unlock();
      iVar9 = local_44;
    }
                    /* try { // try from 085d76ec to 085d76f0 has its CatchHandler @ 085d76f3 */
    PacketGuard::~PacketGuard(local_70);
    PacketGuard::~PacketGuard(local_64);
  }
  return iVar9;
}
```
