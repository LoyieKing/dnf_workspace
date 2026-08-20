# SetMailBoxInfo

`_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST`

`WongWork::CMailBoxHelper::SetMailBoxInfo(CUser*, SIG_MAILBOX_LIST const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085525a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085525a6  _ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST
#           WongWork::CMailBoxHelper::SetMailBoxInfo(CUser*, SIG_MAILBOX_LIST const*)
# range [0x085525a6, 0x08553671]
085525a6 +0x0000:  push   %ebp
085525a7 +0x0001:  mov    %esp,%ebp
085525a9 +0x0003:  push   %edi
085525aa +0x0004:  push   %esi
085525ab +0x0005:  push   %ebx
085525ac +0x0006:  sub    $0x39c,%esp
085525b2 +0x000c:  mov    0x8(%ebp),%eax
085525b5 +0x000f:  mov    %eax,(%esp)
085525b8 +0x0012:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085525bd +0x0017:  mov    %eax,-0x4c(%ebp)
085525c0 +0x001a:  cmpl   $0x0,-0x4c(%ebp)
085525c4 +0x001e:  jne    085525d0 <+0x2a>
085525c6 +0x0020:  mov    $0x0,%ebx
085525cb +0x0025:  jmp    08553665 <+0x10bf>
085525d0 +0x002a:  mov    -0x4c(%ebp),%eax
085525d3 +0x002d:  mov    %eax,(%esp)
085525d6 +0x0030:  call   085575dc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x13d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x13d
085525db +0x0035:  mov    -0x4c(%ebp),%eax
085525de +0x0038:  mov    %eax,(%esp)
085525e1 +0x003b:  call   08557938 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x499>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x499
085525e6 +0x0040:  xor    $0x1,%eax
085525e9 +0x0043:  mov    %al,-0x45(%ebp)
085525ec +0x0046:  lea    -0x2e4(%ebp),%eax
085525f2 +0x004c:  mov    %eax,(%esp)
085525f5 +0x004f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085525fa +0x0054:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08552601 +0x005b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08552606 +0x0060:  mov    %eax,-0x44(%ebp)
08552609 +0x0063:  lea    -0x2fc(%ebp),%eax
0855260f +0x0069:  mov    %eax,(%esp)
08552612 +0x006c:  call   081ab6de <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x30>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x30
08552617 +0x0071:  mov    0xc(%ebp),%eax
0855261a +0x0074:  lea    0x333a(%eax),%edx
08552620 +0x007a:  lea    -0x2fc(%ebp),%eax
08552626 +0x0080:  mov    %eax,0xc(%esp)
0855262a +0x0084:  movl   $0x14,0x8(%esp)
08552632 +0x008c:  mov    %edx,0x4(%esp)
08552636 +0x0090:  mov    -0x4c(%ebp),%eax
08552639 +0x0093:  mov    %eax,(%esp)
0855263c +0x0096:  call   08557676 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1d7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1d7
08552641 +0x009b:  movl   $0x0,-0x40(%ebp)
08552648 +0x00a2:  movl   $0x0,-0x300(%ebp)
08552652 +0x00ac:  movzbl -0x45(%ebp),%eax
08552656 +0x00b0:  xor    $0x1,%eax
08552659 +0x00b3:  test   %al,%al
0855265b +0x00b5:  je     08552810 <+0x26a>
08552661 +0x00bb:  movl   $0x61,0x8(%esp)
08552669 +0x00c3:  movl   $0x0,0x4(%esp)
08552671 +0x00cb:  lea    -0x2e4(%ebp),%eax
08552677 +0x00d1:  mov    %eax,(%esp)
0855267a +0x00d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855267f +0x00d9:  lea    -0x2e4(%ebp),%eax
08552685 +0x00df:  mov    %eax,(%esp)
08552688 +0x00e2:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0855268d +0x00e7:  mov    %eax,-0x300(%ebp)
08552693 +0x00ed:  mov    0xc(%ebp),%eax
08552696 +0x00f0:  mov    0x794(%eax),%eax
0855269c +0x00f6:  mov    %eax,0x4(%esp)
085526a0 +0x00fa:  lea    -0x2e4(%ebp),%eax
085526a6 +0x0100:  mov    %eax,(%esp)
085526a9 +0x0103:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085526ae +0x0108:  movl   $0x1,0x4(%esp)
085526b6 +0x0110:  lea    -0x2e4(%ebp),%eax
085526bc +0x0116:  mov    %eax,(%esp)
085526bf +0x0119:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085526c4 +0x011e:  mov    -0x4c(%ebp),%eax
085526c7 +0x0121:  lea    0x40(%eax),%edx
085526ca +0x0124:  lea    -0x2d8(%ebp),%eax
085526d0 +0x012a:  mov    %edx,0x4(%esp)
085526d4 +0x012e:  mov    %eax,(%esp)
085526d7 +0x0131:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
085526dc +0x0136:  sub    $0x4,%esp
085526df +0x0139:  lea    -0x2d8(%ebp),%eax
085526e5 +0x013f:  mov    %eax,0x4(%esp)
085526e9 +0x0143:  lea    -0x304(%ebp),%eax
085526ef +0x0149:  mov    %eax,(%esp)
085526f2 +0x014c:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
085526f7 +0x0151:  jmp    085527bd <+0x217>
085526fc +0x0156:  lea    -0x2cc(%ebp),%eax
08552702 +0x015c:  lea    -0x2fc(%ebp),%edx
08552708 +0x0162:  mov    %edx,0x4(%esp)
0855270c +0x0166:  mov    %eax,(%esp)
0855270f +0x0169:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
08552714 +0x016e:  sub    $0x4,%esp
08552717 +0x0171:  lea    -0x304(%ebp),%eax
0855271d +0x0177:  mov    %eax,(%esp)
08552720 +0x017a:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
08552725 +0x017f:  mov    0x4(%eax),%eax
08552728 +0x0182:  mov    %eax,(%esp)
0855272b +0x0185:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08552730 +0x018a:  mov    %eax,-0x2c4(%ebp)
08552736 +0x0190:  lea    -0x2c8(%ebp),%eax
0855273c +0x0196:  lea    -0x2c4(%ebp),%edx
08552742 +0x019c:  mov    %edx,0x8(%esp)
08552746 +0x01a0:  lea    -0x2fc(%ebp),%edx
0855274c +0x01a6:  mov    %edx,0x4(%esp)
08552750 +0x01aa:  mov    %eax,(%esp)
08552753 +0x01ad:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
08552758 +0x01b2:  sub    $0x4,%esp
0855275b +0x01b5:  lea    -0x2cc(%ebp),%eax
08552761 +0x01bb:  mov    %eax,0x4(%esp)
08552765 +0x01bf:  lea    -0x2c8(%ebp),%eax
0855276b +0x01c5:  mov    %eax,(%esp)
0855276e +0x01c8:  call   081ab76c <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xbe>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xbe
08552773 +0x01cd:  test   %al,%al
08552775 +0x01cf:  jne    085527ae <+0x208>
08552777 +0x01d1:  lea    -0x304(%ebp),%eax
0855277d +0x01d7:  mov    %eax,(%esp)
08552780 +0x01da:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
08552785 +0x01df:  mov    0x4(%eax),%eax
08552788 +0x01e2:  mov    0x8(%ebp),%edx
0855278b +0x01e5:  mov    %edx,0xc(%esp)
0855278f +0x01e9:  mov    -0x44(%ebp),%edx
08552792 +0x01ec:  mov    %edx,0x8(%esp)
08552796 +0x01f0:  lea    -0x2e4(%ebp),%edx
0855279c +0x01f6:  mov    %edx,0x4(%esp)
085527a0 +0x01fa:  mov    %eax,(%esp)
085527a3 +0x01fd:  call   08551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>  ; WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const
085527a8 +0x0202:  addl   $0x1,-0x40(%ebp)
085527ac +0x0206:  jmp    085527af <+0x209>
085527ae +0x0208:  nop
085527af +0x0209:  lea    -0x304(%ebp),%eax
085527b5 +0x020f:  mov    %eax,(%esp)
085527b8 +0x0212:  call   08558708 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1269>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1269
085527bd +0x0217:  mov    -0x4c(%ebp),%eax
085527c0 +0x021a:  lea    0x40(%eax),%edx
085527c3 +0x021d:  lea    -0x2d0(%ebp),%eax
085527c9 +0x0223:  mov    %edx,0x4(%esp)
085527cd +0x0227:  mov    %eax,(%esp)
085527d0 +0x022a:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
085527d5 +0x022f:  sub    $0x4,%esp
085527d8 +0x0232:  lea    -0x2d0(%ebp),%eax
085527de +0x0238:  mov    %eax,0x4(%esp)
085527e2 +0x023c:  lea    -0x2d4(%ebp),%eax
085527e8 +0x0242:  mov    %eax,(%esp)
085527eb +0x0245:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
085527f0 +0x024a:  lea    -0x2d4(%ebp),%eax
085527f6 +0x0250:  mov    %eax,0x4(%esp)
085527fa +0x0254:  lea    -0x304(%ebp),%eax
08552800 +0x025a:  mov    %eax,(%esp)
08552803 +0x025d:  call   08558754 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x12b5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x12b5
08552808 +0x0262:  test   %al,%al
0855280a +0x0264:  jne    085526fc <+0x156>
08552810 +0x026a:  movl   $0x0,-0x38(%ebp)
08552817 +0x0271:  jmp    085528ee <+0x348>
0855281c +0x0276:  mov    -0x38(%ebp),%eax
0855281f +0x0279:  imul   $0x47,%eax,%eax
08552822 +0x027c:  add    $0x7e0,%eax
08552827 +0x0281:  add    0xc(%ebp),%eax
0855282a +0x0284:  add    $0x7,%eax
0855282d +0x0287:  mov    %eax,-0x384(%ebp)
08552833 +0x028d:  mov    -0x38(%ebp),%eax
08552836 +0x0290:  imul   $0x47,%eax,%eax
08552839 +0x0293:  add    $0x7c0,%eax
0855283e +0x0298:  add    0xc(%ebp),%eax
08552841 +0x029b:  add    $0x9,%eax
08552844 +0x029e:  mov    %eax,-0x380(%ebp)
0855284a +0x02a4:  mov    -0x38(%ebp),%eax
0855284d +0x02a7:  imul   $0x47,%eax,%eax
08552850 +0x02aa:  add    $0x7a0,%eax
08552855 +0x02af:  add    0xc(%ebp),%eax
08552858 +0x02b2:  add    $0x10,%eax
0855285b +0x02b5:  mov    %eax,-0x37c(%ebp)
08552861 +0x02bb:  mov    -0x38(%ebp),%eax
08552864 +0x02be:  mov    0xc(%ebp),%edx
08552867 +0x02c1:  imul   $0x47,%eax,%eax
0855286a +0x02c4:  lea    (%edx,%eax,1),%eax
0855286d +0x02c7:  add    $0x7a0,%eax
08552872 +0x02cc:  mov    0xc(%eax),%edi
08552875 +0x02cf:  mov    -0x38(%ebp),%eax
08552878 +0x02d2:  mov    0xc(%ebp),%edx
0855287b +0x02d5:  imul   $0x47,%eax,%eax
0855287e +0x02d8:  lea    (%edx,%eax,1),%eax
08552881 +0x02db:  add    $0x7a0,%eax
08552886 +0x02e0:  mov    0x8(%eax),%esi
08552889 +0x02e3:  mov    -0x38(%ebp),%eax
0855288c +0x02e6:  mov    0xc(%ebp),%edx
0855288f +0x02e9:  imul   $0x47,%eax,%eax
08552892 +0x02ec:  lea    (%edx,%eax,1),%eax
08552895 +0x02ef:  add    $0x7a0,%eax
0855289a +0x02f4:  mov    0x4(%eax),%ebx
0855289d +0x02f7:  mov    0x8(%ebp),%eax
085528a0 +0x02fa:  mov    %eax,(%esp)
085528a3 +0x02fd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085528a8 +0x0302:  mov    %eax,(%esp)
085528ab +0x0305:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
085528b0 +0x030a:  movl   $0x0,0x1c(%esp)
085528b8 +0x0312:  mov    -0x384(%ebp),%edx
085528be +0x0318:  mov    %edx,0x18(%esp)
085528c2 +0x031c:  mov    -0x380(%ebp),%edx
085528c8 +0x0322:  mov    %edx,0x14(%esp)
085528cc +0x0326:  mov    -0x37c(%ebp),%edx
085528d2 +0x032c:  mov    %edx,0x10(%esp)
085528d6 +0x0330:  mov    %edi,0xc(%esp)
085528da +0x0334:  mov    %esi,0x8(%esp)
085528de +0x0338:  mov    %ebx,0x4(%esp)
085528e2 +0x033c:  mov    %eax,(%esp)
085528e5 +0x033f:  call   082f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>  ; WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&, stAvatarExpansionInfo_t const&, bool)
085528ea +0x0344:  addl   $0x1,-0x38(%ebp)
085528ee +0x0348:  mov    0xc(%ebp),%eax
085528f1 +0x034b:  mov    0x7a0(%eax),%eax
085528f7 +0x0351:  cmp    -0x38(%ebp),%eax
085528fa +0x0354:  setg   %al
085528fd +0x0357:  test   %al,%al
085528ff +0x0359:  jne    0855281c <+0x276>
08552905 +0x035f:  movl   $0x0,-0x34(%ebp)
0855290c +0x0366:  jmp    08552993 <+0x3ed>
08552911 +0x036b:  mov    -0x34(%ebp),%edx
08552914 +0x036e:  mov    0xc(%ebp),%ecx
08552917 +0x0371:  mov    %edx,%eax
08552919 +0x0373:  shl    $0x3,%eax
0855291c +0x0376:  add    %edx,%eax
0855291e +0x0378:  shl    $0x2,%eax
08552921 +0x037b:  add    %edx,%eax
08552923 +0x037d:  lea    (%ecx,%eax,1),%eax
08552926 +0x0380:  add    $0xd30,%eax
0855292b +0x0385:  mov    0xc(%eax),%edi
0855292e +0x0388:  mov    -0x34(%ebp),%edx
08552931 +0x038b:  mov    0xc(%ebp),%ecx
08552934 +0x038e:  mov    %edx,%eax
08552936 +0x0390:  shl    $0x3,%eax
08552939 +0x0393:  add    %edx,%eax
0855293b +0x0395:  shl    $0x2,%eax
0855293e +0x0398:  add    %edx,%eax
08552940 +0x039a:  lea    (%ecx,%eax,1),%eax
08552943 +0x039d:  add    $0xd30,%eax
08552948 +0x03a2:  mov    0x8(%eax),%esi
0855294b +0x03a5:  mov    -0x34(%ebp),%edx
0855294e +0x03a8:  mov    0xc(%ebp),%ecx
08552951 +0x03ab:  mov    %edx,%eax
08552953 +0x03ad:  shl    $0x3,%eax
08552956 +0x03b0:  add    %edx,%eax
08552958 +0x03b2:  shl    $0x2,%eax
0855295b +0x03b5:  add    %edx,%eax
0855295d +0x03b7:  lea    (%ecx,%eax,1),%eax
08552960 +0x03ba:  add    $0xd30,%eax
08552965 +0x03bf:  mov    0x4(%eax),%ebx
08552968 +0x03c2:  mov    0x8(%ebp),%eax
0855296b +0x03c5:  mov    %eax,(%esp)
0855296e +0x03c8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08552973 +0x03cd:  mov    %eax,(%esp)
08552976 +0x03d0:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0855297b +0x03d5:  mov    %edi,0xc(%esp)
0855297f +0x03d9:  mov    %esi,0x8(%esp)
08552983 +0x03dd:  mov    %ebx,0x4(%esp)
08552987 +0x03e1:  mov    %eax,(%esp)
0855298a +0x03e4:  call   0833d7de <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii>  ; user_creature::CCreatureMgr::RegistTempPeriod(int, int, int)
0855298f +0x03e9:  addl   $0x1,-0x34(%ebp)
08552993 +0x03ed:  mov    0xc(%ebp),%eax
08552996 +0x03f0:  mov    0xd30(%eax),%eax
0855299c +0x03f6:  cmp    -0x34(%ebp),%eax
0855299f +0x03f9:  setg   %al
085529a2 +0x03fc:  test   %al,%al
085529a4 +0x03fe:  jne    08552911 <+0x36b>
085529aa +0x0404:  mov    0xc(%ebp),%eax
085529ad +0x0407:  mov    0x79c(%eax),%eax
085529b3 +0x040d:  mov    %eax,0x8(%esp)
085529b7 +0x0411:  movl   $0x1,0x4(%esp)
085529bf +0x0419:  mov    -0x4c(%ebp),%eax
085529c2 +0x041c:  mov    %eax,(%esp)
085529c5 +0x041f:  call   08557950 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x4b1>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x4b1
085529ca +0x0424:  movl   $0x0,-0x30(%ebp)
085529d1 +0x042b:  jmp    08552e59 <+0x8b3>
085529d6 +0x0430:  lea    -0x371(%ebp),%eax
085529dc +0x0436:  mov    %eax,(%esp)
085529df +0x0439:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085529e4 +0x043e:  mov    -0x30(%ebp),%eax
085529e7 +0x0441:  mov    0xc(%ebp),%edx
085529ea +0x0444:  imul   $0x61,%eax,%eax
085529ed +0x0447:  lea    (%edx,%eax,1),%eax
085529f0 +0x044a:  add    $0x20,%eax
085529f3 +0x044d:  mov    0xa(%eax),%eax
085529f6 +0x0450:  test   %eax,%eax
085529f8 +0x0452:  je     08552cc2 <+0x71c>
085529fe +0x0458:  mov    -0x30(%ebp),%eax
08552a01 +0x045b:  mov    0xc(%ebp),%edx
08552a04 +0x045e:  imul   $0x61,%eax,%eax
08552a07 +0x0461:  lea    (%edx,%eax,1),%eax
08552a0a +0x0464:  add    $0x20,%eax
08552a0d +0x0467:  mov    0xa(%eax),%eax
08552a10 +0x046a:  cmp    $0x1,%eax
08552a13 +0x046d:  jne    08552a64 <+0x4be>
08552a15 +0x046f:  mov    -0x30(%ebp),%eax
08552a18 +0x0472:  mov    0xc(%ebp),%edx
08552a1b +0x0475:  imul   $0x61,%eax,%eax
08552a1e +0x0478:  lea    (%edx,%eax,1),%eax
08552a21 +0x047b:  add    $0x20,%eax
08552a24 +0x047e:  mov    0xa(%eax),%eax
08552a27 +0x0481:  mov    %eax,-0x36f(%ebp)
08552a2d +0x0487:  mov    -0x30(%ebp),%eax
08552a30 +0x048a:  mov    0xc(%ebp),%edx
08552a33 +0x048d:  imul   $0x61,%eax,%eax
08552a36 +0x0490:  lea    (%edx,%eax,1),%eax
08552a39 +0x0493:  add    $0x20,%eax
08552a3c +0x0496:  mov    0xe(%eax),%eax
08552a3f +0x0499:  mov    %eax,-0x36a(%ebp)
08552a45 +0x049f:  mov    -0x30(%ebp),%eax
08552a48 +0x04a2:  mov    0xc(%ebp),%edx
08552a4b +0x04a5:  imul   $0x61,%eax,%eax
08552a4e +0x04a8:  lea    (%edx,%eax,1),%eax
08552a51 +0x04ab:  add    $0x20,%eax
08552a54 +0x04ae:  movzwl 0x13(%eax),%eax
08552a58 +0x04b2:  mov    %ax,-0x366(%ebp)
08552a5f +0x04b9:  jmp    08552cc2 <+0x71c>
08552a64 +0x04be:  mov    -0x30(%ebp),%eax
08552a67 +0x04c1:  mov    0xc(%ebp),%edx
08552a6a +0x04c4:  imul   $0x61,%eax,%eax
08552a6d +0x04c7:  lea    (%edx,%eax,1),%eax
08552a70 +0x04ca:  add    $0x20,%eax
08552a73 +0x04cd:  mov    0xa(%eax),%eax
08552a76 +0x04d0:  mov    %eax,%ebx
08552a78 +0x04d2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08552a7d +0x04d7:  mov    %ebx,0x4(%esp)
08552a81 +0x04db:  mov    %eax,(%esp)
08552a84 +0x04de:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08552a89 +0x04e3:  mov    %eax,-0x24(%ebp)
08552a8c +0x04e6:  cmpl   $0x0,-0x24(%ebp)
08552a90 +0x04ea:  je     08552cc2 <+0x71c>
08552a96 +0x04f0:  mov    -0x24(%ebp),%eax
08552a99 +0x04f3:  mov    (%eax),%eax
08552a9b +0x04f5:  add    $0x8,%eax
08552a9e +0x04f8:  mov    (%eax),%edx
08552aa0 +0x04fa:  lea    -0x371(%ebp),%eax
08552aa6 +0x0500:  mov    %eax,0x4(%esp)
08552aaa +0x0504:  mov    -0x24(%ebp),%eax
08552aad +0x0507:  mov    %eax,(%esp)
08552ab0 +0x050a:  call   *%edx
08552ab2 +0x050c:  mov    -0x30(%ebp),%eax
08552ab5 +0x050f:  mov    0xc(%ebp),%edx
08552ab8 +0x0512:  imul   $0x61,%eax,%eax
08552abb +0x0515:  lea    (%edx,%eax,1),%eax
08552abe +0x0518:  add    $0x29,%eax
08552ac1 +0x051b:  movzbl (%eax),%eax
08552ac4 +0x051e:  mov    %al,-0x371(%ebp)
08552aca +0x0524:  mov    -0x30(%ebp),%eax
08552acd +0x0527:  mov    0xc(%ebp),%edx
08552ad0 +0x052a:  imul   $0x61,%eax,%eax
08552ad3 +0x052d:  lea    (%edx,%eax,1),%eax
08552ad6 +0x0530:  add    $0x20,%eax
08552ad9 +0x0533:  mov    0xa(%eax),%eax
08552adc +0x0536:  mov    %eax,-0x36f(%ebp)
08552ae2 +0x053c:  mov    -0x30(%ebp),%eax
08552ae5 +0x053f:  mov    0xc(%ebp),%edx
08552ae8 +0x0542:  imul   $0x61,%eax,%eax
08552aeb +0x0545:  lea    (%edx,%eax,1),%eax
08552aee +0x0548:  add    $0x20,%eax
08552af1 +0x054b:  mov    0xe(%eax),%eax
08552af4 +0x054e:  mov    %eax,-0x36a(%ebp)
08552afa +0x0554:  mov    -0x30(%ebp),%eax
08552afd +0x0557:  mov    0xc(%ebp),%edx
08552b00 +0x055a:  imul   $0x61,%eax,%eax
08552b03 +0x055d:  lea    (%edx,%eax,1),%eax
08552b06 +0x0560:  add    $0x32,%eax
08552b09 +0x0563:  movzbl (%eax),%eax
08552b0c +0x0566:  movzbl %al,%eax
08552b0f +0x0569:  mov    %eax,0x4(%esp)
08552b13 +0x056d:  lea    -0x371(%ebp),%eax
08552b19 +0x0573:  mov    %eax,(%esp)
08552b1c +0x0576:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
08552b21 +0x057b:  mov    -0x30(%ebp),%eax
08552b24 +0x057e:  mov    0xc(%ebp),%edx
08552b27 +0x0581:  imul   $0x61,%eax,%eax
08552b2a +0x0584:  lea    (%edx,%eax,1),%eax
08552b2d +0x0587:  add    $0x20,%eax
08552b30 +0x058a:  movzwl 0x13(%eax),%eax
08552b34 +0x058e:  mov    %ax,-0x366(%ebp)
08552b3b +0x0595:  mov    -0x30(%ebp),%eax
08552b3e +0x0598:  mov    0xc(%ebp),%edx
08552b41 +0x059b:  imul   $0x61,%eax,%eax
08552b44 +0x059e:  lea    (%edx,%eax,1),%eax
08552b47 +0x05a1:  add    $0x20,%eax
08552b4a +0x05a4:  mov    0x15(%eax),%eax
08552b4d +0x05a7:  mov    %eax,-0x364(%ebp)
08552b53 +0x05ad:  mov    -0x30(%ebp),%eax
08552b56 +0x05b0:  mov    0xc(%ebp),%edx
08552b59 +0x05b3:  imul   $0x61,%eax,%eax
08552b5c +0x05b6:  lea    (%edx,%eax,1),%eax
08552b5f +0x05b9:  add    $0x30,%eax
08552b62 +0x05bc:  mov    0x9(%eax),%edx
08552b65 +0x05bf:  mov    %edx,-0x35c(%ebp)
08552b6b +0x05c5:  mov    0xd(%eax),%edx
08552b6e +0x05c8:  mov    %edx,-0x358(%ebp)
08552b74 +0x05ce:  movzwl 0x11(%eax),%eax
08552b78 +0x05d2:  mov    %ax,-0x354(%ebp)
08552b7f +0x05d9:  mov    -0x30(%ebp),%eax
08552b82 +0x05dc:  mov    0xc(%ebp),%edx
08552b85 +0x05df:  imul   $0x61,%eax,%eax
08552b88 +0x05e2:  lea    (%edx,%eax,1),%eax
08552b8b +0x05e5:  add    $0x30,%eax
08552b8e +0x05e8:  movzwl 0x14(%eax),%eax
08552b92 +0x05ec:  movzwl %ax,%edx
08552b95 +0x05ef:  mov    -0x30(%ebp),%eax
08552b98 +0x05f2:  mov    0xc(%ebp),%ecx
08552b9b +0x05f5:  imul   $0x61,%eax,%eax
08552b9e +0x05f8:  lea    (%ecx,%eax,1),%eax
08552ba1 +0x05fb:  add    $0x43,%eax
08552ba4 +0x05fe:  movzbl (%eax),%eax
08552ba7 +0x0601:  movzbl %al,%eax
08552baa +0x0604:  mov    %edx,0x8(%esp)
08552bae +0x0608:  mov    %eax,0x4(%esp)
08552bb2 +0x060c:  lea    -0x371(%ebp),%eax
08552bb8 +0x0612:  add    $0x11,%eax
08552bbb +0x0615:  mov    %eax,(%esp)
08552bbe +0x0618:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
08552bc3 +0x061d:  mov    -0x30(%ebp),%eax
08552bc6 +0x0620:  mov    0xc(%ebp),%edx
08552bc9 +0x0623:  imul   $0x61,%eax,%eax
08552bcc +0x0626:  lea    (%edx,%eax,1),%eax
08552bcf +0x0629:  add    $0x30,%eax
08552bd2 +0x062c:  mov    0x16(%eax),%edx
08552bd5 +0x062f:  mov    %edx,-0x34c(%ebp)
08552bdb +0x0635:  mov    0x1a(%eax),%edx
08552bde +0x0638:  mov    %edx,-0x348(%ebp)
08552be4 +0x063e:  mov    0x1e(%eax),%edx
08552be7 +0x0641:  mov    %edx,-0x344(%ebp)
08552bed +0x0647:  movzwl 0x22(%eax),%eax
08552bf1 +0x064b:  mov    %ax,-0x340(%ebp)
08552bf8 +0x0652:  mov    -0x30(%ebp),%eax
08552bfb +0x0655:  mov    0xc(%ebp),%edx
08552bfe +0x0658:  imul   $0x61,%eax,%eax
08552c01 +0x065b:  lea    (%edx,%eax,1),%eax
08552c04 +0x065e:  add    $0x54,%eax
08552c07 +0x0661:  movzbl (%eax),%eax
08552c0a +0x0664:  movzbl %al,%eax
08552c0d +0x0667:  mov    %eax,0x4(%esp)
08552c11 +0x066b:  lea    -0x371(%ebp),%eax
08552c17 +0x0671:  add    $0x33,%eax
08552c1a +0x0674:  mov    %eax,(%esp)
08552c1d +0x0677:  call   085574bc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1d
08552c22 +0x067c:  mov    -0x30(%ebp),%eax
08552c25 +0x067f:  mov    0xc(%ebp),%edx
08552c28 +0x0682:  imul   $0x61,%eax,%eax
08552c2b +0x0685:  lea    (%edx,%eax,1),%eax
08552c2e +0x0688:  add    $0x60,%eax
08552c31 +0x068b:  movzbl (%eax),%eax
08552c34 +0x068e:  cmp    $0x4,%al
08552c36 +0x0690:  jne    08552c51 <+0x6ab>
08552c38 +0x0692:  lea    -0x371(%ebp),%eax
08552c3e +0x0698:  mov    %eax,(%esp)
08552c41 +0x069b:  call   081201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>  ; IsTradeLimitAttachTypeItem(Inven_Item const&)
08552c46 +0x06a0:  test   %al,%al
08552c48 +0x06a2:  je     08552c51 <+0x6ab>
08552c4a +0x06a4:  mov    $0x1,%eax
08552c4f +0x06a9:  jmp    08552c56 <+0x6b0>
08552c51 +0x06ab:  mov    $0x0,%eax
08552c56 +0x06b0:  test   %al,%al
08552c58 +0x06b2:  je     08552cc2 <+0x71c>
08552c5a +0x06b4:  lea    -0x371(%ebp),%eax
08552c60 +0x06ba:  mov    %eax,(%esp)
08552c63 +0x06bd:  call   08120422 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x48>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x48
08552c68 +0x06c2:  mov    %al,-0x1d(%ebp)
08552c6b +0x06c5:  movzbl -0x1d(%ebp),%eax
08552c6f +0x06c9:  sub    $0x1,%eax
08552c72 +0x06cc:  movzbl %al,%eax
08552c75 +0x06cf:  mov    %eax,0x4(%esp)
08552c79 +0x06d3:  lea    -0x371(%ebp),%eax
08552c7f +0x06d9:  mov    %eax,(%esp)
08552c82 +0x06dc:  call   081203f6 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x1c>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x1c
08552c87 +0x06e1:  mov    -0x36f(%ebp),%eax
08552c8d +0x06e7:  mov    0x8(%ebp),%edx
08552c90 +0x06ea:  add    $0x79700,%edx
08552c96 +0x06f0:  movl   $0x4,0x14(%esp)
08552c9e +0x06f8:  movl   $0xffffffff,0x10(%esp)
08552ca6 +0x0700:  mov    %eax,0xc(%esp)
08552caa +0x0704:  movl   $0xffffffff,0x8(%esp)
08552cb2 +0x070c:  movl   $0x1,0x4(%esp)
08552cba +0x0714:  mov    %edx,(%esp)
08552cbd +0x0717:  call   08686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>  ; cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)
08552cc2 +0x071c:  movl   $0x0,-0x2c(%ebp)
08552cc9 +0x0723:  mov    -0x30(%ebp),%eax
08552ccc +0x0726:  mov    0xc(%ebp),%edx
08552ccf +0x0729:  imul   $0x61,%eax,%eax
08552cd2 +0x072c:  lea    (%edx,%eax,1),%eax
08552cd5 +0x072f:  add    $0x59,%eax
08552cd8 +0x0732:  movzbl (%eax),%eax
08552cdb +0x0735:  test   %al,%al
08552cdd +0x0737:  je     08552ce8 <+0x742>
08552cdf +0x0739:  movl   $0x1,-0x2c(%ebp)
08552ce6 +0x0740:  jmp    08552d05 <+0x75f>
08552ce8 +0x0742:  mov    -0x30(%ebp),%eax
08552ceb +0x0745:  mov    0xc(%ebp),%edx
08552cee +0x0748:  imul   $0x61,%eax,%eax
08552cf1 +0x074b:  lea    (%edx,%eax,1),%eax
08552cf4 +0x074e:  add    $0x5a,%eax
08552cf7 +0x0751:  movzbl (%eax),%eax
08552cfa +0x0754:  test   %al,%al
08552cfc +0x0756:  je     08552d05 <+0x75f>
08552cfe +0x0758:  movl   $0x2,-0x2c(%ebp)
08552d05 +0x075f:  lea    -0x334(%ebp),%eax
08552d0b +0x0765:  mov    %eax,(%esp)
08552d0e +0x0768:  call   085578ae <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x40f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x40f
08552d13 +0x076d:  lea    -0x371(%ebp),%eax
08552d19 +0x0773:  mov    %eax,-0x310(%ebp)
08552d1f +0x0779:  mov    -0x30(%ebp),%eax
08552d22 +0x077c:  mov    0xc(%ebp),%edx
08552d25 +0x077f:  imul   $0x61,%eax,%eax
08552d28 +0x0782:  lea    (%edx,%eax,1),%eax
08552d2b +0x0785:  add    $0x5b,%eax
08552d2e +0x0788:  movzbl (%eax),%eax
08552d31 +0x078b:  mov    %al,-0x318(%ebp)
08552d37 +0x0791:  mov    -0x30(%ebp),%eax
08552d3a +0x0794:  mov    0xc(%ebp),%edx
08552d3d +0x0797:  imul   $0x61,%eax,%eax
08552d40 +0x079a:  lea    (%edx,%eax,1),%eax
08552d43 +0x079d:  add    $0x50,%eax
08552d46 +0x07a0:  mov    0xc(%eax),%eax
08552d49 +0x07a3:  mov    %eax,-0x328(%ebp)
08552d4f +0x07a9:  mov    -0x30(%ebp),%edx
08552d52 +0x07ac:  mov    0xc(%ebp),%eax
08552d55 +0x07af:  imul   $0x61,%edx,%edx
08552d58 +0x07b2:  mov    (%edx,%eax,1),%eax
08552d5b +0x07b5:  mov    %eax,-0x334(%ebp)
08552d61 +0x07bb:  mov    -0x30(%ebp),%eax
08552d64 +0x07be:  mov    0xc(%ebp),%edx
08552d67 +0x07c1:  imul   $0x61,%eax,%eax
08552d6a +0x07c4:  lea    (%edx,%eax,1),%eax
08552d6d +0x07c7:  add    $0x20,%eax
08552d70 +0x07ca:  mov    0x5(%eax),%eax
08552d73 +0x07cd:  mov    %eax,-0x32c(%ebp)
08552d79 +0x07d3:  mov    -0x2c(%ebp),%eax
08552d7c +0x07d6:  mov    %eax,-0x320(%ebp)
08552d82 +0x07dc:  mov    -0x30(%ebp),%eax
08552d85 +0x07df:  mov    0xc(%ebp),%edx
08552d88 +0x07e2:  imul   $0x61,%eax,%eax
08552d8b +0x07e5:  lea    (%edx,%eax,1),%eax
08552d8e +0x07e8:  add    $0x50,%eax
08552d91 +0x07eb:  mov    0x5(%eax),%eax
08552d94 +0x07ee:  mov    %eax,-0x31c(%ebp)
08552d9a +0x07f4:  mov    -0x30(%ebp),%edx
08552d9d +0x07f7:  mov    0xc(%ebp),%eax
08552da0 +0x07fa:  imul   $0x61,%edx,%edx
08552da3 +0x07fd:  mov    0x4(%edx,%eax,1),%eax
08552da7 +0x0801:  mov    %eax,-0x330(%ebp)
08552dad +0x0807:  mov    -0x30(%ebp),%eax
08552db0 +0x080a:  imul   $0x61,%eax,%eax
08552db3 +0x080d:  add    0xc(%ebp),%eax
08552db6 +0x0810:  add    $0x8,%eax
08552db9 +0x0813:  mov    %eax,-0x314(%ebp)
08552dbf +0x0819:  mov    -0x30(%ebp),%eax
08552dc2 +0x081c:  mov    0xc(%ebp),%edx
08552dc5 +0x081f:  imul   $0x61,%eax,%eax
08552dc8 +0x0822:  lea    (%edx,%eax,1),%eax
08552dcb +0x0825:  add    $0x60,%eax
08552dce +0x0828:  movzbl (%eax),%eax
08552dd1 +0x082b:  movzbl %al,%eax
08552dd4 +0x082e:  mov    %eax,-0x324(%ebp)
08552dda +0x0834:  lea    -0x334(%ebp),%eax
08552de0 +0x083a:  mov    %eax,0x4(%esp)
08552de4 +0x083e:  mov    -0x4c(%ebp),%eax
08552de7 +0x0841:  mov    %eax,(%esp)
08552dea +0x0844:  call   08551f5a <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE>  ; WongWork::CMailBox::AddNewMail(WongWork::CMailBox::stAddNewMailInput const&)
08552def +0x0849:  mov    %eax,-0x28(%ebp)
08552df2 +0x084c:  cmpl   $0x0,-0x28(%ebp)
08552df6 +0x0850:  je     08552e51 <+0x8ab>
08552df8 +0x0852:  mov    -0x30(%ebp),%eax
08552dfb +0x0855:  mov    0xc(%ebp),%edx
08552dfe +0x0858:  imul   $0x61,%eax,%eax
08552e01 +0x085b:  lea    (%edx,%eax,1),%eax
08552e04 +0x085e:  add    $0x50,%eax
08552e07 +0x0861:  mov    0xc(%eax),%eax
08552e0a +0x0864:  mov    %eax,0x4(%esp)
08552e0e +0x0868:  mov    -0x4c(%ebp),%eax
08552e11 +0x086b:  mov    %eax,(%esp)
08552e14 +0x086e:  call   085577ac <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x30d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x30d
08552e19 +0x0873:  test   %al,%al
08552e1b +0x0875:  jne    08552e54 <+0x8ae>
08552e1d +0x0877:  addl   $0x1,-0x40(%ebp)
08552e21 +0x087b:  movzbl -0x45(%ebp),%eax
08552e25 +0x087f:  xor    $0x1,%eax
08552e28 +0x0882:  test   %al,%al
08552e2a +0x0884:  je     08552e55 <+0x8af>
08552e2c +0x0886:  mov    0x8(%ebp),%eax
08552e2f +0x0889:  mov    %eax,0xc(%esp)
08552e33 +0x088d:  mov    -0x44(%ebp),%eax
08552e36 +0x0890:  mov    %eax,0x8(%esp)
08552e3a +0x0894:  lea    -0x2e4(%ebp),%eax
08552e40 +0x089a:  mov    %eax,0x4(%esp)
08552e44 +0x089e:  mov    -0x28(%ebp),%eax
08552e47 +0x08a1:  mov    %eax,(%esp)
08552e4a +0x08a4:  call   08551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>  ; WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const
08552e4f +0x08a9:  jmp    08552e55 <+0x8af>
08552e51 +0x08ab:  nop
08552e52 +0x08ac:  jmp    08552e55 <+0x8af>
08552e54 +0x08ae:  nop
08552e55 +0x08af:  addl   $0x1,-0x30(%ebp)
08552e59 +0x08b3:  mov    0xc(%ebp),%eax
08552e5c +0x08b6:  mov    0x794(%eax),%eax
08552e62 +0x08bc:  cmp    -0x30(%ebp),%eax
08552e65 +0x08bf:  setg   %al
08552e68 +0x08c2:  test   %al,%al
08552e6a +0x08c4:  jne    085529d6 <+0x430>
08552e70 +0x08ca:  mov    0xc(%ebp),%eax
08552e73 +0x08cd:  mov    0x798(%eax),%eax
08552e79 +0x08d3:  mov    %eax,0x4(%esp)
08552e7d +0x08d7:  mov    -0x4c(%ebp),%eax
08552e80 +0x08da:  mov    %eax,(%esp)
08552e83 +0x08dd:  call   08557914 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x475>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x475
08552e88 +0x08e2:  cmpb   $0x0,-0x45(%ebp)
08552e8c +0x08e6:  je     08552edb <+0x935>
08552e8e +0x08e8:  lea    -0x2e4(%ebp),%eax
08552e94 +0x08ee:  mov    %eax,0x4(%esp)
08552e98 +0x08f2:  mov    0x8(%ebp),%eax
08552e9b +0x08f5:  mov    %eax,(%esp)
08552e9e +0x08f8:  call   08555118 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard>  ; WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser*, PacketGuard*)
08552ea3 +0x08fd:  mov    0xc(%ebp),%eax
08552ea6 +0x0900:  mov    0x794(%eax),%eax
08552eac +0x0906:  test   %eax,%eax
08552eae +0x0908:  jle    08552ebb <+0x915>
08552eb0 +0x090a:  mov    0x8(%ebp),%eax
08552eb3 +0x090d:  mov    %eax,(%esp)
08552eb6 +0x0910:  call   085523e2 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser>  ; WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*)
08552ebb +0x0915:  mov    -0x4c(%ebp),%eax
08552ebe +0x0918:  mov    %eax,(%esp)
08552ec1 +0x091b:  call   08557866 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3c7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3c7
08552ec6 +0x0920:  movl   $0x0,0x4(%esp)
08552ece +0x0928:  mov    -0x4c(%ebp),%eax
08552ed1 +0x092b:  mov    %eax,(%esp)
08552ed4 +0x092e:  call   0855789c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3fd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3fd
08552ed9 +0x0933:  jmp    08552f15 <+0x96f>
08552edb +0x0935:  mov    -0x40(%ebp),%eax
08552ede +0x0938:  mov    %eax,0x8(%esp)
08552ee2 +0x093c:  lea    -0x300(%ebp),%eax
08552ee8 +0x0942:  mov    %eax,0x4(%esp)
08552eec +0x0946:  lea    -0x2e4(%ebp),%eax
08552ef2 +0x094c:  mov    %eax,(%esp)
08552ef5 +0x094f:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08552efa +0x0954:  mov    0xc(%ebp),%eax
08552efd +0x0957:  mov    0x798(%eax),%eax
08552f03 +0x095d:  mov    %eax,0x4(%esp)
08552f07 +0x0961:  lea    -0x2e4(%ebp),%eax
08552f0d +0x0967:  mov    %eax,(%esp)
08552f10 +0x096a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08552f15 +0x096f:  mov    -0x4c(%ebp),%eax
08552f18 +0x0972:  mov    %eax,(%esp)
08552f1b +0x0975:  call   0823454c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bf6
08552f20 +0x097a:  mov    0xc(%ebp),%edx
08552f23 +0x097d:  mov    0x332a(%edx),%edx
08552f29 +0x0983:  add    %edx,%eax
08552f2b +0x0985:  mov    %eax,0x4(%esp)
08552f2f +0x0989:  mov    -0x4c(%ebp),%eax
08552f32 +0x098c:  mov    %eax,(%esp)
08552f35 +0x098f:  call   0855789c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3fd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3fd
08552f3a +0x0994:  movl   $0x0,-0x40(%ebp)
08552f41 +0x099b:  lea    -0x2e4(%ebp),%eax
08552f47 +0x09a1:  mov    %eax,(%esp)
08552f4a +0x09a4:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08552f4f +0x09a9:  mov    %eax,-0x300(%ebp)
08552f55 +0x09af:  mov    0xc(%ebp),%eax
08552f58 +0x09b2:  mov    0x1018(%eax),%eax
08552f5e +0x09b8:  mov    %eax,0x4(%esp)
08552f62 +0x09bc:  lea    -0x2e4(%ebp),%eax
08552f68 +0x09c2:  mov    %eax,(%esp)
08552f6b +0x09c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08552f70 +0x09ca:  lea    -0x308(%ebp),%eax
08552f76 +0x09d0:  lea    -0x2fc(%ebp),%edx
08552f7c +0x09d6:  mov    %edx,0x4(%esp)
08552f80 +0x09da:  mov    %eax,(%esp)
08552f83 +0x09dd:  call   08558768 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x12c9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x12c9
08552f88 +0x09e2:  sub    $0x4,%esp
08552f8b +0x09e5:  jmp    085531d5 <+0xc2f>
08552f90 +0x09ea:  lea    -0x308(%ebp),%eax
08552f96 +0x09f0:  mov    %eax,(%esp)
08552f99 +0x09f3:  call   085587ac <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x130d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x130d
08552f9e +0x09f8:  mov    -0x4c(%ebp),%edx
08552fa1 +0x09fb:  lea    0x90(%edx),%ecx
08552fa7 +0x0a01:  lea    -0x30c(%ebp),%edx
08552fad +0x0a07:  mov    %eax,0x8(%esp)
08552fb1 +0x0a0b:  mov    %ecx,0x4(%esp)
08552fb5 +0x0a0f:  mov    %edx,(%esp)
08552fb8 +0x0a12:  call   085587ba <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x131b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x131b
08552fbd +0x0a17:  sub    $0x4,%esp
08552fc0 +0x0a1a:  mov    -0x4c(%ebp),%eax
08552fc3 +0x0a1d:  lea    0x90(%eax),%edx
08552fc9 +0x0a23:  lea    -0x2bc(%ebp),%eax
08552fcf +0x0a29:  mov    %edx,0x4(%esp)
08552fd3 +0x0a2d:  mov    %eax,(%esp)
08552fd6 +0x0a30:  call   085587e6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1347>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1347
08552fdb +0x0a35:  sub    $0x4,%esp
08552fde +0x0a38:  lea    -0x2bc(%ebp),%eax
08552fe4 +0x0a3e:  mov    %eax,0x4(%esp)
08552fe8 +0x0a42:  lea    -0x30c(%ebp),%eax
08552fee +0x0a48:  mov    %eax,(%esp)
08552ff1 +0x0a4b:  call   0855880c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x136d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x136d
08552ff6 +0x0a50:  test   %al,%al
08552ff8 +0x0a52:  je     085531c7 <+0xc21>
08552ffe +0x0a58:  lea    -0x30c(%ebp),%eax
08553004 +0x0a5e:  mov    %eax,(%esp)
08553007 +0x0a61:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
0855300c +0x0a66:  mov    0x4(%eax),%eax
0855300f +0x0a69:  mov    %eax,0x4(%esp)
08553013 +0x0a6d:  lea    -0x2e4(%ebp),%eax
08553019 +0x0a73:  mov    %eax,(%esp)
0855301c +0x0a76:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08553021 +0x0a7b:  lea    -0x30c(%ebp),%eax
08553027 +0x0a81:  mov    %eax,(%esp)
0855302a +0x0a84:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
0855302f +0x0a89:  mov    0x8(%eax),%eax
08553032 +0x0a8c:  mov    %eax,0x4(%esp)
08553036 +0x0a90:  lea    -0x2e4(%ebp),%eax
0855303c +0x0a96:  mov    %eax,(%esp)
0855303f +0x0a99:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08553044 +0x0a9e:  lea    -0x30c(%ebp),%eax
0855304a +0x0aa4:  mov    %eax,(%esp)
0855304d +0x0aa7:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
08553052 +0x0aac:  add    $0xc,%eax
08553055 +0x0aaf:  mov    %eax,(%esp)
08553058 +0x0ab2:  call   0807e3b0 <_init+0xca8>
0855305d +0x0ab7:  mov    %eax,0x4(%esp)
08553061 +0x0abb:  lea    -0x2e4(%ebp),%eax
08553067 +0x0ac1:  mov    %eax,(%esp)
0855306a +0x0ac4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0855306f +0x0ac9:  lea    -0x30c(%ebp),%eax
08553075 +0x0acf:  mov    %eax,(%esp)
08553078 +0x0ad2:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
0855307d +0x0ad7:  add    $0xc,%eax
08553080 +0x0ada:  mov    %eax,(%esp)
08553083 +0x0add:  call   0807e3b0 <_init+0xca8>
08553088 +0x0ae2:  mov    %eax,%ebx
0855308a +0x0ae4:  lea    -0x30c(%ebp),%eax
08553090 +0x0aea:  mov    %eax,(%esp)
08553093 +0x0aed:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
08553098 +0x0af2:  add    $0xc,%eax
0855309b +0x0af5:  mov    %ebx,0x8(%esp)
0855309f +0x0af9:  mov    %eax,0x4(%esp)
085530a3 +0x0afd:  lea    -0x2e4(%ebp),%eax
085530a9 +0x0b03:  mov    %eax,(%esp)
085530ac +0x0b06:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
085530b1 +0x0b0b:  lea    -0x30c(%ebp),%eax
085530b7 +0x0b11:  mov    %eax,(%esp)
085530ba +0x0b14:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
085530bf +0x0b19:  add    $0x29,%eax
085530c2 +0x0b1c:  mov    %eax,(%esp)
085530c5 +0x0b1f:  call   0807e3b0 <_init+0xca8>
085530ca +0x0b24:  mov    %eax,0x4(%esp)
085530ce +0x0b28:  lea    -0x2e4(%ebp),%eax
085530d4 +0x0b2e:  mov    %eax,(%esp)
085530d7 +0x0b31:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085530dc +0x0b36:  lea    -0x30c(%ebp),%eax
085530e2 +0x0b3c:  mov    %eax,(%esp)
085530e5 +0x0b3f:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
085530ea +0x0b44:  add    $0x29,%eax
085530ed +0x0b47:  mov    %eax,(%esp)
085530f0 +0x0b4a:  call   0807e3b0 <_init+0xca8>
085530f5 +0x0b4f:  mov    %eax,%ebx
085530f7 +0x0b51:  lea    -0x30c(%ebp),%eax
085530fd +0x0b57:  mov    %eax,(%esp)
08553100 +0x0b5a:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
08553105 +0x0b5f:  add    $0x29,%eax
08553108 +0x0b62:  mov    %ebx,0x8(%esp)
0855310c +0x0b66:  mov    %eax,0x4(%esp)
08553110 +0x0b6a:  lea    -0x2e4(%ebp),%eax
08553116 +0x0b70:  mov    %eax,(%esp)
08553119 +0x0b73:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0855311e +0x0b78:  lea    -0x30c(%ebp),%eax
08553124 +0x0b7e:  mov    %eax,(%esp)
08553127 +0x0b81:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
0855312c +0x0b86:  mov    0x4(%eax),%eax
0855312f +0x0b89:  mov    %eax,0x4(%esp)
08553133 +0x0b8d:  mov    0xc(%ebp),%eax
08553136 +0x0b90:  mov    %eax,(%esp)
08553139 +0x0b93:  call   0855254c <_Z13isUnlimitMailPK16SIG_MAILBOX_LISTi>  ; isUnlimitMail(SIG_MAILBOX_LIST const*, int)
0855313e +0x0b98:  test   %al,%al
08553140 +0x0b9a:  je     0855315a <+0xbb4>
08553142 +0x0b9c:  movl   $0x0,0x4(%esp)
0855314a +0x0ba4:  lea    -0x2e4(%ebp),%eax
08553150 +0x0baa:  mov    %eax,(%esp)
08553153 +0x0bad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08553158 +0x0bb2:  jmp    08553180 <+0xbda>
0855315a +0x0bb4:  lea    -0x30c(%ebp),%eax
08553160 +0x0bba:  mov    %eax,(%esp)
08553163 +0x0bbd:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
08553168 +0x0bc2:  mov    0x129(%eax),%eax
0855316e +0x0bc8:  mov    %eax,0x4(%esp)
08553172 +0x0bcc:  lea    -0x2e4(%ebp),%eax
08553178 +0x0bd2:  mov    %eax,(%esp)
0855317b +0x0bd5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08553180 +0x0bda:  lea    -0x30c(%ebp),%eax
08553186 +0x0be0:  mov    %eax,(%esp)
08553189 +0x0be3:  call   08558820 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1381>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1381
0855318e +0x0be8:  movzwl 0x12d(%eax),%eax
08553195 +0x0bef:  cwtl
08553196 +0x0bf0:  mov    %eax,0x4(%esp)
0855319a +0x0bf4:  lea    -0x2e4(%ebp),%eax
085531a0 +0x0bfa:  mov    %eax,(%esp)
085531a3 +0x0bfd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085531a8 +0x0c02:  addl   $0x1,-0x40(%ebp)
085531ac +0x0c06:  mov    -0x4c(%ebp),%eax
085531af +0x0c09:  lea    0x90(%eax),%edx
085531b5 +0x0c0f:  mov    -0x30c(%ebp),%eax
085531bb +0x0c15:  mov    %eax,0x4(%esp)
085531bf +0x0c19:  mov    %edx,(%esp)
085531c2 +0x0c1c:  call   0855882e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x138f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x138f
085531c7 +0x0c21:  lea    -0x308(%ebp),%eax
085531cd +0x0c27:  mov    %eax,(%esp)
085531d0 +0x0c2a:  call   0855878e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x12ef>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x12ef
085531d5 +0x0c2f:  lea    -0x2c0(%ebp),%eax
085531db +0x0c35:  lea    -0x2fc(%ebp),%edx
085531e1 +0x0c3b:  mov    %edx,0x4(%esp)
085531e5 +0x0c3f:  mov    %eax,(%esp)
085531e8 +0x0c42:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
085531ed +0x0c47:  sub    $0x4,%esp
085531f0 +0x0c4a:  lea    -0x2c0(%ebp),%eax
085531f6 +0x0c50:  mov    %eax,0x4(%esp)
085531fa +0x0c54:  lea    -0x308(%ebp),%eax
08553200 +0x0c5a:  mov    %eax,(%esp)
08553203 +0x0c5d:  call   0811129e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7b0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7b0
08553208 +0x0c62:  test   %al,%al
0855320a +0x0c64:  jne    08552f90 <+0x9ea>
08553210 +0x0c6a:  movl   $0x0,-0x3c(%ebp)
08553217 +0x0c71:  movl   $0x0,-0x1c(%ebp)
0855321e +0x0c78:  jmp    08553512 <+0xf6c>
08553223 +0x0c7d:  mov    -0x1c(%ebp),%eax
08553226 +0x0c80:  mov    0xc(%ebp),%edx
08553229 +0x0c83:  imul   $0x12b,%eax,%eax
0855322f +0x0c89:  lea    (%edx,%eax,1),%eax
08553232 +0x0c8c:  add    $0x1010,%eax
08553237 +0x0c91:  mov    0xc(%eax),%eax
0855323a +0x0c94:  mov    %eax,0x4(%esp)
0855323e +0x0c98:  mov    -0x4c(%ebp),%eax
08553241 +0x0c9b:  mov    %eax,(%esp)
08553244 +0x0c9e:  call   085577ac <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x30d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x30d
08553249 +0x0ca3:  xor    $0x1,%eax
0855324c +0x0ca6:  test   %al,%al
0855324e +0x0ca8:  je     08553407 <+0xe61>
08553254 +0x0cae:  mov    -0x1c(%ebp),%eax
08553257 +0x0cb1:  mov    0xc(%ebp),%edx
0855325a +0x0cb4:  imul   $0x12b,%eax,%eax
08553260 +0x0cba:  lea    (%edx,%eax,1),%eax
08553263 +0x0cbd:  add    $0x1010,%eax
08553268 +0x0cc2:  mov    0xc(%eax),%eax
0855326b +0x0cc5:  mov    %eax,0x4(%esp)
0855326f +0x0cc9:  lea    -0x2e4(%ebp),%eax
08553275 +0x0ccf:  mov    %eax,(%esp)
08553278 +0x0cd2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0855327d +0x0cd7:  mov    -0x1c(%ebp),%eax
08553280 +0x0cda:  mov    0xc(%ebp),%edx
08553283 +0x0cdd:  imul   $0x12b,%eax,%eax
08553289 +0x0ce3:  lea    (%edx,%eax,1),%eax
0855328c +0x0ce6:  add    $0x1010,%eax
08553291 +0x0ceb:  mov    0x10(%eax),%eax
08553294 +0x0cee:  mov    %eax,0x4(%esp)
08553298 +0x0cf2:  lea    -0x2e4(%ebp),%eax
0855329e +0x0cf8:  mov    %eax,(%esp)
085532a1 +0x0cfb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085532a6 +0x0d00:  mov    -0x1c(%ebp),%eax
085532a9 +0x0d03:  imul   $0x12b,%eax,%eax
085532af +0x0d09:  add    $0x1010,%eax
085532b4 +0x0d0e:  add    0xc(%ebp),%eax
085532b7 +0x0d11:  add    $0x14,%eax
085532ba +0x0d14:  mov    %eax,(%esp)
085532bd +0x0d17:  call   0807e3b0 <_init+0xca8>
085532c2 +0x0d1c:  mov    %eax,-0x3c(%ebp)
085532c5 +0x0d1f:  mov    -0x3c(%ebp),%eax
085532c8 +0x0d22:  mov    %eax,0x4(%esp)
085532cc +0x0d26:  lea    -0x2e4(%ebp),%eax
085532d2 +0x0d2c:  mov    %eax,(%esp)
085532d5 +0x0d2f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085532da +0x0d34:  mov    -0x1c(%ebp),%eax
085532dd +0x0d37:  imul   $0x12b,%eax,%eax
085532e3 +0x0d3d:  add    $0x1010,%eax
085532e8 +0x0d42:  add    0xc(%ebp),%eax
085532eb +0x0d45:  lea    0x14(%eax),%edx
085532ee +0x0d48:  mov    -0x3c(%ebp),%eax
085532f1 +0x0d4b:  mov    %eax,0x8(%esp)
085532f5 +0x0d4f:  mov    %edx,0x4(%esp)
085532f9 +0x0d53:  lea    -0x2e4(%ebp),%eax
085532ff +0x0d59:  mov    %eax,(%esp)
08553302 +0x0d5c:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
08553307 +0x0d61:  mov    -0x1c(%ebp),%eax
0855330a +0x0d64:  imul   $0x12b,%eax,%eax
08553310 +0x0d6a:  add    $0x1030,%eax
08553315 +0x0d6f:  add    0xc(%ebp),%eax
08553318 +0x0d72:  add    $0x11,%eax
0855331b +0x0d75:  mov    %eax,(%esp)
0855331e +0x0d78:  call   0807e3b0 <_init+0xca8>
08553323 +0x0d7d:  mov    %eax,-0x3c(%ebp)
08553326 +0x0d80:  mov    -0x3c(%ebp),%eax
08553329 +0x0d83:  mov    %eax,0x4(%esp)
0855332d +0x0d87:  lea    -0x2e4(%ebp),%eax
08553333 +0x0d8d:  mov    %eax,(%esp)
08553336 +0x0d90:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0855333b +0x0d95:  mov    -0x1c(%ebp),%eax
0855333e +0x0d98:  imul   $0x12b,%eax,%eax
08553344 +0x0d9e:  add    $0x1030,%eax
08553349 +0x0da3:  add    0xc(%ebp),%eax
0855334c +0x0da6:  lea    0x11(%eax),%edx
0855334f +0x0da9:  mov    -0x3c(%ebp),%eax
08553352 +0x0dac:  mov    %eax,0x8(%esp)
08553356 +0x0db0:  mov    %edx,0x4(%esp)
0855335a +0x0db4:  lea    -0x2e4(%ebp),%eax
08553360 +0x0dba:  mov    %eax,(%esp)
08553363 +0x0dbd:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
08553368 +0x0dc2:  mov    -0x1c(%ebp),%eax
0855336b +0x0dc5:  mov    0xc(%ebp),%edx
0855336e +0x0dc8:  imul   $0x12b,%eax,%eax
08553374 +0x0dce:  lea    (%edx,%eax,1),%eax
08553377 +0x0dd1:  add    $0x1010,%eax
0855337c +0x0dd6:  mov    0xc(%eax),%eax
0855337f +0x0dd9:  mov    %eax,0x4(%esp)
08553383 +0x0ddd:  mov    0xc(%ebp),%eax
08553386 +0x0de0:  mov    %eax,(%esp)
08553389 +0x0de3:  call   0855254c <_Z13isUnlimitMailPK16SIG_MAILBOX_LISTi>  ; isUnlimitMail(SIG_MAILBOX_LIST const*, int)
0855338e +0x0de8:  test   %al,%al
08553390 +0x0dea:  je     085533aa <+0xe04>
08553392 +0x0dec:  movl   $0x0,0x4(%esp)
0855339a +0x0df4:  lea    -0x2e4(%ebp),%eax
085533a0 +0x0dfa:  mov    %eax,(%esp)
085533a3 +0x0dfd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085533a8 +0x0e02:  jmp    085533d3 <+0xe2d>
085533aa +0x0e04:  mov    -0x1c(%ebp),%eax
085533ad +0x0e07:  mov    0xc(%ebp),%edx
085533b0 +0x0e0a:  imul   $0x12b,%eax,%eax
085533b6 +0x0e10:  lea    (%edx,%eax,1),%eax
085533b9 +0x0e13:  add    $0x1130,%eax
085533be +0x0e18:  mov    0x11(%eax),%eax
085533c1 +0x0e1b:  mov    %eax,0x4(%esp)
085533c5 +0x0e1f:  lea    -0x2e4(%ebp),%eax
085533cb +0x0e25:  mov    %eax,(%esp)
085533ce +0x0e28:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085533d3 +0x0e2d:  mov    -0x1c(%ebp),%eax
085533d6 +0x0e30:  mov    0xc(%ebp),%edx
085533d9 +0x0e33:  imul   $0x12b,%eax,%eax
085533df +0x0e39:  lea    (%edx,%eax,1),%eax
085533e2 +0x0e3c:  add    $0x1130,%eax
085533e7 +0x0e41:  movzwl 0x15(%eax),%eax
085533eb +0x0e45:  cwtl
085533ec +0x0e46:  mov    %eax,0x4(%esp)
085533f0 +0x0e4a:  lea    -0x2e4(%ebp),%eax
085533f6 +0x0e50:  mov    %eax,(%esp)
085533f9 +0x0e53:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085533fe +0x0e58:  addl   $0x1,-0x40(%ebp)
08553402 +0x0e5c:  jmp    08553488 <+0xee2>
08553407 +0x0e61:  mov    -0x1c(%ebp),%eax
0855340a +0x0e64:  imul   $0x12b,%eax,%eax
08553410 +0x0e6a:  add    $0x1010,%eax
08553415 +0x0e6f:  add    0xc(%ebp),%eax
08553418 +0x0e72:  lea    0xc(%eax),%ecx
0855341b +0x0e75:  mov    -0x1c(%ebp),%eax
0855341e +0x0e78:  imul   $0x12b,%eax,%eax
08553424 +0x0e7e:  add    $0x1010,%eax
08553429 +0x0e83:  add    0xc(%ebp),%eax
0855342c +0x0e86:  lea    0xc(%eax),%edx
0855342f +0x0e89:  lea    -0x180(%ebp),%eax
08553435 +0x0e8f:  mov    %ecx,0x8(%esp)
08553439 +0x0e93:  mov    %edx,0x4(%esp)
0855343d +0x0e97:  mov    %eax,(%esp)
08553440 +0x0e9a:  call   08558848 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x13a9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x13a9
08553445 +0x0e9f:  sub    $0x4,%esp
08553448 +0x0ea2:  lea    -0x180(%ebp),%eax
0855344e +0x0ea8:  mov    %eax,0x4(%esp)
08553452 +0x0eac:  lea    -0x2b0(%ebp),%eax
08553458 +0x0eb2:  mov    %eax,(%esp)
0855345b +0x0eb5:  call   08558886 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x13e7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x13e7
08553460 +0x0eba:  mov    -0x4c(%ebp),%eax
08553463 +0x0ebd:  lea    0x90(%eax),%ecx
08553469 +0x0ec3:  lea    -0x2b8(%ebp),%eax
0855346f +0x0ec9:  lea    -0x2b0(%ebp),%edx
08553475 +0x0ecf:  mov    %edx,0x8(%esp)
08553479 +0x0ed3:  mov    %ecx,0x4(%esp)
0855347d +0x0ed7:  mov    %eax,(%esp)
08553480 +0x0eda:  call   085588e2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1443>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1443
08553485 +0x0edf:  sub    $0x4,%esp
08553488 +0x0ee2:  mov    -0x1c(%ebp),%eax
0855348b +0x0ee5:  imul   $0x12b,%eax,%eax
08553491 +0x0eeb:  add    $0x1010,%eax
08553496 +0x0ef0:  add    0xc(%ebp),%eax
08553499 +0x0ef3:  lea    0xc(%eax),%ebx
0855349c +0x0ef6:  mov    -0x4c(%ebp),%eax
0855349f +0x0ef9:  mov    %eax,(%esp)
085534a2 +0x0efc:  call   0855784c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3ad>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3ad
085534a7 +0x0f01:  mov    %eax,-0x50(%ebp)
085534aa +0x0f04:  mov    %ebx,0x4(%esp)
085534ae +0x0f08:  lea    -0x50(%ebp),%eax
085534b1 +0x0f0b:  mov    %eax,(%esp)
085534b4 +0x0f0e:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
085534b9 +0x0f13:  mov    (%eax),%eax
085534bb +0x0f15:  mov    %eax,0x4(%esp)
085534bf +0x0f19:  mov    -0x4c(%ebp),%eax
085534c2 +0x0f1c:  mov    %eax,(%esp)
085534c5 +0x0f1f:  call   08557858 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3b9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3b9
085534ca +0x0f24:  mov    -0x1c(%ebp),%eax
085534cd +0x0f27:  mov    0xc(%ebp),%edx
085534d0 +0x0f2a:  imul   $0x12b,%eax,%eax
085534d6 +0x0f30:  lea    (%edx,%eax,1),%eax
085534d9 +0x0f33:  add    $0x1130,%eax
085534de +0x0f38:  movzwl 0x15(%eax),%eax
085534e2 +0x0f3c:  cmp    $0x3,%ax
085534e6 +0x0f40:  jne    0855350e <+0xf68>
085534e8 +0x0f42:  mov    -0x1c(%ebp),%eax
085534eb +0x0f45:  mov    0xc(%ebp),%edx
085534ee +0x0f48:  imul   $0x12b,%eax,%eax
085534f4 +0x0f4e:  lea    (%edx,%eax,1),%eax
085534f7 +0x0f51:  add    $0x1010,%eax
085534fc +0x0f56:  mov    0xc(%eax),%eax
085534ff +0x0f59:  mov    %eax,0x4(%esp)
08553503 +0x0f5d:  mov    -0x4c(%ebp),%eax
08553506 +0x0f60:  mov    %eax,(%esp)
08553509 +0x0f63:  call   084ed222 <_GLOBAL__I__Z7getUserj+0x41d4>  ; global constructors keyed to getUser(unsigned int)+0x41d4
0855350e +0x0f68:  addl   $0x1,-0x1c(%ebp)
08553512 +0x0f6c:  mov    0xc(%ebp),%eax
08553515 +0x0f6f:  mov    0x1018(%eax),%eax
0855351b +0x0f75:  cmp    -0x1c(%ebp),%eax
0855351e +0x0f78:  setg   %al
08553521 +0x0f7b:  test   %al,%al
08553523 +0x0f7d:  jne    08553223 <+0xc7d>
08553529 +0x0f83:  mov    -0x40(%ebp),%eax
0855352c +0x0f86:  mov    %eax,0x8(%esp)
08553530 +0x0f8a:  lea    -0x300(%ebp),%eax
08553536 +0x0f90:  mov    %eax,0x4(%esp)
0855353a +0x0f94:  lea    -0x2e4(%ebp),%eax
08553540 +0x0f9a:  mov    %eax,(%esp)
08553543 +0x0f9d:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
08553548 +0x0fa2:  movl   $0x1,0x4(%esp)
08553550 +0x0faa:  lea    -0x2e4(%ebp),%eax
08553556 +0x0fb0:  mov    %eax,(%esp)
08553559 +0x0fb3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855355e +0x0fb8:  lea    -0x2e4(%ebp),%eax
08553564 +0x0fbe:  mov    %eax,0x4(%esp)
08553568 +0x0fc2:  mov    0x8(%ebp),%eax
0855356b +0x0fc5:  mov    %eax,(%esp)
0855356e +0x0fc8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08553573 +0x0fcd:  movzbl -0x45(%ebp),%eax
08553577 +0x0fd1:  xor    $0x1,%eax
0855357a +0x0fd4:  test   %al,%al
0855357c +0x0fd6:  je     0855360c <+0x1066>
08553582 +0x0fdc:  lea    -0x2e4(%ebp),%eax
08553588 +0x0fe2:  mov    %eax,(%esp)
0855358b +0x0fe5:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08553590 +0x0fea:  movl   $0x63,0x8(%esp)
08553598 +0x0ff2:  movl   $0x1,0x4(%esp)
085535a0 +0x0ffa:  lea    -0x2e4(%ebp),%eax
085535a6 +0x1000:  mov    %eax,(%esp)
085535a9 +0x1003:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085535ae +0x1008:  movl   $0x1,0x4(%esp)
085535b6 +0x1010:  lea    -0x2e4(%ebp),%eax
085535bc +0x1016:  mov    %eax,(%esp)
085535bf +0x1019:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085535c4 +0x101e:  mov    -0x4c(%ebp),%eax
085535c7 +0x1021:  mov    %eax,(%esp)
085535ca +0x1024:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
085535cf +0x1029:  mov    %eax,0x4(%esp)
085535d3 +0x102d:  lea    -0x2e4(%ebp),%eax
085535d9 +0x1033:  mov    %eax,(%esp)
085535dc +0x1036:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085535e1 +0x103b:  movl   $0x1,0x4(%esp)
085535e9 +0x1043:  lea    -0x2e4(%ebp),%eax
085535ef +0x1049:  mov    %eax,(%esp)
085535f2 +0x104c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085535f7 +0x1051:  lea    -0x2e4(%ebp),%eax
085535fd +0x1057:  mov    %eax,0x4(%esp)
08553601 +0x105b:  mov    0x8(%ebp),%eax
08553604 +0x105e:  mov    %eax,(%esp)
08553607 +0x1061:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855360c +0x1066:  mov    $0x1,%ebx
08553611 +0x106b:  lea    -0x2fc(%ebp),%eax
08553617 +0x1071:  mov    %eax,(%esp)
0855361a +0x1074:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
0855361f +0x1079:  jmp    08553657 <+0x10b1>
08553621 +0x107b:  mov    %edx,%ebx
08553623 +0x107d:  mov    %eax,%esi
08553625 +0x107f:  lea    -0x2fc(%ebp),%eax
0855362b +0x1085:  mov    %eax,(%esp)
0855362e +0x1088:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
08553633 +0x108d:  mov    %esi,%eax
08553635 +0x108f:  mov    %ebx,%edx
08553637 +0x1091:  jmp    08553639 <+0x1093>
08553639 +0x1093:  mov    %edx,%ebx
0855363b +0x1095:  mov    %eax,%esi
0855363d +0x1097:  lea    -0x2e4(%ebp),%eax
08553643 +0x109d:  mov    %eax,(%esp)
08553646 +0x10a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855364b +0x10a5:  mov    %esi,%eax
0855364d +0x10a7:  mov    %ebx,%edx
0855364f +0x10a9:  mov    %eax,(%esp)
08553652 +0x10ac:  call   08ae3750 <_Unwind_Resume>
08553657 +0x10b1:  lea    -0x2e4(%ebp),%eax
0855365d +0x10b7:  mov    %eax,(%esp)
08553660 +0x10ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08553665 +0x10bf:  mov    %ebx,%eax
08553667 +0x10c1:  lea    -0xc(%ebp),%esp
0855366a +0x10c4:  add    $0x0,%esp
0855366d +0x10c7:  pop    %ebx
0855366e +0x10c8:  pop    %esi
0855366f +0x10c9:  pop    %edi
08553670 +0x10ca:  pop    %ebp
08553671 +0x10cb:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::SetMailBoxInfo @ 0x85525a6

/* WongWork::CMailBoxHelper::SetMailBoxInfo(CUser*, SIG_MAILBOX_LIST const*) */

undefined4 WongWork::CMailBoxHelper::SetMailBoxInfo(CUser *param_1,SIG_MAILBOX_LIST *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CAvatarItemMgr *this;
  CInventory *pCVar7;
  int iVar8;
  CDataManager *this_00;
  int iVar9;
  size_t sVar10;
  size_t *psVar11;
  undefined4 uVar12;
  SIG_MAILBOX_LIST local_375 [2];
  int local_373;
  undefined4 local_36e;
  undefined2 local_36a;
  undefined4 local_368;
  stAmplifyOption_t asStack_364 [4];
  undefined4 local_360;
  undefined4 local_35c;
  undefined2 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined2 local_344;
  UpgradeSeparateInfo aUStack_342 [10];
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_328;
  undefined4 local_324;
  undefined4 local_320;
  SIG_MAILBOX_LIST local_31c;
  SIG_MAILBOX_LIST *local_318;
  SIG_MAILBOX_LIST *local_314;
  uint local_310;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_30c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_308 [4];
  int local_304;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_300 [24];
  PacketGuard local_2e8 [12];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_2dc [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_2d8 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_2d4 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_2d0 [4];
  _Rb_tree_const_iterator<unsigned_int> local_2cc [4];
  undefined4 local_2c8;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_2c4 [4];
  map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
  local_2c0 [4];
  pair local_2bc [8];
  pair<unsigned_int_const,SIG_LETTER_INFO> local_2b4 [304];
  uint local_184 [76];
  size_t local_54;
  CMailBox *local_50;
  byte local_49;
  long local_48;
  int local_44;
  size_t local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  CMail *local_2c;
  int *local_28;
  char local_21;
  int local_20;
  
  local_50 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_50 == (CMailBox *)0x0) {
    uVar12 = 0;
  }
  else {
    CMailBox::incMailLoadCount(local_50);
    local_49 = CMailBox::IsLoaded(local_50);
    local_49 = local_49 ^ 1;
    PacketGuard::PacketGuard(local_2e8);
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 08552612 to 08552616 has its CatchHandler @ 08553639 */
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set(local_300);
                    /* try { // try from 0855263c to 0855360b has its CatchHandler @ 08553621 */
    CMailBox::SetPackageLoadLack(local_50,(uint *)(param_2 + 0x333a),0x14,(set *)local_300);
    local_44 = 0;
    local_304 = 0;
    if (local_49 != 1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2e8,0,0x61);
      local_304 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2e8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x794));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,1);
      std::
      map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
      ::begin(local_2dc);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
      _Rb_tree_const_iterator(local_308,(_Rb_tree_iterator *)local_2dc);
      while( true ) {
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::end(local_2d4);
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
        _Rb_tree_const_iterator(local_2d8,(_Rb_tree_iterator *)local_2d4);
        cVar3 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator!=(local_308,(_Rb_tree_const_iterator *)local_2d8);
        if (cVar3 == '\0') break;
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_2d0);
        iVar9 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->(local_308);
        local_2c8 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar9 + 4));
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
                  ((uint *)local_2cc);
        cVar3 = std::_Rb_tree_const_iterator<unsigned_int>::operator==
                          (local_2cc,(_Rb_tree_const_iterator *)local_2d0);
        if (cVar3 == '\0') {
          iVar9 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                  ::operator->(local_308);
          CMailBox::CMail::MakePacket(*(CMail **)(iVar9 + 4),local_2e8,local_48,param_1);
          local_44 = local_44 + 1;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
        operator++(local_308);
      }
    }
    for (local_3c = 0; local_3c < *(int *)(param_2 + 0x7a0); local_3c = local_3c + 1) {
      iVar4 = local_3c * 0x47;
      iVar5 = local_3c * 0x47;
      iVar6 = local_3c * 0x47;
      iVar9 = *(int *)(param_2 + local_3c * 0x47 + 0x7ac);
      iVar1 = *(int *)(param_2 + local_3c * 0x47 + 0x7a8);
      iVar8 = *(int *)(param_2 + local_3c * 0x47 + 0x7a4);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar7);
      CAvatarItemMgr::RegistItem
                (this,iVar8,iVar1,iVar9,(char *)(param_2 + iVar6 + 0x7b0),
                 (stAvatarEmblemInfo_t *)(param_2 + iVar5 + 0x7c9),
                 (stAvatarExpansionInfo_t *)(param_2 + iVar4 + 0x7e7),false);
    }
    for (local_38 = 0; local_38 < *(int *)(param_2 + 0xd30); local_38 = local_38 + 1) {
      iVar9 = *(int *)(param_2 + local_38 * 0x25 + 0xd38);
      iVar1 = *(int *)(param_2 + local_38 * 0x25 + 0xd34);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar8 = CInventory::GetCreatureMgrW(pCVar7);
      user_creature::CCreatureMgr::RegistTempPeriod(iVar8,iVar1,iVar9);
    }
    CMailBox::SetLoadState(local_50,true,*(long *)(param_2 + 0x79c));
    for (local_34 = 0; local_34 < *(int *)(param_2 + 0x794); local_34 = local_34 + 1) {
      Inven_Item::Inven_Item((Inven_Item *)local_375);
      if (*(int *)(param_2 + local_34 * 0x61 + 0x2a) != 0) {
        if (*(int *)(param_2 + local_34 * 0x61 + 0x2a) == 1) {
          local_373 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
          local_36e = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x2e);
          local_36a = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x33);
        }
        else {
          iVar9 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
          this_00 = (CDataManager *)G_CDataManager();
          local_28 = (int *)CDataManager::find_item(this_00,iVar9);
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 8))(local_28,local_375);
            local_375[0] = param_2[local_34 * 0x61 + 0x29];
            local_373 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
            local_36e = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x2e);
            Inven_Item::SetItemAttr((Inven_Item *)local_375,(uchar)param_2[local_34 * 0x61 + 0x32]);
            local_36a = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x33);
            local_368 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x35);
            local_360 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x39);
            local_35c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x3d);
            local_358 = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x41);
            stAmplifyOption_t::assign
                      (asStack_364,(uchar)param_2[local_34 * 0x61 + 0x43],
                       *(ushort *)(param_2 + local_34 * 0x61 + 0x44));
            local_350 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x46);
            local_34c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x4a);
            local_348 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x4e);
            local_344 = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x52);
            UpgradeSeparateInfo::SetUpgradeSeparateAndTradeRestriction
                      (aUStack_342,(uchar)param_2[local_34 * 0x61 + 0x54]);
            if ((param_2[local_34 * 0x61 + 0x60] == (SIG_MAILBOX_LIST)0x4) &&
               (cVar3 = IsTradeLimitAttachTypeItem((Inven_Item *)local_375), cVar3 != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              local_21 = Inven_Item::GetTradeLimitCount((Inven_Item *)local_375);
              Inven_Item::SetTradeLimitCount((Inven_Item *)local_375,local_21 + 0xff);
              cUserHistoryLog::ChangeItemLimitCount
                        ((cUserHistoryLog *)(param_1 + 0x79700),1,-1,local_373,-1,4);
            }
          }
        }
      }
      local_30 = 0;
      if (param_2[local_34 * 0x61 + 0x59] == (SIG_MAILBOX_LIST)0x0) {
        if (param_2[local_34 * 0x61 + 0x5a] != (SIG_MAILBOX_LIST)0x0) {
          local_30 = 2;
        }
      }
      else {
        local_30 = 1;
      }
      CMailBox::stAddNewMailInput::stAddNewMailInput((stAddNewMailInput *)&local_338);
      local_314 = local_375;
      local_31c = param_2[local_34 * 0x61 + 0x5b];
      local_32c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x5c);
      local_338 = *(undefined4 *)(param_2 + local_34 * 0x61);
      local_330 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x25);
      local_324 = local_30;
      local_320 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x55);
      local_334 = *(undefined4 *)(param_2 + local_34 * 0x61 + 4);
      local_318 = param_2 + local_34 * 0x61 + 8;
      local_328 = (uint)(byte)param_2[local_34 * 0x61 + 0x60];
      local_2c = (CMail *)CMailBox::AddNewMail(local_50,(stAddNewMailInput *)&local_338);
      if (((local_2c != (CMail *)0x0) &&
          (cVar3 = CMailBox::FindPackageLoadLack
                             (local_50,*(uint *)(param_2 + local_34 * 0x61 + 0x5c)), cVar3 == '\0'))
         && (local_44 = local_44 + 1, local_49 != 1)) {
        CMailBox::CMail::MakePacket(local_2c,local_2e8,local_48,param_1);
      }
    }
    CMailBox::SetNotLoadedMailCount(local_50,*(int *)(param_2 + 0x798));
    if (local_49 == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,&local_304,local_44);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x798));
    }
    else {
      MakeMailBoxListPacket(param_1,local_2e8);
      if (0 < *(int *)(param_2 + 0x794)) {
        SetPeriodCheckTimer(param_1);
      }
      CMailBox::ClearLetterKeepCount(local_50);
      CMailBox::SetLoadedLetterCount(local_50,0);
    }
    iVar9 = CMailBox::GetLoadedLetterCount(local_50);
    CMailBox::SetLoadedLetterCount(local_50,iVar9 + *(int *)(param_2 + 0x332a));
    local_44 = 0;
    local_304 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2e8);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x1018));
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::begin(local_30c);
    while( true ) {
      std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_2c4);
      cVar3 = std::_Rb_tree_const_iterator<unsigned_int>::operator!=
                        ((_Rb_tree_const_iterator<unsigned_int> *)local_30c,
                         (_Rb_tree_const_iterator *)local_2c4);
      if (cVar3 == '\0') break;
      std::_Rb_tree_const_iterator<unsigned_int>::operator*
                ((_Rb_tree_const_iterator<unsigned_int> *)local_30c);
      std::
      map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
      ::find(&local_310);
      std::
      map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
      ::end(local_2c0);
      cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                         &local_310,(_Rb_tree_iterator *)local_2c0);
      if (cVar3 != '\0') {
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 4));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 8));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0xc));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0xc));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2e8,(char *)(iVar9 + 0xc),sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0x29));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0x29));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2e8,(char *)(iVar9 + 0x29),sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        cVar3 = isUnlimitMail(param_2,*(int *)(iVar9 + 4));
        if (cVar3 == '\0') {
          iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                             &local_310);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 0x129));
        }
        else {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,0);
        }
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_2e8,(int)*(short *)(iVar9 + 0x12d));
        local_44 = local_44 + 1;
        std::
        map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
        ::erase((map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
                 *)(local_50 + 0x90),local_310);
      }
      std::_Rb_tree_const_iterator<unsigned_int>::operator++
                ((_Rb_tree_const_iterator<unsigned_int> *)local_30c);
    }
    local_40 = 0;
    for (local_20 = 0; local_20 < *(int *)(param_2 + 0x1018); local_20 = local_20 + 1) {
      cVar3 = CMailBox::FindPackageLoadLack(local_50,*(uint *)(param_2 + local_20 * 299 + 0x101c));
      if (cVar3 == '\x01') {
        std::make_pair<unsigned_int_const&,SIG_LETTER_INFO_const&>
                  (local_184,(SIG_LETTER_INFO *)(param_2 + local_20 * 299 + 0x101c));
        std::pair<unsigned_int_const,SIG_LETTER_INFO>::pair<unsigned_int,SIG_LETTER_INFO>
                  (local_2b4,(pair *)local_184);
        std::
        map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
        ::insert(local_2bc);
      }
      else {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x101c));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x1020));
        local_40 = strlen((char *)(param_2 + local_20 * 299 + 0x1024));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,local_40);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2e8,(char *)(param_2 + local_20 * 299 + 0x1024),
                   local_40);
        local_40 = strlen((char *)(param_2 + local_20 * 299 + 0x1041));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,local_40);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2e8,(char *)(param_2 + local_20 * 299 + 0x1041),
                   local_40);
        cVar3 = isUnlimitMail(param_2,*(int *)(param_2 + local_20 * 299 + 0x101c));
        if (cVar3 == '\0') {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x1141));
        }
        else {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,0);
        }
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_2e8,
                   (int)*(short *)(param_2 + local_20 * 299 + 0x1145));
        local_44 = local_44 + 1;
      }
      iVar9 = local_20 * 299;
      local_54 = CMailBox::GetLastLoadLetterIdx(local_50);
      psVar11 = std::max<size_t>(&local_54,(size_t *)(param_2 + iVar9 + 0x101c));
      CMailBox::SetLastLoadLetterIdx(local_50,*psVar11);
      if (*(short *)(param_2 + local_20 * 299 + 0x1145) == 3) {
        CMailBox::InsertLetterKeepCount((uint)local_50);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,&local_304,local_44);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2e8,true);
    CUser::Send(param_1,local_2e8);
    if (local_49 != 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2e8);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2e8,1,99);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,1);
      iVar9 = CMailBox::GetNotLoadedMailCount(local_50);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,iVar9);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2e8,true);
      CUser::Send(param_1,local_2e8);
    }
    uVar12 = 1;
                    /* try { // try from 0855361a to 0855361e has its CatchHandler @ 08553639 */
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set(local_300);
    PacketGuard::~PacketGuard(local_2e8);
  }
  return uVar12;
}
```
