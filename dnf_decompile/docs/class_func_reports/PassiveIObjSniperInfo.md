# PassiveIObjSniperInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## PassiveIObjSniperInfo

```asm
// === 08a3af0c PassiveIObjSniperInfo::PassiveIObjSniperInfo  [0x08a3af0c-0x8a3afbf] ===
 8a3af0c:	55                   	push   %ebp
 8a3af0d:	89 e5                	mov    %esp,%ebp
 8a3af0f:	56                   	push   %esi
 8a3af10:	53                   	push   %ebx
 8a3af11:	83 ec 10             	sub    $0x10,%esp
 8a3af14:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af17:	89 04 24             	mov    %eax,(%esp)
 8a3af1a:	e8 8d 32 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3af1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af22:	83 c0 0c             	add    $0xc,%eax
 8a3af25:	89 04 24             	mov    %eax,(%esp)
 8a3af28:	e8 7f 32 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3af2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af30:	83 c0 18             	add    $0x18,%eax
 8a3af33:	89 04 24             	mov    %eax,(%esp)
 8a3af36:	e8 71 32 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3af3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af3e:	83 c0 24             	add    $0x24,%eax
 8a3af41:	89 04 24             	mov    %eax,(%esp)
 8a3af44:	e8 63 32 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3af49:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af4c:	89 04 24             	mov    %eax,(%esp)
 8a3af4f:	e8 6c 00 00 00       	call   8a3afc0 <_ZN21PassiveIObjSniperInfo5clearEv>
 8a3af54:	eb 63                	jmp    8a3afb9 <_ZN21PassiveIObjSniperInfoC1Ev+0xad>
 8a3af56:	89 d3                	mov    %edx,%ebx
 8a3af58:	89 c6                	mov    %eax,%esi
 8a3af5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af5d:	83 c0 24             	add    $0x24,%eax
 8a3af60:	89 04 24             	mov    %eax,(%esp)
 8a3af63:	e8 72 8e 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3af68:	89 f0                	mov    %esi,%eax
 8a3af6a:	89 da                	mov    %ebx,%edx
 8a3af6c:	eb 00                	jmp    8a3af6e <_ZN21PassiveIObjSniperInfoC1Ev+0x62>
 8a3af6e:	89 d3                	mov    %edx,%ebx
 8a3af70:	89 c6                	mov    %eax,%esi
 8a3af72:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af75:	83 c0 18             	add    $0x18,%eax
 8a3af78:	89 04 24             	mov    %eax,(%esp)
 8a3af7b:	e8 5a 8e 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3af80:	89 f0                	mov    %esi,%eax
 8a3af82:	89 da                	mov    %ebx,%edx
 8a3af84:	eb 00                	jmp    8a3af86 <_ZN21PassiveIObjSniperInfoC1Ev+0x7a>
 8a3af86:	89 d3                	mov    %edx,%ebx
 8a3af88:	89 c6                	mov    %eax,%esi
 8a3af8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af8d:	83 c0 0c             	add    $0xc,%eax
 8a3af90:	89 04 24             	mov    %eax,(%esp)
 8a3af93:	e8 42 8e 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3af98:	89 f0                	mov    %esi,%eax
 8a3af9a:	89 da                	mov    %ebx,%edx
 8a3af9c:	eb 00                	jmp    8a3af9e <_ZN21PassiveIObjSniperInfoC1Ev+0x92>
 8a3af9e:	89 d3                	mov    %edx,%ebx
 8a3afa0:	89 c6                	mov    %eax,%esi
 8a3afa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3afa5:	89 04 24             	mov    %eax,(%esp)
 8a3afa8:	e8 2d 8e 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3afad:	89 f0                	mov    %esi,%eax
 8a3afaf:	89 da                	mov    %ebx,%edx
 8a3afb1:	89 04 24             	mov    %eax,(%esp)
 8a3afb4:	e8 97 87 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a3afb9:	83 c4 10             	add    $0x10,%esp
 8a3afbc:	5b                   	pop    %ebx
 8a3afbd:	5e                   	pop    %esi
 8a3afbe:	5d                   	pop    %ebp
 8a3afbf:	c3                   	ret

```

