# game_master__CAchievementNoClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b09a8 game_master::CAchievementNoClear::execute  [0x084b09a8-0x84b09cf] ===
 84b09a8:	55                   	push   %ebp
 84b09a9:	89 e5                	mov    %esp,%ebp
 84b09ab:	83 ec 18             	sub    $0x18,%esp
 84b09ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84b09b1:	89 04 24             	mov    %eax,(%esp)
 84b09b4:	e8 01 36 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b09b9:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b09c0:	00 
 84b09c1:	89 04 24             	mov    %eax,(%esp)
 84b09c4:	e8 bb cb c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b09c9:	c6 40 24 01          	movb   $0x1,0x24(%eax)
 84b09cd:	c9                   	leave
 84b09ce:	c3                   	ret
 84b09cf:	90                   	nop

```

```c
// game_master::CAchievementNoClear::execute @ 0x84b09a8

/* game_master::CAchievementNoClear::execute() */

void __thiscall game_master::CAchievementNoClear::execute(CAchievementNoClear *this)

{
  CUser *pCVar1;
  int iVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetCharacExpandData(pCVar1,0xf);
  *(undefined1 *)(iVar2 + 0x24) = 1;
  return;
}

```

