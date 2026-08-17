# CLuckPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## AddUser

```asm
// === 08550932 CLuckPoint::AddUser  [0x08550932-0x8550953] ===
 8550932:	55                   	push   %ebp
 8550933:	89 e5                	mov    %esp,%ebp
 8550935:	83 ec 18             	sub    $0x18,%esp
 8550938:	8b 45 0c             	mov    0xc(%ebp),%eax
 855093b:	85 c0                	test   %eax,%eax
 855093d:	74 12                	je     8550951 <_ZN10CLuckPoint7AddUserEP5CUser+0x1f>
 855093f:	8b 45 08             	mov    0x8(%ebp),%eax
 8550942:	8d 55 0c             	lea    0xc(%ebp),%edx
 8550945:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550949:	89 04 24             	mov    %eax,(%esp)
 855094c:	e8 37 07 00 00       	call   8551088 <_ZNSt6vectorIP5CUserSaIS1_EE9push_backERKS1_>
 8550951:	c9                   	leave
 8550952:	c3                   	ret
 8550953:	90                   	nop

```

```c
// CLuckPoint::AddUser @ 0x8550932

/* CLuckPoint::AddUser(CUser*) */

void __thiscall CLuckPoint::AddUser(CLuckPoint *this,CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    std::vector<CUser*,std::allocator<CUser*>>::push_back
              ((vector<CUser*,std::allocator<CUser*>> *)this,&param_1);
  }
  return;
}

```

---

## CLuckPoint

```asm
// === 08550884 CLuckPoint::CLuckPoint  [0x08550884-0x85508eb] ===
 8550884:	55                   	push   %ebp
 8550885:	89 e5                	mov    %esp,%ebp
 8550887:	56                   	push   %esi
 8550888:	53                   	push   %ebx
 8550889:	83 ec 10             	sub    $0x10,%esp
 855088c:	8b 45 08             	mov    0x8(%ebp),%eax
 855088f:	89 04 24             	mov    %eax,(%esp)
 8550892:	e8 87 12 da ff       	call   82f1b1e <_ZNSt6vectorIP5CUserSaIS1_EEC1Ev>
 8550897:	8b 45 08             	mov    0x8(%ebp),%eax
 855089a:	83 c0 0c             	add    $0xc,%eax
 855089d:	89 04 24             	mov    %eax,(%esp)
 85508a0:	e8 bf 63 b7 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 85508a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85508a8:	89 04 24             	mov    %eax,(%esp)
 85508ab:	e8 bc 07 00 00       	call   855106c <_ZNSt6vectorIP5CUserSaIS1_EE5clearEv>
 85508b0:	eb 33                	jmp    85508e5 <_ZN10CLuckPointC1Ev+0x61>
 85508b2:	89 d3                	mov    %edx,%ebx
 85508b4:	89 c6                	mov    %eax,%esi
 85508b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85508b9:	83 c0 0c             	add    $0xc,%eax
 85508bc:	89 04 24             	mov    %eax,(%esp)
 85508bf:	e8 02 62 b7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 85508c4:	89 f0                	mov    %esi,%eax
 85508c6:	89 da                	mov    %ebx,%edx
 85508c8:	eb 00                	jmp    85508ca <_ZN10CLuckPointC1Ev+0x46>
 85508ca:	89 d3                	mov    %edx,%ebx
 85508cc:	89 c6                	mov    %eax,%esi
 85508ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85508d1:	89 04 24             	mov    %eax,(%esp)
 85508d4:	e8 59 12 da ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 85508d9:	89 f0                	mov    %esi,%eax
 85508db:	89 da                	mov    %ebx,%edx
 85508dd:	89 04 24             	mov    %eax,(%esp)
 85508e0:	e8 6b 2e 59 00       	call   8ae3750 <_Unwind_Resume>
 85508e5:	83 c4 10             	add    $0x10,%esp
 85508e8:	5b                   	pop    %ebx
 85508e9:	5e                   	pop    %esi
 85508ea:	5d                   	pop    %ebp
 85508eb:	c3                   	ret

```

```c
// CLuckPoint::CLuckPoint @ 0x8550884

/* CLuckPoint::CLuckPoint() */

void __thiscall CLuckPoint::CLuckPoint(CLuckPoint *this)

{
  std::vector<CUser*,std::allocator<CUser*>>::vector((vector<CUser*,std::allocator<CUser*>> *)this);
                    /* try { // try from 085508a0 to 085508a4 has its CatchHandler @ 085508ca */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xc));
                    /* try { // try from 085508ab to 085508af has its CatchHandler @ 085508b2 */
  std::vector<CUser*,std::allocator<CUser*>>::clear((vector<CUser*,std::allocator<CUser*>> *)this);
  return;
}

```

---

## GetItemRarity

