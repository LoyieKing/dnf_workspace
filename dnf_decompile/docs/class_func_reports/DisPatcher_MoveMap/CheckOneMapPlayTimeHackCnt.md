# CheckOneMapPlayTimeHackCnt

`_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP`

`DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt(CUser*, MSG_MOVE_MAP&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveMap` | `0x081c4d26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4d26  _ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP
#           DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt(CUser*, MSG_MOVE_MAP&)
# range [0x081c4d26, 0x081c532f]
081c4d26 +0x000:  push   %ebp
081c4d27 +0x001:  mov    %esp,%ebp
081c4d29 +0x003:  push   %ebx
081c4d2a +0x004:  sub    $0x64,%esp
081c4d2d +0x007:  movl   $0x0,-0x28(%ebp)
081c4d34 +0x00e:  mov    0xc(%ebp),%eax
081c4d37 +0x011:  mov    %eax,(%esp)
081c4d3a +0x014:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c4d3f +0x019:  mov    %eax,-0x24(%ebp)
081c4d42 +0x01c:  cmpl   $0x0,-0x24(%ebp)
081c4d46 +0x020:  je     081c5329 <+0x603>
081c4d4c +0x026:  mov    0xc(%ebp),%eax
081c4d4f +0x029:  mov    %eax,(%esp)
081c4d52 +0x02c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4d57 +0x031:  cmp    $0xa,%eax
081c4d5a +0x034:  sete   %al
081c4d5d +0x037:  test   %al,%al
081c4d5f +0x039:  je     081c4da2 <+0x7c>
081c4d61 +0x03b:  mov    0xc(%ebp),%eax
081c4d64 +0x03e:  mov    %eax,(%esp)
081c4d67 +0x041:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081c4d6c +0x046:  mov    %eax,-0x20(%ebp)
081c4d6f +0x049:  cmpl   $0x0,-0x20(%ebp)
081c4d73 +0x04d:  je     081c4dc2 <+0x9c>
081c4d75 +0x04f:  mov    -0x20(%ebp),%eax
081c4d78 +0x052:  mov    %eax,(%esp)
081c4d7b +0x055:  call   0823461e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cc8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cc8
081c4d80 +0x05a:  mov    %eax,(%esp)
081c4d83 +0x05d:  call   082345fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ca4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ca4
081c4d88 +0x062:  mov    %eax,-0x3c(%ebp)
081c4d8b +0x065:  mov    $0x10624dd3,%edx
081c4d90 +0x06a:  mov    -0x3c(%ebp),%eax
081c4d93 +0x06d:  mul    %edx
081c4d95 +0x06f:  mov    %edx,%eax
081c4d97 +0x071:  shr    $0x6,%eax
081c4d9a +0x074:  add    $0x5,%eax
081c4d9d +0x077:  mov    %eax,-0x28(%ebp)
081c4da0 +0x07a:  jmp    081c4dc2 <+0x9c>
081c4da2 +0x07c:  mov    -0x24(%ebp),%eax
081c4da5 +0x07f:  mov    %eax,(%esp)
081c4da8 +0x082:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
081c4dad +0x087:  mov    %eax,-0x3c(%ebp)
081c4db0 +0x08a:  mov    $0x10624dd3,%edx
081c4db5 +0x08f:  mov    -0x3c(%ebp),%eax
081c4db8 +0x092:  mul    %edx
081c4dba +0x094:  mov    %edx,%eax
081c4dbc +0x096:  shr    $0x6,%eax
081c4dbf +0x099:  mov    %eax,-0x28(%ebp)
081c4dc2 +0x09c:  movl   $0x0,-0x1c(%ebp)
081c4dc9 +0x0a3:  jmp    081c531a <+0x5f4>
081c4dce +0x0a8:  mov    -0x1c(%ebp),%eax
081c4dd1 +0x0ab:  mov    %eax,0x4(%esp)
081c4dd5 +0x0af:  mov    -0x24(%ebp),%eax
081c4dd8 +0x0b2:  mov    %eax,(%esp)
081c4ddb +0x0b5:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081c4de0 +0x0ba:  xor    $0x1,%eax
081c4de3 +0x0bd:  test   %al,%al
081c4de5 +0x0bf:  jne    081c5315 <+0x5ef>
081c4deb +0x0c5:  mov    -0x1c(%ebp),%eax
081c4dee +0x0c8:  mov    %eax,0x4(%esp)
081c4df2 +0x0cc:  mov    -0x24(%ebp),%eax
081c4df5 +0x0cf:  mov    %eax,(%esp)
081c4df8 +0x0d2:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c4dfd +0x0d7:  mov    %eax,-0x18(%ebp)
081c4e00 +0x0da:  cmpl   $0x0,-0x18(%ebp)
081c4e04 +0x0de:  je     081c5316 <+0x5f0>
081c4e0a +0x0e4:  mov    -0x1c(%ebp),%edx
081c4e0d +0x0e7:  mov    0x10(%ebp),%eax
081c4e10 +0x0ea:  add    $0x8,%edx
081c4e13 +0x0ed:  mov    0x3(%eax,%edx,4),%eax
081c4e17 +0x0f1:  cmp    $0x2710,%eax
081c4e1c +0x0f6:  jbe    081c4f7d <+0x257>
081c4e22 +0x0fc:  movl   $0x0,-0x14(%ebp)
081c4e29 +0x103:  movl   $0x0,-0x10(%ebp)
081c4e30 +0x10a:  mov    -0x1c(%ebp),%edx
081c4e33 +0x10d:  mov    0x10(%ebp),%eax
081c4e36 +0x110:  add    $0x8,%edx
081c4e39 +0x113:  mov    0x3(%eax,%edx,4),%edx
081c4e3d +0x117:  mov    %edx,-0x3c(%ebp)
081c4e40 +0x11a:  mov    $0xd1b71759,%edx
081c4e45 +0x11f:  mov    -0x3c(%ebp),%eax
081c4e48 +0x122:  mul    %edx
081c4e4a +0x124:  mov    %edx,%eax
081c4e4c +0x126:  shr    $0xd,%eax
081c4e4f +0x129:  mov    %eax,-0x14(%ebp)
081c4e52 +0x12c:  mov    -0x1c(%ebp),%edx
081c4e55 +0x12f:  mov    0x10(%ebp),%eax
081c4e58 +0x132:  add    $0x8,%edx
081c4e5b +0x135:  mov    0x3(%eax,%edx,4),%ecx
081c4e5f +0x139:  mov    $0xd1b71759,%edx
081c4e64 +0x13e:  mov    %ecx,%eax
081c4e66 +0x140:  mul    %edx
081c4e68 +0x142:  mov    %edx,%eax
081c4e6a +0x144:  shr    $0xd,%eax
081c4e6d +0x147:  imul   $0x2710,%eax,%eax
081c4e73 +0x14d:  mov    %ecx,%edx
081c4e75 +0x14f:  sub    %eax,%edx
081c4e77 +0x151:  mov    %edx,%eax
081c4e79 +0x153:  mov    %eax,-0x10(%ebp)
081c4e7c +0x156:  mov    -0x18(%ebp),%eax
081c4e7f +0x159:  mov    %eax,(%esp)
081c4e82 +0x15c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c4e87 +0x161:  mov    0xcac(%eax),%eax
081c4e8d +0x167:  test   %eax,%eax
081c4e8f +0x169:  sete   %al
081c4e92 +0x16c:  test   %al,%al
081c4e94 +0x16e:  je     081c4ed4 <+0x1ae>
081c4e96 +0x170:  mov    -0x14(%ebp),%ebx
081c4e99 +0x173:  mov    -0x18(%ebp),%eax
081c4e9c +0x176:  mov    %eax,(%esp)
081c4e9f +0x179:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4ea4 +0x17e:  movl   $0x0,0x14(%esp)
081c4eac +0x186:  mov    %ebx,0x10(%esp)
081c4eb0 +0x18a:  movl   $0x1,0xc(%esp)
081c4eb8 +0x192:  movl   $0x77,0x8(%esp)
081c4ec0 +0x19a:  mov    -0x18(%ebp),%edx
081c4ec3 +0x19d:  mov    %edx,0x4(%esp)
081c4ec7 +0x1a1:  mov    %eax,(%esp)
081c4eca +0x1a4:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c4ecf +0x1a9:  jmp    081c4f6d <+0x247>
081c4ed4 +0x1ae:  mov    -0x18(%ebp),%eax
081c4ed7 +0x1b1:  mov    %eax,(%esp)
081c4eda +0x1b4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c4edf +0x1b9:  mov    0xcac(%eax),%eax
081c4ee5 +0x1bf:  mov    %eax,(%esp)
081c4ee8 +0x1c2:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081c4eed +0x1c7:  cmp    $0x2afe,%eax
081c4ef2 +0x1cc:  sete   %al
081c4ef5 +0x1cf:  test   %al,%al
081c4ef7 +0x1d1:  je     081c4f34 <+0x20e>
081c4ef9 +0x1d3:  mov    -0x14(%ebp),%ebx
081c4efc +0x1d6:  mov    -0x18(%ebp),%eax
081c4eff +0x1d9:  mov    %eax,(%esp)
081c4f02 +0x1dc:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4f07 +0x1e1:  movl   $0x0,0x14(%esp)
081c4f0f +0x1e9:  mov    %ebx,0x10(%esp)
081c4f13 +0x1ed:  movl   $0x1,0xc(%esp)
081c4f1b +0x1f5:  movl   $0x82,0x8(%esp)
081c4f23 +0x1fd:  mov    -0x18(%ebp),%edx
081c4f26 +0x200:  mov    %edx,0x4(%esp)
081c4f2a +0x204:  mov    %eax,(%esp)
081c4f2d +0x207:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c4f32 +0x20c:  jmp    081c4f6d <+0x247>
081c4f34 +0x20e:  mov    -0x14(%ebp),%ebx
081c4f37 +0x211:  mov    -0x18(%ebp),%eax
081c4f3a +0x214:  mov    %eax,(%esp)
081c4f3d +0x217:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4f42 +0x21c:  movl   $0x0,0x14(%esp)
081c4f4a +0x224:  mov    %ebx,0x10(%esp)
081c4f4e +0x228:  movl   $0x1,0xc(%esp)
081c4f56 +0x230:  movl   $0x77,0x8(%esp)
081c4f5e +0x238:  mov    -0x18(%ebp),%edx
081c4f61 +0x23b:  mov    %edx,0x4(%esp)
081c4f65 +0x23f:  mov    %eax,(%esp)
081c4f68 +0x242:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c4f6d +0x247:  mov    -0x1c(%ebp),%ecx
081c4f70 +0x24a:  mov    -0x10(%ebp),%edx
081c4f73 +0x24d:  mov    0x10(%ebp),%eax
081c4f76 +0x250:  add    $0x8,%ecx
081c4f79 +0x253:  mov    %edx,0x3(%eax,%ecx,4)
081c4f7d +0x257:  mov    -0x18(%ebp),%eax
081c4f80 +0x25a:  mov    %eax,(%esp)
081c4f83 +0x25d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081c4f88 +0x262:  cmp    $0x3,%eax
081c4f8b +0x265:  je     081c4fac <+0x286>
081c4f8d +0x267:  mov    -0x18(%ebp),%eax
081c4f90 +0x26a:  mov    %eax,(%esp)
081c4f93 +0x26d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081c4f98 +0x272:  cmp    $0x4,%eax
081c4f9b +0x275:  jne    081c4fb3 <+0x28d>
081c4f9d +0x277:  mov    -0x18(%ebp),%eax
081c4fa0 +0x27a:  mov    %eax,(%esp)
081c4fa3 +0x27d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081c4fa8 +0x282:  cmp    $0x2,%al
081c4faa +0x284:  jne    081c4fb3 <+0x28d>
081c4fac +0x286:  mov    $0x1,%eax
081c4fb1 +0x28b:  jmp    081c4fb8 <+0x292>
081c4fb3 +0x28d:  mov    $0x0,%eax
081c4fb8 +0x292:  test   %al,%al
081c4fba +0x294:  je     081c500c <+0x2e6>
081c4fbc +0x296:  mov    -0x1c(%ebp),%ecx
081c4fbf +0x299:  mov    -0x1c(%ebp),%edx
081c4fc2 +0x29c:  mov    0x10(%ebp),%eax
081c4fc5 +0x29f:  add    $0x8,%edx
081c4fc8 +0x2a2:  mov    0x3(%eax,%edx,4),%eax
081c4fcc +0x2a6:  mov    $0x0,%edx
081c4fd1 +0x2ab:  mov    %eax,-0x30(%ebp)
081c4fd4 +0x2ae:  mov    %edx,-0x2c(%ebp)
081c4fd7 +0x2b1:  fildll -0x30(%ebp)
081c4fda +0x2b4:  fldl   &data#78e7013f(.rodata)
081c4fe0 +0x2ba:  fmulp  %st,%st(1)
081c4fe2 +0x2bc:  fnstcw -0x32(%ebp)
081c4fe5 +0x2bf:  movzwl -0x32(%ebp),%eax
081c4fe9 +0x2c3:  mov    $0xc,%ah
081c4feb +0x2c5:  mov    %ax,-0x34(%ebp)
081c4fef +0x2c9:  fldcw  -0x34(%ebp)
081c4ff2 +0x2cc:  fistpll -0x30(%ebp)
081c4ff5 +0x2cf:  fldcw  -0x32(%ebp)
081c4ff8 +0x2d2:  mov    -0x30(%ebp),%eax
081c4ffb +0x2d5:  mov    -0x2c(%ebp),%edx
081c4ffe +0x2d8:  mov    %eax,%edx
081c5000 +0x2da:  mov    0x10(%ebp),%eax
081c5003 +0x2dd:  add    $0x8,%ecx
081c5006 +0x2e0:  mov    %edx,0x3(%eax,%ecx,4)
081c500a +0x2e4:  jmp    081c505a <+0x334>
081c500c +0x2e6:  mov    -0x1c(%ebp),%ecx
081c500f +0x2e9:  mov    -0x1c(%ebp),%edx
081c5012 +0x2ec:  mov    0x10(%ebp),%eax
081c5015 +0x2ef:  add    $0x8,%edx
081c5018 +0x2f2:  mov    0x3(%eax,%edx,4),%eax
081c501c +0x2f6:  mov    $0x0,%edx
081c5021 +0x2fb:  mov    %eax,-0x30(%ebp)
081c5024 +0x2fe:  mov    %edx,-0x2c(%ebp)
081c5027 +0x301:  fildll -0x30(%ebp)
081c502a +0x304:  fldl   &data#7055a9cf(.rodata)
081c5030 +0x30a:  fmulp  %st,%st(1)
081c5032 +0x30c:  fnstcw -0x32(%ebp)
081c5035 +0x30f:  movzwl -0x32(%ebp),%eax
081c5039 +0x313:  mov    $0xc,%ah
081c503b +0x315:  mov    %ax,-0x34(%ebp)
081c503f +0x319:  fldcw  -0x34(%ebp)
081c5042 +0x31c:  fistpll -0x30(%ebp)
081c5045 +0x31f:  fldcw  -0x32(%ebp)
081c5048 +0x322:  mov    -0x30(%ebp),%eax
081c504b +0x325:  mov    -0x2c(%ebp),%edx
081c504e +0x328:  mov    %eax,%edx
081c5050 +0x32a:  mov    0x10(%ebp),%eax
081c5053 +0x32d:  add    $0x8,%ecx
081c5056 +0x330:  mov    %edx,0x3(%eax,%ecx,4)
081c505a +0x334:  mov    -0x24(%ebp),%eax
081c505d +0x337:  add    $0xb24,%eax
081c5062 +0x33c:  mov    %eax,(%esp)
081c5065 +0x33f:  call   0822cf50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25fa
081c506a +0x344:  xor    $0x1,%eax
081c506d +0x347:  test   %al,%al
081c506f +0x349:  je     081c5316 <+0x5f0>
081c5075 +0x34f:  mov    -0x1c(%ebp),%edx
081c5078 +0x352:  mov    0x10(%ebp),%eax
081c507b +0x355:  add    $0x8,%edx
081c507e +0x358:  mov    0x3(%eax,%edx,4),%eax
081c5082 +0x35c:  cmp    -0x28(%ebp),%eax
081c5085 +0x35f:  jbe    081c5316 <+0x5f0>
081c508b +0x365:  mov    -0x28(%ebp),%eax
081c508e +0x368:  mov    $0x0,%edx
081c5093 +0x36d:  mov    %eax,-0x30(%ebp)
081c5096 +0x370:  mov    %edx,-0x2c(%ebp)
081c5099 +0x373:  fildll -0x30(%ebp)
081c509c +0x376:  fldl   &data#dd58a0f3(.rodata)
081c50a2 +0x37c:  fmulp  %st,%st(1)
081c50a4 +0x37e:  mov    -0x1c(%ebp),%edx
081c50a7 +0x381:  mov    0x10(%ebp),%eax
081c50aa +0x384:  add    $0x8,%edx
081c50ad +0x387:  mov    0x3(%eax,%edx,4),%eax
081c50b1 +0x38b:  mov    $0x0,%edx
081c50b6 +0x390:  mov    %eax,-0x30(%ebp)
081c50b9 +0x393:  mov    %edx,-0x2c(%ebp)
081c50bc +0x396:  fildll -0x30(%ebp)
081c50bf +0x399:  fucompp
081c50c1 +0x39b:  fnstsw %ax
081c50c3 +0x39d:  test   $0x45,%ah
081c50c6 +0x3a0:  sete   %al
081c50c9 +0x3a3:  test   %al,%al
081c50cb +0x3a5:  je     081c5204 <+0x4de>
081c50d1 +0x3ab:  movl   $0x0,-0xc(%ebp)
081c50d8 +0x3b2:  jmp    081c51f0 <+0x4ca>
081c50dd +0x3b7:  mov    -0x18(%ebp),%eax
081c50e0 +0x3ba:  mov    %eax,(%esp)
081c50e3 +0x3bd:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c50e8 +0x3c2:  mov    0xcac(%eax),%eax
081c50ee +0x3c8:  test   %eax,%eax
081c50f0 +0x3ca:  sete   %al
081c50f3 +0x3cd:  test   %al,%al
081c50f5 +0x3cf:  je     081c513f <+0x419>
081c50f7 +0x3d1:  mov    -0x1c(%ebp),%edx
081c50fa +0x3d4:  mov    0x10(%ebp),%eax
081c50fd +0x3d7:  add    $0x8,%edx
081c5100 +0x3da:  mov    0x3(%eax,%edx,4),%ebx
081c5104 +0x3de:  mov    -0x18(%ebp),%eax
081c5107 +0x3e1:  mov    %eax,(%esp)
081c510a +0x3e4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c510f +0x3e9:  movl   $0x0,0x14(%esp)
081c5117 +0x3f1:  mov    %ebx,0x10(%esp)
081c511b +0x3f5:  movl   $0x1,0xc(%esp)
081c5123 +0x3fd:  movl   $0x74,0x8(%esp)
081c512b +0x405:  mov    -0x18(%ebp),%edx
081c512e +0x408:  mov    %edx,0x4(%esp)
081c5132 +0x40c:  mov    %eax,(%esp)
081c5135 +0x40f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c513a +0x414:  jmp    081c51ec <+0x4c6>
081c513f +0x419:  mov    -0x18(%ebp),%eax
081c5142 +0x41c:  mov    %eax,(%esp)
081c5145 +0x41f:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c514a +0x424:  mov    0xcac(%eax),%eax
081c5150 +0x42a:  mov    %eax,(%esp)
081c5153 +0x42d:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081c5158 +0x432:  cmp    $0x2afe,%eax
081c515d +0x437:  sete   %al
081c5160 +0x43a:  test   %al,%al
081c5162 +0x43c:  je     081c51a9 <+0x483>
081c5164 +0x43e:  mov    -0x1c(%ebp),%edx
081c5167 +0x441:  mov    0x10(%ebp),%eax
081c516a +0x444:  add    $0x8,%edx
081c516d +0x447:  mov    0x3(%eax,%edx,4),%ebx
081c5171 +0x44b:  mov    -0x18(%ebp),%eax
081c5174 +0x44e:  mov    %eax,(%esp)
081c5177 +0x451:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c517c +0x456:  movl   $0x0,0x14(%esp)
081c5184 +0x45e:  mov    %ebx,0x10(%esp)
081c5188 +0x462:  movl   $0x1,0xc(%esp)
081c5190 +0x46a:  movl   $0x81,0x8(%esp)
081c5198 +0x472:  mov    -0x18(%ebp),%edx
081c519b +0x475:  mov    %edx,0x4(%esp)
081c519f +0x479:  mov    %eax,(%esp)
081c51a2 +0x47c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c51a7 +0x481:  jmp    081c51ec <+0x4c6>
081c51a9 +0x483:  mov    -0x1c(%ebp),%edx
081c51ac +0x486:  mov    0x10(%ebp),%eax
081c51af +0x489:  add    $0x8,%edx
081c51b2 +0x48c:  mov    0x3(%eax,%edx,4),%ebx
081c51b6 +0x490:  mov    -0x18(%ebp),%eax
081c51b9 +0x493:  mov    %eax,(%esp)
081c51bc +0x496:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c51c1 +0x49b:  movl   $0x0,0x14(%esp)
081c51c9 +0x4a3:  mov    %ebx,0x10(%esp)
081c51cd +0x4a7:  movl   $0x1,0xc(%esp)
081c51d5 +0x4af:  movl   $0x74,0x8(%esp)
081c51dd +0x4b7:  mov    -0x18(%ebp),%edx
081c51e0 +0x4ba:  mov    %edx,0x4(%esp)
081c51e4 +0x4be:  mov    %eax,(%esp)
081c51e7 +0x4c1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c51ec +0x4c6:  addl   $0x1,-0xc(%ebp)
081c51f0 +0x4ca:  cmpl   $0x9,-0xc(%ebp)
081c51f4 +0x4ce:  setle  %al
081c51f7 +0x4d1:  test   %al,%al
081c51f9 +0x4d3:  jne    081c50dd <+0x3b7>
081c51ff +0x4d9:  jmp    081c5316 <+0x5f0>
081c5204 +0x4de:  mov    -0x18(%ebp),%eax
081c5207 +0x4e1:  mov    %eax,(%esp)
081c520a +0x4e4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c520f +0x4e9:  mov    0xcac(%eax),%eax
081c5215 +0x4ef:  test   %eax,%eax
081c5217 +0x4f1:  sete   %al
081c521a +0x4f4:  test   %al,%al
081c521c +0x4f6:  je     081c5266 <+0x540>
081c521e +0x4f8:  mov    -0x1c(%ebp),%edx
081c5221 +0x4fb:  mov    0x10(%ebp),%eax
081c5224 +0x4fe:  add    $0x8,%edx
081c5227 +0x501:  mov    0x3(%eax,%edx,4),%ebx
081c522b +0x505:  mov    -0x18(%ebp),%eax
081c522e +0x508:  mov    %eax,(%esp)
081c5231 +0x50b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c5236 +0x510:  movl   $0x0,0x14(%esp)
081c523e +0x518:  mov    %ebx,0x10(%esp)
081c5242 +0x51c:  movl   $0x1,0xc(%esp)
081c524a +0x524:  movl   $0x74,0x8(%esp)
081c5252 +0x52c:  mov    -0x18(%ebp),%edx
081c5255 +0x52f:  mov    %edx,0x4(%esp)
081c5259 +0x533:  mov    %eax,(%esp)
081c525c +0x536:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c5261 +0x53b:  jmp    081c5316 <+0x5f0>
081c5266 +0x540:  mov    -0x18(%ebp),%eax
081c5269 +0x543:  mov    %eax,(%esp)
081c526c +0x546:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c5271 +0x54b:  mov    0xcac(%eax),%eax
081c5277 +0x551:  mov    %eax,(%esp)
081c527a +0x554:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081c527f +0x559:  cmp    $0x2afe,%eax
081c5284 +0x55e:  sete   %al
081c5287 +0x561:  test   %al,%al
081c5289 +0x563:  je     081c52d0 <+0x5aa>
081c528b +0x565:  mov    -0x1c(%ebp),%edx
081c528e +0x568:  mov    0x10(%ebp),%eax
081c5291 +0x56b:  add    $0x8,%edx
081c5294 +0x56e:  mov    0x3(%eax,%edx,4),%ebx
081c5298 +0x572:  mov    -0x18(%ebp),%eax
081c529b +0x575:  mov    %eax,(%esp)
081c529e +0x578:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c52a3 +0x57d:  movl   $0x0,0x14(%esp)
081c52ab +0x585:  mov    %ebx,0x10(%esp)
081c52af +0x589:  movl   $0x1,0xc(%esp)
081c52b7 +0x591:  movl   $0x81,0x8(%esp)
081c52bf +0x599:  mov    -0x18(%ebp),%edx
081c52c2 +0x59c:  mov    %edx,0x4(%esp)
081c52c6 +0x5a0:  mov    %eax,(%esp)
081c52c9 +0x5a3:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c52ce +0x5a8:  jmp    081c5316 <+0x5f0>
081c52d0 +0x5aa:  mov    -0x1c(%ebp),%edx
081c52d3 +0x5ad:  mov    0x10(%ebp),%eax
081c52d6 +0x5b0:  add    $0x8,%edx
081c52d9 +0x5b3:  mov    0x3(%eax,%edx,4),%ebx
081c52dd +0x5b7:  mov    -0x18(%ebp),%eax
081c52e0 +0x5ba:  mov    %eax,(%esp)
081c52e3 +0x5bd:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c52e8 +0x5c2:  movl   $0x0,0x14(%esp)
081c52f0 +0x5ca:  mov    %ebx,0x10(%esp)
081c52f4 +0x5ce:  movl   $0x1,0xc(%esp)
081c52fc +0x5d6:  movl   $0x74,0x8(%esp)
081c5304 +0x5de:  mov    -0x18(%ebp),%edx
081c5307 +0x5e1:  mov    %edx,0x4(%esp)
081c530b +0x5e5:  mov    %eax,(%esp)
081c530e +0x5e8:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c5313 +0x5ed:  jmp    081c5316 <+0x5f0>
081c5315 +0x5ef:  nop
081c5316 +0x5f0:  addl   $0x1,-0x1c(%ebp)
081c531a +0x5f4:  cmpl   $0x3,-0x1c(%ebp)
081c531e +0x5f8:  setle  %al
081c5321 +0x5fb:  test   %al,%al
081c5323 +0x5fd:  jne    081c4dce <+0xa8>
081c5329 +0x603:  add    $0x64,%esp
081c532c +0x606:  pop    %ebx
081c532d +0x607:  pop    %ebp
081c532e +0x608:  ret
081c532f +0x609:  nop
```

