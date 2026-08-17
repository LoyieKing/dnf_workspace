# Timer_FairPvPRematch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863a430 Timer_FairPvPRematch::dispatch_sig  [0x0863a430-0x863a4c7] ===
 863a430:	55                   	push   %ebp
 863a431:	89 e5                	mov    %esp,%ebp
 863a433:	83 ec 28             	sub    $0x28,%esp
 863a436:	e8 53 1d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863a43b:	c7 44 24 0c 3e 00 00 	movl   $0x3e,0xc(%esp)
 863a442:	00 
 863a443:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a44a:	00 
 863a44b:	8b 55 0c             	mov    0xc(%ebp),%edx
 863a44e:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a452:	89 04 24             	mov    %eax,(%esp)
 863a455:	e8 ac ad c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 863a45a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863a45d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863a461:	75 07                	jne    863a46a <_ZN20Timer_FairPvPRematch12dispatch_sigEiij+0x3a>
 863a463:	b8 00 00 00 00       	mov    $0x0,%eax
 863a468:	eb 5b                	jmp    863a4c5 <_ZN20Timer_FairPvPRematch12dispatch_sigEiij+0x95>
 863a46a:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 863a471:	00 
 863a472:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a475:	89 04 24             	mov    %eax,(%esp)
 863a478:	e8 37 18 00 00       	call   863bcb4 <_ZN8PvP_Room13get_timer_keyE13TIMER_MESSAGE>
 863a47d:	3b 45 10             	cmp    0x10(%ebp),%eax
 863a480:	0f 95 c0             	setne  %al
 863a483:	84 c0                	test   %al,%al
 863a485:	74 07                	je     863a48e <_ZN20Timer_FairPvPRematch12dispatch_sigEiij+0x5e>
 863a487:	b8 00 00 00 00       	mov    $0x0,%eax
 863a48c:	eb 37                	jmp    863a4c5 <_ZN20Timer_FairPvPRematch12dispatch_sigEiij+0x95>
 863a48e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a491:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 863a497:	85 c0                	test   %eax,%eax
 863a499:	74 25                	je     863a4c0 <_ZN20Timer_FairPvPRematch12dispatch_sigEiij+0x90>
 863a49b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a49e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 863a4a4:	8b 00                	mov    (%eax),%eax
 863a4a6:	83 c0 64             	add    $0x64,%eax
 863a4a9:	8b 08                	mov    (%eax),%ecx
 863a4ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a4ae:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 863a4b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863a4b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a4bb:	89 04 24             	mov    %eax,(%esp)
 863a4be:	ff d1                	call   *%ecx
 863a4c0:	b8 01 00 00 00       	mov    $0x1,%eax
 863a4c5:	c9                   	leave
 863a4c6:	c3                   	ret
 863a4c7:	90                   	nop

```

```c
// Timer_FairPvPRematch::dispatch_sig @ 0x863a430

/* Timer_FairPvPRematch::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_FairPvPRematch::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  PvP_Room *pPVar1;
  undefined4 uVar2;
  uint uVar3;
  
  this = (CGameManager *)G_CGameManager();
  pPVar1 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3e);
  if (pPVar1 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = PvP_Room::get_timer_key(pPVar1,0x3e);
    if (uVar3 == param_3) {
      if (*(int *)(pPVar1 + 0x6e4) != 0) {
        (**(code **)(**(int **)(pPVar1 + 0x6e4) + 100))(*(undefined4 *)(pPVar1 + 0x6e4),pPVar1);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