```asm
// === 08550be4 CLuckPoint::GetItemRarity  [0x08550be4-0x8550e4f] ===
 8550be4:	55                   	push   %ebp
 8550be5:	89 e5                	mov    %esp,%ebp
 8550be7:	53                   	push   %ebx
 8550be8:	83 ec 74             	sub    $0x74,%esp
 8550beb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8550bee:	b9 00 00 00 00       	mov    $0x0,%ecx
 8550bf3:	b8 18 00 00 00       	mov    $0x18,%eax
 8550bf8:	89 c3                	mov    %eax,%ebx
 8550bfa:	83 e3 fc             	and    $0xfffffffc,%ebx
 8550bfd:	b8 00 00 00 00       	mov    $0x0,%eax
 8550c02:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8550c05:	83 c0 04             	add    $0x4,%eax
 8550c08:	39 d8                	cmp    %ebx,%eax
 8550c0a:	72 f6                	jb     8550c02 <_ZN10CLuckPoint13GetItemRarityEPiii+0x1e>
 8550c0c:	01 c2                	add    %eax,%edx
 8550c0e:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 8550c12:	0f 85 ee 01 00 00    	jne    8550e06 <_ZN10CLuckPoint13GetItemRarityEPiii+0x222>
 8550c18:	8b 45 08             	mov    0x8(%ebp),%eax
 8550c1b:	89 04 24             	mov    %eax,(%esp)
 8550c1e:	e8 d9 04 00 00       	call   85510fc <_ZNKSt6vectorIP5CUserSaIS1_EE5emptyEv>
 8550c23:	83 f0 01             	xor    $0x1,%eax
 8550c26:	84 c0                	test   %al,%al
 8550c28:	0f 84 d8 01 00 00    	je     8550e06 <_ZN10CLuckPoint13GetItemRarityEPiii+0x222>
 8550c2e:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8550c35:	8b 45 08             	mov    0x8(%ebp),%eax
 8550c38:	89 04 24             	mov    %eax,(%esp)
 8550c3b:	e8 9a fd ff ff       	call   85509da <_ZN10CLuckPoint12GetLuckPointEv>
 8550c40:	89 c3                	mov    %eax,%ebx
 8550c42:	e8 54 b5 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8550c47:	8d 50 68             	lea    0x68(%eax),%edx
 8550c4a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8550c4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8550c51:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8550c55:	89 14 24             	mov    %edx,(%esp)
 8550c58:	e8 29 b8 53 00       	call   8a8c486 <_ZN21ServerParameterScript12getLuckPointEiRi>
 8550c5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550c60:	83 c0 08             	add    $0x8,%eax
 8550c63:	8b 10                	mov    (%eax),%edx
 8550c65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550c68:	83 c0 04             	add    $0x4,%eax
 8550c6b:	8b 00                	mov    (%eax),%eax
 8550c6d:	89 d1                	mov    %edx,%ecx
 8550c6f:	29 c1                	sub    %eax,%ecx
 8550c71:	89 c8                	mov    %ecx,%eax
 8550c73:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8550c76:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8550c79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8550c7d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8550c80:	89 04 24             	mov    %eax,(%esp)
 8550c83:	e8 41 03 00 00       	call   8550fc9 <_Z24GetTenThousandPercentageii>
 8550c88:	f7 d8                	neg    %eax
 8550c8a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8550c8d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8550c94:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8550c9b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8550ca2:	eb 64                	jmp    8550d08 <_ZN10CLuckPoint13GetItemRarityEPiii+0x124>
 8550ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 8550ca7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8550caa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550cae:	89 04 24             	mov    %eax,(%esp)
 8550cb1:	e8 20 1e da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550cb6:	8b 00                	mov    (%eax),%eax
 8550cb8:	85 c0                	test   %eax,%eax
 8550cba:	0f 95 c0             	setne  %al
 8550cbd:	84 c0                	test   %al,%al
 8550cbf:	74 43                	je     8550d04 <_ZN10CLuckPoint13GetItemRarityEPiii+0x120>
 8550cc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8550cc4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8550cc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550ccb:	89 04 24             	mov    %eax,(%esp)
 8550cce:	e8 03 1e da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550cd3:	8b 00                	mov    (%eax),%eax
 8550cd5:	89 04 24             	mov    %eax,(%esp)
 8550cd8:	e8 6f 44 10 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8550cdd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8550ce0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8550ce4:	74 39                	je     8550d1f <_ZN10CLuckPoint13GetItemRarityEPiii+0x13b>
 8550ce6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8550ce9:	89 04 24             	mov    %eax,(%esp)
 8550cec:	e8 0b 03 00 00       	call   8550ffc <_ZNK6CParty38Get_party_overlapped_drop_ratio_uniqueEv>
 8550cf1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8550cf4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8550cf7:	89 04 24             	mov    %eax,(%esp)
 8550cfa:	e8 ef 02 00 00       	call   8550fee <_ZNK6CParty36Get_party_overlapped_drop_ratio_rareEv>
 8550cff:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8550d02:	eb 1c                	jmp    8550d20 <_ZN10CLuckPoint13GetItemRarityEPiii+0x13c>
 8550d04:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8550d08:	8b 45 08             	mov    0x8(%ebp),%eax
 8550d0b:	89 04 24             	mov    %eax,(%esp)
 8550d0e:	e8 7d 0e da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550d13:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8550d16:	0f 97 c0             	seta   %al
 8550d19:	84 c0                	test   %al,%al
 8550d1b:	75 87                	jne    8550ca4 <_ZN10CLuckPoint13GetItemRarityEPiii+0xc0>
 8550d1d:	eb 01                	jmp    8550d20 <_ZN10CLuckPoint13GetItemRarityEPiii+0x13c>
 8550d1f:	90                   	nop
 8550d20:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8550d24:	74 64                	je     8550d8a <_ZN10CLuckPoint13GetItemRarityEPiii+0x1a6>
 8550d26:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8550d29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550d2c:	83 c0 0c             	add    $0xc,%eax
 8550d2f:	8b 08                	mov    (%eax),%ecx
 8550d31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550d34:	83 c0 08             	add    $0x8,%eax
 8550d37:	8b 00                	mov    (%eax),%eax
 8550d39:	89 cb                	mov    %ecx,%ebx
 8550d3b:	29 c3                	sub    %eax,%ebx
 8550d3d:	89 d8                	mov    %ebx,%eax
 8550d3f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8550d42:	db 45 b4             	fildl  -0x4c(%ebp)
 8550d45:	db 45 e4             	fildl  -0x1c(%ebp)
 8550d48:	d9 05 50 13 ca 08    	flds   0x8ca1350
 8550d4e:	de c9                	fmulp  %st,%st(1)
 8550d50:	de c9                	fmulp  %st,%st(1)
 8550d52:	d9 7d b2             	fnstcw -0x4e(%ebp)
 8550d55:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 8550d59:	b4 0c                	mov    $0xc,%ah
 8550d5b:	66 89 45 b0          	mov    %ax,-0x50(%ebp)
 8550d5f:	d9 6d b0             	fldcw  -0x50(%ebp)
 8550d62:	db 5d b4             	fistpl -0x4c(%ebp)
 8550d65:	d9 6d b2             	fldcw  -0x4e(%ebp)
 8550d68:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8550d6b:	89 d1                	mov    %edx,%ecx
 8550d6d:	29 c1                	sub    %eax,%ecx
 8550d6f:	89 c8                	mov    %ecx,%eax
 8550d71:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8550d74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550d77:	83 c0 0c             	add    $0xc,%eax
 8550d7a:	8b 00                	mov    (%eax),%eax
 8550d7c:	3d 3f 42 0f 00       	cmp    $0xf423f,%eax
 8550d81:	7e 07                	jle    8550d8a <_ZN10CLuckPoint13GetItemRarityEPiii+0x1a6>
 8550d83:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8550d8a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8550d8e:	74 45                	je     8550dd5 <_ZN10CLuckPoint13GetItemRarityEPiii+0x1f1>
 8550d90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550d93:	83 c0 08             	add    $0x8,%eax
 8550d96:	8b 10                	mov    (%eax),%edx
 8550d98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550d9b:	83 c0 04             	add    $0x4,%eax
 8550d9e:	8b 00                	mov    (%eax),%eax
 8550da0:	89 d3                	mov    %edx,%ebx
 8550da2:	29 c3                	sub    %eax,%ebx
 8550da4:	89 d8                	mov    %ebx,%eax
 8550da6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8550da9:	db 45 b4             	fildl  -0x4c(%ebp)
 8550dac:	db 45 e8             	fildl  -0x18(%ebp)
 8550daf:	d9 05 50 13 ca 08    	flds   0x8ca1350
 8550db5:	de c9                	fmulp  %st,%st(1)
 8550db7:	de c9                	fmulp  %st,%st(1)
 8550db9:	d9 7d b2             	fnstcw -0x4e(%ebp)
 8550dbc:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 8550dc0:	b4 0c                	mov    $0xc,%ah
 8550dc2:	66 89 45 b0          	mov    %ax,-0x50(%ebp)
 8550dc6:	d9 6d b0             	fldcw  -0x50(%ebp)
 8550dc9:	db 5d b4             	fistpl -0x4c(%ebp)
 8550dcc:	d9 6d b2             	fldcw  -0x4e(%ebp)
 8550dcf:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8550dd2:	29 45 e0             	sub    %eax,-0x20(%ebp)
 8550dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550dd8:	83 c0 04             	add    $0x4,%eax
 8550ddb:	8b 00                	mov    (%eax),%eax
 8550ddd:	85 c0                	test   %eax,%eax
 8550ddf:	74 1f                	je     8550e00 <_ZN10CLuckPoint13GetItemRarityEPiii+0x21c>
 8550de1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550de4:	8b 00                	mov    (%eax),%eax
 8550de6:	0f af 45 e0          	imul   -0x20(%ebp),%eax
 8550dea:	8b 55 0c             	mov    0xc(%ebp),%edx
 8550ded:	83 c2 04             	add    $0x4,%edx
 8550df0:	8b 12                	mov    (%edx),%edx
 8550df2:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8550df5:	89 c2                	mov    %eax,%edx
 8550df7:	c1 fa 1f             	sar    $0x1f,%edx
 8550dfa:	f7 7d a4             	idivl  -0x5c(%ebp)
 8550dfd:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8550e00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8550e03:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8550e06:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8550e0d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8550e14:	eb 26                	jmp    8550e3c <_ZN10CLuckPoint13GetItemRarityEPiii+0x258>
 8550e16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550e19:	c1 e0 02             	shl    $0x2,%eax
 8550e1c:	03 45 0c             	add    0xc(%ebp),%eax
 8550e1f:	8b 10                	mov    (%eax),%edx
 8550e21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550e24:	8b 44 85 c0          	mov    -0x40(%ebp,%eax,4),%eax
 8550e28:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8550e2b:	3b 45 10             	cmp    0x10(%ebp),%eax
 8550e2e:	7c 08                	jl     8550e38 <_ZN10CLuckPoint13GetItemRarityEPiii+0x254>
 8550e30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550e33:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8550e36:	eb 0f                	jmp    8550e47 <_ZN10CLuckPoint13GetItemRarityEPiii+0x263>
 8550e38:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8550e3c:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8550e40:	0f 9e c0             	setle  %al
 8550e43:	84 c0                	test   %al,%al
 8550e45:	75 cf                	jne    8550e16 <_ZN10CLuckPoint13GetItemRarityEPiii+0x232>
 8550e47:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8550e4a:	83 c4 74             	add    $0x74,%esp
 8550e4d:	5b                   	pop    %ebx
 8550e4e:	5d                   	pop    %ebp
 8550e4f:	c3                   	ret

```

