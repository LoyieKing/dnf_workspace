# WongWork__CCompoundAvatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CCompoundAvatar

```asm
// === 08331d74 WongWork::CCompoundAvatar::CCompoundAvatar  [0x08331d74-0x8331ea1] ===
 8331d74:	55                   	push   %ebp
 8331d75:	89 e5                	mov    %esp,%ebp
 8331d77:	57                   	push   %edi
 8331d78:	56                   	push   %esi
 8331d79:	53                   	push   %ebx
 8331d7a:	83 ec 3c             	sub    $0x3c,%esp
 8331d7d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8331d80:	89 df                	mov    %ebx,%edi
 8331d82:	be 0a 00 00 00       	mov    $0xa,%esi
 8331d87:	eb 0e                	jmp    8331d97 <_ZN8WongWork15CCompoundAvatarC1Ev+0x23>
 8331d89:	89 3c 24             	mov    %edi,(%esp)
 8331d8c:	e8 8b 25 00 00       	call   833431c <_ZN22tagCompoundAvatarTableC1Ev>
 8331d91:	83 c7 0c             	add    $0xc,%edi
 8331d94:	83 ee 01             	sub    $0x1,%esi
 8331d97:	83 fe ff             	cmp    $0xffffffff,%esi
 8331d9a:	0f 95 c0             	setne  %al
 8331d9d:	84 c0                	test   %al,%al
 8331d9f:	75 e8                	jne    8331d89 <_ZN8WongWork15CCompoundAvatarC1Ev+0x15>
 8331da1:	eb 3c                	jmp    8331ddf <_ZN8WongWork15CCompoundAvatarC1Ev+0x6b>
 8331da3:	89 d7                	mov    %edx,%edi
 8331da5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8331da8:	85 db                	test   %ebx,%ebx
 8331daa:	74 26                	je     8331dd2 <_ZN8WongWork15CCompoundAvatarC1Ev+0x5e>
 8331dac:	b8 0a 00 00 00       	mov    $0xa,%eax
 8331db1:	29 f0                	sub    %esi,%eax
 8331db3:	89 c2                	mov    %eax,%edx
 8331db5:	89 d0                	mov    %edx,%eax
 8331db7:	01 c0                	add    %eax,%eax
 8331db9:	01 d0                	add    %edx,%eax
 8331dbb:	c1 e0 02             	shl    $0x2,%eax
 8331dbe:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8331dc1:	39 de                	cmp    %ebx,%esi
 8331dc3:	74 0d                	je     8331dd2 <_ZN8WongWork15CCompoundAvatarC1Ev+0x5e>
 8331dc5:	83 ee 0c             	sub    $0xc,%esi
 8331dc8:	89 34 24             	mov    %esi,(%esp)
 8331dcb:	e8 60 25 00 00       	call   8334330 <_ZN22tagCompoundAvatarTableD1Ev>
 8331dd0:	eb ef                	jmp    8331dc1 <_ZN8WongWork15CCompoundAvatarC1Ev+0x4d>
 8331dd2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8331dd5:	89 fa                	mov    %edi,%edx
 8331dd7:	89 04 24             	mov    %eax,(%esp)
 8331dda:	e8 71 19 7b 00       	call   8ae3750 <_Unwind_Resume>
 8331ddf:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8331de6:	e8 65 b9 d4 ff       	call   807d750 <time@plt>
 8331deb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8331dee:	8d 75 dc             	lea    -0x24(%ebp),%esi
 8331df1:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 8331df8:	e8 53 26 3f 00       	call   8724450 <_Znwj>
 8331dfd:	89 c3                	mov    %eax,%ebx
 8331dff:	89 d8                	mov    %ebx,%eax
 8331e01:	89 74 24 04          	mov    %esi,0x4(%esp)
 8331e05:	89 04 24             	mov    %eax,(%esp)
 8331e08:	e8 1d 9c d9 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 8331e0d:	eb 12                	jmp    8331e21 <_ZN8WongWork15CCompoundAvatarC1Ev+0xad>
 8331e0f:	89 d6                	mov    %edx,%esi
 8331e11:	89 c7                	mov    %eax,%edi
 8331e13:	89 1c 24             	mov    %ebx,(%esp)
 8331e16:	e8 d5 26 3f 00       	call   87244f0 <_ZdlPv>
 8331e1b:	89 f8                	mov    %edi,%eax
 8331e1d:	89 f2                	mov    %esi,%edx
 8331e1f:	eb 44                	jmp    8331e65 <_ZN8WongWork15CCompoundAvatarC1Ev+0xf1>
 8331e21:	89 da                	mov    %ebx,%edx
 8331e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8331e26:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 8331e2c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8331e33:	eb 23                	jmp    8331e58 <_ZN8WongWork15CCompoundAvatarC1Ev+0xe4>
 8331e35:	c7 45 e0 10 27 00 00 	movl   $0x2710,-0x20(%ebp)
 8331e3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8331e3f:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8331e45:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8331e48:	89 54 24 04          	mov    %edx,0x4(%esp)
 8331e4c:	89 04 24             	mov    %eax,(%esp)
 8331e4f:	e8 6a 9c d9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8331e54:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8331e58:	83 7d e4 63          	cmpl   $0x63,-0x1c(%ebp)
 8331e5c:	0f 9e c0             	setle  %al
 8331e5f:	84 c0                	test   %al,%al
 8331e61:	75 d2                	jne    8331e35 <_ZN8WongWork15CCompoundAvatarC1Ev+0xc1>
 8331e63:	eb 34                	jmp    8331e99 <_ZN8WongWork15CCompoundAvatarC1Ev+0x125>
 8331e65:	89 d6                	mov    %edx,%esi
 8331e67:	89 c7                	mov    %eax,%edi
 8331e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8331e6c:	85 c0                	test   %eax,%eax
 8331e6e:	74 1d                	je     8331e8d <_ZN8WongWork15CCompoundAvatarC1Ev+0x119>
 8331e70:	8b 45 08             	mov    0x8(%ebp),%eax
 8331e73:	8d 98 84 00 00 00    	lea    0x84(%eax),%ebx
 8331e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8331e7c:	39 c3                	cmp    %eax,%ebx
 8331e7e:	74 0d                	je     8331e8d <_ZN8WongWork15CCompoundAvatarC1Ev+0x119>
 8331e80:	83 eb 0c             	sub    $0xc,%ebx
 8331e83:	89 1c 24             	mov    %ebx,(%esp)
 8331e86:	e8 a5 24 00 00       	call   8334330 <_ZN22tagCompoundAvatarTableD1Ev>
 8331e8b:	eb ec                	jmp    8331e79 <_ZN8WongWork15CCompoundAvatarC1Ev+0x105>
 8331e8d:	89 f8                	mov    %edi,%eax
 8331e8f:	89 f2                	mov    %esi,%edx
 8331e91:	89 04 24             	mov    %eax,(%esp)
 8331e94:	e8 b7 18 7b 00       	call   8ae3750 <_Unwind_Resume>
 8331e99:	83 c4 3c             	add    $0x3c,%esp
 8331e9c:	5b                   	pop    %ebx
 8331e9d:	5e                   	pop    %esi
 8331e9e:	5f                   	pop    %edi
 8331e9f:	5d                   	pop    %ebp
 8331ea0:	c3                   	ret
 8331ea1:	90                   	nop

```

```c
// WongWork::CCompoundAvatar::CCompoundAvatar @ 0x8331d74

/* WongWork::CCompoundAvatar::CCompoundAvatar() */

void __thiscall WongWork::CCompoundAvatar::CCompoundAvatar(CCompoundAvatar *this)

{
  CMTRand *this_00;
  int iVar1;
  CCompoundAvatar *this_01;
  ulong local_28 [6];
  
  this_01 = this;
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08331d8c to 08331d90 has its CatchHandler @ 08331da3 */
    tagCompoundAvatarTable::tagCompoundAvatarTable((tagCompoundAvatarTable *)this_01);
    this_01 = this_01 + 0xc;
  }
  local_28[0] = time((time_t *)0x0);
                    /* try { // try from 08331df8 to 08331dfc has its CatchHandler @ 08331e65 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08331e08 to 08331e0c has its CatchHandler @ 08331e0f */
  CMTRand::CMTRand(this_00,local_28);
  *(CMTRand **)(this + 0x84) = this_00;
  for (local_28[2] = 0; (int)local_28[2] < 100; local_28[2] = local_28[2] + 1) {
    local_28[1] = 10000;
    CMTRand::randInt(*(CMTRand **)(this + 0x84),local_28 + 1);
  }
  return;
}

```

---

## LoadScript

```asm
// === 08333ea6 WongWork::CCompoundAvatar::LoadScript  [0x08333ea6-0x8333ecb] ===
 8333ea6:	55                   	push   %ebp
 8333ea7:	89 e5                	mov    %esp,%ebp
 8333ea9:	83 ec 18             	sub    $0x18,%esp
 8333eac:	8b 45 08             	mov    0x8(%ebp),%eax
 8333eaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333eb3:	8b 45 10             	mov    0x10(%ebp),%eax
 8333eb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333eba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333ebd:	89 04 24             	mov    %eax,(%esp)
 8333ec0:	e8 e2 ff 5c 00       	call   8903ea7 <_Z25importCompoundAvatarTablePKcS0_P22tagCompoundAvatarTable>
 8333ec5:	85 c0                	test   %eax,%eax
 8333ec7:	0f 94 c0             	sete   %al
 8333eca:	c9                   	leave
 8333ecb:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::LoadScript @ 0x8333ea6

/* WongWork::CCompoundAvatar::LoadScript(char const*, char const*) */

bool __thiscall
WongWork::CCompoundAvatar::LoadScript(CCompoundAvatar *this,char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = importCompoundAvatarTable(param_1,param_2,(tagCompoundAvatarTable *)this);
  return iVar1 == 0;
}

```

---

## ProcCompound

```asm
// === 083338c2 WongWork::CCompoundAvatar::ProcCompound  [0x083338c2-0x8333a75] ===
 83338c2:	55                   	push   %ebp
 83338c3:	89 e5                	mov    %esp,%ebp
 83338c5:	56                   	push   %esi
 83338c6:	53                   	push   %ebx
 83338c7:	81 ec 10 01 00 00    	sub    $0x110,%esp
 83338cd:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 83338d3:	8b 55 10             	mov    0x10(%ebp),%edx
 83338d6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83338da:	8b 55 0c             	mov    0xc(%ebp),%edx
 83338dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 83338e1:	8b 55 08             	mov    0x8(%ebp),%edx
 83338e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 83338e8:	89 04 24             	mov    %eax,(%esp)
 83338eb:	e8 0e e6 ff ff       	call   8331efe <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR>
 83338f0:	83 ec 04             	sub    $0x4,%esp
 83338f3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83338fa:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8333900:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333904:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333907:	89 44 24 04          	mov    %eax,0x4(%esp)
 833390b:	8b 45 08             	mov    0x8(%ebp),%eax
 833390e:	89 04 24             	mov    %eax,(%esp)
 8333911:	e8 f6 ec ff ff       	call   833260c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE>
 8333916:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8333919:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 833391d:	0f 95 c0             	setne  %al
 8333920:	84 c0                	test   %al,%al
 8333922:	74 2b                	je     833394f <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x8d>
 8333924:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 833392b:	e8 d0 1e 3f 00       	call   8725800 <__cxa_allocate_exception>
 8333930:	89 c2                	mov    %eax,%edx
 8333932:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8333935:	89 0a                	mov    %ecx,(%edx)
 8333937:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833393e:	00 
 833393f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8333946:	08 
 8333947:	89 04 24             	mov    %eax,(%esp)
 833394a:	e8 01 13 3f 00       	call   8724c50 <__cxa_throw>
 833394f:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 8333955:	89 c2                	mov    %eax,%edx
 8333957:	89 d0                	mov    %edx,%eax
 8333959:	01 c0                	add    %eax,%eax
 833395b:	01 d0                	add    %edx,%eax
 833395d:	c1 e0 02             	shl    $0x2,%eax
 8333960:	03 45 08             	add    0x8(%ebp),%eax
 8333963:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8333966:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8333969:	89 44 24 0c          	mov    %eax,0xc(%esp)
 833396d:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8333973:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333977:	8b 45 0c             	mov    0xc(%ebp),%eax
 833397a:	89 44 24 04          	mov    %eax,0x4(%esp)
 833397e:	8b 45 08             	mov    0x8(%ebp),%eax
 8333981:	89 04 24             	mov    %eax,(%esp)
 8333984:	e8 5f f5 ff ff       	call   8332ee8 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable>
 8333989:	89 45 ec             	mov    %eax,-0x14(%ebp)
 833398c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8333990:	0f 95 c0             	setne  %al
 8333993:	84 c0                	test   %al,%al
 8333995:	74 2b                	je     83339c2 <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x100>
 8333997:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 833399e:	e8 5d 1e 3f 00       	call   8725800 <__cxa_allocate_exception>
 83339a3:	89 c2                	mov    %eax,%edx
 83339a5:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 83339a8:	89 0a                	mov    %ecx,(%edx)
 83339aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83339b1:	00 
 83339b2:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 83339b9:	08 
 83339ba:	89 04 24             	mov    %eax,(%esp)
 83339bd:	e8 8e 12 3f 00       	call   8724c50 <__cxa_throw>
 83339c2:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 83339c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83339cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 83339cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 83339d3:	8b 45 08             	mov    0x8(%ebp),%eax
 83339d6:	89 04 24             	mov    %eax,(%esp)
 83339d9:	e8 be 00 00 00       	call   8333a9c <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE>
 83339de:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 83339e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83339e8:	8b 45 08             	mov    0x8(%ebp),%eax
 83339eb:	89 04 24             	mov    %eax,(%esp)
 83339ee:	e8 d9 04 00 00       	call   8333ecc <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE>
 83339f3:	eb 18                	jmp    8333a0d <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x14b>
 83339f5:	89 d3                	mov    %edx,%ebx
 83339f7:	89 c6                	mov    %eax,%esi
 83339f9:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 83339ff:	89 04 24             	mov    %eax,(%esp)
 8333a02:	e8 81 09 00 00       	call   8334388 <_ZN8WongWork15CCompoundAvatar15tagCompoundInfoD1Ev>
 8333a07:	89 f0                	mov    %esi,%eax
 8333a09:	89 da                	mov    %ebx,%edx
 8333a0b:	eb 10                	jmp    8333a1d <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x15b>
 8333a0d:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8333a13:	89 04 24             	mov    %eax,(%esp)
 8333a16:	e8 6d 09 00 00       	call   8334388 <_ZN8WongWork15CCompoundAvatar15tagCompoundInfoD1Ev>
 8333a1b:	eb 4f                	jmp    8333a6c <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x1aa>
 8333a1d:	83 fa 01             	cmp    $0x1,%edx
 8333a20:	74 08                	je     8333a2a <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x168>
 8333a22:	89 04 24             	mov    %eax,(%esp)
 8333a25:	e8 26 fd 7a 00       	call   8ae3750 <_Unwind_Resume>
 8333a2a:	89 04 24             	mov    %eax,(%esp)
 8333a2d:	e8 ae 22 3f 00       	call   8725ce0 <__cxa_begin_catch>
 8333a32:	8b 00                	mov    (%eax),%eax
 8333a34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8333a37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8333a3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333a3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333a41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8333a48:	89 04 24             	mov    %eax,(%esp)
 8333a4b:	e8 26 00 00 00       	call   8333a76 <_ZN8WongWork15CCompoundAvatar10_SendErrorEP5CUser10ENUM_ERROR>
 8333a50:	eb 15                	jmp    8333a67 <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR+0x1a5>
 8333a52:	89 d3                	mov    %edx,%ebx
 8333a54:	89 c6                	mov    %eax,%esi
 8333a56:	e8 d5 21 3f 00       	call   8725c30 <__cxa_end_catch>
 8333a5b:	89 f0                	mov    %esi,%eax
 8333a5d:	89 da                	mov    %ebx,%edx
 8333a5f:	89 04 24             	mov    %eax,(%esp)
 8333a62:	e8 e9 fc 7a 00       	call   8ae3750 <_Unwind_Resume>
 8333a67:	e8 c4 21 3f 00       	call   8725c30 <__cxa_end_catch>
 8333a6c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8333a6f:	83 c4 00             	add    $0x0,%esp
 8333a72:	5b                   	pop    %ebx
 8333a73:	5e                   	pop    %esi
 8333a74:	5d                   	pop    %ebp
 8333a75:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::ProcCompound @ 0x83338c2

/* WongWork::CCompoundAvatar::ProcCompound(CUser*, MSG_COMPOUND_AVATAR const*) */

void __thiscall
WongWork::CCompoundAvatar::ProcCompound
          (CCompoundAvatar *this,CUser *param_1,MSG_COMPOUND_AVATAR *param_2)

{
  int *piVar1;
  CUser *pCVar2;
  tagCompoundInfo *ptVar3;
  int local_104 [59];
  int local_18;
  tagCompoundAvatarTable *local_14;
  
                    /* try { // try from 083338eb to 083338ef has its CatchHandler @ 08333a1d */
  _MakeCompoundInfo((CUser *)local_104,(MSG_COMPOUND_AVATAR *)this);
  local_18 = 0;
  ptVar3 = (tagCompoundInfo *)local_104;
  pCVar2 = param_1;
                    /* try { // try from 08333911 to 083339f2 has its CatchHandler @ 083339f5 */
  local_18 = _CheckCondition(this,param_1,ptVar3);
  if (local_18 != 0) {
    piVar1 = (int *)__cxa_allocate_exception(4,pCVar2,ptVar3,param_2);
    *piVar1 = local_18;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar1,&ENUM_ERROR::typeinfo,0);
  }
  local_14 = (tagCompoundAvatarTable *)(this + local_104[0] * 0xc);
  local_18 = _ProcCompoundCore(this,param_1,(tagCompoundInfo *)local_104,local_14);
  if (local_18 != 0) {
    piVar1 = (int *)__cxa_allocate_exception(4);
    *piVar1 = local_18;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar1,&ENUM_ERROR::typeinfo,0);
  }
  _SendResult(this,param_1,(tagCompoundInfo *)local_104);
  _SendDisjointAvatarStatistic(this,(tagCompoundInfo *)local_104);
                    /* try { // try from 08333a16 to 08333a1a has its CatchHandler @ 08333a1d */
  tagCompoundInfo::~tagCompoundInfo((tagCompoundInfo *)local_104);
  return;
}

```

---

## ProcTest

