# CDeathMatchBattleMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## IncreaseDeathCount

```asm
// === 085def34 CDeathMatchBattleMgr::IncreaseDeathCount  [0x085def34-0x85def5f] ===
 85def34:	55                   	push   %ebp
 85def35:	89 e5                	mov    %esp,%ebp
 85def37:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85def3b:	78 20                	js     85def5d <_ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi+0x29>
 85def3d:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85def41:	7f 1a                	jg     85def5d <_ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi+0x29>
 85def43:	8b 45 0c             	mov    0xc(%ebp),%eax
 85def46:	8b 55 08             	mov    0x8(%ebp),%edx
 85def49:	8d 48 08             	lea    0x8(%eax),%ecx
 85def4c:	8b 54 8a 04          	mov    0x4(%edx,%ecx,4),%edx
 85def50:	8d 4a 01             	lea    0x1(%edx),%ecx
 85def53:	8b 55 08             	mov    0x8(%ebp),%edx
 85def56:	83 c0 08             	add    $0x8,%eax
 85def59:	89 4c 82 04          	mov    %ecx,0x4(%edx,%eax,4)
 85def5d:	5d                   	pop    %ebp
 85def5e:	c3                   	ret
 85def5f:	90                   	nop

```

```c
// CDeathMatchBattleMgr::IncreaseDeathCount @ 0x85def34

/* CDeathMatchBattleMgr::IncreaseDeathCount(int) */

void __thiscall CDeathMatchBattleMgr::IncreaseDeathCount(CDeathMatchBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(int *)(this + (param_1 + 8) * 4 + 4) = *(int *)(this + (param_1 + 8) * 4 + 4) + 1;
  }
  return;
}

```

---

## IncreaseKillCount

```asm
// === 085def0e CDeathMatchBattleMgr::IncreaseKillCount  [0x085def0e-0x85def33] ===
 85def0e:	55                   	push   %ebp
 85def0f:	89 e5                	mov    %esp,%ebp
 85def11:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85def15:	78 1a                	js     85def31 <_ZN20CDeathMatchBattleMgr17IncreaseKillCountEi+0x23>
 85def17:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85def1b:	7f 14                	jg     85def31 <_ZN20CDeathMatchBattleMgr17IncreaseKillCountEi+0x23>
 85def1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85def20:	8b 55 08             	mov    0x8(%ebp),%edx
 85def23:	8b 54 82 04          	mov    0x4(%edx,%eax,4),%edx
 85def27:	8d 4a 01             	lea    0x1(%edx),%ecx
 85def2a:	8b 55 08             	mov    0x8(%ebp),%edx
 85def2d:	89 4c 82 04          	mov    %ecx,0x4(%edx,%eax,4)
 85def31:	5d                   	pop    %ebp
 85def32:	c3                   	ret
 85def33:	90                   	nop

```

```c
// CDeathMatchBattleMgr::IncreaseKillCount @ 0x85def0e

/* CDeathMatchBattleMgr::IncreaseKillCount(int) */

void __thiscall CDeathMatchBattleMgr::IncreaseKillCount(CDeathMatchBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(int *)(this + param_1 * 4 + 4) = *(int *)(this + param_1 * 4 + 4) + 1;
  }
  return;
}

```

---

## InsertTimerKilledUserForRevive

```asm
// === 085def60 CDeathMatchBattleMgr::InsertTimerKilledUserForRevive  [0x085def60-0x85defc5] ===
 85def60:	55                   	push   %ebp
 85def61:	89 e5                	mov    %esp,%ebp
 85def63:	56                   	push   %esi
 85def64:	53                   	push   %ebx
 85def65:	83 ec 20             	sub    $0x20,%esp
 85def68:	8b 45 10             	mov    0x10(%ebp),%eax
 85def6b:	83 c0 33             	add    $0x33,%eax
 85def6e:	89 c2                	mov    %eax,%edx
 85def70:	8b 45 08             	mov    0x8(%ebp),%eax
 85def73:	8b 00                	mov    (%eax),%eax
 85def75:	89 54 24 04          	mov    %edx,0x4(%esp)
 85def79:	89 04 24             	mov    %eax,(%esp)
 85def7c:	e8 0f 9e f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85def81:	89 c3                	mov    %eax,%ebx
 85def83:	8b 45 10             	mov    0x10(%ebp),%eax
 85def86:	83 c0 33             	add    $0x33,%eax
 85def89:	89 c6                	mov    %eax,%esi
 85def8b:	e8 ec 74 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85def90:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85def97:	00 
 85def98:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 85def9c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 85defa3:	00 
 85defa4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85defa8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85defab:	89 54 24 08          	mov    %edx,0x8(%esp)
 85defaf:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 85defb6:	00 
 85defb7:	89 04 24             	mov    %eax,(%esp)
 85defba:	e8 57 1e 05 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 85defbf:	83 c4 20             	add    $0x20,%esp
 85defc2:	5b                   	pop    %ebx
 85defc3:	5e                   	pop    %esi
 85defc4:	5d                   	pop    %ebp
 85defc5:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::InsertTimerKilledUserForRevive @ 0x85def60

/* CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int) */

void __thiscall
CDeathMatchBattleMgr::InsertTimerKilledUserForRevive
          (CDeathMatchBattleMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  TimerQueue *pTVar2;
  
  uVar1 = PvP_Room::gen_timer_key(*(PvP_Room **)this,param_2 + 0x33);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,5,param_1,param_2 + 0x33,3,uVar1,0);
  return;
}

```

---

## OnChangeTeam

```asm
// === 085dee9c CDeathMatchBattleMgr::OnChangeTeam  [0x085dee9c-0x85deead] ===
 85dee9c:	55                   	push   %ebp
 85dee9d:	89 e5                	mov    %esp,%ebp
 85dee9f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85deea3:	78 06                	js     85deeab <_ZN20CDeathMatchBattleMgr12OnChangeTeamEii+0xf>
 85deea5:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85deea9:	eb 01                	jmp    85deeac <_ZN20CDeathMatchBattleMgr12OnChangeTeamEii+0x10>
 85deeab:	90                   	nop
 85deeac:	5d                   	pop    %ebp
 85deead:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::OnChangeTeam @ 0x85dee9c

/* CDeathMatchBattleMgr::OnChangeTeam(int, int) */

void CDeathMatchBattleMgr::OnChangeTeam(int param_1,int param_2)

{
  return;
}

```

---

## OnCreateRoom

