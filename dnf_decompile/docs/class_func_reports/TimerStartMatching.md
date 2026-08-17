# TimerStartMatching

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637d92 TimerStartMatching::dispatch_sig  [0x08637d92-0x8637e13] ===
 8637d92:	55                   	push   %ebp
 8637d93:	89 e5                	mov    %esp,%ebp
 8637d95:	83 ec 28             	sub    $0x28,%esp
 8637d98:	e8 f1 43 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637d9d:	c7 44 24 0c 79 00 00 	movl   $0x79,0xc(%esp)
 8637da4:	00 
 8637da5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637dac:	00 
 8637dad:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637db0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637db4:	89 04 24             	mov    %eax,(%esp)
 8637db7:	e8 4a d4 c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8637dbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8637dbf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8637dc3:	75 07                	jne    8637dcc <_ZN18TimerStartMatching12dispatch_sigEiij+0x3a>
 8637dc5:	b8 00 00 00 00       	mov    $0x0,%eax
 8637dca:	eb 45                	jmp    8637e11 <_ZN18TimerStartMatching12dispatch_sigEiij+0x7f>
 8637dcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637dcf:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8637dd5:	85 c0                	test   %eax,%eax
 8637dd7:	75 07                	jne    8637de0 <_ZN18TimerStartMatching12dispatch_sigEiij+0x4e>
 8637dd9:	b8 00 00 00 00       	mov    $0x0,%eax
 8637dde:	eb 31                	jmp    8637e11 <_ZN18TimerStartMatching12dispatch_sigEiij+0x7f>
 8637de0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637de3:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8637de9:	8b 00                	mov    (%eax),%eax
 8637deb:	83 c0 38             	add    $0x38,%eax
 8637dee:	8b 08                	mov    (%eax),%ecx
 8637df0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637df3:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8637df9:	8b 55 10             	mov    0x10(%ebp),%edx
 8637dfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637e00:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8637e03:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637e07:	89 04 24             	mov    %eax,(%esp)
 8637e0a:	ff d1                	call   *%ecx
 8637e0c:	b8 01 00 00 00       	mov    $0x1,%eax
 8637e11:	c9                   	leave
 8637e12:	c3                   	ret
 8637e13:	90                   	nop

```

```c
// TimerStartMatching::dispatch_sig @ 0x8637d92

/* TimerStartMatching::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartMatching::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (CGameManager *)G_CGameManager();
  iVar1 = CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x79);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(iVar1 + 0x6e4) == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x6e4) + 0x38))(*(undefined4 *)(iVar1 + 0x6e4),iVar1,param_3);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## registNextTimer

```asm
// === 08637e14 TimerStartMatching::registNextTimer  [0x08637e14-0x8637e55] ===
 8637e14:	55                   	push   %ebp
 8637e15:	89 e5                	mov    %esp,%ebp
 8637e17:	83 ec 28             	sub    $0x28,%esp
 8637e1a:	e8 5d e6 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637e1f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637e26:	00 
 8637e27:	8b 55 10             	mov    0x10(%ebp),%edx
 8637e2a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8637e2e:	8b 55 08             	mov    0x8(%ebp),%edx
 8637e31:	89 54 24 10          	mov    %edx,0x10(%esp)
 8637e35:	c7 44 24 0c 79 00 00 	movl   $0x79,0xc(%esp)
 8637e3c:	00 
 8637e3d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637e40:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637e44:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637e4b:	00 
 8637e4c:	89 04 24             	mov    %eax,(%esp)
 8637e4f:	e8 c2 8f ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637e54:	c9                   	leave
 8637e55:	c3                   	ret

```

```c
// TimerStartMatching::registNextTimer @ 0x8637e14

/* TimerStartMatching::registNextTimer(long, int, int) */

void TimerStartMatching::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x79,param_1,param_3,0);
  return;
}

```

