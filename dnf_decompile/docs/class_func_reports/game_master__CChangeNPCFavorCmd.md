# game_master__CChangeNPCFavorCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aaef2 game_master::CChangeNPCFavorCmd::execute  [0x084aaef2-0x84aaef7] ===
 84aaef2:	55                   	push   %ebp
 84aaef3:	89 e5                	mov    %esp,%ebp
 84aaef5:	5d                   	pop    %ebp
 84aaef6:	c3                   	ret
 84aaef7:	90                   	nop

```

```c
// game_master::CChangeNPCFavorCmd::execute @ 0x84aaef2

/* game_master::CChangeNPCFavorCmd::execute() */

void game_master::CChangeNPCFavorCmd::execute(void)

{
  return;
}

```

---

## parse

```asm
// === 084aadd8 game_master::CChangeNPCFavorCmd::parse  [0x084aadd8-0x84aaef1] ===
 84aadd8:	55                   	push   %ebp
 84aadd9:	89 e5                	mov    %esp,%ebp
 84aaddb:	56                   	push   %esi
 84aaddc:	53                   	push   %ebx
 84aaddd:	83 ec 20             	sub    $0x20,%esp
 84aade0:	8b 45 08             	mov    0x8(%ebp),%eax
 84aade3:	8b 40 04             	mov    0x4(%eax),%eax
 84aade6:	83 c0 0c             	add    $0xc,%eax
 84aade9:	89 04 24             	mov    %eax,(%esp)
 84aadec:	e8 77 42 df ff       	call   829f068 <_Z4trimRSs>
 84aadf1:	8b 45 08             	mov    0x8(%ebp),%eax
 84aadf4:	8b 40 04             	mov    0x4(%eax),%eax
 84aadf7:	83 c0 0c             	add    $0xc,%eax
 84aadfa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aae01:	00 
 84aae02:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84aae09:	08 
 84aae0a:	89 04 24             	mov    %eax,(%esp)
 84aae0d:	e8 2e be 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84aae12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aae15:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84aae18:	8b 45 08             	mov    0x8(%ebp),%eax
 84aae1b:	8b 40 04             	mov    0x4(%eax),%eax
 84aae1e:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aae21:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aae24:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aae28:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aae2f:	00 
 84aae30:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aae34:	89 04 24             	mov    %eax,(%esp)
 84aae37:	e8 44 ca 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aae3c:	83 ec 04             	sub    $0x4,%esp
 84aae3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aae42:	83 c0 01             	add    $0x1,%eax
 84aae45:	89 c2                	mov    %eax,%edx
 84aae47:	8b 45 08             	mov    0x8(%ebp),%eax
 84aae4a:	8b 40 04             	mov    0x4(%eax),%eax
 84aae4d:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aae50:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aae53:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84aae5a:	ff 
 84aae5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aae5f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aae63:	89 04 24             	mov    %eax,(%esp)
 84aae66:	e8 15 ca 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aae6b:	83 ec 04             	sub    $0x4,%esp
 84aae6e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aae71:	89 04 24             	mov    %eax,(%esp)
 84aae74:	e8 77 b6 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aae79:	89 04 24             	mov    %eax,(%esp)
 84aae7c:	e8 6f 38 bd ff       	call   807e6f0 <atoi@plt>
 84aae81:	8b 55 08             	mov    0x8(%ebp),%edx
 84aae84:	89 42 08             	mov    %eax,0x8(%edx)
 84aae87:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aae8a:	89 04 24             	mov    %eax,(%esp)
 84aae8d:	e8 5e b6 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aae92:	89 04 24             	mov    %eax,(%esp)
 84aae95:	e8 56 38 bd ff       	call   807e6f0 <atoi@plt>
 84aae9a:	8b 55 08             	mov    0x8(%ebp),%edx
 84aae9d:	89 42 0c             	mov    %eax,0xc(%edx)
 84aaea0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aaea3:	89 04 24             	mov    %eax,(%esp)
 84aaea6:	e8 35 cd 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aaeab:	eb 30                	jmp    84aaedd <_ZN11game_master18CChangeNPCFavorCmd5parseEv+0x105>
 84aaead:	89 d3                	mov    %edx,%ebx
 84aaeaf:	89 c6                	mov    %eax,%esi
 84aaeb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aaeb4:	89 04 24             	mov    %eax,(%esp)
 84aaeb7:	e8 24 cd 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aaebc:	89 f0                	mov    %esi,%eax
 84aaebe:	89 da                	mov    %ebx,%edx
 84aaec0:	eb 00                	jmp    84aaec2 <_ZN11game_master18CChangeNPCFavorCmd5parseEv+0xea>
 84aaec2:	89 d3                	mov    %edx,%ebx
 84aaec4:	89 c6                	mov    %eax,%esi
 84aaec6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aaec9:	89 04 24             	mov    %eax,(%esp)
 84aaecc:	e8 0f cd 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aaed1:	89 f0                	mov    %esi,%eax
 84aaed3:	89 da                	mov    %ebx,%edx
 84aaed5:	89 04 24             	mov    %eax,(%esp)
 84aaed8:	e8 73 88 63 00       	call   8ae3750 <_Unwind_Resume>
 84aaedd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aaee0:	89 04 24             	mov    %eax,(%esp)
 84aaee3:	e8 f8 cc 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aaee8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84aaeeb:	83 c4 00             	add    $0x0,%esp
 84aaeee:	5b                   	pop    %ebx
 84aaeef:	5e                   	pop    %esi
 84aaef0:	5d                   	pop    %ebp
 84aaef1:	c3                   	ret

```

```c
// game_master::CChangeNPCFavorCmd::parse @ 0x84aadd8

/* game_master::CChangeNPCFavorCmd::parse() */

void __thiscall game_master::CChangeNPCFavorCmd::parse(CChangeNPCFavorCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aae66 to 084aae6a has its CatchHandler @ 084aaec2 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aae74 to 084aae91 has its CatchHandler @ 084aaead */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aaea6 to 084aaeaa has its CatchHandler @ 084aaec2 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}

```

