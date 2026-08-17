# game_master__CCraneNeedMaterial

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b0626 game_master::CCraneNeedMaterial::execute  [0x084b0626-0x84b063b] ===
 84b0626:	55                   	push   %ebp
 84b0627:	89 e5                	mov    %esp,%ebp
 84b0629:	83 ec 18             	sub    $0x18,%esp
 84b062c:	e8 76 9d c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b0631:	89 04 24             	mov    %eax,(%esp)
 84b0634:	e8 47 0e 22 00       	call   86d1480 <_ZN9GameWorld19UpdateMiniCraneSeedEv>
 84b0639:	c9                   	leave
 84b063a:	c3                   	ret
 84b063b:	90                   	nop

```

```c
// game_master::CCraneNeedMaterial::execute @ 0x84b0626

/* game_master::CCraneNeedMaterial::execute() */

void game_master::CCraneNeedMaterial::execute(void)

{
  G_GameWorld();
  GameWorld::UpdateMiniCraneSeed();
  return;
}

```