```asm
// === 085dee66 CDeathMatchBattleMgr::OnCreateRoom  [0x085dee66-0x85dee77] ===
 85dee66:	55                   	push   %ebp
 85dee67:	89 e5                	mov    %esp,%ebp
 85dee69:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dee6d:	78 06                	js     85dee75 <_ZN20CDeathMatchBattleMgr12OnCreateRoomEi+0xf>
 85dee6f:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85dee73:	eb 01                	jmp    85dee76 <_ZN20CDeathMatchBattleMgr12OnCreateRoomEi+0x10>
 85dee75:	90                   	nop
 85dee76:	5d                   	pop    %ebp
 85dee77:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::OnCreateRoom @ 0x85dee66

/* CDeathMatchBattleMgr::OnCreateRoom(int) */

void CDeathMatchBattleMgr::OnCreateRoom(int param_1)

{
  return;
}

```

---

## OnFight

```asm
// === 085defc6 CDeathMatchBattleMgr::OnFight  [0x085defc6-0x85defcb] ===
 85defc6:	55                   	push   %ebp
 85defc7:	89 e5                	mov    %esp,%ebp
 85defc9:	5d                   	pop    %ebp
 85defca:	c3                   	ret
 85defcb:	90                   	nop

```

```c
// CDeathMatchBattleMgr::OnFight @ 0x85defc6

/* CDeathMatchBattleMgr::OnFight() */

void CDeathMatchBattleMgr::OnFight(void)

{
  return;
}

```

---

## OnJoinRoom

```asm
// === 085dee78 CDeathMatchBattleMgr::OnJoinRoom  [0x085dee78-0x85dee89] ===
 85dee78:	55                   	push   %ebp
 85dee79:	89 e5                	mov    %esp,%ebp
 85dee7b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dee7f:	78 06                	js     85dee87 <_ZN20CDeathMatchBattleMgr10OnJoinRoomEi+0xf>
 85dee81:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85dee85:	eb 01                	jmp    85dee88 <_ZN20CDeathMatchBattleMgr10OnJoinRoomEi+0x10>
 85dee87:	90                   	nop
 85dee88:	5d                   	pop    %ebp
 85dee89:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::OnJoinRoom @ 0x85dee78

/* CDeathMatchBattleMgr::OnJoinRoom(int) */

void CDeathMatchBattleMgr::OnJoinRoom(int param_1)

{
  return;
}

```

---

## OnLeaveRoom

```asm
// === 085dee8a CDeathMatchBattleMgr::OnLeaveRoom  [0x085dee8a-0x85dee9b] ===
 85dee8a:	55                   	push   %ebp
 85dee8b:	89 e5                	mov    %esp,%ebp
 85dee8d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dee91:	78 06                	js     85dee99 <_ZN20CDeathMatchBattleMgr11OnLeaveRoomEi+0xf>
 85dee93:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85dee97:	eb 01                	jmp    85dee9a <_ZN20CDeathMatchBattleMgr11OnLeaveRoomEi+0x10>
 85dee99:	90                   	nop
 85dee9a:	5d                   	pop    %ebp
 85dee9b:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::OnLeaveRoom @ 0x85dee8a

/* CDeathMatchBattleMgr::OnLeaveRoom(int) */

void CDeathMatchBattleMgr::OnLeaveRoom(int param_1)

{
  return;
}

```

---

## OnReady

```asm
// === 085deeae CDeathMatchBattleMgr::OnReady  [0x085deeae-0x85deec9] ===
 85deeae:	55                   	push   %ebp
 85deeaf:	89 e5                	mov    %esp,%ebp
 85deeb1:	83 ec 04             	sub    $0x4,%esp
 85deeb4:	8b 45 10             	mov    0x10(%ebp),%eax
 85deeb7:	88 45 fc             	mov    %al,-0x4(%ebp)
 85deeba:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85deebe:	78 06                	js     85deec6 <_ZN20CDeathMatchBattleMgr7OnReadyEib+0x18>
 85deec0:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85deec4:	eb 01                	jmp    85deec7 <_ZN20CDeathMatchBattleMgr7OnReadyEib+0x19>
 85deec6:	90                   	nop
 85deec7:	c9                   	leave
 85deec8:	c3                   	ret
 85deec9:	90                   	nop

```

```c
// CDeathMatchBattleMgr::OnReady @ 0x85deeae

/* CDeathMatchBattleMgr::OnReady(int, bool) */

void CDeathMatchBattleMgr::OnReady(int param_1,bool param_2)

{
  return;
}

```

---

## OnStart

```asm
// === 085deeca CDeathMatchBattleMgr::OnStart  [0x085deeca-0x85def0d] ===
 85deeca:	55                   	push   %ebp
 85deecb:	89 e5                	mov    %esp,%ebp
 85deecd:	83 ec 18             	sub    $0x18,%esp
 85deed0:	8b 45 08             	mov    0x8(%ebp),%eax
 85deed3:	83 c0 04             	add    $0x4,%eax
 85deed6:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85deedd:	00 
 85deede:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85deee5:	00 
 85deee6:	89 04 24             	mov    %eax,(%esp)
 85deee9:	e8 d2 ed a9 ff       	call   807dcc0 <memset@plt>
 85deeee:	8b 45 08             	mov    0x8(%ebp),%eax
 85deef1:	83 c0 24             	add    $0x24,%eax
 85deef4:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85deefb:	00 
 85deefc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85def03:	00 
 85def04:	89 04 24             	mov    %eax,(%esp)
 85def07:	e8 b4 ed a9 ff       	call   807dcc0 <memset@plt>
 85def0c:	c9                   	leave
 85def0d:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::OnStart @ 0x85deeca

/* CDeathMatchBattleMgr::OnStart() */

void __thiscall CDeathMatchBattleMgr::OnStart(CDeathMatchBattleMgr *this)

{
  memset(this + 4,0,0x20);
  memset(this + 0x24,0,0x20);
  return;
}

```

---

## Reset

```asm
// === 085dee22 CDeathMatchBattleMgr::Reset  [0x085dee22-0x85dee65] ===
 85dee22:	55                   	push   %ebp
 85dee23:	89 e5                	mov    %esp,%ebp
 85dee25:	83 ec 18             	sub    $0x18,%esp
 85dee28:	8b 45 08             	mov    0x8(%ebp),%eax
 85dee2b:	83 c0 04             	add    $0x4,%eax
 85dee2e:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85dee35:	00 
 85dee36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dee3d:	00 
 85dee3e:	89 04 24             	mov    %eax,(%esp)
 85dee41:	e8 7a ee a9 ff       	call   807dcc0 <memset@plt>
 85dee46:	8b 45 08             	mov    0x8(%ebp),%eax
 85dee49:	83 c0 24             	add    $0x24,%eax
 85dee4c:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85dee53:	00 
 85dee54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dee5b:	00 
 85dee5c:	89 04 24             	mov    %eax,(%esp)
 85dee5f:	e8 5c ee a9 ff       	call   807dcc0 <memset@plt>
 85dee64:	c9                   	leave
 85dee65:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::Reset @ 0x85dee22

/* CDeathMatchBattleMgr::Reset() */

void __thiscall CDeathMatchBattleMgr::Reset(CDeathMatchBattleMgr *this)

{
  memset(this + 4,0,0x20);
  memset(this + 0x24,0,0x20);
  return;
}

```

