# TimerCheckPvPRoomUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636f90 TimerCheckPvPRoomUser::dispatch_sig  [0x08636f90-0x8637039] ===
 8636f90:	55                   	push   %ebp
 8636f91:	89 e5                	mov    %esp,%ebp
 8636f93:	83 ec 28             	sub    $0x28,%esp
 8636f96:	e8 f3 51 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8636f9b:	c7 44 24 0c 3c 00 00 	movl   $0x3c,0xc(%esp)
 8636fa2:	00 
 8636fa3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8636faa:	00 
 8636fab:	8b 55 0c             	mov    0xc(%ebp),%edx
 8636fae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8636fb2:	89 04 24             	mov    %eax,(%esp)
 8636fb5:	e8 4c e2 c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8636fba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636fbd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8636fc1:	75 07                	jne    8636fca <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0x3a>
 8636fc3:	b8 00 00 00 00       	mov    $0x0,%eax
 8636fc8:	eb 6d                	jmp    8637037 <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0xa7>
 8636fca:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 8636fd1:	00 
 8636fd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636fd5:	89 04 24             	mov    %eax,(%esp)
 8636fd8:	e8 d7 4c 00 00       	call   863bcb4 <_ZN8PvP_Room13get_timer_keyE13TIMER_MESSAGE>
 8636fdd:	3b 45 10             	cmp    0x10(%ebp),%eax
 8636fe0:	0f 95 c0             	setne  %al
 8636fe3:	84 c0                	test   %al,%al
 8636fe5:	74 07                	je     8636fee <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0x5e>
 8636fe7:	b8 00 00 00 00       	mov    $0x0,%eax
 8636fec:	eb 49                	jmp    8637037 <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0xa7>
 8636fee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636ff1:	89 04 24             	mov    %eax,(%esp)
 8636ff4:	e8 4d 89 fa ff       	call   85df946 <_ZN8PvP_Room9get_stateEv>
 8636ff9:	83 f8 02             	cmp    $0x2,%eax
 8636ffc:	0f 95 c0             	setne  %al
 8636fff:	84 c0                	test   %al,%al
 8637001:	74 07                	je     863700a <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0x7a>
 8637003:	b8 00 00 00 00       	mov    $0x0,%eax
 8637008:	eb 2d                	jmp    8637037 <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0xa7>
 863700a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863700d:	89 04 24             	mov    %eax,(%esp)
 8637010:	e8 b5 53 fa ff       	call   85dc3ca <_ZN8PvP_Room19check_recv_pvp_rankEv>
 8637015:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637018:	89 04 24             	mov    %eax,(%esp)
 863701b:	e8 12 d3 c6 ff       	call   82a4332 <_ZN8PvP_Room14IsEndPvpBattleEv>
 8637020:	83 f0 01             	xor    $0x1,%eax
 8637023:	84 c0                	test   %al,%al
 8637025:	74 0b                	je     8637032 <_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij+0xa2>
 8637027:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863702a:	89 04 24             	mov    %eax,(%esp)
 863702d:	e8 44 54 fa ff       	call   85dc476 <_ZN8PvP_Room12send_pvp_endEv>
 8637032:	b8 01 00 00 00       	mov    $0x1,%eax
 8637037:	c9                   	leave
 8637038:	c3                   	ret
 8637039:	90                   	nop

```

```c
// TimerCheckPvPRoomUser::dispatch_sig @ 0x8636f90

/* TimerCheckPvPRoomUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckPvPRoomUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3c);
  if (this_00 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = PvP_Room::get_timer_key(this_00,0x3c);
    if (uVar3 == param_3) {
      iVar4 = PvP_Room::get_state(this_00);
      if (iVar4 == 2) {
        PvP_Room::check_recv_pvp_rank(this_00);
        cVar1 = PvP_Room::IsEndPvpBattle(this_00);
        if (cVar1 != '\x01') {
          PvP_Room::send_pvp_end(this_00);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

