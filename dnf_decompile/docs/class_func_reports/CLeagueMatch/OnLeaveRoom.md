# OnLeaveRoom

`_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii`

`CLeagueMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d1c0  _ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii
#           CLeagueMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)
# range [0x0855d1c0, 0x0855d3d1]
0855d1c0 +0x000:  push   %ebp
0855d1c1 +0x001:  mov    %esp,%ebp
0855d1c3 +0x003:  sub    $0x28,%esp
0855d1c6 +0x006:  mov    0x8(%ebp),%eax
0855d1c9 +0x009:  mov    0x4(%eax),%eax
0855d1cc +0x00c:  cmp    $0x4,%eax
0855d1cf +0x00f:  jne    0855d223 <+0x63>
0855d1d1 +0x011:  movl   $0x2,0x8(%esp)
0855d1d9 +0x019:  movl   $0x4,0x4(%esp)
0855d1e1 +0x021:  mov    0x8(%ebp),%eax
0855d1e4 +0x024:  mov    %eax,(%esp)
0855d1e7 +0x027:  call   0855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>  ; CLeagueMatch::_SendMatchStatePacket(int, int)
0855d1ec +0x02c:  mov    0x8(%ebp),%eax
0855d1ef +0x02f:  movl   $0x0,0x4(%eax)
0855d1f6 +0x036:  mov    0x10(%ebp),%eax
0855d1f9 +0x039:  mov    %eax,(%esp)
0855d1fc +0x03c:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
0855d201 +0x041:  mov    0xc(%ebp),%edx
0855d204 +0x044:  mov    %edx,0xc(%esp)
0855d208 +0x048:  mov    %eax,0x8(%esp)
0855d20c +0x04c:  mov    0x10(%ebp),%eax
0855d20f +0x04f:  mov    %eax,0x4(%esp)
0855d213 +0x053:  mov    0x8(%ebp),%eax
0855d216 +0x056:  mov    %eax,(%esp)
0855d219 +0x059:  call   0855e378 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*)
0855d21e +0x05e:  jmp    0855d37d <+0x1bd>
0855d223 +0x063:  mov    0x8(%ebp),%eax
0855d226 +0x066:  mov    0x4(%eax),%eax
0855d229 +0x069:  cmp    $0x5,%eax
0855d22c +0x06c:  jne    0855d373 <+0x1b3>
0855d232 +0x072:  movl   $0x0,-0xc(%ebp)
0855d239 +0x079:  movl   $0x0,-0xc(%ebp)
0855d240 +0x080:  jmp    0855d327 <+0x167>
0855d245 +0x085:  cmpl   $0x1,0x14(%ebp)
0855d249 +0x089:  jne    0855d2b8 <+0xf8>
0855d24b +0x08b:  mov    -0xc(%ebp),%eax
0855d24e +0x08e:  mov    0x8(%ebp),%ecx
0855d251 +0x091:  lea    0x0(,%eax,4),%edx
0855d258 +0x098:  lea    0x0(,%edx,8),%eax
0855d25f +0x09f:  sub    %edx,%eax
0855d261 +0x0a1:  lea    (%ecx,%eax,1),%eax
0855d264 +0x0a4:  add    $0x24,%eax
0855d267 +0x0a7:  mov    (%eax),%eax
0855d269 +0x0a9:  cmp    0xc(%ebp),%eax
0855d26c +0x0ac:  jne    0855d323 <+0x163>
0855d272 +0x0b2:  mov    -0xc(%ebp),%eax
0855d275 +0x0b5:  mov    0x8(%ebp),%ecx
0855d278 +0x0b8:  lea    0x0(,%eax,4),%edx
0855d27f +0x0bf:  lea    0x0(,%edx,8),%eax
0855d286 +0x0c6:  sub    %edx,%eax
0855d288 +0x0c8:  lea    (%ecx,%eax,1),%eax
0855d28b +0x0cb:  add    $0x20,%eax
0855d28e +0x0ce:  mov    (%eax),%eax
0855d290 +0x0d0:  mov    %eax,-0x10(%ebp)
0855d293 +0x0d3:  mov    -0xc(%ebp),%eax
0855d296 +0x0d6:  mov    0x8(%ebp),%ecx
0855d299 +0x0d9:  lea    0x0(,%eax,4),%edx
0855d2a0 +0x0e0:  lea    0x0(,%edx,8),%eax
0855d2a7 +0x0e7:  sub    %edx,%eax
0855d2a9 +0x0e9:  lea    (%ecx,%eax,1),%eax
0855d2ac +0x0ec:  add    $0x90,%eax
0855d2b1 +0x0f1:  mov    (%eax),%eax
0855d2b3 +0x0f3:  mov    %eax,-0x14(%ebp)
0855d2b6 +0x0f6:  jmp    0855d336 <+0x176>
0855d2b8 +0x0f8:  mov    -0xc(%ebp),%eax
0855d2bb +0x0fb:  mov    0x8(%ebp),%ecx
0855d2be +0x0fe:  lea    0x0(,%eax,4),%edx
0855d2c5 +0x105:  lea    0x0(,%edx,8),%eax
0855d2cc +0x10c:  sub    %edx,%eax
0855d2ce +0x10e:  lea    (%ecx,%eax,1),%eax
0855d2d1 +0x111:  add    $0x94,%eax
0855d2d6 +0x116:  mov    (%eax),%eax
0855d2d8 +0x118:  cmp    0xc(%ebp),%eax
0855d2db +0x11b:  jne    0855d323 <+0x163>
0855d2dd +0x11d:  mov    -0xc(%ebp),%eax
0855d2e0 +0x120:  mov    0x8(%ebp),%ecx
0855d2e3 +0x123:  lea    0x0(,%eax,4),%edx
0855d2ea +0x12a:  lea    0x0(,%edx,8),%eax
0855d2f1 +0x131:  sub    %edx,%eax
0855d2f3 +0x133:  lea    (%ecx,%eax,1),%eax
0855d2f6 +0x136:  add    $0x90,%eax
0855d2fb +0x13b:  mov    (%eax),%eax
0855d2fd +0x13d:  mov    %eax,-0x10(%ebp)
0855d300 +0x140:  mov    -0xc(%ebp),%eax
0855d303 +0x143:  mov    0x8(%ebp),%ecx
0855d306 +0x146:  lea    0x0(,%eax,4),%edx
0855d30d +0x14d:  lea    0x0(,%edx,8),%eax
0855d314 +0x154:  sub    %edx,%eax
0855d316 +0x156:  lea    (%ecx,%eax,1),%eax
0855d319 +0x159:  add    $0x20,%eax
0855d31c +0x15c:  mov    (%eax),%eax
0855d31e +0x15e:  mov    %eax,-0x14(%ebp)
0855d321 +0x161:  jmp    0855d336 <+0x176>
0855d323 +0x163:  addl   $0x1,-0xc(%ebp)
0855d327 +0x167:  cmpl   $0x3,-0xc(%ebp)
0855d32b +0x16b:  setle  %al
0855d32e +0x16e:  test   %al,%al
0855d330 +0x170:  jne    0855d245 <+0x85>
0855d336 +0x176:  cmpl   $0x3,-0xc(%ebp)
0855d33a +0x17a:  jg     0855d37d <+0x1bd>
0855d33c +0x17c:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
0855d341 +0x181:  mov    %eax,0xc(%esp)
0855d345 +0x185:  movl   $0x0,0x8(%esp)
0855d34d +0x18d:  lea    -0x14(%ebp),%eax
0855d350 +0x190:  mov    %eax,0x4(%esp)
0855d354 +0x194:  lea    -0x10(%ebp),%eax
0855d357 +0x197:  mov    %eax,(%esp)
0855d35a +0x19a:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
0855d35f +0x19f:  mov    -0x10(%ebp),%eax
0855d362 +0x1a2:  mov    %eax,0x4(%esp)
0855d366 +0x1a6:  mov    0xc(%ebp),%eax
0855d369 +0x1a9:  mov    %eax,(%esp)
0855d36c +0x1ac:  call   08568e9c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x866>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x866
0855d371 +0x1b1:  jmp    0855d37d <+0x1bd>
0855d373 +0x1b3:  mov    0x8(%ebp),%eax
0855d376 +0x1b6:  movl   $0x0,0x4(%eax)
0855d37d +0x1bd:  cmpl   $0x1,0x14(%ebp)
0855d381 +0x1c1:  jne    0855d39a <+0x1da>
0855d383 +0x1c3:  mov    0x8(%ebp),%eax
0855d386 +0x1c6:  lea    0x1c(%eax),%edx
0855d389 +0x1c9:  mov    0xc(%ebp),%eax
0855d38c +0x1cc:  mov    %eax,0x4(%esp)
0855d390 +0x1d0:  mov    %edx,(%esp)
0855d393 +0x1d3:  call   0855cc9c <_ZN8TeamInfo3delEP5CUser>  ; TeamInfo::del(CUser*)
0855d398 +0x1d8:  jmp    0855d3b2 <+0x1f2>
0855d39a +0x1da:  mov    0x8(%ebp),%eax
0855d39d +0x1dd:  lea    0x8c(%eax),%edx
0855d3a3 +0x1e3:  mov    0xc(%ebp),%eax
0855d3a6 +0x1e6:  mov    %eax,0x4(%esp)
0855d3aa +0x1ea:  mov    %edx,(%esp)
0855d3ad +0x1ed:  call   0855cc9c <_ZN8TeamInfo3delEP5CUser>  ; TeamInfo::del(CUser*)
0855d3b2 +0x1f2:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855d3b7 +0x1f7:  mov    (%eax),%eax
0855d3b9 +0x1f9:  add    $0x4,%eax
0855d3bc +0x1fc:  mov    (%eax),%ecx
0855d3be +0x1fe:  mov    0x8(%ebp),%edx
0855d3c1 +0x201:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855d3c6 +0x206:  mov    %edx,0x4(%esp)
0855d3ca +0x20a:  mov    %eax,(%esp)
0855d3cd +0x20d:  call   *%ecx
0855d3cf +0x20f:  leave
0855d3d0 +0x210:  ret
0855d3d1 +0x211:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnLeaveRoom @ 0x855d1c0

/* CLeagueMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void CLeagueMatch::OnLeaveRoom(CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  float local_14;
  int local_10;
  
  if (*(int *)(param_1 + 4) == 4) {
    _SendMatchStatePacket((CLeagueMatch *)param_1,4,2);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = PvP_Room::get_manager_team((PvP_Room *)param_3);
    _ReturnTeam((CLeagueMatch *)param_1,(PvP_Room *)param_3,iVar1,(CUser *)param_2);
  }
  else if (*(int *)(param_1 + 4) == 5) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (param_4 == 1) {
        if (*(PvP_Room **)(param_1 + local_10 * 0x1c + 0x24) == param_2) {
          local_14 = *(float *)(param_1 + local_10 * 0x1c + 0x20);
          local_18 = *(undefined4 *)(param_1 + local_10 * 0x1c + 0x90);
          break;
        }
      }
      else if (*(PvP_Room **)(param_1 + local_10 * 0x1c + 0x94) == param_2) {
        local_14 = *(float *)(param_1 + local_10 * 0x1c + 0x90);
        local_18 = *(undefined4 *)(param_1 + local_10 * 0x1c + 0x20);
        break;
      }
    }
    if (local_10 < 4) {
      CEloRating::calc(&local_14,&local_18,0,PvPGlobalEnvironmentVariable::school_match_elo_k_);
      CUser::UpdateRating((CUser *)param_2,local_14);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_4 == 1) {
    TeamInfo::del((TeamInfo *)(param_1 + 0x1c),(CUser *)param_2);
  }
  else {
    TeamInfo::del((TeamInfo *)(param_1 + 0x8c),(CUser *)param_2);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}
```
