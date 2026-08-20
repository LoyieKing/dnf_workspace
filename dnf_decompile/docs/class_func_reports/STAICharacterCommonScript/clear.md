# clear

`_ZN25STAICharacterCommonScript5clearEv`

`STAICharacterCommonScript::clear()`

| 类 | 地址 |
|---|---|
| `STAICharacterCommonScript` | `0x088c9592` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c9592  _ZN25STAICharacterCommonScript5clearEv
#           STAICharacterCommonScript::clear()
# range [0x088c9592, 0x088c98bb]
088c9592 +0x000:  push   %ebp
088c9593 +0x001:  mov    %esp,%ebp
088c9595 +0x003:  sub    $0x18,%esp
088c9598 +0x006:  mov    0x8(%ebp),%eax
088c959b +0x009:  add    $0x4,%eax
088c959e +0x00c:  mov    %eax,(%esp)
088c95a1 +0x00f:  call   088cc190 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0xa1>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0xa1
088c95a6 +0x014:  mov    0x8(%ebp),%eax
088c95a9 +0x017:  add    $0xc,%eax
088c95ac +0x01a:  mov    %eax,(%esp)
088c95af +0x01d:  call   08367642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x160e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x160e
088c95b4 +0x022:  mov    0x8(%ebp),%eax
088c95b7 +0x025:  add    $0x64,%eax
088c95ba +0x028:  mov    %eax,(%esp)
088c95bd +0x02b:  call   088cc79e <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x6af>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x6af
088c95c2 +0x030:  mov    0x8(%ebp),%eax
088c95c5 +0x033:  add    $0x70,%eax
088c95c8 +0x036:  mov    %eax,(%esp)
088c95cb +0x039:  call   088cc7ba <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x6cb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x6cb
088c95d0 +0x03e:  mov    0x8(%ebp),%eax
088c95d3 +0x041:  add    $0x7c,%eax
088c95d6 +0x044:  mov    %eax,(%esp)
088c95d9 +0x047:  call   088cc7ba <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x6cb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x6cb
088c95de +0x04c:  mov    0x8(%ebp),%eax
088c95e1 +0x04f:  add    $0x88,%eax
088c95e6 +0x054:  mov    %eax,(%esp)
088c95e9 +0x057:  call   088cc7d6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x6e7>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x6e7
088c95ee +0x05c:  mov    0x8(%ebp),%eax
088c95f1 +0x05f:  add    $0x94,%eax
088c95f6 +0x064:  mov    %eax,(%esp)
088c95f9 +0x067:  call   088cc7f2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x703>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x703
088c95fe +0x06c:  mov    0x8(%ebp),%eax
088c9601 +0x06f:  add    $0xa0,%eax
088c9606 +0x074:  mov    %eax,(%esp)
088c9609 +0x077:  call   088cc7f2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x703>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x703
088c960e +0x07c:  mov    0x8(%ebp),%eax
088c9611 +0x07f:  add    $0xac,%eax
088c9616 +0x084:  mov    %eax,(%esp)
088c9619 +0x087:  call   083673d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x13a0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x13a0
088c961e +0x08c:  mov    0x8(%ebp),%eax
088c9621 +0x08f:  add    $0x2d0,%eax
088c9626 +0x094:  mov    %eax,(%esp)
088c9629 +0x097:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
088c962e +0x09c:  mov    0x8(%ebp),%eax
088c9631 +0x09f:  add    $0x2dc,%eax
088c9636 +0x0a4:  mov    %eax,(%esp)
088c9639 +0x0a7:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
088c963e +0x0ac:  mov    0x8(%ebp),%eax
088c9641 +0x0af:  add    $0x2e8,%eax
088c9646 +0x0b4:  mov    %eax,(%esp)
088c9649 +0x0b7:  call   0817cc64 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xab>  ; global constructors keyed to Arad_Script::Arad_Script()+0xab
088c964e +0x0bc:  mov    0x8(%ebp),%eax
088c9651 +0x0bf:  movl   $0x0,0xd80(%eax)
088c965b +0x0c9:  mov    0x8(%ebp),%eax
088c965e +0x0cc:  movl   $0x0,0xd84(%eax)
088c9668 +0x0d6:  mov    0x8(%ebp),%eax
088c966b +0x0d9:  add    $0xd88,%eax
088c9670 +0x0de:  mov    %eax,(%esp)
088c9673 +0x0e1:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
088c9678 +0x0e6:  mov    0x8(%ebp),%eax
088c967b +0x0e9:  add    $0xd94,%eax
088c9680 +0x0ee:  mov    %eax,(%esp)
088c9683 +0x0f1:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
088c9688 +0x0f6:  mov    0x8(%ebp),%eax
088c968b +0x0f9:  movl   $0x0,0xda0(%eax)
088c9695 +0x103:  mov    0x8(%ebp),%eax
088c9698 +0x106:  movl   $0x0,0xda4(%eax)
088c96a2 +0x110:  mov    0x8(%ebp),%eax
088c96a5 +0x113:  movl   $0x0,0xda8(%eax)
088c96af +0x11d:  mov    0x8(%ebp),%eax
088c96b2 +0x120:  add    $0xf20,%eax
088c96b7 +0x125:  mov    %eax,(%esp)
088c96ba +0x128:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
088c96bf +0x12d:  mov    0x8(%ebp),%eax
088c96c2 +0x130:  add    $0xdac,%eax
088c96c7 +0x135:  mov    %eax,(%esp)
088c96ca +0x138:  call   088cc1a0 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0xb1>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0xb1
088c96cf +0x13d:  mov    0x8(%ebp),%eax
088c96d2 +0x140:  add    $0xe50,%eax
088c96d7 +0x145:  mov    %eax,(%esp)
088c96da +0x148:  call   088cc80e <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x71f>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x71f
088c96df +0x14d:  mov    0x8(%ebp),%eax
088c96e2 +0x150:  mov    $0x3f800000,%edx
088c96e7 +0x155:  mov    %edx,0xe5c(%eax)
088c96ed +0x15b:  mov    0x8(%ebp),%eax
088c96f0 +0x15e:  movl   $0x0,0xe60(%eax)
088c96fa +0x168:  mov    0x8(%ebp),%eax
088c96fd +0x16b:  movl   $0x2,0xe64(%eax)
088c9707 +0x175:  mov    0x8(%ebp),%eax
088c970a +0x178:  movl   $0x1,0xe68(%eax)
088c9714 +0x182:  mov    0x8(%ebp),%eax
088c9717 +0x185:  add    $0xe6c,%eax
088c971c +0x18a:  mov    %eax,(%esp)
088c971f +0x18d:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
088c9724 +0x192:  mov    0x8(%ebp),%eax
088c9727 +0x195:  add    $0xe78,%eax
088c972c +0x19a:  mov    %eax,(%esp)
088c972f +0x19d:  call   088cc1a0 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0xb1>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0xb1
088c9734 +0x1a2:  mov    0x8(%ebp),%eax
088c9737 +0x1a5:  mov    $0x3f800000,%edx
088c973c +0x1aa:  mov    %edx,0xf1c(%eax)
088c9742 +0x1b0:  mov    0x8(%ebp),%eax
088c9745 +0x1b3:  add    $0xf2c,%eax
088c974a +0x1b8:  mov    %eax,(%esp)
088c974d +0x1bb:  call   088cc82a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x73b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x73b
088c9752 +0x1c0:  mov    0x8(%ebp),%eax
088c9755 +0x1c3:  add    $0xd68,%eax
088c975a +0x1c8:  mov    %eax,(%esp)
088c975d +0x1cb:  call   088cc846 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x757>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x757
088c9762 +0x1d0:  mov    0x8(%ebp),%eax
088c9765 +0x1d3:  add    $0xd74,%eax
088c976a +0x1d8:  mov    %eax,(%esp)
088c976d +0x1db:  call   088cc846 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x757>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x757
088c9772 +0x1e0:  mov    0x8(%ebp),%eax
088c9775 +0x1e3:  add    $0xf38,%eax
088c977a +0x1e8:  mov    %eax,(%esp)
088c977d +0x1eb:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
088c9782 +0x1f0:  mov    0x8(%ebp),%eax
088c9785 +0x1f3:  movl   $0x0,0xf44(%eax)
088c978f +0x1fd:  mov    0x8(%ebp),%eax
088c9792 +0x200:  movl   $0x0,0xf48(%eax)
088c979c +0x20a:  mov    0x8(%ebp),%eax
088c979f +0x20d:  movl   $0x0,0xf4c(%eax)
088c97a9 +0x217:  mov    0x8(%ebp),%eax
088c97ac +0x21a:  add    $0xf50,%eax
088c97b1 +0x21f:  mov    %eax,(%esp)
088c97b4 +0x222:  call   088cc10c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x1d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x1d
088c97b9 +0x227:  mov    0x8(%ebp),%eax
088c97bc +0x22a:  movl   $0x1,0xf8c(%eax)
088c97c6 +0x234:  mov    0x8(%ebp),%eax
088c97c9 +0x237:  add    $0xf90,%eax
088c97ce +0x23c:  mov    %eax,(%esp)
088c97d1 +0x23f:  call   088cc4a6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x3b7>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x3b7
088c97d6 +0x244:  mov    0x8(%ebp),%eax
088c97d9 +0x247:  add    $0xf9c,%eax
088c97de +0x24c:  mov    %eax,(%esp)
088c97e1 +0x24f:  call   08383ad8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13578>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13578
088c97e6 +0x254:  mov    0x8(%ebp),%eax
088c97e9 +0x257:  movb   $0x1,0xfa8(%eax)
088c97f0 +0x25e:  mov    0x8(%ebp),%eax
088c97f3 +0x261:  movb   $0x0,0xff4(%eax)
088c97fa +0x268:  mov    0x8(%ebp),%eax
088c97fd +0x26b:  mov    $0x41a00000,%edx
088c9802 +0x270:  mov    %edx,0xff8(%eax)
088c9808 +0x276:  mov    0x8(%ebp),%eax
088c980b +0x279:  mov    $0xc3960000,%edx
088c9810 +0x27e:  mov    %edx,0xffc(%eax)
088c9816 +0x284:  mov    0x8(%ebp),%eax
088c9819 +0x287:  movl   $0x0,0x1000(%eax)
088c9823 +0x291:  mov    0x8(%ebp),%eax
088c9826 +0x294:  movl   $0xffffffff,0x1008(%eax)
088c9830 +0x29e:  mov    0x8(%ebp),%eax
088c9833 +0x2a1:  movb   $0x1,0x1004(%eax)
088c983a +0x2a8:  mov    0x8(%ebp),%eax
088c983d +0x2ab:  movl   $0x0,0x2b0(%eax)
088c9847 +0x2b5:  mov    0x8(%ebp),%eax
088c984a +0x2b8:  movl   $0x0,0x2b4(%eax)
088c9854 +0x2c2:  mov    0x8(%ebp),%eax
088c9857 +0x2c5:  movl   $0x0,0x2cc(%eax)
088c9861 +0x2cf:  mov    0x8(%ebp),%eax
088c9864 +0x2d2:  movl   $0x0,0x2c0(%eax)
088c986e +0x2dc:  mov    0x8(%ebp),%eax
088c9871 +0x2df:  movl   $0x0,0x2c8(%eax)
088c987b +0x2e9:  mov    0x8(%ebp),%eax
088c987e +0x2ec:  movl   $0x0,0x2c4(%eax)
088c9888 +0x2f6:  mov    0x8(%ebp),%eax
088c988b +0x2f9:  movl   $0x0,0x2b8(%eax)
088c9895 +0x303:  mov    0x8(%ebp),%eax
088c9898 +0x306:  movl   $0x0,0x2bc(%eax)
088c98a2 +0x310:  mov    0x8(%ebp),%eax
088c98a5 +0x313:  movb   $0x0,0x100c(%eax)
088c98ac +0x31a:  mov    0x8(%ebp),%eax
088c98af +0x31d:  movl   $0xb,0x1010(%eax)
088c98b9 +0x327:  leave
088c98ba +0x328:  ret
088c98bb +0x329:  nop
```

## 反编译 C

```c
// STAICharacterCommonScript::clear @ 0x88c9592

