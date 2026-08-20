# initFairPVPSkillPoint

`_ZN12CDataManager21initFairPVPSkillPointEv`

`CDataManager::initFairPVPSkillPoint()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835f1d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835f1d6  _ZN12CDataManager21initFairPVPSkillPointEv
#           CDataManager::initFairPVPSkillPoint()
# range [0x0835f1d6, 0x0835f9f7]
0835f1d6 +0x000:  push   %ebp
0835f1d7 +0x001:  mov    %esp,%ebp
0835f1d9 +0x003:  push   %esi
0835f1da +0x004:  push   %ebx
0835f1db +0x005:  sub    $0xf0,%esp
0835f1e1 +0x00b:  movb   $0x1,-0x25(%ebp)
0835f1e5 +0x00f:  mov    0x8(%ebp),%eax
0835f1e8 +0x012:  add    $0xa800,%eax
0835f1ed +0x017:  mov    %eax,(%esp)
0835f1f0 +0x01a:  call   083930be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b5e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b5e
0835f1f5 +0x01f:  xor    $0x1,%eax
0835f1f8 +0x022:  test   %al,%al
0835f1fa +0x024:  je     0835f326 <+0x150>
0835f200 +0x02a:  mov    0x8(%ebp),%eax
0835f203 +0x02d:  lea    0xa800(%eax),%edx
0835f209 +0x033:  lea    -0xa0(%ebp),%eax
0835f20f +0x039:  mov    %edx,0x4(%esp)
0835f213 +0x03d:  mov    %eax,(%esp)
0835f216 +0x040:  call   083930d2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b72>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b72
0835f21b +0x045:  sub    $0x4,%esp
0835f21e +0x048:  jmp    0835f2e8 <+0x112>
0835f223 +0x04d:  lea    -0xa0(%ebp),%eax
0835f229 +0x053:  mov    %eax,(%esp)
0835f22c +0x056:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
0835f231 +0x05b:  lea    0x4(%eax),%edx
0835f234 +0x05e:  lea    -0xa4(%ebp),%eax
0835f23a +0x064:  mov    %edx,0x4(%esp)
0835f23e +0x068:  mov    %eax,(%esp)
0835f241 +0x06b:  call   0839315e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bfe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bfe
0835f246 +0x070:  sub    $0x4,%esp
0835f249 +0x073:  jmp    0835f294 <+0xbe>
0835f24b +0x075:  mov    0x8(%ebp),%eax
0835f24e +0x078:  mov    0xa848(%eax),%ebx
0835f254 +0x07e:  lea    -0xa4(%ebp),%eax
0835f25a +0x084:  mov    %eax,(%esp)
0835f25d +0x087:  call   083931dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c7c
0835f262 +0x08c:  mov    (%eax),%eax
0835f264 +0x08e:  cmp    %eax,%ebx
0835f266 +0x090:  setl   %al
0835f269 +0x093:  test   %al,%al
0835f26b +0x095:  je     0835f286 <+0xb0>
0835f26d +0x097:  lea    -0xa4(%ebp),%eax
0835f273 +0x09d:  mov    %eax,(%esp)
0835f276 +0x0a0:  call   083931dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c7c
0835f27b +0x0a5:  mov    (%eax),%edx
0835f27d +0x0a7:  mov    0x8(%ebp),%eax
0835f280 +0x0aa:  mov    %edx,0xa848(%eax)
0835f286 +0x0b0:  lea    -0xa4(%ebp),%eax
0835f28c +0x0b6:  mov    %eax,(%esp)
0835f28f +0x0b9:  call   083931be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c5e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c5e
0835f294 +0x0be:  lea    -0xa0(%ebp),%eax
0835f29a +0x0c4:  mov    %eax,(%esp)
0835f29d +0x0c7:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
0835f2a2 +0x0cc:  lea    0x4(%eax),%edx
0835f2a5 +0x0cf:  lea    -0x98(%ebp),%eax
0835f2ab +0x0d5:  mov    %edx,0x4(%esp)
0835f2af +0x0d9:  mov    %eax,(%esp)
0835f2b2 +0x0dc:  call   08393184 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c24>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c24
0835f2b7 +0x0e1:  sub    $0x4,%esp
0835f2ba +0x0e4:  lea    -0x98(%ebp),%eax
0835f2c0 +0x0ea:  mov    %eax,0x4(%esp)
0835f2c4 +0x0ee:  lea    -0xa4(%ebp),%eax
0835f2ca +0x0f4:  mov    %eax,(%esp)
0835f2cd +0x0f7:  call   083931aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c4a
0835f2d2 +0x0fc:  test   %al,%al
0835f2d4 +0x0fe:  jne    0835f24b <+0x75>
0835f2da +0x104:  lea    -0xa0(%ebp),%eax
0835f2e0 +0x10a:  mov    %eax,(%esp)
0835f2e3 +0x10d:  call   08393132 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bd2
0835f2e8 +0x112:  mov    0x8(%ebp),%eax
0835f2eb +0x115:  lea    0xa800(%eax),%edx
0835f2f1 +0x11b:  lea    -0x9c(%ebp),%eax
0835f2f7 +0x121:  mov    %edx,0x4(%esp)
0835f2fb +0x125:  mov    %eax,(%esp)
0835f2fe +0x128:  call   083930f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b98
0835f303 +0x12d:  sub    $0x4,%esp
0835f306 +0x130:  lea    -0x9c(%ebp),%eax
0835f30c +0x136:  mov    %eax,0x4(%esp)
0835f310 +0x13a:  lea    -0xa0(%ebp),%eax
0835f316 +0x140:  mov    %eax,(%esp)
0835f319 +0x143:  call   0839311e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bbe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bbe
0835f31e +0x148:  test   %al,%al
0835f320 +0x14a:  jne    0835f223 <+0x4d>
0835f326 +0x150:  mov    0x8(%ebp),%eax
0835f329 +0x153:  add    $0xa818,%eax
0835f32e +0x158:  mov    %eax,(%esp)
0835f331 +0x15b:  call   083931ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c8a
0835f336 +0x160:  xor    $0x1,%eax
0835f339 +0x163:  test   %al,%al
0835f33b +0x165:  je     0835f3e8 <+0x212>
0835f341 +0x16b:  mov    0x8(%ebp),%eax
0835f344 +0x16e:  lea    0xa818(%eax),%edx
0835f34a +0x174:  lea    -0xa8(%ebp),%eax
0835f350 +0x17a:  mov    %edx,0x4(%esp)
0835f354 +0x17e:  mov    %eax,(%esp)
0835f357 +0x181:  call   083931fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c9e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c9e
0835f35c +0x186:  sub    $0x4,%esp
0835f35f +0x189:  jmp    0835f3aa <+0x1d4>
0835f361 +0x18b:  mov    0x8(%ebp),%eax
0835f364 +0x18e:  mov    0xa84c(%eax),%ebx
0835f36a +0x194:  lea    -0xa8(%ebp),%eax
0835f370 +0x19a:  mov    %eax,(%esp)
0835f373 +0x19d:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
0835f378 +0x1a2:  mov    (%eax),%eax
0835f37a +0x1a4:  cmp    %eax,%ebx
0835f37c +0x1a6:  setl   %al
0835f37f +0x1a9:  test   %al,%al
0835f381 +0x1ab:  je     0835f39c <+0x1c6>
0835f383 +0x1ad:  lea    -0xa8(%ebp),%eax
0835f389 +0x1b3:  mov    %eax,(%esp)
0835f38c +0x1b6:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
0835f391 +0x1bb:  mov    (%eax),%edx
0835f393 +0x1bd:  mov    0x8(%ebp),%eax
0835f396 +0x1c0:  mov    %edx,0xa84c(%eax)
0835f39c +0x1c6:  lea    -0xa8(%ebp),%eax
0835f3a2 +0x1cc:  mov    %eax,(%esp)
0835f3a5 +0x1cf:  call   0839325e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cfe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cfe
0835f3aa +0x1d4:  mov    0x8(%ebp),%eax
0835f3ad +0x1d7:  lea    0xa818(%eax),%edx
0835f3b3 +0x1dd:  lea    -0x94(%ebp),%eax
0835f3b9 +0x1e3:  mov    %edx,0x4(%esp)
0835f3bd +0x1e7:  mov    %eax,(%esp)
0835f3c0 +0x1ea:  call   08393224 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cc4
0835f3c5 +0x1ef:  sub    $0x4,%esp
0835f3c8 +0x1f2:  lea    -0x94(%ebp),%eax
0835f3ce +0x1f8:  mov    %eax,0x4(%esp)
0835f3d2 +0x1fc:  lea    -0xa8(%ebp),%eax
0835f3d8 +0x202:  mov    %eax,(%esp)
0835f3db +0x205:  call   0839324a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cea
0835f3e0 +0x20a:  test   %al,%al
0835f3e2 +0x20c:  jne    0835f361 <+0x18b>
0835f3e8 +0x212:  mov    0x8(%ebp),%eax
0835f3eb +0x215:  add    $0xa830,%eax
0835f3f0 +0x21a:  mov    %eax,(%esp)
0835f3f3 +0x21d:  call   0839328a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d2a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d2a
0835f3f8 +0x222:  xor    $0x1,%eax
0835f3fb +0x225:  test   %al,%al
0835f3fd +0x227:  je     0835f9ea <+0x814>
0835f403 +0x22d:  mov    0x8(%ebp),%eax
0835f406 +0x230:  lea    0xa830(%eax),%edx
0835f40c +0x236:  lea    -0xac(%ebp),%eax
0835f412 +0x23c:  mov    %edx,0x4(%esp)
0835f416 +0x240:  mov    %eax,(%esp)
0835f419 +0x243:  call   0839329e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d3e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d3e
0835f41e +0x248:  sub    $0x4,%esp
0835f421 +0x24b:  jmp    0835f9ac <+0x7d6>
0835f426 +0x250:  lea    -0xc4(%ebp),%eax
0835f42c +0x256:  mov    %eax,(%esp)
0835f42f +0x259:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0835f434 +0x25e:  movl   $0x0,-0x24(%ebp)
0835f43b +0x265:  lea    -0xac(%ebp),%eax
0835f441 +0x26b:  mov    %eax,(%esp)
0835f444 +0x26e:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f449 +0x273:  lea    0x4(%eax),%edx
0835f44c +0x276:  lea    -0xc8(%ebp),%eax
0835f452 +0x27c:  mov    %edx,0x4(%esp)
0835f456 +0x280:  mov    %eax,(%esp)
0835f459 +0x283:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0835f45e +0x288:  sub    $0x4,%esp
0835f461 +0x28b:  jmp    0835f551 <+0x37b>
0835f466 +0x290:  lea    -0xc8(%ebp),%eax
0835f46c +0x296:  mov    %eax,(%esp)
0835f46f +0x299:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f474 +0x29e:  mov    (%eax),%esi
0835f476 +0x2a0:  lea    -0xac(%ebp),%eax
0835f47c +0x2a6:  mov    %eax,(%esp)
0835f47f +0x2a9:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f484 +0x2ae:  movzbl (%eax),%eax
0835f487 +0x2b1:  movzbl %al,%ebx
0835f48a +0x2b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0835f48f +0x2b9:  mov    %esi,0x8(%esp)
0835f493 +0x2bd:  mov    %ebx,0x4(%esp)
0835f497 +0x2c1:  mov    %eax,(%esp)
0835f49a +0x2c4:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0835f49f +0x2c9:  mov    %eax,-0x18(%ebp)
0835f4a2 +0x2cc:  cmpl   $0x0,-0x18(%ebp)
0835f4a6 +0x2d0:  je     0835f543 <+0x36d>
0835f4ac +0x2d6:  lea    -0xc8(%ebp),%eax
0835f4b2 +0x2dc:  mov    %eax,(%esp)
0835f4b5 +0x2df:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f4ba +0x2e4:  mov    0x4(%eax),%eax
0835f4bd +0x2e7:  mov    %eax,0x8(%esp)
0835f4c1 +0x2eb:  movl   $0x0,0x4(%esp)
0835f4c9 +0x2f3:  mov    -0x18(%ebp),%eax
0835f4cc +0x2f6:  mov    %eax,(%esp)
0835f4cf +0x2f9:  call   083502c8 <_ZNK6CSkill21get_need_sp_for_levelEii>  ; CSkill::get_need_sp_for_level(int, int) const
0835f4d4 +0x2fe:  mov    %eax,-0xcc(%ebp)
0835f4da +0x304:  mov    -0xcc(%ebp),%eax
0835f4e0 +0x30a:  add    %eax,-0x24(%ebp)
0835f4e3 +0x30d:  lea    -0xc8(%ebp),%eax
0835f4e9 +0x313:  mov    %eax,(%esp)
0835f4ec +0x316:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f4f1 +0x31b:  mov    %eax,%edx
0835f4f3 +0x31d:  lea    -0x78(%ebp),%eax
0835f4f6 +0x320:  lea    -0xcc(%ebp),%ecx
0835f4fc +0x326:  mov    %ecx,0x8(%esp)
0835f500 +0x32a:  mov    %edx,0x4(%esp)
0835f504 +0x32e:  mov    %eax,(%esp)
0835f507 +0x331:  call   08393329 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dc9>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dc9
0835f50c +0x336:  sub    $0x4,%esp
0835f50f +0x339:  lea    -0x78(%ebp),%eax
0835f512 +0x33c:  mov    %eax,0x4(%esp)
0835f516 +0x340:  lea    -0x80(%ebp),%eax
0835f519 +0x343:  mov    %eax,(%esp)
0835f51c +0x346:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0835f521 +0x34b:  lea    -0x88(%ebp),%eax
0835f527 +0x351:  lea    -0x80(%ebp),%edx
0835f52a +0x354:  mov    %edx,0x8(%esp)
0835f52e +0x358:  lea    -0xc4(%ebp),%edx
0835f534 +0x35e:  mov    %edx,0x4(%esp)
0835f538 +0x362:  mov    %eax,(%esp)
0835f53b +0x365:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0835f540 +0x36a:  sub    $0x4,%esp
0835f543 +0x36d:  lea    -0xc8(%ebp),%eax
0835f549 +0x373:  mov    %eax,(%esp)
0835f54c +0x376:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0835f551 +0x37b:  lea    -0xac(%ebp),%eax
0835f557 +0x381:  mov    %eax,(%esp)
0835f55a +0x384:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f55f +0x389:  lea    0x4(%eax),%edx
0835f562 +0x38c:  lea    -0x8c(%ebp),%eax
0835f568 +0x392:  mov    %edx,0x4(%esp)
0835f56c +0x396:  mov    %eax,(%esp)
0835f56f +0x399:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0835f574 +0x39e:  sub    $0x4,%esp
0835f577 +0x3a1:  lea    -0x8c(%ebp),%eax
0835f57d +0x3a7:  mov    %eax,0x4(%esp)
0835f581 +0x3ab:  lea    -0xc8(%ebp),%eax
0835f587 +0x3b1:  mov    %eax,(%esp)
0835f58a +0x3b4:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0835f58f +0x3b9:  test   %al,%al
0835f591 +0x3bb:  jne    0835f466 <+0x290>
0835f597 +0x3c1:  movl   $0x0,-0x20(%ebp)
0835f59e +0x3c8:  lea    -0xac(%ebp),%eax
0835f5a4 +0x3ce:  mov    %eax,(%esp)
0835f5a7 +0x3d1:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f5ac +0x3d6:  lea    0x1c(%eax),%edx
0835f5af +0x3d9:  lea    -0xd0(%ebp),%eax
0835f5b5 +0x3df:  mov    %edx,0x4(%esp)
0835f5b9 +0x3e3:  mov    %eax,(%esp)
0835f5bc +0x3e6:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0835f5c1 +0x3eb:  sub    $0x4,%esp
0835f5c4 +0x3ee:  jmp    0835f863 <+0x68d>
0835f5c9 +0x3f3:  lea    -0xd0(%ebp),%eax
0835f5cf +0x3f9:  mov    %eax,(%esp)
0835f5d2 +0x3fc:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f5d7 +0x401:  mov    (%eax),%esi
0835f5d9 +0x403:  lea    -0xac(%ebp),%eax
0835f5df +0x409:  mov    %eax,(%esp)
0835f5e2 +0x40c:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f5e7 +0x411:  movzbl (%eax),%eax
0835f5ea +0x414:  movzbl %al,%ebx
0835f5ed +0x417:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0835f5f2 +0x41c:  mov    %esi,0x8(%esp)
0835f5f6 +0x420:  mov    %ebx,0x4(%esp)
0835f5fa +0x424:  mov    %eax,(%esp)
0835f5fd +0x427:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0835f602 +0x42c:  mov    %eax,-0x14(%ebp)
0835f605 +0x42f:  cmpl   $0x0,-0x14(%ebp)
0835f609 +0x433:  je     0835f855 <+0x67f>
0835f60f +0x439:  lea    -0xd0(%ebp),%eax
0835f615 +0x43f:  mov    %eax,(%esp)
0835f618 +0x442:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f61d +0x447:  mov    0x4(%eax),%eax
0835f620 +0x44a:  mov    %eax,0x8(%esp)
0835f624 +0x44e:  movl   $0x0,0x4(%esp)
0835f62c +0x456:  mov    -0x14(%ebp),%eax
0835f62f +0x459:  mov    %eax,(%esp)
0835f632 +0x45c:  call   083502c8 <_ZNK6CSkill21get_need_sp_for_levelEii>  ; CSkill::get_need_sp_for_level(int, int) const
0835f637 +0x461:  mov    %eax,-0x10(%ebp)
0835f63a +0x464:  mov    -0x10(%ebp),%eax
0835f63d +0x467:  sub    %eax,-0x24(%ebp)
0835f640 +0x46a:  lea    -0xd0(%ebp),%eax
0835f646 +0x470:  mov    %eax,(%esp)
0835f649 +0x473:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f64e +0x478:  mov    %eax,%edx
0835f650 +0x47a:  lea    -0xd4(%ebp),%eax
0835f656 +0x480:  mov    %edx,0x8(%esp)
0835f65a +0x484:  lea    -0xc4(%ebp),%edx
0835f660 +0x48a:  mov    %edx,0x4(%esp)
0835f664 +0x48e:  mov    %eax,(%esp)
0835f667 +0x491:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0835f66c +0x496:  sub    $0x4,%esp
0835f66f +0x499:  lea    -0x6c(%ebp),%eax
0835f672 +0x49c:  lea    -0xc4(%ebp),%edx
0835f678 +0x4a2:  mov    %edx,0x4(%esp)
0835f67c +0x4a6:  mov    %eax,(%esp)
0835f67f +0x4a9:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0835f684 +0x4ae:  sub    $0x4,%esp
0835f687 +0x4b1:  lea    -0x6c(%ebp),%eax
0835f68a +0x4b4:  mov    %eax,0x4(%esp)
0835f68e +0x4b8:  lea    -0xd4(%ebp),%eax
0835f694 +0x4be:  mov    %eax,(%esp)
0835f697 +0x4c1:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0835f69c +0x4c6:  test   %al,%al
0835f69e +0x4c8:  je     0835f709 <+0x533>
0835f6a0 +0x4ca:  lea    -0xd4(%ebp),%eax
0835f6a6 +0x4d0:  mov    %eax,(%esp)
0835f6a9 +0x4d3:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f6ae +0x4d8:  mov    0x4(%eax),%edx
0835f6b1 +0x4db:  sub    -0x10(%ebp),%edx
0835f6b4 +0x4de:  mov    %edx,0x4(%eax)
0835f6b7 +0x4e1:  lea    -0xd4(%ebp),%eax
0835f6bd +0x4e7:  mov    %eax,(%esp)
0835f6c0 +0x4ea:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f6c5 +0x4ef:  mov    0x4(%eax),%eax
0835f6c8 +0x4f2:  shr    $0x1f,%eax
0835f6cb +0x4f5:  test   %al,%al
0835f6cd +0x4f7:  je     0835f709 <+0x533>
0835f6cf +0x4f9:  movl   $0x0,0xc(%esp)
0835f6d7 +0x501:  movl   $0x2379,0x8(%esp)
0835f6df +0x509:  movl   $&_ZZN12CDataManager21initFairPVPSkillPointEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f6e7 +0x511:  lea    -0x68(%ebp),%eax
0835f6ea +0x514:  mov    %eax,(%esp)
0835f6ed +0x517:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0835f6f2 +0x51c:  movl   $"skill point (-) error",0x4(%esp)
0835f6fa +0x524:  lea    -0x68(%ebp),%eax
0835f6fd +0x527:  mov    %eax,(%esp)
0835f700 +0x52a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f705 +0x52f:  movb   $0x0,-0x25(%ebp)
0835f709 +0x533:  lea    -0xd0(%ebp),%eax
0835f70f +0x539:  mov    %eax,(%esp)
0835f712 +0x53c:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f717 +0x541:  lea    0x4(%eax),%ebx
0835f71a +0x544:  lea    -0xd0(%ebp),%eax
0835f720 +0x54a:  mov    %eax,(%esp)
0835f723 +0x54d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f728 +0x552:  mov    %ebx,0x8(%esp)
0835f72c +0x556:  mov    %eax,0x4(%esp)
0835f730 +0x55a:  lea    -0x58(%ebp),%eax
0835f733 +0x55d:  mov    %eax,(%esp)
0835f736 +0x560:  call   08393368 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22e08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22e08
0835f73b +0x565:  lea    -0xac(%ebp),%eax
0835f741 +0x56b:  mov    %eax,(%esp)
0835f744 +0x56e:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f749 +0x573:  lea    0x34(%eax),%edx
0835f74c +0x576:  lea    -0x58(%ebp),%eax
0835f74f +0x579:  mov    %eax,0x4(%esp)
0835f753 +0x57d:  mov    %edx,(%esp)
0835f756 +0x580:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0835f75b +0x585:  movl   $0x0,-0xc(%ebp)
0835f762 +0x58c:  lea    -0xd8(%ebp),%eax
0835f768 +0x592:  lea    -0xc4(%ebp),%edx
0835f76e +0x598:  mov    %edx,0x4(%esp)
0835f772 +0x59c:  mov    %eax,(%esp)
0835f775 +0x59f:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0835f77a +0x5a4:  sub    $0x4,%esp
0835f77d +0x5a7:  jmp    0835f7a1 <+0x5cb>
0835f77f +0x5a9:  lea    -0xd8(%ebp),%eax
0835f785 +0x5af:  mov    %eax,(%esp)
0835f788 +0x5b2:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f78d +0x5b7:  mov    0x4(%eax),%eax
0835f790 +0x5ba:  add    %eax,-0xc(%ebp)
0835f793 +0x5bd:  lea    -0xd8(%ebp),%eax
0835f799 +0x5c3:  mov    %eax,(%esp)
0835f79c +0x5c6:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0835f7a1 +0x5cb:  lea    -0x50(%ebp),%eax
0835f7a4 +0x5ce:  lea    -0xc4(%ebp),%edx
0835f7aa +0x5d4:  mov    %edx,0x4(%esp)
0835f7ae +0x5d8:  mov    %eax,(%esp)
0835f7b1 +0x5db:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0835f7b6 +0x5e0:  sub    $0x4,%esp
0835f7b9 +0x5e3:  lea    -0x50(%ebp),%eax
0835f7bc +0x5e6:  mov    %eax,0x4(%esp)
0835f7c0 +0x5ea:  lea    -0xd8(%ebp),%eax
0835f7c6 +0x5f0:  mov    %eax,(%esp)
0835f7c9 +0x5f3:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0835f7ce +0x5f8:  test   %al,%al
0835f7d0 +0x5fa:  jne    0835f77f <+0x5a9>
0835f7d2 +0x5fc:  mov    -0x20(%ebp),%eax
0835f7d5 +0x5ff:  mov    -0xc(%ebp),%edx
0835f7d8 +0x602:  lea    (%edx,%eax,1),%eax
0835f7db +0x605:  cmp    -0x24(%ebp),%eax
0835f7de +0x608:  je     0835f855 <+0x67f>
0835f7e0 +0x60a:  mov    -0xc(%ebp),%eax
0835f7e3 +0x60d:  mov    -0x24(%ebp),%edx
0835f7e6 +0x610:  mov    %edx,%ecx
0835f7e8 +0x612:  sub    %eax,%ecx
0835f7ea +0x614:  mov    %ecx,%eax
0835f7ec +0x616:  add    %eax,-0x20(%ebp)
0835f7ef +0x619:  lea    -0xd0(%ebp),%eax
0835f7f5 +0x61f:  mov    %eax,(%esp)
0835f7f8 +0x622:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f7fd +0x627:  mov    (%eax),%esi
0835f7ff +0x629:  lea    -0xac(%ebp),%eax
0835f805 +0x62f:  mov    %eax,(%esp)
0835f808 +0x632:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f80d +0x637:  movzbl (%eax),%eax
0835f810 +0x63a:  movzbl %al,%ebx
0835f813 +0x63d:  movl   $0x0,0xc(%esp)
0835f81b +0x645:  movl   $0x2390,0x8(%esp)
0835f823 +0x64d:  movl   $&_ZZN12CDataManager21initFairPVPSkillPointEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f82b +0x655:  lea    -0x4c(%ebp),%eax
0835f82e +0x658:  mov    %eax,(%esp)
0835f831 +0x65b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0835f836 +0x660:  mov    %esi,0xc(%esp)
0835f83a +0x664:  mov    %ebx,0x8(%esp)
0835f83e +0x668:  movl   $"skill point diff job(%d), skill(%d)",0x4(%esp)
0835f846 +0x670:  lea    -0x4c(%ebp),%eax
0835f849 +0x673:  mov    %eax,(%esp)
0835f84c +0x676:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f851 +0x67b:  movb   $0x0,-0x25(%ebp)
0835f855 +0x67f:  lea    -0xd0(%ebp),%eax
0835f85b +0x685:  mov    %eax,(%esp)
0835f85e +0x688:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0835f863 +0x68d:  lea    -0xac(%ebp),%eax
0835f869 +0x693:  mov    %eax,(%esp)
0835f86c +0x696:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f871 +0x69b:  lea    0x1c(%eax),%edx
0835f874 +0x69e:  lea    -0x70(%ebp),%eax
0835f877 +0x6a1:  mov    %edx,0x4(%esp)
0835f87b +0x6a5:  mov    %eax,(%esp)
0835f87e +0x6a8:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0835f883 +0x6ad:  sub    $0x4,%esp
0835f886 +0x6b0:  lea    -0x70(%ebp),%eax
0835f889 +0x6b3:  mov    %eax,0x4(%esp)
0835f88d +0x6b7:  lea    -0xd0(%ebp),%eax
0835f893 +0x6bd:  mov    %eax,(%esp)
0835f896 +0x6c0:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0835f89b +0x6c5:  test   %al,%al
0835f89d +0x6c7:  jne    0835f5c9 <+0x3f3>
0835f8a3 +0x6cd:  movl   $0x0,-0x1c(%ebp)
0835f8aa +0x6d4:  lea    -0xdc(%ebp),%eax
0835f8b0 +0x6da:  lea    -0xc4(%ebp),%edx
0835f8b6 +0x6e0:  mov    %edx,0x4(%esp)
0835f8ba +0x6e4:  mov    %eax,(%esp)
0835f8bd +0x6e7:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0835f8c2 +0x6ec:  sub    $0x4,%esp
0835f8c5 +0x6ef:  jmp    0835f8e9 <+0x713>
0835f8c7 +0x6f1:  lea    -0xdc(%ebp),%eax
0835f8cd +0x6f7:  mov    %eax,(%esp)
0835f8d0 +0x6fa:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0835f8d5 +0x6ff:  mov    0x4(%eax),%eax
0835f8d8 +0x702:  add    %eax,-0x1c(%ebp)
0835f8db +0x705:  lea    -0xdc(%ebp),%eax
0835f8e1 +0x70b:  mov    %eax,(%esp)
0835f8e4 +0x70e:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0835f8e9 +0x713:  lea    -0x3c(%ebp),%eax
0835f8ec +0x716:  lea    -0xc4(%ebp),%edx
0835f8f2 +0x71c:  mov    %edx,0x4(%esp)
0835f8f6 +0x720:  mov    %eax,(%esp)
0835f8f9 +0x723:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0835f8fe +0x728:  sub    $0x4,%esp
0835f901 +0x72b:  lea    -0x3c(%ebp),%eax
0835f904 +0x72e:  mov    %eax,0x4(%esp)
0835f908 +0x732:  lea    -0xdc(%ebp),%eax
0835f90e +0x738:  mov    %eax,(%esp)
0835f911 +0x73b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0835f916 +0x740:  test   %al,%al
0835f918 +0x742:  jne    0835f8c7 <+0x6f1>
0835f91a +0x744:  mov    -0x1c(%ebp),%eax
0835f91d +0x747:  cmp    -0x24(%ebp),%eax
0835f920 +0x74a:  je     0835f95c <+0x786>
0835f922 +0x74c:  movl   $0x0,0xc(%esp)
0835f92a +0x754:  movl   $0x239f,0x8(%esp)
0835f932 +0x75c:  movl   $&_ZZN12CDataManager21initFairPVPSkillPointEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f93a +0x764:  lea    -0x38(%ebp),%eax
0835f93d +0x767:  mov    %eax,(%esp)
0835f940 +0x76a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0835f945 +0x76f:  movl   $"skill point diff",0x4(%esp)
0835f94d +0x777:  lea    -0x38(%ebp),%eax
0835f950 +0x77a:  mov    %eax,(%esp)
0835f953 +0x77d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f958 +0x782:  movb   $0x0,-0x25(%ebp)
0835f95c +0x786:  lea    -0xac(%ebp),%eax
0835f962 +0x78c:  mov    %eax,(%esp)
0835f965 +0x78f:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
0835f96a +0x794:  mov    -0x24(%ebp),%edx
0835f96d +0x797:  mov    %edx,0x40(%eax)
0835f970 +0x79a:  lea    -0xc4(%ebp),%eax
0835f976 +0x7a0:  mov    %eax,(%esp)
0835f979 +0x7a3:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0835f97e +0x7a8:  lea    -0xac(%ebp),%eax
0835f984 +0x7ae:  mov    %eax,(%esp)
0835f987 +0x7b1:  call   083932fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d9e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d9e
0835f98c +0x7b6:  jmp    0835f9ac <+0x7d6>
0835f98e +0x7b8:  mov    %edx,%ebx
0835f990 +0x7ba:  mov    %eax,%esi
0835f992 +0x7bc:  lea    -0xc4(%ebp),%eax
0835f998 +0x7c2:  mov    %eax,(%esp)
0835f99b +0x7c5:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0835f9a0 +0x7ca:  mov    %esi,%eax
0835f9a2 +0x7cc:  mov    %ebx,%edx
0835f9a4 +0x7ce:  mov    %eax,(%esp)
0835f9a7 +0x7d1:  call   08ae3750 <_Unwind_Resume>
0835f9ac +0x7d6:  mov    0x8(%ebp),%eax
0835f9af +0x7d9:  lea    0xa830(%eax),%edx
0835f9b5 +0x7df:  lea    -0x90(%ebp),%eax
0835f9bb +0x7e5:  mov    %edx,0x4(%esp)
0835f9bf +0x7e9:  mov    %eax,(%esp)
0835f9c2 +0x7ec:  call   083932c4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d64
0835f9c7 +0x7f1:  sub    $0x4,%esp
0835f9ca +0x7f4:  lea    -0x90(%ebp),%eax
0835f9d0 +0x7fa:  mov    %eax,0x4(%esp)
0835f9d4 +0x7fe:  lea    -0xac(%ebp),%eax
0835f9da +0x804:  mov    %eax,(%esp)
0835f9dd +0x807:  call   083932ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d8a
0835f9e2 +0x80c:  test   %al,%al
0835f9e4 +0x80e:  jne    0835f426 <+0x250>
0835f9ea +0x814:  movzbl -0x25(%ebp),%eax
0835f9ee +0x818:  lea    -0x8(%ebp),%esp
0835f9f1 +0x81b:  add    $0x0,%esp
0835f9f4 +0x81e:  pop    %ebx
0835f9f5 +0x81f:  pop    %esi
0835f9f6 +0x820:  pop    %ebp
0835f9f7 +0x821:  ret
```

