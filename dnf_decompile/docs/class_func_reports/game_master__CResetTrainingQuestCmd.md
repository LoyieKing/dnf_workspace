# game_master__CResetTrainingQuestCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ab508 game_master::CResetTrainingQuestCmd::execute  [0x084ab508-0x84ab523] ===
 84ab508:	55                   	push   %ebp
 84ab509:	89 e5                	mov    %esp,%ebp
 84ab50b:	83 ec 18             	sub    $0x18,%esp
 84ab50e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab511:	89 04 24             	mov    %eax,(%esp)
 84ab514:	e8 a1 8a 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab519:	89 04 24             	mov    %eax,(%esp)
 84ab51c:	e8 41 c1 1a 00       	call   8657662 <_ZN5CUser18ResetTrainingQuestEv>
 84ab521:	c9                   	leave
 84ab522:	c3                   	ret
 84ab523:	90                   	nop

```

```c
// game_master::CResetTrainingQuestCmd::execute @ 0x84ab508

/* game_master::CResetTrainingQuestCmd::execute() */

void __thiscall game_master::CResetTrainingQuestCmd::execute(CResetTrainingQuestCmd *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::ResetTrainingQuest(this_00);
  return;
}

```

