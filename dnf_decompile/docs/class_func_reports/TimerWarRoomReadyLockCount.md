# TimerWarRoomReadyLockCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634d6a TimerWarRoomReadyLockCount::dispatch_sig  [0x08634d6a-0x8634dd5] ===
 8634d6a:	55                   	push   %ebp
 8634d6b:	89 e5                	mov    %esp,%ebp
 8634d6d:	83 ec 28             	sub    $0x28,%esp
 8634d70:	e8 19 74 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634d75:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634d78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634d7c:	89 04 24             	mov    %eax,(%esp)
 8634d7f:	e8 4c d8 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634d84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634d87:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634d8b:	75 07                	jne    8634d94 <_ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij+0x2a>
 8634d8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8634d92:	eb 40                	jmp    8634dd4 <_ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij+0x6a>
 8634d94:	8b 45 10             	mov    0x10(%ebp),%eax
 8634d97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634d9b:	c7 44 24 04 42 00 00 	movl   $0x42,0x4(%esp)
 8634da2:	00 
 8634da3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634da6:	89 04 24             	mov    %eax,(%esp)
 8634da9:	e8 e4 6f 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634dae:	83 f0 01             	xor    $0x1,%eax
 8634db1:	84 c0                	test   %al,%al
 8634db3:	74 07                	je     8634dbc <_ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij+0x52>
 8634db5:	b8 00 00 00 00       	mov    $0x0,%eax
 8634dba:	eb 18                	jmp    8634dd4 <_ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij+0x6a>
 8634dbc:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8634dc3:	00 
 8634dc4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634dc7:	89 04 24             	mov    %eax,(%esp)
 8634dca:	e8 6d 67 08 00       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 8634dcf:	b8 01 00 00 00       	mov    $0x1,%eax
 8634dd4:	c9                   	leave
 8634dd5:	c3                   	ret

```

```c
// TimerWarRoomReadyLockCount::dispatch_sig @ 0x8634d6a

/* TimerWarRoomReadyLockCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomReadyLockCount::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  WarRoom *pWVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pWVar3 = (WarRoom *)CGameManager::GetWarRoom(iVar2);
  if (pWVar3 == (WarRoom *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = WarRoom::CheckTimerKey(pWVar3,0x42,param_3);
    if (cVar1 == '\x01') {
      WarRoom::ChangeState(pWVar3,3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

