# VerifyMaze

`_ZNK8CDungeon10VerifyMazeERK10MazeScript`

`CDungeon::VerifyMaze(MazeScript const&) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834cb7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834cb7c  _ZNK8CDungeon10VerifyMazeERK10MazeScript
#           CDungeon::VerifyMaze(MazeScript const&) const
# range [0x0834cb7c, 0x0834d06b]
0834cb7c +0x000:  push   %ebp
0834cb7d +0x001:  mov    %esp,%ebp
0834cb7f +0x003:  push   %ebx
0834cb80 +0x004:  sub    $0x94,%esp
0834cb86 +0x00a:  mov    0xc(%ebp),%eax
0834cb89 +0x00d:  mov    (%eax),%eax
0834cb8b +0x00f:  cmp    $0x1,%eax
0834cb8e +0x012:  jne    0834cba5 <+0x29>
0834cb90 +0x014:  mov    0xc(%ebp),%eax
0834cb93 +0x017:  mov    0x4(%eax),%eax
0834cb96 +0x01a:  cmp    $0x1,%eax
0834cb99 +0x01d:  jne    0834cba5 <+0x29>
0834cb9b +0x01f:  mov    $0x1,%eax
0834cba0 +0x024:  jmp    0834d066 <+0x4ea>
0834cba5 +0x029:  mov    0xc(%ebp),%eax
0834cba8 +0x02c:  add    $0x14,%eax
0834cbab +0x02f:  mov    %eax,(%esp)
0834cbae +0x032:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834cbb3 +0x037:  test   %eax,%eax
0834cbb5 +0x039:  sete   %al
0834cbb8 +0x03c:  test   %al,%al
0834cbba +0x03e:  je     0834cc06 <+0x8a>
0834cbbc +0x040:  mov    0xc(%ebp),%eax
0834cbbf +0x043:  mov    0x64(%eax),%edx
0834cbc2 +0x046:  mov    0x8(%ebp),%eax
0834cbc5 +0x049:  mov    0x8(%eax),%eax
0834cbc8 +0x04c:  mov    %edx,0x18(%esp)
0834cbcc +0x050:  mov    %eax,0x14(%esp)
0834cbd0 +0x054:  movl   $"dungeon index(%d) maze(%d) has error. (Start positions were not declared!)",0x10(%esp)
0834cbd8 +0x05c:  movl   $0x83e,0xc(%esp)
0834cbe0 +0x064:  movl   $&_ZZNK8CDungeon10VerifyMazeERK10MazeScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834cbe8 +0x06c:  movl   $"data_manager.cpp",0x4(%esp)
0834cbf0 +0x074:  movl   $0x1,(%esp)
0834cbf7 +0x07b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834cbfc +0x080:  mov    $0x0,%eax
0834cc01 +0x085:  jmp    0834d066 <+0x4ea>
0834cc06 +0x08a:  movl   $0x0,-0x1c(%ebp)
0834cc0d +0x091:  jmp    0834ccc9 <+0x14d>
0834cc12 +0x096:  mov    0xc(%ebp),%eax
0834cc15 +0x099:  lea    0x14(%eax),%edx
0834cc18 +0x09c:  mov    -0x1c(%ebp),%eax
0834cc1b +0x09f:  mov    %eax,0x4(%esp)
0834cc1f +0x0a3:  mov    %edx,(%esp)
0834cc22 +0x0a6:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0834cc27 +0x0ab:  mov    0x4(%eax),%edx
0834cc2a +0x0ae:  mov    (%eax),%eax
0834cc2c +0x0b0:  mov    %eax,-0x54(%ebp)
0834cc2f +0x0b3:  mov    %edx,-0x50(%ebp)
0834cc32 +0x0b6:  mov    -0x50(%ebp),%edx
0834cc35 +0x0b9:  mov    -0x54(%ebp),%eax
0834cc38 +0x0bc:  mov    %edx,0x8(%esp)
0834cc3c +0x0c0:  mov    %eax,0x4(%esp)
0834cc40 +0x0c4:  mov    0xc(%ebp),%eax
0834cc43 +0x0c7:  mov    %eax,(%esp)
0834cc46 +0x0ca:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
0834cc4b +0x0cf:  mov    %eax,-0x18(%ebp)
0834cc4e +0x0d2:  mov    -0x18(%ebp),%eax
0834cc51 +0x0d5:  mov    (%eax),%edx
0834cc53 +0x0d7:  mov    %edx,%eax
0834cc55 +0x0d9:  shl    $0x2,%eax
0834cc58 +0x0dc:  add    %edx,%eax
0834cc5a +0x0de:  shl    $0x2,%eax
0834cc5d +0x0e1:  add    $0x60,%eax
0834cc60 +0x0e4:  add    0x8(%ebp),%eax
0834cc63 +0x0e7:  add    $0x4,%eax
0834cc66 +0x0ea:  mov    %eax,(%esp)
0834cc69 +0x0ed:  call   0838a2f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d98
0834cc6e +0x0f2:  test   %eax,%eax
0834cc70 +0x0f4:  sete   %al
0834cc73 +0x0f7:  test   %al,%al
0834cc75 +0x0f9:  je     0834ccc5 <+0x149>
0834cc77 +0x0fb:  mov    -0x50(%ebp),%ebx
0834cc7a +0x0fe:  mov    -0x54(%ebp),%ecx
0834cc7d +0x101:  mov    0xc(%ebp),%eax
0834cc80 +0x104:  mov    0x64(%eax),%edx
0834cc83 +0x107:  mov    0x8(%ebp),%eax
0834cc86 +0x10a:  mov    0x8(%eax),%eax
0834cc89 +0x10d:  mov    %ebx,0x20(%esp)
0834cc8d +0x111:  mov    %ecx,0x1c(%esp)
0834cc91 +0x115:  mov    %edx,0x18(%esp)
0834cc95 +0x119:  mov    %eax,0x14(%esp)
0834cc99 +0x11d:  movl   $"dungeon index(%d) maze(%d) has error. (Can't found start map(grid: %d,%d)!)",0x10(%esp)
0834cca1 +0x125:  movl   $0x847,0xc(%esp)
0834cca9 +0x12d:  movl   $&_ZZNK8CDungeon10VerifyMazeERK10MazeScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834ccb1 +0x135:  movl   $"data_manager.cpp",0x4(%esp)
0834ccb9 +0x13d:  movl   $0x1,(%esp)
0834ccc0 +0x144:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834ccc5 +0x149:  addl   $0x1,-0x1c(%ebp)
0834ccc9 +0x14d:  mov    0xc(%ebp),%eax
0834cccc +0x150:  add    $0x14,%eax
0834cccf +0x153:  mov    %eax,(%esp)
0834ccd2 +0x156:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834ccd7 +0x15b:  cmp    -0x1c(%ebp),%eax
0834ccda +0x15e:  seta   %al
0834ccdd +0x161:  test   %al,%al
0834ccdf +0x163:  jne    0834cc12 <+0x96>
0834cce5 +0x169:  mov    0xc(%ebp),%eax
0834cce8 +0x16c:  add    $0x20,%eax
0834cceb +0x16f:  mov    %eax,(%esp)
0834ccee +0x172:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834ccf3 +0x177:  test   %eax,%eax
0834ccf5 +0x179:  sete   %al
0834ccf8 +0x17c:  test   %al,%al
0834ccfa +0x17e:  je     0834cd46 <+0x1ca>
0834ccfc +0x180:  mov    0xc(%ebp),%eax
0834ccff +0x183:  mov    0x64(%eax),%edx
0834cd02 +0x186:  mov    0x8(%ebp),%eax
0834cd05 +0x189:  mov    0x8(%eax),%eax
0834cd08 +0x18c:  mov    %edx,0x18(%esp)
0834cd0c +0x190:  mov    %eax,0x14(%esp)
0834cd10 +0x194:  movl   $"dungeon index(%d) maze(%d) has error. (End positions were not declared!)",0x10(%esp)
0834cd18 +0x19c:  movl   $0x84e,0xc(%esp)
0834cd20 +0x1a4:  movl   $&_ZZNK8CDungeon10VerifyMazeERK10MazeScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834cd28 +0x1ac:  movl   $"data_manager.cpp",0x4(%esp)
0834cd30 +0x1b4:  movl   $0x1,(%esp)
0834cd37 +0x1bb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834cd3c +0x1c0:  mov    $0x0,%eax
0834cd41 +0x1c5:  jmp    0834d066 <+0x4ea>
0834cd46 +0x1ca:  movl   $0x0,-0x14(%ebp)
0834cd4d +0x1d1:  jmp    0834ce0a <+0x28e>
0834cd52 +0x1d6:  mov    0xc(%ebp),%eax
0834cd55 +0x1d9:  lea    0x20(%eax),%edx
0834cd58 +0x1dc:  mov    -0x14(%ebp),%eax
0834cd5b +0x1df:  mov    %eax,0x4(%esp)
0834cd5f +0x1e3:  mov    %edx,(%esp)
0834cd62 +0x1e6:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0834cd67 +0x1eb:  mov    0x4(%eax),%edx
0834cd6a +0x1ee:  mov    (%eax),%eax
0834cd6c +0x1f0:  mov    %eax,-0x5c(%ebp)
0834cd6f +0x1f3:  mov    %edx,-0x58(%ebp)
0834cd72 +0x1f6:  mov    -0x58(%ebp),%edx
0834cd75 +0x1f9:  mov    -0x5c(%ebp),%eax
0834cd78 +0x1fc:  mov    %edx,0x8(%esp)
0834cd7c +0x200:  mov    %eax,0x4(%esp)
0834cd80 +0x204:  mov    0xc(%ebp),%eax
0834cd83 +0x207:  mov    %eax,(%esp)
0834cd86 +0x20a:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
0834cd8b +0x20f:  mov    %eax,-0x10(%ebp)
0834cd8e +0x212:  mov    -0x10(%ebp),%eax
0834cd91 +0x215:  mov    (%eax),%edx
0834cd93 +0x217:  mov    %edx,%eax
0834cd95 +0x219:  add    %eax,%eax
0834cd97 +0x21b:  add    %edx,%eax
0834cd99 +0x21d:  shl    $0x3,%eax
0834cd9c +0x220:  add    $0x320,%eax
0834cda1 +0x225:  add    0x8(%ebp),%eax
0834cda4 +0x228:  add    $0x4,%eax
0834cda7 +0x22b:  mov    %eax,(%esp)
0834cdaa +0x22e:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834cdaf +0x233:  test   %eax,%eax
0834cdb1 +0x235:  sete   %al
0834cdb4 +0x238:  test   %al,%al
0834cdb6 +0x23a:  je     0834ce06 <+0x28a>
0834cdb8 +0x23c:  mov    -0x58(%ebp),%ebx
0834cdbb +0x23f:  mov    -0x5c(%ebp),%ecx
0834cdbe +0x242:  mov    0xc(%ebp),%eax
0834cdc1 +0x245:  mov    0x64(%eax),%edx
0834cdc4 +0x248:  mov    0x8(%ebp),%eax
0834cdc7 +0x24b:  mov    0x8(%eax),%eax
0834cdca +0x24e:  mov    %ebx,0x20(%esp)
0834cdce +0x252:  mov    %ecx,0x1c(%esp)
0834cdd2 +0x256:  mov    %edx,0x18(%esp)
0834cdd6 +0x25a:  mov    %eax,0x14(%esp)
0834cdda +0x25e:  movl   $"dungeon index(%d) maze(%d) has error. (Can't found boss map(grid: %d,%d)!",0x10(%esp)
0834cde2 +0x266:  movl   $0x857,0xc(%esp)
0834cdea +0x26e:  movl   $&_ZZNK8CDungeon10VerifyMazeERK10MazeScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834cdf2 +0x276:  movl   $"data_manager.cpp",0x4(%esp)
0834cdfa +0x27e:  movl   $0x1,(%esp)
0834ce01 +0x285:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834ce06 +0x28a:  addl   $0x1,-0x14(%ebp)
0834ce0a +0x28e:  mov    0xc(%ebp),%eax
0834ce0d +0x291:  add    $0x20,%eax
0834ce10 +0x294:  mov    %eax,(%esp)
0834ce13 +0x297:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834ce18 +0x29c:  cmp    -0x14(%ebp),%eax
0834ce1b +0x29f:  seta   %al
0834ce1e +0x2a2:  test   %al,%al
0834ce20 +0x2a4:  jne    0834cd52 <+0x1d6>
0834ce26 +0x2aa:  movl   $0x0,-0x60(%ebp)
0834ce2d +0x2b1:  jmp    0834d04c <+0x4d0>
0834ce32 +0x2b6:  movl   $0x0,-0x64(%ebp)
0834ce39 +0x2bd:  jmp    0834d02d <+0x4b1>
0834ce3e +0x2c2:  mov    -0x64(%ebp),%edx
0834ce41 +0x2c5:  mov    -0x60(%ebp),%eax
0834ce44 +0x2c8:  mov    %edx,0x8(%esp)
0834ce48 +0x2cc:  mov    %eax,0x4(%esp)
0834ce4c +0x2d0:  mov    0xc(%ebp),%eax
0834ce4f +0x2d3:  mov    %eax,(%esp)
0834ce52 +0x2d6:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
0834ce57 +0x2db:  mov    %eax,-0xc(%ebp)
0834ce5a +0x2de:  mov    -0xc(%ebp),%eax
0834ce5d +0x2e1:  mov    (%eax),%eax
0834ce5f +0x2e3:  test   %eax,%eax
0834ce61 +0x2e5:  je     0834d01d <+0x4a1>
0834ce67 +0x2eb:  mov    0xc(%ebp),%eax
0834ce6a +0x2ee:  lea    0x14(%eax),%edx
0834ce6d +0x2f1:  lea    -0x4c(%ebp),%eax
0834ce70 +0x2f4:  mov    %edx,0x4(%esp)
0834ce74 +0x2f8:  mov    %eax,(%esp)
0834ce77 +0x2fb:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834ce7c +0x300:  sub    $0x4,%esp
0834ce7f +0x303:  lea    -0x64(%ebp),%eax
0834ce82 +0x306:  mov    %eax,0x8(%esp)
0834ce86 +0x30a:  lea    -0x60(%ebp),%eax
0834ce89 +0x30d:  mov    %eax,0x4(%esp)
0834ce8d +0x311:  lea    -0x44(%ebp),%eax
0834ce90 +0x314:  mov    %eax,(%esp)
0834ce93 +0x317:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
0834ce98 +0x31c:  mov    0xc(%ebp),%eax
0834ce9b +0x31f:  lea    0x14(%eax),%edx
0834ce9e +0x322:  lea    -0x3c(%ebp),%eax
0834cea1 +0x325:  mov    %edx,0x4(%esp)
0834cea5 +0x329:  mov    %eax,(%esp)
0834cea8 +0x32c:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834cead +0x331:  sub    $0x4,%esp
0834ceb0 +0x334:  mov    0xc(%ebp),%eax
0834ceb3 +0x337:  lea    0x14(%eax),%edx
0834ceb6 +0x33a:  lea    -0x38(%ebp),%eax
0834ceb9 +0x33d:  mov    %edx,0x4(%esp)
0834cebd +0x341:  mov    %eax,(%esp)
0834cec0 +0x344:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0834cec5 +0x349:  sub    $0x4,%esp
0834cec8 +0x34c:  lea    -0x48(%ebp),%eax
0834cecb +0x34f:  lea    -0x44(%ebp),%edx
0834cece +0x352:  mov    %edx,0xc(%esp)
0834ced2 +0x356:  mov    -0x3c(%ebp),%edx
0834ced5 +0x359:  mov    %edx,0x8(%esp)
0834ced9 +0x35d:  mov    -0x38(%ebp),%edx
0834cedc +0x360:  mov    %edx,0x4(%esp)
0834cee0 +0x364:  mov    %eax,(%esp)
0834cee3 +0x367:  call   08238027 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd6d1>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd6d1
0834cee8 +0x36c:  sub    $0x4,%esp
0834ceeb +0x36f:  lea    -0x4c(%ebp),%eax
0834ceee +0x372:  mov    %eax,0x4(%esp)
0834cef2 +0x376:  lea    -0x48(%ebp),%eax
0834cef5 +0x379:  mov    %eax,(%esp)
0834cef8 +0x37c:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0834cefd +0x381:  test   %al,%al
0834ceff +0x383:  jne    0834d020 <+0x4a4>
0834cf05 +0x389:  mov    0xc(%ebp),%eax
0834cf08 +0x38c:  lea    0x20(%eax),%edx
0834cf0b +0x38f:  lea    -0x34(%ebp),%eax
0834cf0e +0x392:  mov    %edx,0x4(%esp)
0834cf12 +0x396:  mov    %eax,(%esp)
0834cf15 +0x399:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834cf1a +0x39e:  sub    $0x4,%esp
0834cf1d +0x3a1:  lea    -0x64(%ebp),%eax
0834cf20 +0x3a4:  mov    %eax,0x8(%esp)
0834cf24 +0x3a8:  lea    -0x60(%ebp),%eax
0834cf27 +0x3ab:  mov    %eax,0x4(%esp)
0834cf2b +0x3af:  lea    -0x2c(%ebp),%eax
0834cf2e +0x3b2:  mov    %eax,(%esp)
0834cf31 +0x3b5:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
0834cf36 +0x3ba:  mov    0xc(%ebp),%eax
0834cf39 +0x3bd:  lea    0x20(%eax),%edx
0834cf3c +0x3c0:  lea    -0x24(%ebp),%eax
0834cf3f +0x3c3:  mov    %edx,0x4(%esp)
0834cf43 +0x3c7:  mov    %eax,(%esp)
0834cf46 +0x3ca:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834cf4b +0x3cf:  sub    $0x4,%esp
0834cf4e +0x3d2:  mov    0xc(%ebp),%eax
0834cf51 +0x3d5:  lea    0x20(%eax),%edx
0834cf54 +0x3d8:  lea    -0x20(%ebp),%eax
0834cf57 +0x3db:  mov    %edx,0x4(%esp)
0834cf5b +0x3df:  mov    %eax,(%esp)
0834cf5e +0x3e2:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0834cf63 +0x3e7:  sub    $0x4,%esp
0834cf66 +0x3ea:  lea    -0x30(%ebp),%eax
0834cf69 +0x3ed:  lea    -0x2c(%ebp),%edx
0834cf6c +0x3f0:  mov    %edx,0xc(%esp)
0834cf70 +0x3f4:  mov    -0x24(%ebp),%edx
0834cf73 +0x3f7:  mov    %edx,0x8(%esp)
0834cf77 +0x3fb:  mov    -0x20(%ebp),%edx
0834cf7a +0x3fe:  mov    %edx,0x4(%esp)
0834cf7e +0x402:  mov    %eax,(%esp)
0834cf81 +0x405:  call   08238027 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd6d1>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd6d1
0834cf86 +0x40a:  sub    $0x4,%esp
0834cf89 +0x40d:  lea    -0x34(%ebp),%eax
0834cf8c +0x410:  mov    %eax,0x4(%esp)
0834cf90 +0x414:  lea    -0x30(%ebp),%eax
0834cf93 +0x417:  mov    %eax,(%esp)
0834cf96 +0x41a:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0834cf9b +0x41f:  test   %al,%al
0834cf9d +0x421:  jne    0834d023 <+0x4a7>
0834cfa3 +0x427:  mov    -0xc(%ebp),%eax
0834cfa6 +0x42a:  mov    (%eax),%edx
0834cfa8 +0x42c:  mov    %edx,%eax
0834cfaa +0x42e:  add    %eax,%eax
0834cfac +0x430:  add    %edx,%eax
0834cfae +0x432:  shl    $0x3,%eax
0834cfb1 +0x435:  add    $0x1a0,%eax
0834cfb6 +0x43a:  add    0x8(%ebp),%eax
0834cfb9 +0x43d:  add    $0x4,%eax
0834cfbc +0x440:  mov    %eax,(%esp)
0834cfbf +0x443:  call   0838a1f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c98
0834cfc4 +0x448:  test   %eax,%eax
0834cfc6 +0x44a:  sete   %al
0834cfc9 +0x44d:  test   %al,%al
0834cfcb +0x44f:  je     0834d024 <+0x4a8>
0834cfcd +0x451:  mov    -0x64(%ebp),%ebx
0834cfd0 +0x454:  mov    -0x60(%ebp),%ecx
0834cfd3 +0x457:  mov    0xc(%ebp),%eax
0834cfd6 +0x45a:  mov    0x64(%eax),%edx
0834cfd9 +0x45d:  mov    0x8(%ebp),%eax
0834cfdc +0x460:  mov    0x8(%eax),%eax
0834cfdf +0x463:  mov    %ebx,0x20(%esp)
0834cfe3 +0x467:  mov    %ecx,0x1c(%esp)
0834cfe7 +0x46b:  mov    %edx,0x18(%esp)
0834cfeb +0x46f:  mov    %eax,0x14(%esp)
0834cfef +0x473:  movl   $"dungeon index(%d) maze(%d) has error. (Can't found grid map(grid: %d,%d)!)",0x10(%esp)
0834cff7 +0x47b:  movl   $0x86b,0xc(%esp)
0834cfff +0x483:  movl   $&_ZZNK8CDungeon10VerifyMazeERK10MazeScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834d007 +0x48b:  movl   $"data_manager.cpp",0x4(%esp)
0834d00f +0x493:  movl   $0x1,(%esp)
0834d016 +0x49a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834d01b +0x49f:  jmp    0834d024 <+0x4a8>
0834d01d +0x4a1:  nop
0834d01e +0x4a2:  jmp    0834d024 <+0x4a8>
0834d020 +0x4a4:  nop
0834d021 +0x4a5:  jmp    0834d024 <+0x4a8>
0834d023 +0x4a7:  nop
0834d024 +0x4a8:  mov    -0x64(%ebp),%eax
0834d027 +0x4ab:  add    $0x1,%eax
0834d02a +0x4ae:  mov    %eax,-0x64(%ebp)
0834d02d +0x4b1:  mov    0xc(%ebp),%eax
0834d030 +0x4b4:  mov    0x4(%eax),%edx
0834d033 +0x4b7:  mov    -0x64(%ebp),%eax
0834d036 +0x4ba:  cmp    %eax,%edx
0834d038 +0x4bc:  setg   %al
0834d03b +0x4bf:  test   %al,%al
0834d03d +0x4c1:  jne    0834ce3e <+0x2c2>
0834d043 +0x4c7:  mov    -0x60(%ebp),%eax
0834d046 +0x4ca:  add    $0x1,%eax
0834d049 +0x4cd:  mov    %eax,-0x60(%ebp)
0834d04c +0x4d0:  mov    0xc(%ebp),%eax
0834d04f +0x4d3:  mov    (%eax),%edx
0834d051 +0x4d5:  mov    -0x60(%ebp),%eax
0834d054 +0x4d8:  cmp    %eax,%edx
0834d056 +0x4da:  setg   %al
0834d059 +0x4dd:  test   %al,%al
0834d05b +0x4df:  jne    0834ce32 <+0x2b6>
0834d061 +0x4e5:  mov    $0x1,%eax
0834d066 +0x4ea:  mov    -0x4(%ebp),%ebx
0834d069 +0x4ed:  leave
0834d06a +0x4ee:  ret
0834d06b +0x4ef:  nop
```

