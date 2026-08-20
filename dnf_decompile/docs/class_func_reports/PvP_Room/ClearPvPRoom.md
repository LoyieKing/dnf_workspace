# ClearPvPRoom

`_ZN8PvP_Room12ClearPvPRoomEP5CUser`

`PvP_Room::ClearPvPRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd6ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd6ba  _ZN8PvP_Room12ClearPvPRoomEP5CUser
#           PvP_Room::ClearPvPRoom(CUser*)
# range [0x085dd6ba, 0x085dd753]
085dd6ba +0x00:  push   %ebp
085dd6bb +0x01:  mov    %esp,%ebp
085dd6bd +0x03:  push   %esi
085dd6be +0x04:  push   %ebx
085dd6bf +0x05:  sub    $0x20,%esp
085dd6c2 +0x08:  movl   $0x0,0x4(%esp)
085dd6ca +0x10:  mov    0x8(%ebp),%eax
085dd6cd +0x13:  mov    %eax,(%esp)
085dd6d0 +0x16:  call   085d81d0 <_ZN8PvP_Room12destroy_roomEi>  ; PvP_Room::destroy_room(int)
085dd6d5 +0x1b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085dd6da +0x20:  mov    0x8(%ebp),%edx
085dd6dd +0x23:  mov    %edx,0x4(%esp)
085dd6e1 +0x27:  mov    %eax,(%esp)
085dd6e4 +0x2a:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
085dd6e9 +0x2f:  lea    -0x14(%ebp),%eax
085dd6ec +0x32:  mov    %eax,(%esp)
085dd6ef +0x35:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dd6f4 +0x3a:  lea    -0x14(%ebp),%eax
085dd6f7 +0x3d:  mov    %eax,(%esp)
085dd6fa +0x40:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085dd6ff +0x45:  lea    -0x14(%ebp),%eax
085dd702 +0x48:  mov    %eax,0x4(%esp)
085dd706 +0x4c:  mov    0x8(%ebp),%eax
085dd709 +0x4f:  mov    %eax,(%esp)
085dd70c +0x52:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
085dd711 +0x57:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd716 +0x5c:  lea    -0x14(%ebp),%edx
085dd719 +0x5f:  mov    %edx,0x4(%esp)
085dd71d +0x63:  mov    %eax,(%esp)
085dd720 +0x66:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085dd725 +0x6b:  jmp    085dd742 <+0x88>
085dd727 +0x6d:  mov    %edx,%ebx
085dd729 +0x6f:  mov    %eax,%esi
085dd72b +0x71:  lea    -0x14(%ebp),%eax
085dd72e +0x74:  mov    %eax,(%esp)
085dd731 +0x77:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd736 +0x7c:  mov    %esi,%eax
085dd738 +0x7e:  mov    %ebx,%edx
085dd73a +0x80:  mov    %eax,(%esp)
085dd73d +0x83:  call   08ae3750 <_Unwind_Resume>
085dd742 +0x88:  lea    -0x14(%ebp),%eax
085dd745 +0x8b:  mov    %eax,(%esp)
085dd748 +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd74d +0x93:  add    $0x20,%esp
085dd750 +0x96:  pop    %ebx
085dd751 +0x97:  pop    %esi
085dd752 +0x98:  pop    %ebp
085dd753 +0x99:  ret
```

## 反编译 C

```c
// PvP_Room::ClearPvPRoom @ 0x85dd6ba

/* PvP_Room::ClearPvPRoom(CUser*) */

void PvP_Room::ClearPvPRoom(CUser *param_1)

{
  CGameManager *this;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  destroy_room((PvP_Room *)param_1,0);
  this = (CGameManager *)G_CGameManager();
  CGameManager::PutPvp(this,(PvP_Room *)param_1);
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd6fa to 085dd724 has its CatchHandler @ 085dd727 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  make_state_info((PvP_Room *)param_1,(char *)local_18);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
