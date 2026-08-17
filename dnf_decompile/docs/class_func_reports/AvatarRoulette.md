# AvatarRoulette

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## AvatarRoulette

```asm
// === 08911b98 AvatarRoulette::AvatarRoulette  [0x08911b98-0x8911cf5] ===
 8911b98:	55                   	push   %ebp
 8911b99:	89 e5                	mov    %esp,%ebp
 8911b9b:	57                   	push   %edi
 8911b9c:	56                   	push   %esi
 8911b9d:	53                   	push   %ebx
 8911b9e:	83 ec 2c             	sub    $0x2c,%esp
 8911ba1:	8b 45 08             	mov    0x8(%ebp),%eax
 8911ba4:	8d 70 14             	lea    0x14(%eax),%esi
 8911ba7:	89 f7                	mov    %esi,%edi
 8911ba9:	bb 0a 00 00 00       	mov    $0xa,%ebx
 8911bae:	eb 0e                	jmp    8911bbe <_ZN14AvatarRouletteC1Ev+0x26>
 8911bb0:	89 3c 24             	mov    %edi,(%esp)
 8911bb3:	e8 ce f1 00 00       	call   8920d86 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEC1Ev>
 8911bb8:	83 c7 0c             	add    $0xc,%edi
 8911bbb:	83 eb 01             	sub    $0x1,%ebx
 8911bbe:	83 fb ff             	cmp    $0xffffffff,%ebx
 8911bc1:	0f 95 c0             	setne  %al
 8911bc4:	84 c0                	test   %al,%al
 8911bc6:	75 e8                	jne    8911bb0 <_ZN14AvatarRouletteC1Ev+0x18>
 8911bc8:	eb 3c                	jmp    8911c06 <_ZN14AvatarRouletteC1Ev+0x6e>
 8911bca:	89 d7                	mov    %edx,%edi
 8911bcc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8911bcf:	85 f6                	test   %esi,%esi
 8911bd1:	74 26                	je     8911bf9 <_ZN14AvatarRouletteC1Ev+0x61>
 8911bd3:	b8 0a 00 00 00       	mov    $0xa,%eax
 8911bd8:	29 d8                	sub    %ebx,%eax
 8911bda:	89 c2                	mov    %eax,%edx
 8911bdc:	89 d0                	mov    %edx,%eax
 8911bde:	01 c0                	add    %eax,%eax
 8911be0:	01 d0                	add    %edx,%eax
 8911be2:	c1 e0 02             	shl    $0x2,%eax
 8911be5:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8911be8:	39 f3                	cmp    %esi,%ebx
 8911bea:	74 0d                	je     8911bf9 <_ZN14AvatarRouletteC1Ev+0x61>
 8911bec:	83 eb 0c             	sub    $0xc,%ebx
 8911bef:	89 1c 24             	mov    %ebx,(%esp)
 8911bf2:	e8 bb 12 a8 ff       	call   8392eb2 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EED1Ev>
 8911bf7:	eb ef                	jmp    8911be8 <_ZN14AvatarRouletteC1Ev+0x50>
 8911bf9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8911bfc:	89 fa                	mov    %edi,%edx
 8911bfe:	89 04 24             	mov    %eax,(%esp)
 8911c01:	e8 4a 1b 1d 00       	call   8ae3750 <_Unwind_Resume>
 8911c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8911c09:	8d b0 98 00 00 00    	lea    0x98(%eax),%esi
 8911c0f:	89 f7                	mov    %esi,%edi
 8911c11:	bb 0a 00 00 00       	mov    $0xa,%ebx
 8911c16:	eb 0e                	jmp    8911c26 <_ZN14AvatarRouletteC1Ev+0x8e>
 8911c18:	89 3c 24             	mov    %edi,(%esp)
 8911c1b:	e8 8c c5 77 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8911c20:	83 c7 0c             	add    $0xc,%edi
 8911c23:	83 eb 01             	sub    $0x1,%ebx
 8911c26:	83 fb ff             	cmp    $0xffffffff,%ebx
 8911c29:	0f 95 c0             	setne  %al
 8911c2c:	84 c0                	test   %al,%al
 8911c2e:	75 e8                	jne    8911c18 <_ZN14AvatarRouletteC1Ev+0x80>
 8911c30:	eb 36                	jmp    8911c68 <_ZN14AvatarRouletteC1Ev+0xd0>
 8911c32:	89 d7                	mov    %edx,%edi
 8911c34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8911c37:	85 f6                	test   %esi,%esi
 8911c39:	74 26                	je     8911c61 <_ZN14AvatarRouletteC1Ev+0xc9>
 8911c3b:	b8 0a 00 00 00       	mov    $0xa,%eax
 8911c40:	29 d8                	sub    %ebx,%eax
 8911c42:	89 c2                	mov    %eax,%edx
 8911c44:	89 d0                	mov    %edx,%eax
 8911c46:	01 c0                	add    %eax,%eax
 8911c48:	01 d0                	add    %edx,%eax
 8911c4a:	c1 e0 02             	shl    $0x2,%eax
 8911c4d:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8911c50:	39 f3                	cmp    %esi,%ebx
 8911c52:	74 0d                	je     8911c61 <_ZN14AvatarRouletteC1Ev+0xc9>
 8911c54:	83 eb 0c             	sub    $0xc,%ebx
 8911c57:	89 1c 24             	mov    %ebx,(%esp)
 8911c5a:	e8 7b 21 77 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8911c5f:	eb ef                	jmp    8911c50 <_ZN14AvatarRouletteC1Ev+0xb8>
 8911c61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8911c64:	89 fa                	mov    %edi,%edx
 8911c66:	eb 48                	jmp    8911cb0 <_ZN14AvatarRouletteC1Ev+0x118>
 8911c68:	8b 45 08             	mov    0x8(%ebp),%eax
 8911c6b:	89 04 24             	mov    %eax,(%esp)
 8911c6e:	e8 83 00 00 00       	call   8911cf6 <_ZN14AvatarRoulette5clearEv>
 8911c73:	eb 78                	jmp    8911ced <_ZN14AvatarRouletteC1Ev+0x155>
 8911c75:	89 d6                	mov    %edx,%esi
 8911c77:	89 c7                	mov    %eax,%edi
 8911c79:	8b 45 08             	mov    0x8(%ebp),%eax
 8911c7c:	05 98 00 00 00       	add    $0x98,%eax
 8911c81:	85 c0                	test   %eax,%eax
 8911c83:	74 27                	je     8911cac <_ZN14AvatarRouletteC1Ev+0x114>
 8911c85:	8b 45 08             	mov    0x8(%ebp),%eax
 8911c88:	05 98 00 00 00       	add    $0x98,%eax
 8911c8d:	8d 98 84 00 00 00    	lea    0x84(%eax),%ebx
 8911c93:	8b 45 08             	mov    0x8(%ebp),%eax
 8911c96:	05 98 00 00 00       	add    $0x98,%eax
 8911c9b:	39 c3                	cmp    %eax,%ebx
 8911c9d:	74 0d                	je     8911cac <_ZN14AvatarRouletteC1Ev+0x114>
 8911c9f:	83 eb 0c             	sub    $0xc,%ebx
 8911ca2:	89 1c 24             	mov    %ebx,(%esp)
 8911ca5:	e8 30 21 77 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8911caa:	eb e7                	jmp    8911c93 <_ZN14AvatarRouletteC1Ev+0xfb>
 8911cac:	89 f8                	mov    %edi,%eax
 8911cae:	89 f2                	mov    %esi,%edx
 8911cb0:	89 d6                	mov    %edx,%esi
 8911cb2:	89 c7                	mov    %eax,%edi
 8911cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8911cb7:	83 c0 14             	add    $0x14,%eax
 8911cba:	85 c0                	test   %eax,%eax
 8911cbc:	74 23                	je     8911ce1 <_ZN14AvatarRouletteC1Ev+0x149>
 8911cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8911cc1:	83 c0 14             	add    $0x14,%eax
 8911cc4:	8d 98 84 00 00 00    	lea    0x84(%eax),%ebx
 8911cca:	8b 45 08             	mov    0x8(%ebp),%eax
 8911ccd:	83 c0 14             	add    $0x14,%eax
 8911cd0:	39 c3                	cmp    %eax,%ebx
 8911cd2:	74 0d                	je     8911ce1 <_ZN14AvatarRouletteC1Ev+0x149>
 8911cd4:	83 eb 0c             	sub    $0xc,%ebx
 8911cd7:	89 1c 24             	mov    %ebx,(%esp)
 8911cda:	e8 d3 11 a8 ff       	call   8392eb2 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EED1Ev>
 8911cdf:	eb e9                	jmp    8911cca <_ZN14AvatarRouletteC1Ev+0x132>
 8911ce1:	89 f8                	mov    %edi,%eax
 8911ce3:	89 f2                	mov    %esi,%edx
 8911ce5:	89 04 24             	mov    %eax,(%esp)
 8911ce8:	e8 63 1a 1d 00       	call   8ae3750 <_Unwind_Resume>
 8911ced:	83 c4 2c             	add    $0x2c,%esp
 8911cf0:	5b                   	pop    %ebx
 8911cf1:	5e                   	pop    %esi
 8911cf2:	5f                   	pop    %edi
 8911cf3:	5d                   	pop    %ebp
 8911cf4:	c3                   	ret
 8911cf5:	90                   	nop

```