---

## checkGameOverForSinglePlay

```asm
// === 085df012 CDeathMatchBattleMgr::checkGameOverForSinglePlay  [0x085df012-0x85df125] ===
 85df012:	55                   	push   %ebp
 85df013:	89 e5                	mov    %esp,%ebp
 85df015:	83 ec 04             	sub    $0x4,%esp
 85df018:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85df01c:	75 0a                	jne    85df028 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x16>
 85df01e:	b8 01 00 00 00       	mov    $0x1,%eax
 85df023:	e9 fb 00 00 00       	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df028:	83 7d 0c 08          	cmpl   $0x8,0xc(%ebp)
 85df02c:	0f 87 ec 00 00 00    	ja     85df11e <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x10c>
 85df032:	8b 45 0c             	mov    0xc(%ebp),%eax
 85df035:	c1 e0 02             	shl    $0x2,%eax
 85df038:	8b 80 30 14 cc 08    	mov    0x8cc1430(%eax),%eax
 85df03e:	ff e0                	jmp    *%eax
 85df040:	8b 45 08             	mov    0x8(%ebp),%eax
 85df043:	89 04 24             	mov    %eax,(%esp)
 85df046:	e8 81 ff ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df04b:	83 f8 06             	cmp    $0x6,%eax
 85df04e:	0f 9f c0             	setg   %al
 85df051:	84 c0                	test   %al,%al
 85df053:	74 0a                	je     85df05f <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x4d>
 85df055:	b8 01 00 00 00       	mov    $0x1,%eax
 85df05a:	e9 c4 00 00 00       	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df05f:	b8 00 00 00 00       	mov    $0x0,%eax
 85df064:	e9 ba 00 00 00       	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df069:	8b 45 08             	mov    0x8(%ebp),%eax
 85df06c:	89 04 24             	mov    %eax,(%esp)
 85df06f:	e8 58 ff ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df074:	83 f8 05             	cmp    $0x5,%eax
 85df077:	0f 9f c0             	setg   %al
 85df07a:	84 c0                	test   %al,%al
 85df07c:	74 0a                	je     85df088 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x76>
 85df07e:	b8 01 00 00 00       	mov    $0x1,%eax
 85df083:	e9 9b 00 00 00       	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df088:	b8 00 00 00 00       	mov    $0x0,%eax
 85df08d:	e9 91 00 00 00       	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df092:	8b 45 08             	mov    0x8(%ebp),%eax
 85df095:	89 04 24             	mov    %eax,(%esp)
 85df098:	e8 2f ff ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df09d:	83 f8 04             	cmp    $0x4,%eax
 85df0a0:	0f 9f c0             	setg   %al
 85df0a3:	84 c0                	test   %al,%al
 85df0a5:	74 07                	je     85df0ae <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x9c>
 85df0a7:	b8 01 00 00 00       	mov    $0x1,%eax
 85df0ac:	eb 75                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0ae:	b8 00 00 00 00       	mov    $0x0,%eax
 85df0b3:	eb 6e                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85df0b8:	89 04 24             	mov    %eax,(%esp)
 85df0bb:	e8 0c ff ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df0c0:	83 f8 03             	cmp    $0x3,%eax
 85df0c3:	0f 9f c0             	setg   %al
 85df0c6:	84 c0                	test   %al,%al
 85df0c8:	74 07                	je     85df0d1 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0xbf>
 85df0ca:	b8 01 00 00 00       	mov    $0x1,%eax
 85df0cf:	eb 52                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0d1:	b8 00 00 00 00       	mov    $0x0,%eax
 85df0d6:	eb 4b                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85df0db:	89 04 24             	mov    %eax,(%esp)
 85df0de:	e8 e9 fe ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df0e3:	83 f8 02             	cmp    $0x2,%eax
 85df0e6:	0f 9f c0             	setg   %al
 85df0e9:	84 c0                	test   %al,%al
 85df0eb:	74 07                	je     85df0f4 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0xe2>
 85df0ed:	b8 01 00 00 00       	mov    $0x1,%eax
 85df0f2:	eb 2f                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0f4:	b8 00 00 00 00       	mov    $0x0,%eax
 85df0f9:	eb 28                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df0fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85df0fe:	89 04 24             	mov    %eax,(%esp)
 85df101:	e8 c6 fe ff ff       	call   85defcc <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv>
 85df106:	83 f8 01             	cmp    $0x1,%eax
 85df109:	0f 9f c0             	setg   %al
 85df10c:	84 c0                	test   %al,%al
 85df10e:	74 07                	je     85df117 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x105>
 85df110:	b8 01 00 00 00       	mov    $0x1,%eax
 85df115:	eb 0c                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df117:	b8 00 00 00 00       	mov    $0x0,%eax
 85df11c:	eb 05                	jmp    85df123 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi+0x111>
 85df11e:	b8 01 00 00 00       	mov    $0x1,%eax
 85df123:	c9                   	leave
 85df124:	c3                   	ret
 85df125:	90                   	nop

```

```c
// CDeathMatchBattleMgr::checkGameOverForSinglePlay @ 0x85df012

/* CDeathMatchBattleMgr::checkGameOverForSinglePlay(int) */

undefined4 __thiscall
CDeathMatchBattleMgr::checkGameOverForSinglePlay(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    switch(param_1) {
    default:
      uVar1 = 1;
      break;
    case 2:
    case 3:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 2) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 4:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 3) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 5:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 4) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 6:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 5) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 7:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 6) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      break;
    case 8:
      iVar2 = getMaxKillCount(this);
      if (iVar2 < 7) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

```

---

## checkGameOverForTeamPlay

