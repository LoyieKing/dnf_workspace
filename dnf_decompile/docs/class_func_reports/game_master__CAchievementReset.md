# game_master__CAchievementReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b076a game_master::CAchievementReset::execute  [0x084b076a-0x84b07fd] ===
 84b076a:	55                   	push   %ebp
 84b076b:	89 e5                	mov    %esp,%ebp
 84b076d:	83 ec 18             	sub    $0x18,%esp
 84b0770:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0773:	89 04 24             	mov    %eax,(%esp)
 84b0776:	e8 3f 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b077b:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b0782:	00 
 84b0783:	89 04 24             	mov    %eax,(%esp)
 84b0786:	e8 f9 cd c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b078b:	89 04 24             	mov    %eax,(%esp)
 84b078e:	e8 43 09 19 00       	call   86410d6 <_ZN10CTitleBook9_gm_clearEv>
 84b0793:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0796:	89 04 24             	mov    %eax,(%esp)
 84b0799:	e8 1c 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b079e:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b07a5:	00 
 84b07a6:	89 04 24             	mov    %eax,(%esp)
 84b07a9:	e8 d6 cd c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b07ae:	89 04 24             	mov    %eax,(%esp)
 84b07b1:	e8 82 cb dd ff       	call   828d338 <_ZN12CAchievement8_gm_initEv>
 84b07b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b07b9:	89 04 24             	mov    %eax,(%esp)
 84b07bc:	e8 f9 37 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b07c1:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b07c8:	00 
 84b07c9:	89 04 24             	mov    %eax,(%esp)
 84b07cc:	e8 b3 cd c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b07d1:	89 04 24             	mov    %eax,(%esp)
 84b07d4:	e8 2b 0f 19 00       	call   8641704 <_ZN10CTitleBook8sendListEv>
 84b07d9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b07dc:	89 04 24             	mov    %eax,(%esp)
 84b07df:	e8 d6 37 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b07e4:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b07eb:	00 
 84b07ec:	89 04 24             	mov    %eax,(%esp)
 84b07ef:	e8 90 cd c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b07f4:	89 04 24             	mov    %eax,(%esp)
 84b07f7:	e8 e2 bc dd ff       	call   828c4de <_ZN12CAchievement8sendListEv>
 84b07fc:	c9                   	leave
 84b07fd:	c3                   	ret

```

```c
// game_master::CAchievementReset::execute @ 0x84b076a

/* game_master::CAchievementReset::execute() */

void __thiscall game_master::CAchievementReset::execute(CAchievementReset *this)

{
  CUser *pCVar1;
  CTitleBook *pCVar2;
  CAchievement *pCVar3;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::_gm_clear(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_init(pCVar3);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::sendList(pCVar3);
  return;
}

```