```c
// CLuckPoint::GetItemRarity @ 0x8550be4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CLuckPoint::GetItemRarity(int*, int, int) */

int __thiscall CLuckPoint::GetItemRarity(CLuckPoint *this,int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_48;
  int local_44 [7];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  CParty *local_14;
  int local_10;
  
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_44 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  if ((param_3 == 2) &&
     (cVar1 = std::vector<CUser*,std::allocator<CUser*>>::empty(), cVar1 != '\x01')) {
    local_48 = 0;
    iVar3 = GetLuckPoint(this);
    iVar4 = G_CDataManager();
    ServerParameterScript::getLuckPoint((ServerParameterScript *)(iVar4 + 0x68),iVar3,&local_48);
    local_28 = param_1[2] - param_1[1];
    local_24 = GetTenThousandPercentage(local_28,local_48);
    local_24 = -local_24;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    while (uVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                             ((vector<CUser*,std::allocator<CUser*>> *)this), local_18 < uVar2) {
      piVar5 = (int *)std::vector<CUser*,std::allocator<CUser*>>::operator[]
                                ((vector<CUser*,std::allocator<CUser*>> *)this,local_18);
      if (*piVar5 != 0) {
        puVar6 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::operator[]
                           ((vector<CUser*,std::allocator<CUser*>> *)this,local_18);
        local_14 = (CParty *)CUser::GetParty((CUser *)*puVar6);
        if (local_14 != (CParty *)0x0) {
          local_20 = CParty::Get_party_overlapped_drop_ratio_unique(local_14);
          local_1c = CParty::Get_party_overlapped_drop_ratio_rare(local_14);
        }
        break;
      }
      local_18 = local_18 + 1;
    }
    if ((local_20 != 0) &&
       (local_44[3] = local_44[3] -
                      (int)ROUND(_DAT_08ca1350 * (float)local_20 * (float)(param_1[3] - param_1[2]))
       , 999999 < param_1[3])) {
      local_44[3] = 0;
    }
    if (local_1c != 0) {
      local_24 = local_24 -
                 (int)ROUND(_DAT_08ca1350 * (float)local_1c * (float)(param_1[2] - param_1[1]));
    }
    if (param_1[1] != 0) {
      local_44[0] = (*param_1 * local_24) / param_1[1];
    }
    local_44[1] = local_24;
  }
  local_10 = 0;
  while( true ) {
    if (5 < local_10) {
      return 0;
    }
    if (param_2 <= param_1[local_10] + local_44[local_10]) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

---

## GetLuckPoint

```asm
// === 085509da CLuckPoint::GetLuckPoint  [0x085509da-0x8550a83] ===
 85509da:	55                   	push   %ebp
 85509db:	89 e5                	mov    %esp,%ebp
 85509dd:	53                   	push   %ebx
 85509de:	83 ec 34             	sub    $0x34,%esp
 85509e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85509e4:	89 04 24             	mov    %eax,(%esp)
 85509e7:	e8 10 07 00 00       	call   85510fc <_ZNKSt6vectorIP5CUserSaIS1_EE5emptyEv>
 85509ec:	83 f0 01             	xor    $0x1,%eax
 85509ef:	84 c0                	test   %al,%al
 85509f1:	0f 84 82 00 00 00    	je     8550a79 <_ZN10CLuckPoint12GetLuckPointEv+0x9f>
 85509f7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85509fe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8550a05:	eb 40                	jmp    8550a47 <_ZN10CLuckPoint12GetLuckPointEv+0x6d>
 8550a07:	8b 45 08             	mov    0x8(%ebp),%eax
 8550a0a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550a0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550a11:	89 04 24             	mov    %eax,(%esp)
 8550a14:	e8 bd 20 da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550a19:	8b 00                	mov    (%eax),%eax
 8550a1b:	85 c0                	test   %eax,%eax
 8550a1d:	0f 95 c0             	setne  %al
 8550a20:	84 c0                	test   %al,%al
 8550a22:	74 1f                	je     8550a43 <_ZN10CLuckPoint12GetLuckPointEv+0x69>
 8550a24:	8b 45 08             	mov    0x8(%ebp),%eax
 8550a27:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550a2e:	89 04 24             	mov    %eax,(%esp)
 8550a31:	e8 a0 20 da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550a36:	8b 00                	mov    (%eax),%eax
 8550a38:	89 04 24             	mov    %eax,(%esp)
 8550a3b:	e8 e8 ed cd ff       	call   822f828 <_ZN15CUserCharacInfo21GetCurCharacLuckPointEv>
 8550a40:	01 45 f0             	add    %eax,-0x10(%ebp)
 8550a43:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8550a47:	8b 45 08             	mov    0x8(%ebp),%eax
 8550a4a:	89 04 24             	mov    %eax,(%esp)
 8550a4d:	e8 3e 11 da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550a52:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8550a55:	0f 97 c0             	seta   %al
 8550a58:	84 c0                	test   %al,%al
 8550a5a:	75 ab                	jne    8550a07 <_ZN10CLuckPoint12GetLuckPointEv+0x2d>
 8550a5c:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8550a5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8550a62:	89 04 24             	mov    %eax,(%esp)
 8550a65:	e8 26 11 da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550a6a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8550a6d:	89 d8                	mov    %ebx,%eax
 8550a6f:	ba 00 00 00 00       	mov    $0x0,%edx
 8550a74:	f7 75 e4             	divl   -0x1c(%ebp)
 8550a77:	eb 05                	jmp    8550a7e <_ZN10CLuckPoint12GetLuckPointEv+0xa4>
 8550a79:	b8 00 00 00 00       	mov    $0x0,%eax
 8550a7e:	83 c4 34             	add    $0x34,%esp
 8550a81:	5b                   	pop    %ebx
 8550a82:	5d                   	pop    %ebp
 8550a83:	c3                   	ret

