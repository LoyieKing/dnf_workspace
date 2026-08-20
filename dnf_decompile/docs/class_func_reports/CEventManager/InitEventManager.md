# InitEventManager

`_ZN13CEventManager16InitEventManagerEv`

`CEventManager::InitEventManager()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08114dcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08114dcc  _ZN13CEventManager16InitEventManagerEv
#           CEventManager::InitEventManager()
# range [0x08114dcc, 0x08115981]
08114dcc +0x000:  push   %ebp
08114dcd +0x001:  mov    %esp,%ebp
08114dcf +0x003:  push   %edi
08114dd0 +0x004:  push   %esi
08114dd1 +0x005:  push   %ebx
08114dd2 +0x006:  sub    $0x1c,%esp
08114dd5 +0x009:  movl   $0xc,(%esp)
08114ddc +0x010:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114de1 +0x015:  mov    %eax,%ebx
08114de3 +0x017:  mov    %ebx,%eax
08114de5 +0x019:  mov    %eax,(%esp)
08114de8 +0x01c:  call   08285c44 <_ZN20CUnlimitFatigueEventC1Ev>  ; CUnlimitFatigueEvent::CUnlimitFatigueEvent()
08114ded +0x021:  jmp    08114e04 <+0x38>
08114def +0x023:  mov    %edx,%esi
08114df1 +0x025:  mov    %eax,%edi
08114df3 +0x027:  mov    %ebx,(%esp)
08114df6 +0x02a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114dfb +0x02f:  mov    %edi,%eax
08114dfd +0x031:  mov    %esi,%edx
08114dff +0x033:  jmp    08115965 <+0xb99>
08114e04 +0x038:  mov    %ebx,%eax
08114e06 +0x03a:  mov    %eax,%edx
08114e08 +0x03c:  mov    0x8(%ebp),%eax
08114e0b +0x03f:  mov    %edx,0x4(%eax)
08114e0e +0x042:  movl   $0x10,(%esp)
08114e15 +0x049:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114e1a +0x04e:  mov    %eax,%ebx
08114e1c +0x050:  mov    %ebx,%eax
08114e1e +0x052:  mov    %eax,(%esp)
08114e21 +0x055:  call   081b2718 <_ZN22CMaxFatigueFactorEventC1Ev>  ; CMaxFatigueFactorEvent::CMaxFatigueFactorEvent()
08114e26 +0x05a:  jmp    08114e3d <+0x71>
08114e28 +0x05c:  mov    %edx,%esi
08114e2a +0x05e:  mov    %eax,%edi
08114e2c +0x060:  mov    %ebx,(%esp)
08114e2f +0x063:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114e34 +0x068:  mov    %edi,%eax
08114e36 +0x06a:  mov    %esi,%edx
08114e38 +0x06c:  jmp    08115965 <+0xb99>
08114e3d +0x071:  mov    %ebx,%eax
08114e3f +0x073:  mov    %eax,%edx
08114e41 +0x075:  mov    0x8(%ebp),%eax
08114e44 +0x078:  mov    %edx,0x8(%eax)
08114e47 +0x07b:  movl   $0x10,(%esp)
08114e4e +0x082:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114e53 +0x087:  mov    %eax,%ebx
08114e55 +0x089:  mov    %ebx,%eax
08114e57 +0x08b:  mov    %eax,(%esp)
08114e5a +0x08e:  call   0849ac44 <_ZN15CExpDoubleEventC1Ev>  ; CExpDoubleEvent::CExpDoubleEvent()
08114e5f +0x093:  jmp    08114e76 <+0xaa>
08114e61 +0x095:  mov    %edx,%esi
08114e63 +0x097:  mov    %eax,%edi
08114e65 +0x099:  mov    %ebx,(%esp)
08114e68 +0x09c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114e6d +0x0a1:  mov    %edi,%eax
08114e6f +0x0a3:  mov    %esi,%edx
08114e71 +0x0a5:  jmp    08115965 <+0xb99>
08114e76 +0x0aa:  mov    %ebx,%eax
08114e78 +0x0ac:  mov    %eax,%edx
08114e7a +0x0ae:  mov    0x8(%ebp),%eax
08114e7d +0x0b1:  mov    %edx,0xc(%eax)
08114e80 +0x0b4:  movl   $0x10,(%esp)
08114e87 +0x0bb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114e8c +0x0c0:  mov    %eax,%ebx
08114e8e +0x0c2:  mov    %ebx,%eax
08114e90 +0x0c4:  mov    %eax,(%esp)
08114e93 +0x0c7:  call   0810ab10 <_ZN16CCoinEventPerDayC1Ev>  ; CCoinEventPerDay::CCoinEventPerDay()
08114e98 +0x0cc:  jmp    08114eaf <+0xe3>
08114e9a +0x0ce:  mov    %edx,%esi
08114e9c +0x0d0:  mov    %eax,%edi
08114e9e +0x0d2:  mov    %ebx,(%esp)
08114ea1 +0x0d5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114ea6 +0x0da:  mov    %edi,%eax
08114ea8 +0x0dc:  mov    %esi,%edx
08114eaa +0x0de:  jmp    08115965 <+0xb99>
08114eaf +0x0e3:  mov    %ebx,%eax
08114eb1 +0x0e5:  mov    %eax,%edx
08114eb3 +0x0e7:  mov    0x8(%ebp),%eax
08114eb6 +0x0ea:  mov    %edx,0x10(%eax)
08114eb9 +0x0ed:  movl   $0x10,(%esp)
08114ec0 +0x0f4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114ec5 +0x0f9:  mov    %eax,%ebx
08114ec7 +0x0fb:  mov    %ebx,%eax
08114ec9 +0x0fd:  mov    %eax,(%esp)
08114ecc +0x100:  call   0810a914 <_ZN22CCoinEventOnCharCreateC1Ev>  ; CCoinEventOnCharCreate::CCoinEventOnCharCreate()
08114ed1 +0x105:  jmp    08114ee8 <+0x11c>
08114ed3 +0x107:  mov    %edx,%esi
08114ed5 +0x109:  mov    %eax,%edi
08114ed7 +0x10b:  mov    %ebx,(%esp)
08114eda +0x10e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114edf +0x113:  mov    %edi,%eax
08114ee1 +0x115:  mov    %esi,%edx
08114ee3 +0x117:  jmp    08115965 <+0xb99>
08114ee8 +0x11c:  mov    %ebx,%eax
08114eea +0x11e:  mov    %eax,%edx
08114eec +0x120:  mov    0x8(%ebp),%eax
08114eef +0x123:  mov    %edx,0x14(%eax)
08114ef2 +0x126:  movl   $0x10,(%esp)
08114ef9 +0x12d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114efe +0x132:  mov    %eax,%ebx
08114f00 +0x134:  mov    %ebx,%eax
08114f02 +0x136:  mov    %eax,(%esp)
08114f05 +0x139:  call   0811fd64 <_ZN20CLeadingChannelEventC1Ev>  ; CLeadingChannelEvent::CLeadingChannelEvent()
08114f0a +0x13e:  jmp    08114f21 <+0x155>
08114f0c +0x140:  mov    %edx,%esi
08114f0e +0x142:  mov    %eax,%edi
08114f10 +0x144:  mov    %ebx,(%esp)
08114f13 +0x147:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114f18 +0x14c:  mov    %edi,%eax
08114f1a +0x14e:  mov    %esi,%edx
08114f1c +0x150:  jmp    08115965 <+0xb99>
08114f21 +0x155:  mov    %ebx,%eax
08114f23 +0x157:  mov    %eax,%edx
08114f25 +0x159:  mov    0x8(%ebp),%eax
08114f28 +0x15c:  mov    %edx,0x18(%eax)
08114f2b +0x15f:  movl   $0x10,(%esp)
08114f32 +0x166:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114f37 +0x16b:  mov    %eax,%ebx
08114f39 +0x16d:  mov    %ebx,%eax
08114f3b +0x16f:  mov    %eax,(%esp)
08114f3e +0x172:  call   085331d0 <_ZN19CItemDropRatioEventC1Ev>  ; CItemDropRatioEvent::CItemDropRatioEvent()
08114f43 +0x177:  jmp    08114f5a <+0x18e>
08114f45 +0x179:  mov    %edx,%esi
08114f47 +0x17b:  mov    %eax,%edi
08114f49 +0x17d:  mov    %ebx,(%esp)
08114f4c +0x180:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114f51 +0x185:  mov    %edi,%eax
08114f53 +0x187:  mov    %esi,%edx
08114f55 +0x189:  jmp    08115965 <+0xb99>
08114f5a +0x18e:  mov    %ebx,%eax
08114f5c +0x190:  mov    %eax,%edx
08114f5e +0x192:  mov    0x8(%ebp),%eax
08114f61 +0x195:  mov    %edx,0x1c(%eax)
08114f64 +0x198:  movl   $0x10,(%esp)
08114f6b +0x19f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114f70 +0x1a4:  mov    %eax,%ebx
08114f72 +0x1a6:  mov    %ebx,%eax
08114f74 +0x1a8:  mov    %eax,(%esp)
08114f77 +0x1ab:  call   082671dc <_ZN19CPCRoomBurningEventC1Ev>  ; CPCRoomBurningEvent::CPCRoomBurningEvent()
08114f7c +0x1b0:  jmp    08114f93 <+0x1c7>
08114f7e +0x1b2:  mov    %edx,%esi
08114f80 +0x1b4:  mov    %eax,%edi
08114f82 +0x1b6:  mov    %ebx,(%esp)
08114f85 +0x1b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114f8a +0x1be:  mov    %edi,%eax
08114f8c +0x1c0:  mov    %esi,%edx
08114f8e +0x1c2:  jmp    08115965 <+0xb99>
08114f93 +0x1c7:  mov    %ebx,%eax
08114f95 +0x1c9:  mov    %eax,%edx
08114f97 +0x1cb:  mov    0x8(%ebp),%eax
08114f9a +0x1ce:  mov    %edx,0x20(%eax)
08114f9d +0x1d1:  movl   $0x10,(%esp)
08114fa4 +0x1d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114fa9 +0x1dd:  mov    %eax,%ebx
08114fab +0x1df:  mov    %ebx,%eax
08114fad +0x1e1:  mov    %eax,(%esp)
08114fb0 +0x1e4:  call   0811cfa8 <_ZN14CGuildWarEventC1Ev>  ; CGuildWarEvent::CGuildWarEvent()
08114fb5 +0x1e9:  jmp    08114fcc <+0x200>
08114fb7 +0x1eb:  mov    %edx,%esi
08114fb9 +0x1ed:  mov    %eax,%edi
08114fbb +0x1ef:  mov    %ebx,(%esp)
08114fbe +0x1f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114fc3 +0x1f7:  mov    %edi,%eax
08114fc5 +0x1f9:  mov    %esi,%edx
08114fc7 +0x1fb:  jmp    08115965 <+0xb99>
08114fcc +0x200:  mov    %ebx,%eax
08114fce +0x202:  mov    %eax,%edx
08114fd0 +0x204:  mov    0x8(%ebp),%eax
08114fd3 +0x207:  mov    %edx,0x84(%eax)
08114fd9 +0x20d:  movl   $0xc,(%esp)
08114fe0 +0x214:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08114fe5 +0x219:  mov    %eax,%ebx
08114fe7 +0x21b:  mov    %ebx,%eax
08114fe9 +0x21d:  mov    %eax,(%esp)
08114fec +0x220:  call   082675c0 <_ZN19CPCRoomFatigueEventC1Ev>  ; CPCRoomFatigueEvent::CPCRoomFatigueEvent()
08114ff1 +0x225:  jmp    08115008 <+0x23c>
08114ff3 +0x227:  mov    %edx,%esi
08114ff5 +0x229:  mov    %eax,%edi
08114ff7 +0x22b:  mov    %ebx,(%esp)
08114ffa +0x22e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114fff +0x233:  mov    %edi,%eax
08115001 +0x235:  mov    %esi,%edx
08115003 +0x237:  jmp    08115965 <+0xb99>
08115008 +0x23c:  mov    %ebx,%eax
0811500a +0x23e:  mov    %eax,%edx
0811500c +0x240:  mov    0x8(%ebp),%eax
0811500f +0x243:  mov    %edx,0x28(%eax)
08115012 +0x246:  movl   $0xc,(%esp)
08115019 +0x24d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811501e +0x252:  mov    %eax,%ebx
08115020 +0x254:  mov    %ebx,%eax
08115022 +0x256:  mov    %eax,(%esp)
08115025 +0x259:  call   0826e92c <_ZN21CReformingDanjinEventC1Ev>  ; CReformingDanjinEvent::CReformingDanjinEvent()
0811502a +0x25e:  jmp    08115041 <+0x275>
0811502c +0x260:  mov    %edx,%esi
0811502e +0x262:  mov    %eax,%edi
08115030 +0x264:  mov    %ebx,(%esp)
08115033 +0x267:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115038 +0x26c:  mov    %edi,%eax
0811503a +0x26e:  mov    %esi,%edx
0811503c +0x270:  jmp    08115965 <+0xb99>
08115041 +0x275:  mov    %ebx,%eax
08115043 +0x277:  mov    %eax,%edx
08115045 +0x279:  mov    0x8(%ebp),%eax
08115048 +0x27c:  mov    %edx,0x30(%eax)
0811504b +0x27f:  movl   $0x20,(%esp)
08115052 +0x286:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115057 +0x28b:  mov    %eax,%ebx
08115059 +0x28d:  mov    %ebx,%eax
0811505b +0x28f:  mov    %eax,(%esp)
0811505e +0x292:  call   0832bdf4 <_ZN16CCoinRefillEventC1Ev>  ; CCoinRefillEvent::CCoinRefillEvent()
08115063 +0x297:  jmp    0811507a <+0x2ae>
08115065 +0x299:  mov    %edx,%esi
08115067 +0x29b:  mov    %eax,%edi
08115069 +0x29d:  mov    %ebx,(%esp)
0811506c +0x2a0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115071 +0x2a5:  mov    %edi,%eax
08115073 +0x2a7:  mov    %esi,%edx
08115075 +0x2a9:  jmp    08115965 <+0xb99>
0811507a +0x2ae:  mov    %ebx,%eax
0811507c +0x2b0:  mov    %eax,%edx
0811507e +0x2b2:  mov    0x8(%ebp),%eax
08115081 +0x2b5:  mov    %edx,0x34(%eax)
08115084 +0x2b8:  movl   $0x10,(%esp)
0811508b +0x2bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115090 +0x2c4:  mov    %eax,%ebx
08115092 +0x2c6:  mov    %ebx,%eax
08115094 +0x2c8:  mov    %eax,(%esp)
08115097 +0x2cb:  call   08109fa4 <_ZN20CBurningFatigueEventC1Ev>  ; CBurningFatigueEvent::CBurningFatigueEvent()
0811509c +0x2d0:  jmp    081150b3 <+0x2e7>
0811509e +0x2d2:  mov    %edx,%esi
081150a0 +0x2d4:  mov    %eax,%edi
081150a2 +0x2d6:  mov    %ebx,(%esp)
081150a5 +0x2d9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081150aa +0x2de:  mov    %edi,%eax
081150ac +0x2e0:  mov    %esi,%edx
081150ae +0x2e2:  jmp    08115965 <+0xb99>
081150b3 +0x2e7:  mov    %ebx,%eax
081150b5 +0x2e9:  mov    %eax,%edx
081150b7 +0x2eb:  mov    0x8(%ebp),%eax
081150ba +0x2ee:  mov    %edx,0x3c(%eax)
081150bd +0x2f1:  movl   $0xc,(%esp)
081150c4 +0x2f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081150c9 +0x2fd:  mov    %eax,%ebx
081150cb +0x2ff:  mov    %ebx,%eax
081150cd +0x301:  mov    %eax,(%esp)
081150d0 +0x304:  call   0810a720 <_ZN21CClearRewardCardEventC1Ev>  ; CClearRewardCardEvent::CClearRewardCardEvent()
081150d5 +0x309:  jmp    081150ec <+0x320>
081150d7 +0x30b:  mov    %edx,%esi
081150d9 +0x30d:  mov    %eax,%edi
081150db +0x30f:  mov    %ebx,(%esp)
081150de +0x312:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081150e3 +0x317:  mov    %edi,%eax
081150e5 +0x319:  mov    %esi,%edx
081150e7 +0x31b:  jmp    08115965 <+0xb99>
081150ec +0x320:  mov    %ebx,%eax
081150ee +0x322:  mov    %eax,%edx
081150f0 +0x324:  mov    0x8(%ebp),%eax
081150f3 +0x327:  mov    %edx,0x40(%eax)
081150f6 +0x32a:  movl   $0x10,(%esp)
081150fd +0x331:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115102 +0x336:  mov    %eax,%ebx
08115104 +0x338:  mov    %ebx,%eax
08115106 +0x33a:  mov    %eax,(%esp)
08115109 +0x33d:  call   0810a2dc <_ZN23CCeraShopBonusItemEventC1Ev>  ; CCeraShopBonusItemEvent::CCeraShopBonusItemEvent()
0811510e +0x342:  jmp    08115125 <+0x359>
08115110 +0x344:  mov    %edx,%esi
08115112 +0x346:  mov    %eax,%edi
08115114 +0x348:  mov    %ebx,(%esp)
08115117 +0x34b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811511c +0x350:  mov    %edi,%eax
0811511e +0x352:  mov    %esi,%edx
08115120 +0x354:  jmp    08115965 <+0xb99>
08115125 +0x359:  mov    %ebx,%eax
08115127 +0x35b:  mov    %eax,%edx
08115129 +0x35d:  mov    0x8(%ebp),%eax
0811512c +0x360:  mov    %edx,0x44(%eax)
0811512f +0x363:  movl   $0xc,(%esp)
08115136 +0x36a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811513b +0x36f:  mov    %eax,%ebx
0811513d +0x371:  mov    %ebx,%eax
0811513f +0x373:  mov    %eax,(%esp)
08115142 +0x376:  call   082845cc <_ZN19CTournamentPvPEventC1Ev>  ; CTournamentPvPEvent::CTournamentPvPEvent()
08115147 +0x37b:  jmp    0811515e <+0x392>
08115149 +0x37d:  mov    %edx,%esi
0811514b +0x37f:  mov    %eax,%edi
0811514d +0x381:  mov    %ebx,(%esp)
08115150 +0x384:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115155 +0x389:  mov    %edi,%eax
08115157 +0x38b:  mov    %esi,%edx
08115159 +0x38d:  jmp    08115965 <+0xb99>
0811515e +0x392:  mov    %ebx,%eax
08115160 +0x394:  mov    %eax,%edx
08115162 +0x396:  mov    0x8(%ebp),%eax
08115165 +0x399:  mov    %edx,0x48(%eax)
08115168 +0x39c:  movl   $0xc,(%esp)
0811516f +0x3a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115174 +0x3a8:  mov    %eax,%ebx
08115176 +0x3aa:  mov    %ebx,%eax
08115178 +0x3ac:  mov    %eax,(%esp)
0811517b +0x3af:  call   0811ce24 <_ZN23CGoldCardBlankItemEventC1Ev>  ; CGoldCardBlankItemEvent::CGoldCardBlankItemEvent()
08115180 +0x3b4:  jmp    08115197 <+0x3cb>
08115182 +0x3b6:  mov    %edx,%esi
08115184 +0x3b8:  mov    %eax,%edi
08115186 +0x3ba:  mov    %ebx,(%esp)
08115189 +0x3bd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811518e +0x3c2:  mov    %edi,%eax
08115190 +0x3c4:  mov    %esi,%edx
08115192 +0x3c6:  jmp    08115965 <+0xb99>
08115197 +0x3cb:  mov    %ebx,%eax
08115199 +0x3cd:  mov    %eax,%edx
0811519b +0x3cf:  mov    0x8(%ebp),%eax
0811519e +0x3d2:  mov    %edx,0x4c(%eax)
081151a1 +0x3d5:  movl   $0xc,(%esp)
081151a8 +0x3dc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081151ad +0x3e1:  mov    %eax,%ebx
081151af +0x3e3:  mov    %ebx,%eax
081151b1 +0x3e5:  mov    %eax,(%esp)
081151b4 +0x3e8:  call   0826743c <_ZN25CPcRoomCardBlankItemEventC1Ev>  ; CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent()
081151b9 +0x3ed:  jmp    081151d0 <+0x404>
081151bb +0x3ef:  mov    %edx,%esi
081151bd +0x3f1:  mov    %eax,%edi
081151bf +0x3f3:  mov    %ebx,(%esp)
081151c2 +0x3f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081151c7 +0x3fb:  mov    %edi,%eax
081151c9 +0x3fd:  mov    %esi,%edx
081151cb +0x3ff:  jmp    08115965 <+0xb99>
081151d0 +0x404:  mov    %ebx,%eax
081151d2 +0x406:  mov    %eax,%edx
081151d4 +0x408:  mov    0x8(%ebp),%eax
081151d7 +0x40b:  mov    %edx,0x74(%eax)
081151da +0x40e:  movl   $0x10,(%esp)
081151e1 +0x415:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081151e6 +0x41a:  mov    %eax,%ebx
081151e8 +0x41c:  mov    %ebx,%eax
081151ea +0x41e:  mov    %eax,(%esp)
081151ed +0x421:  call   08267990 <_ZN14CPowerWarEventC1Ev>  ; CPowerWarEvent::CPowerWarEvent()
081151f2 +0x426:  jmp    08115209 <+0x43d>
081151f4 +0x428:  mov    %edx,%esi
081151f6 +0x42a:  mov    %eax,%edi
081151f8 +0x42c:  mov    %ebx,(%esp)
081151fb +0x42f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115200 +0x434:  mov    %edi,%eax
08115202 +0x436:  mov    %esi,%edx
08115204 +0x438:  jmp    08115965 <+0xb99>
08115209 +0x43d:  mov    %ebx,%eax
0811520b +0x43f:  mov    %eax,%edx
0811520d +0x441:  mov    0x8(%ebp),%eax
08115210 +0x444:  mov    %edx,0x78(%eax)
08115213 +0x447:  movl   $0xc,(%esp)
0811521a +0x44e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811521f +0x453:  mov    %eax,%ebx
08115221 +0x455:  mov    %ebx,%eax
08115223 +0x457:  mov    %eax,(%esp)
08115226 +0x45a:  call   08116b48 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x25d>  ; global constructors keyed to CEventManager::CEventManager()+0x25d
0811522b +0x45f:  jmp    08115242 <+0x476>
0811522d +0x461:  mov    %edx,%esi
0811522f +0x463:  mov    %eax,%edi
08115231 +0x465:  mov    %ebx,(%esp)
08115234 +0x468:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115239 +0x46d:  mov    %edi,%eax
0811523b +0x46f:  mov    %esi,%edx
0811523d +0x471:  jmp    08115965 <+0xb99>
08115242 +0x476:  mov    %ebx,%eax
08115244 +0x478:  mov    %eax,%edx
08115246 +0x47a:  mov    0x8(%ebp),%eax
08115249 +0x47d:  mov    %edx,0x54(%eax)
0811524c +0x480:  movl   $0xc,(%esp)
08115253 +0x487:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115258 +0x48c:  mov    %eax,%ebx
0811525a +0x48e:  mov    %ebx,%eax
0811525c +0x490:  mov    %eax,(%esp)
0811525f +0x493:  call   082677f8 <_ZN21CPCRoomWorldDropEventC1Ev>  ; CPCRoomWorldDropEvent::CPCRoomWorldDropEvent()
08115264 +0x498:  jmp    0811527b <+0x4af>
08115266 +0x49a:  mov    %edx,%esi
08115268 +0x49c:  mov    %eax,%edi
0811526a +0x49e:  mov    %ebx,(%esp)
0811526d +0x4a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115272 +0x4a6:  mov    %edi,%eax
08115274 +0x4a8:  mov    %esi,%edx
08115276 +0x4aa:  jmp    08115965 <+0xb99>
0811527b +0x4af:  mov    %ebx,%eax
0811527d +0x4b1:  mov    %eax,%edx
0811527f +0x4b3:  mov    0x8(%ebp),%eax
08115282 +0x4b6:  mov    %edx,0x58(%eax)
08115285 +0x4b9:  movl   $0x10,(%esp)
0811528c +0x4c0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115291 +0x4c5:  mov    %eax,%ebx
08115293 +0x4c7:  mov    %ebx,%eax
08115295 +0x4c9:  mov    %eax,(%esp)
08115298 +0x4cc:  call   08116d4a <_GLOBAL__I__ZN13CEventManagerC2Ev+0x45f>  ; global constructors keyed to CEventManager::CEventManager()+0x45f
0811529d +0x4d1:  jmp    081152b4 <+0x4e8>
0811529f +0x4d3:  mov    %edx,%esi
081152a1 +0x4d5:  mov    %eax,%edi
081152a3 +0x4d7:  mov    %ebx,(%esp)
081152a6 +0x4da:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081152ab +0x4df:  mov    %edi,%eax
081152ad +0x4e1:  mov    %esi,%edx
081152af +0x4e3:  jmp    08115965 <+0xb99>
081152b4 +0x4e8:  mov    %ebx,%eax
081152b6 +0x4ea:  mov    %eax,%edx
081152b8 +0x4ec:  mov    0x8(%ebp),%eax
081152bb +0x4ef:  mov    %edx,0x60(%eax)
081152be +0x4f2:  movl   $0xc,(%esp)
081152c5 +0x4f9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081152ca +0x4fe:  mov    %eax,%ebx
081152cc +0x500:  mov    %ebx,%eax
081152ce +0x502:  mov    %eax,(%esp)
081152d1 +0x505:  call   0827f508 <_ZN17CStabToDeathEventC1Ev>  ; CStabToDeathEvent::CStabToDeathEvent()
081152d6 +0x50a:  jmp    081152ed <+0x521>
081152d8 +0x50c:  mov    %edx,%esi
081152da +0x50e:  mov    %eax,%edi
081152dc +0x510:  mov    %ebx,(%esp)
081152df +0x513:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081152e4 +0x518:  mov    %edi,%eax
081152e6 +0x51a:  mov    %esi,%edx
081152e8 +0x51c:  jmp    08115965 <+0xb99>
081152ed +0x521:  mov    %ebx,%eax
081152ef +0x523:  mov    %eax,%edx
081152f1 +0x525:  mov    0x8(%ebp),%eax
081152f4 +0x528:  mov    %edx,0x80(%eax)
081152fa +0x52e:  movl   $0x18,(%esp)
08115301 +0x535:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115306 +0x53a:  mov    %eax,%ebx
08115308 +0x53c:  mov    %ebx,%eax
0811530a +0x53e:  mov    %eax,(%esp)
0811530d +0x541:  call   08273ecc <_ZN17CSchoolMatchEventC1Ev>  ; CSchoolMatchEvent::CSchoolMatchEvent()
08115312 +0x546:  jmp    08115329 <+0x55d>
08115314 +0x548:  mov    %edx,%esi
08115316 +0x54a:  mov    %eax,%edi
08115318 +0x54c:  mov    %ebx,(%esp)
0811531b +0x54f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115320 +0x554:  mov    %edi,%eax
08115322 +0x556:  mov    %esi,%edx
08115324 +0x558:  jmp    08115965 <+0xb99>
08115329 +0x55d:  mov    %ebx,%eax
0811532b +0x55f:  mov    %eax,%edx
0811532d +0x561:  mov    0x8(%ebp),%eax
08115330 +0x564:  mov    %edx,0x24(%eax)
08115333 +0x567:  movl   $0xc,(%esp)
0811533a +0x56e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811533f +0x573:  mov    %eax,%ebx
08115341 +0x575:  mov    %ebx,%eax
08115343 +0x577:  mov    %eax,(%esp)
08115346 +0x57a:  call   08109c14 <_ZN33CAutoMarketConditionsControlEventC1Ev>  ; CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent()
0811534b +0x57f:  jmp    08115362 <+0x596>
0811534d +0x581:  mov    %edx,%esi
0811534f +0x583:  mov    %eax,%edi
08115351 +0x585:  mov    %ebx,(%esp)
08115354 +0x588:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115359 +0x58d:  mov    %edi,%eax
0811535b +0x58f:  mov    %esi,%edx
0811535d +0x591:  jmp    08115965 <+0xb99>
08115362 +0x596:  mov    %ebx,%eax
08115364 +0x598:  mov    %eax,%edx
08115366 +0x59a:  mov    0x8(%ebp),%eax
08115369 +0x59d:  mov    %edx,0x88(%eax)
0811536f +0x5a3:  movl   $0xc,(%esp)
08115376 +0x5aa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811537b +0x5af:  mov    %eax,%ebx
0811537d +0x5b1:  mov    %ebx,%eax
0811537f +0x5b3:  mov    %eax,(%esp)
08115382 +0x5b6:  call   08116dbe <_GLOBAL__I__ZN13CEventManagerC2Ev+0x4d3>  ; global constructors keyed to CEventManager::CEventManager()+0x4d3
08115387 +0x5bb:  jmp    0811539e <+0x5d2>
08115389 +0x5bd:  mov    %edx,%esi
0811538b +0x5bf:  mov    %eax,%edi
0811538d +0x5c1:  mov    %ebx,(%esp)
08115390 +0x5c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115395 +0x5c9:  mov    %edi,%eax
08115397 +0x5cb:  mov    %esi,%edx
08115399 +0x5cd:  jmp    08115965 <+0xb99>
0811539e +0x5d2:  mov    %ebx,%eax
081153a0 +0x5d4:  mov    %eax,%edx
081153a2 +0x5d6:  mov    0x8(%ebp),%eax
081153a5 +0x5d9:  mov    %edx,0x8c(%eax)
081153ab +0x5df:  movl   $0xc,(%esp)
081153b2 +0x5e6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081153b7 +0x5eb:  mov    %eax,%ebx
081153b9 +0x5ed:  mov    %ebx,%eax
081153bb +0x5ef:  mov    %eax,(%esp)
081153be +0x5f2:  call   08116ee6 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x5fb>  ; global constructors keyed to CEventManager::CEventManager()+0x5fb
081153c3 +0x5f7:  jmp    081153da <+0x60e>
081153c5 +0x5f9:  mov    %edx,%esi
081153c7 +0x5fb:  mov    %eax,%edi
081153c9 +0x5fd:  mov    %ebx,(%esp)
081153cc +0x600:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081153d1 +0x605:  mov    %edi,%eax
081153d3 +0x607:  mov    %esi,%edx
081153d5 +0x609:  jmp    08115965 <+0xb99>
081153da +0x60e:  mov    %ebx,%eax
081153dc +0x610:  mov    %eax,%edx
081153de +0x612:  mov    0x8(%ebp),%eax
081153e1 +0x615:  mov    %edx,0x90(%eax)
081153e7 +0x61b:  movl   $0xc,(%esp)
081153ee +0x622:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081153f3 +0x627:  mov    %eax,%ebx
081153f5 +0x629:  mov    %ebx,%eax
081153f7 +0x62b:  mov    %eax,(%esp)
081153fa +0x62e:  call   081b9b8c <_ZN29CNoNeedGoldOnGuildCreateEventC1Ev>  ; CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent()
081153ff +0x633:  jmp    08115416 <+0x64a>
08115401 +0x635:  mov    %edx,%esi
08115403 +0x637:  mov    %eax,%edi
08115405 +0x639:  mov    %ebx,(%esp)
08115408 +0x63c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811540d +0x641:  mov    %edi,%eax
0811540f +0x643:  mov    %esi,%edx
08115411 +0x645:  jmp    08115965 <+0xb99>
08115416 +0x64a:  mov    %ebx,%eax
08115418 +0x64c:  mov    %eax,%edx
0811541a +0x64e:  mov    0x8(%ebp),%eax
0811541d +0x651:  mov    %edx,0x98(%eax)
08115423 +0x657:  movl   $0x10,(%esp)
0811542a +0x65e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811542f +0x663:  mov    %eax,%ebx
08115431 +0x665:  mov    %ebx,%eax
08115433 +0x667:  mov    %eax,(%esp)
08115436 +0x66a:  call   081170e8 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x7fd>  ; global constructors keyed to CEventManager::CEventManager()+0x7fd
0811543b +0x66f:  jmp    08115452 <+0x686>
0811543d +0x671:  mov    %edx,%esi
0811543f +0x673:  mov    %eax,%edi
08115441 +0x675:  mov    %ebx,(%esp)
08115444 +0x678:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115449 +0x67d:  mov    %edi,%eax
0811544b +0x67f:  mov    %esi,%edx
0811544d +0x681:  jmp    08115965 <+0xb99>
08115452 +0x686:  mov    %ebx,%eax
08115454 +0x688:  mov    %eax,%edx
08115456 +0x68a:  mov    0x8(%ebp),%eax
08115459 +0x68d:  mov    %edx,0x9c(%eax)
0811545f +0x693:  movl   $0xc,(%esp)
08115466 +0x69a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811546b +0x69f:  mov    %eax,%ebx
0811546d +0x6a1:  mov    %ebx,%eax
0811546f +0x6a3:  mov    %eax,(%esp)
08115472 +0x6a6:  call   081b9d5c <_ZN21CNotApplyBalkeunEventC1Ev>  ; CNotApplyBalkeunEvent::CNotApplyBalkeunEvent()
08115477 +0x6ab:  jmp    0811548e <+0x6c2>
08115479 +0x6ad:  mov    %edx,%esi
0811547b +0x6af:  mov    %eax,%edi
0811547d +0x6b1:  mov    %ebx,(%esp)
08115480 +0x6b4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115485 +0x6b9:  mov    %edi,%eax
08115487 +0x6bb:  mov    %esi,%edx
08115489 +0x6bd:  jmp    08115965 <+0xb99>
0811548e +0x6c2:  mov    %ebx,%eax
08115490 +0x6c4:  mov    %eax,%edx
08115492 +0x6c6:  mov    0x8(%ebp),%eax
08115495 +0x6c9:  mov    %edx,0xa0(%eax)
0811549b +0x6cf:  movl   $0xc,(%esp)
081154a2 +0x6d6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081154a7 +0x6db:  mov    %eax,%ebx
081154a9 +0x6dd:  mov    %ebx,%eax
081154ab +0x6df:  mov    %eax,(%esp)
081154ae +0x6e2:  call   0810a4c8 <_ZN18CCharacterDayEventC1Ev>  ; CCharacterDayEvent::CCharacterDayEvent()
081154b3 +0x6e7:  jmp    081154ca <+0x6fe>
081154b5 +0x6e9:  mov    %edx,%esi
081154b7 +0x6eb:  mov    %eax,%edi
081154b9 +0x6ed:  mov    %ebx,(%esp)
081154bc +0x6f0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081154c1 +0x6f5:  mov    %edi,%eax
081154c3 +0x6f7:  mov    %esi,%edx
081154c5 +0x6f9:  jmp    08115965 <+0xb99>
081154ca +0x6fe:  mov    %ebx,%eax
081154cc +0x700:  mov    %eax,%edx
081154ce +0x702:  mov    0x8(%ebp),%eax
081154d1 +0x705:  mov    %edx,0xa4(%eax)
081154d7 +0x70b:  movl   $0x10,(%esp)
081154de +0x712:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081154e3 +0x717:  mov    %eax,%ebx
081154e5 +0x719:  mov    %ebx,%eax
081154e7 +0x71b:  mov    %eax,(%esp)
081154ea +0x71e:  call   08273c44 <_ZN28CRestrictCharacCreationEventC1Ev>  ; CRestrictCharacCreationEvent::CRestrictCharacCreationEvent()
081154ef +0x723:  jmp    08115506 <+0x73a>
081154f1 +0x725:  mov    %edx,%esi
081154f3 +0x727:  mov    %eax,%edi
081154f5 +0x729:  mov    %ebx,(%esp)
081154f8 +0x72c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081154fd +0x731:  mov    %edi,%eax
081154ff +0x733:  mov    %esi,%edx
08115501 +0x735:  jmp    08115965 <+0xb99>
08115506 +0x73a:  mov    %ebx,%eax
08115508 +0x73c:  mov    %eax,%edx
0811550a +0x73e:  mov    0x8(%ebp),%eax
0811550d +0x741:  mov    %edx,0xc4(%eax)
08115513 +0x747:  movl   $0xc,(%esp)
0811551a +0x74e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811551f +0x753:  mov    %eax,%ebx
08115521 +0x755:  mov    %ebx,%eax
08115523 +0x757:  mov    %eax,(%esp)
08115526 +0x75a:  call   0811715c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x871>  ; global constructors keyed to CEventManager::CEventManager()+0x871
0811552b +0x75f:  jmp    08115542 <+0x776>
0811552d +0x761:  mov    %edx,%esi
0811552f +0x763:  mov    %eax,%edi
08115531 +0x765:  mov    %ebx,(%esp)
08115534 +0x768:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115539 +0x76d:  mov    %edi,%eax
0811553b +0x76f:  mov    %esi,%edx
0811553d +0x771:  jmp    08115965 <+0xb99>
08115542 +0x776:  mov    %ebx,%eax
08115544 +0x778:  mov    %eax,%edx
08115546 +0x77a:  mov    0x8(%ebp),%eax
08115549 +0x77d:  mov    %edx,0xc8(%eax)
0811554f +0x783:  movl   $0x60,(%esp)
08115556 +0x78a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811555b +0x78f:  mov    %eax,%ebx
0811555d +0x791:  mov    %ebx,%eax
0811555f +0x793:  mov    %eax,(%esp)
08115562 +0x796:  call   081bb826 <_ZN12COnTimeEventC1Ev>  ; COnTimeEvent::COnTimeEvent()
08115567 +0x79b:  jmp    0811557e <+0x7b2>
08115569 +0x79d:  mov    %edx,%esi
0811556b +0x79f:  mov    %eax,%edi
0811556d +0x7a1:  mov    %ebx,(%esp)
08115570 +0x7a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115575 +0x7a9:  mov    %edi,%eax
08115577 +0x7ab:  mov    %esi,%edx
08115579 +0x7ad:  jmp    08115965 <+0xb99>
0811557e +0x7b2:  mov    %ebx,%eax
08115580 +0x7b4:  mov    %eax,%edx
08115582 +0x7b6:  mov    0x8(%ebp),%eax
08115585 +0x7b9:  mov    %edx,0xcc(%eax)
0811558b +0x7bf:  movl   $0xc,(%esp)
08115592 +0x7c6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115597 +0x7cb:  mov    %eax,%ebx
08115599 +0x7cd:  mov    %ebx,%eax
0811559b +0x7cf:  mov    %eax,(%esp)
0811559e +0x7d2:  call   08109dbc <_ZN22CBreakAwayPreventEventC1Ev>  ; CBreakAwayPreventEvent::CBreakAwayPreventEvent()
081155a3 +0x7d7:  jmp    081155ba <+0x7ee>
081155a5 +0x7d9:  mov    %edx,%esi
081155a7 +0x7db:  mov    %eax,%edi
081155a9 +0x7dd:  mov    %ebx,(%esp)
081155ac +0x7e0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081155b1 +0x7e5:  mov    %edi,%eax
081155b3 +0x7e7:  mov    %esi,%edx
081155b5 +0x7e9:  jmp    08115965 <+0xb99>
081155ba +0x7ee:  mov    %ebx,%eax
081155bc +0x7f0:  mov    %eax,%edx
081155be +0x7f2:  mov    0x8(%ebp),%eax
081155c1 +0x7f5:  mov    %edx,0xd0(%eax)
081155c7 +0x7fb:  movl   $0x10,(%esp)
081155ce +0x802:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081155d3 +0x807:  mov    %eax,%ebx
081155d5 +0x809:  mov    %ebx,%eax
081155d7 +0x80b:  mov    %eax,(%esp)
081155da +0x80e:  call   0826891c <_ZN24CPowerWarVictoriousEventC1Ev>  ; CPowerWarVictoriousEvent::CPowerWarVictoriousEvent()
081155df +0x813:  jmp    081155f6 <+0x82a>
081155e1 +0x815:  mov    %edx,%esi
081155e3 +0x817:  mov    %eax,%edi
081155e5 +0x819:  mov    %ebx,(%esp)
081155e8 +0x81c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081155ed +0x821:  mov    %edi,%eax
081155ef +0x823:  mov    %esi,%edx
081155f1 +0x825:  jmp    08115965 <+0xb99>
081155f6 +0x82a:  mov    %ebx,%eax
081155f8 +0x82c:  mov    %eax,%edx
081155fa +0x82e:  mov    0x8(%ebp),%eax
081155fd +0x831:  mov    %edx,0xd4(%eax)
08115603 +0x837:  movl   $0xc,(%esp)
0811560a +0x83e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811560f +0x843:  mov    %eax,%ebx
08115611 +0x845:  mov    %ebx,%eax
08115613 +0x847:  mov    %eax,(%esp)
08115616 +0x84a:  call   081172c2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x9d7>  ; global constructors keyed to CEventManager::CEventManager()+0x9d7
0811561b +0x84f:  jmp    08115632 <+0x866>
0811561d +0x851:  mov    %edx,%esi
0811561f +0x853:  mov    %eax,%edi
08115621 +0x855:  mov    %ebx,(%esp)
08115624 +0x858:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115629 +0x85d:  mov    %edi,%eax
0811562b +0x85f:  mov    %esi,%edx
0811562d +0x861:  jmp    08115965 <+0xb99>
08115632 +0x866:  mov    %ebx,%eax
08115634 +0x868:  mov    %eax,%edx
08115636 +0x86a:  mov    0x8(%ebp),%eax
08115639 +0x86d:  mov    %edx,0xe8(%eax)
0811563f +0x873:  movl   $0xc,(%esp)
08115646 +0x87a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811564b +0x87f:  mov    %eax,%ebx
0811564d +0x881:  mov    %ebx,%eax
0811564f +0x883:  mov    %eax,(%esp)
08115652 +0x886:  call   081173ea <_GLOBAL__I__ZN13CEventManagerC2Ev+0xaff>  ; global constructors keyed to CEventManager::CEventManager()+0xaff
08115657 +0x88b:  jmp    0811566e <+0x8a2>
08115659 +0x88d:  mov    %edx,%esi
0811565b +0x88f:  mov    %eax,%edi
0811565d +0x891:  mov    %ebx,(%esp)
08115660 +0x894:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115665 +0x899:  mov    %edi,%eax
08115667 +0x89b:  mov    %esi,%edx
08115669 +0x89d:  jmp    08115965 <+0xb99>
0811566e +0x8a2:  mov    %ebx,%eax
08115670 +0x8a4:  mov    %eax,%edx
08115672 +0x8a6:  mov    0x8(%ebp),%eax
08115675 +0x8a9:  mov    %edx,0x158(%eax)
0811567b +0x8af:  movl   $0xc,(%esp)
08115682 +0x8b6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115687 +0x8bb:  mov    %eax,%ebx
08115689 +0x8bd:  mov    %ebx,%eax
0811568b +0x8bf:  mov    %eax,(%esp)
0811568e +0x8c2:  call   08117550 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xc65>  ; global constructors keyed to CEventManager::CEventManager()+0xc65
08115693 +0x8c7:  jmp    081156aa <+0x8de>
08115695 +0x8c9:  mov    %edx,%esi
08115697 +0x8cb:  mov    %eax,%edi
08115699 +0x8cd:  mov    %ebx,(%esp)
0811569c +0x8d0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081156a1 +0x8d5:  mov    %edi,%eax
081156a3 +0x8d7:  mov    %esi,%edx
081156a5 +0x8d9:  jmp    08115965 <+0xb99>
081156aa +0x8de:  mov    %ebx,%eax
081156ac +0x8e0:  mov    %eax,%edx
081156ae +0x8e2:  mov    0x8(%ebp),%eax
081156b1 +0x8e5:  mov    %edx,0x15c(%eax)
081156b7 +0x8eb:  movl   $0xc,(%esp)
081156be +0x8f2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081156c3 +0x8f7:  mov    %eax,%ebx
081156c5 +0x8f9:  mov    %ebx,%eax
081156c7 +0x8fb:  mov    %eax,(%esp)
081156ca +0x8fe:  call   08184970 <_ZN15CConditionEventC1Ev>  ; CConditionEvent::CConditionEvent()
081156cf +0x903:  jmp    081156e6 <+0x91a>
081156d1 +0x905:  mov    %edx,%esi
081156d3 +0x907:  mov    %eax,%edi
081156d5 +0x909:  mov    %ebx,(%esp)
081156d8 +0x90c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081156dd +0x911:  mov    %edi,%eax
081156df +0x913:  mov    %esi,%edx
081156e1 +0x915:  jmp    08115965 <+0xb99>
081156e6 +0x91a:  mov    %ebx,%eax
081156e8 +0x91c:  mov    %eax,%edx
081156ea +0x91e:  mov    0x8(%ebp),%eax
081156ed +0x921:  mov    %edx,0x1c4(%eax)
081156f3 +0x927:  movl   $0xc,(%esp)
081156fa +0x92e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081156ff +0x933:  mov    %eax,%ebx
08115701 +0x935:  mov    %ebx,%eax
08115703 +0x937:  mov    %eax,(%esp)
08115706 +0x93a:  call   08117678 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xd8d>  ; global constructors keyed to CEventManager::CEventManager()+0xd8d
0811570b +0x93f:  jmp    08115722 <+0x956>
0811570d +0x941:  mov    %edx,%esi
0811570f +0x943:  mov    %eax,%edi
08115711 +0x945:  mov    %ebx,(%esp)
08115714 +0x948:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115719 +0x94d:  mov    %edi,%eax
0811571b +0x94f:  mov    %esi,%edx
0811571d +0x951:  jmp    08115965 <+0xb99>
08115722 +0x956:  mov    %ebx,%eax
08115724 +0x958:  mov    %eax,%edx
08115726 +0x95a:  mov    0x8(%ebp),%eax
08115729 +0x95d:  mov    %edx,0x16c(%eax)
0811572f +0x963:  movl   $0xc,(%esp)
08115736 +0x96a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811573b +0x96f:  mov    %eax,%ebx
0811573d +0x971:  mov    %ebx,%eax
0811573f +0x973:  mov    %eax,(%esp)
08115742 +0x976:  call   080dc470 <_ZN22BlueMarbleDungeonEventC1Ev>  ; BlueMarbleDungeonEvent::BlueMarbleDungeonEvent()
08115747 +0x97b:  jmp    0811575e <+0x992>
08115749 +0x97d:  mov    %edx,%esi
0811574b +0x97f:  mov    %eax,%edi
0811574d +0x981:  mov    %ebx,(%esp)
08115750 +0x984:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115755 +0x989:  mov    %edi,%eax
08115757 +0x98b:  mov    %esi,%edx
08115759 +0x98d:  jmp    08115965 <+0xb99>
0811575e +0x992:  mov    %ebx,%eax
08115760 +0x994:  mov    %eax,%edx
08115762 +0x996:  mov    0x8(%ebp),%eax
08115765 +0x999:  mov    %edx,0x17c(%eax)
0811576b +0x99f:  movl   $0xc,(%esp)
08115772 +0x9a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115777 +0x9ab:  mov    %eax,%ebx
08115779 +0x9ad:  mov    %ebx,%eax
0811577b +0x9af:  mov    %eax,(%esp)
0811577e +0x9b2:  call   081177a0 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xeb5>  ; global constructors keyed to CEventManager::CEventManager()+0xeb5
08115783 +0x9b7:  jmp    0811579a <+0x9ce>
08115785 +0x9b9:  mov    %edx,%esi
08115787 +0x9bb:  mov    %eax,%edi
08115789 +0x9bd:  mov    %ebx,(%esp)
0811578c +0x9c0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115791 +0x9c5:  mov    %edi,%eax
08115793 +0x9c7:  mov    %esi,%edx
08115795 +0x9c9:  jmp    08115965 <+0xb99>
0811579a +0x9ce:  mov    %ebx,%eax
0811579c +0x9d0:  mov    %eax,%edx
0811579e +0x9d2:  mov    0x8(%ebp),%eax
081157a1 +0x9d5:  mov    %edx,0x198(%eax)
081157a7 +0x9db:  movl   $0xc,(%esp)
081157ae +0x9e2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081157b3 +0x9e7:  mov    %eax,%ebx
081157b5 +0x9e9:  mov    %ebx,%eax
081157b7 +0x9eb:  mov    %eax,(%esp)
081157ba +0x9ee:  call   08116b2c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x241>  ; global constructors keyed to CEventManager::CEventManager()+0x241
081157bf +0x9f3:  jmp    081157d6 <+0xa0a>
081157c1 +0x9f5:  mov    %edx,%esi
081157c3 +0x9f7:  mov    %eax,%edi
081157c5 +0x9f9:  mov    %ebx,(%esp)
081157c8 +0x9fc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081157cd +0xa01:  mov    %edi,%eax
081157cf +0xa03:  mov    %esi,%edx
081157d1 +0xa05:  jmp    08115965 <+0xb99>
081157d6 +0xa0a:  mov    %ebx,%eax
081157d8 +0xa0c:  mov    %eax,%edx
081157da +0xa0e:  mov    0x8(%ebp),%eax
081157dd +0xa11:  mov    %edx,0x1dc(%eax)
081157e3 +0xa17:  movl   $0x14,(%esp)
081157ea +0xa1e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081157ef +0xa23:  mov    %eax,%ebx
081157f1 +0xa25:  mov    %ebx,%eax
081157f3 +0xa27:  mov    %eax,(%esp)
081157f6 +0xa2a:  call   081a0ea0 <_ZN17CAradRyosikaEventC1Ev>  ; CAradRyosikaEvent::CAradRyosikaEvent()
081157fb +0xa2f:  jmp    08115812 <+0xa46>
081157fd +0xa31:  mov    %edx,%esi
081157ff +0xa33:  mov    %eax,%edi
08115801 +0xa35:  mov    %ebx,(%esp)
08115804 +0xa38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115809 +0xa3d:  mov    %edi,%eax
0811580b +0xa3f:  mov    %esi,%edx
0811580d +0xa41:  jmp    08115965 <+0xb99>
08115812 +0xa46:  mov    %ebx,%eax
08115814 +0xa48:  mov    %eax,%edx
08115816 +0xa4a:  mov    0x8(%ebp),%eax
08115819 +0xa4d:  mov    %edx,0x1d0(%eax)
0811581f +0xa53:  movl   $0xc,(%esp)
08115826 +0xa5a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811582b +0xa5f:  mov    %eax,%ebx
0811582d +0xa61:  mov    %ebx,%eax
0811582f +0xa63:  mov    %eax,(%esp)
08115832 +0xa66:  call   0819e738 <_ZN16Arad_MomijiEventC1Ev>  ; Arad_MomijiEvent::Arad_MomijiEvent()
08115837 +0xa6b:  jmp    0811584e <+0xa82>
08115839 +0xa6d:  mov    %edx,%esi
0811583b +0xa6f:  mov    %eax,%edi
0811583d +0xa71:  mov    %ebx,(%esp)
08115840 +0xa74:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115845 +0xa79:  mov    %edi,%eax
08115847 +0xa7b:  mov    %esi,%edx
08115849 +0xa7d:  jmp    08115965 <+0xb99>
0811584e +0xa82:  mov    %ebx,%eax
08115850 +0xa84:  mov    %eax,%edx
08115852 +0xa86:  mov    0x8(%ebp),%eax
08115855 +0xa89:  mov    %edx,0x26c(%eax)
0811585b +0xa8f:  movl   $0xc,(%esp)
08115862 +0xa96:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115867 +0xa9b:  mov    %eax,%ebx
08115869 +0xa9d:  mov    %ebx,%eax
0811586b +0xa9f:  mov    %eax,(%esp)
0811586e +0xaa2:  call   081169f8 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x10d>  ; global constructors keyed to CEventManager::CEventManager()+0x10d
08115873 +0xaa7:  jmp    0811588a <+0xabe>
08115875 +0xaa9:  mov    %edx,%esi
08115877 +0xaab:  mov    %eax,%edi
08115879 +0xaad:  mov    %ebx,(%esp)
0811587c +0xab0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115881 +0xab5:  mov    %edi,%eax
08115883 +0xab7:  mov    %esi,%edx
08115885 +0xab9:  jmp    08115965 <+0xb99>
0811588a +0xabe:  mov    %ebx,%eax
0811588c +0xac0:  mov    %eax,%edx
0811588e +0xac2:  mov    0x8(%ebp),%eax
08115891 +0xac5:  mov    %edx,0x278(%eax)
08115897 +0xacb:  movl   $0x14,(%esp)
0811589e +0xad2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081158a3 +0xad7:  mov    %eax,%ebx
081158a5 +0xad9:  mov    %ebx,%eax
081158a7 +0xadb:  mov    %eax,(%esp)
081158aa +0xade:  call   0816c066 <_ZN14CEventStayTimeC1Ev>  ; CEventStayTime::CEventStayTime()
081158af +0xae3:  jmp    081158c6 <+0xafa>
081158b1 +0xae5:  mov    %edx,%esi
081158b3 +0xae7:  mov    %eax,%edi
081158b5 +0xae9:  mov    %ebx,(%esp)
081158b8 +0xaec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081158bd +0xaf1:  mov    %edi,%eax
081158bf +0xaf3:  mov    %esi,%edx
081158c1 +0xaf5:  jmp    08115965 <+0xb99>
081158c6 +0xafa:  mov    %ebx,%eax
081158c8 +0xafc:  mov    %eax,%edx
081158ca +0xafe:  mov    0x8(%ebp),%eax
081158cd +0xb01:  mov    %edx,0x27c(%eax)
081158d3 +0xb07:  movl   $0x18,(%esp)
081158da +0xb0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081158df +0xb13:  mov    %eax,%ebx
081158e1 +0xb15:  mov    %ebx,%eax
081158e3 +0xb17:  mov    %eax,(%esp)
081158e6 +0xb1a:  call   08163aa4 <_ZN15CEventCreateDnfC1Ev>  ; CEventCreateDnf::CEventCreateDnf()
081158eb +0xb1f:  jmp    081158ff <+0xb33>
081158ed +0xb21:  mov    %edx,%esi
081158ef +0xb23:  mov    %eax,%edi
081158f1 +0xb25:  mov    %ebx,(%esp)
081158f4 +0xb28:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081158f9 +0xb2d:  mov    %edi,%eax
081158fb +0xb2f:  mov    %esi,%edx
081158fd +0xb31:  jmp    08115965 <+0xb99>
081158ff +0xb33:  mov    %ebx,%eax
08115901 +0xb35:  mov    %eax,%edx
08115903 +0xb37:  mov    0x8(%ebp),%eax
08115906 +0xb3a:  mov    %edx,0x280(%eax)
0811590c +0xb40:  movl   $0xc,(%esp)
08115913 +0xb47:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08115918 +0xb4c:  mov    %eax,%ebx
0811591a +0xb4e:  mov    %ebx,%eax
0811591c +0xb50:  mov    %eax,(%esp)
0811591f +0xb53:  call   081649b0 <_ZN14EventGiveMeBoxC1Ev>  ; EventGiveMeBox::EventGiveMeBox()
08115924 +0xb58:  jmp    08115938 <+0xb6c>
08115926 +0xb5a:  mov    %edx,%esi
08115928 +0xb5c:  mov    %eax,%edi
0811592a +0xb5e:  mov    %ebx,(%esp)
0811592d +0xb61:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08115932 +0xb66:  mov    %edi,%eax
08115934 +0xb68:  mov    %esi,%edx
08115936 +0xb6a:  jmp    08115965 <+0xb99>
08115938 +0xb6c:  mov    %ebx,%eax
0811593a +0xb6e:  mov    %eax,%edx
0811593c +0xb70:  mov    0x8(%ebp),%eax
0811593f +0xb73:  mov    %edx,0x294(%eax)
08115945 +0xb79:  mov    0x8(%ebp),%eax
08115948 +0xb7c:  mov    %eax,(%esp)
0811594b +0xb7f:  call   081159b6 <_ZN13CEventManager15LoadEventFromDBEv>  ; CEventManager::LoadEventFromDB()
08115950 +0xb84:  xor    $0x1,%eax
08115953 +0xb87:  test   %al,%al
08115955 +0xb89:  je     0811595e <+0xb92>
08115957 +0xb8b:  mov    $0x0,%ebx
0811595c +0xb90:  jmp    08115977 <+0xbab>
0811595e +0xb92:  mov    $0x1,%ebx
08115963 +0xb97:  jmp    08115977 <+0xbab>
08115965 +0xb99:  mov    %eax,(%esp)
08115968 +0xb9c:  call   08725ce0 <__cxa_begin_catch>
0811596d +0xba1:  mov    $0x0,%ebx
08115972 +0xba6:  call   08725c30 <__cxa_end_catch>
08115977 +0xbab:  mov    %ebx,%eax
08115979 +0xbad:  add    $0x1c,%esp
0811597c +0xbb0:  pop    %ebx
0811597d +0xbb1:  pop    %esi
0811597e +0xbb2:  pop    %edi
0811597f +0xbb3:  pop    %ebp
08115980 +0xbb4:  ret
08115981 +0xbb5:  nop
```

