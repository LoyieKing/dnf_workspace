# _getGameStartTime

`_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE`

`WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08602da6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08602da6  _ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE
#           WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
# range [0x08602da6, 0x086031f5]
08602da6 +0x000:  push   %ebp
08602da7 +0x001:  mov    %esp,%ebp
08602da9 +0x003:  sub    $0x38,%esp
08602dac +0x006:  movl   $0x14,0x8(%esp)
08602db4 +0x00e:  movl   $0x0,0x4(%esp)
08602dbc +0x016:  lea    -0x20(%ebp),%eax
08602dbf +0x019:  mov    %eax,(%esp)
08602dc2 +0x01c:  call   0807dcc0 <_init+0x5b8>
08602dc7 +0x021:  movl   $0xd,0x8(%esp)
08602dcf +0x029:  movl   $"member_login",0x4(%esp)
08602dd7 +0x031:  lea    -0x20(%ebp),%eax
08602dda +0x034:  mov    %eax,(%esp)
08602ddd +0x037:  call   0807d8a0 <_init+0x198>
08602de2 +0x03c:  movl   $0x0,0x4(%esp)
08602dea +0x044:  mov    0xc(%ebp),%eax
08602ded +0x047:  mov    %eax,(%esp)
08602df0 +0x04a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08602df5 +0x04f:  mov    0x8(%ebp),%edx
08602df8 +0x052:  mov    0xd0860(%edx),%edx
08602dfe +0x058:  mov    %eax,0xc(%esp)
08602e02 +0x05c:  lea    -0x20(%ebp),%eax
08602e05 +0x05f:  mov    %eax,0x8(%esp)
08602e09 +0x063:  movl   $"seLect login_time,expire_time,report_cnt,last_play_time,account_fail,total_account_fail,reliable_flag,trade_gold_daily,login_ip,security_flag,dungeon_gain_gold,school_id,rating,tutorial_skipable,event_charac_flag from %s where m_id=%s",0x4(%esp)
08602e11 +0x06b:  mov    %edx,(%esp)
08602e14 +0x06e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08602e19 +0x073:  mov    0x8(%ebp),%eax
08602e1c +0x076:  mov    0xd0860(%eax),%eax
08602e22 +0x07c:  movl   $0x1,0x4(%esp)
08602e2a +0x084:  mov    %eax,(%esp)
08602e2d +0x087:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08602e32 +0x08c:  xor    $0x1,%eax
08602e35 +0x08f:  test   %al,%al
08602e37 +0x091:  jne    08602e51 <+0xab>
08602e39 +0x093:  mov    0x8(%ebp),%eax
08602e3c +0x096:  mov    0xd0860(%eax),%eax
08602e42 +0x09c:  mov    %eax,(%esp)
08602e45 +0x09f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08602e4a +0x0a4:  xor    $0x1,%eax
08602e4d +0x0a7:  test   %al,%al
08602e4f +0x0a9:  je     08602e58 <+0xb2>
08602e51 +0x0ab:  mov    $0x1,%eax
08602e56 +0x0b0:  jmp    08602e5d <+0xb7>
08602e58 +0x0b2:  mov    $0x0,%eax
08602e5d +0x0b7:  test   %al,%al
08602e5f +0x0b9:  je     08602e6b <+0xc5>
08602e61 +0x0bb:  mov    $0x0,%eax
08602e66 +0x0c0:  jmp    086031f3 <+0x44d>
08602e6b +0x0c5:  mov    0x8(%ebp),%eax
08602e6e +0x0c8:  mov    0xd0860(%eax),%eax
08602e74 +0x0ce:  mov    %eax,(%esp)
08602e77 +0x0d1:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08602e7c +0x0d6:  test   %eax,%eax
08602e7e +0x0d8:  sete   %al
08602e81 +0x0db:  test   %al,%al
08602e83 +0x0dd:  je     08602e8f <+0xe9>
08602e85 +0x0df:  mov    $0x0,%eax
08602e8a +0x0e4:  jmp    086031f3 <+0x44d>
08602e8f +0x0e9:  movl   $0x0,-0xc(%ebp)
08602e96 +0x0f0:  mov    -0xc(%ebp),%edx
08602e99 +0x0f3:  addl   $0x1,-0xc(%ebp)
08602e9d +0x0f7:  mov    0x8(%ebp),%eax
08602ea0 +0x0fa:  mov    0xd0860(%eax),%eax
08602ea6 +0x100:  lea    -0x24(%ebp),%ecx
08602ea9 +0x103:  mov    %ecx,0x8(%esp)
08602ead +0x107:  mov    %edx,0x4(%esp)
08602eb1 +0x10b:  mov    %eax,(%esp)
08602eb4 +0x10e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08602eb9 +0x113:  xor    $0x1,%eax
08602ebc +0x116:  test   %al,%al
08602ebe +0x118:  je     08602eca <+0x124>
08602ec0 +0x11a:  mov    $0x0,%eax
08602ec5 +0x11f:  jmp    086031f3 <+0x44d>
08602eca +0x124:  mov    -0xc(%ebp),%edx
08602ecd +0x127:  addl   $0x1,-0xc(%ebp)
08602ed1 +0x12b:  mov    0x8(%ebp),%eax
08602ed4 +0x12e:  mov    0xd0860(%eax),%eax
08602eda +0x134:  lea    -0x28(%ebp),%ecx
08602edd +0x137:  mov    %ecx,0x8(%esp)
08602ee1 +0x13b:  mov    %edx,0x4(%esp)
08602ee5 +0x13f:  mov    %eax,(%esp)
08602ee8 +0x142:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08602eed +0x147:  xor    $0x1,%eax
08602ef0 +0x14a:  test   %al,%al
08602ef2 +0x14c:  je     08602efe <+0x158>
08602ef4 +0x14e:  mov    $0x0,%eax
08602ef9 +0x153:  jmp    086031f3 <+0x44d>
08602efe +0x158:  mov    0x18(%ebp),%eax
08602f01 +0x15b:  lea    0xc(%eax),%ecx
08602f04 +0x15e:  mov    -0xc(%ebp),%edx
08602f07 +0x161:  addl   $0x1,-0xc(%ebp)
08602f0b +0x165:  mov    0x8(%ebp),%eax
08602f0e +0x168:  mov    0xd0860(%eax),%eax
08602f14 +0x16e:  mov    %ecx,0x8(%esp)
08602f18 +0x172:  mov    %edx,0x4(%esp)
08602f1c +0x176:  mov    %eax,(%esp)
08602f1f +0x179:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08602f24 +0x17e:  xor    $0x1,%eax
08602f27 +0x181:  test   %al,%al
08602f29 +0x183:  je     08602f35 <+0x18f>
08602f2b +0x185:  mov    $0x0,%eax
08602f30 +0x18a:  jmp    086031f3 <+0x44d>
08602f35 +0x18f:  mov    0x18(%ebp),%ecx
08602f38 +0x192:  mov    -0xc(%ebp),%edx
08602f3b +0x195:  addl   $0x1,-0xc(%ebp)
08602f3f +0x199:  mov    0x8(%ebp),%eax
08602f42 +0x19c:  mov    0xd0860(%eax),%eax
08602f48 +0x1a2:  mov    %ecx,0x8(%esp)
08602f4c +0x1a6:  mov    %edx,0x4(%esp)
08602f50 +0x1aa:  mov    %eax,(%esp)
08602f53 +0x1ad:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08602f58 +0x1b2:  xor    $0x1,%eax
08602f5b +0x1b5:  test   %al,%al
08602f5d +0x1b7:  je     08602f69 <+0x1c3>
08602f5f +0x1b9:  mov    $0x0,%eax
08602f64 +0x1be:  jmp    086031f3 <+0x44d>
08602f69 +0x1c3:  mov    0x18(%ebp),%eax
08602f6c +0x1c6:  lea    0x4(%eax),%ecx
08602f6f +0x1c9:  mov    -0xc(%ebp),%edx
08602f72 +0x1cc:  addl   $0x1,-0xc(%ebp)
08602f76 +0x1d0:  mov    0x8(%ebp),%eax
08602f79 +0x1d3:  mov    0xd0860(%eax),%eax
08602f7f +0x1d9:  mov    %ecx,0x8(%esp)
08602f83 +0x1dd:  mov    %edx,0x4(%esp)
08602f87 +0x1e1:  mov    %eax,(%esp)
08602f8a +0x1e4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08602f8f +0x1e9:  xor    $0x1,%eax
08602f92 +0x1ec:  test   %al,%al
08602f94 +0x1ee:  je     08602fa0 <+0x1fa>
08602f96 +0x1f0:  mov    $0x0,%eax
08602f9b +0x1f5:  jmp    086031f3 <+0x44d>
08602fa0 +0x1fa:  mov    0x18(%ebp),%eax
08602fa3 +0x1fd:  lea    0x8(%eax),%ecx
08602fa6 +0x200:  mov    -0xc(%ebp),%edx
08602fa9 +0x203:  addl   $0x1,-0xc(%ebp)
08602fad +0x207:  mov    0x8(%ebp),%eax
08602fb0 +0x20a:  mov    0xd0860(%eax),%eax
08602fb6 +0x210:  mov    %ecx,0x8(%esp)
08602fba +0x214:  mov    %edx,0x4(%esp)
08602fbe +0x218:  mov    %eax,(%esp)
08602fc1 +0x21b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08602fc6 +0x220:  xor    $0x1,%eax
08602fc9 +0x223:  test   %al,%al
08602fcb +0x225:  je     08602fd7 <+0x231>
08602fcd +0x227:  mov    $0x0,%eax
08602fd2 +0x22c:  jmp    086031f3 <+0x44d>
08602fd7 +0x231:  mov    0x18(%ebp),%eax
08602fda +0x234:  lea    0x10(%eax),%ecx
08602fdd +0x237:  mov    -0xc(%ebp),%edx
08602fe0 +0x23a:  addl   $0x1,-0xc(%ebp)
08602fe4 +0x23e:  mov    0x8(%ebp),%eax
08602fe7 +0x241:  mov    0xd0860(%eax),%eax
08602fed +0x247:  mov    %ecx,0x8(%esp)
08602ff1 +0x24b:  mov    %edx,0x4(%esp)
08602ff5 +0x24f:  mov    %eax,(%esp)
08602ff8 +0x252:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08602ffd +0x257:  xor    $0x1,%eax
08603000 +0x25a:  test   %al,%al
08603002 +0x25c:  je     0860300e <+0x268>
08603004 +0x25e:  mov    $0x0,%eax
08603009 +0x263:  jmp    086031f3 <+0x44d>
0860300e +0x268:  mov    0x18(%ebp),%eax
08603011 +0x26b:  lea    0x14(%eax),%ecx
08603014 +0x26e:  mov    -0xc(%ebp),%edx
08603017 +0x271:  addl   $0x1,-0xc(%ebp)
0860301b +0x275:  mov    0x8(%ebp),%eax
0860301e +0x278:  mov    0xd0860(%eax),%eax
08603024 +0x27e:  mov    %ecx,0x8(%esp)
08603028 +0x282:  mov    %edx,0x4(%esp)
0860302c +0x286:  mov    %eax,(%esp)
0860302f +0x289:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08603034 +0x28e:  xor    $0x1,%eax
08603037 +0x291:  test   %al,%al
08603039 +0x293:  je     08603045 <+0x29f>
0860303b +0x295:  mov    $0x0,%eax
08603040 +0x29a:  jmp    086031f3 <+0x44d>
08603045 +0x29f:  mov    0x18(%ebp),%eax
08603048 +0x2a2:  lea    0x18(%eax),%ecx
0860304b +0x2a5:  mov    -0xc(%ebp),%edx
0860304e +0x2a8:  addl   $0x1,-0xc(%ebp)
08603052 +0x2ac:  mov    0x8(%ebp),%eax
08603055 +0x2af:  mov    0xd0860(%eax),%eax
0860305b +0x2b5:  movl   $0x14,0xc(%esp)
08603063 +0x2bd:  mov    %ecx,0x8(%esp)
08603067 +0x2c1:  mov    %edx,0x4(%esp)
0860306b +0x2c5:  mov    %eax,(%esp)
0860306e +0x2c8:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08603073 +0x2cd:  xor    $0x1,%eax
08603076 +0x2d0:  test   %al,%al
08603078 +0x2d2:  je     08603084 <+0x2de>
0860307a +0x2d4:  mov    $0x0,%eax
0860307f +0x2d9:  jmp    086031f3 <+0x44d>
08603084 +0x2de:  mov    0x18(%ebp),%eax
08603087 +0x2e1:  lea    0x2c(%eax),%ecx
0860308a +0x2e4:  mov    -0xc(%ebp),%edx
0860308d +0x2e7:  addl   $0x1,-0xc(%ebp)
08603091 +0x2eb:  mov    0x8(%ebp),%eax
08603094 +0x2ee:  mov    0xd0860(%eax),%eax
0860309a +0x2f4:  mov    %ecx,0x8(%esp)
0860309e +0x2f8:  mov    %edx,0x4(%esp)
086030a2 +0x2fc:  mov    %eax,(%esp)
086030a5 +0x2ff:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
086030aa +0x304:  xor    $0x1,%eax
086030ad +0x307:  test   %al,%al
086030af +0x309:  je     086030bb <+0x315>
086030b1 +0x30b:  mov    $0x0,%eax
086030b6 +0x310:  jmp    086031f3 <+0x44d>
086030bb +0x315:  mov    0x18(%ebp),%eax
086030be +0x318:  lea    0x30(%eax),%ecx
086030c1 +0x31b:  mov    -0xc(%ebp),%edx
086030c4 +0x31e:  addl   $0x1,-0xc(%ebp)
086030c8 +0x322:  mov    0x8(%ebp),%eax
086030cb +0x325:  mov    0xd0860(%eax),%eax
086030d1 +0x32b:  mov    %ecx,0x8(%esp)
086030d5 +0x32f:  mov    %edx,0x4(%esp)
086030d9 +0x333:  mov    %eax,(%esp)
086030dc +0x336:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
086030e1 +0x33b:  xor    $0x1,%eax
086030e4 +0x33e:  test   %al,%al
086030e6 +0x340:  je     086030f2 <+0x34c>
086030e8 +0x342:  mov    $0x0,%eax
086030ed +0x347:  jmp    086031f3 <+0x44d>
086030f2 +0x34c:  mov    0x18(%ebp),%eax
086030f5 +0x34f:  lea    0x34(%eax),%ecx
086030f8 +0x352:  mov    -0xc(%ebp),%edx
086030fb +0x355:  addl   $0x1,-0xc(%ebp)
086030ff +0x359:  mov    0x8(%ebp),%eax
08603102 +0x35c:  mov    0xd0860(%eax),%eax
08603108 +0x362:  mov    %ecx,0x8(%esp)
0860310c +0x366:  mov    %edx,0x4(%esp)
08603110 +0x36a:  mov    %eax,(%esp)
08603113 +0x36d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08603118 +0x372:  xor    $0x1,%eax
0860311b +0x375:  test   %al,%al
0860311d +0x377:  je     08603129 <+0x383>
0860311f +0x379:  mov    $0x0,%eax
08603124 +0x37e:  jmp    086031f3 <+0x44d>
08603129 +0x383:  mov    0x18(%ebp),%eax
0860312c +0x386:  lea    0x38(%eax),%ecx
0860312f +0x389:  mov    -0xc(%ebp),%edx
08603132 +0x38c:  addl   $0x1,-0xc(%ebp)
08603136 +0x390:  mov    0x8(%ebp),%eax
08603139 +0x393:  mov    0xd0860(%eax),%eax
0860313f +0x399:  mov    %ecx,0x8(%esp)
08603143 +0x39d:  mov    %edx,0x4(%esp)
08603147 +0x3a1:  mov    %eax,(%esp)
0860314a +0x3a4:  call   0844d6d0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e6
0860314f +0x3a9:  xor    $0x1,%eax
08603152 +0x3ac:  test   %al,%al
08603154 +0x3ae:  je     08603160 <+0x3ba>
08603156 +0x3b0:  mov    $0x0,%eax
0860315b +0x3b5:  jmp    086031f3 <+0x44d>
08603160 +0x3ba:  mov    0x18(%ebp),%eax
08603163 +0x3bd:  lea    0x3c(%eax),%ecx
08603166 +0x3c0:  mov    -0xc(%ebp),%edx
08603169 +0x3c3:  addl   $0x1,-0xc(%ebp)
0860316d +0x3c7:  mov    0x8(%ebp),%eax
08603170 +0x3ca:  mov    0xd0860(%eax),%eax
08603176 +0x3d0:  mov    %ecx,0x8(%esp)
0860317a +0x3d4:  mov    %edx,0x4(%esp)
0860317e +0x3d8:  mov    %eax,(%esp)
08603181 +0x3db:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08603186 +0x3e0:  xor    $0x1,%eax
08603189 +0x3e3:  test   %al,%al
0860318b +0x3e5:  je     08603194 <+0x3ee>
0860318d +0x3e7:  mov    $0x0,%eax
08603192 +0x3ec:  jmp    086031f3 <+0x44d>
08603194 +0x3ee:  mov    0x18(%ebp),%eax
08603197 +0x3f1:  lea    0x3d(%eax),%ecx
0860319a +0x3f4:  mov    -0xc(%ebp),%edx
0860319d +0x3f7:  addl   $0x1,-0xc(%ebp)
086031a1 +0x3fb:  mov    0x8(%ebp),%eax
086031a4 +0x3fe:  mov    0xd0860(%eax),%eax
086031aa +0x404:  mov    %ecx,0x8(%esp)
086031ae +0x408:  mov    %edx,0x4(%esp)
086031b2 +0x40c:  mov    %eax,(%esp)
086031b5 +0x40f:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
086031ba +0x414:  xor    $0x1,%eax
086031bd +0x417:  test   %al,%al
086031bf +0x419:  je     086031c8 <+0x422>
086031c1 +0x41b:  mov    $0x0,%eax
086031c6 +0x420:  jmp    086031f3 <+0x44d>
086031c8 +0x422:  mov    -0x24(%ebp),%eax
086031cb +0x425:  mov    %eax,%edx
086031cd +0x427:  mov    0x10(%ebp),%eax
086031d0 +0x42a:  mov    %edx,(%eax)
086031d2 +0x42c:  mov    -0x28(%ebp),%eax
086031d5 +0x42f:  mov    %eax,%edx
086031d7 +0x431:  mov    0x14(%ebp),%eax
086031da +0x434:  mov    %edx,(%eax)
086031dc +0x436:  mov    -0x24(%ebp),%edx
086031df +0x439:  mov    0x18(%ebp),%eax
086031e2 +0x43c:  mov    %edx,0x40(%eax)
086031e5 +0x43f:  mov    -0x28(%ebp),%edx
086031e8 +0x442:  mov    0x18(%ebp),%eax
086031eb +0x445:  mov    %edx,0x44(%eax)
086031ee +0x448:  mov    $0x1,%eax
086031f3 +0x44d:  leave
086031f4 +0x44e:  ret
086031f5 +0x44f:  nop
```

