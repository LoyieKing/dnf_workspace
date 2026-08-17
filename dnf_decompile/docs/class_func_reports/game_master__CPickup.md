# game_master__CPickup

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ac966 game_master::CPickup::execute  [0x084ac966-0x84ac96b] ===
 84ac966:	55                   	push   %ebp
 84ac967:	89 e5                	mov    %esp,%ebp
 84ac969:	5d                   	pop    %ebp
 84ac96a:	c3                   	ret
 84ac96b:	90                   	nop

```

```c
// game_master::CPickup::execute @ 0x84ac966

/* game_master::CPickup::execute() */

void game_master::CPickup::execute(void)

{
  return;
}

```

---

## parse

```asm
// === 084ac84c game_master::CPickup::parse  [0x084ac84c-0x84ac965] ===
 84ac84c:	55                   	push   %ebp
 84ac84d:	89 e5                	mov    %esp,%ebp
 84ac84f:	56                   	push   %esi
 84ac850:	53                   	push   %ebx
 84ac851:	83 ec 20             	sub    $0x20,%esp
 84ac854:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac857:	8b 40 04             	mov    0x4(%eax),%eax
 84ac85a:	83 c0 0c             	add    $0xc,%eax
 84ac85d:	89 04 24             	mov    %eax,(%esp)
 84ac860:	e8 03 28 df ff       	call   829f068 <_Z4trimRSs>
 84ac865:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac868:	8b 40 04             	mov    0x4(%eax),%eax
 84ac86b:	83 c0 0c             	add    $0xc,%eax
 84ac86e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ac875:	00 
 84ac876:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84ac87d:	08 
 84ac87e:	89 04 24             	mov    %eax,(%esp)
 84ac881:	e8 ba a3 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84ac886:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ac889:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84ac88c:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac88f:	8b 40 04             	mov    0x4(%eax),%eax
 84ac892:	8d 48 0c             	lea    0xc(%eax),%ecx
 84ac895:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ac898:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ac89c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ac8a3:	00 
 84ac8a4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ac8a8:	89 04 24             	mov    %eax,(%esp)
 84ac8ab:	e8 d0 af 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ac8b0:	83 ec 04             	sub    $0x4,%esp
 84ac8b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac8b6:	83 c0 01             	add    $0x1,%eax
 84ac8b9:	89 c2                	mov    %eax,%edx
 84ac8bb:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac8be:	8b 40 04             	mov    0x4(%eax),%eax
 84ac8c1:	8d 48 0c             	lea    0xc(%eax),%ecx
 84ac8c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ac8c7:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84ac8ce:	ff 
 84ac8cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ac8d3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ac8d7:	89 04 24             	mov    %eax,(%esp)
 84ac8da:	e8 a1 af 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ac8df:	83 ec 04             	sub    $0x4,%esp
 84ac8e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ac8e5:	89 04 24             	mov    %eax,(%esp)
 84ac8e8:	e8 03 9c 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac8ed:	89 04 24             	mov    %eax,(%esp)
 84ac8f0:	e8 fb 1d bd ff       	call   807e6f0 <atoi@plt>
 84ac8f5:	8b 55 08             	mov    0x8(%ebp),%edx
 84ac8f8:	89 42 08             	mov    %eax,0x8(%edx)
 84ac8fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ac8fe:	89 04 24             	mov    %eax,(%esp)
 84ac901:	e8 ea 9b 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac906:	89 04 24             	mov    %eax,(%esp)
 84ac909:	e8 e2 1d bd ff       	call   807e6f0 <atoi@plt>
 84ac90e:	8b 55 08             	mov    0x8(%ebp),%edx
 84ac911:	89 42 0c             	mov    %eax,0xc(%edx)
 84ac914:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ac917:	89 04 24             	mov    %eax,(%esp)
 84ac91a:	e8 c1 b2 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ac91f:	eb 30                	jmp    84ac951 <_ZN11game_master7CPickup5parseEv+0x105>
 84ac921:	89 d3                	mov    %edx,%ebx
 84ac923:	89 c6                	mov    %eax,%esi
 84ac925:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ac928:	89 04 24             	mov    %eax,(%esp)
 84ac92b:	e8 b0 b2 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ac930:	89 f0                	mov    %esi,%eax
 84ac932:	89 da                	mov    %ebx,%edx
 84ac934:	eb 00                	jmp    84ac936 <_ZN11game_master7CPickup5parseEv+0xea>
 84ac936:	89 d3                	mov    %edx,%ebx
 84ac938:	89 c6                	mov    %eax,%esi
 84ac93a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ac93d:	89 04 24             	mov    %eax,(%esp)
 84ac940:	e8 9b b2 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ac945:	89 f0                	mov    %esi,%eax
 84ac947:	89 da                	mov    %ebx,%edx
 84ac949:	89 04 24             	mov    %eax,(%esp)
 84ac94c:	e8 ff 6d 63 00       	call   8ae3750 <_Unwind_Resume>
 84ac951:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ac954:	89 04 24             	mov    %eax,(%esp)
 84ac957:	e8 84 b2 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ac95c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ac95f:	83 c4 00             	add    $0x0,%esp
 84ac962:	5b                   	pop    %ebx
 84ac963:	5e                   	pop    %esi
 84ac964:	5d                   	pop    %ebp
 84ac965:	c3                   	ret

```

```c
// game_master::CPickup::parse @ 0x84ac84c

/* game_master::CPickup::parse() */

void __thiscall game_master::CPickup::parse(CPickup *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac8da to 084ac8de has its CatchHandler @ 084ac936 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084ac8e8 to 084ac905 has its CatchHandler @ 084ac921 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar2;
                    /* try { // try from 084ac91a to 084ac91e has its CatchHandler @ 084ac936 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}

```

