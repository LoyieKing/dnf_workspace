# send_teleport_effect_at_equal_place

`_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi`

`CPartyTelePort::send_teleport_effect_at_equal_place(int)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bc64c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc64c  _ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi
#           CPartyTelePort::send_teleport_effect_at_equal_place(int)
# range [0x085bc64c, 0x085bc86d]
085bc64c +0x000:  push   %ebp
085bc64d +0x001:  mov    %esp,%ebp
085bc64f +0x003:  push   %esi
085bc650 +0x004:  push   %ebx
085bc651 +0x005:  sub    $0x40,%esp
085bc654 +0x008:  mov    0x8(%ebp),%eax
085bc657 +0x00b:  mov    (%eax),%eax
085bc659 +0x00d:  test   %eax,%eax
085bc65b +0x00f:  je     085bc860 <+0x214>
085bc661 +0x015:  mov    0x8(%ebp),%eax
085bc664 +0x018:  mov    (%eax),%eax
085bc666 +0x01a:  mov    %eax,(%esp)
085bc669 +0x01d:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085bc66e +0x022:  mov    %eax,-0x1c(%ebp)
085bc671 +0x025:  cmpl   $0x0,-0x1c(%ebp)
085bc675 +0x029:  je     085bc863 <+0x217>
085bc67b +0x02f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bc680 +0x034:  mov    %eax,(%esp)
085bc683 +0x037:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085bc688 +0x03c:  test   %al,%al
085bc68a +0x03e:  jne    085bc866 <+0x21a>
085bc690 +0x044:  lea    -0x2c(%ebp),%eax
085bc693 +0x047:  mov    %eax,(%esp)
085bc696 +0x04a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bc69b +0x04f:  movl   $0x17b,0x8(%esp)
085bc6a3 +0x057:  movl   $0x0,0x4(%esp)
085bc6ab +0x05f:  lea    -0x2c(%ebp),%eax
085bc6ae +0x062:  mov    %eax,(%esp)
085bc6b1 +0x065:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085bc6b6 +0x06a:  mov    0xc(%ebp),%eax
085bc6b9 +0x06d:  movsbl %al,%eax
085bc6bc +0x070:  mov    %eax,0x4(%esp)
085bc6c0 +0x074:  lea    -0x2c(%ebp),%eax
085bc6c3 +0x077:  mov    %eax,(%esp)
085bc6c6 +0x07a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bc6cb +0x07f:  lea    -0x38(%ebp),%eax
085bc6ce +0x082:  mov    %eax,(%esp)
085bc6d1 +0x085:  call   08168420 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x281>  ; global constructors keyed to HeroMissionValue::clear()+0x281
085bc6d6 +0x08a:  movl   $0x0,-0x14(%ebp)
085bc6dd +0x091:  jmp    085bc73f <+0xf3>
085bc6df +0x093:  mov    0x8(%ebp),%eax
085bc6e2 +0x096:  mov    (%eax),%eax
085bc6e4 +0x098:  mov    -0x14(%ebp),%edx
085bc6e7 +0x09b:  mov    %edx,0x4(%esp)
085bc6eb +0x09f:  mov    %eax,(%esp)
085bc6ee +0x0a2:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bc6f3 +0x0a7:  xor    $0x1,%eax
085bc6f6 +0x0aa:  test   %al,%al
085bc6f8 +0x0ac:  jne    085bc73a <+0xee>
085bc6fa +0x0ae:  mov    0x8(%ebp),%eax
085bc6fd +0x0b1:  mov    (%eax),%eax
085bc6ff +0x0b3:  mov    -0x14(%ebp),%edx
085bc702 +0x0b6:  mov    %edx,0x4(%esp)
085bc706 +0x0ba:  mov    %eax,(%esp)
085bc709 +0x0bd:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bc70e +0x0c2:  mov    %eax,-0x10(%ebp)
085bc711 +0x0c5:  cmpl   $0x0,-0x10(%ebp)
085bc715 +0x0c9:  je     085bc73b <+0xef>
085bc717 +0x0cb:  mov    -0x10(%ebp),%eax
085bc71a +0x0ce:  mov    %eax,(%esp)
085bc71d +0x0d1:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085bc722 +0x0d6:  mov    %ax,-0x1e(%ebp)
085bc726 +0x0da:  lea    -0x1e(%ebp),%eax
085bc729 +0x0dd:  mov    %eax,0x4(%esp)
085bc72d +0x0e1:  lea    -0x38(%ebp),%eax
085bc730 +0x0e4:  mov    %eax,(%esp)
085bc733 +0x0e7:  call   085c05ee <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b4c>  ; global constructors keyed to CParty::cMember::cMember()+0x1b4c
085bc738 +0x0ec:  jmp    085bc73b <+0xef>
085bc73a +0x0ee:  nop
085bc73b +0x0ef:  addl   $0x1,-0x14(%ebp)
085bc73f +0x0f3:  cmpl   $0x3,-0x14(%ebp)
085bc743 +0x0f7:  setle  %al
085bc746 +0x0fa:  test   %al,%al
085bc748 +0x0fc:  jne    085bc6df <+0x93>
085bc74a +0x0fe:  lea    -0x38(%ebp),%eax
085bc74d +0x101:  mov    %eax,(%esp)
085bc750 +0x104:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
085bc755 +0x109:  mov    %al,-0x15(%ebp)
085bc758 +0x10c:  movsbl -0x15(%ebp),%eax
085bc75c +0x110:  mov    %eax,0x4(%esp)
085bc760 +0x114:  lea    -0x2c(%ebp),%eax
085bc763 +0x117:  mov    %eax,(%esp)
085bc766 +0x11a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bc76b +0x11f:  movl   $0x0,-0xc(%ebp)
085bc772 +0x126:  jmp    085bc79f <+0x153>
085bc774 +0x128:  mov    -0xc(%ebp),%eax
085bc777 +0x12b:  mov    %eax,0x4(%esp)
085bc77b +0x12f:  lea    -0x38(%ebp),%eax
085bc77e +0x132:  mov    %eax,(%esp)
085bc781 +0x135:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
085bc786 +0x13a:  movzwl (%eax),%eax
085bc789 +0x13d:  movzwl %ax,%eax
085bc78c +0x140:  mov    %eax,0x4(%esp)
085bc790 +0x144:  lea    -0x2c(%ebp),%eax
085bc793 +0x147:  mov    %eax,(%esp)
085bc796 +0x14a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bc79b +0x14f:  addl   $0x1,-0xc(%ebp)
085bc79f +0x153:  movsbl -0x15(%ebp),%eax
085bc7a3 +0x157:  cmp    -0xc(%ebp),%eax
085bc7a6 +0x15a:  setg   %al
085bc7a9 +0x15d:  test   %al,%al
085bc7ab +0x15f:  jne    085bc774 <+0x128>
085bc7ad +0x161:  movl   $0x1,0x4(%esp)
085bc7b5 +0x169:  lea    -0x2c(%ebp),%eax
085bc7b8 +0x16c:  mov    %eax,(%esp)
085bc7bb +0x16f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085bc7c0 +0x174:  mov    -0x1c(%ebp),%eax
085bc7c3 +0x177:  mov    %eax,(%esp)
085bc7c6 +0x17a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085bc7cb +0x17f:  cmp    $0x3,%eax
085bc7ce +0x182:  sete   %al
085bc7d1 +0x185:  test   %al,%al
085bc7d3 +0x187:  je     085bc82b <+0x1df>
085bc7d5 +0x189:  movl   $0x0,0x4(%esp)
085bc7dd +0x191:  mov    -0x1c(%ebp),%eax
085bc7e0 +0x194:  mov    %eax,(%esp)
085bc7e3 +0x197:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085bc7e8 +0x19c:  mov    %eax,%ebx
085bc7ea +0x19e:  mov    -0x1c(%ebp),%eax
085bc7ed +0x1a1:  mov    %eax,(%esp)
085bc7f0 +0x1a4:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085bc7f5 +0x1a9:  movsbl %al,%esi
085bc7f8 +0x1ac:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bc7fd +0x1b1:  lea    -0x2c(%ebp),%edx
085bc800 +0x1b4:  mov    %edx,0xc(%esp)
085bc804 +0x1b8:  mov    %ebx,0x8(%esp)
085bc808 +0x1bc:  mov    %esi,0x4(%esp)
085bc80c +0x1c0:  mov    %eax,(%esp)
085bc80f +0x1c3:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
085bc814 +0x1c8:  jmp    085bc82b <+0x1df>
085bc816 +0x1ca:  mov    %edx,%ebx
085bc818 +0x1cc:  mov    %eax,%esi
085bc81a +0x1ce:  lea    -0x38(%ebp),%eax
085bc81d +0x1d1:  mov    %eax,(%esp)
085bc820 +0x1d4:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
085bc825 +0x1d9:  mov    %esi,%eax
085bc827 +0x1db:  mov    %ebx,%edx
085bc829 +0x1dd:  jmp    085bc838 <+0x1ec>
085bc82b +0x1df:  lea    -0x38(%ebp),%eax
085bc82e +0x1e2:  mov    %eax,(%esp)
085bc831 +0x1e5:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
085bc836 +0x1ea:  jmp    085bc853 <+0x207>
085bc838 +0x1ec:  mov    %edx,%ebx
085bc83a +0x1ee:  mov    %eax,%esi
085bc83c +0x1f0:  lea    -0x2c(%ebp),%eax
085bc83f +0x1f3:  mov    %eax,(%esp)
085bc842 +0x1f6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bc847 +0x1fb:  mov    %esi,%eax
085bc849 +0x1fd:  mov    %ebx,%edx
085bc84b +0x1ff:  mov    %eax,(%esp)
085bc84e +0x202:  call   08ae3750 <_Unwind_Resume>
085bc853 +0x207:  lea    -0x2c(%ebp),%eax
085bc856 +0x20a:  mov    %eax,(%esp)
085bc859 +0x20d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bc85e +0x212:  jmp    085bc867 <+0x21b>
085bc860 +0x214:  nop
085bc861 +0x215:  jmp    085bc867 <+0x21b>
085bc863 +0x217:  nop
085bc864 +0x218:  jmp    085bc867 <+0x21b>
085bc866 +0x21a:  nop
085bc867 +0x21b:  add    $0x40,%esp
085bc86a +0x21e:  pop    %ebx
085bc86b +0x21f:  pop    %esi
085bc86c +0x220:  pop    %ebp
085bc86d +0x221:  ret
```

