# TimerWarRoomCheckFail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634f0a TimerWarRoomCheckFail::dispatch_sig  [0x08634f0a-0x8634f6d] ===
 8634f0a:	55                   	push   %ebp
 8634f0b:	89 e5                	mov    %esp,%ebp
 8634f0d:	83 ec 28             	sub    $0x28,%esp
 8634f10:	e8 79 72 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634f15:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634f18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634f1c:	89 04 24             	mov    %eax,(%esp)
 8634f1f:	e8 ac d6 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634f24:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634f27:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634f2b:	75 07                	jne    8634f34 <_ZN21TimerWarRoomCheckFail12dispatch_sigEiij+0x2a>
 8634f2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8634f32:	eb 38                	jmp    8634f6c <_ZN21TimerWarRoomCheckFail12dispatch_sigEiij+0x62>
 8634f34:	8b 45 10             	mov    0x10(%ebp),%eax
 8634f37:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634f3b:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 8634f42:	00 
 8634f43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634f46:	89 04 24             	mov    %eax,(%esp)
 8634f49:	e8 44 6e 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634f4e:	83 f0 01             	xor    $0x1,%eax
 8634f51:	84 c0                	test   %al,%al
 8634f53:	74 07                	je     8634f5c <_ZN21TimerWarRoomCheckFail12dispatch_sigEiij+0x52>
 8634f55:	b8 00 00 00 00       	mov    $0x0,%eax
 8634f5a:	eb 10                	jmp    8634f6c <_ZN21TimerWarRoomCheckFail12dispatch_sigEiij+0x62>
 8634f5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634f5f:	89 04 24             	mov    %eax,(%esp)
 8634f62:	e8 87 b8 08 00       	call   86c07ee <_ZN7WarRoom11WarRoomFailEv>
 8634f67:	b8 01 00 00 00       	mov    $0x1,%eax
 8634f6c:	c9                   	leave
 8634f6d:	c3                   	ret

```

```c
// TimerWarRoomCheckFail::dispatch_sig @ 0x8634f0a

/* TimerWarRoomCheckFail::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomCheckFail::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x46,param_3);
    if (cVar1 == '\x01') {
      WarRoom::WarRoomFail(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

