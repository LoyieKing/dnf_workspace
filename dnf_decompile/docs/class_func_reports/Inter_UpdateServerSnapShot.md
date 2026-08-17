# Inter_UpdateServerSnapShot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8064 Inter_UpdateServerSnapShot::dispatch_sig  [0x084e8064-0x84e807d] ===
 84e8064:	55                   	push   %ebp
 84e8065:	89 e5                	mov    %esp,%ebp
 84e8067:	83 ec 18             	sub    $0x18,%esp
 84e806a:	e8 38 23 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e806f:	89 04 24             	mov    %eax,(%esp)
 84e8072:	e8 5d 94 1e 00       	call   86d14d4 <_ZN9GameWorld20UpdateServerSnapShotEv>
 84e8077:	b8 00 00 00 00       	mov    $0x0,%eax
 84e807c:	c9                   	leave
 84e807d:	c3                   	ret

```

```c
// Inter_UpdateServerSnapShot::dispatch_sig @ 0x84e8064

/* Inter_UpdateServerSnapShot::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateServerSnapShot::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  G_GameWorld();
  GameWorld::UpdateServerSnapShot();
  return 0;
}

```

