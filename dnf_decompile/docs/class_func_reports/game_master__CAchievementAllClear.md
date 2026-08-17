# game_master__CAchievementAllClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b097c game_master::CAchievementAllClear::execute  [0x084b097c-0x84b09a7] ===
 84b097c:	55                   	push   %ebp
 84b097d:	89 e5                	mov    %esp,%ebp
 84b097f:	83 ec 18             	sub    $0x18,%esp
 84b0982:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0985:	89 04 24             	mov    %eax,(%esp)
 84b0988:	e8 2d 36 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b098d:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b0994:	00 
 84b0995:	89 04 24             	mov    %eax,(%esp)
 84b0998:	e8 e7 cb c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b099d:	89 04 24             	mov    %eax,(%esp)
 84b09a0:	e8 93 cd dd ff       	call   828d738 <_ZN12CAchievement12_gm_clearAllEv>
 84b09a5:	c9                   	leave
 84b09a6:	c3                   	ret
 84b09a7:	90                   	nop

```

```c
// game_master::CAchievementAllClear::execute @ 0x84b097c

/* game_master::CAchievementAllClear::execute() */

void __thiscall game_master::CAchievementAllClear::execute(CAchievementAllClear *this)

{
  CUser *pCVar1;
  CAchievement *this_00;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_clearAll(this_00);
  return;
}

```