```c
// AvatarRoulette::AvatarRoulette @ 0x8911b98

/* AvatarRoulette::AvatarRoulette() */

void __thiscall AvatarRoulette::AvatarRoulette(AvatarRoulette *this)

{
  int iVar1;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  this_00 = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
             *)(this + 0x14);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08911bb3 to 08911bb7 has its CatchHandler @ 08911bca */
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x98);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08911c1b to 08911c1f has its CatchHandler @ 08911c32 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 08911c6e to 08911c72 has its CatchHandler @ 08911c75 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08911cf6 AvatarRoulette::clear  [0x08911cf6-0x8911d9f] ===
 8911cf6:	55                   	push   %ebp
 8911cf7:	89 e5                	mov    %esp,%ebp
 8911cf9:	83 ec 28             	sub    $0x28,%esp
 8911cfc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8911d03:	e9 87 00 00 00       	jmp    8911d8f <_ZN14AvatarRoulette5clearEv+0x99>
 8911d08:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8911d0f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8911d12:	89 d0                	mov    %edx,%eax
 8911d14:	01 c0                	add    %eax,%eax
 8911d16:	01 d0                	add    %edx,%eax
 8911d18:	c1 e0 02             	shl    $0x2,%eax
 8911d1b:	83 c0 10             	add    $0x10,%eax
 8911d1e:	03 45 08             	add    0x8(%ebp),%eax
 8911d21:	83 c0 04             	add    $0x4,%eax
 8911d24:	89 04 24             	mov    %eax,(%esp)
 8911d27:	e8 34 ea 86 ff       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 8911d2c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8911d2f:	eb 30                	jmp    8911d61 <_ZN14AvatarRoulette5clearEv+0x6b>
 8911d31:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8911d34:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8911d37:	89 d0                	mov    %edx,%eax
 8911d39:	01 c0                	add    %eax,%eax
 8911d3b:	01 d0                	add    %edx,%eax
 8911d3d:	c1 e0 02             	shl    $0x2,%eax
 8911d40:	83 c0 10             	add    $0x10,%eax
 8911d43:	03 45 08             	add    0x8(%ebp),%eax
 8911d46:	83 c0 04             	add    $0x4,%eax
 8911d49:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8911d4d:	89 04 24             	mov    %eax,(%esp)
 8911d50:	e8 2d ea 86 ff       	call   8180782 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEixEj>
 8911d55:	89 04 24             	mov    %eax,(%esp)
 8911d58:	e8 3d f0 00 00       	call   8920d9a <_ZNSt6vectorISt4pairImiESaIS1_EE5clearEv>
 8911d5d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8911d61:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8911d64:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8911d67:	0f 9c c0             	setl   %al
 8911d6a:	84 c0                	test   %al,%al
 8911d6c:	75 c3                	jne    8911d31 <_ZN14AvatarRoulette5clearEv+0x3b>
 8911d6e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8911d71:	89 d0                	mov    %edx,%eax
 8911d73:	01 c0                	add    %eax,%eax
 8911d75:	01 d0                	add    %edx,%eax
 8911d77:	c1 e0 02             	shl    $0x2,%eax
 8911d7a:	83 c0 10             	add    $0x10,%eax
 8911d7d:	03 45 08             	add    0x8(%ebp),%eax
 8911d80:	83 c0 04             	add    $0x4,%eax
 8911d83:	89 04 24             	mov    %eax,(%esp)
 8911d86:	e8 2b f0 00 00       	call   8920db6 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE5clearEv>
 8911d8b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8911d8f:	83 7d ec 0a          	cmpl   $0xa,-0x14(%ebp)
 8911d93:	0f 9e c0             	setle  %al
 8911d96:	84 c0                	test   %al,%al
 8911d98:	0f 85 6a ff ff ff    	jne    8911d08 <_ZN14AvatarRoulette5clearEv+0x12>
 8911d9e:	c9                   	leave
 8911d9f:	c3                   	ret

```

