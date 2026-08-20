# process

`_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c1dda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1dda  _ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c1dda, 0x081c2791]
081c1dda +0x000:  push   %ebp
081c1ddb +0x001:  mov    %esp,%ebp
081c1ddd +0x003:  push   %esi
081c1dde +0x004:  push   %ebx
081c1ddf +0x005:  sub    $0x100,%esp
081c1de5 +0x00b:  mov    0x14(%ebp),%eax
081c1de8 +0x00e:  mov    %eax,-0x3c(%ebp)
081c1deb +0x011:  mov    0x10(%ebp),%eax
081c1dee +0x014:  mov    %eax,0x8(%esp)
081c1df2 +0x018:  mov    0xc(%ebp),%eax
081c1df5 +0x01b:  mov    %eax,0x4(%esp)
081c1df9 +0x01f:  mov    0x8(%ebp),%eax
081c1dfc +0x022:  mov    %eax,(%esp)
081c1dff +0x025:  call   081c1a6c <_ZN21DisPatcher_DeleteItem11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_DeleteItem::check_error(CUser*, MSG_BASE&)
081c1e04 +0x02a:  mov    %eax,%edx
081c1e06 +0x02c:  mov    -0x3c(%ebp),%eax
081c1e09 +0x02f:  mov    %edx,0x4(%eax)
081c1e0c +0x032:  mov    -0x3c(%ebp),%eax
081c1e0f +0x035:  mov    0x4(%eax),%eax
081c1e12 +0x038:  test   %eax,%eax
081c1e14 +0x03a:  jle    081c1e20 <+0x46>
081c1e16 +0x03c:  mov    $0x0,%ebx
081c1e1b +0x041:  jmp    081c2786 <+0x9ac>
081c1e20 +0x046:  mov    -0x3c(%ebp),%eax
081c1e23 +0x049:  mov    0x4(%eax),%eax
081c1e26 +0x04c:  test   %eax,%eax
081c1e28 +0x04e:  jns    081c1e5e <+0x84>
081c1e2a +0x050:  mov    0xc(%ebp),%eax
081c1e2d +0x053:  mov    %eax,(%esp)
081c1e30 +0x056:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c1e35 +0x05b:  mov    -0x3c(%ebp),%edx
081c1e38 +0x05e:  mov    0x4(%edx),%edx
081c1e3b +0x061:  mov    %eax,0xc(%esp)
081c1e3f +0x065:  mov    %edx,0x8(%esp)
081c1e43 +0x069:  movl   $&_ZZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c1e4b +0x071:  movl   $0xb8e,(%esp)
081c1e52 +0x078:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1e57 +0x07d:  mov    %eax,%ebx
081c1e59 +0x07f:  jmp    081c2786 <+0x9ac>
081c1e5e +0x084:  mov    -0x3c(%ebp),%eax
081c1e61 +0x087:  mov    %eax,0xc(%esp)
081c1e65 +0x08b:  mov    0x10(%ebp),%eax
081c1e68 +0x08e:  mov    %eax,0x8(%esp)
081c1e6c +0x092:  mov    0xc(%ebp),%eax
081c1e6f +0x095:  mov    %eax,0x4(%esp)
081c1e73 +0x099:  mov    0x8(%ebp),%eax
081c1e76 +0x09c:  mov    %eax,(%esp)
081c1e79 +0x09f:  call   081c1ad6 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_DeleteItem::exercise_mode(CUser*, MSG_BASE&, ParamBase&)
081c1e7e +0x0a4:  mov    %al,-0x35(%ebp)
081c1e81 +0x0a7:  cmpb   $0x0,-0x35(%ebp)
081c1e85 +0x0ab:  je     081c1e91 <+0xb7>
081c1e87 +0x0ad:  mov    $0x0,%ebx
081c1e8c +0x0b2:  jmp    081c2786 <+0x9ac>
081c1e91 +0x0b7:  mov    0x10(%ebp),%eax
081c1e94 +0x0ba:  mov    %eax,-0x34(%ebp)
081c1e97 +0x0bd:  movl   $0x6,-0x50(%ebp)
081c1e9e +0x0c4:  mov    -0x34(%ebp),%eax
081c1ea1 +0x0c7:  movzbl 0xd(%eax),%eax
081c1ea5 +0x0cb:  movsbl %al,%eax
081c1ea8 +0x0ce:  cmp    $0x1,%eax
081c1eab +0x0d1:  je     081c1eb4 <+0xda>
081c1ead +0x0d3:  cmp    $0x3,%eax
081c1eb0 +0x0d6:  je     081c1ebd <+0xe3>
081c1eb2 +0x0d8:  jmp    081c1ec4 <+0xea>
081c1eb4 +0x0da:  movl   $0x2,-0x50(%ebp)
081c1ebb +0x0e1:  jmp    081c1ec4 <+0xea>
081c1ebd +0x0e3:  movl   $0x0,-0x50(%ebp)
081c1ec4 +0x0ea:  mov    -0x50(%ebp),%eax
081c1ec7 +0x0ed:  cmp    $0x2,%eax
081c1eca +0x0f0:  jne    081c1eed <+0x113>
081c1ecc +0x0f2:  mov    -0x3c(%ebp),%eax
081c1ecf +0x0f5:  movl   $0x17,0x4(%eax)
081c1ed6 +0x0fc:  mov    -0x34(%ebp),%eax
081c1ed9 +0x0ff:  movzbl 0xd(%eax),%edx
081c1edd +0x103:  mov    -0x3c(%ebp),%eax
081c1ee0 +0x106:  mov    %dl,0x8(%eax)
081c1ee3 +0x109:  mov    $0x0,%ebx
081c1ee8 +0x10e:  jmp    081c2786 <+0x9ac>
081c1eed +0x113:  movb   $0x0,-0x2d(%ebp)
081c1ef1 +0x117:  movl   $0x0,-0x2c(%ebp)
081c1ef8 +0x11e:  jmp    081c1f15 <+0x13b>
081c1efa +0x120:  mov    -0x2c(%ebp),%edx
081c1efd +0x123:  mov    -0x34(%ebp),%eax
081c1f00 +0x126:  movzwl 0xf(%eax,%edx,2),%eax
081c1f05 +0x12b:  cmp    $0x1,%ax
081c1f09 +0x12f:  jg     081c1f11 <+0x137>
081c1f0b +0x131:  movb   $0x1,-0x2d(%ebp)
081c1f0f +0x135:  jmp    081c1f29 <+0x14f>
081c1f11 +0x137:  addl   $0x1,-0x2c(%ebp)
081c1f15 +0x13b:  mov    -0x34(%ebp),%eax
081c1f18 +0x13e:  movzbl 0xe(%eax),%eax
081c1f1c +0x142:  movsbl %al,%eax
081c1f1f +0x145:  cmp    -0x2c(%ebp),%eax
081c1f22 +0x148:  setg   %al
081c1f25 +0x14b:  test   %al,%al
081c1f27 +0x14d:  jne    081c1efa <+0x120>
081c1f29 +0x14f:  cmpb   $0x0,-0x2d(%ebp)
081c1f2d +0x153:  je     081c1f71 <+0x197>
081c1f2f +0x155:  mov    0x10(%ebp),%eax
081c1f32 +0x158:  mov    %eax,0x8(%esp)
081c1f36 +0x15c:  mov    0xc(%ebp),%eax
081c1f39 +0x15f:  mov    %eax,0x4(%esp)
081c1f3d +0x163:  mov    0x8(%ebp),%eax
081c1f40 +0x166:  mov    %eax,(%esp)
081c1f43 +0x169:  call   081c1cf6 <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE>  ; DisPatcher_DeleteItem::restricted_check(CUser*, MSG_BASE&)
081c1f48 +0x16e:  mov    %eax,%edx
081c1f4a +0x170:  mov    -0x3c(%ebp),%eax
081c1f4d +0x173:  mov    %edx,0x4(%eax)
081c1f50 +0x176:  mov    -0x3c(%ebp),%eax
081c1f53 +0x179:  mov    0x4(%eax),%eax
081c1f56 +0x17c:  test   %eax,%eax
081c1f58 +0x17e:  je     081c1f71 <+0x197>
081c1f5a +0x180:  mov    -0x34(%ebp),%eax
081c1f5d +0x183:  movzbl 0xd(%eax),%edx
081c1f61 +0x187:  mov    -0x3c(%ebp),%eax
081c1f64 +0x18a:  mov    %dl,0x8(%eax)
081c1f67 +0x18d:  mov    $0x0,%ebx
081c1f6c +0x192:  jmp    081c2786 <+0x9ac>
081c1f71 +0x197:  movl   $0x0,-0x28(%ebp)
081c1f78 +0x19e:  jmp    081c26df <+0x905>
081c1f7d +0x1a3:  mov    -0x28(%ebp),%eax
081c1f80 +0x1a6:  mov    %eax,0x10(%esp)
081c1f84 +0x1aa:  lea    -0x50(%ebp),%eax
081c1f87 +0x1ad:  mov    %eax,0xc(%esp)
081c1f8b +0x1b1:  mov    0x10(%ebp),%eax
081c1f8e +0x1b4:  mov    %eax,0x8(%esp)
081c1f92 +0x1b8:  mov    0xc(%ebp),%eax
081c1f95 +0x1bb:  mov    %eax,0x4(%esp)
081c1f99 +0x1bf:  mov    0x8(%ebp),%eax
081c1f9c +0x1c2:  mov    %eax,(%esp)
081c1f9f +0x1c5:  call   081c1d5c <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi>  ; DisPatcher_DeleteItem::condition_check(CUser*, MSG_BASE&, INVEN_TYPE&, int)
081c1fa4 +0x1ca:  mov    %eax,%edx
081c1fa6 +0x1cc:  mov    -0x3c(%ebp),%eax
081c1fa9 +0x1cf:  mov    %edx,0x4(%eax)
081c1fac +0x1d2:  mov    -0x3c(%ebp),%eax
081c1faf +0x1d5:  mov    0x4(%eax),%eax
081c1fb2 +0x1d8:  test   %eax,%eax
081c1fb4 +0x1da:  je     081c1fcd <+0x1f3>
081c1fb6 +0x1dc:  mov    -0x34(%ebp),%eax
081c1fb9 +0x1df:  movzbl 0xd(%eax),%edx
081c1fbd +0x1e3:  mov    -0x3c(%ebp),%eax
081c1fc0 +0x1e6:  mov    %dl,0x8(%eax)
081c1fc3 +0x1e9:  mov    $0x0,%ebx
081c1fc8 +0x1ee:  jmp    081c2786 <+0x9ac>
081c1fcd +0x1f3:  movl   $0x3,-0x24(%ebp)
081c1fd4 +0x1fa:  mov    -0x28(%ebp),%edx
081c1fd7 +0x1fd:  mov    -0x34(%ebp),%eax
081c1fda +0x200:  movzwl 0xf(%eax,%edx,2),%eax
081c1fdf +0x205:  cmp    $0x1,%ax
081c1fe3 +0x209:  jne    081c2008 <+0x22e>
081c1fe5 +0x20b:  movl   $0x5,-0x24(%ebp)
081c1fec +0x212:  mov    0xc(%ebp),%eax
081c1fef +0x215:  mov    %eax,(%esp)
081c1ff2 +0x218:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c1ff7 +0x21d:  cmp    $0x3,%eax
081c1ffa +0x220:  setne  %al
081c1ffd +0x223:  test   %al,%al
081c1fff +0x225:  je     081c2008 <+0x22e>
081c2001 +0x227:  movl   $0x6,-0x24(%ebp)
081c2008 +0x22e:  mov    -0x28(%ebp),%edx
081c200b +0x231:  mov    -0x34(%ebp),%eax
081c200e +0x234:  add    $0x68,%edx
081c2011 +0x237:  movzwl 0x7(%eax,%edx,2),%eax
081c2016 +0x23c:  movswl %ax,%esi
081c2019 +0x23f:  mov    -0x34(%ebp),%eax
081c201c +0x242:  movzbl 0xd(%eax),%eax
081c2020 +0x246:  movsbl %al,%eax
081c2023 +0x249:  mov    %eax,(%esp)
081c2026 +0x24c:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081c202b +0x251:  mov    %eax,%ebx
081c202d +0x253:  mov    0xc(%ebp),%eax
081c2030 +0x256:  mov    %eax,(%esp)
081c2033 +0x259:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c2038 +0x25e:  lea    -0xa9(%ebp),%edx
081c203e +0x264:  mov    %esi,0xc(%esp)
081c2042 +0x268:  mov    %ebx,0x8(%esp)
081c2046 +0x26c:  mov    %eax,0x4(%esp)
081c204a +0x270:  mov    %edx,(%esp)
081c204d +0x273:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081c2052 +0x278:  sub    $0x4,%esp
081c2055 +0x27b:  mov    -0xa9(%ebp),%eax
081c205b +0x281:  mov    %eax,-0xe6(%ebp)
081c2061 +0x287:  mov    -0xa5(%ebp),%eax
081c2067 +0x28d:  mov    %eax,-0xe2(%ebp)
081c206d +0x293:  mov    -0xa1(%ebp),%eax
081c2073 +0x299:  mov    %eax,-0xde(%ebp)
081c2079 +0x29f:  mov    -0x9d(%ebp),%eax
081c207f +0x2a5:  mov    %eax,-0xda(%ebp)
081c2085 +0x2ab:  mov    -0x99(%ebp),%eax
081c208b +0x2b1:  mov    %eax,-0xd6(%ebp)
081c2091 +0x2b7:  mov    -0x95(%ebp),%eax
081c2097 +0x2bd:  mov    %eax,-0xd2(%ebp)
081c209d +0x2c3:  mov    -0x91(%ebp),%eax
081c20a3 +0x2c9:  mov    %eax,-0xce(%ebp)
081c20a9 +0x2cf:  mov    -0x8d(%ebp),%eax
081c20af +0x2d5:  mov    %eax,-0xca(%ebp)
081c20b5 +0x2db:  mov    -0x89(%ebp),%eax
081c20bb +0x2e1:  mov    %eax,-0xc6(%ebp)
081c20c1 +0x2e7:  mov    -0x85(%ebp),%eax
081c20c7 +0x2ed:  mov    %eax,-0xc2(%ebp)
081c20cd +0x2f3:  mov    -0x81(%ebp),%eax
081c20d3 +0x2f9:  mov    %eax,-0xbe(%ebp)
081c20d9 +0x2ff:  mov    -0x7d(%ebp),%eax
081c20dc +0x302:  mov    %eax,-0xba(%ebp)
081c20e2 +0x308:  mov    -0x79(%ebp),%eax
081c20e5 +0x30b:  mov    %eax,-0xb6(%ebp)
081c20eb +0x311:  mov    -0x75(%ebp),%eax
081c20ee +0x314:  mov    %eax,-0xb2(%ebp)
081c20f4 +0x31a:  mov    -0x71(%ebp),%eax
081c20f7 +0x31d:  mov    %eax,-0xae(%ebp)
081c20fd +0x323:  movzbl -0x6d(%ebp),%eax
081c2101 +0x327:  mov    %al,-0xaa(%ebp)
081c2107 +0x32d:  cmpl   $0x3,-0x24(%ebp)
081c210b +0x331:  jne    081c2122 <+0x348>
081c210d +0x333:  lea    -0xa9(%ebp),%eax
081c2113 +0x339:  mov    %eax,0x4(%esp)
081c2117 +0x33d:  mov    0xc(%ebp),%eax
081c211a +0x340:  mov    %eax,(%esp)
081c211d +0x343:  call   08146c20 <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item>  ; Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&)
081c2122 +0x348:  mov    -0xa7(%ebp),%eax
081c2128 +0x34e:  cmp    $0xbdd,%eax
081c212d +0x353:  jne    081c2161 <+0x387>
081c212f +0x355:  mov    -0x28(%ebp),%edx
081c2132 +0x358:  mov    -0x34(%ebp),%eax
081c2135 +0x35b:  add    $0xc8,%edx
081c213b +0x361:  mov    0xf(%eax,%edx,4),%eax
081c213f +0x365:  mov    %eax,%ebx
081c2141 +0x367:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
081c2146 +0x36c:  mov    %ebx,0xc(%esp)
081c214a +0x370:  movl   $0x3,0x8(%esp)
081c2152 +0x378:  mov    0xc(%ebp),%edx
081c2155 +0x37b:  mov    %edx,0x4(%esp)
081c2159 +0x37f:  mov    %eax,(%esp)
081c215c +0x382:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
081c2161 +0x387:  mov    0xc(%ebp),%eax
081c2164 +0x38a:  mov    %eax,(%esp)
081c2167 +0x38d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c216c +0x392:  cmp    $0x3,%eax
081c216f +0x395:  jne    081c218f <+0x3b5>
081c2171 +0x397:  cmpl   $0x5,-0x24(%ebp)
081c2175 +0x39b:  jne    081c218f <+0x3b5>
081c2177 +0x39d:  mov    -0x28(%ebp),%edx
081c217a +0x3a0:  mov    -0x34(%ebp),%eax
081c217d +0x3a3:  add    $0x64,%edx
081c2180 +0x3a6:  mov    0xf(%eax,%edx,4),%eax
081c2184 +0x3aa:  test   %eax,%eax
081c2186 +0x3ac:  jne    081c218f <+0x3b5>
081c2188 +0x3ae:  mov    $0x1,%eax
081c218d +0x3b3:  jmp    081c2194 <+0x3ba>
081c218f +0x3b5:  mov    $0x0,%eax
081c2194 +0x3ba:  test   %al,%al
081c2196 +0x3bc:  je     081c21d0 <+0x3f6>
081c2198 +0x3be:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081c219d +0x3c3:  movl   $0x46,0x8(%esp)
081c21a5 +0x3cb:  mov    0xc(%ebp),%edx
081c21a8 +0x3ce:  mov    %edx,0x4(%esp)
081c21ac +0x3d2:  mov    %eax,(%esp)
081c21af +0x3d5:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081c21b4 +0x3da:  mov    %eax,-0x18(%ebp)
081c21b7 +0x3dd:  cmpl   $0x0,-0x18(%ebp)
081c21bb +0x3e1:  je     081c21d0 <+0x3f6>
081c21bd +0x3e3:  mov    -0x18(%ebp),%edx
081c21c0 +0x3e6:  mov    -0x3c(%ebp),%eax
081c21c3 +0x3e9:  mov    %edx,0x4(%eax)
081c21c6 +0x3ec:  mov    $0x0,%ebx
081c21cb +0x3f1:  jmp    081c2786 <+0x9ac>
081c21d0 +0x3f6:  movl   $0x0,-0x20(%ebp)
081c21d7 +0x3fd:  mov    -0x28(%ebp),%edx
081c21da +0x400:  mov    -0x34(%ebp),%eax
081c21dd +0x403:  add    $0xc8,%edx
081c21e3 +0x409:  mov    0xf(%eax,%edx,4),%ebx
081c21e7 +0x40d:  mov    -0x28(%ebp),%edx
081c21ea +0x410:  mov    -0x34(%ebp),%eax
081c21ed +0x413:  add    $0x64,%edx
081c21f0 +0x416:  mov    0xf(%eax,%edx,4),%ecx
081c21f4 +0x41a:  mov    -0x28(%ebp),%edx
081c21f7 +0x41d:  mov    -0x34(%ebp),%eax
081c21fa +0x420:  add    $0x68,%edx
081c21fd +0x423:  movzwl 0x7(%eax,%edx,2),%eax
081c2202 +0x428:  movswl %ax,%edx
081c2205 +0x42b:  mov    -0x34(%ebp),%eax
081c2208 +0x42e:  movzbl 0xd(%eax),%eax
081c220c +0x432:  movsbl %al,%eax
081c220f +0x435:  mov    -0x24(%ebp),%esi
081c2212 +0x438:  mov    %esi,0x14(%esp)
081c2216 +0x43c:  mov    %ebx,0x10(%esp)
081c221a +0x440:  mov    %ecx,0xc(%esp)
081c221e +0x444:  mov    %edx,0x8(%esp)
081c2222 +0x448:  mov    %eax,0x4(%esp)
081c2226 +0x44c:  mov    0xc(%ebp),%eax
081c2229 +0x44f:  mov    %eax,(%esp)
081c222c +0x452:  call   0866285c <_ZN5CUser11delete_itemEcimi14eItemDelReason>  ; CUser::delete_item(char, int, unsigned long, int, eItemDelReason)
081c2231 +0x457:  mov    %eax,-0x20(%ebp)
081c2234 +0x45a:  cmpl   $0x0,-0x20(%ebp)
081c2238 +0x45e:  jle    081c249a <+0x6c0>
081c223e +0x464:  mov    -0x34(%ebp),%eax
081c2241 +0x467:  movzbl 0xe(%eax),%eax
081c2245 +0x46b:  movsbl %al,%ebx
081c2248 +0x46e:  movl   $0x5,0xc(%esp)
081c2250 +0x476:  movl   $0xc2a,0x8(%esp)
081c2258 +0x47e:  movl   $&_ZZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c2260 +0x486:  lea    -0x4c(%ebp),%eax
081c2263 +0x489:  mov    %eax,(%esp)
081c2266 +0x48c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c226b +0x491:  mov    %ebx,0xc(%esp)
081c226f +0x495:  mov    -0x28(%ebp),%eax
081c2272 +0x498:  mov    %eax,0x8(%esp)
081c2276 +0x49c:  movl   $"delete_item failed in the middle of deleting items. %d/%d",0x4(%esp)
081c227e +0x4a4:  lea    -0x4c(%ebp),%eax
081c2281 +0x4a7:  mov    %eax,(%esp)
081c2284 +0x4aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c2289 +0x4af:  lea    -0x5c(%ebp),%eax
081c228c +0x4b2:  mov    %eax,(%esp)
081c228f +0x4b5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c2294 +0x4ba:  cmpl   $0x1,-0x28(%ebp)
081c2298 +0x4be:  jle    081c23c4 <+0x5ea>
081c229e +0x4c4:  lea    -0x68(%ebp),%eax
081c22a1 +0x4c7:  mov    %eax,(%esp)
081c22a4 +0x4ca:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c22a9 +0x4cf:  movl   $0x12,0x8(%esp)
081c22b1 +0x4d7:  movl   $0x1,0x4(%esp)
081c22b9 +0x4df:  lea    -0x68(%ebp),%eax
081c22bc +0x4e2:  mov    %eax,(%esp)
081c22bf +0x4e5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c22c4 +0x4ea:  movl   $0x1,0x4(%esp)
081c22cc +0x4f2:  lea    -0x68(%ebp),%eax
081c22cf +0x4f5:  mov    %eax,(%esp)
081c22d2 +0x4f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c22d7 +0x4fd:  mov    -0x34(%ebp),%eax
081c22da +0x500:  movzbl 0xd(%eax),%eax
081c22de +0x504:  movsbl %al,%eax
081c22e1 +0x507:  mov    %eax,0x4(%esp)
081c22e5 +0x50b:  lea    -0x68(%ebp),%eax
081c22e8 +0x50e:  mov    %eax,(%esp)
081c22eb +0x511:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c22f0 +0x516:  mov    -0x28(%ebp),%eax
081c22f3 +0x519:  sub    $0x1,%eax
081c22f6 +0x51c:  mov    %eax,0x4(%esp)
081c22fa +0x520:  lea    -0x68(%ebp),%eax
081c22fd +0x523:  mov    %eax,(%esp)
081c2300 +0x526:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c2305 +0x52b:  movl   $0x0,-0x14(%ebp)
081c230c +0x532:  jmp    081c236a <+0x590>
081c230e +0x534:  mov    -0x14(%ebp),%edx
081c2311 +0x537:  mov    -0x34(%ebp),%eax
081c2314 +0x53a:  add    $0x68,%edx
081c2317 +0x53d:  movzwl 0x7(%eax,%edx,2),%eax
081c231c +0x542:  cwtl
081c231d +0x543:  mov    %eax,0x4(%esp)
081c2321 +0x547:  lea    -0x68(%ebp),%eax
081c2324 +0x54a:  mov    %eax,(%esp)
081c2327 +0x54d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c232c +0x552:  mov    -0x14(%ebp),%edx
081c232f +0x555:  mov    -0x34(%ebp),%eax
081c2332 +0x558:  add    $0xc8,%edx
081c2338 +0x55e:  mov    0xf(%eax,%edx,4),%eax
081c233c +0x562:  mov    %eax,0x4(%esp)
081c2340 +0x566:  lea    -0x68(%ebp),%eax
081c2343 +0x569:  mov    %eax,(%esp)
081c2346 +0x56c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c234b +0x571:  mov    -0x14(%ebp),%edx
081c234e +0x574:  mov    -0x34(%ebp),%eax
081c2351 +0x577:  movzwl 0xf(%eax,%edx,2),%eax
081c2356 +0x57c:  cwtl
081c2357 +0x57d:  mov    %eax,0x4(%esp)
081c235b +0x581:  lea    -0x68(%ebp),%eax
081c235e +0x584:  mov    %eax,(%esp)
081c2361 +0x587:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c2366 +0x58c:  addl   $0x1,-0x14(%ebp)
081c236a +0x590:  mov    -0x28(%ebp),%eax
081c236d +0x593:  sub    $0x1,%eax
081c2370 +0x596:  cmp    -0x14(%ebp),%eax
081c2373 +0x599:  setg   %al
081c2376 +0x59c:  test   %al,%al
081c2378 +0x59e:  jne    081c230e <+0x534>
081c237a +0x5a0:  movl   $0x1,0x4(%esp)
081c2382 +0x5a8:  lea    -0x68(%ebp),%eax
081c2385 +0x5ab:  mov    %eax,(%esp)
081c2388 +0x5ae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c238d +0x5b3:  lea    -0x68(%ebp),%eax
081c2390 +0x5b6:  mov    %eax,0x4(%esp)
081c2394 +0x5ba:  mov    0xc(%ebp),%eax
081c2397 +0x5bd:  mov    %eax,(%esp)
081c239a +0x5c0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c239f +0x5c5:  jmp    081c23b9 <+0x5df>
081c23a1 +0x5c7:  mov    %edx,%ebx
081c23a3 +0x5c9:  mov    %eax,%esi
081c23a5 +0x5cb:  lea    -0x68(%ebp),%eax
081c23a8 +0x5ce:  mov    %eax,(%esp)
081c23ab +0x5d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c23b0 +0x5d6:  mov    %esi,%eax
081c23b2 +0x5d8:  mov    %ebx,%edx
081c23b4 +0x5da:  jmp    081c247f <+0x6a5>
081c23b9 +0x5df:  lea    -0x68(%ebp),%eax
081c23bc +0x5e2:  mov    %eax,(%esp)
081c23bf +0x5e5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c23c4 +0x5ea:  movl   $0x12,0x8(%esp)
081c23cc +0x5f2:  movl   $0x1,0x4(%esp)
081c23d4 +0x5fa:  lea    -0x5c(%ebp),%eax
081c23d7 +0x5fd:  mov    %eax,(%esp)
081c23da +0x600:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c23df +0x605:  movl   $0x0,0x4(%esp)
081c23e7 +0x60d:  lea    -0x5c(%ebp),%eax
081c23ea +0x610:  mov    %eax,(%esp)
081c23ed +0x613:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c23f2 +0x618:  mov    -0x20(%ebp),%eax
081c23f5 +0x61b:  mov    %eax,0x4(%esp)
081c23f9 +0x61f:  lea    -0x5c(%ebp),%eax
081c23fc +0x622:  mov    %eax,(%esp)
081c23ff +0x625:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c2404 +0x62a:  mov    -0x34(%ebp),%eax
081c2407 +0x62d:  movzbl 0xd(%eax),%eax
081c240b +0x631:  movsbl %al,%eax
081c240e +0x634:  mov    %eax,0x4(%esp)
081c2412 +0x638:  lea    -0x5c(%ebp),%eax
081c2415 +0x63b:  mov    %eax,(%esp)
081c2418 +0x63e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c241d +0x643:  movl   $0x1,0x4(%esp)
081c2425 +0x64b:  lea    -0x5c(%ebp),%eax
081c2428 +0x64e:  mov    %eax,(%esp)
081c242b +0x651:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c2430 +0x656:  lea    -0x5c(%ebp),%eax
081c2433 +0x659:  mov    %eax,0x4(%esp)
081c2437 +0x65d:  mov    0xc(%ebp),%eax
081c243a +0x660:  mov    %eax,(%esp)
081c243d +0x663:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c2442 +0x668:  mov    0xc(%ebp),%eax
081c2445 +0x66b:  mov    %eax,(%esp)
081c2448 +0x66e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c244d +0x673:  mov    %eax,0xc(%esp)
081c2451 +0x677:  movl   $0x0,0x8(%esp)
081c2459 +0x67f:  movl   $&_ZZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c2461 +0x687:  movl   $0xc48,(%esp)
081c2468 +0x68e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c246d +0x693:  mov    %eax,%ebx
081c246f +0x695:  lea    -0x5c(%ebp),%eax
081c2472 +0x698:  mov    %eax,(%esp)
081c2475 +0x69b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c247a +0x6a0:  jmp    081c2786 <+0x9ac>
081c247f +0x6a5:  mov    %edx,%ebx
081c2481 +0x6a7:  mov    %eax,%esi
081c2483 +0x6a9:  lea    -0x5c(%ebp),%eax
081c2486 +0x6ac:  mov    %eax,(%esp)
081c2489 +0x6af:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c248e +0x6b4:  mov    %esi,%eax
081c2490 +0x6b6:  mov    %ebx,%edx
081c2492 +0x6b8:  mov    %eax,(%esp)
081c2495 +0x6bb:  call   08ae3750 <_Unwind_Resume>
081c249a +0x6c0:  lea    -0xe6(%ebp),%eax
081c24a0 +0x6c6:  mov    %eax,(%esp)
081c24a3 +0x6c9:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
081c24a8 +0x6ce:  xor    $0x1,%eax
081c24ab +0x6d1:  test   %al,%al
081c24ad +0x6d3:  je     081c24bc <+0x6e2>
081c24af +0x6d5:  cmpl   $0x5,-0x24(%ebp)
081c24b3 +0x6d9:  jne    081c24bc <+0x6e2>
081c24b5 +0x6db:  mov    $0x1,%eax
081c24ba +0x6e0:  jmp    081c24c1 <+0x6e7>
081c24bc +0x6e2:  mov    $0x0,%eax
081c24c1 +0x6e7:  test   %al,%al
081c24c3 +0x6e9:  je     081c2531 <+0x757>
081c24c5 +0x6eb:  mov    -0xe4(%ebp),%eax
081c24cb +0x6f1:  mov    %eax,%ebx
081c24cd +0x6f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c24d2 +0x6f8:  mov    %ebx,0x4(%esp)
081c24d6 +0x6fc:  mov    %eax,(%esp)
081c24d9 +0x6ff:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c24de +0x704:  mov    %eax,-0x10(%ebp)
081c24e1 +0x707:  cmpl   $0x0,-0x10(%ebp)
081c24e5 +0x70b:  je     081c2531 <+0x757>
081c24e7 +0x70d:  mov    -0x10(%ebp),%eax
081c24ea +0x710:  mov    %eax,(%esp)
081c24ed +0x713:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081c24f2 +0x718:  test   %al,%al
081c24f4 +0x71a:  je     081c250c <+0x732>
081c24f6 +0x71c:  mov    -0x28(%ebp),%edx
081c24f9 +0x71f:  mov    -0x34(%ebp),%eax
081c24fc +0x722:  add    $0xc8,%edx
081c2502 +0x728:  mov    0xf(%eax,%edx,4),%eax
081c2506 +0x72c:  mov    %eax,-0xdf(%ebp)
081c250c +0x732:  movl   $0x0,0xc(%esp)
081c2514 +0x73a:  movl   $0x0,0x8(%esp)
081c251c +0x742:  lea    -0xe6(%ebp),%eax
081c2522 +0x748:  mov    %eax,0x4(%esp)
081c2526 +0x74c:  mov    0xc(%ebp),%eax
081c2529 +0x74f:  mov    %eax,(%esp)
081c252c +0x752:  call   086472c0 <_ZN5CUser14Add_RedeemInfoERK10Inven_Itemib>  ; CUser::Add_RedeemInfo(Inven_Item const&, int, bool)
081c2531 +0x757:  mov    -0x28(%ebp),%edx
081c2534 +0x75a:  mov    -0x34(%ebp),%eax
081c2537 +0x75d:  add    $0x64,%edx
081c253a +0x760:  mov    0xf(%eax,%edx,4),%eax
081c253e +0x764:  mov    %eax,%ebx
081c2540 +0x766:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c2545 +0x76b:  mov    %ebx,0x4(%esp)
081c2549 +0x76f:  mov    %eax,(%esp)
081c254c +0x772:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c2551 +0x777:  mov    %eax,-0x1c(%ebp)
081c2554 +0x77a:  cmpl   $0x0,-0x1c(%ebp)
081c2558 +0x77e:  je     081c26db <+0x901>
081c255e +0x784:  movl   $0x0,-0x6c(%ebp)
081c2565 +0x78b:  mov    -0x28(%ebp),%edx
081c2568 +0x78e:  mov    -0x34(%ebp),%eax
081c256b +0x791:  add    $0xc8,%edx
081c2571 +0x797:  mov    0xf(%eax,%edx,4),%eax
081c2575 +0x79b:  movswl %ax,%ebx
081c2578 +0x79e:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081c257d +0x7a3:  lea    -0x6c(%ebp),%edx
081c2580 +0x7a6:  mov    %edx,0x14(%esp)
081c2584 +0x7aa:  movl   $0x0,0x10(%esp)
081c258c +0x7b2:  mov    %ebx,0xc(%esp)
081c2590 +0x7b6:  mov    -0x1c(%ebp),%edx
081c2593 +0x7b9:  mov    %edx,0x8(%esp)
081c2597 +0x7bd:  lea    -0xa9(%ebp),%edx
081c259d +0x7c3:  mov    %edx,0x4(%esp)
081c25a1 +0x7c7:  mov    %eax,(%esp)
081c25a4 +0x7ca:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
081c25a9 +0x7cf:  mov    0xc(%ebp),%eax
081c25ac +0x7d2:  mov    %eax,(%esp)
081c25af +0x7d5:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c25b4 +0x7da:  cmp    $0x8,%eax
081c25b7 +0x7dd:  setne  %al
081c25ba +0x7e0:  test   %al,%al
081c25bc +0x7e2:  je     081c25e3 <+0x809>
081c25be +0x7e4:  mov    -0x6c(%ebp),%eax
081c25c1 +0x7e7:  mov    %eax,%ebx
081c25c3 +0x7e9:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
081c25c8 +0x7ee:  mov    %ebx,0xc(%esp)
081c25cc +0x7f2:  mov    0xc(%ebp),%edx
081c25cf +0x7f5:  mov    %edx,0x8(%esp)
081c25d3 +0x7f9:  movl   $0x16,0x4(%esp)
081c25db +0x801:  mov    %eax,(%esp)
081c25de +0x804:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
081c25e3 +0x809:  mov    0xc(%ebp),%eax
081c25e6 +0x80c:  mov    %eax,(%esp)
081c25e9 +0x80f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c25ee +0x814:  cmp    $0x5,%eax
081c25f1 +0x817:  sete   %al
081c25f4 +0x81a:  test   %al,%al
081c25f6 +0x81c:  je     081c26db <+0x901>
081c25fc +0x822:  mov    -0x28(%ebp),%edx
081c25ff +0x825:  mov    -0x34(%ebp),%eax
081c2602 +0x828:  movzwl 0xf(%eax,%edx,2),%eax
081c2607 +0x82d:  cmp    $0x2,%ax
081c260b +0x831:  jne    081c2649 <+0x86f>
081c260d +0x833:  mov    -0x28(%ebp),%edx
081c2610 +0x836:  mov    -0x34(%ebp),%eax
081c2613 +0x839:  add    $0xc8,%edx
081c2619 +0x83f:  mov    0xf(%eax,%edx,4),%ebx
081c261d +0x843:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081c2622 +0x848:  movl   $0x67,0x10(%esp)
081c262a +0x850:  mov    0xc(%ebp),%edx
081c262d +0x853:  mov    %edx,0xc(%esp)
081c2631 +0x857:  mov    %ebx,0x8(%esp)
081c2635 +0x85b:  mov    -0x1c(%ebp),%edx
081c2638 +0x85e:  mov    %edx,0x4(%esp)
081c263c +0x862:  mov    %eax,(%esp)
081c263f +0x865:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
081c2644 +0x86a:  jmp    081c26db <+0x901>
081c2649 +0x86f:  mov    -0x28(%ebp),%edx
081c264c +0x872:  mov    -0x34(%ebp),%eax
081c264f +0x875:  movzwl 0xf(%eax,%edx,2),%eax
081c2654 +0x87a:  cmp    $0x3,%ax
081c2658 +0x87e:  jne    081c2693 <+0x8b9>
081c265a +0x880:  mov    -0x28(%ebp),%edx
081c265d +0x883:  mov    -0x34(%ebp),%eax
081c2660 +0x886:  add    $0xc8,%edx
081c2666 +0x88c:  mov    0xf(%eax,%edx,4),%ebx
081c266a +0x890:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081c266f +0x895:  movl   $0x68,0x10(%esp)
081c2677 +0x89d:  mov    0xc(%ebp),%edx
081c267a +0x8a0:  mov    %edx,0xc(%esp)
081c267e +0x8a4:  mov    %ebx,0x8(%esp)
081c2682 +0x8a8:  mov    -0x1c(%ebp),%edx
081c2685 +0x8ab:  mov    %edx,0x4(%esp)
081c2689 +0x8af:  mov    %eax,(%esp)
081c268c +0x8b2:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
081c2691 +0x8b7:  jmp    081c26db <+0x901>
081c2693 +0x8b9:  mov    -0x28(%ebp),%edx
081c2696 +0x8bc:  mov    -0x34(%ebp),%eax
081c2699 +0x8bf:  movzwl 0xf(%eax,%edx,2),%eax
081c269e +0x8c4:  cmp    $0x4,%ax
081c26a2 +0x8c8:  jne    081c26db <+0x901>
081c26a4 +0x8ca:  mov    -0x28(%ebp),%edx
081c26a7 +0x8cd:  mov    -0x34(%ebp),%eax
081c26aa +0x8d0:  add    $0xc8,%edx
081c26b0 +0x8d6:  mov    0xf(%eax,%edx,4),%ebx
081c26b4 +0x8da:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081c26b9 +0x8df:  movl   $0x69,0x10(%esp)
081c26c1 +0x8e7:  mov    0xc(%ebp),%edx
081c26c4 +0x8ea:  mov    %edx,0xc(%esp)
081c26c8 +0x8ee:  mov    %ebx,0x8(%esp)
081c26cc +0x8f2:  mov    -0x1c(%ebp),%edx
081c26cf +0x8f5:  mov    %edx,0x4(%esp)
081c26d3 +0x8f9:  mov    %eax,(%esp)
081c26d6 +0x8fc:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
081c26db +0x901:  addl   $0x1,-0x28(%ebp)
081c26df +0x905:  mov    -0x34(%ebp),%eax
081c26e2 +0x908:  movzbl 0xe(%eax),%eax
081c26e6 +0x90c:  movsbl %al,%eax
081c26e9 +0x90f:  cmp    -0x28(%ebp),%eax
081c26ec +0x912:  setg   %al
081c26ef +0x915:  test   %al,%al
081c26f1 +0x917:  jne    081c1f7d <+0x1a3>
081c26f7 +0x91d:  mov    -0x34(%ebp),%eax
081c26fa +0x920:  movzbl 0xd(%eax),%edx
081c26fe +0x924:  mov    -0x3c(%ebp),%eax
081c2701 +0x927:  mov    %dl,0x8(%eax)
081c2704 +0x92a:  mov    -0x34(%ebp),%eax
081c2707 +0x92d:  movzbl 0xe(%eax),%edx
081c270b +0x931:  mov    -0x3c(%ebp),%eax
081c270e +0x934:  mov    %dl,0x9(%eax)
081c2711 +0x937:  movl   $0x0,-0xc(%ebp)
081c2718 +0x93e:  jmp    081c276d <+0x993>
081c271a +0x940:  mov    -0xc(%ebp),%ecx
081c271d +0x943:  mov    -0xc(%ebp),%edx
081c2720 +0x946:  mov    -0x34(%ebp),%eax
081c2723 +0x949:  add    $0x68,%edx
081c2726 +0x94c:  movzwl 0x7(%eax,%edx,2),%edx
081c272b +0x951:  mov    -0x3c(%ebp),%eax
081c272e +0x954:  add    $0x68,%ecx
081c2731 +0x957:  mov    %dx,0x2(%eax,%ecx,2)
081c2736 +0x95c:  mov    -0xc(%ebp),%ecx
081c2739 +0x95f:  mov    -0xc(%ebp),%edx
081c273c +0x962:  mov    -0x34(%ebp),%eax
081c273f +0x965:  add    $0xc8,%edx
081c2745 +0x96b:  mov    0xf(%eax,%edx,4),%edx
081c2749 +0x96f:  mov    -0x3c(%ebp),%eax
081c274c +0x972:  add    $0x64,%ecx
081c274f +0x975:  mov    %edx,0xc(%eax,%ecx,4)
081c2753 +0x979:  mov    -0xc(%ebp),%edx
081c2756 +0x97c:  mov    -0xc(%ebp),%ecx
081c2759 +0x97f:  mov    -0x34(%ebp),%eax
081c275c +0x982:  movzwl 0xf(%eax,%ecx,2),%ecx
081c2761 +0x987:  mov    -0x3c(%ebp),%eax
081c2764 +0x98a:  mov    %cx,0xa(%eax,%edx,2)
081c2769 +0x98f:  addl   $0x1,-0xc(%ebp)
081c276d +0x993:  mov    -0x34(%ebp),%eax
081c2770 +0x996:  movzbl 0xe(%eax),%eax
081c2774 +0x99a:  movsbl %al,%eax
081c2777 +0x99d:  cmp    -0xc(%ebp),%eax
081c277a +0x9a0:  setg   %al
081c277d +0x9a3:  test   %al,%al
081c277f +0x9a5:  jne    081c271a <+0x940>
081c2781 +0x9a7:  mov    $0x0,%ebx
081c2786 +0x9ac:  mov    %ebx,%eax
081c2788 +0x9ae:  lea    -0x8(%ebp),%esp
081c278b +0x9b1:  add    $0x0,%esp
081c278e +0x9b4:  pop    %ebx
081c278f +0x9b5:  pop    %esi
081c2790 +0x9b6:  pop    %ebp
081c2791 +0x9b7:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteItem::process @ 0x81c1dda

/* DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteItem::process
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HeroMissionEvent *pHVar8;
  CDataManager *pCVar9;
  Store *this_00;
  CValueStatistic *pCVar10;
  CCubeStatistic *pCVar11;
  Inven_Item local_ea [2];
  undefined2 uStack_e8;
  undefined2 local_e6;
  undefined1 uStack_e4;
  undefined4 uStack_e3;
  undefined1 uStack_df;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined1 local_ae;
  Inven_Item local_ad [2];
  undefined2 uStack_ab;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined1 local_71;
  int local_70;
  PacketGuard local_6c [12];
  PacketGuard local_60 [12];
  int local_54;
  cMyTrace local_50 [16];
  ParamBase *local_40;
  char local_39;
  MSG_BASE *local_38;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CItem *local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  local_40 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_40 + 4) = uVar4;
  if (*(int *)(local_40 + 4) < 1) {
    if (*(int *)(local_40 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0xb8e,
                       "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_40 + 4),uVar5);
    }
    else {
      local_39 = exercise_mode(this,param_1,param_2,local_40);
      if (local_39 == '\0') {
        local_38 = param_2;
        local_54 = 6;
        if (param_2[0xd] == (MSG_BASE)0x1) {
          local_54 = 2;
        }
        else if (param_2[0xd] == (MSG_BASE)0x3) {
          local_54 = 0;
        }
        if (local_54 == 2) {
          *(undefined4 *)(local_40 + 4) = 0x17;
          *(MSG_BASE *)(local_40 + 8) = param_2[0xd];
          uVar4 = 0;
        }
        else {
          local_31 = '\0';
          for (local_30 = 0; local_30 < (char)param_2[0xe]; local_30 = local_30 + 1) {
            if (*(short *)(param_2 + local_30 * 2 + 0xf) < 2) {
              local_31 = '\x01';
              break;
            }
          }
          if (local_31 != '\0') {
            uVar4 = restricted_check((CUser *)this,(MSG_BASE *)param_1);
            *(undefined4 *)(local_40 + 4) = uVar4;
            if (*(int *)(local_40 + 4) != 0) {
              *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
              return 0;
            }
          }
          for (local_2c = 0; local_2c < (char)local_38[0xe]; local_2c = local_2c + 1) {
            uVar4 = condition_check(this,param_1,param_2,(INVEN_TYPE *)&local_54,local_2c);
            *(undefined4 *)(local_40 + 4) = uVar4;
            if (*(int *)(local_40 + 4) != 0) {
              *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
              return 0;
            }
            local_28 = 3;
            if (*(short *)(local_38 + local_2c * 2 + 0xf) == 1) {
              local_28 = 5;
              iVar6 = CUser::get_state(param_1);
              if (iVar6 != 3) {
                local_28 = 6;
              }
            }
            iVar6 = (int)*(short *)(local_38 + (local_2c + 0x68) * 2 + 7);
            GetInvenTypeFromItemSpace((int)(char)local_38[0xd]);
            iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)local_ad,iVar7);
            uStack_e8 = uStack_ab;
            local_e6 = local_a9;
            uStack_e4 = (undefined1)uStack_a7;
            uStack_e3._0_1_ = (undefined1)((ushort)uStack_a7 >> 8);
            uStack_e3._1_3_ = (undefined3)local_a5;
            uStack_df = (undefined1)((uint)local_a5 >> 0x18);
            local_de = local_a1;
            local_da = local_9d;
            local_d6 = local_99;
            local_d2 = local_95;
            local_ce = local_91;
            local_ca = local_8d;
            local_c6 = local_89;
            local_c2 = local_85;
            local_be = local_81;
            local_ba = local_7d;
            local_b6 = local_79;
            local_b2 = local_75;
            local_ae = local_71;
            if (local_28 == 3) {
              Global::CBossTowerFunc::UseItem(param_1,local_ad);
            }
            if (CONCAT22(local_a9,uStack_ab) == 0xbdd) {
              iVar6 = *(int *)(local_38 + (local_2c + 200) * 4 + 0xf);
              pHVar8 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
              HeroMissionEvent::processMission(pHVar8,param_1,3,iVar6);
            }
            iVar7 = CUser::get_state(param_1);
            if (((iVar7 == 3) && (local_28 == 5)) &&
               (*(int *)(local_38 + (local_2c + 100) * 4 + 0xf) == 0)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) &&
               (local_1c = CSecu_ProtectionField::Check
                                     (GlobalData::s_pSecuProtectionField,param_1,0x46,iVar6),
               local_1c != 0)) {
              *(int *)(local_40 + 4) = local_1c;
              return 0;
            }
            local_24 = 0;
            local_24 = CUser::delete_item(param_1,(int)(char)local_38[0xd],
                                          (int)*(short *)(local_38 + (local_2c + 0x68) * 2 + 7),
                                          *(undefined4 *)(local_38 + (local_2c + 100) * 4 + 0xf),
                                          *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf),
                                          local_28);
            if (0 < local_24) {
              MVar1 = local_38[0xe];
              cMyTrace::cMyTrace(local_50,
                                 "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0xc2a,5);
              cMyTrace::operator()
                        (local_50,"delete_item failed in the middle of deleting items. %d/%d",
                         local_2c,(int)(char)MVar1);
              PacketGuard::PacketGuard(local_60);
              if (1 < local_2c) {
                    /* try { // try from 081c22a4 to 081c22a8 has its CatchHandler @ 081c247f */
                PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 081c22bf to 081c239e has its CatchHandler @ 081c23a1 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x12);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
                InterfacePacketBuf::put_byte
                          ((InterfacePacketBuf *)local_6c,(int)(char)local_38[0xd]);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,local_2c + -1);
                for (local_18 = 0; local_18 < local_2c + -1; local_18 = local_18 + 1) {
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_6c,
                             (int)*(short *)(local_38 + (local_18 + 0x68) * 2 + 7));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_6c,
                             *(int *)(local_38 + (local_18 + 200) * 4 + 0xf));
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_6c,
                             (int)*(short *)(local_38 + local_18 * 2 + 0xf));
                }
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
                CUser::Send(param_1,local_6c);
                    /* try { // try from 081c23bf to 081c246c has its CatchHandler @ 081c247f */
                PacketGuard::~PacketGuard(local_6c);
              }
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x12);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,local_24);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)local_38[0xd]);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
              CUser::Send(param_1,local_60);
              uVar5 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0xc48,
                               "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar5);
              PacketGuard::~PacketGuard(local_60);
              return uVar4;
            }
            cVar3 = Inven_Item::isEmpty(local_ea);
            if ((cVar3 == '\x01') || (local_28 != 5)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              pCVar9 = (CDataManager *)G_CDataManager();
              local_14 = (CItem *)CDataManager::find_item(pCVar9,CONCAT22(local_e6,uStack_e8));
              if (local_14 != (CItem *)0x0) {
                cVar3 = CItem::is_stackable(local_14);
                if (cVar3 != '\0') {
                  uStack_e3 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                }
                CUser::Add_RedeemInfo(param_1,local_ea,0,false);
              }
            }
            iVar6 = *(int *)(local_38 + (local_2c + 100) * 4 + 0xf);
            pCVar9 = (CDataManager *)G_CDataManager();
            local_20 = (CItem *)CDataManager::find_item(pCVar9,iVar6);
            if (local_20 != (CItem *)0x0) {
              local_70 = 0;
              uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
              this_00 = (Store *)G_Store();
              Store::GetSellItemPrice(this_00,local_ad,local_20,(short)uVar4,false,&local_70);
              iVar7 = CUser::get_state(param_1);
              iVar6 = local_70;
              if (iVar7 != 8) {
                pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
                CValueStatistic::AddValueStatistic(pCVar10,0x16,param_1,iVar6);
              }
              iVar6 = CUser::get_state(param_1);
              if (iVar6 == 5) {
                if (*(short *)(local_38 + local_2c * 2 + 0xf) == 2) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x67);
                }
                else if (*(short *)(local_38 + local_2c * 2 + 0xf) == 3) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x68);
                }
                else if (*(short *)(local_38 + local_2c * 2 + 0xf) == 4) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x69);
                }
              }
            }
          }
          *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
          *(MSG_BASE *)(local_40 + 9) = local_38[0xe];
          for (local_10 = 0; local_10 < (char)local_38[0xe]; local_10 = local_10 + 1) {
            *(undefined2 *)(local_40 + (local_10 + 0x68) * 2 + 2) =
                 *(undefined2 *)(local_38 + (local_10 + 0x68) * 2 + 7);
            *(undefined4 *)(local_40 + (local_10 + 100) * 4 + 0xc) =
                 *(undefined4 *)(local_38 + (local_10 + 200) * 4 + 0xf);
            *(undefined2 *)(local_40 + local_10 * 2 + 10) =
                 *(undefined2 *)(local_38 + local_10 * 2 + 0xf);
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