## 反编译 C

```c
// WongWork::CSimpleSSO::_getGameStartTime @ 0x8602da6

/* WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&,
   WongWork::CSimpleSSO::stOutputData_t&) */

undefined4 __thiscall
WongWork::CSimpleSSO::_getGameStartTime
          (CSimpleSSO *this,uint param_1,long *param_2,long *param_3,stOutputData_t *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [20];
  int local_10;
  
  memset(local_24,0,0x14);
  memcpy(local_24,"member_login",0xd);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "seLect login_time,expire_time,report_cnt,last_play_time,account_fail,total_account_fail,reliable_flag,trade_gold_daily,login_ip,security_flag,dungeon_gain_gold,school_id,rating,tutorial_skipable,event_charac_flag from %s where m_id=%s"
                   ,local_24,uVar3);
  cVar2 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(*(MySQL **)(this + 0xd0860));
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_08602e5d;
    }
  }
  bVar1 = true;
LAB_08602e5d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = MySQL::get_n_rows(*(MySQL **)(this + 0xd0860));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_10 = 1;
      cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),0,&local_28);
      iVar4 = local_10;
      if (cVar2 == '\x01') {
        local_10 = local_10 + 1;
        cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,&local_2c);
        iVar4 = local_10;
        if (cVar2 == '\x01') {
          local_10 = local_10 + 1;
          cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 0xc));
          iVar4 = local_10;
          if (cVar2 == '\x01') {
            local_10 = local_10 + 1;
            cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)param_4);
            iVar4 = local_10;
            if (cVar2 == '\x01') {
              local_10 = local_10 + 1;
              cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 4));
              iVar4 = local_10;
              if (cVar2 == '\x01') {
                local_10 = local_10 + 1;
                cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 8));
                iVar4 = local_10;
                if (cVar2 == '\x01') {
                  local_10 = local_10 + 1;
                  cVar2 = MySQL::get_byte(*(MySQL **)(this + 0xd0860),iVar4,(char *)(param_4 + 0x10)
                                         );
                  iVar4 = local_10;
                  if (cVar2 == '\x01') {
                    local_10 = local_10 + 1;
                    cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,
                                            (uint *)(param_4 + 0x14));
                    iVar4 = local_10;
                    if (cVar2 == '\x01') {
                      local_10 = local_10 + 1;
                      cVar2 = MySQL::get_str(*(MySQL **)(this + 0xd0860),iVar4,
                                             (char *)(param_4 + 0x18),0x14);
                      iVar4 = local_10;
                      if (cVar2 == '\x01') {
                        local_10 = local_10 + 1;
                        cVar2 = MySQL::get_byte(*(MySQL **)(this + 0xd0860),iVar4,
                                                (char *)(param_4 + 0x2c));
                        iVar4 = local_10;
                        if (cVar2 == '\x01') {
                          local_10 = local_10 + 1;
                          cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,
                                                  (uint *)(param_4 + 0x30));
                          iVar4 = local_10;
                          if (cVar2 == '\x01') {
                            local_10 = local_10 + 1;
                            cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,
                                                   (int *)(param_4 + 0x34));
                            iVar4 = local_10;
                            if (cVar2 == '\x01') {
                              local_10 = local_10 + 1;
                              cVar2 = MySQL::get_float(*(MySQL **)(this + 0xd0860),iVar4,
                                                       (float *)(param_4 + 0x38));
                              iVar4 = local_10;
                              if (cVar2 == '\x01') {
                                local_10 = local_10 + 1;
                                cVar2 = MySQL::get_ubyte(*(MySQL **)(this + 0xd0860),iVar4,
                                                         (uchar *)(param_4 + 0x3c));
                                iVar4 = local_10;
                                if (cVar2 == '\x01') {
                                  local_10 = local_10 + 1;
                                  cVar2 = MySQL::get_ubyte(*(MySQL **)(this + 0xd0860),iVar4,
                                                           (uchar *)(param_4 + 0x3d));
                                  if (cVar2 == '\x01') {
                                    *param_2 = local_28;
                                    *param_3 = local_2c;
                                    *(uint *)(param_4 + 0x40) = local_28;
                                    *(uint *)(param_4 + 0x44) = local_2c;
                                    uVar3 = 1;
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
