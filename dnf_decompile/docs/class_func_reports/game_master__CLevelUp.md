# game_master__CLevelUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## execute

```asm
// === 084b38e2 game_master::CLevelUp::execute  [0x084b38e2-0x84b395b] ===
 84b38e2:	55                   	push   %ebp
 84b38e3:	89 e5                	mov    %esp,%ebp
 84b38e5:	56                   	push   %esi
 84b38e6:	53                   	push   %ebx
 84b38e7:	83 ec 20             	sub    $0x20,%esp
 84b38ea:	8b 45 08             	mov    0x8(%ebp),%eax
 84b38ed:	89 04 24             	mov    %eax,(%esp)
 84b38f0:	e8 c5 06 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b38f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b38f8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b38fc:	74 56                	je     84b3954 <_ZN11game_master8CLevelUp7executeEv+0x72>
 84b38fe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b3901:	89 04 24             	mov    %eax,(%esp)
 84b3904:	e8 09 fb d7 ff       	call   8233412 <_ZN23DisPatcher_DebugCommandC1Ev>
 84b3909:	8b 45 08             	mov    0x8(%ebp),%eax
 84b390c:	89 04 24             	mov    %eax,(%esp)
 84b390f:	e8 7a 00 00 00       	call   84b398e <_ZN11game_master8CLevelUp8getLevelEv>
 84b3914:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b3918:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b391b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b391f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b3922:	89 04 24             	mov    %eax,(%esp)
 84b3925:	e8 b4 b6 0d 00       	call   858efde <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri>
 84b392a:	eb 1b                	jmp    84b3947 <_ZN11game_master8CLevelUp7executeEv+0x65>
 84b392c:	89 d3                	mov    %edx,%ebx
 84b392e:	89 c6                	mov    %eax,%esi
 84b3930:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b3933:	89 04 24             	mov    %eax,(%esp)
 84b3936:	e8 f3 fa d7 ff       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 84b393b:	89 f0                	mov    %esi,%eax
 84b393d:	89 da                	mov    %ebx,%edx
 84b393f:	89 04 24             	mov    %eax,(%esp)
 84b3942:	e8 09 fe 62 00       	call   8ae3750 <_Unwind_Resume>
 84b3947:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b394a:	89 04 24             	mov    %eax,(%esp)
 84b394d:	e8 dc fa d7 ff       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 84b3952:	eb 01                	jmp    84b3955 <_ZN11game_master8CLevelUp7executeEv+0x73>
 84b3954:	90                   	nop
 84b3955:	83 c4 20             	add    $0x20,%esp
 84b3958:	5b                   	pop    %ebx
 84b3959:	5e                   	pop    %esi
 84b395a:	5d                   	pop    %ebp
 84b395b:	c3                   	ret

```

```c
// game_master::CLevelUp::execute @ 0x84b38e2

/* game_master::CLevelUp::execute() */

void __thiscall game_master::CLevelUp::execute(CLevelUp *this)

{
  int iVar1;
  DisPatcher_DebugCommand local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_14);
    iVar1 = getLevel(this);
                    /* try { // try from 084b3925 to 084b3929 has its CatchHandler @ 084b392c */
    DisPatcher_DebugCommand::_debugCommandSetLevel(local_14,local_10,iVar1);
    DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_14);
  }
  return;
}

```

---

## getLevel

```asm
// === 084b398e game_master::CLevelUp::getLevel  [0x084b398e-0x84b3999] ===
 84b398e:	55                   	push   %ebp
 84b398f:	89 e5                	mov    %esp,%ebp
 84b3991:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3994:	8b 40 08             	mov    0x8(%eax),%eax
 84b3997:	5d                   	pop    %ebp
 84b3998:	c3                   	ret
 84b3999:	90                   	nop

```