## 反编译 C

```c
// CDungeon::VerifyMaze @ 0x834cb7c

/* CDungeon::VerifyMaze(MazeScript const&) const */

undefined4 __thiscall CDungeon::VerifyMaze(CDungeon *this,MazeScript *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  int local_28;
  undefined4 local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  
  piVar7 = (int *)&stack0xffffff64;
  if ((*(int *)param_1 == 1) && (*(int *)(param_1 + 4) == 1)) {
    uVar3 = 1;
  }
  else {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (param_1 + 0x14));
    if (iVar4 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x83e,
                 "dungeon index(%d) maze(%d) has error. (Start positions were not declared!)");
      uVar3 = 0;
    }
    else {
      local_20 = 0;
      while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x14)), local_20 < uVar5) {
        piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (param_1 + 0x14),local_20);
        local_54 = piVar6[1];
        local_58 = *piVar6;
        local_1c = (int *)MazeScript::getGridR(param_1,local_58,local_54);
        iVar4 = __gnu_cxx::
                hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
                size((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + *local_1c * 0x14 + 100));
        if (iVar4 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x847
                     ,"dungeon index(%d) maze(%d) has error. (Can\'t found start map(grid: %d,%d)!)"
                    );
        }
        local_20 = local_20 + 1;
      }
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (param_1 + 0x20));
      if (iVar4 == 0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x84e,
                   "dungeon index(%d) maze(%d) has error. (End positions were not declared!)");
        uVar3 = 0;
      }
      else {
        local_18 = 0;
        while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                 ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                  (param_1 + 0x20)), local_18 < uVar5) {
          piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(param_1 + 0x20),local_18);
          local_5c = piVar6[1];
          local_60 = *piVar6;
          local_14 = (int *)MazeScript::getGridR(param_1,local_60,local_5c);
          iVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + *local_14 * 0x18 + 0x324));
          if (iVar4 == 0) {
            LogManager::logFormat
                      (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",
                       0x857,
                       "dungeon index(%d) maze(%d) has error. (Can\'t found boss map(grid: %d,%d)!")
            ;
          }
          local_18 = local_18 + 1;
        }
        for (local_64 = 0; local_64 < *(int *)param_1; local_64 = local_64 + 1) {
          for (local_68 = 0; local_68 < *(int *)(param_1 + 4); local_68 = local_68 + 1) {
            piVar7[2] = local_68;
            piVar7[1] = local_64;
            *piVar7 = (int)param_1;
            piVar7[-1] = 0x834ce57;
            local_10 = (int *)MazeScript::getGridR((MazeScript *)*piVar7,piVar7[1],piVar7[2]);
            piVar6 = piVar7;
            if (*local_10 != 0) {
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)local_50;
              piVar7[-1] = 0x834ce7c;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
              piVar7[2] = (int)&local_68;
              piVar7[1] = (int)&local_64;
              *piVar7 = (int)local_48;
              piVar7[-1] = 0x834ce98;
              std::pair<int,int>::pair<int&,int&>
                        ((pair<int,int> *)*piVar7,(int *)piVar7[1],(int *)piVar7[2]);
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)&local_40;
              piVar7[-1] = 0x834cead;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)&local_3c;
              piVar7[-1] = 0x834cec5;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
              piVar7[3] = (int)local_48;
              piVar7[2] = local_40;
              piVar7[1] = local_3c;
              *piVar7 = (int)local_4c;
              piVar7[-1] = 0x834cee8;
              std::
              find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
                        ();
              piVar6 = piVar7 + -1;
              *piVar7 = (int)local_50;
              piVar7[-1] = (int)local_4c;
              piVar7[-2] = 0x834cefd;
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
              if (!bVar2) {
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)local_38;
                piVar7[-2] = 0x834cf1a;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                piVar7[1] = (int)&local_68;
                *piVar7 = (int)&local_64;
                piVar7[-1] = (int)local_30;
                piVar7[-2] = 0x834cf36;
                std::pair<int,int>::pair<int&,int&>
                          ((pair<int,int> *)piVar7[-1],(int *)*piVar7,(int *)piVar7[1]);
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)&local_28;
                piVar7[-2] = 0x834cf4b;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)&local_24;
                piVar7[-2] = 0x834cf63;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                piVar7[2] = (int)local_30;
                piVar7[1] = local_28;
                *piVar7 = local_24;
                piVar7[-1] = (int)local_34;
                piVar7[-2] = 0x834cf86;
                std::
                find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
                          ();
                piVar7[-1] = (int)local_38;
                piVar7[-2] = (int)local_34;
                piVar7[-3] = 0x834cf9b;
                bVar2 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)piVar7[-2],(__normal_iterator *)piVar7[-1]);
                piVar6 = piVar7 + -2;
                if (!bVar2) {
                  piVar7[-2] = (int)(this + *local_10 * 0x18 + 0x1a4);
                  piVar7[-3] = 0x834cfc4;
                  iVar4 = std::
                          multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                                  *)piVar7[-2]);
                  piVar6 = piVar7 + -2;
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(param_1 + 100);
                    iVar1 = *(int *)(this + 8);
                    piVar7[6] = local_68;
                    piVar7[5] = local_64;
                    piVar7[4] = iVar4;
                    piVar7[3] = iVar1;
                    piVar7[2] = (int)
                                "dungeon index(%d) maze(%d) has error. (Can\'t found grid map(grid: %d,%d)!)"
                    ;
                    piVar7[1] = 0x86b;
                    *piVar7 = (int)"bool CDungeon::VerifyMaze(const MazeScript&) const";
                    piVar7[-1] = (int)"data_manager.cpp";
                    piVar7[-2] = 1;
                    piVar7[-3] = 0x834d01b;
                    LogManager::logFormat
                              (piVar7[-2],(char *)piVar7[-1],(char *)*piVar7,piVar7[1],
                               (char *)piVar7[2]);
                    piVar6 = piVar7 + -2;
                  }
                }
              }
            }
            piVar7 = piVar6;
          }
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}
```
