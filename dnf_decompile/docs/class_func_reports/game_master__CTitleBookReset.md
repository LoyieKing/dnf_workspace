# game_master__CTitleBookReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b063c game_master::CTitleBookReset::execute  [0x084b063c-0x84b0689] ===
 84b063c:	55                   	push   %ebp
 84b063d:	89 e5                	mov    %esp,%ebp
 84b063f:	83 ec 18             	sub    $0x18,%esp
 84b0642:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0645:	89 04 24             	mov    %eax,(%esp)
 84b0648:	e8 6d 39 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b064d:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b0654:	00 
 84b0655:	89 04 24             	mov    %eax,(%esp)
 84b0658:	e8 27 cf c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b065d:	89 04 24             	mov    %eax,(%esp)
 84b0660:	e8 71 0a 19 00       	call   86410d6 <_ZN10CTitleBook9_gm_clearEv>
 84b0665:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0668:	89 04 24             	mov    %eax,(%esp)
 84b066b:	e8 4a 39 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0670:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84b0677:	00 
 84b0678:	89 04 24             	mov    %eax,(%esp)
 84b067b:	e8 04 cf c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b0680:	89 04 24             	mov    %eax,(%esp)
 84b0683:	e8 7c 10 19 00       	call   8641704 <_ZN10CTitleBook8sendListEv>
 84b0688:	c9                   	leave
 84b0689:	c3                   	ret

```

```c
// game_master::CTitleBookReset::execute @ 0x84b063c

/* game_master::CTitleBookReset::execute() */

void __thiscall game_master::CTitleBookReset::execute(CTitleBookReset *this)

{
  CUser *pCVar1;
  CTitleBook *pCVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::_gm_clear(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  return;
}

```

