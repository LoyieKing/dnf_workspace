# setSlot

`_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE`

`advancealtar::CharacAdvanceAltarManager::setSlot(bool, CMDPacketStruct::_SetSlotData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131b58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131b58  _ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE
#           advancealtar::CharacAdvanceAltarManager::setSlot(bool, CMDPacketStruct::_SetSlotData const&)
# range [0x08131b58, 0x08131f09]
08131b58 +0x000:  push   %ebp
08131b59 +0x001:  mov    %esp,%ebp
08131b5b +0x003:  push   %ebx
08131b5c +0x004:  sub    $0x64,%esp
08131b5f +0x007:  mov    0xc(%ebp),%eax
08131b62 +0x00a:  mov    %al,-0x4c(%ebp)
08131b65 +0x00d:  mov    0x8(%ebp),%eax
08131b68 +0x010:  mov    (%eax),%eax
08131b6a +0x012:  mov    %eax,-0x20(%ebp)
08131b6d +0x015:  cmpl   $0x0,-0x20(%ebp)
08131b71 +0x019:  jne    08131b7d <+0x25>
08131b73 +0x01b:  mov    $0x2,%eax
08131b78 +0x020:  jmp    08131f04 <+0x3ac>
08131b7d +0x025:  mov    0x10(%ebp),%eax
08131b80 +0x028:  mov    (%eax),%eax
08131b82 +0x02a:  cmp    $0x1,%eax
08131b85 +0x02d:  je     08131b8e <+0x36>
08131b87 +0x02f:  cmp    $0x2,%eax
08131b8a +0x032:  je     08131baa <+0x52>
08131b8c +0x034:  jmp    08131bc6 <+0x6e>
08131b8e +0x036:  movl   $0x0,-0x1c(%ebp)
08131b95 +0x03d:  mov    0x10(%ebp),%eax
08131b98 +0x040:  movzbl 0x4(%eax),%eax
08131b9c +0x044:  cmp    $0x5,%al
08131b9e +0x046:  jbe    08131bd0 <+0x78>
08131ba0 +0x048:  mov    $0x2,%eax
08131ba5 +0x04d:  jmp    08131f04 <+0x3ac>
08131baa +0x052:  movl   $0x1,-0x1c(%ebp)
08131bb1 +0x059:  mov    0x10(%ebp),%eax
08131bb4 +0x05c:  movzbl 0x4(%eax),%eax
08131bb8 +0x060:  cmp    $0x5,%al
08131bba +0x062:  jbe    08131bd3 <+0x7b>
08131bbc +0x064:  mov    $0x2,%eax
08131bc1 +0x069:  jmp    08131f04 <+0x3ac>
08131bc6 +0x06e:  mov    $0x2,%eax
08131bcb +0x073:  jmp    08131f04 <+0x3ac>
08131bd0 +0x078:  nop
08131bd1 +0x079:  jmp    08131bd4 <+0x7c>
08131bd3 +0x07b:  nop
08131bd4 +0x07c:  mov    -0x20(%ebp),%eax
08131bd7 +0x07f:  mov    (%eax),%eax
08131bd9 +0x081:  mov    %eax,%ebx
08131bdb +0x083:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08131be0 +0x088:  lea    0x631c(%eax),%edx
08131be6 +0x08e:  mov    -0x1c(%ebp),%eax
08131be9 +0x091:  mov    %eax,0x8(%esp)
08131bed +0x095:  mov    %ebx,0x4(%esp)
08131bf1 +0x099:  mov    %edx,(%esp)
08131bf4 +0x09c:  call   088a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
08131bf9 +0x0a1:  mov    %eax,-0x18(%ebp)
08131bfc +0x0a4:  cmpl   $0x0,-0x18(%ebp)
08131c00 +0x0a8:  jne    08131c0c <+0xb4>
08131c02 +0x0aa:  mov    $0x3,%eax
08131c07 +0x0af:  jmp    08131f04 <+0x3ac>
08131c0c +0x0b4:  movl   $0x0,-0x14(%ebp)
08131c13 +0x0bb:  lea    -0x48(%ebp),%eax
08131c16 +0x0be:  mov    -0x18(%ebp),%edx
08131c19 +0x0c1:  mov    %edx,0x4(%esp)
08131c1d +0x0c5:  mov    %eax,(%esp)
08131c20 +0x0c8:  call   0813609e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ca5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ca5
08131c25 +0x0cd:  sub    $0x4,%esp
08131c28 +0x0d0:  jmp    08131c73 <+0x11b>
08131c2a +0x0d2:  lea    -0x48(%ebp),%eax
08131c2d +0x0d5:  mov    %eax,(%esp)
08131c30 +0x0d8:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08131c35 +0x0dd:  mov    (%eax),%edx
08131c37 +0x0df:  mov    0x10(%ebp),%eax
08131c3a +0x0e2:  mov    0x8(%eax),%eax
08131c3d +0x0e5:  cmp    %eax,%edx
08131c3f +0x0e7:  sete   %al
08131c42 +0x0ea:  test   %al,%al
08131c44 +0x0ec:  je     08131c56 <+0xfe>
08131c46 +0x0ee:  lea    -0x48(%ebp),%eax
08131c49 +0x0f1:  mov    %eax,(%esp)
08131c4c +0x0f4:  call   08136152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d59
08131c51 +0x0f9:  mov    %eax,-0x14(%ebp)
08131c54 +0x0fc:  jmp    08131c9e <+0x146>
08131c56 +0x0fe:  lea    -0x38(%ebp),%eax
08131c59 +0x101:  movl   $0x0,0x8(%esp)
08131c61 +0x109:  lea    -0x48(%ebp),%edx
08131c64 +0x10c:  mov    %edx,0x4(%esp)
08131c68 +0x110:  mov    %eax,(%esp)
08131c6b +0x113:  call   08136114 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d1b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d1b
08131c70 +0x118:  sub    $0x4,%esp
08131c73 +0x11b:  lea    -0x3c(%ebp),%eax
08131c76 +0x11e:  mov    -0x18(%ebp),%edx
08131c79 +0x121:  mov    %edx,0x4(%esp)
08131c7d +0x125:  mov    %eax,(%esp)
08131c80 +0x128:  call   081360c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cc9
08131c85 +0x12d:  sub    $0x4,%esp
08131c88 +0x130:  lea    -0x3c(%ebp),%eax
08131c8b +0x133:  mov    %eax,0x4(%esp)
08131c8f +0x137:  lea    -0x48(%ebp),%eax
08131c92 +0x13a:  mov    %eax,(%esp)
08131c95 +0x13d:  call   081360e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cef
08131c9a +0x142:  test   %al,%al
08131c9c +0x144:  jne    08131c2a <+0xd2>
08131c9e +0x146:  cmpl   $0x0,-0x14(%ebp)
08131ca2 +0x14a:  jne    08131cae <+0x156>
08131ca4 +0x14c:  mov    $0x3,%eax
08131ca9 +0x151:  jmp    08131f04 <+0x3ac>
08131cae +0x156:  mov    -0x14(%ebp),%eax
08131cb1 +0x159:  movzbl 0x8(%eax),%eax
08131cb5 +0x15d:  xor    $0x1,%eax
08131cb8 +0x160:  test   %al,%al
08131cba +0x162:  je     08131cc6 <+0x16e>
08131cbc +0x164:  mov    $0x3,%eax
08131cc1 +0x169:  jmp    08131f04 <+0x3ac>
08131cc6 +0x16e:  movzbl -0x4c(%ebp),%eax
08131cca +0x172:  xor    $0x1,%eax
08131ccd +0x175:  test   %al,%al
08131ccf +0x177:  je     08131cef <+0x197>
08131cd1 +0x179:  mov    0x10(%ebp),%eax
08131cd4 +0x17c:  mov    %eax,0x8(%esp)
08131cd8 +0x180:  mov    -0x20(%ebp),%eax
08131cdb +0x183:  mov    %eax,0x4(%esp)
08131cdf +0x187:  mov    0x8(%ebp),%eax
08131ce2 +0x18a:  mov    %eax,(%esp)
08131ce5 +0x18d:  call   08132bfa <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE>  ; advancealtar::CharacAdvanceAltarManager::resetSlot(advancealtar::AdvanceAltarData&, CMDPacketStruct::_SetSlotData const&)
08131cea +0x192:  jmp    08131f04 <+0x3ac>
08131cef +0x197:  mov    -0x1c(%ebp),%eax
08131cf2 +0x19a:  mov    %eax,0x4(%esp)
08131cf6 +0x19e:  mov    -0x20(%ebp),%eax
08131cf9 +0x1a1:  mov    %eax,(%esp)
08131cfc +0x1a4:  call   088999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
08131d01 +0x1a9:  mov    %eax,-0x10(%ebp)
08131d04 +0x1ac:  cmpl   $0x0,-0x10(%ebp)
08131d08 +0x1b0:  jne    08131d14 <+0x1bc>
08131d0a +0x1b2:  mov    $0x3,%eax
08131d0f +0x1b7:  jmp    08131f04 <+0x3ac>
08131d14 +0x1bc:  mov    0x10(%ebp),%eax
08131d17 +0x1bf:  lea    0x8(%eax),%edx
08131d1a +0x1c2:  lea    -0x40(%ebp),%eax
08131d1d +0x1c5:  mov    %edx,0x8(%esp)
08131d21 +0x1c9:  mov    -0x10(%ebp),%edx
08131d24 +0x1cc:  mov    %edx,0x4(%esp)
08131d28 +0x1d0:  mov    %eax,(%esp)
08131d2b +0x1d3:  call   0813615c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d63>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d63
08131d30 +0x1d8:  sub    $0x4,%esp
08131d33 +0x1db:  lea    -0x34(%ebp),%eax
08131d36 +0x1de:  mov    -0x10(%ebp),%edx
08131d39 +0x1e1:  mov    %edx,0x4(%esp)
08131d3d +0x1e5:  mov    %eax,(%esp)
08131d40 +0x1e8:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
08131d45 +0x1ed:  sub    $0x4,%esp
08131d48 +0x1f0:  lea    -0x34(%ebp),%eax
08131d4b +0x1f3:  mov    %eax,0x4(%esp)
08131d4f +0x1f7:  lea    -0x40(%ebp),%eax
08131d52 +0x1fa:  mov    %eax,(%esp)
08131d55 +0x1fd:  call   081361ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1db5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1db5
08131d5a +0x202:  test   %al,%al
08131d5c +0x204:  je     08131d68 <+0x210>
08131d5e +0x206:  mov    $0x3,%eax
08131d63 +0x20b:  jmp    08131f04 <+0x3ac>
08131d68 +0x210:  mov    0x10(%ebp),%eax
08131d6b +0x213:  mov    (%eax),%eax
08131d6d +0x215:  mov    %eax,0x4(%esp)
08131d71 +0x219:  mov    -0x20(%ebp),%eax
08131d74 +0x21c:  mov    %eax,(%esp)
08131d77 +0x21f:  call   08899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>  ; advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)
08131d7c +0x224:  mov    %eax,-0xc(%ebp)
08131d7f +0x227:  cmpl   $0x0,-0xc(%ebp)
08131d83 +0x22b:  jne    08131d8f <+0x237>
08131d85 +0x22d:  mov    $0x3,%eax
08131d8a +0x232:  jmp    08131f04 <+0x3ac>
08131d8f +0x237:  lea    -0x44(%ebp),%eax
08131d92 +0x23a:  mov    -0xc(%ebp),%edx
08131d95 +0x23d:  mov    %edx,0x4(%esp)
08131d99 +0x241:  mov    %eax,(%esp)
08131d9c +0x244:  call   081361c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1dc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1dc9
08131da1 +0x249:  sub    $0x4,%esp
08131da4 +0x24c:  jmp    08131dea <+0x292>
08131da6 +0x24e:  lea    -0x44(%ebp),%eax
08131da9 +0x251:  mov    %eax,(%esp)
08131dac +0x254:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131db1 +0x259:  mov    0x7(%eax),%edx
08131db4 +0x25c:  mov    0x10(%ebp),%eax
08131db7 +0x25f:  mov    0x8(%eax),%eax
08131dba +0x262:  cmp    %eax,%edx
08131dbc +0x264:  sete   %al
08131dbf +0x267:  test   %al,%al
08131dc1 +0x269:  je     08131dcd <+0x275>
08131dc3 +0x26b:  mov    $0x4,%eax
08131dc8 +0x270:  jmp    08131f04 <+0x3ac>
08131dcd +0x275:  lea    -0x2c(%ebp),%eax
08131dd0 +0x278:  movl   $0x0,0x8(%esp)
08131dd8 +0x280:  lea    -0x44(%ebp),%edx
08131ddb +0x283:  mov    %edx,0x4(%esp)
08131ddf +0x287:  mov    %eax,(%esp)
08131de2 +0x28a:  call   08136222 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e29
08131de7 +0x28f:  sub    $0x4,%esp
08131dea +0x292:  lea    -0x30(%ebp),%eax
08131ded +0x295:  mov    -0xc(%ebp),%edx
08131df0 +0x298:  mov    %edx,0x4(%esp)
08131df4 +0x29c:  mov    %eax,(%esp)
08131df7 +0x29f:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08131dfc +0x2a4:  sub    $0x4,%esp
08131dff +0x2a7:  lea    -0x30(%ebp),%eax
08131e02 +0x2aa:  mov    %eax,0x4(%esp)
08131e06 +0x2ae:  lea    -0x44(%ebp),%eax
08131e09 +0x2b1:  mov    %eax,(%esp)
08131e0c +0x2b4:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
08131e11 +0x2b9:  test   %al,%al
08131e13 +0x2bb:  jne    08131da6 <+0x24e>
08131e15 +0x2bd:  lea    -0x50(%ebp),%eax
08131e18 +0x2c0:  mov    -0xc(%ebp),%edx
08131e1b +0x2c3:  mov    %edx,0x4(%esp)
08131e1f +0x2c7:  mov    %eax,(%esp)
08131e22 +0x2ca:  call   081361c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1dc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1dc9
08131e27 +0x2cf:  sub    $0x4,%esp
08131e2a +0x2d2:  mov    -0x50(%ebp),%eax
08131e2d +0x2d5:  mov    %eax,-0x44(%ebp)
08131e30 +0x2d8:  jmp    08131ed0 <+0x378>
08131e35 +0x2dd:  lea    -0x44(%ebp),%eax
08131e38 +0x2e0:  mov    %eax,(%esp)
08131e3b +0x2e3:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131e40 +0x2e8:  movzbl 0x6(%eax),%edx
08131e44 +0x2ec:  mov    0x10(%ebp),%eax
08131e47 +0x2ef:  movzbl 0x4(%eax),%eax
08131e4b +0x2f3:  cmp    %al,%dl
08131e4d +0x2f5:  jne    08131e85 <+0x32d>
08131e4f +0x2f7:  lea    -0x44(%ebp),%eax
08131e52 +0x2fa:  mov    %eax,(%esp)
08131e55 +0x2fd:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131e5a +0x302:  mov    0x2(%eax),%eax
08131e5d +0x305:  mov    %eax,%edx
08131e5f +0x307:  mov    0x10(%ebp),%eax
08131e62 +0x30a:  mov    (%eax),%eax
08131e64 +0x30c:  cmp    %eax,%edx
08131e66 +0x30e:  jne    08131e85 <+0x32d>
08131e68 +0x310:  lea    -0x44(%ebp),%eax
08131e6b +0x313:  mov    %eax,(%esp)
08131e6e +0x316:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131e73 +0x31b:  movzbl 0x1(%eax),%eax
08131e77 +0x31f:  xor    $0x1,%eax
08131e7a +0x322:  test   %al,%al
08131e7c +0x324:  je     08131e85 <+0x32d>
08131e7e +0x326:  mov    $0x1,%eax
08131e83 +0x32b:  jmp    08131e8a <+0x332>
08131e85 +0x32d:  mov    $0x0,%eax
08131e8a +0x332:  test   %al,%al
08131e8c +0x334:  je     08131eb3 <+0x35b>
08131e8e +0x336:  lea    -0x44(%ebp),%eax
08131e91 +0x339:  mov    %eax,(%esp)
08131e94 +0x33c:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131e99 +0x341:  mov    0x10(%ebp),%edx
08131e9c +0x344:  mov    0x8(%edx),%edx
08131e9f +0x347:  mov    %edx,0x7(%eax)
08131ea2 +0x34a:  mov    -0x20(%ebp),%eax
08131ea5 +0x34d:  movb   $0x1,0xcc(%eax)
08131eac +0x354:  mov    $0x0,%eax
08131eb1 +0x359:  jmp    08131f04 <+0x3ac>
08131eb3 +0x35b:  lea    -0x24(%ebp),%eax
08131eb6 +0x35e:  movl   $0x0,0x8(%esp)
08131ebe +0x366:  lea    -0x44(%ebp),%edx
08131ec1 +0x369:  mov    %edx,0x4(%esp)
08131ec5 +0x36d:  mov    %eax,(%esp)
08131ec8 +0x370:  call   08136222 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e29
08131ecd +0x375:  sub    $0x4,%esp
08131ed0 +0x378:  lea    -0x28(%ebp),%eax
08131ed3 +0x37b:  mov    -0xc(%ebp),%edx
08131ed6 +0x37e:  mov    %edx,0x4(%esp)
08131eda +0x382:  mov    %eax,(%esp)
08131edd +0x385:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08131ee2 +0x38a:  sub    $0x4,%esp
08131ee5 +0x38d:  lea    -0x28(%ebp),%eax
08131ee8 +0x390:  mov    %eax,0x4(%esp)
08131eec +0x394:  lea    -0x44(%ebp),%eax
08131eef +0x397:  mov    %eax,(%esp)
08131ef2 +0x39a:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
08131ef7 +0x39f:  test   %al,%al
08131ef9 +0x3a1:  jne    08131e35 <+0x2dd>
08131eff +0x3a7:  mov    $0x2,%eax
08131f04 +0x3ac:  mov    -0x4(%ebp),%ebx
08131f07 +0x3af:  leave
08131f08 +0x3b0:  ret
08131f09 +0x3b1:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setSlot @ 0x8131b58

/* advancealtar::CharacAdvanceAltarManager::setSlot(bool, CMDPacketStruct::_SetSlotData const&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::setSlot
          (CharacAdvanceAltarManager *this,bool param_1,_SetSlotData *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  _SetSlotData *p_Var6;
  undefined4 local_54;
  char local_50;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_4c [4];
  undefined4 local_48;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_3c [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_38 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  AdvanceAltarData *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_50 = param_1;
  local_24 = *(AdvanceAltarData **)this;
  if (local_24 == (AdvanceAltarData *)0x0) {
    return 2;
  }
  if (*(int *)param_2 == 1) {
    local_20 = 0;
    if (5 < (byte)param_2[4]) {
      return 2;
    }
  }
  else {
    if (*(int *)param_2 != 2) {
      return 2;
    }
    local_20 = 1;
    if (5 < (byte)param_2[4]) {
      return 2;
    }
  }
  uVar4 = *(undefined4 *)local_24;
  iVar3 = G_CDataManager();
  local_1c = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                       ((AdvanceAltarShopParameter *)(iVar3 + 0x631c),uVar4,local_20);
  if (local_1c == 0) {
    uVar4 = 3;
  }
  else {
    local_18 = 0;
    std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin();
    while( true ) {
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end();
      bVar1 = __gnu_cxx::operator!=(local_4c,local_40);
      if (!bVar1) break;
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                      ::operator->(local_4c);
      if (*piVar5 == *(int *)(param_2 + 8)) {
        local_18 = __gnu_cxx::
                   __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                   ::operator*(local_4c);
        break;
      }
      __gnu_cxx::
      __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
      ::operator++(local_3c,(int)local_4c);
    }
    if (local_18 == 0) {
      uVar4 = 3;
    }
    else if (*(char *)(local_18 + 8) == '\x01') {
      if (local_50 == '\x01') {
        local_14 = AdvanceAltarData::getBuyItemMap(local_24,local_20);
        if (local_14 == 0) {
          uVar4 = 3;
        }
        else {
          p_Var6 = param_2 + 8;
          std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::find((int *)local_44);
          std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::end(local_38);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                  operator==(local_44,(_Rb_tree_const_iterator *)local_38);
          if (cVar2 == '\0') {
            local_10 = AdvanceAltarData::getSlotMap(local_24,*(undefined4 *)param_2,p_Var6);
            if (local_10 == 0) {
              uVar4 = 3;
            }
            else {
              std::
              map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              ::begin((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                       *)&local_48);
              while( true ) {
                std::
                map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                ::end(local_34);
                cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator!=((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48,(_Rb_tree_iterator *)local_34);
                if (cVar2 == '\0') break;
                iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48);
                if (*(int *)(iVar3 + 7) == *(int *)(param_2 + 8)) {
                  return 4;
                }
                std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator++(local_30,(int)&local_48);
              }
              std::
              map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              ::begin((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                       *)&local_54);
              local_48 = local_54;
              while( true ) {
                std::
                map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                ::end(local_2c);
                cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator!=((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48,(_Rb_tree_iterator *)local_2c);
                if (cVar2 == '\0') break;
                iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48);
                if (((*(_SetSlotData *)(iVar3 + 6) == param_2[4]) &&
                    (iVar3 = std::
                             _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                             operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                         *)&local_48), *(int *)(iVar3 + 2) == *(int *)param_2)) &&
                   (iVar3 = std::
                            _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                            operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                        *)&local_48), *(char *)(iVar3 + 1) != '\x01')) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          ::operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                        *)&local_48);
                  *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_2 + 8);
                  local_24[0xcc] = (AdvanceAltarData)0x1;
                  return 0;
                }
                std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator++(local_28,(int)&local_48);
              }
              uVar4 = 2;
            }
          }
          else {
            uVar4 = 3;
          }
        }
      }
      else {
        uVar4 = resetSlot(this,local_24,param_2);
      }
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}
```
