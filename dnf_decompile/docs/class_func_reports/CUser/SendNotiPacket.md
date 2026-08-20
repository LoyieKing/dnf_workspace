# SendNotiPacket

`_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi`

`CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ba5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ba5c  _ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi
#           CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
# range [0x0867ba5c, 0x0867bd83]
0867ba5c +0x000:  push   %ebp
0867ba5d +0x001:  mov    %esp,%ebp
0867ba5f +0x003:  push   %esi
0867ba60 +0x004:  push   %ebx
0867ba61 +0x005:  sub    $0x30,%esp
0867ba64 +0x008:  lea    -0x18(%ebp),%eax
0867ba67 +0x00b:  mov    %eax,(%esp)
0867ba6a +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867ba6f +0x013:  mov    0x10(%ebp),%eax
0867ba72 +0x016:  mov    %eax,0x8(%esp)
0867ba76 +0x01a:  movl   $0x0,0x4(%esp)
0867ba7e +0x022:  lea    -0x18(%ebp),%eax
0867ba81 +0x025:  mov    %eax,(%esp)
0867ba84 +0x028:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867ba89 +0x02d:  mov    0x10(%ebp),%eax
0867ba8c +0x030:  cmp    $0x2,%eax
0867ba8f +0x033:  je     0867bc90 <+0x234>
0867ba95 +0x039:  cmp    $0x25,%eax
0867ba98 +0x03c:  jne    0867bcd9 <+0x27d>
0867ba9e +0x042:  mov    0x8(%ebp),%eax
0867baa1 +0x045:  mov    %eax,(%esp)
0867baa4 +0x048:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867baa9 +0x04d:  mov    %eax,0x4(%esp)
0867baad +0x051:  lea    -0x18(%ebp),%eax
0867bab0 +0x054:  mov    %eax,(%esp)
0867bab3 +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bab8 +0x05c:  mov    0x8(%ebp),%eax
0867babb +0x05f:  mov    %eax,(%esp)
0867babe +0x062:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0867bac3 +0x067:  mov    %eax,0x4(%esp)
0867bac7 +0x06b:  lea    -0x18(%ebp),%eax
0867baca +0x06e:  mov    %eax,(%esp)
0867bacd +0x071:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bad2 +0x076:  mov    0x8(%ebp),%eax
0867bad5 +0x079:  mov    %eax,(%esp)
0867bad8 +0x07c:  call   08696694 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2ee9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2ee9
0867badd +0x081:  mov    %eax,0x4(%esp)
0867bae1 +0x085:  lea    -0x18(%ebp),%eax
0867bae4 +0x088:  mov    %eax,(%esp)
0867bae7 +0x08b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867baec +0x090:  mov    0x8(%ebp),%eax
0867baef +0x093:  mov    %eax,(%esp)
0867baf2 +0x096:  call   086968ac <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3101>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3101
0867baf7 +0x09b:  mov    %eax,0x4(%esp)
0867bafb +0x09f:  lea    -0x18(%ebp),%eax
0867bafe +0x0a2:  mov    %eax,(%esp)
0867bb01 +0x0a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bb06 +0x0aa:  mov    0x8(%ebp),%eax
0867bb09 +0x0ad:  mov    %eax,(%esp)
0867bb0c +0x0b0:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867bb11 +0x0b5:  movl   $0x0,0x4(%esp)
0867bb19 +0x0bd:  mov    %eax,(%esp)
0867bb1c +0x0c0:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0867bb21 +0x0c5:  mov    %eax,0x4(%esp)
0867bb25 +0x0c9:  lea    -0x18(%ebp),%eax
0867bb28 +0x0cc:  mov    %eax,(%esp)
0867bb2b +0x0cf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867bb30 +0x0d4:  mov    0x8(%ebp),%eax
0867bb33 +0x0d7:  mov    %eax,(%esp)
0867bb36 +0x0da:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867bb3b +0x0df:  movl   $0x1,0x4(%esp)
0867bb43 +0x0e7:  mov    %eax,(%esp)
0867bb46 +0x0ea:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0867bb4b +0x0ef:  mov    %eax,0x4(%esp)
0867bb4f +0x0f3:  lea    -0x18(%ebp),%eax
0867bb52 +0x0f6:  mov    %eax,(%esp)
0867bb55 +0x0f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867bb5a +0x0fe:  mov    0x8(%ebp),%eax
0867bb5d +0x101:  mov    %eax,(%esp)
0867bb60 +0x104:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867bb65 +0x109:  movl   $0x2,0x4(%esp)
0867bb6d +0x111:  mov    %eax,(%esp)
0867bb70 +0x114:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0867bb75 +0x119:  mov    %eax,0x4(%esp)
0867bb79 +0x11d:  lea    -0x18(%ebp),%eax
0867bb7c +0x120:  mov    %eax,(%esp)
0867bb7f +0x123:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867bb84 +0x128:  mov    0x8(%ebp),%eax
0867bb87 +0x12b:  mov    %eax,(%esp)
0867bb8a +0x12e:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867bb8f +0x133:  movl   $0x3,0x4(%esp)
0867bb97 +0x13b:  mov    %eax,(%esp)
0867bb9a +0x13e:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0867bb9f +0x143:  mov    %eax,0x4(%esp)
0867bba3 +0x147:  lea    -0x18(%ebp),%eax
0867bba6 +0x14a:  mov    %eax,(%esp)
0867bba9 +0x14d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867bbae +0x152:  mov    0x8(%ebp),%eax
0867bbb1 +0x155:  mov    %eax,(%esp)
0867bbb4 +0x158:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0867bbb9 +0x15d:  mov    0x58(%eax),%eax
0867bbbc +0x160:  mov    %eax,0x4(%esp)
0867bbc0 +0x164:  lea    -0x18(%ebp),%eax
0867bbc3 +0x167:  mov    %eax,(%esp)
0867bbc6 +0x16a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bbcb +0x16f:  mov    0x8(%ebp),%eax
0867bbce +0x172:  mov    %eax,(%esp)
0867bbd1 +0x175:  call   0869688a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x30df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x30df
0867bbd6 +0x17a:  mov    %eax,0x4(%esp)
0867bbda +0x17e:  lea    -0x18(%ebp),%eax
0867bbdd +0x181:  mov    %eax,(%esp)
0867bbe0 +0x184:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bbe5 +0x189:  mov    0x8(%ebp),%eax
0867bbe8 +0x18c:  mov    %eax,(%esp)
0867bbeb +0x18f:  call   08696c68 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x34bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x34bd
0867bbf0 +0x194:  mov    %eax,0x4(%esp)
0867bbf4 +0x198:  lea    -0x18(%ebp),%eax
0867bbf7 +0x19b:  mov    %eax,(%esp)
0867bbfa +0x19e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bbff +0x1a3:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0867bc04 +0x1a8:  movl   $0x57,0x4(%esp)
0867bc0c +0x1b0:  mov    %eax,(%esp)
0867bc0f +0x1b3:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0867bc14 +0x1b8:  mov    (%eax),%edx
0867bc16 +0x1ba:  add    $0x34,%edx
0867bc19 +0x1bd:  mov    (%edx),%edx
0867bc1b +0x1bf:  movl   $0x0,0x4(%esp)
0867bc23 +0x1c7:  mov    %eax,(%esp)
0867bc26 +0x1ca:  call   *%edx
0867bc28 +0x1cc:  test   %al,%al
0867bc2a +0x1ce:  je     0867bc53 <+0x1f7>
0867bc2c +0x1d0:  mov    0x8(%ebp),%eax
0867bc2f +0x1d3:  mov    %eax,(%esp)
0867bc32 +0x1d6:  call   0868e328 <_ZN15CUserCharacInfo18getWeekendBonusExpEv>  ; CUserCharacInfo::getWeekendBonusExp()
0867bc37 +0x1db:  mov    %eax,0x4(%esp)
0867bc3b +0x1df:  lea    -0x18(%ebp),%eax
0867bc3e +0x1e2:  mov    %eax,(%esp)
0867bc41 +0x1e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bc46 +0x1ea:  mov    0x8(%ebp),%eax
0867bc49 +0x1ed:  mov    %eax,(%esp)
0867bc4c +0x1f0:  call   0868e34a <_ZN15CUserCharacInfo20resetWeekendBonusExpEv>  ; CUserCharacInfo::resetWeekendBonusExp()
0867bc51 +0x1f5:  jmp    0867bc66 <+0x20a>
0867bc53 +0x1f7:  movl   $0x0,0x4(%esp)
0867bc5b +0x1ff:  lea    -0x18(%ebp),%eax
0867bc5e +0x202:  mov    %eax,(%esp)
0867bc61 +0x205:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bc66 +0x20a:  mov    0x8(%ebp),%eax
0867bc69 +0x20d:  mov    %eax,(%esp)
0867bc6c +0x210:  call   0868e262 <_ZNK15CUserCharacInfo18getPremiumBonusExpEv>  ; CUserCharacInfo::getPremiumBonusExp() const
0867bc71 +0x215:  mov    %eax,0x4(%esp)
0867bc75 +0x219:  lea    -0x18(%ebp),%eax
0867bc78 +0x21c:  mov    %eax,(%esp)
0867bc7b +0x21f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867bc80 +0x224:  mov    0x8(%ebp),%eax
0867bc83 +0x227:  mov    %eax,(%esp)
0867bc86 +0x22a:  call   0868e284 <_ZN15CUserCharacInfo20resetPremiumBonusExpEv>  ; CUserCharacInfo::resetPremiumBonusExp()
0867bc8b +0x22f:  jmp    0867bd22 <+0x2c6>
0867bc90 +0x234:  mov    0x14(%ebp),%eax
0867bc93 +0x237:  mov    %eax,-0xc(%ebp)
0867bc96 +0x23a:  mov    -0xc(%ebp),%eax
0867bc99 +0x23d:  mov    %eax,0x4(%esp)
0867bc9d +0x241:  lea    -0x18(%ebp),%eax
0867bca0 +0x244:  mov    %eax,(%esp)
0867bca3 +0x247:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bca8 +0x24c:  movl   $0x1,0x4(%esp)
0867bcb0 +0x254:  lea    -0x18(%ebp),%eax
0867bcb3 +0x257:  mov    %eax,(%esp)
0867bcb6 +0x25a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867bcbb +0x25f:  mov    -0xc(%ebp),%eax
0867bcbe +0x262:  movsbl %al,%edx
0867bcc1 +0x265:  lea    -0x18(%ebp),%eax
0867bcc4 +0x268:  mov    %edx,0x8(%esp)
0867bcc8 +0x26c:  mov    %eax,0x4(%esp)
0867bccc +0x270:  mov    0x8(%ebp),%eax
0867bccf +0x273:  mov    %eax,(%esp)
0867bcd2 +0x276:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0867bcd7 +0x27b:  jmp    0867bd22 <+0x2c6>
0867bcd9 +0x27d:  mov    0x10(%ebp),%ebx
0867bcdc +0x280:  mov    0x8(%ebp),%eax
0867bcdf +0x283:  mov    %eax,(%esp)
0867bce2 +0x286:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867bce7 +0x28b:  mov    %ebx,0x18(%esp)
0867bceb +0x28f:  mov    %eax,0x14(%esp)
0867bcef +0x293:  movl   $"User %s - NotifyID = %d",0x10(%esp)
0867bcf7 +0x29b:  movl   $0x76d1,0xc(%esp)
0867bcff +0x2a3:  movl   $&_ZZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETiE19__PRETTY_FUNCTION__,0x8(%esp)
0867bd07 +0x2ab:  movl   $"user.cpp",0x4(%esp)
0867bd0f +0x2b3:  movl   $0x1,(%esp)
0867bd16 +0x2ba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867bd1b +0x2bf:  mov    $0x0,%ebx
0867bd20 +0x2c4:  jmp    0867bd70 <+0x314>
0867bd22 +0x2c6:  movl   $0x1,0x4(%esp)
0867bd2a +0x2ce:  lea    -0x18(%ebp),%eax
0867bd2d +0x2d1:  mov    %eax,(%esp)
0867bd30 +0x2d4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867bd35 +0x2d9:  lea    -0x18(%ebp),%eax
0867bd38 +0x2dc:  mov    %eax,0x8(%esp)
0867bd3c +0x2e0:  mov    0xc(%ebp),%eax
0867bd3f +0x2e3:  mov    %eax,0x4(%esp)
0867bd43 +0x2e7:  mov    0x8(%ebp),%eax
0867bd46 +0x2ea:  mov    %eax,(%esp)
0867bd49 +0x2ed:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
0867bd4e +0x2f2:  mov    $0x1,%ebx
0867bd53 +0x2f7:  jmp    0867bd70 <+0x314>
0867bd55 +0x2f9:  mov    %edx,%ebx
0867bd57 +0x2fb:  mov    %eax,%esi
0867bd59 +0x2fd:  lea    -0x18(%ebp),%eax
0867bd5c +0x300:  mov    %eax,(%esp)
0867bd5f +0x303:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bd64 +0x308:  mov    %esi,%eax
0867bd66 +0x30a:  mov    %ebx,%edx
0867bd68 +0x30c:  mov    %eax,(%esp)
0867bd6b +0x30f:  call   08ae3750 <_Unwind_Resume>
0867bd70 +0x314:  lea    -0x18(%ebp),%eax
0867bd73 +0x317:  mov    %eax,(%esp)
0867bd76 +0x31a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bd7b +0x31f:  mov    %ebx,%eax
0867bd7d +0x321:  add    $0x30,%esp
0867bd80 +0x324:  pop    %ebx
0867bd81 +0x325:  pop    %esi
0867bd82 +0x326:  pop    %ebp
0867bd83 +0x327:  ret
```