## 反编译 C

```c
// CDataManager::initFairPVPSkillPoint @ 0x835f1d6

/* CDataManager::initFairPVPSkillPoint() */

undefined1 __thiscall CDataManager::initFairPVPSkillPoint(CDataManager *this)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_e0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_dc [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_d8 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_d4 [4];
  int local_d0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_cc [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_c8 [24];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_b0 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_ac [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_a8 [4];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_a4 [4];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_a0 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_9c [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_98 [4];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_94 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_90 [4];
  pair local_8c [8];
  pair<int_const,int> local_84 [8];
  int local_7c [2];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [4];
  cMyTrace local_6c [16];
  pair<int,int> local_5c [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  cMyTrace local_50 [16];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_40 [4];
  cMyTrace local_3c [19];
  undefined1 local_29;
  int local_28;
  int local_24;
  int local_20;
  CSkill *local_1c;
  CSkill *local_18;
  int local_14;
  int local_10;
  
  local_29 = 1;
  cVar3 = std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::empty((map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
                   *)(this + 0xa800));
  if (cVar3 != '\x01') {
    std::
    map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
    ::begin(local_a4);
    while( true ) {
      std::
      map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
      ::end(local_a0);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                            *)local_a4,(_Rb_tree_iterator *)local_a0);
      if (cVar3 == '\0') break;
      std::
      _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                    *)local_a4);
      std::
      map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
      ::begin(local_a8);
      while( true ) {
        std::
        _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                      *)local_a4);
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::end(local_9c);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> *)local_a8,
                           (_Rb_tree_iterator *)local_9c);
        if (cVar3 == '\0') break;
        iVar7 = *(int *)(this + 0xa848);
        piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                                  ((_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> *)
                                   local_a8);
        if (iVar7 < *piVar5) {
          puVar6 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                             ((_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> *)local_a8)
          ;
          *(undefined4 *)(this + 0xa848) = *puVar6;
        }
        std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> *)local_a8);
      }
      std::
      _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
      ::operator++((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                    *)local_a4);
    }
  }
  cVar3 = std::
          map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
          ::empty((map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
                   *)(this + 0xa818));
  if (cVar3 != '\x01') {
    std::
    map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
    ::begin(local_ac);
    while( true ) {
      std::
      map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
      ::end(local_98);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                            *)local_ac,(_Rb_tree_iterator *)local_98);
      if (cVar3 == '\0') break;
      iVar7 = *(int *)(this + 0xa84c);
      piVar5 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                                    *)local_ac);
      if (iVar7 < *piVar5) {
        puVar6 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                               *)local_ac);
        *(undefined4 *)(this + 0xa84c) = *puVar6;
      }
      std::
      _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
      ::operator++((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                    *)local_ac);
    }
  }
  cVar3 = std::
          map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
          ::empty((map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
                   *)(this + 0xa830));
  if (cVar3 != '\x01') {
    std::
    map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
    ::begin(local_b0);
    while( true ) {
      std::
      map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
      ::end(local_94);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_b0,(_Rb_tree_iterator *)local_94);
      if (cVar3 == '\0') break;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_c8);
      local_28 = 0;
      std::_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
      operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                  *)local_b0);
                    /* try { // try from 0835f459 to 0835f957 has its CatchHandler @ 0835f98e */
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_cc);
      while( true ) {
        std::_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
        ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_b0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_90);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_cc,
                           (_Rb_tree_iterator *)local_90);
        if (cVar3 == '\0') break;
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_cc);
        pbVar4 = (byte *)std::
                         _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                         ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                       *)local_b0);
        bVar1 = *pbVar4;
        iVar7 = G_CDataManager();
        local_1c = (CSkill *)find_skill(iVar7,(uint)bVar1);
        if (local_1c != (CSkill *)0x0) {
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_cc);
          local_d0 = CSkill::get_need_sp_for_level(local_1c,0,*(int *)(iVar7 + 4));
          local_28 = local_28 + local_d0;
          piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_cc);
          std::make_pair<int_const&,int&>(local_7c,piVar5);
          std::pair<int_const,int>::pair<int,int>(local_84,(pair *)local_7c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_8c);
        }
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_cc);
      }
      local_24 = 0;
      std::_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
      operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                  *)local_b0);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_d4);
      while( true ) {
        std::_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
        ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_b0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_74);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4,
                           (_Rb_tree_iterator *)local_74);
        if (cVar3 == '\0') break;
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
        pbVar4 = (byte *)std::
                         _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                         ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                       *)local_b0);
        bVar1 = *pbVar4;
        iVar7 = G_CDataManager();
        local_18 = (CSkill *)find_skill(iVar7,(uint)bVar1);
        if (local_18 != (CSkill *)0x0) {
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
          local_14 = CSkill::get_need_sp_for_level(local_18,0,*(int *)(iVar7 + 4));
          local_28 = local_28 - local_14;
          std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_d8);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_70);
          cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            (local_d8,(_Rb_tree_iterator *)local_70);
          if (cVar3 != '\0') {
            iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_d8);
            *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) - local_14;
            iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_d8);
            if (*(int *)(iVar7 + 4) < 0) {
              cMyTrace::cMyTrace(local_6c,"bool CDataManager::initFairPVPSkillPoint()",0x2379,0);
              cMyTrace::operator()(local_6c,"skill point (-) error");
              local_29 = 0;
            }
          }
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
          piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
          std::pair<int,int>::pair<int_const&,int&>(local_5c,piVar5,(int *)(iVar7 + 4));
          iVar7 = std::
                  _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                  ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                *)local_b0);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(iVar7 + 0x34)
                     ,local_5c);
          local_10 = 0;
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_dc)
          ;
          while( true ) {
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_54)
            ;
            cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc,
                               (_Rb_tree_iterator *)local_54);
            if (cVar3 == '\0') break;
            iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
            local_10 = local_10 + *(int *)(iVar7 + 4);
            std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
          }
          if (local_10 + local_24 != local_28) {
            local_24 = local_24 + (local_28 - local_10);
            puVar6 = (undefined4 *)
                     std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                               ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
            uVar2 = *puVar6;
            pbVar4 = (byte *)std::
                             _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                             ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                           *)local_b0);
            bVar1 = *pbVar4;
            cMyTrace::cMyTrace(local_50,"bool CDataManager::initFairPVPSkillPoint()",0x2390,0);
            cMyTrace::operator()(local_50,"skill point diff job(%d), skill(%d)",(uint)bVar1,uVar2);
            local_29 = 0;
          }
        }
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_d4);
      }
      local_20 = 0;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_e0);
      while( true ) {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_40);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e0,
                           (_Rb_tree_iterator *)local_40);
        if (cVar3 == '\0') break;
        iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e0);
        local_20 = local_20 + *(int *)(iVar7 + 4);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e0);
      }
      if (local_20 != local_28) {
        cMyTrace::cMyTrace(local_3c,"bool CDataManager::initFairPVPSkillPoint()",0x239f,0);
        cMyTrace::operator()(local_3c,"skill point diff");
        local_29 = 0;
      }
      iVar7 = std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_b0);
      *(int *)(iVar7 + 0x40) = local_28;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_c8);
      std::_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
      operator++((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                  *)local_b0);
    }
  }
  return local_29;
}
```
