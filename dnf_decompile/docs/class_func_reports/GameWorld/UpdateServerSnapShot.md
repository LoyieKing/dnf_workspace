# UpdateServerSnapShot

`_ZN9GameWorld20UpdateServerSnapShotEv`

`GameWorld::UpdateServerSnapShot()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d14d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d14d4  _ZN9GameWorld20UpdateServerSnapShotEv
#           GameWorld::UpdateServerSnapShot()
# range [0x086d14d4, 0x086d1763]
086d14d4 +0x000:  push   %ebp
086d14d5 +0x001:  mov    %esp,%ebp
086d14d7 +0x003:  push   %edi
086d14d8 +0x004:  push   %esi
086d14d9 +0x005:  push   %ebx
086d14da +0x006:  sub    $0xac,%esp
086d14e0 +0x00c:  mov    0x8(%ebp),%eax
086d14e3 +0x00f:  lea    0x134(%eax),%edx
086d14e9 +0x015:  lea    -0x50(%ebp),%eax
086d14ec +0x018:  mov    %edx,0x4(%esp)
086d14f0 +0x01c:  mov    %eax,(%esp)
086d14f3 +0x01f:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086d14f8 +0x024:  sub    $0x4,%esp
086d14fb +0x027:  jmp    086d1723 <+0x24f>
086d1500 +0x02c:  lea    -0x50(%ebp),%eax
086d1503 +0x02f:  mov    %eax,(%esp)
086d1506 +0x032:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086d150b +0x037:  mov    0x4(%eax),%eax
086d150e +0x03a:  mov    %eax,-0x24(%ebp)
086d1511 +0x03d:  cmpl   $0x0,-0x24(%ebp)
086d1515 +0x041:  je     086d1706 <+0x232>
086d151b +0x047:  mov    -0x24(%ebp),%eax
086d151e +0x04a:  mov    %eax,(%esp)
086d1521 +0x04d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086d1526 +0x052:  test   %eax,%eax
086d1528 +0x054:  setne  %al
086d152b +0x057:  test   %al,%al
086d152d +0x059:  je     086d1706 <+0x232>
086d1533 +0x05f:  mov    -0x24(%ebp),%eax
086d1536 +0x062:  mov    %eax,(%esp)
086d1539 +0x065:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086d153e +0x06a:  mov    %eax,-0x20(%ebp)
086d1541 +0x06d:  movl   $0x0,-0x1c(%ebp)
086d1548 +0x074:  cmpl   $0x0,-0x20(%ebp)
086d154c +0x078:  je     086d155f <+0x8b>
086d154e +0x07a:  mov    -0x20(%ebp),%eax
086d1551 +0x07d:  mov    %eax,(%esp)
086d1554 +0x080:  call   082a5a14 <_GLOBAL__I__ZN4CLog5this_E+0x1e3b>  ; global constructors keyed to CLog::this_+0x1e3b
086d1559 +0x085:  movzwl %ax,%eax
086d155c +0x088:  mov    %eax,-0x1c(%ebp)
086d155f +0x08b:  lea    -0x58(%ebp),%eax
086d1562 +0x08e:  mov    %eax,(%esp)
086d1565 +0x091:  call   086d4419 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2c4a>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2c4a
086d156a +0x096:  sub    $0x4,%esp
086d156d +0x099:  lea    -0x5c(%ebp),%eax
086d1570 +0x09c:  lea    -0x58(%ebp),%edx
086d1573 +0x09f:  mov    %edx,0x4(%esp)
086d1577 +0x0a3:  mov    %eax,(%esp)
086d157a +0x0a6:  call   080cde16 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2c63>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2c63
086d157f +0x0ab:  sub    $0x4,%esp
086d1582 +0x0ae:  lea    -0x44(%ebp),%eax
086d1585 +0x0b1:  lea    -0x58(%ebp),%edx
086d1588 +0x0b4:  mov    %edx,0x4(%esp)
086d158c +0x0b8:  mov    %eax,(%esp)
086d158f +0x0bb:  call   080ce4bc <_GLOBAL__I__ZN10BingoEventC2Ev+0x3309>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3309
086d1594 +0x0c0:  sub    $0x4,%esp
086d1597 +0x0c3:  lea    -0x48(%ebp),%eax
086d159a +0x0c6:  lea    -0x44(%ebp),%edx
086d159d +0x0c9:  mov    %edx,0x4(%esp)
086d15a1 +0x0cd:  mov    %eax,(%esp)
086d15a4 +0x0d0:  call   086d28b5 <_GLOBAL__I_MAX_VILLAGE_NUM+0x10e6>  ; global constructors keyed to MAX_VILLAGE_NUM+0x10e6
086d15a9 +0x0d5:  sub    $0x4,%esp
086d15ac +0x0d8:  lea    -0x48(%ebp),%eax
086d15af +0x0db:  mov    %eax,(%esp)
086d15b2 +0x0de:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086d15b7 +0x0e3:  mov    %eax,-0x80(%ebp)
086d15ba +0x0e6:  lea    -0x3c(%ebp),%eax
086d15bd +0x0e9:  lea    -0x5c(%ebp),%edx
086d15c0 +0x0ec:  mov    %edx,0x4(%esp)
086d15c4 +0x0f0:  mov    %eax,(%esp)
086d15c7 +0x0f3:  call   086d288c <_GLOBAL__I_MAX_VILLAGE_NUM+0x10bd>  ; global constructors keyed to MAX_VILLAGE_NUM+0x10bd
086d15cc +0x0f8:  sub    $0x4,%esp
086d15cf +0x0fb:  lea    -0x3c(%ebp),%eax
086d15d2 +0x0fe:  mov    %eax,(%esp)
086d15d5 +0x101:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086d15da +0x106:  mov    %eax,-0x7c(%ebp)
086d15dd +0x109:  mov    -0x24(%ebp),%eax
086d15e0 +0x10c:  mov    %eax,(%esp)
086d15e3 +0x10f:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086d15e8 +0x114:  mov    %eax,-0x78(%ebp)
086d15eb +0x117:  mov    -0x24(%ebp),%eax
086d15ee +0x11a:  mov    %eax,(%esp)
086d15f1 +0x11d:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
086d15f6 +0x122:  mov    %eax,-0x74(%ebp)
086d15f9 +0x125:  movl   $0x0,0x4(%esp)
086d1601 +0x12d:  mov    -0x24(%ebp),%eax
086d1604 +0x130:  mov    %eax,(%esp)
086d1607 +0x133:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086d160c +0x138:  mov    %eax,-0x70(%ebp)
086d160f +0x13b:  mov    -0x24(%ebp),%eax
086d1612 +0x13e:  mov    %eax,(%esp)
086d1615 +0x141:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086d161a +0x146:  movsbl %al,%eax
086d161d +0x149:  mov    %eax,-0x6c(%ebp)
086d1620 +0x14c:  mov    -0x24(%ebp),%eax
086d1623 +0x14f:  mov    %eax,(%esp)
086d1626 +0x152:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d162b +0x157:  mov    %eax,%edi
086d162d +0x159:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086d1632 +0x15e:  mov    %eax,(%esp)
086d1635 +0x161:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
086d163a +0x166:  mov    %eax,%esi
086d163c +0x168:  mov    -0x24(%ebp),%eax
086d163f +0x16b:  mov    %eax,(%esp)
086d1642 +0x16e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086d1647 +0x173:  mov    %eax,%ebx
086d1649 +0x175:  movl   $0x8,0xc(%esp)
086d1651 +0x17d:  movl   $0x1b61,0x8(%esp)
086d1659 +0x185:  movl   $&_ZZN9GameWorld20UpdateServerSnapShotEvE19__PRETTY_FUNCTION__,0x4(%esp)
086d1661 +0x18d:  lea    -0x38(%ebp),%eax
086d1664 +0x190:  mov    %eax,(%esp)
086d1667 +0x193:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086d166c +0x198:  mov    -0x80(%ebp),%eax
086d166f +0x19b:  mov    %eax,0x2c(%esp)
086d1673 +0x19f:  mov    -0x7c(%ebp),%eax
086d1676 +0x1a2:  mov    %eax,0x28(%esp)
086d167a +0x1a6:  mov    -0x78(%ebp),%eax
086d167d +0x1a9:  mov    %eax,0x24(%esp)
086d1681 +0x1ad:  mov    -0x74(%ebp),%eax
086d1684 +0x1b0:  mov    %eax,0x20(%esp)
086d1688 +0x1b4:  mov    -0x1c(%ebp),%eax
086d168b +0x1b7:  mov    %eax,0x1c(%esp)
086d168f +0x1bb:  mov    -0x70(%ebp),%eax
086d1692 +0x1be:  mov    %eax,0x18(%esp)
086d1696 +0x1c2:  mov    -0x6c(%ebp),%eax
086d1699 +0x1c5:  mov    %eax,0x14(%esp)
086d169d +0x1c9:  mov    %edi,0x10(%esp)
086d16a1 +0x1cd:  mov    %esi,0xc(%esp)
086d16a5 +0x1d1:  mov    %ebx,0x8(%esp)
086d16a9 +0x1d5:  movl   $"%u,%d,%u,%d,%d,%d,%d,%d,%s %s",0x4(%esp)
086d16b1 +0x1dd:  lea    -0x38(%ebp),%eax
086d16b4 +0x1e0:  mov    %eax,(%esp)
086d16b7 +0x1e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086d16bc +0x1e8:  jmp    086d16d3 <+0x1ff>
086d16be +0x1ea:  mov    %edx,%ebx
086d16c0 +0x1ec:  mov    %eax,%esi
086d16c2 +0x1ee:  lea    -0x3c(%ebp),%eax
086d16c5 +0x1f1:  mov    %eax,(%esp)
086d16c8 +0x1f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d16cd +0x1f9:  mov    %esi,%eax
086d16cf +0x1fb:  mov    %ebx,%edx
086d16d1 +0x1fd:  jmp    086d16e0 <+0x20c>
086d16d3 +0x1ff:  lea    -0x3c(%ebp),%eax
086d16d6 +0x202:  mov    %eax,(%esp)
086d16d9 +0x205:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d16de +0x20a:  jmp    086d16fb <+0x227>
086d16e0 +0x20c:  mov    %edx,%ebx
086d16e2 +0x20e:  mov    %eax,%esi
086d16e4 +0x210:  lea    -0x48(%ebp),%eax
086d16e7 +0x213:  mov    %eax,(%esp)
086d16ea +0x216:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d16ef +0x21b:  mov    %esi,%eax
086d16f1 +0x21d:  mov    %ebx,%edx
086d16f3 +0x21f:  mov    %eax,(%esp)
086d16f6 +0x222:  call   08ae3750 <_Unwind_Resume>
086d16fb +0x227:  lea    -0x48(%ebp),%eax
086d16fe +0x22a:  mov    %eax,(%esp)
086d1701 +0x22d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d1706 +0x232:  lea    -0x28(%ebp),%eax
086d1709 +0x235:  movl   $0x0,0x8(%esp)
086d1711 +0x23d:  lea    -0x50(%ebp),%edx
086d1714 +0x240:  mov    %edx,0x4(%esp)
086d1718 +0x244:  mov    %eax,(%esp)
086d171b +0x247:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086d1720 +0x24c:  sub    $0x4,%esp
086d1723 +0x24f:  mov    0x8(%ebp),%eax
086d1726 +0x252:  lea    0x134(%eax),%edx
086d172c +0x258:  lea    -0x4c(%ebp),%eax
086d172f +0x25b:  mov    %edx,0x4(%esp)
086d1733 +0x25f:  mov    %eax,(%esp)
086d1736 +0x262:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086d173b +0x267:  sub    $0x4,%esp
086d173e +0x26a:  lea    -0x4c(%ebp),%eax
086d1741 +0x26d:  mov    %eax,0x4(%esp)
086d1745 +0x271:  lea    -0x50(%ebp),%eax
086d1748 +0x274:  mov    %eax,(%esp)
086d174b +0x277:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086d1750 +0x27c:  test   %al,%al
086d1752 +0x27e:  jne    086d1500 <+0x2c>
086d1758 +0x284:  lea    -0xc(%ebp),%esp
086d175b +0x287:  add    $0x0,%esp
086d175e +0x28a:  pop    %ebx
086d175f +0x28b:  pop    %esi
086d1760 +0x28c:  pop    %edi
086d1761 +0x28d:  pop    %ebp
086d1762 +0x28e:  ret
086d1763 +0x28f:  nop
```

