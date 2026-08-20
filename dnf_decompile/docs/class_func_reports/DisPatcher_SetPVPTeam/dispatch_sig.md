# dispatch_sig

`_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPTeam` | `0x081f6020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f6020  _ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f6020, 0x081f6231]
081f6020 +0x000:  push   %ebp
081f6021 +0x001:  mov    %esp,%ebp
081f6023 +0x003:  push   %esi
081f6024 +0x004:  push   %ebx
081f6025 +0x005:  sub    $0x40,%esp
081f6028 +0x008:  mov    0xc(%ebp),%eax
081f602b +0x00b:  mov    %eax,(%esp)
081f602e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6033 +0x013:  cmp    $0x6,%eax
081f6036 +0x016:  setne  %al
081f6039 +0x019:  test   %al,%al
081f603b +0x01b:  je     081f6047 <+0x27>
081f603d +0x01d:  mov    $0x0,%ebx
081f6042 +0x022:  jmp    081f6228 <+0x208>
081f6047 +0x027:  lea    -0x2c(%ebp),%eax
081f604a +0x02a:  mov    %eax,(%esp)
081f604d +0x02d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f6052 +0x032:  lea    -0x1e(%ebp),%eax
081f6055 +0x035:  add    $0xd,%eax
081f6058 +0x038:  mov    %eax,0x4(%esp)
081f605c +0x03c:  mov    0x10(%ebp),%eax
081f605f +0x03f:  mov    %eax,(%esp)
081f6062 +0x042:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f6067 +0x047:  xor    $0x1,%eax
081f606a +0x04a:  test   %al,%al
081f606c +0x04c:  je     081f6099 <+0x79>
081f606e +0x04e:  movl   $0x0,0xc(%esp)
081f6076 +0x056:  movl   $0x0,0x8(%esp)
081f607e +0x05e:  movl   $&_ZZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6086 +0x066:  movl   $0x82be,(%esp)
081f608d +0x06d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f6092 +0x072:  mov    %eax,%ebx
081f6094 +0x074:  jmp    081f621d <+0x1fd>
081f6099 +0x079:  mov    0xc(%ebp),%eax
081f609c +0x07c:  mov    %eax,(%esp)
081f609f +0x07f:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081f60a4 +0x084:  mov    %eax,-0x10(%ebp)
081f60a7 +0x087:  cmpl   $0x0,-0x10(%ebp)
081f60ab +0x08b:  jne    081f60d8 <+0xb8>
081f60ad +0x08d:  movl   $0x0,0xc(%esp)
081f60b5 +0x095:  movl   $0x0,0x8(%esp)
081f60bd +0x09d:  movl   $&_ZZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f60c5 +0x0a5:  movl   $0x82c3,(%esp)
081f60cc +0x0ac:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f60d1 +0x0b1:  mov    %eax,%ebx
081f60d3 +0x0b3:  jmp    081f621d <+0x1fd>
081f60d8 +0x0b8:  movzbl -0x11(%ebp),%eax
081f60dc +0x0bc:  cmp    $0x4,%al
081f60de +0x0be:  jne    081f613b <+0x11b>
081f60e0 +0x0c0:  lea    -0x34(%ebp),%eax
081f60e3 +0x0c3:  mov    %eax,(%esp)
081f60e6 +0x0c6:  call   0822b49e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb48
081f60eb +0x0cb:  mov    -0x10(%ebp),%eax
081f60ee +0x0ce:  mov    %eax,(%esp)
081f60f1 +0x0d1:  call   0822d9bc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3066>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3066
081f60f6 +0x0d6:  lea    -0x34(%ebp),%edx
081f60f9 +0x0d9:  mov    %edx,0x4(%esp)
081f60fd +0x0dd:  mov    %eax,(%esp)
081f6100 +0x0e0:  call   0834f5c8 <_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo>  ; CMapList::GetPvpMapInfo(int, PvPMapInfo&)
081f6105 +0x0e5:  movzbl -0x30(%ebp),%eax
081f6109 +0x0e9:  xor    $0x1,%eax
081f610c +0x0ec:  test   %al,%al
081f610e +0x0ee:  je     081f613b <+0x11b>
081f6110 +0x0f0:  movl   $0x0,0xc(%esp)
081f6118 +0x0f8:  movl   $0x0,0x8(%esp)
081f6120 +0x100:  movl   $&_ZZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6128 +0x108:  movl   $0x82ca,(%esp)
081f612f +0x10f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f6134 +0x114:  mov    %eax,%ebx
081f6136 +0x116:  jmp    081f621d <+0x1fd>
081f613b +0x11b:  movzbl -0x11(%ebp),%eax
081f613f +0x11f:  movsbl %al,%eax
081f6142 +0x122:  mov    %eax,0x8(%esp)
081f6146 +0x126:  mov    0xc(%ebp),%eax
081f6149 +0x129:  mov    %eax,0x4(%esp)
081f614d +0x12d:  mov    -0x10(%ebp),%eax
081f6150 +0x130:  mov    %eax,(%esp)
081f6153 +0x133:  call   085d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>  ; PvP_Room::set_pvp_mode(CUser*, int)
081f6158 +0x138:  mov    %eax,-0xc(%ebp)
081f615b +0x13b:  cmpl   $0x0,-0xc(%ebp)
081f615f +0x13f:  jle    081f61cd <+0x1ad>
081f6161 +0x141:  movl   $0x39,0x8(%esp)
081f6169 +0x149:  movl   $0x1,0x4(%esp)
081f6171 +0x151:  lea    -0x2c(%ebp),%eax
081f6174 +0x154:  mov    %eax,(%esp)
081f6177 +0x157:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f617c +0x15c:  movl   $0x0,0x4(%esp)
081f6184 +0x164:  lea    -0x2c(%ebp),%eax
081f6187 +0x167:  mov    %eax,(%esp)
081f618a +0x16a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f618f +0x16f:  mov    -0xc(%ebp),%eax
081f6192 +0x172:  mov    %eax,0x4(%esp)
081f6196 +0x176:  lea    -0x2c(%ebp),%eax
081f6199 +0x179:  mov    %eax,(%esp)
081f619c +0x17c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f61a1 +0x181:  movl   $0x1,0x4(%esp)
081f61a9 +0x189:  lea    -0x2c(%ebp),%eax
081f61ac +0x18c:  mov    %eax,(%esp)
081f61af +0x18f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f61b4 +0x194:  lea    -0x2c(%ebp),%eax
081f61b7 +0x197:  mov    %eax,0x4(%esp)
081f61bb +0x19b:  mov    0xc(%ebp),%eax
081f61be +0x19e:  mov    %eax,(%esp)
081f61c1 +0x1a1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f61c6 +0x1a6:  mov    $0x0,%ebx
081f61cb +0x1ab:  jmp    081f621d <+0x1fd>
081f61cd +0x1ad:  lea    -0x2c(%ebp),%eax
081f61d0 +0x1b0:  movl   $0xffff,0x8(%esp)
081f61d8 +0x1b8:  mov    %eax,0x4(%esp)
081f61dc +0x1bc:  mov    -0x10(%ebp),%eax
081f61df +0x1bf:  mov    %eax,(%esp)
081f61e2 +0x1c2:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
081f61e7 +0x1c7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f61ec +0x1cc:  lea    -0x2c(%ebp),%edx
081f61ef +0x1cf:  mov    %edx,0x4(%esp)
081f61f3 +0x1d3:  mov    %eax,(%esp)
081f61f6 +0x1d6:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f61fb +0x1db:  mov    $0x0,%ebx
081f6200 +0x1e0:  jmp    081f621d <+0x1fd>
081f6202 +0x1e2:  mov    %edx,%ebx
081f6204 +0x1e4:  mov    %eax,%esi
081f6206 +0x1e6:  lea    -0x2c(%ebp),%eax
081f6209 +0x1e9:  mov    %eax,(%esp)
081f620c +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6211 +0x1f1:  mov    %esi,%eax
081f6213 +0x1f3:  mov    %ebx,%edx
081f6215 +0x1f5:  mov    %eax,(%esp)
081f6218 +0x1f8:  call   08ae3750 <_Unwind_Resume>
081f621d +0x1fd:  lea    -0x2c(%ebp),%eax
081f6220 +0x200:  mov    %eax,(%esp)
081f6223 +0x203:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6228 +0x208:  mov    %ebx,%eax
081f622a +0x20a:  add    $0x40,%esp
081f622d +0x20d:  pop    %ebx
081f622e +0x20e:  pop    %esi
081f622f +0x20f:  pop    %ebp
081f6230 +0x210:  ret
081f6231 +0x211:  nop
```

