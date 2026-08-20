# makePickupItemHeader

`_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt`

`global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CDeathTower::CPacketHandler` | `0x0846991d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846991d  _GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt
#           global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)
# range [0x0846991d, 0x0846c093]
0846991d +0x0000:  push   %ebp
0846991e +0x0001:  mov    %esp,%ebp
08469920 +0x0003:  sub    $0x18,%esp
08469923 +0x0006:  movl   $0xffff,0x4(%esp)
0846992b +0x000e:  movl   $0x1,(%esp)
08469932 +0x0015:  call   084698dd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08469937 +0x001a:  leave
08469938 +0x001b:  ret
08469939 +0x001c:  nop
0846993a +0x001d:  push   %ebp
0846993b +0x001e:  mov    %esp,%ebp
0846993d +0x0020:  sub    $0x18,%esp
08469940 +0x0023:  mov    0x8(%ebp),%eax
08469943 +0x0026:  lea    0x674(%eax),%edx
08469949 +0x002c:  mov    0xc(%ebp),%eax
0846994c +0x002f:  mov    %eax,0x4(%esp)
08469950 +0x0033:  mov    %edx,(%esp)
08469953 +0x0036:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08469958 +0x003b:  mov    (%eax),%eax
0846995a +0x003d:  leave
0846995b +0x003e:  ret
0846995c +0x003f:  push   %ebp
0846995d +0x0040:  mov    %esp,%ebp
0846995f +0x0042:  mov    0x8(%ebp),%eax
08469962 +0x0045:  mov    0x680(%eax),%eax
08469968 +0x004b:  pop    %ebp
08469969 +0x004c:  ret
0846996a +0x004d:  push   %ebp
0846996b +0x004e:  mov    %esp,%ebp
0846996d +0x0050:  mov    0x8(%ebp),%eax
08469970 +0x0053:  movzbl 0x79(%eax),%eax
08469974 +0x0057:  pop    %ebp
08469975 +0x0058:  ret
08469976 +0x0059:  push   %ebp
08469977 +0x005a:  mov    %esp,%ebp
08469979 +0x005c:  mov    0x8(%ebp),%eax
0846997c +0x005f:  mov    0xc(%ebp),%edx
0846997f +0x0062:  mov    %edx,(%eax)
08469981 +0x0064:  mov    0x8(%ebp),%eax
08469984 +0x0067:  movl   $0x0,0x4(%eax)
0846998b +0x006e:  pop    %ebp
0846998c +0x006f:  ret
0846998d +0x0070:  nop
0846998e +0x0071:  push   %ebp
0846998f +0x0072:  mov    %esp,%ebp
08469991 +0x0074:  sub    $0x18,%esp
08469994 +0x0077:  mov    0x8(%ebp),%eax
08469997 +0x007a:  movl   $0x14,0x8(%esp)
0846999f +0x0082:  movl   $0x0,0x4(%esp)
084699a7 +0x008a:  mov    %eax,(%esp)
084699aa +0x008d:  call   0807dcc0 <_init+0x5b8>
084699af +0x0092:  mov    0x8(%ebp),%eax
084699b2 +0x0095:  mov    $0x3f800000,%edx
084699b7 +0x009a:  mov    %edx,0x14(%eax)
084699ba +0x009d:  mov    0x8(%ebp),%eax
084699bd +0x00a0:  movl   $0x1,0x18(%eax)
084699c4 +0x00a7:  leave
084699c5 +0x00a8:  ret
084699c6 +0x00a9:  push   %ebp
084699c7 +0x00aa:  mov    %esp,%ebp
084699c9 +0x00ac:  sub    $0x18,%esp
084699cc +0x00af:  mov    0x8(%ebp),%eax
084699cf +0x00b2:  mov    %eax,(%esp)
084699d2 +0x00b5:  call   0846998e <+0x71>
084699d7 +0x00ba:  leave
084699d8 +0x00bb:  ret
084699d9 +0x00bc:  nop
084699da +0x00bd:  push   %ebp
084699db +0x00be:  mov    %esp,%ebp
084699dd +0x00c0:  mov    0x8(%ebp),%eax
084699e0 +0x00c3:  movzbl 0x6c(%eax),%eax
084699e4 +0x00c7:  pop    %ebp
084699e5 +0x00c8:  ret
084699e6 +0x00c9:  push   %ebp
084699e7 +0x00ca:  mov    %esp,%ebp
084699e9 +0x00cc:  mov    0x8(%ebp),%eax
084699ec +0x00cf:  mov    0x10(%eax),%eax
084699ef +0x00d2:  test   %eax,%eax
084699f1 +0x00d4:  je     084699ff <+0xe2>
084699f3 +0x00d6:  mov    0x8(%ebp),%eax
084699f6 +0x00d9:  mov    0x10(%eax),%eax
084699f9 +0x00dc:  mov    0xc(%ebp),%edx
084699fc +0x00df:  mov    %edx,0x2f(%eax)
084699ff +0x00e2:  pop    %ebp
08469a00 +0x00e3:  ret
08469a01 +0x00e4:  nop
08469a02 +0x00e5:  push   %ebp
08469a03 +0x00e6:  mov    %esp,%ebp
08469a05 +0x00e8:  mov    0x8(%ebp),%eax
08469a08 +0x00eb:  mov    0x10(%eax),%eax
08469a0b +0x00ee:  test   %eax,%eax
08469a0d +0x00f0:  je     08469a1e <+0x101>
08469a0f +0x00f2:  mov    0x8(%ebp),%eax
08469a12 +0x00f5:  mov    0x10(%eax),%eax
08469a15 +0x00f8:  mov    0xc(%ebp),%edx
08469a18 +0x00fb:  mov    %edx,0xe2e(%eax)
08469a1e +0x0101:  pop    %ebp
08469a1f +0x0102:  ret
08469a20 +0x0103:  push   %ebp
08469a21 +0x0104:  mov    %esp,%ebp
08469a23 +0x0106:  mov    0x8(%ebp),%eax
08469a26 +0x0109:  mov    0x10(%eax),%eax
08469a29 +0x010c:  test   %eax,%eax
08469a2b +0x010e:  je     08469a3c <+0x11f>
08469a2d +0x0110:  mov    0x8(%ebp),%eax
08469a30 +0x0113:  mov    0x10(%eax),%eax
08469a33 +0x0116:  mov    0xc(%ebp),%edx
08469a36 +0x0119:  mov    %edx,0xe2a(%eax)
08469a3c +0x011f:  pop    %ebp
08469a3d +0x0120:  ret
08469a3e +0x0121:  push   %ebp
08469a3f +0x0122:  mov    %esp,%ebp
08469a41 +0x0124:  mov    0x8(%ebp),%eax
08469a44 +0x0127:  mov    0x10(%eax),%eax
08469a47 +0x012a:  test   %eax,%eax
08469a49 +0x012c:  je     08469a5a <+0x13d>
08469a4b +0x012e:  mov    0x8(%ebp),%eax
08469a4e +0x0131:  mov    0x10(%eax),%eax
08469a51 +0x0134:  mov    0xc(%ebp),%edx
08469a54 +0x0137:  mov    %edx,0x127c(%eax)
08469a5a +0x013d:  pop    %ebp
08469a5b +0x013e:  ret
08469a5c +0x013f:  push   %ebp
08469a5d +0x0140:  mov    %esp,%ebp
08469a5f +0x0142:  mov    0x8(%ebp),%eax
08469a62 +0x0145:  mov    0xc(%ebp),%edx
08469a65 +0x0148:  mov    %edx,0x79660(%eax)
08469a6b +0x014e:  pop    %ebp
08469a6c +0x014f:  ret
08469a6d +0x0150:  nop
08469a6e +0x0151:  push   %ebp
08469a6f +0x0152:  mov    %esp,%ebp
08469a71 +0x0154:  sub    $0x4,%esp
08469a74 +0x0157:  mov    0xc(%ebp),%eax
08469a77 +0x015a:  mov    %ax,-0x4(%ebp)
08469a7b +0x015e:  mov    0x8(%ebp),%eax
08469a7e +0x0161:  movzwl -0x4(%ebp),%edx
08469a82 +0x0165:  mov    %dx,0x8d00e(%eax)
08469a89 +0x016c:  leave
08469a8a +0x016d:  ret
08469a8b +0x016e:  nop
08469a8c +0x016f:  push   %ebp
08469a8d +0x0170:  mov    %esp,%ebp
08469a8f +0x0172:  sub    $0x18,%esp
08469a92 +0x0175:  mov    0x8(%ebp),%eax
08469a95 +0x0178:  mov    %eax,(%esp)
08469a98 +0x017b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08469a9d +0x0180:  leave
08469a9e +0x0181:  ret
08469a9f +0x0182:  nop
08469aa0 +0x0183:  push   %ebp
08469aa1 +0x0184:  mov    %esp,%ebp
08469aa3 +0x0186:  sub    $0x18,%esp
08469aa6 +0x0189:  mov    0x8(%ebp),%eax
08469aa9 +0x018c:  mov    %eax,(%esp)
08469aac +0x018f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08469ab1 +0x0194:  leave
08469ab2 +0x0195:  ret
08469ab3 +0x0196:  nop
08469ab4 +0x0197:  push   %ebp
08469ab5 +0x0198:  mov    %esp,%ebp
08469ab7 +0x019a:  mov    0x8(%ebp),%eax
08469aba +0x019d:  mov    0x4(%eax),%eax
08469abd +0x01a0:  pop    %ebp
08469abe +0x01a1:  ret
08469abf +0x01a2:  nop
08469ac0 +0x01a3:  push   %ebp
08469ac1 +0x01a4:  mov    %esp,%ebp
08469ac3 +0x01a6:  sub    $0x18,%esp
08469ac6 +0x01a9:  mov    0x8(%ebp),%eax
08469ac9 +0x01ac:  mov    (%eax),%eax
08469acb +0x01ae:  mov    %eax,(%esp)
08469ace +0x01b1:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08469ad3 +0x01b6:  leave
08469ad4 +0x01b7:  ret
08469ad5 +0x01b8:  nop
08469ad6 +0x01b9:  push   %ebp
08469ad7 +0x01ba:  mov    %esp,%ebp
08469ad9 +0x01bc:  sub    $0x18,%esp
08469adc +0x01bf:  mov    0x8(%ebp),%eax
08469adf +0x01c2:  mov    (%eax),%eax
08469ae1 +0x01c4:  mov    %eax,(%esp)
08469ae4 +0x01c7:  call   08150908 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23d
08469ae9 +0x01cc:  leave
08469aea +0x01cd:  ret
08469aeb +0x01ce:  nop
08469aec +0x01cf:  push   %ebp
08469aed +0x01d0:  mov    %esp,%ebp
08469aef +0x01d2:  sub    $0x18,%esp
08469af2 +0x01d5:  mov    0x8(%ebp),%eax
08469af5 +0x01d8:  mov    (%eax),%eax
08469af7 +0x01da:  mov    %eax,(%esp)
08469afa +0x01dd:  call   08150914 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x249>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x249
08469aff +0x01e2:  leave
08469b00 +0x01e3:  ret
08469b01 +0x01e4:  nop
08469b02 +0x01e5:  push   %ebp
08469b03 +0x01e6:  mov    %esp,%ebp
08469b05 +0x01e8:  mov    0x8(%ebp),%eax
08469b08 +0x01eb:  mov    (%eax),%eax
08469b0a +0x01ed:  pop    %ebp
08469b0b +0x01ee:  ret
08469b0c +0x01ef:  push   %ebp
08469b0d +0x01f0:  mov    %esp,%ebp
08469b0f +0x01f2:  mov    0x8(%ebp),%eax
08469b12 +0x01f5:  mov    0x10(%eax),%eax
08469b15 +0x01f8:  pop    %ebp
08469b16 +0x01f9:  ret
08469b17 +0x01fa:  nop
08469b18 +0x01fb:  push   %ebp
08469b19 +0x01fc:  mov    %esp,%ebp
08469b1b +0x01fe:  mov    0x8(%ebp),%eax
08469b1e +0x0201:  mov    0xf8(%eax),%eax
08469b24 +0x0207:  pop    %ebp
08469b25 +0x0208:  ret
08469b26 +0x0209:  push   %ebp
08469b27 +0x020a:  mov    %esp,%ebp
08469b29 +0x020c:  mov    0x8(%ebp),%eax
08469b2c +0x020f:  mov    0x9c8(%eax),%eax
08469b32 +0x0215:  pop    %ebp
08469b33 +0x0216:  ret
08469b34 +0x0217:  push   %ebp
08469b35 +0x0218:  mov    %esp,%ebp
08469b37 +0x021a:  mov    0x8(%ebp),%eax
08469b3a +0x021d:  add    $0x9cc,%eax
08469b3f +0x0222:  pop    %ebp
08469b40 +0x0223:  ret
08469b41 +0x0224:  nop
08469b42 +0x0225:  push   %ebp
08469b43 +0x0226:  mov    %esp,%ebp
08469b45 +0x0228:  mov    0x8(%ebp),%eax
08469b48 +0x022b:  mov    (%eax),%eax
08469b4a +0x022d:  pop    %ebp
08469b4b +0x022e:  ret
08469b4c +0x022f:  push   %ebp
08469b4d +0x0230:  mov    %esp,%ebp
08469b4f +0x0232:  mov    0x8(%ebp),%eax
08469b52 +0x0235:  mov    0xc(%ebp),%edx
08469b55 +0x0238:  mov    %edx,(%eax)
08469b57 +0x023a:  pop    %ebp
08469b58 +0x023b:  ret
08469b59 +0x023c:  nop
08469b5a +0x023d:  push   %ebp
08469b5b +0x023e:  mov    %esp,%ebp
08469b5d +0x0240:  sub    $0x4,%esp
08469b60 +0x0243:  mov    0x10(%ebp),%eax
08469b63 +0x0246:  mov    %al,-0x4(%ebp)
08469b66 +0x0249:  mov    0xc(%ebp),%eax
08469b69 +0x024c:  mov    0x8(%ebp),%edx
08469b6c +0x024f:  movzbl -0x4(%ebp),%ecx
08469b70 +0x0253:  mov    %cl,0x4(%edx,%eax,1)
08469b74 +0x0257:  leave
08469b75 +0x0258:  ret
08469b76 +0x0259:  push   %ebp
08469b77 +0x025a:  mov    %esp,%ebp
08469b79 +0x025c:  mov    0xc(%ebp),%eax
08469b7c +0x025f:  mov    0x8(%ebp),%edx
08469b7f +0x0262:  movzbl 0x4(%edx,%eax,1),%eax
08469b84 +0x0267:  pop    %ebp
08469b85 +0x0268:  ret
08469b86 +0x0269:  push   %ebp
08469b87 +0x026a:  mov    %esp,%ebp
08469b89 +0x026c:  sub    $0x4,%esp
08469b8c +0x026f:  mov    0x10(%ebp),%eax
08469b8f +0x0272:  mov    %al,-0x4(%ebp)
08469b92 +0x0275:  mov    0xc(%ebp),%eax
08469b95 +0x0278:  mov    0x8(%ebp),%edx
08469b98 +0x027b:  movzbl -0x4(%ebp),%ecx
08469b9c +0x027f:  mov    %cl,0x8(%edx,%eax,1)
08469ba0 +0x0283:  leave
08469ba1 +0x0284:  ret
08469ba2 +0x0285:  push   %ebp
08469ba3 +0x0286:  mov    %esp,%ebp
08469ba5 +0x0288:  mov    0xc(%ebp),%eax
08469ba8 +0x028b:  mov    0x8(%ebp),%edx
08469bab +0x028e:  movzbl 0x8(%edx,%eax,1),%eax
08469bb0 +0x0293:  pop    %ebp
08469bb1 +0x0294:  ret
08469bb2 +0x0295:  push   %ebp
08469bb3 +0x0296:  mov    %esp,%ebp
08469bb5 +0x0298:  mov    0x8(%ebp),%eax
08469bb8 +0x029b:  mov    0x10(%eax),%edx
08469bbb +0x029e:  mov    0x8(%ebp),%eax
08469bbe +0x02a1:  mov    %edx,0x14(%eax)
08469bc1 +0x02a4:  mov    0x8(%ebp),%eax
08469bc4 +0x02a7:  mov    0x10(%eax),%eax
08469bc7 +0x02aa:  mov    %eax,%edx
08469bc9 +0x02ac:  add    0xc(%ebp),%edx
08469bcc +0x02af:  mov    0x8(%ebp),%eax
08469bcf +0x02b2:  mov    %edx,0x10(%eax)
08469bd2 +0x02b5:  pop    %ebp
08469bd3 +0x02b6:  ret
08469bd4 +0x02b7:  push   %ebp
08469bd5 +0x02b8:  mov    %esp,%ebp
08469bd7 +0x02ba:  mov    0x8(%ebp),%eax
08469bda +0x02bd:  mov    0x10(%eax),%eax
08469bdd +0x02c0:  pop    %ebp
08469bde +0x02c1:  ret
08469bdf +0x02c2:  nop
08469be0 +0x02c3:  push   %ebp
08469be1 +0x02c4:  mov    %esp,%ebp
08469be3 +0x02c6:  mov    0x8(%ebp),%eax
08469be6 +0x02c9:  mov    0x14(%eax),%eax
08469be9 +0x02cc:  pop    %ebp
08469bea +0x02cd:  ret
08469beb +0x02ce:  nop
08469bec +0x02cf:  push   %ebp
08469bed +0x02d0:  mov    %esp,%ebp
08469bef +0x02d2:  mov    0xc(%ebp),%eax
08469bf2 +0x02d5:  mov    0x8(%ebp),%edx
08469bf5 +0x02d8:  imul   $0x268,%eax,%eax
08469bfb +0x02de:  lea    (%edx,%eax,1),%eax
08469bfe +0x02e1:  add    $0x18,%eax
08469c01 +0x02e4:  mov    (%eax),%eax
08469c03 +0x02e6:  pop    %ebp
08469c04 +0x02e7:  ret
08469c05 +0x02e8:  nop
08469c06 +0x02e9:  push   %ebp
08469c07 +0x02ea:  mov    %esp,%ebp
08469c09 +0x02ec:  mov    0xc(%ebp),%eax
08469c0c +0x02ef:  imul   $0x268,%eax,%eax
08469c12 +0x02f5:  add    $0x10,%eax
08469c15 +0x02f8:  add    0x8(%ebp),%eax
08469c18 +0x02fb:  add    $0xc,%eax
08469c1b +0x02fe:  pop    %ebp
08469c1c +0x02ff:  ret
08469c1d +0x0300:  nop
08469c1e +0x0301:  push   %ebp
08469c1f +0x0302:  mov    %esp,%ebp
08469c21 +0x0304:  mov    0xc(%ebp),%edx
08469c24 +0x0307:  mov    0x8(%ebp),%eax
08469c27 +0x030a:  add    $0x26c,%edx
08469c2d +0x0310:  mov    0x8(%eax,%edx,4),%eax
08469c31 +0x0314:  pop    %ebp
08469c32 +0x0315:  ret
08469c33 +0x0316:  nop
08469c34 +0x0317:  push   %ebp
08469c35 +0x0318:  mov    %esp,%ebp
08469c37 +0x031a:  mov    0xc(%ebp),%edx
08469c3a +0x031d:  mov    0x8(%ebp),%eax
08469c3d +0x0320:  mov    0x8(%eax),%eax
08469c40 +0x0323:  cmp    %eax,%edx
08469c42 +0x0325:  jg     08469c4b <+0x32e>
08469c44 +0x0327:  mov    $0x0,%eax
08469c49 +0x032c:  jmp    08469c59 <+0x33c>
08469c4b +0x032e:  mov    0x8(%ebp),%eax
08469c4e +0x0331:  mov    0xc(%ebp),%edx
08469c51 +0x0334:  mov    %edx,0x8(%eax)
08469c54 +0x0337:  mov    $0x1,%eax
08469c59 +0x033c:  pop    %ebp
08469c5a +0x033d:  ret
08469c5b +0x033e:  nop
08469c5c +0x033f:  push   %ebp
08469c5d +0x0340:  mov    %esp,%ebp
08469c5f +0x0342:  mov    0x8(%ebp),%eax
08469c62 +0x0345:  mov    0x8(%eax),%eax
08469c65 +0x0348:  pop    %ebp
08469c66 +0x0349:  ret
08469c67 +0x034a:  nop
08469c68 +0x034b:  push   %ebp
08469c69 +0x034c:  mov    %esp,%ebp
08469c6b +0x034e:  mov    0xc(%ebp),%eax
08469c6e +0x0351:  lea    -0x48(%eax),%edx
08469c71 +0x0354:  mov    0x8(%ebp),%eax
08469c74 +0x0357:  add    $0x2cc,%edx
08469c7a +0x035d:  mov    0xc(%eax,%edx,4),%eax
08469c7e +0x0361:  cmp    0x10(%ebp),%eax
08469c81 +0x0364:  sete   %al
08469c84 +0x0367:  pop    %ebp
08469c85 +0x0368:  ret
08469c86 +0x0369:  push   %ebp
08469c87 +0x036a:  mov    %esp,%ebp
08469c89 +0x036c:  mov    0x8(%ebp),%eax
08469c8c +0x036f:  movl   $0x0,0x8(%eax)
08469c93 +0x0376:  pop    %ebp
08469c94 +0x0377:  ret
08469c95 +0x0378:  nop
08469c96 +0x0379:  push   %ebp
08469c97 +0x037a:  mov    %esp,%ebp
08469c99 +0x037c:  mov    0x8(%ebp),%eax
08469c9c +0x037f:  mov    0x4(%eax),%eax
08469c9f +0x0382:  mov    0xc(%ebp),%edx
08469ca2 +0x0385:  mov    %edx,%ecx
08469ca4 +0x0387:  sub    %eax,%ecx
08469ca6 +0x0389:  mov    %ecx,%eax
08469ca8 +0x038b:  cmp    0x10(%ebp),%eax
08469cab +0x038e:  ja     08469cbe <+0x3a1>
08469cad +0x0390:  mov    0x8(%ebp),%eax
08469cb0 +0x0393:  mov    0x8(%eax),%eax
08469cb3 +0x0396:  lea    0x1(%eax),%edx
08469cb6 +0x0399:  mov    0x8(%ebp),%eax
08469cb9 +0x039c:  mov    %edx,0x8(%eax)
08469cbc +0x039f:  jmp    08469cd1 <+0x3b4>
08469cbe +0x03a1:  mov    0x8(%ebp),%eax
08469cc1 +0x03a4:  movl   $0x0,0x8(%eax)
08469cc8 +0x03ab:  mov    0x8(%ebp),%eax
08469ccb +0x03ae:  mov    0xc(%ebp),%edx
08469cce +0x03b1:  mov    %edx,0x4(%eax)
08469cd1 +0x03b4:  mov    0x8(%ebp),%eax
08469cd4 +0x03b7:  mov    0x8(%eax),%eax
08469cd7 +0x03ba:  pop    %ebp
08469cd8 +0x03bb:  ret
08469cd9 +0x03bc:  nop
08469cda +0x03bd:  push   %ebp
08469cdb +0x03be:  mov    %esp,%ebp
08469cdd +0x03c0:  mov    0x8(%ebp),%eax
08469ce0 +0x03c3:  mov    (%eax),%eax
08469ce2 +0x03c5:  pop    %ebp
08469ce3 +0x03c6:  ret
08469ce4 +0x03c7:  push   %ebp
08469ce5 +0x03c8:  mov    %esp,%ebp
08469ce7 +0x03ca:  mov    0x8(%ebp),%eax
08469cea +0x03cd:  mov    0x88(%eax),%edx
08469cf0 +0x03d3:  mov    0xc(%ebp),%eax
08469cf3 +0x03d6:  mov    0x88(%eax),%eax
08469cf9 +0x03dc:  cmp    %eax,%edx
08469cfb +0x03de:  jne    08469d16 <+0x3f9>
08469cfd +0x03e0:  mov    0x8(%ebp),%eax
08469d00 +0x03e3:  mov    0x8c(%eax),%edx
08469d06 +0x03e9:  mov    0xc(%ebp),%eax
08469d09 +0x03ec:  mov    0x8c(%eax),%eax
08469d0f +0x03f2:  cmp    %eax,%edx
08469d11 +0x03f4:  setb   %al
08469d14 +0x03f7:  jmp    08469d2d <+0x410>
08469d16 +0x03f9:  mov    0x8(%ebp),%eax
08469d19 +0x03fc:  mov    0x88(%eax),%edx
08469d1f +0x0402:  mov    0xc(%ebp),%eax
08469d22 +0x0405:  mov    0x88(%eax),%eax
08469d28 +0x040b:  cmp    %eax,%edx
08469d2a +0x040d:  seta   %al
08469d2d +0x0410:  pop    %ebp
08469d2e +0x0411:  ret
08469d2f +0x0412:  nop
08469d30 +0x0413:  push   %ebp
08469d31 +0x0414:  mov    %esp,%ebp
08469d33 +0x0416:  mov    0x8(%ebp),%eax
08469d36 +0x0419:  mov    0x88(%eax),%edx
08469d3c +0x041f:  mov    0xc(%ebp),%eax
08469d3f +0x0422:  mov    0x88(%eax),%eax
08469d45 +0x0428:  cmp    %eax,%edx
08469d47 +0x042a:  jne    08469d62 <+0x445>
08469d49 +0x042c:  mov    0x8(%ebp),%eax
08469d4c +0x042f:  mov    0x8c(%eax),%edx
08469d52 +0x0435:  mov    0xc(%ebp),%eax
08469d55 +0x0438:  mov    0x8c(%eax),%eax
08469d5b +0x043e:  cmp    %eax,%edx
08469d5d +0x0440:  sete   %al
08469d60 +0x0443:  jmp    08469d67 <+0x44a>
08469d62 +0x0445:  mov    $0x0,%eax
08469d67 +0x044a:  pop    %ebp
08469d68 +0x044b:  ret
08469d69 +0x044c:  push   %ebp
08469d6a +0x044d:  mov    %esp,%ebp
08469d6c +0x044f:  cmpl   $0x2af7,0x8(%ebp)
08469d73 +0x0456:  jbe    08469d7e <+0x461>
08469d75 +0x0458:  cmpl   $0x2afd,0x8(%ebp)
08469d7c +0x045f:  jbe    08469d85 <+0x468>
08469d7e +0x0461:  mov    $0xffffffff,%eax
08469d83 +0x0466:  jmp    08469d8d <+0x470>
08469d85 +0x0468:  mov    0x8(%ebp),%eax
08469d88 +0x046b:  sub    $0x2af8,%eax
08469d8d +0x0470:  pop    %ebp
08469d8e +0x0471:  ret
08469d8f +0x0472:  nop
08469d90 +0x0473:  push   %ebp
08469d91 +0x0474:  mov    %esp,%ebp
08469d93 +0x0476:  mov    0x8(%ebp),%eax
08469d96 +0x0479:  lea    0x11d0(%eax),%ecx
08469d9c +0x047f:  mov    0xc(%ebp),%edx
08469d9f +0x0482:  mov    %edx,%eax
08469da1 +0x0484:  shl    $0x2,%eax
08469da4 +0x0487:  add    %edx,%eax
08469da6 +0x0489:  shl    $0x2,%eax
08469da9 +0x048c:  lea    (%ecx,%eax,1),%eax
08469dac +0x048f:  pop    %ebp
08469dad +0x0490:  ret
08469dae +0x0491:  push   %ebp
08469daf +0x0492:  mov    %esp,%ebp
08469db1 +0x0494:  mov    0x8(%ebp),%eax
08469db4 +0x0497:  lea    0x1234(%eax),%ecx
08469dba +0x049d:  mov    0xc(%ebp),%edx
08469dbd +0x04a0:  mov    %edx,%eax
08469dbf +0x04a2:  shl    $0x2,%eax
08469dc2 +0x04a5:  add    %edx,%eax
08469dc4 +0x04a7:  shl    $0x2,%eax
08469dc7 +0x04aa:  lea    (%ecx,%eax,1),%eax
08469dca +0x04ad:  pop    %ebp
08469dcb +0x04ae:  ret
08469dcc +0x04af:  push   %ebp
08469dcd +0x04b0:  mov    %esp,%ebp
08469dcf +0x04b2:  sub    $0x28,%esp
08469dd2 +0x04b5:  mov    0x8(%ebp),%eax
08469dd5 +0x04b8:  mov    (%eax),%eax
08469dd7 +0x04ba:  add    $0x34,%eax
08469dda +0x04bd:  mov    (%eax),%edx
08469ddc +0x04bf:  mov    0x8(%ebp),%eax
08469ddf +0x04c2:  movl   $0x0,0x4(%esp)
08469de7 +0x04ca:  mov    %eax,(%esp)
08469dea +0x04cd:  call   *%edx
08469dec +0x04cf:  test   %al,%al
08469dee +0x04d1:  je     08469e0e <+0x4f1>
08469df0 +0x04d3:  mov    0x8(%ebp),%eax
08469df3 +0x04d6:  mov    0xc(%eax),%eax
08469df6 +0x04d9:  mov    $0x0,%edx
08469dfb +0x04de:  mov    %eax,-0x10(%ebp)
08469dfe +0x04e1:  mov    %edx,-0xc(%ebp)
08469e01 +0x04e4:  fildll -0x10(%ebp)
08469e04 +0x04e7:  flds   ""
08469e0a +0x04ed:  fdivrp %st,%st(1)
08469e0c +0x04ef:  jmp    08469e10 <+0x4f3>
08469e0e +0x04f1:  fldz
08469e10 +0x04f3:  leave
08469e11 +0x04f4:  ret
08469e12 +0x04f5:  push   %ebp
08469e13 +0x04f6:  mov    %esp,%ebp
08469e15 +0x04f8:  mov    0x8(%ebp),%eax
08469e18 +0x04fb:  mov    (%eax),%edx
08469e1a +0x04fd:  mov    0xc(%ebp),%eax
08469e1d +0x0500:  mov    (%eax),%eax
08469e1f +0x0502:  cmp    %eax,%edx
08469e21 +0x0504:  sete   %al
08469e24 +0x0507:  pop    %ebp
08469e25 +0x0508:  ret
08469e26 +0x0509:  push   %ebp
08469e27 +0x050a:  mov    %esp,%ebp
08469e29 +0x050c:  mov    0x8(%ebp),%eax
08469e2c +0x050f:  mov    (%eax),%edx
08469e2e +0x0511:  mov    0xc(%ebp),%eax
08469e31 +0x0514:  mov    (%eax),%eax
08469e33 +0x0516:  cmp    %eax,%edx
08469e35 +0x0518:  sete   %al
08469e38 +0x051b:  pop    %ebp
08469e39 +0x051c:  ret
08469e3a +0x051d:  push   %ebp
08469e3b +0x051e:  mov    %esp,%ebp
08469e3d +0x0520:  mov    0x8(%ebp),%eax
08469e40 +0x0523:  mov    (%eax),%ecx
08469e42 +0x0525:  mov    0xc(%ebp),%edx
08469e45 +0x0528:  mov    %edx,%eax
08469e47 +0x052a:  shl    $0x2,%eax
08469e4a +0x052d:  add    %edx,%eax
08469e4c +0x052f:  shl    $0x2,%eax
08469e4f +0x0532:  lea    (%ecx,%eax,1),%eax
08469e52 +0x0535:  pop    %ebp
08469e53 +0x0536:  ret
08469e54 +0x0537:  push   %ebp
08469e55 +0x0538:  mov    %esp,%ebp
08469e57 +0x053a:  sub    $0x28,%esp
08469e5a +0x053d:  mov    0x8(%ebp),%eax
08469e5d +0x0540:  mov    0x4(%eax),%edx
08469e60 +0x0543:  mov    0x8(%ebp),%eax
08469e63 +0x0546:  mov    0x8(%eax),%eax
08469e66 +0x0549:  cmp    %eax,%edx
08469e68 +0x054b:  je     08469e97 <+0x57a>
08469e6a +0x054d:  mov    0x8(%ebp),%eax
08469e6d +0x0550:  mov    0x4(%eax),%edx
08469e70 +0x0553:  mov    0x8(%ebp),%eax
08469e73 +0x0556:  mov    0xc(%ebp),%ecx
08469e76 +0x0559:  mov    %ecx,0x8(%esp)
08469e7a +0x055d:  mov    %edx,0x4(%esp)
08469e7e +0x0561:  mov    %eax,(%esp)
08469e81 +0x0564:  call   0846a2ea <+0x9cd>
08469e86 +0x0569:  mov    0x8(%ebp),%eax
08469e89 +0x056c:  mov    0x4(%eax),%eax
08469e8c +0x056f:  lea    0x4(%eax),%edx
08469e8f +0x0572:  mov    0x8(%ebp),%eax
08469e92 +0x0575:  mov    %edx,0x4(%eax)
08469e95 +0x0578:  jmp    08469ec5 <+0x5a8>
08469e97 +0x057a:  lea    -0xc(%ebp),%eax
08469e9a +0x057d:  mov    0x8(%ebp),%edx
08469e9d +0x0580:  mov    %edx,0x4(%esp)
08469ea1 +0x0584:  mov    %eax,(%esp)
08469ea4 +0x0587:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
08469ea9 +0x058c:  sub    $0x4,%esp
08469eac +0x058f:  mov    0xc(%ebp),%eax
08469eaf +0x0592:  mov    %eax,0x8(%esp)
08469eb3 +0x0596:  mov    -0xc(%ebp),%eax
08469eb6 +0x0599:  mov    %eax,0x4(%esp)
08469eba +0x059d:  mov    0x8(%ebp),%eax
08469ebd +0x05a0:  mov    %eax,(%esp)
08469ec0 +0x05a3:  call   0846a312 <+0x9f5>
08469ec5 +0x05a8:  leave
08469ec6 +0x05a9:  ret
08469ec7 +0x05aa:  nop
08469ec8 +0x05ab:  push   %ebp
08469ec9 +0x05ac:  mov    %esp,%ebp
08469ecb +0x05ae:  sub    $0x18,%esp
08469ece +0x05b1:  mov    0xc(%ebp),%eax
08469ed1 +0x05b4:  mov    %eax,(%esp)
08469ed4 +0x05b7:  call   0819d4e4 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x375>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x375
08469ed9 +0x05bc:  mov    (%eax),%edx
08469edb +0x05be:  mov    0x8(%ebp),%eax
08469ede +0x05c1:  mov    %edx,(%eax)
08469ee0 +0x05c3:  leave
08469ee1 +0x05c4:  ret
08469ee2 +0x05c5:  push   %ebp
08469ee3 +0x05c6:  mov    %esp,%ebp
08469ee5 +0x05c8:  push   %ebx
08469ee6 +0x05c9:  sub    $0x14,%esp
08469ee9 +0x05cc:  mov    0x8(%ebp),%eax
08469eec +0x05cf:  mov    %eax,(%esp)
08469eef +0x05d2:  call   08194422 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x108a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x108a
08469ef4 +0x05d7:  mov    (%eax),%ebx
08469ef6 +0x05d9:  mov    0xc(%ebp),%eax
08469ef9 +0x05dc:  mov    %eax,(%esp)
08469efc +0x05df:  call   08194422 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x108a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x108a
08469f01 +0x05e4:  mov    (%eax),%eax
08469f03 +0x05e6:  cmp    %eax,%ebx
08469f05 +0x05e8:  setne  %al
08469f08 +0x05eb:  add    $0x14,%esp
08469f0b +0x05ee:  pop    %ebx
08469f0c +0x05ef:  pop    %ebp
08469f0d +0x05f0:  ret
08469f0e +0x05f1:  push   %ebp
08469f0f +0x05f2:  mov    %esp,%ebp
08469f11 +0x05f4:  mov    0x8(%ebp),%eax
08469f14 +0x05f7:  mov    (%eax),%eax
08469f16 +0x05f9:  lea    0x4(%eax),%edx
08469f19 +0x05fc:  mov    0x8(%ebp),%eax
08469f1c +0x05ff:  mov    %edx,(%eax)
08469f1e +0x0601:  mov    0x8(%ebp),%eax
08469f21 +0x0604:  pop    %ebp
08469f22 +0x0605:  ret
08469f23 +0x0606:  nop
08469f24 +0x0607:  push   %ebp
08469f25 +0x0608:  mov    %esp,%ebp
08469f27 +0x060a:  mov    0x8(%ebp),%eax
08469f2a +0x060d:  mov    (%eax),%eax
08469f2c +0x060f:  pop    %ebp
08469f2d +0x0610:  ret
08469f2e +0x0611:  push   %ebp
08469f2f +0x0612:  mov    %esp,%ebp
08469f31 +0x0614:  push   %ebx
08469f32 +0x0615:  sub    $0x14,%esp
08469f35 +0x0618:  mov    0x8(%ebp),%ebx
08469f38 +0x061b:  mov    0xc(%ebp),%eax
08469f3b +0x061e:  mov    0x10(%ebp),%edx
08469f3e +0x0621:  mov    %edx,0x8(%esp)
08469f42 +0x0625:  mov    %eax,0x4(%esp)
08469f46 +0x0629:  mov    %ebx,(%esp)
08469f49 +0x062c:  call   0846a5cc <+0xcaf>
08469f4e +0x0631:  sub    $0x4,%esp
08469f51 +0x0634:  mov    %ebx,%eax
08469f53 +0x0636:  mov    -0x4(%ebp),%ebx
08469f56 +0x0639:  leave
08469f57 +0x063a:  ret    $0x4
08469f5a +0x063d:  push   %ebp
08469f5b +0x063e:  mov    %esp,%ebp
08469f5d +0x0640:  mov    0xc(%ebp),%eax
08469f60 +0x0643:  mov    (%eax),%edx
08469f62 +0x0645:  mov    0x8(%ebp),%eax
08469f65 +0x0648:  mov    %edx,(%eax)
08469f67 +0x064a:  mov    0xc(%ebp),%eax
08469f6a +0x064d:  mov    0x4(%eax),%edx
08469f6d +0x0650:  mov    0x8(%ebp),%eax
08469f70 +0x0653:  mov    %edx,0x4(%eax)
08469f73 +0x0656:  pop    %ebp
08469f74 +0x0657:  ret
08469f75 +0x0658:  nop
08469f76 +0x0659:  push   %ebp
08469f77 +0x065a:  mov    %esp,%ebp
08469f79 +0x065c:  push   %ebx
08469f7a +0x065d:  sub    $0x14,%esp
08469f7d +0x0660:  mov    0x8(%ebp),%ebx
08469f80 +0x0663:  mov    0xc(%ebp),%eax
08469f83 +0x0666:  mov    %eax,0x4(%esp)
08469f87 +0x066a:  mov    %ebx,(%esp)
08469f8a +0x066d:  call   0846a67e <+0xd61>
08469f8f +0x0672:  sub    $0x4,%esp
08469f92 +0x0675:  mov    %ebx,%eax
08469f94 +0x0677:  mov    -0x4(%ebp),%ebx
08469f97 +0x067a:  leave
08469f98 +0x067b:  ret    $0x4
08469f9b +0x067e:  nop
08469f9c +0x067f:  push   %ebp
08469f9d +0x0680:  mov    %esp,%ebp
08469f9f +0x0682:  mov    0x8(%ebp),%eax
08469fa2 +0x0685:  mov    (%eax),%edx
08469fa4 +0x0687:  mov    0xc(%ebp),%eax
08469fa7 +0x068a:  mov    (%eax),%eax
08469fa9 +0x068c:  cmp    %eax,%edx
08469fab +0x068e:  sete   %al
08469fae +0x0691:  pop    %ebp
08469faf +0x0692:  ret
08469fb0 +0x0693:  push   %ebp
08469fb1 +0x0694:  mov    %esp,%ebp
08469fb3 +0x0696:  sub    $0x18,%esp
08469fb6 +0x0699:  mov    0x8(%ebp),%eax
08469fb9 +0x069c:  mov    %eax,(%esp)
08469fbc +0x069f:  call   0846a6aa <+0xd8d>
08469fc1 +0x06a4:  leave
08469fc2 +0x06a5:  ret
08469fc3 +0x06a6:  nop
08469fc4 +0x06a7:  push   %ebp
08469fc5 +0x06a8:  mov    %esp,%ebp
08469fc7 +0x06aa:  push   %ebx
08469fc8 +0x06ab:  sub    $0x14,%esp
08469fcb +0x06ae:  mov    0x8(%ebp),%ebx
08469fce +0x06b1:  mov    0xc(%ebp),%eax
08469fd1 +0x06b4:  mov    0x10(%ebp),%edx
08469fd4 +0x06b7:  mov    %edx,0x8(%esp)
08469fd8 +0x06bb:  mov    %eax,0x4(%esp)
08469fdc +0x06bf:  mov    %ebx,(%esp)
08469fdf +0x06c2:  call   0846a6b8 <+0xd9b>
08469fe4 +0x06c7:  sub    $0x4,%esp
08469fe7 +0x06ca:  mov    %ebx,%eax
08469fe9 +0x06cc:  mov    -0x4(%ebp),%ebx
08469fec +0x06cf:  leave
08469fed +0x06d0:  ret    $0x4
08469ff0 +0x06d3:  push   %ebp
08469ff1 +0x06d4:  mov    %esp,%ebp
08469ff3 +0x06d6:  sub    $0x18,%esp
08469ff6 +0x06d9:  mov    0x8(%ebp),%eax
08469ff9 +0x06dc:  mov    %eax,(%esp)
08469ffc +0x06df:  call   0846a6fc <+0xddf>
0846a001 +0x06e4:  leave
0846a002 +0x06e5:  ret
0846a003 +0x06e6:  nop
0846a004 +0x06e7:  push   %ebp
0846a005 +0x06e8:  mov    %esp,%ebp
0846a007 +0x06ea:  mov    0x8(%ebp),%eax
0846a00a +0x06ed:  mov    (%eax),%edx
0846a00c +0x06ef:  mov    0xc(%ebp),%eax
0846a00f +0x06f2:  mov    (%eax),%eax
0846a011 +0x06f4:  cmp    %eax,%edx
0846a013 +0x06f6:  setne  %al
0846a016 +0x06f9:  pop    %ebp
0846a017 +0x06fa:  ret
0846a018 +0x06fb:  push   %ebp
0846a019 +0x06fc:  mov    %esp,%ebp
0846a01b +0x06fe:  sub    $0x18,%esp
0846a01e +0x0701:  mov    0x8(%ebp),%eax
0846a021 +0x0704:  mov    %eax,(%esp)
0846a024 +0x0707:  call   0846a70a <+0xded>
0846a029 +0x070c:  leave
0846a02a +0x070d:  ret
0846a02b +0x070e:  nop
0846a02c +0x070f:  push   %ebp
0846a02d +0x0710:  mov    %esp,%ebp
0846a02f +0x0712:  sub    $0x18,%esp
0846a032 +0x0715:  mov    0x8(%ebp),%eax
0846a035 +0x0718:  mov    0xc(%ebp),%edx
0846a038 +0x071b:  mov    %edx,0x4(%esp)
0846a03c +0x071f:  mov    %eax,(%esp)
0846a03f +0x0722:  call   0846a718 <+0xdfb>
0846a044 +0x0727:  leave
0846a045 +0x0728:  ret
0846a046 +0x0729:  push   %ebp
0846a047 +0x072a:  mov    %esp,%ebp
0846a049 +0x072c:  sub    $0x18,%esp
0846a04c +0x072f:  mov    0x8(%ebp),%eax
0846a04f +0x0732:  mov    %eax,(%esp)
0846a052 +0x0735:  call   082b6958 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8853>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8853
0846a057 +0x073a:  leave
0846a058 +0x073b:  ret
0846a059 +0x073c:  nop
0846a05a +0x073d:  push   %ebp
0846a05b +0x073e:  mov    %esp,%ebp
0846a05d +0x0740:  sub    $0x18,%esp
0846a060 +0x0743:  mov    0x8(%ebp),%eax
0846a063 +0x0746:  mov    0xc(%ebp),%edx
0846a066 +0x0749:  mov    %edx,0x4(%esp)
0846a06a +0x074d:  mov    %eax,(%esp)
0846a06d +0x0750:  call   0846a874 <+0xf57>
0846a072 +0x0755:  leave
0846a073 +0x0756:  ret
0846a074 +0x0757:  push   %ebp
0846a075 +0x0758:  mov    %esp,%ebp
0846a077 +0x075a:  push   %ebx
0846a078 +0x075b:  sub    $0x14,%esp
0846a07b +0x075e:  mov    0x8(%ebp),%ebx
0846a07e +0x0761:  mov    0xc(%ebp),%eax
0846a081 +0x0764:  mov    0x10(%ebp),%edx
0846a084 +0x0767:  mov    %edx,0x8(%esp)
0846a088 +0x076b:  mov    %eax,0x4(%esp)
0846a08c +0x076f:  mov    %ebx,(%esp)
0846a08f +0x0772:  call   0846a8d4 <+0xfb7>
0846a094 +0x0777:  sub    $0x4,%esp
0846a097 +0x077a:  mov    %ebx,%eax
0846a099 +0x077c:  mov    -0x4(%ebp),%ebx
0846a09c +0x077f:  leave
0846a09d +0x0780:  ret    $0x4
0846a0a0 +0x0783:  push   %ebp
0846a0a1 +0x0784:  mov    %esp,%ebp
0846a0a3 +0x0786:  mov    0xc(%ebp),%eax
0846a0a6 +0x0789:  mov    (%eax),%edx
0846a0a8 +0x078b:  mov    0x8(%ebp),%eax
0846a0ab +0x078e:  mov    %edx,(%eax)
0846a0ad +0x0790:  mov    0xc(%ebp),%eax
0846a0b0 +0x0793:  mov    0x4(%eax),%edx
0846a0b3 +0x0796:  mov    0x8(%ebp),%eax
0846a0b6 +0x0799:  mov    %edx,0x4(%eax)
0846a0b9 +0x079c:  pop    %ebp
0846a0ba +0x079d:  ret
0846a0bb +0x079e:  nop
0846a0bc +0x079f:  push   %ebp
0846a0bd +0x07a0:  mov    %esp,%ebp
0846a0bf +0x07a2:  push   %ebx
0846a0c0 +0x07a3:  sub    $0x14,%esp
0846a0c3 +0x07a6:  mov    0x8(%ebp),%ebx
0846a0c6 +0x07a9:  mov    0xc(%ebp),%eax
0846a0c9 +0x07ac:  mov    %eax,0x4(%esp)
0846a0cd +0x07b0:  mov    %ebx,(%esp)
0846a0d0 +0x07b3:  call   0846a986 <+0x1069>
0846a0d5 +0x07b8:  sub    $0x4,%esp
0846a0d8 +0x07bb:  mov    %ebx,%eax
0846a0da +0x07bd:  mov    -0x4(%ebp),%ebx
0846a0dd +0x07c0:  leave
0846a0de +0x07c1:  ret    $0x4
0846a0e1 +0x07c4:  nop
0846a0e2 +0x07c5:  push   %ebp
0846a0e3 +0x07c6:  mov    %esp,%ebp
0846a0e5 +0x07c8:  mov    0x8(%ebp),%eax
0846a0e8 +0x07cb:  mov    (%eax),%edx
0846a0ea +0x07cd:  mov    0xc(%ebp),%eax
0846a0ed +0x07d0:  mov    (%eax),%eax
0846a0ef +0x07d2:  cmp    %eax,%edx
0846a0f1 +0x07d4:  setne  %al
0846a0f4 +0x07d7:  pop    %ebp
0846a0f5 +0x07d8:  ret
0846a0f6 +0x07d9:  push   %ebp
0846a0f7 +0x07da:  mov    %esp,%ebp
0846a0f9 +0x07dc:  sub    $0x18,%esp
0846a0fc +0x07df:  mov    0x8(%ebp),%eax
0846a0ff +0x07e2:  mov    %eax,(%esp)
0846a102 +0x07e5:  call   0846a9b2 <+0x1095>
0846a107 +0x07ea:  leave
0846a108 +0x07eb:  ret
0846a109 +0x07ec:  push   %ebp
0846a10a +0x07ed:  mov    %esp,%ebp
0846a10c +0x07ef:  push   %esi
0846a10d +0x07f0:  push   %ebx
0846a10e +0x07f1:  sub    $0x10,%esp
0846a111 +0x07f4:  mov    0x8(%ebp),%esi
0846a114 +0x07f7:  mov    0x10(%ebp),%eax
0846a117 +0x07fa:  mov    %eax,(%esp)
0846a11a +0x07fd:  call   0846a9bf <+0x10a2>
0846a11f +0x0802:  mov    %eax,%ebx
0846a121 +0x0804:  mov    0xc(%ebp),%eax
0846a124 +0x0807:  mov    %eax,(%esp)
0846a127 +0x080a:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0846a12c +0x080f:  mov    %ebx,0x8(%esp)
0846a130 +0x0813:  mov    %eax,0x4(%esp)
0846a134 +0x0817:  mov    %esi,(%esp)
0846a137 +0x081a:  call   0846a9c8 <+0x10ab>
0846a13c +0x081f:  mov    %esi,%eax
0846a13e +0x0821:  add    $0x10,%esp
0846a141 +0x0824:  pop    %ebx
0846a142 +0x0825:  pop    %esi
0846a143 +0x0826:  pop    %ebp
0846a144 +0x0827:  ret    $0x4
0846a147 +0x082a:  nop
0846a148 +0x082b:  push   %ebp
0846a149 +0x082c:  mov    %esp,%ebp
0846a14b +0x082e:  push   %edi
0846a14c +0x082f:  push   %esi
0846a14d +0x0830:  push   %ebx
0846a14e +0x0831:  sub    $0x1c,%esp
0846a151 +0x0834:  mov    0xc(%ebp),%eax
0846a154 +0x0837:  mov    %eax,(%esp)
0846a157 +0x083a:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0846a15c +0x083f:  mov    (%eax),%edx
0846a15e +0x0841:  mov    0x8(%ebp),%eax
0846a161 +0x0844:  mov    %edx,(%eax)
0846a163 +0x0846:  mov    0xc(%ebp),%eax
0846a166 +0x0849:  add    $0x4,%eax
0846a169 +0x084c:  mov    %eax,(%esp)
0846a16c +0x084f:  call   0846aa0b <+0x10ee>
0846a171 +0x0854:  mov    0x8(%ebp),%edx
0846a174 +0x0857:  lea    0x4(%edx),%ebx
0846a177 +0x085a:  mov    %eax,%edx
0846a179 +0x085c:  mov    $0x26,%eax
0846a17e +0x0861:  mov    %ebx,%edi
0846a180 +0x0863:  mov    %edx,%esi
0846a182 +0x0865:  mov    %eax,%ecx
0846a184 +0x0867:  rep movsl %ds:(%esi),%es:(%edi)
0846a186 +0x0869:  add    $0x1c,%esp
0846a189 +0x086c:  pop    %ebx
0846a18a +0x086d:  pop    %esi
0846a18b +0x086e:  pop    %edi
0846a18c +0x086f:  pop    %ebp
0846a18d +0x0870:  ret
0846a18e +0x0871:  push   %ebp
0846a18f +0x0872:  mov    %esp,%ebp
0846a191 +0x0874:  push   %ebx
0846a192 +0x0875:  sub    $0x14,%esp
0846a195 +0x0878:  mov    0x8(%ebp),%ebx
0846a198 +0x087b:  mov    0xc(%ebp),%eax
0846a19b +0x087e:  mov    0x10(%ebp),%edx
0846a19e +0x0881:  mov    %edx,0x8(%esp)
0846a1a2 +0x0885:  mov    %eax,0x4(%esp)
0846a1a6 +0x0889:  mov    %ebx,(%esp)
0846a1a9 +0x088c:  call   0846aa14 <+0x10f7>
0846a1ae +0x0891:  sub    $0x4,%esp
0846a1b1 +0x0894:  mov    %ebx,%eax
0846a1b3 +0x0896:  mov    -0x4(%ebp),%ebx
0846a1b6 +0x0899:  leave
0846a1b7 +0x089a:  ret    $0x4
0846a1ba +0x089d:  push   %ebp
0846a1bb +0x089e:  mov    %esp,%ebp
0846a1bd +0x08a0:  sub    $0x158,%esp
0846a1c3 +0x08a6:  lea    -0xa0(%ebp),%eax
0846a1c9 +0x08ac:  mov    %eax,(%esp)
0846a1cc +0x08af:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
0846a1d1 +0x08b4:  lea    -0xa0(%ebp),%eax
0846a1d7 +0x08ba:  mov    %eax,0x8(%esp)
0846a1db +0x08be:  mov    0xc(%ebp),%eax
0846a1de +0x08c1:  mov    %eax,0x4(%esp)
0846a1e2 +0x08c5:  lea    -0x13c(%ebp),%eax
0846a1e8 +0x08cb:  mov    %eax,(%esp)
0846a1eb +0x08ce:  call   0846aa58 <+0x113b>
0846a1f0 +0x08d3:  mov    0x8(%ebp),%eax
0846a1f3 +0x08d6:  lea    -0x13c(%ebp),%edx
0846a1f9 +0x08dc:  mov    %edx,0x4(%esp)
0846a1fd +0x08e0:  mov    %eax,(%esp)
0846a200 +0x08e3:  call   0846aa9c <+0x117f>
0846a205 +0x08e8:  add    $0x4,%eax
0846a208 +0x08eb:  leave
0846a209 +0x08ec:  ret
0846a20a +0x08ed:  push   %ebp
0846a20b +0x08ee:  mov    %esp,%ebp
0846a20d +0x08f0:  sub    $0x18,%esp
0846a210 +0x08f3:  mov    0x8(%ebp),%eax
0846a213 +0x08f6:  mov    0xc(%ebp),%edx
0846a216 +0x08f9:  mov    %edx,0x4(%esp)
0846a21a +0x08fd:  mov    %eax,(%esp)
0846a21d +0x0900:  call   0846aba8 <+0x128b>
0846a222 +0x0905:  leave
0846a223 +0x0906:  ret
0846a224 +0x0907:  push   %ebp
0846a225 +0x0908:  mov    %esp,%ebp
0846a227 +0x090a:  sub    $0x18,%esp
0846a22a +0x090d:  mov    0x8(%ebp),%eax
0846a22d +0x0910:  mov    %eax,(%esp)
0846a230 +0x0913:  call   0846ad04 <+0x13e7>
0846a235 +0x0918:  leave
0846a236 +0x0919:  ret
0846a237 +0x091a:  nop
0846a238 +0x091b:  push   %ebp
0846a239 +0x091c:  mov    %esp,%ebp
0846a23b +0x091e:  push   %ebx
0846a23c +0x091f:  sub    $0x14,%esp
0846a23f +0x0922:  mov    0x8(%ebp),%ebx
0846a242 +0x0925:  mov    0xc(%ebp),%eax
0846a245 +0x0928:  mov    %eax,0x4(%esp)
0846a249 +0x092c:  mov    %ebx,(%esp)
0846a24c +0x092f:  call   080e3af8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x189e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x189e
0846a251 +0x0934:  sub    $0x4,%esp
0846a254 +0x0937:  mov    %ebx,%eax
0846a256 +0x0939:  mov    -0x4(%ebp),%ebx
0846a259 +0x093c:  leave
0846a25a +0x093d:  ret    $0x4
0846a25d +0x0940:  nop
0846a25e +0x0941:  push   %ebp
0846a25f +0x0942:  mov    %esp,%ebp
0846a261 +0x0944:  mov    0xc(%ebp),%eax
0846a264 +0x0947:  mov    (%eax),%edx
0846a266 +0x0949:  mov    0x8(%ebp),%eax
0846a269 +0x094c:  mov    %edx,(%eax)
0846a26b +0x094e:  pop    %ebp
0846a26c +0x094f:  ret
0846a26d +0x0950:  nop
0846a26e +0x0951:  push   %ebp
0846a26f +0x0952:  mov    %esp,%ebp
0846a271 +0x0954:  sub    $0x18,%esp
0846a274 +0x0957:  mov    0x8(%ebp),%eax
0846a277 +0x095a:  mov    (%eax),%eax
0846a279 +0x095c:  mov    %eax,(%esp)
0846a27c +0x095f:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
0846a281 +0x0964:  mov    0x8(%ebp),%edx
0846a284 +0x0967:  mov    %eax,(%edx)
0846a286 +0x0969:  mov    0x8(%ebp),%eax
0846a289 +0x096c:  leave
0846a28a +0x096d:  ret
0846a28b +0x096e:  nop
0846a28c +0x096f:  push   %ebp
0846a28d +0x0970:  mov    %esp,%ebp
0846a28f +0x0972:  push   %ebx
0846a290 +0x0973:  sub    $0x14,%esp
0846a293 +0x0976:  mov    0x8(%ebp),%ebx
0846a296 +0x0979:  mov    0xc(%ebp),%eax
0846a299 +0x097c:  mov    0x10(%ebp),%edx
0846a29c +0x097f:  mov    %edx,0x8(%esp)
0846a2a0 +0x0983:  mov    %eax,0x4(%esp)
0846a2a4 +0x0987:  mov    %ebx,(%esp)
0846a2a7 +0x098a:  call   0846ad10 <+0x13f3>
0846a2ac +0x098f:  sub    $0x4,%esp
0846a2af +0x0992:  mov    %ebx,%eax
0846a2b1 +0x0994:  mov    -0x4(%ebp),%ebx
0846a2b4 +0x0997:  leave
0846a2b5 +0x0998:  ret    $0x4
0846a2b8 +0x099b:  push   %ebp
0846a2b9 +0x099c:  mov    %esp,%ebp
0846a2bb +0x099e:  sub    $0x18,%esp
0846a2be +0x09a1:  mov    0x8(%ebp),%eax
0846a2c1 +0x09a4:  mov    (%eax),%eax
0846a2c3 +0x09a6:  mov    %eax,(%esp)
0846a2c6 +0x09a9:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0846a2cb +0x09ae:  mov    0x8(%ebp),%edx
0846a2ce +0x09b1:  mov    %eax,(%edx)
0846a2d0 +0x09b3:  mov    0x8(%ebp),%eax
0846a2d3 +0x09b6:  leave
0846a2d4 +0x09b7:  ret
0846a2d5 +0x09b8:  nop
0846a2d6 +0x09b9:  push   %ebp
0846a2d7 +0x09ba:  mov    %esp,%ebp
0846a2d9 +0x09bc:  sub    $0x18,%esp
0846a2dc +0x09bf:  mov    0x8(%ebp),%eax
0846a2df +0x09c2:  mov    %eax,(%esp)
0846a2e2 +0x09c5:  call   0846ad62 <+0x1445>
0846a2e7 +0x09ca:  leave
0846a2e8 +0x09cb:  ret
0846a2e9 +0x09cc:  nop
0846a2ea +0x09cd:  push   %ebp
0846a2eb +0x09ce:  mov    %esp,%ebp
0846a2ed +0x09d0:  sub    $0x18,%esp
0846a2f0 +0x09d3:  mov    0xc(%ebp),%eax
0846a2f3 +0x09d6:  mov    %eax,0x4(%esp)
0846a2f7 +0x09da:  movl   $0x4,(%esp)
0846a2fe +0x09e1:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0846a303 +0x09e6:  mov    %eax,%edx
0846a305 +0x09e8:  test   %edx,%edx
0846a307 +0x09ea:  je     0846a310 <+0x9f3>
0846a309 +0x09ec:  mov    0x10(%ebp),%edx
0846a30c +0x09ef:  mov    (%edx),%edx
0846a30e +0x09f1:  mov    %edx,(%eax)
0846a310 +0x09f3:  leave
0846a311 +0x09f4:  ret
0846a312 +0x09f5:  push   %ebp
0846a313 +0x09f6:  mov    %esp,%ebp
0846a315 +0x09f8:  push   %esi
0846a316 +0x09f9:  push   %ebx
0846a317 +0x09fa:  sub    $0x30,%esp
0846a31a +0x09fd:  mov    0x8(%ebp),%eax
0846a31d +0x0a00:  mov    0x4(%eax),%edx
0846a320 +0x0a03:  mov    0x8(%ebp),%eax
0846a323 +0x0a06:  mov    0x8(%eax),%eax
0846a326 +0x0a09:  cmp    %eax,%edx
0846a328 +0x0a0b:  je     0846a3bf <+0xaa2>
0846a32e +0x0a11:  mov    0x8(%ebp),%eax
0846a331 +0x0a14:  mov    0x4(%eax),%eax
0846a334 +0x0a17:  sub    $0x4,%eax
0846a337 +0x0a1a:  mov    %eax,(%esp)
0846a33a +0x0a1d:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0846a33f +0x0a22:  mov    (%eax),%eax
0846a341 +0x0a24:  mov    %eax,-0x20(%ebp)
0846a344 +0x0a27:  mov    0x8(%ebp),%eax
0846a347 +0x0a2a:  mov    0x4(%eax),%edx
0846a34a +0x0a2d:  mov    0x8(%ebp),%eax
0846a34d +0x0a30:  lea    -0x20(%ebp),%ecx
0846a350 +0x0a33:  mov    %ecx,0x8(%esp)
0846a354 +0x0a37:  mov    %edx,0x4(%esp)
0846a358 +0x0a3b:  mov    %eax,(%esp)
0846a35b +0x0a3e:  call   0819d4f4 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x385>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x385
0846a360 +0x0a43:  mov    0x8(%ebp),%eax
0846a363 +0x0a46:  mov    0x4(%eax),%eax
0846a366 +0x0a49:  lea    0x4(%eax),%edx
0846a369 +0x0a4c:  mov    0x8(%ebp),%eax
0846a36c +0x0a4f:  mov    %edx,0x4(%eax)
0846a36f +0x0a52:  mov    0x8(%ebp),%eax
0846a372 +0x0a55:  mov    0x4(%eax),%eax
0846a375 +0x0a58:  lea    -0x4(%eax),%esi
0846a378 +0x0a5b:  mov    0x8(%ebp),%eax
0846a37b +0x0a5e:  mov    0x4(%eax),%eax
0846a37e +0x0a61:  lea    -0x8(%eax),%ebx
0846a381 +0x0a64:  lea    0xc(%ebp),%eax
0846a384 +0x0a67:  mov    %eax,(%esp)
0846a387 +0x0a6a:  call   0819d4e4 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x375>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x375
0846a38c +0x0a6f:  mov    (%eax),%eax
0846a38e +0x0a71:  mov    %esi,0x8(%esp)
0846a392 +0x0a75:  mov    %ebx,0x4(%esp)
0846a396 +0x0a79:  mov    %eax,(%esp)
0846a399 +0x0a7c:  call   0819d83d <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6ce>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6ce
0846a39e +0x0a81:  lea    0xc(%ebp),%eax
0846a3a1 +0x0a84:  mov    %eax,(%esp)
0846a3a4 +0x0a87:  call   0819d81e <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6af>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6af
0846a3a9 +0x0a8c:  mov    %eax,%ebx
0846a3ab +0x0a8e:  mov    0x10(%ebp),%eax
0846a3ae +0x0a91:  mov    %eax,(%esp)
0846a3b1 +0x0a94:  call   08080fae <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfd4>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfd4
0846a3b6 +0x0a99:  mov    (%eax),%eax
0846a3b8 +0x0a9b:  mov    %eax,(%ebx)
0846a3ba +0x0a9d:  jmp    0846a5c1 <+0xca4>
0846a3bf +0x0aa2:  movl   $"vector::_M_insert_aux",0x8(%esp)
0846a3c7 +0x0aaa:  movl   $0x1,0x4(%esp)
0846a3cf +0x0ab2:  mov    0x8(%ebp),%eax
0846a3d2 +0x0ab5:  mov    %eax,(%esp)
0846a3d5 +0x0ab8:  call   0819d876 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x707>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x707
0846a3da +0x0abd:  mov    %eax,-0x18(%ebp)
0846a3dd +0x0ac0:  lea    -0x1c(%ebp),%eax
0846a3e0 +0x0ac3:  mov    0x8(%ebp),%edx
0846a3e3 +0x0ac6:  mov    %edx,0x4(%esp)
0846a3e7 +0x0aca:  mov    %eax,(%esp)
0846a3ea +0x0acd:  call   0819d1b6 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x47>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x47
0846a3ef +0x0ad2:  sub    $0x4,%esp
0846a3f2 +0x0ad5:  lea    -0x1c(%ebp),%eax
0846a3f5 +0x0ad8:  mov    %eax,0x4(%esp)
0846a3f9 +0x0adc:  lea    0xc(%ebp),%eax
0846a3fc +0x0adf:  mov    %eax,(%esp)
0846a3ff +0x0ae2:  call   0819d7eb <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x67c>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x67c
0846a404 +0x0ae7:  mov    %eax,-0x14(%ebp)
0846a407 +0x0aea:  mov    0x8(%ebp),%eax
0846a40a +0x0aed:  mov    -0x18(%ebp),%edx
0846a40d +0x0af0:  mov    %edx,0x4(%esp)
0846a411 +0x0af4:  mov    %eax,(%esp)
0846a414 +0x0af7:  call   0819d91c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x7ad>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x7ad
0846a419 +0x0afc:  mov    %eax,-0x10(%ebp)
0846a41c +0x0aff:  mov    -0x10(%ebp),%eax
0846a41f +0x0b02:  mov    %eax,-0xc(%ebp)
0846a422 +0x0b05:  mov    0x10(%ebp),%eax
0846a425 +0x0b08:  mov    %eax,(%esp)
0846a428 +0x0b0b:  call   08080fae <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfd4>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfd4
0846a42d +0x0b10:  mov    -0x14(%ebp),%edx
0846a430 +0x0b13:  shl    $0x2,%edx
0846a433 +0x0b16:  mov    %edx,%ecx
0846a435 +0x0b18:  add    -0x10(%ebp),%ecx
0846a438 +0x0b1b:  mov    0x8(%ebp),%edx
0846a43b +0x0b1e:  mov    %eax,0x8(%esp)
0846a43f +0x0b22:  mov    %ecx,0x4(%esp)
0846a443 +0x0b26:  mov    %edx,(%esp)
0846a446 +0x0b29:  call   0846a2ea <+0x9cd>
0846a44b +0x0b2e:  movl   $0x0,-0xc(%ebp)
0846a452 +0x0b35:  mov    0x8(%ebp),%eax
0846a455 +0x0b38:  mov    %eax,(%esp)
0846a458 +0x0b3b:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0846a45d +0x0b40:  mov    %eax,%ebx
0846a45f +0x0b42:  lea    0xc(%ebp),%eax
0846a462 +0x0b45:  mov    %eax,(%esp)
0846a465 +0x0b48:  call   0819d4e4 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x375>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x375
0846a46a +0x0b4d:  mov    (%eax),%edx
0846a46c +0x0b4f:  mov    0x8(%ebp),%eax
0846a46f +0x0b52:  mov    (%eax),%eax
0846a471 +0x0b54:  mov    %ebx,0xc(%esp)
0846a475 +0x0b58:  mov    -0x10(%ebp),%ecx
0846a478 +0x0b5b:  mov    %ecx,0x8(%esp)
0846a47c +0x0b5f:  mov    %edx,0x4(%esp)
0846a480 +0x0b63:  mov    %eax,(%esp)
0846a483 +0x0b66:  call   0819d94b <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x7dc>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x7dc
0846a488 +0x0b6b:  mov    %eax,-0xc(%ebp)
0846a48b +0x0b6e:  addl   $0x4,-0xc(%ebp)
0846a48f +0x0b72:  mov    0x8(%ebp),%eax
0846a492 +0x0b75:  mov    %eax,(%esp)
0846a495 +0x0b78:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0846a49a +0x0b7d:  mov    %eax,%ebx
0846a49c +0x0b7f:  mov    0x8(%ebp),%eax
0846a49f +0x0b82:  mov    0x4(%eax),%esi
0846a4a2 +0x0b85:  lea    0xc(%ebp),%eax
0846a4a5 +0x0b88:  mov    %eax,(%esp)
0846a4a8 +0x0b8b:  call   0819d4e4 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x375>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x375
0846a4ad +0x0b90:  mov    (%eax),%eax
0846a4af +0x0b92:  mov    %ebx,0xc(%esp)
0846a4b3 +0x0b96:  mov    -0xc(%ebp),%edx
0846a4b6 +0x0b99:  mov    %edx,0x8(%esp)
0846a4ba +0x0b9d:  mov    %esi,0x4(%esp)
0846a4be +0x0ba1:  mov    %eax,(%esp)
0846a4c1 +0x0ba4:  call   0819d94b <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x7dc>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x7dc
0846a4c6 +0x0ba9:  mov    %eax,-0xc(%ebp)
0846a4c9 +0x0bac:  mov    0x8(%ebp),%eax
0846a4cc +0x0baf:  mov    %eax,(%esp)
0846a4cf +0x0bb2:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0846a4d4 +0x0bb7:  mov    0x8(%ebp),%edx
0846a4d7 +0x0bba:  mov    0x4(%edx),%ecx
0846a4da +0x0bbd:  mov    0x8(%ebp),%edx
0846a4dd +0x0bc0:  mov    (%edx),%edx
0846a4df +0x0bc2:  mov    %eax,0x8(%esp)
0846a4e3 +0x0bc6:  mov    %ecx,0x4(%esp)
0846a4e7 +0x0bca:  mov    %edx,(%esp)
0846a4ea +0x0bcd:  call   080f5842 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7f3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7f3
0846a4ef +0x0bd2:  mov    0x8(%ebp),%eax
0846a4f2 +0x0bd5:  mov    0x8(%eax),%eax
0846a4f5 +0x0bd8:  mov    %eax,%edx
0846a4f7 +0x0bda:  mov    0x8(%ebp),%eax
0846a4fa +0x0bdd:  mov    (%eax),%eax
0846a4fc +0x0bdf:  mov    %edx,%ecx
0846a4fe +0x0be1:  sub    %eax,%ecx
0846a500 +0x0be3:  mov    %ecx,%eax
0846a502 +0x0be5:  sar    $0x2,%eax
0846a505 +0x0be8:  mov    %eax,%ecx
0846a507 +0x0bea:  mov    0x8(%ebp),%eax
0846a50a +0x0bed:  mov    (%eax),%edx
0846a50c +0x0bef:  mov    0x8(%ebp),%eax
0846a50f +0x0bf2:  mov    %ecx,0x8(%esp)
0846a513 +0x0bf6:  mov    %edx,0x4(%esp)
0846a517 +0x0bfa:  mov    %eax,(%esp)
0846a51a +0x0bfd:  call   080f5cb0 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xc61>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xc61
0846a51f +0x0c02:  mov    0x8(%ebp),%eax
0846a522 +0x0c05:  mov    -0x10(%ebp),%edx
0846a525 +0x0c08:  mov    %edx,(%eax)
0846a527 +0x0c0a:  mov    0x8(%ebp),%eax
0846a52a +0x0c0d:  mov    -0xc(%ebp),%edx
0846a52d +0x0c10:  mov    %edx,0x4(%eax)
0846a530 +0x0c13:  mov    -0x18(%ebp),%eax
0846a533 +0x0c16:  shl    $0x2,%eax
0846a536 +0x0c19:  mov    %eax,%edx
0846a538 +0x0c1b:  add    -0x10(%ebp),%edx
0846a53b +0x0c1e:  mov    0x8(%ebp),%eax
0846a53e +0x0c21:  mov    %edx,0x8(%eax)
0846a541 +0x0c24:  jmp    0846a5c1 <+0xca4>
0846a543 +0x0c26:  mov    %eax,(%esp)
0846a546 +0x0c29:  call   08725ce0 <__cxa_begin_catch>
0846a54b +0x0c2e:  cmpl   $0x0,-0xc(%ebp)
0846a54f +0x0c32:  jne    0846a56d <+0xc50>
0846a551 +0x0c34:  mov    -0x14(%ebp),%eax
0846a554 +0x0c37:  shl    $0x2,%eax
0846a557 +0x0c3a:  mov    %eax,%edx
0846a559 +0x0c3c:  add    -0x10(%ebp),%edx
0846a55c +0x0c3f:  mov    0x8(%ebp),%eax
0846a55f +0x0c42:  mov    %edx,0x4(%esp)
0846a563 +0x0c46:  mov    %eax,(%esp)
0846a566 +0x0c49:  call   0819d99e <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x82f>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x82f
0846a56b +0x0c4e:  jmp    0846a58e <+0xc71>
0846a56d +0x0c50:  mov    0x8(%ebp),%eax
0846a570 +0x0c53:  mov    %eax,(%esp)
0846a573 +0x0c56:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0846a578 +0x0c5b:  mov    %eax,0x8(%esp)
0846a57c +0x0c5f:  mov    -0xc(%ebp),%eax
0846a57f +0x0c62:  mov    %eax,0x4(%esp)
0846a583 +0x0c66:  mov    -0x10(%ebp),%eax
0846a586 +0x0c69:  mov    %eax,(%esp)
0846a589 +0x0c6c:  call   080f5842 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7f3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7f3
0846a58e +0x0c71:  mov    0x8(%ebp),%eax
0846a591 +0x0c74:  mov    -0x18(%ebp),%edx
0846a594 +0x0c77:  mov    %edx,0x8(%esp)
0846a598 +0x0c7b:  mov    -0x10(%ebp),%edx
0846a59b +0x0c7e:  mov    %edx,0x4(%esp)
0846a59f +0x0c82:  mov    %eax,(%esp)
0846a5a2 +0x0c85:  call   080f5cb0 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xc61>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xc61
0846a5a7 +0x0c8a:  call   08724be0 <__cxa_rethrow>
0846a5ac +0x0c8f:  mov    %edx,%ebx
0846a5ae +0x0c91:  mov    %eax,%esi
0846a5b0 +0x0c93:  call   08725c30 <__cxa_end_catch>
0846a5b5 +0x0c98:  mov    %esi,%eax
0846a5b7 +0x0c9a:  mov    %ebx,%edx
0846a5b9 +0x0c9c:  mov    %eax,(%esp)
0846a5bc +0x0c9f:  call   08ae3750 <_Unwind_Resume>
0846a5c1 +0x0ca4:  lea    -0x8(%ebp),%esp
0846a5c4 +0x0ca7:  add    $0x0,%esp
0846a5c7 +0x0caa:  pop    %ebx
0846a5c8 +0x0cab:  pop    %esi
0846a5c9 +0x0cac:  pop    %ebp
0846a5ca +0x0cad:  ret
0846a5cb +0x0cae:  nop
0846a5cc +0x0caf:  push   %ebp
0846a5cd +0x0cb0:  mov    %esp,%ebp
0846a5cf +0x0cb2:  push   %ebx
0846a5d0 +0x0cb3:  sub    $0x24,%esp
0846a5d3 +0x0cb6:  mov    0x8(%ebp),%ebx
0846a5d6 +0x0cb9:  mov    0x10(%ebp),%eax
0846a5d9 +0x0cbc:  mov    %eax,0x4(%esp)
0846a5dd +0x0cc0:  mov    0xc(%ebp),%eax
0846a5e0 +0x0cc3:  mov    %eax,(%esp)
0846a5e3 +0x0cc6:  call   0846ad72 <+0x1455>
0846a5e8 +0x0ccb:  mov    %eax,-0x10(%ebp)
0846a5eb +0x0cce:  mov    0xc(%ebp),%eax
0846a5ee +0x0cd1:  lea    0x4(%eax),%edx
0846a5f1 +0x0cd4:  mov    -0x10(%ebp),%eax
0846a5f4 +0x0cd7:  mov    %eax,0x4(%esp)
0846a5f8 +0x0cdb:  mov    %edx,(%esp)
0846a5fb +0x0cde:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846a600 +0x0ce3:  mov    (%eax),%eax
0846a602 +0x0ce5:  mov    %eax,-0xc(%ebp)
0846a605 +0x0ce8:  jmp    0846a60f <+0xcf2>
0846a607 +0x0cea:  mov    -0xc(%ebp),%eax
0846a60a +0x0ced:  mov    (%eax),%eax
0846a60c +0x0cef:  mov    %eax,-0xc(%ebp)
0846a60f +0x0cf2:  cmpl   $0x0,-0xc(%ebp)
0846a613 +0x0cf6:  je     0846a654 <+0xd37>
0846a615 +0x0cf8:  mov    -0xc(%ebp),%eax
0846a618 +0x0cfb:  lea    0x4(%eax),%edx
0846a61b +0x0cfe:  mov    0xc(%ebp),%eax
0846a61e +0x0d01:  add    $0x3,%eax
0846a621 +0x0d04:  mov    %edx,0x4(%esp)
0846a625 +0x0d08:  mov    %eax,(%esp)
0846a628 +0x0d0b:  call   0846ad9e <+0x1481>
0846a62d +0x0d10:  mov    0xc(%ebp),%edx
0846a630 +0x0d13:  lea    0x2(%edx),%ecx
0846a633 +0x0d16:  mov    0x10(%ebp),%edx
0846a636 +0x0d19:  mov    %edx,0x8(%esp)
0846a63a +0x0d1d:  mov    %eax,0x4(%esp)
0846a63e +0x0d21:  mov    %ecx,(%esp)
0846a641 +0x0d24:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846a646 +0x0d29:  xor    $0x1,%eax
0846a649 +0x0d2c:  test   %al,%al
0846a64b +0x0d2e:  je     0846a654 <+0xd37>
0846a64d +0x0d30:  mov    $0x1,%eax
0846a652 +0x0d35:  jmp    0846a659 <+0xd3c>
0846a654 +0x0d37:  mov    $0x0,%eax
0846a659 +0x0d3c:  test   %al,%al
0846a65b +0x0d3e:  jne    0846a607 <+0xcea>
0846a65d +0x0d40:  mov    0xc(%ebp),%eax
0846a660 +0x0d43:  mov    %eax,0x8(%esp)
0846a664 +0x0d47:  mov    -0xc(%ebp),%eax
0846a667 +0x0d4a:  mov    %eax,0x4(%esp)
0846a66b +0x0d4e:  mov    %ebx,(%esp)
0846a66e +0x0d51:  call   0846ada6 <+0x1489>
0846a673 +0x0d56:  mov    %ebx,%eax
0846a675 +0x0d58:  add    $0x24,%esp
0846a678 +0x0d5b:  pop    %ebx
0846a679 +0x0d5c:  pop    %ebp
0846a67a +0x0d5d:  ret    $0x4
0846a67d +0x0d60:  nop
0846a67e +0x0d61:  push   %ebp
0846a67f +0x0d62:  mov    %esp,%ebp
0846a681 +0x0d64:  push   %ebx
0846a682 +0x0d65:  sub    $0x14,%esp
0846a685 +0x0d68:  mov    0x8(%ebp),%ebx
0846a688 +0x0d6b:  mov    0xc(%ebp),%eax
0846a68b +0x0d6e:  mov    %eax,0x8(%esp)
0846a68f +0x0d72:  movl   $0x0,0x4(%esp)
0846a697 +0x0d7a:  mov    %ebx,(%esp)
0846a69a +0x0d7d:  call   0846ada6 <+0x1489>
0846a69f +0x0d82:  mov    %ebx,%eax
0846a6a1 +0x0d84:  add    $0x14,%esp
0846a6a4 +0x0d87:  pop    %ebx
0846a6a5 +0x0d88:  pop    %ebp
0846a6a6 +0x0d89:  ret    $0x4
0846a6a9 +0x0d8c:  nop
0846a6aa +0x0d8d:  push   %ebp
0846a6ab +0x0d8e:  mov    %esp,%ebp
0846a6ad +0x0d90:  mov    0x8(%ebp),%eax
0846a6b0 +0x0d93:  mov    (%eax),%eax
0846a6b2 +0x0d95:  add    $0x4,%eax
0846a6b5 +0x0d98:  pop    %ebp
0846a6b6 +0x0d99:  ret
0846a6b7 +0x0d9a:  nop
0846a6b8 +0x0d9b:  push   %ebp
0846a6b9 +0x0d9c:  mov    %esp,%ebp
0846a6bb +0x0d9e:  push   %ebx
0846a6bc +0x0d9f:  sub    $0x14,%esp
0846a6bf +0x0da2:  mov    0x8(%ebp),%ebx
0846a6c2 +0x0da5:  mov    0xc(%ebp),%eax
0846a6c5 +0x0da8:  mov    0x10(%eax),%eax
0846a6c8 +0x0dab:  add    $0x1,%eax
0846a6cb +0x0dae:  mov    %eax,0x4(%esp)
0846a6cf +0x0db2:  mov    0xc(%ebp),%eax
0846a6d2 +0x0db5:  mov    %eax,(%esp)
0846a6d5 +0x0db8:  call   0846adbc <+0x149f>
0846a6da +0x0dbd:  mov    0x10(%ebp),%eax
0846a6dd +0x0dc0:  mov    %eax,0x8(%esp)
0846a6e1 +0x0dc4:  mov    0xc(%ebp),%eax
0846a6e4 +0x0dc7:  mov    %eax,0x4(%esp)
0846a6e8 +0x0dcb:  mov    %ebx,(%esp)
0846a6eb +0x0dce:  call   0846b034 <+0x1717>
0846a6f0 +0x0dd3:  sub    $0x4,%esp
0846a6f3 +0x0dd6:  mov    %ebx,%eax
0846a6f5 +0x0dd8:  mov    -0x4(%ebp),%ebx
0846a6f8 +0x0ddb:  leave
0846a6f9 +0x0ddc:  ret    $0x4
0846a6fc +0x0ddf:  push   %ebp
0846a6fd +0x0de0:  mov    %esp,%ebp
0846a6ff +0x0de2:  mov    0x8(%ebp),%eax
0846a702 +0x0de5:  mov    (%eax),%eax
0846a704 +0x0de7:  add    $0x4,%eax
0846a707 +0x0dea:  pop    %ebp
0846a708 +0x0deb:  ret
0846a709 +0x0dec:  nop
0846a70a +0x0ded:  push   %ebp
0846a70b +0x0dee:  mov    %esp,%ebp
0846a70d +0x0df0:  mov    0x8(%ebp),%eax
0846a710 +0x0df3:  mov    (%eax),%eax
0846a712 +0x0df5:  add    $0x4,%eax
0846a715 +0x0df8:  pop    %ebp
0846a716 +0x0df9:  ret
0846a717 +0x0dfa:  nop
0846a718 +0x0dfb:  push   %ebp
0846a719 +0x0dfc:  mov    %esp,%ebp
0846a71b +0x0dfe:  sub    $0x38,%esp
0846a71e +0x0e01:  mov    0xc(%ebp),%eax
0846a721 +0x0e04:  mov    %eax,0x4(%esp)
0846a725 +0x0e08:  mov    0x8(%ebp),%eax
0846a728 +0x0e0b:  mov    %eax,(%esp)
0846a72b +0x0e0e:  call   0846b196 <+0x1879>
0846a730 +0x0e13:  mov    %eax,-0x1c(%ebp)
0846a733 +0x0e16:  mov    0x8(%ebp),%eax
0846a736 +0x0e19:  lea    0x4(%eax),%edx
0846a739 +0x0e1c:  mov    -0x1c(%ebp),%eax
0846a73c +0x0e1f:  mov    %eax,0x4(%esp)
0846a740 +0x0e23:  mov    %edx,(%esp)
0846a743 +0x0e26:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846a748 +0x0e2b:  mov    (%eax),%eax
0846a74a +0x0e2d:  mov    %eax,-0x18(%ebp)
0846a74d +0x0e30:  movl   $0x0,-0x14(%ebp)
0846a754 +0x0e37:  cmpl   $0x0,-0x18(%ebp)
0846a758 +0x0e3b:  je     0846a86f <+0xf52>
0846a75e +0x0e41:  mov    -0x18(%ebp),%eax
0846a761 +0x0e44:  mov    %eax,-0x10(%ebp)
0846a764 +0x0e47:  mov    -0x10(%ebp),%eax
0846a767 +0x0e4a:  mov    (%eax),%eax
0846a769 +0x0e4c:  mov    %eax,-0xc(%ebp)
0846a76c +0x0e4f:  jmp    0846a7ea <+0xecd>
0846a76e +0x0e51:  mov    -0xc(%ebp),%eax
0846a771 +0x0e54:  lea    0x4(%eax),%edx
0846a774 +0x0e57:  mov    0x8(%ebp),%eax
0846a777 +0x0e5a:  add    $0x3,%eax
0846a77a +0x0e5d:  mov    %edx,0x4(%esp)
0846a77e +0x0e61:  mov    %eax,(%esp)
0846a781 +0x0e64:  call   0846b1c2 <+0x18a5>
0846a786 +0x0e69:  mov    0x8(%ebp),%edx
0846a789 +0x0e6c:  lea    0x2(%edx),%ecx
0846a78c +0x0e6f:  mov    0xc(%ebp),%edx
0846a78f +0x0e72:  mov    %edx,0x8(%esp)
0846a793 +0x0e76:  mov    %eax,0x4(%esp)
0846a797 +0x0e7a:  mov    %ecx,(%esp)
0846a79a +0x0e7d:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846a79f +0x0e82:  test   %al,%al
0846a7a1 +0x0e84:  je     0846a7dc <+0xebf>
0846a7a3 +0x0e86:  mov    -0xc(%ebp),%eax
0846a7a6 +0x0e89:  mov    (%eax),%edx
0846a7a8 +0x0e8b:  mov    -0x10(%ebp),%eax
0846a7ab +0x0e8e:  mov    %edx,(%eax)
0846a7ad +0x0e90:  mov    -0xc(%ebp),%eax
0846a7b0 +0x0e93:  mov    %eax,0x4(%esp)
0846a7b4 +0x0e97:  mov    0x8(%ebp),%eax
0846a7b7 +0x0e9a:  mov    %eax,(%esp)
0846a7ba +0x0e9d:  call   082bfd12 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11c0d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11c0d
0846a7bf +0x0ea2:  mov    -0x10(%ebp),%eax
0846a7c2 +0x0ea5:  mov    (%eax),%eax
0846a7c4 +0x0ea7:  mov    %eax,-0xc(%ebp)
0846a7c7 +0x0eaa:  addl   $0x1,-0x14(%ebp)
0846a7cb +0x0eae:  mov    0x8(%ebp),%eax
0846a7ce +0x0eb1:  mov    0x10(%eax),%eax
0846a7d1 +0x0eb4:  lea    -0x1(%eax),%edx
0846a7d4 +0x0eb7:  mov    0x8(%ebp),%eax
0846a7d7 +0x0eba:  mov    %edx,0x10(%eax)
0846a7da +0x0ebd:  jmp    0846a7ea <+0xecd>
0846a7dc +0x0ebf:  mov    -0xc(%ebp),%eax
0846a7df +0x0ec2:  mov    %eax,-0x10(%ebp)
0846a7e2 +0x0ec5:  mov    -0x10(%ebp),%eax
0846a7e5 +0x0ec8:  mov    (%eax),%eax
0846a7e7 +0x0eca:  mov    %eax,-0xc(%ebp)
0846a7ea +0x0ecd:  cmpl   $0x0,-0xc(%ebp)
0846a7ee +0x0ed1:  setne  %al
0846a7f1 +0x0ed4:  test   %al,%al
0846a7f3 +0x0ed6:  jne    0846a76e <+0xe51>
0846a7f9 +0x0edc:  mov    -0x18(%ebp),%eax
0846a7fc +0x0edf:  lea    0x4(%eax),%edx
0846a7ff +0x0ee2:  mov    0x8(%ebp),%eax
0846a802 +0x0ee5:  add    $0x3,%eax
0846a805 +0x0ee8:  mov    %edx,0x4(%esp)
0846a809 +0x0eec:  mov    %eax,(%esp)
0846a80c +0x0eef:  call   0846b1c2 <+0x18a5>
0846a811 +0x0ef4:  mov    0x8(%ebp),%edx
0846a814 +0x0ef7:  lea    0x2(%edx),%ecx
0846a817 +0x0efa:  mov    0xc(%ebp),%edx
0846a81a +0x0efd:  mov    %edx,0x8(%esp)
0846a81e +0x0f01:  mov    %eax,0x4(%esp)
0846a822 +0x0f05:  mov    %ecx,(%esp)
0846a825 +0x0f08:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846a82a +0x0f0d:  test   %al,%al
0846a82c +0x0f0f:  je     0846a86f <+0xf52>
0846a82e +0x0f11:  mov    0x8(%ebp),%eax
0846a831 +0x0f14:  lea    0x4(%eax),%edx
0846a834 +0x0f17:  mov    -0x1c(%ebp),%eax
0846a837 +0x0f1a:  mov    %eax,0x4(%esp)
0846a83b +0x0f1e:  mov    %edx,(%esp)
0846a83e +0x0f21:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846a843 +0x0f26:  mov    -0x18(%ebp),%edx
0846a846 +0x0f29:  mov    (%edx),%edx
0846a848 +0x0f2b:  mov    %edx,(%eax)
0846a84a +0x0f2d:  mov    -0x18(%ebp),%eax
0846a84d +0x0f30:  mov    %eax,0x4(%esp)
0846a851 +0x0f34:  mov    0x8(%ebp),%eax
0846a854 +0x0f37:  mov    %eax,(%esp)
0846a857 +0x0f3a:  call   082bfd12 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11c0d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11c0d
0846a85c +0x0f3f:  addl   $0x1,-0x14(%ebp)
0846a860 +0x0f43:  mov    0x8(%ebp),%eax
0846a863 +0x0f46:  mov    0x10(%eax),%eax
0846a866 +0x0f49:  lea    -0x1(%eax),%edx
0846a869 +0x0f4c:  mov    0x8(%ebp),%eax
0846a86c +0x0f4f:  mov    %edx,0x10(%eax)
0846a86f +0x0f52:  mov    -0x14(%ebp),%eax
0846a872 +0x0f55:  leave
0846a873 +0x0f56:  ret
0846a874 +0x0f57:  push   %ebp
0846a875 +0x0f58:  mov    %esp,%ebp
0846a877 +0x0f5a:  sub    $0x28,%esp
0846a87a +0x0f5d:  lea    -0x14(%ebp),%eax
0846a87d +0x0f60:  mov    0xc(%ebp),%edx
0846a880 +0x0f63:  mov    %edx,0x8(%esp)
0846a884 +0x0f67:  mov    0x8(%ebp),%edx
0846a887 +0x0f6a:  mov    %edx,0x4(%esp)
0846a88b +0x0f6e:  mov    %eax,(%esp)
0846a88e +0x0f71:  call   0846b1ca <+0x18ad>
0846a893 +0x0f76:  sub    $0x4,%esp
0846a896 +0x0f79:  mov    0x8(%ebp),%eax
0846a899 +0x0f7c:  mov    %eax,(%esp)
0846a89c +0x0f7f:  call   0846ad04 <+0x13e7>
0846a8a1 +0x0f84:  mov    %eax,-0xc(%ebp)
0846a8a4 +0x0f87:  mov    -0x10(%ebp),%eax
0846a8a7 +0x0f8a:  mov    %eax,0x8(%esp)
0846a8ab +0x0f8e:  mov    -0x14(%ebp),%eax
0846a8ae +0x0f91:  mov    %eax,0x4(%esp)
0846a8b2 +0x0f95:  mov    0x8(%ebp),%eax
0846a8b5 +0x0f98:  mov    %eax,(%esp)
0846a8b8 +0x0f9b:  call   0846b358 <+0x1a3b>
0846a8bd +0x0fa0:  mov    0x8(%ebp),%eax
0846a8c0 +0x0fa3:  mov    %eax,(%esp)
0846a8c3 +0x0fa6:  call   0846ad04 <+0x13e7>
0846a8c8 +0x0fab:  mov    -0xc(%ebp),%edx
0846a8cb +0x0fae:  mov    %edx,%ecx
0846a8cd +0x0fb0:  sub    %eax,%ecx
0846a8cf +0x0fb2:  mov    %ecx,%eax
0846a8d1 +0x0fb4:  leave
0846a8d2 +0x0fb5:  ret
0846a8d3 +0x0fb6:  nop
0846a8d4 +0x0fb7:  push   %ebp
0846a8d5 +0x0fb8:  mov    %esp,%ebp
0846a8d7 +0x0fba:  push   %ebx
0846a8d8 +0x0fbb:  sub    $0x24,%esp
0846a8db +0x0fbe:  mov    0x8(%ebp),%ebx
0846a8de +0x0fc1:  mov    0x10(%ebp),%eax
0846a8e1 +0x0fc4:  mov    %eax,0x4(%esp)
0846a8e5 +0x0fc8:  mov    0xc(%ebp),%eax
0846a8e8 +0x0fcb:  mov    %eax,(%esp)
0846a8eb +0x0fce:  call   0846b196 <+0x1879>
0846a8f0 +0x0fd3:  mov    %eax,-0x10(%ebp)
0846a8f3 +0x0fd6:  mov    0xc(%ebp),%eax
0846a8f6 +0x0fd9:  lea    0x4(%eax),%edx
0846a8f9 +0x0fdc:  mov    -0x10(%ebp),%eax
0846a8fc +0x0fdf:  mov    %eax,0x4(%esp)
0846a900 +0x0fe3:  mov    %edx,(%esp)
0846a903 +0x0fe6:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846a908 +0x0feb:  mov    (%eax),%eax
0846a90a +0x0fed:  mov    %eax,-0xc(%ebp)
0846a90d +0x0ff0:  jmp    0846a917 <+0xffa>
0846a90f +0x0ff2:  mov    -0xc(%ebp),%eax
0846a912 +0x0ff5:  mov    (%eax),%eax
0846a914 +0x0ff7:  mov    %eax,-0xc(%ebp)
0846a917 +0x0ffa:  cmpl   $0x0,-0xc(%ebp)
0846a91b +0x0ffe:  je     0846a95c <+0x103f>
0846a91d +0x1000:  mov    -0xc(%ebp),%eax
0846a920 +0x1003:  lea    0x4(%eax),%edx
0846a923 +0x1006:  mov    0xc(%ebp),%eax
0846a926 +0x1009:  add    $0x3,%eax
0846a929 +0x100c:  mov    %edx,0x4(%esp)
0846a92d +0x1010:  mov    %eax,(%esp)
0846a930 +0x1013:  call   0846b1c2 <+0x18a5>
0846a935 +0x1018:  mov    0xc(%ebp),%edx
0846a938 +0x101b:  lea    0x2(%edx),%ecx
0846a93b +0x101e:  mov    0x10(%ebp),%edx
0846a93e +0x1021:  mov    %edx,0x8(%esp)
0846a942 +0x1025:  mov    %eax,0x4(%esp)
0846a946 +0x1029:  mov    %ecx,(%esp)
0846a949 +0x102c:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846a94e +0x1031:  xor    $0x1,%eax
0846a951 +0x1034:  test   %al,%al
0846a953 +0x1036:  je     0846a95c <+0x103f>
0846a955 +0x1038:  mov    $0x1,%eax
0846a95a +0x103d:  jmp    0846a961 <+0x1044>
0846a95c +0x103f:  mov    $0x0,%eax
0846a961 +0x1044:  test   %al,%al
0846a963 +0x1046:  jne    0846a90f <+0xff2>
0846a965 +0x1048:  mov    0xc(%ebp),%eax
0846a968 +0x104b:  mov    %eax,0x8(%esp)
0846a96c +0x104f:  mov    -0xc(%ebp),%eax
0846a96f +0x1052:  mov    %eax,0x4(%esp)
0846a973 +0x1056:  mov    %ebx,(%esp)
0846a976 +0x1059:  call   0846b418 <+0x1afb>
0846a97b +0x105e:  mov    %ebx,%eax
0846a97d +0x1060:  add    $0x24,%esp
0846a980 +0x1063:  pop    %ebx
0846a981 +0x1064:  pop    %ebp
0846a982 +0x1065:  ret    $0x4
0846a985 +0x1068:  nop
0846a986 +0x1069:  push   %ebp
0846a987 +0x106a:  mov    %esp,%ebp
0846a989 +0x106c:  push   %ebx
0846a98a +0x106d:  sub    $0x14,%esp
0846a98d +0x1070:  mov    0x8(%ebp),%ebx
0846a990 +0x1073:  mov    0xc(%ebp),%eax
0846a993 +0x1076:  mov    %eax,0x8(%esp)
0846a997 +0x107a:  movl   $0x0,0x4(%esp)
0846a99f +0x1082:  mov    %ebx,(%esp)
0846a9a2 +0x1085:  call   0846b418 <+0x1afb>
0846a9a7 +0x108a:  mov    %ebx,%eax
0846a9a9 +0x108c:  add    $0x14,%esp
0846a9ac +0x108f:  pop    %ebx
0846a9ad +0x1090:  pop    %ebp
0846a9ae +0x1091:  ret    $0x4
0846a9b1 +0x1094:  nop
0846a9b2 +0x1095:  push   %ebp
0846a9b3 +0x1096:  mov    %esp,%ebp
0846a9b5 +0x1098:  mov    0x8(%ebp),%eax
0846a9b8 +0x109b:  mov    (%eax),%eax
0846a9ba +0x109d:  add    $0x4,%eax
0846a9bd +0x10a0:  pop    %ebp
0846a9be +0x10a1:  ret
0846a9bf +0x10a2:  push   %ebp
0846a9c0 +0x10a3:  mov    %esp,%ebp
0846a9c2 +0x10a5:  mov    0x8(%ebp),%eax
0846a9c5 +0x10a8:  pop    %ebp
0846a9c6 +0x10a9:  ret
0846a9c7 +0x10aa:  nop
0846a9c8 +0x10ab:  push   %ebp
0846a9c9 +0x10ac:  mov    %esp,%ebp
0846a9cb +0x10ae:  push   %edi
0846a9cc +0x10af:  push   %esi
0846a9cd +0x10b0:  push   %ebx
0846a9ce +0x10b1:  sub    $0x1c,%esp
0846a9d1 +0x10b4:  mov    0xc(%ebp),%eax
0846a9d4 +0x10b7:  mov    %eax,(%esp)
0846a9d7 +0x10ba:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0846a9dc +0x10bf:  mov    (%eax),%edx
0846a9de +0x10c1:  mov    0x8(%ebp),%eax
0846a9e1 +0x10c4:  mov    %edx,(%eax)
0846a9e3 +0x10c6:  mov    0x10(%ebp),%eax
0846a9e6 +0x10c9:  mov    %eax,(%esp)
0846a9e9 +0x10cc:  call   0846a9bf <+0x10a2>
0846a9ee +0x10d1:  mov    0x8(%ebp),%edx
0846a9f1 +0x10d4:  lea    0x4(%edx),%ebx
0846a9f4 +0x10d7:  mov    %eax,%edx
0846a9f6 +0x10d9:  mov    $0x26,%eax
0846a9fb +0x10de:  mov    %ebx,%edi
0846a9fd +0x10e0:  mov    %edx,%esi
0846a9ff +0x10e2:  mov    %eax,%ecx
0846aa01 +0x10e4:  rep movsl %ds:(%esi),%es:(%edi)
0846aa03 +0x10e6:  add    $0x1c,%esp
0846aa06 +0x10e9:  pop    %ebx
0846aa07 +0x10ea:  pop    %esi
0846aa08 +0x10eb:  pop    %edi
0846aa09 +0x10ec:  pop    %ebp
0846aa0a +0x10ed:  ret
0846aa0b +0x10ee:  push   %ebp
0846aa0c +0x10ef:  mov    %esp,%ebp
0846aa0e +0x10f1:  mov    0x8(%ebp),%eax
0846aa11 +0x10f4:  pop    %ebp
0846aa12 +0x10f5:  ret
0846aa13 +0x10f6:  nop
0846aa14 +0x10f7:  push   %ebp
0846aa15 +0x10f8:  mov    %esp,%ebp
0846aa17 +0x10fa:  push   %ebx
0846aa18 +0x10fb:  sub    $0x14,%esp
0846aa1b +0x10fe:  mov    0x8(%ebp),%ebx
0846aa1e +0x1101:  mov    0xc(%ebp),%eax
0846aa21 +0x1104:  mov    0x10(%eax),%eax
0846aa24 +0x1107:  add    $0x1,%eax
0846aa27 +0x110a:  mov    %eax,0x4(%esp)
0846aa2b +0x110e:  mov    0xc(%ebp),%eax
0846aa2e +0x1111:  mov    %eax,(%esp)
0846aa31 +0x1114:  call   0846b42e <+0x1b11>
0846aa36 +0x1119:  mov    0x10(%ebp),%eax
0846aa39 +0x111c:  mov    %eax,0x8(%esp)
0846aa3d +0x1120:  mov    0xc(%ebp),%eax
0846aa40 +0x1123:  mov    %eax,0x4(%esp)
0846aa44 +0x1127:  mov    %ebx,(%esp)
0846aa47 +0x112a:  call   0846b6a6 <+0x1d89>
0846aa4c +0x112f:  sub    $0x4,%esp
0846aa4f +0x1132:  mov    %ebx,%eax
0846aa51 +0x1134:  mov    -0x4(%ebp),%ebx
0846aa54 +0x1137:  leave
0846aa55 +0x1138:  ret    $0x4
0846aa58 +0x113b:  push   %ebp
0846aa59 +0x113c:  mov    %esp,%ebp
0846aa5b +0x113e:  push   %edi
0846aa5c +0x113f:  push   %esi
0846aa5d +0x1140:  push   %ebx
0846aa5e +0x1141:  sub    $0x1c,%esp
0846aa61 +0x1144:  mov    0xc(%ebp),%eax
0846aa64 +0x1147:  mov    %eax,(%esp)
0846aa67 +0x114a:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
0846aa6c +0x114f:  mov    (%eax),%edx
0846aa6e +0x1151:  mov    0x8(%ebp),%eax
0846aa71 +0x1154:  mov    %edx,(%eax)
0846aa73 +0x1156:  mov    0x10(%ebp),%eax
0846aa76 +0x1159:  mov    %eax,(%esp)
0846aa79 +0x115c:  call   0846b807 <+0x1eea>
0846aa7e +0x1161:  mov    0x8(%ebp),%edx
0846aa81 +0x1164:  lea    0x4(%edx),%ebx
0846aa84 +0x1167:  mov    %eax,%edx
0846aa86 +0x1169:  mov    $0x26,%eax
0846aa8b +0x116e:  mov    %ebx,%edi
0846aa8d +0x1170:  mov    %edx,%esi
0846aa8f +0x1172:  mov    %eax,%ecx
0846aa91 +0x1174:  rep movsl %ds:(%esi),%es:(%edi)
0846aa93 +0x1176:  add    $0x1c,%esp
0846aa96 +0x1179:  pop    %ebx
0846aa97 +0x117a:  pop    %esi
0846aa98 +0x117b:  pop    %edi
0846aa99 +0x117c:  pop    %ebp
0846aa9a +0x117d:  ret
0846aa9b +0x117e:  nop
0846aa9c +0x117f:  push   %ebp
0846aa9d +0x1180:  mov    %esp,%ebp
0846aa9f +0x1182:  push   %ebx
0846aaa0 +0x1183:  sub    $0x24,%esp
0846aaa3 +0x1186:  mov    0x8(%ebp),%eax
0846aaa6 +0x1189:  mov    0x10(%eax),%eax
0846aaa9 +0x118c:  add    $0x1,%eax
0846aaac +0x118f:  mov    %eax,0x4(%esp)
0846aab0 +0x1193:  mov    0x8(%ebp),%eax
0846aab3 +0x1196:  mov    %eax,(%esp)
0846aab6 +0x1199:  call   0846b42e <+0x1b11>
0846aabb +0x119e:  mov    0xc(%ebp),%eax
0846aabe +0x11a1:  mov    %eax,0x4(%esp)
0846aac2 +0x11a5:  mov    0x8(%ebp),%eax
0846aac5 +0x11a8:  mov    %eax,(%esp)
0846aac8 +0x11ab:  call   0846b810 <+0x1ef3>
0846aacd +0x11b0:  mov    %eax,-0x18(%ebp)
0846aad0 +0x11b3:  mov    0x8(%ebp),%eax
0846aad3 +0x11b6:  lea    0x4(%eax),%edx
0846aad6 +0x11b9:  mov    -0x18(%ebp),%eax
0846aad9 +0x11bc:  mov    %eax,0x4(%esp)
0846aadd +0x11c0:  mov    %edx,(%esp)
0846aae0 +0x11c3:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846aae5 +0x11c8:  mov    (%eax),%eax
0846aae7 +0x11ca:  mov    %eax,-0x14(%ebp)
0846aaea +0x11cd:  mov    -0x14(%ebp),%eax
0846aaed +0x11d0:  mov    %eax,-0xc(%ebp)
0846aaf0 +0x11d3:  jmp    0846ab4b <+0x122e>
0846aaf2 +0x11d5:  mov    0x8(%ebp),%eax
0846aaf5 +0x11d8:  lea    0x3(%eax),%edx
0846aaf8 +0x11db:  mov    0xc(%ebp),%eax
0846aafb +0x11de:  mov    %eax,0x4(%esp)
0846aaff +0x11e2:  mov    %edx,(%esp)
0846ab02 +0x11e5:  call   0846b83c <+0x1f1f>
0846ab07 +0x11ea:  mov    %eax,%ebx
0846ab09 +0x11ec:  mov    -0xc(%ebp),%eax
0846ab0c +0x11ef:  lea    0x4(%eax),%edx
0846ab0f +0x11f2:  mov    0x8(%ebp),%eax
0846ab12 +0x11f5:  add    $0x3,%eax
0846ab15 +0x11f8:  mov    %edx,0x4(%esp)
0846ab19 +0x11fc:  mov    %eax,(%esp)
0846ab1c +0x11ff:  call   0846ad9e <+0x1481>
0846ab21 +0x1204:  mov    0x8(%ebp),%edx
0846ab24 +0x1207:  add    $0x2,%edx
0846ab27 +0x120a:  mov    %ebx,0x8(%esp)
0846ab2b +0x120e:  mov    %eax,0x4(%esp)
0846ab2f +0x1212:  mov    %edx,(%esp)
0846ab32 +0x1215:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846ab37 +0x121a:  test   %al,%al
0846ab39 +0x121c:  je     0846ab43 <+0x1226>
0846ab3b +0x121e:  mov    -0xc(%ebp),%eax
0846ab3e +0x1221:  add    $0x4,%eax
0846ab41 +0x1224:  jmp    0846aba2 <+0x1285>
0846ab43 +0x1226:  mov    -0xc(%ebp),%eax
0846ab46 +0x1229:  mov    (%eax),%eax
0846ab48 +0x122b:  mov    %eax,-0xc(%ebp)
0846ab4b +0x122e:  cmpl   $0x0,-0xc(%ebp)
0846ab4f +0x1232:  setne  %al
0846ab52 +0x1235:  test   %al,%al
0846ab54 +0x1237:  jne    0846aaf2 <+0x11d5>
0846ab56 +0x1239:  mov    0xc(%ebp),%eax
0846ab59 +0x123c:  mov    %eax,0x4(%esp)
0846ab5d +0x1240:  mov    0x8(%ebp),%eax
0846ab60 +0x1243:  mov    %eax,(%esp)
0846ab63 +0x1246:  call   0846b844 <+0x1f27>
0846ab68 +0x124b:  mov    %eax,-0x10(%ebp)
0846ab6b +0x124e:  mov    -0x10(%ebp),%eax
0846ab6e +0x1251:  mov    -0x14(%ebp),%edx
0846ab71 +0x1254:  mov    %edx,(%eax)
0846ab73 +0x1256:  mov    0x8(%ebp),%eax
0846ab76 +0x1259:  lea    0x4(%eax),%edx
0846ab79 +0x125c:  mov    -0x18(%ebp),%eax
0846ab7c +0x125f:  mov    %eax,0x4(%esp)
0846ab80 +0x1263:  mov    %edx,(%esp)
0846ab83 +0x1266:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846ab88 +0x126b:  mov    -0x10(%ebp),%edx
0846ab8b +0x126e:  mov    %edx,(%eax)
0846ab8d +0x1270:  mov    0x8(%ebp),%eax
0846ab90 +0x1273:  mov    0x10(%eax),%eax
0846ab93 +0x1276:  lea    0x1(%eax),%edx
0846ab96 +0x1279:  mov    0x8(%ebp),%eax
0846ab99 +0x127c:  mov    %edx,0x10(%eax)
0846ab9c +0x127f:  mov    -0x10(%ebp),%eax
0846ab9f +0x1282:  add    $0x4,%eax
0846aba2 +0x1285:  add    $0x24,%esp
0846aba5 +0x1288:  pop    %ebx
0846aba6 +0x1289:  pop    %ebp
0846aba7 +0x128a:  ret
0846aba8 +0x128b:  push   %ebp
0846aba9 +0x128c:  mov    %esp,%ebp
0846abab +0x128e:  sub    $0x38,%esp
0846abae +0x1291:  mov    0xc(%ebp),%eax
0846abb1 +0x1294:  mov    %eax,0x4(%esp)
0846abb5 +0x1298:  mov    0x8(%ebp),%eax
0846abb8 +0x129b:  mov    %eax,(%esp)
0846abbb +0x129e:  call   0846ad72 <+0x1455>
0846abc0 +0x12a3:  mov    %eax,-0x1c(%ebp)
0846abc3 +0x12a6:  mov    0x8(%ebp),%eax
0846abc6 +0x12a9:  lea    0x4(%eax),%edx
0846abc9 +0x12ac:  mov    -0x1c(%ebp),%eax
0846abcc +0x12af:  mov    %eax,0x4(%esp)
0846abd0 +0x12b3:  mov    %edx,(%esp)
0846abd3 +0x12b6:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846abd8 +0x12bb:  mov    (%eax),%eax
0846abda +0x12bd:  mov    %eax,-0x18(%ebp)
0846abdd +0x12c0:  movl   $0x0,-0x14(%ebp)
0846abe4 +0x12c7:  cmpl   $0x0,-0x18(%ebp)
0846abe8 +0x12cb:  je     0846acff <+0x13e2>
0846abee +0x12d1:  mov    -0x18(%ebp),%eax
0846abf1 +0x12d4:  mov    %eax,-0x10(%ebp)
0846abf4 +0x12d7:  mov    -0x10(%ebp),%eax
0846abf7 +0x12da:  mov    (%eax),%eax
0846abf9 +0x12dc:  mov    %eax,-0xc(%ebp)
0846abfc +0x12df:  jmp    0846ac7a <+0x135d>
0846abfe +0x12e1:  mov    -0xc(%ebp),%eax
0846ac01 +0x12e4:  lea    0x4(%eax),%edx
0846ac04 +0x12e7:  mov    0x8(%ebp),%eax
0846ac07 +0x12ea:  add    $0x3,%eax
0846ac0a +0x12ed:  mov    %edx,0x4(%esp)
0846ac0e +0x12f1:  mov    %eax,(%esp)
0846ac11 +0x12f4:  call   0846ad9e <+0x1481>
0846ac16 +0x12f9:  mov    0x8(%ebp),%edx
0846ac19 +0x12fc:  lea    0x2(%edx),%ecx
0846ac1c +0x12ff:  mov    0xc(%ebp),%edx
0846ac1f +0x1302:  mov    %edx,0x8(%esp)
0846ac23 +0x1306:  mov    %eax,0x4(%esp)
0846ac27 +0x130a:  mov    %ecx,(%esp)
0846ac2a +0x130d:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846ac2f +0x1312:  test   %al,%al
0846ac31 +0x1314:  je     0846ac6c <+0x134f>
0846ac33 +0x1316:  mov    -0xc(%ebp),%eax
0846ac36 +0x1319:  mov    (%eax),%edx
0846ac38 +0x131b:  mov    -0x10(%ebp),%eax
0846ac3b +0x131e:  mov    %edx,(%eax)
0846ac3d +0x1320:  mov    -0xc(%ebp),%eax
0846ac40 +0x1323:  mov    %eax,0x4(%esp)
0846ac44 +0x1327:  mov    0x8(%ebp),%eax
0846ac47 +0x132a:  mov    %eax,(%esp)
0846ac4a +0x132d:  call   082bff18 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e13>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e13
0846ac4f +0x1332:  mov    -0x10(%ebp),%eax
0846ac52 +0x1335:  mov    (%eax),%eax
0846ac54 +0x1337:  mov    %eax,-0xc(%ebp)
0846ac57 +0x133a:  addl   $0x1,-0x14(%ebp)
0846ac5b +0x133e:  mov    0x8(%ebp),%eax
0846ac5e +0x1341:  mov    0x10(%eax),%eax
0846ac61 +0x1344:  lea    -0x1(%eax),%edx
0846ac64 +0x1347:  mov    0x8(%ebp),%eax
0846ac67 +0x134a:  mov    %edx,0x10(%eax)
0846ac6a +0x134d:  jmp    0846ac7a <+0x135d>
0846ac6c +0x134f:  mov    -0xc(%ebp),%eax
0846ac6f +0x1352:  mov    %eax,-0x10(%ebp)
0846ac72 +0x1355:  mov    -0x10(%ebp),%eax
0846ac75 +0x1358:  mov    (%eax),%eax
0846ac77 +0x135a:  mov    %eax,-0xc(%ebp)
0846ac7a +0x135d:  cmpl   $0x0,-0xc(%ebp)
0846ac7e +0x1361:  setne  %al
0846ac81 +0x1364:  test   %al,%al
0846ac83 +0x1366:  jne    0846abfe <+0x12e1>
0846ac89 +0x136c:  mov    -0x18(%ebp),%eax
0846ac8c +0x136f:  lea    0x4(%eax),%edx
0846ac8f +0x1372:  mov    0x8(%ebp),%eax
0846ac92 +0x1375:  add    $0x3,%eax
0846ac95 +0x1378:  mov    %edx,0x4(%esp)
0846ac99 +0x137c:  mov    %eax,(%esp)
0846ac9c +0x137f:  call   0846ad9e <+0x1481>
0846aca1 +0x1384:  mov    0x8(%ebp),%edx
0846aca4 +0x1387:  lea    0x2(%edx),%ecx
0846aca7 +0x138a:  mov    0xc(%ebp),%edx
0846acaa +0x138d:  mov    %edx,0x8(%esp)
0846acae +0x1391:  mov    %eax,0x4(%esp)
0846acb2 +0x1395:  mov    %ecx,(%esp)
0846acb5 +0x1398:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846acba +0x139d:  test   %al,%al
0846acbc +0x139f:  je     0846acff <+0x13e2>
0846acbe +0x13a1:  mov    0x8(%ebp),%eax
0846acc1 +0x13a4:  lea    0x4(%eax),%edx
0846acc4 +0x13a7:  mov    -0x1c(%ebp),%eax
0846acc7 +0x13aa:  mov    %eax,0x4(%esp)
0846accb +0x13ae:  mov    %edx,(%esp)
0846acce +0x13b1:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846acd3 +0x13b6:  mov    -0x18(%ebp),%edx
0846acd6 +0x13b9:  mov    (%edx),%edx
0846acd8 +0x13bb:  mov    %edx,(%eax)
0846acda +0x13bd:  mov    -0x18(%ebp),%eax
0846acdd +0x13c0:  mov    %eax,0x4(%esp)
0846ace1 +0x13c4:  mov    0x8(%ebp),%eax
0846ace4 +0x13c7:  mov    %eax,(%esp)
0846ace7 +0x13ca:  call   082bff18 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e13>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e13
0846acec +0x13cf:  addl   $0x1,-0x14(%ebp)
0846acf0 +0x13d3:  mov    0x8(%ebp),%eax
0846acf3 +0x13d6:  mov    0x10(%eax),%eax
0846acf6 +0x13d9:  lea    -0x1(%eax),%edx
0846acf9 +0x13dc:  mov    0x8(%ebp),%eax
0846acfc +0x13df:  mov    %edx,0x10(%eax)
0846acff +0x13e2:  mov    -0x14(%ebp),%eax
0846ad02 +0x13e5:  leave
0846ad03 +0x13e6:  ret
0846ad04 +0x13e7:  push   %ebp
0846ad05 +0x13e8:  mov    %esp,%ebp
0846ad07 +0x13ea:  mov    0x8(%ebp),%eax
0846ad0a +0x13ed:  mov    0x14(%eax),%eax
0846ad0d +0x13f0:  pop    %ebp
0846ad0e +0x13f1:  ret
0846ad0f +0x13f2:  nop
0846ad10 +0x13f3:  push   %ebp
0846ad11 +0x13f4:  mov    %esp,%ebp
0846ad13 +0x13f6:  push   %esi
0846ad14 +0x13f7:  push   %ebx
0846ad15 +0x13f8:  sub    $0x20,%esp
0846ad18 +0x13fb:  mov    0x8(%ebp),%esi
0846ad1b +0x13fe:  mov    0xc(%ebp),%eax
0846ad1e +0x1401:  mov    %eax,(%esp)
0846ad21 +0x1404:  call   080e3a16 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x17bc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x17bc
0846ad26 +0x1409:  mov    %eax,%ebx
0846ad28 +0x140b:  mov    0xc(%ebp),%eax
0846ad2b +0x140e:  mov    %eax,(%esp)
0846ad2e +0x1411:  call   080e2a56 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x7fc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x7fc
0846ad33 +0x1416:  mov    0x10(%ebp),%edx
0846ad36 +0x1419:  mov    %edx,0x10(%esp)
0846ad3a +0x141d:  mov    %ebx,0xc(%esp)
0846ad3e +0x1421:  mov    %eax,0x8(%esp)
0846ad42 +0x1425:  mov    0xc(%ebp),%eax
0846ad45 +0x1428:  mov    %eax,0x4(%esp)
0846ad49 +0x142c:  mov    %esi,(%esp)
0846ad4c +0x142f:  call   080e3a22 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x17c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x17c8
0846ad51 +0x1434:  sub    $0x4,%esp
0846ad54 +0x1437:  mov    %esi,%eax
0846ad56 +0x1439:  lea    -0x8(%ebp),%esp
0846ad59 +0x143c:  add    $0x0,%esp
0846ad5c +0x143f:  pop    %ebx
0846ad5d +0x1440:  pop    %esi
0846ad5e +0x1441:  pop    %ebp
0846ad5f +0x1442:  ret    $0x4
0846ad62 +0x1445:  push   %ebp
0846ad63 +0x1446:  mov    %esp,%ebp
0846ad65 +0x1448:  mov    0x8(%ebp),%eax
0846ad68 +0x144b:  mov    0x14(%eax),%eax
0846ad6b +0x144e:  test   %eax,%eax
0846ad6d +0x1450:  sete   %al
0846ad70 +0x1453:  pop    %ebp
0846ad71 +0x1454:  ret
0846ad72 +0x1455:  push   %ebp
0846ad73 +0x1456:  mov    %esp,%ebp
0846ad75 +0x1458:  sub    $0x18,%esp
0846ad78 +0x145b:  mov    0x8(%ebp),%eax
0846ad7b +0x145e:  add    $0x4,%eax
0846ad7e +0x1461:  mov    %eax,(%esp)
0846ad81 +0x1464:  call   082bfeea <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11de5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11de5
0846ad86 +0x1469:  mov    %eax,0x8(%esp)
0846ad8a +0x146d:  mov    0xc(%ebp),%eax
0846ad8d +0x1470:  mov    %eax,0x4(%esp)
0846ad91 +0x1474:  mov    0x8(%ebp),%eax
0846ad94 +0x1477:  mov    %eax,(%esp)
0846ad97 +0x147a:  call   0846b8a6 <+0x1f89>
0846ad9c +0x147f:  leave
0846ad9d +0x1480:  ret
0846ad9e +0x1481:  push   %ebp
0846ad9f +0x1482:  mov    %esp,%ebp
0846ada1 +0x1484:  mov    0xc(%ebp),%eax
0846ada4 +0x1487:  pop    %ebp
0846ada5 +0x1488:  ret
0846ada6 +0x1489:  push   %ebp
0846ada7 +0x148a:  mov    %esp,%ebp
0846ada9 +0x148c:  mov    0x8(%ebp),%eax
0846adac +0x148f:  mov    0xc(%ebp),%edx
0846adaf +0x1492:  mov    %edx,(%eax)
0846adb1 +0x1494:  mov    0x8(%ebp),%eax
0846adb4 +0x1497:  mov    0x10(%ebp),%edx
0846adb7 +0x149a:  mov    %edx,0x4(%eax)
0846adba +0x149d:  pop    %ebp
0846adbb +0x149e:  ret
0846adbc +0x149f:  push   %ebp
0846adbd +0x14a0:  mov    %esp,%ebp
0846adbf +0x14a2:  push   %esi
0846adc0 +0x14a3:  push   %ebx
0846adc1 +0x14a4:  sub    $0x40,%esp
0846adc4 +0x14a7:  mov    0x8(%ebp),%eax
0846adc7 +0x14aa:  add    $0x4,%eax
0846adca +0x14ad:  mov    %eax,(%esp)
0846adcd +0x14b0:  call   082bfce4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bdf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bdf
0846add2 +0x14b5:  mov    %eax,-0x24(%ebp)
0846add5 +0x14b8:  mov    0xc(%ebp),%eax
0846add8 +0x14bb:  cmp    -0x24(%ebp),%eax
0846addb +0x14be:  jbe    0846b029 <+0x170c>
0846ade1 +0x14c4:  mov    0xc(%ebp),%eax
0846ade4 +0x14c7:  mov    %eax,0x4(%esp)
0846ade8 +0x14cb:  mov    0x8(%ebp),%eax
0846adeb +0x14ce:  mov    %eax,(%esp)
0846adee +0x14d1:  call   082c9a20 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1b91b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1b91b
0846adf3 +0x14d6:  mov    %eax,-0x20(%ebp)
0846adf6 +0x14d9:  mov    -0x20(%ebp),%eax
0846adf9 +0x14dc:  cmp    -0x24(%ebp),%eax
0846adfc +0x14df:  jbe    0846b029 <+0x170c>
0846ae02 +0x14e5:  mov    0x8(%ebp),%eax
0846ae05 +0x14e8:  lea    0x4(%eax),%edx
0846ae08 +0x14eb:  lea    -0x29(%ebp),%eax
0846ae0b +0x14ee:  mov    %edx,0x4(%esp)
0846ae0f +0x14f2:  mov    %eax,(%esp)
0846ae12 +0x14f5:  call   0846b8d0 <+0x1fb3>
0846ae17 +0x14fa:  sub    $0x4,%esp
0846ae1a +0x14fd:  movl   $0x0,-0x28(%ebp)
0846ae21 +0x1504:  lea    -0x29(%ebp),%eax
0846ae24 +0x1507:  mov    %eax,0xc(%esp)
0846ae28 +0x150b:  lea    -0x28(%ebp),%eax
0846ae2b +0x150e:  mov    %eax,0x8(%esp)
0846ae2f +0x1512:  mov    -0x20(%ebp),%eax
0846ae32 +0x1515:  mov    %eax,0x4(%esp)
0846ae36 +0x1519:  lea    -0x38(%ebp),%eax
0846ae39 +0x151c:  mov    %eax,(%esp)
0846ae3c +0x151f:  call   0846b902 <+0x1fe5>
0846ae41 +0x1524:  jmp    0846ae5e <+0x1541>
0846ae43 +0x1526:  mov    %edx,%ebx
0846ae45 +0x1528:  mov    %eax,%esi
0846ae47 +0x152a:  lea    -0x29(%ebp),%eax
0846ae4a +0x152d:  mov    %eax,(%esp)
0846ae4d +0x1530:  call   082bfb94 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11a8f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11a8f
0846ae52 +0x1535:  mov    %esi,%eax
0846ae54 +0x1537:  mov    %ebx,%edx
0846ae56 +0x1539:  mov    %eax,(%esp)
0846ae59 +0x153c:  call   08ae3750 <_Unwind_Resume>
0846ae5e +0x1541:  lea    -0x29(%ebp),%eax
0846ae61 +0x1544:  mov    %eax,(%esp)
0846ae64 +0x1547:  call   082bfb94 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11a8f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11a8f
0846ae69 +0x154c:  movl   $0x0,-0x1c(%ebp)
0846ae70 +0x1553:  jmp    0846af2c <+0x160f>
0846ae75 +0x1558:  mov    0x8(%ebp),%eax
0846ae78 +0x155b:  lea    0x4(%eax),%edx
0846ae7b +0x155e:  mov    -0x1c(%ebp),%eax
0846ae7e +0x1561:  mov    %eax,0x4(%esp)
0846ae82 +0x1565:  mov    %edx,(%esp)
0846ae85 +0x1568:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846ae8a +0x156d:  mov    (%eax),%eax
0846ae8c +0x156f:  mov    %eax,-0x18(%ebp)
0846ae8f +0x1572:  jmp    0846af19 <+0x15fc>
0846ae94 +0x1577:  mov    -0x18(%ebp),%eax
0846ae97 +0x157a:  lea    0x4(%eax),%edx
0846ae9a +0x157d:  mov    -0x20(%ebp),%eax
0846ae9d +0x1580:  mov    %eax,0x8(%esp)
0846aea1 +0x1584:  mov    %edx,0x4(%esp)
0846aea5 +0x1588:  mov    0x8(%ebp),%eax
0846aea8 +0x158b:  mov    %eax,(%esp)
0846aeab +0x158e:  call   0846b960 <+0x2043>
0846aeb0 +0x1593:  mov    %eax,-0x14(%ebp)
0846aeb3 +0x1596:  mov    0x8(%ebp),%eax
0846aeb6 +0x1599:  lea    0x4(%eax),%edx
0846aeb9 +0x159c:  mov    -0x1c(%ebp),%eax
0846aebc +0x159f:  mov    %eax,0x4(%esp)
0846aec0 +0x15a3:  mov    %edx,(%esp)
0846aec3 +0x15a6:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846aec8 +0x15ab:  mov    -0x18(%ebp),%edx
0846aecb +0x15ae:  mov    (%edx),%edx
0846aecd +0x15b0:  mov    %edx,(%eax)
0846aecf +0x15b2:  mov    -0x14(%ebp),%eax
0846aed2 +0x15b5:  mov    %eax,0x4(%esp)
0846aed6 +0x15b9:  lea    -0x38(%ebp),%eax
0846aed9 +0x15bc:  mov    %eax,(%esp)
0846aedc +0x15bf:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846aee1 +0x15c4:  mov    (%eax),%edx
0846aee3 +0x15c6:  mov    -0x18(%ebp),%eax
0846aee6 +0x15c9:  mov    %edx,(%eax)
0846aee8 +0x15cb:  mov    -0x14(%ebp),%eax
0846aeeb +0x15ce:  mov    %eax,0x4(%esp)
0846aeef +0x15d2:  lea    -0x38(%ebp),%eax
0846aef2 +0x15d5:  mov    %eax,(%esp)
0846aef5 +0x15d8:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846aefa +0x15dd:  mov    -0x18(%ebp),%edx
0846aefd +0x15e0:  mov    %edx,(%eax)
0846aeff +0x15e2:  mov    0x8(%ebp),%eax
0846af02 +0x15e5:  lea    0x4(%eax),%edx
0846af05 +0x15e8:  mov    -0x1c(%ebp),%eax
0846af08 +0x15eb:  mov    %eax,0x4(%esp)
0846af0c +0x15ef:  mov    %edx,(%esp)
0846af0f +0x15f2:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846af14 +0x15f7:  mov    (%eax),%eax
0846af16 +0x15f9:  mov    %eax,-0x18(%ebp)
0846af19 +0x15fc:  cmpl   $0x0,-0x18(%ebp)
0846af1d +0x1600:  setne  %al
0846af20 +0x1603:  test   %al,%al
0846af22 +0x1605:  jne    0846ae94 <+0x1577>
0846af28 +0x160b:  addl   $0x1,-0x1c(%ebp)
0846af2c +0x160f:  mov    -0x1c(%ebp),%eax
0846af2f +0x1612:  cmp    -0x24(%ebp),%eax
0846af32 +0x1615:  setb   %al
0846af35 +0x1618:  test   %al,%al
0846af37 +0x161a:  jne    0846ae75 <+0x1558>
0846af3d +0x1620:  mov    0x8(%ebp),%eax
0846af40 +0x1623:  lea    0x4(%eax),%edx
0846af43 +0x1626:  lea    -0x38(%ebp),%eax
0846af46 +0x1629:  mov    %eax,0x4(%esp)
0846af4a +0x162d:  mov    %edx,(%esp)
0846af4d +0x1630:  call   0846b994 <+0x2077>
0846af52 +0x1635:  jmp    0846b01e <+0x1701>
0846af57 +0x163a:  mov    %eax,(%esp)
0846af5a +0x163d:  call   08725ce0 <__cxa_begin_catch>
0846af5f +0x1642:  movl   $0x0,-0x10(%ebp)
0846af66 +0x1649:  jmp    0846afdc <+0x16bf>
0846af68 +0x164b:  mov    -0x10(%ebp),%eax
0846af6b +0x164e:  mov    %eax,0x4(%esp)
0846af6f +0x1652:  lea    -0x38(%ebp),%eax
0846af72 +0x1655:  mov    %eax,(%esp)
0846af75 +0x1658:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846af7a +0x165d:  mov    (%eax),%eax
0846af7c +0x165f:  mov    (%eax),%eax
0846af7e +0x1661:  mov    %eax,-0xc(%ebp)
0846af81 +0x1664:  mov    -0x10(%ebp),%eax
0846af84 +0x1667:  mov    %eax,0x4(%esp)
0846af88 +0x166b:  lea    -0x38(%ebp),%eax
0846af8b +0x166e:  mov    %eax,(%esp)
0846af8e +0x1671:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846af93 +0x1676:  mov    (%eax),%eax
0846af95 +0x1678:  mov    %eax,0x4(%esp)
0846af99 +0x167c:  mov    0x8(%ebp),%eax
0846af9c +0x167f:  mov    %eax,(%esp)
0846af9f +0x1682:  call   082bfd12 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11c0d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11c0d
0846afa4 +0x1687:  mov    -0x10(%ebp),%eax
0846afa7 +0x168a:  mov    %eax,0x4(%esp)
0846afab +0x168e:  lea    -0x38(%ebp),%eax
0846afae +0x1691:  mov    %eax,(%esp)
0846afb1 +0x1694:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846afb6 +0x1699:  mov    -0xc(%ebp),%edx
0846afb9 +0x169c:  mov    %edx,(%eax)
0846afbb +0x169e:  mov    -0x10(%ebp),%eax
0846afbe +0x16a1:  mov    %eax,0x4(%esp)
0846afc2 +0x16a5:  lea    -0x38(%ebp),%eax
0846afc5 +0x16a8:  mov    %eax,(%esp)
0846afc8 +0x16ab:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846afcd +0x16b0:  mov    (%eax),%eax
0846afcf +0x16b2:  test   %eax,%eax
0846afd1 +0x16b4:  setne  %al
0846afd4 +0x16b7:  test   %al,%al
0846afd6 +0x16b9:  jne    0846af68 <+0x164b>
0846afd8 +0x16bb:  addl   $0x1,-0x10(%ebp)
0846afdc +0x16bf:  lea    -0x38(%ebp),%eax
0846afdf +0x16c2:  mov    %eax,(%esp)
0846afe2 +0x16c5:  call   082bfce4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bdf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bdf
0846afe7 +0x16ca:  cmp    -0x10(%ebp),%eax
0846afea +0x16cd:  seta   %al
0846afed +0x16d0:  test   %al,%al
0846afef +0x16d2:  jne    0846afbb <+0x169e>
0846aff1 +0x16d4:  call   08724be0 <__cxa_rethrow>
0846aff6 +0x16d9:  mov    %edx,%ebx
0846aff8 +0x16db:  mov    %eax,%esi
0846affa +0x16dd:  call   08725c30 <__cxa_end_catch>
0846afff +0x16e2:  mov    %esi,%eax
0846b001 +0x16e4:  mov    %ebx,%edx
0846b003 +0x16e6:  mov    %edx,%ebx
0846b005 +0x16e8:  mov    %eax,%esi
0846b007 +0x16ea:  lea    -0x38(%ebp),%eax
0846b00a +0x16ed:  mov    %eax,(%esp)
0846b00d +0x16f0:  call   082b68fa <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x87f5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x87f5
0846b012 +0x16f5:  mov    %esi,%eax
0846b014 +0x16f7:  mov    %ebx,%edx
0846b016 +0x16f9:  mov    %eax,(%esp)
0846b019 +0x16fc:  call   08ae3750 <_Unwind_Resume>
0846b01e +0x1701:  lea    -0x38(%ebp),%eax
0846b021 +0x1704:  mov    %eax,(%esp)
0846b024 +0x1707:  call   082b68fa <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x87f5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x87f5
0846b029 +0x170c:  lea    -0x8(%ebp),%esp
0846b02c +0x170f:  add    $0x0,%esp
0846b02f +0x1712:  pop    %ebx
0846b030 +0x1713:  pop    %esi
0846b031 +0x1714:  pop    %ebp
0846b032 +0x1715:  ret
0846b033 +0x1716:  nop
0846b034 +0x1717:  push   %ebp
0846b035 +0x1718:  mov    %esp,%ebp
0846b037 +0x171a:  push   %esi
0846b038 +0x171b:  push   %ebx
0846b039 +0x171c:  sub    $0x40,%esp
0846b03c +0x171f:  mov    0x8(%ebp),%ebx
0846b03f +0x1722:  mov    0x10(%ebp),%eax
0846b042 +0x1725:  mov    %eax,0x4(%esp)
0846b046 +0x1729:  mov    0xc(%ebp),%eax
0846b049 +0x172c:  mov    %eax,(%esp)
0846b04c +0x172f:  call   0846ba08 <+0x20eb>
0846b051 +0x1734:  mov    %eax,-0x18(%ebp)
0846b054 +0x1737:  mov    0xc(%ebp),%eax
0846b057 +0x173a:  lea    0x4(%eax),%edx
0846b05a +0x173d:  mov    -0x18(%ebp),%eax
0846b05d +0x1740:  mov    %eax,0x4(%esp)
0846b061 +0x1744:  mov    %edx,(%esp)
0846b064 +0x1747:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846b069 +0x174c:  mov    (%eax),%eax
0846b06b +0x174e:  mov    %eax,-0x14(%ebp)
0846b06e +0x1751:  mov    -0x14(%ebp),%eax
0846b071 +0x1754:  mov    %eax,-0xc(%ebp)
0846b074 +0x1757:  jmp    0846b102 <+0x17e5>
0846b079 +0x175c:  mov    0xc(%ebp),%eax
0846b07c +0x175f:  lea    0x3(%eax),%edx
0846b07f +0x1762:  mov    0x10(%ebp),%eax
0846b082 +0x1765:  mov    %eax,0x4(%esp)
0846b086 +0x1769:  mov    %edx,(%esp)
0846b089 +0x176c:  call   080e3ace <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1874>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1874
0846b08e +0x1771:  mov    %eax,%esi
0846b090 +0x1773:  mov    -0xc(%ebp),%eax
0846b093 +0x1776:  lea    0x4(%eax),%edx
0846b096 +0x1779:  mov    0xc(%ebp),%eax
0846b099 +0x177c:  add    $0x3,%eax
0846b09c +0x177f:  mov    %edx,0x4(%esp)
0846b0a0 +0x1783:  mov    %eax,(%esp)
0846b0a3 +0x1786:  call   0846b1c2 <+0x18a5>
0846b0a8 +0x178b:  mov    0xc(%ebp),%edx
0846b0ab +0x178e:  add    $0x2,%edx
0846b0ae +0x1791:  mov    %esi,0x8(%esp)
0846b0b2 +0x1795:  mov    %eax,0x4(%esp)
0846b0b6 +0x1799:  mov    %edx,(%esp)
0846b0b9 +0x179c:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846b0be +0x17a1:  test   %al,%al
0846b0c0 +0x17a3:  je     0846b0fa <+0x17dd>
0846b0c2 +0x17a5:  movb   $0x0,-0x2d(%ebp)
0846b0c6 +0x17a9:  mov    0xc(%ebp),%eax
0846b0c9 +0x17ac:  mov    %eax,0x8(%esp)
0846b0cd +0x17b0:  mov    -0xc(%ebp),%eax
0846b0d0 +0x17b3:  mov    %eax,0x4(%esp)
0846b0d4 +0x17b7:  lea    -0x2c(%ebp),%eax
0846b0d7 +0x17ba:  mov    %eax,(%esp)
0846b0da +0x17bd:  call   0846b418 <+0x1afb>
0846b0df +0x17c2:  lea    -0x2d(%ebp),%eax
0846b0e2 +0x17c5:  mov    %eax,0x8(%esp)
0846b0e6 +0x17c9:  lea    -0x2c(%ebp),%eax
0846b0e9 +0x17cc:  mov    %eax,0x4(%esp)
0846b0ed +0x17d0:  mov    %ebx,(%esp)
0846b0f0 +0x17d3:  call   0846ba34 <+0x2117>
0846b0f5 +0x17d8:  jmp    0846b18a <+0x186d>
0846b0fa +0x17dd:  mov    -0xc(%ebp),%eax
0846b0fd +0x17e0:  mov    (%eax),%eax
0846b0ff +0x17e2:  mov    %eax,-0xc(%ebp)
0846b102 +0x17e5:  cmpl   $0x0,-0xc(%ebp)
0846b106 +0x17e9:  setne  %al
0846b109 +0x17ec:  test   %al,%al
0846b10b +0x17ee:  jne    0846b079 <+0x175c>
0846b111 +0x17f4:  mov    0x10(%ebp),%eax
0846b114 +0x17f7:  mov    %eax,0x4(%esp)
0846b118 +0x17fb:  mov    0xc(%ebp),%eax
0846b11b +0x17fe:  mov    %eax,(%esp)
0846b11e +0x1801:  call   0846ba68 <+0x214b>
0846b123 +0x1806:  mov    %eax,-0x10(%ebp)
0846b126 +0x1809:  mov    -0x10(%ebp),%eax
0846b129 +0x180c:  mov    -0x14(%ebp),%edx
0846b12c +0x180f:  mov    %edx,(%eax)
0846b12e +0x1811:  mov    0xc(%ebp),%eax
0846b131 +0x1814:  lea    0x4(%eax),%edx
0846b134 +0x1817:  mov    -0x18(%ebp),%eax
0846b137 +0x181a:  mov    %eax,0x4(%esp)
0846b13b +0x181e:  mov    %edx,(%esp)
0846b13e +0x1821:  call   082bfd00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bfb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bfb
0846b143 +0x1826:  mov    -0x10(%ebp),%edx
0846b146 +0x1829:  mov    %edx,(%eax)
0846b148 +0x182b:  mov    0xc(%ebp),%eax
0846b14b +0x182e:  mov    0x10(%eax),%eax
0846b14e +0x1831:  lea    0x1(%eax),%edx
0846b151 +0x1834:  mov    0xc(%ebp),%eax
0846b154 +0x1837:  mov    %edx,0x10(%eax)
0846b157 +0x183a:  movb   $0x1,-0x21(%ebp)
0846b15b +0x183e:  mov    0xc(%ebp),%eax
0846b15e +0x1841:  mov    %eax,0x8(%esp)
0846b162 +0x1845:  mov    -0x10(%ebp),%eax
0846b165 +0x1848:  mov    %eax,0x4(%esp)
0846b169 +0x184c:  lea    -0x20(%ebp),%eax
0846b16c +0x184f:  mov    %eax,(%esp)
0846b16f +0x1852:  call   0846b418 <+0x1afb>
0846b174 +0x1857:  lea    -0x21(%ebp),%eax
0846b177 +0x185a:  mov    %eax,0x8(%esp)
0846b17b +0x185e:  lea    -0x20(%ebp),%eax
0846b17e +0x1861:  mov    %eax,0x4(%esp)
0846b182 +0x1865:  mov    %ebx,(%esp)
0846b185 +0x1868:  call   0846ba34 <+0x2117>
0846b18a +0x186d:  mov    %ebx,%eax
0846b18c +0x186f:  add    $0x40,%esp
0846b18f +0x1872:  pop    %ebx
0846b190 +0x1873:  pop    %esi
0846b191 +0x1874:  pop    %ebp
0846b192 +0x1875:  ret    $0x4
0846b195 +0x1878:  nop
0846b196 +0x1879:  push   %ebp
0846b197 +0x187a:  mov    %esp,%ebp
0846b199 +0x187c:  sub    $0x18,%esp
0846b19c +0x187f:  mov    0x8(%ebp),%eax
0846b19f +0x1882:  add    $0x4,%eax
0846b1a2 +0x1885:  mov    %eax,(%esp)
0846b1a5 +0x1888:  call   082bfce4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bdf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bdf
0846b1aa +0x188d:  mov    %eax,0x8(%esp)
0846b1ae +0x1891:  mov    0xc(%ebp),%eax
0846b1b1 +0x1894:  mov    %eax,0x4(%esp)
0846b1b5 +0x1898:  mov    0x8(%ebp),%eax
0846b1b8 +0x189b:  mov    %eax,(%esp)
0846b1bb +0x189e:  call   0846baca <+0x21ad>
0846b1c0 +0x18a3:  leave
0846b1c1 +0x18a4:  ret
0846b1c2 +0x18a5:  push   %ebp
0846b1c3 +0x18a6:  mov    %esp,%ebp
0846b1c5 +0x18a8:  mov    0xc(%ebp),%eax
0846b1c8 +0x18ab:  pop    %ebp
0846b1c9 +0x18ac:  ret
0846b1ca +0x18ad:  push   %ebp
0846b1cb +0x18ae:  mov    %esp,%ebp
0846b1cd +0x18b0:  push   %ebx
0846b1ce +0x18b1:  sub    $0x44,%esp
0846b1d1 +0x18b4:  mov    0x8(%ebp),%ebx
0846b1d4 +0x18b7:  mov    0xc(%ebp),%eax
0846b1d7 +0x18ba:  mov    %eax,(%esp)
0846b1da +0x18bd:  call   080e2a56 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x7fc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x7fc
0846b1df +0x18c2:  mov    %eax,-0x18(%ebp)
0846b1e2 +0x18c5:  mov    0xc(%ebp),%eax
0846b1e5 +0x18c8:  mov    %eax,(%esp)
0846b1e8 +0x18cb:  call   080e3a16 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x17bc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x17bc
0846b1ed +0x18d0:  mov    %eax,-0x14(%ebp)
0846b1f0 +0x18d3:  jmp    0846b305 <+0x19e8>
0846b1f5 +0x18d8:  mov    -0x18(%ebp),%eax
0846b1f8 +0x18db:  mov    %eax,(%esp)
0846b1fb +0x18de:  call   080e3ad6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x187c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x187c
0846b200 +0x18e3:  mov    0xc(%ebp),%edx
0846b203 +0x18e6:  mov    0x10(%ebp),%ecx
0846b206 +0x18e9:  mov    %ecx,0x8(%esp)
0846b20a +0x18ed:  mov    %eax,0x4(%esp)
0846b20e +0x18f1:  mov    %edx,(%esp)
0846b211 +0x18f4:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0846b216 +0x18f9:  test   %al,%al
0846b218 +0x18fb:  je     0846b22d <+0x1910>
0846b21a +0x18fd:  mov    -0x18(%ebp),%eax
0846b21d +0x1900:  mov    %eax,(%esp)
0846b220 +0x1903:  call   080e36b1 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1457>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1457
0846b225 +0x1908:  mov    %eax,-0x18(%ebp)
0846b228 +0x190b:  jmp    0846b305 <+0x19e8>
0846b22d +0x1910:  mov    -0x18(%ebp),%eax
0846b230 +0x1913:  mov    %eax,(%esp)
0846b233 +0x1916:  call   080e3ad6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x187c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x187c
0846b238 +0x191b:  mov    0xc(%ebp),%edx
0846b23b +0x191e:  mov    %eax,0x8(%esp)
0846b23f +0x1922:  mov    0x10(%ebp),%eax
0846b242 +0x1925:  mov    %eax,0x4(%esp)
0846b246 +0x1929:  mov    %edx,(%esp)
0846b249 +0x192c:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0846b24e +0x1931:  test   %al,%al
0846b250 +0x1933:  je     0846b26b <+0x194e>
0846b252 +0x1935:  mov    -0x18(%ebp),%eax
0846b255 +0x1938:  mov    %eax,-0x14(%ebp)
0846b258 +0x193b:  mov    -0x18(%ebp),%eax
0846b25b +0x193e:  mov    %eax,(%esp)
0846b25e +0x1941:  call   080e36bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1462>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1462
0846b263 +0x1946:  mov    %eax,-0x18(%ebp)
0846b266 +0x1949:  jmp    0846b305 <+0x19e8>
0846b26b +0x194e:  mov    -0x18(%ebp),%eax
0846b26e +0x1951:  mov    %eax,-0x10(%ebp)
0846b271 +0x1954:  mov    -0x14(%ebp),%eax
0846b274 +0x1957:  mov    %eax,-0xc(%ebp)
0846b277 +0x195a:  mov    -0x18(%ebp),%eax
0846b27a +0x195d:  mov    %eax,-0x14(%ebp)
0846b27d +0x1960:  mov    -0x18(%ebp),%eax
0846b280 +0x1963:  mov    %eax,(%esp)
0846b283 +0x1966:  call   080e36bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1462>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1462
0846b288 +0x196b:  mov    %eax,-0x18(%ebp)
0846b28b +0x196e:  mov    -0x10(%ebp),%eax
0846b28e +0x1971:  mov    %eax,(%esp)
0846b291 +0x1974:  call   080e36b1 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1457>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1457
0846b296 +0x1979:  mov    %eax,-0x10(%ebp)
0846b299 +0x197c:  lea    -0x28(%ebp),%eax
0846b29c +0x197f:  mov    0x10(%ebp),%edx
0846b29f +0x1982:  mov    %edx,0x10(%esp)
0846b2a3 +0x1986:  mov    -0xc(%ebp),%edx
0846b2a6 +0x1989:  mov    %edx,0xc(%esp)
0846b2aa +0x198d:  mov    -0x10(%ebp),%edx
0846b2ad +0x1990:  mov    %edx,0x8(%esp)
0846b2b1 +0x1994:  mov    0xc(%ebp),%edx
0846b2b4 +0x1997:  mov    %edx,0x4(%esp)
0846b2b8 +0x199b:  mov    %eax,(%esp)
0846b2bb +0x199e:  call   0846baf4 <+0x21d7>
0846b2c0 +0x19a3:  sub    $0x4,%esp
0846b2c3 +0x19a6:  lea    -0x24(%ebp),%eax
0846b2c6 +0x19a9:  mov    0x10(%ebp),%edx
0846b2c9 +0x19ac:  mov    %edx,0x10(%esp)
0846b2cd +0x19b0:  mov    -0x14(%ebp),%edx
0846b2d0 +0x19b3:  mov    %edx,0xc(%esp)
0846b2d4 +0x19b7:  mov    -0x18(%ebp),%edx
0846b2d7 +0x19ba:  mov    %edx,0x8(%esp)
0846b2db +0x19be:  mov    0xc(%ebp),%edx
0846b2de +0x19c1:  mov    %edx,0x4(%esp)
0846b2e2 +0x19c5:  mov    %eax,(%esp)
0846b2e5 +0x19c8:  call   080e3a22 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x17c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x17c8
0846b2ea +0x19cd:  sub    $0x4,%esp
0846b2ed +0x19d0:  lea    -0x28(%ebp),%eax
0846b2f0 +0x19d3:  mov    %eax,0x8(%esp)
0846b2f4 +0x19d7:  lea    -0x24(%ebp),%eax
0846b2f7 +0x19da:  mov    %eax,0x4(%esp)
0846b2fb +0x19de:  mov    %ebx,(%esp)
0846b2fe +0x19e1:  call   0846bb6e <+0x2251>
0846b303 +0x19e6:  jmp    0846b34e <+0x1a31>
0846b305 +0x19e8:  cmpl   $0x0,-0x18(%ebp)
0846b309 +0x19ec:  setne  %al
0846b30c +0x19ef:  test   %al,%al
0846b30e +0x19f1:  jne    0846b1f5 <+0x18d8>
0846b314 +0x19f7:  mov    -0x14(%ebp),%eax
0846b317 +0x19fa:  mov    %eax,0x4(%esp)
0846b31b +0x19fe:  lea    -0x20(%ebp),%eax
0846b31e +0x1a01:  mov    %eax,(%esp)
0846b321 +0x1a04:  call   080e3ac0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1866>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1866
0846b326 +0x1a09:  mov    -0x14(%ebp),%eax
0846b329 +0x1a0c:  mov    %eax,0x4(%esp)
0846b32d +0x1a10:  lea    -0x1c(%ebp),%eax
0846b330 +0x1a13:  mov    %eax,(%esp)
0846b333 +0x1a16:  call   080e3ac0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1866>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1866
0846b338 +0x1a1b:  lea    -0x20(%ebp),%eax
0846b33b +0x1a1e:  mov    %eax,0x8(%esp)
0846b33f +0x1a22:  lea    -0x1c(%ebp),%eax
0846b342 +0x1a25:  mov    %eax,0x4(%esp)
0846b346 +0x1a29:  mov    %ebx,(%esp)
0846b349 +0x1a2c:  call   0846bb6e <+0x2251>
0846b34e +0x1a31:  mov    %ebx,%eax
0846b350 +0x1a33:  mov    -0x4(%ebp),%ebx
0846b353 +0x1a36:  leave
0846b354 +0x1a37:  ret    $0x4
0846b357 +0x1a3a:  nop
0846b358 +0x1a3b:  push   %ebp
0846b359 +0x1a3c:  mov    %esp,%ebp
0846b35b +0x1a3e:  sub    $0x28,%esp
0846b35e +0x1a41:  lea    -0x14(%ebp),%eax
0846b361 +0x1a44:  mov    0x8(%ebp),%edx
0846b364 +0x1a47:  mov    %edx,0x4(%esp)
0846b368 +0x1a4b:  mov    %eax,(%esp)
0846b36b +0x1a4e:  call   080e3af8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x189e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x189e
0846b370 +0x1a53:  sub    $0x4,%esp
0846b373 +0x1a56:  lea    -0x14(%ebp),%eax
0846b376 +0x1a59:  mov    %eax,0x4(%esp)
0846b37a +0x1a5d:  lea    0xc(%ebp),%eax
0846b37d +0x1a60:  mov    %eax,(%esp)
0846b380 +0x1a63:  call   080e2648 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3ee>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3ee
0846b385 +0x1a68:  test   %al,%al
0846b387 +0x1a6a:  je     0846b3bb <+0x1a9e>
0846b389 +0x1a6c:  lea    -0x10(%ebp),%eax
0846b38c +0x1a6f:  mov    0x8(%ebp),%edx
0846b38f +0x1a72:  mov    %edx,0x4(%esp)
0846b393 +0x1a76:  mov    %eax,(%esp)
0846b396 +0x1a79:  call   080e2f2c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xcd2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xcd2
0846b39b +0x1a7e:  sub    $0x4,%esp
0846b39e +0x1a81:  lea    -0x10(%ebp),%eax
0846b3a1 +0x1a84:  mov    %eax,0x4(%esp)
0846b3a5 +0x1a88:  lea    0x10(%ebp),%eax
0846b3a8 +0x1a8b:  mov    %eax,(%esp)
0846b3ab +0x1a8e:  call   080e2648 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3ee>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3ee
0846b3b0 +0x1a93:  test   %al,%al
0846b3b2 +0x1a95:  je     0846b3bb <+0x1a9e>
0846b3b4 +0x1a97:  mov    $0x1,%eax
0846b3b9 +0x1a9c:  jmp    0846b3c0 <+0x1aa3>
0846b3bb +0x1a9e:  mov    $0x0,%eax
0846b3c0 +0x1aa3:  test   %al,%al
0846b3c2 +0x1aa5:  je     0846b400 <+0x1ae3>
0846b3c4 +0x1aa7:  mov    0x8(%ebp),%eax
0846b3c7 +0x1aaa:  mov    %eax,(%esp)
0846b3ca +0x1aad:  call   080e3206 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xfac>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xfac
0846b3cf +0x1ab2:  jmp    0846b416 <+0x1af9>
0846b3d1 +0x1ab4:  lea    -0xc(%ebp),%eax
0846b3d4 +0x1ab7:  movl   $0x0,0x8(%esp)
0846b3dc +0x1abf:  lea    0xc(%ebp),%edx
0846b3df +0x1ac2:  mov    %edx,0x4(%esp)
0846b3e3 +0x1ac6:  mov    %eax,(%esp)
0846b3e6 +0x1ac9:  call   0846bb9c <+0x227f>
0846b3eb +0x1ace:  sub    $0x4,%esp
0846b3ee +0x1ad1:  mov    -0xc(%ebp),%eax
0846b3f1 +0x1ad4:  mov    %eax,0x4(%esp)
0846b3f5 +0x1ad8:  mov    0x8(%ebp),%eax
0846b3f8 +0x1adb:  mov    %eax,(%esp)
0846b3fb +0x1ade:  call   080e3580 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1326>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1326
0846b400 +0x1ae3:  lea    0x10(%ebp),%eax
0846b403 +0x1ae6:  mov    %eax,0x4(%esp)
0846b407 +0x1aea:  lea    0xc(%ebp),%eax
0846b40a +0x1aed:  mov    %eax,(%esp)
0846b40d +0x1af0:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
0846b412 +0x1af5:  test   %al,%al
0846b414 +0x1af7:  jne    0846b3d1 <+0x1ab4>
0846b416 +0x1af9:  leave
0846b417 +0x1afa:  ret
0846b418 +0x1afb:  push   %ebp
0846b419 +0x1afc:  mov    %esp,%ebp
0846b41b +0x1afe:  mov    0x8(%ebp),%eax
0846b41e +0x1b01:  mov    0xc(%ebp),%edx
0846b421 +0x1b04:  mov    %edx,(%eax)
0846b423 +0x1b06:  mov    0x8(%ebp),%eax
0846b426 +0x1b09:  mov    0x10(%ebp),%edx
0846b429 +0x1b0c:  mov    %edx,0x4(%eax)
0846b42c +0x1b0f:  pop    %ebp
0846b42d +0x1b10:  ret
0846b42e +0x1b11:  push   %ebp
0846b42f +0x1b12:  mov    %esp,%ebp
0846b431 +0x1b14:  push   %esi
0846b432 +0x1b15:  push   %ebx
0846b433 +0x1b16:  sub    $0x40,%esp
0846b436 +0x1b19:  mov    0x8(%ebp),%eax
0846b439 +0x1b1c:  add    $0x4,%eax
0846b43c +0x1b1f:  mov    %eax,(%esp)
0846b43f +0x1b22:  call   082bfeea <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11de5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11de5
0846b444 +0x1b27:  mov    %eax,-0x24(%ebp)
0846b447 +0x1b2a:  mov    0xc(%ebp),%eax
0846b44a +0x1b2d:  cmp    -0x24(%ebp),%eax
0846b44d +0x1b30:  jbe    0846b69b <+0x1d7e>
0846b453 +0x1b36:  mov    0xc(%ebp),%eax
0846b456 +0x1b39:  mov    %eax,0x4(%esp)
0846b45a +0x1b3d:  mov    0x8(%ebp),%eax
0846b45d +0x1b40:  mov    %eax,(%esp)
0846b460 +0x1b43:  call   082c9c78 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1bb73>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1bb73
0846b465 +0x1b48:  mov    %eax,-0x20(%ebp)
0846b468 +0x1b4b:  mov    -0x20(%ebp),%eax
0846b46b +0x1b4e:  cmp    -0x24(%ebp),%eax
0846b46e +0x1b51:  jbe    0846b69b <+0x1d7e>
0846b474 +0x1b57:  mov    0x8(%ebp),%eax
0846b477 +0x1b5a:  lea    0x4(%eax),%edx
0846b47a +0x1b5d:  lea    -0x29(%ebp),%eax
0846b47d +0x1b60:  mov    %edx,0x4(%esp)
0846b481 +0x1b64:  mov    %eax,(%esp)
0846b484 +0x1b67:  call   0846bbda <+0x22bd>
0846b489 +0x1b6c:  sub    $0x4,%esp
0846b48c +0x1b6f:  movl   $0x0,-0x28(%ebp)
0846b493 +0x1b76:  lea    -0x29(%ebp),%eax
0846b496 +0x1b79:  mov    %eax,0xc(%esp)
0846b49a +0x1b7d:  lea    -0x28(%ebp),%eax
0846b49d +0x1b80:  mov    %eax,0x8(%esp)
0846b4a1 +0x1b84:  mov    -0x20(%ebp),%eax
0846b4a4 +0x1b87:  mov    %eax,0x4(%esp)
0846b4a8 +0x1b8b:  lea    -0x38(%ebp),%eax
0846b4ab +0x1b8e:  mov    %eax,(%esp)
0846b4ae +0x1b91:  call   0846bc0c <+0x22ef>
0846b4b3 +0x1b96:  jmp    0846b4d0 <+0x1bb3>
0846b4b5 +0x1b98:  mov    %edx,%ebx
0846b4b7 +0x1b9a:  mov    %eax,%esi
0846b4b9 +0x1b9c:  lea    -0x29(%ebp),%eax
0846b4bc +0x1b9f:  mov    %eax,(%esp)
0846b4bf +0x1ba2:  call   082bfd9a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11c95>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11c95
0846b4c4 +0x1ba7:  mov    %esi,%eax
0846b4c6 +0x1ba9:  mov    %ebx,%edx
0846b4c8 +0x1bab:  mov    %eax,(%esp)
0846b4cb +0x1bae:  call   08ae3750 <_Unwind_Resume>
0846b4d0 +0x1bb3:  lea    -0x29(%ebp),%eax
0846b4d3 +0x1bb6:  mov    %eax,(%esp)
0846b4d6 +0x1bb9:  call   082bfd9a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11c95>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11c95
0846b4db +0x1bbe:  movl   $0x0,-0x1c(%ebp)
0846b4e2 +0x1bc5:  jmp    0846b59e <+0x1c81>
0846b4e7 +0x1bca:  mov    0x8(%ebp),%eax
0846b4ea +0x1bcd:  lea    0x4(%eax),%edx
0846b4ed +0x1bd0:  mov    -0x1c(%ebp),%eax
0846b4f0 +0x1bd3:  mov    %eax,0x4(%esp)
0846b4f4 +0x1bd7:  mov    %edx,(%esp)
0846b4f7 +0x1bda:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b4fc +0x1bdf:  mov    (%eax),%eax
0846b4fe +0x1be1:  mov    %eax,-0x18(%ebp)
0846b501 +0x1be4:  jmp    0846b58b <+0x1c6e>
0846b506 +0x1be9:  mov    -0x18(%ebp),%eax
0846b509 +0x1bec:  lea    0x4(%eax),%edx
0846b50c +0x1bef:  mov    -0x20(%ebp),%eax
0846b50f +0x1bf2:  mov    %eax,0x8(%esp)
0846b513 +0x1bf6:  mov    %edx,0x4(%esp)
0846b517 +0x1bfa:  mov    0x8(%ebp),%eax
0846b51a +0x1bfd:  mov    %eax,(%esp)
0846b51d +0x1c00:  call   0846bc6a <+0x234d>
0846b522 +0x1c05:  mov    %eax,-0x14(%ebp)
0846b525 +0x1c08:  mov    0x8(%ebp),%eax
0846b528 +0x1c0b:  lea    0x4(%eax),%edx
0846b52b +0x1c0e:  mov    -0x1c(%ebp),%eax
0846b52e +0x1c11:  mov    %eax,0x4(%esp)
0846b532 +0x1c15:  mov    %edx,(%esp)
0846b535 +0x1c18:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b53a +0x1c1d:  mov    -0x18(%ebp),%edx
0846b53d +0x1c20:  mov    (%edx),%edx
0846b53f +0x1c22:  mov    %edx,(%eax)
0846b541 +0x1c24:  mov    -0x14(%ebp),%eax
0846b544 +0x1c27:  mov    %eax,0x4(%esp)
0846b548 +0x1c2b:  lea    -0x38(%ebp),%eax
0846b54b +0x1c2e:  mov    %eax,(%esp)
0846b54e +0x1c31:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b553 +0x1c36:  mov    (%eax),%edx
0846b555 +0x1c38:  mov    -0x18(%ebp),%eax
0846b558 +0x1c3b:  mov    %edx,(%eax)
0846b55a +0x1c3d:  mov    -0x14(%ebp),%eax
0846b55d +0x1c40:  mov    %eax,0x4(%esp)
0846b561 +0x1c44:  lea    -0x38(%ebp),%eax
0846b564 +0x1c47:  mov    %eax,(%esp)
0846b567 +0x1c4a:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b56c +0x1c4f:  mov    -0x18(%ebp),%edx
0846b56f +0x1c52:  mov    %edx,(%eax)
0846b571 +0x1c54:  mov    0x8(%ebp),%eax
0846b574 +0x1c57:  lea    0x4(%eax),%edx
0846b577 +0x1c5a:  mov    -0x1c(%ebp),%eax
0846b57a +0x1c5d:  mov    %eax,0x4(%esp)
0846b57e +0x1c61:  mov    %edx,(%esp)
0846b581 +0x1c64:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b586 +0x1c69:  mov    (%eax),%eax
0846b588 +0x1c6b:  mov    %eax,-0x18(%ebp)
0846b58b +0x1c6e:  cmpl   $0x0,-0x18(%ebp)
0846b58f +0x1c72:  setne  %al
0846b592 +0x1c75:  test   %al,%al
0846b594 +0x1c77:  jne    0846b506 <+0x1be9>
0846b59a +0x1c7d:  addl   $0x1,-0x1c(%ebp)
0846b59e +0x1c81:  mov    -0x1c(%ebp),%eax
0846b5a1 +0x1c84:  cmp    -0x24(%ebp),%eax
0846b5a4 +0x1c87:  setb   %al
0846b5a7 +0x1c8a:  test   %al,%al
0846b5a9 +0x1c8c:  jne    0846b4e7 <+0x1bca>
0846b5af +0x1c92:  mov    0x8(%ebp),%eax
0846b5b2 +0x1c95:  lea    0x4(%eax),%edx
0846b5b5 +0x1c98:  lea    -0x38(%ebp),%eax
0846b5b8 +0x1c9b:  mov    %eax,0x4(%esp)
0846b5bc +0x1c9f:  mov    %edx,(%esp)
0846b5bf +0x1ca2:  call   0846bc9e <+0x2381>
0846b5c4 +0x1ca7:  jmp    0846b690 <+0x1d73>
0846b5c9 +0x1cac:  mov    %eax,(%esp)
0846b5cc +0x1caf:  call   08725ce0 <__cxa_begin_catch>
0846b5d1 +0x1cb4:  movl   $0x0,-0x10(%ebp)
0846b5d8 +0x1cbb:  jmp    0846b64e <+0x1d31>
0846b5da +0x1cbd:  mov    -0x10(%ebp),%eax
0846b5dd +0x1cc0:  mov    %eax,0x4(%esp)
0846b5e1 +0x1cc4:  lea    -0x38(%ebp),%eax
0846b5e4 +0x1cc7:  mov    %eax,(%esp)
0846b5e7 +0x1cca:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b5ec +0x1ccf:  mov    (%eax),%eax
0846b5ee +0x1cd1:  mov    (%eax),%eax
0846b5f0 +0x1cd3:  mov    %eax,-0xc(%ebp)
0846b5f3 +0x1cd6:  mov    -0x10(%ebp),%eax
0846b5f6 +0x1cd9:  mov    %eax,0x4(%esp)
0846b5fa +0x1cdd:  lea    -0x38(%ebp),%eax
0846b5fd +0x1ce0:  mov    %eax,(%esp)
0846b600 +0x1ce3:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b605 +0x1ce8:  mov    (%eax),%eax
0846b607 +0x1cea:  mov    %eax,0x4(%esp)
0846b60b +0x1cee:  mov    0x8(%ebp),%eax
0846b60e +0x1cf1:  mov    %eax,(%esp)
0846b611 +0x1cf4:  call   082bff18 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e13>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e13
0846b616 +0x1cf9:  mov    -0x10(%ebp),%eax
0846b619 +0x1cfc:  mov    %eax,0x4(%esp)
0846b61d +0x1d00:  lea    -0x38(%ebp),%eax
0846b620 +0x1d03:  mov    %eax,(%esp)
0846b623 +0x1d06:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b628 +0x1d0b:  mov    -0xc(%ebp),%edx
0846b62b +0x1d0e:  mov    %edx,(%eax)
0846b62d +0x1d10:  mov    -0x10(%ebp),%eax
0846b630 +0x1d13:  mov    %eax,0x4(%esp)
0846b634 +0x1d17:  lea    -0x38(%ebp),%eax
0846b637 +0x1d1a:  mov    %eax,(%esp)
0846b63a +0x1d1d:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b63f +0x1d22:  mov    (%eax),%eax
0846b641 +0x1d24:  test   %eax,%eax
0846b643 +0x1d26:  setne  %al
0846b646 +0x1d29:  test   %al,%al
0846b648 +0x1d2b:  jne    0846b5da <+0x1cbd>
0846b64a +0x1d2d:  addl   $0x1,-0x10(%ebp)
0846b64e +0x1d31:  lea    -0x38(%ebp),%eax
0846b651 +0x1d34:  mov    %eax,(%esp)
0846b654 +0x1d37:  call   082bfeea <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11de5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11de5
0846b659 +0x1d3c:  cmp    -0x10(%ebp),%eax
0846b65c +0x1d3f:  seta   %al
0846b65f +0x1d42:  test   %al,%al
0846b661 +0x1d44:  jne    0846b62d <+0x1d10>
0846b663 +0x1d46:  call   08724be0 <__cxa_rethrow>
0846b668 +0x1d4b:  mov    %edx,%ebx
0846b66a +0x1d4d:  mov    %eax,%esi
0846b66c +0x1d4f:  call   08725c30 <__cxa_end_catch>
0846b671 +0x1d54:  mov    %esi,%eax
0846b673 +0x1d56:  mov    %ebx,%edx
0846b675 +0x1d58:  mov    %edx,%ebx
0846b677 +0x1d5a:  mov    %eax,%esi
0846b679 +0x1d5c:  lea    -0x38(%ebp),%eax
0846b67c +0x1d5f:  mov    %eax,(%esp)
0846b67f +0x1d62:  call   082b6ae8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x89e3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x89e3
0846b684 +0x1d67:  mov    %esi,%eax
0846b686 +0x1d69:  mov    %ebx,%edx
0846b688 +0x1d6b:  mov    %eax,(%esp)
0846b68b +0x1d6e:  call   08ae3750 <_Unwind_Resume>
0846b690 +0x1d73:  lea    -0x38(%ebp),%eax
0846b693 +0x1d76:  mov    %eax,(%esp)
0846b696 +0x1d79:  call   082b6ae8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x89e3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x89e3
0846b69b +0x1d7e:  lea    -0x8(%ebp),%esp
0846b69e +0x1d81:  add    $0x0,%esp
0846b6a1 +0x1d84:  pop    %ebx
0846b6a2 +0x1d85:  pop    %esi
0846b6a3 +0x1d86:  pop    %ebp
0846b6a4 +0x1d87:  ret
0846b6a5 +0x1d88:  nop
0846b6a6 +0x1d89:  push   %ebp
0846b6a7 +0x1d8a:  mov    %esp,%ebp
0846b6a9 +0x1d8c:  push   %esi
0846b6aa +0x1d8d:  push   %ebx
0846b6ab +0x1d8e:  sub    $0x40,%esp
0846b6ae +0x1d91:  mov    0x8(%ebp),%ebx
0846b6b1 +0x1d94:  mov    0x10(%ebp),%eax
0846b6b4 +0x1d97:  mov    %eax,0x4(%esp)
0846b6b8 +0x1d9b:  mov    0xc(%ebp),%eax
0846b6bb +0x1d9e:  mov    %eax,(%esp)
0846b6be +0x1da1:  call   0846b810 <+0x1ef3>
0846b6c3 +0x1da6:  mov    %eax,-0x18(%ebp)
0846b6c6 +0x1da9:  mov    0xc(%ebp),%eax
0846b6c9 +0x1dac:  lea    0x4(%eax),%edx
0846b6cc +0x1daf:  mov    -0x18(%ebp),%eax
0846b6cf +0x1db2:  mov    %eax,0x4(%esp)
0846b6d3 +0x1db6:  mov    %edx,(%esp)
0846b6d6 +0x1db9:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b6db +0x1dbe:  mov    (%eax),%eax
0846b6dd +0x1dc0:  mov    %eax,-0x14(%ebp)
0846b6e0 +0x1dc3:  mov    -0x14(%ebp),%eax
0846b6e3 +0x1dc6:  mov    %eax,-0xc(%ebp)
0846b6e6 +0x1dc9:  jmp    0846b774 <+0x1e57>
0846b6eb +0x1dce:  mov    0xc(%ebp),%eax
0846b6ee +0x1dd1:  lea    0x3(%eax),%edx
0846b6f1 +0x1dd4:  mov    0x10(%ebp),%eax
0846b6f4 +0x1dd7:  mov    %eax,0x4(%esp)
0846b6f8 +0x1ddb:  mov    %edx,(%esp)
0846b6fb +0x1dde:  call   0846b83c <+0x1f1f>
0846b700 +0x1de3:  mov    %eax,%esi
0846b702 +0x1de5:  mov    -0xc(%ebp),%eax
0846b705 +0x1de8:  lea    0x4(%eax),%edx
0846b708 +0x1deb:  mov    0xc(%ebp),%eax
0846b70b +0x1dee:  add    $0x3,%eax
0846b70e +0x1df1:  mov    %edx,0x4(%esp)
0846b712 +0x1df5:  mov    %eax,(%esp)
0846b715 +0x1df8:  call   0846ad9e <+0x1481>
0846b71a +0x1dfd:  mov    0xc(%ebp),%edx
0846b71d +0x1e00:  add    $0x2,%edx
0846b720 +0x1e03:  mov    %esi,0x8(%esp)
0846b724 +0x1e07:  mov    %eax,0x4(%esp)
0846b728 +0x1e0b:  mov    %edx,(%esp)
0846b72b +0x1e0e:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0846b730 +0x1e13:  test   %al,%al
0846b732 +0x1e15:  je     0846b76c <+0x1e4f>
0846b734 +0x1e17:  movb   $0x0,-0x2d(%ebp)
0846b738 +0x1e1b:  mov    0xc(%ebp),%eax
0846b73b +0x1e1e:  mov    %eax,0x8(%esp)
0846b73f +0x1e22:  mov    -0xc(%ebp),%eax
0846b742 +0x1e25:  mov    %eax,0x4(%esp)
0846b746 +0x1e29:  lea    -0x2c(%ebp),%eax
0846b749 +0x1e2c:  mov    %eax,(%esp)
0846b74c +0x1e2f:  call   0846ada6 <+0x1489>
0846b751 +0x1e34:  lea    -0x2d(%ebp),%eax
0846b754 +0x1e37:  mov    %eax,0x8(%esp)
0846b758 +0x1e3b:  lea    -0x2c(%ebp),%eax
0846b75b +0x1e3e:  mov    %eax,0x4(%esp)
0846b75f +0x1e42:  mov    %ebx,(%esp)
0846b762 +0x1e45:  call   0846bd12 <+0x23f5>
0846b767 +0x1e4a:  jmp    0846b7fc <+0x1edf>
0846b76c +0x1e4f:  mov    -0xc(%ebp),%eax
0846b76f +0x1e52:  mov    (%eax),%eax
0846b771 +0x1e54:  mov    %eax,-0xc(%ebp)
0846b774 +0x1e57:  cmpl   $0x0,-0xc(%ebp)
0846b778 +0x1e5b:  setne  %al
0846b77b +0x1e5e:  test   %al,%al
0846b77d +0x1e60:  jne    0846b6eb <+0x1dce>
0846b783 +0x1e66:  mov    0x10(%ebp),%eax
0846b786 +0x1e69:  mov    %eax,0x4(%esp)
0846b78a +0x1e6d:  mov    0xc(%ebp),%eax
0846b78d +0x1e70:  mov    %eax,(%esp)
0846b790 +0x1e73:  call   0846b844 <+0x1f27>
0846b795 +0x1e78:  mov    %eax,-0x10(%ebp)
0846b798 +0x1e7b:  mov    -0x10(%ebp),%eax
0846b79b +0x1e7e:  mov    -0x14(%ebp),%edx
0846b79e +0x1e81:  mov    %edx,(%eax)
0846b7a0 +0x1e83:  mov    0xc(%ebp),%eax
0846b7a3 +0x1e86:  lea    0x4(%eax),%edx
0846b7a6 +0x1e89:  mov    -0x18(%ebp),%eax
0846b7a9 +0x1e8c:  mov    %eax,0x4(%esp)
0846b7ad +0x1e90:  mov    %edx,(%esp)
0846b7b0 +0x1e93:  call   082bff06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11e01>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11e01
0846b7b5 +0x1e98:  mov    -0x10(%ebp),%edx
0846b7b8 +0x1e9b:  mov    %edx,(%eax)
0846b7ba +0x1e9d:  mov    0xc(%ebp),%eax
0846b7bd +0x1ea0:  mov    0x10(%eax),%eax
0846b7c0 +0x1ea3:  lea    0x1(%eax),%edx
0846b7c3 +0x1ea6:  mov    0xc(%ebp),%eax
0846b7c6 +0x1ea9:  mov    %edx,0x10(%eax)
0846b7c9 +0x1eac:  movb   $0x1,-0x21(%ebp)
0846b7cd +0x1eb0:  mov    0xc(%ebp),%eax
0846b7d0 +0x1eb3:  mov    %eax,0x8(%esp)
0846b7d4 +0x1eb7:  mov    -0x10(%ebp),%eax
0846b7d7 +0x1eba:  mov    %eax,0x4(%esp)
0846b7db +0x1ebe:  lea    -0x20(%ebp),%eax
0846b7de +0x1ec1:  mov    %eax,(%esp)
0846b7e1 +0x1ec4:  call   0846ada6 <+0x1489>
0846b7e6 +0x1ec9:  lea    -0x21(%ebp),%eax
0846b7e9 +0x1ecc:  mov    %eax,0x8(%esp)
0846b7ed +0x1ed0:  lea    -0x20(%ebp),%eax
0846b7f0 +0x1ed3:  mov    %eax,0x4(%esp)
0846b7f4 +0x1ed7:  mov    %ebx,(%esp)
0846b7f7 +0x1eda:  call   0846bd12 <+0x23f5>
0846b7fc +0x1edf:  mov    %ebx,%eax
0846b7fe +0x1ee1:  add    $0x40,%esp
0846b801 +0x1ee4:  pop    %ebx
0846b802 +0x1ee5:  pop    %esi
0846b803 +0x1ee6:  pop    %ebp
0846b804 +0x1ee7:  ret    $0x4
0846b807 +0x1eea:  push   %ebp
0846b808 +0x1eeb:  mov    %esp,%ebp
0846b80a +0x1eed:  mov    0x8(%ebp),%eax
0846b80d +0x1ef0:  pop    %ebp
0846b80e +0x1ef1:  ret
0846b80f +0x1ef2:  nop
0846b810 +0x1ef3:  push   %ebp
0846b811 +0x1ef4:  mov    %esp,%ebp
0846b813 +0x1ef6:  sub    $0x18,%esp
0846b816 +0x1ef9:  mov    0x8(%ebp),%eax
0846b819 +0x1efc:  lea    0x3(%eax),%edx
0846b81c +0x1eff:  mov    0xc(%ebp),%eax
0846b81f +0x1f02:  mov    %eax,0x4(%esp)
0846b823 +0x1f06:  mov    %edx,(%esp)
0846b826 +0x1f09:  call   0846b83c <+0x1f1f>
0846b82b +0x1f0e:  mov    %eax,0x4(%esp)
0846b82f +0x1f12:  mov    0x8(%ebp),%eax
0846b832 +0x1f15:  mov    %eax,(%esp)
0846b835 +0x1f18:  call   0846ad72 <+0x1455>
0846b83a +0x1f1d:  leave
0846b83b +0x1f1e:  ret
0846b83c +0x1f1f:  push   %ebp
0846b83d +0x1f20:  mov    %esp,%ebp
0846b83f +0x1f22:  mov    0xc(%ebp),%eax
0846b842 +0x1f25:  pop    %ebp
0846b843 +0x1f26:  ret
0846b844 +0x1f27:  push   %ebp
0846b845 +0x1f28:  mov    %esp,%ebp
0846b847 +0x1f2a:  push   %ebx
0846b848 +0x1f2b:  sub    $0x24,%esp
0846b84b +0x1f2e:  mov    0x8(%ebp),%eax
0846b84e +0x1f31:  mov    %eax,(%esp)
0846b851 +0x1f34:  call   0846bd46 <+0x2429>
0846b856 +0x1f39:  mov    %eax,-0xc(%ebp)
0846b859 +0x1f3c:  mov    -0xc(%ebp),%eax
0846b85c +0x1f3f:  movl   $0x0,(%eax)
0846b862 +0x1f45:  mov    -0xc(%ebp),%eax
0846b865 +0x1f48:  lea    0x4(%eax),%ebx
0846b868 +0x1f4b:  lea    -0xd(%ebp),%eax
0846b86b +0x1f4e:  mov    0x8(%ebp),%edx
0846b86e +0x1f51:  mov    %edx,0x4(%esp)
0846b872 +0x1f55:  mov    %eax,(%esp)
0846b875 +0x1f58:  call   082c9e40 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1bd3b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1bd3b
0846b87a +0x1f5d:  sub    $0x4,%esp
0846b87d +0x1f60:  lea    -0xd(%ebp),%eax
0846b880 +0x1f63:  mov    0xc(%ebp),%edx
0846b883 +0x1f66:  mov    %edx,0x8(%esp)
0846b887 +0x1f6a:  mov    %ebx,0x4(%esp)
0846b88b +0x1f6e:  mov    %eax,(%esp)
0846b88e +0x1f71:  call   0846bd6a <+0x244d>
0846b893 +0x1f76:  lea    -0xd(%ebp),%eax
0846b896 +0x1f79:  mov    %eax,(%esp)
0846b899 +0x1f7c:  call   082b6a06 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8901>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8901
0846b89e +0x1f81:  mov    -0xc(%ebp),%eax
0846b8a1 +0x1f84:  mov    -0x4(%ebp),%ebx
0846b8a4 +0x1f87:  leave
0846b8a5 +0x1f88:  ret
0846b8a6 +0x1f89:  push   %ebp
0846b8a7 +0x1f8a:  mov    %esp,%ebp
0846b8a9 +0x1f8c:  sub    $0x18,%esp
0846b8ac +0x1f8f:  mov    0xc(%ebp),%eax
0846b8af +0x1f92:  mov    (%eax),%eax
0846b8b1 +0x1f94:  mov    0x8(%ebp),%edx
0846b8b4 +0x1f97:  add    $0x1,%edx
0846b8b7 +0x1f9a:  mov    %eax,0x4(%esp)
0846b8bb +0x1f9e:  mov    %edx,(%esp)
0846b8be +0x1fa1:  call   08179f9e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1c
0846b8c3 +0x1fa6:  mov    $0x0,%edx
0846b8c8 +0x1fab:  divl   0x10(%ebp)
0846b8cb +0x1fae:  mov    %edx,%eax
0846b8cd +0x1fb0:  leave
0846b8ce +0x1fb1:  ret
0846b8cf +0x1fb2:  nop
0846b8d0 +0x1fb3:  push   %ebp
0846b8d1 +0x1fb4:  mov    %esp,%ebp
0846b8d3 +0x1fb6:  push   %esi
0846b8d4 +0x1fb7:  push   %ebx
0846b8d5 +0x1fb8:  sub    $0x10,%esp
0846b8d8 +0x1fbb:  mov    0x8(%ebp),%ebx
0846b8db +0x1fbe:  mov    %ebx,%esi
0846b8dd +0x1fc0:  mov    0xc(%ebp),%eax
0846b8e0 +0x1fc3:  mov    %eax,(%esp)
0846b8e3 +0x1fc6:  call   082dc46c <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x6363>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x6363
0846b8e8 +0x1fcb:  mov    %eax,0x4(%esp)
0846b8ec +0x1fcf:  mov    %esi,(%esp)
0846b8ef +0x1fd2:  call   082dc452 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x6349>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x6349
0846b8f4 +0x1fd7:  mov    %ebx,%eax
0846b8f6 +0x1fd9:  mov    %ebx,%eax
0846b8f8 +0x1fdb:  add    $0x10,%esp
0846b8fb +0x1fde:  pop    %ebx
0846b8fc +0x1fdf:  pop    %esi
0846b8fd +0x1fe0:  pop    %ebp
0846b8fe +0x1fe1:  ret    $0x4
0846b901 +0x1fe4:  nop
0846b902 +0x1fe5:  push   %ebp
0846b903 +0x1fe6:  mov    %esp,%ebp
0846b905 +0x1fe8:  push   %esi
0846b906 +0x1fe9:  push   %ebx
0846b907 +0x1fea:  sub    $0x10,%esp
0846b90a +0x1fed:  mov    0x8(%ebp),%eax
0846b90d +0x1ff0:  mov    0x14(%ebp),%edx
0846b910 +0x1ff3:  mov    %edx,0x8(%esp)
0846b914 +0x1ff7:  mov    0xc(%ebp),%edx
0846b917 +0x1ffa:  mov    %edx,0x4(%esp)
0846b91b +0x1ffe:  mov    %eax,(%esp)
0846b91e +0x2001:  call   0846bda8 <+0x248b>
0846b923 +0x2006:  mov    0x10(%ebp),%eax
0846b926 +0x2009:  mov    %eax,0x8(%esp)
0846b92a +0x200d:  mov    0xc(%ebp),%eax
0846b92d +0x2010:  mov    %eax,0x4(%esp)
0846b931 +0x2014:  mov    0x8(%ebp),%eax
0846b934 +0x2017:  mov    %eax,(%esp)
0846b937 +0x201a:  call   0846be1a <+0x24fd>
0846b93c +0x201f:  jmp    0846b959 <+0x203c>
0846b93e +0x2021:  mov    %edx,%ebx
0846b940 +0x2023:  mov    %eax,%esi
0846b942 +0x2025:  mov    0x8(%ebp),%eax
0846b945 +0x2028:  mov    %eax,(%esp)
0846b948 +0x202b:  call   082bfc5a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11b55>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11b55
0846b94d +0x2030:  mov    %esi,%eax
0846b94f +0x2032:  mov    %ebx,%edx
0846b951 +0x2034:  mov    %eax,(%esp)
0846b954 +0x2037:  call   08ae3750 <_Unwind_Resume>
0846b959 +0x203c:  add    $0x10,%esp
0846b95c +0x203f:  pop    %ebx
0846b95d +0x2040:  pop    %esi
0846b95e +0x2041:  pop    %ebp
0846b95f +0x2042:  ret
0846b960 +0x2043:  push   %ebp
0846b961 +0x2044:  mov    %esp,%ebp
0846b963 +0x2046:  sub    $0x18,%esp
0846b966 +0x2049:  mov    0x8(%ebp),%eax
0846b969 +0x204c:  lea    0x3(%eax),%edx
0846b96c +0x204f:  mov    0xc(%ebp),%eax
0846b96f +0x2052:  mov    %eax,0x4(%esp)
0846b973 +0x2056:  mov    %edx,(%esp)
0846b976 +0x2059:  call   080e3ace <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1874>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1874
0846b97b +0x205e:  mov    0x10(%ebp),%edx
0846b97e +0x2061:  mov    %edx,0x8(%esp)
0846b982 +0x2065:  mov    %eax,0x4(%esp)
0846b986 +0x2069:  mov    0x8(%ebp),%eax
0846b989 +0x206c:  mov    %eax,(%esp)
0846b98c +0x206f:  call   0846baca <+0x21ad>
0846b991 +0x2074:  leave
0846b992 +0x2075:  ret
0846b993 +0x2076:  nop
0846b994 +0x2077:  push   %ebp
0846b995 +0x2078:  mov    %esp,%ebp
0846b997 +0x207a:  push   %ebx
0846b998 +0x207b:  sub    $0x14,%esp
0846b99b +0x207e:  mov    0xc(%ebp),%edx
0846b99e +0x2081:  mov    0x8(%ebp),%eax
0846b9a1 +0x2084:  mov    %edx,0x4(%esp)
0846b9a5 +0x2088:  mov    %eax,(%esp)
0846b9a8 +0x208b:  call   0846be58 <+0x253b>
0846b9ad +0x2090:  mov    0xc(%ebp),%eax
0846b9b0 +0x2093:  lea    0x4(%eax),%edx
0846b9b3 +0x2096:  mov    0x8(%ebp),%eax
0846b9b6 +0x2099:  add    $0x4,%eax
0846b9b9 +0x209c:  mov    %edx,0x4(%esp)
0846b9bd +0x20a0:  mov    %eax,(%esp)
0846b9c0 +0x20a3:  call   0846be58 <+0x253b>
0846b9c5 +0x20a8:  mov    0xc(%ebp),%eax
0846b9c8 +0x20ab:  lea    0x8(%eax),%edx
0846b9cb +0x20ae:  mov    0x8(%ebp),%eax
0846b9ce +0x20b1:  add    $0x8,%eax
0846b9d1 +0x20b4:  mov    %edx,0x4(%esp)
0846b9d5 +0x20b8:  mov    %eax,(%esp)
0846b9d8 +0x20bb:  call   0846be58 <+0x253b>
0846b9dd +0x20c0:  mov    0xc(%ebp),%eax
0846b9e0 +0x20c3:  mov    %eax,(%esp)
0846b9e3 +0x20c6:  call   082bfcc2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bbd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bbd
0846b9e8 +0x20cb:  mov    %eax,%ebx
0846b9ea +0x20cd:  mov    0x8(%ebp),%eax
0846b9ed +0x20d0:  mov    %eax,(%esp)
0846b9f0 +0x20d3:  call   082bfcc2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bbd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bbd
0846b9f5 +0x20d8:  mov    %ebx,0x4(%esp)
0846b9f9 +0x20dc:  mov    %eax,(%esp)
0846b9fc +0x20df:  call   0846be94 <+0x2577>
0846ba01 +0x20e4:  add    $0x14,%esp
0846ba04 +0x20e7:  pop    %ebx
0846ba05 +0x20e8:  pop    %ebp
0846ba06 +0x20e9:  ret
0846ba07 +0x20ea:  nop
0846ba08 +0x20eb:  push   %ebp
0846ba09 +0x20ec:  mov    %esp,%ebp
0846ba0b +0x20ee:  sub    $0x18,%esp
0846ba0e +0x20f1:  mov    0x8(%ebp),%eax
0846ba11 +0x20f4:  lea    0x3(%eax),%edx
0846ba14 +0x20f7:  mov    0xc(%ebp),%eax
0846ba17 +0x20fa:  mov    %eax,0x4(%esp)
0846ba1b +0x20fe:  mov    %edx,(%esp)
0846ba1e +0x2101:  call   080e3ace <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1874>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1874
0846ba23 +0x2106:  mov    %eax,0x4(%esp)
0846ba27 +0x210a:  mov    0x8(%ebp),%eax
0846ba2a +0x210d:  mov    %eax,(%esp)
0846ba2d +0x2110:  call   0846b196 <+0x1879>
0846ba32 +0x2115:  leave
0846ba33 +0x2116:  ret
0846ba34 +0x2117:  push   %ebp
0846ba35 +0x2118:  mov    %esp,%ebp
0846ba37 +0x211a:  sub    $0x18,%esp
0846ba3a +0x211d:  mov    0xc(%ebp),%eax
0846ba3d +0x2120:  mov    %eax,(%esp)
0846ba40 +0x2123:  call   0846be99 <+0x257c>
0846ba45 +0x2128:  mov    0x8(%ebp),%ecx
0846ba48 +0x212b:  mov    0x4(%eax),%edx
0846ba4b +0x212e:  mov    (%eax),%eax
0846ba4d +0x2130:  mov    %eax,(%ecx)
0846ba4f +0x2132:  mov    %edx,0x4(%ecx)
0846ba52 +0x2135:  mov    0x10(%ebp),%eax
0846ba55 +0x2138:  mov    %eax,(%esp)
0846ba58 +0x213b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0846ba5d +0x2140:  movzbl (%eax),%edx
0846ba60 +0x2143:  mov    0x8(%ebp),%eax
0846ba63 +0x2146:  mov    %dl,0x8(%eax)
0846ba66 +0x2149:  leave
0846ba67 +0x214a:  ret
0846ba68 +0x214b:  push   %ebp
0846ba69 +0x214c:  mov    %esp,%ebp
0846ba6b +0x214e:  push   %ebx
0846ba6c +0x214f:  sub    $0x24,%esp
0846ba6f +0x2152:  mov    0x8(%ebp),%eax
0846ba72 +0x2155:  mov    %eax,(%esp)
0846ba75 +0x2158:  call   0846bea2 <+0x2585>
0846ba7a +0x215d:  mov    %eax,-0xc(%ebp)
0846ba7d +0x2160:  mov    -0xc(%ebp),%eax
0846ba80 +0x2163:  movl   $0x0,(%eax)
0846ba86 +0x2169:  mov    -0xc(%ebp),%eax
0846ba89 +0x216c:  lea    0x4(%eax),%ebx
0846ba8c +0x216f:  lea    -0xd(%ebp),%eax
0846ba8f +0x2172:  mov    0x8(%ebp),%edx
0846ba92 +0x2175:  mov    %edx,0x4(%esp)
0846ba96 +0x2179:  mov    %eax,(%esp)
0846ba99 +0x217c:  call   082c9be8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1bae3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1bae3
0846ba9e +0x2181:  sub    $0x4,%esp
0846baa1 +0x2184:  lea    -0xd(%ebp),%eax
0846baa4 +0x2187:  mov    0xc(%ebp),%edx
0846baa7 +0x218a:  mov    %edx,0x8(%esp)
0846baab +0x218e:  mov    %ebx,0x4(%esp)
0846baaf +0x2192:  mov    %eax,(%esp)
0846bab2 +0x2195:  call   0846bec6 <+0x25a9>
0846bab7 +0x219a:  lea    -0xd(%ebp),%eax
0846baba +0x219d:  mov    %eax,(%esp)
0846babd +0x21a0:  call   082b6818 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8713>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8713
0846bac2 +0x21a5:  mov    -0xc(%ebp),%eax
0846bac5 +0x21a8:  mov    -0x4(%ebp),%ebx
0846bac8 +0x21ab:  leave
0846bac9 +0x21ac:  ret
0846baca +0x21ad:  push   %ebp
0846bacb +0x21ae:  mov    %esp,%ebp
0846bacd +0x21b0:  sub    $0x18,%esp
0846bad0 +0x21b3:  mov    0xc(%ebp),%eax
0846bad3 +0x21b6:  mov    (%eax),%eax
0846bad5 +0x21b8:  mov    0x8(%ebp),%edx
0846bad8 +0x21bb:  add    $0x1,%edx
0846badb +0x21be:  mov    %eax,0x4(%esp)
0846badf +0x21c2:  mov    %edx,(%esp)
0846bae2 +0x21c5:  call   08179f9e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1c
0846bae7 +0x21ca:  mov    $0x0,%edx
0846baec +0x21cf:  divl   0x10(%ebp)
0846baef +0x21d2:  mov    %edx,%eax
0846baf1 +0x21d4:  leave
0846baf2 +0x21d5:  ret
0846baf3 +0x21d6:  nop
0846baf4 +0x21d7:  push   %ebp
0846baf5 +0x21d8:  mov    %esp,%ebp
0846baf7 +0x21da:  push   %ebx
0846baf8 +0x21db:  sub    $0x14,%esp
0846bafb +0x21de:  mov    0x8(%ebp),%ebx
0846bafe +0x21e1:  jmp    0846bb49 <+0x222c>
0846bb00 +0x21e3:  mov    0x10(%ebp),%eax
0846bb03 +0x21e6:  mov    %eax,(%esp)
0846bb06 +0x21e9:  call   080e3ad6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x187c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x187c
0846bb0b +0x21ee:  mov    0xc(%ebp),%edx
0846bb0e +0x21f1:  mov    %eax,0x8(%esp)
0846bb12 +0x21f5:  mov    0x18(%ebp),%eax
0846bb15 +0x21f8:  mov    %eax,0x4(%esp)
0846bb19 +0x21fc:  mov    %edx,(%esp)
0846bb1c +0x21ff:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0846bb21 +0x2204:  test   %al,%al
0846bb23 +0x2206:  je     0846bb3b <+0x221e>
0846bb25 +0x2208:  mov    0x10(%ebp),%eax
0846bb28 +0x220b:  mov    %eax,0x14(%ebp)
0846bb2b +0x220e:  mov    0x10(%ebp),%eax
0846bb2e +0x2211:  mov    %eax,(%esp)
0846bb31 +0x2214:  call   080e36bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1462>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1462
0846bb36 +0x2219:  mov    %eax,0x10(%ebp)
0846bb39 +0x221c:  jmp    0846bb49 <+0x222c>
0846bb3b +0x221e:  mov    0x10(%ebp),%eax
0846bb3e +0x2221:  mov    %eax,(%esp)
0846bb41 +0x2224:  call   080e36b1 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1457>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1457
0846bb46 +0x2229:  mov    %eax,0x10(%ebp)
0846bb49 +0x222c:  cmpl   $0x0,0x10(%ebp)
0846bb4d +0x2230:  setne  %al
0846bb50 +0x2233:  test   %al,%al
0846bb52 +0x2235:  jne    0846bb00 <+0x21e3>
0846bb54 +0x2237:  mov    0x14(%ebp),%eax
0846bb57 +0x223a:  mov    %eax,0x4(%esp)
0846bb5b +0x223e:  mov    %ebx,(%esp)
0846bb5e +0x2241:  call   080e3ac0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1866>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1866
0846bb63 +0x2246:  mov    %ebx,%eax
0846bb65 +0x2248:  add    $0x14,%esp
0846bb68 +0x224b:  pop    %ebx
0846bb69 +0x224c:  pop    %ebp
0846bb6a +0x224d:  ret    $0x4
0846bb6d +0x2250:  nop
0846bb6e +0x2251:  push   %ebp
0846bb6f +0x2252:  mov    %esp,%ebp
0846bb71 +0x2254:  sub    $0x18,%esp
0846bb74 +0x2257:  mov    0xc(%ebp),%eax
0846bb77 +0x225a:  mov    %eax,(%esp)
0846bb7a +0x225d:  call   080e41b9 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1f5f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1f5f
0846bb7f +0x2262:  mov    0x8(%ebp),%edx
0846bb82 +0x2265:  mov    (%eax),%eax
0846bb84 +0x2267:  mov    %eax,(%edx)
0846bb86 +0x2269:  mov    0x10(%ebp),%eax
0846bb89 +0x226c:  mov    %eax,(%esp)
0846bb8c +0x226f:  call   080e41b9 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1f5f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1f5f
0846bb91 +0x2274:  mov    0x8(%ebp),%edx
0846bb94 +0x2277:  mov    (%eax),%eax
0846bb96 +0x2279:  mov    %eax,0x4(%edx)
0846bb99 +0x227c:  leave
0846bb9a +0x227d:  ret
0846bb9b +0x227e:  nop
0846bb9c +0x227f:  push   %ebp
0846bb9d +0x2280:  mov    %esp,%ebp
0846bb9f +0x2282:  push   %ebx
0846bba0 +0x2283:  sub    $0x14,%esp
0846bba3 +0x2286:  mov    0x8(%ebp),%ebx
0846bba6 +0x2289:  mov    0xc(%ebp),%eax
0846bba9 +0x228c:  movl   $0x4,0x8(%esp)
0846bbb1 +0x2294:  mov    %eax,0x4(%esp)
0846bbb5 +0x2298:  mov    %ebx,(%esp)
0846bbb8 +0x229b:  call   0807d880 <_init+0x178>
0846bbbd +0x22a0:  mov    0xc(%ebp),%eax
0846bbc0 +0x22a3:  mov    (%eax),%eax
0846bbc2 +0x22a5:  mov    %eax,(%esp)
0846bbc5 +0x22a8:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0846bbca +0x22ad:  mov    0xc(%ebp),%edx
0846bbcd +0x22b0:  mov    %eax,(%edx)
0846bbcf +0x22b2:  mov    %ebx,%eax
0846bbd1 +0x22b4:  add    $0x14,%esp
0846bbd4 +0x22b7:  pop    %ebx
0846bbd5 +0x22b8:  pop    %ebp
0846bbd6 +0x22b9:  ret    $0x4
0846bbd9 +0x22bc:  nop
0846bbda +0x22bd:  push   %ebp
0846bbdb +0x22be:  mov    %esp,%ebp
0846bbdd +0x22c0:  push   %esi
0846bbde +0x22c1:  push   %ebx
0846bbdf +0x22c2:  sub    $0x10,%esp
0846bbe2 +0x22c5:  mov    0x8(%ebp),%ebx
0846bbe5 +0x22c8:  mov    %ebx,%esi
0846bbe7 +0x22ca:  mov    0xc(%ebp),%eax
0846bbea +0x22cd:  mov    %eax,(%esp)
0846bbed +0x22d0:  call   082dc6de <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x65d5>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x65d5
0846bbf2 +0x22d5:  mov    %eax,0x4(%esp)
0846bbf6 +0x22d9:  mov    %esi,(%esp)
0846bbf9 +0x22dc:  call   082dc6c4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x65bb>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x65bb
0846bbfe +0x22e1:  mov    %ebx,%eax
0846bc00 +0x22e3:  mov    %ebx,%eax
0846bc02 +0x22e5:  add    $0x10,%esp
0846bc05 +0x22e8:  pop    %ebx
0846bc06 +0x22e9:  pop    %esi
0846bc07 +0x22ea:  pop    %ebp
0846bc08 +0x22eb:  ret    $0x4
0846bc0b +0x22ee:  nop
0846bc0c +0x22ef:  push   %ebp
0846bc0d +0x22f0:  mov    %esp,%ebp
0846bc0f +0x22f2:  push   %esi
0846bc10 +0x22f3:  push   %ebx
0846bc11 +0x22f4:  sub    $0x10,%esp
0846bc14 +0x22f7:  mov    0x8(%ebp),%eax
0846bc17 +0x22fa:  mov    0x14(%ebp),%edx
0846bc1a +0x22fd:  mov    %edx,0x8(%esp)
0846bc1e +0x2301:  mov    0xc(%ebp),%edx
0846bc21 +0x2304:  mov    %edx,0x4(%esp)
0846bc25 +0x2308:  mov    %eax,(%esp)
0846bc28 +0x230b:  call   0846bef6 <+0x25d9>
0846bc2d +0x2310:  mov    0x10(%ebp),%eax
0846bc30 +0x2313:  mov    %eax,0x8(%esp)
0846bc34 +0x2317:  mov    0xc(%ebp),%eax
0846bc37 +0x231a:  mov    %eax,0x4(%esp)
0846bc3b +0x231e:  mov    0x8(%ebp),%eax
0846bc3e +0x2321:  mov    %eax,(%esp)
0846bc41 +0x2324:  call   0846bf68 <+0x264b>
0846bc46 +0x2329:  jmp    0846bc63 <+0x2346>
0846bc48 +0x232b:  mov    %edx,%ebx
0846bc4a +0x232d:  mov    %eax,%esi
0846bc4c +0x232f:  mov    0x8(%ebp),%eax
0846bc4f +0x2332:  mov    %eax,(%esp)
0846bc52 +0x2335:  call   082bfe60 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11d5b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11d5b
0846bc57 +0x233a:  mov    %esi,%eax
0846bc59 +0x233c:  mov    %ebx,%edx
0846bc5b +0x233e:  mov    %eax,(%esp)
0846bc5e +0x2341:  call   08ae3750 <_Unwind_Resume>
0846bc63 +0x2346:  add    $0x10,%esp
0846bc66 +0x2349:  pop    %ebx
0846bc67 +0x234a:  pop    %esi
0846bc68 +0x234b:  pop    %ebp
0846bc69 +0x234c:  ret
0846bc6a +0x234d:  push   %ebp
0846bc6b +0x234e:  mov    %esp,%ebp
0846bc6d +0x2350:  sub    $0x18,%esp
0846bc70 +0x2353:  mov    0x8(%ebp),%eax
0846bc73 +0x2356:  lea    0x3(%eax),%edx
0846bc76 +0x2359:  mov    0xc(%ebp),%eax
0846bc79 +0x235c:  mov    %eax,0x4(%esp)
0846bc7d +0x2360:  mov    %edx,(%esp)
0846bc80 +0x2363:  call   0846b83c <+0x1f1f>
0846bc85 +0x2368:  mov    0x10(%ebp),%edx
0846bc88 +0x236b:  mov    %edx,0x8(%esp)
0846bc8c +0x236f:  mov    %eax,0x4(%esp)
0846bc90 +0x2373:  mov    0x8(%ebp),%eax
0846bc93 +0x2376:  mov    %eax,(%esp)
0846bc96 +0x2379:  call   0846b8a6 <+0x1f89>
0846bc9b +0x237e:  leave
0846bc9c +0x237f:  ret
0846bc9d +0x2380:  nop
0846bc9e +0x2381:  push   %ebp
0846bc9f +0x2382:  mov    %esp,%ebp
0846bca1 +0x2384:  push   %ebx
0846bca2 +0x2385:  sub    $0x14,%esp
0846bca5 +0x2388:  mov    0xc(%ebp),%edx
0846bca8 +0x238b:  mov    0x8(%ebp),%eax
0846bcab +0x238e:  mov    %edx,0x4(%esp)
0846bcaf +0x2392:  mov    %eax,(%esp)
0846bcb2 +0x2395:  call   0846bfa6 <+0x2689>
0846bcb7 +0x239a:  mov    0xc(%ebp),%eax
0846bcba +0x239d:  lea    0x4(%eax),%edx
0846bcbd +0x23a0:  mov    0x8(%ebp),%eax
0846bcc0 +0x23a3:  add    $0x4,%eax
0846bcc3 +0x23a6:  mov    %edx,0x4(%esp)
0846bcc7 +0x23aa:  mov    %eax,(%esp)
0846bcca +0x23ad:  call   0846bfa6 <+0x2689>
0846bccf +0x23b2:  mov    0xc(%ebp),%eax
0846bcd2 +0x23b5:  lea    0x8(%eax),%edx
0846bcd5 +0x23b8:  mov    0x8(%ebp),%eax
0846bcd8 +0x23bb:  add    $0x8,%eax
0846bcdb +0x23be:  mov    %edx,0x4(%esp)
0846bcdf +0x23c2:  mov    %eax,(%esp)
0846bce2 +0x23c5:  call   0846bfa6 <+0x2689>
0846bce7 +0x23ca:  mov    0xc(%ebp),%eax
0846bcea +0x23cd:  mov    %eax,(%esp)
0846bced +0x23d0:  call   082bfec8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11dc3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11dc3
0846bcf2 +0x23d5:  mov    %eax,%ebx
0846bcf4 +0x23d7:  mov    0x8(%ebp),%eax
0846bcf7 +0x23da:  mov    %eax,(%esp)
0846bcfa +0x23dd:  call   082bfec8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11dc3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11dc3
0846bcff +0x23e2:  mov    %ebx,0x4(%esp)
0846bd03 +0x23e6:  mov    %eax,(%esp)
0846bd06 +0x23e9:  call   0846bfe2 <+0x26c5>
0846bd0b +0x23ee:  add    $0x14,%esp
0846bd0e +0x23f1:  pop    %ebx
0846bd0f +0x23f2:  pop    %ebp
0846bd10 +0x23f3:  ret
0846bd11 +0x23f4:  nop
0846bd12 +0x23f5:  push   %ebp
0846bd13 +0x23f6:  mov    %esp,%ebp
0846bd15 +0x23f8:  sub    $0x18,%esp
0846bd18 +0x23fb:  mov    0xc(%ebp),%eax
0846bd1b +0x23fe:  mov    %eax,(%esp)
0846bd1e +0x2401:  call   0846bfe7 <+0x26ca>
0846bd23 +0x2406:  mov    0x8(%ebp),%ecx
0846bd26 +0x2409:  mov    0x4(%eax),%edx
0846bd29 +0x240c:  mov    (%eax),%eax
0846bd2b +0x240e:  mov    %eax,(%ecx)
0846bd2d +0x2410:  mov    %edx,0x4(%ecx)
0846bd30 +0x2413:  mov    0x10(%ebp),%eax
0846bd33 +0x2416:  mov    %eax,(%esp)
0846bd36 +0x2419:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0846bd3b +0x241e:  movzbl (%eax),%edx
0846bd3e +0x2421:  mov    0x8(%ebp),%eax
0846bd41 +0x2424:  mov    %dl,0x8(%eax)
0846bd44 +0x2427:  leave
0846bd45 +0x2428:  ret
0846bd46 +0x2429:  push   %ebp
0846bd47 +0x242a:  mov    %esp,%ebp
0846bd49 +0x242c:  sub    $0x18,%esp
0846bd4c +0x242f:  mov    0x8(%ebp),%eax
0846bd4f +0x2432:  movl   $0x0,0x8(%esp)
0846bd57 +0x243a:  movl   $0x1,0x4(%esp)
0846bd5f +0x2442:  mov    %eax,(%esp)
0846bd62 +0x2445:  call   0846bff0 <+0x26d3>
0846bd67 +0x244a:  leave
0846bd68 +0x244b:  ret
0846bd69 +0x244c:  nop
0846bd6a +0x244d:  push   %ebp
0846bd6b +0x244e:  mov    %esp,%ebp
0846bd6d +0x2450:  push   %edi
0846bd6e +0x2451:  push   %esi
0846bd6f +0x2452:  push   %ebx
0846bd70 +0x2453:  sub    $0x1c,%esp
0846bd73 +0x2456:  mov    0xc(%ebp),%eax
0846bd76 +0x2459:  mov    %eax,0x4(%esp)
0846bd7a +0x245d:  movl   $0x9c,(%esp)
0846bd81 +0x2464:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0846bd86 +0x2469:  mov    %eax,%edx
0846bd88 +0x246b:  test   %edx,%edx
0846bd8a +0x246d:  je     0846bda0 <+0x2483>
0846bd8c +0x246f:  mov    %eax,%edx
0846bd8e +0x2471:  mov    0x10(%ebp),%eax
0846bd91 +0x2474:  mov    %eax,%ebx
0846bd93 +0x2476:  mov    $0x27,%eax
0846bd98 +0x247b:  mov    %edx,%edi
0846bd9a +0x247d:  mov    %ebx,%esi
0846bd9c +0x247f:  mov    %eax,%ecx
0846bd9e +0x2481:  rep movsl %ds:(%esi),%es:(%edi)
0846bda0 +0x2483:  add    $0x1c,%esp
0846bda3 +0x2486:  pop    %ebx
0846bda4 +0x2487:  pop    %esi
0846bda5 +0x2488:  pop    %edi
0846bda6 +0x2489:  pop    %ebp
0846bda7 +0x248a:  ret
0846bda8 +0x248b:  push   %ebp
0846bda9 +0x248c:  mov    %esp,%ebp
0846bdab +0x248e:  push   %esi
0846bdac +0x248f:  push   %ebx
0846bdad +0x2490:  sub    $0x10,%esp
0846bdb0 +0x2493:  mov    0x8(%ebp),%eax
0846bdb3 +0x2496:  mov    0x10(%ebp),%edx
0846bdb6 +0x2499:  mov    %edx,0x4(%esp)
0846bdba +0x249d:  mov    %eax,(%esp)
0846bdbd +0x24a0:  call   082d3038 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24f33>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24f33
0846bdc2 +0x24a5:  mov    0xc(%ebp),%eax
0846bdc5 +0x24a8:  mov    %eax,0x4(%esp)
0846bdc9 +0x24ac:  mov    0x8(%ebp),%eax
0846bdcc +0x24af:  mov    %eax,(%esp)
0846bdcf +0x24b2:  call   082dc48c <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x6383>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x6383
0846bdd4 +0x24b7:  mov    0x8(%ebp),%edx
0846bdd7 +0x24ba:  mov    %eax,(%edx)
0846bdd9 +0x24bc:  mov    0x8(%ebp),%eax
0846bddc +0x24bf:  mov    (%eax),%edx
0846bdde +0x24c1:  mov    0x8(%ebp),%eax
0846bde1 +0x24c4:  mov    %edx,0x4(%eax)
0846bde4 +0x24c7:  mov    0x8(%ebp),%eax
0846bde7 +0x24ca:  mov    (%eax),%eax
0846bde9 +0x24cc:  mov    0xc(%ebp),%edx
0846bdec +0x24cf:  shl    $0x2,%edx
0846bdef +0x24d2:  lea    (%eax,%edx,1),%edx
0846bdf2 +0x24d5:  mov    0x8(%ebp),%eax
0846bdf5 +0x24d8:  mov    %edx,0x8(%eax)
0846bdf8 +0x24db:  add    $0x10,%esp
0846bdfb +0x24de:  pop    %ebx
0846bdfc +0x24df:  pop    %esi
0846bdfd +0x24e0:  pop    %ebp
0846bdfe +0x24e1:  ret
0846bdff +0x24e2:  mov    %edx,%ebx
0846be01 +0x24e4:  mov    %eax,%esi
0846be03 +0x24e6:  mov    0x8(%ebp),%eax
0846be06 +0x24e9:  mov    %eax,(%esp)
0846be09 +0x24ec:  call   082bfc46 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11b41>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11b41
0846be0e +0x24f1:  mov    %esi,%eax
0846be10 +0x24f3:  mov    %ebx,%edx
0846be12 +0x24f5:  mov    %eax,(%esp)
0846be15 +0x24f8:  call   08ae3750 <_Unwind_Resume>
0846be1a +0x24fd:  push   %ebp
0846be1b +0x24fe:  mov    %esp,%ebp
0846be1d +0x2500:  sub    $0x18,%esp
0846be20 +0x2503:  mov    0x8(%ebp),%eax
0846be23 +0x2506:  mov    %eax,(%esp)
0846be26 +0x2509:  call   082bfcc2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11bbd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11bbd
0846be2b +0x250e:  mov    0x8(%ebp),%edx
0846be2e +0x2511:  mov    (%edx),%edx
0846be30 +0x2513:  mov    %eax,0xc(%esp)
0846be34 +0x2517:  mov    0x10(%ebp),%eax
0846be37 +0x251a:  mov    %eax,0x8(%esp)
0846be3b +0x251e:  mov    0xc(%ebp),%eax
0846be3e +0x2521:  mov    %eax,0x4(%esp)
0846be42 +0x2525:  mov    %edx,(%esp)
0846be45 +0x2528:  call   082dc5d8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x64cf>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x64cf
0846be4a +0x252d:  mov    0x8(%ebp),%eax
0846be4d +0x2530:  mov    0x8(%eax),%edx
0846be50 +0x2533:  mov    0x8(%ebp),%eax
0846be53 +0x2536:  mov    %edx,0x4(%eax)
0846be56 +0x2539:  leave
0846be57 +0x253a:  ret
0846be58 +0x253b:  push   %ebp
0846be59 +0x253c:  mov    %esp,%ebp
0846be5b +0x253e:  sub    $0x28,%esp
0846be5e +0x2541:  mov    0x8(%ebp),%eax
0846be61 +0x2544:  mov    %eax,(%esp)
0846be64 +0x2547:  call   0846c02f <+0x2712>
0846be69 +0x254c:  mov    (%eax),%eax
0846be6b +0x254e:  mov    %eax,-0xc(%ebp)
0846be6e +0x2551:  mov    0xc(%ebp),%eax
0846be71 +0x2554:  mov    %eax,(%esp)
0846be74 +0x2557:  call   0846c02f <+0x2712>
0846be79 +0x255c:  mov    (%eax),%edx
0846be7b +0x255e:  mov    0x8(%ebp),%eax
0846be7e +0x2561:  mov    %edx,(%eax)
0846be80 +0x2563:  lea    -0xc(%ebp),%eax
0846be83 +0x2566:  mov    %eax,(%esp)
0846be86 +0x2569:  call   0846c02f <+0x2712>
0846be8b +0x256e:  mov    (%eax),%edx
0846be8d +0x2570:  mov    0xc(%ebp),%eax
0846be90 +0x2573:  mov    %edx,(%eax)
0846be92 +0x2575:  leave
0846be93 +0x2576:  ret
0846be94 +0x2577:  push   %ebp
0846be95 +0x2578:  mov    %esp,%ebp
0846be97 +0x257a:  pop    %ebp
0846be98 +0x257b:  ret
0846be99 +0x257c:  push   %ebp
0846be9a +0x257d:  mov    %esp,%ebp
0846be9c +0x257f:  mov    0x8(%ebp),%eax
0846be9f +0x2582:  pop    %ebp
0846bea0 +0x2583:  ret
0846bea1 +0x2584:  nop
0846bea2 +0x2585:  push   %ebp
0846bea3 +0x2586:  mov    %esp,%ebp
0846bea5 +0x2588:  sub    $0x18,%esp
0846bea8 +0x258b:  mov    0x8(%ebp),%eax
0846beab +0x258e:  movl   $0x0,0x8(%esp)
0846beb3 +0x2596:  movl   $0x1,0x4(%esp)
0846bebb +0x259e:  mov    %eax,(%esp)
0846bebe +0x25a1:  call   0846c038 <+0x271b>
0846bec3 +0x25a6:  leave
0846bec4 +0x25a7:  ret
0846bec5 +0x25a8:  nop
0846bec6 +0x25a9:  push   %ebp
0846bec7 +0x25aa:  mov    %esp,%ebp
0846bec9 +0x25ac:  sub    $0x18,%esp
0846becc +0x25af:  mov    0xc(%ebp),%eax
0846becf +0x25b2:  mov    %eax,0x4(%esp)
0846bed3 +0x25b6:  movl   $0x8,(%esp)
0846beda +0x25bd:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0846bedf +0x25c2:  mov    %eax,%edx
0846bee1 +0x25c4:  test   %edx,%edx
0846bee3 +0x25c6:  je     0846bef4 <+0x25d7>
0846bee5 +0x25c8:  mov    %eax,%ecx
0846bee7 +0x25ca:  mov    0x10(%ebp),%eax
0846beea +0x25cd:  mov    0x4(%eax),%edx
0846beed +0x25d0:  mov    (%eax),%eax
0846beef +0x25d2:  mov    %eax,(%ecx)
0846bef1 +0x25d4:  mov    %edx,0x4(%ecx)
0846bef4 +0x25d7:  leave
0846bef5 +0x25d8:  ret
0846bef6 +0x25d9:  push   %ebp
0846bef7 +0x25da:  mov    %esp,%ebp
0846bef9 +0x25dc:  push   %esi
0846befa +0x25dd:  push   %ebx
0846befb +0x25de:  sub    $0x10,%esp
0846befe +0x25e1:  mov    0x8(%ebp),%eax
0846bf01 +0x25e4:  mov    0x10(%ebp),%edx
0846bf04 +0x25e7:  mov    %edx,0x4(%esp)
0846bf08 +0x25eb:  mov    %eax,(%esp)
0846bf0b +0x25ee:  call   082d35cc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x254c7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x254c7
0846bf10 +0x25f3:  mov    0xc(%ebp),%eax
0846bf13 +0x25f6:  mov    %eax,0x4(%esp)
0846bf17 +0x25fa:  mov    0x8(%ebp),%eax
0846bf1a +0x25fd:  mov    %eax,(%esp)
0846bf1d +0x2600:  call   082dc6fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x65f5>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x65f5
0846bf22 +0x2605:  mov    0x8(%ebp),%edx
0846bf25 +0x2608:  mov    %eax,(%edx)
0846bf27 +0x260a:  mov    0x8(%ebp),%eax
0846bf2a +0x260d:  mov    (%eax),%edx
0846bf2c +0x260f:  mov    0x8(%ebp),%eax
0846bf2f +0x2612:  mov    %edx,0x4(%eax)
0846bf32 +0x2615:  mov    0x8(%ebp),%eax
0846bf35 +0x2618:  mov    (%eax),%eax
0846bf37 +0x261a:  mov    0xc(%ebp),%edx
0846bf3a +0x261d:  shl    $0x2,%edx
0846bf3d +0x2620:  lea    (%eax,%edx,1),%edx
0846bf40 +0x2623:  mov    0x8(%ebp),%eax
0846bf43 +0x2626:  mov    %edx,0x8(%eax)
0846bf46 +0x2629:  add    $0x10,%esp
0846bf49 +0x262c:  pop    %ebx
0846bf4a +0x262d:  pop    %esi
0846bf4b +0x262e:  pop    %ebp
0846bf4c +0x262f:  ret
0846bf4d +0x2630:  mov    %edx,%ebx
0846bf4f +0x2632:  mov    %eax,%esi
0846bf51 +0x2634:  mov    0x8(%ebp),%eax
0846bf54 +0x2637:  mov    %eax,(%esp)
0846bf57 +0x263a:  call   082bfe4c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11d47>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11d47
0846bf5c +0x263f:  mov    %esi,%eax
0846bf5e +0x2641:  mov    %ebx,%edx
0846bf60 +0x2643:  mov    %eax,(%esp)
0846bf63 +0x2646:  call   08ae3750 <_Unwind_Resume>
0846bf68 +0x264b:  push   %ebp
0846bf69 +0x264c:  mov    %esp,%ebp
0846bf6b +0x264e:  sub    $0x18,%esp
0846bf6e +0x2651:  mov    0x8(%ebp),%eax
0846bf71 +0x2654:  mov    %eax,(%esp)
0846bf74 +0x2657:  call   082bfec8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11dc3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11dc3
0846bf79 +0x265c:  mov    0x8(%ebp),%edx
0846bf7c +0x265f:  mov    (%edx),%edx
0846bf7e +0x2661:  mov    %eax,0xc(%esp)
0846bf82 +0x2665:  mov    0x10(%ebp),%eax
0846bf85 +0x2668:  mov    %eax,0x8(%esp)
0846bf89 +0x266c:  mov    0xc(%ebp),%eax
0846bf8c +0x266f:  mov    %eax,0x4(%esp)
0846bf90 +0x2673:  mov    %edx,(%esp)
0846bf93 +0x2676:  call   082dc84a <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x6741>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x6741
0846bf98 +0x267b:  mov    0x8(%ebp),%eax
0846bf9b +0x267e:  mov    0x8(%eax),%edx
0846bf9e +0x2681:  mov    0x8(%ebp),%eax
0846bfa1 +0x2684:  mov    %edx,0x4(%eax)
0846bfa4 +0x2687:  leave
0846bfa5 +0x2688:  ret
0846bfa6 +0x2689:  push   %ebp
0846bfa7 +0x268a:  mov    %esp,%ebp
0846bfa9 +0x268c:  sub    $0x28,%esp
0846bfac +0x268f:  mov    0x8(%ebp),%eax
0846bfaf +0x2692:  mov    %eax,(%esp)
0846bfb2 +0x2695:  call   0846c076 <+0x2759>
0846bfb7 +0x269a:  mov    (%eax),%eax
0846bfb9 +0x269c:  mov    %eax,-0xc(%ebp)
0846bfbc +0x269f:  mov    0xc(%ebp),%eax
0846bfbf +0x26a2:  mov    %eax,(%esp)
0846bfc2 +0x26a5:  call   0846c076 <+0x2759>
0846bfc7 +0x26aa:  mov    (%eax),%edx
0846bfc9 +0x26ac:  mov    0x8(%ebp),%eax
0846bfcc +0x26af:  mov    %edx,(%eax)
0846bfce +0x26b1:  lea    -0xc(%ebp),%eax
0846bfd1 +0x26b4:  mov    %eax,(%esp)
0846bfd4 +0x26b7:  call   0846c076 <+0x2759>
0846bfd9 +0x26bc:  mov    (%eax),%edx
0846bfdb +0x26be:  mov    0xc(%ebp),%eax
0846bfde +0x26c1:  mov    %edx,(%eax)
0846bfe0 +0x26c3:  leave
0846bfe1 +0x26c4:  ret
0846bfe2 +0x26c5:  push   %ebp
0846bfe3 +0x26c6:  mov    %esp,%ebp
0846bfe5 +0x26c8:  pop    %ebp
0846bfe6 +0x26c9:  ret
0846bfe7 +0x26ca:  push   %ebp
0846bfe8 +0x26cb:  mov    %esp,%ebp
0846bfea +0x26cd:  mov    0x8(%ebp),%eax
0846bfed +0x26d0:  pop    %ebp
0846bfee +0x26d1:  ret
0846bfef +0x26d2:  nop
0846bff0 +0x26d3:  push   %ebp
0846bff1 +0x26d4:  mov    %esp,%ebp
0846bff3 +0x26d6:  sub    $0x18,%esp
0846bff6 +0x26d9:  mov    0x8(%ebp),%eax
0846bff9 +0x26dc:  mov    %eax,(%esp)
0846bffc +0x26df:  call   0846c07e <+0x2761>
0846c001 +0x26e4:  cmp    0xc(%ebp),%eax
0846c004 +0x26e7:  setb   %al
0846c007 +0x26ea:  movzbl %al,%eax
0846c00a +0x26ed:  test   %eax,%eax
0846c00c +0x26ef:  setne  %al
0846c00f +0x26f2:  test   %al,%al
0846c011 +0x26f4:  je     0846c018 <+0x26fb>
0846c013 +0x26f6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0846c018 +0x26fb:  mov    0xc(%ebp),%edx
0846c01b +0x26fe:  mov    %edx,%eax
0846c01d +0x2700:  shl    $0x2,%eax
0846c020 +0x2703:  add    %edx,%eax
0846c022 +0x2705:  shl    $0x5,%eax
0846c025 +0x2708:  mov    %eax,(%esp)
0846c028 +0x270b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0846c02d +0x2710:  leave
0846c02e +0x2711:  ret
0846c02f +0x2712:  push   %ebp
0846c030 +0x2713:  mov    %esp,%ebp
0846c032 +0x2715:  mov    0x8(%ebp),%eax
0846c035 +0x2718:  pop    %ebp
0846c036 +0x2719:  ret
0846c037 +0x271a:  nop
0846c038 +0x271b:  push   %ebp
0846c039 +0x271c:  mov    %esp,%ebp
0846c03b +0x271e:  sub    $0x18,%esp
0846c03e +0x2721:  mov    0x8(%ebp),%eax
0846c041 +0x2724:  mov    %eax,(%esp)
0846c044 +0x2727:  call   0846c088 <+0x276b>
0846c049 +0x272c:  cmp    0xc(%ebp),%eax
0846c04c +0x272f:  setb   %al
0846c04f +0x2732:  movzbl %al,%eax
0846c052 +0x2735:  test   %eax,%eax
0846c054 +0x2737:  setne  %al
0846c057 +0x273a:  test   %al,%al
0846c059 +0x273c:  je     0846c060 <+0x2743>
0846c05b +0x273e:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0846c060 +0x2743:  mov    0xc(%ebp),%edx
0846c063 +0x2746:  mov    %edx,%eax
0846c065 +0x2748:  add    %eax,%eax
0846c067 +0x274a:  add    %edx,%eax
0846c069 +0x274c:  shl    $0x2,%eax
0846c06c +0x274f:  mov    %eax,(%esp)
0846c06f +0x2752:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0846c074 +0x2757:  leave
0846c075 +0x2758:  ret
0846c076 +0x2759:  push   %ebp
0846c077 +0x275a:  mov    %esp,%ebp
0846c079 +0x275c:  mov    0x8(%ebp),%eax
0846c07c +0x275f:  pop    %ebp
0846c07d +0x2760:  ret
0846c07e +0x2761:  push   %ebp
0846c07f +0x2762:  mov    %esp,%ebp
0846c081 +0x2764:  mov    $0x1999999,%eax
0846c086 +0x2769:  pop    %ebp
0846c087 +0x276a:  ret
0846c088 +0x276b:  push   %ebp
0846c089 +0x276c:  mov    %esp,%ebp
0846c08b +0x276e:  mov    $0x15555555,%eax
0846c090 +0x2773:  pop    %ebp
0846c091 +0x2774:  ret
0846c092 +0x2775:  nop
0846c093 +0x2776:  nop
```

## 反编译 C

```c
// <global>::global @ 0x846991d

/* WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short) */

void WongWork::CDeathTower::CPacketHandler::_GLOBAL__I_makePickupItemHeader(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
