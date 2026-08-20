# OnLeaveRoom

`_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii`

`fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562fbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562fbc  _ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii
#           fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)
# range [0x08562fbc, 0x08563271]
08562fbc +0x000:  push   %ebp
08562fbd +0x001:  mov    %esp,%ebp
08562fbf +0x003:  push   %esi
08562fc0 +0x004:  push   %ebx
08562fc1 +0x005:  sub    $0x40,%esp
08562fc4 +0x008:  mov    0x8(%ebp),%eax
08562fc7 +0x00b:  mov    0x4(%eax),%eax
08562fca +0x00e:  cmp    $0x4,%eax
08562fcd +0x011:  jne    08563013 <+0x57>
08562fcf +0x013:  movl   $0x2,0x8(%esp)
08562fd7 +0x01b:  movl   $0x4,0x4(%esp)
08562fdf +0x023:  mov    0x8(%ebp),%eax
08562fe2 +0x026:  mov    %eax,(%esp)
08562fe5 +0x029:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08562fea +0x02e:  mov    0x8(%ebp),%eax
08562fed +0x031:  movl   $0x0,0x4(%eax)
08562ff4 +0x038:  movl   $0x1,0x8(%esp)
08562ffc +0x040:  mov    0x10(%ebp),%eax
08562fff +0x043:  mov    %eax,0x4(%esp)
08563003 +0x047:  mov    0x8(%ebp),%eax
08563006 +0x04a:  mov    %eax,(%esp)
08563009 +0x04d:  call   08565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)
0856300e +0x052:  jmp    085631be <+0x202>
08563013 +0x057:  mov    0x8(%ebp),%eax
08563016 +0x05a:  mov    0x4(%eax),%eax
08563019 +0x05d:  cmp    $0x5,%eax
0856301c +0x060:  jne    085631b4 <+0x1f8>
08563022 +0x066:  mov    0x14(%ebp),%eax
08563025 +0x069:  mov    %eax,0x4(%esp)
08563029 +0x06d:  mov    0x10(%ebp),%eax
0856302c +0x070:  mov    %eax,(%esp)
0856302f +0x073:  call   08568d22 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6ec>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6ec
08563034 +0x078:  cmp    $0x1,%eax
08563037 +0x07b:  sete   %al
0856303a +0x07e:  test   %al,%al
0856303c +0x080:  je     08563058 <+0x9c>
0856303e +0x082:  movl   $0x0,0x8(%esp)
08563046 +0x08a:  mov    0x14(%ebp),%eax
08563049 +0x08d:  mov    %eax,0x4(%esp)
0856304d +0x091:  mov    0x8(%ebp),%eax
08563050 +0x094:  mov    %eax,(%esp)
08563053 +0x097:  call   08562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08563058 +0x09c:  mov    0xc(%ebp),%eax
0856305b +0x09f:  mov    %eax,0x4(%esp)
0856305f +0x0a3:  mov    0x8(%ebp),%eax
08563062 +0x0a6:  mov    %eax,(%esp)
08563065 +0x0a9:  call   085663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>  ; fair_pvp::CFairMatch::_FindTeam(CUser*)
0856306a +0x0ae:  mov    %eax,-0x10(%ebp)
0856306d +0x0b1:  cmpl   $0x2,-0x10(%ebp)
08563071 +0x0b5:  jne    085630a4 <+0xe8>
08563073 +0x0b7:  movl   $"error _FindTeam",0x10(%esp)
0856307b +0x0bf:  movl   $0xb0b,0xc(%esp)
08563083 +0x0c7:  movl   $&_ZZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_RoomiiE19__PRETTY_FUNCTION__,0x8(%esp)
0856308b +0x0cf:  movl   $"MatchingSystem.cpp",0x4(%esp)
08563093 +0x0d7:  movl   $0x1,(%esp)
0856309a +0x0de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0856309f +0x0e3:  jmp    0856326a <+0x2ae>
085630a4 +0x0e8:  mov    -0x10(%ebp),%eax
085630a7 +0x0eb:  mov    %eax,0x4(%esp)
085630ab +0x0ef:  mov    0x8(%ebp),%eax
085630ae +0x0f2:  mov    %eax,(%esp)
085630b1 +0x0f5:  call   08566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM)
085630b6 +0x0fa:  mov    %eax,-0xc(%ebp)
085630b9 +0x0fd:  cmpl   $0x2,-0xc(%ebp)
085630bd +0x101:  jne    085630f0 <+0x134>
085630bf +0x103:  movl   $"error _GetOtherTeam",0x10(%esp)
085630c7 +0x10b:  movl   $0xb12,0xc(%esp)
085630cf +0x113:  movl   $&_ZZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_RoomiiE19__PRETTY_FUNCTION__,0x8(%esp)
085630d7 +0x11b:  movl   $"MatchingSystem.cpp",0x4(%esp)
085630df +0x123:  movl   $0x1,(%esp)
085630e6 +0x12a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085630eb +0x12f:  jmp    0856326a <+0x2ae>
085630f0 +0x134:  mov    -0xc(%ebp),%edx
085630f3 +0x137:  mov    0x8(%ebp),%ecx
085630f6 +0x13a:  mov    %edx,%eax
085630f8 +0x13c:  shl    $0x3,%eax
085630fb +0x13f:  add    %edx,%eax
085630fd +0x141:  shl    $0x3,%eax
08563100 +0x144:  lea    (%ecx,%eax,1),%eax
08563103 +0x147:  add    $0x10,%eax
08563106 +0x14a:  movzbl 0xc(%eax),%eax
0856310a +0x14e:  test   %al,%al
0856310c +0x150:  je     085631be <+0x202>
08563112 +0x156:  lea    -0x1c(%ebp),%eax
08563115 +0x159:  mov    %eax,(%esp)
08563118 +0x15c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0856311d +0x161:  movl   $0x13a,0x8(%esp)
08563125 +0x169:  movl   $0x0,0x4(%esp)
0856312d +0x171:  lea    -0x1c(%ebp),%eax
08563130 +0x174:  mov    %eax,(%esp)
08563133 +0x177:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08563138 +0x17c:  movl   $0x1,0x4(%esp)
08563140 +0x184:  lea    -0x1c(%ebp),%eax
08563143 +0x187:  mov    %eax,(%esp)
08563146 +0x18a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0856314b +0x18f:  mov    -0xc(%ebp),%edx
0856314e +0x192:  mov    %edx,%eax
08563150 +0x194:  shl    $0x3,%eax
08563153 +0x197:  add    %edx,%eax
08563155 +0x199:  shl    $0x3,%eax
08563158 +0x19c:  add    $0x10,%eax
0856315b +0x19f:  add    0x8(%ebp),%eax
0856315e +0x1a2:  lea    0xc(%eax),%edx
08563161 +0x1a5:  lea    -0x1c(%ebp),%eax
08563164 +0x1a8:  mov    %eax,0x4(%esp)
08563168 +0x1ac:  mov    %edx,(%esp)
0856316b +0x1af:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
08563170 +0x1b4:  mov    -0xc(%ebp),%edx
08563173 +0x1b7:  mov    0x8(%ebp),%ecx
08563176 +0x1ba:  mov    %edx,%eax
08563178 +0x1bc:  shl    $0x3,%eax
0856317b +0x1bf:  add    %edx,%eax
0856317d +0x1c1:  shl    $0x3,%eax
08563180 +0x1c4:  lea    (%ecx,%eax,1),%eax
08563183 +0x1c7:  add    $0x20,%eax
08563186 +0x1ca:  movl   $0x1,(%eax)
0856318c +0x1d0:  lea    -0x1c(%ebp),%eax
0856318f +0x1d3:  mov    %eax,(%esp)
08563192 +0x1d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563197 +0x1db:  jmp    085631be <+0x202>
08563199 +0x1dd:  mov    %edx,%ebx
0856319b +0x1df:  mov    %eax,%esi
0856319d +0x1e1:  lea    -0x1c(%ebp),%eax
085631a0 +0x1e4:  mov    %eax,(%esp)
085631a3 +0x1e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085631a8 +0x1ec:  mov    %esi,%eax
085631aa +0x1ee:  mov    %ebx,%edx
085631ac +0x1f0:  mov    %eax,(%esp)
085631af +0x1f3:  call   08ae3750 <_Unwind_Resume>
085631b4 +0x1f8:  mov    0x8(%ebp),%eax
085631b7 +0x1fb:  movl   $0x0,0x4(%eax)
085631be +0x202:  cmpl   $0x1,0x14(%ebp)
085631c2 +0x206:  jne    085631fc <+0x240>
085631c4 +0x208:  mov    0x8(%ebp),%eax
085631c7 +0x20b:  lea    0x1c(%eax),%edx
085631ca +0x20e:  mov    0xc(%ebp),%eax
085631cd +0x211:  mov    %eax,0x4(%esp)
085631d1 +0x215:  mov    %edx,(%esp)
085631d4 +0x218:  call   085626aa <_ZN8fair_pvp13TeamInfoThird3delEP5CUser>  ; fair_pvp::TeamInfoThird::del(CUser*)
085631d9 +0x21d:  mov    0x18(%ebp),%eax
085631dc +0x220:  mov    %eax,0xc(%esp)
085631e0 +0x224:  movl   $0x0,0x8(%esp)
085631e8 +0x22c:  mov    0x10(%ebp),%eax
085631eb +0x22f:  mov    %eax,0x4(%esp)
085631ef +0x233:  mov    0x8(%ebp),%eax
085631f2 +0x236:  mov    %eax,(%esp)
085631f5 +0x239:  call   08563272 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi>  ; fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int)
085631fa +0x23e:  jmp    08563232 <+0x276>
085631fc +0x240:  mov    0x8(%ebp),%eax
085631ff +0x243:  lea    0x64(%eax),%edx
08563202 +0x246:  mov    0xc(%ebp),%eax
08563205 +0x249:  mov    %eax,0x4(%esp)
08563209 +0x24d:  mov    %edx,(%esp)
0856320c +0x250:  call   085626aa <_ZN8fair_pvp13TeamInfoThird3delEP5CUser>  ; fair_pvp::TeamInfoThird::del(CUser*)
08563211 +0x255:  mov    0x18(%ebp),%eax
08563214 +0x258:  mov    %eax,0xc(%esp)
08563218 +0x25c:  movl   $0x1,0x8(%esp)
08563220 +0x264:  mov    0x10(%ebp),%eax
08563223 +0x267:  mov    %eax,0x4(%esp)
08563227 +0x26b:  mov    0x8(%ebp),%eax
0856322a +0x26e:  mov    %eax,(%esp)
0856322d +0x271:  call   08563272 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi>  ; fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int)
08563232 +0x276:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563237 +0x27b:  mov    (%eax),%eax
08563239 +0x27d:  add    $0x4,%eax
0856323c +0x280:  mov    (%eax),%ecx
0856323e +0x282:  mov    0x8(%ebp),%edx
08563241 +0x285:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563246 +0x28a:  mov    %edx,0x4(%esp)
0856324a +0x28e:  mov    %eax,(%esp)
0856324d +0x291:  call   *%ecx
0856324f +0x293:  movl   $0x1,0x8(%esp)
08563257 +0x29b:  movl   $0x5,0x4(%esp)
0856325f +0x2a3:  mov    0x8(%ebp),%eax
08563262 +0x2a6:  mov    %eax,(%esp)
08563265 +0x2a9:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
0856326a +0x2ae:  add    $0x40,%esp
0856326d +0x2b1:  pop    %ebx
0856326e +0x2b2:  pop    %esi
0856326f +0x2b3:  pop    %ebp
08563270 +0x2b4:  ret
08563271 +0x2b5:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnLeaveRoom @ 0x8562fbc

/* fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void __thiscall
fair_pvp::CFairMatch::OnLeaveRoom
          (CFairMatch *this,CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    *(undefined4 *)(this + 4) = 0;
    _PullOutRoomTeam(this,param_2,1);
  }
  else if (*(int *)(this + 4) == 5) {
    iVar1 = PvP_Room::GetTeamCount(param_2,param_3);
    if (iVar1 == 1) {
      _UpdateRating(this,param_3,0);
    }
    local_14 = _FindTeam(this,param_1);
    if (local_14 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)",0xb0b
                 ,"error _FindTeam");
      return;
    }
    local_10 = _GetOtherTeam(this,local_14);
    if (local_10 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)",0xb12
                 ,"error _GetOtherTeam");
      return;
    }
    if (this[local_10 * 0x48 + 0x1c] != (CFairMatch)0x0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08563133 to 0856316f has its CatchHandler @ 08563199 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x13a);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_10 * 0x48 + 0x1c),local_20);
      *(undefined4 *)(this + local_10 * 0x48 + 0x20) = 1;
      PacketGuard::~PacketGuard(local_20);
    }
  }
  else {
    *(undefined4 *)(this + 4) = 0;
  }
  if (param_3 == 1) {
    TeamInfoThird::del((TeamInfoThird *)(this + 0x1c),param_1);
    _ChangeTeamLeader(this,param_2,0,param_4);
  }
  else {
    TeamInfoThird::del((TeamInfoThird *)(this + 100),param_1);
    _ChangeTeamLeader(this,param_2,1,param_4);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
  _SendMatchStatePacket(this,5,1);
  return;
}
```
