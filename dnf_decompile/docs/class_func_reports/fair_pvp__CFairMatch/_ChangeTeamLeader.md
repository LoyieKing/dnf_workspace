# _ChangeTeamLeader

`_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi`

`fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563272  _ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi
#           fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int)
# range [0x08563272, 0x085633cd]
08563272 +0x000:  push   %ebp
08563273 +0x001:  mov    %esp,%ebp
08563275 +0x003:  push   %esi
08563276 +0x004:  push   %ebx
08563277 +0x005:  sub    $0x30,%esp
0856327a +0x008:  movl   $0x0,-0x10(%ebp)
08563281 +0x00f:  mov    0x10(%ebp),%edx
08563284 +0x012:  mov    0x8(%ebp),%eax
08563287 +0x015:  add    $0x2c,%edx
0856328a +0x018:  mov    0x8(%eax,%edx,4),%eax
0856328e +0x01c:  cmp    0x14(%ebp),%eax
08563291 +0x01f:  jne    085632fc <+0x8a>
08563293 +0x021:  movl   $0x0,-0xc(%ebp)
0856329a +0x028:  jmp    085632f1 <+0x7f>
0856329c +0x02a:  mov    0x10(%ebp),%edx
0856329f +0x02d:  mov    -0xc(%ebp),%eax
085632a2 +0x030:  mov    0x8(%ebp),%ecx
085632a5 +0x033:  mov    %eax,%ebx
085632a7 +0x035:  shl    $0x4,%ebx
085632aa +0x038:  mov    %edx,%eax
085632ac +0x03a:  shl    $0x3,%eax
085632af +0x03d:  add    %edx,%eax
085632b1 +0x03f:  shl    $0x3,%eax
085632b4 +0x042:  lea    (%ebx,%eax,1),%eax
085632b7 +0x045:  lea    (%ecx,%eax,1),%eax
085632ba +0x048:  add    $0x10,%eax
085632bd +0x04b:  movzbl 0x18(%eax),%eax
085632c1 +0x04f:  test   %al,%al
085632c3 +0x051:  je     085632ed <+0x7b>
085632c5 +0x053:  mov    0x10(%ebp),%edx
085632c8 +0x056:  mov    -0xc(%ebp),%eax
085632cb +0x059:  mov    0x8(%ebp),%ecx
085632ce +0x05c:  mov    %eax,%ebx
085632d0 +0x05e:  shl    $0x4,%ebx
085632d3 +0x061:  mov    %edx,%eax
085632d5 +0x063:  shl    $0x3,%eax
085632d8 +0x066:  add    %edx,%eax
085632da +0x068:  shl    $0x3,%eax
085632dd +0x06b:  lea    (%ebx,%eax,1),%eax
085632e0 +0x06e:  lea    (%ecx,%eax,1),%eax
085632e3 +0x071:  add    $0x24,%eax
085632e6 +0x074:  mov    (%eax),%eax
085632e8 +0x076:  mov    %eax,-0x10(%ebp)
085632eb +0x079:  jmp    085632fc <+0x8a>
085632ed +0x07b:  addl   $0x1,-0xc(%ebp)
085632f1 +0x07f:  cmpl   $0x3,-0xc(%ebp)
085632f5 +0x083:  setle  %al
085632f8 +0x086:  test   %al,%al
085632fa +0x088:  jne    0856329c <+0x2a>
085632fc +0x08a:  cmpl   $0x0,-0x10(%ebp)
08563300 +0x08e:  je     085633c7 <+0x155>
08563306 +0x094:  mov    0x10(%ebp),%ebx
08563309 +0x097:  mov    -0x10(%ebp),%eax
0856330c +0x09a:  mov    %eax,0x4(%esp)
08563310 +0x09e:  mov    0xc(%ebp),%eax
08563313 +0x0a1:  mov    %eax,(%esp)
08563316 +0x0a4:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
0856331b +0x0a9:  mov    0x8(%ebp),%edx
0856331e +0x0ac:  lea    0x2c(%ebx),%ecx
08563321 +0x0af:  mov    %eax,0x8(%edx,%ecx,4)
08563325 +0x0b3:  lea    -0x1c(%ebp),%eax
08563328 +0x0b6:  mov    %eax,(%esp)
0856332b +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08563330 +0x0be:  movl   $0x13d,0x8(%esp)
08563338 +0x0c6:  movl   $0x0,0x4(%esp)
08563340 +0x0ce:  lea    -0x1c(%ebp),%eax
08563343 +0x0d1:  mov    %eax,(%esp)
08563346 +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0856334b +0x0d9:  mov    0x10(%ebp),%edx
0856334e +0x0dc:  mov    0x8(%ebp),%eax
08563351 +0x0df:  add    $0x2c,%edx
08563354 +0x0e2:  mov    0x8(%eax,%edx,4),%eax
08563358 +0x0e6:  mov    %eax,0x4(%esp)
0856335c +0x0ea:  lea    -0x1c(%ebp),%eax
0856335f +0x0ed:  mov    %eax,(%esp)
08563362 +0x0f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08563367 +0x0f5:  movl   $0x1,0x4(%esp)
0856336f +0x0fd:  lea    -0x1c(%ebp),%eax
08563372 +0x100:  mov    %eax,(%esp)
08563375 +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0856337a +0x108:  mov    0x10(%ebp),%edx
0856337d +0x10b:  mov    %edx,%eax
0856337f +0x10d:  shl    $0x3,%eax
08563382 +0x110:  add    %edx,%eax
08563384 +0x112:  shl    $0x3,%eax
08563387 +0x115:  add    $0x10,%eax
0856338a +0x118:  add    0x8(%ebp),%eax
0856338d +0x11b:  lea    0xc(%eax),%edx
08563390 +0x11e:  lea    -0x1c(%ebp),%eax
08563393 +0x121:  mov    %eax,0x4(%esp)
08563397 +0x125:  mov    %edx,(%esp)
0856339a +0x128:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
0856339f +0x12d:  jmp    085633bc <+0x14a>
085633a1 +0x12f:  mov    %edx,%ebx
085633a3 +0x131:  mov    %eax,%esi
085633a5 +0x133:  lea    -0x1c(%ebp),%eax
085633a8 +0x136:  mov    %eax,(%esp)
085633ab +0x139:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085633b0 +0x13e:  mov    %esi,%eax
085633b2 +0x140:  mov    %ebx,%edx
085633b4 +0x142:  mov    %eax,(%esp)
085633b7 +0x145:  call   08ae3750 <_Unwind_Resume>
085633bc +0x14a:  lea    -0x1c(%ebp),%eax
085633bf +0x14d:  mov    %eax,(%esp)
085633c2 +0x150:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085633c7 +0x155:  add    $0x30,%esp
085633ca +0x158:  pop    %ebx
085633cb +0x159:  pop    %esi
085633cc +0x15a:  pop    %ebp
085633cd +0x15b:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_ChangeTeamLeader @ 0x8563272

/* fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int) */

void __thiscall
fair_pvp::CFairMatch::_ChangeTeamLeader(CFairMatch *this,PvP_Room *param_1,int param_3,int param_4)

{
  undefined4 uVar1;
  PacketGuard local_20 [12];
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  if (*(int *)(this + (param_3 + 0x2c) * 4 + 8) == param_4) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (this[local_10 * 0x10 + param_3 * 0x48 + 0x28] != (CFairMatch)0x0) {
        local_14 = *(CUser **)(this + local_10 * 0x10 + param_3 * 0x48 + 0x24);
        break;
      }
    }
  }
  if (local_14 != (CUser *)0x0) {
    uVar1 = PvP_Room::get_user_seat(param_1,local_14);
    *(undefined4 *)(this + (param_3 + 0x2c) * 4 + 8) = uVar1;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08563346 to 0856339e has its CatchHandler @ 085633a1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x13d);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_20,*(int *)(this + (param_3 + 0x2c) * 4 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    TeamInfoThird::SendToTeam((TeamInfoThird *)(this + param_3 * 0x48 + 0x1c),local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```
