# TimerWarRoomResultCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634e42 TimerWarRoomResultCount::dispatch_sig  [0x08634e42-0x8634ea5] ===
 8634e42:	55                   	push   %ebp
 8634e43:	89 e5                	mov    %esp,%ebp
 8634e45:	83 ec 28             	sub    $0x28,%esp
 8634e48:	e8 41 73 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634e4d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634e50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634e54:	89 04 24             	mov    %eax,(%esp)
 8634e57:	e8 74 d7 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634e5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634e5f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634e63:	75 07                	jne    8634e6c <_ZN23TimerWarRoomResultCount12dispatch_sigEiij+0x2a>
 8634e65:	b8 00 00 00 00       	mov    $0x0,%eax
 8634e6a:	eb 38                	jmp    8634ea4 <_ZN23TimerWarRoomResultCount12dispatch_sigEiij+0x62>
 8634e6c:	8b 45 10             	mov    0x10(%ebp),%eax
 8634e6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634e73:	c7 44 24 04 44 00 00 	movl   $0x44,0x4(%esp)
 8634e7a:	00 
 8634e7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634e7e:	89 04 24             	mov    %eax,(%esp)
 8634e81:	e8 0c 6f 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634e86:	83 f0 01             	xor    $0x1,%eax
 8634e89:	84 c0                	test   %al,%al
 8634e8b:	74 07                	je     8634e94 <_ZN23TimerWarRoomResultCount12dispatch_sigEiij+0x52>
 8634e8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8634e92:	eb 10                	jmp    8634ea4 <_ZN23TimerWarRoomResultCount12dispatch_sigEiij+0x62>
 8634e94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634e97:	89 04 24             	mov    %eax,(%esp)
 8634e9a:	e8 65 b5 08 00       	call   86c0404 <_ZN7WarRoom22HandleTimerResultCountEv>
 8634e9f:	b8 01 00 00 00       	mov    $0x1,%eax
 8634ea4:	c9                   	leave
 8634ea5:	c3                   	ret

```

```c
// TimerWarRoomResultCount::dispatch_sig @ 0x8634e42

/* TimerWarRoomResultCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomResultCount::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  WarRoom *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (WarRoom *)CGameManager::GetWarRoom(iVar2);
  if (this == (WarRoom *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = WarRoom::CheckTimerKey(this,0x44,param_3);
    if (cVar1 == '\x01') {
      WarRoom::HandleTimerResultCount(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

