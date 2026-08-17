# game_master__CReselectDailyQuestCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ab4f2 game_master::CReselectDailyQuestCmd::execute  [0x084ab4f2-0x84ab507] ===
 84ab4f2:	55                   	push   %ebp
 84ab4f3:	89 e5                	mov    %esp,%ebp
 84ab4f5:	83 ec 18             	sub    $0x18,%esp
 84ab4f8:	e8 aa ee c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84ab4fd:	89 04 24             	mov    %eax,(%esp)
 84ab500:	e8 0b 1b 22 00       	call   86cd010 <_ZN9GameWorld18ReselectDailyQuestEv>
 84ab505:	c9                   	leave
 84ab506:	c3                   	ret
 84ab507:	90                   	nop

```

```c
// game_master::CReselectDailyQuestCmd::execute @ 0x84ab4f2

/* game_master::CReselectDailyQuestCmd::execute() */

void game_master::CReselectDailyQuestCmd::execute(void)

{
  G_GameWorld();
  GameWorld::ReselectDailyQuest();
  return;
}

```