```

```c
// CLuckPoint::GetLuckPoint @ 0x85509da

/* CLuckPoint::GetLuckPoint() */

uint __thiscall CLuckPoint::GetLuckPoint(CLuckPoint *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = std::vector<CUser*,std::allocator<CUser*>>::empty();
  if (cVar1 == '\x01') {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    while( true ) {
      uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                        ((vector<CUser*,std::allocator<CUser*>> *)this);
      if (uVar5 <= local_10) break;
      piVar2 = (int *)std::vector<CUser*,std::allocator<CUser*>>::operator[]
                                ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
      if (*piVar2 != 0) {
        puVar3 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::operator[]
                           ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
        iVar4 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar3);
        local_14 = local_14 + iVar4;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    local_14 = local_14 / uVar5;
  }
  return local_14;
}

```

---

## GetUserGainItem

```asm
// === 08550e50 CLuckPoint::GetUserGainItem  [0x08550e50-0x8550eef] ===
 8550e50:	55                   	push   %ebp
 8550e51:	89 e5                	mov    %esp,%ebp
 8550e53:	53                   	push   %ebx
 8550e54:	83 ec 24             	sub    $0x24,%esp
 8550e57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550e5a:	85 c0                	test   %eax,%eax
 8550e5c:	78 17                	js     8550e75 <_ZN10CLuckPoint15GetUserGainItemEi+0x25>
 8550e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550e61:	89 c3                	mov    %eax,%ebx
 8550e63:	8b 45 08             	mov    0x8(%ebp),%eax
 8550e66:	83 c0 0c             	add    $0xc,%eax
 8550e69:	89 04 24             	mov    %eax,(%esp)
 8550e6c:	e8 cf 49 ce ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 8550e71:	39 c3                	cmp    %eax,%ebx
 8550e73:	72 07                	jb     8550e7c <_ZN10CLuckPoint15GetUserGainItemEi+0x2c>
 8550e75:	b8 01 00 00 00       	mov    $0x1,%eax
 8550e7a:	eb 05                	jmp    8550e81 <_ZN10CLuckPoint15GetUserGainItemEi+0x31>
 8550e7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8550e81:	84 c0                	test   %al,%al
 8550e83:	74 07                	je     8550e8c <_ZN10CLuckPoint15GetUserGainItemEi+0x3c>
 8550e85:	b8 00 00 00 00       	mov    $0x0,%eax
 8550e8a:	eb 5d                	jmp    8550ee9 <_ZN10CLuckPoint15GetUserGainItemEi+0x99>
 8550e8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8550e8f:	8d 50 0c             	lea    0xc(%eax),%edx
 8550e92:	8d 45 0c             	lea    0xc(%ebp),%eax
 8550e95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8550e99:	89 14 24             	mov    %edx,(%esp)
 8550e9c:	e8 0b 26 c4 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 8550ea1:	8b 00                	mov    (%eax),%eax
 8550ea3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8550ea6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8550eaa:	78 12                	js     8550ebe <_ZN10CLuckPoint15GetUserGainItemEi+0x6e>
 8550eac:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8550eaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8550eb2:	89 04 24             	mov    %eax,(%esp)
 8550eb5:	e8 d6 0c da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550eba:	39 c3                	cmp    %eax,%ebx
 8550ebc:	72 07                	jb     8550ec5 <_ZN10CLuckPoint15GetUserGainItemEi+0x75>
 8550ebe:	b8 01 00 00 00       	mov    $0x1,%eax
 8550ec3:	eb 05                	jmp    8550eca <_ZN10CLuckPoint15GetUserGainItemEi+0x7a>
 8550ec5:	b8 00 00 00 00       	mov    $0x0,%eax
 8550eca:	84 c0                	test   %al,%al
 8550ecc:	74 07                	je     8550ed5 <_ZN10CLuckPoint15GetUserGainItemEi+0x85>
 8550ece:	b8 00 00 00 00       	mov    $0x0,%eax
 8550ed3:	eb 14                	jmp    8550ee9 <_ZN10CLuckPoint15GetUserGainItemEi+0x99>
 8550ed5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550ed8:	8b 45 08             	mov    0x8(%ebp),%eax
 8550edb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550edf:	89 04 24             	mov    %eax,(%esp)
 8550ee2:	e8 ef 1b da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550ee7:	8b 00                	mov    (%eax),%eax
 8550ee9:	83 c4 24             	add    $0x24,%esp
 8550eec:	5b                   	pop    %ebx
 8550eed:	5d                   	pop    %ebp
 8550eee:	c3                   	ret
 8550eef:	90                   	nop

```

```c
// CLuckPoint::GetUserGainItem @ 0x8550e50

/* CLuckPoint::GetUserGainItem(int) */

undefined4 __thiscall CLuckPoint::GetUserGainItem(CLuckPoint *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = param_1;
  if ((param_1 < 0) ||
     (uVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                        ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                         (this + 0xc)), uVar3 <= (uint)iVar2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    puVar4 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                     operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                 *)(this + 0xc),&param_1);
    uVar3 = *puVar4;
    if (((int)uVar3 < 0) ||
       (uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)this), uVar5 <= uVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      puVar7 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)this,uVar3);
      uVar6 = *puVar7;
    }
    return uVar6;
  }
  return 0;
}