```asm
// === 08333fda WongWork::CCompoundAvatar::ProcTest  [0x08333fda-0x83341c1] ===
 8333fda:	55                   	push   %ebp
 8333fdb:	89 e5                	mov    %esp,%ebp
 8333fdd:	83 ec 58             	sub    $0x58,%esp
 8333fe0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8333fe3:	89 d0                	mov    %edx,%eax
 8333fe5:	01 c0                	add    %eax,%eax
 8333fe7:	01 d0                	add    %edx,%eax
 8333fe9:	c1 e0 02             	shl    $0x2,%eax
 8333fec:	03 45 08             	add    0x8(%ebp),%eax
 8333fef:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8333ff2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8333ff9:	00 
 8333ffa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8333ffd:	89 04 24             	mov    %eax,(%esp)
 8334000:	e8 c7 ff 5c 00       	call   8903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>
 8334005:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8334008:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833400f:	e9 9a 01 00 00       	jmp    83341ae <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1d4>
 8334014:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 833401b:	8b 55 10             	mov    0x10(%ebp),%edx
 833401e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8334021:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
 8334025:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8334028:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833402b:	81 c1 b8 00 00 00    	add    $0xb8,%ecx
 8334031:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 8334034:	8b 45 14             	mov    0x14(%ebp),%eax
 8334037:	0f af c1             	imul   %ecx,%eax
 833403a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 833403d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8334040:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8334044:	75 0e                	jne    8334054 <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x7a>
 8334046:	e8 50 81 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833404b:	8b 80 54 4a 00 00    	mov    0x4a54(%eax),%eax
 8334051:	01 45 f4             	add    %eax,-0xc(%ebp)
 8334054:	c7 45 c4 10 27 00 00 	movl   $0x2710,-0x3c(%ebp)
 833405b:	8b 45 08             	mov    0x8(%ebp),%eax
 833405e:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8334064:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8334067:	89 54 24 04          	mov    %edx,0x4(%esp)
 833406b:	89 04 24             	mov    %eax,(%esp)
 833406e:	e8 4b 7a d9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8334073:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8334076:	0f 92 c0             	setb   %al
 8334079:	84 c0                	test   %al,%al
 833407b:	74 3b                	je     83340b8 <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xde>
 833407d:	8b 55 10             	mov    0x10(%ebp),%edx
 8334080:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8334083:	83 c2 08             	add    $0x8,%edx
 8334086:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 833408a:	89 04 24             	mov    %eax,(%esp)
 833408d:	e8 f5 da 37 00       	call   86b1b87 <_Z12get_rand_inti>
 8334092:	89 c1                	mov    %eax,%ecx
 8334094:	8b 55 10             	mov    0x10(%ebp),%edx
 8334097:	89 d0                	mov    %edx,%eax
 8334099:	01 c0                	add    %eax,%eax
 833409b:	01 d0                	add    %edx,%eax
 833409d:	c1 e0 02             	shl    $0x2,%eax
 83340a0:	83 c0 70             	add    $0x70,%eax
 83340a3:	03 45 ec             	add    -0x14(%ebp),%eax
 83340a6:	83 c0 0c             	add    $0xc,%eax
 83340a9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83340ad:	89 04 24             	mov    %eax,(%esp)
 83340b0:	e8 99 ed ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 83340b5:	89 45 c0             	mov    %eax,-0x40(%ebp)
 83340b8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83340bb:	85 c0                	test   %eax,%eax
 83340bd:	75 3d                	jne    83340fc <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x122>
 83340bf:	8b 55 10             	mov    0x10(%ebp),%edx
 83340c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83340c5:	83 c2 14             	add    $0x14,%edx
 83340c8:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83340cc:	89 04 24             	mov    %eax,(%esp)
 83340cf:	e8 b3 da 37 00       	call   86b1b87 <_Z12get_rand_inti>
 83340d4:	89 c1                	mov    %eax,%ecx
 83340d6:	8b 55 10             	mov    0x10(%ebp),%edx
 83340d9:	89 d0                	mov    %edx,%eax
 83340db:	01 c0                	add    %eax,%eax
 83340dd:	01 d0                	add    %edx,%eax
 83340df:	c1 e0 02             	shl    $0x2,%eax
 83340e2:	05 f0 00 00 00       	add    $0xf0,%eax
 83340e7:	03 45 ec             	add    -0x14(%ebp),%eax
 83340ea:	83 c0 04             	add    $0x4,%eax
 83340ed:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83340f1:	89 04 24             	mov    %eax,(%esp)
 83340f4:	e8 55 ed ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 83340f9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 83340fc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83340ff:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8334102:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334106:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8334109:	89 54 24 04          	mov    %edx,0x4(%esp)
 833410d:	89 04 24             	mov    %eax,(%esp)
 8334110:	e8 d9 91 d9 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8334115:	83 ec 04             	sub    $0x4,%esp
 8334118:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833411b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 833411e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334122:	89 04 24             	mov    %eax,(%esp)
 8334125:	e8 f0 91 d9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833412a:	83 ec 04             	sub    $0x4,%esp
 833412d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8334130:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334134:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8334137:	89 04 24             	mov    %eax,(%esp)
 833413a:	e8 89 62 da ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 833413f:	84 c0                	test   %al,%al
 8334141:	74 16                	je     8334159 <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x17f>
 8334143:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8334146:	89 04 24             	mov    %eax,(%esp)
 8334149:	e8 f2 91 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 833414e:	8b 50 04             	mov    0x4(%eax),%edx
 8334151:	83 c2 01             	add    $0x1,%edx
 8334154:	89 50 04             	mov    %edx,0x4(%eax)
 8334157:	eb 51                	jmp    83341aa <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1d0>
 8334159:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8334160:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8334163:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8334166:	89 54 24 08          	mov    %edx,0x8(%esp)
 833416a:	8d 55 c0             	lea    -0x40(%ebp),%edx
 833416d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334171:	89 04 24             	mov    %eax,(%esp)
 8334174:	e8 c8 4b e8 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8334179:	83 ec 04             	sub    $0x4,%esp
 833417c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833417f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334183:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8334186:	89 04 24             	mov    %eax,(%esp)
 8334189:	e8 92 2b d9 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 833418e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8334191:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8334194:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334198:	8b 55 1c             	mov    0x1c(%ebp),%edx
 833419b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833419f:	89 04 24             	mov    %eax,(%esp)
 83341a2:	e8 a9 2b d9 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 83341a7:	83 ec 04             	sub    $0x4,%esp
 83341aa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83341ae:	81 7d f0 0f 27 00 00 	cmpl   $0x270f,-0x10(%ebp)
 83341b5:	0f 9e c0             	setle  %al
 83341b8:	84 c0                	test   %al,%al
 83341ba:	0f 85 54 fe ff ff    	jne    8334014 <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x3a>
 83341c0:	c9                   	leave
 83341c1:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::ProcTest @ 0x8333fda

/* WongWork::CCompoundAvatar::ProcTest(ENUM_CHARACTERJOB, ENUM_EQUIPMENTTYPE, int, int,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void WongWork::CCompoundAvatar::ProcTest
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  int local_44 [2];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  pair local_38 [8];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  undefined4 local_20;
  tagCompoundAvatarTable *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_1c = (tagCompoundAvatarTable *)(param_2 * 0xc + param_1);
  local_18 = tagCompoundAvatarTable::getCompoundAvatarInfo(local_1c,1);
  for (local_14 = 0; local_14 < 10000; local_14 = local_14 + 1) {
    local_44[0] = 0;
    local_10 = *(int *)(local_18 + 4 + param_3 * 4) +
               param_4 * *(int *)(local_18 + (param_3 + 0xb8) * 4);
    if (param_5 == 1) {
      iVar2 = G_CDataManager();
      local_10 = local_10 + *(int *)(iVar2 + 0x4a54);
    }
    local_44[1] = 10000;
    uVar3 = CMTRand::randInt(*(CMTRand **)(param_1 + 0x84),(ulong *)(local_44 + 1));
    if (uVar3 < local_10) {
      iVar2 = get_rand_int(*(int *)(local_18 + 0xc + (param_3 + 8) * 4));
      local_44[0] = getItemIndex((vector *)(param_3 * 0xc + local_18 + 0x7c),iVar2);
    }
    if (local_44[0] == 0) {
      iVar2 = get_rand_int(*(int *)(local_18 + 4 + (param_3 + 0x14) * 4));
      local_44[0] = getItemIndex((vector *)(param_3 * 0xc + local_18 + 0xf4),iVar2);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_48)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_48,(_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') {
      local_20 = 1;
      std::make_pair<int,int>(local_28,local_44);
      std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_38);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_48);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}

```

---

## _CheckCondition

