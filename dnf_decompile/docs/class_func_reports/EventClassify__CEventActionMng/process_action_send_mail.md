# process_action_send_mail

`_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb`

`EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810cf32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810cf32  _ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb
#           EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
# range [0x0810cf32, 0x0810d4ad]
0810cf32 +0x000:  push   %ebp
0810cf33 +0x001:  mov    %esp,%ebp
0810cf35 +0x003:  push   %esi
0810cf36 +0x004:  push   %ebx
0810cf37 +0x005:  sub    $0xe0,%esp
0810cf3d +0x00b:  mov    0x14(%ebp),%eax
0810cf40 +0x00e:  mov    %al,-0x8c(%ebp)
0810cf46 +0x014:  cmpl   $0x0,0xc(%ebp)
0810cf4a +0x018:  jne    0810cf56 <+0x24>
0810cf4c +0x01a:  mov    $0x3,%ebx
0810cf51 +0x01f:  jmp    0810d4a1 <+0x56f>
0810cf56 +0x024:  mov    0x10(%ebp),%eax
0810cf59 +0x027:  mov    0x28(%eax),%eax
0810cf5c +0x02a:  test   %eax,%eax
0810cf5e +0x02c:  jle    0810cf83 <+0x51>
0810cf60 +0x02e:  mov    0x10(%ebp),%eax
0810cf63 +0x031:  mov    %eax,0x8(%esp)
0810cf67 +0x035:  mov    0xc(%ebp),%eax
0810cf6a +0x038:  mov    %eax,0x4(%esp)
0810cf6e +0x03c:  mov    0x8(%ebp),%eax
0810cf71 +0x03f:  mov    %eax,(%esp)
0810cf74 +0x042:  call   0810d83c <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail>  ; EventClassify::CEventActionMng::process_gold_mail_send(CUser*, Action_SendMail&)
0810cf79 +0x047:  mov    $0x0,%ebx
0810cf7e +0x04c:  jmp    0810d4a1 <+0x56f>
0810cf83 +0x051:  lea    -0x85(%ebp),%eax
0810cf89 +0x057:  mov    %eax,(%esp)
0810cf8c +0x05a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0810cf91 +0x05f:  mov    0x10(%ebp),%eax
0810cf94 +0x062:  mov    0x20(%eax),%eax
0810cf97 +0x065:  mov    %eax,-0x18(%ebp)
0810cf9a +0x068:  mov    0x10(%ebp),%eax
0810cf9d +0x06b:  mov    0x24(%eax),%eax
0810cfa0 +0x06e:  mov    %eax,-0x14(%ebp)
0810cfa3 +0x071:  mov    0x10(%ebp),%eax
0810cfa6 +0x074:  mov    %eax,(%esp)
0810cfa9 +0x077:  call   081119d0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee2
0810cfae +0x07c:  test   %eax,%eax
0810cfb0 +0x07e:  setne  %al
0810cfb3 +0x081:  test   %al,%al
0810cfb5 +0x083:  je     0810d056 <+0x124>
0810cfbb +0x089:  mov    0xc(%ebp),%eax
0810cfbe +0x08c:  mov    %eax,(%esp)
0810cfc1 +0x08f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0810cfc6 +0x094:  mov    %eax,-0x30(%ebp)
0810cfc9 +0x097:  mov    0x10(%ebp),%edx
0810cfcc +0x09a:  lea    -0x34(%ebp),%eax
0810cfcf +0x09d:  lea    -0x30(%ebp),%ecx
0810cfd2 +0x0a0:  mov    %ecx,0x8(%esp)
0810cfd6 +0x0a4:  mov    %edx,0x4(%esp)
0810cfda +0x0a8:  mov    %eax,(%esp)
0810cfdd +0x0ab:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
0810cfe2 +0x0b0:  sub    $0x4,%esp
0810cfe5 +0x0b3:  lea    -0x34(%ebp),%eax
0810cfe8 +0x0b6:  mov    %eax,0x4(%esp)
0810cfec +0x0ba:  lea    -0x3c(%ebp),%eax
0810cfef +0x0bd:  mov    %eax,(%esp)
0810cff2 +0x0c0:  call   08111a28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf3a
0810cff7 +0x0c5:  mov    0x10(%ebp),%edx
0810cffa +0x0c8:  lea    -0x28(%ebp),%eax
0810cffd +0x0cb:  mov    %edx,0x4(%esp)
0810d001 +0x0cf:  mov    %eax,(%esp)
0810d004 +0x0d2:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
0810d009 +0x0d7:  sub    $0x4,%esp
0810d00c +0x0da:  lea    -0x28(%ebp),%eax
0810d00f +0x0dd:  mov    %eax,0x4(%esp)
0810d013 +0x0e1:  lea    -0x2c(%ebp),%eax
0810d016 +0x0e4:  mov    %eax,(%esp)
0810d019 +0x0e7:  call   08111a28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf3a
0810d01e +0x0ec:  lea    -0x2c(%ebp),%eax
0810d021 +0x0ef:  mov    %eax,0x4(%esp)
0810d025 +0x0f3:  lea    -0x3c(%ebp),%eax
0810d028 +0x0f6:  mov    %eax,(%esp)
0810d02b +0x0f9:  call   08111990 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xea2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xea2
0810d030 +0x0fe:  test   %al,%al
0810d032 +0x100:  je     0810d056 <+0x124>
0810d034 +0x102:  lea    -0x3c(%ebp),%eax
0810d037 +0x105:  mov    %eax,(%esp)
0810d03a +0x108:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810d03f +0x10d:  mov    0x4(%eax),%eax
0810d042 +0x110:  mov    %eax,-0x18(%ebp)
0810d045 +0x113:  lea    -0x3c(%ebp),%eax
0810d048 +0x116:  mov    %eax,(%esp)
0810d04b +0x119:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810d050 +0x11e:  mov    0x8(%eax),%eax
0810d053 +0x121:  mov    %eax,-0x14(%ebp)
0810d056 +0x124:  cmpl   $0x0,-0x14(%ebp)
0810d05a +0x128:  jne    0810d063 <+0x131>
0810d05c +0x12a:  movl   $0x1,-0x14(%ebp)
0810d063 +0x131:  movl   $0xffffffff,-0x38(%ebp)
0810d06a +0x138:  mov    -0x18(%ebp),%eax
0810d06d +0x13b:  mov    %eax,-0x83(%ebp)
0810d073 +0x141:  mov    -0x14(%ebp),%eax
0810d076 +0x144:  mov    %eax,0x4(%esp)
0810d07a +0x148:  lea    -0x85(%ebp),%eax
0810d080 +0x14e:  mov    %eax,(%esp)
0810d083 +0x151:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0810d088 +0x156:  mov    -0x83(%ebp),%eax
0810d08e +0x15c:  cmp    $0x1,%eax
0810d091 +0x15f:  jne    0810d0bb <+0x189>
0810d093 +0x161:  lea    -0x85(%ebp),%eax
0810d099 +0x167:  mov    %eax,0xc(%esp)
0810d09d +0x16b:  mov    0x10(%ebp),%eax
0810d0a0 +0x16e:  mov    %eax,0x8(%esp)
0810d0a4 +0x172:  mov    0xc(%ebp),%eax
0810d0a7 +0x175:  mov    %eax,0x4(%esp)
0810d0ab +0x179:  mov    0x8(%ebp),%eax
0810d0ae +0x17c:  mov    %eax,(%esp)
0810d0b1 +0x17f:  call   0810d4ae <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item>  ; EventClassify::CEventActionMng::process_coin_send(CUser*, Action_SendMail&, Inven_Item&)
0810d0b6 +0x184:  jmp    0810d3df <+0x4ad>
0810d0bb +0x189:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810d0c0 +0x18e:  mov    -0x18(%ebp),%edx
0810d0c3 +0x191:  mov    %edx,0x4(%esp)
0810d0c7 +0x195:  mov    %eax,(%esp)
0810d0ca +0x198:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0810d0cf +0x19d:  mov    %eax,-0x10(%ebp)
0810d0d2 +0x1a0:  cmpl   $0x0,-0x10(%ebp)
0810d0d6 +0x1a4:  jne    0810d0e2 <+0x1b0>
0810d0d8 +0x1a6:  mov    $0x11,%ebx
0810d0dd +0x1ab:  jmp    0810d4a1 <+0x56f>
0810d0e2 +0x1b0:  mov    -0x10(%ebp),%eax
0810d0e5 +0x1b3:  mov    (%eax),%eax
0810d0e7 +0x1b5:  add    $0x8,%eax
0810d0ea +0x1b8:  mov    (%eax),%edx
0810d0ec +0x1ba:  lea    -0x85(%ebp),%eax
0810d0f2 +0x1c0:  mov    %eax,0x4(%esp)
0810d0f6 +0x1c4:  mov    -0x10(%ebp),%eax
0810d0f9 +0x1c7:  mov    %eax,(%esp)
0810d0fc +0x1ca:  call   *%edx
0810d0fe +0x1cc:  movb   $0x0,-0x9(%ebp)
0810d102 +0x1d0:  mov    0x10(%ebp),%eax
0810d105 +0x1d3:  movzbl 0x1c(%eax),%eax
0810d109 +0x1d7:  test   %al,%al
0810d10b +0x1d9:  je     0810d3a4 <+0x472>
0810d111 +0x1df:  mov    0xc(%ebp),%eax
0810d114 +0x1e2:  mov    %eax,(%esp)
0810d117 +0x1e5:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0810d11c +0x1ea:  test   %al,%al
0810d11e +0x1ec:  je     0810d129 <+0x1f7>
0810d120 +0x1ee:  movb   $0x1,-0x9(%ebp)
0810d124 +0x1f2:  jmp    0810d3a4 <+0x472>
0810d129 +0x1f7:  mov    -0x10(%ebp),%eax
0810d12c +0x1fa:  mov    (%eax),%eax
0810d12e +0x1fc:  add    $0x10,%eax
0810d131 +0x1ff:  mov    (%eax),%edx
0810d133 +0x201:  mov    -0x10(%ebp),%eax
0810d136 +0x204:  mov    %eax,(%esp)
0810d139 +0x207:  call   *%edx
0810d13b +0x209:  test   %al,%al
0810d13d +0x20b:  je     0810d17a <+0x248>
0810d13f +0x20d:  mov    -0x10(%ebp),%eax
0810d142 +0x210:  mov    %eax,0xc(%esp)
0810d146 +0x214:  lea    -0x85(%ebp),%eax
0810d14c +0x21a:  mov    %eax,0x8(%esp)
0810d150 +0x21e:  mov    0xc(%ebp),%eax
0810d153 +0x221:  mov    %eax,0x4(%esp)
0810d157 +0x225:  mov    0x8(%ebp),%eax
0810d15a +0x228:  mov    %eax,(%esp)
0810d15d +0x22b:  call   0810d70c <_ZN13EventClassify15CEventActionMng19process_avatar_sendEP5CUserR10Inven_ItemPK5CItem>  ; EventClassify::CEventActionMng::process_avatar_send(CUser*, Inven_Item&, CItem const*)
0810d162 +0x230:  mov    %eax,-0x38(%ebp)
0810d165 +0x233:  mov    -0x38(%ebp),%eax
0810d168 +0x236:  cmp    $0xffffffff,%eax
0810d16b +0x239:  jne    0810d22b <+0x2f9>
0810d171 +0x23f:  movb   $0x1,-0x9(%ebp)
0810d175 +0x243:  jmp    0810d22b <+0x2f9>
0810d17a +0x248:  mov    0xc(%ebp),%eax
0810d17d +0x24b:  mov    %eax,(%esp)
0810d180 +0x24e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810d185 +0x253:  movl   $0x1,0x4c(%esp)
0810d18d +0x25b:  movl   $0x1,0x48(%esp)
0810d195 +0x263:  movl   $0xd,0x44(%esp)
0810d19d +0x26b:  mov    -0x85(%ebp),%edx
0810d1a3 +0x271:  mov    %edx,0x4(%esp)
0810d1a7 +0x275:  mov    -0x81(%ebp),%edx
0810d1ad +0x27b:  mov    %edx,0x8(%esp)
0810d1b1 +0x27f:  mov    -0x7d(%ebp),%edx
0810d1b4 +0x282:  mov    %edx,0xc(%esp)
0810d1b8 +0x286:  mov    -0x79(%ebp),%edx
0810d1bb +0x289:  mov    %edx,0x10(%esp)
0810d1bf +0x28d:  mov    -0x75(%ebp),%edx
0810d1c2 +0x290:  mov    %edx,0x14(%esp)
0810d1c6 +0x294:  mov    -0x71(%ebp),%edx
0810d1c9 +0x297:  mov    %edx,0x18(%esp)
0810d1cd +0x29b:  mov    -0x6d(%ebp),%edx
0810d1d0 +0x29e:  mov    %edx,0x1c(%esp)
0810d1d4 +0x2a2:  mov    -0x69(%ebp),%edx
0810d1d7 +0x2a5:  mov    %edx,0x20(%esp)
0810d1db +0x2a9:  mov    -0x65(%ebp),%edx
0810d1de +0x2ac:  mov    %edx,0x24(%esp)
0810d1e2 +0x2b0:  mov    -0x61(%ebp),%edx
0810d1e5 +0x2b3:  mov    %edx,0x28(%esp)
0810d1e9 +0x2b7:  mov    -0x5d(%ebp),%edx
0810d1ec +0x2ba:  mov    %edx,0x2c(%esp)
0810d1f0 +0x2be:  mov    -0x59(%ebp),%edx
0810d1f3 +0x2c1:  mov    %edx,0x30(%esp)
0810d1f7 +0x2c5:  mov    -0x55(%ebp),%edx
0810d1fa +0x2c8:  mov    %edx,0x34(%esp)
0810d1fe +0x2cc:  mov    -0x51(%ebp),%edx
0810d201 +0x2cf:  mov    %edx,0x38(%esp)
0810d205 +0x2d3:  mov    -0x4d(%ebp),%edx
0810d208 +0x2d6:  mov    %edx,0x3c(%esp)
0810d20c +0x2da:  movzbl -0x49(%ebp),%edx
0810d210 +0x2de:  mov    %dl,0x40(%esp)
0810d214 +0x2e2:  mov    %eax,(%esp)
0810d217 +0x2e5:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0810d21c +0x2ea:  mov    %eax,-0x38(%ebp)
0810d21f +0x2ed:  mov    -0x38(%ebp),%eax
0810d222 +0x2f0:  cmp    $0xffffffff,%eax
0810d225 +0x2f3:  jne    0810d22b <+0x2f9>
0810d227 +0x2f5:  movb   $0x1,-0x9(%ebp)
0810d22b +0x2f9:  movzbl -0x9(%ebp),%eax
0810d22f +0x2fd:  xor    $0x1,%eax
0810d232 +0x300:  test   %al,%al
0810d234 +0x302:  je     0810d3a4 <+0x472>
0810d23a +0x308:  cmpb   $0x0,-0x8c(%ebp)
0810d241 +0x30f:  je     0810d3a4 <+0x472>
0810d247 +0x315:  lea    -0x48(%ebp),%eax
0810d24a +0x318:  mov    %eax,(%esp)
0810d24d +0x31b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0810d252 +0x320:  movl   $0xe,0x8(%esp)
0810d25a +0x328:  movl   $0x0,0x4(%esp)
0810d262 +0x330:  lea    -0x48(%ebp),%eax
0810d265 +0x333:  mov    %eax,(%esp)
0810d268 +0x336:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0810d26d +0x33b:  mov    -0x10(%ebp),%eax
0810d270 +0x33e:  mov    (%eax),%eax
0810d272 +0x340:  add    $0x10,%eax
0810d275 +0x343:  mov    (%eax),%edx
0810d277 +0x345:  mov    -0x10(%ebp),%eax
0810d27a +0x348:  mov    %eax,(%esp)
0810d27d +0x34b:  call   *%edx
0810d27f +0x34d:  test   %al,%al
0810d281 +0x34f:  je     0810d2e8 <+0x3b6>
0810d283 +0x351:  movl   $0x1,0x4(%esp)
0810d28b +0x359:  lea    -0x48(%ebp),%eax
0810d28e +0x35c:  mov    %eax,(%esp)
0810d291 +0x35f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0810d296 +0x364:  movl   $0x1,0x4(%esp)
0810d29e +0x36c:  lea    -0x48(%ebp),%eax
0810d2a1 +0x36f:  mov    %eax,(%esp)
0810d2a4 +0x372:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0810d2a9 +0x377:  mov    -0x38(%ebp),%esi
0810d2ac +0x37a:  mov    0xc(%ebp),%eax
0810d2af +0x37d:  mov    %eax,(%esp)
0810d2b2 +0x380:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d2b7 +0x385:  lea    -0x48(%ebp),%edx
0810d2ba +0x388:  mov    %edx,0xc(%esp)
0810d2be +0x38c:  mov    %esi,0x8(%esp)
0810d2c2 +0x390:  movl   $0x2,0x4(%esp)
0810d2ca +0x398:  mov    %eax,(%esp)
0810d2cd +0x39b:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0810d2d2 +0x3a0:  xor    $0x1,%eax
0810d2d5 +0x3a3:  test   %al,%al
0810d2d7 +0x3a5:  je     0810d34a <+0x418>
0810d2d9 +0x3a7:  mov    $0x0,%ebx
0810d2de +0x3ac:  mov    $0x0,%esi
0810d2e3 +0x3b1:  jmp    0810d391 <+0x45f>
0810d2e8 +0x3b6:  movl   $0x0,0x4(%esp)
0810d2f0 +0x3be:  lea    -0x48(%ebp),%eax
0810d2f3 +0x3c1:  mov    %eax,(%esp)
0810d2f6 +0x3c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0810d2fb +0x3c9:  movl   $0x1,0x4(%esp)
0810d303 +0x3d1:  lea    -0x48(%ebp),%eax
0810d306 +0x3d4:  mov    %eax,(%esp)
0810d309 +0x3d7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0810d30e +0x3dc:  mov    -0x38(%ebp),%esi
0810d311 +0x3df:  mov    0xc(%ebp),%eax
0810d314 +0x3e2:  mov    %eax,(%esp)
0810d317 +0x3e5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d31c +0x3ea:  lea    -0x48(%ebp),%edx
0810d31f +0x3ed:  mov    %edx,0xc(%esp)
0810d323 +0x3f1:  mov    %esi,0x8(%esp)
0810d327 +0x3f5:  movl   $0x1,0x4(%esp)
0810d32f +0x3fd:  mov    %eax,(%esp)
0810d332 +0x400:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0810d337 +0x405:  xor    $0x1,%eax
0810d33a +0x408:  test   %al,%al
0810d33c +0x40a:  je     0810d34a <+0x418>
0810d33e +0x40c:  mov    $0x0,%ebx
0810d343 +0x411:  mov    $0x0,%esi
0810d348 +0x416:  jmp    0810d391 <+0x45f>
0810d34a +0x418:  movl   $0x1,0x4(%esp)
0810d352 +0x420:  lea    -0x48(%ebp),%eax
0810d355 +0x423:  mov    %eax,(%esp)
0810d358 +0x426:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0810d35d +0x42b:  lea    -0x48(%ebp),%eax
0810d360 +0x42e:  mov    %eax,0x4(%esp)
0810d364 +0x432:  mov    0xc(%ebp),%eax
0810d367 +0x435:  mov    %eax,(%esp)
0810d36a +0x438:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0810d36f +0x43d:  mov    $0x1,%esi
0810d374 +0x442:  jmp    0810d391 <+0x45f>
0810d376 +0x444:  mov    %edx,%ebx
0810d378 +0x446:  mov    %eax,%esi
0810d37a +0x448:  lea    -0x48(%ebp),%eax
0810d37d +0x44b:  mov    %eax,(%esp)
0810d380 +0x44e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810d385 +0x453:  mov    %esi,%eax
0810d387 +0x455:  mov    %ebx,%edx
0810d389 +0x457:  mov    %eax,(%esp)
0810d38c +0x45a:  call   08ae3750 <_Unwind_Resume>
0810d391 +0x45f:  lea    -0x48(%ebp),%eax
0810d394 +0x462:  mov    %eax,(%esp)
0810d397 +0x465:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810d39c +0x46a:  test   %esi,%esi
0810d39e +0x46c:  je     0810d4a1 <+0x56f>
0810d3a4 +0x472:  mov    0x10(%ebp),%eax
0810d3a7 +0x475:  movzbl 0x1c(%eax),%eax
0810d3ab +0x479:  test   %al,%al
0810d3ad +0x47b:  je     0810d3b5 <+0x483>
0810d3af +0x47d:  cmpb   $0x0,-0x9(%ebp)
0810d3b3 +0x481:  je     0810d3df <+0x4ad>
0810d3b5 +0x483:  mov    -0x10(%ebp),%eax
0810d3b8 +0x486:  mov    %eax,0x10(%esp)
0810d3bc +0x48a:  lea    -0x85(%ebp),%eax
0810d3c2 +0x490:  mov    %eax,0xc(%esp)
0810d3c6 +0x494:  mov    0x10(%ebp),%eax
0810d3c9 +0x497:  mov    %eax,0x8(%esp)
0810d3cd +0x49b:  mov    0xc(%ebp),%eax
0810d3d0 +0x49e:  mov    %eax,0x4(%esp)
0810d3d4 +0x4a2:  mov    0x8(%ebp),%eax
0810d3d7 +0x4a5:  mov    %eax,(%esp)
0810d3da +0x4a8:  call   0810da1c <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem>  ; EventClassify::CEventActionMng::process_mail_send(CUser*, Action_SendMail&, Inven_Item&, CItem const*)
0810d3df +0x4ad:  mov    0x10(%ebp),%eax
0810d3e2 +0x4b0:  lea    0x38(%eax),%edx
0810d3e5 +0x4b3:  lea    -0x38(%ebp),%eax
0810d3e8 +0x4b6:  mov    %eax,0x4(%esp)
0810d3ec +0x4ba:  mov    %edx,(%esp)
0810d3ef +0x4bd:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0810d3f4 +0x4c2:  mov    -0x83(%ebp),%eax
0810d3fa +0x4c8:  mov    %eax,-0x24(%ebp)
0810d3fd +0x4cb:  mov    0x10(%ebp),%eax
0810d400 +0x4ce:  lea    0x38(%eax),%edx
0810d403 +0x4d1:  lea    -0x24(%ebp),%eax
0810d406 +0x4d4:  mov    %eax,0x4(%esp)
0810d40a +0x4d8:  mov    %edx,(%esp)
0810d40d +0x4db:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810d412 +0x4e0:  mov    0x10(%ebp),%eax
0810d415 +0x4e3:  add    $0x38,%eax
0810d418 +0x4e6:  lea    -0x85(%ebp),%edx
0810d41e +0x4ec:  add    $0x7,%edx
0810d421 +0x4ef:  mov    %edx,0x4(%esp)
0810d425 +0x4f3:  mov    %eax,(%esp)
0810d428 +0x4f6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0810d42d +0x4fb:  movzbl -0x84(%ebp),%eax
0810d434 +0x502:  cmp    $0x2,%al
0810d436 +0x504:  je     0810d443 <+0x511>
0810d438 +0x506:  movzbl -0x84(%ebp),%eax
0810d43f +0x50d:  cmp    $0x3,%al
0810d441 +0x50f:  jne    0810d464 <+0x532>
0810d443 +0x511:  movzwl -0x7a(%ebp),%eax
0810d447 +0x515:  movzwl %ax,%eax
0810d44a +0x518:  mov    %eax,-0x20(%ebp)
0810d44d +0x51b:  mov    0x10(%ebp),%eax
0810d450 +0x51e:  lea    0x38(%eax),%edx
0810d453 +0x521:  lea    -0x20(%ebp),%eax
0810d456 +0x524:  mov    %eax,0x4(%esp)
0810d45a +0x528:  mov    %edx,(%esp)
0810d45d +0x52b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810d462 +0x530:  jmp    0810d480 <+0x54e>
0810d464 +0x532:  movl   $0x0,-0x1c(%ebp)
0810d46b +0x539:  mov    0x10(%ebp),%eax
0810d46e +0x53c:  lea    0x38(%eax),%edx
0810d471 +0x53f:  lea    -0x1c(%ebp),%eax
0810d474 +0x542:  mov    %eax,0x4(%esp)
0810d478 +0x546:  mov    %edx,(%esp)
0810d47b +0x549:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810d480 +0x54e:  mov    -0x7e(%ebp),%edx
0810d483 +0x551:  mov    -0x83(%ebp),%eax
0810d489 +0x557:  mov    %edx,0x8(%esp)
0810d48d +0x55b:  mov    %eax,0x4(%esp)
0810d491 +0x55f:  mov    0xc(%ebp),%eax
0810d494 +0x562:  mov    %eax,(%esp)
0810d497 +0x565:  call   08692b84 <_ZN5CUser20SendAradEventItemLogEmi>  ; CUser::SendAradEventItemLog(unsigned long, int)
0810d49c +0x56a:  mov    $0x0,%ebx
0810d4a1 +0x56f:  mov    %ebx,%eax
0810d4a3 +0x571:  lea    -0x8(%ebp),%esp
0810d4a6 +0x574:  add    $0x0,%esp
0810d4a9 +0x577:  pop    %ebx
0810d4aa +0x578:  pop    %esi
0810d4ab +0x579:  pop    %ebp
0810d4ac +0x57a:  ret
0810d4ad +0x57b:  nop
```