```

---

## UseLuckPoint

```asm
// === 08550a84 CLuckPoint::UseLuckPoint  [0x08550a84-0x8550b13] ===
 8550a84:	55                   	push   %ebp
 8550a85:	89 e5                	mov    %esp,%ebp
 8550a87:	56                   	push   %esi
 8550a88:	53                   	push   %ebx
 8550a89:	83 ec 20             	sub    $0x20,%esp
 8550a8c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8550a90:	75 07                	jne    8550a99 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x15>
 8550a92:	b8 00 00 00 00       	mov    $0x0,%eax
 8550a97:	eb 74                	jmp    8550b0d <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x89>
 8550a99:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8550a9d:	74 07                	je     8550aa6 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x22>
 8550a9f:	b8 00 00 00 00       	mov    $0x0,%eax
 8550aa4:	eb 67                	jmp    8550b0d <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x89>
 8550aa6:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8550aaa:	74 07                	je     8550ab3 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x2f>
 8550aac:	b8 00 00 00 00       	mov    $0x0,%eax
 8550ab1:	eb 5a                	jmp    8550b0d <_ZN10CLuckPoint12UseLuckPointEP5CUseriii+0x89>
 8550ab3:	8b 45 08             	mov    0x8(%ebp),%eax
 8550ab6:	89 04 24             	mov    %eax,(%esp)
 8550ab9:	e8 fa 97 b8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8550abe:	8b 55 14             	mov    0x14(%ebp),%edx
 8550ac1:	29 c2                	sub    %eax,%edx
 8550ac3:	89 d0                	mov    %edx,%eax
 8550ac5:	c1 f8 1f             	sar    $0x1f,%eax
 8550ac8:	89 c3                	mov    %eax,%ebx
 8550aca:	31 d3                	xor    %edx,%ebx
 8550acc:	29 c3                	sub    %eax,%ebx
 8550ace:	8b 45 08             	mov    0x8(%ebp),%eax
 8550ad1:	89 04 24             	mov    %eax,(%esp)
 8550ad4:	e8 df 97 b8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8550ad9:	89 c6                	mov    %eax,%esi
 8550adb:	e8 bb b6 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8550ae0:	83 c0 68             	add    $0x68,%eax
 8550ae3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8550ae7:	89 74 24 04          	mov    %esi,0x4(%esp)
 8550aeb:	89 04 24             	mov    %eax,(%esp)
 8550aee:	e8 0b ba 53 00       	call   8a8c4fe <_ZN21ServerParameterScript25getLuckPointDeductionRateEii>
 8550af3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8550af6:	8b 45 08             	mov    0x8(%ebp),%eax
 8550af9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550afc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550b00:	89 04 24             	mov    %eax,(%esp)
 8550b03:	e8 02 05 00 00       	call   855100a <_ZN15CUserCharacInfo21DecCurCharacLuckPointEi>
 8550b08:	b8 01 00 00 00       	mov    $0x1,%eax
 8550b0d:	83 c4 20             	add    $0x20,%esp
 8550b10:	5b                   	pop    %ebx
 8550b11:	5e                   	pop    %esi
 8550b12:	5d                   	pop    %ebp
 8550b13:	c3                   	ret

