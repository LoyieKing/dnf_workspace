# Timer_TowerOnTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863b8c4 Timer_TowerOnTime::dispatch_sig  [0x0863b8c4-0x863b90d] ===
 863b8c4:	55                   	push   %ebp
 863b8c5:	89 e5                	mov    %esp,%ebp
 863b8c7:	83 ec 28             	sub    $0x28,%esp
 863b8ca:	e8 bf 08 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863b8cf:	8b 55 0c             	mov    0xc(%ebp),%edx
 863b8d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b8d6:	89 04 24             	mov    %eax,(%esp)
 863b8d9:	e8 1c a1 c5 ff       	call   82959fa <_ZN12CGameManager12getBossTowerEi>
 863b8de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863b8e1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863b8e5:	75 07                	jne    863b8ee <_ZN17Timer_TowerOnTime12dispatch_sigEiij+0x2a>
 863b8e7:	b8 00 00 00 00       	mov    $0x0,%eax
 863b8ec:	eb 1e                	jmp    863b90c <_ZN17Timer_TowerOnTime12dispatch_sigEiij+0x48>
 863b8ee:	8b 45 10             	mov    0x10(%ebp),%eax
 863b8f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b8f5:	8b 45 14             	mov    0x14(%ebp),%eax
 863b8f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b8fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b8ff:	89 04 24             	mov    %eax,(%esp)
 863b902:	e8 d7 73 b0 ff       	call   8142cde <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj>
 863b907:	b8 01 00 00 00       	mov    $0x1,%eax
 863b90c:	c9                   	leave
 863b90d:	c3                   	ret

```

```c
// Timer_TowerOnTime::dispatch_sig @ 0x863b8c4

/* Timer_TowerOnTime::dispatch_sig(int, int, unsigned int) */

bool __thiscall
Timer_TowerOnTime::dispatch_sig(Timer_TowerOnTime *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = G_CGameManager();
  iVar1 = CGameManager::getBossTower(iVar1);
  if (iVar1 != 0) {
    WongWork::CBossTower::_onTimerProcess(iVar1,param_3,param_2);
  }
  return iVar1 != 0;
}

```