## 反编译 C

```c
// EventClassify::CEventActionMng::process_action_send_mail @ 0x810cf32

/* EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_action_send_mail
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined4 unaff_EBX;
  Inven_Item local_89;
  char cStack_88;
  undefined2 uStack_87;
  undefined2 uStack_85;
  undefined1 uStack_83;
  int iStack_82;
  undefined1 local_7e;
  undefined4 uStack_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  PacketGuard local_4c [12];
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_40 [4];
  int local_3c;
  _Rb_tree_iterator local_38 [4];
  undefined4 local_34;
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_30 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_2c [4];
  int local_28;
  uint local_24 [3];
  int local_18;
  CItem *local_14;
  char local_d;
  
  if (param_1 == (CUser *)0x0) {
    return 3;
  }
  if (0 < *(int *)(param_2 + 0x28)) {
    process_gold_mail_send(this,param_1,param_2);
    return 0;
  }
  Inven_Item::Inven_Item(&local_89);
  local_24[2] = *(uint *)(param_2 + 0x20);
  local_18 = *(int *)(param_2 + 0x24);
  iVar3 = std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::size((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                  *)param_2);
  if (iVar3 != 0) {
    local_34 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::find((int *)local_38);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::_Rb_tree_const_iterator
              (local_40,local_38);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::end(local_2c);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::_Rb_tree_const_iterator
              (local_30,(_Rb_tree_iterator *)local_2c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                      (local_40,(_Rb_tree_const_iterator *)local_30);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        (local_40);
      local_24[2] = *(int *)(iVar3 + 4);
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        (local_40);
      local_18 = *(int *)(iVar3 + 8);
    }
  }
  if (local_18 == 0) {
    local_18 = 1;
  }
  local_3c = -1;
  uStack_87 = (undefined2)local_24[2];
  uStack_85 = (undefined2)(local_24[2] >> 0x10);
  Inven_Item::set_add_info(&local_89,local_18);
  if (CONCAT22(uStack_85,uStack_87) == 1) {
    process_coin_send(this,param_1,param_2,&local_89);
    goto LAB_0810d3df;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,local_24[2]);
  if (local_14 == (CItem *)0x0) {
    return 0x11;
  }
  (**(code **)(*(int *)local_14 + 8))(local_14,&local_89);
  local_d = '\0';
  if (param_2[0x1c] != (Action_SendMail)0x0) {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
      if (cVar2 == '\0') {
        uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_3c = CInventory::insertItemIntoInventory
                             (uVar4,CONCAT22(uStack_87,CONCAT11(cStack_88,local_89)),
                              CONCAT13((undefined1)iStack_82,CONCAT12(uStack_83,uStack_85)),
                              CONCAT13(local_7e,iStack_82._1_3_),uStack_7d,local_79,local_75,
                              local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                              local_55,local_51,local_4d,0xd,1,1);
        if (local_3c == -1) {
          local_d = '\x01';
        }
      }
      else {
        local_3c = process_avatar_send(this,param_1,&local_89,local_14);
        if (local_3c == -1) {
          local_d = '\x01';
        }
      }
      if ((local_d != '\x01') && (param_3)) {
        PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0810d268 to 0810d36e has its CatchHandler @ 0810d376 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xe);
        cVar2 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,1);
          iVar3 = local_3c;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::MakeItemPacket(pCVar5,1,iVar3,local_4c);
          if (cVar2 == '\x01') goto LAB_0810d34a;
          unaff_EBX = 0;
          bVar1 = false;
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,1);
          iVar3 = local_3c;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::MakeItemPacket(pCVar5,2,iVar3,local_4c);
          if (cVar2 == '\x01') {
LAB_0810d34a:
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
            CUser::Send(param_1,local_4c);
            bVar1 = true;
          }
          else {
            unaff_EBX = 0;
            bVar1 = false;
          }
        }
        PacketGuard::~PacketGuard(local_4c);
        if (!bVar1) {
          return unaff_EBX;
        }
      }
    }
    else {
      local_d = '\x01';
    }
  }
  if ((param_2[0x1c] == (Action_SendMail)0x0) || (local_d != '\0')) {
    process_mail_send(this,param_1,param_2,&local_89,local_14);
  }
LAB_0810d3df:
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&local_3c);
  local_28 = CONCAT22(uStack_85,uStack_87);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&local_28);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&iStack_82);
  if ((cStack_88 == '\x02') || (cStack_88 == '\x03')) {
    local_24[0] = (uint)CONCAT11((undefined1)uStack_7d,local_7e);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_2 + 0x38),(int *)local_24);
  }
  else {
    local_24[1] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_2 + 0x38),(int *)(local_24 + 1));
  }
  CUser::SendAradEventItemLog(param_1,CONCAT22(uStack_85,uStack_87),iStack_82);
  return 0;
}
```
