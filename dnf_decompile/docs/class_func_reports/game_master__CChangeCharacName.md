# game_master__CChangeCharacName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ab558 game_master::CChangeCharacName::execute  [0x084ab558-0x84ab5b5] ===
 84ab558:	55                   	push   %ebp
 84ab559:	89 e5                	mov    %esp,%ebp
 84ab55b:	56                   	push   %esi
 84ab55c:	53                   	push   %ebx
 84ab55d:	83 ec 20             	sub    $0x20,%esp
 84ab560:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab563:	89 04 24             	mov    %eax,(%esp)
 84ab566:	e8 4f 8a 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab56b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab56e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab571:	83 c0 08             	add    $0x8,%eax
 84ab574:	89 04 24             	mov    %eax,(%esp)
 84ab577:	e8 74 af 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab57c:	89 c3                	mov    %eax,%ebx
 84ab57e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab581:	89 04 24             	mov    %eax,(%esp)
 84ab584:	e8 c5 06 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84ab589:	89 c6                	mov    %eax,%esi
 84ab58b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab58e:	89 04 24             	mov    %eax,(%esp)
 84ab591:	e8 00 d7 c1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84ab596:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84ab59d:	00 
 84ab59e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ab5a2:	89 74 24 04          	mov    %esi,0x4(%esp)
 84ab5a6:	89 04 24             	mov    %eax,(%esp)
 84ab5a9:	e8 e2 af f7 ff       	call   8426590 <_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci>
 84ab5ae:	83 c4 20             	add    $0x20,%esp
 84ab5b1:	5b                   	pop    %ebx
 84ab5b2:	5e                   	pop    %esi
 84ab5b3:	5d                   	pop    %ebp
 84ab5b4:	c3                   	ret
 84ab5b5:	90                   	nop

```

```c
// game_master::CChangeCharacName::execute @ 0x84ab558

/* game_master::CChangeCharacName::execute() */

void __thiscall game_master::CChangeCharacName::execute(CChangeCharacName *this)

{
  CUserCharacInfo *this_00;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  pcVar1 = (char *)std::string::c_str((string *)(this + 8));
  iVar2 = CUserCharacInfo::getCurCharacNo(this_00);
  iVar3 = CUser::GetUID((CUser *)this_00);
  DB_ReqChangeCharacName::makeRequest(iVar3,iVar2,pcVar1,1);
  return;
}

```

---

## parse

```asm
// === 084ab524 game_master::CChangeCharacName::parse  [0x084ab524-0x84ab557] ===
 84ab524:	55                   	push   %ebp
 84ab525:	89 e5                	mov    %esp,%ebp
 84ab527:	83 ec 18             	sub    $0x18,%esp
 84ab52a:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab52d:	8b 40 04             	mov    0x4(%eax),%eax
 84ab530:	83 c0 0c             	add    $0xc,%eax
 84ab533:	89 04 24             	mov    %eax,(%esp)
 84ab536:	e8 2d 3b df ff       	call   829f068 <_Z4trimRSs>
 84ab53b:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab53e:	8b 40 04             	mov    0x4(%eax),%eax
 84ab541:	8d 50 0c             	lea    0xc(%eax),%edx
 84ab544:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab547:	83 c0 08             	add    $0x8,%eax
 84ab54a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ab54e:	89 04 24             	mov    %eax,(%esp)
 84ab551:	e8 aa c7 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84ab556:	c9                   	leave
 84ab557:	c3                   	ret

```

```c
// game_master::CChangeCharacName::parse @ 0x84ab524

/* game_master::CChangeCharacName::parse() */

void __thiscall game_master::CChangeCharacName::parse(CChangeCharacName *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}

```

