# game_master__CGetCashInven

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ac846 game_master::CGetCashInven::execute  [0x084ac846-0x84ac84b] ===
 84ac846:	55                   	push   %ebp
 84ac847:	89 e5                	mov    %esp,%ebp
 84ac849:	5d                   	pop    %ebp
 84ac84a:	c3                   	ret
 84ac84b:	90                   	nop

```

```c
// game_master::CGetCashInven::execute @ 0x84ac846

/* game_master::CGetCashInven::execute() */

void game_master::CGetCashInven::execute(void)

{
  return;
}

```

---

## parse

```asm
// === 084ac80a game_master::CGetCashInven::parse  [0x084ac80a-0x84ac845] ===
 84ac80a:	55                   	push   %ebp
 84ac80b:	89 e5                	mov    %esp,%ebp
 84ac80d:	83 ec 18             	sub    $0x18,%esp
 84ac810:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac813:	8b 40 04             	mov    0x4(%eax),%eax
 84ac816:	83 c0 0c             	add    $0xc,%eax
 84ac819:	89 04 24             	mov    %eax,(%esp)
 84ac81c:	e8 47 28 df ff       	call   829f068 <_Z4trimRSs>
 84ac821:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac824:	8b 40 04             	mov    0x4(%eax),%eax
 84ac827:	83 c0 0c             	add    $0xc,%eax
 84ac82a:	89 04 24             	mov    %eax,(%esp)
 84ac82d:	e8 be 9c 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac832:	89 04 24             	mov    %eax,(%esp)
 84ac835:	e8 b6 1e bd ff       	call   807e6f0 <atoi@plt>
 84ac83a:	89 c2                	mov    %eax,%edx
 84ac83c:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac83f:	66 89 50 08          	mov    %dx,0x8(%eax)
 84ac843:	c9                   	leave
 84ac844:	c3                   	ret
 84ac845:	90                   	nop

```

```c
// game_master::CGetCashInven::parse @ 0x84ac80a

/* game_master::CGetCashInven::parse() */

void __thiscall game_master::CGetCashInven::parse(CGetCashInven *this)

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