```c
// AvatarRoulette::clear @ 0x8911cf6

/* AvatarRoulette::clear() */

void __thiscall AvatarRoulette::clear(AvatarRoulette *this)

{
  int iVar1;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *this_00;
  int local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
    local_14 = 0;
    iVar1 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(this + local_18 * 0xc + 0x14));
    for (; (int)local_14 < iVar1; local_14 = local_14 + 1) {
      this_00 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *
                )std::
                 vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                               *)(this + local_18 * 0xc + 0x14),local_14);
      std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>::clear
                (this_00);
    }
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::clear((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
             *)(this + local_18 * 0xc + 0x14));
  }
  return;
}

```

---

## getAvatarList

```asm
// === 08911db0 AvatarRoulette::getAvatarList  [0x08911db0-0x8911dfd] ===
 8911db0:	55                   	push   %ebp
 8911db1:	89 e5                	mov    %esp,%ebp
 8911db3:	83 ec 18             	sub    $0x18,%esp
 8911db6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911db9:	c6 00 00             	movb   $0x0,(%eax)
 8911dbc:	8b 45 10             	mov    0x10(%ebp),%eax
 8911dbf:	85 c0                	test   %eax,%eax
 8911dc1:	78 34                	js     8911df7 <_ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE+0x47>
 8911dc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8911dc6:	83 f8 0a             	cmp    $0xa,%eax
 8911dc9:	7f 2f                	jg     8911dfa <_ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE+0x4a>
 8911dcb:	8b 55 10             	mov    0x10(%ebp),%edx
 8911dce:	89 d0                	mov    %edx,%eax
 8911dd0:	01 c0                	add    %eax,%eax
 8911dd2:	01 d0                	add    %edx,%eax
 8911dd4:	c1 e0 02             	shl    $0x2,%eax
 8911dd7:	83 c0 10             	add    $0x10,%eax
 8911dda:	03 45 08             	add    0x8(%ebp),%eax
 8911ddd:	83 c0 04             	add    $0x4,%eax
 8911de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8911de4:	8b 45 14             	mov    0x14(%ebp),%eax
 8911de7:	89 04 24             	mov    %eax,(%esp)
 8911dea:	e8 e3 ef 00 00       	call   8920dd2 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEaSERKS5_>
 8911def:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911df2:	c6 00 01             	movb   $0x1,(%eax)
 8911df5:	eb 04                	jmp    8911dfb <_ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE+0x4b>
 8911df7:	90                   	nop
 8911df8:	eb 01                	jmp    8911dfb <_ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE+0x4b>
 8911dfa:	90                   	nop
 8911dfb:	c9                   	leave
 8911dfc:	c3                   	ret
 8911dfd:	90                   	nop

```

