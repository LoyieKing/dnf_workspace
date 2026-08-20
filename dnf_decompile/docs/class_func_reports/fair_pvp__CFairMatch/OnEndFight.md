# OnEndFight

`_ZN8fair_pvp10CFairMatch10OnEndFightEP8PvP_Room`

`fair_pvp::CFairMatch::OnEndFight(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565048  _ZN8fair_pvp10CFairMatch10OnEndFightEP8PvP_Room
#           fair_pvp::CFairMatch::OnEndFight(PvP_Room*)
# range [0x08565048, 0x0856513f]
08565048 +0x00:  push   %ebp
08565049 +0x01:  mov    %esp,%ebp
0856504b +0x03:  push   %edi
0856504c +0x04:  push   %esi
0856504d +0x05:  push   %ebx
0856504e +0x06:  sub    $0x3c,%esp
08565051 +0x09:  mov    0xc(%ebp),%eax
08565054 +0x0c:  mov    %eax,(%esp)
08565057 +0x0f:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
0856505c +0x14:  mov    %eax,-0x20(%ebp)
0856505f +0x17:  mov    0x8(%ebp),%eax
08565062 +0x1a:  movl   $0x0,0x4(%eax)
08565069 +0x21:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
0856506e +0x26:  cmp    $0x1,%al
08565070 +0x28:  setne  %al
08565073 +0x2b:  test   %al,%al
08565075 +0x2d:  je     085650d8 <+0x90>
08565077 +0x2f:  mov    -0x20(%ebp),%eax
0856507a +0x32:  movl   $0x0,0xc(%esp)
08565082 +0x3a:  mov    %eax,0x8(%esp)
08565086 +0x3e:  mov    0xc(%ebp),%eax
08565089 +0x41:  mov    %eax,0x4(%esp)
0856508d +0x45:  mov    0x8(%ebp),%eax
08565090 +0x48:  mov    %eax,(%esp)
08565093 +0x4b:  call   08564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
08565098 +0x50:  mov    %eax,-0x1c(%ebp)
0856509b +0x53:  cmpl   $0x1,-0x20(%ebp)
0856509f +0x57:  je     085650ba <+0x72>
085650a1 +0x59:  mov    0x8(%ebp),%edx
085650a4 +0x5c:  mov    0x8(%ebp),%eax
085650a7 +0x5f:  add    $0x1c,%edx
085650aa +0x62:  lea    0x64(%eax),%ebx
085650ad +0x65:  mov    $0x12,%eax
085650b2 +0x6a:  mov    %edx,%edi
085650b4 +0x6c:  mov    %ebx,%esi
085650b6 +0x6e:  mov    %eax,%ecx
085650b8 +0x70:  rep movsl %ds:(%esi),%es:(%edi)
085650ba +0x72:  mov    0x8(%ebp),%eax
085650bd +0x75:  add    $0x1c,%eax
085650c0 +0x78:  mov    %eax,(%esp)
085650c3 +0x7b:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
085650c8 +0x80:  mov    0x8(%ebp),%eax
085650cb +0x83:  add    $0x64,%eax
085650ce +0x86:  mov    %eax,(%esp)
085650d1 +0x89:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
085650d6 +0x8e:  jmp    08565137 <+0xef>
085650d8 +0x90:  movl   $0x3e,0x4(%esp)
085650e0 +0x98:  mov    0xc(%ebp),%eax
085650e3 +0x9b:  mov    %eax,(%esp)
085650e6 +0x9e:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085650eb +0xa3:  mov    %eax,%esi
085650ed +0xa5:  mov    0xc(%ebp),%eax
085650f0 +0xa8:  mov    %eax,(%esp)
085650f3 +0xab:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085650f8 +0xb0:  mov    %eax,%ebx
085650fa +0xb2:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085650ff +0xb7:  movl   $0x0,0x1c(%esp)
08565107 +0xbf:  mov    %esi,0x18(%esp)
0856510b +0xc3:  movl   $0x0,0x10(%esp)
08565113 +0xcb:  movl   $0x0,0x14(%esp)
0856511b +0xd3:  movl   $0x3e,0xc(%esp)
08565123 +0xdb:  mov    %ebx,0x8(%esp)
08565127 +0xdf:  movl   $0x1,0x4(%esp)
0856512f +0xe7:  mov    %eax,(%esp)
08565132 +0xea:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
08565137 +0xef:  add    $0x3c,%esp
0856513a +0xf2:  pop    %ebx
0856513b +0xf3:  pop    %esi
0856513c +0xf4:  pop    %edi
0856513d +0xf5:  pop    %ebp
0856513e +0xf6:  ret
0856513f +0xf7:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnEndFight @ 0x8565048

/* fair_pvp::CFairMatch::OnEndFight(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnEndFight(CFairMatch *this,PvP_Room *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CFairMatch *pCVar6;
  CFairMatch *pCVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar3 = PvP_Room::gen_timer_key(param_1,0x3e);
    uVar4 = PvP_Room::get_index(param_1);
    uVar5 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar5,1,uVar4,0x3e,0,0,uVar3,0);
  }
  else {
    _ReturnTeam(this,param_1,iVar2,(CUser *)0x0);
    if (iVar2 != 1) {
      pCVar6 = this + 100;
      pCVar7 = this + 0x1c;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
        pCVar6 = pCVar6 + (uint)bVar8 * -8 + 4;
        pCVar7 = pCVar7 + (uint)bVar8 * -8 + 4;
      }
    }
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
  }
  return;
}
```
