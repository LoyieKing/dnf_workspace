# TimerPVPWalkOutLackUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633e86 TimerPVPWalkOutLackUser::dispatch_sig  [0x08633e86-0x8633f1b] ===
 8633e86:	55                   	push   %ebp
 8633e87:	89 e5                	mov    %esp,%ebp
 8633e89:	83 ec 28             	sub    $0x28,%esp
 8633e8c:	e8 fd 82 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633e91:	c7 44 24 0c 31 00 00 	movl   $0x31,0xc(%esp)
 8633e98:	00 
 8633e99:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633ea0:	00 
 8633ea1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633ea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633ea8:	89 04 24             	mov    %eax,(%esp)
 8633eab:	e8 56 13 c6 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8633eb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633eb3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633eb7:	75 07                	jne    8633ec0 <_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij+0x3a>
 8633eb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8633ebe:	eb 5a                	jmp    8633f1a <_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij+0x94>
 8633ec0:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 8633ec7:	00 
 8633ec8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633ecb:	89 04 24             	mov    %eax,(%esp)
 8633ece:	e8 e1 7d 00 00       	call   863bcb4 <_ZN8PvP_Room13get_timer_keyE13TIMER_MESSAGE>
 8633ed3:	3b 45 10             	cmp    0x10(%ebp),%eax
 8633ed6:	0f 95 c0             	setne  %al
 8633ed9:	84 c0                	test   %al,%al
 8633edb:	74 07                	je     8633ee4 <_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij+0x5e>
 8633edd:	b8 00 00 00 00       	mov    $0x0,%eax
 8633ee2:	eb 36                	jmp    8633f1a <_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij+0x94>
 8633ee4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633ee7:	89 04 24             	mov    %eax,(%esp)
 8633eea:	e8 39 8f fa ff       	call   85dce28 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv>
 8633eef:	83 f0 01             	xor    $0x1,%eax
 8633ef2:	84 c0                	test   %al,%al
 8633ef4:	74 1f                	je     8633f15 <_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij+0x8f>
 8633ef6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633ef9:	89 04 24             	mov    %eax,(%esp)
 8633efc:	e8 c7 23 fa ff       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 8633f01:	e8 88 82 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633f06:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8633f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633f0d:	89 04 24             	mov    %eax,(%esp)
 8633f10:	e8 33 14 c6 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 8633f15:	b8 01 00 00 00       	mov    $0x1,%eax
 8633f1a:	c9                   	leave
 8633f1b:	c3                   	ret

```

```c
// TimerPVPWalkOutLackUser::dispatch_sig @ 0x8633e86

/* TimerPVPWalkOutLackUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPVPWalkOutLackUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *pCVar2;
  PvP_Room *this;
  undefined4 uVar3;
  uint uVar4;
  
  pCVar2 = (CGameManager *)G_CGameManager();
  this = (PvP_Room *)CGameManager::GetPvp(pCVar2,param_2,(CUser *)0x0,0x31);
  if (this == (PvP_Room *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = PvP_Room::get_timer_key(this,0x31);
    if (uVar4 == param_3) {
      cVar1 = PvP_Room::OnTimerWalkOutLackUser(this);
      if (cVar1 != '\x01') {
        PvP_Room::reset(this);
        pCVar2 = (CGameManager *)G_CGameManager();
        CGameManager::PutPvp(pCVar2,this);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

