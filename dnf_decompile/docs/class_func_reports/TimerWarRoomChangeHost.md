# TimerWarRoomChangeHost

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634f6e TimerWarRoomChangeHost::dispatch_sig  [0x08634f6e-0x8634fd1] ===
 8634f6e:	55                   	push   %ebp
 8634f6f:	89 e5                	mov    %esp,%ebp
 8634f71:	83 ec 28             	sub    $0x28,%esp
 8634f74:	e8 15 72 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634f79:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634f7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634f80:	89 04 24             	mov    %eax,(%esp)
 8634f83:	e8 48 d6 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634f88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634f8b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634f8f:	75 07                	jne    8634f98 <_ZN22TimerWarRoomChangeHost12dispatch_sigEiij+0x2a>
 8634f91:	b8 00 00 00 00       	mov    $0x0,%eax
 8634f96:	eb 38                	jmp    8634fd0 <_ZN22TimerWarRoomChangeHost12dispatch_sigEiij+0x62>
 8634f98:	8b 45 10             	mov    0x10(%ebp),%eax
 8634f9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634f9f:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 8634fa6:	00 
 8634fa7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634faa:	89 04 24             	mov    %eax,(%esp)
 8634fad:	e8 e0 6d 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634fb2:	83 f0 01             	xor    $0x1,%eax
 8634fb5:	84 c0                	test   %al,%al
 8634fb7:	74 07                	je     8634fc0 <_ZN22TimerWarRoomChangeHost12dispatch_sigEiij+0x52>
 8634fb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8634fbe:	eb 10                	jmp    8634fd0 <_ZN22TimerWarRoomChangeHost12dispatch_sigEiij+0x62>
 8634fc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634fc3:	89 04 24             	mov    %eax,(%esp)
 8634fc6:	e8 99 b9 08 00       	call   86c0964 <_ZN7WarRoom15CheckHostChangeEv>
 8634fcb:	b8 01 00 00 00       	mov    $0x1,%eax
 8634fd0:	c9                   	leave
 8634fd1:	c3                   	ret

```

```c
// TimerWarRoomChangeHost::dispatch_sig @ 0x8634f6e

/* TimerWarRoomChangeHost::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomChangeHost::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x47,param_3);
    if (cVar1 == '\x01') {
      WarRoom::CheckHostChange(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

