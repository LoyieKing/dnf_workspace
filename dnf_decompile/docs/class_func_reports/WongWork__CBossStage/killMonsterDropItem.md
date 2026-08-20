# killMonsterDropItem

`_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt`

`WongWork::CBossStage::killMonsterDropItem(map_monster const&, int, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814d628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814d628  _ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt
#           WongWork::CBossStage::killMonsterDropItem(map_monster const&, int, unsigned short, unsigned short)
# range [0x0814d628, 0x0814de19]
0814d628 +0x000:  push   %ebp
0814d629 +0x001:  mov    %esp,%ebp
0814d62b +0x003:  push   %edi
0814d62c +0x004:  push   %esi
0814d62d +0x005:  push   %ebx
0814d62e +0x006:  sub    $0x21c,%esp
0814d634 +0x00c:  mov    0x14(%ebp),%edx
0814d637 +0x00f:  mov    0x18(%ebp),%eax
0814d63a +0x012:  mov    %dx,-0x1bc(%ebp)
0814d641 +0x019:  mov    %ax,-0x1c0(%ebp)
0814d648 +0x020:  lea    -0x50(%ebp),%eax
0814d64b +0x023:  mov    %eax,(%esp)
0814d64e +0x026:  call   080f53c2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x373>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x373
0814d653 +0x02b:  lea    -0x58(%ebp),%eax
0814d656 +0x02e:  mov    %eax,(%esp)
0814d659 +0x031:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
0814d65e +0x036:  lea    -0xc8(%ebp),%eax
0814d664 +0x03c:  mov    %eax,(%esp)
0814d667 +0x03f:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
0814d66c +0x044:  lea    -0x50(%ebp),%eax
0814d66f +0x047:  mov    %eax,(%esp)
0814d672 +0x04a:  call   08152a96 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23cb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23cb
0814d677 +0x04f:  lea    -0x58(%ebp),%eax
0814d67a +0x052:  mov    %eax,(%esp)
0814d67d +0x055:  call   08152ab2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23e7
0814d682 +0x05a:  lea    -0xc8(%ebp),%eax
0814d688 +0x060:  mov    %eax,(%esp)
0814d68b +0x063:  call   08152ad0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2405>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2405
0814d690 +0x068:  mov    0xc(%ebp),%eax
0814d693 +0x06b:  movzbl 0x8(%eax),%eax
0814d697 +0x06f:  cmp    $0x4,%al
0814d699 +0x071:  jle    0814d77b <+0x153>
0814d69f +0x077:  mov    0xc(%ebp),%eax
0814d6a2 +0x07a:  mov    0xc(%eax),%eax
0814d6a5 +0x07d:  mov    %eax,%ebx
0814d6a7 +0x07f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814d6ac +0x084:  mov    0x869c(%eax),%eax
0814d6b2 +0x08a:  mov    %ebx,0x4(%esp)
0814d6b6 +0x08e:  mov    %eax,(%esp)
0814d6b9 +0x091:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0814d6be +0x096:  mov    %eax,-0x30(%ebp)
0814d6c1 +0x099:  cmpl   $0x0,-0x30(%ebp)
0814d6c5 +0x09d:  je     0814d823 <+0x1fb>
0814d6cb +0x0a3:  mov    0x8(%ebp),%eax
0814d6ce +0x0a6:  mov    0x9f0(%eax),%eax
0814d6d4 +0x0ac:  mov    %eax,(%esp)
0814d6d7 +0x0af:  call   0815092e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x263>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x263
0814d6dc +0x0b4:  test   %al,%al
0814d6de +0x0b6:  je     0814d6f2 <+0xca>
0814d6e0 +0x0b8:  lea    -0x50(%ebp),%eax
0814d6e3 +0x0bb:  mov    %eax,0x4(%esp)
0814d6e7 +0x0bf:  mov    -0x30(%ebp),%eax
0814d6ea +0x0c2:  mov    %eax,(%esp)
0814d6ed +0x0c5:  call   0834a19c <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE>  ; CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long> >&) const
0814d6f2 +0x0ca:  lea    -0x110(%ebp),%eax
0814d6f8 +0x0d0:  mov    %eax,(%esp)
0814d6fb +0x0d3:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0814d700 +0x0d8:  mov    0x8(%ebp),%eax
0814d703 +0x0db:  mov    0xae8(%eax),%eax
0814d709 +0x0e1:  mov    %al,-0xda(%ebp)
0814d70f +0x0e7:  mov    0x10(%ebp),%eax
0814d712 +0x0ea:  mov    %al,-0xdc(%ebp)
0814d718 +0x0f0:  mov    0x8(%ebp),%eax
0814d71b +0x0f3:  mov    0x4(%eax),%eax
0814d71e +0x0f6:  mov    %eax,(%esp)
0814d721 +0x0f9:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814d726 +0x0fe:  mov    %al,-0xd2(%ebp)
0814d72c +0x104:  lea    -0xc8(%ebp),%eax
0814d732 +0x10a:  mov    %eax,0x8(%esp)
0814d736 +0x10e:  lea    -0x110(%ebp),%eax
0814d73c +0x114:  mov    %eax,0x4(%esp)
0814d740 +0x118:  mov    -0x30(%ebp),%eax
0814d743 +0x11b:  mov    %eax,(%esp)
0814d746 +0x11e:  call   0834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
0814d74b +0x123:  jmp    0814d768 <+0x140>
0814d74d +0x125:  mov    %edx,%ebx
0814d74f +0x127:  mov    %eax,%esi
0814d751 +0x129:  lea    -0x110(%ebp),%eax
0814d757 +0x12f:  mov    %eax,(%esp)
0814d75a +0x132:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814d75f +0x137:  mov    %esi,%eax
0814d761 +0x139:  mov    %ebx,%edx
0814d763 +0x13b:  jmp    0814dd9d <+0x775>
0814d768 +0x140:  lea    -0x110(%ebp),%eax
0814d76e +0x146:  mov    %eax,(%esp)
0814d771 +0x149:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814d776 +0x14e:  jmp    0814d823 <+0x1fb>
0814d77b +0x153:  mov    0xc(%ebp),%eax
0814d77e +0x156:  mov    0xc(%eax),%ebx
0814d781 +0x159:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814d786 +0x15e:  mov    %ebx,0x4(%esp)
0814d78a +0x162:  mov    %eax,(%esp)
0814d78d +0x165:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0814d792 +0x16a:  mov    %eax,-0x2c(%ebp)
0814d795 +0x16d:  cmpl   $0x0,-0x2c(%ebp)
0814d799 +0x171:  je     0814d823 <+0x1fb>
0814d79f +0x177:  lea    -0x158(%ebp),%eax
0814d7a5 +0x17d:  mov    %eax,(%esp)
0814d7a8 +0x180:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0814d7ad +0x185:  mov    0x8(%ebp),%eax
0814d7b0 +0x188:  mov    0xae8(%eax),%eax
0814d7b6 +0x18e:  mov    %al,-0x122(%ebp)
0814d7bc +0x194:  mov    0x10(%ebp),%eax
0814d7bf +0x197:  mov    %al,-0x124(%ebp)
0814d7c5 +0x19d:  mov    0x8(%ebp),%eax
0814d7c8 +0x1a0:  mov    0x4(%eax),%eax
0814d7cb +0x1a3:  mov    %eax,(%esp)
0814d7ce +0x1a6:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814d7d3 +0x1ab:  mov    %al,-0x11a(%ebp)
0814d7d9 +0x1b1:  lea    -0xc8(%ebp),%eax
0814d7df +0x1b7:  mov    %eax,0x8(%esp)
0814d7e3 +0x1bb:  lea    -0x158(%ebp),%eax
0814d7e9 +0x1c1:  mov    %eax,0x4(%esp)
0814d7ed +0x1c5:  mov    -0x2c(%ebp),%eax
0814d7f0 +0x1c8:  mov    %eax,(%esp)
0814d7f3 +0x1cb:  call   0834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
0814d7f8 +0x1d0:  jmp    0814d815 <+0x1ed>
0814d7fa +0x1d2:  mov    %edx,%ebx
0814d7fc +0x1d4:  mov    %eax,%esi
0814d7fe +0x1d6:  lea    -0x158(%ebp),%eax
0814d804 +0x1dc:  mov    %eax,(%esp)
0814d807 +0x1df:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814d80c +0x1e4:  mov    %esi,%eax
0814d80e +0x1e6:  mov    %ebx,%edx
0814d810 +0x1e8:  jmp    0814dd9d <+0x775>
0814d815 +0x1ed:  lea    -0x158(%ebp),%eax
0814d81b +0x1f3:  mov    %eax,(%esp)
0814d81e +0x1f6:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814d823 +0x1fb:  lea    -0x44(%ebp),%eax
0814d826 +0x1fe:  lea    -0xc8(%ebp),%edx
0814d82c +0x204:  mov    %edx,0x4(%esp)
0814d830 +0x208:  mov    %eax,(%esp)
0814d833 +0x20b:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0814d838 +0x210:  sub    $0x4,%esp
0814d83b +0x213:  lea    -0x44(%ebp),%eax
0814d83e +0x216:  mov    %eax,0x4(%esp)
0814d842 +0x21a:  lea    -0x5c(%ebp),%eax
0814d845 +0x21d:  mov    %eax,(%esp)
0814d848 +0x220:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
0814d84d +0x225:  lea    -0x40(%ebp),%eax
0814d850 +0x228:  lea    -0xc8(%ebp),%edx
0814d856 +0x22e:  mov    %edx,0x4(%esp)
0814d85a +0x232:  mov    %eax,(%esp)
0814d85d +0x235:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0814d862 +0x23a:  sub    $0x4,%esp
0814d865 +0x23d:  lea    -0x40(%ebp),%eax
0814d868 +0x240:  mov    %eax,0x4(%esp)
0814d86c +0x244:  lea    -0x60(%ebp),%eax
0814d86f +0x247:  mov    %eax,(%esp)
0814d872 +0x24a:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
0814d877 +0x24f:  jmp    0814d9ba <+0x392>
0814d87c +0x254:  lea    -0x1ac(%ebp),%eax
0814d882 +0x25a:  mov    %eax,(%esp)
0814d885 +0x25d:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0814d88a +0x262:  movb   $0x1,-0x1ac(%ebp)
0814d891 +0x269:  movzwl -0x1c0(%ebp),%eax
0814d898 +0x270:  mov    %ax,-0x1a4(%ebp)
0814d89f +0x277:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0814d8a6 +0x27e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0814d8ab +0x283:  mov    %eax,-0x1a0(%ebp)
0814d8b1 +0x289:  lea    -0x5c(%ebp),%eax
0814d8b4 +0x28c:  mov    %eax,(%esp)
0814d8b7 +0x28f:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
0814d8bc +0x294:  mov    (%eax),%edx
0814d8be +0x296:  mov    %edx,-0x19c(%ebp)
0814d8c4 +0x29c:  mov    0x4(%eax),%edx
0814d8c7 +0x29f:  mov    %edx,-0x198(%ebp)
0814d8cd +0x2a5:  mov    0x8(%eax),%edx
0814d8d0 +0x2a8:  mov    %edx,-0x194(%ebp)
0814d8d6 +0x2ae:  mov    0xc(%eax),%edx
0814d8d9 +0x2b1:  mov    %edx,-0x190(%ebp)
0814d8df +0x2b7:  mov    0x10(%eax),%edx
0814d8e2 +0x2ba:  mov    %edx,-0x18c(%ebp)
0814d8e8 +0x2c0:  mov    0x14(%eax),%edx
0814d8eb +0x2c3:  mov    %edx,-0x188(%ebp)
0814d8f1 +0x2c9:  mov    0x18(%eax),%edx
0814d8f4 +0x2cc:  mov    %edx,-0x184(%ebp)
0814d8fa +0x2d2:  mov    0x1c(%eax),%edx
0814d8fd +0x2d5:  mov    %edx,-0x180(%ebp)
0814d903 +0x2db:  mov    0x20(%eax),%edx
0814d906 +0x2de:  mov    %edx,-0x17c(%ebp)
0814d90c +0x2e4:  mov    0x24(%eax),%edx
0814d90f +0x2e7:  mov    %edx,-0x178(%ebp)
0814d915 +0x2ed:  mov    0x28(%eax),%edx
0814d918 +0x2f0:  mov    %edx,-0x174(%ebp)
0814d91e +0x2f6:  mov    0x2c(%eax),%edx
0814d921 +0x2f9:  mov    %edx,-0x170(%ebp)
0814d927 +0x2ff:  mov    0x30(%eax),%edx
0814d92a +0x302:  mov    %edx,-0x16c(%ebp)
0814d930 +0x308:  mov    0x34(%eax),%edx
0814d933 +0x30b:  mov    %edx,-0x168(%ebp)
0814d939 +0x311:  mov    0x38(%eax),%edx
0814d93c +0x314:  mov    %edx,-0x164(%ebp)
0814d942 +0x31a:  movzbl 0x3c(%eax),%eax
0814d946 +0x31e:  mov    %al,-0x160(%ebp)
0814d94c +0x324:  mov    0x8(%ebp),%eax
0814d94f +0x327:  mov    0xa34(%eax),%eax
0814d955 +0x32d:  mov    %eax,-0x1a8(%ebp)
0814d95b +0x333:  lea    0x1(%eax),%edx
0814d95e +0x336:  mov    0x8(%ebp),%eax
0814d961 +0x339:  mov    %edx,0xa34(%eax)
0814d967 +0x33f:  mov    0x8(%ebp),%eax
0814d96a +0x342:  add    $0x9f4,%eax
0814d96f +0x347:  mov    %eax,-0x1c4(%ebp)
0814d975 +0x34d:  lea    0x4(%esp),%edx
0814d979 +0x351:  lea    -0x1ac(%ebp),%ebx
0814d97f +0x357:  mov    $0x15,%eax
0814d984 +0x35c:  mov    %edx,%edi
0814d986 +0x35e:  mov    %ebx,%esi
0814d988 +0x360:  mov    %eax,%ecx
0814d98a +0x362:  rep movsl %ds:(%esi),%es:(%edi)
0814d98c +0x364:  mov    -0x1c4(%ebp),%eax
0814d992 +0x36a:  mov    %eax,(%esp)
0814d995 +0x36d:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
0814d99a +0x372:  lea    -0x1ac(%ebp),%eax
0814d9a0 +0x378:  mov    %eax,0x4(%esp)
0814d9a4 +0x37c:  lea    -0x58(%ebp),%eax
0814d9a7 +0x37f:  mov    %eax,(%esp)
0814d9aa +0x382:  call   08152b52 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2487>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2487
0814d9af +0x387:  lea    -0x5c(%ebp),%eax
0814d9b2 +0x38a:  mov    %eax,(%esp)
0814d9b5 +0x38d:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
0814d9ba +0x392:  lea    -0x60(%ebp),%eax
0814d9bd +0x395:  mov    %eax,0x4(%esp)
0814d9c1 +0x399:  lea    -0x5c(%ebp),%eax
0814d9c4 +0x39c:  mov    %eax,(%esp)
0814d9c7 +0x39f:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
0814d9cc +0x3a4:  test   %al,%al
0814d9ce +0x3a6:  jne    0814d87c <+0x254>
0814d9d4 +0x3ac:  movl   $0x0,-0x64(%ebp)
0814d9db +0x3b3:  movl   $0x0,-0x34(%ebp)
0814d9e2 +0x3ba:  lea    -0x70(%ebp),%eax
0814d9e5 +0x3bd:  mov    %eax,(%esp)
0814d9e8 +0x3c0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814d9ed +0x3c5:  movl   $0x26,0x8(%esp)
0814d9f5 +0x3cd:  movl   $0x0,0x4(%esp)
0814d9fd +0x3d5:  lea    -0x70(%ebp),%eax
0814da00 +0x3d8:  mov    %eax,(%esp)
0814da03 +0x3db:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814da08 +0x3e0:  movzwl -0x1bc(%ebp),%eax
0814da0f +0x3e7:  mov    %eax,0x4(%esp)
0814da13 +0x3eb:  lea    -0x70(%ebp),%eax
0814da16 +0x3ee:  mov    %eax,(%esp)
0814da19 +0x3f1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814da1e +0x3f6:  lea    -0x70(%ebp),%eax
0814da21 +0x3f9:  mov    %eax,(%esp)
0814da24 +0x3fc:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0814da29 +0x401:  mov    %eax,-0x64(%ebp)
0814da2c +0x404:  mov    -0x34(%ebp),%eax
0814da2f +0x407:  mov    %eax,0x4(%esp)
0814da33 +0x40b:  lea    -0x70(%ebp),%eax
0814da36 +0x40e:  mov    %eax,(%esp)
0814da39 +0x411:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814da3e +0x416:  lea    -0x3c(%ebp),%eax
0814da41 +0x419:  lea    -0x58(%ebp),%edx
0814da44 +0x41c:  mov    %edx,0x4(%esp)
0814da48 +0x420:  mov    %eax,(%esp)
0814da4b +0x423:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
0814da50 +0x428:  sub    $0x4,%esp
0814da53 +0x42b:  lea    -0x3c(%ebp),%eax
0814da56 +0x42e:  mov    %eax,0x4(%esp)
0814da5a +0x432:  lea    -0x74(%ebp),%eax
0814da5d +0x435:  mov    %eax,(%esp)
0814da60 +0x438:  call   08152bae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24e3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24e3
0814da65 +0x43d:  lea    -0x38(%ebp),%eax
0814da68 +0x440:  lea    -0x58(%ebp),%edx
0814da6b +0x443:  mov    %edx,0x4(%esp)
0814da6f +0x447:  mov    %eax,(%esp)
0814da72 +0x44a:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
0814da77 +0x44f:  sub    $0x4,%esp
0814da7a +0x452:  lea    -0x38(%ebp),%eax
0814da7d +0x455:  mov    %eax,0x4(%esp)
0814da81 +0x459:  lea    -0x78(%ebp),%eax
0814da84 +0x45c:  mov    %eax,(%esp)
0814da87 +0x45f:  call   08152bae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24e3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24e3
0814da8c +0x464:  lea    -0x96(%ebp),%eax
0814da92 +0x46a:  mov    %eax,(%esp)
0814da95 +0x46d:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0814da9a +0x472:  jmp    0814dce2 <+0x6ba>
0814da9f +0x477:  lea    -0x74(%ebp),%eax
0814daa2 +0x47a:  mov    %eax,(%esp)
0814daa5 +0x47d:  call   08152c0a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x253f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x253f
0814daaa +0x482:  mov    %eax,-0x28(%ebp)
0814daad +0x485:  mov    -0x28(%ebp),%eax
0814dab0 +0x488:  mov    0x4(%eax),%eax
0814dab3 +0x48b:  mov    %eax,0x4(%esp)
0814dab7 +0x48f:  lea    -0x70(%ebp),%eax
0814daba +0x492:  mov    %eax,(%esp)
0814dabd +0x495:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814dac2 +0x49a:  mov    -0x28(%ebp),%eax
0814dac5 +0x49d:  mov    0x12(%eax),%eax
0814dac8 +0x4a0:  mov    %eax,0x4(%esp)
0814dacc +0x4a4:  lea    -0x70(%ebp),%eax
0814dacf +0x4a7:  mov    %eax,(%esp)
0814dad2 +0x4aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814dad7 +0x4af:  mov    -0x28(%ebp),%eax
0814dada +0x4b2:  add    $0x10,%eax
0814dadd +0x4b5:  mov    %eax,(%esp)
0814dae0 +0x4b8:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0814dae5 +0x4bd:  movzbl %al,%eax
0814dae8 +0x4c0:  mov    %eax,0x4(%esp)
0814daec +0x4c4:  lea    -0x70(%ebp),%eax
0814daef +0x4c7:  mov    %eax,(%esp)
0814daf2 +0x4ca:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814daf7 +0x4cf:  mov    -0x28(%ebp),%eax
0814dafa +0x4d2:  add    $0x10,%eax
0814dafd +0x4d5:  mov    %eax,(%esp)
0814db00 +0x4d8:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0814db05 +0x4dd:  test   %al,%al
0814db07 +0x4df:  je     0814dbc5 <+0x59d>
0814db0d +0x4e5:  mov    -0x28(%ebp),%eax
0814db10 +0x4e8:  mov    0x12(%eax),%eax
0814db13 +0x4eb:  mov    %eax,%ebx
0814db15 +0x4ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814db1a +0x4f2:  mov    %ebx,0x4(%esp)
0814db1e +0x4f6:  mov    %eax,(%esp)
0814db21 +0x4f9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814db26 +0x4fe:  mov    %eax,-0x24(%ebp)
0814db29 +0x501:  cmpl   $0x0,-0x24(%ebp)
0814db2d +0x505:  jne    0814db51 <+0x529>
0814db2f +0x507:  mov    -0x28(%ebp),%eax
0814db32 +0x50a:  add    $0x10,%eax
0814db35 +0x50d:  mov    %eax,(%esp)
0814db38 +0x510:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0814db3d +0x515:  mov    %eax,0x4(%esp)
0814db41 +0x519:  lea    -0x70(%ebp),%eax
0814db44 +0x51c:  mov    %eax,(%esp)
0814db47 +0x51f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814db4c +0x524:  jmp    0814dbe2 <+0x5ba>
0814db51 +0x529:  movl   $0x0,-0x20(%ebp)
0814db58 +0x530:  mov    -0x24(%ebp),%eax
0814db5b +0x533:  mov    %eax,-0x1c(%ebp)
0814db5e +0x536:  mov    -0x28(%ebp),%eax
0814db61 +0x539:  movzwl 0x1b(%eax),%eax
0814db65 +0x53d:  movzbl %al,%eax
0814db68 +0x540:  mov    %eax,0x4(%esp)
0814db6c +0x544:  mov    -0x1c(%ebp),%eax
0814db6f +0x547:  mov    %eax,(%esp)
0814db72 +0x54a:  call   08151120 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa55>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa55
0814db77 +0x54f:  mov    %eax,-0x20(%ebp)
0814db7a +0x552:  mov    -0x20(%ebp),%eax
0814db7d +0x555:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0814db83 +0x55b:  mov    %eax,0x4(%esp)
0814db87 +0x55f:  lea    -0x70(%ebp),%eax
0814db8a +0x562:  mov    %eax,(%esp)
0814db8d +0x565:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814db92 +0x56a:  lea    -0x96(%ebp),%eax
0814db98 +0x570:  mov    %eax,(%esp)
0814db9b +0x573:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0814dba0 +0x578:  mov    -0x28(%ebp),%eax
0814dba3 +0x57b:  movzwl 0x1b(%eax),%eax
0814dba7 +0x57f:  movzwl %ax,%eax
0814dbaa +0x582:  lea    -0x96(%ebp),%edx
0814dbb0 +0x588:  mov    %edx,0x8(%esp)
0814dbb4 +0x58c:  mov    %eax,0x4(%esp)
0814dbb8 +0x590:  mov    -0x1c(%ebp),%eax
0814dbbb +0x593:  mov    %eax,(%esp)
0814dbbe +0x596:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
0814dbc3 +0x59b:  jmp    0814dbe2 <+0x5ba>
0814dbc5 +0x59d:  mov    -0x28(%ebp),%eax
0814dbc8 +0x5a0:  add    $0x10,%eax
0814dbcb +0x5a3:  mov    %eax,(%esp)
0814dbce +0x5a6:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0814dbd3 +0x5ab:  mov    %eax,0x4(%esp)
0814dbd7 +0x5af:  lea    -0x70(%ebp),%eax
0814dbda +0x5b2:  mov    %eax,(%esp)
0814dbdd +0x5b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814dbe2 +0x5ba:  mov    -0x28(%ebp),%eax
0814dbe5 +0x5bd:  movzwl 0x1b(%eax),%eax
0814dbe9 +0x5c1:  movzwl %ax,%eax
0814dbec +0x5c4:  mov    %eax,0x4(%esp)
0814dbf0 +0x5c8:  lea    -0x70(%ebp),%eax
0814dbf3 +0x5cb:  mov    %eax,(%esp)
0814dbf6 +0x5ce:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814dbfb +0x5d3:  mov    -0x28(%ebp),%eax
0814dbfe +0x5d6:  add    $0x21,%eax
0814dc01 +0x5d9:  mov    %eax,(%esp)
0814dc04 +0x5dc:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0814dc09 +0x5e1:  movzbl %al,%eax
0814dc0c +0x5e4:  mov    %eax,0x4(%esp)
0814dc10 +0x5e8:  lea    -0x70(%ebp),%eax
0814dc13 +0x5eb:  mov    %eax,(%esp)
0814dc16 +0x5ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dc1b +0x5f3:  mov    -0x28(%ebp),%eax
0814dc1e +0x5f6:  add    $0x21,%eax
0814dc21 +0x5f9:  mov    %eax,(%esp)
0814dc24 +0x5fc:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0814dc29 +0x601:  movzwl %ax,%eax
0814dc2c +0x604:  mov    %eax,0x4(%esp)
0814dc30 +0x608:  lea    -0x70(%ebp),%eax
0814dc33 +0x60b:  mov    %eax,(%esp)
0814dc36 +0x60e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814dc3b +0x613:  mov    -0x28(%ebp),%eax
0814dc3e +0x616:  add    $0x10,%eax
0814dc41 +0x619:  mov    %eax,0x4(%esp)
0814dc45 +0x61d:  lea    -0x70(%ebp),%eax
0814dc48 +0x620:  mov    %eax,(%esp)
0814dc4b +0x623:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0814dc50 +0x628:  mov    -0x28(%ebp),%eax
0814dc53 +0x62b:  add    $0x10,%eax
0814dc56 +0x62e:  mov    %eax,(%esp)
0814dc59 +0x631:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0814dc5e +0x636:  test   %al,%al
0814dc60 +0x638:  je     0814dca7 <+0x67f>
0814dc62 +0x63a:  movl   $0x1,0x4(%esp)
0814dc6a +0x642:  lea    -0x70(%ebp),%eax
0814dc6d +0x645:  mov    %eax,(%esp)
0814dc70 +0x648:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dc75 +0x64d:  movl   $0x1e,0x4(%esp)
0814dc7d +0x655:  lea    -0x70(%ebp),%eax
0814dc80 +0x658:  mov    %eax,(%esp)
0814dc83 +0x65b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814dc88 +0x660:  lea    -0x96(%ebp),%eax
0814dc8e +0x666:  movl   $0x1e,0x8(%esp)
0814dc96 +0x66e:  mov    %eax,0x4(%esp)
0814dc9a +0x672:  lea    -0x70(%ebp),%eax
0814dc9d +0x675:  mov    %eax,(%esp)
0814dca0 +0x678:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0814dca5 +0x67d:  jmp    0814dcba <+0x692>
0814dca7 +0x67f:  movl   $0x0,0x4(%esp)
0814dcaf +0x687:  lea    -0x70(%ebp),%eax
0814dcb2 +0x68a:  mov    %eax,(%esp)
0814dcb5 +0x68d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dcba +0x692:  mov    -0x28(%ebp),%eax
0814dcbd +0x695:  movzwl 0x8(%eax),%eax
0814dcc1 +0x699:  movzwl %ax,%eax
0814dcc4 +0x69c:  mov    %eax,0x4(%esp)
0814dcc8 +0x6a0:  lea    -0x70(%ebp),%eax
0814dccb +0x6a3:  mov    %eax,(%esp)
0814dcce +0x6a6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814dcd3 +0x6ab:  addl   $0x1,-0x34(%ebp)
0814dcd7 +0x6af:  lea    -0x74(%ebp),%eax
0814dcda +0x6b2:  mov    %eax,(%esp)
0814dcdd +0x6b5:  call   08152bf6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x252b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x252b
0814dce2 +0x6ba:  lea    -0x78(%ebp),%eax
0814dce5 +0x6bd:  mov    %eax,0x4(%esp)
0814dce9 +0x6c1:  lea    -0x74(%ebp),%eax
0814dcec +0x6c4:  mov    %eax,(%esp)
0814dcef +0x6c7:  call   08152be2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2517>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2517
0814dcf4 +0x6cc:  test   %al,%al
0814dcf6 +0x6ce:  jne    0814da9f <+0x477>
0814dcfc +0x6d4:  movl   $0x0,0x4(%esp)
0814dd04 +0x6dc:  lea    -0x70(%ebp),%eax
0814dd07 +0x6df:  mov    %eax,(%esp)
0814dd0a +0x6e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dd0f +0x6e7:  movl   $0x0,0x4(%esp)
0814dd17 +0x6ef:  lea    -0x70(%ebp),%eax
0814dd1a +0x6f2:  mov    %eax,(%esp)
0814dd1d +0x6f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dd22 +0x6fa:  movl   $0x0,0x4(%esp)
0814dd2a +0x702:  lea    -0x70(%ebp),%eax
0814dd2d +0x705:  mov    %eax,(%esp)
0814dd30 +0x708:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814dd35 +0x70d:  mov    -0x34(%ebp),%eax
0814dd38 +0x710:  mov    %eax,0x8(%esp)
0814dd3c +0x714:  lea    -0x64(%ebp),%eax
0814dd3f +0x717:  mov    %eax,0x4(%esp)
0814dd43 +0x71b:  lea    -0x70(%ebp),%eax
0814dd46 +0x71e:  mov    %eax,(%esp)
0814dd49 +0x721:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0814dd4e +0x726:  movl   $0x1,0x4(%esp)
0814dd56 +0x72e:  lea    -0x70(%ebp),%eax
0814dd59 +0x731:  mov    %eax,(%esp)
0814dd5c +0x734:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814dd61 +0x739:  mov    0x8(%ebp),%eax
0814dd64 +0x73c:  mov    0x4(%eax),%eax
0814dd67 +0x73f:  lea    -0x70(%ebp),%edx
0814dd6a +0x742:  mov    %edx,0x4(%esp)
0814dd6e +0x746:  mov    %eax,(%esp)
0814dd71 +0x749:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814dd76 +0x74e:  mov    $0x1,%ebx
0814dd7b +0x753:  lea    -0x70(%ebp),%eax
0814dd7e +0x756:  mov    %eax,(%esp)
0814dd81 +0x759:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814dd86 +0x75e:  jmp    0814ddb5 <+0x78d>
0814dd88 +0x760:  mov    %edx,%ebx
0814dd8a +0x762:  mov    %eax,%esi
0814dd8c +0x764:  lea    -0x70(%ebp),%eax
0814dd8f +0x767:  mov    %eax,(%esp)
0814dd92 +0x76a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814dd97 +0x76f:  mov    %esi,%eax
0814dd99 +0x771:  mov    %ebx,%edx
0814dd9b +0x773:  jmp    0814dd9d <+0x775>
0814dd9d +0x775:  mov    %edx,%ebx
0814dd9f +0x777:  mov    %eax,%esi
0814dda1 +0x779:  lea    -0xc8(%ebp),%eax
0814dda7 +0x77f:  mov    %eax,(%esp)
0814ddaa +0x782:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0814ddaf +0x787:  mov    %esi,%eax
0814ddb1 +0x789:  mov    %ebx,%edx
0814ddb3 +0x78b:  jmp    0814ddc5 <+0x79d>
0814ddb5 +0x78d:  lea    -0xc8(%ebp),%eax
0814ddbb +0x793:  mov    %eax,(%esp)
0814ddbe +0x796:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0814ddc3 +0x79b:  jmp    0814ddda <+0x7b2>
0814ddc5 +0x79d:  mov    %edx,%ebx
0814ddc7 +0x79f:  mov    %eax,%esi
0814ddc9 +0x7a1:  lea    -0x58(%ebp),%eax
0814ddcc +0x7a4:  mov    %eax,(%esp)
0814ddcf +0x7a7:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
0814ddd4 +0x7ac:  mov    %esi,%eax
0814ddd6 +0x7ae:  mov    %ebx,%edx
0814ddd8 +0x7b0:  jmp    0814dde7 <+0x7bf>
0814ddda +0x7b2:  lea    -0x58(%ebp),%eax
0814dddd +0x7b5:  mov    %eax,(%esp)
0814dde0 +0x7b8:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
0814dde5 +0x7bd:  jmp    0814de02 <+0x7da>
0814dde7 +0x7bf:  mov    %edx,%ebx
0814dde9 +0x7c1:  mov    %eax,%esi
0814ddeb +0x7c3:  lea    -0x50(%ebp),%eax
0814ddee +0x7c6:  mov    %eax,(%esp)
0814ddf1 +0x7c9:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
0814ddf6 +0x7ce:  mov    %esi,%eax
0814ddf8 +0x7d0:  mov    %ebx,%edx
0814ddfa +0x7d2:  mov    %eax,(%esp)
0814ddfd +0x7d5:  call   08ae3750 <_Unwind_Resume>
0814de02 +0x7da:  lea    -0x50(%ebp),%eax
0814de05 +0x7dd:  mov    %eax,(%esp)
0814de08 +0x7e0:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
0814de0d +0x7e5:  mov    %ebx,%eax
0814de0f +0x7e7:  lea    -0xc(%ebp),%esp
0814de12 +0x7ea:  add    $0x0,%esp
0814de15 +0x7ed:  pop    %ebx
0814de16 +0x7ee:  pop    %esi
0814de17 +0x7ef:  pop    %edi
0814de18 +0x7f0:  pop    %ebp
0814de19 +0x7f1:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::killMonsterDropItem @ 0x814d628

/* WongWork::CBossStage::killMonsterDropItem(map_monster const&, int, unsigned short, unsigned
   short) */

undefined4 __thiscall
WongWork::CBossStage::killMonsterDropItem
          (CBossStage *this,map_monster *param_1,int param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  CDataManager *this_00;
  map_item *pmVar6;
  byte bVar7;
  map_item local_1b0 [4];
  int local_1ac;
  ushort local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  stGenerateRefData_t local_15c [52];
  undefined1 local_128;
  undefined1 local_126;
  undefined1 local_11e;
  stGenerateRefData_t local_114 [52];
  undefined1 local_e0;
  undefined1 local_de;
  undefined1 local_d6;
  stGenerateResult_t local_cc [50];
  stAvatarEmblemInfo_t local_9a [30];
  _List_const_iterator<map_item> local_7c [4];
  _List_const_iterator<map_item> local_78 [4];
  PacketGuard local_74 [12];
  int local_68;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_64 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_60 [4];
  list<map_item,std::allocator<map_item>> local_5c [8];
  vector<unsigned_long,std::allocator<unsigned_long>> local_54 [12];
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  _List_iterator local_40 [4];
  _List_iterator local_3c [4];
  int local_38;
  CAICharacter *local_34;
  CMonster *local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  CEquipItem *local_20;
  
  bVar7 = 0;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(local_54);
                    /* try { // try from 0814d659 to 0814d65d has its CatchHandler @ 0814dde7 */
  std::list<map_item,std::allocator<map_item>>::list(local_5c);
                    /* try { // try from 0814d667 to 0814d66b has its CatchHandler @ 0814ddc5 */
  stGenerateResult_t::stGenerateResult_t(local_cc);
                    /* try { // try from 0814d672 to 0814d6ff has its CatchHandler @ 0814dd9d */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::clear(local_54);
  std::list<map_item,std::allocator<map_item>>::clear(local_5c);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_cc);
  if ((char)param_1[8] < '\x05') {
    iVar3 = G_CDataManager();
    local_30 = (CMonster *)CDataManager::find_monster(iVar3);
    if (local_30 != (CMonster *)0x0) {
      stGenerateRefData_t::stGenerateRefData_t(local_15c);
      local_126 = (undefined1)*(undefined4 *)(this + 0xae8);
      local_128 = (char)param_2;
                    /* try { // try from 0814d7ce to 0814d7f7 has its CatchHandler @ 0814d7fa */
      local_11e = CParty::get_member_count(*(CParty **)(this + 4));
      CMonster::generateIndependentItem(local_30,local_15c,(vector *)local_cc);
                    /* try { // try from 0814d81e to 0814d9ec has its CatchHandler @ 0814dd9d */
      stGenerateRefData_t::~stGenerateRefData_t(local_15c);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xc);
    iVar3 = G_CDataManager();
    local_34 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar3 + 0x869c),uVar5);
    if (local_34 != (CAICharacter *)0x0) {
      cVar1 = CDungeon::hasTowerItemDrop(*(CDungeon **)(this + 0x9f0));
      if (cVar1 != '\0') {
        CAICharacter::deathTowerSpecifyItemDrop(local_34,(vector *)local_54);
      }
      stGenerateRefData_t::stGenerateRefData_t(local_114);
      local_de = (undefined1)*(undefined4 *)(this + 0xae8);
      local_e0 = (char)param_2;
                    /* try { // try from 0814d721 to 0814d74a has its CatchHandler @ 0814d74d */
      local_d6 = CParty::get_member_count(*(CParty **)(this + 4));
      CAICharacter::generateIndependentItem(local_34,local_114,(vector *)local_cc);
                    /* try { // try from 0814d771 to 0814d7ac has its CatchHandler @ 0814dd9d */
      stGenerateRefData_t::~stGenerateRefData_t(local_114);
    }
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_60,local_48);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_64,local_44);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_60,local_64);
    if (!bVar2) break;
    map_item::map_item(local_1b0);
    local_1b0[0] = (map_item)0x1;
    local_1a8 = param_4;
    local_1a4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_60);
    local_1a0 = *puVar4;
    local_19c = puVar4[1];
    local_198 = puVar4[2];
    local_194 = puVar4[3];
    local_190 = puVar4[4];
    local_18c = puVar4[5];
    local_188 = puVar4[6];
    local_184 = puVar4[7];
    local_180 = puVar4[8];
    local_17c = puVar4[9];
    local_178 = puVar4[10];
    local_174 = puVar4[0xb];
    local_170 = puVar4[0xc];
    local_16c = puVar4[0xd];
    local_168 = puVar4[0xe];
    local_164 = *(undefined1 *)(puVar4 + 0xf);
    local_1ac = *(int *)(this + 0xa34);
    *(int *)(this + 0xa34) = *(int *)(this + 0xa34) + 1;
    pmVar6 = local_1b0;
    puVar4 = (undefined4 *)&stack0xfffffdd8;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *(undefined4 *)pmVar6;
      pmVar6 = pmVar6 + ((uint)bVar7 * -2 + 1) * 4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    }
    MapInfo::Add_Item(this + 0x9f4);
    std::list<map_item,std::allocator<map_item>>::push_back(local_5c,local_1b0);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_60);
  }
  local_68 = 0;
  local_38 = 0;
  PacketGuard::PacketGuard(local_74);
                    /* try { // try from 0814da03 to 0814dd75 has its CatchHandler @ 0814dd88 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,0,0x26);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)param_3);
  local_68 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_74);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,local_38);
  std::list<map_item,std::allocator<map_item>>::begin();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_78,local_40);
  std::list<map_item,std::allocator<map_item>>::end();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_7c,local_3c);
  stAvatarEmblemInfo_t::init(local_9a);
  while( true ) {
    cVar1 = std::_List_const_iterator<map_item>::operator!=(local_78,local_7c);
    if (cVar1 == '\0') break;
    local_2c = std::_List_const_iterator<map_item>::operator*(local_78);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,*(int *)(local_2c + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,*(int *)(local_2c + 0x12));
    uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(local_2c + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,uVar5 & 0xff);
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_2c + 0x10));
    if (cVar1 == '\0') {
      iVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,iVar3);
    }
    else {
      iVar3 = *(int *)(local_2c + 0x12);
      this_00 = (CDataManager *)G_CDataManager();
      local_28 = (CEquipItem *)CDataManager::find_item(this_00,iVar3);
      if (local_28 == (CEquipItem *)0x0) {
        iVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c + 0x10));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,iVar3);
      }
      else {
        local_24 = 0;
        local_20 = local_28;
        local_24 = CEquipItem::getAvatarPeriod(local_28,(uchar)*(undefined2 *)(local_2c + 0x1b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,local_24 * 0x15180);
        stAvatarEmblemInfo_t::init(local_9a);
        CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_2c + 0x1b),local_9a);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)*(ushort *)(local_2c + 0x1b))
    ;
    uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_2c + 0x21));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,uVar5 & 0xff);
    uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_2c + 0x21));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,uVar5 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_74,(Inven_Item *)(local_2c + 0x10));
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_2c + 0x10));
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,0x1e);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_74,(char *)local_9a,0x1e);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)*(ushort *)(local_2c + 8));
    local_38 = local_38 + 1;
    std::_List_const_iterator<map_item>::operator++(local_78);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,&local_68,local_38);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_74);
                    /* try { // try from 0814dd81 to 0814dd85 has its CatchHandler @ 0814dd9d */
  PacketGuard::~PacketGuard(local_74);
                    /* try { // try from 0814ddbe to 0814ddc2 has its CatchHandler @ 0814ddc5 */
  stGenerateResult_t::~stGenerateResult_t(local_cc);
                    /* try { // try from 0814dde0 to 0814dde4 has its CatchHandler @ 0814dde7 */
  std::list<map_item,std::allocator<map_item>>::~list(local_5c);
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(local_54);
  return 1;
}
```
