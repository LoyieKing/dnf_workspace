# game_master__CRequestDisjointCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a97f4 game_master::CRequestDisjointCmd::execute  [0x084a97f4-0x84a986d] ===
 84a97f4:	55                   	push   %ebp
 84a97f5:	89 e5                	mov    %esp,%ebp
 84a97f7:	53                   	push   %ebx
 84a97f8:	83 ec 34             	sub    $0x34,%esp
 84a97fb:	8b 45 08             	mov    0x8(%ebp),%eax
 84a97fe:	83 c0 08             	add    $0x8,%eax
 84a9801:	89 04 24             	mov    %eax,(%esp)
 84a9804:	e8 e7 cc 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a9809:	89 c3                	mov    %eax,%ebx
 84a980b:	e8 97 0b c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a9810:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9814:	89 04 24             	mov    %eax,(%esp)
 84a9817:	e8 48 fc 21 00       	call   86c9464 <_ZN9GameWorld24find_user_by_charac_nameEPKc>
 84a981c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a981f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84a9823:	74 42                	je     84a9867 <_ZN11game_master19CRequestDisjointCmd7executeEv+0x73>
 84a9825:	c7 45 f4 09 00 00 00 	movl   $0x9,-0xc(%ebp)
 84a982c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a982f:	89 04 24             	mov    %eax,(%esp)
 84a9832:	e8 83 a7 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9837:	c7 44 24 14 ff ff 00 	movl   $0xffff,0x14(%esp)
 84a983e:	00 
 84a983f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84a9842:	89 54 24 10          	mov    %edx,0x10(%esp)
 84a9846:	c7 44 24 0c 1c 00 00 	movl   $0x1c,0xc(%esp)
 84a984d:	00 
 84a984e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a9855:	00 
 84a9856:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a9859:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a985d:	89 04 24             	mov    %eax,(%esp)
 84a9860:	e8 65 fa d4 ff       	call   81f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>
 84a9865:	eb 01                	jmp    84a9868 <_ZN11game_master19CRequestDisjointCmd7executeEv+0x74>
 84a9867:	90                   	nop
 84a9868:	83 c4 34             	add    $0x34,%esp
 84a986b:	5b                   	pop    %ebx
 84a986c:	5d                   	pop    %ebp
 84a986d:	c3                   	ret

```

```c
// game_master::CRequestDisjointCmd::execute @ 0x84a97f4

/* game_master::CRequestDisjointCmd::execute() */

void __thiscall game_master::CRequestDisjointCmd::execute(CRequestDisjointCmd *this)

{
  char *pcVar1;
  GameWorld *this_00;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)std::string::c_str((string *)(this + 8));
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::find_user_by_charac_name(this_00,pcVar1);
  if (iVar2 != 0) {
    uVar3 = CCommand::GetUser((CCommand *)this);
    DisPatcher_DisJointItem::_disjoint(uVar3,9,0,0x1c,iVar2,0xffff);
  }
  return;
}

```

---

## parse

```asm
// === 084a97c0 game_master::CRequestDisjointCmd::parse  [0x084a97c0-0x84a97f3] ===
 84a97c0:	55                   	push   %ebp
 84a97c1:	89 e5                	mov    %esp,%ebp
 84a97c3:	83 ec 18             	sub    $0x18,%esp
 84a97c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a97c9:	8b 40 04             	mov    0x4(%eax),%eax
 84a97cc:	83 c0 0c             	add    $0xc,%eax
 84a97cf:	89 04 24             	mov    %eax,(%esp)
 84a97d2:	e8 91 58 df ff       	call   829f068 <_Z4trimRSs>
 84a97d7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a97da:	8b 40 04             	mov    0x4(%eax),%eax
 84a97dd:	8d 50 0c             	lea    0xc(%eax),%edx
 84a97e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84a97e3:	83 c0 08             	add    $0x8,%eax
 84a97e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a97ea:	89 04 24             	mov    %eax,(%esp)
 84a97ed:	e8 0e e5 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84a97f2:	c9                   	leave
 84a97f3:	c3                   	ret

```

```c
// game_master::CRequestDisjointCmd::parse @ 0x84a97c0

/* game_master::CRequestDisjointCmd::parse() */

void __thiscall game_master::CRequestDisjointCmd::parse(CRequestDisjointCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}

```

