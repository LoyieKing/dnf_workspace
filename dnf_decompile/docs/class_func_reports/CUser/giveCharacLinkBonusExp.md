# giveCharacLinkBonusExp

`_ZN5CUser22giveCharacLinkBonusExpEj`

`CUser::giveCharacLinkBonusExp(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652564` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652564  _ZN5CUser22giveCharacLinkBonusExpEj
#           CUser::giveCharacLinkBonusExp(unsigned int)
# range [0x08652564, 0x086528b3]
08652564 +0x000:  push   %ebp
08652565 +0x001:  mov    %esp,%ebp
08652567 +0x003:  push   %esi
08652568 +0x004:  push   %ebx
08652569 +0x005:  sub    $0x70,%esp
0865256c +0x008:  lea    -0x24(%ebp),%eax
0865256f +0x00b:  mov    %eax,(%esp)
08652572 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08652577 +0x013:  movl   $0x0,-0x28(%ebp)
0865257e +0x01a:  movl   $0x0,-0x2c(%ebp)
08652585 +0x021:  mov    0x8(%ebp),%eax
08652588 +0x024:  mov    %eax,(%esp)
0865258b +0x027:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08652590 +0x02c:  mov    %eax,%ebx
08652592 +0x02e:  mov    0x8(%ebp),%eax
08652595 +0x031:  mov    %eax,(%esp)
08652598 +0x034:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865259d +0x039:  mov    %ebx,0x4(%esp)
086525a1 +0x03d:  mov    %eax,(%esp)
086525a4 +0x040:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
086525a9 +0x045:  mov    %eax,-0x18(%ebp)
086525ac +0x048:  mov    0x8(%ebp),%eax
086525af +0x04b:  movl   $0x0,0x8(%esp)
086525b7 +0x053:  mov    0xc(%ebp),%edx
086525ba +0x056:  mov    %edx,0x4(%esp)
086525be +0x05a:  mov    %eax,(%esp)
086525c1 +0x05d:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
086525c6 +0x062:  mov    0xc(%ebp),%eax
086525c9 +0x065:  movl   $0x1,0x18(%esp)
086525d1 +0x06d:  movl   $0x0,0x14(%esp)
086525d9 +0x075:  movl   $0x3,0x10(%esp)
086525e1 +0x07d:  lea    -0x2c(%ebp),%edx
086525e4 +0x080:  mov    %edx,0xc(%esp)
086525e8 +0x084:  lea    -0x28(%ebp),%edx
086525eb +0x087:  mov    %edx,0x8(%esp)
086525ef +0x08b:  mov    %eax,0x4(%esp)
086525f3 +0x08f:  mov    0x8(%ebp),%eax
086525f6 +0x092:  mov    %eax,(%esp)
086525f9 +0x095:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
086525fe +0x09a:  mov    %al,-0xd(%ebp)
08652601 +0x09d:  mov    0x8(%ebp),%eax
08652604 +0x0a0:  mov    %eax,(%esp)
08652607 +0x0a3:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0865260c +0x0a8:  mov    %eax,%ebx
0865260e +0x0aa:  mov    0x8(%ebp),%eax
08652611 +0x0ad:  mov    %eax,(%esp)
08652614 +0x0b0:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08652619 +0x0b5:  mov    %ebx,0x4(%esp)
0865261d +0x0b9:  mov    %eax,(%esp)
08652620 +0x0bc:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
08652625 +0x0c1:  mov    %eax,-0x14(%ebp)
08652628 +0x0c4:  cmpb   $0x0,-0xd(%ebp)
0865262c +0x0c8:  je     086526c6 <+0x162>
08652632 +0x0ce:  lea    -0x24(%ebp),%eax
08652635 +0x0d1:  mov    %eax,(%esp)
08652638 +0x0d4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0865263d +0x0d9:  movl   $0x2,0x8(%esp)
08652645 +0x0e1:  movl   $0x0,0x4(%esp)
0865264d +0x0e9:  lea    -0x24(%ebp),%eax
08652650 +0x0ec:  mov    %eax,(%esp)
08652653 +0x0ef:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08652658 +0x0f4:  movl   $0x0,0x4(%esp)
08652660 +0x0fc:  lea    -0x24(%ebp),%eax
08652663 +0x0ff:  mov    %eax,(%esp)
08652666 +0x102:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865266b +0x107:  movl   $0x1,0x4(%esp)
08652673 +0x10f:  lea    -0x24(%ebp),%eax
08652676 +0x112:  mov    %eax,(%esp)
08652679 +0x115:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865267e +0x11a:  lea    -0x24(%ebp),%eax
08652681 +0x11d:  movl   $0x0,0x8(%esp)
08652689 +0x125:  mov    %eax,0x4(%esp)
0865268d +0x129:  mov    0x8(%ebp),%eax
08652690 +0x12c:  mov    %eax,(%esp)
08652693 +0x12f:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08652698 +0x134:  movl   $0x1,0x4(%esp)
086526a0 +0x13c:  lea    -0x24(%ebp),%eax
086526a3 +0x13f:  mov    %eax,(%esp)
086526a6 +0x142:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086526ab +0x147:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086526b0 +0x14c:  mov    0x8(%ebp),%edx
086526b3 +0x14f:  mov    %edx,0x8(%esp)
086526b7 +0x153:  lea    -0x24(%ebp),%edx
086526ba +0x156:  mov    %edx,0x4(%esp)
086526be +0x15a:  mov    %eax,(%esp)
086526c1 +0x15d:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086526c6 +0x162:  lea    -0x4a(%ebp),%eax
086526c9 +0x165:  mov    $0x1e,%ebx
086526ce +0x16a:  mov    $0x0,%edx
086526d3 +0x16f:  mov    %eax,%ecx
086526d5 +0x171:  and    $0x2,%ecx
086526d8 +0x174:  test   %ecx,%ecx
086526da +0x176:  je     086526e5 <+0x181>
086526dc +0x178:  mov    %dx,(%eax)
086526df +0x17b:  add    $0x2,%eax
086526e2 +0x17e:  sub    $0x2,%ebx
086526e5 +0x181:  mov    %ebx,%esi
086526e7 +0x183:  and    $0xfffffffc,%esi
086526ea +0x186:  mov    $0x0,%ecx
086526ef +0x18b:  mov    %edx,(%eax,%ecx,1)
086526f2 +0x18e:  add    $0x4,%ecx
086526f5 +0x191:  cmp    %esi,%ecx
086526f7 +0x193:  jb     086526ef <+0x18b>
086526f9 +0x195:  add    %ecx,%eax
086526fb +0x197:  mov    %ebx,%ecx
086526fd +0x199:  and    $0x2,%ecx
08652700 +0x19c:  test   %ecx,%ecx
08652702 +0x19e:  je     0865270a <+0x1a6>
08652704 +0x1a0:  mov    %dx,(%eax)
08652707 +0x1a3:  add    $0x2,%eax
0865270a +0x1a6:  mov    %ebx,%ecx
0865270c +0x1a8:  and    $0x1,%ecx
0865270f +0x1ab:  test   %ecx,%ecx
08652711 +0x1ad:  je     08652718 <+0x1b4>
08652713 +0x1af:  mov    %dl,(%eax)
08652715 +0x1b1:  add    $0x1,%eax
08652718 +0x1b4:  mov    0x8(%ebp),%eax
0865271b +0x1b7:  mov    %eax,(%esp)
0865271e +0x1ba:  call   084ec474 <_GLOBAL__I__Z7getUserj+0x3426>  ; global constructors keyed to getUser(unsigned int)+0x3426
08652723 +0x1bf:  movsbl %al,%eax
08652726 +0x1c2:  mov    %eax,-0xc(%ebp)
08652729 +0x1c5:  cmpl   $0x0,-0xc(%ebp)
0865272d +0x1c9:  js     0865274b <+0x1e7>
0865272f +0x1cb:  mov    0x8(%ebp),%eax
08652732 +0x1ce:  add    $0x796e8,%eax
08652737 +0x1d3:  mov    %eax,(%esp)
0865273a +0x1d6:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0865273f +0x1db:  cmp    -0xc(%ebp),%eax
08652742 +0x1de:  jle    0865274b <+0x1e7>
08652744 +0x1e0:  mov    $0x1,%eax
08652749 +0x1e5:  jmp    08652750 <+0x1ec>
0865274b +0x1e7:  mov    $0x0,%eax
08652750 +0x1ec:  test   %al,%al
08652752 +0x1ee:  je     0865277e <+0x21a>
08652754 +0x1f0:  mov    -0xc(%ebp),%eax
08652757 +0x1f3:  mov    0x8(%ebp),%edx
0865275a +0x1f6:  add    $0x796e8,%edx
08652760 +0x1fc:  mov    %eax,0x4(%esp)
08652764 +0x200:  mov    %edx,(%esp)
08652767 +0x203:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865276c +0x208:  add    $0x4,%eax
0865276f +0x20b:  mov    %eax,0x4(%esp)
08652773 +0x20f:  lea    -0x4a(%ebp),%eax
08652776 +0x212:  mov    %eax,(%esp)
08652779 +0x215:  call   0807def0 <_init+0x7e8>
0865277e +0x21a:  lea    -0x24(%ebp),%eax
08652781 +0x21d:  mov    %eax,(%esp)
08652784 +0x220:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08652789 +0x225:  movl   $0x123,0x8(%esp)
08652791 +0x22d:  movl   $0x0,0x4(%esp)
08652799 +0x235:  lea    -0x24(%ebp),%eax
0865279c +0x238:  mov    %eax,(%esp)
0865279f +0x23b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086527a4 +0x240:  lea    -0x4a(%ebp),%eax
086527a7 +0x243:  mov    %eax,(%esp)
086527aa +0x246:  call   0807e3b0 <_init+0xca8>
086527af +0x24b:  mov    %eax,0x4(%esp)
086527b3 +0x24f:  lea    -0x24(%ebp),%eax
086527b6 +0x252:  mov    %eax,(%esp)
086527b9 +0x255:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086527be +0x25a:  lea    -0x4a(%ebp),%eax
086527c1 +0x25d:  mov    %eax,(%esp)
086527c4 +0x260:  call   0807e3b0 <_init+0xca8>
086527c9 +0x265:  mov    %eax,0x8(%esp)
086527cd +0x269:  lea    -0x4a(%ebp),%eax
086527d0 +0x26c:  mov    %eax,0x4(%esp)
086527d4 +0x270:  lea    -0x24(%ebp),%eax
086527d7 +0x273:  mov    %eax,(%esp)
086527da +0x276:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086527df +0x27b:  movl   $0x0,0x4(%esp)
086527e7 +0x283:  lea    -0x24(%ebp),%eax
086527ea +0x286:  mov    %eax,(%esp)
086527ed +0x289:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086527f2 +0x28e:  mov    0xc(%ebp),%eax
086527f5 +0x291:  mov    %eax,0x4(%esp)
086527f9 +0x295:  lea    -0x24(%ebp),%eax
086527fc +0x298:  mov    %eax,(%esp)
086527ff +0x29b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08652804 +0x2a0:  mov    -0x18(%ebp),%eax
08652807 +0x2a3:  mov    -0x14(%ebp),%edx
0865280a +0x2a6:  mov    %edx,%ecx
0865280c +0x2a8:  sub    %eax,%ecx
0865280e +0x2aa:  mov    %ecx,%eax
08652810 +0x2ac:  mov    %eax,0x4(%esp)
08652814 +0x2b0:  lea    -0x24(%ebp),%eax
08652817 +0x2b3:  mov    %eax,(%esp)
0865281a +0x2b6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865281f +0x2bb:  mov    -0x2c(%ebp),%eax
08652822 +0x2be:  mov    %eax,0x4(%esp)
08652826 +0x2c2:  lea    -0x24(%ebp),%eax
08652829 +0x2c5:  mov    %eax,(%esp)
0865282c +0x2c8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08652831 +0x2cd:  movl   $0x1,0x4(%esp)
08652839 +0x2d5:  lea    -0x24(%ebp),%eax
0865283c +0x2d8:  mov    %eax,(%esp)
0865283f +0x2db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08652844 +0x2e0:  lea    -0x24(%ebp),%eax
08652847 +0x2e3:  mov    %eax,0x4(%esp)
0865284b +0x2e7:  mov    0x8(%ebp),%eax
0865284e +0x2ea:  mov    %eax,(%esp)
08652851 +0x2ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08652856 +0x2f2:  movl   $0x1,0xc(%esp)
0865285e +0x2fa:  movl   $0x2,0x8(%esp)
08652866 +0x302:  movl   $0x1,0x4(%esp)
0865286e +0x30a:  mov    0x8(%ebp),%eax
08652871 +0x30d:  mov    %eax,(%esp)
08652874 +0x310:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08652879 +0x315:  mov    0x8(%ebp),%eax
0865287c +0x318:  mov    %eax,(%esp)
0865287f +0x31b:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08652884 +0x320:  jmp    086528a1 <+0x33d>
08652886 +0x322:  mov    %edx,%ebx
08652888 +0x324:  mov    %eax,%esi
0865288a +0x326:  lea    -0x24(%ebp),%eax
0865288d +0x329:  mov    %eax,(%esp)
08652890 +0x32c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08652895 +0x331:  mov    %esi,%eax
08652897 +0x333:  mov    %ebx,%edx
08652899 +0x335:  mov    %eax,(%esp)
0865289c +0x338:  call   08ae3750 <_Unwind_Resume>
086528a1 +0x33d:  lea    -0x24(%ebp),%eax
086528a4 +0x340:  mov    %eax,(%esp)
086528a7 +0x343:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086528ac +0x348:  add    $0x70,%esp
086528af +0x34b:  pop    %ebx
086528b0 +0x34c:  pop    %esi
086528b1 +0x34d:  pop    %ebp
086528b2 +0x34e:  ret
086528b3 +0x34f:  nop
```

## 反编译 C

```c
// CUser::giveCharacLinkBonusExp @ 0x8652564

