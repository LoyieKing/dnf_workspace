# TimerWarRoomWaitCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634cfe TimerWarRoomWaitCount::dispatch_sig  [0x08634cfe-0x8634d69] ===
 8634cfe:	55                   	push   %ebp
 8634cff:	89 e5                	mov    %esp,%ebp
 8634d01:	83 ec 28             	sub    $0x28,%esp
 8634d04:	e8 85 74 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634d09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634d0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634d10:	89 04 24             	mov    %eax,(%esp)
 8634d13:	e8 b8 d8 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634d18:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634d1b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634d1f:	75 07                	jne    8634d28 <_ZN21TimerWarRoomWaitCount12dispatch_sigEiij+0x2a>
 8634d21:	b8 00 00 00 00       	mov    $0x0,%eax
 8634d26:	eb 40                	jmp    8634d68 <_ZN21TimerWarRoomWaitCount12dispatch_sigEiij+0x6a>
 8634d28:	8b 45 10             	mov    0x10(%ebp),%eax
 8634d2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634d2f:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 8634d36:	00 
 8634d37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634d3a:	89 04 24             	mov    %eax,(%esp)
 8634d3d:	e8 50 70 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634d42:	83 f0 01             	xor    $0x1,%eax
 8634d45:	84 c0                	test   %al,%al
 8634d47:	74 07                	je     8634d50 <_ZN21TimerWarRoomWaitCount12dispatch_sigEiij+0x52>
 8634d49:	b8 00 00 00 00       	mov    $0x0,%eax
 8634d4e:	eb 18                	jmp    8634d68 <_ZN21TimerWarRoomWaitCount12dispatch_sigEiij+0x6a>
 8634d50:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8634d57:	00 
 8634d58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634d5b:	89 04 24             	mov    %eax,(%esp)
 8634d5e:	e8 d9 67 08 00       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 8634d63:	b8 01 00 00 00       	mov    $0x1,%eax
 8634d68:	c9                   	leave
 8634d69:	c3                   	ret

```

```c
// TimerWarRoomWaitCount::dispatch_sig @ 0x8634cfe

/* TimerWarRoomWaitCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomWaitCount::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(pWVar3,0x41,param_3);
    if (cVar1 == '\x01') {
      WarRoom::ChangeState(pWVar3,2);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

