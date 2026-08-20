# OnConnectP2P

`_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci`

`online_preliminary::COnlinePreliminary::OnConnectP2P(CUser*, PvP_Room*, char*, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561b80  _ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci
#           online_preliminary::COnlinePreliminary::OnConnectP2P(CUser*, PvP_Room*, char*, int)
# range [0x08561b80, 0x08561ded]
08561b80 +0x000:  push   %ebp
08561b81 +0x001:  mov    %esp,%ebp
08561b83 +0x003:  push   %esi
08561b84 +0x004:  push   %ebx
08561b85 +0x005:  sub    $0x40,%esp
08561b88 +0x008:  mov    0x8(%ebp),%eax
08561b8b +0x00b:  mov    0x4(%eax),%eax
08561b8e +0x00e:  cmp    $0x4,%eax
08561b91 +0x011:  jne    08561de6 <+0x266>
08561b97 +0x017:  movl   $0x0,-0x1c(%ebp)
08561b9e +0x01e:  jmp    08561bea <+0x6a>
08561ba0 +0x020:  mov    -0x1c(%ebp),%eax
08561ba3 +0x023:  add    0x14(%ebp),%eax
08561ba6 +0x026:  movzbl (%eax),%eax
08561ba9 +0x029:  test   %al,%al
08561bab +0x02b:  jne    08561be6 <+0x66>
08561bad +0x02d:  movl   $0x2,0x8(%esp)
08561bb5 +0x035:  movl   $0x4,0x4(%esp)
08561bbd +0x03d:  mov    0x8(%ebp),%eax
08561bc0 +0x040:  mov    %eax,(%esp)
08561bc3 +0x043:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08561bc8 +0x048:  mov    0x8(%ebp),%eax
08561bcb +0x04b:  mov    (%eax),%eax
08561bcd +0x04d:  add    $0x40,%eax
08561bd0 +0x050:  mov    (%eax),%edx
08561bd2 +0x052:  mov    0x10(%ebp),%eax
08561bd5 +0x055:  mov    %eax,0x4(%esp)
08561bd9 +0x059:  mov    0x8(%ebp),%eax
08561bdc +0x05c:  mov    %eax,(%esp)
08561bdf +0x05f:  call   *%edx
08561be1 +0x061:  jmp    08561de7 <+0x267>
08561be6 +0x066:  addl   $0x1,-0x1c(%ebp)
08561bea +0x06a:  cmpl   $0x7,-0x1c(%ebp)
08561bee +0x06e:  jg     08561bff <+0x7f>
08561bf0 +0x070:  mov    -0x1c(%ebp),%eax
08561bf3 +0x073:  cmp    0x18(%ebp),%eax
08561bf6 +0x076:  jge    08561bff <+0x7f>
08561bf8 +0x078:  mov    $0x1,%eax
08561bfd +0x07d:  jmp    08561c04 <+0x84>
08561bff +0x07f:  mov    $0x0,%eax
08561c04 +0x084:  test   %al,%al
08561c06 +0x086:  jne    08561ba0 <+0x20>
08561c08 +0x088:  mov    0x8(%ebp),%eax
08561c0b +0x08b:  mov    0x6c(%eax),%eax
08561c0e +0x08e:  lea    0x1(%eax),%edx
08561c11 +0x091:  mov    0x8(%ebp),%eax
08561c14 +0x094:  mov    %edx,0x6c(%eax)
08561c17 +0x097:  mov    0x8(%ebp),%eax
08561c1a +0x09a:  mov    0x6c(%eax),%ebx
08561c1d +0x09d:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
08561c22 +0x0a2:  movzbl %al,%eax
08561c25 +0x0a5:  add    %eax,%eax
08561c27 +0x0a7:  cmp    %eax,%ebx
08561c29 +0x0a9:  sete   %al
08561c2c +0x0ac:  test   %al,%al
08561c2e +0x0ae:  je     08561d17 <+0x197>
08561c34 +0x0b4:  lea    -0x28(%ebp),%eax
08561c37 +0x0b7:  mov    %eax,(%esp)
08561c3a +0x0ba:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08561c3f +0x0bf:  movl   $0x117,0x8(%esp)
08561c47 +0x0c7:  movl   $0x0,0x4(%esp)
08561c4f +0x0cf:  lea    -0x28(%ebp),%eax
08561c52 +0x0d2:  mov    %eax,(%esp)
08561c55 +0x0d5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08561c5a +0x0da:  movl   $0x1,0x4(%esp)
08561c62 +0x0e2:  lea    -0x28(%ebp),%eax
08561c65 +0x0e5:  mov    %eax,(%esp)
08561c68 +0x0e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08561c6d +0x0ed:  movl   $0x0,-0x18(%ebp)
08561c74 +0x0f4:  jmp    08561ce4 <+0x164>
08561c76 +0x0f6:  movl   $0x0,-0x14(%ebp)
08561c7d +0x0fd:  jmp    08561cd5 <+0x155>
08561c7f +0x0ff:  mov    -0x18(%ebp),%edx
08561c82 +0x102:  mov    -0x14(%ebp),%ebx
08561c85 +0x105:  mov    0x8(%ebp),%ecx
08561c88 +0x108:  mov    %edx,%eax
08561c8a +0x10a:  shl    $0x2,%eax
08561c8d +0x10d:  add    %edx,%eax
08561c8f +0x10f:  add    %ebx,%eax
08561c91 +0x111:  add    $0x2,%eax
08561c94 +0x114:  mov    0x14(%ecx,%eax,8),%eax
08561c98 +0x118:  mov    %eax,-0x10(%ebp)
08561c9b +0x11b:  mov    -0x18(%ebp),%edx
08561c9e +0x11e:  mov    -0x14(%ebp),%ebx
08561ca1 +0x121:  mov    0x8(%ebp),%ecx
08561ca4 +0x124:  mov    %edx,%eax
08561ca6 +0x126:  shl    $0x2,%eax
08561ca9 +0x129:  add    %edx,%eax
08561cab +0x12b:  add    %ebx,%eax
08561cad +0x12d:  add    $0x2,%eax
08561cb0 +0x130:  movzbl 0x18(%ecx,%eax,8),%eax
08561cb5 +0x135:  test   %al,%al
08561cb7 +0x137:  je     08561cd1 <+0x151>
08561cb9 +0x139:  cmpl   $0x0,-0x10(%ebp)
08561cbd +0x13d:  je     08561cd1 <+0x151>
08561cbf +0x13f:  lea    -0x28(%ebp),%eax
08561cc2 +0x142:  mov    %eax,0x4(%esp)
08561cc6 +0x146:  mov    -0x10(%ebp),%eax
08561cc9 +0x149:  mov    %eax,(%esp)
08561ccc +0x14c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08561cd1 +0x151:  addl   $0x1,-0x14(%ebp)
08561cd5 +0x155:  cmpl   $0x3,-0x14(%ebp)
08561cd9 +0x159:  setle  %al
08561cdc +0x15c:  test   %al,%al
08561cde +0x15e:  jne    08561c7f <+0xff>
08561ce0 +0x160:  addl   $0x1,-0x18(%ebp)
08561ce4 +0x164:  cmpl   $0x1,-0x18(%ebp)
08561ce8 +0x168:  setle  %al
08561ceb +0x16b:  test   %al,%al
08561ced +0x16d:  jne    08561c76 <+0xf6>
08561cef +0x16f:  jmp    08561d0c <+0x18c>
08561cf1 +0x171:  mov    %edx,%ebx
08561cf3 +0x173:  mov    %eax,%esi
08561cf5 +0x175:  lea    -0x28(%ebp),%eax
08561cf8 +0x178:  mov    %eax,(%esp)
08561cfb +0x17b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561d00 +0x180:  mov    %esi,%eax
08561d02 +0x182:  mov    %ebx,%edx
08561d04 +0x184:  mov    %eax,(%esp)
08561d07 +0x187:  call   08ae3750 <_Unwind_Resume>
08561d0c +0x18c:  lea    -0x28(%ebp),%eax
08561d0f +0x18f:  mov    %eax,(%esp)
08561d12 +0x192:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561d17 +0x197:  lea    -0x34(%ebp),%eax
08561d1a +0x19a:  mov    %eax,(%esp)
08561d1d +0x19d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08561d22 +0x1a2:  lea    -0x34(%ebp),%eax
08561d25 +0x1a5:  mov    %eax,(%esp)
08561d28 +0x1a8:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08561d2d +0x1ad:  mov    0x10(%ebp),%eax
08561d30 +0x1b0:  mov    %eax,(%esp)
08561d33 +0x1b3:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
08561d38 +0x1b8:  movl   $0x0,-0xc(%ebp)
08561d3f +0x1bf:  jmp    08561d80 <+0x200>
08561d41 +0x1c1:  mov    -0xc(%ebp),%eax
08561d44 +0x1c4:  mov    %eax,0x4(%esp)
08561d48 +0x1c8:  mov    0x10(%ebp),%eax
08561d4b +0x1cb:  mov    %eax,(%esp)
08561d4e +0x1ce:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08561d53 +0x1d3:  test   %eax,%eax
08561d55 +0x1d5:  setne  %al
08561d58 +0x1d8:  test   %al,%al
08561d5a +0x1da:  je     08561d7c <+0x1fc>
08561d5c +0x1dc:  mov    0x10(%ebp),%eax
08561d5f +0x1df:  lea    0x620(%eax),%edx
08561d65 +0x1e5:  movl   $0x1,0x8(%esp)
08561d6d +0x1ed:  mov    -0xc(%ebp),%eax
08561d70 +0x1f0:  mov    %eax,0x4(%esp)
08561d74 +0x1f4:  mov    %edx,(%esp)
08561d77 +0x1f7:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
08561d7c +0x1fc:  addl   $0x1,-0xc(%ebp)
08561d80 +0x200:  cmpl   $0x7,-0xc(%ebp)
08561d84 +0x204:  setle  %al
08561d87 +0x207:  test   %al,%al
08561d89 +0x209:  jne    08561d41 <+0x1c1>
08561d8b +0x20b:  mov    0x10(%ebp),%eax
08561d8e +0x20e:  mov    %eax,(%esp)
08561d91 +0x211:  call   085d8c3a <_ZN8PvP_Room9start_pvpEv>  ; PvP_Room::start_pvp()
08561d96 +0x216:  lea    -0x34(%ebp),%eax
08561d99 +0x219:  mov    %eax,0x4(%esp)
08561d9d +0x21d:  mov    0x10(%ebp),%eax
08561da0 +0x220:  mov    %eax,(%esp)
08561da3 +0x223:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
08561da8 +0x228:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08561dad +0x22d:  lea    -0x34(%ebp),%edx
08561db0 +0x230:  mov    %edx,0x4(%esp)
08561db4 +0x234:  mov    %eax,(%esp)
08561db7 +0x237:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08561dbc +0x23c:  jmp    08561dd9 <+0x259>
08561dbe +0x23e:  mov    %edx,%ebx
08561dc0 +0x240:  mov    %eax,%esi
08561dc2 +0x242:  lea    -0x34(%ebp),%eax
08561dc5 +0x245:  mov    %eax,(%esp)
08561dc8 +0x248:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561dcd +0x24d:  mov    %esi,%eax
08561dcf +0x24f:  mov    %ebx,%edx
08561dd1 +0x251:  mov    %eax,(%esp)
08561dd4 +0x254:  call   08ae3750 <_Unwind_Resume>
08561dd9 +0x259:  lea    -0x34(%ebp),%eax
08561ddc +0x25c:  mov    %eax,(%esp)
08561ddf +0x25f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561de4 +0x264:  jmp    08561de7 <+0x267>
08561de6 +0x266:  nop
08561de7 +0x267:  add    $0x40,%esp
08561dea +0x26a:  pop    %ebx
08561deb +0x26b:  pop    %esi
08561dec +0x26c:  pop    %ebp
08561ded +0x26d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnConnectP2P @ 0x8561b80

/* online_preliminary::COnlinePreliminary::OnConnectP2P(CUser*, PvP_Room*, char*, int) */

void __thiscall
online_preliminary::COnlinePreliminary::OnConnectP2P
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,char *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  GameWorld *this_00;
  PacketGuard local_38 [12];
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
        *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
        iVar3 = *(int *)(this + 0x6c);
        uVar2 = GetPlayCountPerOneTeam();
        if (iVar3 == (uVar2 & 0xff) * 2) {
          PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08561c55 to 08561cd0 has its CatchHandler @ 08561cf1 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x117);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
          for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
              local_14 = *(CUser **)(this + (local_1c * 5 + local_18 + 2) * 8 + 0x14);
              if ((this[(local_1c * 5 + local_18 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
                 (local_14 != (CUser *)0x0)) {
                CUser::Send(local_14,local_2c);
              }
            }
          }
          PacketGuard::~PacketGuard(local_2c);
        }
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 08561d28 to 08561dbb has its CatchHandler @ 08561dbe */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
        PvP_Room::battle_reset(param_2);
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          iVar3 = PvP_Room::get_user_seat(param_2,local_10);
          if (iVar3 != 0) {
            CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_2 + 0x620),local_10,true);
          }
        }
        PvP_Room::start_pvp(param_2);
        PvP_Room::make_state_info(param_2,(char *)local_38);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_38);
        PacketGuard::~PacketGuard(local_38);
        return;
      }
      if (param_3[local_20] == '\0') break;
      local_20 = local_20 + 1;
    }
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_2);
  }
  return;
}
```
