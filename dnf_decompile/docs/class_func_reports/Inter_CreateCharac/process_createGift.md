# process_createGift

`_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC`

`Inter_CreateCharac::process_createGift(CUser*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `Inter_CreateCharac` | `0x084bf4ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bf4ce  _ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC
#           Inter_CreateCharac::process_createGift(CUser*, SIG_CREATE_CHARAC*)
# range [0x084bf4ce, 0x084bf7e9]
084bf4ce +0x000:  push   %ebp
084bf4cf +0x001:  mov    %esp,%ebp
084bf4d1 +0x003:  push   %edi
084bf4d2 +0x004:  push   %esi
084bf4d3 +0x005:  push   %ebx
084bf4d4 +0x006:  sub    $0x1cc,%esp
084bf4da +0x00c:  cmpl   $0x0,0xc(%ebp)
084bf4de +0x010:  je     084bf7de <+0x310>
084bf4e4 +0x016:  mov    0x10(%ebp),%eax
084bf4e7 +0x019:  movzbl 0x22(%eax),%eax
084bf4eb +0x01d:  movsbl %al,%eax
084bf4ee +0x020:  mov    %eax,-0x38(%ebp)
084bf4f1 +0x023:  lea    -0x4c(%ebp),%eax
084bf4f4 +0x026:  mov    %eax,(%esp)
084bf4f7 +0x029:  call   084e91fa <_GLOBAL__I__Z7getUserj+0x1ac>  ; global constructors keyed to getUser(unsigned int)+0x1ac
084bf4fc +0x02e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084bf501 +0x033:  lea    -0x4c(%ebp),%edx
084bf504 +0x036:  mov    %edx,0x8(%esp)
084bf508 +0x03a:  mov    -0x38(%ebp),%edx
084bf50b +0x03d:  mov    %edx,0x4(%esp)
084bf50f +0x041:  mov    %eax,(%esp)
084bf512 +0x044:  call   08365668 <_ZNK12CDataManager23get_createCharacterGiftEiRN17createChracScript14rewardInfoListE>  ; CDataManager::get_createCharacterGift(int, createChracScript::rewardInfoList&) const
084bf517 +0x049:  lea    -0x4c(%ebp),%eax
084bf51a +0x04c:  mov    %eax,(%esp)
084bf51d +0x04f:  call   084f11ec <_GLOBAL__I__Z7getUserj+0x819e>  ; global constructors keyed to getUser(unsigned int)+0x819e
084bf522 +0x054:  test   %al,%al
084bf524 +0x056:  jne    084bf7d1 <+0x303>
084bf52a +0x05c:  mov    0xc(%ebp),%eax
084bf52d +0x05f:  mov    %eax,(%esp)
084bf530 +0x062:  call   0822fde6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5490>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5490
084bf535 +0x067:  mov    %eax,-0x34(%ebp)
084bf538 +0x06a:  mov    0xc(%ebp),%eax
084bf53b +0x06d:  mov    %eax,(%esp)
084bf53e +0x070:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
084bf543 +0x075:  mov    %eax,-0x30(%ebp)
084bf546 +0x078:  lea    -0x4c(%ebp),%eax
084bf549 +0x07b:  mov    %eax,(%esp)
084bf54c +0x07e:  call   083e7446 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x81412>  ; global constructors keyed to CServerEvent::m_nExpRate+0x81412
084bf551 +0x083:  mov    %eax,-0x2c(%ebp)
084bf554 +0x086:  movl   $0x0,-0x28(%ebp)
084bf55b +0x08d:  jmp    084bf7a3 <+0x2d5>
084bf560 +0x092:  mov    -0x28(%ebp),%eax
084bf563 +0x095:  mov    %eax,0x4(%esp)
084bf567 +0x099:  lea    -0x4c(%ebp),%eax
084bf56a +0x09c:  mov    %eax,(%esp)
084bf56d +0x09f:  call   084f1230 <_GLOBAL__I__Z7getUserj+0x81e2>  ; global constructors keyed to getUser(unsigned int)+0x81e2
084bf572 +0x0a4:  mov    %eax,-0x24(%ebp)
084bf575 +0x0a7:  mov    -0x24(%ebp),%eax
084bf578 +0x0aa:  mov    0xc(%eax),%eax
084bf57b +0x0ad:  test   %eax,%eax
084bf57d +0x0af:  jle    084bf58e <+0xc0>
084bf57f +0x0b1:  mov    -0x24(%ebp),%eax
084bf582 +0x0b4:  mov    0xc(%eax),%eax
084bf585 +0x0b7:  cmp    -0x34(%ebp),%eax
084bf588 +0x0ba:  jg     084bf79b <+0x2cd>
084bf58e +0x0c0:  mov    -0x24(%ebp),%eax
084bf591 +0x0c3:  mov    0x10(%eax),%eax
084bf594 +0x0c6:  test   %eax,%eax
084bf596 +0x0c8:  jle    084bf5a7 <+0xd9>
084bf598 +0x0ca:  mov    -0x24(%ebp),%eax
084bf59b +0x0cd:  mov    0x10(%eax),%eax
084bf59e +0x0d0:  cmp    -0x34(%ebp),%eax
084bf5a1 +0x0d3:  jle    084bf79e <+0x2d0>
084bf5a7 +0x0d9:  mov    -0x24(%ebp),%edx
084bf5aa +0x0dc:  lea    -0x50(%ebp),%eax
084bf5ad +0x0df:  mov    %edx,0x4(%esp)
084bf5b1 +0x0e3:  mov    %eax,(%esp)
084bf5b4 +0x0e6:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
084bf5b9 +0x0eb:  sub    $0x4,%esp
084bf5bc +0x0ee:  jmp    084bf76a <+0x29c>
084bf5c1 +0x0f3:  lea    -0x8d(%ebp),%eax
084bf5c7 +0x0f9:  mov    %eax,(%esp)
084bf5ca +0x0fc:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084bf5cf +0x101:  lea    -0x50(%ebp),%eax
084bf5d2 +0x104:  mov    %eax,(%esp)
084bf5d5 +0x107:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
084bf5da +0x10c:  mov    (%eax),%ebx
084bf5dc +0x10e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084bf5e1 +0x113:  mov    %ebx,0x4(%esp)
084bf5e5 +0x117:  mov    %eax,(%esp)
084bf5e8 +0x11a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084bf5ed +0x11f:  mov    %eax,-0x20(%ebp)
084bf5f0 +0x122:  cmpl   $0x0,-0x20(%ebp)
084bf5f4 +0x126:  je     084bf74c <+0x27e>
084bf5fa +0x12c:  mov    -0x20(%ebp),%eax
084bf5fd +0x12f:  mov    %eax,(%esp)
084bf600 +0x132:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084bf605 +0x137:  mov    %eax,-0x8b(%ebp)
084bf60b +0x13d:  mov    -0x20(%ebp),%eax
084bf60e +0x140:  mov    (%eax),%eax
084bf610 +0x142:  add    $0x8,%eax
084bf613 +0x145:  mov    (%eax),%edx
084bf615 +0x147:  lea    -0x8d(%ebp),%eax
084bf61b +0x14d:  mov    %eax,0x4(%esp)
084bf61f +0x151:  mov    -0x20(%ebp),%eax
084bf622 +0x154:  mov    %eax,(%esp)
084bf625 +0x157:  call   *%edx
084bf627 +0x159:  movl   $0x1,0x4(%esp)
084bf62f +0x161:  lea    -0x8d(%ebp),%eax
084bf635 +0x167:  mov    %eax,(%esp)
084bf638 +0x16a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
084bf63d +0x16f:  mov    -0x24(%ebp),%eax
084bf640 +0x172:  add    $0x18,%eax
084bf643 +0x175:  mov    %eax,(%esp)
084bf646 +0x178:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084bf64b +0x17d:  movl   $0x0,0xc(%esp)
084bf653 +0x185:  mov    %eax,0x8(%esp)
084bf657 +0x189:  movl   $0x4,0x4(%esp)
084bf65f +0x191:  movl   $&g_scriptStringManager_,(%esp)
084bf666 +0x198:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084bf66b +0x19d:  movl   $0xff,0x8(%esp)
084bf673 +0x1a5:  mov    %eax,0x4(%esp)
084bf677 +0x1a9:  lea    -0x18d(%ebp),%eax
084bf67d +0x1af:  mov    %eax,(%esp)
084bf680 +0x1b2:  call   0807d8d0 <_init+0x1c8>
084bf685 +0x1b7:  mov    -0x8b(%ebp),%eax
084bf68b +0x1bd:  test   %eax,%eax
084bf68d +0x1bf:  je     084bf74d <+0x27f>
084bf693 +0x1c5:  mov    -0x20(%ebp),%eax
084bf696 +0x1c8:  mov    %eax,(%esp)
084bf699 +0x1cb:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
084bf69e +0x1d0:  mov    %eax,-0x1c(%ebp)
084bf6a1 +0x1d3:  cmpl   $0x0,-0x1c(%ebp)
084bf6a5 +0x1d7:  setne  %al
084bf6a8 +0x1da:  movzbl %al,%eax
084bf6ab +0x1dd:  mov    %eax,-0x19c(%ebp)
084bf6b1 +0x1e3:  cmpl   $0x0,-0x1c(%ebp)
084bf6b5 +0x1e7:  sete   %al
084bf6b8 +0x1ea:  movzbl %al,%edi
084bf6bb +0x1ed:  lea    -0x18d(%ebp),%eax
084bf6c1 +0x1f3:  mov    %eax,(%esp)
084bf6c4 +0x1f6:  call   0807e3b0 <_init+0xca8>
084bf6c9 +0x1fb:  mov    %eax,%esi
084bf6cb +0x1fd:  mov    0x10(%ebp),%eax
084bf6ce +0x200:  mov    0x5348(%eax),%ebx
084bf6d4 +0x206:  mov    -0x24(%ebp),%eax
084bf6d7 +0x209:  add    $0x14,%eax
084bf6da +0x20c:  mov    %eax,(%esp)
084bf6dd +0x20f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084bf6e2 +0x214:  movl   $0x0,0xc(%esp)
084bf6ea +0x21c:  mov    %eax,0x8(%esp)
084bf6ee +0x220:  movl   $0x4,0x4(%esp)
084bf6f6 +0x228:  movl   $&g_scriptStringManager_,(%esp)
084bf6fd +0x22f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084bf702 +0x234:  mov    -0x19c(%ebp),%edx
084bf708 +0x23a:  mov    %edx,0x24(%esp)
084bf70c +0x23e:  mov    %edi,0x20(%esp)
084bf710 +0x242:  mov    -0x30(%ebp),%edx
084bf713 +0x245:  mov    %edx,0x1c(%esp)
084bf717 +0x249:  mov    -0x1c(%ebp),%edx
084bf71a +0x24c:  mov    %edx,0x18(%esp)
084bf71e +0x250:  mov    %esi,0x14(%esp)
084bf722 +0x254:  lea    -0x18d(%ebp),%edx
084bf728 +0x25a:  mov    %edx,0x10(%esp)
084bf72c +0x25e:  mov    %ebx,0xc(%esp)
084bf730 +0x262:  movl   $0x0,0x8(%esp)
084bf738 +0x26a:  lea    -0x8d(%ebp),%edx
084bf73e +0x270:  mov    %edx,0x4(%esp)
084bf742 +0x274:  mov    %eax,(%esp)
084bf745 +0x277:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084bf74a +0x27c:  jmp    084bf74d <+0x27f>
084bf74c +0x27e:  nop
084bf74d +0x27f:  lea    -0x3c(%ebp),%eax
084bf750 +0x282:  movl   $0x0,0x8(%esp)
084bf758 +0x28a:  lea    -0x50(%ebp),%edx
084bf75b +0x28d:  mov    %edx,0x4(%esp)
084bf75f +0x291:  mov    %eax,(%esp)
084bf762 +0x294:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
084bf767 +0x299:  sub    $0x4,%esp
084bf76a +0x29c:  mov    -0x24(%ebp),%edx
084bf76d +0x29f:  lea    -0x40(%ebp),%eax
084bf770 +0x2a2:  mov    %edx,0x4(%esp)
084bf774 +0x2a6:  mov    %eax,(%esp)
084bf777 +0x2a9:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
084bf77c +0x2ae:  sub    $0x4,%esp
084bf77f +0x2b1:  lea    -0x40(%ebp),%eax
084bf782 +0x2b4:  mov    %eax,0x4(%esp)
084bf786 +0x2b8:  lea    -0x50(%ebp),%eax
084bf789 +0x2bb:  mov    %eax,(%esp)
084bf78c +0x2be:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
084bf791 +0x2c3:  test   %al,%al
084bf793 +0x2c5:  jne    084bf5c1 <+0xf3>
084bf799 +0x2cb:  jmp    084bf79f <+0x2d1>
084bf79b +0x2cd:  nop
084bf79c +0x2ce:  jmp    084bf79f <+0x2d1>
084bf79e +0x2d0:  nop
084bf79f +0x2d1:  addl   $0x1,-0x28(%ebp)
084bf7a3 +0x2d5:  mov    -0x28(%ebp),%eax
084bf7a6 +0x2d8:  cmp    -0x2c(%ebp),%eax
084bf7a9 +0x2db:  setb   %al
084bf7ac +0x2de:  test   %al,%al
084bf7ae +0x2e0:  jne    084bf560 <+0x92>
084bf7b4 +0x2e6:  jmp    084bf7d1 <+0x303>
084bf7b6 +0x2e8:  mov    %edx,%ebx
084bf7b8 +0x2ea:  mov    %eax,%esi
084bf7ba +0x2ec:  lea    -0x4c(%ebp),%eax
084bf7bd +0x2ef:  mov    %eax,(%esp)
084bf7c0 +0x2f2:  call   083cf71c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x696e8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x696e8
084bf7c5 +0x2f7:  mov    %esi,%eax
084bf7c7 +0x2f9:  mov    %ebx,%edx
084bf7c9 +0x2fb:  mov    %eax,(%esp)
084bf7cc +0x2fe:  call   08ae3750 <_Unwind_Resume>
084bf7d1 +0x303:  lea    -0x4c(%ebp),%eax
084bf7d4 +0x306:  mov    %eax,(%esp)
084bf7d7 +0x309:  call   083cf71c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x696e8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x696e8
084bf7dc +0x30e:  jmp    084bf7df <+0x311>
084bf7de +0x310:  nop
084bf7df +0x311:  lea    -0xc(%ebp),%esp
084bf7e2 +0x314:  add    $0x0,%esp
084bf7e5 +0x317:  pop    %ebx
084bf7e6 +0x318:  pop    %esi
084bf7e7 +0x319:  pop    %edi
084bf7e8 +0x31a:  pop    %ebp
084bf7e9 +0x31b:  ret
```

## 反编译 C

```c
// Inter_CreateCharac::process_createGift @ 0x84bf4ce