```

```c
// CLuckPoint::UseLuckPoint @ 0x8550a84

/* CLuckPoint::UseLuckPoint(CUser*, int, int, int) */

undefined4 CLuckPoint::UseLuckPoint(CUser *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    if (param_3 == 2) {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      uVar3 = param_4 - iVar2 >> 0x1f;
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar5 = G_CDataManager();
      iVar2 = ServerParameterScript::getLuckPointDeductionRate
                        ((ServerParameterScript *)(iVar5 + 0x68),iVar4,
                         (uVar3 ^ param_4 - iVar2) - uVar3);
      CUserCharacInfo::DecCurCharacLuckPoint((CUserCharacInfo *)param_1,iVar2);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## UseLuckPoint_08550b14

```asm
// === 08550b14 CLuckPoint::UseLuckPoint  [0x08550b14-0x8550be3] ===
 8550b14:	55                   	push   %ebp
 8550b15:	89 e5                	mov    %esp,%ebp
 8550b17:	83 ec 28             	sub    $0x28,%esp
 8550b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8550b1d:	89 04 24             	mov    %eax,(%esp)
 8550b20:	e8 d7 05 00 00       	call   85510fc <_ZNKSt6vectorIP5CUserSaIS1_EE5emptyEv>
 8550b25:	84 c0                	test   %al,%al
 8550b27:	74 0a                	je     8550b33 <_ZN10CLuckPoint12UseLuckPointEiiii+0x1f>
 8550b29:	b8 00 00 00 00       	mov    $0x0,%eax
 8550b2e:	e9 ae 00 00 00       	jmp    8550be1 <_ZN10CLuckPoint12UseLuckPointEiiii+0xcd>
 8550b33:	8b 45 08             	mov    0x8(%ebp),%eax
 8550b36:	89 04 24             	mov    %eax,(%esp)
 8550b39:	e8 16 fe ff ff       	call   8550954 <_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv>
 8550b3e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8550b41:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8550b45:	78 12                	js     8550b59 <_ZN10CLuckPoint12UseLuckPointEiiii+0x45>
 8550b47:	8b 45 08             	mov    0x8(%ebp),%eax
 8550b4a:	89 04 24             	mov    %eax,(%esp)
 8550b4d:	e8 3e 10 da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550b52:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8550b55:	39 d0                	cmp    %edx,%eax
 8550b57:	77 07                	ja     8550b60 <_ZN10CLuckPoint12UseLuckPointEiiii+0x4c>
 8550b59:	b8 01 00 00 00       	mov    $0x1,%eax
 8550b5e:	eb 05                	jmp    8550b65 <_ZN10CLuckPoint12UseLuckPointEiiii+0x51>
 8550b60:	b8 00 00 00 00       	mov    $0x0,%eax
 8550b65:	84 c0                	test   %al,%al
 8550b67:	74 07                	je     8550b70 <_ZN10CLuckPoint12UseLuckPointEiiii+0x5c>
 8550b69:	b8 00 00 00 00       	mov    $0x0,%eax
 8550b6e:	eb 71                	jmp    8550be1 <_ZN10CLuckPoint12UseLuckPointEiiii+0xcd>
 8550b70:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8550b73:	8b 45 08             	mov    0x8(%ebp),%eax
 8550b76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550b7a:	89 04 24             	mov    %eax,(%esp)
 8550b7d:	e8 54 1f da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550b82:	8b 00                	mov    (%eax),%eax
 8550b84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8550b87:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8550b8b:	75 07                	jne    8550b94 <_ZN10CLuckPoint12UseLuckPointEiiii+0x80>
 8550b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8550b92:	eb 4d                	jmp    8550be1 <_ZN10CLuckPoint12UseLuckPointEiiii+0xcd>
 8550b94:	8b 45 14             	mov    0x14(%ebp),%eax
 8550b97:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8550b9b:	8b 45 10             	mov    0x10(%ebp),%eax
 8550b9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8550ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550ba5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8550ba9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550bac:	89 04 24             	mov    %eax,(%esp)
 8550baf:	e8 d0 fe ff ff       	call   8550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>
 8550bb4:	83 f0 01             	xor    $0x1,%eax
 8550bb7:	84 c0                	test   %al,%al
 8550bb9:	74 07                	je     8550bc2 <_ZN10CLuckPoint12UseLuckPointEiiii+0xae>
 8550bbb:	b8 00 00 00 00       	mov    $0x0,%eax
 8550bc0:	eb 1f                	jmp    8550be1 <_ZN10CLuckPoint12UseLuckPointEiiii+0xcd>
 8550bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8550bc5:	8d 50 0c             	lea    0xc(%eax),%edx
 8550bc8:	8d 45 18             	lea    0x18(%ebp),%eax
 8550bcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8550bcf:	89 14 24             	mov    %edx,(%esp)
 8550bd2:	e8 d5 28 c4 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 8550bd7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8550bda:	89 10                	mov    %edx,(%eax)
 8550bdc:	b8 01 00 00 00       	mov    $0x1,%eax
 8550be1:	c9                   	leave
 8550be2:	c3                   	ret
 8550be3:	90                   	nop

```

```c
// CLuckPoint::UseLuckPoint @ 0x8550b14

/* CLuckPoint::UseLuckPoint(int, int, int, int) */

undefined4 CLuckPoint::UseLuckPoint(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  cVar2 = std::vector<CUser*,std::allocator<CUser*>>::empty();
  if (cVar2 == '\0') {
    uVar3 = _GetMaxLuckPointUserIndex((CLuckPoint *)param_1);
    if (((int)uVar3 < 0) ||
       (uVar4 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)param_1), uVar4 <= uVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      puVar6 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)param_1,uVar3);
      if ((CUser *)*puVar6 == (CUser *)0x0) {
        uVar5 = 0;
      }
      else {
        cVar2 = UseLuckPoint((CUser *)*puVar6,param_2,param_3,param_4);
        if (cVar2 == '\x01') {
          puVar7 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(param_1 + 0xc),(int *)&stack0x00000014);
          *puVar7 = uVar3;
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    return uVar5;
  }
  return 0;
}

```

---

## _GetMaxLuckPointUserIndex

```asm
// === 08550954 CLuckPoint::_GetMaxLuckPointUserIndex  [0x08550954-0x85509d9] ===
 8550954:	55                   	push   %ebp
 8550955:	89 e5                	mov    %esp,%ebp
 8550957:	83 ec 28             	sub    $0x28,%esp
 855095a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8550961:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8550968:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855096f:	eb 4f                	jmp    85509c0 <_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv+0x6c>
 8550971:	8b 45 08             	mov    0x8(%ebp),%eax
 8550974:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550977:	89 54 24 04          	mov    %edx,0x4(%esp)
 855097b:	89 04 24             	mov    %eax,(%esp)
 855097e:	e8 53 21 da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550983:	8b 00                	mov    (%eax),%eax
 8550985:	89 04 24             	mov    %eax,(%esp)
 8550988:	e8 9b ee cd ff       	call   822f828 <_ZN15CUserCharacInfo21GetCurCharacLuckPointEv>
 855098d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8550990:	0f 9f c0             	setg   %al
 8550993:	84 c0                	test   %al,%al
 8550995:	74 25                	je     85509bc <_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv+0x68>
 8550997:	8b 45 08             	mov    0x8(%ebp),%eax
 855099a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855099d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85509a1:	89 04 24             	mov    %eax,(%esp)
 85509a4:	e8 2d 21 da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 85509a9:	8b 00                	mov    (%eax),%eax
 85509ab:	89 04 24             	mov    %eax,(%esp)
 85509ae:	e8 75 ee cd ff       	call   822f828 <_ZN15CUserCharacInfo21GetCurCharacLuckPointEv>
 85509b3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85509b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85509b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85509bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85509c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85509c3:	89 04 24             	mov    %eax,(%esp)
 85509c6:	e8 c5 11 da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 85509cb:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85509ce:	0f 97 c0             	seta   %al
 85509d1:	84 c0                	test   %al,%al
 85509d3:	75 9c                	jne    8550971 <_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv+0x1d>
 85509d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85509d8:	c9                   	leave
 85509d9:	c3                   	ret

```

```c
// CLuckPoint::_GetMaxLuckPointUserIndex @ 0x8550954

/* CLuckPoint::_GetMaxLuckPointUserIndex() */

uint __thiscall CLuckPoint::_GetMaxLuckPointUserIndex(CLuckPoint *this)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    if (uVar3 <= local_10) break;
    puVar1 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
    iVar2 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar1);
    if (local_18 < iVar2) {
      puVar1 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
      local_18 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar1);
      local_14 = local_10;
    }
    local_10 = local_10 + 1;
  }
  return local_14;
}

```

---

## sendItemDropRate

```asm
// === 08550ef0 CLuckPoint::sendItemDropRate  [0x08550ef0-0x8550f6c] ===
 8550ef0:	55                   	push   %ebp
 8550ef1:	89 e5                	mov    %esp,%ebp
 8550ef3:	83 ec 28             	sub    $0x28,%esp
 8550ef6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8550efd:	eb 57                	jmp    8550f56 <_ZN10CLuckPoint16sendItemDropRateEPKc+0x66>
 8550eff:	8b 45 08             	mov    0x8(%ebp),%eax
 8550f02:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8550f05:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550f09:	89 04 24             	mov    %eax,(%esp)
 8550f0c:	e8 c5 1b da ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 8550f11:	8b 00                	mov    (%eax),%eax
 8550f13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8550f16:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8550f1a:	74 36                	je     8550f52 <_ZN10CLuckPoint16sendItemDropRateEPKc+0x62>
 8550f1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550f1f:	89 04 24             	mov    %eax,(%esp)
 8550f22:	e8 0b f5 bc ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8550f27:	85 c0                	test   %eax,%eax
 8550f29:	0f 95 c0             	setne  %al
 8550f2c:	84 c0                	test   %al,%al
 8550f2e:	74 22                	je     8550f52 <_ZN10CLuckPoint16sendItemDropRateEPKc+0x62>
 8550f30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550f33:	89 04 24             	mov    %eax,(%esp)
 8550f36:	e8 23 01 00 00       	call   855105e <_ZN5CUser22GetGameMasterCharacterEv>
 8550f3b:	8b 10                	mov    (%eax),%edx
 8550f3d:	8b 0a                	mov    (%edx),%ecx
 8550f3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8550f42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8550f46:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8550f49:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550f4d:	89 04 24             	mov    %eax,(%esp)
 8550f50:	ff d1                	call   *%ecx
 8550f52:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8550f56:	8b 45 08             	mov    0x8(%ebp),%eax
 8550f59:	89 04 24             	mov    %eax,(%esp)
 8550f5c:	e8 2f 0c da ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8550f61:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8550f64:	0f 97 c0             	seta   %al
 8550f67:	84 c0                	test   %al,%al
 8550f69:	75 94                	jne    8550eff <_ZN10CLuckPoint16sendItemDropRateEPKc+0xf>
 8550f6b:	c9                   	leave
 8550f6c:	c3                   	ret

```

```c
// CLuckPoint::sendItemDropRate @ 0x8550ef0

/* CLuckPoint::sendItemDropRate(char const*) */

void __thiscall CLuckPoint::sendItemDropRate(CLuckPoint *this,char *param_1)

{
  CUserCharacInfo *this_00;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  
  local_14 = 0;
  while( true ) {
    uVar3 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    if (uVar3 <= local_14) break;
    puVar1 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)this,local_14);
    this_00 = (CUserCharacInfo *)*puVar1;
    if (this_00 != (CUserCharacInfo *)0x0) {
      iVar2 = CUserCharacInfo::getCurCharacR(this_00);
      if (iVar2 != 0) {
        puVar1 = (undefined4 *)CUser::GetGameMasterCharacter((CUser *)this_00);
        (**(code **)*puVar1)(puVar1,this_00,param_1);
      }
    }
    local_14 = local_14 + 1;
  }
  return;
}

```

---

## ~CLuckPoint

```asm
// === 085508ec CLuckPoint::~CLuckPoint  [0x085508ec-0x8550931] ===
 85508ec:	55                   	push   %ebp
 85508ed:	89 e5                	mov    %esp,%ebp
 85508ef:	56                   	push   %esi
 85508f0:	53                   	push   %ebx
 85508f1:	83 ec 10             	sub    $0x10,%esp
 85508f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85508f7:	83 c0 0c             	add    $0xc,%eax
 85508fa:	89 04 24             	mov    %eax,(%esp)
 85508fd:	e8 c4 61 b7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8550902:	eb 1b                	jmp    855091f <_ZN10CLuckPointD1Ev+0x33>
 8550904:	89 d3                	mov    %edx,%ebx
 8550906:	89 c6                	mov    %eax,%esi
 8550908:	8b 45 08             	mov    0x8(%ebp),%eax
 855090b:	89 04 24             	mov    %eax,(%esp)
 855090e:	e8 1f 12 da ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 8550913:	89 f0                	mov    %esi,%eax
 8550915:	89 da                	mov    %ebx,%edx
 8550917:	89 04 24             	mov    %eax,(%esp)
 855091a:	e8 31 2e 59 00       	call   8ae3750 <_Unwind_Resume>
 855091f:	8b 45 08             	mov    0x8(%ebp),%eax
 8550922:	89 04 24             	mov    %eax,(%esp)
 8550925:	e8 08 12 da ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 855092a:	83 c4 10             	add    $0x10,%esp
 855092d:	5b                   	pop    %ebx
 855092e:	5e                   	pop    %esi
 855092f:	5d                   	pop    %ebp
 8550930:	c3                   	ret
 8550931:	90                   	nop

```

```c
// CLuckPoint::~CLuckPoint @ 0x85508ec

/* CLuckPoint::~CLuckPoint() */

void __thiscall CLuckPoint::~CLuckPoint(CLuckPoint *this)

{
                    /* try { // try from 085508fd to 08550901 has its CatchHandler @ 08550904 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xc));
  std::vector<CUser*,std::allocator<CUser*>>::~vector((vector<CUser*,std::allocator<CUser*>> *)this)
  ;
  return;
}

```