```c
// AvatarRoulette::getAvatarList @ 0x8911db0

/* AvatarRoulette::getAvatarList(bool&, ENUM_CHARACTERJOB,
   std::vector<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long,
   int> > >, std::allocator<std::vector<std::pair<unsigned long, int>,
   std::allocator<std::pair<unsigned long, int> > > > >&) */

void __thiscall
AvatarRoulette::getAvatarList
          (AvatarRoulette *this,undefined1 *param_1,int param_3,
          vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
          *param_4)

{
  *param_1 = 0;
  if ((-1 < param_3) && (param_3 < 0xb)) {
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::operator=(param_4,(vector *)(this + param_3 * 0xc + 0x14));
    *param_1 = 1;
  }
  return;
}

```

---

## getStikerList

```asm
// === 08911dfe AvatarRoulette::getStikerList  [0x08911dfe-0x8911e4d] ===
 8911dfe:	55                   	push   %ebp
 8911dff:	89 e5                	mov    %esp,%ebp
 8911e01:	83 ec 18             	sub    $0x18,%esp
 8911e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e07:	c6 00 00             	movb   $0x0,(%eax)
 8911e0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8911e0d:	85 c0                	test   %eax,%eax
 8911e0f:	78 36                	js     8911e47 <_ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE+0x49>
 8911e11:	8b 45 10             	mov    0x10(%ebp),%eax
 8911e14:	83 f8 0a             	cmp    $0xa,%eax
 8911e17:	7f 31                	jg     8911e4a <_ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE+0x4c>
 8911e19:	8b 55 10             	mov    0x10(%ebp),%edx
 8911e1c:	89 d0                	mov    %edx,%eax
 8911e1e:	01 c0                	add    %eax,%eax
 8911e20:	01 d0                	add    %edx,%eax
 8911e22:	c1 e0 02             	shl    $0x2,%eax
 8911e25:	05 90 00 00 00       	add    $0x90,%eax
 8911e2a:	03 45 08             	add    0x8(%ebp),%eax
 8911e2d:	83 c0 08             	add    $0x8,%eax
 8911e30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8911e34:	8b 45 14             	mov    0x14(%ebp),%eax
 8911e37:	89 04 24             	mov    %eax,(%esp)
 8911e3a:	e8 93 b1 7b ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8911e3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e42:	c6 00 01             	movb   $0x1,(%eax)
 8911e45:	eb 04                	jmp    8911e4b <_ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE+0x4d>
 8911e47:	90                   	nop
 8911e48:	eb 01                	jmp    8911e4b <_ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE+0x4d>
 8911e4a:	90                   	nop
 8911e4b:	c9                   	leave
 8911e4c:	c3                   	ret
 8911e4d:	90                   	nop

```

