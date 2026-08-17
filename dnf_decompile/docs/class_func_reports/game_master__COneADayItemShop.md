# game_master__COneADayItemShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b0610 game_master::COneADayItemShop::execute  [0x084b0610-0x84b0625] ===
 84b0610:	55                   	push   %ebp
 84b0611:	89 e5                	mov    %esp,%ebp
 84b0613:	83 ec 18             	sub    $0x18,%esp
 84b0616:	e8 8c 9d c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b061b:	89 04 24             	mov    %eax,(%esp)
 84b061e:	e8 e1 f2 21 00       	call   86cf904 <_ZN9GameWorld24testResetOneADayItemShopEv>
 84b0623:	c9                   	leave
 84b0624:	c3                   	ret
 84b0625:	90                   	nop

```

```c
// game_master::COneADayItemShop::execute @ 0x84b0610

/* game_master::COneADayItemShop::execute() */

void game_master::COneADayItemShop::execute(void)

{
  G_GameWorld();
  GameWorld::testResetOneADayItemShop();
  return;
}

```

