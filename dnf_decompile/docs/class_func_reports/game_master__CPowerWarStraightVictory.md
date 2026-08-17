# game_master__CPowerWarStraightVictory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ab23e game_master::CPowerWarStraightVictory::execute  [0x084ab23e-0x84ab29b] ===
 84ab23e:	55                   	push   %ebp
 84ab23f:	89 e5                	mov    %esp,%ebp
 84ab241:	83 ec 28             	sub    $0x28,%esp
 84ab244:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab247:	89 04 24             	mov    %eax,(%esp)
 84ab24a:	e8 6b 8d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab24f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ab252:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab255:	89 04 24             	mov    %eax,(%esp)
 84ab258:	e8 ef 9e 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84ab25d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab260:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84ab264:	74 1b                	je     84ab281 <_ZN11game_master24CPowerWarStraightVictory7executeEv+0x43>
 84ab266:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab269:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84ab26d:	0f b7 c0             	movzwl %ax,%eax
 84ab270:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab274:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab277:	89 04 24             	mov    %eax,(%esp)
 84ab27a:	e8 ef 8f 00 00       	call   84b426e <_ZN6CParty20setStraightVictoriesEt>
 84ab27f:	eb 19                	jmp    84ab29a <_ZN11game_master24CPowerWarStraightVictory7executeEv+0x5c>
 84ab281:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab284:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84ab288:	0f b7 d0             	movzwl %ax,%edx
 84ab28b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab28e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ab292:	89 04 24             	mov    %eax,(%esp)
 84ab295:	e8 5a 90 00 00       	call   84b42f4 <_ZN15CUserCharacInfo20setStraightVictoriesEt>
 84ab29a:	c9                   	leave
 84ab29b:	c3                   	ret

```

```c
// game_master::CPowerWarStraightVictory::execute @ 0x84ab23e

/* game_master::CPowerWarStraightVictory::execute() */

void __thiscall game_master::CPowerWarStraightVictory::execute(CPowerWarStraightVictory *this)

{
  CUser *this_00;
  CParty *this_01;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_01 = (CParty *)CUser::GetParty(this_00);
  if (this_01 == (CParty *)0x0) {
    CUserCharacInfo::setStraightVictories((CUserCharacInfo *)this_00,*(ushort *)(this + 8));
  }
  else {
    CParty::setStraightVictories(this_01,*(ushort *)(this + 8));
  }
  return;
}

```

---

## parse

```asm
// === 084ab202 game_master::CPowerWarStraightVictory::parse  [0x084ab202-0x84ab23d] ===
 84ab202:	55                   	push   %ebp
 84ab203:	89 e5                	mov    %esp,%ebp
 84ab205:	83 ec 18             	sub    $0x18,%esp
 84ab208:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab20b:	8b 40 04             	mov    0x4(%eax),%eax
 84ab20e:	83 c0 0c             	add    $0xc,%eax
 84ab211:	89 04 24             	mov    %eax,(%esp)
 84ab214:	e8 4f 3e df ff       	call   829f068 <_Z4trimRSs>
 84ab219:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab21c:	8b 40 04             	mov    0x4(%eax),%eax
 84ab21f:	83 c0 0c             	add    $0xc,%eax
 84ab222:	89 04 24             	mov    %eax,(%esp)
 84ab225:	e8 c6 b2 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab22a:	89 04 24             	mov    %eax,(%esp)
 84ab22d:	e8 be 34 bd ff       	call   807e6f0 <atoi@plt>
 84ab232:	89 c2                	mov    %eax,%edx
 84ab234:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab237:	66 89 50 08          	mov    %dx,0x8(%eax)
 84ab23b:	c9                   	leave
 84ab23c:	c3                   	ret
 84ab23d:	90                   	nop

```

```c
// game_master::CPowerWarStraightVictory::parse @ 0x84ab202

/* game_master::CPowerWarStraightVictory::parse() */

void __thiscall game_master::CPowerWarStraightVictory::parse(CPowerWarStraightVictory *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(short *)(this + 8) = (short)iVar1;
  return;
}

```

