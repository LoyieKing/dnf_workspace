# TImerWarRoomTimeBomb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634ea6 TImerWarRoomTimeBomb::dispatch_sig  [0x08634ea6-0x8634f09] ===
 8634ea6:	55                   	push   %ebp
 8634ea7:	89 e5                	mov    %esp,%ebp
 8634ea9:	83 ec 28             	sub    $0x28,%esp
 8634eac:	e8 dd 72 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634eb1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634eb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634eb8:	89 04 24             	mov    %eax,(%esp)
 8634ebb:	e8 10 d7 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634ec0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634ec3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634ec7:	75 07                	jne    8634ed0 <_ZN20TImerWarRoomTimeBomb12dispatch_sigEiij+0x2a>
 8634ec9:	b8 00 00 00 00       	mov    $0x0,%eax
 8634ece:	eb 38                	jmp    8634f08 <_ZN20TImerWarRoomTimeBomb12dispatch_sigEiij+0x62>
 8634ed0:	8b 45 10             	mov    0x10(%ebp),%eax
 8634ed3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634ed7:	c7 44 24 04 45 00 00 	movl   $0x45,0x4(%esp)
 8634ede:	00 
 8634edf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634ee2:	89 04 24             	mov    %eax,(%esp)
 8634ee5:	e8 a8 6e 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634eea:	83 f0 01             	xor    $0x1,%eax
 8634eed:	84 c0                	test   %al,%al
 8634eef:	74 07                	je     8634ef8 <_ZN20TImerWarRoomTimeBomb12dispatch_sigEiij+0x52>
 8634ef1:	b8 00 00 00 00       	mov    $0x0,%eax
 8634ef6:	eb 10                	jmp    8634f08 <_ZN20TImerWarRoomTimeBomb12dispatch_sigEiij+0x62>
 8634ef8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634efb:	89 04 24             	mov    %eax,(%esp)
 8634efe:	e8 0f b6 08 00       	call   86c0512 <_ZN7WarRoom19HandleTimerTimeBombEv>
 8634f03:	b8 01 00 00 00       	mov    $0x1,%eax
 8634f08:	c9                   	leave
 8634f09:	c3                   	ret

```

```c
// TImerWarRoomTimeBomb::dispatch_sig @ 0x8634ea6

/* TImerWarRoomTimeBomb::dispatch_sig(int, int, unsigned int) */

undefined4 TImerWarRoomTimeBomb::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x45,param_3);
    if (cVar1 == '\x01') {
      WarRoom::HandleTimerTimeBomb(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