## 反编译 C

```c
// CEventManager::InitEventManager @ 0x8114dcc

/* CEventManager::InitEventManager() */

bool __thiscall CEventManager::InitEventManager(CEventManager *this)

{
  char cVar1;
  CUnlimitFatigueEvent *this_00;
  CMaxFatigueFactorEvent *this_01;
  CExpDoubleEvent *this_02;
  CCoinEventPerDay *this_03;
  CCoinEventOnCharCreate *this_04;
  CLeadingChannelEvent *this_05;
  CItemDropRatioEvent *this_06;
  CPCRoomBurningEvent *this_07;
  CGuildWarEvent *this_08;
  CPCRoomFatigueEvent *this_09;
  CReformingDanjinEvent *this_10;
  CCoinRefillEvent *this_11;
  CBurningFatigueEvent *this_12;
  CClearRewardCardEvent *this_13;
  CCeraShopBonusItemEvent *this_14;
  CTournamentPvPEvent *this_15;
  CGoldCardBlankItemEvent *this_16;
  CPcRoomCardBlankItemEvent *this_17;
  CPowerWarEvent *this_18;
  CCollectArchieveEventLog *this_19;
  CPCRoomWorldDropEvent *this_20;
  CPartyExpBonusEvent *this_21;
  CStabToDeathEvent *this_22;
  CSchoolMatchEvent *this_23;
  CAutoMarketConditionsControlEvent *this_24;
  CVendingMachineBonusEvent *this_25;
  CBurnigGoldMonsterEvent *this_26;
  CNoNeedGoldOnGuildCreateEvent *this_27;
  CDeathTowerWinPointEvent *this_28;
  CNotApplyBalkeunEvent *this_29;
  CCharacterDayEvent *this_30;
  CRestrictCharacCreationEvent *this_31;
  CReduceUpgradeItemPay *this_32;
  COnTimeEvent *this_33;
  CBreakAwayPreventEvent *this_34;
  CPowerWarVictoriousEvent *this_35;
  CSecretShopEvent *this_36;
  CFatigueAttendance *this_37;
  CWeekendBonusEvent *this_38;
  CConditionEvent *this_39;
  CUXGameLogEvent *this_40;
  BlueMarbleDungeonEvent *this_41;
  CStopOverlabExpEvent *this_42;
  CEventAdvanceAltarOpen *this_43;
  CAradRyosikaEvent *this_44;
  Arad_MomijiEvent *this_45;
  LevelupSupportEvent *this_46;
  CEventStayTime *this_47;
  CEventCreateDnf *this_48;
  EventGiveMeBox *this_49;
  
                    /* try { // try from 08114ddc to 08114de0 has its CatchHandler @ 08115965 */
  this_00 = operator_new(0xc);
                    /* try { // try from 08114de8 to 08114dec has its CatchHandler @ 08114def */
  CUnlimitFatigueEvent::CUnlimitFatigueEvent(this_00);
  *(CUnlimitFatigueEvent **)(this + 4) = this_00;
                    /* try { // try from 08114e15 to 08114e19 has its CatchHandler @ 08115965 */
  this_01 = operator_new(0x10);
                    /* try { // try from 08114e21 to 08114e25 has its CatchHandler @ 08114e28 */
  CMaxFatigueFactorEvent::CMaxFatigueFactorEvent(this_01);
  *(CMaxFatigueFactorEvent **)(this + 8) = this_01;
                    /* try { // try from 08114e4e to 08114e52 has its CatchHandler @ 08115965 */
  this_02 = operator_new(0x10);
                    /* try { // try from 08114e5a to 08114e5e has its CatchHandler @ 08114e61 */
  CExpDoubleEvent::CExpDoubleEvent(this_02);
  *(CExpDoubleEvent **)(this + 0xc) = this_02;
                    /* try { // try from 08114e87 to 08114e8b has its CatchHandler @ 08115965 */
  this_03 = operator_new(0x10);
                    /* try { // try from 08114e93 to 08114e97 has its CatchHandler @ 08114e9a */
  CCoinEventPerDay::CCoinEventPerDay(this_03);
  *(CCoinEventPerDay **)(this + 0x10) = this_03;
                    /* try { // try from 08114ec0 to 08114ec4 has its CatchHandler @ 08115965 */
  this_04 = operator_new(0x10);
                    /* try { // try from 08114ecc to 08114ed0 has its CatchHandler @ 08114ed3 */
  CCoinEventOnCharCreate::CCoinEventOnCharCreate(this_04);
  *(CCoinEventOnCharCreate **)(this + 0x14) = this_04;
                    /* try { // try from 08114ef9 to 08114efd has its CatchHandler @ 08115965 */
  this_05 = operator_new(0x10);
                    /* try { // try from 08114f05 to 08114f09 has its CatchHandler @ 08114f0c */
  CLeadingChannelEvent::CLeadingChannelEvent(this_05);
  *(CLeadingChannelEvent **)(this + 0x18) = this_05;
                    /* try { // try from 08114f32 to 08114f36 has its CatchHandler @ 08115965 */
  this_06 = operator_new(0x10);
                    /* try { // try from 08114f3e to 08114f42 has its CatchHandler @ 08114f45 */
  CItemDropRatioEvent::CItemDropRatioEvent(this_06);
  *(CItemDropRatioEvent **)(this + 0x1c) = this_06;
                    /* try { // try from 08114f6b to 08114f6f has its CatchHandler @ 08115965 */
  this_07 = operator_new(0x10);
                    /* try { // try from 08114f77 to 08114f7b has its CatchHandler @ 08114f7e */
  CPCRoomBurningEvent::CPCRoomBurningEvent(this_07);
  *(CPCRoomBurningEvent **)(this + 0x20) = this_07;
                    /* try { // try from 08114fa4 to 08114fa8 has its CatchHandler @ 08115965 */
  this_08 = operator_new(0x10);
                    /* try { // try from 08114fb0 to 08114fb4 has its CatchHandler @ 08114fb7 */
  CGuildWarEvent::CGuildWarEvent(this_08);
  *(CGuildWarEvent **)(this + 0x84) = this_08;
                    /* try { // try from 08114fe0 to 08114fe4 has its CatchHandler @ 08115965 */
  this_09 = operator_new(0xc);
                    /* try { // try from 08114fec to 08114ff0 has its CatchHandler @ 08114ff3 */
  CPCRoomFatigueEvent::CPCRoomFatigueEvent(this_09);
  *(CPCRoomFatigueEvent **)(this + 0x28) = this_09;
                    /* try { // try from 08115019 to 0811501d has its CatchHandler @ 08115965 */
  this_10 = operator_new(0xc);
                    /* try { // try from 08115025 to 08115029 has its CatchHandler @ 0811502c */
  CReformingDanjinEvent::CReformingDanjinEvent(this_10);
  *(CReformingDanjinEvent **)(this + 0x30) = this_10;
                    /* try { // try from 08115052 to 08115056 has its CatchHandler @ 08115965 */
  this_11 = operator_new(0x20);
                    /* try { // try from 0811505e to 08115062 has its CatchHandler @ 08115065 */
  CCoinRefillEvent::CCoinRefillEvent(this_11);
  *(CCoinRefillEvent **)(this + 0x34) = this_11;
                    /* try { // try from 0811508b to 0811508f has its CatchHandler @ 08115965 */
  this_12 = operator_new(0x10);
                    /* try { // try from 08115097 to 0811509b has its CatchHandler @ 0811509e */
  CBurningFatigueEvent::CBurningFatigueEvent(this_12);
  *(CBurningFatigueEvent **)(this + 0x3c) = this_12;
                    /* try { // try from 081150c4 to 081150c8 has its CatchHandler @ 08115965 */
  this_13 = operator_new(0xc);
                    /* try { // try from 081150d0 to 081150d4 has its CatchHandler @ 081150d7 */
  CClearRewardCardEvent::CClearRewardCardEvent(this_13);
  *(CClearRewardCardEvent **)(this + 0x40) = this_13;
                    /* try { // try from 081150fd to 08115101 has its CatchHandler @ 08115965 */
  this_14 = operator_new(0x10);
                    /* try { // try from 08115109 to 0811510d has its CatchHandler @ 08115110 */
  CCeraShopBonusItemEvent::CCeraShopBonusItemEvent(this_14);
  *(CCeraShopBonusItemEvent **)(this + 0x44) = this_14;
                    /* try { // try from 08115136 to 0811513a has its CatchHandler @ 08115965 */
  this_15 = operator_new(0xc);
                    /* try { // try from 08115142 to 08115146 has its CatchHandler @ 08115149 */
  CTournamentPvPEvent::CTournamentPvPEvent(this_15);
  *(CTournamentPvPEvent **)(this + 0x48) = this_15;
                    /* try { // try from 0811516f to 08115173 has its CatchHandler @ 08115965 */
  this_16 = operator_new(0xc);
                    /* try { // try from 0811517b to 0811517f has its CatchHandler @ 08115182 */
  CGoldCardBlankItemEvent::CGoldCardBlankItemEvent(this_16);
  *(CGoldCardBlankItemEvent **)(this + 0x4c) = this_16;
                    /* try { // try from 081151a8 to 081151ac has its CatchHandler @ 08115965 */
  this_17 = operator_new(0xc);
                    /* try { // try from 081151b4 to 081151b8 has its CatchHandler @ 081151bb */
  CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent(this_17);
  *(CPcRoomCardBlankItemEvent **)(this + 0x74) = this_17;
                    /* try { // try from 081151e1 to 081151e5 has its CatchHandler @ 08115965 */
  this_18 = operator_new(0x10);
                    /* try { // try from 081151ed to 081151f1 has its CatchHandler @ 081151f4 */
  CPowerWarEvent::CPowerWarEvent(this_18);
  *(CPowerWarEvent **)(this + 0x78) = this_18;
                    /* try { // try from 0811521a to 0811521e has its CatchHandler @ 08115965 */
  this_19 = operator_new(0xc);
                    /* try { // try from 08115226 to 0811522a has its CatchHandler @ 0811522d */
  CCollectArchieveEventLog::CCollectArchieveEventLog(this_19);
  *(CCollectArchieveEventLog **)(this + 0x54) = this_19;
                    /* try { // try from 08115253 to 08115257 has its CatchHandler @ 08115965 */
  this_20 = operator_new(0xc);
                    /* try { // try from 0811525f to 08115263 has its CatchHandler @ 08115266 */
  CPCRoomWorldDropEvent::CPCRoomWorldDropEvent(this_20);
  *(CPCRoomWorldDropEvent **)(this + 0x58) = this_20;
                    /* try { // try from 0811528c to 08115290 has its CatchHandler @ 08115965 */
  this_21 = operator_new(0x10);
                    /* try { // try from 08115298 to 0811529c has its CatchHandler @ 0811529f */
  CPartyExpBonusEvent::CPartyExpBonusEvent(this_21);
  *(CPartyExpBonusEvent **)(this + 0x60) = this_21;
                    /* try { // try from 081152c5 to 081152c9 has its CatchHandler @ 08115965 */
  this_22 = operator_new(0xc);
                    /* try { // try from 081152d1 to 081152d5 has its CatchHandler @ 081152d8 */
  CStabToDeathEvent::CStabToDeathEvent(this_22);
  *(CStabToDeathEvent **)(this + 0x80) = this_22;
                    /* try { // try from 08115301 to 08115305 has its CatchHandler @ 08115965 */
  this_23 = operator_new(0x18);
                    /* try { // try from 0811530d to 08115311 has its CatchHandler @ 08115314 */
  CSchoolMatchEvent::CSchoolMatchEvent(this_23);
  *(CSchoolMatchEvent **)(this + 0x24) = this_23;
                    /* try { // try from 0811533a to 0811533e has its CatchHandler @ 08115965 */
  this_24 = operator_new(0xc);
                    /* try { // try from 08115346 to 0811534a has its CatchHandler @ 0811534d */
  CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent(this_24);
  *(CAutoMarketConditionsControlEvent **)(this + 0x88) = this_24;
                    /* try { // try from 08115376 to 0811537a has its CatchHandler @ 08115965 */
  this_25 = operator_new(0xc);
                    /* try { // try from 08115382 to 08115386 has its CatchHandler @ 08115389 */
  CVendingMachineBonusEvent::CVendingMachineBonusEvent(this_25);
  *(CVendingMachineBonusEvent **)(this + 0x8c) = this_25;
                    /* try { // try from 081153b2 to 081153b6 has its CatchHandler @ 08115965 */
  this_26 = operator_new(0xc);
                    /* try { // try from 081153be to 081153c2 has its CatchHandler @ 081153c5 */
  CBurnigGoldMonsterEvent::CBurnigGoldMonsterEvent(this_26);
  *(CBurnigGoldMonsterEvent **)(this + 0x90) = this_26;
                    /* try { // try from 081153ee to 081153f2 has its CatchHandler @ 08115965 */
  this_27 = operator_new(0xc);
                    /* try { // try from 081153fa to 081153fe has its CatchHandler @ 08115401 */
  CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent(this_27);
  *(CNoNeedGoldOnGuildCreateEvent **)(this + 0x98) = this_27;
                    /* try { // try from 0811542a to 0811542e has its CatchHandler @ 08115965 */
  this_28 = operator_new(0x10);
                    /* try { // try from 08115436 to 0811543a has its CatchHandler @ 0811543d */
  CDeathTowerWinPointEvent::CDeathTowerWinPointEvent(this_28);
  *(CDeathTowerWinPointEvent **)(this + 0x9c) = this_28;
                    /* try { // try from 08115466 to 0811546a has its CatchHandler @ 08115965 */
  this_29 = operator_new(0xc);
                    /* try { // try from 08115472 to 08115476 has its CatchHandler @ 08115479 */
  CNotApplyBalkeunEvent::CNotApplyBalkeunEvent(this_29);
  *(CNotApplyBalkeunEvent **)(this + 0xa0) = this_29;
                    /* try { // try from 081154a2 to 081154a6 has its CatchHandler @ 08115965 */
  this_30 = operator_new(0xc);
                    /* try { // try from 081154ae to 081154b2 has its CatchHandler @ 081154b5 */
  CCharacterDayEvent::CCharacterDayEvent(this_30);
  *(CCharacterDayEvent **)(this + 0xa4) = this_30;
                    /* try { // try from 081154de to 081154e2 has its CatchHandler @ 08115965 */
  this_31 = operator_new(0x10);
                    /* try { // try from 081154ea to 081154ee has its CatchHandler @ 081154f1 */
  CRestrictCharacCreationEvent::CRestrictCharacCreationEvent(this_31);
  *(CRestrictCharacCreationEvent **)(this + 0xc4) = this_31;
                    /* try { // try from 0811551a to 0811551e has its CatchHandler @ 08115965 */
  this_32 = operator_new(0xc);
                    /* try { // try from 08115526 to 0811552a has its CatchHandler @ 0811552d */
  CReduceUpgradeItemPay::CReduceUpgradeItemPay(this_32);
  *(CReduceUpgradeItemPay **)(this + 200) = this_32;
                    /* try { // try from 08115556 to 0811555a has its CatchHandler @ 08115965 */
  this_33 = operator_new(0x60);
                    /* try { // try from 08115562 to 08115566 has its CatchHandler @ 08115569 */
  COnTimeEvent::COnTimeEvent(this_33);
  *(COnTimeEvent **)(this + 0xcc) = this_33;
                    /* try { // try from 08115592 to 08115596 has its CatchHandler @ 08115965 */
  this_34 = operator_new(0xc);
                    /* try { // try from 0811559e to 081155a2 has its CatchHandler @ 081155a5 */
  CBreakAwayPreventEvent::CBreakAwayPreventEvent(this_34);
  *(CBreakAwayPreventEvent **)(this + 0xd0) = this_34;
                    /* try { // try from 081155ce to 081155d2 has its CatchHandler @ 08115965 */
  this_35 = operator_new(0x10);
                    /* try { // try from 081155da to 081155de has its CatchHandler @ 081155e1 */
  CPowerWarVictoriousEvent::CPowerWarVictoriousEvent(this_35);
  *(CPowerWarVictoriousEvent **)(this + 0xd4) = this_35;
                    /* try { // try from 0811560a to 0811560e has its CatchHandler @ 08115965 */
  this_36 = operator_new(0xc);
                    /* try { // try from 08115616 to 0811561a has its CatchHandler @ 0811561d */
  CSecretShopEvent::CSecretShopEvent(this_36);
  *(CSecretShopEvent **)(this + 0xe8) = this_36;
                    /* try { // try from 08115646 to 0811564a has its CatchHandler @ 08115965 */
  this_37 = operator_new(0xc);
                    /* try { // try from 08115652 to 08115656 has its CatchHandler @ 08115659 */
  CFatigueAttendance::CFatigueAttendance(this_37);
  *(CFatigueAttendance **)(this + 0x158) = this_37;
                    /* try { // try from 08115682 to 08115686 has its CatchHandler @ 08115965 */
  this_38 = operator_new(0xc);
                    /* try { // try from 0811568e to 08115692 has its CatchHandler @ 08115695 */
  CWeekendBonusEvent::CWeekendBonusEvent(this_38);
  *(CWeekendBonusEvent **)(this + 0x15c) = this_38;
                    /* try { // try from 081156be to 081156c2 has its CatchHandler @ 08115965 */
  this_39 = operator_new(0xc);
                    /* try { // try from 081156ca to 081156ce has its CatchHandler @ 081156d1 */
  CConditionEvent::CConditionEvent(this_39);
  *(CConditionEvent **)(this + 0x1c4) = this_39;
                    /* try { // try from 081156fa to 081156fe has its CatchHandler @ 08115965 */
  this_40 = operator_new(0xc);
                    /* try { // try from 08115706 to 0811570a has its CatchHandler @ 0811570d */
  CUXGameLogEvent::CUXGameLogEvent(this_40);
  *(CUXGameLogEvent **)(this + 0x16c) = this_40;
                    /* try { // try from 08115736 to 0811573a has its CatchHandler @ 08115965 */
  this_41 = operator_new(0xc);
                    /* try { // try from 08115742 to 08115746 has its CatchHandler @ 08115749 */
  BlueMarbleDungeonEvent::BlueMarbleDungeonEvent(this_41);
  *(BlueMarbleDungeonEvent **)(this + 0x17c) = this_41;
                    /* try { // try from 08115772 to 08115776 has its CatchHandler @ 08115965 */
  this_42 = operator_new(0xc);
                    /* try { // try from 0811577e to 08115782 has its CatchHandler @ 08115785 */
  CStopOverlabExpEvent::CStopOverlabExpEvent(this_42);
  *(CStopOverlabExpEvent **)(this + 0x198) = this_42;
                    /* try { // try from 081157ae to 081157b2 has its CatchHandler @ 08115965 */
  this_43 = operator_new(0xc);
                    /* try { // try from 081157ba to 081157be has its CatchHandler @ 081157c1 */
  CEventAdvanceAltarOpen::CEventAdvanceAltarOpen(this_43);
  *(CEventAdvanceAltarOpen **)(this + 0x1dc) = this_43;
                    /* try { // try from 081157ea to 081157ee has its CatchHandler @ 08115965 */
  this_44 = operator_new(0x14);
                    /* try { // try from 081157f6 to 081157fa has its CatchHandler @ 081157fd */
  CAradRyosikaEvent::CAradRyosikaEvent(this_44);
  *(CAradRyosikaEvent **)(this + 0x1d0) = this_44;
                    /* try { // try from 08115826 to 0811582a has its CatchHandler @ 08115965 */
  this_45 = operator_new(0xc);
                    /* try { // try from 08115832 to 08115836 has its CatchHandler @ 08115839 */
  Arad_MomijiEvent::Arad_MomijiEvent(this_45);
  *(Arad_MomijiEvent **)(this + 0x26c) = this_45;
                    /* try { // try from 08115862 to 08115866 has its CatchHandler @ 08115965 */
  this_46 = operator_new(0xc);
                    /* try { // try from 0811586e to 08115872 has its CatchHandler @ 08115875 */
  LevelupSupportEvent::LevelupSupportEvent(this_46);
  *(LevelupSupportEvent **)(this + 0x278) = this_46;
                    /* try { // try from 0811589e to 081158a2 has its CatchHandler @ 08115965 */
  this_47 = operator_new(0x14);
                    /* try { // try from 081158aa to 081158ae has its CatchHandler @ 081158b1 */
  CEventStayTime::CEventStayTime(this_47);
  *(CEventStayTime **)(this + 0x27c) = this_47;
                    /* try { // try from 081158da to 081158de has its CatchHandler @ 08115965 */
  this_48 = operator_new(0x18);
                    /* try { // try from 081158e6 to 081158ea has its CatchHandler @ 081158ed */
  CEventCreateDnf::CEventCreateDnf(this_48);
  *(CEventCreateDnf **)(this + 0x280) = this_48;
                    /* try { // try from 08115913 to 08115917 has its CatchHandler @ 08115965 */
  this_49 = operator_new(0xc);
                    /* try { // try from 0811591f to 08115923 has its CatchHandler @ 08115926 */
  EventGiveMeBox::EventGiveMeBox(this_49);
  *(EventGiveMeBox **)(this + 0x294) = this_49;
                    /* try { // try from 0811594b to 0811594f has its CatchHandler @ 08115965 */
  cVar1 = LoadEventFromDB(this);
  return cVar1 == '\x01';
}
```
