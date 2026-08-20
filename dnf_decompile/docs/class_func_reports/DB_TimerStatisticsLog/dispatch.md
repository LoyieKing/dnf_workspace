# dispatch

`_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream`

`DB_TimerStatisticsLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TimerStatisticsLog` | `0x08427c06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427c06  _ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream
#           DB_TimerStatisticsLog::dispatch(int, int, Stream*)
# range [0x08427c06, 0x08427dfb]
08427c06 +0x000:  push   %ebp
08427c07 +0x001:  mov    %esp,%ebp
08427c09 +0x003:  sub    $0x18,%esp
08427c0c +0x006:  mov    $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,%eax
08427c11 +0x00b:  movzbl (%eax),%eax
08427c14 +0x00e:  test   %al,%al
08427c16 +0x010:  jne    08427c62 <+0x5c>
08427c18 +0x012:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,(%esp)
08427c1f +0x019:  call   08725330 <__cxa_guard_acquire>
08427c24 +0x01e:  test   %eax,%eax
08427c26 +0x020:  setne  %al
08427c29 +0x023:  test   %al,%al
08427c2b +0x025:  je     08427c62 <+0x5c>
08427c2d +0x027:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,(%esp)
08427c34 +0x02e:  call   0844e0c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xcdc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xcdc
08427c39 +0x033:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,(%esp)
08427c40 +0x03a:  call   08725250 <__cxa_guard_release>
08427c45 +0x03f:  mov    $&_ZN18DB_CrashDownReportD1Ev,%eax
08427c4a +0x044:  movl   $&__dso_handle,0x8(%esp)
08427c52 +0x04c:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,0x4(%esp)
08427c5a +0x054:  mov    %eax,(%esp)
08427c5d +0x057:  call   0807ddd0 <_init+0x6c8>
08427c62 +0x05c:  mov    0x14(%ebp),%eax
08427c65 +0x05f:  mov    %eax,0xc(%esp)
08427c69 +0x063:  mov    0x10(%ebp),%eax
08427c6c +0x066:  mov    %eax,0x8(%esp)
08427c70 +0x06a:  mov    0xc(%ebp),%eax
08427c73 +0x06d:  mov    %eax,0x4(%esp)
08427c77 +0x071:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17crash_down_report,(%esp)
08427c7e +0x078:  call   0841abc6 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream>  ; DB_CrashDownReport::dispatch(int, int, Stream*)
08427c83 +0x07d:  mov    $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,%eax
08427c88 +0x082:  movzbl (%eax),%eax
08427c8b +0x085:  test   %al,%al
08427c8d +0x087:  jne    08427cd9 <+0xd3>
08427c8f +0x089:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,(%esp)
08427c96 +0x090:  call   08725330 <__cxa_guard_acquire>
08427c9b +0x095:  test   %eax,%eax
08427c9d +0x097:  setne  %al
08427ca0 +0x09a:  test   %al,%al
08427ca2 +0x09c:  je     08427cd9 <+0xd3>
08427ca4 +0x09e:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,(%esp)
08427cab +0x0a5:  call   0844e16e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd84>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd84
08427cb0 +0x0aa:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,(%esp)
08427cb7 +0x0b1:  call   08725250 <__cxa_guard_release>
08427cbc +0x0b6:  mov    $&_ZN18DB_StatDungeonFailD1Ev,%eax
08427cc1 +0x0bb:  movl   $&__dso_handle,0x8(%esp)
08427cc9 +0x0c3:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,0x4(%esp)
08427cd1 +0x0cb:  mov    %eax,(%esp)
08427cd4 +0x0ce:  call   0807ddd0 <_init+0x6c8>
08427cd9 +0x0d3:  mov    0x14(%ebp),%eax
08427cdc +0x0d6:  mov    %eax,0xc(%esp)
08427ce0 +0x0da:  mov    0x10(%ebp),%eax
08427ce3 +0x0dd:  mov    %eax,0x8(%esp)
08427ce7 +0x0e1:  mov    0xc(%ebp),%eax
08427cea +0x0e4:  mov    %eax,0x4(%esp)
08427cee +0x0e8:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE17stat_dungeon_fail,(%esp)
08427cf5 +0x0ef:  call   0841b6e0 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream>  ; DB_StatDungeonFail::dispatch(int, int, Stream*)
08427cfa +0x0f4:  mov    $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,%eax
08427cff +0x0f9:  movzbl (%eax),%eax
08427d02 +0x0fc:  test   %al,%al
08427d04 +0x0fe:  jne    08427d50 <+0x14a>
08427d06 +0x100:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,(%esp)
08427d0d +0x107:  call   08725330 <__cxa_guard_acquire>
08427d12 +0x10c:  test   %eax,%eax
08427d14 +0x10e:  setne  %al
08427d17 +0x111:  test   %al,%al
08427d19 +0x113:  je     08427d50 <+0x14a>
08427d1b +0x115:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,(%esp)
08427d22 +0x11c:  call   0844e18a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xda0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xda0
08427d27 +0x121:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,(%esp)
08427d2e +0x128:  call   08725250 <__cxa_guard_release>
08427d33 +0x12d:  mov    $&_ZN15DB_StatPVPPlay2D1Ev,%eax
08427d38 +0x132:  movl   $&__dso_handle,0x8(%esp)
08427d40 +0x13a:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,0x4(%esp)
08427d48 +0x142:  mov    %eax,(%esp)
08427d4b +0x145:  call   0807ddd0 <_init+0x6c8>
08427d50 +0x14a:  mov    0x14(%ebp),%eax
08427d53 +0x14d:  mov    %eax,0xc(%esp)
08427d57 +0x151:  mov    0x10(%ebp),%eax
08427d5a +0x154:  mov    %eax,0x8(%esp)
08427d5e +0x158:  mov    0xc(%ebp),%eax
08427d61 +0x15b:  mov    %eax,0x4(%esp)
08427d65 +0x15f:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE14stat_pvp_play2,(%esp)
08427d6c +0x166:  call   0841ba96 <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream>  ; DB_StatPVPPlay2::dispatch(int, int, Stream*)
08427d71 +0x16b:  mov    $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,%eax
08427d76 +0x170:  movzbl (%eax),%eax
08427d79 +0x173:  test   %al,%al
08427d7b +0x175:  jne    08427dc7 <+0x1c1>
08427d7d +0x177:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,(%esp)
08427d84 +0x17e:  call   08725330 <__cxa_guard_acquire>
08427d89 +0x183:  test   %eax,%eax
08427d8b +0x185:  setne  %al
08427d8e +0x188:  test   %al,%al
08427d90 +0x18a:  je     08427dc7 <+0x1c1>
08427d92 +0x18c:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,(%esp)
08427d99 +0x193:  call   0844e1a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xdbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xdbc
08427d9e +0x198:  movl   $&_ZGVZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,(%esp)
08427da5 +0x19f:  call   08725250 <__cxa_guard_release>
08427daa +0x1a4:  mov    $&_ZN23DB_StatUseShusiaServiceD1Ev,%eax
08427daf +0x1a9:  movl   $&__dso_handle,0x8(%esp)
08427db7 +0x1b1:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,0x4(%esp)
08427dbf +0x1b9:  mov    %eax,(%esp)
08427dc2 +0x1bc:  call   0807ddd0 <_init+0x6c8>
08427dc7 +0x1c1:  mov    0x14(%ebp),%eax
08427dca +0x1c4:  mov    %eax,0xc(%esp)
08427dce +0x1c8:  mov    0x10(%ebp),%eax
08427dd1 +0x1cb:  mov    %eax,0x8(%esp)
08427dd5 +0x1cf:  mov    0xc(%ebp),%eax
08427dd8 +0x1d2:  mov    %eax,0x4(%esp)
08427ddc +0x1d6:  movl   $&_ZZN21DB_TimerStatisticsLog8dispatchEiiP6StreamE23stat_use_shusia_service,(%esp)
08427de3 +0x1dd:  call   0841bce4 <_ZN23DB_StatUseShusiaService8dispatchEiiP6Stream>  ; DB_StatUseShusiaService::dispatch(int, int, Stream*)
08427de8 +0x1e2:  call   0860cfa5 <_Z38GetInstanceClientCrashDownLogStatisticv>  ; GetInstanceClientCrashDownLogStatistic()
08427ded +0x1e7:  mov    %eax,(%esp)
08427df0 +0x1ea:  call   0860d072 <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv>  ; CClientCrashDownLogStatistic::CarryClientCrashDown()
08427df5 +0x1ef:  mov    $0x1,%eax
08427dfa +0x1f4:  leave
08427dfb +0x1f5:  ret
```

