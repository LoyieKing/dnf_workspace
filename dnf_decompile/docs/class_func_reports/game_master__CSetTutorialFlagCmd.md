# game_master__CSetTutorialFlagCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a9252 game_master::CSetTutorialFlagCmd::execute  [0x084a9252-0x84a927d] ===
 84a9252:	55                   	push   %ebp
 84a9253:	89 e5                	mov    %esp,%ebp
 84a9255:	53                   	push   %ebx
 84a9256:	83 ec 24             	sub    $0x24,%esp
 84a9259:	8b 45 08             	mov    0x8(%ebp),%eax
 84a925c:	8b 40 08             	mov    0x8(%eax),%eax
 84a925f:	89 c3                	mov    %eax,%ebx
 84a9261:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9264:	89 04 24             	mov    %eax,(%esp)
 84a9267:	e8 4e ad 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a926c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9270:	89 04 24             	mov    %eax,(%esp)
 84a9273:	e8 60 e3 19 00       	call   86475d8 <_ZN5CUser14RewardTutorialEj>
 84a9278:	83 c4 24             	add    $0x24,%esp
 84a927b:	5b                   	pop    %ebx
 84a927c:	5d                   	pop    %ebp
 84a927d:	c3                   	ret

```

```c
// game_master::CSetTutorialFlagCmd::execute @ 0x84a9252

/* game_master::CSetTutorialFlagCmd::execute() */

void __thiscall game_master::CSetTutorialFlagCmd::execute(CSetTutorialFlagCmd *this)

{
  uint uVar1;
  CUser *this_00;
  
  uVar1 = *(uint *)(this + 8);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::RewardTutorial(this_00,uVar1);
  return;
}

```

---

## parse

```asm
// === 084a921a game_master::CSetTutorialFlagCmd::parse  [0x084a921a-0x84a9251] ===
 84a921a:	55                   	push   %ebp
 84a921b:	89 e5                	mov    %esp,%ebp
 84a921d:	83 ec 18             	sub    $0x18,%esp
 84a9220:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9223:	8b 40 04             	mov    0x4(%eax),%eax
 84a9226:	83 c0 0c             	add    $0xc,%eax
 84a9229:	89 04 24             	mov    %eax,(%esp)
 84a922c:	e8 37 5e df ff       	call   829f068 <_Z4trimRSs>
 84a9231:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9234:	8b 40 04             	mov    0x4(%eax),%eax
 84a9237:	83 c0 0c             	add    $0xc,%eax
 84a923a:	89 04 24             	mov    %eax,(%esp)
 84a923d:	e8 ae d2 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a9242:	89 04 24             	mov    %eax,(%esp)
 84a9245:	e8 a6 54 bd ff       	call   807e6f0 <atoi@plt>
 84a924a:	8b 55 08             	mov    0x8(%ebp),%edx
 84a924d:	89 42 08             	mov    %eax,0x8(%edx)
 84a9250:	c9                   	leave
 84a9251:	c3                   	ret

```

```c
// game_master::CSetTutorialFlagCmd::parse @ 0x84a921a

/* game_master::CSetTutorialFlagCmd::parse() */

void __thiscall game_master::CSetTutorialFlagCmd::parse(CSetTutorialFlagCmd *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

