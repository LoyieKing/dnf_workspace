# OnReward

`_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib`

`CLeagueMatch::OnReward(PvP_Room*, int, bool)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855eb22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855eb22  _ZN12CLeagueMatch8OnRewardEP8PvP_Roomib
#           CLeagueMatch::OnReward(PvP_Room*, int, bool)
# range [0x0855eb22, 0x0855f9a9]
0855eb22 +0x000:  push   %ebp
0855eb23 +0x001:  mov    %esp,%ebp
0855eb25 +0x003:  push   %edi
0855eb26 +0x004:  push   %esi
0855eb27 +0x005:  push   %ebx
0855eb28 +0x006:  sub    $0x1fc,%esp
0855eb2e +0x00c:  mov    0x14(%ebp),%eax
0855eb31 +0x00f:  mov    %al,-0x1dc(%ebp)
0855eb37 +0x015:  lea    -0xd8(%ebp),%eax
0855eb3d +0x01b:  mov    %eax,(%esp)
0855eb40 +0x01e:  call   08568dc6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x790>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x790
0855eb45 +0x023:  movl   $0x0,-0x3c(%ebp)
0855eb4c +0x02a:  movl   $0x0,-0x3c(%ebp)
0855eb53 +0x031:  jmp    0855ec55 <+0x133>
0855eb58 +0x036:  movl   $0x0,-0x34(%ebp)
0855eb5f +0x03d:  jmp    0855ec39 <+0x117>
0855eb64 +0x042:  movl   $0x0,-0x30(%ebp)
0855eb6b +0x049:  jmp    0855ec26 <+0x104>
0855eb70 +0x04e:  mov    -0x3c(%ebp),%eax
0855eb73 +0x051:  mov    %eax,-0x1e4(%ebp)
0855eb79 +0x057:  mov    -0x34(%ebp),%esi
0855eb7c +0x05a:  mov    -0x30(%ebp),%edi
0855eb7f +0x05d:  mov    -0x3c(%ebp),%edx
0855eb82 +0x060:  mov    -0x34(%ebp),%eax
0855eb85 +0x063:  mov    -0x30(%ebp),%ecx
0855eb88 +0x066:  mov    %ecx,-0x1e0(%ebp)
0855eb8e +0x06c:  mov    0x8(%ebp),%ebx
0855eb91 +0x06f:  add    %eax,%eax
0855eb93 +0x071:  lea    0x0(,%eax,8),%ecx
0855eb9a +0x078:  sub    %eax,%ecx
0855eb9c +0x07a:  mov    %edx,%eax
0855eb9e +0x07c:  lea    0x0(,%eax,8),%edx
0855eba5 +0x083:  lea    0x0(,%edx,8),%eax
0855ebac +0x08a:  sub    %edx,%eax
0855ebae +0x08c:  lea    (%ecx,%eax,1),%eax
0855ebb1 +0x08f:  add    -0x1e0(%ebp),%eax
0855ebb7 +0x095:  add    $0x10,%eax
0855ebba +0x098:  movzwl 0x10(%ebx,%eax,2),%eax
0855ebbf +0x09d:  mov    %eax,%ebx
0855ebc1 +0x09f:  mov    %esi,%eax
0855ebc3 +0x0a1:  add    %eax,%eax
0855ebc5 +0x0a3:  add    %esi,%eax
0855ebc7 +0x0a5:  mov    -0x1e4(%ebp),%edx
0855ebcd +0x0ab:  lea    0x0(,%edx,8),%ecx
0855ebd4 +0x0b2:  lea    0x0(,%ecx,8),%edx
0855ebdb +0x0b9:  sub    %ecx,%edx
0855ebdd +0x0bb:  add    %edx,%eax
0855ebdf +0x0bd:  lea    -0x18(%ebp),%edx
0855ebe2 +0x0c0:  lea    (%edx,%eax,1),%eax
0855ebe5 +0x0c3:  add    %edi,%eax
0855ebe7 +0x0c5:  sub    $0xb0,%eax
0855ebec +0x0ca:  mov    %bl,(%eax)
0855ebee +0x0cc:  mov    -0x3c(%ebp),%ecx
0855ebf1 +0x0cf:  mov    -0x34(%ebp),%edx
0855ebf4 +0x0d2:  mov    -0x30(%ebp),%ebx
0855ebf7 +0x0d5:  mov    %edx,%eax
0855ebf9 +0x0d7:  add    %eax,%eax
0855ebfb +0x0d9:  add    %edx,%eax
0855ebfd +0x0db:  mov    %ecx,%edx
0855ebff +0x0dd:  lea    0x0(,%edx,8),%ecx
0855ec06 +0x0e4:  lea    0x0(,%ecx,8),%edx
0855ec0d +0x0eb:  sub    %ecx,%edx
0855ec0f +0x0ed:  add    %edx,%eax
0855ec11 +0x0ef:  lea    -0x18(%ebp),%ecx
0855ec14 +0x0f2:  lea    (%ecx,%eax,1),%eax
0855ec17 +0x0f5:  add    %ebx,%eax
0855ec19 +0x0f7:  sub    $0xb0,%eax
0855ec1e +0x0fc:  movb   $0x0,0xc(%eax)
0855ec22 +0x100:  addl   $0x1,-0x30(%ebp)
0855ec26 +0x104:  cmpl   $0x2,-0x30(%ebp)
0855ec2a +0x108:  setle  %al
0855ec2d +0x10b:  test   %al,%al
0855ec2f +0x10d:  jne    0855eb70 <+0x4e>
0855ec35 +0x113:  addl   $0x1,-0x34(%ebp)
0855ec39 +0x117:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855ec40 +0x11e:  movzbl %al,%eax
0855ec43 +0x121:  cmp    -0x34(%ebp),%eax
0855ec46 +0x124:  setg   %al
0855ec49 +0x127:  test   %al,%al
0855ec4b +0x129:  jne    0855eb64 <+0x42>
0855ec51 +0x12f:  addl   $0x1,-0x3c(%ebp)
0855ec55 +0x133:  cmpl   $0x1,-0x3c(%ebp)
0855ec59 +0x137:  setle  %al
0855ec5c +0x13a:  test   %al,%al
0855ec5e +0x13c:  jne    0855eb58 <+0x36>
0855ec64 +0x142:  cmpb   $0x0,-0x1dc(%ebp)
0855ec6b +0x149:  je     0855ed81 <+0x25f>
0855ec71 +0x14f:  movl   $0x1,-0x38(%ebp)
0855ec78 +0x156:  movl   $0x0,-0x2c(%ebp)
0855ec7f +0x15d:  jmp    0855ed64 <+0x242>
0855ec84 +0x162:  mov    -0x2c(%ebp),%edx
0855ec87 +0x165:  mov    %edx,%eax
0855ec89 +0x167:  add    %eax,%eax
0855ec8b +0x169:  add    %edx,%eax
0855ec8d +0x16b:  lea    -0x18(%ebp),%edi
0855ec90 +0x16e:  lea    (%edi,%eax,1),%eax
0855ec93 +0x171:  sub    $0xaf,%eax
0855ec98 +0x176:  movb   $0x0,0xc(%eax)
0855ec9c +0x17a:  mov    -0x2c(%ebp),%edx
0855ec9f +0x17d:  lea    -0xd8(%ebp),%ecx
0855eca5 +0x183:  mov    %edx,%eax
0855eca7 +0x185:  add    %eax,%eax
0855eca9 +0x187:  add    %edx,%eax
0855ecab +0x189:  add    $0x12,%eax
0855ecae +0x18c:  lea    (%ecx,%eax,1),%eax
0855ecb1 +0x18f:  lea    0xc(%eax),%ecx
0855ecb4 +0x192:  mov    -0x2c(%ebp),%eax
0855ecb7 +0x195:  lea    0x0(,%eax,4),%edx
0855ecbe +0x19c:  lea    0x0(,%edx,8),%eax
0855ecc5 +0x1a3:  sub    %edx,%eax
0855ecc7 +0x1a5:  add    $0x10,%eax
0855ecca +0x1a8:  add    0x8(%ebp),%eax
0855eccd +0x1ab:  add    $0xc,%eax
0855ecd0 +0x1ae:  movl   $0x0,0x10(%esp)
0855ecd8 +0x1b6:  mov    %ecx,0xc(%esp)
0855ecdc +0x1ba:  movl   $0x2,0x8(%esp)
0855ece4 +0x1c2:  mov    %eax,0x4(%esp)
0855ece8 +0x1c6:  mov    0x8(%ebp),%eax
0855eceb +0x1c9:  mov    %eax,(%esp)
0855ecee +0x1cc:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855ecf3 +0x1d1:  mov    -0x2c(%ebp),%edx
0855ecf6 +0x1d4:  mov    %edx,%eax
0855ecf8 +0x1d6:  add    %eax,%eax
0855ecfa +0x1d8:  add    %edx,%eax
0855ecfc +0x1da:  lea    -0x18(%ebp),%edx
0855ecff +0x1dd:  lea    (%edx,%eax,1),%eax
0855ed02 +0x1e0:  sub    $0x77,%eax
0855ed05 +0x1e3:  movb   $0x0,0xc(%eax)
0855ed09 +0x1e7:  mov    -0x2c(%ebp),%edx
0855ed0c +0x1ea:  lea    -0xd8(%ebp),%ecx
0855ed12 +0x1f0:  mov    %edx,%eax
0855ed14 +0x1f2:  add    %eax,%eax
0855ed16 +0x1f4:  add    %edx,%eax
0855ed18 +0x1f6:  add    $0x4a,%eax
0855ed1b +0x1f9:  lea    (%ecx,%eax,1),%eax
0855ed1e +0x1fc:  lea    0xc(%eax),%ecx
0855ed21 +0x1ff:  mov    -0x2c(%ebp),%eax
0855ed24 +0x202:  lea    0x0(,%eax,4),%edx
0855ed2b +0x209:  lea    0x0(,%edx,8),%eax
0855ed32 +0x210:  sub    %edx,%eax
0855ed34 +0x212:  sub    $0xffffff80,%eax
0855ed37 +0x215:  add    0x8(%ebp),%eax
0855ed3a +0x218:  add    $0xc,%eax
0855ed3d +0x21b:  movl   $0x0,0x10(%esp)
0855ed45 +0x223:  mov    %ecx,0xc(%esp)
0855ed49 +0x227:  movl   $0x2,0x8(%esp)
0855ed51 +0x22f:  mov    %eax,0x4(%esp)
0855ed55 +0x233:  mov    0x8(%ebp),%eax
0855ed58 +0x236:  mov    %eax,(%esp)
0855ed5b +0x239:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855ed60 +0x23e:  addl   $0x1,-0x2c(%ebp)
0855ed64 +0x242:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855ed6b +0x249:  movzbl %al,%eax
0855ed6e +0x24c:  cmp    -0x2c(%ebp),%eax
0855ed71 +0x24f:  setg   %al
0855ed74 +0x252:  test   %al,%al
0855ed76 +0x254:  jne    0855ec84 <+0x162>
0855ed7c +0x25a:  jmp    0855efa6 <+0x484>
0855ed81 +0x25f:  cmpl   $0x1,0x10(%ebp)
0855ed85 +0x263:  jne    0855ee9b <+0x379>
0855ed8b +0x269:  movl   $0x2,-0x38(%ebp)
0855ed92 +0x270:  movl   $0x0,-0x28(%ebp)
0855ed99 +0x277:  jmp    0855ee7e <+0x35c>
0855ed9e +0x27c:  mov    -0x28(%ebp),%edx
0855eda1 +0x27f:  lea    -0xd8(%ebp),%ecx
0855eda7 +0x285:  mov    %edx,%eax
0855eda9 +0x287:  add    %eax,%eax
0855edab +0x289:  add    %edx,%eax
0855edad +0x28b:  add    $0x11,%eax
0855edb0 +0x28e:  lea    (%ecx,%eax,1),%eax
0855edb3 +0x291:  lea    0xc(%eax),%ecx
0855edb6 +0x294:  mov    -0x28(%ebp),%eax
0855edb9 +0x297:  lea    0x0(,%eax,4),%edx
0855edc0 +0x29e:  lea    0x0(,%edx,8),%eax
0855edc7 +0x2a5:  sub    %edx,%eax
0855edc9 +0x2a7:  add    $0x10,%eax
0855edcc +0x2aa:  add    0x8(%ebp),%eax
0855edcf +0x2ad:  add    $0xc,%eax
0855edd2 +0x2b0:  movl   $0x0,0x10(%esp)
0855edda +0x2b8:  mov    %ecx,0xc(%esp)
0855edde +0x2bc:  movl   $0x1,0x8(%esp)
0855ede6 +0x2c4:  mov    %eax,0x4(%esp)
0855edea +0x2c8:  mov    0x8(%ebp),%eax
0855eded +0x2cb:  mov    %eax,(%esp)
0855edf0 +0x2ce:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855edf5 +0x2d3:  mov    -0x28(%ebp),%edx
0855edf8 +0x2d6:  mov    %edx,%eax
0855edfa +0x2d8:  add    %eax,%eax
0855edfc +0x2da:  add    %edx,%eax
0855edfe +0x2dc:  lea    -0x18(%ebp),%ecx
0855ee01 +0x2df:  lea    (%ecx,%eax,1),%eax
0855ee04 +0x2e2:  sub    $0xae,%eax
0855ee09 +0x2e7:  movb   $0x0,0xc(%eax)
0855ee0d +0x2eb:  mov    -0x28(%ebp),%edx
0855ee10 +0x2ee:  mov    %edx,%eax
0855ee12 +0x2f0:  add    %eax,%eax
0855ee14 +0x2f2:  add    %edx,%eax
0855ee16 +0x2f4:  lea    -0x18(%ebp),%edi
0855ee19 +0x2f7:  lea    (%edi,%eax,1),%eax
0855ee1c +0x2fa:  sub    $0x77,%eax
0855ee1f +0x2fd:  movb   $0x0,0xc(%eax)
0855ee23 +0x301:  mov    -0x28(%ebp),%edx
0855ee26 +0x304:  lea    -0xd8(%ebp),%ecx
0855ee2c +0x30a:  mov    %edx,%eax
0855ee2e +0x30c:  add    %eax,%eax
0855ee30 +0x30e:  add    %edx,%eax
0855ee32 +0x310:  add    $0x4a,%eax
0855ee35 +0x313:  lea    (%ecx,%eax,1),%eax
0855ee38 +0x316:  lea    0xc(%eax),%ecx
0855ee3b +0x319:  mov    -0x28(%ebp),%eax
0855ee3e +0x31c:  lea    0x0(,%eax,4),%edx
0855ee45 +0x323:  lea    0x0(,%edx,8),%eax
0855ee4c +0x32a:  sub    %edx,%eax
0855ee4e +0x32c:  sub    $0xffffff80,%eax
0855ee51 +0x32f:  add    0x8(%ebp),%eax
0855ee54 +0x332:  add    $0xc,%eax
0855ee57 +0x335:  movl   $0x0,0x10(%esp)
0855ee5f +0x33d:  mov    %ecx,0xc(%esp)
0855ee63 +0x341:  movl   $0x2,0x8(%esp)
0855ee6b +0x349:  mov    %eax,0x4(%esp)
0855ee6f +0x34d:  mov    0x8(%ebp),%eax
0855ee72 +0x350:  mov    %eax,(%esp)
0855ee75 +0x353:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855ee7a +0x358:  addl   $0x1,-0x28(%ebp)
0855ee7e +0x35c:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855ee85 +0x363:  movzbl %al,%eax
0855ee88 +0x366:  cmp    -0x28(%ebp),%eax
0855ee8b +0x369:  setg   %al
0855ee8e +0x36c:  test   %al,%al
0855ee90 +0x36e:  jne    0855ed9e <+0x27c>
0855ee96 +0x374:  jmp    0855efa6 <+0x484>
0855ee9b +0x379:  movl   $0x0,-0x38(%ebp)
0855eea2 +0x380:  movl   $0x0,-0x24(%ebp)
0855eea9 +0x387:  jmp    0855ef8e <+0x46c>
0855eeae +0x38c:  mov    -0x24(%ebp),%edx
0855eeb1 +0x38f:  mov    %edx,%eax
0855eeb3 +0x391:  add    %eax,%eax
0855eeb5 +0x393:  add    %edx,%eax
0855eeb7 +0x395:  lea    -0x18(%ebp),%edx
0855eeba +0x398:  lea    (%edx,%eax,1),%eax
0855eebd +0x39b:  sub    $0xaf,%eax
0855eec2 +0x3a0:  movb   $0x0,0xc(%eax)
0855eec6 +0x3a4:  mov    -0x24(%ebp),%edx
0855eec9 +0x3a7:  lea    -0xd8(%ebp),%ecx
0855eecf +0x3ad:  mov    %edx,%eax
0855eed1 +0x3af:  add    %eax,%eax
0855eed3 +0x3b1:  add    %edx,%eax
0855eed5 +0x3b3:  add    $0x12,%eax
0855eed8 +0x3b6:  lea    (%ecx,%eax,1),%eax
0855eedb +0x3b9:  lea    0xc(%eax),%ecx
0855eede +0x3bc:  mov    -0x24(%ebp),%eax
0855eee1 +0x3bf:  lea    0x0(,%eax,4),%edx
0855eee8 +0x3c6:  lea    0x0(,%edx,8),%eax
0855eeef +0x3cd:  sub    %edx,%eax
0855eef1 +0x3cf:  add    $0x10,%eax
0855eef4 +0x3d2:  add    0x8(%ebp),%eax
0855eef7 +0x3d5:  add    $0xc,%eax
0855eefa +0x3d8:  movl   $0x0,0x10(%esp)
0855ef02 +0x3e0:  mov    %ecx,0xc(%esp)
0855ef06 +0x3e4:  movl   $0x2,0x8(%esp)
0855ef0e +0x3ec:  mov    %eax,0x4(%esp)
0855ef12 +0x3f0:  mov    0x8(%ebp),%eax
0855ef15 +0x3f3:  mov    %eax,(%esp)
0855ef18 +0x3f6:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855ef1d +0x3fb:  mov    -0x24(%ebp),%edx
0855ef20 +0x3fe:  lea    -0xd8(%ebp),%ecx
0855ef26 +0x404:  mov    %edx,%eax
0855ef28 +0x406:  add    %eax,%eax
0855ef2a +0x408:  add    %edx,%eax
0855ef2c +0x40a:  add    $0x49,%eax
0855ef2f +0x40d:  lea    (%ecx,%eax,1),%eax
0855ef32 +0x410:  lea    0xc(%eax),%ecx
0855ef35 +0x413:  mov    -0x24(%ebp),%eax
0855ef38 +0x416:  lea    0x0(,%eax,4),%edx
0855ef3f +0x41d:  lea    0x0(,%edx,8),%eax
0855ef46 +0x424:  sub    %edx,%eax
0855ef48 +0x426:  sub    $0xffffff80,%eax
0855ef4b +0x429:  add    0x8(%ebp),%eax
0855ef4e +0x42c:  add    $0xc,%eax
0855ef51 +0x42f:  movl   $0x0,0x10(%esp)
0855ef59 +0x437:  mov    %ecx,0xc(%esp)
0855ef5d +0x43b:  movl   $0x1,0x8(%esp)
0855ef65 +0x443:  mov    %eax,0x4(%esp)
0855ef69 +0x447:  mov    0x8(%ebp),%eax
0855ef6c +0x44a:  mov    %eax,(%esp)
0855ef6f +0x44d:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855ef74 +0x452:  mov    -0x24(%ebp),%edx
0855ef77 +0x455:  mov    %edx,%eax
0855ef79 +0x457:  add    %eax,%eax
0855ef7b +0x459:  add    %edx,%eax
0855ef7d +0x45b:  lea    -0x18(%ebp),%ecx
0855ef80 +0x45e:  lea    (%ecx,%eax,1),%eax
0855ef83 +0x461:  sub    $0x76,%eax
0855ef86 +0x464:  movb   $0x0,0xc(%eax)
0855ef8a +0x468:  addl   $0x1,-0x24(%ebp)
0855ef8e +0x46c:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855ef95 +0x473:  movzbl %al,%eax
0855ef98 +0x476:  cmp    -0x24(%ebp),%eax
0855ef9b +0x479:  setg   %al
0855ef9e +0x47c:  test   %al,%al
0855efa0 +0x47e:  jne    0855eeae <+0x38c>
0855efa6 +0x484:  mov    &_ZN28PvPGlobalEnvironmentVariable20school_match_elo_k2_E,%eax
0855efab +0x489:  mov    %eax,-0xce(%ebp)
0855efb1 +0x48f:  mov    -0x38(%ebp),%eax
0855efb4 +0x492:  mov    %al,-0xca(%ebp)
0855efba +0x498:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855efc1 +0x49f:  mov    %al,-0xc9(%ebp)
0855efc7 +0x4a5:  movl   $0x0,-0x3c(%ebp)
0855efce +0x4ac:  jmp    0855f6fc <+0xbda>
0855efd3 +0x4b1:  movl   $0x0,-0x20(%ebp)
0855efda +0x4b8:  movl   $0x0,-0x20(%ebp)
0855efe1 +0x4bf:  jmp    0855f037 <+0x515>
0855efe3 +0x4c1:  mov    -0x3c(%ebp),%esi
0855efe6 +0x4c4:  mov    -0x20(%ebp),%ebx
0855efe9 +0x4c7:  mov    -0x3c(%ebp),%ecx
0855efec +0x4ca:  mov    -0x20(%ebp),%eax
0855efef +0x4cd:  mov    0x8(%ebp),%edi
0855eff2 +0x4d0:  shl    $0x2,%eax
0855eff5 +0x4d3:  lea    0x0(,%eax,8),%edx
0855effc +0x4da:  sub    %eax,%edx
0855effe +0x4dc:  mov    %ecx,%eax
0855f000 +0x4de:  mov    %eax,%ecx
0855f002 +0x4e0:  shl    $0x4,%ecx
0855f005 +0x4e3:  lea    0x0(,%ecx,8),%eax
0855f00c +0x4ea:  sub    %ecx,%eax
0855f00e +0x4ec:  lea    (%edx,%eax,1),%eax
0855f011 +0x4ef:  lea    (%edi,%eax,1),%eax
0855f014 +0x4f2:  add    $0x2c,%eax
0855f017 +0x4f5:  mov    (%eax),%ecx
0855f019 +0x4f7:  mov    %esi,%eax
0855f01b +0x4f9:  lea    (%eax,%eax,1),%edx
0855f01e +0x4fc:  lea    0x0(,%edx,8),%eax
0855f025 +0x503:  sub    %edx,%eax
0855f027 +0x505:  add    %ebx,%eax
0855f029 +0x507:  add    $0x8,%eax
0855f02c +0x50a:  mov    %ecx,-0xd0(%ebp,%eax,4)
0855f033 +0x511:  addl   $0x1,-0x20(%ebp)
0855f037 +0x515:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f03e +0x51c:  movzbl %al,%eax
0855f041 +0x51f:  cmp    -0x20(%ebp),%eax
0855f044 +0x522:  setg   %al
0855f047 +0x525:  test   %al,%al
0855f049 +0x527:  jne    0855efe3 <+0x4c1>
0855f04b +0x529:  movl   $0x0,-0x20(%ebp)
0855f052 +0x530:  jmp    0855f515 <+0x9f3>
0855f057 +0x535:  mov    -0x3c(%ebp),%eax
0855f05a +0x538:  mov    -0x20(%ebp),%ecx
0855f05d +0x53b:  lea    (%eax,%eax,1),%edx
0855f060 +0x53e:  lea    0x0(,%edx,8),%eax
0855f067 +0x545:  sub    %edx,%eax
0855f069 +0x547:  add    %ecx,%eax
0855f06b +0x549:  add    $0x8,%eax
0855f06e +0x54c:  mov    -0xd0(%ebp,%eax,4),%ebx
0855f075 +0x553:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f07c +0x55a:  movzbl %al,%ecx
0855f07f +0x55d:  mov    -0x3c(%ebp),%eax
0855f082 +0x560:  lea    -0xd8(%ebp),%esi
0855f088 +0x566:  lea    0x0(,%eax,8),%edx
0855f08f +0x56d:  lea    0x0(,%edx,8),%eax
0855f096 +0x574:  sub    %edx,%eax
0855f098 +0x576:  add    $0x20,%eax
0855f09b +0x579:  lea    (%esi,%eax,1),%eax
0855f09e +0x57c:  lea    0x8(%eax),%edx
0855f0a1 +0x57f:  mov    %ebx,0x10(%esp)
0855f0a5 +0x583:  mov    %ecx,0xc(%esp)
0855f0a9 +0x587:  mov    -0x20(%ebp),%eax
0855f0ac +0x58a:  mov    %eax,0x8(%esp)
0855f0b0 +0x58e:  mov    %edx,0x4(%esp)
0855f0b4 +0x592:  mov    0x8(%ebp),%eax
0855f0b7 +0x595:  mov    %eax,(%esp)
0855f0ba +0x598:  call   0855e7a8 <_ZN12CLeagueMatch14_getSameSchoolEPjiij>  ; CLeagueMatch::_getSameSchool(unsigned int*, int, int, unsigned int)
0855f0bf +0x59d:  test   %al,%al
0855f0c1 +0x59f:  je     0855f23c <+0x71a>
0855f0c7 +0x5a5:  mov    -0x3c(%ebp),%ecx
0855f0ca +0x5a8:  mov    -0x20(%ebp),%edx
0855f0cd +0x5ab:  mov    %edx,%eax
0855f0cf +0x5ad:  add    %eax,%eax
0855f0d1 +0x5af:  add    %edx,%eax
0855f0d3 +0x5b1:  mov    %ecx,%edx
0855f0d5 +0x5b3:  lea    0x0(,%edx,8),%ecx
0855f0dc +0x5ba:  lea    0x0(,%ecx,8),%edx
0855f0e3 +0x5c1:  sub    %ecx,%edx
0855f0e5 +0x5c3:  add    %edx,%eax
0855f0e7 +0x5c5:  lea    -0x18(%ebp),%edi
0855f0ea +0x5c8:  lea    (%edi,%eax,1),%eax
0855f0ed +0x5cb:  sub    $0xaf,%eax
0855f0f2 +0x5d0:  movzbl 0xc(%eax),%eax
0855f0f6 +0x5d4:  test   %al,%al
0855f0f8 +0x5d6:  jne    0855f131 <+0x60f>
0855f0fa +0x5d8:  mov    -0x3c(%ebp),%ecx
0855f0fd +0x5db:  mov    -0x20(%ebp),%edx
0855f100 +0x5de:  mov    %edx,%eax
0855f102 +0x5e0:  add    %eax,%eax
0855f104 +0x5e2:  add    %edx,%eax
0855f106 +0x5e4:  mov    %ecx,%edx
0855f108 +0x5e6:  lea    0x0(,%edx,8),%ecx
0855f10f +0x5ed:  lea    0x0(,%ecx,8),%edx
0855f116 +0x5f4:  sub    %ecx,%edx
0855f118 +0x5f6:  add    %edx,%eax
0855f11a +0x5f8:  lea    -0x18(%ebp),%edx
0855f11d +0x5fb:  lea    (%edx,%eax,1),%eax
0855f120 +0x5fe:  sub    $0xae,%eax
0855f125 +0x603:  movzbl 0xc(%eax),%eax
0855f129 +0x607:  test   %al,%al
0855f12b +0x609:  je     0855f1b7 <+0x695>
0855f131 +0x60f:  mov    -0x3c(%ebp),%ecx
0855f134 +0x612:  mov    -0x20(%ebp),%edx
0855f137 +0x615:  lea    -0xd8(%ebp),%ebx
0855f13d +0x61b:  mov    %edx,%eax
0855f13f +0x61d:  add    %eax,%eax
0855f141 +0x61f:  add    %edx,%eax
0855f143 +0x621:  mov    %ecx,%edx
0855f145 +0x623:  lea    0x0(,%edx,8),%ecx
0855f14c +0x62a:  lea    0x0(,%ecx,8),%edx
0855f153 +0x631:  sub    %ecx,%edx
0855f155 +0x633:  add    %edx,%eax
0855f157 +0x635:  add    $0x10,%eax
0855f15a +0x638:  lea    (%ebx,%eax,1),%eax
0855f15d +0x63b:  lea    0xc(%eax),%ebx
0855f160 +0x63e:  mov    -0x3c(%ebp),%ecx
0855f163 +0x641:  mov    -0x20(%ebp),%eax
0855f166 +0x644:  shl    $0x2,%eax
0855f169 +0x647:  lea    0x0(,%eax,8),%edx
0855f170 +0x64e:  sub    %eax,%edx
0855f172 +0x650:  mov    %ecx,%eax
0855f174 +0x652:  mov    %eax,%ecx
0855f176 +0x654:  shl    $0x4,%ecx
0855f179 +0x657:  lea    0x0(,%ecx,8),%eax
0855f180 +0x65e:  sub    %ecx,%eax
0855f182 +0x660:  lea    (%edx,%eax,1),%eax
0855f185 +0x663:  add    $0x10,%eax
0855f188 +0x666:  add    0x8(%ebp),%eax
0855f18b +0x669:  add    $0xc,%eax
0855f18e +0x66c:  movl   $0x1,0x10(%esp)
0855f196 +0x674:  mov    %ebx,0xc(%esp)
0855f19a +0x678:  movl   $0x0,0x8(%esp)
0855f1a2 +0x680:  mov    %eax,0x4(%esp)
0855f1a6 +0x684:  mov    0x8(%ebp),%eax
0855f1a9 +0x687:  mov    %eax,(%esp)
0855f1ac +0x68a:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855f1b1 +0x68f:  nop
0855f1b2 +0x690:  jmp    0855f511 <+0x9ef>
0855f1b7 +0x695:  mov    -0x3c(%ebp),%ecx
0855f1ba +0x698:  mov    -0x20(%ebp),%edx
0855f1bd +0x69b:  lea    -0xd8(%ebp),%ebx
0855f1c3 +0x6a1:  mov    %edx,%eax
0855f1c5 +0x6a3:  add    %eax,%eax
0855f1c7 +0x6a5:  add    %edx,%eax
0855f1c9 +0x6a7:  mov    %ecx,%edx
0855f1cb +0x6a9:  lea    0x0(,%edx,8),%ecx
0855f1d2 +0x6b0:  lea    0x0(,%ecx,8),%edx
0855f1d9 +0x6b7:  sub    %ecx,%edx
0855f1db +0x6b9:  add    %edx,%eax
0855f1dd +0x6bb:  add    $0x10,%eax
0855f1e0 +0x6be:  lea    (%ebx,%eax,1),%eax
0855f1e3 +0x6c1:  lea    0xc(%eax),%ebx
0855f1e6 +0x6c4:  mov    -0x3c(%ebp),%ecx
0855f1e9 +0x6c7:  mov    -0x20(%ebp),%eax
0855f1ec +0x6ca:  shl    $0x2,%eax
0855f1ef +0x6cd:  lea    0x0(,%eax,8),%edx
0855f1f6 +0x6d4:  sub    %eax,%edx
0855f1f8 +0x6d6:  mov    %ecx,%eax
0855f1fa +0x6d8:  mov    %eax,%ecx
0855f1fc +0x6da:  shl    $0x4,%ecx
0855f1ff +0x6dd:  lea    0x0(,%ecx,8),%eax
0855f206 +0x6e4:  sub    %ecx,%eax
0855f208 +0x6e6:  lea    (%edx,%eax,1),%eax
0855f20b +0x6e9:  add    $0x10,%eax
0855f20e +0x6ec:  add    0x8(%ebp),%eax
0855f211 +0x6ef:  add    $0xc,%eax
0855f214 +0x6f2:  movl   $0x0,0x10(%esp)
0855f21c +0x6fa:  mov    %ebx,0xc(%esp)
0855f220 +0x6fe:  movl   $0x0,0x8(%esp)
0855f228 +0x706:  mov    %eax,0x4(%esp)
0855f22c +0x70a:  mov    0x8(%ebp),%eax
0855f22f +0x70d:  mov    %eax,(%esp)
0855f232 +0x710:  call   0855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>  ; CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
0855f237 +0x715:  jmp    0855f511 <+0x9ef>
0855f23c +0x71a:  mov    -0x3c(%ebp),%ecx
0855f23f +0x71d:  mov    -0x20(%ebp),%edx
0855f242 +0x720:  mov    %edx,%eax
0855f244 +0x722:  add    %eax,%eax
0855f246 +0x724:  add    %edx,%eax
0855f248 +0x726:  mov    %ecx,%edx
0855f24a +0x728:  lea    0x0(,%edx,8),%ecx
0855f251 +0x72f:  lea    0x0(,%ecx,8),%edx
0855f258 +0x736:  sub    %ecx,%edx
0855f25a +0x738:  add    %edx,%eax
0855f25c +0x73a:  lea    -0x18(%ebp),%ecx
0855f25f +0x73d:  lea    (%ecx,%eax,1),%eax
0855f262 +0x740:  sub    $0xb0,%eax
0855f267 +0x745:  movb   $0x0,0xc(%eax)
0855f26b +0x749:  mov    -0x3c(%ebp),%ecx
0855f26e +0x74c:  mov    -0x20(%ebp),%edx
0855f271 +0x74f:  mov    %edx,%eax
0855f273 +0x751:  add    %eax,%eax
0855f275 +0x753:  add    %edx,%eax
0855f277 +0x755:  mov    %ecx,%edx
0855f279 +0x757:  lea    0x0(,%edx,8),%ecx
0855f280 +0x75e:  lea    0x0(,%ecx,8),%edx
0855f287 +0x765:  sub    %ecx,%edx
0855f289 +0x767:  add    %edx,%eax
0855f28b +0x769:  lea    -0x18(%ebp),%edi
0855f28e +0x76c:  lea    (%edi,%eax,1),%eax
0855f291 +0x76f:  sub    $0xaf,%eax
0855f296 +0x774:  movzbl 0xc(%eax),%eax
0855f29a +0x778:  test   %al,%al
0855f29c +0x77a:  jne    0855f2d5 <+0x7b3>
0855f29e +0x77c:  mov    -0x3c(%ebp),%ecx
0855f2a1 +0x77f:  mov    -0x20(%ebp),%edx
0855f2a4 +0x782:  mov    %edx,%eax
0855f2a6 +0x784:  add    %eax,%eax
0855f2a8 +0x786:  add    %edx,%eax
0855f2aa +0x788:  mov    %ecx,%edx
0855f2ac +0x78a:  lea    0x0(,%edx,8),%ecx
0855f2b3 +0x791:  lea    0x0(,%ecx,8),%edx
0855f2ba +0x798:  sub    %ecx,%edx
0855f2bc +0x79a:  add    %edx,%eax
0855f2be +0x79c:  lea    -0x18(%ebp),%edx
0855f2c1 +0x79f:  lea    (%edx,%eax,1),%eax
0855f2c4 +0x7a2:  sub    $0xae,%eax
0855f2c9 +0x7a7:  movzbl 0xc(%eax),%eax
0855f2cd +0x7ab:  test   %al,%al
0855f2cf +0x7ad:  je     0855f511 <+0x9ef>
0855f2d5 +0x7b3:  mov    -0x3c(%ebp),%ecx
0855f2d8 +0x7b6:  mov    -0x20(%ebp),%eax
0855f2db +0x7b9:  mov    0x8(%ebp),%ebx
0855f2de +0x7bc:  shl    $0x2,%eax
0855f2e1 +0x7bf:  lea    0x0(,%eax,8),%edx
0855f2e8 +0x7c6:  sub    %eax,%edx
0855f2ea +0x7c8:  mov    %ecx,%eax
0855f2ec +0x7ca:  mov    %eax,%ecx
0855f2ee +0x7cc:  shl    $0x4,%ecx
0855f2f1 +0x7cf:  lea    0x0(,%ecx,8),%eax
0855f2f8 +0x7d6:  sub    %ecx,%eax
0855f2fa +0x7d8:  lea    (%edx,%eax,1),%eax
0855f2fd +0x7db:  lea    (%ebx,%eax,1),%eax
0855f300 +0x7de:  add    $0x10,%eax
0855f303 +0x7e1:  movzbl 0x18(%eax),%eax
0855f307 +0x7e5:  xor    $0x1,%eax
0855f30a +0x7e8:  test   %al,%al
0855f30c +0x7ea:  jne    0855f50a <+0x9e8>
0855f312 +0x7f0:  mov    -0x3c(%ebp),%ecx
0855f315 +0x7f3:  mov    -0x20(%ebp),%eax
0855f318 +0x7f6:  mov    0x8(%ebp),%ebx
0855f31b +0x7f9:  shl    $0x2,%eax
0855f31e +0x7fc:  lea    0x0(,%eax,8),%edx
0855f325 +0x803:  sub    %eax,%edx
0855f327 +0x805:  mov    %ecx,%eax
0855f329 +0x807:  mov    %eax,%ecx
0855f32b +0x809:  shl    $0x4,%ecx
0855f32e +0x80c:  lea    0x0(,%ecx,8),%eax
0855f335 +0x813:  sub    %ecx,%eax
0855f337 +0x815:  lea    (%edx,%eax,1),%eax
0855f33a +0x818:  lea    (%ebx,%eax,1),%eax
0855f33d +0x81b:  add    $0x24,%eax
0855f340 +0x81e:  mov    (%eax),%eax
0855f342 +0x820:  test   %eax,%eax
0855f344 +0x822:  je     0855f50d <+0x9eb>
0855f34a +0x828:  mov    -0x3c(%ebp),%ecx
0855f34d +0x82b:  mov    -0x20(%ebp),%eax
0855f350 +0x82e:  mov    0x8(%ebp),%ebx
0855f353 +0x831:  shl    $0x2,%eax
0855f356 +0x834:  lea    0x0(,%eax,8),%edx
0855f35d +0x83b:  sub    %eax,%edx
0855f35f +0x83d:  mov    %ecx,%eax
0855f361 +0x83f:  mov    %eax,%ecx
0855f363 +0x841:  shl    $0x4,%ecx
0855f366 +0x844:  lea    0x0(,%ecx,8),%eax
0855f36d +0x84b:  sub    %ecx,%eax
0855f36f +0x84d:  lea    (%edx,%eax,1),%eax
0855f372 +0x850:  lea    (%ebx,%eax,1),%eax
0855f375 +0x853:  add    $0x24,%eax
0855f378 +0x856:  mov    (%eax),%eax
0855f37a +0x858:  mov    %eax,(%esp)
0855f37d +0x85b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0855f382 +0x860:  test   %eax,%eax
0855f384 +0x862:  sete   %al
0855f387 +0x865:  test   %al,%al
0855f389 +0x867:  jne    0855f510 <+0x9ee>
0855f38f +0x86d:  lea    -0x1d8(%ebp),%ebx
0855f395 +0x873:  mov    $0x0,%eax
0855f39a +0x878:  mov    $0x40,%edx
0855f39f +0x87d:  mov    %ebx,%edi
0855f3a1 +0x87f:  mov    %edx,%ecx
0855f3a3 +0x881:  rep stos %eax,%es:(%edi)
0855f3a5 +0x883:  movl   $0x0,0xc(%esp)
0855f3ad +0x88b:  movl   $"school_green_badge_msg",0x8(%esp)
0855f3b5 +0x893:  movl   $0x4,0x4(%esp)
0855f3bd +0x89b:  movl   $&g_scriptStringManager_,(%esp)
0855f3c4 +0x8a2:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0855f3c9 +0x8a7:  movl   $0x1,0xc(%esp)
0855f3d1 +0x8af:  mov    %eax,0x8(%esp)
0855f3d5 +0x8b3:  movl   $0xff,0x4(%esp)
0855f3dd +0x8bb:  lea    -0x1d8(%ebp),%eax
0855f3e3 +0x8c1:  mov    %eax,(%esp)
0855f3e6 +0x8c4:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0855f3eb +0x8c9:  lea    -0x50(%ebp),%eax
0855f3ee +0x8cc:  mov    %eax,(%esp)
0855f3f1 +0x8cf:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855f3f6 +0x8d4:  movl   $0xc,0x8(%esp)
0855f3fe +0x8dc:  movl   $0x0,0x4(%esp)
0855f406 +0x8e4:  lea    -0x50(%ebp),%eax
0855f409 +0x8e7:  mov    %eax,(%esp)
0855f40c +0x8ea:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855f411 +0x8ef:  movl   $0x0,0x4(%esp)
0855f419 +0x8f7:  lea    -0x50(%ebp),%eax
0855f41c +0x8fa:  mov    %eax,(%esp)
0855f41f +0x8fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855f424 +0x902:  movl   $0x0,0x4(%esp)
0855f42c +0x90a:  lea    -0x50(%ebp),%eax
0855f42f +0x90d:  mov    %eax,(%esp)
0855f432 +0x910:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0855f437 +0x915:  movl   $0x0,0x4(%esp)
0855f43f +0x91d:  lea    -0x50(%ebp),%eax
0855f442 +0x920:  mov    %eax,(%esp)
0855f445 +0x923:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855f44a +0x928:  lea    -0x1d8(%ebp),%eax
0855f450 +0x92e:  mov    %eax,(%esp)
0855f453 +0x931:  call   0807e3b0 <_init+0xca8>
0855f458 +0x936:  mov    %eax,0x4(%esp)
0855f45c +0x93a:  lea    -0x50(%ebp),%eax
0855f45f +0x93d:  mov    %eax,(%esp)
0855f462 +0x940:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0855f467 +0x945:  lea    -0x1d8(%ebp),%eax
0855f46d +0x94b:  mov    %eax,(%esp)
0855f470 +0x94e:  call   0807e3b0 <_init+0xca8>
0855f475 +0x953:  mov    %eax,0x8(%esp)
0855f479 +0x957:  lea    -0x1d8(%ebp),%eax
0855f47f +0x95d:  mov    %eax,0x4(%esp)
0855f483 +0x961:  lea    -0x50(%ebp),%eax
0855f486 +0x964:  mov    %eax,(%esp)
0855f489 +0x967:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0855f48e +0x96c:  movl   $0x1,0x4(%esp)
0855f496 +0x974:  lea    -0x50(%ebp),%eax
0855f499 +0x977:  mov    %eax,(%esp)
0855f49c +0x97a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855f4a1 +0x97f:  mov    -0x3c(%ebp),%ecx
0855f4a4 +0x982:  mov    -0x20(%ebp),%eax
0855f4a7 +0x985:  mov    0x8(%ebp),%ebx
0855f4aa +0x988:  shl    $0x2,%eax
0855f4ad +0x98b:  lea    0x0(,%eax,8),%edx
0855f4b4 +0x992:  sub    %eax,%edx
0855f4b6 +0x994:  mov    %ecx,%eax
0855f4b8 +0x996:  mov    %eax,%ecx
0855f4ba +0x998:  shl    $0x4,%ecx
0855f4bd +0x99b:  lea    0x0(,%ecx,8),%eax
0855f4c4 +0x9a2:  sub    %ecx,%eax
0855f4c6 +0x9a4:  lea    (%edx,%eax,1),%eax
0855f4c9 +0x9a7:  lea    (%ebx,%eax,1),%eax
0855f4cc +0x9aa:  add    $0x24,%eax
0855f4cf +0x9ad:  mov    (%eax),%eax
0855f4d1 +0x9af:  lea    -0x50(%ebp),%edx
0855f4d4 +0x9b2:  mov    %edx,0x4(%esp)
0855f4d8 +0x9b6:  mov    %eax,(%esp)
0855f4db +0x9b9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855f4e0 +0x9be:  jmp    0855f4fd <+0x9db>
0855f4e2 +0x9c0:  mov    %edx,%ebx
0855f4e4 +0x9c2:  mov    %eax,%esi
0855f4e6 +0x9c4:  lea    -0x50(%ebp),%eax
0855f4e9 +0x9c7:  mov    %eax,(%esp)
0855f4ec +0x9ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855f4f1 +0x9cf:  mov    %esi,%eax
0855f4f3 +0x9d1:  mov    %ebx,%edx
0855f4f5 +0x9d3:  mov    %eax,(%esp)
0855f4f8 +0x9d6:  call   08ae3750 <_Unwind_Resume>
0855f4fd +0x9db:  lea    -0x50(%ebp),%eax
0855f500 +0x9de:  mov    %eax,(%esp)
0855f503 +0x9e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855f508 +0x9e6:  jmp    0855f511 <+0x9ef>
0855f50a +0x9e8:  nop
0855f50b +0x9e9:  jmp    0855f511 <+0x9ef>
0855f50d +0x9eb:  nop
0855f50e +0x9ec:  jmp    0855f511 <+0x9ef>
0855f510 +0x9ee:  nop
0855f511 +0x9ef:  addl   $0x1,-0x20(%ebp)
0855f515 +0x9f3:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f51c +0x9fa:  movzbl %al,%eax
0855f51f +0x9fd:  cmp    -0x20(%ebp),%eax
0855f522 +0xa00:  setg   %al
0855f525 +0xa03:  test   %al,%al
0855f527 +0xa05:  jne    0855f057 <+0x535>
0855f52d +0xa0b:  movl   $0x0,-0x20(%ebp)
0855f534 +0xa12:  jmp    0855f6e0 <+0xbbe>
0855f539 +0xa17:  mov    -0x20(%ebp),%eax
0855f53c +0xa1a:  mov    0x8(%ebp),%ecx
0855f53f +0xa1d:  lea    0x0(,%eax,4),%edx
0855f546 +0xa24:  lea    0x0(,%edx,8),%eax
0855f54d +0xa2b:  sub    %edx,%eax
0855f54f +0xa2d:  lea    (%ecx,%eax,1),%eax
0855f552 +0xa30:  sub    $0xffffff80,%eax
0855f555 +0xa33:  movzbl 0x18(%eax),%eax
0855f559 +0xa37:  test   %al,%al
0855f55b +0xa39:  je     0855f6dc <+0xbba>
0855f561 +0xa3f:  mov    -0x20(%ebp),%eax
0855f564 +0xa42:  mov    0x8(%ebp),%ecx
0855f567 +0xa45:  lea    0x0(,%eax,4),%edx
0855f56e +0xa4c:  lea    0x0(,%edx,8),%eax
0855f575 +0xa53:  sub    %edx,%eax
0855f577 +0xa55:  lea    (%ecx,%eax,1),%eax
0855f57a +0xa58:  add    $0x94,%eax
0855f57f +0xa5d:  mov    (%eax),%eax
0855f581 +0xa5f:  test   %eax,%eax
0855f583 +0xa61:  je     0855f6dc <+0xbba>
0855f589 +0xa67:  mov    -0x3c(%ebp),%edi
0855f58c +0xa6a:  mov    -0x20(%ebp),%ebx
0855f58f +0xa6d:  mov    -0x3c(%ebp),%ecx
0855f592 +0xa70:  mov    -0x20(%ebp),%eax
0855f595 +0xa73:  mov    0x8(%ebp),%esi
0855f598 +0xa76:  shl    $0x2,%eax
0855f59b +0xa79:  lea    0x0(,%eax,8),%edx
0855f5a2 +0xa80:  sub    %eax,%edx
0855f5a4 +0xa82:  mov    %ecx,%eax
0855f5a6 +0xa84:  mov    %eax,%ecx
0855f5a8 +0xa86:  shl    $0x4,%ecx
0855f5ab +0xa89:  lea    0x0(,%ecx,8),%eax
0855f5b2 +0xa90:  sub    %ecx,%eax
0855f5b4 +0xa92:  lea    (%edx,%eax,1),%eax
0855f5b7 +0xa95:  lea    (%esi,%eax,1),%eax
0855f5ba +0xa98:  add    $0x24,%eax
0855f5bd +0xa9b:  mov    (%eax),%eax
0855f5bf +0xa9d:  movl   $0x0,0x4(%esp)
0855f5c7 +0xaa5:  mov    %eax,(%esp)
0855f5ca +0xaa8:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855f5cf +0xaad:  mov    %eax,%esi
0855f5d1 +0xaaf:  mov    %ebx,%eax
0855f5d3 +0xab1:  add    %eax,%eax
0855f5d5 +0xab3:  add    %ebx,%eax
0855f5d7 +0xab5:  mov    %edi,%edx
0855f5d9 +0xab7:  lea    0x0(,%edx,8),%ecx
0855f5e0 +0xabe:  lea    0x0(,%ecx,8),%edx
0855f5e7 +0xac5:  sub    %ecx,%edx
0855f5e9 +0xac7:  add    %edx,%eax
0855f5eb +0xac9:  lea    -0x18(%ebp),%edx
0855f5ee +0xacc:  lea    (%edx,%eax,1),%eax
0855f5f1 +0xacf:  sub    $0xb0,%eax
0855f5f6 +0xad4:  mov    %esi,%ecx
0855f5f8 +0xad6:  mov    %cl,(%eax)
0855f5fa +0xad8:  mov    -0x3c(%ebp),%edi
0855f5fd +0xadb:  mov    -0x20(%ebp),%ebx
0855f600 +0xade:  mov    -0x3c(%ebp),%ecx
0855f603 +0xae1:  mov    -0x20(%ebp),%eax
0855f606 +0xae4:  mov    0x8(%ebp),%esi
0855f609 +0xae7:  shl    $0x2,%eax
0855f60c +0xaea:  lea    0x0(,%eax,8),%edx
0855f613 +0xaf1:  sub    %eax,%edx
0855f615 +0xaf3:  mov    %ecx,%eax
0855f617 +0xaf5:  mov    %eax,%ecx
0855f619 +0xaf7:  shl    $0x4,%ecx
0855f61c +0xafa:  lea    0x0(,%ecx,8),%eax
0855f623 +0xb01:  sub    %ecx,%eax
0855f625 +0xb03:  lea    (%edx,%eax,1),%eax
0855f628 +0xb06:  lea    (%esi,%eax,1),%eax
0855f62b +0xb09:  add    $0x24,%eax
0855f62e +0xb0c:  mov    (%eax),%eax
0855f630 +0xb0e:  movl   $0x1,0x4(%esp)
0855f638 +0xb16:  mov    %eax,(%esp)
0855f63b +0xb19:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855f640 +0xb1e:  mov    %eax,%esi
0855f642 +0xb20:  mov    %ebx,%eax
0855f644 +0xb22:  add    %eax,%eax
0855f646 +0xb24:  add    %ebx,%eax
0855f648 +0xb26:  mov    %edi,%edx
0855f64a +0xb28:  lea    0x0(,%edx,8),%ecx
0855f651 +0xb2f:  lea    0x0(,%ecx,8),%edx
0855f658 +0xb36:  sub    %ecx,%edx
0855f65a +0xb38:  add    %edx,%eax
0855f65c +0xb3a:  lea    -0x18(%ebp),%edi
0855f65f +0xb3d:  lea    (%edi,%eax,1),%eax
0855f662 +0xb40:  sub    $0xaf,%eax
0855f667 +0xb45:  mov    %esi,%edx
0855f669 +0xb47:  mov    %dl,(%eax)
0855f66b +0xb49:  mov    -0x3c(%ebp),%edi
0855f66e +0xb4c:  mov    -0x20(%ebp),%ebx
0855f671 +0xb4f:  mov    -0x3c(%ebp),%ecx
0855f674 +0xb52:  mov    -0x20(%ebp),%eax
0855f677 +0xb55:  mov    0x8(%ebp),%esi
0855f67a +0xb58:  shl    $0x2,%eax
0855f67d +0xb5b:  lea    0x0(,%eax,8),%edx
0855f684 +0xb62:  sub    %eax,%edx
0855f686 +0xb64:  mov    %ecx,%eax
0855f688 +0xb66:  mov    %eax,%ecx
0855f68a +0xb68:  shl    $0x4,%ecx
0855f68d +0xb6b:  lea    0x0(,%ecx,8),%eax
0855f694 +0xb72:  sub    %ecx,%eax
0855f696 +0xb74:  lea    (%edx,%eax,1),%eax
0855f699 +0xb77:  lea    (%esi,%eax,1),%eax
0855f69c +0xb7a:  add    $0x24,%eax
0855f69f +0xb7d:  mov    (%eax),%eax
0855f6a1 +0xb7f:  movl   $0x2,0x4(%esp)
0855f6a9 +0xb87:  mov    %eax,(%esp)
0855f6ac +0xb8a:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855f6b1 +0xb8f:  mov    %eax,%esi
0855f6b3 +0xb91:  mov    %ebx,%eax
0855f6b5 +0xb93:  add    %eax,%eax
0855f6b7 +0xb95:  add    %ebx,%eax
0855f6b9 +0xb97:  mov    %edi,%edx
0855f6bb +0xb99:  lea    0x0(,%edx,8),%ecx
0855f6c2 +0xba0:  lea    0x0(,%ecx,8),%edx
0855f6c9 +0xba7:  sub    %ecx,%edx
0855f6cb +0xba9:  add    %edx,%eax
0855f6cd +0xbab:  lea    -0x18(%ebp),%ecx
0855f6d0 +0xbae:  lea    (%ecx,%eax,1),%eax
0855f6d3 +0xbb1:  sub    $0xae,%eax
0855f6d8 +0xbb6:  mov    %esi,%edx
0855f6da +0xbb8:  mov    %dl,(%eax)
0855f6dc +0xbba:  addl   $0x1,-0x20(%ebp)
0855f6e0 +0xbbe:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f6e7 +0xbc5:  movzbl %al,%eax
0855f6ea +0xbc8:  cmp    -0x20(%ebp),%eax
0855f6ed +0xbcb:  setg   %al
0855f6f0 +0xbce:  test   %al,%al
0855f6f2 +0xbd0:  jne    0855f539 <+0xa17>
0855f6f8 +0xbd6:  addl   $0x1,-0x3c(%ebp)
0855f6fc +0xbda:  cmpl   $0x1,-0x3c(%ebp)
0855f700 +0xbde:  setle  %al
0855f703 +0xbe1:  test   %al,%al
0855f705 +0xbe3:  jne    0855efd3 <+0x4b1>
0855f70b +0xbe9:  movl   $0x0,-0x44(%ebp)
0855f712 +0xbf0:  movl   $0x0,-0x40(%ebp)
0855f719 +0xbf7:  movl   $0x0,-0x1c(%ebp)
0855f720 +0xbfe:  jmp    0855f885 <+0xd63>
0855f725 +0xc03:  movl   $0x0,-0x3c(%ebp)
0855f72c +0xc0a:  jmp    0855f769 <+0xc47>
0855f72e +0xc0c:  mov    -0x3c(%ebp),%ebx
0855f731 +0xc0f:  mov    -0x3c(%ebp),%ecx
0855f734 +0xc12:  mov    -0x1c(%ebp),%eax
0855f737 +0xc15:  mov    0x8(%ebp),%esi
0855f73a +0xc18:  shl    $0x2,%eax
0855f73d +0xc1b:  lea    0x0(,%eax,8),%edx
0855f744 +0xc22:  sub    %eax,%edx
0855f746 +0xc24:  mov    %ecx,%eax
0855f748 +0xc26:  mov    %eax,%ecx
0855f74a +0xc28:  shl    $0x4,%ecx
0855f74d +0xc2b:  lea    0x0(,%ecx,8),%eax
0855f754 +0xc32:  sub    %ecx,%eax
0855f756 +0xc34:  lea    (%edx,%eax,1),%eax
0855f759 +0xc37:  lea    (%esi,%eax,1),%eax
0855f75c +0xc3a:  add    $0x20,%eax
0855f75f +0xc3d:  mov    (%eax),%eax
0855f761 +0xc3f:  mov    %eax,-0x44(%ebp,%ebx,4)
0855f765 +0xc43:  addl   $0x1,-0x3c(%ebp)
0855f769 +0xc47:  cmpl   $0x1,-0x3c(%ebp)
0855f76d +0xc4b:  setle  %al
0855f770 +0xc4e:  test   %al,%al
0855f772 +0xc50:  jne    0855f72e <+0xc0c>
0855f774 +0xc52:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
0855f779 +0xc57:  mov    %eax,0xc(%esp)
0855f77d +0xc5b:  mov    -0x38(%ebp),%eax
0855f780 +0xc5e:  mov    %eax,0x8(%esp)
0855f784 +0xc62:  lea    -0x44(%ebp),%eax
0855f787 +0xc65:  add    $0x4,%eax
0855f78a +0xc68:  mov    %eax,0x4(%esp)
0855f78e +0xc6c:  lea    -0x44(%ebp),%eax
0855f791 +0xc6f:  mov    %eax,(%esp)
0855f794 +0xc72:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
0855f799 +0xc77:  movl   $0x0,-0x3c(%ebp)
0855f7a0 +0xc7e:  jmp    0855f872 <+0xd50>
0855f7a5 +0xc83:  mov    -0x3c(%ebp),%ecx
0855f7a8 +0xc86:  mov    -0x1c(%ebp),%eax
0855f7ab +0xc89:  mov    0x8(%ebp),%ebx
0855f7ae +0xc8c:  shl    $0x2,%eax
0855f7b1 +0xc8f:  lea    0x0(,%eax,8),%edx
0855f7b8 +0xc96:  sub    %eax,%edx
0855f7ba +0xc98:  mov    %ecx,%eax
0855f7bc +0xc9a:  mov    %eax,%ecx
0855f7be +0xc9c:  shl    $0x4,%ecx
0855f7c1 +0xc9f:  lea    0x0(,%ecx,8),%eax
0855f7c8 +0xca6:  sub    %ecx,%eax
0855f7ca +0xca8:  lea    (%edx,%eax,1),%eax
0855f7cd +0xcab:  lea    (%ebx,%eax,1),%eax
0855f7d0 +0xcae:  add    $0x10,%eax
0855f7d3 +0xcb1:  movzbl 0x18(%eax),%eax
0855f7d7 +0xcb5:  test   %al,%al
0855f7d9 +0xcb7:  je     0855f81e <+0xcfc>
0855f7db +0xcb9:  mov    -0x3c(%ebp),%eax
0855f7de +0xcbc:  mov    -0x44(%ebp,%eax,4),%ebx
0855f7e2 +0xcc0:  mov    -0x3c(%ebp),%ecx
0855f7e5 +0xcc3:  mov    -0x1c(%ebp),%eax
0855f7e8 +0xcc6:  mov    0x8(%ebp),%esi
0855f7eb +0xcc9:  shl    $0x2,%eax
0855f7ee +0xccc:  lea    0x0(,%eax,8),%edx
0855f7f5 +0xcd3:  sub    %eax,%edx
0855f7f7 +0xcd5:  mov    %ecx,%eax
0855f7f9 +0xcd7:  mov    %eax,%ecx
0855f7fb +0xcd9:  shl    $0x4,%ecx
0855f7fe +0xcdc:  lea    0x0(,%ecx,8),%eax
0855f805 +0xce3:  sub    %ecx,%eax
0855f807 +0xce5:  lea    (%edx,%eax,1),%eax
0855f80a +0xce8:  lea    (%esi,%eax,1),%eax
0855f80d +0xceb:  add    $0x24,%eax
0855f810 +0xcee:  mov    (%eax),%eax
0855f812 +0xcf0:  mov    %ebx,0x4(%esp)
0855f816 +0xcf4:  mov    %eax,(%esp)
0855f819 +0xcf7:  call   08568e9c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x866>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x866
0855f81e +0xcfc:  mov    -0x3c(%ebp),%esi
0855f821 +0xcff:  mov    -0x1c(%ebp),%ebx
0855f824 +0xd02:  mov    -0x3c(%ebp),%ecx
0855f827 +0xd05:  mov    -0x1c(%ebp),%eax
0855f82a +0xd08:  mov    0x8(%ebp),%edi
0855f82d +0xd0b:  shl    $0x2,%eax
0855f830 +0xd0e:  lea    0x0(,%eax,8),%edx
0855f837 +0xd15:  sub    %eax,%edx
0855f839 +0xd17:  mov    %ecx,%eax
0855f83b +0xd19:  mov    %eax,%ecx
0855f83d +0xd1b:  shl    $0x4,%ecx
0855f840 +0xd1e:  lea    0x0(,%ecx,8),%eax
0855f847 +0xd25:  sub    %ecx,%eax
0855f849 +0xd27:  lea    (%edx,%eax,1),%eax
0855f84c +0xd2a:  lea    (%edi,%eax,1),%eax
0855f84f +0xd2d:  add    $0x1c,%eax
0855f852 +0xd30:  mov    (%eax),%ecx
0855f854 +0xd32:  mov    %esi,%eax
0855f856 +0xd34:  lea    (%eax,%eax,1),%edx
0855f859 +0xd37:  lea    0x0(,%edx,8),%eax
0855f860 +0xd3e:  sub    %edx,%eax
0855f862 +0xd40:  add    %ebx,%eax
0855f864 +0xd42:  add    $0xc,%eax
0855f867 +0xd45:  mov    %ecx,-0xd0(%ebp,%eax,4)
0855f86e +0xd4c:  addl   $0x1,-0x3c(%ebp)
0855f872 +0xd50:  cmpl   $0x1,-0x3c(%ebp)
0855f876 +0xd54:  setle  %al
0855f879 +0xd57:  test   %al,%al
0855f87b +0xd59:  jne    0855f7a5 <+0xc83>
0855f881 +0xd5f:  addl   $0x1,-0x1c(%ebp)
0855f885 +0xd63:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f88c +0xd6a:  movzbl %al,%eax
0855f88f +0xd6d:  cmp    -0x1c(%ebp),%eax
0855f892 +0xd70:  seta   %al
0855f895 +0xd73:  test   %al,%al
0855f897 +0xd75:  jne    0855f725 <+0xc03>
0855f89d +0xd7b:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855f8a4 +0xd82:  cmp    $0x1,%al
0855f8a6 +0xd84:  je     0855f8cc <+0xdaa>
0855f8a8 +0xd86:  lea    -0xd8(%ebp),%edx
0855f8ae +0xd8c:  mov    &_ZN10GlobalData14s_school_proxyE,%eax
0855f8b3 +0xd91:  movl   $0x80,0x8(%esp)
0855f8bb +0xd99:  mov    %edx,0x4(%esp)
0855f8bf +0xd9d:  mov    %eax,(%esp)
0855f8c2 +0xda0:  call   08471ed2 <_ZN18CSchoolServerProxy10SendPacketEPci>  ; CSchoolServerProxy::SendPacket(char*, int)
0855f8c7 +0xda5:  jmp    0855f99f <+0xe7d>
0855f8cc +0xdaa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0855f8d1 +0xdaf:  movl   $0x4a8,0x8(%esp)
0855f8d9 +0xdb7:  movl   $"MatchingSystem.cpp",0x4(%esp)
0855f8e1 +0xdbf:  mov    %eax,(%esp)
0855f8e4 +0xdc2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0855f8e9 +0xdc7:  movl   $0x1,0x8(%esp)
0855f8f1 +0xdcf:  mov    %eax,0x4(%esp)
0855f8f5 +0xdd3:  lea    -0x58(%ebp),%eax
0855f8f8 +0xdd6:  mov    %eax,(%esp)
0855f8fb +0xdd9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0855f900 +0xdde:  lea    -0x58(%ebp),%eax
0855f903 +0xde1:  mov    %eax,(%esp)
0855f906 +0xde4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855f90b +0xde9:  movl   $0x136,0x4(%esp)
0855f913 +0xdf1:  mov    %eax,(%esp)
0855f916 +0xdf4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855f91b +0xdf9:  lea    -0x58(%ebp),%eax
0855f91e +0xdfc:  mov    %eax,(%esp)
0855f921 +0xdff:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855f926 +0xe04:  movl   $0xffffffff,0x4(%esp)
0855f92e +0xe0c:  mov    %eax,(%esp)
0855f931 +0xe0f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855f936 +0xe14:  lea    -0x58(%ebp),%eax
0855f939 +0xe17:  mov    %eax,(%esp)
0855f93c +0xe1a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0855f941 +0xe1f:  movl   $0x80,0x8(%esp)
0855f949 +0xe27:  lea    -0xd8(%ebp),%edx
0855f94f +0xe2d:  mov    %edx,0x4(%esp)
0855f953 +0xe31:  mov    %eax,(%esp)
0855f956 +0xe34:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0855f95b +0xe39:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0855f960 +0xe3e:  lea    -0x58(%ebp),%edx
0855f963 +0xe41:  mov    %edx,0x8(%esp)
0855f967 +0xe45:  movl   $0x2,0x4(%esp)
0855f96f +0xe4d:  mov    %eax,(%esp)
0855f972 +0xe50:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0855f977 +0xe55:  jmp    0855f994 <+0xe72>
0855f979 +0xe57:  mov    %edx,%ebx
0855f97b +0xe59:  mov    %eax,%esi
0855f97d +0xe5b:  lea    -0x58(%ebp),%eax
0855f980 +0xe5e:  mov    %eax,(%esp)
0855f983 +0xe61:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855f988 +0xe66:  mov    %esi,%eax
0855f98a +0xe68:  mov    %ebx,%edx
0855f98c +0xe6a:  mov    %eax,(%esp)
0855f98f +0xe6d:  call   08ae3750 <_Unwind_Resume>
0855f994 +0xe72:  lea    -0x58(%ebp),%eax
0855f997 +0xe75:  mov    %eax,(%esp)
0855f99a +0xe78:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855f99f +0xe7d:  add    $0x1fc,%esp
0855f9a5 +0xe83:  pop    %ebx
0855f9a6 +0xe84:  pop    %esi
0855f9a7 +0xe85:  pop    %edi
0855f9a8 +0xe86:  pop    %ebp
0855f9a9 +0xe87:  ret
```

