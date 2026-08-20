# dispatch_sig

`_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedRewardServer::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedRewardServer` | `0x084e05c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e05c2  _ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedRewardServer::dispatch_sig(CUser*, char*, int)
# range [0x084e05c2, 0x084e0815]
084e05c2 +0x000:  push   %ebp
084e05c3 +0x001:  mov    %esp,%ebp
084e05c5 +0x003:  push   %esi
084e05c6 +0x004:  push   %ebx
084e05c7 +0x005:  sub    $0x40,%esp
084e05ca +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e05cf +0x00d:  mov    %eax,(%esp)
084e05d2 +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084e05d7 +0x015:  test   %al,%al
084e05d9 +0x017:  je     084e05e5 <+0x23>
084e05db +0x019:  mov    $0x0,%ebx
084e05e0 +0x01e:  jmp    084e0809 <+0x247>
084e05e5 +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e05ea +0x028:  mov    0x1a8(%eax),%eax
084e05f0 +0x02e:  cmp    $0x1,%eax
084e05f3 +0x031:  je     084e0605 <+0x43>
084e05f5 +0x033:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e05fa +0x038:  mov    0x1a8(%eax),%eax
084e0600 +0x03e:  cmp    $0x2,%eax
084e0603 +0x041:  jne    084e060c <+0x4a>
084e0605 +0x043:  mov    $0x1,%eax
084e060a +0x048:  jmp    084e0611 <+0x4f>
084e060c +0x04a:  mov    $0x0,%eax
084e0611 +0x04f:  test   %al,%al
084e0613 +0x051:  je     084e061f <+0x5d>
084e0615 +0x053:  mov    $0x0,%ebx
084e061a +0x058:  jmp    084e0809 <+0x247>
084e061f +0x05d:  movl   $0xa,0x8(%esp)
084e0627 +0x065:  movl   $0x0,0x4(%esp)
084e062f +0x06d:  lea    -0x22(%ebp),%eax
084e0632 +0x070:  mov    %eax,(%esp)
084e0635 +0x073:  call   0807dcc0 <_init+0x5b8>
084e063a +0x078:  lea    -0x30(%ebp),%eax
084e063d +0x07b:  mov    %eax,(%esp)
084e0640 +0x07e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e0645 +0x083:  lea    -0x30(%ebp),%eax
084e0648 +0x086:  mov    %eax,(%esp)
084e064b +0x089:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e0650 +0x08e:  movl   $0x1ec,0x8(%esp)
084e0658 +0x096:  movl   $0x0,0x4(%esp)
084e0660 +0x09e:  lea    -0x30(%ebp),%eax
084e0663 +0x0a1:  mov    %eax,(%esp)
084e0666 +0x0a4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e066b +0x0a9:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
084e0670 +0x0ae:  mov    %eax,(%esp)
084e0673 +0x0b1:  call   084ed3f8 <_GLOBAL__I__Z7getUserj+0x43aa>  ; global constructors keyed to getUser(unsigned int)+0x43aa
084e0678 +0x0b6:  mov    %eax,-0x10(%ebp)
084e067b +0x0b9:  mov    -0x10(%ebp),%eax
084e067e +0x0bc:  cmp    $0x1,%eax
084e0681 +0x0bf:  je     084e068a <+0xc8>
084e0683 +0x0c1:  cmp    $0x2,%eax
084e0686 +0x0c4:  je     084e0690 <+0xce>
084e0688 +0x0c6:  jmp    084e0694 <+0xd2>
084e068a +0x0c8:  movb   $0x0,-0x22(%ebp)
084e068e +0x0cc:  jmp    084e0694 <+0xd2>
084e0690 +0x0ce:  movb   $0x1,-0x22(%ebp)
084e0694 +0x0d2:  movb   $0x2,-0x21(%ebp)
084e0698 +0x0d6:  movl   $0x0,-0x20(%ebp)
084e069f +0x0dd:  movl   $0x0,-0x1c(%ebp)
084e06a6 +0x0e4:  lea    -0x22(%ebp),%eax
084e06a9 +0x0e7:  movl   $0xa,0x8(%esp)
084e06b1 +0x0ef:  mov    %eax,0x4(%esp)
084e06b5 +0x0f3:  lea    -0x30(%ebp),%eax
084e06b8 +0x0f6:  mov    %eax,(%esp)
084e06bb +0x0f9:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e06c0 +0x0fe:  movl   $0x1,0x4(%esp)
084e06c8 +0x106:  lea    -0x30(%ebp),%eax
084e06cb +0x109:  mov    %eax,(%esp)
084e06ce +0x10c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e06d3 +0x111:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084e06d8 +0x116:  mov    %eax,(%esp)
084e06db +0x119:  call   0847dd2a <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x4c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x4c
084e06e0 +0x11e:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084e06e5 +0x123:  movl   $0x0,0x4(%esp)
084e06ed +0x12b:  mov    %eax,(%esp)
084e06f0 +0x12e:  call   0847dd36 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x58>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x58
084e06f5 +0x133:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e06fa +0x138:  lea    0x134(%eax),%edx
084e0700 +0x13e:  lea    -0x34(%ebp),%eax
084e0703 +0x141:  mov    %edx,0x4(%esp)
084e0707 +0x145:  mov    %eax,(%esp)
084e070a +0x148:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
084e070f +0x14d:  sub    $0x4,%esp
084e0712 +0x150:  jmp    084e0798 <+0x1d6>
084e0717 +0x155:  lea    -0x34(%ebp),%eax
084e071a +0x158:  mov    %eax,(%esp)
084e071d +0x15b:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
084e0722 +0x160:  mov    0x4(%eax),%eax
084e0725 +0x163:  mov    %eax,-0xc(%ebp)
084e0728 +0x166:  cmpl   $0x0,-0xc(%ebp)
084e072c +0x16a:  je     084e077b <+0x1b9>
084e072e +0x16c:  mov    -0xc(%ebp),%eax
084e0731 +0x16f:  mov    %eax,(%esp)
084e0734 +0x172:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e0739 +0x177:  cmp    $0x2,%eax
084e073c +0x17a:  setg   %al
084e073f +0x17d:  test   %al,%al
084e0741 +0x17f:  je     084e077b <+0x1b9>
084e0743 +0x181:  mov    -0xc(%ebp),%eax
084e0746 +0x184:  movl   $0x0,0x8(%esp)
084e074e +0x18c:  movl   $0x0,0x4(%esp)
084e0756 +0x194:  mov    %eax,(%esp)
084e0759 +0x197:  call   084ec1a0 <_GLOBAL__I__Z7getUserj+0x3152>  ; global constructors keyed to getUser(unsigned int)+0x3152
084e075e +0x19c:  mov    -0xc(%ebp),%eax
084e0761 +0x19f:  mov    %eax,(%esp)
084e0764 +0x1a2:  call   084ec1fa <_GLOBAL__I__Z7getUserj+0x31ac>  ; global constructors keyed to getUser(unsigned int)+0x31ac
084e0769 +0x1a7:  lea    -0x30(%ebp),%eax
084e076c +0x1aa:  mov    %eax,0x4(%esp)
084e0770 +0x1ae:  mov    -0xc(%ebp),%eax
084e0773 +0x1b1:  mov    %eax,(%esp)
084e0776 +0x1b4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e077b +0x1b9:  lea    -0x14(%ebp),%eax
084e077e +0x1bc:  movl   $0x0,0x8(%esp)
084e0786 +0x1c4:  lea    -0x34(%ebp),%edx
084e0789 +0x1c7:  mov    %edx,0x4(%esp)
084e078d +0x1cb:  mov    %eax,(%esp)
084e0790 +0x1ce:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
084e0795 +0x1d3:  sub    $0x4,%esp
084e0798 +0x1d6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e079d +0x1db:  lea    0x134(%eax),%edx
084e07a3 +0x1e1:  lea    -0x18(%ebp),%eax
084e07a6 +0x1e4:  mov    %edx,0x4(%esp)
084e07aa +0x1e8:  mov    %eax,(%esp)
084e07ad +0x1eb:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
084e07b2 +0x1f0:  sub    $0x4,%esp
084e07b5 +0x1f3:  lea    -0x18(%ebp),%eax
084e07b8 +0x1f6:  mov    %eax,0x4(%esp)
084e07bc +0x1fa:  lea    -0x34(%ebp),%eax
084e07bf +0x1fd:  mov    %eax,(%esp)
084e07c2 +0x200:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
084e07c7 +0x205:  test   %al,%al
084e07c9 +0x207:  jne    084e0717 <+0x155>
084e07cf +0x20d:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
084e07d4 +0x212:  mov    %eax,(%esp)
084e07d7 +0x215:  call   086b44ec <_ZN16village_attacked18CVillageMonsterMgr25OnEndRewardVillageMonsterEv>  ; village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster()
084e07dc +0x21a:  mov    $0x0,%ebx
084e07e1 +0x21f:  lea    -0x30(%ebp),%eax
084e07e4 +0x222:  mov    %eax,(%esp)
084e07e7 +0x225:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e07ec +0x22a:  jmp    084e0809 <+0x247>
084e07ee +0x22c:  mov    %edx,%ebx
084e07f0 +0x22e:  mov    %eax,%esi
084e07f2 +0x230:  lea    -0x30(%ebp),%eax
084e07f5 +0x233:  mov    %eax,(%esp)
084e07f8 +0x236:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e07fd +0x23b:  mov    %esi,%eax
084e07ff +0x23d:  mov    %ebx,%edx
084e0801 +0x23f:  mov    %eax,(%esp)
084e0804 +0x242:  call   08ae3750 <_Unwind_Resume>
084e0809 +0x247:  mov    %ebx,%eax
084e080b +0x249:  lea    -0x8(%ebp),%esp
084e080e +0x24c:  add    $0x0,%esp
084e0811 +0x24f:  pop    %ebx
084e0812 +0x250:  pop    %esi
084e0813 +0x251:  pop    %ebp
084e0814 +0x252:  ret
084e0815 +0x253:  nop
```

