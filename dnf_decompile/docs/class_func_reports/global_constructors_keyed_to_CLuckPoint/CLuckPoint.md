# CLuckPoint

`_GLOBAL__I__ZN10CLuckPointC2Ev`

`global constructors keyed to CLuckPoint::CLuckPoint()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CLuckPoint` | `0x08550fad` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550fad  _GLOBAL__I__ZN10CLuckPointC2Ev
#           global constructors keyed to CLuckPoint::CLuckPoint()
# range [0x08550fad, 0x085519b7]
08550fad +0x000:  push   %ebp
08550fae +0x001:  mov    %esp,%ebp
08550fb0 +0x003:  sub    $0x18,%esp
08550fb3 +0x006:  movl   $0xffff,0x4(%esp)
08550fbb +0x00e:  movl   $0x1,(%esp)
08550fc2 +0x015:  call   08550f6d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08550fc7 +0x01a:  leave
08550fc8 +0x01b:  ret
08550fc9 +0x01c:  push   %ebp
08550fca +0x01d:  mov    %esp,%ebp
08550fcc +0x01f:  mov    0x8(%ebp),%eax
08550fcf +0x022:  mov    %eax,%ecx
08550fd1 +0x024:  imul   0xc(%ebp),%ecx
08550fd5 +0x028:  mov    $0x68db8bad,%edx
08550fda +0x02d:  mov    %ecx,%eax
08550fdc +0x02f:  imul   %edx
08550fde +0x031:  sar    $0xc,%edx
08550fe1 +0x034:  mov    %ecx,%eax
08550fe3 +0x036:  sar    $0x1f,%eax
08550fe6 +0x039:  mov    %edx,%ecx
08550fe8 +0x03b:  sub    %eax,%ecx
08550fea +0x03d:  mov    %ecx,%eax
08550fec +0x03f:  pop    %ebp
08550fed +0x040:  ret
08550fee +0x041:  push   %ebp
08550fef +0x042:  mov    %esp,%ebp
08550ff1 +0x044:  mov    0x8(%ebp),%eax
08550ff4 +0x047:  mov    0x186c(%eax),%eax
08550ffa +0x04d:  pop    %ebp
08550ffb +0x04e:  ret
08550ffc +0x04f:  push   %ebp
08550ffd +0x050:  mov    %esp,%ebp
08550fff +0x052:  mov    0x8(%ebp),%eax
08551002 +0x055:  mov    0x1870(%eax),%eax
08551008 +0x05b:  pop    %ebp
08551009 +0x05c:  ret
0855100a +0x05d:  push   %ebp
0855100b +0x05e:  mov    %esp,%ebp
0855100d +0x060:  push   %ebx
0855100e +0x061:  sub    $0x14,%esp
08551011 +0x064:  mov    0x8(%ebp),%eax
08551014 +0x067:  mov    %eax,(%esp)
08551017 +0x06a:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0855101c +0x06f:  mov    0x8(%ebp),%eax
0855101f +0x072:  mov    %eax,(%esp)
08551022 +0x075:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
08551027 +0x07a:  mov    %eax,%ebx
08551029 +0x07c:  mov    0x8(%ebp),%eax
0855102c +0x07f:  mov    %eax,(%esp)
0855102f +0x082:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
08551034 +0x087:  mov    0xc(%ebp),%edx
08551037 +0x08a:  mov    %edx,0x4(%esp)
0855103b +0x08e:  mov    %eax,(%esp)
0855103e +0x091:  call   08550fc9 <+0x1c>
08551043 +0x096:  mov    %ebx,%edx
08551045 +0x098:  sub    %eax,%edx
08551047 +0x09a:  mov    %edx,%eax
08551049 +0x09c:  mov    %eax,0x4(%esp)
0855104d +0x0a0:  mov    0x8(%ebp),%eax
08551050 +0x0a3:  mov    %eax,(%esp)
08551053 +0x0a6:  call   0864670a <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi>  ; CUserCharacInfo::SetCurCharacLuckPoint(int)
08551058 +0x0ab:  add    $0x14,%esp
0855105b +0x0ae:  pop    %ebx
0855105c +0x0af:  pop    %ebp
0855105d +0x0b0:  ret
0855105e +0x0b1:  push   %ebp
0855105f +0x0b2:  mov    %esp,%ebp
08551061 +0x0b4:  mov    0x8(%ebp),%eax
08551064 +0x0b7:  mov    0x7964c(%eax),%eax
0855106a +0x0bd:  pop    %ebp
0855106b +0x0be:  ret
0855106c +0x0bf:  push   %ebp
0855106d +0x0c0:  mov    %esp,%ebp
0855106f +0x0c2:  sub    $0x18,%esp
08551072 +0x0c5:  mov    0x8(%ebp),%eax
08551075 +0x0c8:  mov    (%eax),%eax
08551077 +0x0ca:  mov    %eax,0x4(%esp)
0855107b +0x0ce:  mov    0x8(%ebp),%eax
0855107e +0x0d1:  mov    %eax,(%esp)
08551081 +0x0d4:  call   08551140 <+0x193>
08551086 +0x0d9:  leave
08551087 +0x0da:  ret
08551088 +0x0db:  push   %ebp
08551089 +0x0dc:  mov    %esp,%ebp
0855108b +0x0de:  sub    $0x28,%esp
0855108e +0x0e1:  mov    0x8(%ebp),%eax
08551091 +0x0e4:  mov    0x4(%eax),%edx
08551094 +0x0e7:  mov    0x8(%ebp),%eax
08551097 +0x0ea:  mov    0x8(%eax),%eax
0855109a +0x0ed:  cmp    %eax,%edx
0855109c +0x0ef:  je     085510cb <+0x11e>
0855109e +0x0f1:  mov    0x8(%ebp),%eax
085510a1 +0x0f4:  mov    0x4(%eax),%edx
085510a4 +0x0f7:  mov    0x8(%ebp),%eax
085510a7 +0x0fa:  mov    0xc(%ebp),%ecx
085510aa +0x0fd:  mov    %ecx,0x8(%esp)
085510ae +0x101:  mov    %edx,0x4(%esp)
085510b2 +0x105:  mov    %eax,(%esp)
085510b5 +0x108:  call   08551176 <+0x1c9>
085510ba +0x10d:  mov    0x8(%ebp),%eax
085510bd +0x110:  mov    0x4(%eax),%eax
085510c0 +0x113:  lea    0x4(%eax),%edx
085510c3 +0x116:  mov    0x8(%ebp),%eax
085510c6 +0x119:  mov    %edx,0x4(%eax)
085510c9 +0x11c:  jmp    085510f9 <+0x14c>
085510cb +0x11e:  lea    -0xc(%ebp),%eax
085510ce +0x121:  mov    0x8(%ebp),%edx
085510d1 +0x124:  mov    %edx,0x4(%esp)
085510d5 +0x128:  mov    %eax,(%esp)
085510d8 +0x12b:  call   0855119e <+0x1f1>
085510dd +0x130:  sub    $0x4,%esp
085510e0 +0x133:  mov    0xc(%ebp),%eax
085510e3 +0x136:  mov    %eax,0x8(%esp)
085510e7 +0x13a:  mov    -0xc(%ebp),%eax
085510ea +0x13d:  mov    %eax,0x4(%esp)
085510ee +0x141:  mov    0x8(%ebp),%eax
085510f1 +0x144:  mov    %eax,(%esp)
085510f4 +0x147:  call   085511c4 <+0x217>
085510f9 +0x14c:  leave
085510fa +0x14d:  ret
085510fb +0x14e:  nop
085510fc +0x14f:  push   %ebp
085510fd +0x150:  mov    %esp,%ebp
085510ff +0x152:  sub    $0x28,%esp
08551102 +0x155:  lea    -0x10(%ebp),%eax
08551105 +0x158:  mov    0x8(%ebp),%edx
08551108 +0x15b:  mov    %edx,0x4(%esp)
0855110c +0x15f:  mov    %eax,(%esp)
0855110f +0x162:  call   0855147e <+0x4d1>
08551114 +0x167:  sub    $0x4,%esp
08551117 +0x16a:  lea    -0xc(%ebp),%eax
0855111a +0x16d:  mov    0x8(%ebp),%edx
0855111d +0x170:  mov    %edx,0x4(%esp)
08551121 +0x174:  mov    %eax,(%esp)
08551124 +0x177:  call   085514aa <+0x4fd>
08551129 +0x17c:  sub    $0x4,%esp
0855112c +0x17f:  lea    -0x10(%ebp),%eax
0855112f +0x182:  mov    %eax,0x4(%esp)
08551133 +0x186:  lea    -0xc(%ebp),%eax
08551136 +0x189:  mov    %eax,(%esp)
08551139 +0x18c:  call   085514d5 <+0x528>
0855113e +0x191:  leave
0855113f +0x192:  ret
08551140 +0x193:  push   %ebp
08551141 +0x194:  mov    %esp,%ebp
08551143 +0x196:  sub    $0x18,%esp
08551146 +0x199:  mov    0x8(%ebp),%eax
08551149 +0x19c:  mov    %eax,(%esp)
0855114c +0x19f:  call   082f2a8a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x280e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x280e
08551151 +0x1a4:  mov    0x8(%ebp),%edx
08551154 +0x1a7:  mov    0x4(%edx),%edx
08551157 +0x1aa:  mov    %eax,0x8(%esp)
0855115b +0x1ae:  mov    %edx,0x4(%esp)
0855115f +0x1b2:  mov    0xc(%ebp),%eax
08551162 +0x1b5:  mov    %eax,(%esp)
08551165 +0x1b8:  call   082f2a92 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2816>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2816
0855116a +0x1bd:  mov    0x8(%ebp),%eax
0855116d +0x1c0:  mov    0xc(%ebp),%edx
08551170 +0x1c3:  mov    %edx,0x4(%eax)
08551173 +0x1c6:  leave
08551174 +0x1c7:  ret
08551175 +0x1c8:  nop
08551176 +0x1c9:  push   %ebp
08551177 +0x1ca:  mov    %esp,%ebp
08551179 +0x1cc:  sub    $0x18,%esp
0855117c +0x1cf:  mov    0xc(%ebp),%eax
0855117f +0x1d2:  mov    %eax,0x4(%esp)
08551183 +0x1d6:  movl   $0x4,(%esp)
0855118a +0x1dd:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0855118f +0x1e2:  mov    %eax,%edx
08551191 +0x1e4:  test   %edx,%edx
08551193 +0x1e6:  je     0855119c <+0x1ef>
08551195 +0x1e8:  mov    0x10(%ebp),%edx
08551198 +0x1eb:  mov    (%edx),%edx
0855119a +0x1ed:  mov    %edx,(%eax)
0855119c +0x1ef:  leave
0855119d +0x1f0:  ret
0855119e +0x1f1:  push   %ebp
0855119f +0x1f2:  mov    %esp,%ebp
085511a1 +0x1f4:  push   %ebx
085511a2 +0x1f5:  sub    $0x14,%esp
085511a5 +0x1f8:  mov    0x8(%ebp),%ebx
085511a8 +0x1fb:  mov    0xc(%ebp),%eax
085511ab +0x1fe:  add    $0x4,%eax
085511ae +0x201:  mov    %eax,0x4(%esp)
085511b2 +0x205:  mov    %ebx,(%esp)
085511b5 +0x208:  call   08551502 <+0x555>
085511ba +0x20d:  mov    %ebx,%eax
085511bc +0x20f:  add    $0x14,%esp
085511bf +0x212:  pop    %ebx
085511c0 +0x213:  pop    %ebp
085511c1 +0x214:  ret    $0x4
085511c4 +0x217:  push   %ebp
085511c5 +0x218:  mov    %esp,%ebp
085511c7 +0x21a:  push   %esi
085511c8 +0x21b:  push   %ebx
085511c9 +0x21c:  sub    $0x30,%esp
085511cc +0x21f:  mov    0x8(%ebp),%eax
085511cf +0x222:  mov    0x4(%eax),%edx
085511d2 +0x225:  mov    0x8(%ebp),%eax
085511d5 +0x228:  mov    0x8(%eax),%eax
085511d8 +0x22b:  cmp    %eax,%edx
085511da +0x22d:  je     08551271 <+0x2c4>
085511e0 +0x233:  mov    0x8(%ebp),%eax
085511e3 +0x236:  mov    0x4(%eax),%eax
085511e6 +0x239:  sub    $0x4,%eax
085511e9 +0x23c:  mov    %eax,(%esp)
085511ec +0x23f:  call   08551511 <+0x564>
085511f1 +0x244:  mov    (%eax),%eax
085511f3 +0x246:  mov    %eax,-0x20(%ebp)
085511f6 +0x249:  mov    0x8(%ebp),%eax
085511f9 +0x24c:  mov    0x4(%eax),%edx
085511fc +0x24f:  mov    0x8(%ebp),%eax
085511ff +0x252:  lea    -0x20(%ebp),%ecx
08551202 +0x255:  mov    %ecx,0x8(%esp)
08551206 +0x259:  mov    %edx,0x4(%esp)
0855120a +0x25d:  mov    %eax,(%esp)
0855120d +0x260:  call   0855151a <+0x56d>
08551212 +0x265:  mov    0x8(%ebp),%eax
08551215 +0x268:  mov    0x4(%eax),%eax
08551218 +0x26b:  lea    0x4(%eax),%edx
0855121b +0x26e:  mov    0x8(%ebp),%eax
0855121e +0x271:  mov    %edx,0x4(%eax)
08551221 +0x274:  mov    0x8(%ebp),%eax
08551224 +0x277:  mov    0x4(%eax),%eax
08551227 +0x27a:  lea    -0x4(%eax),%esi
0855122a +0x27d:  mov    0x8(%ebp),%eax
0855122d +0x280:  mov    0x4(%eax),%eax
08551230 +0x283:  lea    -0x8(%eax),%ebx
08551233 +0x286:  lea    0xc(%ebp),%eax
08551236 +0x289:  mov    %eax,(%esp)
08551239 +0x28c:  call   08551550 <+0x5a3>
0855123e +0x291:  mov    (%eax),%eax
08551240 +0x293:  mov    %esi,0x8(%esp)
08551244 +0x297:  mov    %ebx,0x4(%esp)
08551248 +0x29b:  mov    %eax,(%esp)
0855124b +0x29e:  call   08551558 <+0x5ab>
08551250 +0x2a3:  lea    0xc(%ebp),%eax
08551253 +0x2a6:  mov    %eax,(%esp)
08551256 +0x2a9:  call   08551590 <+0x5e3>
0855125b +0x2ae:  mov    %eax,%ebx
0855125d +0x2b0:  mov    0x10(%ebp),%eax
08551260 +0x2b3:  mov    %eax,(%esp)
08551263 +0x2b6:  call   085326d8 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x736>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x736
08551268 +0x2bb:  mov    (%eax),%eax
0855126a +0x2bd:  mov    %eax,(%ebx)
0855126c +0x2bf:  jmp    08551473 <+0x4c6>
08551271 +0x2c4:  movl   $"vector::_M_insert_aux",0x8(%esp)
08551279 +0x2cc:  movl   $0x1,0x4(%esp)
08551281 +0x2d4:  mov    0x8(%ebp),%eax
08551284 +0x2d7:  mov    %eax,(%esp)
08551287 +0x2da:  call   0855159a <+0x5ed>
0855128c +0x2df:  mov    %eax,-0x18(%ebp)
0855128f +0x2e2:  lea    -0x1c(%ebp),%eax
08551292 +0x2e5:  mov    0x8(%ebp),%edx
08551295 +0x2e8:  mov    %edx,0x4(%esp)
08551299 +0x2ec:  mov    %eax,(%esp)
0855129c +0x2ef:  call   08551640 <+0x693>
085512a1 +0x2f4:  sub    $0x4,%esp
085512a4 +0x2f7:  lea    -0x1c(%ebp),%eax
085512a7 +0x2fa:  mov    %eax,0x4(%esp)
085512ab +0x2fe:  lea    0xc(%ebp),%eax
085512ae +0x301:  mov    %eax,(%esp)
085512b1 +0x304:  call   08551663 <+0x6b6>
085512b6 +0x309:  mov    %eax,-0x14(%ebp)
085512b9 +0x30c:  mov    0x8(%ebp),%eax
085512bc +0x30f:  mov    -0x18(%ebp),%edx
085512bf +0x312:  mov    %edx,0x4(%esp)
085512c3 +0x316:  mov    %eax,(%esp)
085512c6 +0x319:  call   08551696 <+0x6e9>
085512cb +0x31e:  mov    %eax,-0x10(%ebp)
085512ce +0x321:  mov    -0x10(%ebp),%eax
085512d1 +0x324:  mov    %eax,-0xc(%ebp)
085512d4 +0x327:  mov    0x10(%ebp),%eax
085512d7 +0x32a:  mov    %eax,(%esp)
085512da +0x32d:  call   085326d8 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x736>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x736
085512df +0x332:  mov    -0x14(%ebp),%edx
085512e2 +0x335:  shl    $0x2,%edx
085512e5 +0x338:  mov    %edx,%ecx
085512e7 +0x33a:  add    -0x10(%ebp),%ecx
085512ea +0x33d:  mov    0x8(%ebp),%edx
085512ed +0x340:  mov    %eax,0x8(%esp)
085512f1 +0x344:  mov    %ecx,0x4(%esp)
085512f5 +0x348:  mov    %edx,(%esp)
085512f8 +0x34b:  call   08551176 <+0x1c9>
085512fd +0x350:  movl   $0x0,-0xc(%ebp)
08551304 +0x357:  mov    0x8(%ebp),%eax
08551307 +0x35a:  mov    %eax,(%esp)
0855130a +0x35d:  call   082f2a8a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x280e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x280e
0855130f +0x362:  mov    %eax,%ebx
08551311 +0x364:  lea    0xc(%ebp),%eax
08551314 +0x367:  mov    %eax,(%esp)
08551317 +0x36a:  call   08551550 <+0x5a3>
0855131c +0x36f:  mov    (%eax),%edx
0855131e +0x371:  mov    0x8(%ebp),%eax
08551321 +0x374:  mov    (%eax),%eax
08551323 +0x376:  mov    %ebx,0xc(%esp)
08551327 +0x37a:  mov    -0x10(%ebp),%ecx
0855132a +0x37d:  mov    %ecx,0x8(%esp)
0855132e +0x381:  mov    %edx,0x4(%esp)
08551332 +0x385:  mov    %eax,(%esp)
08551335 +0x388:  call   085516c5 <+0x718>
0855133a +0x38d:  mov    %eax,-0xc(%ebp)
0855133d +0x390:  addl   $0x4,-0xc(%ebp)
08551341 +0x394:  mov    0x8(%ebp),%eax
08551344 +0x397:  mov    %eax,(%esp)
08551347 +0x39a:  call   082f2a8a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x280e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x280e
0855134c +0x39f:  mov    %eax,%ebx
0855134e +0x3a1:  mov    0x8(%ebp),%eax
08551351 +0x3a4:  mov    0x4(%eax),%esi
08551354 +0x3a7:  lea    0xc(%ebp),%eax
08551357 +0x3aa:  mov    %eax,(%esp)
0855135a +0x3ad:  call   08551550 <+0x5a3>
0855135f +0x3b2:  mov    (%eax),%eax
08551361 +0x3b4:  mov    %ebx,0xc(%esp)
08551365 +0x3b8:  mov    -0xc(%ebp),%edx
08551368 +0x3bb:  mov    %edx,0x8(%esp)
0855136c +0x3bf:  mov    %esi,0x4(%esp)
08551370 +0x3c3:  mov    %eax,(%esp)
08551373 +0x3c6:  call   085516c5 <+0x718>
08551378 +0x3cb:  mov    %eax,-0xc(%ebp)
0855137b +0x3ce:  mov    0x8(%ebp),%eax
0855137e +0x3d1:  mov    %eax,(%esp)
08551381 +0x3d4:  call   082f2a8a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x280e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x280e
08551386 +0x3d9:  mov    0x8(%ebp),%edx
08551389 +0x3dc:  mov    0x4(%edx),%ecx
0855138c +0x3df:  mov    0x8(%ebp),%edx
0855138f +0x3e2:  mov    (%edx),%edx
08551391 +0x3e4:  mov    %eax,0x8(%esp)
08551395 +0x3e8:  mov    %ecx,0x4(%esp)
08551399 +0x3ec:  mov    %edx,(%esp)
0855139c +0x3ef:  call   082f2a92 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2816>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2816
085513a1 +0x3f4:  mov    0x8(%ebp),%eax
085513a4 +0x3f7:  mov    0x8(%eax),%eax
085513a7 +0x3fa:  mov    %eax,%edx
085513a9 +0x3fc:  mov    0x8(%ebp),%eax
085513ac +0x3ff:  mov    (%eax),%eax
085513ae +0x401:  mov    %edx,%ecx
085513b0 +0x403:  sub    %eax,%ecx
085513b2 +0x405:  mov    %ecx,%eax
085513b4 +0x407:  sar    $0x2,%eax
085513b7 +0x40a:  mov    %eax,%ecx
085513b9 +0x40c:  mov    0x8(%ebp),%eax
085513bc +0x40f:  mov    (%eax),%edx
085513be +0x411:  mov    0x8(%ebp),%eax
085513c1 +0x414:  mov    %ecx,0x8(%esp)
085513c5 +0x418:  mov    %edx,0x4(%esp)
085513c9 +0x41c:  mov    %eax,(%esp)
085513cc +0x41f:  call   082f39b4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x3738>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x3738
085513d1 +0x424:  mov    0x8(%ebp),%eax
085513d4 +0x427:  mov    -0x10(%ebp),%edx
085513d7 +0x42a:  mov    %edx,(%eax)
085513d9 +0x42c:  mov    0x8(%ebp),%eax
085513dc +0x42f:  mov    -0xc(%ebp),%edx
085513df +0x432:  mov    %edx,0x4(%eax)
085513e2 +0x435:  mov    -0x18(%ebp),%eax
085513e5 +0x438:  shl    $0x2,%eax
085513e8 +0x43b:  mov    %eax,%edx
085513ea +0x43d:  add    -0x10(%ebp),%edx
085513ed +0x440:  mov    0x8(%ebp),%eax
085513f0 +0x443:  mov    %edx,0x8(%eax)
085513f3 +0x446:  jmp    08551473 <+0x4c6>
085513f5 +0x448:  mov    %eax,(%esp)
085513f8 +0x44b:  call   08725ce0 <__cxa_begin_catch>
085513fd +0x450:  cmpl   $0x0,-0xc(%ebp)
08551401 +0x454:  jne    0855141f <+0x472>
08551403 +0x456:  mov    -0x14(%ebp),%eax
08551406 +0x459:  shl    $0x2,%eax
08551409 +0x45c:  mov    %eax,%edx
0855140b +0x45e:  add    -0x10(%ebp),%edx
0855140e +0x461:  mov    0x8(%ebp),%eax
08551411 +0x464:  mov    %edx,0x4(%esp)
08551415 +0x468:  mov    %eax,(%esp)
08551418 +0x46b:  call   08551718 <+0x76b>
0855141d +0x470:  jmp    08551440 <+0x493>
0855141f +0x472:  mov    0x8(%ebp),%eax
08551422 +0x475:  mov    %eax,(%esp)
08551425 +0x478:  call   082f2a8a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x280e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x280e
0855142a +0x47d:  mov    %eax,0x8(%esp)
0855142e +0x481:  mov    -0xc(%ebp),%eax
08551431 +0x484:  mov    %eax,0x4(%esp)
08551435 +0x488:  mov    -0x10(%ebp),%eax
08551438 +0x48b:  mov    %eax,(%esp)
0855143b +0x48e:  call   082f2a92 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2816>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2816
08551440 +0x493:  mov    0x8(%ebp),%eax
08551443 +0x496:  mov    -0x18(%ebp),%edx
08551446 +0x499:  mov    %edx,0x8(%esp)
0855144a +0x49d:  mov    -0x10(%ebp),%edx
0855144d +0x4a0:  mov    %edx,0x4(%esp)
08551451 +0x4a4:  mov    %eax,(%esp)
08551454 +0x4a7:  call   082f39b4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x3738>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x3738
08551459 +0x4ac:  call   08724be0 <__cxa_rethrow>
0855145e +0x4b1:  mov    %edx,%ebx
08551460 +0x4b3:  mov    %eax,%esi
08551462 +0x4b5:  call   08725c30 <__cxa_end_catch>
08551467 +0x4ba:  mov    %esi,%eax
08551469 +0x4bc:  mov    %ebx,%edx
0855146b +0x4be:  mov    %eax,(%esp)
0855146e +0x4c1:  call   08ae3750 <_Unwind_Resume>
08551473 +0x4c6:  lea    -0x8(%ebp),%esp
08551476 +0x4c9:  add    $0x0,%esp
08551479 +0x4cc:  pop    %ebx
0855147a +0x4cd:  pop    %esi
0855147b +0x4ce:  pop    %ebp
0855147c +0x4cf:  ret
0855147d +0x4d0:  nop
0855147e +0x4d1:  push   %ebp
0855147f +0x4d2:  mov    %esp,%ebp
08551481 +0x4d4:  push   %ebx
08551482 +0x4d5:  sub    $0x24,%esp
08551485 +0x4d8:  mov    0x8(%ebp),%ebx
08551488 +0x4db:  mov    0xc(%ebp),%eax
0855148b +0x4de:  mov    0x4(%eax),%eax
0855148e +0x4e1:  mov    %eax,-0xc(%ebp)
08551491 +0x4e4:  lea    -0xc(%ebp),%eax
08551494 +0x4e7:  mov    %eax,0x4(%esp)
08551498 +0x4eb:  mov    %ebx,(%esp)
0855149b +0x4ee:  call   0855171e <+0x771>
085514a0 +0x4f3:  mov    %ebx,%eax
085514a2 +0x4f5:  add    $0x24,%esp
085514a5 +0x4f8:  pop    %ebx
085514a6 +0x4f9:  pop    %ebp
085514a7 +0x4fa:  ret    $0x4
085514aa +0x4fd:  push   %ebp
085514ab +0x4fe:  mov    %esp,%ebp
085514ad +0x500:  push   %ebx
085514ae +0x501:  sub    $0x24,%esp
085514b1 +0x504:  mov    0x8(%ebp),%ebx
085514b4 +0x507:  mov    0xc(%ebp),%eax
085514b7 +0x50a:  mov    (%eax),%eax
085514b9 +0x50c:  mov    %eax,-0xc(%ebp)
085514bc +0x50f:  lea    -0xc(%ebp),%eax
085514bf +0x512:  mov    %eax,0x4(%esp)
085514c3 +0x516:  mov    %ebx,(%esp)
085514c6 +0x519:  call   0855171e <+0x771>
085514cb +0x51e:  mov    %ebx,%eax
085514cd +0x520:  add    $0x24,%esp
085514d0 +0x523:  pop    %ebx
085514d1 +0x524:  pop    %ebp
085514d2 +0x525:  ret    $0x4
085514d5 +0x528:  push   %ebp
085514d6 +0x529:  mov    %esp,%ebp
085514d8 +0x52b:  push   %ebx
085514d9 +0x52c:  sub    $0x14,%esp
085514dc +0x52f:  mov    0x8(%ebp),%eax
085514df +0x532:  mov    %eax,(%esp)
085514e2 +0x535:  call   0855172e <+0x781>
085514e7 +0x53a:  mov    (%eax),%ebx
085514e9 +0x53c:  mov    0xc(%ebp),%eax
085514ec +0x53f:  mov    %eax,(%esp)
085514ef +0x542:  call   0855172e <+0x781>
085514f4 +0x547:  mov    (%eax),%eax
085514f6 +0x549:  cmp    %eax,%ebx
085514f8 +0x54b:  sete   %al
085514fb +0x54e:  add    $0x14,%esp
085514fe +0x551:  pop    %ebx
085514ff +0x552:  pop    %ebp
08551500 +0x553:  ret
08551501 +0x554:  nop
08551502 +0x555:  push   %ebp
08551503 +0x556:  mov    %esp,%ebp
08551505 +0x558:  mov    0xc(%ebp),%eax
08551508 +0x55b:  mov    (%eax),%edx
0855150a +0x55d:  mov    0x8(%ebp),%eax
0855150d +0x560:  mov    %edx,(%eax)
0855150f +0x562:  pop    %ebp
08551510 +0x563:  ret
08551511 +0x564:  push   %ebp
08551512 +0x565:  mov    %esp,%ebp
08551514 +0x567:  mov    0x8(%ebp),%eax
08551517 +0x56a:  pop    %ebp
08551518 +0x56b:  ret
08551519 +0x56c:  nop
0855151a +0x56d:  push   %ebp
0855151b +0x56e:  mov    %esp,%ebp
0855151d +0x570:  push   %ebx
0855151e +0x571:  sub    $0x14,%esp
08551521 +0x574:  mov    0x10(%ebp),%eax
08551524 +0x577:  mov    %eax,(%esp)
08551527 +0x57a:  call   082c44ee <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x163e9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x163e9
0855152c +0x57f:  mov    (%eax),%ebx
0855152e +0x581:  mov    0xc(%ebp),%eax
08551531 +0x584:  mov    %eax,0x4(%esp)
08551535 +0x588:  movl   $0x4,(%esp)
0855153c +0x58f:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08551541 +0x594:  mov    %eax,%edx
08551543 +0x596:  test   %edx,%edx
08551545 +0x598:  je     08551549 <+0x59c>
08551547 +0x59a:  mov    %ebx,(%eax)
08551549 +0x59c:  add    $0x14,%esp
0855154c +0x59f:  pop    %ebx
0855154d +0x5a0:  pop    %ebp
0855154e +0x5a1:  ret
0855154f +0x5a2:  nop
08551550 +0x5a3:  push   %ebp
08551551 +0x5a4:  mov    %esp,%ebp
08551553 +0x5a6:  mov    0x8(%ebp),%eax
08551556 +0x5a9:  pop    %ebp
08551557 +0x5aa:  ret
08551558 +0x5ab:  push   %ebp
08551559 +0x5ac:  mov    %esp,%ebp
0855155b +0x5ae:  push   %ebx
0855155c +0x5af:  sub    $0x14,%esp
0855155f +0x5b2:  mov    0xc(%ebp),%eax
08551562 +0x5b5:  mov    %eax,(%esp)
08551565 +0x5b8:  call   08551736 <+0x789>
0855156a +0x5bd:  mov    %eax,%ebx
0855156c +0x5bf:  mov    0x8(%ebp),%eax
0855156f +0x5c2:  mov    %eax,(%esp)
08551572 +0x5c5:  call   08551736 <+0x789>
08551577 +0x5ca:  mov    0x10(%ebp),%edx
0855157a +0x5cd:  mov    %edx,0x8(%esp)
0855157e +0x5d1:  mov    %ebx,0x4(%esp)
08551582 +0x5d5:  mov    %eax,(%esp)
08551585 +0x5d8:  call   0855173e <+0x791>
0855158a +0x5dd:  add    $0x14,%esp
0855158d +0x5e0:  pop    %ebx
0855158e +0x5e1:  pop    %ebp
0855158f +0x5e2:  ret
08551590 +0x5e3:  push   %ebp
08551591 +0x5e4:  mov    %esp,%ebp
08551593 +0x5e6:  mov    0x8(%ebp),%eax
08551596 +0x5e9:  mov    (%eax),%eax
08551598 +0x5eb:  pop    %ebp
08551599 +0x5ec:  ret
0855159a +0x5ed:  push   %ebp
0855159b +0x5ee:  mov    %esp,%ebp
0855159d +0x5f0:  push   %ebx
0855159e +0x5f1:  sub    $0x24,%esp
085515a1 +0x5f4:  mov    0x8(%ebp),%eax
085515a4 +0x5f7:  mov    %eax,(%esp)
085515a7 +0x5fa:  call   08551782 <+0x7d5>
085515ac +0x5ff:  mov    %eax,%ebx
085515ae +0x601:  mov    0x8(%ebp),%eax
085515b1 +0x604:  mov    %eax,(%esp)
085515b4 +0x607:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
085515b9 +0x60c:  mov    %ebx,%edx
085515bb +0x60e:  sub    %eax,%edx
085515bd +0x610:  mov    0xc(%ebp),%eax
085515c0 +0x613:  cmp    %eax,%edx
085515c2 +0x615:  setb   %al
085515c5 +0x618:  test   %al,%al
085515c7 +0x61a:  je     085515d4 <+0x627>
085515c9 +0x61c:  mov    0x10(%ebp),%eax
085515cc +0x61f:  mov    %eax,(%esp)
085515cf +0x622:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
085515d4 +0x627:  mov    0x8(%ebp),%eax
085515d7 +0x62a:  mov    %eax,(%esp)
085515da +0x62d:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
085515df +0x632:  mov    %eax,%ebx
085515e1 +0x634:  mov    0x8(%ebp),%eax
085515e4 +0x637:  mov    %eax,(%esp)
085515e7 +0x63a:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
085515ec +0x63f:  mov    %eax,-0x10(%ebp)
085515ef +0x642:  lea    0xc(%ebp),%eax
085515f2 +0x645:  mov    %eax,0x4(%esp)
085515f6 +0x649:  lea    -0x10(%ebp),%eax
085515f9 +0x64c:  mov    %eax,(%esp)
085515fc +0x64f:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08551601 +0x654:  mov    (%eax),%eax
08551603 +0x656:  lea    (%ebx,%eax,1),%eax
08551606 +0x659:  mov    %eax,-0xc(%ebp)
08551609 +0x65c:  mov    0x8(%ebp),%eax
0855160c +0x65f:  mov    %eax,(%esp)
0855160f +0x662:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08551614 +0x667:  cmp    -0xc(%ebp),%eax
08551617 +0x66a:  ja     08551629 <+0x67c>
08551619 +0x66c:  mov    0x8(%ebp),%eax
0855161c +0x66f:  mov    %eax,(%esp)
0855161f +0x672:  call   08551782 <+0x7d5>
08551624 +0x677:  cmp    -0xc(%ebp),%eax
08551627 +0x67a:  jae    08551636 <+0x689>
08551629 +0x67c:  mov    0x8(%ebp),%eax
0855162c +0x67f:  mov    %eax,(%esp)
0855162f +0x682:  call   08551782 <+0x7d5>
08551634 +0x687:  jmp    08551639 <+0x68c>
08551636 +0x689:  mov    -0xc(%ebp),%eax
08551639 +0x68c:  add    $0x24,%esp
0855163c +0x68f:  pop    %ebx
0855163d +0x690:  pop    %ebp
0855163e +0x691:  ret
0855163f +0x692:  nop
08551640 +0x693:  push   %ebp
08551641 +0x694:  mov    %esp,%ebp
08551643 +0x696:  push   %ebx
08551644 +0x697:  sub    $0x14,%esp
08551647 +0x69a:  mov    0x8(%ebp),%ebx
0855164a +0x69d:  mov    0xc(%ebp),%eax
0855164d +0x6a0:  mov    %eax,0x4(%esp)
08551651 +0x6a4:  mov    %ebx,(%esp)
08551654 +0x6a7:  call   08551502 <+0x555>
08551659 +0x6ac:  mov    %ebx,%eax
0855165b +0x6ae:  add    $0x14,%esp
0855165e +0x6b1:  pop    %ebx
0855165f +0x6b2:  pop    %ebp
08551660 +0x6b3:  ret    $0x4
08551663 +0x6b6:  push   %ebp
08551664 +0x6b7:  mov    %esp,%ebp
08551666 +0x6b9:  push   %ebx
08551667 +0x6ba:  sub    $0x14,%esp
0855166a +0x6bd:  mov    0x8(%ebp),%eax
0855166d +0x6c0:  mov    %eax,(%esp)
08551670 +0x6c3:  call   08551550 <+0x5a3>
08551675 +0x6c8:  mov    (%eax),%eax
08551677 +0x6ca:  mov    %eax,%ebx
08551679 +0x6cc:  mov    0xc(%ebp),%eax
0855167c +0x6cf:  mov    %eax,(%esp)
0855167f +0x6d2:  call   08551550 <+0x5a3>
08551684 +0x6d7:  mov    (%eax),%eax
08551686 +0x6d9:  mov    %ebx,%edx
08551688 +0x6db:  sub    %eax,%edx
0855168a +0x6dd:  mov    %edx,%eax
0855168c +0x6df:  sar    $0x2,%eax
0855168f +0x6e2:  add    $0x14,%esp
08551692 +0x6e5:  pop    %ebx
08551693 +0x6e6:  pop    %ebp
08551694 +0x6e7:  ret
08551695 +0x6e8:  nop
08551696 +0x6e9:  push   %ebp
08551697 +0x6ea:  mov    %esp,%ebp
08551699 +0x6ec:  sub    $0x18,%esp
0855169c +0x6ef:  cmpl   $0x0,0xc(%ebp)
085516a0 +0x6f3:  je     085516be <+0x711>
085516a2 +0x6f5:  mov    0x8(%ebp),%eax
085516a5 +0x6f8:  movl   $0x0,0x8(%esp)
085516ad +0x700:  mov    0xc(%ebp),%edx
085516b0 +0x703:  mov    %edx,0x4(%esp)
085516b4 +0x707:  mov    %eax,(%esp)
085516b7 +0x70a:  call   082e06ea <_GLOBAL__I__ZN4CLog5this_E+0x3cb11>  ; global constructors keyed to CLog::this_+0x3cb11
085516bc +0x70f:  jmp    085516c3 <+0x716>
085516be +0x711:  mov    $0x0,%eax
085516c3 +0x716:  leave
085516c4 +0x717:  ret
085516c5 +0x718:  push   %ebp
085516c6 +0x719:  mov    %esp,%ebp
085516c8 +0x71b:  sub    $0x28,%esp
085516cb +0x71e:  lea    -0x10(%ebp),%eax
085516ce +0x721:  lea    0xc(%ebp),%edx
085516d1 +0x724:  mov    %edx,0x4(%esp)
085516d5 +0x728:  mov    %eax,(%esp)
085516d8 +0x72b:  call   0855179d <+0x7f0>
085516dd +0x730:  sub    $0x4,%esp
085516e0 +0x733:  lea    -0xc(%ebp),%eax
085516e3 +0x736:  lea    0x8(%ebp),%edx
085516e6 +0x739:  mov    %edx,0x4(%esp)
085516ea +0x73d:  mov    %eax,(%esp)
085516ed +0x740:  call   0855179d <+0x7f0>
085516f2 +0x745:  sub    $0x4,%esp
085516f5 +0x748:  mov    0x14(%ebp),%eax
085516f8 +0x74b:  mov    %eax,0xc(%esp)
085516fc +0x74f:  mov    0x10(%ebp),%eax
085516ff +0x752:  mov    %eax,0x8(%esp)
08551703 +0x756:  mov    -0x10(%ebp),%eax
08551706 +0x759:  mov    %eax,0x4(%esp)
0855170a +0x75d:  mov    -0xc(%ebp),%eax
0855170d +0x760:  mov    %eax,(%esp)
08551710 +0x763:  call   085517c2 <+0x815>
08551715 +0x768:  leave
08551716 +0x769:  ret
08551717 +0x76a:  nop
08551718 +0x76b:  push   %ebp
08551719 +0x76c:  mov    %esp,%ebp
0855171b +0x76e:  pop    %ebp
0855171c +0x76f:  ret
0855171d +0x770:  nop
0855171e +0x771:  push   %ebp
0855171f +0x772:  mov    %esp,%ebp
08551721 +0x774:  mov    0xc(%ebp),%eax
08551724 +0x777:  mov    (%eax),%edx
08551726 +0x779:  mov    0x8(%ebp),%eax
08551729 +0x77c:  mov    %edx,(%eax)
0855172b +0x77e:  pop    %ebp
0855172c +0x77f:  ret
0855172d +0x780:  nop
0855172e +0x781:  push   %ebp
0855172f +0x782:  mov    %esp,%ebp
08551731 +0x784:  mov    0x8(%ebp),%eax
08551734 +0x787:  pop    %ebp
08551735 +0x788:  ret
08551736 +0x789:  push   %ebp
08551737 +0x78a:  mov    %esp,%ebp
08551739 +0x78c:  mov    0x8(%ebp),%eax
0855173c +0x78f:  pop    %ebp
0855173d +0x790:  ret
0855173e +0x791:  push   %ebp
0855173f +0x792:  mov    %esp,%ebp
08551741 +0x794:  push   %esi
08551742 +0x795:  push   %ebx
08551743 +0x796:  sub    $0x10,%esp
08551746 +0x799:  mov    0x10(%ebp),%eax
08551749 +0x79c:  mov    %eax,(%esp)
0855174c +0x79f:  call   085517e3 <+0x836>
08551751 +0x7a4:  mov    %eax,%esi
08551753 +0x7a6:  mov    0xc(%ebp),%eax
08551756 +0x7a9:  mov    %eax,(%esp)
08551759 +0x7ac:  call   085517e3 <+0x836>
0855175e +0x7b1:  mov    %eax,%ebx
08551760 +0x7b3:  mov    0x8(%ebp),%eax
08551763 +0x7b6:  mov    %eax,(%esp)
08551766 +0x7b9:  call   085517e3 <+0x836>
0855176b +0x7be:  mov    %esi,0x8(%esp)
0855176f +0x7c2:  mov    %ebx,0x4(%esp)
08551773 +0x7c6:  mov    %eax,(%esp)
08551776 +0x7c9:  call   085517eb <+0x83e>
0855177b +0x7ce:  add    $0x10,%esp
0855177e +0x7d1:  pop    %ebx
0855177f +0x7d2:  pop    %esi
08551780 +0x7d3:  pop    %ebp
08551781 +0x7d4:  ret
08551782 +0x7d5:  push   %ebp
08551783 +0x7d6:  mov    %esp,%ebp
08551785 +0x7d8:  sub    $0x18,%esp
08551788 +0x7db:  mov    0x8(%ebp),%eax
0855178b +0x7de:  mov    %eax,(%esp)
0855178e +0x7e1:  call   08551810 <+0x863>
08551793 +0x7e6:  mov    %eax,(%esp)
08551796 +0x7e9:  call   082e253e <_GLOBAL__I__ZN4CLog5this_E+0x3e965>  ; global constructors keyed to CLog::this_+0x3e965
0855179b +0x7ee:  leave
0855179c +0x7ef:  ret
0855179d +0x7f0:  push   %ebp
0855179e +0x7f1:  mov    %esp,%ebp
085517a0 +0x7f3:  push   %ebx
085517a1 +0x7f4:  sub    $0x14,%esp
085517a4 +0x7f7:  mov    0x8(%ebp),%ebx
085517a7 +0x7fa:  mov    0xc(%ebp),%eax
085517aa +0x7fd:  mov    (%eax),%eax
085517ac +0x7ff:  mov    %eax,0x4(%esp)
085517b0 +0x803:  mov    %ebx,(%esp)
085517b3 +0x806:  call   08551818 <+0x86b>
085517b8 +0x80b:  mov    %ebx,%eax
085517ba +0x80d:  add    $0x14,%esp
085517bd +0x810:  pop    %ebx
085517be +0x811:  pop    %ebp
085517bf +0x812:  ret    $0x4
085517c2 +0x815:  push   %ebp
085517c3 +0x816:  mov    %esp,%ebp
085517c5 +0x818:  sub    $0x18,%esp
085517c8 +0x81b:  mov    0x10(%ebp),%eax
085517cb +0x81e:  mov    %eax,0x8(%esp)
085517cf +0x822:  mov    0xc(%ebp),%eax
085517d2 +0x825:  mov    %eax,0x4(%esp)
085517d6 +0x829:  mov    0x8(%ebp),%eax
085517d9 +0x82c:  mov    %eax,(%esp)
085517dc +0x82f:  call   08551825 <+0x878>
085517e1 +0x834:  leave
085517e2 +0x835:  ret
085517e3 +0x836:  push   %ebp
085517e4 +0x837:  mov    %esp,%ebp
085517e6 +0x839:  mov    0x8(%ebp),%eax
085517e9 +0x83c:  pop    %ebp
085517ea +0x83d:  ret
085517eb +0x83e:  push   %ebp
085517ec +0x83f:  mov    %esp,%ebp
085517ee +0x841:  sub    $0x28,%esp
085517f1 +0x844:  movb   $0x1,-0x9(%ebp)
085517f5 +0x848:  mov    0x10(%ebp),%eax
085517f8 +0x84b:  mov    %eax,0x8(%esp)
085517fc +0x84f:  mov    0xc(%ebp),%eax
085517ff +0x852:  mov    %eax,0x4(%esp)
08551803 +0x856:  mov    0x8(%ebp),%eax
08551806 +0x859:  mov    %eax,(%esp)
08551809 +0x85c:  call   08551846 <+0x899>
0855180e +0x861:  leave
0855180f +0x862:  ret
08551810 +0x863:  push   %ebp
08551811 +0x864:  mov    %esp,%ebp
08551813 +0x866:  mov    0x8(%ebp),%eax
08551816 +0x869:  pop    %ebp
08551817 +0x86a:  ret
08551818 +0x86b:  push   %ebp
08551819 +0x86c:  mov    %esp,%ebp
0855181b +0x86e:  mov    0x8(%ebp),%eax
0855181e +0x871:  mov    0xc(%ebp),%edx
08551821 +0x874:  mov    %edx,(%eax)
08551823 +0x876:  pop    %ebp
08551824 +0x877:  ret
08551825 +0x878:  push   %ebp
08551826 +0x879:  mov    %esp,%ebp
08551828 +0x87b:  sub    $0x18,%esp
0855182b +0x87e:  mov    0x10(%ebp),%eax
0855182e +0x881:  mov    %eax,0x8(%esp)
08551832 +0x885:  mov    0xc(%ebp),%eax
08551835 +0x888:  mov    %eax,0x4(%esp)
08551839 +0x88c:  mov    0x8(%ebp),%eax
0855183c +0x88f:  mov    %eax,(%esp)
0855183f +0x892:  call   08551893 <+0x8e6>
08551844 +0x897:  leave
08551845 +0x898:  ret
08551846 +0x899:  push   %ebp
08551847 +0x89a:  mov    %esp,%ebp
08551849 +0x89c:  sub    $0x28,%esp
0855184c +0x89f:  mov    0xc(%ebp),%edx
0855184f +0x8a2:  mov    0x8(%ebp),%eax
08551852 +0x8a5:  mov    %edx,%ecx
08551854 +0x8a7:  sub    %eax,%ecx
08551856 +0x8a9:  mov    %ecx,%eax
08551858 +0x8ab:  sar    $0x2,%eax
0855185b +0x8ae:  mov    %eax,-0xc(%ebp)
0855185e +0x8b1:  mov    -0xc(%ebp),%eax
08551861 +0x8b4:  lea    0x0(,%eax,4),%edx
08551868 +0x8bb:  mov    -0xc(%ebp),%eax
0855186b +0x8be:  shl    $0x2,%eax
0855186e +0x8c1:  neg    %eax
08551870 +0x8c3:  add    0x10(%ebp),%eax
08551873 +0x8c6:  mov    %edx,0x8(%esp)
08551877 +0x8ca:  mov    0x8(%ebp),%edx
0855187a +0x8cd:  mov    %edx,0x4(%esp)
0855187e +0x8d1:  mov    %eax,(%esp)
08551881 +0x8d4:  call   0807d880 <_init+0x178>
08551886 +0x8d9:  mov    -0xc(%ebp),%eax
08551889 +0x8dc:  shl    $0x2,%eax
0855188c +0x8df:  neg    %eax
0855188e +0x8e1:  add    0x10(%ebp),%eax
08551891 +0x8e4:  leave
08551892 +0x8e5:  ret
08551893 +0x8e6:  push   %ebp
08551894 +0x8e7:  mov    %esp,%ebp
08551896 +0x8e9:  sub    $0x18,%esp
08551899 +0x8ec:  mov    0x10(%ebp),%eax
0855189c +0x8ef:  mov    %eax,0x8(%esp)
085518a0 +0x8f3:  mov    0xc(%ebp),%eax
085518a3 +0x8f6:  mov    %eax,0x4(%esp)
085518a7 +0x8fa:  mov    0x8(%ebp),%eax
085518aa +0x8fd:  mov    %eax,(%esp)
085518ad +0x900:  call   085518b4 <+0x907>
085518b2 +0x905:  leave
085518b3 +0x906:  ret
085518b4 +0x907:  push   %ebp
085518b5 +0x908:  mov    %esp,%ebp
085518b7 +0x90a:  push   %ebx
085518b8 +0x90b:  sub    $0x14,%esp
085518bb +0x90e:  mov    0xc(%ebp),%eax
085518be +0x911:  mov    %eax,(%esp)
085518c1 +0x914:  call   085518ec <+0x93f>
085518c6 +0x919:  mov    %eax,%ebx
085518c8 +0x91b:  mov    0x8(%ebp),%eax
085518cb +0x91e:  mov    %eax,(%esp)
085518ce +0x921:  call   085518ec <+0x93f>
085518d3 +0x926:  mov    0x10(%ebp),%edx
085518d6 +0x929:  mov    %edx,0x8(%esp)
085518da +0x92d:  mov    %ebx,0x4(%esp)
085518de +0x931:  mov    %eax,(%esp)
085518e1 +0x934:  call   085518ff <+0x952>
085518e6 +0x939:  add    $0x14,%esp
085518e9 +0x93c:  pop    %ebx
085518ea +0x93d:  pop    %ebp
085518eb +0x93e:  ret
085518ec +0x93f:  push   %ebp
085518ed +0x940:  mov    %esp,%ebp
085518ef +0x942:  sub    $0x18,%esp
085518f2 +0x945:  lea    0x8(%ebp),%eax
085518f5 +0x948:  mov    %eax,(%esp)
085518f8 +0x94b:  call   08551944 <+0x997>
085518fd +0x950:  leave
085518fe +0x951:  ret
085518ff +0x952:  push   %ebp
08551900 +0x953:  mov    %esp,%ebp
08551902 +0x955:  push   %esi
08551903 +0x956:  push   %ebx
08551904 +0x957:  sub    $0x10,%esp
08551907 +0x95a:  mov    0x10(%ebp),%eax
0855190a +0x95d:  mov    %eax,(%esp)
0855190d +0x960:  call   085517e3 <+0x836>
08551912 +0x965:  mov    %eax,%esi
08551914 +0x967:  mov    0xc(%ebp),%eax
08551917 +0x96a:  mov    %eax,(%esp)
0855191a +0x96d:  call   085517e3 <+0x836>
0855191f +0x972:  mov    %eax,%ebx
08551921 +0x974:  mov    0x8(%ebp),%eax
08551924 +0x977:  mov    %eax,(%esp)
08551927 +0x97a:  call   085517e3 <+0x836>
0855192c +0x97f:  mov    %esi,0x8(%esp)
08551930 +0x983:  mov    %ebx,0x4(%esp)
08551934 +0x987:  mov    %eax,(%esp)
08551937 +0x98a:  call   0855194e <+0x9a1>
0855193c +0x98f:  add    $0x10,%esp
0855193f +0x992:  pop    %ebx
08551940 +0x993:  pop    %esi
08551941 +0x994:  pop    %ebp
08551942 +0x995:  ret
08551943 +0x996:  nop
08551944 +0x997:  push   %ebp
08551945 +0x998:  mov    %esp,%ebp
08551947 +0x99a:  mov    0x8(%ebp),%eax
0855194a +0x99d:  mov    (%eax),%eax
0855194c +0x99f:  pop    %ebp
0855194d +0x9a0:  ret
0855194e +0x9a1:  push   %ebp
0855194f +0x9a2:  mov    %esp,%ebp
08551951 +0x9a4:  sub    $0x28,%esp
08551954 +0x9a7:  movb   $0x1,-0x9(%ebp)
08551958 +0x9ab:  mov    0x10(%ebp),%eax
0855195b +0x9ae:  mov    %eax,0x8(%esp)
0855195f +0x9b2:  mov    0xc(%ebp),%eax
08551962 +0x9b5:  mov    %eax,0x4(%esp)
08551966 +0x9b9:  mov    0x8(%ebp),%eax
08551969 +0x9bc:  mov    %eax,(%esp)
0855196c +0x9bf:  call   08551973 <+0x9c6>
08551971 +0x9c4:  leave
08551972 +0x9c5:  ret
08551973 +0x9c6:  push   %ebp
08551974 +0x9c7:  mov    %esp,%ebp
08551976 +0x9c9:  sub    $0x18,%esp
08551979 +0x9cc:  mov    0xc(%ebp),%edx
0855197c +0x9cf:  mov    0x8(%ebp),%eax
0855197f +0x9d2:  mov    %edx,%ecx
08551981 +0x9d4:  sub    %eax,%ecx
08551983 +0x9d6:  mov    %ecx,%eax
08551985 +0x9d8:  sar    $0x2,%eax
08551988 +0x9db:  shl    $0x2,%eax
0855198b +0x9de:  mov    %eax,0x8(%esp)
0855198f +0x9e2:  mov    0x8(%ebp),%eax
08551992 +0x9e5:  mov    %eax,0x4(%esp)
08551996 +0x9e9:  mov    0x10(%ebp),%eax
08551999 +0x9ec:  mov    %eax,(%esp)
0855199c +0x9ef:  call   0807d880 <_init+0x178>
085519a1 +0x9f4:  mov    0xc(%ebp),%edx
085519a4 +0x9f7:  mov    0x8(%ebp),%eax
085519a7 +0x9fa:  mov    %edx,%ecx
085519a9 +0x9fc:  sub    %eax,%ecx
085519ab +0x9fe:  mov    %ecx,%eax
085519ad +0xa00:  sar    $0x2,%eax
085519b0 +0xa03:  shl    $0x2,%eax
085519b3 +0xa06:  add    0x10(%ebp),%eax
085519b6 +0xa09:  leave
085519b7 +0xa0a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8550fad

/* CLuckPoint::CLuckPoint() */

void CLuckPoint::_GLOBAL__I_CLuckPoint(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
