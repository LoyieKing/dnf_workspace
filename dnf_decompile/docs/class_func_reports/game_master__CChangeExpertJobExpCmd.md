# game_master__CChangeExpertJobExpCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a9bd0 game_master::CChangeExpertJobExpCmd::execute  [0x084a9bd0-0x84a9bf9] ===
 84a9bd0:	55                   	push   %ebp
 84a9bd1:	89 e5                	mov    %esp,%ebp
 84a9bd3:	53                   	push   %ebx
 84a9bd4:	83 ec 14             	sub    $0x14,%esp
 84a9bd7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9bda:	8b 58 08             	mov    0x8(%eax),%ebx
 84a9bdd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9be0:	89 04 24             	mov    %eax,(%esp)
 84a9be3:	e8 d2 a3 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9be8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9bec:	89 04 24             	mov    %eax,(%esp)
 84a9bef:	e8 4c 12 ff ff       	call   849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>
 84a9bf4:	83 c4 14             	add    $0x14,%esp
 84a9bf7:	5b                   	pop    %ebx
 84a9bf8:	5d                   	pop    %ebp
 84a9bf9:	c3                   	ret

```

```c
// game_master::CChangeExpertJobExpCmd::execute @ 0x84a9bd0

/* game_master::CChangeExpertJobExpCmd::execute() */

void __thiscall game_master::CChangeExpertJobExpCmd::execute(CChangeExpertJobExpCmd *this)

{
  int iVar1;
  CUser *pCVar2;
  
  iVar1 = *(int *)(this + 8);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CExpertJob::IncreaseExpertJobExp(pCVar2,iVar1);
  return;
}

```

---

## parse

```asm
// === 084a9b98 game_master::CChangeExpertJobExpCmd::parse  [0x084a9b98-0x84a9bcf] ===
 84a9b98:	55                   	push   %ebp
 84a9b99:	89 e5                	mov    %esp,%ebp
 84a9b9b:	83 ec 18             	sub    $0x18,%esp
 84a9b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9ba1:	8b 40 04             	mov    0x4(%eax),%eax
 84a9ba4:	83 c0 0c             	add    $0xc,%eax
 84a9ba7:	89 04 24             	mov    %eax,(%esp)
 84a9baa:	e8 b9 54 df ff       	call   829f068 <_Z4trimRSs>
 84a9baf:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9bb2:	8b 40 04             	mov    0x4(%eax),%eax
 84a9bb5:	83 c0 0c             	add    $0xc,%eax
 84a9bb8:	89 04 24             	mov    %eax,(%esp)
 84a9bbb:	e8 30 c9 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a9bc0:	89 04 24             	mov    %eax,(%esp)
 84a9bc3:	e8 28 4b bd ff       	call   807e6f0 <atoi@plt>
 84a9bc8:	8b 55 08             	mov    0x8(%ebp),%edx
 84a9bcb:	89 42 08             	mov    %eax,0x8(%edx)
 84a9bce:	c9                   	leave
 84a9bcf:	c3                   	ret

```

```c
// game_master::CChangeExpertJobExpCmd::parse @ 0x84a9b98

/* game_master::CChangeExpertJobExpCmd::parse() */

void __thiscall game_master::CChangeExpertJobExpCmd::parse(CChangeExpertJobExpCmd *this)

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

