# OnMoveArea

`_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser`

`pvp_assault::CAssaultMgr::OnMoveArea(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef610  _ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser
#           pvp_assault::CAssaultMgr::OnMoveArea(CUser*)
# range [0x082ef610, 0x082ef817]
082ef610 +0x000:  push   %ebp
082ef611 +0x001:  mov    %esp,%ebp
082ef613 +0x003:  push   %esi
082ef614 +0x004:  push   %ebx
082ef615 +0x005:  sub    $0x40,%esp
082ef618 +0x008:  lea    -0x24(%ebp),%eax
082ef61b +0x00b:  mov    %eax,(%esp)
082ef61e +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ef623 +0x013:  movl   $0x86,0x8(%esp)
082ef62b +0x01b:  movl   $0x0,0x4(%esp)
082ef633 +0x023:  lea    -0x24(%ebp),%eax
082ef636 +0x026:  mov    %eax,(%esp)
082ef639 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ef63e +0x02e:  movl   $0x0,-0x28(%ebp)
082ef645 +0x035:  movl   $0x0,-0x14(%ebp)
082ef64c +0x03c:  lea    -0x24(%ebp),%eax
082ef64f +0x03f:  mov    %eax,(%esp)
082ef652 +0x042:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082ef657 +0x047:  mov    %eax,-0x28(%ebp)
082ef65a +0x04a:  mov    -0x14(%ebp),%eax
082ef65d +0x04d:  mov    %eax,0x4(%esp)
082ef661 +0x051:  lea    -0x24(%ebp),%eax
082ef664 +0x054:  mov    %eax,(%esp)
082ef667 +0x057:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082ef66c +0x05c:  mov    0x8(%ebp),%eax
082ef66f +0x05f:  lea    0x8(%eax),%edx
082ef672 +0x062:  lea    -0x2c(%ebp),%eax
082ef675 +0x065:  mov    %edx,0x4(%esp)
082ef679 +0x069:  mov    %eax,(%esp)
082ef67c +0x06c:  call   082f1c12 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1996>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1996
082ef681 +0x071:  sub    $0x4,%esp
082ef684 +0x074:  jmp    082ef74f <+0x13f>
082ef689 +0x079:  lea    -0x2c(%ebp),%eax
082ef68c +0x07c:  mov    %eax,(%esp)
082ef68f +0x07f:  call   082f1c90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a14>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a14
082ef694 +0x084:  mov    0x4(%eax),%eax
082ef697 +0x087:  mov    %eax,-0x10(%ebp)
082ef69a +0x08a:  cmpl   $0x0,-0x10(%ebp)
082ef69e +0x08e:  je     082ef744 <+0x134>
082ef6a4 +0x094:  movl   $0x0,0x4(%esp)
082ef6ac +0x09c:  mov    0xc(%ebp),%eax
082ef6af +0x09f:  mov    %eax,(%esp)
082ef6b2 +0x0a2:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082ef6b7 +0x0a7:  mov    %eax,%ebx
082ef6b9 +0x0a9:  mov    0xc(%ebp),%eax
082ef6bc +0x0ac:  mov    %eax,(%esp)
082ef6bf +0x0af:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ef6c4 +0x0b4:  movsbl %al,%eax
082ef6c7 +0x0b7:  mov    %ebx,0x8(%esp)
082ef6cb +0x0bb:  mov    %eax,0x4(%esp)
082ef6cf +0x0bf:  mov    -0x10(%ebp),%eax
082ef6d2 +0x0c2:  mov    %eax,(%esp)
082ef6d5 +0x0c5:  call   082f06ae <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x432>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x432
082ef6da +0x0ca:  test   %al,%al
082ef6dc +0x0cc:  je     082ef744 <+0x134>
082ef6de +0x0ce:  mov    0xc(%ebp),%eax
082ef6e1 +0x0d1:  mov    %eax,0x4(%esp)
082ef6e5 +0x0d5:  mov    -0x10(%ebp),%eax
082ef6e8 +0x0d8:  mov    %eax,(%esp)
082ef6eb +0x0db:  call   082e8366 <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser>  ; pvp_assault::CAssaultPlace::ExistUser(CUser*)
082ef6f0 +0x0e0:  xor    $0x1,%eax
082ef6f3 +0x0e3:  test   %al,%al
082ef6f5 +0x0e5:  je     082ef71d <+0x10d>
082ef6f7 +0x0e7:  mov    -0x10(%ebp),%eax
082ef6fa +0x0ea:  mov    %eax,(%esp)
082ef6fd +0x0ed:  call   082f06ea <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x46e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x46e
082ef702 +0x0f2:  test   %al,%al
082ef704 +0x0f4:  je     082ef71d <+0x10d>
082ef706 +0x0f6:  mov    -0x10(%ebp),%eax
082ef709 +0x0f9:  mov    %eax,(%esp)
082ef70c +0x0fc:  call   082f06fe <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x482>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x482
082ef711 +0x101:  cmp    $0x4,%eax
082ef714 +0x104:  jne    082ef71d <+0x10d>
082ef716 +0x106:  mov    $0x1,%eax
082ef71b +0x10b:  jmp    082ef722 <+0x112>
082ef71d +0x10d:  mov    $0x0,%eax
082ef722 +0x112:  test   %al,%al
082ef724 +0x114:  je     082ef744 <+0x134>
082ef726 +0x116:  movl   $0x1,0x8(%esp)
082ef72e +0x11e:  lea    -0x24(%ebp),%eax
082ef731 +0x121:  mov    %eax,0x4(%esp)
082ef735 +0x125:  mov    -0x10(%ebp),%eax
082ef738 +0x128:  mov    %eax,(%esp)
082ef73b +0x12b:  call   082e89c0 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb>  ; pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool)
082ef740 +0x130:  addl   $0x1,-0x14(%ebp)
082ef744 +0x134:  lea    -0x2c(%ebp),%eax
082ef747 +0x137:  mov    %eax,(%esp)
082ef74a +0x13a:  call   082f1c72 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19f6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19f6
082ef74f +0x13f:  mov    0x8(%ebp),%eax
082ef752 +0x142:  lea    0x8(%eax),%edx
082ef755 +0x145:  lea    -0x18(%ebp),%eax
082ef758 +0x148:  mov    %edx,0x4(%esp)
082ef75c +0x14c:  mov    %eax,(%esp)
082ef75f +0x14f:  call   082f1c38 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19bc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19bc
082ef764 +0x154:  sub    $0x4,%esp
082ef767 +0x157:  lea    -0x18(%ebp),%eax
082ef76a +0x15a:  mov    %eax,0x4(%esp)
082ef76e +0x15e:  lea    -0x2c(%ebp),%eax
082ef771 +0x161:  mov    %eax,(%esp)
082ef774 +0x164:  call   082f1c5e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19e2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19e2
082ef779 +0x169:  test   %al,%al
082ef77b +0x16b:  jne    082ef689 <+0x79>
082ef781 +0x171:  cmpl   $0x0,-0x14(%ebp)
082ef785 +0x175:  je     082ef7dc <+0x1cc>
082ef787 +0x177:  mov    -0x14(%ebp),%eax
082ef78a +0x17a:  mov    %eax,0x8(%esp)
082ef78e +0x17e:  lea    -0x28(%ebp),%eax
082ef791 +0x181:  mov    %eax,0x4(%esp)
082ef795 +0x185:  lea    -0x24(%ebp),%eax
082ef798 +0x188:  mov    %eax,(%esp)
082ef79b +0x18b:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082ef7a0 +0x190:  movl   $0x1,0x4(%esp)
082ef7a8 +0x198:  lea    -0x24(%ebp),%eax
082ef7ab +0x19b:  mov    %eax,(%esp)
082ef7ae +0x19e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ef7b3 +0x1a3:  lea    -0x24(%ebp),%eax
082ef7b6 +0x1a6:  mov    %eax,0x4(%esp)
082ef7ba +0x1aa:  mov    0xc(%ebp),%eax
082ef7bd +0x1ad:  mov    %eax,(%esp)
082ef7c0 +0x1b0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ef7c5 +0x1b5:  jmp    082ef7dc <+0x1cc>
082ef7c7 +0x1b7:  mov    %edx,%ebx
082ef7c9 +0x1b9:  mov    %eax,%esi
082ef7cb +0x1bb:  lea    -0x24(%ebp),%eax
082ef7ce +0x1be:  mov    %eax,(%esp)
082ef7d1 +0x1c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef7d6 +0x1c6:  mov    %esi,%eax
082ef7d8 +0x1c8:  mov    %ebx,%edx
082ef7da +0x1ca:  jmp    082ef7e9 <+0x1d9>
082ef7dc +0x1cc:  lea    -0x24(%ebp),%eax
082ef7df +0x1cf:  mov    %eax,(%esp)
082ef7e2 +0x1d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ef7e7 +0x1d7:  jmp    082ef808 <+0x1f8>
082ef7e9 +0x1d9:  cmp    $0x1,%edx
082ef7ec +0x1dc:  je     082ef7f6 <+0x1e6>
082ef7ee +0x1de:  mov    %eax,(%esp)
082ef7f1 +0x1e1:  call   08ae3750 <_Unwind_Resume>
082ef7f6 +0x1e6:  mov    %eax,(%esp)
082ef7f9 +0x1e9:  call   08725ce0 <__cxa_begin_catch>
082ef7fe +0x1ee:  mov    (%eax),%eax
082ef800 +0x1f0:  mov    %eax,-0xc(%ebp)
082ef803 +0x1f3:  call   08725c30 <__cxa_end_catch>
082ef808 +0x1f8:  mov    $0x1,%eax
082ef80d +0x1fd:  lea    -0x8(%ebp),%esp
082ef810 +0x200:  add    $0x0,%esp
082ef813 +0x203:  pop    %ebx
082ef814 +0x204:  pop    %esi
082ef815 +0x205:  pop    %ebp
082ef816 +0x206:  ret
082ef817 +0x207:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnMoveArea @ 0x82ef610

/* pvp_assault::CAssaultMgr::OnMoveArea(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnMoveArea(CAssaultMgr *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_1c [4];
  int local_18;
  CAssaultPlace *local_14;
  
                    /* try { // try from 082ef61e to 082ef622 has its CatchHandler @ 082ef7e9 */
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082ef639 to 082ef7c4 has its CatchHandler @ 082ef7c7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x86);
  local_2c = 0;
  local_18 = 0;
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_18);
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::begin(local_30);
  do {
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_30,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      if (local_18 != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_2c,local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
      }
                    /* try { // try from 082ef7e2 to 082ef7e6 has its CatchHandler @ 082ef7e9 */
      PacketGuard::~PacketGuard(local_28);
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_30);
    local_14 = *(CAssaultPlace **)(iVar3 + 4);
    if (local_14 != (CAssaultPlace *)0x0) {
      iVar3 = CUser::get_area(param_1,false);
      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      cVar2 = CAssaultPlace::IsArea(local_14,(int)cVar2,iVar3);
      if (cVar2 != '\0') {
        cVar2 = CAssaultPlace::ExistUser(local_14,param_1);
        if (cVar2 == '\x01') {
LAB_082ef71d:
          bVar1 = false;
        }
        else {
          cVar2 = CAssaultPlace::CheckPlayable(local_14);
          if (cVar2 == '\0') goto LAB_082ef71d;
          iVar3 = CAssaultPlace::GetState(local_14);
          if (iVar3 != 4) goto LAB_082ef71d;
          bVar1 = true;
        }
        if (bVar1) {
          CAssaultPlace::MakeViewAssaultIconOnePlayer(local_14,local_28,true);
          local_18 = local_18 + 1;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> *)
               local_30);
  } while( true );
}
```
