# OnLeaveRoom

`_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii`

`online_preliminary::COnlinePreliminary::OnLeaveRoom(CUser*, PvP_Room*, int, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560cd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560cd2  _ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii
#           online_preliminary::COnlinePreliminary::OnLeaveRoom(CUser*, PvP_Room*, int, int)
# range [0x08560cd2, 0x08560df1]
08560cd2 +0x000:  push   %ebp
08560cd3 +0x001:  mov    %esp,%ebp
08560cd5 +0x003:  sub    $0x18,%esp
08560cd8 +0x006:  mov    0x8(%ebp),%eax
08560cdb +0x009:  mov    0x4(%eax),%eax
08560cde +0x00c:  cmp    $0x4,%eax
08560ce1 +0x00f:  jne    08560d32 <+0x60>
08560ce3 +0x011:  movl   $0x2,0x8(%esp)
08560ceb +0x019:  movl   $0x4,0x4(%esp)
08560cf3 +0x021:  mov    0x8(%ebp),%eax
08560cf6 +0x024:  mov    %eax,(%esp)
08560cf9 +0x027:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08560cfe +0x02c:  mov    0x8(%ebp),%eax
08560d01 +0x02f:  movl   $0x0,0x4(%eax)
08560d08 +0x036:  mov    0x10(%ebp),%eax
08560d0b +0x039:  mov    %eax,(%esp)
08560d0e +0x03c:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
08560d13 +0x041:  mov    0xc(%ebp),%edx
08560d16 +0x044:  mov    %edx,0xc(%esp)
08560d1a +0x048:  mov    %eax,0x8(%esp)
08560d1e +0x04c:  mov    0x10(%ebp),%eax
08560d21 +0x04f:  mov    %eax,0x4(%esp)
08560d25 +0x053:  mov    0x8(%ebp),%eax
08560d28 +0x056:  mov    %eax,(%esp)
08560d2b +0x059:  call   08561e40 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser>  ; online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*)
08560d30 +0x05e:  jmp    08560da0 <+0xce>
08560d32 +0x060:  mov    0x8(%ebp),%eax
08560d35 +0x063:  mov    0x4(%eax),%eax
08560d38 +0x066:  cmp    $0x5,%eax
08560d3b +0x069:  jne    08560d96 <+0xc4>
08560d3d +0x06b:  mov    0x14(%ebp),%eax
08560d40 +0x06e:  mov    %eax,0x4(%esp)
08560d44 +0x072:  mov    0x10(%ebp),%eax
08560d47 +0x075:  mov    %eax,(%esp)
08560d4a +0x078:  call   08568d22 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6ec>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6ec
08560d4f +0x07d:  cmp    $0x1,%eax
08560d52 +0x080:  sete   %al
08560d55 +0x083:  test   %al,%al
08560d57 +0x085:  je     08560da0 <+0xce>
08560d59 +0x087:  movl   $0x0,0x8(%esp)
08560d61 +0x08f:  mov    0x14(%ebp),%eax
08560d64 +0x092:  mov    %eax,0x4(%esp)
08560d68 +0x096:  mov    0x8(%ebp),%eax
08560d6b +0x099:  mov    %eax,(%esp)
08560d6e +0x09c:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08560d73 +0x0a1:  mov    0x14(%ebp),%eax
08560d76 +0x0a4:  mov    %eax,0x4(%esp)
08560d7a +0x0a8:  mov    0x8(%ebp),%eax
08560d7d +0x0ab:  mov    %eax,(%esp)
08560d80 +0x0ae:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
08560d85 +0x0b3:  mov    %eax,0x4(%esp)
08560d89 +0x0b7:  mov    0x8(%ebp),%eax
08560d8c +0x0ba:  mov    %eax,(%esp)
08560d8f +0x0bd:  call   08560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM)
08560d94 +0x0c2:  jmp    08560da0 <+0xce>
08560d96 +0x0c4:  mov    0x8(%ebp),%eax
08560d99 +0x0c7:  movl   $0x0,0x4(%eax)
08560da0 +0x0ce:  cmpl   $0x1,0x14(%ebp)
08560da4 +0x0d2:  jne    08560dbd <+0xeb>
08560da6 +0x0d4:  mov    0x8(%ebp),%eax
08560da9 +0x0d7:  lea    0x1c(%eax),%edx
08560dac +0x0da:  mov    0xc(%ebp),%eax
08560daf +0x0dd:  mov    %eax,0x4(%esp)
08560db3 +0x0e1:  mov    %edx,(%esp)
08560db6 +0x0e4:  call   0855fe54 <_ZN14TeamInfoSecond3delEP5CUser>  ; TeamInfoSecond::del(CUser*)
08560dbb +0x0e9:  jmp    08560dd2 <+0x100>
08560dbd +0x0eb:  mov    0x8(%ebp),%eax
08560dc0 +0x0ee:  lea    0x44(%eax),%edx
08560dc3 +0x0f1:  mov    0xc(%ebp),%eax
08560dc6 +0x0f4:  mov    %eax,0x4(%esp)
08560dca +0x0f8:  mov    %edx,(%esp)
08560dcd +0x0fb:  call   0855fe54 <_ZN14TeamInfoSecond3delEP5CUser>  ; TeamInfoSecond::del(CUser*)
08560dd2 +0x100:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08560dd7 +0x105:  mov    (%eax),%eax
08560dd9 +0x107:  add    $0x4,%eax
08560ddc +0x10a:  mov    (%eax),%ecx
08560dde +0x10c:  mov    0x8(%ebp),%edx
08560de1 +0x10f:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08560de6 +0x114:  mov    %edx,0x4(%esp)
08560dea +0x118:  mov    %eax,(%esp)
08560ded +0x11b:  call   *%ecx
08560def +0x11d:  leave
08560df0 +0x11e:  ret
08560df1 +0x11f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnLeaveRoom @ 0x8560cd2

/* online_preliminary::COnlinePreliminary::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void online_preliminary::COnlinePreliminary::OnLeaveRoom
               (CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 4) {
    _SendMatchStatePacket((COnlinePreliminary *)param_1,4,2);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = PvP_Room::get_manager_team((PvP_Room *)param_3);
    _ReturnTeam((COnlinePreliminary *)param_1,(PvP_Room *)param_3,iVar1,(CUser *)param_2);
  }
  else if (*(int *)(param_1 + 4) == 5) {
    iVar1 = PvP_Room::GetTeamCount((PvP_Room *)param_3,param_4);
    if (iVar1 == 1) {
      _UpdateRating((COnlinePreliminary *)param_1,param_4,0);
      uVar2 = _GetTeam((COnlinePreliminary *)param_1,param_4);
      _IncreaseLoseCount((COnlinePreliminary *)param_1,uVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_4 == 1) {
    TeamInfoSecond::del((TeamInfoSecond *)(param_1 + 0x1c),(CUser *)param_2);
  }
  else {
    TeamInfoSecond::del((TeamInfoSecond *)(param_1 + 0x44),(CUser *)param_2);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}
```