```asm
// === 085df126 CDeathMatchBattleMgr::checkGameOverForTeamPlay  [0x085df126-0x85df295] ===
 85df126:	55                   	push   %ebp
 85df127:	89 e5                	mov    %esp,%ebp
 85df129:	83 ec 38             	sub    $0x38,%esp
 85df12c:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 85df130:	75 0a                	jne    85df13c <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16>
 85df132:	b8 01 00 00 00       	mov    $0x1,%eax
 85df137:	e9 58 01 00 00       	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df13c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85df143:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85df14a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85df151:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85df158:	e9 9f 00 00 00       	jmp    85df1fc <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xd6>
 85df15d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df160:	c1 e0 02             	shl    $0x2,%eax
 85df163:	03 45 0c             	add    0xc(%ebp),%eax
 85df166:	8b 00                	mov    (%eax),%eax
 85df168:	85 c0                	test   %eax,%eax
 85df16a:	75 0e                	jne    85df17a <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x54>
 85df16c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85df16f:	8b 45 08             	mov    0x8(%ebp),%eax
 85df172:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df176:	85 c0                	test   %eax,%eax
 85df178:	74 7d                	je     85df1f7 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xd1>
 85df17a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df17d:	03 45 14             	add    0x14(%ebp),%eax
 85df180:	0f b6 00             	movzbl (%eax),%eax
 85df183:	3c 01                	cmp    $0x1,%al
 85df185:	75 0f                	jne    85df196 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x70>
 85df187:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85df18a:	8b 45 08             	mov    0x8(%ebp),%eax
 85df18d:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df191:	01 45 e8             	add    %eax,-0x18(%ebp)
 85df194:	eb 62                	jmp    85df1f8 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xd2>
 85df196:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df199:	03 45 14             	add    0x14(%ebp),%eax
 85df19c:	0f b6 00             	movzbl (%eax),%eax
 85df19f:	3c 02                	cmp    $0x2,%al
 85df1a1:	75 0f                	jne    85df1b2 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x8c>
 85df1a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85df1a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85df1a9:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df1ad:	01 45 ec             	add    %eax,-0x14(%ebp)
 85df1b0:	eb 46                	jmp    85df1f8 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xd2>
 85df1b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df1b5:	03 45 14             	add    0x14(%ebp),%eax
 85df1b8:	0f b6 00             	movzbl (%eax),%eax
 85df1bb:	0f b6 c0             	movzbl %al,%eax
 85df1be:	89 44 24 18          	mov    %eax,0x18(%esp)
 85df1c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df1c5:	89 44 24 14          	mov    %eax,0x14(%esp)
 85df1c9:	c7 44 24 10 54 14 cc 	movl   $0x8cc1454,0x10(%esp)
 85df1d0:	08 
 85df1d1:	c7 44 24 0c 7f 15 00 	movl   $0x157f,0xc(%esp)
 85df1d8:	00 
 85df1d9:	c7 44 24 08 c0 21 cc 	movl   $0x8cc21c0,0x8(%esp)
 85df1e0:	08 
 85df1e1:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85df1e8:	08 
 85df1e9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85df1f0:	e8 15 4a 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85df1f5:	eb 01                	jmp    85df1f8 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xd2>
 85df1f7:	90                   	nop
 85df1f8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85df1fc:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85df200:	0f 9e c0             	setle  %al
 85df203:	84 c0                	test   %al,%al
 85df205:	0f 85 52 ff ff ff    	jne    85df15d <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x37>
 85df20b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85df20e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85df211:	7e 08                	jle    85df21b <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xf5>
 85df213:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85df216:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85df219:	eb 06                	jmp    85df221 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0xfb>
 85df21b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df21e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85df221:	8b 45 10             	mov    0x10(%ebp),%eax
 85df224:	83 f8 02             	cmp    $0x2,%eax
 85df227:	74 3e                	je     85df267 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x141>
 85df229:	83 f8 02             	cmp    $0x2,%eax
 85df22c:	7f 07                	jg     85df235 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x10f>
 85df22e:	83 f8 01             	cmp    $0x1,%eax
 85df231:	74 48                	je     85df27b <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x155>
 85df233:	eb 5a                	jmp    85df28f <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x169>
 85df235:	83 f8 03             	cmp    $0x3,%eax
 85df238:	74 19                	je     85df253 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x12d>
 85df23a:	83 f8 04             	cmp    $0x4,%eax
 85df23d:	75 50                	jne    85df28f <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x169>
 85df23f:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 85df243:	7e 07                	jle    85df24c <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x126>
 85df245:	b8 01 00 00 00       	mov    $0x1,%eax
 85df24a:	eb 48                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df24c:	b8 00 00 00 00       	mov    $0x0,%eax
 85df251:	eb 41                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df253:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85df257:	7e 07                	jle    85df260 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x13a>
 85df259:	b8 01 00 00 00       	mov    $0x1,%eax
 85df25e:	eb 34                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df260:	b8 00 00 00 00       	mov    $0x0,%eax
 85df265:	eb 2d                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df267:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 85df26b:	7e 07                	jle    85df274 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x14e>
 85df26d:	b8 01 00 00 00       	mov    $0x1,%eax
 85df272:	eb 20                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df274:	b8 00 00 00 00       	mov    $0x0,%eax
 85df279:	eb 19                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df27b:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 85df27f:	7e 07                	jle    85df288 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x162>
 85df281:	b8 01 00 00 00       	mov    $0x1,%eax
 85df286:	eb 0c                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df288:	b8 00 00 00 00       	mov    $0x0,%eax
 85df28d:	eb 05                	jmp    85df294 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh+0x16e>
 85df28f:	b8 01 00 00 00       	mov    $0x1,%eax
 85df294:	c9                   	leave
 85df295:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::checkGameOverForTeamPlay @ 0x85df126

/* CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*) */

undefined4 __thiscall
CDeathMatchBattleMgr::checkGameOverForTeamPlay
          (CDeathMatchBattleMgr *this,CUser **param_1,int param_2,uchar *param_3)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == -1) {
    uVar1 = 1;
  }
  else {
    local_1c = 0;
    local_18 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((param_1[local_10] != (CUser *)0x0) || (*(int *)(this + local_10 * 4 + 4) != 0)) {
        if (param_3[local_10] == '\x01') {
          local_1c = local_1c + *(int *)(this + local_10 * 4 + 4);
        }
        else if (param_3[local_10] == '\x02') {
          local_18 = local_18 + *(int *)(this + local_10 * 4 + 4);
        }
        else {
          LogManager::logFormat
                    (1,"pvp.cpp",
                     "bool CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)"
                     ,0x157f,
                     "CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",
                     local_10,(uint)param_3[local_10]);
        }
      }
    }
    if (local_18 < local_1c) {
      local_14 = local_1c;
    }
    else {
      local_14 = local_18;
    }
    if (param_2 == 2) {
      if (local_14 < 5) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      if (param_2 < 3) {
        if (param_2 == 1) {
          if (1 < local_14) {
            return 1;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 3) {
          if (7 < local_14) {
            return 1;
          }
          return 0;
        }
        if (param_2 == 4) {
          if (9 < local_14) {
            return 1;
          }
          return 0;
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## checkWinnerForSinglePlay

```asm
// === 085df48a CDeathMatchBattleMgr::checkWinnerForSinglePlay  [0x085df48a-0x85df523] ===
 85df48a:	55                   	push   %ebp
 85df48b:	89 e5                	mov    %esp,%ebp
 85df48d:	83 ec 28             	sub    $0x28,%esp
 85df490:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85df497:	eb 2a                	jmp    85df4c3 <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable+0x39>
 85df499:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df49c:	c1 e0 02             	shl    $0x2,%eax
 85df49f:	03 45 0c             	add    0xc(%ebp),%eax
 85df4a2:	8b 00                	mov    (%eax),%eax
 85df4a4:	85 c0                	test   %eax,%eax
 85df4a6:	75 0e                	jne    85df4b6 <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable+0x2c>
 85df4a8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85df4ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85df4ae:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 85df4b5:	00 
 85df4b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df4b9:	03 45 10             	add    0x10(%ebp),%eax
 85df4bc:	c6 00 00             	movb   $0x0,(%eax)
 85df4bf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85df4c3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85df4c7:	0f 9e c0             	setle  %al
 85df4ca:	84 c0                	test   %al,%al
 85df4cc:	75 cb                	jne    85df499 <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable+0xf>
 85df4ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85df4d1:	83 c0 04             	add    $0x4,%eax
 85df4d4:	8d 50 20             	lea    0x20(%eax),%edx
 85df4d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85df4da:	83 c0 04             	add    $0x4,%eax
 85df4dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85df4e1:	89 04 24             	mov    %eax,(%esp)
 85df4e4:	e8 f1 0c 00 00       	call   85e01da <_ZSt11max_elementIPiET_S1_S1_>
 85df4e9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85df4ec:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85df4ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85df4f2:	83 c0 04             	add    $0x4,%eax
 85df4f5:	89 d1                	mov    %edx,%ecx
 85df4f7:	29 c1                	sub    %eax,%ecx
 85df4f9:	89 c8                	mov    %ecx,%eax
 85df4fb:	c1 e8 02             	shr    $0x2,%eax
 85df4fe:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85df501:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85df505:	7f 09                	jg     85df510 <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable+0x86>
 85df507:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85df50a:	03 45 10             	add    0x10(%ebp),%eax
 85df50d:	c6 00 01             	movb   $0x1,(%eax)
 85df510:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85df513:	89 44 24 04          	mov    %eax,0x4(%esp)
 85df517:	8b 45 14             	mov    0x14(%ebp),%eax
 85df51a:	89 04 24             	mov    %eax,(%esp)
 85df51d:	e8 3c 63 ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85df522:	c9                   	leave
 85df523:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::checkWinnerForSinglePlay @ 0x85df48a

/* CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&) */

void __thiscall
CDeathMatchBattleMgr::checkWinnerForSinglePlay
          (CDeathMatchBattleMgr *this,CUser **param_1,bool *param_2,PvpUserTable *param_3)

{
  int *piVar1;
  uint uVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1[local_10] == (CUser *)0x0) {
      *(undefined4 *)(this + local_10 * 4 + 4) = 0;
    }
    param_2[local_10] = false;
  }
  piVar1 = std::max_element<int*>((int *)(this + 4),(int *)(this + 0x24));
  uVar2 = (uint)((int)piVar1 - (int)(this + 4)) >> 2;
  if (uVar2 < 8) {
    param_2[uVar2] = true;
  }
  PvpUserTable::SetWinTeam(param_3,uVar2);
  return;
}

```

---

## checkWinnerForTeamPlay

```asm
// === 085df296 CDeathMatchBattleMgr::checkWinnerForTeamPlay  [0x085df296-0x85df489] ===
 85df296:	55                   	push   %ebp
 85df297:	89 e5                	mov    %esp,%ebp
 85df299:	83 ec 48             	sub    $0x48,%esp
 85df29c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85df2a3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85df2aa:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85df2b1:	e9 91 00 00 00       	jmp    85df347 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xb1>
 85df2b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df2b9:	c1 e0 02             	shl    $0x2,%eax
 85df2bc:	03 45 0c             	add    0xc(%ebp),%eax
 85df2bf:	8b 00                	mov    (%eax),%eax
 85df2c1:	85 c0                	test   %eax,%eax
 85df2c3:	74 7d                	je     85df342 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xac>
 85df2c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df2c8:	03 45 14             	add    0x14(%ebp),%eax
 85df2cb:	0f b6 00             	movzbl (%eax),%eax
 85df2ce:	3c 01                	cmp    $0x1,%al
 85df2d0:	75 0f                	jne    85df2e1 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x4b>
 85df2d2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85df2d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85df2d8:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df2dc:	01 45 e4             	add    %eax,-0x1c(%ebp)
 85df2df:	eb 62                	jmp    85df343 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xad>
 85df2e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df2e4:	03 45 14             	add    0x14(%ebp),%eax
 85df2e7:	0f b6 00             	movzbl (%eax),%eax
 85df2ea:	3c 02                	cmp    $0x2,%al
 85df2ec:	75 0f                	jne    85df2fd <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x67>
 85df2ee:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85df2f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85df2f4:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df2f8:	01 45 e8             	add    %eax,-0x18(%ebp)
 85df2fb:	eb 46                	jmp    85df343 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xad>
 85df2fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df300:	03 45 14             	add    0x14(%ebp),%eax
 85df303:	0f b6 00             	movzbl (%eax),%eax
 85df306:	0f b6 c0             	movzbl %al,%eax
 85df309:	89 44 24 18          	mov    %eax,0x18(%esp)
 85df30d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df310:	89 44 24 14          	mov    %eax,0x14(%esp)
 85df314:	c7 44 24 10 54 14 cc 	movl   $0x8cc1454,0x10(%esp)
 85df31b:	08 
 85df31c:	c7 44 24 0c 17 16 00 	movl   $0x1617,0xc(%esp)
 85df323:	00 
 85df324:	c7 44 24 08 40 21 cc 	movl   $0x8cc2140,0x8(%esp)
 85df32b:	08 
 85df32c:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85df333:	08 
 85df334:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85df33b:	e8 ca 48 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85df340:	eb 01                	jmp    85df343 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xad>
 85df342:	90                   	nop
 85df343:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85df347:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85df34b:	0f 9e c0             	setle  %al
 85df34e:	84 c0                	test   %al,%al
 85df350:	0f 85 60 ff ff ff    	jne    85df2b6 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x20>
 85df356:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85df35d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85df364:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85df36b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85df372:	eb 55                	jmp    85df3c9 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x133>
 85df374:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df377:	03 45 10             	add    0x10(%ebp),%eax
 85df37a:	0f b6 00             	movzbl (%eax),%eax
 85df37d:	84 c0                	test   %al,%al
 85df37f:	74 44                	je     85df3c5 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12f>
 85df381:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df384:	c1 e0 02             	shl    $0x2,%eax
 85df387:	03 45 0c             	add    0xc(%ebp),%eax
 85df38a:	8b 00                	mov    (%eax),%eax
 85df38c:	85 c0                	test   %eax,%eax
 85df38e:	74 2e                	je     85df3be <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x128>
 85df390:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df393:	03 45 14             	add    0x14(%ebp),%eax
 85df396:	0f b6 00             	movzbl (%eax),%eax
 85df399:	0f b6 c0             	movzbl %al,%eax
 85df39c:	83 e8 01             	sub    $0x1,%eax
 85df39f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85df3a2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85df3a6:	78 19                	js     85df3c1 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12b>
 85df3a8:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 85df3ac:	7f 16                	jg     85df3c4 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12e>
 85df3ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85df3b1:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 85df3b5:	83 c2 01             	add    $0x1,%edx
 85df3b8:	89 54 85 dc          	mov    %edx,-0x24(%ebp,%eax,4)
 85df3bc:	eb 07                	jmp    85df3c5 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12f>
 85df3be:	90                   	nop
 85df3bf:	eb 04                	jmp    85df3c5 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12f>
 85df3c1:	90                   	nop
 85df3c2:	eb 01                	jmp    85df3c5 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x12f>
 85df3c4:	90                   	nop
 85df3c5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85df3c9:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85df3cd:	0f 9e c0             	setle  %al
 85df3d0:	84 c0                	test   %al,%al
 85df3d2:	75 a0                	jne    85df374 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0xde>
 85df3d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85df3d7:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85df3da:	7d 06                	jge    85df3e2 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x14c>
 85df3dc:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
 85df3e0:	eb 49                	jmp    85df42b <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x195>
 85df3e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85df3e5:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85df3e8:	7e 06                	jle    85df3f0 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x15a>
 85df3ea:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 85df3ee:	eb 3b                	jmp    85df42b <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x195>
 85df3f0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85df3f3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85df3f6:	39 c2                	cmp    %eax,%edx
 85df3f8:	7e 06                	jle    85df400 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x16a>
 85df3fa:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 85df3fe:	eb 2b                	jmp    85df42b <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x195>
 85df400:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85df403:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85df406:	39 c2                	cmp    %eax,%edx
 85df408:	7e 06                	jle    85df410 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x17a>
 85df40a:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
 85df40e:	eb 1b                	jmp    85df42b <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x195>
 85df410:	e8 8b e8 a9 ff       	call   807dca0 <rand@plt>
 85df415:	83 e0 01             	and    $0x1,%eax
 85df418:	84 c0                	test   %al,%al
 85df41a:	74 07                	je     85df423 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x18d>
 85df41c:	b8 02 00 00 00       	mov    $0x2,%eax
 85df421:	eb 05                	jmp    85df428 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x192>
 85df423:	b8 01 00 00 00       	mov    $0x1,%eax
 85df428:	88 45 f7             	mov    %al,-0x9(%ebp)
 85df42b:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 85df432:	00 
 85df433:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85df43a:	00 
 85df43b:	8b 45 10             	mov    0x10(%ebp),%eax
 85df43e:	89 04 24             	mov    %eax,(%esp)
 85df441:	e8 7a e8 a9 ff       	call   807dcc0 <memset@plt>
 85df446:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85df44d:	eb 1b                	jmp    85df46a <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x1d4>
 85df44f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df452:	03 45 14             	add    0x14(%ebp),%eax
 85df455:	0f b6 00             	movzbl (%eax),%eax
 85df458:	3a 45 f7             	cmp    -0x9(%ebp),%al
 85df45b:	75 09                	jne    85df466 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x1d0>
 85df45d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85df460:	03 45 10             	add    0x10(%ebp),%eax
 85df463:	c6 00 01             	movb   $0x1,(%eax)
 85df466:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85df46a:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85df46e:	0f 9e c0             	setle  %al
 85df471:	84 c0                	test   %al,%al
 85df473:	75 da                	jne    85df44f <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable+0x1b9>
 85df475:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 85df479:	89 44 24 04          	mov    %eax,0x4(%esp)
 85df47d:	8b 45 18             	mov    0x18(%ebp),%eax
 85df480:	89 04 24             	mov    %eax,(%esp)
 85df483:	e8 d6 63 ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85df488:	c9                   	leave
 85df489:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::checkWinnerForTeamPlay @ 0x85df296

/* CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&) */

void __thiscall
CDeathMatchBattleMgr::checkWinnerForTeamPlay
          (CDeathMatchBattleMgr *this,CUser **param_1,bool *param_2,uchar *param_3,
          PvpUserTable *param_4)

{
  uint uVar1;
  int aiStack_2c [7];
  byte local_d;
  
  aiStack_2c[3] = 0;
  aiStack_2c[4] = 0;
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if (param_1[aiStack_2c[5]] != (CUser *)0x0) {
      if (param_3[aiStack_2c[5]] == '\x01') {
        aiStack_2c[3] = aiStack_2c[3] + *(int *)(this + aiStack_2c[5] * 4 + 4);
      }
      else if (param_3[aiStack_2c[5]] == '\x02') {
        aiStack_2c[4] = aiStack_2c[4] + *(int *)(this + aiStack_2c[5] * 4 + 4);
      }
      else {
        LogManager::logFormat
                  (1,"pvp.cpp",
                   "void CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)"
                   ,0x1617,
                   "CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",
                   aiStack_2c[5],(uint)param_3[aiStack_2c[5]]);
      }
    }
  }
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[6] = 0;
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if ((((param_2[aiStack_2c[5]] != false) && (param_1[aiStack_2c[5]] != (CUser *)0x0)) &&
        (uVar1 = (uint)param_3[aiStack_2c[5]], aiStack_2c[6] = uVar1 - 1, -1 < aiStack_2c[6])) &&
       (aiStack_2c[6] < 2)) {
      aiStack_2c[uVar1] = aiStack_2c[uVar1] + 1;
    }
  }
  if (aiStack_2c[3] < aiStack_2c[4]) {
    local_d = 2;
  }
  else if (aiStack_2c[4] < aiStack_2c[3]) {
    local_d = 1;
  }
  else if (aiStack_2c[2] < aiStack_2c[1]) {
    local_d = 1;
  }
  else if (aiStack_2c[1] < aiStack_2c[2]) {
    local_d = 2;
  }
  else {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      local_d = 1;
    }
    else {
      local_d = 2;
    }
  }
  memset(param_2,0,8);
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if (param_3[aiStack_2c[5]] == local_d) {
      param_2[aiStack_2c[5]] = true;
    }
  }
  PvpUserTable::SetWinTeam(param_4,(uint)local_d);
  return;
}