```asm
// === 0833260c WongWork::CCompoundAvatar::_CheckCondition  [0x0833260c-0x8332e4d] ===
 833260c:	55                   	push   %ebp
 833260d:	89 e5                	mov    %esp,%ebp
 833260f:	53                   	push   %ebx
 8332610:	83 ec 44             	sub    $0x44,%esp
 8332613:	8b 45 10             	mov    0x10(%ebp),%eax
 8332616:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 833261d:	3c 04                	cmp    $0x4,%al
 833261f:	75 1a                	jne    833263b <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x2f>
 8332621:	8b 45 10             	mov    0x10(%ebp),%eax
 8332624:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 833262a:	3d c4 98 28 00       	cmp    $0x2898c4,%eax
 833262f:	74 0a                	je     833263b <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x2f>
 8332631:	b8 11 00 00 00       	mov    $0x11,%eax
 8332636:	e9 0e 08 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 833263b:	8b 45 10             	mov    0x10(%ebp),%eax
 833263e:	0f b7 80 d4 00 00 00 	movzwl 0xd4(%eax),%eax
 8332645:	66 83 f8 63          	cmp    $0x63,%ax
 8332649:	76 0a                	jbe    8332655 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x49>
 833264b:	b8 11 00 00 00       	mov    $0x11,%eax
 8332650:	e9 f4 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332655:	8b 45 10             	mov    0x10(%ebp),%eax
 8332658:	0f b6 80 d7 00 00 00 	movzbl 0xd7(%eax),%eax
 833265f:	84 c0                	test   %al,%al
 8332661:	74 0a                	je     833266d <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x61>
 8332663:	b8 11 00 00 00       	mov    $0x11,%eax
 8332668:	e9 dc 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 833266d:	8b 45 10             	mov    0x10(%ebp),%eax
 8332670:	8b 00                	mov    (%eax),%eax
 8332672:	83 f8 0b             	cmp    $0xb,%eax
 8332675:	75 0a                	jne    8332681 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x75>
 8332677:	b8 17 00 00 00       	mov    $0x17,%eax
 833267c:	e9 c8 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332681:	8b 45 10             	mov    0x10(%ebp),%eax
 8332684:	8b 40 0c             	mov    0xc(%eax),%eax
 8332687:	85 c0                	test   %eax,%eax
 8332689:	74 0a                	je     8332695 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x89>
 833268b:	8b 45 10             	mov    0x10(%ebp),%eax
 833268e:	8b 40 4c             	mov    0x4c(%eax),%eax
 8332691:	85 c0                	test   %eax,%eax
 8332693:	75 0a                	jne    833269f <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x93>
 8332695:	b8 11 00 00 00       	mov    $0x11,%eax
 833269a:	e9 aa 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 833269f:	8b 45 10             	mov    0x10(%ebp),%eax
 83326a2:	8b 40 11             	mov    0x11(%eax),%eax
 83326a5:	89 04 24             	mov    %eax,(%esp)
 83326a8:	e8 60 ab ef ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 83326ad:	84 c0                	test   %al,%al
 83326af:	75 12                	jne    83326c3 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0xb7>
 83326b1:	8b 45 10             	mov    0x10(%ebp),%eax
 83326b4:	8b 40 51             	mov    0x51(%eax),%eax
 83326b7:	89 04 24             	mov    %eax,(%esp)
 83326ba:	e8 4e ab ef ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 83326bf:	84 c0                	test   %al,%al
 83326c1:	74 07                	je     83326ca <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0xbe>
 83326c3:	b8 01 00 00 00       	mov    $0x1,%eax
 83326c8:	eb 05                	jmp    83326cf <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0xc3>
 83326ca:	b8 00 00 00 00       	mov    $0x0,%eax
 83326cf:	84 c0                	test   %al,%al
 83326d1:	74 0a                	je     83326dd <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0xd1>
 83326d3:	b8 01 00 00 00       	mov    $0x1,%eax
 83326d8:	e9 6c 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 83326dd:	8b 45 10             	mov    0x10(%ebp),%eax
 83326e0:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83326e6:	8b 00                	mov    (%eax),%eax
 83326e8:	83 c0 10             	add    $0x10,%eax
 83326eb:	8b 10                	mov    (%eax),%edx
 83326ed:	8b 45 10             	mov    0x10(%ebp),%eax
 83326f0:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83326f6:	89 04 24             	mov    %eax,(%esp)
 83326f9:	ff d2                	call   *%edx
 83326fb:	83 f0 01             	xor    $0x1,%eax
 83326fe:	84 c0                	test   %al,%al
 8332700:	75 25                	jne    8332727 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x11b>
 8332702:	8b 45 10             	mov    0x10(%ebp),%eax
 8332705:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833270b:	8b 00                	mov    (%eax),%eax
 833270d:	83 c0 10             	add    $0x10,%eax
 8332710:	8b 10                	mov    (%eax),%edx
 8332712:	8b 45 10             	mov    0x10(%ebp),%eax
 8332715:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833271b:	89 04 24             	mov    %eax,(%esp)
 833271e:	ff d2                	call   *%edx
 8332720:	83 f0 01             	xor    $0x1,%eax
 8332723:	84 c0                	test   %al,%al
 8332725:	74 07                	je     833272e <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x122>
 8332727:	b8 01 00 00 00       	mov    $0x1,%eax
 833272c:	eb 05                	jmp    8332733 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x127>
 833272e:	b8 00 00 00 00       	mov    $0x0,%eax
 8332733:	84 c0                	test   %al,%al
 8332735:	74 0a                	je     8332741 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x135>
 8332737:	b8 11 00 00 00       	mov    $0x11,%eax
 833273c:	e9 08 07 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332741:	8b 45 10             	mov    0x10(%ebp),%eax
 8332744:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 833274a:	8b 00                	mov    (%eax),%eax
 833274c:	83 c0 0c             	add    $0xc,%eax
 833274f:	8b 10                	mov    (%eax),%edx
 8332751:	8b 45 10             	mov    0x10(%ebp),%eax
 8332754:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 833275a:	89 04 24             	mov    %eax,(%esp)
 833275d:	ff d2                	call   *%edx
 833275f:	89 c3                	mov    %eax,%ebx
 8332761:	8b 45 10             	mov    0x10(%ebp),%eax
 8332764:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833276a:	8b 00                	mov    (%eax),%eax
 833276c:	83 c0 0c             	add    $0xc,%eax
 833276f:	8b 10                	mov    (%eax),%edx
 8332771:	8b 45 10             	mov    0x10(%ebp),%eax
 8332774:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833277a:	89 04 24             	mov    %eax,(%esp)
 833277d:	ff d2                	call   *%edx
 833277f:	39 c3                	cmp    %eax,%ebx
 8332781:	0f 95 c0             	setne  %al
 8332784:	84 c0                	test   %al,%al
 8332786:	74 0a                	je     8332792 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x186>
 8332788:	b8 17 00 00 00       	mov    $0x17,%eax
 833278d:	e9 b7 06 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332792:	8b 45 10             	mov    0x10(%ebp),%eax
 8332795:	8b 40 04             	mov    0x4(%eax),%eax
 8332798:	85 c0                	test   %eax,%eax
 833279a:	75 0a                	jne    83327a6 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x19a>
 833279c:	b8 17 00 00 00       	mov    $0x17,%eax
 83327a1:	e9 a3 06 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 83327a6:	8b 45 10             	mov    0x10(%ebp),%eax
 83327a9:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83327af:	8b 00                	mov    (%eax),%eax
 83327b1:	83 c0 24             	add    $0x24,%eax
 83327b4:	8b 10                	mov    (%eax),%edx
 83327b6:	8b 45 10             	mov    0x10(%ebp),%eax
 83327b9:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83327bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83327c6:	00 
 83327c7:	89 04 24             	mov    %eax,(%esp)
 83327ca:	ff d2                	call   *%edx
 83327cc:	83 f0 01             	xor    $0x1,%eax
 83327cf:	84 c0                	test   %al,%al
 83327d1:	75 2d                	jne    8332800 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x1f4>
 83327d3:	8b 45 10             	mov    0x10(%ebp),%eax
 83327d6:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 83327dc:	8b 00                	mov    (%eax),%eax
 83327de:	83 c0 24             	add    $0x24,%eax
 83327e1:	8b 10                	mov    (%eax),%edx
 83327e3:	8b 45 10             	mov    0x10(%ebp),%eax
 83327e6:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 83327ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83327f3:	00 
 83327f4:	89 04 24             	mov    %eax,(%esp)
 83327f7:	ff d2                	call   *%edx
 83327f9:	83 f0 01             	xor    $0x1,%eax
 83327fc:	84 c0                	test   %al,%al
 83327fe:	74 07                	je     8332807 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x1fb>
 8332800:	b8 01 00 00 00       	mov    $0x1,%eax
 8332805:	eb 05                	jmp    833280c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x200>
 8332807:	b8 00 00 00 00       	mov    $0x0,%eax
 833280c:	84 c0                	test   %al,%al
 833280e:	74 2c                	je     833283c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x230>
 8332810:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8332817:	e8 e4 2f 3f 00       	call   8725800 <__cxa_allocate_exception>
 833281c:	89 c2                	mov    %eax,%edx
 833281e:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8332824:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833282b:	00 
 833282c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8332833:	08 
 8332834:	89 04 24             	mov    %eax,(%esp)
 8332837:	e8 14 24 3f 00       	call   8724c50 <__cxa_throw>
 833283c:	8b 45 10             	mov    0x10(%ebp),%eax
 833283f:	8b 48 04             	mov    0x4(%eax),%ecx
 8332842:	8b 45 10             	mov    0x10(%ebp),%eax
 8332845:	8b 00                	mov    (%eax),%eax
 8332847:	89 c2                	mov    %eax,%edx
 8332849:	89 d0                	mov    %edx,%eax
 833284b:	01 c0                	add    %eax,%eax
 833284d:	01 d0                	add    %edx,%eax
 833284f:	c1 e0 02             	shl    $0x2,%eax
 8332852:	03 45 08             	add    0x8(%ebp),%eax
 8332855:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8332859:	89 04 24             	mov    %eax,(%esp)
 833285c:	e8 6b 17 5d 00       	call   8903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>
 8332861:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8332864:	8b 45 10             	mov    0x10(%ebp),%eax
 8332867:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 833286d:	89 04 24             	mov    %eax,(%esp)
 8332870:	e8 61 ea db ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8332875:	83 f8 01             	cmp    $0x1,%eax
 8332878:	7f 16                	jg     8332890 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x284>
 833287a:	8b 45 10             	mov    0x10(%ebp),%eax
 833287d:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8332883:	89 04 24             	mov    %eax,(%esp)
 8332886:	e8 4b ea db ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 833288b:	83 f8 01             	cmp    $0x1,%eax
 833288e:	7e 07                	jle    8332897 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x28b>
 8332890:	b8 01 00 00 00       	mov    $0x1,%eax
 8332895:	eb 05                	jmp    833289c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x290>
 8332897:	b8 00 00 00 00       	mov    $0x0,%eax
 833289c:	84 c0                	test   %al,%al
 833289e:	74 0a                	je     83328aa <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x29e>
 83328a0:	b8 17 00 00 00       	mov    $0x17,%eax
 83328a5:	e9 9f 05 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 83328aa:	8b 45 10             	mov    0x10(%ebp),%eax
 83328ad:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83328b3:	89 04 24             	mov    %eax,(%esp)
 83328b6:	e8 99 e3 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 83328bb:	89 c3                	mov    %eax,%ebx
 83328bd:	8b 45 10             	mov    0x10(%ebp),%eax
 83328c0:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 83328c6:	89 04 24             	mov    %eax,(%esp)
 83328c9:	e8 86 e3 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 83328ce:	39 c3                	cmp    %eax,%ebx
 83328d0:	0f 95 c0             	setne  %al
 83328d3:	84 c0                	test   %al,%al
 83328d5:	74 0a                	je     83328e1 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x2d5>
 83328d7:	b8 17 00 00 00       	mov    $0x17,%eax
 83328dc:	e9 68 05 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 83328e1:	8b 45 10             	mov    0x10(%ebp),%eax
 83328e4:	0f b6 80 d6 00 00 00 	movzbl 0xd6(%eax),%eax
 83328eb:	83 f0 01             	xor    $0x1,%eax
 83328ee:	84 c0                	test   %al,%al
 83328f0:	0f 84 06 02 00 00    	je     8332afc <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4f0>
 83328f6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83328f9:	89 04 24             	mov    %eax,(%esp)
 83328fc:	e8 33 1b 00 00       	call   8334434 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1Ev>
 8332901:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8332904:	89 04 24             	mov    %eax,(%esp)
 8332907:	e8 28 1b 00 00       	call   8334434 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1Ev>
 833290c:	8b 45 10             	mov    0x10(%ebp),%eax
 833290f:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332915:	89 04 24             	mov    %eax,(%esp)
 8332918:	e8 37 e3 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 833291d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8332920:	8b 12                	mov    (%edx),%edx
 8332922:	39 d0                	cmp    %edx,%eax
 8332924:	0f 94 c0             	sete   %al
 8332927:	84 c0                	test   %al,%al
 8332929:	0f 84 9d 00 00 00    	je     83329cc <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x3c0>
 833292f:	8b 45 10             	mov    0x10(%ebp),%eax
 8332932:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332938:	8b 00                	mov    (%eax),%eax
 833293a:	83 c0 0c             	add    $0xc,%eax
 833293d:	8b 10                	mov    (%eax),%edx
 833293f:	8b 45 10             	mov    0x10(%ebp),%eax
 8332942:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332948:	89 04 24             	mov    %eax,(%esp)
 833294b:	ff d2                	call   *%edx
 833294d:	89 c2                	mov    %eax,%edx
 833294f:	89 d0                	mov    %edx,%eax
 8332951:	01 c0                	add    %eax,%eax
 8332953:	01 d0                	add    %edx,%eax
 8332955:	c1 e0 02             	shl    $0x2,%eax
 8332958:	05 90 01 00 00       	add    $0x190,%eax
 833295d:	03 45 e4             	add    -0x1c(%ebp),%eax
 8332960:	8d 50 04             	lea    0x4(%eax),%edx
 8332963:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8332966:	89 54 24 04          	mov    %edx,0x4(%esp)
 833296a:	89 04 24             	mov    %eax,(%esp)
 833296d:	e8 ae e8 dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8332972:	83 ec 04             	sub    $0x4,%esp
 8332975:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8332978:	89 45 e0             	mov    %eax,-0x20(%ebp)
 833297b:	8b 45 10             	mov    0x10(%ebp),%eax
 833297e:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332984:	8b 00                	mov    (%eax),%eax
 8332986:	83 c0 0c             	add    $0xc,%eax
 8332989:	8b 10                	mov    (%eax),%edx
 833298b:	8b 45 10             	mov    0x10(%ebp),%eax
 833298e:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332994:	89 04 24             	mov    %eax,(%esp)
 8332997:	ff d2                	call   *%edx
 8332999:	89 c2                	mov    %eax,%edx
 833299b:	89 d0                	mov    %edx,%eax
 833299d:	01 c0                	add    %eax,%eax
 833299f:	01 d0                	add    %edx,%eax
 83329a1:	c1 e0 02             	shl    $0x2,%eax
 83329a4:	05 90 01 00 00       	add    $0x190,%eax
 83329a9:	03 45 e4             	add    -0x1c(%ebp),%eax
 83329ac:	8d 50 04             	lea    0x4(%eax),%edx
 83329af:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83329b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 83329b6:	89 04 24             	mov    %eax,(%esp)
 83329b9:	e8 8e e8 dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 83329be:	83 ec 04             	sub    $0x4,%esp
 83329c1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 83329c4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83329c7:	e9 f7 00 00 00       	jmp    8332ac3 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4b7>
 83329cc:	8b 45 10             	mov    0x10(%ebp),%eax
 83329cf:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83329d5:	89 04 24             	mov    %eax,(%esp)
 83329d8:	e8 77 e2 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 83329dd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 83329e0:	8b 92 dc 02 00 00    	mov    0x2dc(%edx),%edx
 83329e6:	39 d0                	cmp    %edx,%eax
 83329e8:	0f 94 c0             	sete   %al
 83329eb:	84 c0                	test   %al,%al
 83329ed:	0f 84 9a 00 00 00    	je     8332a8d <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x481>
 83329f3:	8b 45 10             	mov    0x10(%ebp),%eax
 83329f6:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83329fc:	8b 00                	mov    (%eax),%eax
 83329fe:	83 c0 0c             	add    $0xc,%eax
 8332a01:	8b 10                	mov    (%eax),%edx
 8332a03:	8b 45 10             	mov    0x10(%ebp),%eax
 8332a06:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332a0c:	89 04 24             	mov    %eax,(%esp)
 8332a0f:	ff d2                	call   *%edx
 8332a11:	89 c2                	mov    %eax,%edx
 8332a13:	89 d0                	mov    %edx,%eax
 8332a15:	01 c0                	add    %eax,%eax
 8332a17:	01 d0                	add    %edx,%eax
 8332a19:	c1 e0 02             	shl    $0x2,%eax
 8332a1c:	05 f0 00 00 00       	add    $0xf0,%eax
 8332a21:	03 45 e4             	add    -0x1c(%ebp),%eax
 8332a24:	8d 50 04             	lea    0x4(%eax),%edx
 8332a27:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8332a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332a2e:	89 04 24             	mov    %eax,(%esp)
 8332a31:	e8 ea e7 dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8332a36:	83 ec 04             	sub    $0x4,%esp
 8332a39:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8332a3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8332a3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8332a42:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332a48:	8b 00                	mov    (%eax),%eax
 8332a4a:	83 c0 0c             	add    $0xc,%eax
 8332a4d:	8b 10                	mov    (%eax),%edx
 8332a4f:	8b 45 10             	mov    0x10(%ebp),%eax
 8332a52:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332a58:	89 04 24             	mov    %eax,(%esp)
 8332a5b:	ff d2                	call   *%edx
 8332a5d:	89 c2                	mov    %eax,%edx
 8332a5f:	89 d0                	mov    %edx,%eax
 8332a61:	01 c0                	add    %eax,%eax
 8332a63:	01 d0                	add    %edx,%eax
 8332a65:	c1 e0 02             	shl    $0x2,%eax
 8332a68:	05 f0 00 00 00       	add    $0xf0,%eax
 8332a6d:	03 45 e4             	add    -0x1c(%ebp),%eax
 8332a70:	8d 50 04             	lea    0x4(%eax),%edx
 8332a73:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8332a76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332a7a:	89 04 24             	mov    %eax,(%esp)
 8332a7d:	e8 ca e7 dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8332a82:	83 ec 04             	sub    $0x4,%esp
 8332a85:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8332a88:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8332a8b:	eb 36                	jmp    8332ac3 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4b7>
 8332a8d:	b8 01 00 00 00       	mov    $0x1,%eax
 8332a92:	e9 b2 03 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332a97:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8332a9a:	89 04 24             	mov    %eax,(%esp)
 8332a9d:	e8 70 0e e6 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8332aa2:	8b 00                	mov    (%eax),%eax
 8332aa4:	89 c2                	mov    %eax,%edx
 8332aa6:	8b 45 10             	mov    0x10(%ebp),%eax
 8332aa9:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8332aaf:	39 c2                	cmp    %eax,%edx
 8332ab1:	0f 94 c0             	sete   %al
 8332ab4:	84 c0                	test   %al,%al
 8332ab6:	75 23                	jne    8332adb <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4cf>
 8332ab8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8332abb:	89 04 24             	mov    %eax,(%esp)
 8332abe:	e8 0d b2 f0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8332ac3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8332ac6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8332aca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8332acd:	89 04 24             	mov    %eax,(%esp)
 8332ad0:	e8 10 0e e6 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8332ad5:	84 c0                	test   %al,%al
 8332ad7:	75 be                	jne    8332a97 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x48b>
 8332ad9:	eb 01                	jmp    8332adc <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4d0>
 8332adb:	90                   	nop
 8332adc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8332adf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8332ae3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8332ae6:	89 04 24             	mov    %eax,(%esp)
 8332ae9:	e8 e9 f8 dd ff       	call   81123d7 <_ZN9__gnu_cxxeqIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8332aee:	84 c0                	test   %al,%al
 8332af0:	74 0a                	je     8332afc <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x4f0>
 8332af2:	b8 01 00 00 00       	mov    $0x1,%eax
 8332af7:	e9 4d 03 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332afc:	8b 45 10             	mov    0x10(%ebp),%eax
 8332aff:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332b05:	89 04 24             	mov    %eax,(%esp)
 8332b08:	e8 47 e1 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332b0d:	8b 55 10             	mov    0x10(%ebp),%edx
 8332b10:	8b 52 04             	mov    0x4(%edx),%edx
 8332b13:	39 d0                	cmp    %edx,%eax
 8332b15:	7c 1b                	jl     8332b32 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x526>
 8332b17:	8b 45 10             	mov    0x10(%ebp),%eax
 8332b1a:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8332b20:	89 04 24             	mov    %eax,(%esp)
 8332b23:	e8 2c e1 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332b28:	8b 55 10             	mov    0x10(%ebp),%edx
 8332b2b:	8b 52 04             	mov    0x4(%edx),%edx
 8332b2e:	39 d0                	cmp    %edx,%eax
 8332b30:	7d 07                	jge    8332b39 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x52d>
 8332b32:	b8 01 00 00 00       	mov    $0x1,%eax
 8332b37:	eb 05                	jmp    8332b3e <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x532>
 8332b39:	b8 00 00 00 00       	mov    $0x0,%eax
 8332b3e:	84 c0                	test   %al,%al
 8332b40:	74 0a                	je     8332b4c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x540>
 8332b42:	b8 17 00 00 00       	mov    $0x17,%eax
 8332b47:	e9 fd 02 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332b4c:	8b 45 10             	mov    0x10(%ebp),%eax
 8332b4f:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332b55:	89 04 24             	mov    %eax,(%esp)
 8332b58:	e8 f7 e0 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332b5d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8332b60:	8b 92 dc 02 00 00    	mov    0x2dc(%edx),%edx
 8332b66:	39 d0                	cmp    %edx,%eax
 8332b68:	7f 1e                	jg     8332b88 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x57c>
 8332b6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8332b6d:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8332b73:	89 04 24             	mov    %eax,(%esp)
 8332b76:	e8 d9 e0 dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332b7b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8332b7e:	8b 92 dc 02 00 00    	mov    0x2dc(%edx),%edx
 8332b84:	39 d0                	cmp    %edx,%eax
 8332b86:	7e 07                	jle    8332b8f <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x583>
 8332b88:	b8 01 00 00 00       	mov    $0x1,%eax
 8332b8d:	eb 05                	jmp    8332b94 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x588>
 8332b8f:	b8 00 00 00 00       	mov    $0x0,%eax
 8332b94:	84 c0                	test   %al,%al
 8332b96:	74 0a                	je     8332ba2 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x596>
 8332b98:	b8 17 00 00 00       	mov    $0x17,%eax
 8332b9d:	e9 a7 02 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332ba5:	89 04 24             	mov    %eax,(%esp)
 8332ba8:	e8 73 b3 dc ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8332bad:	0f be d0             	movsbl %al,%edx
 8332bb0:	8b 45 10             	mov    0x10(%ebp),%eax
 8332bb3:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332bb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332bbd:	89 04 24             	mov    %eax,(%esp)
 8332bc0:	e8 63 ab 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8332bc5:	83 f0 01             	xor    $0x1,%eax
 8332bc8:	84 c0                	test   %al,%al
 8332bca:	75 2a                	jne    8332bf6 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x5ea>
 8332bcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332bcf:	89 04 24             	mov    %eax,(%esp)
 8332bd2:	e8 49 b3 dc ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8332bd7:	0f be d0             	movsbl %al,%edx
 8332bda:	8b 45 10             	mov    0x10(%ebp),%eax
 8332bdd:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8332be3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332be7:	89 04 24             	mov    %eax,(%esp)
 8332bea:	e8 39 ab 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8332bef:	83 f0 01             	xor    $0x1,%eax
 8332bf2:	84 c0                	test   %al,%al
 8332bf4:	74 07                	je     8332bfd <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x5f1>
 8332bf6:	b8 01 00 00 00       	mov    $0x1,%eax
 8332bfb:	eb 05                	jmp    8332c02 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x5f6>
 8332bfd:	b8 00 00 00 00       	mov    $0x0,%eax
 8332c02:	84 c0                	test   %al,%al
 8332c04:	74 0a                	je     8332c10 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x604>
 8332c06:	b8 17 00 00 00       	mov    $0x17,%eax
 8332c0b:	e9 39 02 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332c10:	8b 45 10             	mov    0x10(%ebp),%eax
 8332c13:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8332c1a:	84 c0                	test   %al,%al
 8332c1c:	75 35                	jne    8332c53 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x647>
 8332c1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332c21:	8d 98 b8 02 00 00    	lea    0x2b8(%eax),%ebx
 8332c27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332c2a:	89 04 24             	mov    %eax,(%esp)
 8332c2d:	e8 4c 76 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332c32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332c36:	89 04 24             	mov    %eax,(%esp)
 8332c39:	e8 8e 4e 1d 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 8332c3e:	83 f0 01             	xor    $0x1,%eax
 8332c41:	84 c0                	test   %al,%al
 8332c43:	0f 84 cb 00 00 00    	je     8332d14 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x708>
 8332c49:	b8 16 00 00 00       	mov    $0x16,%eax
 8332c4e:	e9 f6 01 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332c53:	8b 45 10             	mov    0x10(%ebp),%eax
 8332c56:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8332c5d:	3c 01                	cmp    $0x1,%al
 8332c5f:	75 35                	jne    8332c96 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x68a>
 8332c61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332c64:	8d 98 c4 02 00 00    	lea    0x2c4(%eax),%ebx
 8332c6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332c6d:	89 04 24             	mov    %eax,(%esp)
 8332c70:	e8 09 76 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332c75:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332c79:	89 04 24             	mov    %eax,(%esp)
 8332c7c:	e8 4b 4e 1d 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 8332c81:	83 f0 01             	xor    $0x1,%eax
 8332c84:	84 c0                	test   %al,%al
 8332c86:	0f 84 88 00 00 00    	je     8332d14 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x708>
 8332c8c:	b8 16 00 00 00       	mov    $0x16,%eax
 8332c91:	e9 b3 01 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332c96:	8b 45 10             	mov    0x10(%ebp),%eax
 8332c99:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8332ca0:	3c 03                	cmp    $0x3,%al
 8332ca2:	75 31                	jne    8332cd5 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x6c9>
 8332ca4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332ca7:	8d 98 d0 02 00 00    	lea    0x2d0(%eax),%ebx
 8332cad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332cb0:	89 04 24             	mov    %eax,(%esp)
 8332cb3:	e8 c6 75 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332cb8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332cbc:	89 04 24             	mov    %eax,(%esp)
 8332cbf:	e8 08 4e 1d 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 8332cc4:	83 f0 01             	xor    $0x1,%eax
 8332cc7:	84 c0                	test   %al,%al
 8332cc9:	74 49                	je     8332d14 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x708>
 8332ccb:	b8 16 00 00 00       	mov    $0x16,%eax
 8332cd0:	e9 74 01 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332cd5:	8b 45 10             	mov    0x10(%ebp),%eax
 8332cd8:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8332cdf:	3c 04                	cmp    $0x4,%al
 8332ce1:	75 31                	jne    8332d14 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x708>
 8332ce3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332ce6:	8d 98 0c 02 00 00    	lea    0x20c(%eax),%ebx
 8332cec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332cef:	89 04 24             	mov    %eax,(%esp)
 8332cf2:	e8 87 75 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332cf7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332cfb:	89 04 24             	mov    %eax,(%esp)
 8332cfe:	e8 c9 4d 1d 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 8332d03:	83 f0 01             	xor    $0x1,%eax
 8332d06:	84 c0                	test   %al,%al
 8332d08:	74 0a                	je     8332d14 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x708>
 8332d0a:	b8 16 00 00 00       	mov    $0x16,%eax
 8332d0f:	e9 35 01 00 00       	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332d14:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8332d1b:	e8 7e 8f d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8332d20:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8332d23:	8b 45 10             	mov    0x10(%ebp),%eax
 8332d26:	8b 58 11             	mov    0x11(%eax),%ebx
 8332d29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332d2c:	89 04 24             	mov    %eax,(%esp)
 8332d2f:	e8 4a 75 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332d34:	89 04 24             	mov    %eax,(%esp)
 8332d37:	e8 3a a8 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8332d3c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8332d3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8332d43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332d47:	89 04 24             	mov    %eax,(%esp)
 8332d4a:	e8 01 6b fc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 8332d4f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8332d52:	8b 45 10             	mov    0x10(%ebp),%eax
 8332d55:	8b 58 51             	mov    0x51(%eax),%ebx
 8332d58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332d5b:	89 04 24             	mov    %eax,(%esp)
 8332d5e:	e8 1b 75 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332d63:	89 04 24             	mov    %eax,(%esp)
 8332d66:	e8 0b a8 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8332d6b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8332d6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8332d72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332d76:	89 04 24             	mov    %eax,(%esp)
 8332d79:	e8 d2 6a fc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 8332d7e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8332d81:	8b 45 10             	mov    0x10(%ebp),%eax
 8332d84:	8b 58 11             	mov    0x11(%eax),%ebx
 8332d87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332d8a:	89 04 24             	mov    %eax,(%esp)
 8332d8d:	e8 ec 74 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332d92:	89 04 24             	mov    %eax,(%esp)
 8332d95:	e8 dc a7 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8332d9a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332d9e:	89 04 24             	mov    %eax,(%esp)
 8332da1:	e8 74 6a fc ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 8332da6:	85 c0                	test   %eax,%eax
 8332da8:	0f 94 c0             	sete   %al
 8332dab:	88 45 f6             	mov    %al,-0xa(%ebp)
 8332dae:	8b 45 10             	mov    0x10(%ebp),%eax
 8332db1:	8b 58 51             	mov    0x51(%eax),%ebx
 8332db4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332db7:	89 04 24             	mov    %eax,(%esp)
 8332dba:	e8 bf 74 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332dbf:	89 04 24             	mov    %eax,(%esp)
 8332dc2:	e8 af a7 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8332dc7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8332dcb:	89 04 24             	mov    %eax,(%esp)
 8332dce:	e8 47 6a fc ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 8332dd3:	85 c0                	test   %eax,%eax
 8332dd5:	0f 94 c0             	sete   %al
 8332dd8:	88 45 f7             	mov    %al,-0x9(%ebp)
 8332ddb:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 8332ddf:	3a 45 f7             	cmp    -0x9(%ebp),%al
 8332de2:	74 07                	je     8332deb <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x7df>
 8332de4:	b8 13 00 00 00       	mov    $0x13,%eax
 8332de9:	eb 5e                	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332deb:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 8332def:	83 f0 01             	xor    $0x1,%eax
 8332df2:	84 c0                	test   %al,%al
 8332df4:	74 13                	je     8332e09 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x7fd>
 8332df6:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 8332dfa:	7e 06                	jle    8332e02 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x7f6>
 8332dfc:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8332e00:	7f 07                	jg     8332e09 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x7fd>
 8332e02:	b8 18 00 00 00       	mov    $0x18,%eax
 8332e07:	eb 40                	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332e09:	8b 45 10             	mov    0x10(%ebp),%eax
 8332e0c:	83 c0 3d             	add    $0x3d,%eax
 8332e0f:	89 04 24             	mov    %eax,(%esp)
 8332e12:	e8 f3 dc dd ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8332e17:	84 c0                	test   %al,%al
 8332e19:	75 12                	jne    8332e2d <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x821>
 8332e1b:	8b 45 10             	mov    0x10(%ebp),%eax
 8332e1e:	83 c0 7d             	add    $0x7d,%eax
 8332e21:	89 04 24             	mov    %eax,(%esp)
 8332e24:	e8 e1 dc dd ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8332e29:	84 c0                	test   %al,%al
 8332e2b:	74 07                	je     8332e34 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x828>
 8332e2d:	b8 01 00 00 00       	mov    $0x1,%eax
 8332e32:	eb 05                	jmp    8332e39 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x82d>
 8332e34:	b8 00 00 00 00       	mov    $0x0,%eax
 8332e39:	84 c0                	test   %al,%al
 8332e3b:	74 07                	je     8332e44 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x838>
 8332e3d:	b8 17 00 00 00       	mov    $0x17,%eax
 8332e42:	eb 05                	jmp    8332e49 <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE+0x83d>
 8332e44:	b8 00 00 00 00       	mov    $0x0,%eax
 8332e49:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8332e4c:	c9                   	leave
 8332e4d:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::_CheckCondition @ 0x833260c

/* WongWork::CCompoundAvatar::_CheckCondition(CUser const*,
   WongWork::CCompoundAvatar::tagCompoundInfo const&) const */

undefined4 __thiscall
WongWork::CCompoundAvatar::_CheckCondition
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2)

{
  vector *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_e;
  undefined1 local_d;
  
  if ((param_2[0xe8] == (tagCompoundInfo)0x4) && (*(int *)(param_2 + 0x94) != 0x2898c4)) {
    return 0x11;
  }
  if (99 < *(ushort *)(param_2 + 0xd4)) {
    return 0x11;
  }
  if (param_2[0xd7] != (tagCompoundInfo)0x0) {
    return 0x11;
  }
  if (*(int *)param_2 == 0xb) {
    return 0x17;
  }
  if ((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0x4c) == 0)) {
    return 0x11;
  }
  cVar2 = CAvatarItemMgr::IsTempKey(*(int *)(param_2 + 0x11));
  if ((cVar2 == '\0') &&
     (cVar2 = CAvatarItemMgr::IsTempKey(*(int *)(param_2 + 0x51)), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 1;
  }
  cVar2 = (**(code **)(**(int **)(param_2 + 0x88) + 0x10))(*(undefined4 *)(param_2 + 0x88));
  if ((cVar2 == '\x01') &&
     (cVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x10))(*(undefined4 *)(param_2 + 0x8c)),
     cVar2 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0x11;
  }
  iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
  iVar5 = (**(code **)(**(int **)(param_2 + 0x8c) + 0xc))(*(undefined4 *)(param_2 + 0x8c));
  if (iVar4 != iVar5) {
    return 0x17;
  }
  if (*(int *)(param_2 + 4) == 0) {
    return 0x17;
  }
  cVar2 = (**(code **)(**(int **)(param_2 + 0x88) + 0x24))(*(undefined4 *)(param_2 + 0x88),1);
  if ((cVar2 == '\x01') &&
     (cVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x24))(*(undefined4 *)(param_2 + 0x8c),1),
     cVar2 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  local_20 = (int *)tagCompoundAvatarTable::getCompoundAvatarInfo
                              ((tagCompoundAvatarTable *)(this + *(int *)param_2 * 0xc),
                               *(int *)(param_2 + 4));
  iVar4 = CItem::get_rarity(*(CItem **)(param_2 + 0x88));
  if ((iVar4 < 2) && (iVar4 = CItem::get_rarity(*(CItem **)(param_2 + 0x8c)), iVar4 < 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0x17;
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  iVar5 = CItem::get_grade(*(CItem **)(param_2 + 0x8c));
  if (iVar4 != iVar5) {
    return 0x17;
  }
  if (param_2[0xd6] != (tagCompoundInfo)0x1) {
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_24);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_28);
    iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
    if (iVar4 == *local_20) {
      iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
      piVar7 = local_20 + iVar4 * 3 + 0x65;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88),piVar7);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    }
    else {
      iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
      if (iVar4 != local_20[0xb7]) {
        return 1;
      }
      iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
      piVar7 = local_20 + iVar4 * 3 + 0x3d;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88),piVar7);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    }
    while ((bVar3 = __gnu_cxx::operator!=(local_24,local_28), bVar3 &&
           (piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_24), *piVar7 != *(int *)(param_2 + 0xd0)))) {
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_24);
    }
    bVar3 = __gnu_cxx::operator==(local_24,local_28);
    if (bVar3) {
      return 1;
    }
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  if ((iVar4 < *(int *)(param_2 + 4)) ||
     (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), iVar4 < *(int *)(param_2 + 4))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x17;
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  if ((local_20[0xb7] < iVar4) ||
     (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), local_20[0xb7] < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x17;
  }
  cVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CItem::check_job_type(*(CItem **)(param_2 + 0x88),cVar2);
  if (cVar2 == '\x01') {
    cVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    cVar2 = CItem::check_job_type(*(CItem **)(param_2 + 0x8c),cVar2);
    if (cVar2 == '\x01') {
      bVar3 = false;
      goto LAB_08332c02;
    }
  }
  bVar3 = true;
LAB_08332c02:
  if (bVar3) {
    uVar8 = 0x17;
  }
  else {
    if (param_2[0xe8] == (tagCompoundInfo)0x0) {
      pvVar1 = (vector *)(local_20 + 0xae);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x1) {
      pvVar1 = (vector *)(local_20 + 0xb1);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x3) {
      pvVar1 = (vector *)(local_20 + 0xb4);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x4) {
      pvVar1 = (vector *)(local_20 + 0x83);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar4 = *(int *)(param_2 + 0x11);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    local_18 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_1c);
    iVar4 = *(int *)(param_2 + 0x51);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    local_14 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_1c);
    iVar4 = *(int *)(param_2 + 0x11);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    iVar4 = CAvatarItemMgr::GetExpireDate(pCVar10,iVar4);
    local_e = iVar4 == 0;
    iVar4 = *(int *)(param_2 + 0x51);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    iVar4 = CAvatarItemMgr::GetExpireDate(pCVar10,iVar4);
    local_d = iVar4 == 0;
    if (local_e == local_d) {
      if ((local_e == '\x01') || ((5 < local_18 && (5 < local_14)))) {
        cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_2 + 0x3d));
        if ((cVar2 == '\0') &&
           (cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_2 + 0x7d))
           , cVar2 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar8 = 0x17;
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0x18;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  return uVar8;
}

```

