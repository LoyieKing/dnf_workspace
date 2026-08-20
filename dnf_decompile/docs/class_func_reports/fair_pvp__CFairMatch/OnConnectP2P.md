# OnConnectP2P

`_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci`

`fair_pvp::CFairMatch::OnConnectP2P(CUser*, PvP_Room*, char*, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564a8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564a8e  _ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci
#           fair_pvp::CFairMatch::OnConnectP2P(CUser*, PvP_Room*, char*, int)
# range [0x08564a8e, 0x08564d39]
08564a8e +0x000:  push   %ebp
08564a8f +0x001:  mov    %esp,%ebp
08564a91 +0x003:  push   %esi
08564a92 +0x004:  push   %ebx
08564a93 +0x005:  sub    $0x30,%esp
08564a96 +0x008:  mov    0x8(%ebp),%eax
08564a99 +0x00b:  mov    0x4(%eax),%eax
08564a9c +0x00e:  cmp    $0x4,%eax
08564a9f +0x011:  je     08564af4 <+0x66>
08564aa1 +0x013:  movl   $0x2,0x8(%esp)
08564aa9 +0x01b:  movl   $0x4,0x4(%esp)
08564ab1 +0x023:  mov    0x8(%ebp),%eax
08564ab4 +0x026:  mov    %eax,(%esp)
08564ab7 +0x029:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08564abc +0x02e:  mov    0x8(%ebp),%eax
08564abf +0x031:  movl   $0x0,0x4(%eax)
08564ac6 +0x038:  mov    0x10(%ebp),%eax
08564ac9 +0x03b:  mov    %eax,(%esp)
08564acc +0x03e:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
08564ad1 +0x043:  movl   $0x0,0xc(%esp)
08564ad9 +0x04b:  mov    %eax,0x8(%esp)
08564add +0x04f:  mov    0x10(%ebp),%eax
08564ae0 +0x052:  mov    %eax,0x4(%esp)
08564ae4 +0x056:  mov    0x8(%ebp),%eax
08564ae7 +0x059:  mov    %eax,(%esp)
08564aea +0x05c:  call   08564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
08564aef +0x061:  jmp    08564d33 <+0x2a5>
08564af4 +0x066:  movl   $0x0,-0x1c(%ebp)
08564afb +0x06d:  jmp    08564b47 <+0xb9>
08564afd +0x06f:  mov    -0x1c(%ebp),%eax
08564b00 +0x072:  add    0x14(%ebp),%eax
08564b03 +0x075:  movzbl (%eax),%eax
08564b06 +0x078:  test   %al,%al
08564b08 +0x07a:  jne    08564b43 <+0xb5>
08564b0a +0x07c:  movl   $0x2,0x8(%esp)
08564b12 +0x084:  movl   $0x4,0x4(%esp)
08564b1a +0x08c:  mov    0x8(%ebp),%eax
08564b1d +0x08f:  mov    %eax,(%esp)
08564b20 +0x092:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08564b25 +0x097:  mov    0x8(%ebp),%eax
08564b28 +0x09a:  mov    (%eax),%eax
08564b2a +0x09c:  add    $0x40,%eax
08564b2d +0x09f:  mov    (%eax),%edx
08564b2f +0x0a1:  mov    0x10(%ebp),%eax
08564b32 +0x0a4:  mov    %eax,0x4(%esp)
08564b36 +0x0a8:  mov    0x8(%ebp),%eax
08564b39 +0x0ab:  mov    %eax,(%esp)
08564b3c +0x0ae:  call   *%edx
08564b3e +0x0b0:  jmp    08564d33 <+0x2a5>
08564b43 +0x0b5:  addl   $0x1,-0x1c(%ebp)
08564b47 +0x0b9:  cmpl   $0x7,-0x1c(%ebp)
08564b4b +0x0bd:  jg     08564b5c <+0xce>
08564b4d +0x0bf:  mov    -0x1c(%ebp),%eax
08564b50 +0x0c2:  cmp    0x18(%ebp),%eax
08564b53 +0x0c5:  jge    08564b5c <+0xce>
08564b55 +0x0c7:  mov    $0x1,%eax
08564b5a +0x0cc:  jmp    08564b61 <+0xd3>
08564b5c +0x0ce:  mov    $0x0,%eax
08564b61 +0x0d3:  test   %al,%al
08564b63 +0x0d5:  jne    08564afd <+0x6f>
08564b65 +0x0d7:  mov    0x8(%ebp),%eax
08564b68 +0x0da:  mov    0xac(%eax),%eax
08564b6e +0x0e0:  lea    0x1(%eax),%edx
08564b71 +0x0e3:  mov    0x8(%ebp),%eax
08564b74 +0x0e6:  mov    %edx,0xac(%eax)
08564b7a +0x0ec:  mov    0x8(%ebp),%eax
08564b7d +0x0ef:  mov    0xac(%eax),%ebx
08564b83 +0x0f5:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08564b88 +0x0fa:  movzbl %al,%eax
08564b8b +0x0fd:  add    %eax,%eax
08564b8d +0x0ff:  cmp    %eax,%ebx
08564b8f +0x101:  sete   %al
08564b92 +0x104:  test   %al,%al
08564b94 +0x106:  je     08564d33 <+0x2a5>
08564b9a +0x10c:  lea    -0x28(%ebp),%eax
08564b9d +0x10f:  mov    %eax,(%esp)
08564ba0 +0x112:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08564ba5 +0x117:  movl   $0x117,0x8(%esp)
08564bad +0x11f:  movl   $0x0,0x4(%esp)
08564bb5 +0x127:  lea    -0x28(%ebp),%eax
08564bb8 +0x12a:  mov    %eax,(%esp)
08564bbb +0x12d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08564bc0 +0x132:  movl   $0x1,0x4(%esp)
08564bc8 +0x13a:  lea    -0x28(%ebp),%eax
08564bcb +0x13d:  mov    %eax,(%esp)
08564bce +0x140:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08564bd3 +0x145:  movl   $0x0,-0x18(%ebp)
08564bda +0x14c:  jmp    08564c62 <+0x1d4>
08564bdf +0x151:  movl   $0x0,-0x14(%ebp)
08564be6 +0x158:  jmp    08564c53 <+0x1c5>
08564be8 +0x15a:  mov    -0x18(%ebp),%edx
08564beb +0x15d:  mov    -0x14(%ebp),%eax
08564bee +0x160:  mov    0x8(%ebp),%ecx
08564bf1 +0x163:  mov    %eax,%ebx
08564bf3 +0x165:  shl    $0x4,%ebx
08564bf6 +0x168:  mov    %edx,%eax
08564bf8 +0x16a:  shl    $0x3,%eax
08564bfb +0x16d:  add    %edx,%eax
08564bfd +0x16f:  shl    $0x3,%eax
08564c00 +0x172:  lea    (%ebx,%eax,1),%eax
08564c03 +0x175:  lea    (%ecx,%eax,1),%eax
08564c06 +0x178:  add    $0x24,%eax
08564c09 +0x17b:  mov    (%eax),%eax
08564c0b +0x17d:  mov    %eax,-0x10(%ebp)
08564c0e +0x180:  mov    -0x18(%ebp),%edx
08564c11 +0x183:  mov    -0x14(%ebp),%eax
08564c14 +0x186:  mov    0x8(%ebp),%ecx
08564c17 +0x189:  mov    %eax,%ebx
08564c19 +0x18b:  shl    $0x4,%ebx
08564c1c +0x18e:  mov    %edx,%eax
08564c1e +0x190:  shl    $0x3,%eax
08564c21 +0x193:  add    %edx,%eax
08564c23 +0x195:  shl    $0x3,%eax
08564c26 +0x198:  lea    (%ebx,%eax,1),%eax
08564c29 +0x19b:  lea    (%ecx,%eax,1),%eax
08564c2c +0x19e:  add    $0x10,%eax
08564c2f +0x1a1:  movzbl 0x18(%eax),%eax
08564c33 +0x1a5:  test   %al,%al
08564c35 +0x1a7:  je     08564c4f <+0x1c1>
08564c37 +0x1a9:  cmpl   $0x0,-0x10(%ebp)
08564c3b +0x1ad:  je     08564c4f <+0x1c1>
08564c3d +0x1af:  lea    -0x28(%ebp),%eax
08564c40 +0x1b2:  mov    %eax,0x4(%esp)
08564c44 +0x1b6:  mov    -0x10(%ebp),%eax
08564c47 +0x1b9:  mov    %eax,(%esp)
08564c4a +0x1bc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08564c4f +0x1c1:  addl   $0x1,-0x14(%ebp)
08564c53 +0x1c5:  cmpl   $0x3,-0x14(%ebp)
08564c57 +0x1c9:  setle  %al
08564c5a +0x1cc:  test   %al,%al
08564c5c +0x1ce:  jne    08564be8 <+0x15a>
08564c5e +0x1d0:  addl   $0x1,-0x18(%ebp)
08564c62 +0x1d4:  cmpl   $0x1,-0x18(%ebp)
08564c66 +0x1d8:  setle  %al
08564c69 +0x1db:  test   %al,%al
08564c6b +0x1dd:  jne    08564bdf <+0x151>
08564c71 +0x1e3:  lea    -0x28(%ebp),%eax
08564c74 +0x1e6:  mov    %eax,(%esp)
08564c77 +0x1e9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08564c7c +0x1ee:  mov    0x10(%ebp),%eax
08564c7f +0x1f1:  mov    %eax,(%esp)
08564c82 +0x1f4:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
08564c87 +0x1f9:  movl   $0x0,-0xc(%ebp)
08564c8e +0x200:  jmp    08564ccf <+0x241>
08564c90 +0x202:  mov    -0xc(%ebp),%eax
08564c93 +0x205:  mov    %eax,0x4(%esp)
08564c97 +0x209:  mov    0x10(%ebp),%eax
08564c9a +0x20c:  mov    %eax,(%esp)
08564c9d +0x20f:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08564ca2 +0x214:  test   %eax,%eax
08564ca4 +0x216:  setne  %al
08564ca7 +0x219:  test   %al,%al
08564ca9 +0x21b:  je     08564ccb <+0x23d>
08564cab +0x21d:  mov    0x10(%ebp),%eax
08564cae +0x220:  lea    0x620(%eax),%edx
08564cb4 +0x226:  movl   $0x1,0x8(%esp)
08564cbc +0x22e:  mov    -0xc(%ebp),%eax
08564cbf +0x231:  mov    %eax,0x4(%esp)
08564cc3 +0x235:  mov    %edx,(%esp)
08564cc6 +0x238:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
08564ccb +0x23d:  addl   $0x1,-0xc(%ebp)
08564ccf +0x241:  cmpl   $0x7,-0xc(%ebp)
08564cd3 +0x245:  setle  %al
08564cd6 +0x248:  test   %al,%al
08564cd8 +0x24a:  jne    08564c90 <+0x202>
08564cda +0x24c:  mov    0x10(%ebp),%eax
08564cdd +0x24f:  mov    %eax,(%esp)
08564ce0 +0x252:  call   085d8c3a <_ZN8PvP_Room9start_pvpEv>  ; PvP_Room::start_pvp()
08564ce5 +0x257:  lea    -0x28(%ebp),%eax
08564ce8 +0x25a:  mov    %eax,0x4(%esp)
08564cec +0x25e:  mov    0x10(%ebp),%eax
08564cef +0x261:  mov    %eax,(%esp)
08564cf2 +0x264:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
08564cf7 +0x269:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08564cfc +0x26e:  lea    -0x28(%ebp),%edx
08564cff +0x271:  mov    %edx,0x4(%esp)
08564d03 +0x275:  mov    %eax,(%esp)
08564d06 +0x278:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08564d0b +0x27d:  jmp    08564d28 <+0x29a>
08564d0d +0x27f:  mov    %edx,%ebx
08564d0f +0x281:  mov    %eax,%esi
08564d11 +0x283:  lea    -0x28(%ebp),%eax
08564d14 +0x286:  mov    %eax,(%esp)
08564d17 +0x289:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08564d1c +0x28e:  mov    %esi,%eax
08564d1e +0x290:  mov    %ebx,%edx
08564d20 +0x292:  mov    %eax,(%esp)
08564d23 +0x295:  call   08ae3750 <_Unwind_Resume>
08564d28 +0x29a:  lea    -0x28(%ebp),%eax
08564d2b +0x29d:  mov    %eax,(%esp)
08564d2e +0x2a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08564d33 +0x2a5:  add    $0x30,%esp
08564d36 +0x2a8:  pop    %ebx
08564d37 +0x2a9:  pop    %esi
08564d38 +0x2aa:  pop    %ebp
08564d39 +0x2ab:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnConnectP2P @ 0x8564a8e

/* fair_pvp::CFairMatch::OnConnectP2P(CUser*, PvP_Room*, char*, int) */

void __thiscall
fair_pvp::CFairMatch::OnConnectP2P
          (CFairMatch *this,CUser *param_1,PvP_Room *param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this_00;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  if (*(int *)(this + 4) == 4) {
    local_20 = 0;
    while( true ) {
      if ((local_20 < 8) && (local_20 < param_4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
        iVar2 = *(int *)(this + 0xac);
        uVar3 = GetPlayCountPerOneTeam();
        if (iVar2 != (uVar3 & 0xff) * 2) {
          return;
        }
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08564bbb to 08564d0a has its CatchHandler @ 08564d0d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x117);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
          for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
            local_14 = *(CUser **)(this + local_18 * 0x10 + local_1c * 0x48 + 0x24);
            if ((this[local_18 * 0x10 + local_1c * 0x48 + 0x28] != (CFairMatch)0x0) &&
               (local_14 != (CUser *)0x0)) {
              CUser::Send(local_14,local_2c);
            }
          }
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        PvP_Room::battle_reset(param_2);
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          iVar2 = PvP_Room::get_user_seat(param_2,local_10);
          if (iVar2 != 0) {
            CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_2 + 0x620),local_10,true);
          }
        }
        PvP_Room::start_pvp(param_2);
        PvP_Room::make_state_info(param_2,(char *)local_2c);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_2c);
        PacketGuard::~PacketGuard(local_2c);
        return;
      }
      if (param_3[local_20] == '\0') break;
      local_20 = local_20 + 1;
    }
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_2);
  }
  else {
    _SendMatchStatePacket(this,4,2);
    *(undefined4 *)(this + 4) = 0;
    iVar2 = PvP_Room::get_manager_team(param_2);
    _ReturnTeam(this,param_2,iVar2,(CUser *)0x0);
  }
  return;
}
```