```c
// PassiveIObjSniperInfo::PassiveIObjSniperInfo @ 0x8a3af0c

/* PassiveIObjSniperInfo::PassiveIObjSniperInfo() */

void __thiscall PassiveIObjSniperInfo::PassiveIObjSniperInfo(PassiveIObjSniperInfo *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)this);
                    /* try { // try from 08a3af28 to 08a3af2c has its CatchHandler @ 08a3af9e */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
                    /* try { // try from 08a3af36 to 08a3af3a has its CatchHandler @ 08a3af86 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x18));
                    /* try { // try from 08a3af44 to 08a3af48 has its CatchHandler @ 08a3af6e */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 08a3af4f to 08a3af53 has its CatchHandler @ 08a3af56 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08a3afc0 PassiveIObjSniperInfo::clear  [0x08a3afc0-0x8a3b0ac] ===
 8a3afc0:	55                   	push   %ebp
 8a3afc1:	89 e5                	mov    %esp,%ebp
 8a3afc3:	83 ec 28             	sub    $0x28,%esp
 8a3afc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3afc9:	89 04 24             	mov    %eax,(%esp)
 8a3afcc:	e8 9d bb 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3afd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3afd4:	83 c0 0c             	add    $0xc,%eax
 8a3afd7:	89 04 24             	mov    %eax,(%esp)
 8a3afda:	e8 8f bb 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3afdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3afe2:	83 c0 18             	add    $0x18,%eax
 8a3afe5:	89 04 24             	mov    %eax,(%esp)
 8a3afe8:	e8 81 bb 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3afed:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aff0:	83 c0 24             	add    $0x24,%eax
 8a3aff3:	89 04 24             	mov    %eax,(%esp)
 8a3aff6:	e8 73 bb 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3affb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3affe:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8a3b005:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b008:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 8a3b00f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b012:	c6 40 38 00          	movb   $0x0,0x38(%eax)
 8a3b016:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b019:	c6 40 40 00          	movb   $0x0,0x40(%eax)
 8a3b01d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b020:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 8a3b027:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a3b02e:	eb 15                	jmp    8a3b045 <_ZN21PassiveIObjSniperInfo5clearEv+0x85>
 8a3b030:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a3b033:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b036:	83 c2 10             	add    $0x10,%edx
 8a3b039:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a3b040:	00 
 8a3b041:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8a3b045:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8a3b049:	0f 9e c0             	setle  %al
 8a3b04c:	84 c0                	test   %al,%al
 8a3b04e:	75 e0                	jne    8a3b030 <_ZN21PassiveIObjSniperInfo5clearEv+0x70>
 8a3b050:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a3b057:	eb 15                	jmp    8a3b06e <_ZN21PassiveIObjSniperInfo5clearEv+0xae>
 8a3b059:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a3b05c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b05f:	83 c2 1c             	add    $0x1c,%edx
 8a3b062:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a3b069:	00 
 8a3b06a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a3b06e:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8a3b072:	0f 9e c0             	setle  %al
 8a3b075:	84 c0                	test   %al,%al
 8a3b077:	75 e0                	jne    8a3b059 <_ZN21PassiveIObjSniperInfo5clearEv+0x99>
 8a3b079:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b07c:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 8a3b083:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b086:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 8a3b08d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b090:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 8a3b097:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b09a:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 8a3b0a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3b0a4:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 8a3b0ab:	c9                   	leave
 8a3b0ac:	c3                   	ret

```

```c
// PassiveIObjSniperInfo::clear @ 0x8a3afc0

/* PassiveIObjSniperInfo::clear() */

void __thiscall PassiveIObjSniperInfo::clear(PassiveIObjSniperInfo *this)

{
  int local_14;
  int local_10;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x18));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x24));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (PassiveIObjSniperInfo)0x0;
  this[0x40] = (PassiveIObjSniperInfo)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x10) * 4 + 4) = 0;
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x1c) * 4 + 4) = 0;
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}

```

