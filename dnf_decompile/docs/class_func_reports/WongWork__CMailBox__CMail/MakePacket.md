# MakePacket

`_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser`

`WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox::CMail` | `0x08551a36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08551a36  _ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser
#           WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const
# range [0x08551a36, 0x08551d97]
08551a36 +0x000:  push   %ebp
08551a37 +0x001:  mov    %esp,%ebp
08551a39 +0x003:  push   %ebx
08551a3a +0x004:  sub    $0x24,%esp
08551a3d +0x007:  mov    0x8(%ebp),%eax
08551a40 +0x00a:  mov    (%eax),%eax
08551a42 +0x00c:  mov    %eax,%edx
08551a44 +0x00e:  mov    0xc(%ebp),%eax
08551a47 +0x011:  mov    %edx,0x4(%esp)
08551a4b +0x015:  mov    %eax,(%esp)
08551a4e +0x018:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551a53 +0x01d:  mov    0x8(%ebp),%eax
08551a56 +0x020:  add    $0x8,%eax
08551a59 +0x023:  mov    %eax,(%esp)
08551a5c +0x026:  call   0807e3b0 <_init+0xca8>
08551a61 +0x02b:  mov    %eax,%edx
08551a63 +0x02d:  mov    0xc(%ebp),%eax
08551a66 +0x030:  mov    %edx,0x4(%esp)
08551a6a +0x034:  mov    %eax,(%esp)
08551a6d +0x037:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551a72 +0x03c:  mov    0x8(%ebp),%eax
08551a75 +0x03f:  add    $0x8,%eax
08551a78 +0x042:  mov    %eax,(%esp)
08551a7b +0x045:  call   0807e3b0 <_init+0xca8>
08551a80 +0x04a:  mov    %eax,%edx
08551a82 +0x04c:  mov    0x8(%ebp),%eax
08551a85 +0x04f:  lea    0x8(%eax),%ecx
08551a88 +0x052:  mov    0xc(%ebp),%eax
08551a8b +0x055:  mov    %edx,0x8(%esp)
08551a8f +0x059:  mov    %ecx,0x4(%esp)
08551a93 +0x05d:  mov    %eax,(%esp)
08551a96 +0x060:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
08551a9b +0x065:  mov    0x8(%ebp),%eax
08551a9e +0x068:  mov    0x28(%eax),%eax
08551aa1 +0x06b:  mov    %eax,%edx
08551aa3 +0x06d:  mov    0xc(%ebp),%eax
08551aa6 +0x070:  mov    %edx,0x4(%esp)
08551aaa +0x074:  mov    %eax,(%esp)
08551aad +0x077:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551ab2 +0x07c:  mov    0x8(%ebp),%eax
08551ab5 +0x07f:  mov    0x2e(%eax),%eax
08551ab8 +0x082:  mov    %eax,%edx
08551aba +0x084:  mov    0xc(%ebp),%eax
08551abd +0x087:  mov    %edx,0x4(%esp)
08551ac1 +0x08b:  mov    %eax,(%esp)
08551ac4 +0x08e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551ac9 +0x093:  mov    0x8(%ebp),%eax
08551acc +0x096:  movzbl 0x2c(%eax),%eax
08551ad0 +0x09a:  test   %al,%al
08551ad2 +0x09c:  je     08551adb <+0xa5>
08551ad4 +0x09e:  mov    $0x1,%eax
08551ad9 +0x0a3:  jmp    08551ae0 <+0xaa>
08551adb +0x0a5:  mov    $0x0,%eax
08551ae0 +0x0aa:  mov    0xc(%ebp),%edx
08551ae3 +0x0ad:  mov    %eax,0x4(%esp)
08551ae7 +0x0b1:  mov    %edx,(%esp)
08551aea +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08551aef +0x0b9:  mov    0x8(%ebp),%eax
08551af2 +0x0bc:  mov    %eax,(%esp)
08551af5 +0x0bf:  call   0855759c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xfd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xfd
08551afa +0x0c4:  test   %al,%al
08551afc +0x0c6:  je     08551b3b <+0x105>
08551afe +0x0c8:  mov    0x8(%ebp),%eax
08551b01 +0x0cb:  mov    0x33(%eax),%ebx
08551b04 +0x0ce:  mov    0x14(%ebp),%eax
08551b07 +0x0d1:  mov    %eax,(%esp)
08551b0a +0x0d4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08551b0f +0x0d9:  mov    %eax,(%esp)
08551b12 +0x0dc:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08551b17 +0x0e1:  mov    0x10(%ebp),%edx
08551b1a +0x0e4:  mov    %edx,0x8(%esp)
08551b1e +0x0e8:  mov    %ebx,0x4(%esp)
08551b22 +0x0ec:  mov    %eax,(%esp)
08551b25 +0x0ef:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08551b2a +0x0f4:  mov    0xc(%ebp),%edx
08551b2d +0x0f7:  mov    %eax,0x4(%esp)
08551b31 +0x0fb:  mov    %edx,(%esp)
08551b34 +0x0fe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551b39 +0x103:  jmp    08551b50 <+0x11a>
08551b3b +0x105:  mov    0x8(%ebp),%eax
08551b3e +0x108:  mov    0x33(%eax),%edx
08551b41 +0x10b:  mov    0xc(%ebp),%eax
08551b44 +0x10e:  mov    %edx,0x4(%esp)
08551b48 +0x112:  mov    %eax,(%esp)
08551b4b +0x115:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551b50 +0x11a:  mov    0x8(%ebp),%eax
08551b53 +0x11d:  movzwl 0x37(%eax),%eax
08551b57 +0x121:  movzwl %ax,%edx
08551b5a +0x124:  mov    0xc(%ebp),%eax
08551b5d +0x127:  mov    %edx,0x4(%esp)
08551b61 +0x12b:  mov    %eax,(%esp)
08551b64 +0x12e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08551b69 +0x133:  mov    0x8(%ebp),%eax
08551b6c +0x136:  add    $0x2c,%eax
08551b6f +0x139:  mov    %eax,(%esp)
08551b72 +0x13c:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08551b77 +0x141:  movzbl %al,%edx
08551b7a +0x144:  mov    0xc(%ebp),%eax
08551b7d +0x147:  mov    %edx,0x4(%esp)
08551b81 +0x14b:  mov    %eax,(%esp)
08551b84 +0x14e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08551b89 +0x153:  mov    0x8(%ebp),%eax
08551b8c +0x156:  mov    0x39(%eax),%eax
08551b8f +0x159:  mov    %eax,%edx
08551b91 +0x15b:  mov    0xc(%ebp),%eax
08551b94 +0x15e:  mov    %edx,0x4(%esp)
08551b98 +0x162:  mov    %eax,(%esp)
08551b9b +0x165:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551ba0 +0x16a:  mov    0x8(%ebp),%eax
08551ba3 +0x16d:  add    $0x3d,%eax
08551ba6 +0x170:  mov    %eax,(%esp)
08551ba9 +0x173:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08551bae +0x178:  movzbl %al,%edx
08551bb1 +0x17b:  mov    0xc(%ebp),%eax
08551bb4 +0x17e:  mov    %edx,0x4(%esp)
08551bb8 +0x182:  mov    %eax,(%esp)
08551bbb +0x185:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08551bc0 +0x18a:  mov    0x8(%ebp),%eax
08551bc3 +0x18d:  add    $0x3d,%eax
08551bc6 +0x190:  mov    %eax,(%esp)
08551bc9 +0x193:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08551bce +0x198:  movzwl %ax,%edx
08551bd1 +0x19b:  mov    0xc(%ebp),%eax
08551bd4 +0x19e:  mov    %edx,0x4(%esp)
08551bd8 +0x1a2:  mov    %eax,(%esp)
08551bdb +0x1a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08551be0 +0x1aa:  mov    0x8(%ebp),%eax
08551be3 +0x1ad:  movzbl 0x2d(%eax),%eax
08551be7 +0x1b1:  cmp    $0x5,%al
08551be9 +0x1b3:  jne    08551c26 <+0x1f0>
08551beb +0x1b5:  mov    0x8(%ebp),%eax
08551bee +0x1b8:  mov    0x33(%eax),%ebx
08551bf1 +0x1bb:  mov    0x14(%ebp),%eax
08551bf4 +0x1be:  mov    %eax,(%esp)
08551bf7 +0x1c1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08551bfc +0x1c6:  mov    %eax,(%esp)
08551bff +0x1c9:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
08551c04 +0x1ce:  mov    0x10(%ebp),%edx
08551c07 +0x1d1:  mov    %edx,0x8(%esp)
08551c0b +0x1d5:  mov    %ebx,0x4(%esp)
08551c0f +0x1d9:  mov    %eax,(%esp)
08551c12 +0x1dc:  call   0833d88c <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii>  ; user_creature::CCreatureMgr::getRemainTempPeriod(int, int) const
08551c17 +0x1e1:  mov    0xc(%ebp),%edx
08551c1a +0x1e4:  mov    %eax,0x4(%esp)
08551c1e +0x1e8:  mov    %edx,(%esp)
08551c21 +0x1eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551c26 +0x1f0:  mov    0x8(%ebp),%eax
08551c29 +0x1f3:  lea    0x2c(%eax),%edx
08551c2c +0x1f6:  mov    0xc(%ebp),%eax
08551c2f +0x1f9:  mov    %edx,0x4(%esp)
08551c33 +0x1fd:  mov    %eax,(%esp)
08551c36 +0x200:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08551c3b +0x205:  mov    0x8(%ebp),%eax
08551c3e +0x208:  mov    %eax,(%esp)
08551c41 +0x20b:  call   0855759c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xfd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xfd
08551c46 +0x210:  test   %al,%al
08551c48 +0x212:  je     08551d21 <+0x2eb>
08551c4e +0x218:  mov    0xc(%ebp),%eax
08551c51 +0x21b:  movl   $0x1e,0x4(%esp)
08551c59 +0x223:  mov    %eax,(%esp)
08551c5c +0x226:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551c61 +0x22b:  mov    0x8(%ebp),%eax
08551c64 +0x22e:  mov    0x33(%eax),%ebx
08551c67 +0x231:  mov    0x14(%ebp),%eax
08551c6a +0x234:  mov    %eax,(%esp)
08551c6d +0x237:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08551c72 +0x23c:  mov    %eax,(%esp)
08551c75 +0x23f:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08551c7a +0x244:  mov    %ebx,0x4(%esp)
08551c7e +0x248:  mov    %eax,(%esp)
08551c81 +0x24b:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
08551c86 +0x250:  mov    %eax,%edx
08551c88 +0x252:  mov    0xc(%ebp),%eax
08551c8b +0x255:  movl   $0x1e,0x8(%esp)
08551c93 +0x25d:  mov    %edx,0x4(%esp)
08551c97 +0x261:  mov    %eax,(%esp)
08551c9a +0x264:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08551c9f +0x269:  mov    0x8(%ebp),%eax
08551ca2 +0x26c:  mov    0x33(%eax),%ebx
08551ca5 +0x26f:  mov    0x14(%ebp),%eax
08551ca8 +0x272:  mov    %eax,(%esp)
08551cab +0x275:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08551cb0 +0x27a:  mov    %eax,(%esp)
08551cb3 +0x27d:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08551cb8 +0x282:  mov    %ebx,0x4(%esp)
08551cbc +0x286:  mov    %eax,(%esp)
08551cbf +0x289:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
08551cc4 +0x28e:  mov    %eax,-0xc(%ebp)
08551cc7 +0x291:  mov    0xc(%ebp),%eax
08551cca +0x294:  movl   $0x4,0x4(%esp)
08551cd2 +0x29c:  mov    %eax,(%esp)
08551cd5 +0x29f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551cda +0x2a4:  cmpl   $0x0,-0xc(%ebp)
08551cde +0x2a8:  je     08551cfc <+0x2c6>
08551ce0 +0x2aa:  mov    -0xc(%ebp),%edx
08551ce3 +0x2ad:  mov    0xc(%ebp),%eax
08551ce6 +0x2b0:  movl   $0x4,0x8(%esp)
08551cee +0x2b8:  mov    %edx,0x4(%esp)
08551cf2 +0x2bc:  mov    %eax,(%esp)
08551cf5 +0x2bf:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08551cfa +0x2c4:  jmp    08551d21 <+0x2eb>
08551cfc +0x2c6:  lea    -0x18(%ebp),%eax
08551cff +0x2c9:  mov    %eax,(%esp)
08551d02 +0x2cc:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
08551d07 +0x2d1:  lea    -0x18(%ebp),%edx
08551d0a +0x2d4:  mov    0xc(%ebp),%eax
08551d0d +0x2d7:  movl   $0x4,0x8(%esp)
08551d15 +0x2df:  mov    %edx,0x4(%esp)
08551d19 +0x2e3:  mov    %eax,(%esp)
08551d1c +0x2e6:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08551d21 +0x2eb:  mov    0x8(%ebp),%eax
08551d24 +0x2ee:  mov    %eax,(%esp)
08551d27 +0x2f1:  call   08557590 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf1>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf1
08551d2c +0x2f6:  test   %al,%al
08551d2e +0x2f8:  je     08551d45 <+0x30f>
08551d30 +0x2fa:  mov    0xc(%ebp),%eax
08551d33 +0x2fd:  movl   $0x0,0x4(%esp)
08551d3b +0x305:  mov    %eax,(%esp)
08551d3e +0x308:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551d43 +0x30d:  jmp    08551d7b <+0x345>
08551d45 +0x30f:  mov    0x8(%ebp),%eax
08551d48 +0x312:  mov    0x6c(%eax),%eax
08551d4b +0x315:  sub    0x10(%ebp),%eax
08551d4e +0x318:  mov    %eax,-0x14(%ebp)
08551d51 +0x31b:  movl   $0x1,-0x10(%ebp)
08551d58 +0x322:  lea    -0x14(%ebp),%eax
08551d5b +0x325:  mov    %eax,0x4(%esp)
08551d5f +0x329:  lea    -0x10(%ebp),%eax
08551d62 +0x32c:  mov    %eax,(%esp)
08551d65 +0x32f:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08551d6a +0x334:  mov    (%eax),%edx
08551d6c +0x336:  mov    0xc(%ebp),%eax
08551d6f +0x339:  mov    %edx,0x4(%esp)
08551d73 +0x33d:  mov    %eax,(%esp)
08551d76 +0x340:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551d7b +0x345:  mov    0x8(%ebp),%eax
08551d7e +0x348:  mov    0x78(%eax),%eax
08551d81 +0x34b:  mov    %eax,%edx
08551d83 +0x34d:  mov    0xc(%ebp),%eax
08551d86 +0x350:  mov    %edx,0x4(%esp)
08551d8a +0x354:  mov    %eax,(%esp)
08551d8d +0x357:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08551d92 +0x35c:  add    $0x24,%esp
08551d95 +0x35f:  pop    %ebx
08551d96 +0x360:  pop    %ebp
08551d97 +0x361:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::CMail::MakePacket @ 0x8551a36

/* WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const */

void __thiscall
WongWork::CMailBox::CMail::MakePacket(CMail *this,PacketGuard *param_1,long param_2,CUser *param_3)

{
  char cVar1;
  size_t sVar2;
  CInventory *pCVar3;
  CAvatarItemMgr *pCVar4;
  int iVar5;
  uint uVar6;
  CCreatureMgr *this_00;
  char *pcVar7;
  int *piVar8;
  stAvatarExpansionInfo_t local_1c [4];
  int local_18 [2];
  char *local_10;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  sVar2 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
  sVar2 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 8),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2e));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(this[0x2c] != (CMail)0x0));
  cVar1 = isAvatarPackage(this);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x33));
  }
  else {
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    iVar5 = CAvatarItemMgr::GetRemainDate(pCVar4,iVar5,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar5);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x37));
  uVar6 = Inven_Item::GetItemAttr((Inven_Item *)(this + 0x2c));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar6 & 0xff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x39));
  uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0x3d));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar6 & 0xff);
  uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0x3d));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar6 & 0xffff);
  if (this[0x2d] == (CMail)0x5) {
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar3);
    iVar5 = user_creature::CCreatureMgr::getRemainTempPeriod(this_00,iVar5,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar5);
  }
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_1,(Inven_Item *)(this + 0x2c));
  cVar1 = isAvatarPackage(this);
  if (cVar1 != '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x1e);
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    pcVar7 = (char *)CAvatarItemMgr::getJewelSocketData(pCVar4,iVar5);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,pcVar7,0x1e);
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    local_10 = (char *)CAvatarItemMgr::GetExpansionInfo(pCVar4,iVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,4);
    if (local_10 == (char *)0x0) {
      stAvatarExpansionInfo_t::init(local_1c);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)local_1c,4);
    }
    else {
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,local_10,4);
    }
  }
  cVar1 = isUnlimit(this);
  if (cVar1 == '\0') {
    local_18[0] = *(int *)(this + 0x6c) - param_2;
    local_18[1] = 1;
    piVar8 = std::max<int>(local_18 + 1,local_18);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*piVar8);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x78));
  return;
}
```