/* Inter_CreateCharac::process_createGift(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
Inter_CreateCharac::process_createGift
          (Inter_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  CDataManager *pCVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  bool bVar10;
  char local_191 [256];
  Inven_Item local_91 [2];
  int local_8f;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_54 [4];
  rewardInfoList local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  CItem *local_24;
  int local_20;
  
  if (param_1 != (CUser *)0x0) {
    local_3c = (int)(char)param_2[0x22];
    createChracScript::rewardInfoList::rewardInfoList(local_50);
                    /* try { // try from 084bf4fc to 084bf790 has its CatchHandler @ 084bf7b6 */
    pCVar5 = (CDataManager *)G_CDataManager();
    CDataManager::get_createCharacterGift(pCVar5,local_3c,local_50);
    cVar3 = std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
            ::empty();
    if (cVar3 == '\0') {
      local_38 = CUser::getRegTime(param_1);
      local_34 = CUser::GetServerGroupToPvP(param_1);
      local_30 = std::
                 vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                 ::size((vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                         *)local_50);
      for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
        local_28 = std::
                   vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                   ::operator[]((vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                                 *)local_50,local_2c);
        if (((*(int *)(local_28 + 0xc) < 1) || (*(int *)(local_28 + 0xc) <= local_38)) &&
           ((*(int *)(local_28 + 0x10) < 1 || (local_38 < *(int *)(local_28 + 0x10))))) {
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar4 = __gnu_cxx::operator!=(local_54,local_44);
            if (!bVar4) break;
            Inven_Item::Inven_Item(local_91);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_54);
            iVar1 = *piVar6;
            pCVar5 = (CDataManager *)G_CDataManager();
            local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar1);
            if (local_24 != (CItem *)0x0) {
              local_8f = CItem::get_index(local_24);
              (**(code **)(*(int *)local_24 + 8))(local_24,local_91);
              Inven_Item::set_add_info(local_91,1);
              pcVar7 = (char *)std::string::c_str((string *)(local_28 + 0x18));
              pcVar7 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7
                                          ,(bool *)0x0);
              strncpy(local_191,pcVar7,0xff);
              if (local_8f != 0) {
                local_20 = CItem::getExpirationDate(local_24);
                bVar4 = local_20 != 0;
                bVar10 = local_20 == 0;
                sVar8 = strlen(local_191);
                uVar2 = *(undefined4 *)(param_2 + 0x5348);
                pcVar7 = (char *)std::string::c_str((string *)(local_28 + 0x14));
                uVar9 = RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                   (bool *)0x0);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (uVar9,local_91,0,uVar2,local_191,sVar8,local_20,local_34,bVar10,bVar4);
              }
            }
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_40,(int)local_54);
          }
        }
      }
    }
    createChracScript::rewardInfoList::~rewardInfoList(local_50);
  }
  return;
}
```
