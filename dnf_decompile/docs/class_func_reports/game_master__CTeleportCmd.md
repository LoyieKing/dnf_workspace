# game_master__CTeleportCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a986e game_master::CTeleportCmd::execute  [0x084a986e-0x84a98c7] ===
 84a986e:	55                   	push   %ebp
 84a986f:	89 e5                	mov    %esp,%ebp
 84a9871:	53                   	push   %ebx
 84a9872:	83 ec 24             	sub    $0x24,%esp
 84a9875:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9878:	89 04 24             	mov    %eax,(%esp)
 84a987b:	e8 3a a7 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9880:	89 04 24             	mov    %eax,(%esp)
 84a9883:	e8 dc bc 19 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 84a9888:	0f be d8             	movsbl %al,%ebx
 84a988b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a988e:	89 04 24             	mov    %eax,(%esp)
 84a9891:	e8 24 a7 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9896:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84a989d:	00 
 84a989e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84a98a5:	00 
 84a98a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a98ad:	00 
 84a98ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a98b5:	00 
 84a98b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a98ba:	89 04 24             	mov    %eax,(%esp)
 84a98bd:	e8 62 7b 12 00       	call   85d1424 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib>
 84a98c2:	83 c4 24             	add    $0x24,%esp
 84a98c5:	5b                   	pop    %ebx
 84a98c6:	5d                   	pop    %ebp
 84a98c7:	c3                   	ret

```

```c
// game_master::CTeleportCmd::execute @ 0x84a986e

/* game_master::CTeleportCmd::execute() */

void __thiscall game_master::CTeleportCmd::execute(CTeleportCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  CUser *pCVar2;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUserCharacInfo::getCurCharacVill(this_00);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CAlchemist::OnTeleportCharacter(pCVar2,(int)cVar1,0,0,0,true);
  return;
}

```

