# game_master__CChangeNPCMaxDayCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aadd2 game_master::CChangeNPCMaxDayCmd::execute  [0x084aadd2-0x84aadd7] ===
 84aadd2:	55                   	push   %ebp
 84aadd3:	89 e5                	mov    %esp,%ebp
 84aadd5:	5d                   	pop    %ebp
 84aadd6:	c3                   	ret
 84aadd7:	90                   	nop

```

```c
// game_master::CChangeNPCMaxDayCmd::execute @ 0x84aadd2

/* game_master::CChangeNPCMaxDayCmd::execute() */

void game_master::CChangeNPCMaxDayCmd::execute(void)

{
  return;
}

```

---

## parse

```asm
// === 084aacb8 game_master::CChangeNPCMaxDayCmd::parse  [0x084aacb8-0x84aadd1] ===
 84aacb8:	55                   	push   %ebp
 84aacb9:	89 e5                	mov    %esp,%ebp
 84aacbb:	56                   	push   %esi
 84aacbc:	53                   	push   %ebx
 84aacbd:	83 ec 20             	sub    $0x20,%esp
 84aacc0:	8b 45 08             	mov    0x8(%ebp),%eax
 84aacc3:	8b 40 04             	mov    0x4(%eax),%eax
 84aacc6:	83 c0 0c             	add    $0xc,%eax
 84aacc9:	89 04 24             	mov    %eax,(%esp)
 84aaccc:	e8 97 43 df ff       	call   829f068 <_Z4trimRSs>
 84aacd1:	8b 45 08             	mov    0x8(%ebp),%eax
 84aacd4:	8b 40 04             	mov    0x4(%eax),%eax
 84aacd7:	83 c0 0c             	add    $0xc,%eax
 84aacda:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aace1:	00 
 84aace2:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84aace9:	08 
 84aacea:	89 04 24             	mov    %eax,(%esp)
 84aaced:	e8 4e bf 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84aacf2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aacf5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84aacf8:	8b 45 08             	mov    0x8(%ebp),%eax
 84aacfb:	8b 40 04             	mov    0x4(%eax),%eax
 84aacfe:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aad01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aad04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aad08:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aad0f:	00 
 84aad10:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aad14:	89 04 24             	mov    %eax,(%esp)
 84aad17:	e8 64 cb 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aad1c:	83 ec 04             	sub    $0x4,%esp
 84aad1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aad22:	83 c0 01             	add    $0x1,%eax
 84aad25:	89 c2                	mov    %eax,%edx
 84aad27:	8b 45 08             	mov    0x8(%ebp),%eax
 84aad2a:	8b 40 04             	mov    0x4(%eax),%eax
 84aad2d:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aad30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aad33:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84aad3a:	ff 
 84aad3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aad3f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aad43:	89 04 24             	mov    %eax,(%esp)
 84aad46:	e8 35 cb 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aad4b:	83 ec 04             	sub    $0x4,%esp
 84aad4e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aad51:	89 04 24             	mov    %eax,(%esp)
 84aad54:	e8 97 b7 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aad59:	89 04 24             	mov    %eax,(%esp)
 84aad5c:	e8 8f 39 bd ff       	call   807e6f0 <atoi@plt>
 84aad61:	8b 55 08             	mov    0x8(%ebp),%edx
 84aad64:	89 42 08             	mov    %eax,0x8(%edx)
 84aad67:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aad6a:	89 04 24             	mov    %eax,(%esp)
 84aad6d:	e8 7e b7 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aad72:	89 04 24             	mov    %eax,(%esp)
 84aad75:	e8 76 39 bd ff       	call   807e6f0 <atoi@plt>
 84aad7a:	8b 55 08             	mov    0x8(%ebp),%edx
 84aad7d:	89 42 0c             	mov    %eax,0xc(%edx)
 84aad80:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aad83:	89 04 24             	mov    %eax,(%esp)
 84aad86:	e8 55 ce 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aad8b:	eb 30                	jmp    84aadbd <_ZN11game_master19CChangeNPCMaxDayCmd5parseEv+0x105>
 84aad8d:	89 d3                	mov    %edx,%ebx
 84aad8f:	89 c6                	mov    %eax,%esi
 84aad91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aad94:	89 04 24             	mov    %eax,(%esp)
 84aad97:	e8 44 ce 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aad9c:	89 f0                	mov    %esi,%eax
 84aad9e:	89 da                	mov    %ebx,%edx
 84aada0:	eb 00                	jmp    84aada2 <_ZN11game_master19CChangeNPCMaxDayCmd5parseEv+0xea>
 84aada2:	89 d3                	mov    %edx,%ebx
 84aada4:	89 c6                	mov    %eax,%esi
 84aada6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aada9:	89 04 24             	mov    %eax,(%esp)
 84aadac:	e8 2f ce 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aadb1:	89 f0                	mov    %esi,%eax
 84aadb3:	89 da                	mov    %ebx,%edx
 84aadb5:	89 04 24             	mov    %eax,(%esp)
 84aadb8:	e8 93 89 63 00       	call   8ae3750 <_Unwind_Resume>
 84aadbd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aadc0:	89 04 24             	mov    %eax,(%esp)
 84aadc3:	e8 18 ce 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aadc8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84aadcb:	83 c4 00             	add    $0x0,%esp
 84aadce:	5b                   	pop    %ebx
 84aadcf:	5e                   	pop    %esi
 84aadd0:	5d                   	pop    %ebp
 84aadd1:	c3                   	ret

```

```c
// game_master::CChangeNPCMaxDayCmd::parse @ 0x84aacb8

/* game_master::CChangeNPCMaxDayCmd::parse() */

void __thiscall game_master::CChangeNPCMaxDayCmd::parse(CChangeNPCMaxDayCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aad46 to 084aad4a has its CatchHandler @ 084aada2 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aad54 to 084aad71 has its CatchHandler @ 084aad8d */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084aad86 to 084aad8a has its CatchHandler @ 084aada2 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}

```