---

## _MakeCompoundInfo

```asm
// === 08331efe WongWork::CCompoundAvatar::_MakeCompoundInfo  [0x08331efe-0x833260b] ===
 8331efe:	55                   	push   %ebp
 8331eff:	89 e5                	mov    %esp,%ebp
 8331f01:	57                   	push   %edi
 8331f02:	56                   	push   %esi
 8331f03:	53                   	push   %ebx
 8331f04:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8331f0a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8331f0d:	89 d8                	mov    %ebx,%eax
 8331f0f:	89 04 24             	mov    %eax,(%esp)
 8331f12:	e8 2d 24 00 00       	call   8334344 <_ZN8WongWork15CCompoundAvatar15tagCompoundInfoC1Ev>
 8331f17:	89 d8                	mov    %ebx,%eax
 8331f19:	89 04 24             	mov    %eax,(%esp)
 8331f1c:	e8 29 23 00 00       	call   833424a <_ZN8WongWork15CCompoundAvatar15tagCompoundInfo5clearEv>
 8331f21:	89 d8                	mov    %ebx,%eax
 8331f23:	8b 55 14             	mov    0x14(%ebp),%edx
 8331f26:	0f b6 52 21          	movzbl 0x21(%edx),%edx
 8331f2a:	80 fa 01             	cmp    $0x1,%dl
 8331f2d:	0f 94 c2             	sete   %dl
 8331f30:	88 90 d6 00 00 00    	mov    %dl,0xd6(%eax)
 8331f36:	89 d8                	mov    %ebx,%eax
 8331f38:	8b 55 14             	mov    0x14(%ebp),%edx
 8331f3b:	8b 52 1b             	mov    0x1b(%edx),%edx
 8331f3e:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 8331f44:	89 d8                	mov    %ebx,%eax
 8331f46:	8b 55 14             	mov    0x14(%ebp),%edx
 8331f49:	0f b7 52 1f          	movzwl 0x1f(%edx),%edx
 8331f4d:	66 89 90 d4 00 00 00 	mov    %dx,0xd4(%eax)
 8331f54:	89 d8                	mov    %ebx,%eax
 8331f56:	8b 55 14             	mov    0x14(%ebp),%edx
 8331f59:	0f b7 52 0d          	movzwl 0xd(%edx),%edx
 8331f5d:	66 89 90 90 00 00 00 	mov    %dx,0x90(%eax)
 8331f64:	89 de                	mov    %ebx,%esi
 8331f66:	8b 45 14             	mov    0x14(%ebp),%eax
 8331f69:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 8331f6d:	0f bf f8             	movswl %ax,%edi
 8331f70:	8b 45 10             	mov    0x10(%ebp),%eax
 8331f73:	89 04 24             	mov    %eax,(%esp)
 8331f76:	e8 03 83 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8331f7b:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8331f81:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8331f85:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8331f8c:	00 
 8331f8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8331f91:	89 14 24             	mov    %edx,(%esp)
 8331f94:	e8 7f 99 1c 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8331f99:	83 ec 04             	sub    $0x4,%esp
 8331f9c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8331fa2:	89 86 92 00 00 00    	mov    %eax,0x92(%esi)
 8331fa8:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8331fae:	89 86 96 00 00 00    	mov    %eax,0x96(%esi)
 8331fb4:	8b 45 80             	mov    -0x80(%ebp),%eax
 8331fb7:	89 86 9a 00 00 00    	mov    %eax,0x9a(%esi)
 8331fbd:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8331fc0:	89 86 9e 00 00 00    	mov    %eax,0x9e(%esi)
 8331fc6:	8b 45 88             	mov    -0x78(%ebp),%eax
 8331fc9:	89 86 a2 00 00 00    	mov    %eax,0xa2(%esi)
 8331fcf:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8331fd2:	89 86 a6 00 00 00    	mov    %eax,0xa6(%esi)
 8331fd8:	8b 45 90             	mov    -0x70(%ebp),%eax
 8331fdb:	89 86 aa 00 00 00    	mov    %eax,0xaa(%esi)
 8331fe1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8331fe4:	89 86 ae 00 00 00    	mov    %eax,0xae(%esi)
 8331fea:	8b 45 98             	mov    -0x68(%ebp),%eax
 8331fed:	89 86 b2 00 00 00    	mov    %eax,0xb2(%esi)
 8331ff3:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8331ff6:	89 86 b6 00 00 00    	mov    %eax,0xb6(%esi)
 8331ffc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8331fff:	89 86 ba 00 00 00    	mov    %eax,0xba(%esi)
 8332005:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8332008:	89 86 be 00 00 00    	mov    %eax,0xbe(%esi)
 833200e:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8332011:	89 86 c2 00 00 00    	mov    %eax,0xc2(%esi)
 8332017:	8b 45 ac             	mov    -0x54(%ebp),%eax
 833201a:	89 86 c6 00 00 00    	mov    %eax,0xc6(%esi)
 8332020:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8332023:	89 86 ca 00 00 00    	mov    %eax,0xca(%esi)
 8332029:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 833202d:	88 86 ce 00 00 00    	mov    %al,0xce(%esi)
 8332033:	89 d8                	mov    %ebx,%eax
 8332035:	8b 55 14             	mov    0x14(%ebp),%edx
 8332038:	0f b7 52 0f          	movzwl 0xf(%edx),%edx
 833203c:	66 89 50 08          	mov    %dx,0x8(%eax)
 8332040:	89 de                	mov    %ebx,%esi
 8332042:	8b 45 14             	mov    0x14(%ebp),%eax
 8332045:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8332049:	0f bf f8             	movswl %ax,%edi
 833204c:	8b 45 10             	mov    0x10(%ebp),%eax
 833204f:	89 04 24             	mov    %eax,(%esp)
 8332052:	e8 27 82 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332057:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 833205d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8332061:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8332068:	00 
 8332069:	89 44 24 04          	mov    %eax,0x4(%esp)
 833206d:	89 14 24             	mov    %edx,(%esp)
 8332070:	e8 a3 98 1c 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8332075:	83 ec 04             	sub    $0x4,%esp
 8332078:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 833207e:	89 46 0a             	mov    %eax,0xa(%esi)
 8332081:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8332087:	89 46 0e             	mov    %eax,0xe(%esi)
 833208a:	8b 45 80             	mov    -0x80(%ebp),%eax
 833208d:	89 46 12             	mov    %eax,0x12(%esi)
 8332090:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8332093:	89 46 16             	mov    %eax,0x16(%esi)
 8332096:	8b 45 88             	mov    -0x78(%ebp),%eax
 8332099:	89 46 1a             	mov    %eax,0x1a(%esi)
 833209c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 833209f:	89 46 1e             	mov    %eax,0x1e(%esi)
 83320a2:	8b 45 90             	mov    -0x70(%ebp),%eax
 83320a5:	89 46 22             	mov    %eax,0x22(%esi)
 83320a8:	8b 45 94             	mov    -0x6c(%ebp),%eax
 83320ab:	89 46 26             	mov    %eax,0x26(%esi)
 83320ae:	8b 45 98             	mov    -0x68(%ebp),%eax
 83320b1:	89 46 2a             	mov    %eax,0x2a(%esi)
 83320b4:	8b 45 9c             	mov    -0x64(%ebp),%eax
 83320b7:	89 46 2e             	mov    %eax,0x2e(%esi)
 83320ba:	8b 45 a0             	mov    -0x60(%ebp),%eax
 83320bd:	89 46 32             	mov    %eax,0x32(%esi)
 83320c0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 83320c3:	89 46 36             	mov    %eax,0x36(%esi)
 83320c6:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83320c9:	89 46 3a             	mov    %eax,0x3a(%esi)
 83320cc:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83320cf:	89 46 3e             	mov    %eax,0x3e(%esi)
 83320d2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83320d5:	89 46 42             	mov    %eax,0x42(%esi)
 83320d8:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 83320dc:	88 46 46             	mov    %al,0x46(%esi)
 83320df:	89 d8                	mov    %ebx,%eax
 83320e1:	8b 55 14             	mov    0x14(%ebp),%edx
 83320e4:	0f b7 52 15          	movzwl 0x15(%edx),%edx
 83320e8:	66 89 50 48          	mov    %dx,0x48(%eax)
 83320ec:	89 de                	mov    %ebx,%esi
 83320ee:	8b 45 14             	mov    0x14(%ebp),%eax
 83320f1:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 83320f5:	0f bf f8             	movswl %ax,%edi
 83320f8:	8b 45 10             	mov    0x10(%ebp),%eax
 83320fb:	89 04 24             	mov    %eax,(%esp)
 83320fe:	e8 7b 81 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8332103:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8332109:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 833210d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8332114:	00 
 8332115:	89 44 24 04          	mov    %eax,0x4(%esp)
 8332119:	89 14 24             	mov    %edx,(%esp)
 833211c:	e8 f7 97 1c 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8332121:	83 ec 04             	sub    $0x4,%esp
 8332124:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 833212a:	89 46 4a             	mov    %eax,0x4a(%esi)
 833212d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8332133:	89 46 4e             	mov    %eax,0x4e(%esi)
 8332136:	8b 45 80             	mov    -0x80(%ebp),%eax
 8332139:	89 46 52             	mov    %eax,0x52(%esi)
 833213c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 833213f:	89 46 56             	mov    %eax,0x56(%esi)
 8332142:	8b 45 88             	mov    -0x78(%ebp),%eax
 8332145:	89 46 5a             	mov    %eax,0x5a(%esi)
 8332148:	8b 45 8c             	mov    -0x74(%ebp),%eax
 833214b:	89 46 5e             	mov    %eax,0x5e(%esi)
 833214e:	8b 45 90             	mov    -0x70(%ebp),%eax
 8332151:	89 46 62             	mov    %eax,0x62(%esi)
 8332154:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8332157:	89 46 66             	mov    %eax,0x66(%esi)
 833215a:	8b 45 98             	mov    -0x68(%ebp),%eax
 833215d:	89 46 6a             	mov    %eax,0x6a(%esi)
 8332160:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8332163:	89 46 6e             	mov    %eax,0x6e(%esi)
 8332166:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8332169:	89 46 72             	mov    %eax,0x72(%esi)
 833216c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 833216f:	89 46 76             	mov    %eax,0x76(%esi)
 8332172:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8332175:	89 46 7a             	mov    %eax,0x7a(%esi)
 8332178:	8b 45 ac             	mov    -0x54(%ebp),%eax
 833217b:	89 46 7e             	mov    %eax,0x7e(%esi)
 833217e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8332181:	89 86 82 00 00 00    	mov    %eax,0x82(%esi)
 8332187:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 833218b:	88 86 86 00 00 00    	mov    %al,0x86(%esi)
 8332191:	89 de                	mov    %ebx,%esi
 8332193:	8b 45 14             	mov    0x14(%ebp),%eax
 8332196:	8b 40 11             	mov    0x11(%eax),%eax
 8332199:	89 c7                	mov    %eax,%edi
 833219b:	e8 fb 9f d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83321a0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 83321a4:	89 04 24             	mov    %eax,(%esp)
 83321a7:	e8 86 d8 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83321ac:	89 86 88 00 00 00    	mov    %eax,0x88(%esi)
 83321b2:	89 de                	mov    %ebx,%esi
 83321b4:	8b 45 14             	mov    0x14(%ebp),%eax
 83321b7:	8b 40 17             	mov    0x17(%eax),%eax
 83321ba:	89 c7                	mov    %eax,%edi
 83321bc:	e8 da 9f d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83321c1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 83321c5:	89 04 24             	mov    %eax,(%esp)
 83321c8:	e8 65 d8 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83321cd:	89 86 8c 00 00 00    	mov    %eax,0x8c(%esi)
 83321d3:	89 d8                	mov    %ebx,%eax
 83321d5:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 83321db:	85 c0                	test   %eax,%eax
 83321dd:	74 0c                	je     83321eb <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x2ed>
 83321df:	89 d8                	mov    %ebx,%eax
 83321e1:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 83321e7:	85 c0                	test   %eax,%eax
 83321e9:	75 0e                	jne    83321f9 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x2fb>
 83321eb:	89 d8                	mov    %ebx,%eax
 83321ed:	c6 80 d7 00 00 00 01 	movb   $0x1,0xd7(%eax)
 83321f4:	e9 01 04 00 00       	jmp    83325fa <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6fc>
 83321f9:	8b 45 14             	mov    0x14(%ebp),%eax
 83321fc:	8b 50 11             	mov    0x11(%eax),%edx
 83321ff:	89 d8                	mov    %ebx,%eax
 8332201:	8b 40 0c             	mov    0xc(%eax),%eax
 8332204:	39 c2                	cmp    %eax,%edx
 8332206:	75 0f                	jne    8332217 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x319>
 8332208:	8b 45 14             	mov    0x14(%ebp),%eax
 833220b:	8b 50 17             	mov    0x17(%eax),%edx
 833220e:	89 d8                	mov    %ebx,%eax
 8332210:	8b 40 4c             	mov    0x4c(%eax),%eax
 8332213:	39 c2                	cmp    %eax,%edx
 8332215:	74 0e                	je     8332225 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x327>
 8332217:	89 d8                	mov    %ebx,%eax
 8332219:	c6 80 d7 00 00 00 01 	movb   $0x1,0xd7(%eax)
 8332220:	e9 d5 03 00 00       	jmp    83325fa <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6fc>
 8332225:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 833222c:	e9 9b 00 00 00       	jmp    83322cc <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3ce>
 8332231:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8332234:	0f be d0             	movsbl %al,%edx
 8332237:	89 d8                	mov    %ebx,%eax
 8332239:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 833223f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332243:	89 04 24             	mov    %eax,(%esp)
 8332246:	e8 dd b4 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 833224b:	89 c6                	mov    %eax,%esi
 833224d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8332250:	0f be d0             	movsbl %al,%edx
 8332253:	89 d8                	mov    %ebx,%eax
 8332255:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833225b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833225f:	89 04 24             	mov    %eax,(%esp)
 8332262:	e8 c1 b4 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8332267:	89 f2                	mov    %esi,%edx
 8332269:	38 c2                	cmp    %al,%dl
 833226b:	0f 95 c0             	setne  %al
 833226e:	84 c0                	test   %al,%al
 8332270:	75 55                	jne    83322c7 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3c9>
 8332272:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8332275:	0f be d0             	movsbl %al,%edx
 8332278:	89 d8                	mov    %ebx,%eax
 833227a:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332280:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332284:	89 04 24             	mov    %eax,(%esp)
 8332287:	e8 9c b4 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 833228c:	84 c0                	test   %al,%al
 833228e:	74 25                	je     83322b5 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3b7>
 8332290:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8332293:	0f be d0             	movsbl %al,%edx
 8332296:	89 d8                	mov    %ebx,%eax
 8332298:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 833229e:	89 54 24 04          	mov    %edx,0x4(%esp)
 83322a2:	89 04 24             	mov    %eax,(%esp)
 83322a5:	e8 7e b4 1d 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 83322aa:	84 c0                	test   %al,%al
 83322ac:	74 07                	je     83322b5 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3b7>
 83322ae:	b8 01 00 00 00       	mov    $0x1,%eax
 83322b3:	eb 05                	jmp    83322ba <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3bc>
 83322b5:	b8 00 00 00 00       	mov    $0x0,%eax
 83322ba:	84 c0                	test   %al,%al
 83322bc:	74 0a                	je     83322c8 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3ca>
 83322be:	89 d8                	mov    %ebx,%eax
 83322c0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 83322c3:	89 10                	mov    %edx,(%eax)
 83322c5:	eb 14                	jmp    83322db <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3dd>
 83322c7:	90                   	nop
 83322c8:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 83322cc:	83 7d dc 0a          	cmpl   $0xa,-0x24(%ebp)
 83322d0:	0f 9e c0             	setle  %al
 83322d3:	84 c0                	test   %al,%al
 83322d5:	0f 85 56 ff ff ff    	jne    8332231 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x333>
 83322db:	89 d8                	mov    %ebx,%eax
 83322dd:	8b 00                	mov    (%eax),%eax
 83322df:	83 f8 0b             	cmp    $0xb,%eax
 83322e2:	0f 84 11 03 00 00    	je     83325f9 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6fb>
 83322e8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 83322ef:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 83322f6:	e9 a0 02 00 00       	jmp    833259b <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x69d>
 83322fb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 83322fe:	89 d8                	mov    %ebx,%eax
 8332300:	8b 00                	mov    (%eax),%eax
 8332302:	89 c2                	mov    %eax,%edx
 8332304:	89 d0                	mov    %edx,%eax
 8332306:	01 c0                	add    %eax,%eax
 8332308:	01 d0                	add    %edx,%eax
 833230a:	c1 e0 02             	shl    $0x2,%eax
 833230d:	03 45 0c             	add    0xc(%ebp),%eax
 8332310:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8332314:	89 04 24             	mov    %eax,(%esp)
 8332317:	e8 b0 1c 5d 00       	call   8903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>
 833231c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833231f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8332323:	0f 84 6d 02 00 00    	je     8332596 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x698>
 8332329:	8b 45 14             	mov    0x14(%ebp),%eax
 833232c:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 8332330:	84 c0                	test   %al,%al
 8332332:	0f 85 8e 00 00 00    	jne    83323c6 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x4c8>
 8332338:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833233b:	8d 90 b8 02 00 00    	lea    0x2b8(%eax),%edx
 8332341:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8332344:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332348:	89 04 24             	mov    %eax,(%esp)
 833234b:	e8 d0 ee dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8332350:	83 ec 04             	sub    $0x4,%esp
 8332353:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332356:	8d 90 b8 02 00 00    	lea    0x2b8(%eax),%edx
 833235c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833235f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332363:	89 04 24             	mov    %eax,(%esp)
 8332366:	e8 e1 ee dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 833236b:	83 ec 04             	sub    $0x4,%esp
 833236e:	eb 31                	jmp    83323a1 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x4a3>
 8332370:	89 d8                	mov    %ebx,%eax
 8332372:	8b b0 94 00 00 00    	mov    0x94(%eax),%esi
 8332378:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833237b:	89 04 24             	mov    %eax,(%esp)
 833237e:	e8 8f 15 e6 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8332383:	8b 00                	mov    (%eax),%eax
 8332385:	39 c6                	cmp    %eax,%esi
 8332387:	0f 94 c0             	sete   %al
 833238a:	84 c0                	test   %al,%al
 833238c:	74 08                	je     8332396 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x498>
 833238e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8332391:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8332394:	eb 21                	jmp    83323b7 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x4b9>
 8332396:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8332399:	89 04 24             	mov    %eax,(%esp)
 833239c:	e8 2f b9 f0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 83323a1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83323a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83323a8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83323ab:	89 04 24             	mov    %eax,(%esp)
 83323ae:	e8 32 15 e6 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 83323b3:	84 c0                	test   %al,%al
 83323b5:	75 b9                	jne    8332370 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x472>
 83323b7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 83323bb:	0f 84 d6 01 00 00    	je     8332597 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x699>
 83323c1:	e9 00 02 00 00       	jmp    83325c6 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6c8>
 83323c6:	8b 45 14             	mov    0x14(%ebp),%eax
 83323c9:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 83323cd:	3c 01                	cmp    $0x1,%al
 83323cf:	0f 85 8e 00 00 00    	jne    8332463 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x565>
 83323d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83323d8:	8d 90 c4 02 00 00    	lea    0x2c4(%eax),%edx
 83323de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83323e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83323e5:	89 04 24             	mov    %eax,(%esp)
 83323e8:	e8 33 ee dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 83323ed:	83 ec 04             	sub    $0x4,%esp
 83323f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83323f3:	8d 90 c4 02 00 00    	lea    0x2c4(%eax),%edx
 83323f9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83323fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332400:	89 04 24             	mov    %eax,(%esp)
 8332403:	e8 44 ee dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8332408:	83 ec 04             	sub    $0x4,%esp
 833240b:	eb 31                	jmp    833243e <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x540>
 833240d:	89 d8                	mov    %ebx,%eax
 833240f:	8b b0 94 00 00 00    	mov    0x94(%eax),%esi
 8332415:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8332418:	89 04 24             	mov    %eax,(%esp)
 833241b:	e8 f2 14 e6 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8332420:	8b 00                	mov    (%eax),%eax
 8332422:	39 c6                	cmp    %eax,%esi
 8332424:	0f 94 c0             	sete   %al
 8332427:	84 c0                	test   %al,%al
 8332429:	74 08                	je     8332433 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x535>
 833242b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833242e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8332431:	eb 21                	jmp    8332454 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x556>
 8332433:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8332436:	89 04 24             	mov    %eax,(%esp)
 8332439:	e8 92 b8 f0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 833243e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8332441:	89 44 24 04          	mov    %eax,0x4(%esp)
 8332445:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8332448:	89 04 24             	mov    %eax,(%esp)
 833244b:	e8 95 14 e6 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8332450:	84 c0                	test   %al,%al
 8332452:	75 b9                	jne    833240d <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x50f>
 8332454:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8332458:	0f 84 39 01 00 00    	je     8332597 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x699>
 833245e:	e9 63 01 00 00       	jmp    83325c6 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6c8>
 8332463:	8b 45 14             	mov    0x14(%ebp),%eax
 8332466:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 833246a:	3c 03                	cmp    $0x3,%al
 833246c:	0f 85 8e 00 00 00    	jne    8332500 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x602>
 8332472:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332475:	8d 90 d0 02 00 00    	lea    0x2d0(%eax),%edx
 833247b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 833247e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8332482:	89 04 24             	mov    %eax,(%esp)
 8332485:	e8 96 ed dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 833248a:	83 ec 04             	sub    $0x4,%esp
 833248d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332490:	8d 90 d0 02 00 00    	lea    0x2d0(%eax),%edx
 8332496:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8332499:	89 54 24 04          	mov    %edx,0x4(%esp)
 833249d:	89 04 24             	mov    %eax,(%esp)
 83324a0:	e8 a7 ed dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 83324a5:	83 ec 04             	sub    $0x4,%esp
 83324a8:	eb 31                	jmp    83324db <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x5dd>
 83324aa:	89 d8                	mov    %ebx,%eax
 83324ac:	8b b0 94 00 00 00    	mov    0x94(%eax),%esi
 83324b2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83324b5:	89 04 24             	mov    %eax,(%esp)
 83324b8:	e8 55 14 e6 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 83324bd:	8b 00                	mov    (%eax),%eax
 83324bf:	39 c6                	cmp    %eax,%esi
 83324c1:	0f 94 c0             	sete   %al
 83324c4:	84 c0                	test   %al,%al
 83324c6:	74 08                	je     83324d0 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x5d2>
 83324c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83324cb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83324ce:	eb 21                	jmp    83324f1 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x5f3>
 83324d0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83324d3:	89 04 24             	mov    %eax,(%esp)
 83324d6:	e8 f5 b7 f0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 83324db:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83324de:	89 44 24 04          	mov    %eax,0x4(%esp)
 83324e2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83324e5:	89 04 24             	mov    %eax,(%esp)
 83324e8:	e8 f8 13 e6 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 83324ed:	84 c0                	test   %al,%al
 83324ef:	75 b9                	jne    83324aa <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x5ac>
 83324f1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 83324f5:	0f 84 9c 00 00 00    	je     8332597 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x699>
 83324fb:	e9 c6 00 00 00       	jmp    83325c6 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6c8>
 8332500:	8b 45 14             	mov    0x14(%ebp),%eax
 8332503:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 8332507:	3c 04                	cmp    $0x4,%al
 8332509:	0f 85 88 00 00 00    	jne    8332597 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x699>
 833250f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8332512:	8d 90 0c 02 00 00    	lea    0x20c(%eax),%edx
 8332518:	8d 45 bc             	lea    -0x44(%ebp),%eax
 833251b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833251f:	89 04 24             	mov    %eax,(%esp)
 8332522:	e8 f9 ec dd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8332527:	83 ec 04             	sub    $0x4,%esp
 833252a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833252d:	8d 90 0c 02 00 00    	lea    0x20c(%eax),%edx
 8332533:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8332536:	89 54 24 04          	mov    %edx,0x4(%esp)
 833253a:	89 04 24             	mov    %eax,(%esp)
 833253d:	e8 0a ed dd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8332542:	83 ec 04             	sub    $0x4,%esp
 8332545:	eb 31                	jmp    8332578 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x67a>
 8332547:	89 d8                	mov    %ebx,%eax
 8332549:	8b b0 94 00 00 00    	mov    0x94(%eax),%esi
 833254f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8332552:	89 04 24             	mov    %eax,(%esp)
 8332555:	e8 b8 13 e6 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 833255a:	8b 00                	mov    (%eax),%eax
 833255c:	39 c6                	cmp    %eax,%esi
 833255e:	0f 94 c0             	sete   %al
 8332561:	84 c0                	test   %al,%al
 8332563:	74 08                	je     833256d <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x66f>
 8332565:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8332568:	89 45 d8             	mov    %eax,-0x28(%ebp)
 833256b:	eb 21                	jmp    833258e <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x690>
 833256d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8332570:	89 04 24             	mov    %eax,(%esp)
 8332573:	e8 58 b7 f0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8332578:	8d 45 b8             	lea    -0x48(%ebp),%eax
 833257b:	89 44 24 04          	mov    %eax,0x4(%esp)
 833257f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8332582:	89 04 24             	mov    %eax,(%esp)
 8332585:	e8 5b 13 e6 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 833258a:	84 c0                	test   %al,%al
 833258c:	75 b9                	jne    8332547 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x649>
 833258e:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8332592:	75 31                	jne    83325c5 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6c7>
 8332594:	eb 01                	jmp    8332597 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x699>
 8332596:	90                   	nop
 8332597:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 833259b:	89 d8                	mov    %ebx,%eax
 833259d:	8b 00                	mov    (%eax),%eax
 833259f:	89 c2                	mov    %eax,%edx
 83325a1:	89 d0                	mov    %edx,%eax
 83325a3:	01 c0                	add    %eax,%eax
 83325a5:	01 d0                	add    %edx,%eax
 83325a7:	c1 e0 02             	shl    $0x2,%eax
 83325aa:	03 45 0c             	add    0xc(%ebp),%eax
 83325ad:	89 04 24             	mov    %eax,(%esp)
 83325b0:	e8 5d 1e 00 00       	call   8334412 <_ZNKSt6vectorI17tagCompoundAvatarSaIS0_EE4sizeEv>
 83325b5:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 83325b8:	0f 97 c0             	seta   %al
 83325bb:	84 c0                	test   %al,%al
 83325bd:	0f 85 38 fd ff ff    	jne    83322fb <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x3fd>
 83325c3:	eb 01                	jmp    83325c6 <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6c8>
 83325c5:	90                   	nop
 83325c6:	89 d8                	mov    %ebx,%eax
 83325c8:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83325cb:	89 50 04             	mov    %edx,0x4(%eax)
 83325ce:	89 d8                	mov    %ebx,%eax
 83325d0:	8b 55 14             	mov    0x14(%ebp),%edx
 83325d3:	0f b6 52 22          	movzbl 0x22(%edx),%edx
 83325d7:	88 90 e8 00 00 00    	mov    %dl,0xe8(%eax)
 83325dd:	eb 1b                	jmp    83325fa <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR+0x6fc>
 83325df:	89 d6                	mov    %edx,%esi
 83325e1:	89 c7                	mov    %eax,%edi
 83325e3:	89 d8                	mov    %ebx,%eax
 83325e5:	89 04 24             	mov    %eax,(%esp)
 83325e8:	e8 9b 1d 00 00       	call   8334388 <_ZN8WongWork15CCompoundAvatar15tagCompoundInfoD1Ev>
 83325ed:	89 f8                	mov    %edi,%eax
 83325ef:	89 f2                	mov    %esi,%edx
 83325f1:	89 04 24             	mov    %eax,(%esp)
 83325f4:	e8 57 11 7b 00       	call   8ae3750 <_Unwind_Resume>
 83325f9:	90                   	nop
 83325fa:	89 d8                	mov    %ebx,%eax
 83325fc:	89 d8                	mov    %ebx,%eax
 83325fe:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8332601:	83 c4 00             	add    $0x0,%esp
 8332604:	5b                   	pop    %ebx
 8332605:	5e                   	pop    %esi
 8332606:	5f                   	pop    %edi
 8332607:	5d                   	pop    %ebp
 8332608:	c2 04 00             	ret    $0x4
 833260b:	90                   	nop

```

