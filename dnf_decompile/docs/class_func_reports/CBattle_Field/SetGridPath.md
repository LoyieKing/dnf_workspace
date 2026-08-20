# SetGridPath

`_ZN13CBattle_Field11SetGridPathEP10MazeScripti`

`CBattle_Field::SetGridPath(MazeScript*, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ffb30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ffb30  _ZN13CBattle_Field11SetGridPathEP10MazeScripti
#           CBattle_Field::SetGridPath(MazeScript*, int)
# range [0x082ffb30, 0x08300c75]
082ffb30 +0x0000:  push   %ebp
082ffb31 +0x0001:  mov    %esp,%ebp
082ffb33 +0x0003:  push   %edi
082ffb34 +0x0004:  push   %esi
082ffb35 +0x0005:  push   %ebx
082ffb36 +0x0006:  sub    $0x1dc,%esp
082ffb3c +0x000c:  mov    0x8(%ebp),%eax
082ffb3f +0x000f:  mov    0xc(%ebp),%edx
082ffb42 +0x0012:  mov    %edx,0x74(%eax)
082ffb45 +0x0015:  mov    0x8(%ebp),%eax
082ffb48 +0x0018:  mov    0x74(%eax),%eax
082ffb4b +0x001b:  mov    (%eax),%edx
082ffb4d +0x001d:  mov    0x8(%ebp),%eax
082ffb50 +0x0020:  mov    %edx,0x18c(%eax)
082ffb56 +0x0026:  mov    0x8(%ebp),%eax
082ffb59 +0x0029:  mov    0x74(%eax),%eax
082ffb5c +0x002c:  mov    0x4(%eax),%edx
082ffb5f +0x002f:  mov    0x8(%ebp),%eax
082ffb62 +0x0032:  mov    %edx,0x190(%eax)
082ffb68 +0x0038:  mov    0x8(%ebp),%eax
082ffb6b +0x003b:  mov    0x18c(%eax),%edx
082ffb71 +0x0041:  mov    0x8(%ebp),%eax
082ffb74 +0x0044:  mov    0x190(%eax),%eax
082ffb7a +0x004a:  lea    (%edx,%eax,1),%eax
082ffb7d +0x004d:  cmp    $0x3,%eax
082ffb80 +0x0050:  jg     082ffb96 <+0x66>
082ffb82 +0x0052:  mov    0x8(%ebp),%eax
082ffb85 +0x0055:  movb   $0x0,0x1b8(%eax)
082ffb8c +0x005c:  mov    0x8(%ebp),%eax
082ffb8f +0x005f:  movb   $0x1,0x1cb(%eax)
082ffb96 +0x0066:  lea    -0xcc(%ebp),%eax
082ffb9c +0x006c:  mov    %eax,(%esp)
082ffb9f +0x006f:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
082ffba4 +0x0074:  lea    -0xd4(%ebp),%eax
082ffbaa +0x007a:  mov    %eax,(%esp)
082ffbad +0x007d:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
082ffbb2 +0x0082:  lea    -0xdc(%ebp),%eax
082ffbb8 +0x0088:  mov    %eax,(%esp)
082ffbbb +0x008b:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
082ffbc0 +0x0090:  mov    0x8(%ebp),%eax
082ffbc3 +0x0093:  mov    0x74(%eax),%eax
082ffbc6 +0x0096:  add    $0x14,%eax
082ffbc9 +0x0099:  mov    %eax,(%esp)
082ffbcc +0x009c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffbd1 +0x00a1:  test   %eax,%eax
082ffbd3 +0x00a3:  sete   %al
082ffbd6 +0x00a6:  test   %al,%al
082ffbd8 +0x00a8:  jne    08300c67 <+0x1137>
082ffbde +0x00ae:  call   0807dca0 <_init+0x598>
082ffbe3 +0x00b3:  mov    %eax,%ebx
082ffbe5 +0x00b5:  mov    0x8(%ebp),%eax
082ffbe8 +0x00b8:  mov    0x74(%eax),%eax
082ffbeb +0x00bb:  add    $0x14,%eax
082ffbee +0x00be:  mov    %eax,(%esp)
082ffbf1 +0x00c1:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffbf6 +0x00c6:  mov    %eax,-0x1bc(%ebp)
082ffbfc +0x00cc:  mov    %ebx,%eax
082ffbfe +0x00ce:  mov    $0x0,%edx
082ffc03 +0x00d3:  divl   -0x1bc(%ebp)
082ffc09 +0x00d9:  mov    %edx,%ecx
082ffc0b +0x00db:  mov    %ecx,%eax
082ffc0d +0x00dd:  mov    0x8(%ebp),%edx
082ffc10 +0x00e0:  mov    0x74(%edx),%edx
082ffc13 +0x00e3:  add    $0x14,%edx
082ffc16 +0x00e6:  mov    %eax,0x4(%esp)
082ffc1a +0x00ea:  mov    %edx,(%esp)
082ffc1d +0x00ed:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
082ffc22 +0x00f2:  mov    0x4(%eax),%edx
082ffc25 +0x00f5:  mov    (%eax),%eax
082ffc27 +0x00f7:  mov    %eax,-0xcc(%ebp)
082ffc2d +0x00fd:  mov    %edx,-0xc8(%ebp)
082ffc33 +0x0103:  mov    0x8(%ebp),%eax
082ffc36 +0x0106:  mov    0x74(%eax),%eax
082ffc39 +0x0109:  add    $0x20,%eax
082ffc3c +0x010c:  mov    %eax,(%esp)
082ffc3f +0x010f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffc44 +0x0114:  test   %eax,%eax
082ffc46 +0x0116:  sete   %al
082ffc49 +0x0119:  test   %al,%al
082ffc4b +0x011b:  jne    08300c6a <+0x113a>
082ffc51 +0x0121:  call   0807dca0 <_init+0x598>
082ffc56 +0x0126:  mov    %eax,%ebx
082ffc58 +0x0128:  mov    0x8(%ebp),%eax
082ffc5b +0x012b:  mov    0x74(%eax),%eax
082ffc5e +0x012e:  add    $0x20,%eax
082ffc61 +0x0131:  mov    %eax,(%esp)
082ffc64 +0x0134:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffc69 +0x0139:  mov    %eax,-0x1bc(%ebp)
082ffc6f +0x013f:  mov    %ebx,%eax
082ffc71 +0x0141:  mov    $0x0,%edx
082ffc76 +0x0146:  divl   -0x1bc(%ebp)
082ffc7c +0x014c:  mov    %edx,%ecx
082ffc7e +0x014e:  mov    %ecx,%eax
082ffc80 +0x0150:  mov    %eax,-0x68(%ebp)
082ffc83 +0x0153:  mov    -0x68(%ebp),%eax
082ffc86 +0x0156:  mov    0x8(%ebp),%edx
082ffc89 +0x0159:  mov    0x74(%edx),%edx
082ffc8c +0x015c:  add    $0x20,%edx
082ffc8f +0x015f:  mov    %eax,0x4(%esp)
082ffc93 +0x0163:  mov    %edx,(%esp)
082ffc96 +0x0166:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
082ffc9b +0x016b:  mov    0x4(%eax),%edx
082ffc9e +0x016e:  mov    (%eax),%eax
082ffca0 +0x0170:  mov    %eax,-0xd4(%ebp)
082ffca6 +0x0176:  mov    %edx,-0xd0(%ebp)
082ffcac +0x017c:  cmpl   $0x0,0x10(%ebp)
082ffcb0 +0x0180:  jle    082ffd9b <+0x26b>
082ffcb6 +0x0186:  mov    -0x68(%ebp),%eax
082ffcb9 +0x0189:  mov    %eax,-0x64(%ebp)
082ffcbc +0x018c:  movl   $0x0,-0x60(%ebp)
082ffcc3 +0x0193:  mov    0x8(%ebp),%eax
082ffcc6 +0x0196:  movl   $0x0,0xcc(%eax)
082ffcd0 +0x01a0:  mov    0x8(%ebp),%eax
082ffcd3 +0x01a3:  add    $0xc0,%eax
082ffcd8 +0x01a8:  mov    %eax,(%esp)
082ffcdb +0x01ab:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
082ffce0 +0x01b0:  movl   $0x0,-0x5c(%ebp)
082ffce7 +0x01b7:  jmp    082ffd8a <+0x25a>
082ffcec +0x01bc:  mov    0x8(%ebp),%eax
082ffcef +0x01bf:  mov    0x74(%eax),%eax
082ffcf2 +0x01c2:  add    $0x20,%eax
082ffcf5 +0x01c5:  mov    %eax,(%esp)
082ffcf8 +0x01c8:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffcfd +0x01cd:  cmp    $0x1,%eax
082ffd00 +0x01d0:  seta   %al
082ffd03 +0x01d3:  test   %al,%al
082ffd05 +0x01d5:  je     082ffd86 <+0x256>
082ffd07 +0x01d7:  call   0807dca0 <_init+0x598>
082ffd0c +0x01dc:  mov    %eax,%ebx
082ffd0e +0x01de:  mov    0x8(%ebp),%eax
082ffd11 +0x01e1:  mov    0x74(%eax),%eax
082ffd14 +0x01e4:  add    $0x20,%eax
082ffd17 +0x01e7:  mov    %eax,(%esp)
082ffd1a +0x01ea:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffd1f +0x01ef:  lea    -0x1(%eax),%ecx
082ffd22 +0x01f2:  mov    %ebx,%eax
082ffd24 +0x01f4:  mov    $0x0,%edx
082ffd29 +0x01f9:  div    %ecx
082ffd2b +0x01fb:  mov    %edx,%eax
082ffd2d +0x01fd:  mov    %eax,-0x60(%ebp)
082ffd30 +0x0200:  mov    -0x60(%ebp),%eax
082ffd33 +0x0203:  cmp    -0x64(%ebp),%eax
082ffd36 +0x0206:  jl     082ffd3c <+0x20c>
082ffd38 +0x0208:  addl   $0x1,-0x60(%ebp)
082ffd3c +0x020c:  mov    -0x60(%ebp),%eax
082ffd3f +0x020f:  mov    0x8(%ebp),%edx
082ffd42 +0x0212:  mov    0x74(%edx),%edx
082ffd45 +0x0215:  add    $0x20,%edx
082ffd48 +0x0218:  mov    %eax,0x4(%esp)
082ffd4c +0x021c:  mov    %edx,(%esp)
082ffd4f +0x021f:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
082ffd54 +0x0224:  mov    0x4(%eax),%edx
082ffd57 +0x0227:  mov    (%eax),%eax
082ffd59 +0x0229:  mov    %eax,-0xe4(%ebp)
082ffd5f +0x022f:  mov    %edx,-0xe0(%ebp)
082ffd65 +0x0235:  mov    0x8(%ebp),%eax
082ffd68 +0x0238:  lea    0xc0(%eax),%edx
082ffd6e +0x023e:  lea    -0xe4(%ebp),%eax
082ffd74 +0x0244:  mov    %eax,0x4(%esp)
082ffd78 +0x0248:  mov    %edx,(%esp)
082ffd7b +0x024b:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
082ffd80 +0x0250:  mov    -0x60(%ebp),%eax
082ffd83 +0x0253:  mov    %eax,-0x64(%ebp)
082ffd86 +0x0256:  addl   $0x1,-0x5c(%ebp)
082ffd8a +0x025a:  mov    -0x5c(%ebp),%eax
082ffd8d +0x025d:  cmp    0x10(%ebp),%eax
082ffd90 +0x0260:  setl   %al
082ffd93 +0x0263:  test   %al,%al
082ffd95 +0x0265:  jne    082ffcec <+0x1bc>
082ffd9b +0x026b:  mov    -0x68(%ebp),%eax
082ffd9e +0x026e:  sub    $0x1,%eax
082ffda1 +0x0271:  test   %eax,%eax
082ffda3 +0x0273:  js     082ffdd1 <+0x2a1>
082ffda5 +0x0275:  mov    -0x68(%ebp),%eax
082ffda8 +0x0278:  sub    $0x1,%eax
082ffdab +0x027b:  mov    0x8(%ebp),%edx
082ffdae +0x027e:  mov    0x74(%edx),%edx
082ffdb1 +0x0281:  add    $0x20,%edx
082ffdb4 +0x0284:  mov    %eax,0x4(%esp)
082ffdb8 +0x0288:  mov    %edx,(%esp)
082ffdbb +0x028b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
082ffdc0 +0x0290:  mov    0x4(%eax),%edx
082ffdc3 +0x0293:  mov    (%eax),%eax
082ffdc5 +0x0295:  mov    %eax,-0xdc(%ebp)
082ffdcb +0x029b:  mov    %edx,-0xd8(%ebp)
082ffdd1 +0x02a1:  mov    -0x68(%ebp),%eax
082ffdd4 +0x02a4:  lea    0x1(%eax),%ebx
082ffdd7 +0x02a7:  mov    0x8(%ebp),%eax
082ffdda +0x02aa:  mov    0x74(%eax),%eax
082ffddd +0x02ad:  add    $0x20,%eax
082ffde0 +0x02b0:  mov    %eax,(%esp)
082ffde3 +0x02b3:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
082ffde8 +0x02b8:  sub    $0x1,%eax
082ffdeb +0x02bb:  cmp    %eax,%ebx
082ffded +0x02bd:  setle  %al
082ffdf0 +0x02c0:  test   %al,%al
082ffdf2 +0x02c2:  je     082ffe20 <+0x2f0>
082ffdf4 +0x02c4:  mov    -0x68(%ebp),%eax
082ffdf7 +0x02c7:  add    $0x1,%eax
082ffdfa +0x02ca:  mov    0x8(%ebp),%edx
082ffdfd +0x02cd:  mov    0x74(%edx),%edx
082ffe00 +0x02d0:  add    $0x20,%edx
082ffe03 +0x02d3:  mov    %eax,0x4(%esp)
082ffe07 +0x02d7:  mov    %edx,(%esp)
082ffe0a +0x02da:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
082ffe0f +0x02df:  mov    0x4(%eax),%edx
082ffe12 +0x02e2:  mov    (%eax),%eax
082ffe14 +0x02e4:  mov    %eax,-0xdc(%ebp)
082ffe1a +0x02ea:  mov    %edx,-0xd8(%ebp)
082ffe20 +0x02f0:  mov    -0xcc(%ebp),%edx
082ffe26 +0x02f6:  mov    0x8(%ebp),%eax
082ffe29 +0x02f9:  mov    %edx,0x4(%eax)
082ffe2c +0x02fc:  mov    0x8(%ebp),%eax
082ffe2f +0x02ff:  mov    0x4(%eax),%edx
082ffe32 +0x0302:  mov    0x8(%ebp),%eax
082ffe35 +0x0305:  mov    %edx,0x60(%eax)
082ffe38 +0x0308:  mov    -0xc8(%ebp),%edx
082ffe3e +0x030e:  mov    0x8(%ebp),%eax
082ffe41 +0x0311:  mov    %edx,0x8(%eax)
082ffe44 +0x0314:  mov    0x8(%ebp),%eax
082ffe47 +0x0317:  mov    0x8(%eax),%edx
082ffe4a +0x031a:  mov    0x8(%ebp),%eax
082ffe4d +0x031d:  mov    %edx,0x64(%eax)
082ffe50 +0x0320:  mov    0x8(%ebp),%eax
082ffe53 +0x0323:  mov    0x60(%eax),%edx
082ffe56 +0x0326:  mov    0x8(%ebp),%eax
082ffe59 +0x0329:  mov    %edx,0x68(%eax)
082ffe5c +0x032c:  mov    0x8(%ebp),%eax
082ffe5f +0x032f:  mov    0x64(%eax),%edx
082ffe62 +0x0332:  mov    0x8(%ebp),%eax
082ffe65 +0x0335:  mov    %edx,0x6c(%eax)
082ffe68 +0x0338:  mov    0x8(%ebp),%eax
082ffe6b +0x033b:  mov    0x188(%eax),%eax
082ffe71 +0x0341:  test   %eax,%eax
082ffe73 +0x0343:  je     082ffe91 <+0x361>
082ffe75 +0x0345:  mov    0x8(%ebp),%eax
082ffe78 +0x0348:  mov    0x188(%eax),%eax
082ffe7e +0x034e:  mov    %eax,(%esp)
082ffe81 +0x0351:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
082ffe86 +0x0356:  test   %al,%al
082ffe88 +0x0358:  je     082ffe91 <+0x361>
082ffe8a +0x035a:  mov    $0x1,%eax
082ffe8f +0x035f:  jmp    082ffe96 <+0x366>
082ffe91 +0x0361:  mov    $0x0,%eax
082ffe96 +0x0366:  test   %al,%al
082ffe98 +0x0368:  je     082fff4f <+0x41f>
082ffe9e +0x036e:  movl   $0x0,-0x58(%ebp)
082ffea5 +0x0375:  jmp    082fff40 <+0x410>
082ffeaa +0x037a:  lea    -0xc4(%ebp),%eax
082ffeb0 +0x0380:  lea    -0xcc(%ebp),%edx
082ffeb6 +0x0386:  add    $0x4,%edx
082ffeb9 +0x0389:  mov    %edx,0x8(%esp)
082ffebd +0x038d:  lea    -0xcc(%ebp),%edx
082ffec3 +0x0393:  mov    %edx,0x4(%esp)
082ffec7 +0x0397:  mov    %eax,(%esp)
082ffeca +0x039a:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
082ffecf +0x039f:  sub    $0x4,%esp
082ffed2 +0x03a2:  mov    -0x58(%ebp),%eax
082ffed5 +0x03a5:  add    $0x2,%eax
082ffed8 +0x03a8:  shl    $0x3,%eax
082ffedb +0x03ab:  add    0x8(%ebp),%eax
082ffede +0x03ae:  lea    0xc(%eax),%edx
082ffee1 +0x03b1:  lea    -0xc4(%ebp),%eax
082ffee7 +0x03b7:  mov    %eax,0x4(%esp)
082ffeeb +0x03bb:  mov    %edx,(%esp)
082ffeee +0x03be:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
082ffef3 +0x03c3:  lea    -0xbc(%ebp),%eax
082ffef9 +0x03c9:  lea    -0xcc(%ebp),%edx
082ffeff +0x03cf:  add    $0x4,%edx
082fff02 +0x03d2:  mov    %edx,0x8(%esp)
082fff06 +0x03d6:  lea    -0xcc(%ebp),%edx
082fff0c +0x03dc:  mov    %edx,0x4(%esp)
082fff10 +0x03e0:  mov    %eax,(%esp)
082fff13 +0x03e3:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
082fff18 +0x03e8:  sub    $0x4,%esp
082fff1b +0x03eb:  mov    -0x58(%ebp),%eax
082fff1e +0x03ee:  add    $0x6,%eax
082fff21 +0x03f1:  shl    $0x3,%eax
082fff24 +0x03f4:  add    0x8(%ebp),%eax
082fff27 +0x03f7:  lea    0xc(%eax),%edx
082fff2a +0x03fa:  lea    -0xbc(%ebp),%eax
082fff30 +0x0400:  mov    %eax,0x4(%esp)
082fff34 +0x0404:  mov    %edx,(%esp)
082fff37 +0x0407:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
082fff3c +0x040c:  addl   $0x1,-0x58(%ebp)
082fff40 +0x0410:  cmpl   $0x3,-0x58(%ebp)
082fff44 +0x0414:  setle  %al
082fff47 +0x0417:  test   %al,%al
082fff49 +0x0419:  jne    082ffeaa <+0x37a>
082fff4f +0x041f:  mov    -0xd4(%ebp),%edx
082fff55 +0x0425:  mov    0x8(%ebp),%eax
082fff58 +0x0428:  mov    %edx,0xc(%eax)
082fff5b +0x042b:  mov    -0xd0(%ebp),%edx
082fff61 +0x0431:  mov    0x8(%ebp),%eax
082fff64 +0x0434:  mov    %edx,0x10(%eax)
082fff67 +0x0437:  mov    -0xdc(%ebp),%edx
082fff6d +0x043d:  mov    0x8(%ebp),%eax
082fff70 +0x0440:  mov    %edx,0x14(%eax)
082fff73 +0x0443:  mov    -0xd8(%ebp),%edx
082fff79 +0x0449:  mov    0x8(%ebp),%eax
082fff7c +0x044c:  mov    %edx,0x18(%eax)
082fff7f +0x044f:  mov    0x8(%ebp),%eax
082fff82 +0x0452:  mov    0x74(%eax),%eax
082fff85 +0x0455:  mov    0x30(%eax),%edx
082fff88 +0x0458:  mov    0x8(%ebp),%eax
082fff8b +0x045b:  mov    %edx,0x1c0(%eax)
082fff91 +0x0461:  mov    0x8(%ebp),%eax
082fff94 +0x0464:  mov    0x74(%eax),%eax
082fff97 +0x0467:  mov    0x34(%eax),%edx
082fff9a +0x046a:  mov    0x8(%ebp),%eax
082fff9d +0x046d:  mov    %edx,0x1c4(%eax)
082fffa3 +0x0473:  mov    0x8(%ebp),%eax
082fffa6 +0x0476:  mov    0x74(%eax),%eax
082fffa9 +0x0479:  mov    0x2c(%eax),%edx
082fffac +0x047c:  mov    0x8(%ebp),%eax
082fffaf +0x047f:  mov    %edx,0x1bc(%eax)
082fffb5 +0x0485:  mov    0x8(%ebp),%eax
082fffb8 +0x0488:  mov    0x74(%eax),%eax
082fffbb +0x048b:  lea    0x38(%eax),%edx
082fffbe +0x048e:  mov    0x8(%ebp),%eax
082fffc1 +0x0491:  add    $0xd0,%eax
082fffc6 +0x0496:  mov    %edx,0x4(%esp)
082fffca +0x049a:  mov    %eax,(%esp)
082fffcd +0x049d:  call   082fe6d0 <_ZN8CRidable16SetRidableObjectER13RidableScript>  ; CRidable::SetRidableObject(RidableScript&)
082fffd2 +0x04a2:  mov    0x8(%ebp),%eax
082fffd5 +0x04a5:  mov    0x188(%eax),%eax
082fffdb +0x04ab:  mov    0x90c(%eax),%eax
082fffe1 +0x04b1:  cmp    $0x1,%eax
082fffe4 +0x04b4:  jne    083003ff <+0x8cf>
082fffea +0x04ba:  lea    -0xf0(%ebp),%eax
082ffff0 +0x04c0:  mov    %eax,(%esp)
082ffff3 +0x04c3:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
082ffff8 +0x04c8:  movl   $0x0,-0xfc(%ebp)
08300002 +0x04d2:  jmp    0830020a <+0x6da>
08300007 +0x04d7:  movl   $0x0,-0x100(%ebp)
08300011 +0x04e1:  jmp    083001e0 <+0x6b0>
08300016 +0x04e6:  mov    0x8(%ebp),%eax
08300019 +0x04e9:  mov    0xc(%eax),%edx
0830001c +0x04ec:  mov    -0x100(%ebp),%eax
08300022 +0x04f2:  cmp    %eax,%edx
08300024 +0x04f4:  jne    0830003a <+0x50a>
08300026 +0x04f6:  mov    0x8(%ebp),%eax
08300029 +0x04f9:  mov    0x10(%eax),%edx
0830002c +0x04fc:  mov    -0xfc(%ebp),%eax
08300032 +0x0502:  cmp    %eax,%edx
08300034 +0x0504:  je     083001ca <+0x69a>
0830003a +0x050a:  mov    0x8(%ebp),%eax
0830003d +0x050d:  mov    0x4(%eax),%edx
08300040 +0x0510:  mov    -0x100(%ebp),%eax
08300046 +0x0516:  cmp    %eax,%edx
08300048 +0x0518:  jne    0830005e <+0x52e>
0830004a +0x051a:  mov    0x8(%ebp),%eax
0830004d +0x051d:  mov    0x8(%eax),%edx
08300050 +0x0520:  mov    -0xfc(%ebp),%eax
08300056 +0x0526:  cmp    %eax,%edx
08300058 +0x0528:  je     083001cd <+0x69d>
0830005e +0x052e:  mov    -0xfc(%ebp),%ecx
08300064 +0x0534:  mov    -0x100(%ebp),%edx
0830006a +0x053a:  mov    0x8(%ebp),%eax
0830006d +0x053d:  mov    0x74(%eax),%eax
08300070 +0x0540:  mov    %ecx,0x8(%esp)
08300074 +0x0544:  mov    %edx,0x4(%esp)
08300078 +0x0548:  mov    %eax,(%esp)
0830007b +0x054b:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
08300080 +0x0550:  mov    %eax,-0x54(%ebp)
08300083 +0x0553:  mov    -0x54(%ebp),%eax
08300086 +0x0556:  add    $0x4,%eax
08300089 +0x0559:  mov    %eax,(%esp)
0830008c +0x055c:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08300091 +0x0561:  test   %al,%al
08300093 +0x0563:  jne    083001d0 <+0x6a0>
08300099 +0x0569:  mov    -0x54(%ebp),%eax
0830009c +0x056c:  lea    0x4(%eax),%edx
0830009f +0x056f:  lea    -0x104(%ebp),%eax
083000a5 +0x0575:  mov    %edx,0x4(%esp)
083000a9 +0x0579:  mov    %eax,(%esp)
083000ac +0x057c:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
083000b1 +0x0581:  sub    $0x4,%esp
083000b4 +0x0584:  mov    -0x54(%ebp),%eax
083000b7 +0x0587:  lea    0x4(%eax),%edx
083000ba +0x058a:  lea    -0x108(%ebp),%eax
083000c0 +0x0590:  mov    %edx,0x4(%esp)
083000c4 +0x0594:  mov    %eax,(%esp)
083000c7 +0x0597:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
083000cc +0x059c:  sub    $0x4,%esp
083000cf +0x059f:  jmp    08300149 <+0x619>
083000d1 +0x05a1:  lea    -0x104(%ebp),%eax
083000d7 +0x05a7:  mov    %eax,(%esp)
083000da +0x05aa:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083000df +0x05af:  mov    (%eax),%eax
083000e1 +0x05b1:  mov    %eax,-0x50(%ebp)
083000e4 +0x05b4:  mov    -0x50(%ebp),%ebx
083000e7 +0x05b7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083000ec +0x05bc:  mov    %ebx,0x4(%esp)
083000f0 +0x05c0:  mov    %eax,(%esp)
083000f3 +0x05c3:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
083000f8 +0x05c8:  mov    %eax,-0x4c(%ebp)
083000fb +0x05cb:  cmpl   $0x0,-0x4c(%ebp)
083000ff +0x05cf:  je     0830016b <+0x63b>
08300101 +0x05d1:  lea    -0xb4(%ebp),%eax
08300107 +0x05d7:  mov    -0x4c(%ebp),%edx
0830010a +0x05da:  mov    %edx,0x4(%esp)
0830010e +0x05de:  mov    %eax,(%esp)
08300111 +0x05e1:  call   0830e5cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b1
08300116 +0x05e6:  sub    $0x4,%esp
08300119 +0x05e9:  lea    -0xb4(%ebp),%eax
0830011f +0x05ef:  mov    %eax,(%esp)
08300122 +0x05f2:  call   0830fae4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x16c9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x16c9
08300127 +0x05f7:  mov    %eax,%ebx
08300129 +0x05f9:  lea    -0xb4(%ebp),%eax
0830012f +0x05ff:  mov    %eax,(%esp)
08300132 +0x0602:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
08300137 +0x0607:  test   %bl,%bl
08300139 +0x0609:  jne    0830016e <+0x63e>
0830013b +0x060b:  lea    -0x104(%ebp),%eax
08300141 +0x0611:  mov    %eax,(%esp)
08300144 +0x0614:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08300149 +0x0619:  lea    -0x108(%ebp),%eax
0830014f +0x061f:  mov    %eax,0x4(%esp)
08300153 +0x0623:  lea    -0x104(%ebp),%eax
08300159 +0x0629:  mov    %eax,(%esp)
0830015c +0x062c:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08300161 +0x0631:  test   %al,%al
08300163 +0x0633:  jne    083000d1 <+0x5a1>
08300169 +0x0639:  jmp    0830016f <+0x63f>
0830016b +0x063b:  nop
0830016c +0x063c:  jmp    0830016f <+0x63f>
0830016e +0x063e:  nop
0830016f +0x063f:  lea    -0x108(%ebp),%eax
08300175 +0x0645:  mov    %eax,0x4(%esp)
08300179 +0x0649:  lea    -0x104(%ebp),%eax
0830017f +0x064f:  mov    %eax,(%esp)
08300182 +0x0652:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
08300187 +0x0657:  test   %al,%al
08300189 +0x0659:  je     083001d1 <+0x6a1>
0830018b +0x065b:  lea    -0xac(%ebp),%eax
08300191 +0x0661:  lea    -0xfc(%ebp),%edx
08300197 +0x0667:  mov    %edx,0x8(%esp)
0830019b +0x066b:  lea    -0x100(%ebp),%edx
083001a1 +0x0671:  mov    %edx,0x4(%esp)
083001a5 +0x0675:  mov    %eax,(%esp)
083001a8 +0x0678:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
083001ad +0x067d:  sub    $0x4,%esp
083001b0 +0x0680:  lea    -0xac(%ebp),%eax
083001b6 +0x0686:  mov    %eax,0x4(%esp)
083001ba +0x068a:  lea    -0xf0(%ebp),%eax
083001c0 +0x0690:  mov    %eax,(%esp)
083001c3 +0x0693:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
083001c8 +0x0698:  jmp    083001d1 <+0x6a1>
083001ca +0x069a:  nop
083001cb +0x069b:  jmp    083001d1 <+0x6a1>
083001cd +0x069d:  nop
083001ce +0x069e:  jmp    083001d1 <+0x6a1>
083001d0 +0x06a0:  nop
083001d1 +0x06a1:  mov    -0x100(%ebp),%eax
083001d7 +0x06a7:  add    $0x1,%eax
083001da +0x06aa:  mov    %eax,-0x100(%ebp)
083001e0 +0x06b0:  mov    0x8(%ebp),%eax
083001e3 +0x06b3:  mov    0x74(%eax),%eax
083001e6 +0x06b6:  mov    (%eax),%edx
083001e8 +0x06b8:  mov    -0x100(%ebp),%eax
083001ee +0x06be:  cmp    %eax,%edx
083001f0 +0x06c0:  setg   %al
083001f3 +0x06c3:  test   %al,%al
083001f5 +0x06c5:  jne    08300016 <+0x4e6>
083001fb +0x06cb:  mov    -0xfc(%ebp),%eax
08300201 +0x06d1:  add    $0x1,%eax
08300204 +0x06d4:  mov    %eax,-0xfc(%ebp)
0830020a +0x06da:  mov    0x8(%ebp),%eax
0830020d +0x06dd:  mov    0x74(%eax),%eax
08300210 +0x06e0:  mov    0x4(%eax),%edx
08300213 +0x06e3:  mov    -0xfc(%ebp),%eax
08300219 +0x06e9:  cmp    %eax,%edx
0830021b +0x06eb:  setg   %al
0830021e +0x06ee:  test   %al,%al
08300220 +0x06f0:  jne    08300007 <+0x4d7>
08300226 +0x06f6:  mov    0x8(%ebp),%eax
08300229 +0x06f9:  mov    0x188(%eax),%eax
0830022f +0x06ff:  lea    0x910(%eax),%edx
08300235 +0x0705:  lea    -0xf4(%ebp),%eax
0830023b +0x070b:  mov    %edx,0x4(%esp)
0830023f +0x070f:  mov    %eax,(%esp)
08300242 +0x0712:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08300247 +0x0717:  sub    $0x4,%esp
0830024a +0x071a:  mov    0x8(%ebp),%eax
0830024d +0x071d:  mov    0x188(%eax),%eax
08300253 +0x0723:  lea    0x910(%eax),%edx
08300259 +0x0729:  lea    -0xf8(%ebp),%eax
0830025f +0x072f:  mov    %edx,0x4(%esp)
08300263 +0x0733:  mov    %eax,(%esp)
08300266 +0x0736:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0830026b +0x073b:  sub    $0x4,%esp
0830026e +0x073e:  jmp    083003b1 <+0x881>
08300273 +0x0743:  lea    -0xf4(%ebp),%eax
08300279 +0x0749:  mov    %eax,(%esp)
0830027c +0x074c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08300281 +0x0751:  mov    (%eax),%eax
08300283 +0x0753:  mov    %eax,-0x48(%ebp)
08300286 +0x0756:  lea    -0xf4(%ebp),%eax
0830028c +0x075c:  mov    %eax,(%esp)
0830028f +0x075f:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08300294 +0x0764:  lea    -0xf4(%ebp),%eax
0830029a +0x076a:  mov    %eax,(%esp)
0830029d +0x076d:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083002a2 +0x0772:  mov    (%eax),%eax
083002a4 +0x0774:  mov    %eax,-0x44(%ebp)
083002a7 +0x0777:  lea    -0xf4(%ebp),%eax
083002ad +0x077d:  mov    %eax,(%esp)
083002b0 +0x0780:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
083002b5 +0x0785:  lea    -0xf4(%ebp),%eax
083002bb +0x078b:  mov    %eax,(%esp)
083002be +0x078e:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083002c3 +0x0793:  mov    (%eax),%eax
083002c5 +0x0795:  mov    %eax,-0x40(%ebp)
083002c8 +0x0798:  lea    -0xf4(%ebp),%eax
083002ce +0x079e:  mov    %eax,(%esp)
083002d1 +0x07a1:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
083002d6 +0x07a6:  lea    -0x120(%ebp),%eax
083002dc +0x07ac:  mov    %eax,(%esp)
083002df +0x07af:  call   0830ee22 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa07>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa07
083002e4 +0x07b4:  mov    -0x48(%ebp),%eax
083002e7 +0x07b7:  mov    %eax,-0x120(%ebp)
083002ed +0x07bd:  movl   $0x0,-0x110(%ebp)
083002f7 +0x07c7:  mov    -0x40(%ebp),%eax
083002fa +0x07ca:  mov    %eax,-0x10c(%ebp)
08300300 +0x07d0:  movl   $0x0,-0x3c(%ebp)
08300307 +0x07d7:  jmp    08300361 <+0x831>
08300309 +0x07d9:  lea    -0xf0(%ebp),%eax
0830030f +0x07df:  mov    %eax,(%esp)
08300312 +0x07e2:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08300317 +0x07e7:  mov    %eax,(%esp)
0830031a +0x07ea:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830031f +0x07ef:  mov    %eax,0x4(%esp)
08300323 +0x07f3:  lea    -0xf0(%ebp),%eax
08300329 +0x07f9:  mov    %eax,(%esp)
0830032c +0x07fc:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
08300331 +0x0801:  mov    0x4(%eax),%edx
08300334 +0x0804:  mov    (%eax),%eax
08300336 +0x0806:  mov    %eax,-0x128(%ebp)
0830033c +0x080c:  mov    %edx,-0x124(%ebp)
08300342 +0x0812:  lea    -0x128(%ebp),%eax
08300348 +0x0818:  mov    %eax,0x4(%esp)
0830034c +0x081c:  lea    -0x120(%ebp),%eax
08300352 +0x0822:  add    $0x4,%eax
08300355 +0x0825:  mov    %eax,(%esp)
08300358 +0x0828:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0830035d +0x082d:  addl   $0x1,-0x3c(%ebp)
08300361 +0x0831:  mov    -0x3c(%ebp),%eax
08300364 +0x0834:  cmp    -0x44(%ebp),%eax
08300367 +0x0837:  setl   %al
0830036a +0x083a:  test   %al,%al
0830036c +0x083c:  jne    08300309 <+0x7d9>
0830036e +0x083e:  mov    0x8(%ebp),%eax
08300371 +0x0841:  lea    0x170(%eax),%edx
08300377 +0x0847:  lea    -0x120(%ebp),%eax
0830037d +0x084d:  mov    %eax,0x4(%esp)
08300381 +0x0851:  mov    %edx,(%esp)
08300384 +0x0854:  call   0830faf6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x16db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x16db
08300389 +0x0859:  jmp    083003a3 <+0x873>
0830038b +0x085b:  mov    %edx,%ebx
0830038d +0x085d:  mov    %eax,%esi
0830038f +0x085f:  lea    -0x120(%ebp),%eax
08300395 +0x0865:  mov    %eax,(%esp)
08300398 +0x0868:  call   082d2c00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24afb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24afb
0830039d +0x086d:  mov    %esi,%eax
0830039f +0x086f:  mov    %ebx,%edx
083003a1 +0x0871:  jmp    083003d3 <+0x8a3>
083003a3 +0x0873:  lea    -0x120(%ebp),%eax
083003a9 +0x0879:  mov    %eax,(%esp)
083003ac +0x087c:  call   082d2c00 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24afb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24afb
083003b1 +0x0881:  lea    -0xf8(%ebp),%eax
083003b7 +0x0887:  mov    %eax,0x4(%esp)
083003bb +0x088b:  lea    -0xf4(%ebp),%eax
083003c1 +0x0891:  mov    %eax,(%esp)
083003c4 +0x0894:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
083003c9 +0x0899:  test   %al,%al
083003cb +0x089b:  jne    08300273 <+0x743>
083003d1 +0x08a1:  jmp    083003f1 <+0x8c1>
083003d3 +0x08a3:  mov    %edx,%ebx
083003d5 +0x08a5:  mov    %eax,%esi
083003d7 +0x08a7:  lea    -0xf0(%ebp),%eax
083003dd +0x08ad:  mov    %eax,(%esp)
083003e0 +0x08b0:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083003e5 +0x08b5:  mov    %esi,%eax
083003e7 +0x08b7:  mov    %ebx,%edx
083003e9 +0x08b9:  mov    %eax,(%esp)
083003ec +0x08bc:  call   08ae3750 <_Unwind_Resume>
083003f1 +0x08c1:  lea    -0xf0(%ebp),%eax
083003f7 +0x08c7:  mov    %eax,(%esp)
083003fa +0x08ca:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083003ff +0x08cf:  mov    0x8(%ebp),%eax
08300402 +0x08d2:  mov    0x188(%eax),%eax
08300408 +0x08d8:  mov    %eax,(%esp)
0830040b +0x08db:  call   0830e62e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x213>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x213
08300410 +0x08e0:  test   %eax,%eax
08300412 +0x08e2:  je     08300448 <+0x918>
08300414 +0x08e4:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08300419 +0x08e9:  movl   $0x24,0x4(%esp)
08300421 +0x08f1:  mov    %eax,(%esp)
08300424 +0x08f4:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08300429 +0x08f9:  mov    (%eax),%edx
0830042b +0x08fb:  add    $0x34,%edx
0830042e +0x08fe:  mov    (%edx),%edx
08300430 +0x0900:  movl   $0x0,0x4(%esp)
08300438 +0x0908:  mov    %eax,(%esp)
0830043b +0x090b:  call   *%edx
0830043d +0x090d:  test   %al,%al
0830043f +0x090f:  je     08300448 <+0x918>
08300441 +0x0911:  mov    $0x1,%eax
08300446 +0x0916:  jmp    0830044d <+0x91d>
08300448 +0x0918:  mov    $0x0,%eax
0830044d +0x091d:  test   %al,%al
0830044f +0x091f:  je     08300957 <+0xe27>
08300455 +0x0925:  lea    -0x134(%ebp),%eax
0830045b +0x092b:  mov    %eax,(%esp)
0830045e +0x092e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08300463 +0x0933:  movl   $0x0,-0x144(%ebp)
0830046d +0x093d:  jmp    08300525 <+0x9f5>
08300472 +0x0942:  movl   $0x0,-0x148(%ebp)
0830047c +0x094c:  jmp    083004fb <+0x9cb>
0830047e +0x094e:  mov    -0x144(%ebp),%ecx
08300484 +0x0954:  mov    -0x148(%ebp),%edx
0830048a +0x095a:  mov    0x8(%ebp),%eax
0830048d +0x095d:  mov    0x74(%eax),%eax
08300490 +0x0960:  mov    %ecx,0x8(%esp)
08300494 +0x0964:  mov    %edx,0x4(%esp)
08300498 +0x0968:  mov    %eax,(%esp)
0830049b +0x096b:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
083004a0 +0x0970:  mov    %eax,-0x38(%ebp)
083004a3 +0x0973:  mov    -0x38(%ebp),%eax
083004a6 +0x0976:  mov    (%eax),%eax
083004a8 +0x0978:  test   %eax,%eax
083004aa +0x097a:  je     083004eb <+0x9bb>
083004ac +0x097c:  lea    -0xa4(%ebp),%eax
083004b2 +0x0982:  lea    -0x144(%ebp),%edx
083004b8 +0x0988:  mov    %edx,0x8(%esp)
083004bc +0x098c:  lea    -0x148(%ebp),%edx
083004c2 +0x0992:  mov    %edx,0x4(%esp)
083004c6 +0x0996:  mov    %eax,(%esp)
083004c9 +0x0999:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
083004ce +0x099e:  sub    $0x4,%esp
083004d1 +0x09a1:  lea    -0xa4(%ebp),%eax
083004d7 +0x09a7:  mov    %eax,0x4(%esp)
083004db +0x09ab:  lea    -0x134(%ebp),%eax
083004e1 +0x09b1:  mov    %eax,(%esp)
083004e4 +0x09b4:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
083004e9 +0x09b9:  jmp    083004ec <+0x9bc>
083004eb +0x09bb:  nop
083004ec +0x09bc:  mov    -0x148(%ebp),%eax
083004f2 +0x09c2:  add    $0x1,%eax
083004f5 +0x09c5:  mov    %eax,-0x148(%ebp)
083004fb +0x09cb:  mov    0x8(%ebp),%eax
083004fe +0x09ce:  mov    0x74(%eax),%eax
08300501 +0x09d1:  mov    (%eax),%edx
08300503 +0x09d3:  mov    -0x148(%ebp),%eax
08300509 +0x09d9:  cmp    %eax,%edx
0830050b +0x09db:  setg   %al
0830050e +0x09de:  test   %al,%al
08300510 +0x09e0:  jne    0830047e <+0x94e>
08300516 +0x09e6:  mov    -0x144(%ebp),%eax
0830051c +0x09ec:  add    $0x1,%eax
0830051f +0x09ef:  mov    %eax,-0x144(%ebp)
08300525 +0x09f5:  mov    0x8(%ebp),%eax
08300528 +0x09f8:  mov    0x74(%eax),%eax
0830052b +0x09fb:  mov    0x4(%eax),%edx
0830052e +0x09fe:  mov    -0x144(%ebp),%eax
08300534 +0x0a04:  cmp    %eax,%edx
08300536 +0x0a06:  setg   %al
08300539 +0x0a09:  test   %al,%al
0830053b +0x0a0b:  jne    08300472 <+0x942>
08300541 +0x0a11:  lea    -0x13c(%ebp),%eax
08300547 +0x0a17:  mov    %eax,(%esp)
0830054a +0x0a1a:  call   0830fb6a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x174f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x174f
0830054f +0x0a1f:  lea    -0x140(%ebp),%eax
08300555 +0x0a25:  mov    %eax,(%esp)
08300558 +0x0a28:  call   0830fbd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x17b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x17b9
0830055d +0x0a2d:  movl   $0x0,-0x34(%ebp)
08300564 +0x0a34:  jmp    083008d4 <+0xda4>
08300569 +0x0a39:  mov    0x8(%ebp),%eax
0830056c +0x0a3c:  mov    0x188(%eax),%eax
08300572 +0x0a42:  mov    %eax,(%esp)
08300575 +0x0a45:  call   0830e63c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x221>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x221
0830057a +0x0a4a:  mov    %eax,%ebx
0830057c +0x0a4c:  movl   $0x2710,(%esp)
08300583 +0x0a53:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08300588 +0x0a58:  cmp    %eax,%ebx
0830058a +0x0a5a:  setae  %al
0830058d +0x0a5d:  test   %al,%al
0830058f +0x0a5f:  je     083008d0 <+0xda0>
08300595 +0x0a65:  mov    0x8(%ebp),%eax
08300598 +0x0a68:  mov    0x188(%eax),%eax
0830059e +0x0a6e:  mov    %eax,(%esp)
083005a1 +0x0a71:  call   0830e658 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x23d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x23d
083005a6 +0x0a76:  lea    -0x14c(%ebp),%edx
083005ac +0x0a7c:  mov    %eax,0x4(%esp)
083005b0 +0x0a80:  mov    %edx,(%esp)
083005b3 +0x0a83:  call   0830fbe2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x17c7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x17c7
083005b8 +0x0a88:  sub    $0x4,%esp
083005bb +0x0a8b:  mov    0x8(%ebp),%eax
083005be +0x0a8e:  mov    0x188(%eax),%eax
083005c4 +0x0a94:  mov    %eax,(%esp)
083005c7 +0x0a97:  call   0830e658 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x23d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x23d
083005cc +0x0a9c:  lea    -0x150(%ebp),%edx
083005d2 +0x0aa2:  mov    %eax,0x4(%esp)
083005d6 +0x0aa6:  mov    %edx,(%esp)
083005d9 +0x0aa9:  call   0830fc0e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x17f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x17f3
083005de +0x0aae:  sub    $0x4,%esp
083005e1 +0x0ab1:  movl   $0x0,-0x30(%ebp)
083005e8 +0x0ab8:  mov    0x8(%ebp),%eax
083005eb +0x0abb:  mov    0x188(%eax),%eax
083005f1 +0x0ac1:  mov    %eax,(%esp)
083005f4 +0x0ac4:  call   0830e64a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x22f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x22f
083005f9 +0x0ac9:  mov    %eax,(%esp)
083005fc +0x0acc:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08300601 +0x0ad1:  mov    %eax,-0x2c(%ebp)
08300604 +0x0ad4:  jmp    083008b0 <+0xd80>
08300609 +0x0ad9:  lea    -0x14c(%ebp),%eax
0830060f +0x0adf:  mov    %eax,(%esp)
08300612 +0x0ae2:  call   0830fc7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1861
08300617 +0x0ae7:  mov    0x8(%eax),%eax
0830061a +0x0aea:  add    %eax,-0x30(%ebp)
0830061d +0x0aed:  mov    -0x2c(%ebp),%eax
08300620 +0x0af0:  cmp    -0x30(%ebp),%eax
08300623 +0x0af3:  jae    083008a2 <+0xd72>
08300629 +0x0af9:  lea    -0x168(%ebp),%eax
0830062f +0x0aff:  mov    %eax,(%esp)
08300632 +0x0b02:  call   0830ee4c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa31>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa31
08300637 +0x0b07:  lea    -0x14c(%ebp),%eax
0830063d +0x0b0d:  mov    %eax,(%esp)
08300640 +0x0b10:  call   0830fc7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1861
08300645 +0x0b15:  mov    (%eax),%eax
08300647 +0x0b17:  mov    %eax,-0x168(%ebp)
0830064d +0x0b1d:  lea    -0x14c(%ebp),%eax
08300653 +0x0b23:  mov    %eax,(%esp)
08300656 +0x0b26:  call   0830fc7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1861
0830065b +0x0b2b:  mov    0x4(%eax),%eax
0830065e +0x0b2e:  mov    %eax,-0x15c(%ebp)
08300664 +0x0b34:  lea    -0x134(%ebp),%eax
0830066a +0x0b3a:  mov    %eax,(%esp)
0830066d +0x0b3d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08300672 +0x0b42:  mov    %eax,(%esp)
08300675 +0x0b45:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830067a +0x0b4a:  mov    %eax,0x4(%esp)
0830067e +0x0b4e:  lea    -0x134(%ebp),%eax
08300684 +0x0b54:  mov    %eax,(%esp)
08300687 +0x0b57:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
0830068c +0x0b5c:  mov    0x4(%eax),%edx
0830068f +0x0b5f:  mov    (%eax),%eax
08300691 +0x0b61:  mov    %eax,-0x164(%ebp)
08300697 +0x0b67:  mov    %edx,-0x160(%ebp)
0830069d +0x0b6d:  lea    -0x14c(%ebp),%eax
083006a3 +0x0b73:  mov    %eax,(%esp)
083006a6 +0x0b76:  call   0830fc7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1861
083006ab +0x0b7b:  mov    0xc(%eax),%eax
083006ae +0x0b7e:  mov    %eax,-0x158(%ebp)
083006b4 +0x0b84:  lea    -0x14c(%ebp),%eax
083006ba +0x0b8a:  mov    %eax,(%esp)
083006bd +0x0b8d:  call   0830fc7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1861
083006c2 +0x0b92:  mov    0x10(%eax),%eax
083006c5 +0x0b95:  mov    %eax,-0x154(%ebp)
083006cb +0x0b9b:  mov    -0x164(%ebp),%eax
083006d1 +0x0ba1:  mov    %al,-0x16a(%ebp)
083006d7 +0x0ba7:  mov    -0x160(%ebp),%eax
083006dd +0x0bad:  mov    %al,-0x169(%ebp)
083006e3 +0x0bb3:  lea    -0x9c(%ebp),%eax
083006e9 +0x0bb9:  lea    -0x13c(%ebp),%edx
083006ef +0x0bbf:  mov    %edx,0x4(%esp)
083006f3 +0x0bc3:  mov    %eax,(%esp)
083006f6 +0x0bc6:  call   0830fcac <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1891>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1891
083006fb +0x0bcb:  sub    $0x4,%esp
083006fe +0x0bce:  lea    -0x98(%ebp),%eax
08300704 +0x0bd4:  lea    -0x13c(%ebp),%edx
0830070a +0x0bda:  mov    %edx,0x4(%esp)
0830070e +0x0bde:  mov    %eax,(%esp)
08300711 +0x0be1:  call   0830fc86 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x186b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x186b
08300716 +0x0be6:  sub    $0x4,%esp
08300719 +0x0be9:  lea    -0x1ac(%ebp),%eax
0830071f +0x0bef:  lea    -0x16a(%ebp),%edx
08300725 +0x0bf5:  mov    %edx,0xc(%esp)
08300729 +0x0bf9:  mov    -0x9c(%ebp),%edx
0830072f +0x0bff:  mov    %edx,0x8(%esp)
08300733 +0x0c03:  mov    -0x98(%ebp),%edx
08300739 +0x0c09:  mov    %edx,0x4(%esp)
0830073d +0x0c0d:  mov    %eax,(%esp)
08300740 +0x0c10:  call   0830fccf <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x18b4>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x18b4
08300745 +0x0c15:  sub    $0x4,%esp
08300748 +0x0c18:  mov    -0x1ac(%ebp),%eax
0830074e +0x0c1e:  mov    %eax,-0x140(%ebp)
08300754 +0x0c24:  lea    -0x94(%ebp),%eax
0830075a +0x0c2a:  lea    -0x13c(%ebp),%edx
08300760 +0x0c30:  mov    %edx,0x4(%esp)
08300764 +0x0c34:  mov    %eax,(%esp)
08300767 +0x0c37:  call   0830fcac <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1891>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1891
0830076c +0x0c3c:  sub    $0x4,%esp
0830076f +0x0c3f:  lea    -0x94(%ebp),%eax
08300775 +0x0c45:  mov    %eax,0x4(%esp)
08300779 +0x0c49:  lea    -0x140(%ebp),%eax
0830077f +0x0c4f:  mov    %eax,(%esp)
08300782 +0x0c52:  call   0830fd24 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1909>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1909
08300787 +0x0c57:  test   %al,%al
08300789 +0x0c59:  je     08300819 <+0xce9>
0830078f +0x0c5f:  mov    -0x15c(%ebp),%eax
08300795 +0x0c65:  mov    %eax,-0x1b4(%ebp)
0830079b +0x0c6b:  mov    -0x168(%ebp),%edi
083007a1 +0x0c71:  mov    -0x160(%ebp),%esi
083007a7 +0x0c77:  mov    -0x164(%ebp),%ebx
083007ad +0x0c7d:  movl   $0x0,0xc(%esp)
083007b5 +0x0c85:  movl   $0x3e3,0x8(%esp)
083007bd +0x0c8d:  movl   $&_ZZN13CBattle_Field11SetGridPathEP10MazeScriptiE19__PRETTY_FUNCTION__,0x4(%esp)
083007c5 +0x0c95:  lea    -0x90(%ebp),%eax
083007cb +0x0c9b:  mov    %eax,(%esp)
083007ce +0x0c9e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083007d3 +0x0ca3:  mov    -0x1b4(%ebp),%edx
083007d9 +0x0ca9:  mov    %edx,0x14(%esp)
083007dd +0x0cad:  mov    %edi,0x10(%esp)
083007e1 +0x0cb1:  mov    %esi,0xc(%esp)
083007e5 +0x0cb5:  mov    %ebx,0x8(%esp)
083007e9 +0x0cb9:  movl   $"Event monster generated (%d,%d ->%d(%d)",0x4(%esp)
083007f1 +0x0cc1:  lea    -0x90(%ebp),%eax
083007f7 +0x0cc7:  mov    %eax,(%esp)
083007fa +0x0cca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083007ff +0x0ccf:  lea    -0x16a(%ebp),%eax
08300805 +0x0cd5:  mov    %eax,0x4(%esp)
08300809 +0x0cd9:  lea    -0x13c(%ebp),%eax
0830080f +0x0cdf:  mov    %eax,(%esp)
08300812 +0x0ce2:  call   0830fd38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x191d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x191d
08300817 +0x0ce7:  jmp    08300885 <+0xd55>
08300819 +0x0ce9:  mov    -0x15c(%ebp),%eax
0830081f +0x0cef:  mov    %eax,-0x1b0(%ebp)
08300825 +0x0cf5:  mov    -0x168(%ebp),%edi
0830082b +0x0cfb:  mov    -0x160(%ebp),%esi
08300831 +0x0d01:  mov    -0x164(%ebp),%ebx
08300837 +0x0d07:  movl   $0x0,0xc(%esp)
0830083f +0x0d0f:  movl   $0x3e8,0x8(%esp)
08300847 +0x0d17:  movl   $&_ZZN13CBattle_Field11SetGridPathEP10MazeScriptiE19__PRETTY_FUNCTION__,0x4(%esp)
0830084f +0x0d1f:  lea    -0x80(%ebp),%eax
08300852 +0x0d22:  mov    %eax,(%esp)
08300855 +0x0d25:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0830085a +0x0d2a:  mov    -0x1b0(%ebp),%edx
08300860 +0x0d30:  mov    %edx,0x14(%esp)
08300864 +0x0d34:  mov    %edi,0x10(%esp)
08300868 +0x0d38:  mov    %esi,0xc(%esp)
0830086c +0x0d3c:  mov    %ebx,0x8(%esp)
08300870 +0x0d40:  movl   $"Event monster SameMap (not generated) (%d,%d ->%d(%d)",0x4(%esp)
08300878 +0x0d48:  lea    -0x80(%ebp),%eax
0830087b +0x0d4b:  mov    %eax,(%esp)
0830087e +0x0d4e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08300883 +0x0d53:  jmp    083008d0 <+0xda0>
08300885 +0x0d55:  mov    0x8(%ebp),%eax
08300888 +0x0d58:  lea    0x17c(%eax),%edx
0830088e +0x0d5e:  lea    -0x168(%ebp),%eax
08300894 +0x0d64:  mov    %eax,0x4(%esp)
08300898 +0x0d68:  mov    %edx,(%esp)
0830089b +0x0d6b:  call   0830fd6e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1953>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1953
083008a0 +0x0d70:  jmp    083008d0 <+0xda0>
083008a2 +0x0d72:  lea    -0x14c(%ebp),%eax
083008a8 +0x0d78:  mov    %eax,(%esp)
083008ab +0x0d7b:  call   0830fc66 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x184b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x184b
083008b0 +0x0d80:  lea    -0x150(%ebp),%eax
083008b6 +0x0d86:  mov    %eax,0x4(%esp)
083008ba +0x0d8a:  lea    -0x14c(%ebp),%eax
083008c0 +0x0d90:  mov    %eax,(%esp)
083008c3 +0x0d93:  call   0830fc3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x181f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x181f
083008c8 +0x0d98:  test   %al,%al
083008ca +0x0d9a:  jne    08300609 <+0xad9>
083008d0 +0x0da0:  addl   $0x1,-0x34(%ebp)
083008d4 +0x0da4:  mov    0x8(%ebp),%eax
083008d7 +0x0da7:  mov    0x188(%eax),%eax
083008dd +0x0dad:  mov    %eax,(%esp)
083008e0 +0x0db0:  call   0830e62e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x213>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x213
083008e5 +0x0db5:  cmp    -0x34(%ebp),%eax
083008e8 +0x0db8:  seta   %al
083008eb +0x0dbb:  test   %al,%al
083008ed +0x0dbd:  jne    08300569 <+0xa39>
083008f3 +0x0dc3:  lea    -0x13c(%ebp),%eax
083008f9 +0x0dc9:  mov    %eax,(%esp)
083008fc +0x0dcc:  call   0830fde2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x19c7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x19c7
08300901 +0x0dd1:  jmp    0830091b <+0xdeb>
08300903 +0x0dd3:  mov    %edx,%ebx
08300905 +0x0dd5:  mov    %eax,%esi
08300907 +0x0dd7:  lea    -0x13c(%ebp),%eax
0830090d +0x0ddd:  mov    %eax,(%esp)
08300910 +0x0de0:  call   0830ee38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa1d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa1d
08300915 +0x0de5:  mov    %esi,%eax
08300917 +0x0de7:  mov    %ebx,%edx
08300919 +0x0de9:  jmp    0830092b <+0xdfb>
0830091b +0x0deb:  lea    -0x13c(%ebp),%eax
08300921 +0x0df1:  mov    %eax,(%esp)
08300924 +0x0df4:  call   0830ee38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa1d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa1d
08300929 +0x0df9:  jmp    08300949 <+0xe19>
0830092b +0x0dfb:  mov    %edx,%ebx
0830092d +0x0dfd:  mov    %eax,%esi
0830092f +0x0dff:  lea    -0x134(%ebp),%eax
08300935 +0x0e05:  mov    %eax,(%esp)
08300938 +0x0e08:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0830093d +0x0e0d:  mov    %esi,%eax
0830093f +0x0e0f:  mov    %ebx,%edx
08300941 +0x0e11:  mov    %eax,(%esp)
08300944 +0x0e14:  call   08ae3750 <_Unwind_Resume>
08300949 +0x0e19:  lea    -0x134(%ebp),%eax
0830094f +0x0e1f:  mov    %eax,(%esp)
08300952 +0x0e22:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08300957 +0x0e27:  mov    0x8(%ebp),%eax
0830095a +0x0e2a:  mov    0x188(%eax),%eax
08300960 +0x0e30:  mov    %eax,(%esp)
08300963 +0x0e33:  call   0830e666 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24b
08300968 +0x0e38:  test   %eax,%eax
0830096a +0x0e3a:  setne  %al
0830096d +0x0e3d:  test   %al,%al
0830096f +0x0e3f:  je     08300c6b <+0x113b>
08300975 +0x0e45:  lea    -0x178(%ebp),%eax
0830097b +0x0e4b:  mov    %eax,(%esp)
0830097e +0x0e4e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08300983 +0x0e53:  movl   $0x0,-0x17c(%ebp)
0830098d +0x0e5d:  jmp    08300a3f <+0xf0f>
08300992 +0x0e62:  movl   $0x0,-0x180(%ebp)
0830099c +0x0e6c:  jmp    08300a15 <+0xee5>
0830099e +0x0e6e:  mov    -0x17c(%ebp),%ecx
083009a4 +0x0e74:  mov    -0x180(%ebp),%edx
083009aa +0x0e7a:  mov    0x8(%ebp),%eax
083009ad +0x0e7d:  mov    0x74(%eax),%eax
083009b0 +0x0e80:  mov    %ecx,0x8(%esp)
083009b4 +0x0e84:  mov    %edx,0x4(%esp)
083009b8 +0x0e88:  mov    %eax,(%esp)
083009bb +0x0e8b:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
083009c0 +0x0e90:  mov    %eax,-0x28(%ebp)
083009c3 +0x0e93:  mov    -0x28(%ebp),%eax
083009c6 +0x0e96:  mov    (%eax),%eax
083009c8 +0x0e98:  test   %eax,%eax
083009ca +0x0e9a:  je     08300a05 <+0xed5>
083009cc +0x0e9c:  lea    -0x70(%ebp),%eax
083009cf +0x0e9f:  lea    -0x17c(%ebp),%edx
083009d5 +0x0ea5:  mov    %edx,0x8(%esp)
083009d9 +0x0ea9:  lea    -0x180(%ebp),%edx
083009df +0x0eaf:  mov    %edx,0x4(%esp)
083009e3 +0x0eb3:  mov    %eax,(%esp)
083009e6 +0x0eb6:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
083009eb +0x0ebb:  sub    $0x4,%esp
083009ee +0x0ebe:  lea    -0x70(%ebp),%eax
083009f1 +0x0ec1:  mov    %eax,0x4(%esp)
083009f5 +0x0ec5:  lea    -0x178(%ebp),%eax
083009fb +0x0ecb:  mov    %eax,(%esp)
083009fe +0x0ece:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08300a03 +0x0ed3:  jmp    08300a06 <+0xed6>
08300a05 +0x0ed5:  nop
08300a06 +0x0ed6:  mov    -0x180(%ebp),%eax
08300a0c +0x0edc:  add    $0x1,%eax
08300a0f +0x0edf:  mov    %eax,-0x180(%ebp)
08300a15 +0x0ee5:  mov    0x8(%ebp),%eax
08300a18 +0x0ee8:  mov    0x74(%eax),%eax
08300a1b +0x0eeb:  mov    (%eax),%edx
08300a1d +0x0eed:  mov    -0x180(%ebp),%eax
08300a23 +0x0ef3:  cmp    %eax,%edx
08300a25 +0x0ef5:  setg   %al
08300a28 +0x0ef8:  test   %al,%al
08300a2a +0x0efa:  jne    0830099e <+0xe6e>
08300a30 +0x0f00:  mov    -0x17c(%ebp),%eax
08300a36 +0x0f06:  add    $0x1,%eax
08300a39 +0x0f09:  mov    %eax,-0x17c(%ebp)
08300a3f +0x0f0f:  mov    0x8(%ebp),%eax
08300a42 +0x0f12:  mov    0x74(%eax),%eax
08300a45 +0x0f15:  mov    0x4(%eax),%edx
08300a48 +0x0f18:  mov    -0x17c(%ebp),%eax
08300a4e +0x0f1e:  cmp    %eax,%edx
08300a50 +0x0f20:  setg   %al
08300a53 +0x0f23:  test   %al,%al
08300a55 +0x0f25:  jne    08300992 <+0xe62>
08300a5b +0x0f2b:  movl   $0x0,-0x24(%ebp)
08300a62 +0x0f32:  jmp    08300c18 <+0x10e8>
08300a67 +0x0f37:  mov    0x8(%ebp),%eax
08300a6a +0x0f3a:  mov    0x188(%eax),%eax
08300a70 +0x0f40:  mov    %eax,(%esp)
08300a73 +0x0f43:  call   0830e674 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x259>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x259
08300a78 +0x0f48:  mov    %eax,%ebx
08300a7a +0x0f4a:  movl   $0x2710,(%esp)
08300a81 +0x0f51:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08300a86 +0x0f56:  cmp    %eax,%ebx
08300a88 +0x0f58:  setae  %al
08300a8b +0x0f5b:  test   %al,%al
08300a8d +0x0f5d:  je     08300c14 <+0x10e4>
08300a93 +0x0f63:  mov    0x8(%ebp),%eax
08300a96 +0x0f66:  mov    0x188(%eax),%eax
08300a9c +0x0f6c:  mov    %eax,(%esp)
08300a9f +0x0f6f:  call   0830e690 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x275>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x275
08300aa4 +0x0f74:  lea    -0x184(%ebp),%edx
08300aaa +0x0f7a:  mov    %eax,0x4(%esp)
08300aae +0x0f7e:  mov    %edx,(%esp)
08300ab1 +0x0f81:  call   0830fe00 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x19e5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x19e5
08300ab6 +0x0f86:  sub    $0x4,%esp
08300ab9 +0x0f89:  mov    0x8(%ebp),%eax
08300abc +0x0f8c:  mov    0x188(%eax),%eax
08300ac2 +0x0f92:  mov    %eax,(%esp)
08300ac5 +0x0f95:  call   0830e690 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x275>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x275
08300aca +0x0f9a:  lea    -0x188(%ebp),%edx
08300ad0 +0x0fa0:  mov    %eax,0x4(%esp)
08300ad4 +0x0fa4:  mov    %edx,(%esp)
08300ad7 +0x0fa7:  call   0830fe2c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a11>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a11
08300adc +0x0fac:  sub    $0x4,%esp
08300adf +0x0faf:  movl   $0x0,-0x20(%ebp)
08300ae6 +0x0fb6:  mov    0x8(%ebp),%eax
08300ae9 +0x0fb9:  mov    0x188(%eax),%eax
08300aef +0x0fbf:  mov    %eax,(%esp)
08300af2 +0x0fc2:  call   0830e682 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x267>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x267
08300af7 +0x0fc7:  mov    %eax,(%esp)
08300afa +0x0fca:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08300aff +0x0fcf:  mov    %eax,-0x1c(%ebp)
08300b02 +0x0fd2:  jmp    08300bf4 <+0x10c4>
08300b07 +0x0fd7:  lea    -0x184(%ebp),%eax
08300b0d +0x0fdd:  mov    %eax,(%esp)
08300b10 +0x0fe0:  call   0830fe9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a7f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a7f
08300b15 +0x0fe5:  mov    0x8(%eax),%eax
08300b18 +0x0fe8:  add    %eax,-0x20(%ebp)
08300b1b +0x0feb:  mov    -0x1c(%ebp),%eax
08300b1e +0x0fee:  cmp    -0x20(%ebp),%eax
08300b21 +0x0ff1:  jae    08300be6 <+0x10b6>
08300b27 +0x0ff7:  lea    -0x1a0(%ebp),%eax
08300b2d +0x0ffd:  mov    %eax,(%esp)
08300b30 +0x1000:  call   0830ee4c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa31>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa31
08300b35 +0x1005:  lea    -0x184(%ebp),%eax
08300b3b +0x100b:  mov    %eax,(%esp)
08300b3e +0x100e:  call   0830fe9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a7f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a7f
08300b43 +0x1013:  mov    (%eax),%eax
08300b45 +0x1015:  mov    %eax,-0x1a0(%ebp)
08300b4b +0x101b:  lea    -0x184(%ebp),%eax
08300b51 +0x1021:  mov    %eax,(%esp)
08300b54 +0x1024:  call   0830fe9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a7f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a7f
08300b59 +0x1029:  mov    0x4(%eax),%eax
08300b5c +0x102c:  mov    %eax,-0x194(%ebp)
08300b62 +0x1032:  lea    -0x178(%ebp),%eax
08300b68 +0x1038:  mov    %eax,(%esp)
08300b6b +0x103b:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08300b70 +0x1040:  mov    %eax,(%esp)
08300b73 +0x1043:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08300b78 +0x1048:  mov    %eax,0x4(%esp)
08300b7c +0x104c:  lea    -0x178(%ebp),%eax
08300b82 +0x1052:  mov    %eax,(%esp)
08300b85 +0x1055:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
08300b8a +0x105a:  mov    0x4(%eax),%edx
08300b8d +0x105d:  mov    (%eax),%eax
08300b8f +0x105f:  mov    %eax,-0x19c(%ebp)
08300b95 +0x1065:  mov    %edx,-0x198(%ebp)
08300b9b +0x106b:  lea    -0x184(%ebp),%eax
08300ba1 +0x1071:  mov    %eax,(%esp)
08300ba4 +0x1074:  call   0830fe9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a7f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a7f
08300ba9 +0x1079:  mov    0xc(%eax),%eax
08300bac +0x107c:  mov    %eax,-0x190(%ebp)
08300bb2 +0x1082:  lea    -0x184(%ebp),%eax
08300bb8 +0x1088:  mov    %eax,(%esp)
08300bbb +0x108b:  call   0830fe9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a7f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a7f
08300bc0 +0x1090:  mov    0x10(%eax),%eax
08300bc3 +0x1093:  mov    %eax,-0x18c(%ebp)
08300bc9 +0x1099:  mov    0x8(%ebp),%eax
08300bcc +0x109c:  lea    0x17c(%eax),%edx
08300bd2 +0x10a2:  lea    -0x1a0(%ebp),%eax
08300bd8 +0x10a8:  mov    %eax,0x4(%esp)
08300bdc +0x10ac:  mov    %edx,(%esp)
08300bdf +0x10af:  call   0830fd6e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1953>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1953
08300be4 +0x10b4:  jmp    08300c14 <+0x10e4>
08300be6 +0x10b6:  lea    -0x184(%ebp),%eax
08300bec +0x10bc:  mov    %eax,(%esp)
08300bef +0x10bf:  call   0830fe84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a69>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a69
08300bf4 +0x10c4:  lea    -0x188(%ebp),%eax
08300bfa +0x10ca:  mov    %eax,0x4(%esp)
08300bfe +0x10ce:  lea    -0x184(%ebp),%eax
08300c04 +0x10d4:  mov    %eax,(%esp)
08300c07 +0x10d7:  call   0830fe58 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a3d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a3d
08300c0c +0x10dc:  test   %al,%al
08300c0e +0x10de:  jne    08300b07 <+0xfd7>
08300c14 +0x10e4:  addl   $0x1,-0x24(%ebp)
08300c18 +0x10e8:  mov    0x8(%ebp),%eax
08300c1b +0x10eb:  mov    0x188(%eax),%eax
08300c21 +0x10f1:  mov    %eax,(%esp)
08300c24 +0x10f4:  call   0830e666 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24b
08300c29 +0x10f9:  cmp    -0x24(%ebp),%eax
08300c2c +0x10fc:  seta   %al
08300c2f +0x10ff:  test   %al,%al
08300c31 +0x1101:  jne    08300a67 <+0xf37>
08300c37 +0x1107:  jmp    08300c57 <+0x1127>
08300c39 +0x1109:  mov    %edx,%ebx
08300c3b +0x110b:  mov    %eax,%esi
08300c3d +0x110d:  lea    -0x178(%ebp),%eax
08300c43 +0x1113:  mov    %eax,(%esp)
08300c46 +0x1116:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08300c4b +0x111b:  mov    %esi,%eax
08300c4d +0x111d:  mov    %ebx,%edx
08300c4f +0x111f:  mov    %eax,(%esp)
08300c52 +0x1122:  call   08ae3750 <_Unwind_Resume>
08300c57 +0x1127:  lea    -0x178(%ebp),%eax
08300c5d +0x112d:  mov    %eax,(%esp)
08300c60 +0x1130:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08300c65 +0x1135:  jmp    08300c6b <+0x113b>
08300c67 +0x1137:  nop
08300c68 +0x1138:  jmp    08300c6b <+0x113b>
08300c6a +0x113a:  nop
08300c6b +0x113b:  lea    -0xc(%ebp),%esp
08300c6e +0x113e:  add    $0x0,%esp
08300c71 +0x1141:  pop    %ebx
08300c72 +0x1142:  pop    %esi
08300c73 +0x1143:  pop    %edi
08300c74 +0x1144:  pop    %ebp
08300c75 +0x1145:  ret
```