## 反编译 C

```c
// Inter_VillageAttackedRewardServer::dispatch_sig @ 0x84e05c2

/* Inter_VillageAttackedRewardServer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedRewardServer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_38 [4];
  PacketGuard local_34 [14];
  char local_26 [10];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUserCharacInfo *local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      memset(local_26,0,10);
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084e064b to 084e07db has its CatchHandler @ 084e07ee */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x1ec);
      local_14 = village_attacked::CVillageMonsterMgr::GetRewardType
                           (GlobalData::s_villageMonsterMgr);
      if (local_14 == 1) {
        local_26[0] = '\0';
      }
      else if (local_14 == 2) {
        local_26[0] = '\x01';
      }
      local_26[1] = 2;
      local_26[2] = '\0';
      local_26[3] = '\0';
      local_26[4] = '\0';
      local_26[5] = '\0';
      local_26[6] = '\0';
      local_26[7] = '\0';
      local_26[8] = '\0';
      local_26[9] = '\0';
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_34,local_26,10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime(GlobalData::s_revengeDungeonMgr,0);
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::begin(local_38);
      while( true ) {
        G_GameWorld();
        std::
        map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
        ::end(local_1c);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar2 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38);
        local_10 = *(CUserCharacInfo **)(iVar3 + 4);
        if ((local_10 != (CUserCharacInfo *)0x0) &&
           (iVar3 = CUser::get_state((CUser *)local_10), 2 < iVar3)) {
          CUserCharacInfo::SetCurCharacRevengeData(local_10,'\0','\0');
          CUserCharacInfo::VillageAttack_NotDBUpdate(local_10);
          CUser::Send((CUser *)local_10,local_34);
        }
        std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                  (local_18,(int)local_38);
      }
      village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster
                (GlobalData::s_villageMonsterMgr);
      PacketGuard::~PacketGuard(local_34);
    }
  }
  return 0;
}
```