```c
// WongWork::CCompoundAvatar::_MakeCompoundInfo @ 0x8331efe

/* WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser const*, MSG_COMPOUND_AVATAR const*) const */

CUser * WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser *param_1,MSG_COMPOUND_AVATAR *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  CUserCharacInfo *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CUser local_50;
  __normal_iterator local_4c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  __normal_iterator local_44 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  tagCompoundInfo::tagCompoundInfo((tagCompoundInfo *)param_1);
                    /* try { // try from 08331f1c to 08332589 has its CatchHandler @ 083325df */
  tagCompoundInfo::clear((tagCompoundInfo *)param_1);
  param_1[0xd6] = (CUser)(*(char *)(in_stack_00000010 + 0x21) == '\x01');
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(in_stack_00000010 + 0x1b);
  *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)(in_stack_00000010 + 0x1f);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(in_stack_00000010 + 0xd);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 0x92) = local_8c;
  *(undefined4 *)(param_1 + 0x96) = local_88;
  *(undefined4 *)(param_1 + 0x9a) = local_84;
  *(undefined4 *)(param_1 + 0x9e) = local_80;
  *(undefined4 *)(param_1 + 0xa2) = local_7c;
  *(undefined4 *)(param_1 + 0xa6) = local_78;
  *(undefined4 *)(param_1 + 0xaa) = local_74;
  *(undefined4 *)(param_1 + 0xae) = local_70;
  *(undefined4 *)(param_1 + 0xb2) = local_6c;
  *(undefined4 *)(param_1 + 0xb6) = local_68;
  *(undefined4 *)(param_1 + 0xba) = local_64;
  *(undefined4 *)(param_1 + 0xbe) = local_60;
  *(undefined4 *)(param_1 + 0xc2) = local_5c;
  *(undefined4 *)(param_1 + 0xc6) = local_58;
  *(undefined4 *)(param_1 + 0xca) = local_54;
  param_1[0xce] = local_50;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(in_stack_00000010 + 0xf);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 10) = local_8c;
  *(undefined4 *)(param_1 + 0xe) = local_88;
  *(undefined4 *)(param_1 + 0x12) = local_84;
  *(undefined4 *)(param_1 + 0x16) = local_80;
  *(undefined4 *)(param_1 + 0x1a) = local_7c;
  *(undefined4 *)(param_1 + 0x1e) = local_78;
  *(undefined4 *)(param_1 + 0x22) = local_74;
  *(undefined4 *)(param_1 + 0x26) = local_70;
  *(undefined4 *)(param_1 + 0x2a) = local_6c;
  *(undefined4 *)(param_1 + 0x2e) = local_68;
  *(undefined4 *)(param_1 + 0x32) = local_64;
  *(undefined4 *)(param_1 + 0x36) = local_60;
  *(undefined4 *)(param_1 + 0x3a) = local_5c;
  *(undefined4 *)(param_1 + 0x3e) = local_58;
  *(undefined4 *)(param_1 + 0x42) = local_54;
  param_1[0x46] = local_50;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(in_stack_00000010 + 0x15);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 0x4a) = local_8c;
  *(undefined4 *)(param_1 + 0x4e) = local_88;
  *(undefined4 *)(param_1 + 0x52) = local_84;
  *(undefined4 *)(param_1 + 0x56) = local_80;
  *(undefined4 *)(param_1 + 0x5a) = local_7c;
  *(undefined4 *)(param_1 + 0x5e) = local_78;
  *(undefined4 *)(param_1 + 0x62) = local_74;
  *(undefined4 *)(param_1 + 0x66) = local_70;
  *(undefined4 *)(param_1 + 0x6a) = local_6c;
  *(undefined4 *)(param_1 + 0x6e) = local_68;
  *(undefined4 *)(param_1 + 0x72) = local_64;
  *(undefined4 *)(param_1 + 0x76) = local_60;
  *(undefined4 *)(param_1 + 0x7a) = local_5c;
  *(undefined4 *)(param_1 + 0x7e) = local_58;
  *(undefined4 *)(param_1 + 0x82) = local_54;
  param_1[0x86] = local_50;
  iVar4 = *(int *)(in_stack_00000010 + 0x11);
  pCVar5 = (CDataManager *)G_CDataManager();
  uVar6 = CDataManager::find_item(pCVar5,iVar4);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  iVar4 = *(int *)(in_stack_00000010 + 0x17);
  pCVar5 = (CDataManager *)G_CDataManager();
  uVar6 = CDataManager::find_item(pCVar5,iVar4);
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  if ((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 0x8c) == 0)) {
    param_1[0xd7] = (CUser)0x1;
  }
  else if ((*(int *)(in_stack_00000010 + 0x11) == *(int *)(param_1 + 0xc)) &&
          (*(int *)(in_stack_00000010 + 0x17) == *(int *)(param_1 + 0x4c))) {
    for (local_28 = 0; local_28 < 0xb; local_28 = local_28 + 1) {
      cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x88),(char)local_28);
      cVar2 = CItem::check_job_type(*(CItem **)(param_1 + 0x8c),(char)local_28);
      if (cVar1 == cVar2) {
        cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x88),(char)local_28);
        if ((cVar1 == '\0') ||
           (cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x8c),(char)local_28), cVar1 == '\0'
           )) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(int *)param_1 = local_28;
          break;
        }
      }
    }
    if (*(int *)param_1 != 0xb) {
      local_2c = 0;
      local_24 = 1;
      while (uVar8 = std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::size
                               ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)
                                (param_2 + *(int *)param_1 * 0xc)), local_24 < uVar8) {
        local_20 = tagCompoundAvatarTable::getCompoundAvatarInfo
                             ((tagCompoundAvatarTable *)(param_2 + *(int *)param_1 * 0xc),local_24);
        if (local_20 != 0) {
          if (*(char *)(in_stack_00000010 + 0x22) == '\0') {
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            while ((bVar3 = __gnu_cxx::operator!=(local_30,local_34), uVar8 = local_2c, bVar3 &&
                   (iVar4 = *(int *)(param_1 + 0x94),
                   piVar7 = (int *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_30), uVar8 = local_24, iVar4 != *piVar7))) {
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator++(local_30);
            }
          }
          else {
            if (*(char *)(in_stack_00000010 + 0x22) != '\x01') {
              if (*(char *)(in_stack_00000010 + 0x22) == '\x03') {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                while ((bVar3 = __gnu_cxx::operator!=(local_40,local_44), uVar8 = local_2c, bVar3 &&
                       (iVar4 = *(int *)(param_1 + 0x94),
                       piVar7 = (int *)__gnu_cxx::
                                       __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       ::operator->(local_40), uVar8 = local_24, iVar4 != *piVar7)))
                {
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_40);
                }
              }
              else {
                if (*(char *)(in_stack_00000010 + 0x22) != '\x04') goto LAB_08332597;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                while ((bVar3 = __gnu_cxx::operator!=(local_48,local_4c), uVar8 = local_2c, bVar3 &&
                       (iVar4 = *(int *)(param_1 + 0x94),
                       piVar7 = (int *)__gnu_cxx::
                                       __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       ::operator->(local_48), uVar8 = local_24, iVar4 != *piVar7)))
                {
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_48);
                }
              }
              local_2c = uVar8;
              if (local_2c == 0) goto LAB_08332597;
              break;
            }
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            while ((bVar3 = __gnu_cxx::operator!=(local_38,local_3c), uVar8 = local_2c, bVar3 &&
                   (iVar4 = *(int *)(param_1 + 0x94),
                   piVar7 = (int *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_38), uVar8 = local_24, iVar4 != *piVar7))) {
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator++(local_38);
            }
          }
          local_2c = uVar8;
          if (local_2c != 0) break;
        }
LAB_08332597:
        local_24 = local_24 + 1;
      }
      *(uint *)(param_1 + 4) = local_2c;
      param_1[0xe8] = *(CUser *)(in_stack_00000010 + 0x22);
    }
  }
  else {
    param_1[0xd7] = (CUser)0x1;
  }
  return param_1;
}

```

---

## _ProcCompoundCore

