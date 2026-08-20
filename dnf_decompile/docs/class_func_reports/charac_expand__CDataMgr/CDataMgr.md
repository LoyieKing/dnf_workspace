# CDataMgr

`_ZN13charac_expand8CDataMgrC1Ev`

`charac_expand::CDataMgr::CDataMgr()`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832a778` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a778  _ZN13charac_expand8CDataMgrC1Ev
#           charac_expand::CDataMgr::CDataMgr()
# range [0x0832a778, 0x0832ac47]
0832a778 +0x000:  push   %ebp
0832a779 +0x001:  mov    %esp,%ebp
0832a77b +0x003:  push   %edi
0832a77c +0x004:  push   %esi
0832a77d +0x005:  push   %ebx
0832a77e +0x006:  sub    $0x2c,%esp
0832a781 +0x009:  movl   $0x30,(%esp)
0832a788 +0x010:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a78d +0x015:  mov    %eax,%esi
0832a78f +0x017:  mov    %esi,%ebx
0832a791 +0x019:  mov    %ebx,%edx
0832a793 +0x01b:  mov    $0x0,%eax
0832a798 +0x020:  mov    $0xb,%ecx
0832a79d +0x025:  mov    %edx,%edi
0832a79f +0x027:  rep stos %eax,%es:(%edi)
0832a7a1 +0x029:  mov    %edi,%edx
0832a7a3 +0x02b:  mov    %ax,(%edx)
0832a7a6 +0x02e:  add    $0x2,%edx
0832a7a9 +0x031:  mov    %ebx,(%esp)
0832a7ac +0x034:  call   0832af52 <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0xef>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0xef
0832a7b1 +0x039:  mov    %esi,%eax
0832a7b3 +0x03b:  mov    %eax,%edx
0832a7b5 +0x03d:  mov    0x8(%ebp),%eax
0832a7b8 +0x040:  mov    %edx,(%eax)
0832a7ba +0x042:  movl   $0x2c,(%esp)
0832a7c1 +0x049:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a7c6 +0x04e:  mov    %eax,-0x20(%ebp)
0832a7c9 +0x051:  mov    -0x20(%ebp),%esi
0832a7cc +0x054:  mov    %esi,%ebx
0832a7ce +0x056:  mov    $0x0,%eax
0832a7d3 +0x05b:  mov    $0xb,%edx
0832a7d8 +0x060:  mov    %ebx,%edi
0832a7da +0x062:  mov    %edx,%ecx
0832a7dc +0x064:  rep stos %eax,%es:(%edi)
0832a7de +0x066:  mov    %esi,(%esp)
0832a7e1 +0x069:  call   0832af6e <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x10b>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x10b
0832a7e6 +0x06e:  mov    -0x20(%ebp),%eax
0832a7e9 +0x071:  mov    %eax,%edx
0832a7eb +0x073:  mov    0x8(%ebp),%eax
0832a7ee +0x076:  mov    %edx,0x4(%eax)
0832a7f1 +0x079:  movl   $0x58,(%esp)
0832a7f8 +0x080:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a7fd +0x085:  mov    %eax,%ebx
0832a7ff +0x087:  mov    %ebx,%eax
0832a801 +0x089:  mov    %eax,(%esp)
0832a804 +0x08c:  call   0854156a <_ZN9item_lock9CItemLockC1Ev>  ; item_lock::CItemLock::CItemLock()
0832a809 +0x091:  jmp    0832a823 <+0xab>
0832a80b +0x093:  mov    %edx,%esi
0832a80d +0x095:  mov    %eax,%edi
0832a80f +0x097:  mov    %ebx,(%esp)
0832a812 +0x09a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a817 +0x09f:  mov    %edi,%eax
0832a819 +0x0a1:  mov    %esi,%edx
0832a81b +0x0a3:  mov    %eax,(%esp)
0832a81e +0x0a6:  call   08ae3750 <_Unwind_Resume>
0832a823 +0x0ab:  mov    %ebx,%eax
0832a825 +0x0ad:  mov    %eax,%edx
0832a827 +0x0af:  mov    0x8(%ebp),%eax
0832a82a +0x0b2:  mov    %edx,0x8(%eax)
0832a82d +0x0b5:  movl   $0xc,(%esp)
0832a834 +0x0bc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a839 +0x0c1:  mov    %eax,%ebx
0832a83b +0x0c3:  mov    %ebx,%eax
0832a83d +0x0c5:  mov    %eax,(%esp)
0832a840 +0x0c8:  call   08269054 <_ZN17CPvPLiveEventDataC1Ev>  ; CPvPLiveEventData::CPvPLiveEventData()
0832a845 +0x0cd:  jmp    0832a85f <+0xe7>
0832a847 +0x0cf:  mov    %edx,%esi
0832a849 +0x0d1:  mov    %eax,%edi
0832a84b +0x0d3:  mov    %ebx,(%esp)
0832a84e +0x0d6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a853 +0x0db:  mov    %edi,%eax
0832a855 +0x0dd:  mov    %esi,%edx
0832a857 +0x0df:  mov    %eax,(%esp)
0832a85a +0x0e2:  call   08ae3750 <_Unwind_Resume>
0832a85f +0x0e7:  mov    %ebx,%eax
0832a861 +0x0e9:  mov    %eax,%edx
0832a863 +0x0eb:  mov    0x8(%ebp),%eax
0832a866 +0x0ee:  mov    %edx,0xc(%eax)
0832a869 +0x0f1:  movl   $0x14,(%esp)
0832a870 +0x0f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a875 +0x0fd:  mov    %eax,%ebx
0832a877 +0x0ff:  mov    %ebx,%eax
0832a879 +0x101:  mov    %eax,(%esp)
0832a87c +0x104:  call   08585f34 <_ZN18online_preliminary24COnlinePreliminaryMemberC1Ev>  ; online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()
0832a881 +0x109:  jmp    0832a89b <+0x123>
0832a883 +0x10b:  mov    %edx,%esi
0832a885 +0x10d:  mov    %eax,%edi
0832a887 +0x10f:  mov    %ebx,(%esp)
0832a88a +0x112:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a88f +0x117:  mov    %edi,%eax
0832a891 +0x119:  mov    %esi,%edx
0832a893 +0x11b:  mov    %eax,(%esp)
0832a896 +0x11e:  call   08ae3750 <_Unwind_Resume>
0832a89b +0x123:  mov    %ebx,%eax
0832a89d +0x125:  mov    %eax,%edx
0832a89f +0x127:  mov    0x8(%ebp),%eax
0832a8a2 +0x12a:  mov    %edx,0x10(%eax)
0832a8a5 +0x12d:  movl   $0x20,(%esp)
0832a8ac +0x134:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a8b1 +0x139:  mov    %eax,%ebx
0832a8b3 +0x13b:  mov    %ebx,%eax
0832a8b5 +0x13d:  mov    %eax,(%esp)
0832a8b8 +0x140:  call   08586398 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListC1Ev>  ; online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList()
0832a8bd +0x145:  jmp    0832a8d7 <+0x15f>
0832a8bf +0x147:  mov    %edx,%esi
0832a8c1 +0x149:  mov    %eax,%edi
0832a8c3 +0x14b:  mov    %ebx,(%esp)
0832a8c6 +0x14e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a8cb +0x153:  mov    %edi,%eax
0832a8cd +0x155:  mov    %esi,%edx
0832a8cf +0x157:  mov    %eax,(%esp)
0832a8d2 +0x15a:  call   08ae3750 <_Unwind_Resume>
0832a8d7 +0x15f:  mov    %ebx,%eax
0832a8d9 +0x161:  mov    %eax,%edx
0832a8db +0x163:  mov    0x8(%ebp),%eax
0832a8de +0x166:  mov    %edx,0x14(%eax)
0832a8e1 +0x169:  movl   $0x10,(%esp)
0832a8e8 +0x170:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a8ed +0x175:  mov    %eax,%ebx
0832a8ef +0x177:  mov    %ebx,%eax
0832a8f1 +0x179:  mov    %eax,(%esp)
0832a8f4 +0x17c:  call   085f7040 <_ZN11Redeem_Item11CRedeemItemC1Ev>  ; Redeem_Item::CRedeemItem::CRedeemItem()
0832a8f9 +0x181:  jmp    0832a913 <+0x19b>
0832a8fb +0x183:  mov    %edx,%esi
0832a8fd +0x185:  mov    %eax,%edi
0832a8ff +0x187:  mov    %ebx,(%esp)
0832a902 +0x18a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a907 +0x18f:  mov    %edi,%eax
0832a909 +0x191:  mov    %esi,%edx
0832a90b +0x193:  mov    %eax,(%esp)
0832a90e +0x196:  call   08ae3750 <_Unwind_Resume>
0832a913 +0x19b:  mov    %ebx,%eax
0832a915 +0x19d:  mov    %eax,%edx
0832a917 +0x19f:  mov    0x8(%ebp),%eax
0832a91a +0x1a2:  mov    %edx,0x18(%eax)
0832a91d +0x1a5:  movl   $0x5c,(%esp)
0832a924 +0x1ac:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a929 +0x1b1:  mov    %eax,%ebx
0832a92b +0x1b3:  mov    %ebx,%eax
0832a92d +0x1b5:  mov    %eax,(%esp)
0832a930 +0x1b8:  call   084a47dc <_ZN8fair_pvp13CFairPvPScoreC1Ev>  ; fair_pvp::CFairPvPScore::CFairPvPScore()
0832a935 +0x1bd:  jmp    0832a94f <+0x1d7>
0832a937 +0x1bf:  mov    %edx,%esi
0832a939 +0x1c1:  mov    %eax,%edi
0832a93b +0x1c3:  mov    %ebx,(%esp)
0832a93e +0x1c6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a943 +0x1cb:  mov    %edi,%eax
0832a945 +0x1cd:  mov    %esi,%edx
0832a947 +0x1cf:  mov    %eax,(%esp)
0832a94a +0x1d2:  call   08ae3750 <_Unwind_Resume>
0832a94f +0x1d7:  mov    %ebx,%eax
0832a951 +0x1d9:  mov    %eax,%edx
0832a953 +0x1db:  mov    0x8(%ebp),%eax
0832a956 +0x1de:  mov    %edx,0x1c(%eax)
0832a959 +0x1e1:  movl   $0x158,(%esp)
0832a960 +0x1e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a965 +0x1ed:  mov    %eax,%ebx
0832a967 +0x1ef:  mov    %ebx,-0x1c(%ebp)
0832a96a +0x1f2:  mov    -0x1c(%ebp),%esi
0832a96d +0x1f5:  mov    $0x0,%eax
0832a972 +0x1fa:  mov    $0x56,%edx
0832a977 +0x1ff:  mov    %esi,%edi
0832a979 +0x201:  mov    %edx,%ecx
0832a97b +0x203:  rep stos %eax,%es:(%edi)
0832a97d +0x205:  mov    -0x1c(%ebp),%eax
0832a980 +0x208:  mov    %eax,(%esp)
0832a983 +0x20b:  call   0832af8a <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x127>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x127
0832a988 +0x210:  jmp    0832a9a2 <+0x22a>
0832a98a +0x212:  mov    %edx,%esi
0832a98c +0x214:  mov    %eax,%edi
0832a98e +0x216:  mov    %ebx,(%esp)
0832a991 +0x219:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a996 +0x21e:  mov    %edi,%eax
0832a998 +0x220:  mov    %esi,%edx
0832a99a +0x222:  mov    %eax,(%esp)
0832a99d +0x225:  call   08ae3750 <_Unwind_Resume>
0832a9a2 +0x22a:  mov    %ebx,%eax
0832a9a4 +0x22c:  mov    %eax,%edx
0832a9a6 +0x22e:  mov    0x8(%ebp),%eax
0832a9a9 +0x231:  mov    %edx,0x20(%eax)
0832a9ac +0x234:  movl   $0x89c,(%esp)
0832a9b3 +0x23b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a9b8 +0x240:  mov    %eax,%ebx
0832a9ba +0x242:  mov    %ebx,%eax
0832a9bc +0x244:  mov    %eax,(%esp)
0832a9bf +0x247:  call   084992c0 <_ZN16CExpandEquipslotC1Ev>  ; CExpandEquipslot::CExpandEquipslot()
0832a9c4 +0x24c:  jmp    0832a9de <+0x266>
0832a9c6 +0x24e:  mov    %edx,%esi
0832a9c8 +0x250:  mov    %eax,%edi
0832a9ca +0x252:  mov    %ebx,(%esp)
0832a9cd +0x255:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a9d2 +0x25a:  mov    %edi,%eax
0832a9d4 +0x25c:  mov    %esi,%edx
0832a9d6 +0x25e:  mov    %eax,(%esp)
0832a9d9 +0x261:  call   08ae3750 <_Unwind_Resume>
0832a9de +0x266:  mov    %ebx,%eax
0832a9e0 +0x268:  mov    %eax,%edx
0832a9e2 +0x26a:  mov    0x8(%ebp),%eax
0832a9e5 +0x26d:  mov    %edx,0x24(%eax)
0832a9e8 +0x270:  movl   $0x20,(%esp)
0832a9ef +0x277:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832a9f4 +0x27c:  mov    %eax,%ebx
0832a9f6 +0x27e:  mov    %ebx,%eax
0832a9f8 +0x280:  mov    %eax,(%esp)
0832a9fb +0x283:  call   08545108 <_ZN16CItemMakingSkillC1Ev>  ; CItemMakingSkill::CItemMakingSkill()
0832aa00 +0x288:  jmp    0832aa1a <+0x2a2>
0832aa02 +0x28a:  mov    %edx,%esi
0832aa04 +0x28c:  mov    %eax,%edi
0832aa06 +0x28e:  mov    %ebx,(%esp)
0832aa09 +0x291:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832aa0e +0x296:  mov    %edi,%eax
0832aa10 +0x298:  mov    %esi,%edx
0832aa12 +0x29a:  mov    %eax,(%esp)
0832aa15 +0x29d:  call   08ae3750 <_Unwind_Resume>
0832aa1a +0x2a2:  mov    %ebx,%eax
0832aa1c +0x2a4:  mov    %eax,%edx
0832aa1e +0x2a6:  mov    0x8(%ebp),%eax
0832aa21 +0x2a9:  mov    %edx,0x28(%eax)
0832aa24 +0x2ac:  movl   $0x48,(%esp)
0832aa2b +0x2b3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832aa30 +0x2b8:  mov    %eax,%ebx
0832aa32 +0x2ba:  mov    %ebx,%eax
0832aa34 +0x2bc:  mov    %eax,(%esp)
0832aa37 +0x2bf:  call   085eebc8 <_ZN10CQuestShopC1Ev>  ; CQuestShop::CQuestShop()
0832aa3c +0x2c4:  jmp    0832aa56 <+0x2de>
0832aa3e +0x2c6:  mov    %edx,%esi
0832aa40 +0x2c8:  mov    %eax,%edi
0832aa42 +0x2ca:  mov    %ebx,(%esp)
0832aa45 +0x2cd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832aa4a +0x2d2:  mov    %edi,%eax
0832aa4c +0x2d4:  mov    %esi,%edx
0832aa4e +0x2d6:  mov    %eax,(%esp)
0832aa51 +0x2d9:  call   08ae3750 <_Unwind_Resume>
0832aa56 +0x2de:  mov    %ebx,%eax
0832aa58 +0x2e0:  mov    %eax,%edx
0832aa5a +0x2e2:  mov    0x8(%ebp),%eax
0832aa5d +0x2e5:  mov    %edx,0x2c(%eax)
0832aa60 +0x2e8:  movl   $0x20,(%esp)
0832aa67 +0x2ef:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832aa6c +0x2f4:  mov    %eax,%ebx
0832aa6e +0x2f6:  mov    %ebx,%eax
0832aa70 +0x2f8:  mov    %eax,(%esp)
0832aa73 +0x2fb:  call   08643460 <_ZN13TOD_UserStateC1Ev>  ; TOD_UserState::TOD_UserState()
0832aa78 +0x300:  jmp    0832aa92 <+0x31a>
0832aa7a +0x302:  mov    %edx,%esi
0832aa7c +0x304:  mov    %eax,%edi
0832aa7e +0x306:  mov    %ebx,(%esp)
0832aa81 +0x309:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832aa86 +0x30e:  mov    %edi,%eax
0832aa88 +0x310:  mov    %esi,%edx
0832aa8a +0x312:  mov    %eax,(%esp)
0832aa8d +0x315:  call   08ae3750 <_Unwind_Resume>
0832aa92 +0x31a:  mov    %ebx,%eax
0832aa94 +0x31c:  mov    %eax,%edx
0832aa96 +0x31e:  mov    0x8(%ebp),%eax
0832aa99 +0x321:  mov    %edx,0x34(%eax)
0832aa9c +0x324:  movl   $0x50,(%esp)
0832aaa3 +0x32b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832aaa8 +0x330:  mov    %eax,%ebx
0832aaaa +0x332:  mov    %ebx,%eax
0832aaac +0x334:  mov    %eax,(%esp)
0832aaaf +0x337:  call   0854c9b4 <_ZN16CKillMonsterInfoC1Ev>  ; CKillMonsterInfo::CKillMonsterInfo()
0832aab4 +0x33c:  jmp    0832aace <+0x356>
0832aab6 +0x33e:  mov    %edx,%esi
0832aab8 +0x340:  mov    %eax,%edi
0832aaba +0x342:  mov    %ebx,(%esp)
0832aabd +0x345:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832aac2 +0x34a:  mov    %edi,%eax
0832aac4 +0x34c:  mov    %esi,%edx
0832aac6 +0x34e:  mov    %eax,(%esp)
0832aac9 +0x351:  call   08ae3750 <_Unwind_Resume>
0832aace +0x356:  mov    %ebx,%eax
0832aad0 +0x358:  mov    %eax,%edx
0832aad2 +0x35a:  mov    0x8(%ebp),%eax
0832aad5 +0x35d:  mov    %edx,0x30(%eax)
0832aad8 +0x360:  movl   $0x6b58,(%esp)
0832aadf +0x367:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832aae4 +0x36c:  mov    %eax,%ebx
0832aae6 +0x36e:  mov    %ebx,%eax
0832aae8 +0x370:  mov    %eax,(%esp)
0832aaeb +0x373:  call   0864103c <_ZN10CTitleBookC1Ev>  ; CTitleBook::CTitleBook()
0832aaf0 +0x378:  jmp    0832ab0a <+0x392>
0832aaf2 +0x37a:  mov    %edx,%esi
0832aaf4 +0x37c:  mov    %eax,%edi
0832aaf6 +0x37e:  mov    %ebx,(%esp)
0832aaf9 +0x381:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832aafe +0x386:  mov    %edi,%eax
0832ab00 +0x388:  mov    %esi,%edx
0832ab02 +0x38a:  mov    %eax,(%esp)
0832ab05 +0x38d:  call   08ae3750 <_Unwind_Resume>
0832ab0a +0x392:  mov    %ebx,%eax
0832ab0c +0x394:  mov    %eax,%edx
0832ab0e +0x396:  mov    0x8(%ebp),%eax
0832ab11 +0x399:  mov    %edx,0x38(%eax)
0832ab14 +0x39c:  movl   $0x28,(%esp)
0832ab1b +0x3a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832ab20 +0x3a8:  mov    %eax,%ebx
0832ab22 +0x3aa:  mov    %ebx,%eax
0832ab24 +0x3ac:  mov    %eax,(%esp)
0832ab27 +0x3af:  call   0828b614 <_ZN12CAchievementC1Ev>  ; CAchievement::CAchievement()
0832ab2c +0x3b4:  jmp    0832ab46 <+0x3ce>
0832ab2e +0x3b6:  mov    %edx,%esi
0832ab30 +0x3b8:  mov    %eax,%edi
0832ab32 +0x3ba:  mov    %ebx,(%esp)
0832ab35 +0x3bd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832ab3a +0x3c2:  mov    %edi,%eax
0832ab3c +0x3c4:  mov    %esi,%edx
0832ab3e +0x3c6:  mov    %eax,(%esp)
0832ab41 +0x3c9:  call   08ae3750 <_Unwind_Resume>
0832ab46 +0x3ce:  mov    %ebx,%eax
0832ab48 +0x3d0:  mov    %eax,%edx
0832ab4a +0x3d2:  mov    0x8(%ebp),%eax
0832ab4d +0x3d5:  mov    %edx,0x3c(%eax)
0832ab50 +0x3d8:  movl   $0x1390,(%esp)
0832ab57 +0x3df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832ab5c +0x3e4:  mov    %eax,%ebx
0832ab5e +0x3e6:  mov    %ebx,%eax
0832ab60 +0x3e8:  mov    %eax,(%esp)
0832ab63 +0x3eb:  call   0811d5d4 <_ZN15CItemDictionaryC1Ev>  ; CItemDictionary::CItemDictionary()
0832ab68 +0x3f0:  jmp    0832ab82 <+0x40a>
0832ab6a +0x3f2:  mov    %edx,%esi
0832ab6c +0x3f4:  mov    %eax,%edi
0832ab6e +0x3f6:  mov    %ebx,(%esp)
0832ab71 +0x3f9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832ab76 +0x3fe:  mov    %edi,%eax
0832ab78 +0x400:  mov    %esi,%edx
0832ab7a +0x402:  mov    %eax,(%esp)
0832ab7d +0x405:  call   08ae3750 <_Unwind_Resume>
0832ab82 +0x40a:  mov    %ebx,%eax
0832ab84 +0x40c:  mov    %eax,%edx
0832ab86 +0x40e:  mov    0x8(%ebp),%eax
0832ab89 +0x411:  mov    %edx,0x40(%eax)
0832ab8c +0x414:  movl   $0xc,(%esp)
0832ab93 +0x41b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832ab98 +0x420:  mov    %eax,%ebx
0832ab9a +0x422:  mov    %ebx,%eax
0832ab9c +0x424:  mov    %eax,(%esp)
0832ab9f +0x427:  call   0832af06 <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0xa3>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0xa3
0832aba4 +0x42c:  jmp    0832abbe <+0x446>
0832aba6 +0x42e:  mov    %edx,%esi
0832aba8 +0x430:  mov    %eax,%edi
0832abaa +0x432:  mov    %ebx,(%esp)
0832abad +0x435:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832abb2 +0x43a:  mov    %edi,%eax
0832abb4 +0x43c:  mov    %esi,%edx
0832abb6 +0x43e:  mov    %eax,(%esp)
0832abb9 +0x441:  call   08ae3750 <_Unwind_Resume>
0832abbe +0x446:  mov    %ebx,%eax
0832abc0 +0x448:  mov    %eax,%edx
0832abc2 +0x44a:  mov    0x8(%ebp),%eax
0832abc5 +0x44d:  mov    %edx,0x44(%eax)
0832abc8 +0x450:  movl   $0x24,(%esp)
0832abcf +0x457:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832abd4 +0x45c:  mov    %eax,%ebx
0832abd6 +0x45e:  mov    %ebx,%eax
0832abd8 +0x460:  mov    %eax,(%esp)
0832abdb +0x463:  call   080c851c <_ZN13BestClearTimeC1Ev>  ; BestClearTime::BestClearTime()
0832abe0 +0x468:  jmp    0832abfa <+0x482>
0832abe2 +0x46a:  mov    %edx,%esi
0832abe4 +0x46c:  mov    %eax,%edi
0832abe6 +0x46e:  mov    %ebx,(%esp)
0832abe9 +0x471:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832abee +0x476:  mov    %edi,%eax
0832abf0 +0x478:  mov    %esi,%edx
0832abf2 +0x47a:  mov    %eax,(%esp)
0832abf5 +0x47d:  call   08ae3750 <_Unwind_Resume>
0832abfa +0x482:  mov    %ebx,%eax
0832abfc +0x484:  mov    %eax,%edx
0832abfe +0x486:  mov    0x8(%ebp),%eax
0832ac01 +0x489:  mov    %edx,0x48(%eax)
0832ac04 +0x48c:  movl   $0x18,(%esp)
0832ac0b +0x493:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832ac10 +0x498:  mov    %eax,%ebx
0832ac12 +0x49a:  mov    %ebx,%eax
0832ac14 +0x49c:  mov    %eax,(%esp)
0832ac17 +0x49f:  call   080e4790 <_ZN19CCharacInformNoticeC1Ev>  ; CCharacInformNotice::CCharacInformNotice()
0832ac1c +0x4a4:  jmp    0832ac36 <+0x4be>
0832ac1e +0x4a6:  mov    %edx,%esi
0832ac20 +0x4a8:  mov    %eax,%edi
0832ac22 +0x4aa:  mov    %ebx,(%esp)
0832ac25 +0x4ad:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832ac2a +0x4b2:  mov    %edi,%eax
0832ac2c +0x4b4:  mov    %esi,%edx
0832ac2e +0x4b6:  mov    %eax,(%esp)
0832ac31 +0x4b9:  call   08ae3750 <_Unwind_Resume>
0832ac36 +0x4be:  mov    %ebx,%eax
0832ac38 +0x4c0:  mov    %eax,%edx
0832ac3a +0x4c2:  mov    0x8(%ebp),%eax
0832ac3d +0x4c5:  mov    %edx,0x4c(%eax)
0832ac40 +0x4c8:  add    $0x2c,%esp
0832ac43 +0x4cb:  pop    %ebx
0832ac44 +0x4cc:  pop    %esi
0832ac45 +0x4cd:  pop    %edi
0832ac46 +0x4ce:  pop    %ebp
0832ac47 +0x4cf:  ret
```

