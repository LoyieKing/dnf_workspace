# _CheckMatchable

`_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room`

`online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085612c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085612c6  _ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room
#           online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const
# range [0x085612c6, 0x085613dd]
085612c6 +0x000:  push   %ebp
085612c7 +0x001:  mov    %esp,%ebp
085612c9 +0x003:  push   %ebx
085612ca +0x004:  sub    $0x34,%esp
085612cd +0x007:  movl   $0x0,-0x18(%ebp)
085612d4 +0x00e:  movl   $0x0,-0x14(%ebp)
085612db +0x015:  movl   $0x0,-0x10(%ebp)
085612e2 +0x01c:  jmp    08561399 <+0xd3>
085612e7 +0x021:  mov    -0x10(%ebp),%eax
085612ea +0x024:  mov    %eax,0x4(%esp)
085612ee +0x028:  mov    0xc(%ebp),%eax
085612f1 +0x02b:  mov    %eax,(%esp)
085612f4 +0x02e:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085612f9 +0x033:  cmp    $0x3,%eax
085612fc +0x036:  sete   %al
085612ff +0x039:  test   %al,%al
08561301 +0x03b:  je     0856130c <+0x46>
08561303 +0x03d:  addl   $0x1,-0x18(%ebp)
08561307 +0x041:  jmp    08561395 <+0xcf>
0856130c +0x046:  mov    -0x10(%ebp),%eax
0856130f +0x049:  mov    %eax,0x4(%esp)
08561313 +0x04d:  mov    0xc(%ebp),%eax
08561316 +0x050:  mov    %eax,(%esp)
08561319 +0x053:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0856131e +0x058:  mov    %eax,-0xc(%ebp)
08561321 +0x05b:  cmpl   $0x0,-0xc(%ebp)
08561325 +0x05f:  je     08561394 <+0xce>
08561327 +0x061:  cmpl   $0x0,-0x14(%ebp)
0856132b +0x065:  jne    0856133d <+0x77>
0856132d +0x067:  mov    -0xc(%ebp),%eax
08561330 +0x06a:  mov    %eax,(%esp)
08561333 +0x06d:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08561338 +0x072:  mov    %eax,-0x14(%ebp)
0856133b +0x075:  jmp    08561395 <+0xcf>
0856133d +0x077:  mov    -0xc(%ebp),%eax
08561340 +0x07a:  mov    %eax,(%esp)
08561343 +0x07d:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08561348 +0x082:  cmp    -0x14(%ebp),%eax
0856134b +0x085:  setne  %al
0856134e +0x088:  test   %al,%al
08561350 +0x08a:  je     08561395 <+0xcf>
08561352 +0x08c:  mov    -0xc(%ebp),%eax
08561355 +0x08f:  mov    %eax,(%esp)
08561358 +0x092:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
0856135d +0x097:  mov    %eax,0x14(%esp)
08561361 +0x09b:  movl   $"(%d) found a different team_id(%d)",0x10(%esp)
08561369 +0x0a3:  movl   $0x771,0xc(%esp)
08561371 +0x0ab:  movl   $&_ZZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_RoomE19__PRETTY_FUNCTION__,0x8(%esp)
08561379 +0x0b3:  movl   $"MatchingSystem.cpp",0x4(%esp)
08561381 +0x0bb:  movl   $0x1,(%esp)
08561388 +0x0c2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0856138d +0x0c7:  mov    $0x16,%eax
08561392 +0x0cc:  jmp    085613d8 <+0x112>
08561394 +0x0ce:  nop
08561395 +0x0cf:  addl   $0x1,-0x10(%ebp)
08561399 +0x0d3:  cmpl   $0x7,-0x10(%ebp)
0856139d +0x0d7:  setle  %al
085613a0 +0x0da:  test   %al,%al
085613a2 +0x0dc:  jne    085612e7 <+0x21>
085613a8 +0x0e2:  mov    0x8(%ebp),%eax
085613ab +0x0e5:  add    $0x1c,%eax
085613ae +0x0e8:  mov    %eax,(%esp)
085613b1 +0x0eb:  call   0855feaa <_ZNK14TeamInfoSecond4sizeEv>  ; TeamInfoSecond::size() const
085613b6 +0x0f0:  mov    %eax,%ebx
085613b8 +0x0f2:  sub    -0x18(%ebp),%ebx
085613bb +0x0f5:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085613c0 +0x0fa:  movzbl %al,%eax
085613c3 +0x0fd:  cmp    %eax,%ebx
085613c5 +0x0ff:  setne  %al
085613c8 +0x102:  test   %al,%al
085613ca +0x104:  je     085613d3 <+0x10d>
085613cc +0x106:  mov    $0x16,%eax
085613d1 +0x10b:  jmp    085613d8 <+0x112>
085613d3 +0x10d:  mov    $0x0,%eax
085613d8 +0x112:  add    $0x34,%esp
085613db +0x115:  pop    %ebx
085613dc +0x116:  pop    %ebp
085613dd +0x117:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_CheckMatchable @ 0x85612c6

/* online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_CheckMatchable(COnlinePreliminary *this,PvP_Room *param_1)

{
  CUserCharacInfo *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar1 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
      uVar2 = GetPlayCountPerOneTeam();
      if (iVar1 - local_1c == (uVar2 & 0xff)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x16;
      }
      return uVar3;
    }
    iVar1 = PvP_Room::get_team(param_1,local_14);
    if (iVar1 == 3) {
      local_1c = local_1c + 1;
    }
    else {
      this_00 = (CUserCharacInfo *)PvP_Room::get_user_seat(param_1,local_14);
      if (this_00 != (CUserCharacInfo *)0x0) {
        if (local_18 == 0) {
          local_18 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
        }
        else {
          iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
          if (iVar1 != local_18) {
            uVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
            LogManager::logFormat
                      (1,"MatchingSystem.cpp",
                       "int online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const"
                       ,0x771,"(%d) found a different team_id(%d)",uVar3);
            return 0x16;
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