## 反编译 C

```c
// DB_TimerStatisticsLog::dispatch @ 0x8427c06

/* DB_TimerStatisticsLog::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_TimerStatisticsLog::dispatch(DB_TimerStatisticsLog *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  CClientCrashDownLogStatistic *this_00;
  int iVar2;
  Stream *pSVar3;
  
  if (dispatch(int,int,Stream*)::crash_down_report == '\0') {
    iVar1 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::crash_down_report);
    if (iVar1 != 0) {
      DB_CrashDownReport::DB_CrashDownReport
                ((DB_CrashDownReport *)&dispatch(int,int,Stream*)::crash_down_report);
      __cxa_guard_release(&dispatch(int,int,Stream*)::crash_down_report);
      __cxa_atexit(DB_CrashDownReport::~DB_CrashDownReport,
                   &dispatch(int,int,Stream*)::crash_down_report,&__dso_handle);
    }
  }
  iVar1 = param_1;
  iVar2 = param_2;
  pSVar3 = param_3;
  DB_CrashDownReport::dispatch(0x943c218,param_1,(Stream *)param_2);
  if (dispatch(int,int,Stream*)::stat_dungeon_fail == '\0') {
    iVar1 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::stat_dungeon_fail,iVar1,iVar2,pSVar3);
    if (iVar1 != 0) {
      DB_StatDungeonFail::DB_StatDungeonFail
                ((DB_StatDungeonFail *)&dispatch(int,int,Stream*)::stat_dungeon_fail);
      __cxa_guard_release(&dispatch(int,int,Stream*)::stat_dungeon_fail);
      __cxa_atexit(DB_StatDungeonFail::~DB_StatDungeonFail,
                   &dispatch(int,int,Stream*)::stat_dungeon_fail,&__dso_handle);
    }
  }
  iVar1 = param_1;
  iVar2 = param_2;
  pSVar3 = param_3;
  DB_StatDungeonFail::dispatch(0x943c21c,param_1,(Stream *)param_2);
  if (dispatch(int,int,Stream*)::stat_pvp_play2 == '\0') {
    iVar1 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::stat_pvp_play2,iVar1,iVar2,pSVar3);
    if (iVar1 != 0) {
      DB_StatPVPPlay2::DB_StatPVPPlay2
                ((DB_StatPVPPlay2 *)&dispatch(int,int,Stream*)::stat_pvp_play2);
      __cxa_guard_release(&dispatch(int,int,Stream*)::stat_pvp_play2);
      __cxa_atexit(DB_StatPVPPlay2::~DB_StatPVPPlay2,&dispatch(int,int,Stream*)::stat_pvp_play2,
                   &__dso_handle);
    }
  }
  iVar1 = param_1;
  iVar2 = param_2;
  DB_StatPVPPlay2::dispatch(0x943c220,param_1,(Stream *)param_2);
  if (dispatch(int,int,Stream*)::stat_use_shusia_service == '\0') {
    iVar1 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::stat_use_shusia_service,iVar1,iVar2,
                                param_3);
    if (iVar1 != 0) {
      DB_StatUseShusiaService::DB_StatUseShusiaService
                ((DB_StatUseShusiaService *)&dispatch(int,int,Stream*)::stat_use_shusia_service);
      __cxa_guard_release(&dispatch(int,int,Stream*)::stat_use_shusia_service);
      __cxa_atexit(DB_StatUseShusiaService::~DB_StatUseShusiaService,
                   &dispatch(int,int,Stream*)::stat_use_shusia_service,&__dso_handle);
    }
  }
  DB_StatUseShusiaService::dispatch(0x943c224,param_1,(Stream *)param_2);
  this_00 = (CClientCrashDownLogStatistic *)GetInstanceClientCrashDownLogStatistic();
  CClientCrashDownLogStatistic::CarryClientCrashDown(this_00);
  return 1;
}
```