## 反编译 C

```c
// CLeagueMatch::OnReward @ 0x855eb22

/* WARNING: Type propagation algorithm not settling */
/* CLeagueMatch::OnReward(PvP_Room*, int, bool) */

void __thiscall
CLeagueMatch::OnReward(CLeagueMatch *this,PvP_Room *param_1,int param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  byte bVar9;
  char local_1dc [256];
  Packet_PvPResult local_dc [8];
  undefined1 auStack_d4 [6];
  undefined1 local_ce;
  byte local_cd;
  undefined1 auStack_cc [12];
  char acStack_c0 [12];
  uint auStack_b4 [11];
  undefined1 auStack_87 [43];
  CStreamGuard local_5c [8];
  PacketGuard local_54 [12];
  float local_48 [2];
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar9 = 0;
  Packet_PvPResult::Packet_PvPResult(local_dc);
  for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
    for (local_38 = 0; local_38 < (int)(uint)nPlayerCountPerOneTeam_; local_38 = local_38 + 1) {
      for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
        auStack_cc[local_34 + local_38 * 3 + local_40 * 0x38] =
             (char)*(undefined2 *)
                    (this + (local_38 * 0xe + local_40 * 0x38 + local_34 + 0x10) * 2 + 0x10);
        acStack_c0[local_34 + local_38 * 3 + local_40 * 0x38] = '\0';
      }
    }
  }
  if (param_3) {
    local_3c = 1;
    for (local_30 = 0; local_30 < (int)(uint)nPlayerCountPerOneTeam_; local_30 = local_30 + 1) {
      acStack_c0[local_30 * 3 + 1] = '\0';
      addBadge(this,this + local_30 * 0x1c + 0x1c,2,acStack_c0 + local_30 * 3 + 2,0);
      auStack_87[local_30 * 3] = 0;
      addBadge(this,this + local_30 * 0x1c + 0x8c,2,auStack_87 + local_30 * 3 + 1,0);
    }
  }
  else if (param_2 == 1) {
    local_3c = 2;
    for (local_2c = 0; local_2c < (int)(uint)nPlayerCountPerOneTeam_; local_2c = local_2c + 1) {
      addBadge(this,this + local_2c * 0x1c + 0x1c,1,acStack_c0 + local_2c * 3 + 1,0);
      acStack_c0[local_2c * 3 + 2] = '\0';
      auStack_87[local_2c * 3] = 0;
      addBadge(this,this + local_2c * 0x1c + 0x8c,2,auStack_87 + local_2c * 3 + 1,0);
    }
  }
  else {
    local_3c = 0;
    for (local_28 = 0; local_28 < (int)(uint)nPlayerCountPerOneTeam_; local_28 = local_28 + 1) {
      acStack_c0[local_28 * 3 + 1] = '\0';
      addBadge(this,this + local_28 * 0x1c + 0x1c,2,acStack_c0 + local_28 * 3 + 2,0);
      addBadge(this,this + local_28 * 0x1c + 0x8c,1,auStack_87 + local_28 * 3,0);
      auStack_87[local_28 * 3 + 1] = 0;
    }
  }
  auStack_d4._2_4_ = PvPGlobalEnvironmentVariable::school_match_elo_k2_;
  local_ce = (char)local_3c;
  local_cd = nPlayerCountPerOneTeam_;
  for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
    for (local_24 = 0; local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      *(undefined4 *)(auStack_d4 + (local_40 * 0xe + local_24 + 8) * 4) =
           *(undefined4 *)(this + local_24 * 0x1c + local_40 * 0x70 + 0x2c);
    }
    for (local_24 = 0; local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      cVar2 = _getSameSchool(this,auStack_b4 + local_40 * 0xe,local_24,(uint)nPlayerCountPerOneTeam_
                             ,*(uint *)(auStack_d4 + (local_40 * 0xe + local_24 + 8) * 4));
      if (cVar2 == '\0') {
        acStack_c0[local_24 * 3 + local_40 * 0x38] = '\0';
        if ((((acStack_c0[local_24 * 3 + local_40 * 0x38 + 1] != '\0') ||
             (acStack_c0[local_24 * 3 + local_40 * 0x38 + 2] != '\0')) &&
            (this[local_24 * 0x1c + local_40 * 0x70 + 0x28] == (CLeagueMatch)0x1)) &&
           ((*(int *)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24) != 0 &&
            (iVar4 = CUserCharacInfo::getCurCharacR
                               (*(CUserCharacInfo **)
                                 (this + local_24 * 0x1c + local_40 * 0x70 + 0x24)), iVar4 != 0))))
        {
          pcVar5 = local_1dc;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
          }
          pcVar5 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_green_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_1dc,0xff,pcVar5,1);
          PacketGuard::PacketGuard(local_54);
                    /* try { // try from 0855f40c to 0855f4df has its CatchHandler @ 0855f4e2 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0xc);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_54,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
          sVar6 = strlen(local_1dc);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,sVar6);
          sVar6 = strlen(local_1dc);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,local_1dc,sVar6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
          CUser::Send(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),local_54);
          PacketGuard::~PacketGuard(local_54);
        }
      }
      else if ((acStack_c0[local_24 * 3 + local_40 * 0x38 + 1] == '\0') &&
              (acStack_c0[local_24 * 3 + local_40 * 0x38 + 2] == '\0')) {
        addBadge(this,this + local_24 * 0x1c + local_40 * 0x70 + 0x1c,0,
                 acStack_c0 + local_24 * 3 + local_40 * 0x38,0);
      }
      else {
        addBadge(this,this + local_24 * 0x1c + local_40 * 0x70 + 0x1c,0,
                 acStack_c0 + local_24 * 3 + local_40 * 0x38,1);
      }
    }
    for (local_24 = 0; iVar1 = local_24, iVar4 = local_40,
        local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      if ((this[local_24 * 0x1c + 0x98] != (CLeagueMatch)0x0) &&
         (*(int *)(this + local_24 * 0x1c + 0x94) != 0)) {
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),0)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38] = uVar3;
        iVar1 = local_24;
        iVar4 = local_40;
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),1)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38 + 1] = uVar3;
        iVar1 = local_24;
        iVar4 = local_40;
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),2)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38 + 2] = uVar3;
      }
    }
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  for (local_20 = 0; local_20 < nPlayerCountPerOneTeam_; local_20 = local_20 + 1) {
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      local_48[local_40] = *(float *)(this + local_20 * 0x1c + local_40 * 0x70 + 0x20);
    }
    CEloRating::calc(local_48,local_48 + 1,local_3c,
                     PvPGlobalEnvironmentVariable::school_match_elo_k_);
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      if (this[local_20 * 0x1c + local_40 * 0x70 + 0x28] != (CLeagueMatch)0x0) {
        CUser::UpdateRating(*(CUser **)(this + local_20 * 0x1c + local_40 * 0x70 + 0x24),
                            local_48[local_40]);
      }
      *(undefined4 *)(auStack_d4 + (local_40 * 0xe + local_20 + 0xc) * 4) =
           *(undefined4 *)(this + local_20 * 0x1c + local_40 * 0x70 + 0x1c);
    }
  }
  if (nPlayerCountPerOneTeam_ == 1) {
    pSVar7 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MatchingSystem.cpp",0x4a8);
    CStreamGuard::CStreamGuard(local_5c,pSVar7,true);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_5c);
                    /* try { // try from 0855f916 to 0855f976 has its CatchHandler @ 0855f979 */
    CStreamGuard::operator<<(pCVar8,0x136);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_5c);
    CStreamGuard::operator<<(pCVar8,-1);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_5c);
    CStreamGuard::put_binary(pCVar8,local_dc,0x80);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_5c);
    CStreamGuard::~CStreamGuard(local_5c);
  }
  else {
    CSchoolServerProxy::SendPacket(GlobalData::s_school_proxy,(char *)local_dc,0x80);
  }
  return;
}
```