```c
// game_master::CLevelUp::getLevel @ 0x84b398e

/* game_master::CLevelUp::getLevel() */

undefined4 __thiscall game_master::CLevelUp::getLevel(CLevelUp *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## parse

```asm
// === 084b388c game_master::CLevelUp::parse  [0x084b388c-0x84b38e1] ===
 84b388c:	55                   	push   %ebp
 84b388d:	89 e5                	mov    %esp,%ebp
 84b388f:	83 ec 28             	sub    $0x28,%esp
 84b3892:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3895:	8b 40 04             	mov    0x4(%eax),%eax
 84b3898:	85 c0                	test   %eax,%eax
 84b389a:	74 42                	je     84b38de <_ZN11game_master8CLevelUp5parseEv+0x52>
 84b389c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b389f:	8b 40 04             	mov    0x4(%eax),%eax
 84b38a2:	05 1c 01 00 00       	add    $0x11c,%eax
 84b38a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b38ae:	00 
 84b38af:	89 04 24             	mov    %eax,(%esp)
 84b38b2:	e8 17 42 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b38b7:	89 04 24             	mov    %eax,(%esp)
 84b38ba:	e8 31 2c 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b38bf:	89 04 24             	mov    %eax,(%esp)
 84b38c2:	e8 33 58 c5 ff       	call   81090fa <_Z14StringToNumberPKc>
 84b38c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b38ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b38cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b38d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b38d4:	89 04 24             	mov    %eax,(%esp)
 84b38d7:	e8 80 00 00 00       	call   84b395c <_ZN11game_master8CLevelUp8setLevelEi>
 84b38dc:	eb 01                	jmp    84b38df <_ZN11game_master8CLevelUp5parseEv+0x53>
 84b38de:	90                   	nop
 84b38df:	c9                   	leave
 84b38e0:	c3                   	ret
 84b38e1:	90                   	nop

```

```c
// game_master::CLevelUp::parse @ 0x84b388c

/* game_master::CLevelUp::parse() */

void __thiscall game_master::CLevelUp::parse(CLevelUp *this)

{
  string *this_00;
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    this_00 = (string *)
              std::vector<std::string,std::allocator<std::string>>::operator[]
                        ((vector<std::string,std::allocator<std::string>> *)
                         (*(int *)(this + 4) + 0x11c),1);
    pcVar1 = (char *)std::string::c_str(this_00);
    iVar2 = StringToNumber(pcVar1);
    setLevel(this,iVar2);
  }
  return;
}

```

---

## setLevel

```asm
// === 084b395c game_master::CLevelUp::setLevel  [0x084b395c-0x84b398d] ===
 84b395c:	55                   	push   %ebp
 84b395d:	89 e5                	mov    %esp,%ebp
 84b395f:	83 7d 0c 46          	cmpl   $0x46,0xc(%ebp)
 84b3963:	7e 0c                	jle    84b3971 <_ZN11game_master8CLevelUp8setLevelEi+0x15>
 84b3965:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3968:	c7 40 08 46 00 00 00 	movl   $0x46,0x8(%eax)
 84b396f:	eb 1b                	jmp    84b398c <_ZN11game_master8CLevelUp8setLevelEi+0x30>
 84b3971:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84b3975:	7f 0c                	jg     84b3983 <_ZN11game_master8CLevelUp8setLevelEi+0x27>
 84b3977:	8b 45 08             	mov    0x8(%ebp),%eax
 84b397a:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 84b3981:	eb 09                	jmp    84b398c <_ZN11game_master8CLevelUp8setLevelEi+0x30>
 84b3983:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3986:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b3989:	89 50 08             	mov    %edx,0x8(%eax)
 84b398c:	5d                   	pop    %ebp
 84b398d:	c3                   	ret

```

```c
// game_master::CLevelUp::setLevel @ 0x84b395c

/* game_master::CLevelUp::setLevel(int) */

void __thiscall game_master::CLevelUp::setLevel(CLevelUp *this,int param_1)

{
  if (param_1 < 0x47) {
    if (param_1 < 1) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      *(int *)(this + 8) = param_1;
    }
  }
  else {
    *(undefined4 *)(this + 8) = 0x46;
  }
  return;
}

```