```

---

## getDeathCount

```asm
// === 085df540 CDeathMatchBattleMgr::getDeathCount  [0x085df540-0x85df55e] ===
 85df540:	55                   	push   %ebp
 85df541:	89 e5                	mov    %esp,%ebp
 85df543:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85df547:	7f 0f                	jg     85df558 <_ZN20CDeathMatchBattleMgr13getDeathCountEi+0x18>
 85df549:	8b 55 0c             	mov    0xc(%ebp),%edx
 85df54c:	8b 45 08             	mov    0x8(%ebp),%eax
 85df54f:	83 c2 08             	add    $0x8,%edx
 85df552:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df556:	eb 05                	jmp    85df55d <_ZN20CDeathMatchBattleMgr13getDeathCountEi+0x1d>
 85df558:	b8 00 00 00 00       	mov    $0x0,%eax
 85df55d:	5d                   	pop    %ebp
 85df55e:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::getDeathCount @ 0x85df540

/* CDeathMatchBattleMgr::getDeathCount(int) */

undefined4 __thiscall CDeathMatchBattleMgr::getDeathCount(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + (param_1 + 8) * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getKillCount

```asm
// === 085df524 CDeathMatchBattleMgr::getKillCount  [0x085df524-0x85df53f] ===
 85df524:	55                   	push   %ebp
 85df525:	89 e5                	mov    %esp,%ebp
 85df527:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85df52b:	7f 0c                	jg     85df539 <_ZN20CDeathMatchBattleMgr12getKillCountEi+0x15>
 85df52d:	8b 55 0c             	mov    0xc(%ebp),%edx
 85df530:	8b 45 08             	mov    0x8(%ebp),%eax
 85df533:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85df537:	eb 05                	jmp    85df53e <_ZN20CDeathMatchBattleMgr12getKillCountEi+0x1a>
 85df539:	b8 00 00 00 00       	mov    $0x0,%eax
 85df53e:	5d                   	pop    %ebp
 85df53f:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::getKillCount @ 0x85df524

/* CDeathMatchBattleMgr::getKillCount(int) */

undefined4 __thiscall CDeathMatchBattleMgr::getKillCount(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + param_1 * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getMaxKillCount

```asm
// === 085defcc CDeathMatchBattleMgr::getMaxKillCount  [0x085defcc-0x85df011] ===
 85defcc:	55                   	push   %ebp
 85defcd:	89 e5                	mov    %esp,%ebp
 85defcf:	83 ec 10             	sub    $0x10,%esp
 85defd2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85defd9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85defe0:	eb 20                	jmp    85df002 <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv+0x36>
 85defe2:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85defe5:	8b 45 08             	mov    0x8(%ebp),%eax
 85defe8:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85defec:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 85defef:	7e 0d                	jle    85deffe <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv+0x32>
 85deff1:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85deff4:	8b 45 08             	mov    0x8(%ebp),%eax
 85deff7:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85deffb:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85deffe:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85df002:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85df006:	0f 9e c0             	setle  %al
 85df009:	84 c0                	test   %al,%al
 85df00b:	75 d5                	jne    85defe2 <_ZN20CDeathMatchBattleMgr15getMaxKillCountEv+0x16>
 85df00d:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85df010:	c9                   	leave
 85df011:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::getMaxKillCount @ 0x85defcc

/* CDeathMatchBattleMgr::getMaxKillCount() */

int __thiscall CDeathMatchBattleMgr::getMaxKillCount(CDeathMatchBattleMgr *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (local_c < *(int *)(this + local_8 * 4 + 4)) {
      local_c = *(int *)(this + local_8 * 4 + 4);
    }
  }
  return local_c;
}