## 反编译 C

```c
// CUser::SendNotiPacket @ 0x867ba5c

/* CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int) */

undefined4 __thiscall CUser::SendNotiPacket(CUser *this,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  SkillSlot *pSVar3;
  int *piVar4;
  undefined4 uVar5;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0867ba84 to 0867bd4d has its CatchHandler @ 0867bd55 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,param_3);
  if (param_3 == 2) {
    local_10 = param_4;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_4);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    make_basic_info(this,(char *)local_1c,(char)local_10);
  }
  else {
    if (param_3 != 0x25) {
      uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      LogManager::logFormat
                (1,"user.cpp","bool CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)"
                 ,0x76d1,"User %s - NotifyID = %d",uVar5,param_3);
      uVar5 = 0;
      goto LAB_0867bd70;
    }
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUserCharacInfo::get_charac_party_bonus_exp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUserCharacInfo::get_charac_member_bonus_exp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sp_at_index(pSVar3,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sp_at_index(pSVar3,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar3,2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar3,3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar2 + 0x58));
    iVar2 = CUserCharacInfo::get_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUserCharacInfo::get_charac_seria_buf_bonus_exp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
    }
    else {
      iVar2 = CUserCharacInfo::getWeekendBonusExp((CUserCharacInfo *)this);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      CUserCharacInfo::resetWeekendBonusExp((CUserCharacInfo *)this);
    }
    iVar2 = CUserCharacInfo::getPremiumBonusExp((CUserCharacInfo *)this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    CUserCharacInfo::resetPremiumBonusExp((CUserCharacInfo *)this);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  SendPacket(this,param_2,local_1c);
  uVar5 = 1;
LAB_0867bd70:
  PacketGuard::~PacketGuard(local_1c);
  return uVar5;
}
```
