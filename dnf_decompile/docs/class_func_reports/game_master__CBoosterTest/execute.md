# execute

`_ZN11game_master12CBoosterTest7executeEv`

`game_master::CBoosterTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aed04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aed04  _ZN11game_master12CBoosterTest7executeEv
#           game_master::CBoosterTest::execute()
# range [0x084aed04, 0x084af0d5]
084aed04 +0x000:  push   %ebp
084aed05 +0x001:  mov    %esp,%ebp
084aed07 +0x003:  push   %edi
084aed08 +0x004:  push   %esi
084aed09 +0x005:  push   %ebx
084aed0a +0x006:  sub    $&_ZL14gUnicodeBuffer+0xcf50,%esp
084aed10 +0x00c:  mov    0x8(%ebp),%eax
084aed13 +0x00f:  mov    %eax,(%esp)
084aed16 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aed1b +0x017:  mov    %eax,-0x24(%ebp)
084aed1e +0x01a:  lea    -0x153(%ebp),%edx
084aed24 +0x020:  mov    $0xff,%ebx
084aed29 +0x025:  mov    $0x0,%eax
084aed2e +0x02a:  mov    %edx,%ecx
084aed30 +0x02c:  and    $0x1,%ecx
084aed33 +0x02f:  test   %ecx,%ecx
084aed35 +0x031:  je     084aed3f <+0x3b>
084aed37 +0x033:  mov    %al,(%edx)
084aed39 +0x035:  add    $0x1,%edx
084aed3c +0x038:  sub    $0x1,%ebx
084aed3f +0x03b:  mov    %edx,%ecx
084aed41 +0x03d:  and    $0x2,%ecx
084aed44 +0x040:  test   %ecx,%ecx
084aed46 +0x042:  je     084aed51 <+0x4d>
084aed48 +0x044:  mov    %ax,(%edx)
084aed4b +0x047:  add    $0x2,%edx
084aed4e +0x04a:  sub    $0x2,%ebx
084aed51 +0x04d:  mov    %ebx,%ecx
084aed53 +0x04f:  shr    $0x2,%ecx
084aed56 +0x052:  mov    %edx,%edi
084aed58 +0x054:  rep stos %eax,%es:(%edi)
084aed5a +0x056:  mov    %edi,%edx
084aed5c +0x058:  mov    %ebx,%ecx
084aed5e +0x05a:  and    $0x2,%ecx
084aed61 +0x05d:  test   %ecx,%ecx
084aed63 +0x05f:  je     084aed6b <+0x67>
084aed65 +0x061:  mov    %ax,(%edx)
084aed68 +0x064:  add    $0x2,%edx
084aed6b +0x067:  mov    %ebx,%ecx
084aed6d +0x069:  and    $0x1,%ecx
084aed70 +0x06c:  test   %ecx,%ecx
084aed72 +0x06e:  je     084aed79 <+0x75>
084aed74 +0x070:  mov    %al,(%edx)
084aed76 +0x072:  add    $0x1,%edx
084aed79 +0x075:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084aed7f +0x07b:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084aed84 +0x080:  mov    %edx,0x8(%esp)
084aed88 +0x084:  movl   $0x0,0x4(%esp)
084aed90 +0x08c:  mov    %eax,(%esp)
084aed93 +0x08f:  call   0807dcc0 <_init+0x5b8>
084aed98 +0x094:  movl   $"LOTTERY 아이템 결과체크를 시작합니다",0x4(%esp)
084aeda0 +0x09c:  mov    -0x24(%ebp),%eax
084aeda3 +0x09f:  mov    %eax,(%esp)
084aeda6 +0x0a2:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aedab +0x0a7:  mov    0x8(%ebp),%eax
084aedae +0x0aa:  mov    0x8(%eax),%eax
084aedb1 +0x0ad:  cmp    $0xffffffff,%eax
084aedb4 +0x0b0:  jne    084aedce <+0xca>
084aedb6 +0x0b2:  movl   $"아이템 인덱스를 입력하세요",0x4(%esp)
084aedbe +0x0ba:  mov    -0x24(%ebp),%eax
084aedc1 +0x0bd:  mov    %eax,(%esp)
084aedc4 +0x0c0:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aedc9 +0x0c5:  jmp    084af0cb <+0x3c7>
084aedce +0x0ca:  mov    0x8(%ebp),%eax
084aedd1 +0x0cd:  mov    0x8(%eax),%ebx
084aedd4 +0x0d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084aedd9 +0x0d5:  mov    %ebx,0x4(%esp)
084aeddd +0x0d9:  mov    %eax,(%esp)
084aede0 +0x0dc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084aede5 +0x0e1:  mov    %eax,-0x20(%ebp)
084aede8 +0x0e4:  cmpl   $0x0,-0x20(%ebp)
084aedec +0x0e8:  jne    084aee06 <+0x102>
084aedee +0x0ea:  movl   $"존재하지 않는 아이템입니다",0x4(%esp)
084aedf6 +0x0f2:  mov    -0x24(%ebp),%eax
084aedf9 +0x0f5:  mov    %eax,(%esp)
084aedfc +0x0f8:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aee01 +0x0fd:  jmp    084af0cb <+0x3c7>
084aee06 +0x102:  mov    0x8(%ebp),%eax
084aee09 +0x105:  mov    0xc(%eax),%eax
084aee0c +0x108:  cmp    $0xf4240,%eax
084aee11 +0x10d:  jg     084aee1d <+0x119>
084aee13 +0x10f:  mov    0x8(%ebp),%eax
084aee16 +0x112:  mov    0xc(%eax),%eax
084aee19 +0x115:  test   %eax,%eax
084aee1b +0x117:  jns    084aee35 <+0x131>
084aee1d +0x119:  movl   $"0 ~ 1000000번 통계까지만 지원됩니다",0x4(%esp)
084aee25 +0x121:  mov    -0x24(%ebp),%eax
084aee28 +0x124:  mov    %eax,(%esp)
084aee2b +0x127:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aee30 +0x12c:  jmp    084af0cb <+0x3c7>
084aee35 +0x131:  mov    0x8(%ebp),%eax
084aee38 +0x134:  mov    0xc(%eax),%eax
084aee3b +0x137:  test   %eax,%eax
084aee3d +0x139:  jne    084aee49 <+0x145>
084aee3f +0x13b:  mov    0x8(%ebp),%eax
084aee42 +0x13e:  movl   $0x2710,0xc(%eax)
084aee49 +0x145:  mov    0x8(%ebp),%eax
084aee4c +0x148:  mov    0xc(%eax),%eax
084aee4f +0x14b:  mov    %eax,0x8(%esp)
084aee53 +0x14f:  movl   $"%d번 통계입니다",0x4(%esp)
084aee5b +0x157:  lea    -0x39(%ebp),%eax
084aee5e +0x15a:  mov    %eax,(%esp)
084aee61 +0x15d:  call   0807e440 <_init+0xd38>
084aee66 +0x162:  lea    -0x39(%ebp),%eax
084aee69 +0x165:  mov    %eax,0x4(%esp)
084aee6d +0x169:  mov    -0x24(%ebp),%eax
084aee70 +0x16c:  mov    %eax,(%esp)
084aee73 +0x16f:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aee78 +0x174:  mov    -0x20(%ebp),%eax
084aee7b +0x177:  mov    %eax,(%esp)
084aee7e +0x17a:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084aee83 +0x17f:  mov    %eax,0x4(%esp)
084aee87 +0x183:  mov    0x8(%ebp),%eax
084aee8a +0x186:  mov    %eax,(%esp)
084aee8d +0x189:  call   084afccc <_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi>  ; game_master::CBoosterTest::is_gold_lottery_item(int)
084aee92 +0x18e:  mov    %al,-0x1a(%ebp)
084aee95 +0x191:  lea    -0x54(%ebp),%eax
084aee98 +0x194:  mov    %eax,(%esp)
084aee9b +0x197:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084aeea0 +0x19c:  mov    -0x20(%ebp),%eax
084aeea3 +0x19f:  mov    (%eax),%eax
084aeea5 +0x1a1:  add    $0xc,%eax
084aeea8 +0x1a4:  mov    (%eax),%edx
084aeeaa +0x1a6:  mov    -0x20(%ebp),%eax
084aeead +0x1a9:  mov    %eax,(%esp)
084aeeb0 +0x1ac:  call   *%edx
084aeeb2 +0x1ae:  sub    $0x6,%eax
084aeeb5 +0x1b1:  cmp    $0x15,%eax
084aeeb8 +0x1b4:  ja     084aef7c <+0x278>
084aeebe +0x1ba:  mov    &data#c1f71dde(.rodata)(,%eax,4),%eax
084aeec5 +0x1c1:  jmp    *%eax
084aeec7 +0x1c3:  lea    -0x54(%ebp),%eax
084aeeca +0x1c6:  mov    %eax,0x8(%esp)
084aeece +0x1ca:  mov    -0x20(%ebp),%eax
084aeed1 +0x1cd:  mov    %eax,0x4(%esp)
084aeed5 +0x1d1:  mov    0x8(%ebp),%eax
084aeed8 +0x1d4:  mov    %eax,(%esp)
084aeedb +0x1d7:  call   084af9d6 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::getBoosterResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aeee0 +0x1dc:  jmp    084aef9d <+0x299>
084aeee5 +0x1e1:  cmpb   $0x0,-0x1a(%ebp)
084aeee9 +0x1e5:  je     084aef09 <+0x205>
084aeeeb +0x1e7:  lea    -0x54(%ebp),%eax
084aeeee +0x1ea:  mov    %eax,0x8(%esp)
084aeef2 +0x1ee:  mov    -0x20(%ebp),%eax
084aeef5 +0x1f1:  mov    %eax,0x4(%esp)
084aeef9 +0x1f5:  mov    0x8(%ebp),%eax
084aeefc +0x1f8:  mov    %eax,(%esp)
084aeeff +0x1fb:  call   084afd1c <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::get_gold_lottery_result(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aef04 +0x200:  jmp    084aef9d <+0x299>
084aef09 +0x205:  lea    -0x54(%ebp),%eax
084aef0c +0x208:  mov    %eax,0x8(%esp)
084aef10 +0x20c:  mov    -0x20(%ebp),%eax
084aef13 +0x20f:  mov    %eax,0x4(%esp)
084aef17 +0x213:  mov    0x8(%ebp),%eax
084aef1a +0x216:  mov    %eax,(%esp)
084aef1d +0x219:  call   084afba8 <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::getJarResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aef22 +0x21e:  jmp    084aef9d <+0x299>
084aef24 +0x220:  lea    -0x54(%ebp),%eax
084aef27 +0x223:  mov    %eax,0x8(%esp)
084aef2b +0x227:  mov    -0x20(%ebp),%eax
084aef2e +0x22a:  mov    %eax,0x4(%esp)
084aef32 +0x22e:  mov    0x8(%ebp),%eax
084aef35 +0x231:  mov    %eax,(%esp)
084aef38 +0x234:  call   084afe3a <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::getRandomboxResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aef3d +0x239:  jmp    084aef9d <+0x299>
084aef3f +0x23b:  lea    -0x54(%ebp),%eax
084aef42 +0x23e:  mov    %eax,0x8(%esp)
084aef46 +0x242:  mov    -0x20(%ebp),%eax
084aef49 +0x245:  mov    %eax,0x4(%esp)
084aef4d +0x249:  mov    0x8(%ebp),%eax
084aef50 +0x24c:  mov    %eax,(%esp)
084aef53 +0x24f:  call   084af0d6 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::getCompoundEmblemResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aef58 +0x254:  xor    $0x1,%eax
084aef5b +0x257:  test   %al,%al
084aef5d +0x259:  je     084aef9c <+0x298>
084aef5f +0x25b:  mov    0x8(%ebp),%eax
084aef62 +0x25e:  mov    %eax,(%esp)
084aef65 +0x261:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aef6a +0x266:  movl   $"엠블렘 합성 대상이 아닙니다.",0x4(%esp)
084aef72 +0x26e:  mov    %eax,(%esp)
084aef75 +0x271:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aef7a +0x276:  jmp    084aef9d <+0x299>
084aef7c +0x278:  mov    0x8(%ebp),%eax
084aef7f +0x27b:  mov    %eax,(%esp)
084aef82 +0x27e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aef87 +0x283:  movl   $"LOTTERY 아이템이 아닙니다",0x4(%esp)
084aef8f +0x28b:  mov    %eax,(%esp)
084aef92 +0x28e:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084aef97 +0x293:  jmp    084af0c0 <+0x3bc>
084aef9c +0x298:  nop
084aef9d +0x299:  movb   $0x1,-0x19(%ebp)
084aefa1 +0x29d:  movl   $0x3e,0x8(%esp)
084aefa9 +0x2a5:  movl   $"item_id\titem_name\trarity\titem_cnt\tprice\tsell_price\tusable_lv\n",0x4(%esp)
084aefb1 +0x2ad:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084aefb7 +0x2b3:  mov    %eax,(%esp)
084aefba +0x2b6:  call   0807d8a0 <_init+0x198>
084aefbf +0x2bb:  jmp    084af086 <+0x382>
084aefc4 +0x2c0:  cmpb   $0x0,-0x1a(%ebp)
084aefc8 +0x2c4:  je     084aefe8 <+0x2e4>
084aefca +0x2c6:  lea    -0x54(%ebp),%eax
084aefcd +0x2c9:  mov    %eax,0x8(%esp)
084aefd1 +0x2cd:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084aefd7 +0x2d3:  mov    %eax,0x4(%esp)
084aefdb +0x2d7:  mov    -0x24(%ebp),%eax
084aefde +0x2da:  mov    %eax,(%esp)
084aefe1 +0x2dd:  call   084af7fc <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::make_file_gold_contents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084aefe6 +0x2e2:  jmp    084af004 <+0x300>
084aefe8 +0x2e4:  lea    -0x54(%ebp),%eax
084aefeb +0x2e7:  mov    %eax,0x8(%esp)
084aefef +0x2eb:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084aeff5 +0x2f1:  mov    %eax,0x4(%esp)
084aeff9 +0x2f5:  mov    -0x24(%ebp),%eax
084aeffc +0x2f8:  mov    %eax,(%esp)
084aefff +0x2fb:  call   084af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084af004 +0x300:  mov    0x8(%ebp),%eax
084af007 +0x303:  mov    0xc(%eax),%edx
084af00a +0x306:  mov    0x8(%ebp),%eax
084af00d +0x309:  mov    0x8(%eax),%eax
084af010 +0x30c:  mov    %edx,0xc(%esp)
084af014 +0x310:  mov    %eax,0x8(%esp)
084af018 +0x314:  movl   $"lottery_%d_%d.txt",0x4(%esp)
084af020 +0x31c:  lea    -0x153(%ebp),%eax
084af026 +0x322:  mov    %eax,(%esp)
084af029 +0x325:  call   0807e440 <_init+0xd38>
084af02e +0x32a:  lea    -0x54(%ebp),%eax
084af031 +0x32d:  mov    %eax,(%esp)
084af034 +0x330:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
084af039 +0x335:  test   %al,%al
084af03b +0x337:  je     084af041 <+0x33d>
084af03d +0x339:  movb   $0x0,-0x19(%ebp)
084af041 +0x33d:  movzbl -0x19(%ebp),%eax
084af045 +0x341:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%edx
084af04b +0x347:  mov    %edx,0xc(%esp)
084af04f +0x34b:  lea    -0x153(%ebp),%edx
084af055 +0x351:  mov    %edx,0x8(%esp)
084af059 +0x355:  mov    %eax,0x4(%esp)
084af05d +0x359:  mov    -0x24(%ebp),%eax
084af060 +0x35c:  mov    %eax,(%esp)
084af063 +0x35f:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084af068 +0x364:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
084af070 +0x36c:  movl   $0x0,0x4(%esp)
084af078 +0x374:  lea    -&_ZL14gUnicodeBuffer+0xcf3f(%ebp),%eax
084af07e +0x37a:  mov    %eax,(%esp)
084af081 +0x37d:  call   0807dcc0 <_init+0x5b8>
084af086 +0x382:  cmpb   $0x0,-0x19(%ebp)
084af08a +0x386:  jne    084aefc4 <+0x2c0>
084af090 +0x38c:  movl   $"LOTTERY 아이템 결과체크가 완료되었습니다",0x4(%esp)
084af098 +0x394:  mov    -0x24(%ebp),%eax
084af09b +0x397:  mov    %eax,(%esp)
084af09e +0x39a:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084af0a3 +0x39f:  jmp    084af0c0 <+0x3bc>
084af0a5 +0x3a1:  mov    %edx,%ebx
084af0a7 +0x3a3:  mov    %eax,%esi
084af0a9 +0x3a5:  lea    -0x54(%ebp),%eax
084af0ac +0x3a8:  mov    %eax,(%esp)
084af0af +0x3ab:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084af0b4 +0x3b0:  mov    %esi,%eax
084af0b6 +0x3b2:  mov    %ebx,%edx
084af0b8 +0x3b4:  mov    %eax,(%esp)
084af0bb +0x3b7:  call   08ae3750 <_Unwind_Resume>
084af0c0 +0x3bc:  lea    -0x54(%ebp),%eax
084af0c3 +0x3bf:  mov    %eax,(%esp)
084af0c6 +0x3c2:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084af0cb +0x3c7:  add    $&_ZL14gUnicodeBuffer+0xcf50,%esp
084af0d1 +0x3cd:  pop    %ebx
084af0d2 +0x3ce:  pop    %esi
084af0d3 +0x3cf:  pop    %edi
084af0d4 +0x3d0:  pop    %ebp
084af0d5 +0x3d1:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::execute @ 0x84aed04

/* game_master::CBoosterTest::execute() */

void __thiscall game_master::CBoosterTest::execute(CBoosterTest *this)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char acStack_1746f [95000];
  char local_157;
  char local_156 [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_58 [27];
  char local_3d [21];
  CUser *local_28;
  CItem *local_24;
  char local_1e;
  bool local_1d;
  
  bVar9 = 0;
  local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
  pcVar6 = &local_157;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_157 = '\0';
    pcVar6 = local_156;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  memset(acStack_1746f,0,95000);
  SendChatMsg(local_28,&DAT_08c7fffc);
  if (*(int *)(this + 8) == -1) {
    SendChatMsg(local_28,&DAT_08c80021);
    return;
  }
  iVar2 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if (local_24 == (CItem *)0x0) {
    SendChatMsg(local_28,&DAT_08c8003c);
    return;
  }
  if ((1000000 < *(int *)(this + 0xc)) || (*(int *)(this + 0xc) < 0)) {
    SendChatMsg(local_28,&DAT_08c80058);
    return;
  }
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0xc) = 10000;
  }
  sprintf(local_3d,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
  SendChatMsg(local_28,local_3d);
  iVar2 = CItem::get_index(local_24);
  local_1e = is_gold_lottery_item(this,iVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_58);
                    /* try { // try from 084aeeb0 to 084af0a2 has its CatchHandler @ 084af0a5 */
  uVar3 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  switch(uVar3) {
  case 6:
  case 7:
  case 0xd:
    if (local_1e == '\0') {
      getJarResult((CItem *)this,(map *)local_24);
    }
    else {
      get_gold_lottery_result((CItem *)this,(map *)local_24);
    }
    break;
  default:
    pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
    SendChatMsg(pCVar4,&DAT_08c80099);
    goto LAB_084af0c0;
  case 0xf:
  case 0x10:
    getBoosterResult((CItem *)this,(map *)local_24);
    break;
  case 0x14:
    cVar1 = getCompoundEmblemResult(this,local_24,(map *)local_58);
    if (cVar1 != '\x01') {
      pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
      SendChatMsg(pCVar4,&DAT_08c8007c);
    }
    break;
  case 0x1a:
  case 0x1b:
    getRandomboxResult((CItem *)this,(map *)local_24);
  }
  local_1d = true;
  memcpy(acStack_1746f,"item_id\titem_name\trarity\titem_cnt\tprice\tsell_price\tusable_lv\n",0x3e);
  while (local_1d != false) {
    if (local_1e == '\0') {
      makeFileContents(local_28,acStack_1746f,(map *)local_58);
    }
    else {
      make_file_gold_contents(local_28,acStack_1746f,(map *)local_58);
    }
    sprintf(&local_157,"lottery_%d_%d.txt",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                      (local_58);
    if (cVar1 != '\0') {
      local_1d = false;
    }
    printClient(local_28,local_1d,&local_157,acStack_1746f);
    memset(acStack_1746f,0,95000);
  }
  SendChatMsg(local_28,&DAT_08c80104);
LAB_084af0c0:
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_58);
  return;
}
```