## 反编译 C

```c
// DisPatcher_SetPVPTeam::dispatch_sig @ 0x81f6020

/* DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPTeam::dispatch_sig(DisPatcher_SetPVPTeam *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  PvPMapInfo local_38 [4];
  char local_34;
  PacketGuard local_30 [27];
  char local_15;
  PvP_Room *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 6) {
    return 0;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f6062 to 081f61fa has its CatchHandler @ 081f6202 */
  cVar1 = PacketBuf::get_byte(param_2,&local_15);
  if (cVar1 == '\x01') {
    local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_14 == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x82c3,"virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      if (local_15 == '\x04') {
        PvPMapInfo::PvPMapInfo(local_38);
        iVar2 = PvP_Room::GetRequestedMapNo(local_14);
        CMapList::GetPvpMapInfo(iVar2,local_38);
        if (local_34 != '\x01') {
          uVar3 = LineFunc(0x82ca,
                           "virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
          goto LAB_081f621d;
        }
      }
      local_10 = PvP_Room::set_pvp_mode(local_14,param_1,(int)local_15);
      if (local_10 < 1) {
        PvP_Room::make_seat_info(local_14,(char *)local_30,0xffff);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_30);
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x39);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send(param_1,local_30);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = LineFunc(0x82be,"virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
LAB_081f621d:
  PacketGuard::~PacketGuard(local_30);
  return uVar3;
}
```