## 反编译 C

```c
// GameWorld::UpdateServerSnapShot @ 0x86d14d4

/* GameWorld::UpdateServerSnapShot() */

void GameWorld::UpdateServerSnapShot(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CEnvironment *this;
  undefined4 uVar9;
  undefined4 uVar10;
  base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>
  local_60 [4];
  second_clock<boost::posix_time::ptime> local_5c [8];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_54 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_50 [4];
  posix_time local_4c [4];
  undefined1 local_48 [8];
  gregorian local_40 [4];
  cMyTrace local_3c [16];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_2c [4];
  CUser *local_28;
  CParty *local_24;
  uint local_20;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_54);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_50);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54,
                       (_Rb_tree_iterator *)local_50);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54);
    local_28 = *(CUser **)(iVar2 + 4);
    if (local_28 != (CUser *)0x0) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_28);
      if (iVar2 != 0) {
        local_24 = (CParty *)CUser::GetParty(local_28);
        local_20 = 0;
        if (local_24 != (CParty *)0x0) {
          local_20 = CParty::getDungIndex(local_24);
          local_20 = local_20 & 0xffff;
        }
        boost::date_time::second_clock<boost::posix_time::ptime>::local_time(local_5c);
        boost::date_time::
        base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>
        ::date(local_60);
        boost::date_time::
        base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>
        ::time_of_day();
        boost::posix_time::to_simple_string(local_4c,local_48);
                    /* try { // try from 086d15b2 to 086d15cb has its CatchHandler @ 086d16e0 */
        uVar3 = std::string::c_str((string *)local_4c);
        boost::gregorian::to_iso_extended_string(local_40,(date *)local_60);
                    /* try { // try from 086d15d5 to 086d16bb has its CatchHandler @ 086d16be */
        uVar4 = std::string::c_str((string *)local_40);
        uVar5 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)local_28);
        uVar6 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)local_28);
        uVar7 = CUser::get_area(local_28,false);
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_28);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_28);
        this = (CEnvironment *)G_CEnvironment();
        uVar9 = CEnvironment::get_server_group(this);
        uVar10 = CUser::get_acc_id(local_28);
        cMyTrace::cMyTrace(local_3c,"void GameWorld::UpdateServerSnapShot()",0x1b61,8);
        cMyTrace::operator()
                  (local_3c,"%u,%d,%u,%d,%d,%d,%d,%d,%s %s",uVar10,uVar9,uVar8,(int)cVar1,uVar7,
                   local_20,uVar6,uVar5,uVar4,uVar3);
                    /* try { // try from 086d16d9 to 086d16dd has its CatchHandler @ 086d16e0 */
        std::string::~string((string *)local_40);
        std::string::~string((string *)local_4c);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_2c,(int)local_54);
  }
  return;
}
```