```

---

## getRanking

```asm
// === 085df576 CDeathMatchBattleMgr::getRanking  [0x085df576-0x85df738] ===
 85df576:	55                   	push   %ebp
 85df577:	89 e5                	mov    %esp,%ebp
 85df579:	56                   	push   %esi
 85df57a:	53                   	push   %ebx
 85df57b:	81 ec 90 00 00 00    	sub    $0x90,%esp
 85df581:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85df588:	8d 45 88             	lea    -0x78(%ebp),%eax
 85df58b:	89 c3                	mov    %eax,%ebx
 85df58d:	be 07 00 00 00       	mov    $0x7,%esi
 85df592:	eb 0e                	jmp    85df5a2 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0x2c>
 85df594:	89 1c 24             	mov    %ebx,(%esp)
 85df597:	e8 f2 66 bd ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 85df59c:	83 c3 08             	add    $0x8,%ebx
 85df59f:	83 ee 01             	sub    $0x1,%esi
 85df5a2:	83 fe ff             	cmp    $0xffffffff,%esi
 85df5a5:	0f 95 c0             	setne  %al
 85df5a8:	84 c0                	test   %al,%al
 85df5aa:	75 e8                	jne    85df594 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0x1e>
 85df5ac:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85df5b3:	00 
 85df5b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85df5bb:	00 
 85df5bc:	8b 45 10             	mov    0x10(%ebp),%eax
 85df5bf:	89 04 24             	mov    %eax,(%esp)
 85df5c2:	e8 f9 e6 a9 ff       	call   807dcc0 <memset@plt>
 85df5c7:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85df5ce:	e9 9c 00 00 00       	jmp    85df66f <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0xf9>
 85df5d3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85df5d6:	c1 e0 02             	shl    $0x2,%eax
 85df5d9:	03 45 0c             	add    0xc(%ebp),%eax
 85df5dc:	8b 00                	mov    (%eax),%eax
 85df5de:	85 c0                	test   %eax,%eax
 85df5e0:	74 46                	je     85df628 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0xb2>
 85df5e2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85df5e5:	c1 e0 02             	shl    $0x2,%eax
 85df5e8:	03 45 08             	add    0x8(%ebp),%eax
 85df5eb:	8d 50 04             	lea    0x4(%eax),%edx
 85df5ee:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85df5f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85df5f5:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85df5f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85df5fc:	89 04 24             	mov    %eax,(%esp)
 85df5ff:	e8 1b 0c 00 00       	call   85e021f <_ZSt9make_pairIRiRKiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 85df604:	83 ec 04             	sub    $0x4,%esp
 85df607:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85df60a:	8d 45 88             	lea    -0x78(%ebp),%eax
 85df60d:	c1 e2 03             	shl    $0x3,%edx
 85df610:	8d 14 10             	lea    (%eax,%edx,1),%edx
 85df613:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85df616:	89 44 24 04          	mov    %eax,0x4(%esp)
 85df61a:	89 14 24             	mov    %edx,(%esp)
 85df61d:	e8 fa e8 af ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 85df622:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85df626:	eb 3e                	jmp    85df666 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0xf0>
 85df628:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 85df62f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85df632:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85df635:	89 54 24 08          	mov    %edx,0x8(%esp)
 85df639:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85df63c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85df640:	89 04 24             	mov    %eax,(%esp)
 85df643:	e8 51 e1 af ff       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 85df648:	83 ec 04             	sub    $0x4,%esp
 85df64b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85df64e:	8d 45 88             	lea    -0x78(%ebp),%eax
 85df651:	c1 e2 03             	shl    $0x3,%edx
 85df654:	8d 14 10             	lea    (%eax,%edx,1),%edx
 85df657:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85df65a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85df65e:	89 14 24             	mov    %edx,(%esp)
 85df661:	e8 b6 e8 af ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 85df666:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85df669:	83 c0 01             	add    $0x1,%eax
 85df66c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85df66f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85df672:	83 f8 07             	cmp    $0x7,%eax
 85df675:	0f 9e c0             	setle  %al
 85df678:	84 c0                	test   %al,%al
 85df67a:	0f 85 53 ff ff ff    	jne    85df5d3 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0x5d>
 85df680:	8d 45 88             	lea    -0x78(%ebp),%eax
 85df683:	83 c0 40             	add    $0x40,%eax
 85df686:	c7 44 24 08 5f f5 5d 	movl   $0x85df55f,0x8(%esp)
 85df68d:	08 
 85df68e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85df692:	8d 45 88             	lea    -0x78(%ebp),%eax
 85df695:	89 04 24             	mov    %eax,(%esp)
 85df698:	e8 c0 0b 00 00       	call   85e025d <_ZSt4sortIPSt4pairIiiEPFbRKS1_S4_EEvT_S7_T0_>
 85df69d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85df6a4:	eb 75                	jmp    85df71b <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0x1a5>
 85df6a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df6a9:	c1 e0 02             	shl    $0x2,%eax
 85df6ac:	03 45 10             	add    0x10(%ebp),%eax
 85df6af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85df6b2:	8b 54 d5 88          	mov    -0x78(%ebp,%edx,8),%edx
 85df6b6:	89 10                	mov    %edx,(%eax)
 85df6b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df6bb:	c1 e0 02             	shl    $0x2,%eax
 85df6be:	03 45 10             	add    0x10(%ebp),%eax
 85df6c1:	8b 30                	mov    (%eax),%esi
 85df6c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85df6c6:	8b 00                	mov    (%eax),%eax
 85df6c8:	89 04 24             	mov    %eax,(%esp)
 85df6cb:	e8 c4 e2 c4 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85df6d0:	89 c3                	mov    %eax,%ebx
 85df6d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85df6d9:	00 
 85df6da:	c7 44 24 08 95 16 00 	movl   $0x1695,0x8(%esp)
 85df6e1:	00 
 85df6e2:	c7 44 24 04 00 21 cc 	movl   $0x8cc2100,0x4(%esp)
 85df6e9:	08 
 85df6ea:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85df6ed:	89 04 24             	mov    %eax,(%esp)
 85df6f0:	e8 23 00 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85df6f5:	89 74 24 10          	mov    %esi,0x10(%esp)
 85df6f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df6fc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85df700:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85df704:	c7 44 24 04 a0 14 cc 	movl   $0x8cc14a0,0x4(%esp)
 85df70b:	08 
 85df70c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85df70f:	89 04 24             	mov    %eax,(%esp)
 85df712:	e8 71 00 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85df717:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85df71b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85df71e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85df721:	0f 9c c0             	setl   %al
 85df724:	84 c0                	test   %al,%al
 85df726:	0f 85 7a ff ff ff    	jne    85df6a6 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi+0x130>
 85df72c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85df72f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85df732:	83 c4 00             	add    $0x0,%esp
 85df735:	5b                   	pop    %ebx
 85df736:	5e                   	pop    %esi
 85df737:	5d                   	pop    %ebp
 85df738:	c3                   	ret

```

```c
// CDeathMatchBattleMgr::getRanking @ 0x85df576

/* CDeathMatchBattleMgr::getRanking(CUser**, int*) const */

int __thiscall
CDeathMatchBattleMgr::getRanking(CDeathMatchBattleMgr *this,CUser **param_1,int *param_2)

{
  undefined4 uVar1;
  pair<int,int> *this_00;
  int iVar2;
  pair<int,int> local_7c [64];
  int local_3c;
  int local_38 [2];
  int local_30 [2];
  undefined4 local_28;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  local_14 = 0;
  this_00 = local_7c;
  for (iVar2 = 7; iVar2 != -1; iVar2 = iVar2 + -1) {
    std::pair<int,int>::pair(this_00);
    this_00 = this_00 + 8;
  }
  memset(param_2,0,0x20);
  for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
    if (param_1[local_3c] == (CUser *)0x0) {
      local_28 = 0xffffffff;
      std::make_pair<int&,int>(local_30,&local_3c);
      std::pair<int,int>::operator=(local_7c + local_3c * 8,(pair *)local_30);
    }
    else {
      std::make_pair<int&,int_const&>(local_38,&local_3c);
      std::pair<int,int>::operator=(local_7c + local_3c * 8,(pair *)local_38);
      local_14 = local_14 + 1;
    }
  }
  std::sort<std::pair<int,int>*,bool(*)(std::pair<int,int>const&,std::pair<int,int>const&)>
            (local_7c,(pair *)&local_3c,funDeathMatchKillCntCompare);
  for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
    param_2[local_10] = *(int *)(local_7c + local_10 * 8);
    iVar2 = param_2[local_10];
    uVar1 = PvP_Room::get_index(*(PvP_Room **)this);
    cMyTrace::cMyTrace(local_24,"int CDeathMatchBattleMgr::getRanking(CUser**, int*) const",0x1695,0
                      );
    cMyTrace::operator()
              (local_24,"CDeathMatchBattleMgr::getRanking => Room(%d), Idx(%d), Rank(%d)",uVar1,
               local_10,iVar2);
  }
  return local_14;
}

```

