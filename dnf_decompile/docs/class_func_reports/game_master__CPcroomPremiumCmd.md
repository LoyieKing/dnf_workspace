# game_master__CPcroomPremiumCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a9de8 game_master::CPcroomPremiumCmd::execute  [0x084a9de8-0x84a9e33] ===
 84a9de8:	55                   	push   %ebp
 84a9de9:	89 e5                	mov    %esp,%ebp
 84a9deb:	56                   	push   %esi
 84a9dec:	53                   	push   %ebx
 84a9ded:	83 ec 20             	sub    $0x20,%esp
 84a9df0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84a9df7:	e8 a2 1e c2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84a9dfc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a9dff:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9e02:	8b 40 08             	mov    0x8(%eax),%eax
 84a9e05:	03 45 f0             	add    -0x10(%ebp),%eax
 84a9e08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a9e0b:	8b 75 f4             	mov    -0xc(%ebp),%esi
 84a9e0e:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 84a9e11:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9e14:	89 04 24             	mov    %eax,(%esp)
 84a9e17:	e8 9e a1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9e1c:	89 74 24 08          	mov    %esi,0x8(%esp)
 84a9e20:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9e24:	89 04 24             	mov    %eax,(%esp)
 84a9e27:	e8 d2 64 20 00       	call   86b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>
 84a9e2c:	83 c4 20             	add    $0x20,%esp
 84a9e2f:	5b                   	pop    %ebx
 84a9e30:	5e                   	pop    %esi
 84a9e31:	5d                   	pop    %ebp
 84a9e32:	c3                   	ret
 84a9e33:	90                   	nop

```

```c
// game_master::CPcroomPremiumCmd::execute @ 0x84a9de8

/* game_master::CPcroomPremiumCmd::execute() */

void __thiscall game_master::CPcroomPremiumCmd::execute(CPcroomPremiumCmd *this)

{
  int iVar1;
  int iVar2;
  CUser *pCVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar1 = *(int *)(this + 8);
  pCVar3 = (CUser *)CCommand::GetUser((CCommand *)this);
  WongWork::CHandlePremium::handleSetUserPCRoom(pCVar3,iVar2,iVar1 + iVar2);
  return;
}

```

---

## parse

```asm
// === 084a9db0 game_master::CPcroomPremiumCmd::parse  [0x084a9db0-0x84a9de7] ===
 84a9db0:	55                   	push   %ebp
 84a9db1:	89 e5                	mov    %esp,%ebp
 84a9db3:	83 ec 18             	sub    $0x18,%esp
 84a9db6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9db9:	8b 40 04             	mov    0x4(%eax),%eax
 84a9dbc:	83 c0 0c             	add    $0xc,%eax
 84a9dbf:	89 04 24             	mov    %eax,(%esp)
 84a9dc2:	e8 a1 52 df ff       	call   829f068 <_Z4trimRSs>
 84a9dc7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9dca:	8b 40 04             	mov    0x4(%eax),%eax
 84a9dcd:	83 c0 0c             	add    $0xc,%eax
 84a9dd0:	89 04 24             	mov    %eax,(%esp)
 84a9dd3:	e8 18 c7 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a9dd8:	89 04 24             	mov    %eax,(%esp)
 84a9ddb:	e8 10 49 bd ff       	call   807e6f0 <atoi@plt>
 84a9de0:	8b 55 08             	mov    0x8(%ebp),%edx
 84a9de3:	89 42 08             	mov    %eax,0x8(%edx)
 84a9de6:	c9                   	leave
 84a9de7:	c3                   	ret

```

```c
// game_master::CPcroomPremiumCmd::parse @ 0x84a9db0

/* game_master::CPcroomPremiumCmd::parse() */

void __thiscall game_master::CPcroomPremiumCmd::parse(CPcroomPremiumCmd *this)

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