```c
// AvatarRoulette::getStikerList @ 0x8911dfe

/* AvatarRoulette::getStikerList(bool&, ENUM_CHARACTERJOB, std::vector<int, std::allocator<int> >&)
    */

void __thiscall
AvatarRoulette::getStikerList
          (AvatarRoulette *this,undefined1 *param_1,int param_3,
          vector<int,std::allocator<int>> *param_4)

{
  *param_1 = 0;
  if ((-1 < param_3) && (param_3 < 0xb)) {
    std::vector<int,std::allocator<int>>::operator=(param_4,(vector *)(this + param_3 * 0xc + 0x98))
    ;
    *param_1 = 1;
  }
  return;
}

```

---

## isAvatarCoin

```asm
// === 08911da0 AvatarRoulette::isAvatarCoin  [0x08911da0-0x8911daf] ===
 8911da0:	55                   	push   %ebp
 8911da1:	89 e5                	mov    %esp,%ebp
 8911da3:	8b 45 08             	mov    0x8(%ebp),%eax
 8911da6:	8b 00                	mov    (%eax),%eax
 8911da8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8911dab:	0f 94 c0             	sete   %al
 8911dae:	5d                   	pop    %ebp
 8911daf:	c3                   	ret

```

```c
// AvatarRoulette::isAvatarCoin @ 0x8911da0

/* AvatarRoulette::isAvatarCoin(unsigned long) */

undefined4 __thiscall AvatarRoulette::isAvatarCoin(AvatarRoulette *this,ulong param_1)

{
  return CONCAT31((int3)(*(ulong *)this >> 8),*(ulong *)this == param_1);
}

```

