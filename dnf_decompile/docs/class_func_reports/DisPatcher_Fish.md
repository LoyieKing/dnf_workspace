# DisPatcher_Fish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081eddf6 DisPatcher_Fish::dispatch_sig  [0x081eddf6-0x81ede33] ===
 81eddf6:	55                   	push   %ebp
 81eddf7:	89 e5                	mov    %esp,%ebp
 81eddf9:	83 ec 18             	sub    $0x18,%esp
 81eddfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eddff:	89 04 24             	mov    %eax,(%esp)
 81ede02:	e8 85 c5 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ede07:	83 f8 04             	cmp    $0x4,%eax
 81ede0a:	0f 95 c0             	setne  %al
 81ede0d:	84 c0                	test   %al,%al
 81ede0f:	74 07                	je     81ede18 <_ZN15DisPatcher_Fish12dispatch_sigEP5CUserR9PacketBuf+0x22>
 81ede11:	b8 00 00 00 00       	mov    $0x0,%eax
 81ede16:	eb 19                	jmp    81ede31 <_ZN15DisPatcher_Fish12dispatch_sigEP5CUserR9PacketBuf+0x3b>
 81ede18:	e8 8a c5 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ede1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ede20:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ede24:	89 04 24             	mov    %eax,(%esp)
 81ede27:	e8 cc 9c 4d 00       	call   86c7af8 <_ZN9GameWorld7fishingEP5CUser>
 81ede2c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ede31:	c9                   	leave
 81ede32:	c3                   	ret
 81ede33:	90                   	nop

```

```c
// DisPatcher_Fish::dispatch_sig @ 0x81eddf6

/* DisPatcher_Fish::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_Fish::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  GameWorld *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 4) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::fishing(this,(CUser *)param_2);
  }
  return 0;
}

```