```asm
// === 08332ee8 WongWork::CCompoundAvatar::_ProcCompoundCore  [0x08332ee8-0x83338c1] ===
 8332ee8:	55                   	push   %ebp
 8332ee9:	89 e5                	mov    %esp,%ebp
 8332eeb:	57                   	push   %edi
 8332eec:	56                   	push   %esi
 8332eed:	53                   	push   %ebx
 8332eee:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8332ef4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8332ef7:	89 04 24             	mov    %eax,(%esp)
 8332efa:	e8 8f 73 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8332eff:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8332f02:	8b 45 10             	mov    0x10(%ebp),%eax
 8332f05:	8b 40 04             	mov    0x4(%eax),%eax
 8332f08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8332f0c:	8b 45 14             	mov    0x14(%ebp),%eax
 8332f0f:	89 04 24             	mov    %eax,(%esp)
 8332f12:	e8 b5 10 5d 00       	call   8903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>
 8332f17:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8332f1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8332f1d:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332f23:	8b 00                	mov    (%eax),%eax
 8332f25:	83 c0 0c             	add    $0xc,%eax
 8332f28:	8b 10                	mov    (%eax),%edx
 8332f2a:	8b 45 10             	mov    0x10(%ebp),%eax
 8332f2d:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332f33:	89 04 24             	mov    %eax,(%esp)
 8332f36:	ff d2                	call   *%edx
 8332f38:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8332f3b:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8332f42:	8b 45 10             	mov    0x10(%ebp),%eax
 8332f45:	0f b6 80 d6 00 00 00 	movzbl 0xd6(%eax),%eax
 8332f4c:	84 c0                	test   %al,%al
 8332f4e:	0f 84 c8 02 00 00    	je     833321c <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x334>
 8332f54:	8b 45 10             	mov    0x10(%ebp),%eax
 8332f57:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8332f5e:	3c 04                	cmp    $0x4,%al
 8332f60:	0f 84 b6 02 00 00    	je     833321c <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x334>
 8332f66:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8332f69:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8332f6c:	83 c2 08             	add    $0x8,%edx
 8332f6f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8332f73:	85 c0                	test   %eax,%eax
 8332f75:	74 21                	je     8332f98 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0xb0>
 8332f77:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8332f7a:	89 d0                	mov    %edx,%eax
 8332f7c:	01 c0                	add    %eax,%eax
 8332f7e:	01 d0                	add    %edx,%eax
 8332f80:	c1 e0 02             	shl    $0x2,%eax
 8332f83:	83 c0 70             	add    $0x70,%eax
 8332f86:	03 45 b0             	add    -0x50(%ebp),%eax
 8332f89:	83 c0 0c             	add    $0xc,%eax
 8332f8c:	89 04 24             	mov    %eax,(%esp)
 8332f8f:	e8 06 e2 dd ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 8332f94:	84 c0                	test   %al,%al
 8332f96:	74 07                	je     8332f9f <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0xb7>
 8332f98:	b8 01 00 00 00       	mov    $0x1,%eax
 8332f9d:	eb 05                	jmp    8332fa4 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0xbc>
 8332f9f:	b8 00 00 00 00       	mov    $0x0,%eax
 8332fa4:	84 c0                	test   %al,%al
 8332fa6:	74 0a                	je     8332fb2 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0xca>
 8332fa8:	b8 01 00 00 00       	mov    $0x1,%eax
 8332fad:	e9 05 09 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8332fb2:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8332fb9:	8b 45 10             	mov    0x10(%ebp),%eax
 8332fbc:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8332fc2:	89 04 24             	mov    %eax,(%esp)
 8332fc5:	e8 8a dc dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332fca:	83 f8 01             	cmp    $0x1,%eax
 8332fcd:	75 1d                	jne    8332fec <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x104>
 8332fcf:	8b 45 10             	mov    0x10(%ebp),%eax
 8332fd2:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8332fd8:	89 04 24             	mov    %eax,(%esp)
 8332fdb:	e8 74 dc dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8332fe0:	83 f8 01             	cmp    $0x1,%eax
 8332fe3:	75 07                	jne    8332fec <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x104>
 8332fe5:	b8 01 00 00 00       	mov    $0x1,%eax
 8332fea:	eb 05                	jmp    8332ff1 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x109>
 8332fec:	b8 00 00 00 00       	mov    $0x0,%eax
 8332ff1:	84 c0                	test   %al,%al
 8332ff3:	0f 84 48 01 00 00    	je     8333141 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x259>
 8332ff9:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8332ffc:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8332fff:	83 c2 58             	add    $0x58,%edx
 8333002:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8333006:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8333009:	c7 85 78 ff ff ff 10 	movl   $0x2710,-0x88(%ebp)
 8333010:	27 00 00 
 8333013:	8b 45 08             	mov    0x8(%ebp),%eax
 8333016:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 833301c:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8333022:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333026:	89 04 24             	mov    %eax,(%esp)
 8333029:	e8 90 8a d9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 833302e:	3d 87 13 00 00       	cmp    $0x1387,%eax
 8333033:	0f 96 c0             	setbe  %al
 8333036:	84 c0                	test   %al,%al
 8333038:	74 4c                	je     8333086 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x19e>
 833303a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 833303d:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8333043:	8b 45 08             	mov    0x8(%ebp),%eax
 8333046:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 833304c:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8333052:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333056:	89 04 24             	mov    %eax,(%esp)
 8333059:	e8 60 8a d9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 833305e:	89 c1                	mov    %eax,%ecx
 8333060:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8333063:	89 d0                	mov    %edx,%eax
 8333065:	01 c0                	add    %eax,%eax
 8333067:	01 d0                	add    %edx,%eax
 8333069:	c1 e0 02             	shl    $0x2,%eax
 833306c:	05 90 01 00 00       	add    $0x190,%eax
 8333071:	03 45 b0             	add    -0x50(%ebp),%eax
 8333074:	83 c0 04             	add    $0x4,%eax
 8333077:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833307b:	89 04 24             	mov    %eax,(%esp)
 833307e:	e8 cb fd ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 8333083:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8333086:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 833308a:	7f 12                	jg     833309e <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x1b6>
 833308c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 833308f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333092:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8333096:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8333099:	e9 b5 00 00 00       	jmp    8333153 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x26b>
 833309e:	e8 f8 90 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83330a3:	8b 55 b8             	mov    -0x48(%ebp),%edx
 83330a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 83330aa:	89 04 24             	mov    %eax,(%esp)
 83330ad:	e8 80 c9 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83330b2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 83330b5:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 83330b9:	74 19                	je     83330d4 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x1ec>
 83330bb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83330be:	8b 00                	mov    (%eax),%eax
 83330c0:	83 c0 10             	add    $0x10,%eax
 83330c3:	8b 10                	mov    (%eax),%edx
 83330c5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83330c8:	89 04 24             	mov    %eax,(%esp)
 83330cb:	ff d2                	call   *%edx
 83330cd:	83 f0 01             	xor    $0x1,%eax
 83330d0:	84 c0                	test   %al,%al
 83330d2:	74 07                	je     83330db <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x1f3>
 83330d4:	b8 01 00 00 00       	mov    $0x1,%eax
 83330d9:	eb 05                	jmp    83330e0 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x1f8>
 83330db:	b8 00 00 00 00       	mov    $0x0,%eax
 83330e0:	84 c0                	test   %al,%al
 83330e2:	74 0a                	je     83330ee <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x206>
 83330e4:	b8 01 00 00 00       	mov    $0x1,%eax
 83330e9:	e9 c9 07 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 83330ee:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83330f1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83330f4:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 83330f8:	75 0a                	jne    8333104 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x21c>
 83330fa:	b8 01 00 00 00       	mov    $0x1,%eax
 83330ff:	e9 b3 07 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333104:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8333107:	89 04 24             	mov    %eax,(%esp)
 833310a:	e8 ad d2 e4 ff       	call   81803bc <_ZNK10CEquipItem19getAvatarOptionSizeEv>
 833310f:	89 04 24             	mov    %eax,(%esp)
 8333112:	e8 70 ea 37 00       	call   86b1b87 <_Z12get_rand_inti>
 8333117:	89 c2                	mov    %eax,%edx
 8333119:	8b 45 10             	mov    0x10(%ebp),%eax
 833311c:	66 89 90 d4 00 00 00 	mov    %dx,0xd4(%eax)
 8333123:	8b 45 10             	mov    0x10(%ebp),%eax
 8333126:	0f b7 80 d4 00 00 00 	movzwl 0xd4(%eax),%eax
 833312d:	66 83 f8 63          	cmp    $0x63,%ax
 8333131:	76 20                	jbe    8333153 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x26b>
 8333133:	8b 45 10             	mov    0x10(%ebp),%eax
 8333136:	66 c7 80 d4 00 00 00 	movw   $0x0,0xd4(%eax)
 833313d:	00 00 
 833313f:	eb 12                	jmp    8333153 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x26b>
 8333141:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8333144:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333147:	81 c2 b8 00 00 00    	add    $0xb8,%edx
 833314d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8333150:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8333153:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8333157:	0f 8f 1a 01 00 00    	jg     8333277 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x38f>
 833315d:	8b 45 10             	mov    0x10(%ebp),%eax
 8333160:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8333167:	3c 01                	cmp    $0x1,%al
 8333169:	75 0e                	jne    8333179 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x291>
 833316b:	e8 2b 90 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8333170:	8b 80 54 4a 00 00    	mov    0x4a54(%eax),%eax
 8333176:	01 45 c8             	add    %eax,-0x38(%ebp)
 8333179:	8b 45 10             	mov    0x10(%ebp),%eax
 833317c:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8333183:	3c 03                	cmp    $0x3,%al
 8333185:	75 2b                	jne    83331b2 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x2ca>
 8333187:	e8 0f 90 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833318c:	8b 80 58 4a 00 00    	mov    0x4a58(%eax),%eax
 8333192:	89 c1                	mov    %eax,%ecx
 8333194:	0f af 4d c8          	imul   -0x38(%ebp),%ecx
 8333198:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 833319d:	89 c8                	mov    %ecx,%eax
 833319f:	f7 ea                	imul   %edx
 83331a1:	c1 fa 0c             	sar    $0xc,%edx
 83331a4:	89 c8                	mov    %ecx,%eax
 83331a6:	c1 f8 1f             	sar    $0x1f,%eax
 83331a9:	89 d1                	mov    %edx,%ecx
 83331ab:	29 c1                	sub    %eax,%ecx
 83331ad:	89 c8                	mov    %ecx,%eax
 83331af:	29 45 c8             	sub    %eax,-0x38(%ebp)
 83331b2:	c7 45 80 10 27 00 00 	movl   $0x2710,-0x80(%ebp)
 83331b9:	8b 45 08             	mov    0x8(%ebp),%eax
 83331bc:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 83331c2:	8d 55 80             	lea    -0x80(%ebp),%edx
 83331c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83331c9:	89 04 24             	mov    %eax,(%esp)
 83331cc:	e8 ed 88 d9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 83331d1:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 83331d4:	0f 9c c0             	setl   %al
 83331d7:	84 c0                	test   %al,%al
 83331d9:	0f 84 9b 00 00 00    	je     833327a <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x392>
 83331df:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 83331e2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83331e5:	83 c2 08             	add    $0x8,%edx
 83331e8:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 83331ec:	89 04 24             	mov    %eax,(%esp)
 83331ef:	e8 93 e9 37 00       	call   86b1b87 <_Z12get_rand_inti>
 83331f4:	89 c1                	mov    %eax,%ecx
 83331f6:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 83331f9:	89 d0                	mov    %edx,%eax
 83331fb:	01 c0                	add    %eax,%eax
 83331fd:	01 d0                	add    %edx,%eax
 83331ff:	c1 e0 02             	shl    $0x2,%eax
 8333202:	83 c0 70             	add    $0x70,%eax
 8333205:	03 45 b0             	add    -0x50(%ebp),%eax
 8333208:	83 c0 0c             	add    $0xc,%eax
 833320b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833320f:	89 04 24             	mov    %eax,(%esp)
 8333212:	e8 37 fc ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 8333217:	89 45 b8             	mov    %eax,-0x48(%ebp)
 833321a:	eb 5f                	jmp    833327b <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x393>
 833321c:	8b 45 10             	mov    0x10(%ebp),%eax
 833321f:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8333226:	3c 04                	cmp    $0x4,%al
 8333228:	75 3f                	jne    8333269 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x381>
 833322a:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 833322d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333230:	83 ea 80             	sub    $0xffffff80,%edx
 8333233:	8b 44 90 18          	mov    0x18(%eax,%edx,4),%eax
 8333237:	89 04 24             	mov    %eax,(%esp)
 833323a:	e8 48 e9 37 00       	call   86b1b87 <_Z12get_rand_inti>
 833323f:	89 c1                	mov    %eax,%ecx
 8333241:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8333244:	89 d0                	mov    %edx,%eax
 8333246:	01 c0                	add    %eax,%eax
 8333248:	01 d0                	add    %edx,%eax
 833324a:	c1 e0 02             	shl    $0x2,%eax
 833324d:	05 30 02 00 00       	add    $0x230,%eax
 8333252:	03 45 b0             	add    -0x50(%ebp),%eax
 8333255:	83 c0 10             	add    $0x10,%eax
 8333258:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833325c:	89 04 24             	mov    %eax,(%esp)
 833325f:	e8 ea fb ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 8333264:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8333267:	eb 12                	jmp    833327b <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x393>
 8333269:	8b 45 10             	mov    0x10(%ebp),%eax
 833326c:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8333272:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8333275:	eb 04                	jmp    833327b <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x393>
 8333277:	90                   	nop
 8333278:	eb 01                	jmp    833327b <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x393>
 833327a:	90                   	nop
 833327b:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 833327f:	75 3d                	jne    83332be <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x3d6>
 8333281:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8333284:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333287:	83 c2 14             	add    $0x14,%edx
 833328a:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 833328e:	89 04 24             	mov    %eax,(%esp)
 8333291:	e8 f1 e8 37 00       	call   86b1b87 <_Z12get_rand_inti>
 8333296:	89 c1                	mov    %eax,%ecx
 8333298:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 833329b:	89 d0                	mov    %edx,%eax
 833329d:	01 c0                	add    %eax,%eax
 833329f:	01 d0                	add    %edx,%eax
 83332a1:	c1 e0 02             	shl    $0x2,%eax
 83332a4:	05 f0 00 00 00       	add    $0xf0,%eax
 83332a9:	03 45 b0             	add    -0x50(%ebp),%eax
 83332ac:	83 c0 04             	add    $0x4,%eax
 83332af:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83332b3:	89 04 24             	mov    %eax,(%esp)
 83332b6:	e8 93 fb ff ff       	call   8332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>
 83332bb:	89 45 b8             	mov    %eax,-0x48(%ebp)
 83332be:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 83332c2:	74 18                	je     83332dc <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x3f4>
 83332c4:	e8 d2 8e d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83332c9:	8b 55 b8             	mov    -0x48(%ebp),%edx
 83332cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83332d0:	89 04 24             	mov    %eax,(%esp)
 83332d3:	e8 5a c7 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83332d8:	85 c0                	test   %eax,%eax
 83332da:	75 07                	jne    83332e3 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x3fb>
 83332dc:	b8 01 00 00 00       	mov    $0x1,%eax
 83332e1:	eb 05                	jmp    83332e8 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x400>
 83332e3:	b8 00 00 00 00       	mov    $0x0,%eax
 83332e8:	84 c0                	test   %al,%al
 83332ea:	74 0a                	je     83332f6 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x40e>
 83332ec:	b8 01 00 00 00       	mov    $0x1,%eax
 83332f1:	e9 c1 05 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 83332f6:	8b 45 10             	mov    0x10(%ebp),%eax
 83332f9:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 83332fd:	98                   	cwtl
 83332fe:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8333305:	00 
 8333306:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 833330d:	00 
 833330e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8333315:	00 
 8333316:	89 44 24 08          	mov    %eax,0x8(%esp)
 833331a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8333321:	00 
 8333322:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8333325:	89 04 24             	mov    %eax,(%esp)
 8333328:	e8 df 0c 1d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 833332d:	83 f0 01             	xor    $0x1,%eax
 8333330:	84 c0                	test   %al,%al
 8333332:	74 0a                	je     833333e <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x456>
 8333334:	b8 16 00 00 00       	mov    $0x16,%eax
 8333339:	e9 79 05 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 833333e:	8b 45 10             	mov    0x10(%ebp),%eax
 8333341:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 8333345:	98                   	cwtl
 8333346:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 833334d:	00 
 833334e:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8333355:	00 
 8333356:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 833335d:	00 
 833335e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333362:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8333369:	00 
 833336a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 833336d:	89 04 24             	mov    %eax,(%esp)
 8333370:	e8 97 0c 1d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8333375:	83 f0 01             	xor    $0x1,%eax
 8333378:	84 c0                	test   %al,%al
 833337a:	74 0a                	je     8333386 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x49e>
 833337c:	b8 16 00 00 00       	mov    $0x16,%eax
 8333381:	e9 31 05 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333386:	c6 85 77 ff ff ff 00 	movb   $0x0,-0x89(%ebp)
 833338d:	8b 45 10             	mov    0x10(%ebp),%eax
 8333390:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8333397:	84 c0                	test   %al,%al
 8333399:	75 74                	jne    833340f <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x527>
 833339b:	8b 45 10             	mov    0x10(%ebp),%eax
 833339e:	8d 88 dc 00 00 00    	lea    0xdc(%eax),%ecx
 83333a4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83333a7:	8d 90 b8 02 00 00    	lea    0x2b8(%eax),%edx
 83333ad:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 83333b4:	00 
 83333b5:	c7 44 24 14 12 00 00 	movl   $0x12,0x14(%esp)
 83333bc:	00 
 83333bd:	c7 44 24 10 12 00 00 	movl   $0x12,0x10(%esp)
 83333c4:	00 
 83333c5:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 83333cb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83333cf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83333d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 83333d7:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83333da:	89 04 24             	mov    %eax,(%esp)
 83333dd:	e8 d2 29 1d 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 83333e2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83333e5:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 83333e8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83333eb:	05 b8 02 00 00       	add    $0x2b8,%eax
 83333f0:	89 04 24             	mov    %eax,(%esp)
 83333f3:	e8 1c a4 da ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 83333f8:	39 c3                	cmp    %eax,%ebx
 83333fa:	0f 95 c0             	setne  %al
 83333fd:	84 c0                	test   %al,%al
 83333ff:	0f 84 8c 01 00 00    	je     8333591 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x6a9>
 8333405:	b8 16 00 00 00       	mov    $0x16,%eax
 833340a:	e9 a8 04 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 833340f:	8b 45 10             	mov    0x10(%ebp),%eax
 8333412:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 8333419:	3c 01                	cmp    $0x1,%al
 833341b:	75 74                	jne    8333491 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x5a9>
 833341d:	8b 45 10             	mov    0x10(%ebp),%eax
 8333420:	8d 88 dc 00 00 00    	lea    0xdc(%eax),%ecx
 8333426:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333429:	8d 90 c4 02 00 00    	lea    0x2c4(%eax),%edx
 833342f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8333436:	00 
 8333437:	c7 44 24 14 12 00 00 	movl   $0x12,0x14(%esp)
 833343e:	00 
 833343f:	c7 44 24 10 12 00 00 	movl   $0x12,0x10(%esp)
 8333446:	00 
 8333447:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 833344d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8333451:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8333455:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333459:	8b 45 ac             	mov    -0x54(%ebp),%eax
 833345c:	89 04 24             	mov    %eax,(%esp)
 833345f:	e8 50 29 1d 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 8333464:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8333467:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 833346a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 833346d:	05 c4 02 00 00       	add    $0x2c4,%eax
 8333472:	89 04 24             	mov    %eax,(%esp)
 8333475:	e8 9a a3 da ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 833347a:	39 c3                	cmp    %eax,%ebx
 833347c:	0f 95 c0             	setne  %al
 833347f:	84 c0                	test   %al,%al
 8333481:	0f 84 0a 01 00 00    	je     8333591 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x6a9>
 8333487:	b8 16 00 00 00       	mov    $0x16,%eax
 833348c:	e9 26 04 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333491:	8b 45 10             	mov    0x10(%ebp),%eax
 8333494:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 833349b:	3c 03                	cmp    $0x3,%al
 833349d:	75 74                	jne    8333513 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x62b>
 833349f:	8b 45 10             	mov    0x10(%ebp),%eax
 83334a2:	8d 88 dc 00 00 00    	lea    0xdc(%eax),%ecx
 83334a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83334ab:	8d 90 d0 02 00 00    	lea    0x2d0(%eax),%edx
 83334b1:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 83334b8:	00 
 83334b9:	c7 44 24 14 12 00 00 	movl   $0x12,0x14(%esp)
 83334c0:	00 
 83334c1:	c7 44 24 10 12 00 00 	movl   $0x12,0x10(%esp)
 83334c8:	00 
 83334c9:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 83334cf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83334d3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83334d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83334db:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83334de:	89 04 24             	mov    %eax,(%esp)
 83334e1:	e8 ce 28 1d 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 83334e6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83334e9:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 83334ec:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83334ef:	05 d0 02 00 00       	add    $0x2d0,%eax
 83334f4:	89 04 24             	mov    %eax,(%esp)
 83334f7:	e8 18 a3 da ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 83334fc:	39 c3                	cmp    %eax,%ebx
 83334fe:	0f 95 c0             	setne  %al
 8333501:	84 c0                	test   %al,%al
 8333503:	0f 84 88 00 00 00    	je     8333591 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x6a9>
 8333509:	b8 16 00 00 00       	mov    $0x16,%eax
 833350e:	e9 a4 03 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333513:	8b 45 10             	mov    0x10(%ebp),%eax
 8333516:	0f b6 80 e8 00 00 00 	movzbl 0xe8(%eax),%eax
 833351d:	3c 04                	cmp    $0x4,%al
 833351f:	75 70                	jne    8333591 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x6a9>
 8333521:	8b 45 10             	mov    0x10(%ebp),%eax
 8333524:	8d 88 dc 00 00 00    	lea    0xdc(%eax),%ecx
 833352a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 833352d:	8d 90 0c 02 00 00    	lea    0x20c(%eax),%edx
 8333533:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 833353a:	00 
 833353b:	c7 44 24 14 12 00 00 	movl   $0x12,0x14(%esp)
 8333542:	00 
 8333543:	c7 44 24 10 12 00 00 	movl   $0x12,0x10(%esp)
 833354a:	00 
 833354b:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8333551:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8333555:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8333559:	89 54 24 04          	mov    %edx,0x4(%esp)
 833355d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8333560:	89 04 24             	mov    %eax,(%esp)
 8333563:	e8 4c 28 1d 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 8333568:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833356b:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 833356e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8333571:	05 d0 02 00 00       	add    $0x2d0,%eax
 8333576:	89 04 24             	mov    %eax,(%esp)
 8333579:	e8 96 a2 da ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 833357e:	39 c3                	cmp    %eax,%ebx
 8333580:	0f 95 c0             	setne  %al
 8333583:	84 c0                	test   %al,%al
 8333585:	74 0a                	je     8333591 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x6a9>
 8333587:	b8 16 00 00 00       	mov    $0x16,%eax
 833358c:	e9 26 03 00 00       	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333591:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8333598:	e8 01 87 d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833359d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 83335a0:	8b 45 10             	mov    0x10(%ebp),%eax
 83335a3:	8b 58 11             	mov    0x11(%eax),%ebx
 83335a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83335a9:	89 04 24             	mov    %eax,(%esp)
 83335ac:	e8 cd 6c da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83335b1:	89 04 24             	mov    %eax,(%esp)
 83335b4:	e8 bd 9f da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 83335b9:	8b 55 bc             	mov    -0x44(%ebp),%edx
 83335bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 83335c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83335c4:	89 04 24             	mov    %eax,(%esp)
 83335c7:	e8 84 62 fc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 83335cc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 83335cf:	8b 45 10             	mov    0x10(%ebp),%eax
 83335d2:	8b 58 51             	mov    0x51(%eax),%ebx
 83335d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83335d8:	89 04 24             	mov    %eax,(%esp)
 83335db:	e8 9e 6c da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83335e0:	89 04 24             	mov    %eax,(%esp)
 83335e3:	e8 8e 9f da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 83335e8:	8b 55 bc             	mov    -0x44(%ebp),%edx
 83335eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 83335ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83335f3:	89 04 24             	mov    %eax,(%esp)
 83335f6:	e8 55 62 fc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 83335fb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 83335fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8333601:	8b 58 11             	mov    0x11(%eax),%ebx
 8333604:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8333607:	89 04 24             	mov    %eax,(%esp)
 833360a:	e8 5d d6 dd ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 833360f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333613:	89 04 24             	mov    %eax,(%esp)
 8333616:	e8 e7 5d fc ff       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 833361b:	8b 45 10             	mov    0x10(%ebp),%eax
 833361e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8333622:	98                   	cwtl
 8333623:	8d 50 0a             	lea    0xa(%eax),%edx
 8333626:	8b 45 10             	mov    0x10(%ebp),%eax
 8333629:	8b 40 11             	mov    0x11(%eax),%eax
 833362c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8333633:	00 
 8333634:	89 54 24 10          	mov    %edx,0x10(%esp)
 8333638:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 833363f:	00 
 8333640:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333644:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 833364b:	00 
 833364c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 833364f:	89 04 24             	mov    %eax,(%esp)
 8333652:	e8 d7 55 1d 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 8333657:	c7 45 84 01 00 00 00 	movl   $0x1,-0x7c(%ebp)
 833365e:	8b 45 10             	mov    0x10(%ebp),%eax
 8333661:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333667:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833366a:	89 44 24 04          	mov    %eax,0x4(%esp)
 833366e:	89 14 24             	mov    %edx,(%esp)
 8333671:	e8 78 ab d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8333676:	8b 45 10             	mov    0x10(%ebp),%eax
 8333679:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 833367d:	98                   	cwtl
 833367e:	89 45 88             	mov    %eax,-0x78(%ebp)
 8333681:	8b 45 10             	mov    0x10(%ebp),%eax
 8333684:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 833368a:	8d 45 88             	lea    -0x78(%ebp),%eax
 833368d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333691:	89 14 24             	mov    %edx,(%esp)
 8333694:	e8 55 ab d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8333699:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
 83336a0:	8b 45 10             	mov    0x10(%ebp),%eax
 83336a3:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 83336a9:	8d 45 8c             	lea    -0x74(%ebp),%eax
 83336ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 83336b0:	89 14 24             	mov    %edx,(%esp)
 83336b3:	e8 36 ab d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 83336b8:	8b 45 10             	mov    0x10(%ebp),%eax
 83336bb:	8b 58 51             	mov    0x51(%eax),%ebx
 83336be:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83336c1:	89 04 24             	mov    %eax,(%esp)
 83336c4:	e8 a3 d5 dd ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 83336c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83336cd:	89 04 24             	mov    %eax,(%esp)
 83336d0:	e8 2d 5d fc ff       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 83336d5:	8b 45 10             	mov    0x10(%ebp),%eax
 83336d8:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 83336dc:	98                   	cwtl
 83336dd:	8d 50 0a             	lea    0xa(%eax),%edx
 83336e0:	8b 45 10             	mov    0x10(%ebp),%eax
 83336e3:	8b 40 51             	mov    0x51(%eax),%eax
 83336e6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 83336ed:	00 
 83336ee:	89 54 24 10          	mov    %edx,0x10(%esp)
 83336f2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 83336f9:	00 
 83336fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 83336fe:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 8333705:	00 
 8333706:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8333709:	89 04 24             	mov    %eax,(%esp)
 833370c:	e8 1d 55 1d 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 8333711:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
 8333718:	8b 45 10             	mov    0x10(%ebp),%eax
 833371b:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333721:	8d 45 90             	lea    -0x70(%ebp),%eax
 8333724:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333728:	89 14 24             	mov    %edx,(%esp)
 833372b:	e8 be aa d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8333730:	8b 45 10             	mov    0x10(%ebp),%eax
 8333733:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 8333737:	98                   	cwtl
 8333738:	89 45 94             	mov    %eax,-0x6c(%ebp)
 833373b:	8b 45 10             	mov    0x10(%ebp),%eax
 833373e:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333744:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8333747:	89 44 24 04          	mov    %eax,0x4(%esp)
 833374b:	89 14 24             	mov    %edx,(%esp)
 833374e:	e8 9b aa d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8333753:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
 833375a:	8b 45 10             	mov    0x10(%ebp),%eax
 833375d:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333763:	8d 45 98             	lea    -0x68(%ebp),%eax
 8333766:	89 44 24 04          	mov    %eax,0x4(%esp)
 833376a:	89 14 24             	mov    %edx,(%esp)
 833376d:	e8 7c aa d5 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8333772:	8d 85 5f ff ff ff    	lea    -0xa1(%ebp),%eax
 8333778:	89 44 24 0c          	mov    %eax,0xc(%esp)
 833377c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 833377f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333783:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333786:	89 44 24 04          	mov    %eax,0x4(%esp)
 833378a:	8b 45 08             	mov    0x8(%ebp),%eax
 833378d:	89 04 24             	mov    %eax,(%esp)
 8333790:	e8 61 06 00 00       	call   8333df6 <_ZNK8WongWork15CCompoundAvatar14_generateIPGNoEPK5CUserlPc>
 8333795:	89 c3                	mov    %eax,%ebx
 8333797:	8b 45 10             	mov    0x10(%ebp),%eax
 833379a:	0f b7 80 d4 00 00 00 	movzwl 0xd4(%eax),%eax
 83337a1:	0f be f0             	movsbl %al,%esi
 83337a4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83337a7:	8b 55 c0             	mov    -0x40(%ebp),%edx
 83337aa:	8d 3c 02             	lea    (%edx,%eax,1),%edi
 83337ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 83337b0:	89 04 24             	mov    %eax,(%esp)
 83337b3:	e8 d6 6a da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 83337b8:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 83337bf:	00 
 83337c0:	c7 44 24 20 01 00 00 	movl   $0x1,0x20(%esp)
 83337c7:	00 
 83337c8:	c7 44 24 1c 06 00 00 	movl   $0x6,0x1c(%esp)
 83337cf:	00 
 83337d0:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 83337d4:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 83337db:	ff 
 83337dc:	89 74 24 10          	mov    %esi,0x10(%esp)
 83337e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83337e7:	00 
 83337e8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 83337ec:	8b 55 b8             	mov    -0x48(%ebp),%edx
 83337ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 83337f3:	89 04 24             	mov    %eax,(%esp)
 83337f6:	e8 a3 63 1d 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 83337fb:	89 c2                	mov    %eax,%edx
 83337fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8333800:	66 89 90 d8 00 00 00 	mov    %dx,0xd8(%eax)
 8333807:	8b 45 10             	mov    0x10(%ebp),%eax
 833380a:	0f b7 80 d8 00 00 00 	movzwl 0xd8(%eax),%eax
 8333811:	66 83 f8 ff          	cmp    $0xffff,%ax
 8333815:	75 4d                	jne    8333864 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x97c>
 8333817:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833381e:	00 
 833381f:	c7 44 24 08 61 03 00 	movl   $0x361,0x8(%esp)
 8333826:	00 
 8333827:	c7 44 24 04 40 c5 c2 	movl   $0x8c2c540,0x4(%esp)
 833382e:	08 
 833382f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8333832:	89 04 24             	mov    %eax,(%esp)
 8333835:	e8 de be 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833383a:	c7 44 24 0c 61 03 00 	movl   $0x361,0xc(%esp)
 8333841:	00 
 8333842:	c7 44 24 08 40 c5 c2 	movl   $0x8c2c540,0x8(%esp)
 8333849:	08 
 833384a:	c7 44 24 04 e3 b8 c2 	movl   $0x8c2b8e3,0x4(%esp)
 8333851:	08 
 8333852:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8333855:	89 04 24             	mov    %eax,(%esp)
 8333858:	e8 2b bf 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833385d:	b8 11 00 00 00       	mov    $0x11,%eax
 8333862:	eb 53                	jmp    83338b7 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable+0x9cf>
 8333864:	8b 45 10             	mov    0x10(%ebp),%eax
 8333867:	8b 58 11             	mov    0x11(%eax),%ebx
 833386a:	8b 45 0c             	mov    0xc(%ebp),%eax
 833386d:	89 04 24             	mov    %eax,(%esp)
 8333870:	e8 d9 83 d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8333875:	8d 95 5f ff ff ff    	lea    -0xa1(%ebp),%edx
 833387b:	89 54 24 08          	mov    %edx,0x8(%esp)
 833387f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333883:	89 04 24             	mov    %eax,(%esp)
 8333886:	e8 df 1a 11 00       	call   844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>
 833388b:	8b 45 10             	mov    0x10(%ebp),%eax
 833388e:	8b 58 51             	mov    0x51(%eax),%ebx
 8333891:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333894:	89 04 24             	mov    %eax,(%esp)
 8333897:	e8 b2 83 d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833389c:	8d 95 5f ff ff ff    	lea    -0xa1(%ebp),%edx
 83338a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 83338a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83338aa:	89 04 24             	mov    %eax,(%esp)
 83338ad:	e8 b8 1a 11 00       	call   844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>
 83338b2:	b8 00 00 00 00       	mov    $0x0,%eax
 83338b7:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 83338bd:	5b                   	pop    %ebx
 83338be:	5e                   	pop    %esi
 83338bf:	5f                   	pop    %edi
 83338c0:	5d                   	pop    %ebp
 83338c1:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::_ProcCompoundCore @ 0x8332ee8

/* WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo&,
   tagCompoundAvatarTable*) */

undefined4 __thiscall
WongWork::CCompoundAvatar::_ProcCompoundCore
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2,
          tagCompoundAvatarTable *param_3)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  CDataManager *pCVar6;
  undefined4 uVar7;
  int iVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  char local_a5 [24];
  undefined1 local_8d;
  ulong local_8c;
  ulong local_88 [4];
  int local_78 [3];
  int local_6c;
  cMyTrace local_68 [16];
  CInventory *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulong local_38;
  CEquipItem *local_34;
  CEquipItem *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_58 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_54 = tagCompoundAvatarTable::getCompoundAvatarInfo(param_3,*(int *)(param_2 + 4));
  local_50 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
  local_4c = 0;
  if ((param_2[0xd6] == (tagCompoundInfo)0x0) || (param_2[0xe8] == (tagCompoundInfo)0x4)) {
    if (param_2[0xe8] == (tagCompoundInfo)0x4) {
      iVar4 = get_rand_int(*(int *)(local_54 + 0x18 + (local_50 + 0x80) * 4));
      local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x240),iVar4);
    }
    else {
      local_4c = *(int *)(param_2 + 0xd0);
    }
  }
  else {
    if ((*(int *)(local_54 + 0xc + (local_50 + 8) * 4) == 0) ||
       (cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty(),
       cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    local_3c = 0;
    iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
    if ((iVar4 == 1) && (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), iVar4 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_38 = *(ulong *)(local_54 + 0xc + (local_50 + 0x58) * 4);
      local_8c = 10000;
      uVar5 = CMTRand::randInt(*(CMTRand **)(this + 0x84),&local_8c);
      if (uVar5 < 5000) {
        local_88[0] = local_38;
        iVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x84),local_88);
        local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x194),iVar4);
      }
      if (local_4c < 1) {
        local_3c = *(int *)(local_54 + 4 + local_50 * 4);
      }
      else {
        pCVar6 = (CDataManager *)G_CDataManager();
        local_34 = (CEquipItem *)CDataManager::find_item(pCVar6,local_4c);
        if ((local_34 == (CEquipItem *)0x0) ||
           (cVar2 = (**(code **)(*(int *)local_34 + 0x10))(local_34), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 1;
        }
        local_30 = local_34;
        if (local_34 == (CEquipItem *)0x0) {
          return 1;
        }
        iVar4 = CEquipItem::getAvatarOptionSize(local_34);
        uVar3 = get_rand_int(iVar4);
        *(undefined2 *)(param_2 + 0xd4) = uVar3;
        if (99 < *(ushort *)(param_2 + 0xd4)) {
          *(undefined2 *)(param_2 + 0xd4) = 0;
        }
      }
    }
    else {
      local_3c = *(int *)(local_54 + (local_50 + 0xb8) * 4);
    }
    if (local_4c < 1) {
      if (param_2[0xe8] == (tagCompoundInfo)0x1) {
        iVar4 = G_CDataManager();
        local_3c = local_3c + *(int *)(iVar4 + 0x4a54);
      }
      if (param_2[0xe8] == (tagCompoundInfo)0x3) {
        iVar4 = G_CDataManager();
        local_3c = local_3c - (*(int *)(iVar4 + 0x4a58) * local_3c) / 10000;
      }
      local_88[1] = 10000;
      iVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x84),local_88 + 1);
      if (iVar4 < local_3c) {
        iVar4 = get_rand_int(*(int *)(local_54 + 0xc + (local_50 + 8) * 4));
        local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x7c),iVar4);
      }
    }
  }
  if (local_4c == 0) {
    iVar4 = get_rand_int(*(int *)(local_54 + 4 + (local_50 + 0x14) * 4));
    local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0xf4),iVar4);
  }
  if (local_4c != 0) {
    pCVar6 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::find_item(pCVar6,local_4c);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_083332e8;
    }
  }
  bVar1 = true;
LAB_083332e8:
  if (bVar1) {
    uVar7 = 1;
  }
  else {
    cVar2 = CInventory::delete_item(local_58,2,(int)*(short *)(param_2 + 8),1,3,1);
    if (cVar2 == '\x01') {
      cVar2 = CInventory::delete_item(local_58,2,(int)*(short *)(param_2 + 0x48),1,3,1);
      if (cVar2 == '\x01') {
        local_8d = 0;
        if (param_2[0xe8] == (tagCompoundInfo)0x0) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2b8,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_2c = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2b8));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x1) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2c4,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_28 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2c4));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x3) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2d0,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_24 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2d0));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x4) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x20c,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_20 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2d0));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar4 = *(int *)(param_2 + 0x11);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
        local_44 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_48);
        iVar4 = *(int *)(param_2 + 0x51);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
        local_40 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_48);
        iVar4 = CInventory::GetAvatarItemMgrW(local_58);
        CAvatarItemMgr::UnRegistItem(iVar4);
        CInventory::SendAvatarEvent
                  (local_58,0x36,*(int *)(param_2 + 0x11),1,*(short *)(param_2 + 8) + 10,0);
        local_88[2] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),(int *)(local_88 + 2));
        local_88[3] = (ulong)*(short *)(param_2 + 8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),(int *)(local_88 + 3));
        local_78[0] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78);
        iVar4 = CInventory::GetAvatarItemMgrW(local_58);
        CAvatarItemMgr::UnRegistItem(iVar4);
        CInventory::SendAvatarEvent
                  (local_58,0x36,*(int *)(param_2 + 0x51),1,*(short *)(param_2 + 0x48) + 10,0);
        local_78[1] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78 + 1);
        local_78[2] = (int)*(short *)(param_2 + 0x48);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78 + 2);
        local_6c = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),&local_6c);
        uVar7 = _generateIPGNo(this,param_1,local_48,local_a5);
        uVar3 = *(undefined2 *)(param_2 + 0xd4);
        iVar4 = local_44 + local_40;
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar3 = CInventory::AddAvatarItem
                          (pCVar9,local_4c,iVar4,0,(int)(char)uVar3,0xffffffff,uVar7,6,1,0);
        *(undefined2 *)(param_2 + 0xd8) = uVar3;
        if (*(short *)(param_2 + 0xd8) == -1) {
          cMyTrace::cMyTrace(local_68,
                             "ENUM_ERROR WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::stCompoundAvatarInfo&, stCompoundAvatarTable*)"
                             ,0x361,5);
          cMyTrace::operator()
                    (local_68,"[%s][%d] AddAvatarItem Fail",
                     "ENUM_ERROR WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::stCompoundAvatarInfo&, stCompoundAvatarTable*)"
                     ,0x361);
          uVar7 = 0x11;
        }
        else {
          iVar4 = *(int *)(param_2 + 0x11);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,local_a5);
          iVar4 = *(int *)(param_2 + 0x51);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,local_a5);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0x16;
      }
    }
    else {
      uVar7 = 0x16;
    }
  }
  return uVar7;
}

```

