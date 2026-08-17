# game_master__CRefund

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aca86 game_master::CRefund::execute  [0x084aca86-0x84aca8b] ===
 84aca86:	55                   	push   %ebp
 84aca87:	89 e5                	mov    %esp,%ebp
 84aca89:	5d                   	pop    %ebp
 84aca8a:	c3                   	ret
 84aca8b:	90                   	nop

```

```c
// game_master::CRefund::execute @ 0x84aca86

/* game_master::CRefund::execute() */

void game_master::CRefund::execute(void)

{
  return;
}

```

---

## parse

```asm
// === 084ac96c game_master::CRefund::parse  [0x084ac96c-0x84aca85] ===
 84ac96c:	55                   	push   %ebp
 84ac96d:	89 e5                	mov    %esp,%ebp
 84ac96f:	56                   	push   %esi
 84ac970:	53                   	push   %ebx
 84ac971:	83 ec 20             	sub    $0x20,%esp
 84ac974:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac977:	8b 40 04             	mov    0x4(%eax),%eax
 84ac97a:	83 c0 0c             	add    $0xc,%eax
 84ac97d:	89 04 24             	mov    %eax,(%esp)
 84ac980:	e8 e3 26 df ff       	call   829f068 <_Z4trimRSs>
 84ac985:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac988:	8b 40 04             	mov    0x4(%eax),%eax
 84ac98b:	83 c0 0c             	add    $0xc,%eax
 84ac98e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ac995:	00 
 84ac996:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84ac99d:	08 
 84ac99e:	89 04 24             	mov    %eax,(%esp)
 84ac9a1:	e8 9a a2 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84ac9a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ac9a9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84ac9ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac9af:	8b 40 04             	mov    0x4(%eax),%eax
 84ac9b2:	8d 48 0c             	lea    0xc(%eax),%ecx
 84ac9b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ac9b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ac9bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ac9c3:	00 
 84ac9c4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ac9c8:	89 04 24             	mov    %eax,(%esp)
 84ac9cb:	e8 b0 ae 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ac9d0:	83 ec 04             	sub    $0x4,%esp
 84ac9d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac9d6:	83 c0 01             	add    $0x1,%eax
 84ac9d9:	89 c2                	mov    %eax,%edx
 84ac9db:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac9de:	8b 40 04             	mov    0x4(%eax),%eax
 84ac9e1:	8d 48 0c             	lea    0xc(%eax),%ecx
 84ac9e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ac9e7:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84ac9ee:	ff 
 84ac9ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ac9f3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ac9f7:	89 04 24             	mov    %eax,(%esp)
 84ac9fa:	e8 81 ae 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ac9ff:	83 ec 04             	sub    $0x4,%esp
 84aca02:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aca05:	89 04 24             	mov    %eax,(%esp)
 84aca08:	e8 e3 9a 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aca0d:	89 04 24             	mov    %eax,(%esp)
 84aca10:	e8 db 1c bd ff       	call   807e6f0 <atoi@plt>
 84aca15:	8b 55 08             	mov    0x8(%ebp),%edx
 84aca18:	89 42 08             	mov    %eax,0x8(%edx)
 84aca1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aca1e:	89 04 24             	mov    %eax,(%esp)
 84aca21:	e8 ca 9a 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aca26:	89 04 24             	mov    %eax,(%esp)
 84aca29:	e8 c2 1c bd ff       	call   807e6f0 <atoi@plt>
 84aca2e:	8b 55 08             	mov    0x8(%ebp),%edx
 84aca31:	89 42 0c             	mov    %eax,0xc(%edx)
 84aca34:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aca37:	89 04 24             	mov    %eax,(%esp)
 84aca3a:	e8 a1 b1 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aca3f:	eb 30                	jmp    84aca71 <_ZN11game_master7CRefund5parseEv+0x105>
 84aca41:	89 d3                	mov    %edx,%ebx
 84aca43:	89 c6                	mov    %eax,%esi
 84aca45:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aca48:	89 04 24             	mov    %eax,(%esp)
 84aca4b:	e8 90 b1 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aca50:	89 f0                	mov    %esi,%eax
 84aca52:	89 da                	mov    %ebx,%edx
 84aca54:	eb 00                	jmp    84aca56 <_ZN11game_master7CRefund5parseEv+0xea>
 84aca56:	89 d3                	mov    %edx,%ebx
 84aca58:	89 c6                	mov    %eax,%esi
 84aca5a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aca5d:	89 04 24             	mov    %eax,(%esp)
 84aca60:	e8 7b b1 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aca65:	89 f0                	mov    %esi,%eax
 84aca67:	89 da                	mov    %ebx,%edx
 84aca69:	89 04 24             	mov    %eax,(%esp)
 84aca6c:	e8 df 6c 63 00       	call   8ae3750 <_Unwind_Resume>
 84aca71:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aca74:	89 04 24             	mov    %eax,(%esp)
 84aca77:	e8 64 b1 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aca7c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84aca7f:	83 c4 00             	add    $0x0,%esp
 84aca82:	5b                   	pop    %ebx
 84aca83:	5e                   	pop    %esi
 84aca84:	5d                   	pop    %ebp
 84aca85:	c3                   	ret

```

```c
// game_master::CRefund::parse @ 0x84ac96c

/* game_master::CRefund::parse() */

void __thiscall game_master::CRefund::parse(CRefund *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac9fa to 084ac9fe has its CatchHandler @ 084aca56 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aca08 to 084aca25 has its CatchHandler @ 084aca41 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aca3a to 084aca3e has its CatchHandler @ 084aca56 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}

```

