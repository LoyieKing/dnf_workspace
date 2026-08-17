# DB_TimerStatisticsLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08427c06 DB_TimerStatisticsLog::dispatch  [0x08427c06-0x8427dfb] ===
 8427c06:	55                   	push   %ebp
 8427c07:	89 e5                	mov    %esp,%ebp
 8427c09:	83 ec 18             	sub    $0x18,%esp
 8427c0c:	b8 f8 c1 43 09       	mov    $0x943c1f8,%eax
 8427c11:	0f b6 00             	movzbl (%eax),%eax
 8427c14:	84 c0                	test   %al,%al
 8427c16:	75 4a                	jne    8427c62 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x5c>
 8427c18:	c7 04 24 f8 c1 43 09 	movl   $0x943c1f8,(%esp)
 8427c1f:	e8 0c d7 2f 00       	call   8725330 <__cxa_guard_acquire>
 8427c24:	85 c0                	test   %eax,%eax
 8427c26:	0f 95 c0             	setne  %al
 8427c29:	84 c0                	test   %al,%al
 8427c2b:	74 35                	je     8427c62 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x5c>
 8427c2d:	c7 04 24 18 c2 43 09 	movl   $0x943c218,(%esp)
 8427c34:	e8 8d 64 02 00       	call   844e0c6 <_ZN18DB_CrashDownReportC1Ev>
 8427c39:	c7 04 24 f8 c1 43 09 	movl   $0x943c1f8,(%esp)
 8427c40:	e8 0b d6 2f 00       	call   8725250 <__cxa_guard_release>
 8427c45:	b8 22 00 45 08       	mov    $0x8450022,%eax
 8427c4a:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8427c51:	08 
 8427c52:	c7 44 24 04 18 c2 43 	movl   $0x943c218,0x4(%esp)
 8427c59:	09 
 8427c5a:	89 04 24             	mov    %eax,(%esp)
 8427c5d:	e8 6e 61 c5 ff       	call   807ddd0 <__cxa_atexit@plt>
 8427c62:	8b 45 14             	mov    0x14(%ebp),%eax
 8427c65:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427c69:	8b 45 10             	mov    0x10(%ebp),%eax
 8427c6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427c70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8427c73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427c77:	c7 04 24 18 c2 43 09 	movl   $0x943c218,(%esp)
 8427c7e:	e8 43 2f ff ff       	call   841abc6 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream>
 8427c83:	b8 00 c2 43 09       	mov    $0x943c200,%eax
 8427c88:	0f b6 00             	movzbl (%eax),%eax
 8427c8b:	84 c0                	test   %al,%al
 8427c8d:	75 4a                	jne    8427cd9 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0xd3>
 8427c8f:	c7 04 24 00 c2 43 09 	movl   $0x943c200,(%esp)
 8427c96:	e8 95 d6 2f 00       	call   8725330 <__cxa_guard_acquire>
 8427c9b:	85 c0                	test   %eax,%eax
 8427c9d:	0f 95 c0             	setne  %al
 8427ca0:	84 c0                	test   %al,%al
 8427ca2:	74 35                	je     8427cd9 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0xd3>
 8427ca4:	c7 04 24 1c c2 43 09 	movl   $0x943c21c,(%esp)
 8427cab:	e8 be 64 02 00       	call   844e16e <_ZN18DB_StatDungeonFailC1Ev>
 8427cb0:	c7 04 24 00 c2 43 09 	movl   $0x943c200,(%esp)
 8427cb7:	e8 94 d5 2f 00       	call   8725250 <__cxa_guard_release>
 8427cbc:	b8 70 00 45 08       	mov    $0x8450070,%eax
 8427cc1:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8427cc8:	08 
 8427cc9:	c7 44 24 04 1c c2 43 	movl   $0x943c21c,0x4(%esp)
 8427cd0:	09 
 8427cd1:	89 04 24             	mov    %eax,(%esp)
 8427cd4:	e8 f7 60 c5 ff       	call   807ddd0 <__cxa_atexit@plt>
 8427cd9:	8b 45 14             	mov    0x14(%ebp),%eax
 8427cdc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427ce0:	8b 45 10             	mov    0x10(%ebp),%eax
 8427ce3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427ce7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8427cea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427cee:	c7 04 24 1c c2 43 09 	movl   $0x943c21c,(%esp)
 8427cf5:	e8 e6 39 ff ff       	call   841b6e0 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream>
 8427cfa:	b8 08 c2 43 09       	mov    $0x943c208,%eax
 8427cff:	0f b6 00             	movzbl (%eax),%eax
 8427d02:	84 c0                	test   %al,%al
 8427d04:	75 4a                	jne    8427d50 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x14a>
 8427d06:	c7 04 24 08 c2 43 09 	movl   $0x943c208,(%esp)
 8427d0d:	e8 1e d6 2f 00       	call   8725330 <__cxa_guard_acquire>
 8427d12:	85 c0                	test   %eax,%eax
 8427d14:	0f 95 c0             	setne  %al
 8427d17:	84 c0                	test   %al,%al
 8427d19:	74 35                	je     8427d50 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x14a>
 8427d1b:	c7 04 24 20 c2 43 09 	movl   $0x943c220,(%esp)
 8427d22:	e8 63 64 02 00       	call   844e18a <_ZN15DB_StatPVPPlay2C1Ev>
 8427d27:	c7 04 24 08 c2 43 09 	movl   $0x943c208,(%esp)
 8427d2e:	e8 1d d5 2f 00       	call   8725250 <__cxa_guard_release>
 8427d33:	b8 be 00 45 08       	mov    $0x84500be,%eax
 8427d38:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8427d3f:	08 
 8427d40:	c7 44 24 04 20 c2 43 	movl   $0x943c220,0x4(%esp)
 8427d47:	09 
 8427d48:	89 04 24             	mov    %eax,(%esp)
 8427d4b:	e8 80 60 c5 ff       	call   807ddd0 <__cxa_atexit@plt>
 8427d50:	8b 45 14             	mov    0x14(%ebp),%eax
 8427d53:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427d57:	8b 45 10             	mov    0x10(%ebp),%eax
 8427d5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8427d61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427d65:	c7 04 24 20 c2 43 09 	movl   $0x943c220,(%esp)
 8427d6c:	e8 25 3d ff ff       	call   841ba96 <_ZN15DB_StatPVPPlay28dispatchEiiP6Stream>
 8427d71:	b8 10 c2 43 09       	mov    $0x943c210,%eax
 8427d76:	0f b6 00             	movzbl (%eax),%eax
 8427d79:	84 c0                	test   %al,%al
 8427d7b:	75 4a                	jne    8427dc7 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x1c1>
 8427d7d:	c7 04 24 10 c2 43 09 	movl   $0x943c210,(%esp)
 8427d84:	e8 a7 d5 2f 00       	call   8725330 <__cxa_guard_acquire>
 8427d89:	85 c0                	test   %eax,%eax
 8427d8b:	0f 95 c0             	setne  %al
 8427d8e:	84 c0                	test   %al,%al
 8427d90:	74 35                	je     8427dc7 <_ZN21DB_TimerStatisticsLog8dispatchEiiP6Stream+0x1c1>
 8427d92:	c7 04 24 24 c2 43 09 	movl   $0x943c224,(%esp)
 8427d99:	e8 08 64 02 00       	call   844e1a6 <_ZN23DB_StatUseShusiaServiceC1Ev>
 8427d9e:	c7 04 24 10 c2 43 09 	movl   $0x943c210,(%esp)
 8427da5:	e8 a6 d4 2f 00       	call   8725250 <__cxa_guard_release>
 8427daa:	b8 0c 01 45 08       	mov    $0x845010c,%eax
 8427daf:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8427db6:	08 
 8427db7:	c7 44 24 04 24 c2 43 	movl   $0x943c224,0x4(%esp)
 8427dbe:	09 
 8427dbf:	89 04 24             	mov    %eax,(%esp)
 8427dc2:	e8 09 60 c5 ff       	call   807ddd0 <__cxa_atexit@plt>
 8427dc7:	8b 45 14             	mov    0x14(%ebp),%eax
 8427dca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427dce:	8b 45 10             	mov    0x10(%ebp),%eax
 8427dd1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8427dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427ddc:	c7 04 24 24 c2 43 09 	movl   $0x943c224,(%esp)
 8427de3:	e8 fc 3e ff ff       	call   841bce4 <_ZN23DB_StatUseShusiaService8dispatchEiiP6Stream>
 8427de8:	e8 b8 51 1e 00       	call   860cfa5 <_Z38GetInstanceClientCrashDownLogStatisticv>
 8427ded:	89 04 24             	mov    %eax,(%esp)
 8427df0:	e8 7d 52 1e 00       	call   860d072 <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv>
 8427df5:	b8 01 00 00 00       	mov    $0x1,%eax
 8427dfa:	c9                   	leave
 8427dfb:	c3                   	ret

```

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

