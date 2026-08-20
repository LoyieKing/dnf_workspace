# _CheckMatchable

`_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room`

`CLeagueMatch::_CheckMatchable(PvP_Room*) const`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855da56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855da56  _ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room
#           CLeagueMatch::_CheckMatchable(PvP_Room*) const
# range [0x0855da56, 0x0855db57]
0855da56 +0x000:  push   %ebp
0855da57 +0x001:  mov    %esp,%ebp
0855da59 +0x003:  sub    $0x38,%esp
0855da5c +0x006:  movl   $0x0,-0x18(%ebp)
0855da63 +0x00d:  movl   $0x0,-0x14(%ebp)
0855da6a +0x014:  movl   $0x0,-0x10(%ebp)
0855da71 +0x01b:  jmp    0855db15 <+0xbf>
0855da76 +0x020:  mov    -0x10(%ebp),%eax
0855da79 +0x023:  mov    %eax,0x4(%esp)
0855da7d +0x027:  mov    0xc(%ebp),%eax
0855da80 +0x02a:  mov    %eax,(%esp)
0855da83 +0x02d:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855da88 +0x032:  cmp    $0x3,%eax
0855da8b +0x035:  sete   %al
0855da8e +0x038:  test   %al,%al
0855da90 +0x03a:  je     0855da98 <+0x42>
0855da92 +0x03c:  addl   $0x1,-0x18(%ebp)
0855da96 +0x040:  jmp    0855db11 <+0xbb>
0855da98 +0x042:  mov    -0x10(%ebp),%eax
0855da9b +0x045:  mov    %eax,0x4(%esp)
0855da9f +0x049:  mov    0xc(%ebp),%eax
0855daa2 +0x04c:  mov    %eax,(%esp)
0855daa5 +0x04f:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0855daaa +0x054:  mov    %eax,-0xc(%ebp)
0855daad +0x057:  cmpl   $0x0,-0xc(%ebp)
0855dab1 +0x05b:  je     0855db10 <+0xba>
0855dab3 +0x05d:  mov    -0xc(%ebp),%eax
0855dab6 +0x060:  mov    %eax,(%esp)
0855dab9 +0x063:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0855dabe +0x068:  test   %eax,%eax
0855dac0 +0x06a:  sete   %al
0855dac3 +0x06d:  test   %al,%al
0855dac5 +0x06f:  je     0855db11 <+0xbb>
0855dac7 +0x071:  mov    -0xc(%ebp),%eax
0855daca +0x074:  mov    %eax,(%esp)
0855dacd +0x077:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0855dad2 +0x07c:  mov    %eax,0x18(%esp)
0855dad6 +0x080:  mov    -0x14(%ebp),%eax
0855dad9 +0x083:  mov    %eax,0x14(%esp)
0855dadd +0x087:  movl   $"(%d) found a different school no(%d)",0x10(%esp)
0855dae5 +0x08f:  movl   $0x257,0xc(%esp)
0855daed +0x097:  movl   $&_ZZNK12CLeagueMatch15_CheckMatchableEP8PvP_RoomE19__PRETTY_FUNCTION__,0x8(%esp)
0855daf5 +0x09f:  movl   $"MatchingSystem.cpp",0x4(%esp)
0855dafd +0x0a7:  movl   $0x1,(%esp)
0855db04 +0x0ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0855db09 +0x0b3:  mov    $0x16,%eax
0855db0e +0x0b8:  jmp    0855db56 <+0x100>
0855db10 +0x0ba:  nop
0855db11 +0x0bb:  addl   $0x1,-0x10(%ebp)
0855db15 +0x0bf:  cmpl   $0x7,-0x10(%ebp)
0855db19 +0x0c3:  setle  %al
0855db1c +0x0c6:  test   %al,%al
0855db1e +0x0c8:  jne    0855da76 <+0x20>
0855db24 +0x0ce:  mov    0x8(%ebp),%eax
0855db27 +0x0d1:  add    $0x1c,%eax
0855db2a +0x0d4:  mov    %eax,(%esp)
0855db2d +0x0d7:  call   0855cd26 <_ZNK8TeamInfo4sizeEv>  ; TeamInfo::size() const
0855db32 +0x0dc:  mov    %eax,%edx
0855db34 +0x0de:  sub    -0x18(%ebp),%edx
0855db37 +0x0e1:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855db3e +0x0e8:  movzbl %al,%eax
0855db41 +0x0eb:  cmp    %eax,%edx
0855db43 +0x0ed:  setne  %al
0855db46 +0x0f0:  test   %al,%al
0855db48 +0x0f2:  je     0855db51 <+0xfb>
0855db4a +0x0f4:  mov    $0x16,%eax
0855db4f +0x0f9:  jmp    0855db56 <+0x100>
0855db51 +0x0fb:  mov    $0x0,%eax
0855db56 +0x100:  leave
0855db57 +0x101:  ret
```

## 反编译 C

```c
// CLeagueMatch::_CheckMatchable @ 0x855da56

/* CLeagueMatch::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall CLeagueMatch::_CheckMatchable(CLeagueMatch *this,PvP_Room *param_1)

{
  CUser *this_00;
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar1 = TeamInfo::size((TeamInfo *)(this + 0x1c));
      if (iVar1 - local_1c == (uint)nPlayerCountPerOneTeam_) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x16;
      }
      return uVar2;
    }
    iVar1 = PvP_Room::get_team(param_1,local_14);
    if (iVar1 == 3) {
      local_1c = local_1c + 1;
    }
    else {
      this_00 = (CUser *)PvP_Room::get_user_seat(param_1,local_14);
      if ((this_00 != (CUser *)0x0) && (iVar1 = CUser::GetSchoolNo(this_00), iVar1 == 0)) {
        uVar2 = CUser::GetSchoolNo(this_00);
        LogManager::logFormat
                  (1,"MatchingSystem.cpp","int CLeagueMatch::_CheckMatchable(PvP_Room*) const",599,
                   "(%d) found a different school no(%d)",0,uVar2);
        return 0x16;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