---

## _SendDisjointAvatarStatistic

```asm
// === 08333ecc WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic  [0x08333ecc-0x8333fd9] ===
 8333ecc:	55                   	push   %ebp
 8333ecd:	89 e5                	mov    %esp,%ebp
 8333ecf:	53                   	push   %ebx
 8333ed0:	83 ec 54             	sub    $0x54,%esp
 8333ed3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8333ed6:	89 04 24             	mov    %eax,(%esp)
 8333ed9:	e8 d0 cc dd ff       	call   8110bae <_ZN32Packet_Avater_Disjoint_StatisticC1Ev>
 8333ede:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333ee1:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8333ee7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8333eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333eed:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8333ef3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8333ef6:	c7 45 ce 02 00 00 00 	movl   $0x2,-0x32(%ebp)
 8333efd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8333f04:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f07:	89 04 24             	mov    %eax,(%esp)
 8333f0a:	e8 c7 d3 db ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8333f0f:	83 f8 02             	cmp    $0x2,%eax
 8333f12:	0f 94 c0             	sete   %al
 8333f15:	84 c0                	test   %al,%al
 8333f17:	74 09                	je     8333f22 <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE+0x56>
 8333f19:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 8333f20:	eb 11                	jmp    8333f33 <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE+0x67>
 8333f22:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f25:	89 04 24             	mov    %eax,(%esp)
 8333f28:	e8 27 cd dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8333f2d:	83 e8 01             	sub    $0x1,%eax
 8333f30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8333f33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8333f36:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 8333f39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f3c:	8b 00                	mov    (%eax),%eax
 8333f3e:	83 c0 0c             	add    $0xc,%eax
 8333f41:	8b 10                	mov    (%eax),%edx
 8333f43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f46:	89 04 24             	mov    %eax,(%esp)
 8333f49:	ff d2                	call   *%edx
 8333f4b:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 8333f4e:	c6 45 da 00          	movb   $0x0,-0x26(%ebp)
 8333f52:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8333f59:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8333f5c:	89 04 24             	mov    %eax,(%esp)
 8333f5f:	e8 72 d3 db ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8333f64:	83 f8 02             	cmp    $0x2,%eax
 8333f67:	0f 94 c0             	sete   %al
 8333f6a:	84 c0                	test   %al,%al
 8333f6c:	74 09                	je     8333f77 <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE+0xab>
 8333f6e:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 8333f75:	eb 11                	jmp    8333f88 <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE+0xbc>
 8333f77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8333f7a:	89 04 24             	mov    %eax,(%esp)
 8333f7d:	e8 d2 cc dd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8333f82:	83 e8 01             	sub    $0x1,%eax
 8333f85:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8333f88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8333f8b:	89 45 df             	mov    %eax,-0x21(%ebp)
 8333f8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f91:	8b 00                	mov    (%eax),%eax
 8333f93:	83 c0 0c             	add    $0xc,%eax
 8333f96:	8b 10                	mov    (%eax),%edx
 8333f98:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8333f9b:	89 04 24             	mov    %eax,(%esp)
 8333f9e:	ff d2                	call   *%edx
 8333fa0:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 8333fa3:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8333fa7:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 8333faa:	a1 30 be 40 09       	mov    0x940be30,%eax
 8333faf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8333fb6:	00 
 8333fb7:	89 04 24             	mov    %eax,(%esp)
 8333fba:	e8 39 dd dd ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8333fbf:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8333fc6:	00 
 8333fc7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333fcb:	89 04 24             	mov    %eax,(%esp)
 8333fce:	e8 71 e0 13 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8333fd3:	83 c4 54             	add    $0x54,%esp
 8333fd6:	5b                   	pop    %ebx
 8333fd7:	5d                   	pop    %ebp
 8333fd8:	c3                   	ret
 8333fd9:	90                   	nop

```