/* WARNING: Removing unreachable block (ram,0x08652713) */
/* WARNING: Type propagation algorithm not settling */
/* CUser::giveCharacLinkBonusExp(unsigned int) */

void __thiscall CUser::giveCharacLinkBonusExp(CUser *this,uint param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  SkillSlot *pSVar4;
  GameWorld *this_00;
  char *pcVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  char local_4e [30];
  int local_30 [2];
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  char local_11;
  uint local_10;
  
  PacketGuard::PacketGuard(local_28);
  local_30[1] = 0;
  local_30[0] = 0;
  uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
                    /* try { // try from 086525a4 to 08652883 has its CatchHandler @ 08652886 */
  local_1c = SkillSlot::get_remain_sp_at_index(pSVar4,uVar3);
  CUserCharacInfo::calcHelpAbuseRatio((uint)this,SUB41(param_1,0));
  local_11 = gain_exp_sp(this,param_1,local_30 + 1,local_30,3,0,1);
  uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  local_18 = SkillSlot::get_remain_sp_at_index(pSVar4,uVar3);
  if (local_11 != '\0') {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
    make_basic_info(this,(char *)local_28,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_28,this);
  }
  pcVar5 = local_4e;
  uVar9 = 0x1e;
  bVar10 = ((uint)pcVar5 & 2) != 0;
  if (bVar10) {
    local_4e[0] = '\0';
    local_4e[1] = '\0';
    pcVar5 = local_4e + 2;
    uVar9 = 0x1c;
  }
  uVar8 = 0;
  do {
    pcVar1 = pcVar5 + uVar8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar8 = uVar8 + 4;
  } while (uVar8 < (uVar9 & 0xfffffffc));
  if (!bVar10) {
    (pcVar5 + uVar8)[0] = '\0';
    (pcVar5 + uVar8)[1] = '\0';
  }
  cVar2 = CUserCharacInfo::getLinkCharacSlotIndex((CUserCharacInfo *)this);
  local_10 = (uint)cVar2;
  if (((int)local_10 < 0) ||
     (iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
     iVar6 <= (int)local_10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_10);
    strcpy(local_4e,(char *)(iVar6 + 4));
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x123);
  sVar7 = strlen(local_4e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,sVar7);
  sVar7 = strlen(local_4e);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,local_4e,sVar7);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_18 - local_1c);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_30[0]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  Send(this,local_28);
  SendNotiPacket(this,1,2,1);
  send_skill_info(this);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