## 反编译 C

```c
// CBattle_Field::SetGridPath @ 0x82ffb30

/* CBattle_Field::SetGridPath(MazeScript*, int) */

void __thiscall CBattle_Field::SetGridPath(CBattle_Field *this,MazeScript *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int local_1f4 [2];
  int aiStack_1e0 [12];
  undefined4 local_1b0 [3];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  int local_184;
  int local_180;
  undefined1 local_17c [14];
  undefined1 local_16e;
  undefined1 local_16d;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [4];
  undefined1 local_150 [4];
  int local_14c;
  int local_148;
  undefined4 local_144;
  list<MONSTER_POS,std::allocator<MONSTER_POS>> local_140 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_138 [12];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_120 [12];
  undefined4 local_114;
  undefined4 local_110;
  __normal_iterator local_10c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_108 [4];
  int local_104;
  int local_100;
  __normal_iterator local_fc [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_f8 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_f4 [12];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [2];
  int local_c0 [2];
  list<_mapMonster,std::allocator<_mapMonster>> local_b8 [8];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [8];
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  piVar12 = (int *)&stack0xfffffe14;
  *(MazeScript **)(this + 0x74) = param_1;
  *(undefined4 *)(this + 0x18c) = **(undefined4 **)(this + 0x74);
  *(undefined4 *)(this + 400) = *(undefined4 *)(*(int *)(this + 0x74) + 4);
  if (*(int *)(this + 0x18c) + *(int *)(this + 400) < 4) {
    this[0x1b8] = (CBattle_Field)0x0;
    this[0x1cb] = (CBattle_Field)0x1;
  }
  std::pair<int,int>::pair((pair<int,int> *)&local_d0);
  std::pair<int,int>::pair((pair<int,int> *)&local_d8);
  std::pair<int,int>::pair((pair<int,int> *)&local_e0);
  iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x74) + 0x14));
  if (iVar5 == 0) {
    return;
  }
  uVar6 = rand();
  uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x74) + 0x14));
  piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (*(int *)(this + 0x74) + 0x14),uVar6 % uVar7);
  local_cc = piVar8[1];
  local_d0 = *piVar8;
  iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x74) + 0x20));
  if (iVar5 == 0) {
    return;
  }
  uVar6 = rand();
  local_6c = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (*(int *)(this + 0x74) + 0x20));
  local_6c = uVar6 % local_6c;
  puVar9 = (undefined4 *)
           std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                      (*(int *)(this + 0x74) + 0x20),local_6c);
  local_d4 = puVar9[1];
  local_d8 = *puVar9;
  if (0 < param_2) {
    local_68 = local_6c;
    local_64 = 0;
    *(undefined4 *)(this + 0xcc) = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0));
    for (local_60 = 0; local_60 < param_2; local_60 = local_60 + 1) {
      uVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (*(int *)(this + 0x74) + 0x20));
      if (1 < uVar6) {
        uVar6 = rand();
        iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (*(int *)(this + 0x74) + 0x20));
        local_64 = uVar6 % (iVar5 - 1U);
        if ((int)local_68 <= (int)local_64) {
          local_64 = local_64 + 1;
        }
        puVar9 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (*(int *)(this + 0x74) + 0x20),local_64);
        local_e4 = puVar9[1];
        local_e8 = *puVar9;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0),
                   (pair *)&local_e8);
        local_68 = local_64;
      }
    }
  }
  if (-1 < (int)(local_6c - 1)) {
    puVar9 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (*(int *)(this + 0x74) + 0x20),local_6c - 1);
    local_dc = puVar9[1];
    local_e0 = *puVar9;
  }
  iVar5 = local_6c + 1;
  iVar10 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                      (*(int *)(this + 0x74) + 0x20));
  if (iVar5 <= iVar10 + -1) {
    puVar9 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (*(int *)(this + 0x74) + 0x20),local_6c + 1);
    local_dc = puVar9[1];
    local_e0 = *puVar9;
  }
  *(int *)(this + 4) = local_d0;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 4);
  *(int *)(this + 8) = local_cc;
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 100);
  if ((*(int *)(this + 0x188) == 0) ||
     (cVar3 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188)), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    for (local_5c = 0; local_5c < 4; local_5c = local_5c + 1) {
      std::make_pair<int&,int&>(local_c8,&local_d0);
      std::pair<int,int>::operator=
                ((pair<int,int> *)(this + (local_5c + 2) * 8 + 0xc),(pair *)local_c8);
      std::make_pair<int&,int&>(local_c0,&local_d0);
      std::pair<int,int>::operator=
                ((pair<int,int> *)(this + (local_5c + 6) * 8 + 0xc),(pair *)local_c0);
    }
  }
  *(undefined4 *)(this + 0xc) = local_d8;
  *(undefined4 *)(this + 0x10) = local_d4;
  *(undefined4 *)(this + 0x14) = local_e0;
  *(undefined4 *)(this + 0x18) = local_dc;
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(*(int *)(this + 0x74) + 0x30);
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(*(int *)(this + 0x74) + 0x34);
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(*(int *)(this + 0x74) + 0x2c);
  CRidable::SetRidableObject
            ((CRidable *)(this + 0xd0),(RidableScript *)(*(int *)(this + 0x74) + 0x38));
  if (*(int *)(*(int *)(this + 0x188) + 0x90c) == 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_f4);
    for (local_100 = 0; local_100 < *(int *)(*(int *)(this + 0x74) + 4); local_100 = local_100 + 1)
    {
      for (local_104 = 0; local_104 < **(int **)(this + 0x74); local_104 = local_104 + 1) {
        if (((*(int *)(this + 0xc) != local_104) || (*(int *)(this + 0x10) != local_100)) &&
           ((*(int *)(this + 4) != local_104 || (*(int *)(this + 8) != local_100)))) {
          local_58 = MazeScript::getGridR(*(MazeScript **)(this + 0x74),local_104,local_100);
                    /* try { // try from 0830008c to 083002e3 has its CatchHandler @ 083003d3 */
          cVar3 = std::vector<int,std::allocator<int>>::empty();
          if (cVar3 == '\0') {
            std::vector<int,std::allocator<int>>::begin();
            std::vector<int,std::allocator<int>>::end();
            while (bVar4 = __gnu_cxx::operator!=(local_108,local_10c), bVar4) {
              puVar9 = (undefined4 *)
                       __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                       ::operator*(local_108);
              local_54 = *puVar9;
              iVar5 = G_CDataManager();
              local_50 = CDataManager::find_map(iVar5);
              if (local_50 == 0) break;
              CMap::get_condition_monster_list();
              cVar3 = std::list<_mapMonster,std::allocator<_mapMonster>>::empty(local_b8);
              std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_b8);
              if (cVar3 != '\0') break;
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              operator++(local_108);
            }
            bVar4 = __gnu_cxx::operator==(local_108,local_10c);
            if (bVar4) {
              std::make_pair<int&,int&>(local_b0,&local_104);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        (local_f4,(pair *)local_b0);
            }
          }
        }
      }
    }
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    while (bVar4 = __gnu_cxx::operator!=(local_f8,local_fc), bVar4) {
      puVar9 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_f8);
      local_4c = *puVar9;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_f8);
      piVar8 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_f8);
      local_48 = *piVar8;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_f8);
      puVar9 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_f8);
      local_44 = *puVar9;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_f8);
      stConditionEnterBossRoomStatus_t::stConditionEnterBossRoomStatus_t
                ((stConditionEnterBossRoomStatus_t *)&local_124);
      local_124 = local_4c;
      local_114 = 0;
      local_110 = local_44;
      for (local_40 = 0; local_40 < local_48; local_40 = local_40 + 1) {
        iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_f4);
                    /* try { // try from 0830031a to 08300388 has its CatchHandler @ 0830038b */
        uVar6 = get_rand_int(iVar5);
        puVar9 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                           (local_f4,uVar6);
        local_128 = puVar9[1];
        local_12c = *puVar9;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (avStack_120,(pair *)&local_12c);
      }
      std::
      vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
      ::push_back((vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
                   *)(this + 0x170),(stConditionEnterBossRoomStatus_t *)&local_124);
                    /* try { // try from 083003ac to 083003c8 has its CatchHandler @ 083003d3 */
      stConditionEnterBossRoomStatus_t::~stConditionEnterBossRoomStatus_t
                ((stConditionEnterBossRoomStatus_t *)&local_124);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_f4);
  }
  iVar5 = CDungeon::getTryGenEventMonsterCnt(*(CDungeon **)(this + 0x188));
  if (iVar5 != 0) {
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x24);
    cVar3 = (**(code **)(*piVar8 + 0x34))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_0830044d;
    }
  }
  bVar4 = false;
LAB_0830044d:
  if (bVar4) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_138);
    for (local_148 = 0; local_148 < *(int *)(*(int *)(this + 0x74) + 4); local_148 = local_148 + 1)
    {
      for (local_14c = 0; local_14c < **(int **)(this + 0x74); local_14c = local_14c + 1) {
        local_3c = (int *)MazeScript::getGridR(*(MazeScript **)(this + 0x74),local_14c,local_148);
        if (*local_3c != 0) {
                    /* try { // try from 083004c9 to 0830054e has its CatchHandler @ 0830092b */
          std::make_pair<int&,int&>(local_a8,&local_14c);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_138,(pair *)local_a8);
        }
      }
    }
    std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::list(local_140);
    std::_List_iterator<MONSTER_POS>::_List_iterator((_List_iterator<MONSTER_POS> *)&local_144);
    local_38 = 0;
    piVar12 = (int *)&stack0xfffffe14;
    while( true ) {
      *piVar12 = *(undefined4 *)(this + 0x188);
      piVar12[-1] = 0x83008e5;
      uVar6 = CDungeon::getTryGenEventMonsterCnt((CDungeon *)*piVar12);
      if (uVar6 <= local_38) break;
      *piVar12 = *(undefined4 *)(this + 0x188);
      piVar12[-1] = 0x830057a;
      uVar6 = CDungeon::getTryGenEventMonsterProb((CDungeon *)*piVar12);
      *piVar12 = 10000;
                    /* try { // try from 08300583 to 08300900 has its CatchHandler @ 08300903 */
      piVar12[-1] = 0x8300588;
      uVar7 = get_rand_int(*piVar12);
      piVar8 = piVar12;
      if (uVar7 <= uVar6) {
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x83005a6;
        iVar5 = CDungeon::getEventMonsters((CDungeon *)*piVar12);
        piVar12[1] = iVar5;
        *piVar12 = (int)local_150;
        piVar12[-1] = 0x83005b8;
        std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>::begin();
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x83005cc;
        iVar5 = CDungeon::getEventMonsters((CDungeon *)*piVar12);
        piVar12[1] = iVar5;
        *piVar12 = (int)local_154;
        piVar12[-1] = 0x83005de;
        std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>::end();
        local_34 = 0;
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x83005f9;
        uVar11 = CDungeon::getEventMonsterTotalProb((CDungeon *)*piVar12);
        *piVar12 = uVar11;
        piVar12[-1] = 0x8300601;
        local_30 = get_rand_int(*piVar12);
        while( true ) {
          piVar12[1] = (int)local_154;
          *piVar12 = (int)local_150;
          piVar12[-1] = 0x83008c8;
          bVar4 = __gnu_cxx::operator!=
                            ((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1]);
          if (!bVar4) break;
          *piVar12 = (int)local_150;
          piVar12[-1] = 0x8300617;
          iVar5 = __gnu_cxx::
                  __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                  ::operator->((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                                *)*piVar12);
          local_34 = local_34 + *(int *)(iVar5 + 8);
          if (local_30 < local_34) {
            *piVar12 = (int)&local_16c;
            piVar12[-1] = 0x8300637;
            stEventMonsterStatus_t::stEventMonsterStatus_t((stEventMonsterStatus_t *)*piVar12);
            *piVar12 = (int)local_150;
            piVar12[-1] = 0x8300645;
            piVar8 = (int *)__gnu_cxx::
                            __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                            ::operator->((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                                          *)*piVar12);
            local_16c = *piVar8;
            *piVar12 = (int)local_150;
            piVar12[-1] = 0x830065b;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                    ::operator->((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                                  *)*piVar12);
            local_160 = *(int *)(iVar5 + 4);
            *piVar12 = (int)local_138;
            piVar12[-1] = 0x8300672;
            uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                *piVar12);
            *piVar12 = uVar11;
            piVar12[-1] = 0x830067a;
            iVar5 = get_rand_int(*piVar12);
            piVar12[1] = iVar5;
            *piVar12 = (int)local_138;
            piVar12[-1] = 0x830068c;
            piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                        *)*piVar12,piVar12[1]);
            local_168 = *piVar8;
            local_164 = piVar8[1];
            *piVar12 = (int)local_150;
            piVar12[-1] = 0x83006ab;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                    ::operator->((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                                  *)*piVar12);
            local_15c = *(undefined4 *)(iVar5 + 0xc);
            *piVar12 = (int)local_150;
            piVar12[-1] = 0x83006c2;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                    ::operator->((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                                  *)*piVar12);
            local_158 = *(undefined4 *)(iVar5 + 0x10);
            local_16e = (undefined1)local_168;
            local_16d = (undefined1)local_164;
            piVar12[1] = (int)local_140;
            *piVar12 = (int)&local_a0;
            piVar12[-1] = 0x83006fb;
            std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::end();
            piVar12[1] = (int)local_140;
            *piVar12 = (int)&local_9c;
            piVar12[-1] = 0x8300716;
            std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::begin();
            piVar12[3] = (int)&local_16e;
            piVar12[2] = local_a0;
            piVar12[1] = local_9c;
            *piVar12 = (int)local_1b0;
            piVar12[-1] = 0x8300745;
            std::find<std::_List_iterator<MONSTER_POS>,MONSTER_POS>();
            local_144 = local_1b0[0];
            *piVar12 = (int)local_140;
            piVar12[-1] = (int)local_98;
            piVar12[-2] = 0x830076c;
            std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::end();
            piVar8 = piVar12 + -1;
            *piVar12 = (int)local_98;
            piVar12[-1] = (int)&local_144;
            piVar12[-2] = 0x8300787;
            cVar3 = std::_List_iterator<MONSTER_POS>::operator==
                              ((_List_iterator<MONSTER_POS> *)piVar12[-1],(_List_iterator *)*piVar12
                              );
            iVar2 = local_160;
            iVar1 = local_164;
            iVar10 = local_168;
            iVar5 = local_16c;
            if (cVar3 == '\0') {
              piVar12[2] = 0;
              piVar12[1] = 1000;
              *piVar12 = (int)"void CBattle_Field::SetGridPath(MazeScript*, int)";
              piVar12[-1] = (int)local_84;
              piVar12[-2] = 0x830085a;
              cMyTrace::cMyTrace((cMyTrace *)piVar12[-1],(char *)*piVar12,piVar12[1],piVar12[2]);
              piVar12[4] = iVar2;
              piVar12[3] = iVar5;
              piVar12[2] = iVar1;
              piVar12[1] = iVar10;
              *piVar12 = (int)"Event monster SameMap (not generated) (%d,%d ->%d(%d)";
              piVar12[-1] = (int)local_84;
              piVar12[-2] = 0x8300883;
              cMyTrace::operator()((cMyTrace *)piVar12[-1],(char *)*piVar12);
            }
            else {
              piVar12[2] = 0;
              piVar12[1] = 0x3e3;
              *piVar12 = (int)"void CBattle_Field::SetGridPath(MazeScript*, int)";
              piVar12[-1] = (int)local_94;
              piVar12[-2] = 0x83007d3;
              cMyTrace::cMyTrace((cMyTrace *)piVar12[-1],(char *)*piVar12,piVar12[1],piVar12[2]);
              piVar12[4] = iVar2;
              piVar12[3] = iVar5;
              piVar12[2] = iVar1;
              piVar12[1] = iVar10;
              *piVar12 = (int)"Event monster generated (%d,%d ->%d(%d)";
              piVar12[-1] = (int)local_94;
              piVar12[-2] = 0x83007ff;
              cMyTrace::operator()((cMyTrace *)piVar12[-1],(char *)*piVar12);
              *piVar12 = (int)&local_16e;
              piVar12[-1] = (int)local_140;
              piVar12[-2] = 0x8300817;
              std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::push_back
                        ((list<MONSTER_POS,std::allocator<MONSTER_POS>> *)piVar12[-1],
                         (MONSTER_POS *)*piVar12);
              *piVar12 = (int)&local_16c;
              piVar12[-1] = (int)(this + 0x17c);
              piVar12[-2] = 0x83008a0;
              std::
              vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
              ::push_back((vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
                           *)piVar12[-1],(stEventMonsterStatus_t *)*piVar12);
              piVar8 = piVar12 + -1;
            }
            break;
          }
          *piVar12 = (int)local_150;
          piVar12[-1] = 0x83008b0;
          __gnu_cxx::
          __normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
          ::operator++((__normal_iterator<stEventMonster_t_const*,std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>>
                        *)*piVar12);
        }
      }
      local_38 = local_38 + 1;
      piVar12 = piVar8;
    }
    *piVar12 = (int)local_140;
    piVar12[-1] = 0x8300901;
    std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::clear
              ((list<MONSTER_POS,std::allocator<MONSTER_POS>> *)*piVar12);
    *piVar12 = (int)local_140;
                    /* try { // try from 08300924 to 08300928 has its CatchHandler @ 0830092b */
    piVar12[-1] = 0x8300929;
    std::list<MONSTER_POS,std::allocator<MONSTER_POS>>::~list
              ((list<MONSTER_POS,std::allocator<MONSTER_POS>> *)*piVar12);
    *piVar12 = (int)local_138;
    piVar12[-1] = 0x8300957;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*piVar12);
  }
  *piVar12 = *(undefined4 *)(this + 0x188);
  piVar12[-1] = 0x8300968;
  iVar5 = CDungeon::getTryGenSecondEventMonsterCnt((CDungeon *)*piVar12);
  if (iVar5 != 0) {
    *piVar12 = (int)local_17c;
    piVar12[-1] = 0x8300983;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*piVar12);
    for (local_180 = 0; local_180 < *(int *)(*(int *)(this + 0x74) + 4); local_180 = local_180 + 1)
    {
      for (local_184 = 0; iVar5 = local_184, local_184 < **(int **)(this + 0x74);
          local_184 = local_184 + 1) {
        uVar11 = *(undefined4 *)(this + 0x74);
        piVar12[2] = local_180;
        piVar12[1] = iVar5;
        *piVar12 = uVar11;
        piVar12[-1] = 0x83009c0;
        local_2c = (int *)MazeScript::getGridR((MazeScript *)*piVar12,piVar12[1],piVar12[2]);
        if (*local_2c != 0) {
          piVar12[2] = (int)&local_180;
          piVar12[1] = (int)&local_184;
          *piVar12 = (int)local_74;
                    /* try { // try from 083009e6 to 08300c0b has its CatchHandler @ 08300c39 */
          piVar12[-1] = 0x83009eb;
          std::make_pair<int&,int&>((int *)*piVar12,(int *)piVar12[1]);
          piVar12[1] = (int)local_74;
          *piVar12 = (int)local_17c;
          piVar12[-1] = 0x8300a03;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*piVar12,
                     (pair *)piVar12[1]);
        }
      }
    }
    local_28 = 0;
    while( true ) {
      *piVar12 = *(undefined4 *)(this + 0x188);
      piVar12[-1] = 0x8300c29;
      uVar6 = CDungeon::getTryGenSecondEventMonsterCnt((CDungeon *)*piVar12);
      if (uVar6 <= local_28) break;
      *piVar12 = *(undefined4 *)(this + 0x188);
      piVar12[-1] = 0x8300a78;
      uVar6 = CDungeon::getTryGenSecondEventMonsterProb((CDungeon *)*piVar12);
      *piVar12 = 10000;
      piVar12[-1] = 0x8300a86;
      uVar7 = get_rand_int(*piVar12);
      if (uVar7 <= uVar6) {
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x8300aa4;
        iVar5 = CDungeon::getSecondEventMonsters((CDungeon *)*piVar12);
        piVar12[1] = iVar5;
        *piVar12 = (int)local_188;
        piVar12[-1] = 0x8300ab6;
        std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>::begin();
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x8300aca;
        iVar5 = CDungeon::getSecondEventMonsters((CDungeon *)*piVar12);
        piVar12[1] = iVar5;
        *piVar12 = (int)local_18c;
        piVar12[-1] = 0x8300adc;
        std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>::end();
        local_24 = 0;
        *piVar12 = *(undefined4 *)(this + 0x188);
        piVar12[-1] = 0x8300af7;
        uVar11 = CDungeon::getSecondEventMonsterTotalProb((CDungeon *)*piVar12);
        *piVar12 = uVar11;
        piVar12[-1] = 0x8300aff;
        local_20 = get_rand_int(*piVar12);
        while( true ) {
          piVar12[1] = (int)local_18c;
          *piVar12 = (int)local_188;
          piVar12[-1] = 0x8300c0c;
          bVar4 = __gnu_cxx::operator!=
                            ((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1]);
          if (!bVar4) break;
          *piVar12 = (int)local_188;
          piVar12[-1] = 0x8300b15;
          iVar5 = __gnu_cxx::
                  __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                  ::operator->((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                                *)*piVar12);
          local_24 = local_24 + *(int *)(iVar5 + 8);
          if (local_20 < local_24) {
            *piVar12 = (int)&local_1a4;
            piVar12[-1] = 0x8300b35;
            stEventMonsterStatus_t::stEventMonsterStatus_t((stEventMonsterStatus_t *)*piVar12);
            *piVar12 = (int)local_188;
            piVar12[-1] = 0x8300b43;
            puVar9 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                     ::operator->((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                                   *)*piVar12);
            local_1a4 = *puVar9;
            *piVar12 = (int)local_188;
            piVar12[-1] = 0x8300b59;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                    ::operator->((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                                  *)*piVar12);
            local_198 = *(undefined4 *)(iVar5 + 4);
            *piVar12 = (int)local_17c;
            piVar12[-1] = 0x8300b70;
            uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                *piVar12);
            *piVar12 = uVar11;
            piVar12[-1] = 0x8300b78;
            iVar5 = get_rand_int(*piVar12);
            piVar12[1] = iVar5;
            *piVar12 = (int)local_17c;
            piVar12[-1] = 0x8300b8a;
            puVar9 = (undefined4 *)
                     std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                *piVar12,piVar12[1]);
            local_1a0 = *puVar9;
            local_19c = puVar9[1];
            *piVar12 = (int)local_188;
            piVar12[-1] = 0x8300ba9;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                    ::operator->((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                                  *)*piVar12);
            local_194 = *(undefined4 *)(iVar5 + 0xc);
            *piVar12 = (int)local_188;
            piVar12[-1] = 0x8300bc0;
            iVar5 = __gnu_cxx::
                    __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                    ::operator->((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                                  *)*piVar12);
            local_190 = *(undefined4 *)(iVar5 + 0x10);
            piVar12[1] = (int)&local_1a4;
            *piVar12 = (int)(this + 0x17c);
            piVar12[-1] = 0x8300be4;
            std::
            vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
            ::push_back((vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
                         *)*piVar12,(stEventMonsterStatus_t *)piVar12[1]);
            break;
          }
          *piVar12 = (int)local_188;
          piVar12[-1] = 0x8300bf4;
          __gnu_cxx::
          __normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
          ::operator++((__normal_iterator<stSecondEventMonster_t_const*,std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>>
                        *)*piVar12);
        }
      }
      local_28 = local_28 + 1;
    }
    *piVar12 = (int)local_17c;
    piVar12[-1] = 0x8300c65;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*piVar12);
  }
  return;
}
```