---

## swap

```asm
// === 08911e4e AvatarRoulette::swap  [0x08911e4e-0x8911ee2] ===
 8911e4e:	55                   	push   %ebp
 8911e4f:	89 e5                	mov    %esp,%ebp
 8911e51:	83 ec 28             	sub    $0x28,%esp
 8911e54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e57:	8b 10                	mov    (%eax),%edx
 8911e59:	8b 45 08             	mov    0x8(%ebp),%eax
 8911e5c:	89 10                	mov    %edx,(%eax)
 8911e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e61:	8b 50 04             	mov    0x4(%eax),%edx
 8911e64:	8b 45 08             	mov    0x8(%ebp),%eax
 8911e67:	89 50 04             	mov    %edx,0x4(%eax)
 8911e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e6d:	8b 50 08             	mov    0x8(%eax),%edx
 8911e70:	8b 45 08             	mov    0x8(%ebp),%eax
 8911e73:	89 50 08             	mov    %edx,0x8(%eax)
 8911e76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e79:	8b 50 0c             	mov    0xc(%eax),%edx
 8911e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8911e7f:	89 50 0c             	mov    %edx,0xc(%eax)
 8911e82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8911e85:	8b 50 10             	mov    0x10(%eax),%edx
 8911e88:	8b 45 08             	mov    0x8(%ebp),%eax
 8911e8b:	89 50 10             	mov    %edx,0x10(%eax)
 8911e8e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8911e95:	eb 3a                	jmp    8911ed1 <_ZN14AvatarRoulette4swapEPS_+0x83>
 8911e97:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8911e9a:	89 d0                	mov    %edx,%eax
 8911e9c:	01 c0                	add    %eax,%eax
 8911e9e:	01 d0                	add    %edx,%eax
 8911ea0:	c1 e0 02             	shl    $0x2,%eax
 8911ea3:	83 c0 10             	add    $0x10,%eax
 8911ea6:	03 45 0c             	add    0xc(%ebp),%eax
 8911ea9:	8d 48 04             	lea    0x4(%eax),%ecx
 8911eac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8911eaf:	89 d0                	mov    %edx,%eax
 8911eb1:	01 c0                	add    %eax,%eax
 8911eb3:	01 d0                	add    %edx,%eax
 8911eb5:	c1 e0 02             	shl    $0x2,%eax
 8911eb8:	83 c0 10             	add    $0x10,%eax
 8911ebb:	03 45 08             	add    0x8(%ebp),%eax
 8911ebe:	83 c0 04             	add    $0x4,%eax
 8911ec1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8911ec5:	89 04 24             	mov    %eax,(%esp)
 8911ec8:	e8 77 f1 00 00       	call   8921044 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4swapEOS5_>
 8911ecd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8911ed1:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8911ed5:	0f 9e c0             	setle  %al
 8911ed8:	84 c0                	test   %al,%al
 8911eda:	75 bb                	jne    8911e97 <_ZN14AvatarRoulette4swapEPS_+0x49>
 8911edc:	b8 01 00 00 00       	mov    $0x1,%eax
 8911ee1:	c9                   	leave
 8911ee2:	c3                   	ret

```

```c
// AvatarRoulette::swap @ 0x8911e4e

/* AvatarRoulette::swap(AvatarRoulette*) */

undefined4 __thiscall AvatarRoulette::swap(AvatarRoulette *this,AvatarRoulette *param_1)

{
  int local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::swap((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            *)(this + local_10 * 0xc + 0x14),(vector *)(param_1 + local_10 * 0xc + 0x14));
  }
  return 1;
}

```

