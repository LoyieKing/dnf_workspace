# game_master__CTitleBookAdjust

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b068a game_master::CTitleBookAdjust::execute  [0x084b068a-0x84b0741] ===
 84b068a:	55                   	push   %ebp
 84b068b:	89 e5                	mov    %esp,%ebp
 84b068d:	83 ec 18             	sub    $0x18,%esp
 84b0690:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0693:	89 04 24             	mov    %eax,(%esp)
 84b0696:	e8 1f 39 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b069b:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b06a2:	00 
 84b06a3:	89 04 24             	mov    %eax,(%esp)
 84b06a6:	e8 d9 ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b06ab:	89 04 24             	mov    %eax,(%esp)
 84b06ae:	e8 23 0a 19 00       	call   86410d6 <_ZN10CTitleBook9_gm_clearEv>
 84b06b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b06b6:	89 04 24             	mov    %eax,(%esp)
 84b06b9:	e8 fc 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b06be:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b06c5:	00 
 84b06c6:	89 04 24             	mov    %eax,(%esp)
 84b06c9:	e8 b6 ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b06ce:	89 04 24             	mov    %eax,(%esp)
 84b06d1:	e8 62 cc dd ff       	call   828d338 <_ZN12CAchievement8_gm_initEv>
 84b06d6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b06d9:	89 04 24             	mov    %eax,(%esp)
 84b06dc:	e8 d9 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b06e1:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b06e8:	00 
 84b06e9:	89 04 24             	mov    %eax,(%esp)
 84b06ec:	e8 93 ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b06f1:	89 04 24             	mov    %eax,(%esp)
 84b06f4:	e8 7d c2 dd ff       	call   828c976 <_ZN12CAchievement6adjustEv>
 84b06f9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b06fc:	89 04 24             	mov    %eax,(%esp)
 84b06ff:	e8 b6 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0704:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b070b:	00 
 84b070c:	89 04 24             	mov    %eax,(%esp)
 84b070f:	e8 70 ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b0714:	89 04 24             	mov    %eax,(%esp)
 84b0717:	e8 e8 0f 19 00       	call   8641704 <_ZN10CTitleBook8sendListEv>
 84b071c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b071f:	89 04 24             	mov    %eax,(%esp)
 84b0722:	e8 93 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0727:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b072e:	00 
 84b072f:	89 04 24             	mov    %eax,(%esp)
 84b0732:	e8 4d ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b0737:	89 04 24             	mov    %eax,(%esp)
 84b073a:	e8 9f bd dd ff       	call   828c4de <_ZN12CAchievement8sendListEv>
 84b073f:	c9                   	leave
 84b0740:	c3                   	ret
 84b0741:	90                   	nop

```

```c
// game_master::CTitleBookAdjust::execute @ 0x84b068a

/* game_master::CTitleBookAdjust::execute() */

void __thiscall game_master::CTitleBookAdjust::execute(CTitleBookAdjust *this)

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
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::adjust(pCVar3);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::sendList(pCVar3);
  return;
}

```

