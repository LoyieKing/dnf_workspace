# _SendStraightVictories

`_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser`

`pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ec558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ec558  _ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser
#           pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*)
# range [0x082ec558, 0x082ec807]
082ec558 +0x000:  push   %ebp
082ec559 +0x001:  mov    %esp,%ebp
082ec55b +0x003:  push   %esi
082ec55c +0x004:  push   %ebx
082ec55d +0x005:  sub    $0x40,%esp
082ec560 +0x008:  lea    -0x38(%ebp),%eax
082ec563 +0x00b:  mov    %eax,(%esp)
082ec566 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ec56b +0x013:  movw   $0x0,-0x2a(%ebp)
082ec571 +0x019:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ec576 +0x01e:  mov    0xa680(%eax),%eax
082ec57c +0x024:  mov    %eax,-0x28(%ebp)
082ec57f +0x027:  cmpl   $0x0,0xc(%ebp)
082ec583 +0x02b:  je     082ec7f6 <+0x29e>
082ec589 +0x031:  mov    0xc(%ebp),%eax
082ec58c +0x034:  mov    %eax,(%esp)
082ec58f +0x037:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ec594 +0x03c:  mov    %eax,-0x24(%ebp)
082ec597 +0x03f:  cmpl   $0x0,-0x24(%ebp)
082ec59b +0x043:  je     082ec6de <+0x186>
082ec5a1 +0x049:  mov    -0x24(%ebp),%eax
082ec5a4 +0x04c:  mov    %eax,(%esp)
082ec5a7 +0x04f:  call   082f07fc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x580>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x580
082ec5ac +0x054:  mov    -0x24(%ebp),%eax
082ec5af +0x057:  mov    %eax,(%esp)
082ec5b2 +0x05a:  call   082f07ec <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x570>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x570
082ec5b7 +0x05f:  mov    %ax,-0x2a(%ebp)
082ec5bb +0x063:  movzwl -0x2a(%ebp),%eax
082ec5bf +0x067:  cmp    -0x28(%ebp),%eax
082ec5c2 +0x06a:  jl     082ec7f6 <+0x29e>
082ec5c8 +0x070:  movl   $0xe0,0x8(%esp)
082ec5d0 +0x078:  movl   $0x0,0x4(%esp)
082ec5d8 +0x080:  lea    -0x38(%ebp),%eax
082ec5db +0x083:  mov    %eax,(%esp)
082ec5de +0x086:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ec5e3 +0x08b:  mov    -0x24(%ebp),%eax
082ec5e6 +0x08e:  mov    %eax,(%esp)
082ec5e9 +0x091:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ec5ee +0x096:  mov    %eax,0x4(%esp)
082ec5f2 +0x09a:  lea    -0x38(%ebp),%eax
082ec5f5 +0x09d:  mov    %eax,(%esp)
082ec5f8 +0x0a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ec5fd +0x0a5:  movl   $0x0,-0x20(%ebp)
082ec604 +0x0ac:  jmp    082ec66f <+0x117>
082ec606 +0x0ae:  mov    -0x20(%ebp),%eax
082ec609 +0x0b1:  mov    %eax,0x4(%esp)
082ec60d +0x0b5:  mov    -0x24(%ebp),%eax
082ec610 +0x0b8:  mov    %eax,(%esp)
082ec613 +0x0bb:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
082ec618 +0x0c0:  mov    %eax,-0x1c(%ebp)
082ec61b +0x0c3:  cmpl   $0x0,-0x1c(%ebp)
082ec61f +0x0c7:  je     082ec66a <+0x112>
082ec621 +0x0c9:  mov    -0x1c(%ebp),%eax
082ec624 +0x0cc:  mov    %eax,(%esp)
082ec627 +0x0cf:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ec62c +0x0d4:  mov    %eax,-0x18(%ebp)
082ec62f +0x0d7:  mov    -0x18(%ebp),%eax
082ec632 +0x0da:  mov    %eax,(%esp)
082ec635 +0x0dd:  call   0807e3b0 <_init+0xca8>
082ec63a +0x0e2:  mov    %eax,-0x14(%ebp)
082ec63d +0x0e5:  mov    -0x14(%ebp),%eax
082ec640 +0x0e8:  mov    %eax,0x4(%esp)
082ec644 +0x0ec:  lea    -0x38(%ebp),%eax
082ec647 +0x0ef:  mov    %eax,(%esp)
082ec64a +0x0f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ec64f +0x0f7:  mov    -0x14(%ebp),%eax
082ec652 +0x0fa:  mov    %eax,0x8(%esp)
082ec656 +0x0fe:  mov    -0x18(%ebp),%eax
082ec659 +0x101:  mov    %eax,0x4(%esp)
082ec65d +0x105:  lea    -0x38(%ebp),%eax
082ec660 +0x108:  mov    %eax,(%esp)
082ec663 +0x10b:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082ec668 +0x110:  jmp    082ec66b <+0x113>
082ec66a +0x112:  nop
082ec66b +0x113:  addl   $0x1,-0x20(%ebp)
082ec66f +0x117:  cmpl   $0x3,-0x20(%ebp)
082ec673 +0x11b:  setle  %al
082ec676 +0x11e:  test   %al,%al
082ec678 +0x120:  jne    082ec606 <+0xae>
082ec67a +0x122:  movzwl -0x2a(%ebp),%eax
082ec67e +0x126:  mov    %eax,0x4(%esp)
082ec682 +0x12a:  lea    -0x38(%ebp),%eax
082ec685 +0x12d:  mov    %eax,(%esp)
082ec688 +0x130:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ec68d +0x135:  mov    0xc(%ebp),%eax
082ec690 +0x138:  mov    %eax,(%esp)
082ec693 +0x13b:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec698 +0x140:  movsbl %al,%eax
082ec69b +0x143:  mov    %eax,0x4(%esp)
082ec69f +0x147:  lea    -0x38(%ebp),%eax
082ec6a2 +0x14a:  mov    %eax,(%esp)
082ec6a5 +0x14d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ec6aa +0x152:  movl   $0x1,0x4(%esp)
082ec6b2 +0x15a:  lea    -0x38(%ebp),%eax
082ec6b5 +0x15d:  mov    %eax,(%esp)
082ec6b8 +0x160:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ec6bd +0x165:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ec6c2 +0x16a:  lea    -0x38(%ebp),%edx
082ec6c5 +0x16d:  mov    %edx,0x8(%esp)
082ec6c9 +0x171:  movl   $0x7,0x4(%esp)
082ec6d1 +0x179:  mov    %eax,(%esp)
082ec6d4 +0x17c:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
082ec6d9 +0x181:  jmp    082ec7f6 <+0x29e>
082ec6de +0x186:  mov    0xc(%ebp),%eax
082ec6e1 +0x189:  mov    %eax,(%esp)
082ec6e4 +0x18c:  call   082f0a36 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7ba>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7ba
082ec6e9 +0x191:  mov    0xc(%ebp),%eax
082ec6ec +0x194:  mov    %eax,(%esp)
082ec6ef +0x197:  call   082f0a12 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x796>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x796
082ec6f4 +0x19c:  mov    %ax,-0x2a(%ebp)
082ec6f8 +0x1a0:  movzwl -0x2a(%ebp),%eax
082ec6fc +0x1a4:  cmp    -0x28(%ebp),%eax
082ec6ff +0x1a7:  jl     082ec7f6 <+0x29e>
082ec705 +0x1ad:  movl   $0xe0,0x8(%esp)
082ec70d +0x1b5:  movl   $0x0,0x4(%esp)
082ec715 +0x1bd:  lea    -0x38(%ebp),%eax
082ec718 +0x1c0:  mov    %eax,(%esp)
082ec71b +0x1c3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ec720 +0x1c8:  movl   $0x1,0x4(%esp)
082ec728 +0x1d0:  lea    -0x38(%ebp),%eax
082ec72b +0x1d3:  mov    %eax,(%esp)
082ec72e +0x1d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ec733 +0x1db:  mov    0xc(%ebp),%eax
082ec736 +0x1de:  mov    %eax,(%esp)
082ec739 +0x1e1:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ec73e +0x1e6:  mov    %eax,-0x10(%ebp)
082ec741 +0x1e9:  mov    -0x10(%ebp),%eax
082ec744 +0x1ec:  mov    %eax,(%esp)
082ec747 +0x1ef:  call   0807e3b0 <_init+0xca8>
082ec74c +0x1f4:  mov    %eax,-0xc(%ebp)
082ec74f +0x1f7:  mov    -0xc(%ebp),%eax
082ec752 +0x1fa:  mov    %eax,0x4(%esp)
082ec756 +0x1fe:  lea    -0x38(%ebp),%eax
082ec759 +0x201:  mov    %eax,(%esp)
082ec75c +0x204:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ec761 +0x209:  mov    -0xc(%ebp),%eax
082ec764 +0x20c:  mov    %eax,0x8(%esp)
082ec768 +0x210:  mov    -0x10(%ebp),%eax
082ec76b +0x213:  mov    %eax,0x4(%esp)
082ec76f +0x217:  lea    -0x38(%ebp),%eax
082ec772 +0x21a:  mov    %eax,(%esp)
082ec775 +0x21d:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082ec77a +0x222:  movzwl -0x2a(%ebp),%eax
082ec77e +0x226:  mov    %eax,0x4(%esp)
082ec782 +0x22a:  lea    -0x38(%ebp),%eax
082ec785 +0x22d:  mov    %eax,(%esp)
082ec788 +0x230:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ec78d +0x235:  mov    0xc(%ebp),%eax
082ec790 +0x238:  mov    %eax,(%esp)
082ec793 +0x23b:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec798 +0x240:  movsbl %al,%eax
082ec79b +0x243:  mov    %eax,0x4(%esp)
082ec79f +0x247:  lea    -0x38(%ebp),%eax
082ec7a2 +0x24a:  mov    %eax,(%esp)
082ec7a5 +0x24d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ec7aa +0x252:  movl   $0x1,0x4(%esp)
082ec7b2 +0x25a:  lea    -0x38(%ebp),%eax
082ec7b5 +0x25d:  mov    %eax,(%esp)
082ec7b8 +0x260:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ec7bd +0x265:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ec7c2 +0x26a:  lea    -0x38(%ebp),%edx
082ec7c5 +0x26d:  mov    %edx,0x8(%esp)
082ec7c9 +0x271:  movl   $0x7,0x4(%esp)
082ec7d1 +0x279:  mov    %eax,(%esp)
082ec7d4 +0x27c:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
082ec7d9 +0x281:  jmp    082ec7f6 <+0x29e>
082ec7db +0x283:  mov    %edx,%ebx
082ec7dd +0x285:  mov    %eax,%esi
082ec7df +0x287:  lea    -0x38(%ebp),%eax
082ec7e2 +0x28a:  mov    %eax,(%esp)
082ec7e5 +0x28d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec7ea +0x292:  mov    %esi,%eax
082ec7ec +0x294:  mov    %ebx,%edx
082ec7ee +0x296:  mov    %eax,(%esp)
082ec7f1 +0x299:  call   08ae3750 <_Unwind_Resume>
082ec7f6 +0x29e:  lea    -0x38(%ebp),%eax
082ec7f9 +0x2a1:  mov    %eax,(%esp)
082ec7fc +0x2a4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec801 +0x2a9:  add    $0x40,%esp
082ec804 +0x2ac:  pop    %ebx
082ec805 +0x2ad:  pop    %esi
082ec806 +0x2ae:  pop    %ebp
082ec807 +0x2af:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendStraightVictories @ 0x82ec558

/* pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_SendStraightVictories(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  GameWorld *pGVar3;
  PacketGuard local_3c [14];
  ushort local_2e;
  int local_2c;
  CParty *local_28;
  int local_24;
  CUserCharacInfo *local_20;
  char *local_1c;
  size_t local_18;
  char *local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_3c);
  local_2e = 0;
                    /* try { // try from 082ec571 to 082ec7d8 has its CatchHandler @ 082ec7db */
  iVar2 = G_CDataManager();
  local_2c = *(int *)(iVar2 + 0xa680);
  if (param_1 != (CUser *)0x0) {
    local_28 = (CParty *)CUser::GetParty(param_1);
    if (local_28 == (CParty *)0x0) {
      CUserCharacInfo::incStraightVictories((CUserCharacInfo *)param_1);
      local_2e = CUserCharacInfo::getStraightVictories((CUserCharacInfo *)param_1);
      if (local_2c <= (int)(uint)local_2e) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
        local_14 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        local_10 = strlen(local_14);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_10);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_14,local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(uint)local_2e);
        cVar1 = CUser::getPowerSide(param_1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)cVar1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_vill(pGVar3,7,local_3c);
      }
    }
    else {
      CParty::incStraightVictories(local_28);
      local_2e = CParty::getStraightVictories(local_28);
      if (local_2c <= (int)(uint)local_2e) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe0);
        iVar2 = CParty::get_member_count(local_28);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,iVar2);
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          local_20 = (CUserCharacInfo *)CParty::get_user(local_28,local_24);
          if (local_20 != (CUserCharacInfo *)0x0) {
            local_1c = (char *)CUserCharacInfo::getCurCharacName(local_20);
            local_18 = strlen(local_1c);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_18);
            InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_1c,local_18);
          }
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(uint)local_2e);
        cVar1 = CUser::getPowerSide(param_1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)cVar1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_vill(pGVar3,7,local_3c);
      }
    }
  }
  PacketGuard::~PacketGuard(local_3c);
  return;
}
```
