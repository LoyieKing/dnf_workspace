# TimerPvpRankRes

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633be8 TimerPvpRankRes::dispatch_sig  [0x08633be8-0x8633c57] ===
 8633be8:	55                   	push   %ebp
 8633be9:	89 e5                	mov    %esp,%ebp
 8633beb:	83 ec 28             	sub    $0x28,%esp
 8633bee:	e8 9b 85 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633bf3:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 8633bfa:	00 
 8633bfb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633c02:	00 
 8633c03:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633c06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633c0a:	89 04 24             	mov    %eax,(%esp)
 8633c0d:	e8 f4 15 c6 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8633c12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633c15:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633c19:	75 07                	jne    8633c22 <_ZN15TimerPvpRankRes12dispatch_sigEiij+0x3a>
 8633c1b:	b8 00 00 00 00       	mov    $0x0,%eax
 8633c20:	eb 34                	jmp    8633c56 <_ZN15TimerPvpRankRes12dispatch_sigEiij+0x6e>
 8633c22:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 8633c29:	00 
 8633c2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633c2d:	89 04 24             	mov    %eax,(%esp)
 8633c30:	e8 7f 80 00 00       	call   863bcb4 <_ZN8PvP_Room13get_timer_keyE13TIMER_MESSAGE>
 8633c35:	3b 45 10             	cmp    0x10(%ebp),%eax
 8633c38:	0f 95 c0             	setne  %al
 8633c3b:	84 c0                	test   %al,%al
 8633c3d:	74 07                	je     8633c46 <_ZN15TimerPvpRankRes12dispatch_sigEiij+0x5e>
 8633c3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8633c44:	eb 10                	jmp    8633c56 <_ZN15TimerPvpRankRes12dispatch_sigEiij+0x6e>
 8633c46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633c49:	89 04 24             	mov    %eax,(%esp)
 8633c4c:	e8 31 6c fa ff       	call   85da882 <_ZN8PvP_Room10pvp_rewardEv>
 8633c51:	b8 01 00 00 00       	mov    $0x1,%eax
 8633c56:	c9                   	leave
 8633c57:	c3                   	ret

```

```c
// TimerPvpRankRes::dispatch_sig @ 0x8633be8

/* TimerPvpRankRes::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPvpRankRes::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x32);
  if (this_00 == (PvP_Room *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = PvP_Room::get_timer_key(this_00,0x32);
    if (uVar2 == param_3) {
      PvP_Room::pvp_reward(this_00);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