## 反编译 C

```c
// charac_expand::CDataMgr::CDataMgr @ 0x832a778

/* charac_expand::CDataMgr::CDataMgr() */

void __thiscall charac_expand::CDataMgr::CDataMgr(CDataMgr *this)

{
  CCharacExpertJob *this_00;
  CCharacBloodDungeon *this_01;
  CItemLock *this_02;
  CPvPLiveEventData *this_03;
  COnlinePreliminaryMember *this_04;
  COnlinePreliminaryMemberMatchList *this_05;
  CRedeemItem *this_06;
  CFairPvPScore *this_07;
  CMissionList_Charac *this_08;
  CExpandEquipslot *this_09;
  CItemMakingSkill *this_10;
  CQuestShop *this_11;
  TOD_UserState *this_12;
  CKillMonsterInfo *this_13;
  CTitleBook *this_14;
  CAchievement *this_15;
  CItemDictionary *this_16;
  CBoosterGage *this_17;
  BestClearTime *this_18;
  CCharacInformNotice *this_19;
  int iVar1;
  CCharacExpertJob *pCVar2;
  CCharacBloodDungeon *pCVar3;
  CMissionList_Charac *pCVar4;
  byte bVar5;
  
  bVar5 = 0;
  this_00 = operator_new(0x30);
  pCVar2 = this_00;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + (uint)bVar5 * -8 + 4;
  }
  *(undefined2 *)pCVar2 = 0;
  expert_job::CCharacExpertJob::CCharacExpertJob(this_00);
  *(CCharacExpertJob **)this = this_00;
  this_01 = operator_new(0x2c);
  pCVar3 = this_01;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + (uint)bVar5 * -8 + 4;
  }
  CCharacBloodDungeon::CCharacBloodDungeon(this_01);
  *(CCharacBloodDungeon **)(this + 4) = this_01;
  this_02 = operator_new(0x58);
                    /* try { // try from 0832a804 to 0832a808 has its CatchHandler @ 0832a80b */
  item_lock::CItemLock::CItemLock(this_02);
  *(CItemLock **)(this + 8) = this_02;
  this_03 = operator_new(0xc);
                    /* try { // try from 0832a840 to 0832a844 has its CatchHandler @ 0832a847 */
  CPvPLiveEventData::CPvPLiveEventData(this_03);
  *(CPvPLiveEventData **)(this + 0xc) = this_03;
  this_04 = operator_new(0x14);
                    /* try { // try from 0832a87c to 0832a880 has its CatchHandler @ 0832a883 */
  online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember(this_04);
  *(COnlinePreliminaryMember **)(this + 0x10) = this_04;
  this_05 = operator_new(0x20);
                    /* try { // try from 0832a8b8 to 0832a8bc has its CatchHandler @ 0832a8bf */
  online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList(this_05);
  *(COnlinePreliminaryMemberMatchList **)(this + 0x14) = this_05;
  this_06 = operator_new(0x10);
                    /* try { // try from 0832a8f4 to 0832a8f8 has its CatchHandler @ 0832a8fb */
  Redeem_Item::CRedeemItem::CRedeemItem(this_06);
  *(CRedeemItem **)(this + 0x18) = this_06;
  this_07 = operator_new(0x5c);
                    /* try { // try from 0832a930 to 0832a934 has its CatchHandler @ 0832a937 */
  fair_pvp::CFairPvPScore::CFairPvPScore(this_07);
  *(CFairPvPScore **)(this + 0x1c) = this_07;
  this_08 = operator_new(0x158);
  pCVar4 = this_08;
  for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
  }
                    /* try { // try from 0832a983 to 0832a987 has its CatchHandler @ 0832a98a */
  CMissionList_Charac::CMissionList_Charac(this_08);
  *(CMissionList_Charac **)(this + 0x20) = this_08;
  this_09 = operator_new(0x89c);
                    /* try { // try from 0832a9bf to 0832a9c3 has its CatchHandler @ 0832a9c6 */
  CExpandEquipslot::CExpandEquipslot(this_09);
  *(CExpandEquipslot **)(this + 0x24) = this_09;
  this_10 = operator_new(0x20);
                    /* try { // try from 0832a9fb to 0832a9ff has its CatchHandler @ 0832aa02 */
  CItemMakingSkill::CItemMakingSkill(this_10);
  *(CItemMakingSkill **)(this + 0x28) = this_10;
  this_11 = operator_new(0x48);
                    /* try { // try from 0832aa37 to 0832aa3b has its CatchHandler @ 0832aa3e */
  CQuestShop::CQuestShop(this_11);
  *(CQuestShop **)(this + 0x2c) = this_11;
  this_12 = operator_new(0x20);
                    /* try { // try from 0832aa73 to 0832aa77 has its CatchHandler @ 0832aa7a */
  TOD_UserState::TOD_UserState(this_12);
  *(TOD_UserState **)(this + 0x34) = this_12;
  this_13 = operator_new(0x50);
                    /* try { // try from 0832aaaf to 0832aab3 has its CatchHandler @ 0832aab6 */
  CKillMonsterInfo::CKillMonsterInfo(this_13);
  *(CKillMonsterInfo **)(this + 0x30) = this_13;
  this_14 = operator_new(0x6b58);
                    /* try { // try from 0832aaeb to 0832aaef has its CatchHandler @ 0832aaf2 */
  CTitleBook::CTitleBook(this_14);
  *(CTitleBook **)(this + 0x38) = this_14;
  this_15 = operator_new(0x28);
                    /* try { // try from 0832ab27 to 0832ab2b has its CatchHandler @ 0832ab2e */
  CAchievement::CAchievement(this_15);
  *(CAchievement **)(this + 0x3c) = this_15;
  this_16 = operator_new(0x1390);
                    /* try { // try from 0832ab63 to 0832ab67 has its CatchHandler @ 0832ab6a */
  CItemDictionary::CItemDictionary(this_16);
  *(CItemDictionary **)(this + 0x40) = this_16;
  this_17 = operator_new(0xc);
                    /* try { // try from 0832ab9f to 0832aba3 has its CatchHandler @ 0832aba6 */
  CBoosterGage::CBoosterGage(this_17);
  *(CBoosterGage **)(this + 0x44) = this_17;
  this_18 = operator_new(0x24);
                    /* try { // try from 0832abdb to 0832abdf has its CatchHandler @ 0832abe2 */
  BestClearTime::BestClearTime(this_18);
  *(BestClearTime **)(this + 0x48) = this_18;
  this_19 = operator_new(0x18);
                    /* try { // try from 0832ac17 to 0832ac1b has its CatchHandler @ 0832ac1e */
  CCharacInformNotice::CCharacInformNotice(this_19);
  *(CCharacInformNotice **)(this + 0x4c) = this_19;
  return;
}
```