## 反编译 C

```c
// CPartyTelePort::send_teleport_effect_at_equal_place @ 0x85bc64c

/* CPartyTelePort::send_teleport_effect_at_equal_place(int) */

void __thiscall
CPartyTelePort::send_teleport_effect_at_equal_place(CPartyTelePort *this,int param_1)

{
  char cVar1;
  GameWorld *pGVar2;
  ushort *puVar3;
  int iVar4;
  vector<unsigned_short,std::allocator<unsigned_short>> local_3c [12];
  PacketGuard local_30 [14];
  ushort local_22;
  CUser *local_20;
  char local_19;
  int local_18;
  CUser *local_14;
  uint local_10;
  
  if ((*(int *)this != 0) &&
     (local_20 = (CUser *)CParty::getManager(*(CParty **)this), local_20 != (CUser *)0x0)) {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPVPChannel(pGVar2);
    if (cVar1 == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 085bc6b1 to 085bc6d5 has its CatchHandler @ 085bc838 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x17b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)(char)param_1);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::vector(local_3c);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
                    /* try { // try from 085bc6ee to 085bc813 has its CatchHandler @ 085bc816 */
        cVar1 = CParty::checkValidUser(*(CParty **)this,local_18);
        if ((cVar1 == '\x01') &&
           (local_14 = (CUser *)CParty::get_user(*(CParty **)this,local_18),
           local_14 != (CUser *)0x0)) {
          local_22 = CUser::get_unique_id(local_14);
          std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back(local_3c,&local_22);
        }
      }
      local_19 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size(local_3c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_19);
      for (local_10 = 0; (int)local_10 < (int)local_19; local_10 = local_10 + 1) {
        puVar3 = (ushort *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           (local_3c,local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)*puVar3);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      iVar4 = CUser::get_state(local_20);
      if (iVar4 == 3) {
        iVar4 = CUser::get_area(local_20,false);
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_20);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_area(pGVar2,(int)cVar1,iVar4,local_30);
      }
                    /* try { // try from 085bc831 to 085bc835 has its CatchHandler @ 085bc838 */
      std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector(local_3c);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return;
}
```
