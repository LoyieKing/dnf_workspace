# UpdateScore

`_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii`

`fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565700  _ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii
#           fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)
# range [0x08565700, 0x08565965]
08565700 +0x000:  push   %ebp
08565701 +0x001:  mov    %esp,%ebp
08565703 +0x003:  push   %edi
08565704 +0x004:  push   %esi
08565705 +0x005:  push   %ebx
08565706 +0x006:  sub    $0x6c,%esp
08565709 +0x009:  movl   $0x0,-0x28(%ebp)
08565710 +0x010:  movl   $0x0,-0x28(%ebp)
08565717 +0x017:  jmp    08565949 <+0x249>
0856571c +0x01c:  mov    0x14(%ebp),%edx
0856571f +0x01f:  mov    -0x28(%ebp),%eax
08565722 +0x022:  mov    0x8(%ebp),%ecx
08565725 +0x025:  mov    %eax,%ebx
08565727 +0x027:  shl    $0x4,%ebx
0856572a +0x02a:  mov    %edx,%eax
0856572c +0x02c:  shl    $0x3,%eax
0856572f +0x02f:  add    %edx,%eax
08565731 +0x031:  shl    $0x3,%eax
08565734 +0x034:  lea    (%ebx,%eax,1),%eax
08565737 +0x037:  lea    (%ecx,%eax,1),%eax
0856573a +0x03a:  add    $0x24,%eax
0856573d +0x03d:  mov    (%eax),%eax
0856573f +0x03f:  mov    %eax,-0x24(%ebp)
08565742 +0x042:  mov    0x14(%ebp),%edx
08565745 +0x045:  mov    -0x28(%ebp),%eax
08565748 +0x048:  mov    0x8(%ebp),%ecx
0856574b +0x04b:  mov    %eax,%ebx
0856574d +0x04d:  shl    $0x4,%ebx
08565750 +0x050:  mov    %edx,%eax
08565752 +0x052:  shl    $0x3,%eax
08565755 +0x055:  add    %edx,%eax
08565757 +0x057:  shl    $0x3,%eax
0856575a +0x05a:  lea    (%ebx,%eax,1),%eax
0856575d +0x05d:  lea    (%ecx,%eax,1),%eax
08565760 +0x060:  add    $0x10,%eax
08565763 +0x063:  movzbl 0x18(%eax),%eax
08565767 +0x067:  test   %al,%al
08565769 +0x069:  je     08565945 <+0x245>
0856576f +0x06f:  cmpl   $0x0,-0x24(%ebp)
08565773 +0x073:  je     08565945 <+0x245>
08565779 +0x079:  mov    -0x24(%ebp),%eax
0856577c +0x07c:  mov    %eax,0x4(%esp)
08565780 +0x080:  mov    0xc(%ebp),%eax
08565783 +0x083:  mov    %eax,(%esp)
08565786 +0x086:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
0856578b +0x08b:  mov    %eax,-0x20(%ebp)
0856578e +0x08e:  cmpl   $0x0,-0x20(%ebp)
08565792 +0x092:  js     0856595a <+0x25a>
08565798 +0x098:  cmpl   $0x7,-0x20(%ebp)
0856579c +0x09c:  jg     0856595d <+0x25d>
085657a2 +0x0a2:  mov    0xc(%ebp),%eax
085657a5 +0x0a5:  mov    %eax,(%esp)
085657a8 +0x0a8:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085657ad +0x0ad:  mov    %eax,-0x50(%ebp)
085657b0 +0x0b0:  mov    0xc(%ebp),%eax
085657b3 +0x0b3:  mov    %eax,(%esp)
085657b6 +0x0b6:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085657bb +0x0bb:  mov    %eax,%edi
085657bd +0x0bd:  mov    -0x24(%ebp),%eax
085657c0 +0x0c0:  mov    %eax,(%esp)
085657c3 +0x0c3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085657c8 +0x0c8:  mov    %eax,%esi
085657ca +0x0ca:  mov    -0x24(%ebp),%eax
085657cd +0x0cd:  mov    %eax,(%esp)
085657d0 +0x0d0:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085657d5 +0x0d5:  mov    %eax,%ebx
085657d7 +0x0d7:  movl   $0x0,0x10(%esp)
085657df +0x0df:  movl   $0x0,0xc(%esp)
085657e7 +0x0e7:  movl   $0xee5,0x8(%esp)
085657ef +0x0ef:  movl   $&_ZZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiiiE19__PRETTY_FUNCTION__,0x4(%esp)
085657f7 +0x0f7:  lea    -0x38(%ebp),%eax
085657fa +0x0fa:  mov    %eax,(%esp)
085657fd +0x0fd:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08565802 +0x102:  mov    0x1c(%ebp),%eax
08565805 +0x105:  mov    %eax,0x1c(%esp)
08565809 +0x109:  mov    0x18(%ebp),%eax
0856580c +0x10c:  mov    %eax,0x18(%esp)
08565810 +0x110:  mov    -0x50(%ebp),%eax
08565813 +0x113:  mov    %eax,0x14(%esp)
08565817 +0x117:  mov    %edi,0x10(%esp)
0856581b +0x11b:  mov    %esi,0xc(%esp)
0856581f +0x11f:  mov    %ebx,0x8(%esp)
08565823 +0x123:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d",0x4(%esp)
0856582b +0x12b:  lea    -0x38(%ebp),%eax
0856582e +0x12e:  mov    %eax,(%esp)
08565831 +0x131:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08565836 +0x136:  mov    0xc(%ebp),%eax
08565839 +0x139:  lea    0x620(%eax),%edx
0856583f +0x13f:  mov    -0x20(%ebp),%eax
08565842 +0x142:  mov    %eax,0x4(%esp)
08565846 +0x146:  mov    %edx,(%esp)
08565849 +0x149:  call   08568cee <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6b8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6b8
0856584e +0x14e:  mov    %eax,%ebx
08565850 +0x150:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08565855 +0x155:  movzbl %al,%edi
08565858 +0x158:  mov    0x10(%ebp),%eax
0856585b +0x15b:  movzbl 0x6(%eax),%eax
0856585f +0x15f:  movzbl %al,%eax
08565862 +0x162:  mov    %eax,%edx
08565864 +0x164:  and    $0xf,%edx
08565867 +0x167:  mov    %edx,-0x4c(%ebp)
0856586a +0x16a:  mov    0x10(%ebp),%eax
0856586d +0x16d:  movzbl 0x5(%eax),%eax
08565871 +0x171:  movzbl %al,%esi
08565874 +0x174:  movl   $0x7,0x4(%esp)
0856587c +0x17c:  mov    -0x24(%ebp),%eax
0856587f +0x17f:  mov    %eax,(%esp)
08565882 +0x182:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565887 +0x187:  mov    %ebx,0x1c(%esp)
0856588b +0x18b:  mov    0x20(%ebp),%edx
0856588e +0x18e:  mov    %edx,0x18(%esp)
08565892 +0x192:  mov    0x1c(%ebp),%edx
08565895 +0x195:  mov    %edx,0x14(%esp)
08565899 +0x199:  mov    0x18(%ebp),%edx
0856589c +0x19c:  mov    %edx,0x10(%esp)
085658a0 +0x1a0:  mov    %edi,0xc(%esp)
085658a4 +0x1a4:  mov    -0x4c(%ebp),%edx
085658a7 +0x1a7:  mov    %edx,0x8(%esp)
085658ab +0x1ab:  mov    %esi,0x4(%esp)
085658af +0x1af:  mov    %eax,(%esp)
085658b2 +0x1b2:  call   084a5a28 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii>  ; fair_pvp::CFairPvPScore::UpdateScore(int, int, int, int, int, int, int)
085658b7 +0x1b7:  movl   $0x8,0x4(%esp)
085658bf +0x1bf:  mov    -0x24(%ebp),%eax
085658c2 +0x1c2:  mov    %eax,(%esp)
085658c5 +0x1c5:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085658ca +0x1ca:  mov    %eax,-0x1c(%ebp)
085658cd +0x1cd:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
085658d2 +0x1d2:  cmp    $0x1,%al
085658d4 +0x1d4:  jne    085658dd <+0x1dd>
085658d6 +0x1d6:  mov    $0x2,%eax
085658db +0x1db:  jmp    085658e2 <+0x1e2>
085658dd +0x1dd:  mov    $0x3,%eax
085658e2 +0x1e2:  mov    %eax,0x4(%esp)
085658e6 +0x1e6:  lea    -0x47(%ebp),%eax
085658e9 +0x1e9:  mov    %eax,(%esp)
085658ec +0x1ec:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085658f1 +0x1f1:  mov    0xc(%ebp),%eax
085658f4 +0x1f4:  lea    0x620(%eax),%edx
085658fa +0x1fa:  mov    -0x20(%ebp),%eax
085658fd +0x1fd:  mov    %eax,0x4(%esp)
08565901 +0x201:  mov    %edx,(%esp)
08565904 +0x204:  call   08568cee <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6b8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6b8
08565909 +0x209:  mov    %eax,-0x44(%ebp)
0856590c +0x20c:  lea    -0x47(%ebp),%eax
0856590f +0x20f:  mov    %eax,0x8(%esp)
08565913 +0x213:  mov    -0x24(%ebp),%eax
08565916 +0x216:  mov    %eax,0x4(%esp)
0856591a +0x21a:  mov    -0x1c(%ebp),%eax
0856591d +0x21d:  mov    %eax,(%esp)
08565920 +0x220:  call   085e5e4a <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter>  ; CMissionList_Charac::Update_GameOver_event(CUser&, MissionClearCondition_Parameter const&)
08565925 +0x225:  cmpl   $0x0,0x18(%ebp)
08565929 +0x229:  setne  %al
0856592c +0x22c:  movzbl %al,%eax
0856592f +0x22f:  mov    %eax,0x8(%esp)
08565933 +0x233:  mov    -0x24(%ebp),%eax
08565936 +0x236:  mov    %eax,0x4(%esp)
0856593a +0x23a:  mov    0x8(%ebp),%eax
0856593d +0x23d:  mov    %eax,(%esp)
08565940 +0x240:  call   085652c8 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb>  ; fair_pvp::CFairMatch::GiveTrainingSeal(CUser*, bool)
08565945 +0x245:  addl   $0x1,-0x28(%ebp)
08565949 +0x249:  cmpl   $0x3,-0x28(%ebp)
0856594d +0x24d:  setle  %al
08565950 +0x250:  test   %al,%al
08565952 +0x252:  jne    0856571c <+0x1c>
08565958 +0x258:  jmp    0856595e <+0x25e>
0856595a +0x25a:  nop
0856595b +0x25b:  jmp    0856595e <+0x25e>
0856595d +0x25d:  nop
0856595e +0x25e:  add    $0x6c,%esp
08565961 +0x261:  pop    %ebx
08565962 +0x262:  pop    %esi
08565963 +0x263:  pop    %edi
08565964 +0x264:  pop    %ebp
08565965 +0x265:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::UpdateScore @ 0x8565700

/* fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM,
   int, int, int) */

void __thiscall
fair_pvp::CFairMatch::UpdateScore
          (CFairMatch *this,PvP_Room *param_1,int param_2,int param_4,int param_5,int param_6,
          int param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  CFairPvPScore *this_00;
  MissionClearCondition_Parameter local_4b [3];
  undefined4 local_48;
  CSwitchLog local_3c [16];
  int local_2c;
  CUser *local_28;
  int local_24;
  CMissionList_Charac *local_20;
  
  local_2c = 0;
  do {
    if (3 < local_2c) {
      return;
    }
    local_28 = *(CUser **)(this + local_2c * 0x10 + param_4 * 0x48 + 0x24);
    if ((this[local_2c * 0x10 + param_4 * 0x48 + 0x28] != (CFairMatch)0x0) &&
       (local_28 != (CUser *)0x0)) {
      local_24 = PvP_Room::get_user_seat(param_1,local_28);
      if (local_24 < 0) {
        return;
      }
      if (7 < local_24) {
        return;
      }
      uVar4 = PvP_Room::get_pvp_battle_mode(param_1);
      uVar5 = PvP_Room::get_index(param_1);
      uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
      uVar7 = CUser::get_acc_name(local_28);
      CSwitchLog::CSwitchLog
                (local_3c,
                 "void fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)"
                 ,0xee5,0,0);
      CSwitchLog::operator()
                (local_3c,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar5,uVar4,param_5,param_6)
      ;
      iVar8 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(param_1 + 0x620),local_24);
      uVar9 = GetPlayCountPerOneTeam();
      bVar1 = *(byte *)(param_2 + 6);
      bVar2 = *(byte *)(param_2 + 5);
      this_00 = (CFairPvPScore *)CUser::GetCharacExpandData(local_28,7);
      CFairPvPScore::UpdateScore
                (this_00,(uint)bVar2,bVar1 & 0xf,uVar9 & 0xff,param_5,param_6,param_7,iVar8);
      local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_28,8);
      cVar3 = GetPlayCountPerOneTeam();
      if (cVar3 == '\x01') {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_4b,uVar4);
      local_48 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(param_1 + 0x620),local_24);
      CMissionList_Charac::Update_GameOver_event(local_20,local_28,local_4b);
      GiveTrainingSeal(this,local_28,param_5 != 0);
    }
    local_2c = local_2c + 1;
  } while( true );
}
```