## 反编译 C

```c
// DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt @ 0x81c4d26

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt(CUser*, MSG_MOVE_MAP&) */

void __thiscall
DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_MOVE_MAP *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  CParty *this_00;
  int iVar5;
  CDeathTower *this_01;
  CStage *this_02;
  uint uVar6;
  CUser *this_03;
  uint uVar7;
  CHackAnalyzer *pCVar8;
  ulonglong local_34;
  uint local_2c;
  int local_20;
  int local_10;
  
  local_2c = 0;
  this_00 = (CParty *)CUser::GetParty(param_1);
  if (this_00 != (CParty *)0x0) {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 10) {
      this_01 = (CDeathTower *)CUser::getDeathTower(param_1);
      if (this_01 != (CDeathTower *)0x0) {
        this_02 = (CStage *)WongWork::CDeathTower::getCStage(this_01);
        uVar6 = WongWork::CDeathTower::CStage::getStageClearTime(this_02);
        local_2c = uVar6 / 1000 + 5;
      }
    }
    else {
      local_2c = CParty::GetMapPlayingTime(this_00);
      local_2c = local_2c / 1000;
    }
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar4 = CParty::checkValidUser(this_00,local_20);
      if ((cVar4 == '\x01') &&
         (this_03 = (CUser *)CParty::get_user(this_00,local_20), this_03 != (CUser *)0x0)) {
        if (10000 < *(uint *)(param_2 + (local_20 + 8) * 4 + 3)) {
          uVar7 = *(uint *)(param_2 + (local_20 + 8) * 4 + 3) / 10000;
          uVar6 = *(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          iVar5 = CUser::GetParty(this_03);
          if (*(int *)(iVar5 + 0xcac) == 0) {
            pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x77,1,uVar7,0);
          }
          else {
            iVar5 = CUser::GetParty(this_03);
            iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
            if (iVar5 == 0x2afe) {
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x82,1,uVar7,0);
            }
            else {
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x77,1,uVar7,0);
            }
          }
          *(uint *)(param_2 + (local_20 + 8) * 4 + 3) = uVar6 % 10000;
        }
        iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this_03);
        if ((iVar5 == 3) ||
           ((iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this_03), iVar5 == 4 &&
            (cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this_03),
            cVar4 == '\x02')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          local_34._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
          *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3) = (undefined4)local_34;
        }
        else {
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          local_34._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
          *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3) = (undefined4)local_34;
        }
        cVar4 = CBattle_Field::check_start_point((CBattle_Field *)(this_00 + 0xb24));
        if ((cVar4 != '\x01') && (local_2c < *(uint *)(param_2 + (local_20 + 8) * 4 + 3))) {
          local_34 = (ulonglong)local_2c;
          dVar3 = (double)local_34;
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          if ((double)local_34 <= _DAT_08bd6330 * dVar3) {
            iVar5 = CUser::GetParty(this_03);
            if (*(int *)(iVar5 + 0xcac) == 0) {
              uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
            }
            else {
              iVar5 = CUser::GetParty(this_03);
              iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
              if (iVar5 == 0x2afe) {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x81,1,uVar1,0);
              }
              else {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
              }
            }
          }
          else {
            for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
              iVar5 = CUser::GetParty(this_03);
              if (*(int *)(iVar5 + 0xcac) == 0) {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
              }
              else {
                iVar5 = CUser::GetParty(this_03);
                iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
                if (iVar5 == 0x2afe) {
                  uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x81,1,uVar1,0);
                }
                else {
                  uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
```