```c
// WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic @ 0x8333ecc

/* WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic(WongWork::CCompoundAvatar::tagCompoundInfo&)
    */

void __thiscall
WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic
          (CCompoundAvatar *this,tagCompoundInfo *param_1)

{
  int iVar1;
  CStatisticServerProxy *this_00;
  Packet_Avater_Disjoint_Statistic local_40 [10];
  undefined4 local_36;
  int local_32;
  undefined4 local_2e;
  undefined1 local_2a;
  int local_25;
  undefined4 local_21;
  undefined1 local_1d;
  CItem *local_18;
  CItem *local_14;
  int local_10;
  
  Packet_Avater_Disjoint_Statistic::Packet_Avater_Disjoint_Statistic(local_40);
  local_18 = *(CItem **)(param_1 + 0x88);
  local_14 = *(CItem **)(param_1 + 0x8c);
  local_36 = 2;
  local_10 = 0;
  iVar1 = CItem::get_rarity(local_18);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(local_18);
    local_10 = local_10 + -1;
  }
  local_32 = local_10;
  local_2e = (**(code **)(*(int *)local_18 + 0xc))(local_18);
  local_2a = 0;
  local_10 = 0;
  iVar1 = CItem::get_rarity(local_14);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(local_14);
    local_10 = local_10 + -1;
  }
  local_25 = local_10;
  local_21 = (**(code **)(*(int *)local_18 + 0xc))(local_18);
  local_1d = 0;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_40,0x28);
  return;
}

```

---

## _SendError

```asm
// === 08333a76 WongWork::CCompoundAvatar::_SendError  [0x08333a76-0x8333a9b] ===
 8333a76:	55                   	push   %ebp
 8333a77:	89 e5                	mov    %esp,%ebp
 8333a79:	83 ec 18             	sub    $0x18,%esp
 8333a7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8333a7f:	0f b6 c0             	movzbl %al,%eax
 8333a82:	89 44 24 08          	mov    %eax,0x8(%esp)
 8333a86:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 8333a8d:	00 
 8333a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333a91:	89 04 24             	mov    %eax,(%esp)
 8333a94:	e8 a9 84 34 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8333a99:	c9                   	leave
 8333a9a:	c3                   	ret
 8333a9b:	90                   	nop

```

```c
// WongWork::CCompoundAvatar::_SendError @ 0x8333a76

/* WongWork::CCompoundAvatar::_SendError(CUser*, ENUM_ERROR) */

void __thiscall
WongWork::CCompoundAvatar::_SendError(undefined4 this,CUser *param_1,undefined1 param_3)

{
  CUser::SendCmdErrorPacket(param_1,0x66,param_3);
  return;
}

```

---

## _SendResult

```asm
// === 08333a9c WongWork::CCompoundAvatar::_SendResult  [0x08333a9c-0x8333df5] ===
 8333a9c:	55                   	push   %ebp
 8333a9d:	89 e5                	mov    %esp,%ebp
 8333a9f:	56                   	push   %esi
 8333aa0:	53                   	push   %ebx
 8333aa1:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8333aa7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333aaa:	89 04 24             	mov    %eax,(%esp)
 8333aad:	e8 9a a2 25 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8333ab2:	c7 44 24 08 66 00 00 	movl   $0x66,0x8(%esp)
 8333ab9:	00 
 8333aba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8333ac1:	00 
 8333ac2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333ac5:	89 04 24             	mov    %eax,(%esp)
 8333ac8:	e8 2f 7e d9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8333acd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8333ad4:	00 
 8333ad5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333ad8:	89 04 24             	mov    %eax,(%esp)
 8333adb:	e8 40 7e d9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8333ae0:	8b 45 10             	mov    0x10(%ebp),%eax
 8333ae3:	05 dc 00 00 00       	add    $0xdc,%eax
 8333ae8:	89 04 24             	mov    %eax,(%esp)
 8333aeb:	e8 d0 a6 d5 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8333af0:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8333af3:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 8333af8:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8333afb:	f7 e2                	mul    %edx
 8333afd:	89 d0                	mov    %edx,%eax
 8333aff:	d1 e8                	shr    $1,%eax
 8333b01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333b05:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333b08:	89 04 24             	mov    %eax,(%esp)
 8333b0b:	e8 10 7e d9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8333b10:	8b 45 10             	mov    0x10(%ebp),%eax
 8333b13:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333b19:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8333b1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333b20:	89 04 24             	mov    %eax,(%esp)
 8333b23:	e8 26 98 d9 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8333b28:	83 ec 04             	sub    $0x4,%esp
 8333b2b:	8b 45 10             	mov    0x10(%ebp),%eax
 8333b2e:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8333b34:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8333b37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333b3b:	89 04 24             	mov    %eax,(%esp)
 8333b3e:	e8 37 98 d9 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8333b43:	83 ec 04             	sub    $0x4,%esp
 8333b46:	e9 ab 00 00 00       	jmp    8333bf6 <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE+0x15a>
 8333b4b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8333b4e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8333b55:	00 
 8333b56:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8333b59:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333b5d:	89 04 24             	mov    %eax,(%esp)
 8333b60:	e8 4d fd e5 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8333b65:	83 ec 04             	sub    $0x4,%esp
 8333b68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8333b6b:	89 04 24             	mov    %eax,(%esp)
 8333b6e:	e8 a9 5e dc ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8333b73:	8b 00                	mov    (%eax),%eax
 8333b75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333b79:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333b7c:	89 04 24             	mov    %eax,(%esp)
 8333b7f:	e8 9c 7d d9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8333b84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8333b87:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8333b8e:	00 
 8333b8f:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8333b92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333b96:	89 04 24             	mov    %eax,(%esp)
 8333b99:	e8 14 fd e5 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8333b9e:	83 ec 04             	sub    $0x4,%esp
 8333ba1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8333ba4:	89 04 24             	mov    %eax,(%esp)
 8333ba7:	e8 70 5e dc ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8333bac:	8b 00                	mov    (%eax),%eax
 8333bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333bb2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333bb5:	89 04 24             	mov    %eax,(%esp)
 8333bb8:	e8 e7 62 da ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8333bbd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8333bc0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8333bc7:	00 
 8333bc8:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8333bcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8333bcf:	89 04 24             	mov    %eax,(%esp)
 8333bd2:	e8 db fc e5 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8333bd7:	83 ec 04             	sub    $0x4,%esp
 8333bda:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8333bdd:	89 04 24             	mov    %eax,(%esp)
 8333be0:	e8 37 5e dc ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8333be5:	8b 00                	mov    (%eax),%eax
 8333be7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333beb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333bee:	89 04 24             	mov    %eax,(%esp)
 8333bf1:	e8 46 7d d9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8333bf6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8333bf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333bfd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8333c00:	89 04 24             	mov    %eax,(%esp)
 8333c03:	e8 1e 5e dc ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8333c08:	84 c0                	test   %al,%al
 8333c0a:	0f 85 3b ff ff ff    	jne    8333b4b <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE+0xaf>
 8333c10:	8b 45 10             	mov    0x10(%ebp),%eax
 8333c13:	0f b7 80 d8 00 00 00 	movzwl 0xd8(%eax),%eax
 8333c1a:	0f bf d8             	movswl %ax,%ebx
 8333c1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333c20:	89 04 24             	mov    %eax,(%esp)
 8333c23:	e8 56 66 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8333c28:	8d 55 8f             	lea    -0x71(%ebp),%edx
 8333c2b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8333c2f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8333c36:	00 
 8333c37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333c3b:	89 14 24             	mov    %edx,(%esp)
 8333c3e:	e8 d5 7c 1c 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8333c43:	83 ec 04             	sub    $0x4,%esp
 8333c46:	8b 45 10             	mov    0x10(%ebp),%eax
 8333c49:	0f b7 80 d8 00 00 00 	movzwl 0xd8(%eax),%eax
 8333c50:	98                   	cwtl
 8333c51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333c55:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333c58:	89 04 24             	mov    %eax,(%esp)
 8333c5b:	e8 44 62 da ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8333c60:	8b 45 91             	mov    -0x6f(%ebp),%eax
 8333c63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333c67:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333c6a:	89 04 24             	mov    %eax,(%esp)
 8333c6d:	e8 ca 7c d9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8333c72:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8333c79:	e8 20 80 d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8333c7e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8333c81:	8b 5d 96             	mov    -0x6a(%ebp),%ebx
 8333c84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333c87:	89 04 24             	mov    %eax,(%esp)
 8333c8a:	e8 ef 65 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8333c8f:	89 04 24             	mov    %eax,(%esp)
 8333c92:	e8 df 98 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8333c97:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8333c9a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8333c9e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333ca2:	89 04 24             	mov    %eax,(%esp)
 8333ca5:	e8 a6 5b fc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 8333caa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333cae:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333cb1:	89 04 24             	mov    %eax,(%esp)
 8333cb4:	e8 83 7c d9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8333cb9:	0f b7 45 9a          	movzwl -0x66(%ebp),%eax
 8333cbd:	0f b7 c0             	movzwl %ax,%eax
 8333cc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333cc4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333cc7:	89 04 24             	mov    %eax,(%esp)
 8333cca:	e8 d5 61 da ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8333ccf:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8333cd6:	00 
 8333cd7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333cda:	89 04 24             	mov    %eax,(%esp)
 8333cdd:	e8 5a 7c d9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8333ce2:	8b 5d 96             	mov    -0x6a(%ebp),%ebx
 8333ce5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333ce8:	89 04 24             	mov    %eax,(%esp)
 8333ceb:	e8 8e 65 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8333cf0:	89 04 24             	mov    %eax,(%esp)
 8333cf3:	e8 7e 98 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8333cf8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333cfc:	89 04 24             	mov    %eax,(%esp)
 8333cff:	e8 f4 5b fc ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 8333d04:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8333d0b:	00 
 8333d0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333d10:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333d13:	89 04 24             	mov    %eax,(%esp)
 8333d16:	e8 4f cc e1 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8333d1b:	8b 5d 96             	mov    -0x6a(%ebp),%ebx
 8333d1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333d21:	89 04 24             	mov    %eax,(%esp)
 8333d24:	e8 55 65 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8333d29:	89 04 24             	mov    %eax,(%esp)
 8333d2c:	e8 45 98 da ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8333d31:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8333d35:	89 04 24             	mov    %eax,(%esp)
 8333d38:	e8 f1 5b fc ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 8333d3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8333d40:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8333d47:	00 
 8333d48:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333d4b:	89 04 24             	mov    %eax,(%esp)
 8333d4e:	e8 e9 7b d9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8333d53:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8333d57:	74 1c                	je     8333d75 <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE+0x2d9>
 8333d59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8333d5c:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8333d63:	00 
 8333d64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333d68:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333d6b:	89 04 24             	mov    %eax,(%esp)
 8333d6e:	e8 f7 cb e1 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8333d73:	eb 25                	jmp    8333d9a <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE+0x2fe>
 8333d75:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8333d78:	89 04 24             	mov    %eax,(%esp)
 8333d7b:	e8 9e 04 00 00       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 8333d80:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8333d83:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8333d8a:	00 
 8333d8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333d8f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333d92:	89 04 24             	mov    %eax,(%esp)
 8333d95:	e8 d0 cb e1 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8333d9a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8333da1:	00 
 8333da2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333da5:	89 04 24             	mov    %eax,(%esp)
 8333da8:	e8 ab 7b d9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8333dad:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333db0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333db4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333db7:	89 04 24             	mov    %eax,(%esp)
 8333dba:	e8 fb 47 31 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8333dbf:	bb 01 00 00 00       	mov    $0x1,%ebx
 8333dc4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333dc7:	89 04 24             	mov    %eax,(%esp)
 8333dca:	e8 b1 a0 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8333dcf:	89 d8                	mov    %ebx,%eax
 8333dd1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8333dd4:	83 c4 00             	add    $0x0,%esp
 8333dd7:	5b                   	pop    %ebx
 8333dd8:	5e                   	pop    %esi
 8333dd9:	5d                   	pop    %ebp
 8333dda:	c3                   	ret
 8333ddb:	89 d3                	mov    %edx,%ebx
 8333ddd:	89 c6                	mov    %eax,%esi
 8333ddf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8333de2:	89 04 24             	mov    %eax,(%esp)
 8333de5:	e8 96 a0 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8333dea:	89 f0                	mov    %esi,%eax
 8333dec:	89 da                	mov    %ebx,%edx
 8333dee:	89 04 24             	mov    %eax,(%esp)
 8333df1:	e8 5a f9 7a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WongWork::CCompoundAvatar::_SendResult @ 0x8333a9c

/* WongWork::CCompoundAvatar::_SendResult(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo const&)
    */

undefined4 __thiscall
WongWork::CCompoundAvatar::_SendResult
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  CInventory *pCVar5;
  CAvatarItemMgr *pCVar6;
  char *pcVar7;
  undefined1 local_75 [2];
  int local_73;
  int local_6e;
  ushort local_6a;
  stAvatarExpansionInfo_t local_38 [4];
  __normal_iterator local_34 [4];
  undefined1 local_30 [4];
  PacketGuard local_2c [12];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  char *local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08333ac8 to 08333dbe has its CatchHandler @ 08333ddb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x66);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
  uVar2 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(param_2 + 0xdc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 / 3);
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_30,local_34);
    if (!bVar1) break;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*piVar3);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_1c,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_1c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar3);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar3);
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_75,iVar4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(param_2 + 0xd8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_73);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar4 = local_6e;
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  iVar4 = CAvatarItemMgr::GetRemainDate(pCVar6,iVar4,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_6a);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,0x1e);
  iVar4 = local_6e;
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  pcVar7 = (char *)CAvatarItemMgr::getJewelSocketData(pCVar6,iVar4);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,pcVar7,0x1e);
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  local_10 = (char *)CAvatarItemMgr::GetExpansionInfo(pCVar6,local_6e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,4);
  if (local_10 == (char *)0x0) {
    stAvatarExpansionInfo_t::init(local_38);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,(char *)local_38,4);
  }
  else {
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,local_10,4);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  CUser::Send(param_1,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return 1;
}

```

---

## _generateIPGNo

```asm
// === 08333df6 WongWork::CCompoundAvatar::_generateIPGNo  [0x08333df6-0x8333ea5] ===
 8333df6:	55                   	push   %ebp
 8333df7:	89 e5                	mov    %esp,%ebp
 8333df9:	57                   	push   %edi
 8333dfa:	56                   	push   %esi
 8333dfb:	53                   	push   %ebx
 8333dfc:	83 ec 6c             	sub    $0x6c,%esp
 8333dff:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8333e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8333e06:	8d 45 10             	lea    0x10(%ebp),%eax
 8333e09:	89 04 24             	mov    %eax,(%esp)
 8333e0c:	e8 4f a5 d4 ff       	call   807e360 <localtime_r@plt>
 8333e11:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8333e14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8333e17:	89 04 24             	mov    %eax,(%esp)
 8333e1a:	e8 2f 7e d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8333e1f:	89 c6                	mov    %eax,%esi
 8333e21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8333e24:	8b 78 0c             	mov    0xc(%eax),%edi
 8333e27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8333e2a:	8b 40 10             	mov    0x10(%eax),%eax
 8333e2d:	83 c0 01             	add    $0x1,%eax
 8333e30:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8333e33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8333e36:	8b 40 14             	mov    0x14(%eax),%eax
 8333e39:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 8333e3f:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8333e44:	89 c8                	mov    %ecx,%eax
 8333e46:	f7 ea                	imul   %edx
 8333e48:	c1 fa 07             	sar    $0x7,%edx
 8333e4b:	89 c8                	mov    %ecx,%eax
 8333e4d:	c1 f8 1f             	sar    $0x1f,%eax
 8333e50:	89 d3                	mov    %edx,%ebx
 8333e52:	29 c3                	sub    %eax,%ebx
 8333e54:	69 c3 d0 07 00 00    	imul   $0x7d0,%ebx,%eax
 8333e5a:	89 cb                	mov    %ecx,%ebx
 8333e5c:	29 c3                	sub    %eax,%ebx
 8333e5e:	e8 1e 83 d9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8333e63:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 8333e69:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8333e6d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8333e71:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8333e74:	89 54 24 14          	mov    %edx,0x14(%esp)
 8333e78:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8333e7c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8333e80:	c7 44 24 08 ff b8 c2 	movl   $0x8c2b8ff,0x8(%esp)
 8333e87:	08 
 8333e88:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8333e8f:	00 
 8333e90:	8b 45 14             	mov    0x14(%ebp),%eax
 8333e93:	89 04 24             	mov    %eax,(%esp)
 8333e96:	e8 81 89 25 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8333e9b:	8b 45 14             	mov    0x14(%ebp),%eax
 8333e9e:	83 c4 6c             	add    $0x6c,%esp
 8333ea1:	5b                   	pop    %ebx
 8333ea2:	5e                   	pop    %esi
 8333ea3:	5f                   	pop    %edi
 8333ea4:	5d                   	pop    %ebp
 8333ea5:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::_generateIPGNo @ 0x8333df6

/* WongWork::CCompoundAvatar::_generateIPGNo(CUser const*, long, char*) const */

char * __thiscall
WongWork::CCompoundAvatar::_generateIPGNo
          (CCompoundAvatar *this,CUser *param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  tm local_4c;
  tm *local_20;
  
  local_20 = localtime_r(&param_2,&local_4c);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  iVar1 = local_20->tm_mday;
  iVar2 = local_20->tm_mon;
  iVar3 = local_20->tm_year;
  iVar5 = G_CEnvironment();
  OS_API::snprintf(param_3,0x14,"C%02d%02d%02d%02d%010d",*(undefined4 *)(iVar5 + 0x1b0),
                   (iVar3 + 0x76c) % 2000,iVar2 + 1,iVar1,uVar4);
  return param_3;
}

```

---

## ~CCompoundAvatar

```asm
// === 08331ea2 WongWork::CCompoundAvatar::~CCompoundAvatar  [0x08331ea2-0x8331efd] ===
 8331ea2:	55                   	push   %ebp
 8331ea3:	89 e5                	mov    %esp,%ebp
 8331ea5:	53                   	push   %ebx
 8331ea6:	83 ec 14             	sub    $0x14,%esp
 8331ea9:	8b 45 08             	mov    0x8(%ebp),%eax
 8331eac:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8331eb2:	85 c0                	test   %eax,%eax
 8331eb4:	74 11                	je     8331ec7 <_ZN8WongWork15CCompoundAvatarD1Ev+0x25>
 8331eb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8331eb9:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8331ebf:	89 04 24             	mov    %eax,(%esp)
 8331ec2:	e8 29 26 3f 00       	call   87244f0 <_ZdlPv>
 8331ec7:	8b 45 08             	mov    0x8(%ebp),%eax
 8331eca:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 8331ed1:	00 00 00 
 8331ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 8331ed7:	85 c0                	test   %eax,%eax
 8331ed9:	74 1d                	je     8331ef8 <_ZN8WongWork15CCompoundAvatarD1Ev+0x56>
 8331edb:	8b 45 08             	mov    0x8(%ebp),%eax
 8331ede:	8d 98 84 00 00 00    	lea    0x84(%eax),%ebx
 8331ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8331ee7:	39 c3                	cmp    %eax,%ebx
 8331ee9:	74 0d                	je     8331ef8 <_ZN8WongWork15CCompoundAvatarD1Ev+0x56>
 8331eeb:	83 eb 0c             	sub    $0xc,%ebx
 8331eee:	89 1c 24             	mov    %ebx,(%esp)
 8331ef1:	e8 3a 24 00 00       	call   8334330 <_ZN22tagCompoundAvatarTableD1Ev>
 8331ef6:	eb ec                	jmp    8331ee4 <_ZN8WongWork15CCompoundAvatarD1Ev+0x42>
 8331ef8:	83 c4 14             	add    $0x14,%esp
 8331efb:	5b                   	pop    %ebx
 8331efc:	5d                   	pop    %ebp
 8331efd:	c3                   	ret

```

```c
// WongWork::CCompoundAvatar::~CCompoundAvatar @ 0x8331ea2

/* WongWork::CCompoundAvatar::~CCompoundAvatar() */

void __thiscall WongWork::CCompoundAvatar::~CCompoundAvatar(CCompoundAvatar *this)

{
  tagCompoundAvatarTable *this_00;
  
  if (*(int *)(this + 0x84) != 0) {
    operator_delete(*(void **)(this + 0x84));
  }
  *(undefined4 *)(this + 0x84) = 0;
  if (this != (CCompoundAvatar *)0x0) {
    this_00 = (tagCompoundAvatarTable *)(this + 0x84);
    while (this_00 != (tagCompoundAvatarTable *)this) {
      this_00 = this_00 + -0xc;
      tagCompoundAvatarTable::~tagCompoundAvatarTable(this_00);
    }
  }
  return;
}

```