/* STAICharacterCommonScript::clear() */

void __thiscall STAICharacterCommonScript::clear(STAICharacterCommonScript *this)

{
  MinimumInfo::clear((MinimumInfo *)(this + 4));
  STRDCharacterStatus::Clear((STRDCharacterStatus *)(this + 0xc));
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::clear
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::clear
            ((vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70))
  ;
  std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::clear
            ((vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x7c))
  ;
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::clear
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::clear
            ((vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94));
  std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::clear
            ((vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0xa0));
  STAIInfoScript::clear((STAIInfoScript *)(this + 0xac));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x2e8));
  *(undefined4 *)(this + 0xd80) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
  *(undefined4 *)(this + 0xda0) = 0;
  *(undefined4 *)(this + 0xda4) = 0;
  *(undefined4 *)(this + 0xda8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xf20));
  STRDCharacterStatusRate::Clear((STRDCharacterStatusRate *)(this + 0xdac));
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::clear
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
  *(undefined4 *)(this + 0xe5c) = 0x3f800000;
  *(undefined4 *)(this + 0xe60) = 0;
  *(undefined4 *)(this + 0xe64) = 2;
  *(undefined4 *)(this + 0xe68) = 1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe6c));
  STRDCharacterStatusRate::Clear((STRDCharacterStatusRate *)(this + 0xe78));
  *(undefined4 *)(this + 0xf1c) = 0x3f800000;
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::clear
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
  std::vector<APCSpeech,std::allocator<APCSpeech>>::clear
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
  std::vector<APCSpeech,std::allocator<APCSpeech>>::clear
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xf38));
  *(undefined4 *)(this + 0xf44) = 0;
  *(undefined4 *)(this + 0xf48) = 0;
  *(undefined4 *)(this + 0xf4c) = 0;
  stEnamyDropAvatarInfo_t::clear((stEnamyDropAvatarInfo_t *)(this + 0xf50));
  *(undefined4 *)(this + 0xf8c) = 1;
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::clear
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
  this[0xfa8] = (STAICharacterCommonScript)0x1;
  this[0xff4] = (STAICharacterCommonScript)0x0;
  *(undefined4 *)(this + 0xff8) = 0x41a00000;
  *(undefined4 *)(this + 0xffc) = 0xc3960000;
  *(undefined4 *)(this + 0x1000) = 0;
  *(undefined4 *)(this + 0x1008) = 0xffffffff;
  this[0x1004] = (STAICharacterCommonScript)0x1;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  this[0x100c] = (STAICharacterCommonScript)0x0;
  *(undefined4 *)(this + 0x1010) = 0xb;
  return;
}
```
