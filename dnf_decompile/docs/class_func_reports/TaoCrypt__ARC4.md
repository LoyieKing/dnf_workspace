# TaoCrypt__ARC4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## AsmProcess

```asm
// === 087a5990 TaoCrypt::ARC4::AsmProcess  [0x087a5990-0x87a59c4] ===
 87a5990:	55                   	push   %ebp
 87a5991:	89 e5                	mov    %esp,%ebp
 87a5993:	0f 6e df             	movd   %edi,%mm3
 87a5996:	0f 6e e3             	movd   %ebx,%mm4
 87a5999:	0f 6e ee             	movd   %esi,%mm5
 87a599c:	0f 6e f5             	movd   %ebp,%mm6
 87a599f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a59a2:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a59a5:	8b 75 10             	mov    0x10(%ebp),%esi
 87a59a8:	8b 6d 14             	mov    0x14(%ebp),%ebp
 87a59ab:	83 ec 04             	sub    $0x4,%esp
 87a59ae:	83 fd 00             	cmp    $0x0,%ebp
 87a59b1:	74 50                	je     87a5a03 <nothing>
 87a59b3:	89 2c 24             	mov    %ebp,(%esp)
 87a59b6:	0f b6 51 01          	movzbl 0x1(%ecx),%edx
 87a59ba:	8d 69 02             	lea    0x2(%ecx),%ebp
 87a59bd:	0f b6 09             	movzbl (%ecx),%ecx
 87a59c0:	0f b6 44 0d 00       	movzbl 0x0(%ebp,%ecx,1),%eax

```

```c
// TaoCrypt::ARC4::AsmProcess @ 0x87a5990

/* TaoCrypt::ARC4::AsmProcess(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::AsmProcess(ARC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  ARC4 AVar1;
  ARC4 AVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  if (param_3 != 0) {
    local_8 = param_3;
    uVar7 = (uint)(byte)this[1];
    uVar5 = (uint)(byte)*this;
    AVar1 = this[uVar5 + 2];
    do {
      uVar4 = (uint)(byte)AVar1;
      uVar8 = uVar7 + uVar4;
      uVar7 = uVar8 & 0xff;
      AVar2 = this[uVar7 + 2];
      this[uVar5 + 2] = AVar2;
      this[uVar7 + 2] = AVar1;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6 & 0xff;
      AVar1 = this[uVar5 + 2];
      bVar3 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = (byte)this[(uVar4 + (byte)AVar2 & 0xff) + 2] ^ bVar3;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    *this = SUB41(uVar6,0);
    this[1] = SUB41(uVar8,0);
  }
  return;
}

```

---

## Process

```asm
// === 087a5a20 TaoCrypt::ARC4::Process  [0x087a5a20-0x87a5b8f] ===
 87a5a20:	55                   	push   %ebp
 87a5a21:	89 e5                	mov    %esp,%ebp
 87a5a23:	57                   	push   %edi
 87a5a24:	56                   	push   %esi
 87a5a25:	53                   	push   %ebx
 87a5a26:	83 ec 3c             	sub    $0x3c,%esp
 87a5a29:	8b 55 14             	mov    0x14(%ebp),%edx
 87a5a2c:	e8 c7 d3 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a5a31:	81 c3 67 71 bc 00    	add    $0xbc7167,%ebx
 87a5a37:	8b 45 08             	mov    0x8(%ebp),%eax
 87a5a3a:	85 d2                	test   %edx,%edx
 87a5a3c:	0f 84 9f 00 00 00    	je     87a5ae1 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0xc1>
 87a5a42:	8b 93 38 fa ff ff    	mov    -0x5c8(%ebx),%edx
 87a5a48:	80 3a 00             	cmpb   $0x0,(%edx)
 87a5a4b:	0f 85 9f 00 00 00    	jne    87a5af0 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0xd0>
 87a5a51:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a5a54:	31 d2                	xor    %edx,%edx
 87a5a56:	39 7d 10             	cmp    %edi,0x10(%ebp)
 87a5a59:	0f b6 30             	movzbl (%eax),%esi
 87a5a5c:	0f b6 48 01          	movzbl 0x1(%eax),%ecx
 87a5a60:	0f 84 b2 00 00 00    	je     87a5b18 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0xf8>
 87a5a66:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87a5a69:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a5a6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a5a70:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a5a73:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87a5a76:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 87a5a7a:	88 55 d7             	mov    %dl,-0x29(%ebp)
 87a5a7d:	0f b6 54 30 02       	movzbl 0x2(%eax,%esi,1),%edx
 87a5a82:	0f b6 fa             	movzbl %dl,%edi
 87a5a85:	89 7d dc             	mov    %edi,-0x24(%ebp)
 87a5a88:	03 7d e4             	add    -0x1c(%ebp),%edi
 87a5a8b:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a5a91:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 87a5a94:	0f b6 4c 38 02       	movzbl 0x2(%eax,%edi,1),%ecx
 87a5a99:	88 4c 30 02          	mov    %cl,0x2(%eax,%esi,1)
 87a5a9d:	83 c6 01             	add    $0x1,%esi
 87a5aa0:	88 54 38 02          	mov    %dl,0x2(%eax,%edi,1)
 87a5aa4:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a5aa8:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a5aae:	8d 3c 11             	lea    (%ecx,%edx,1),%edi
 87a5ab1:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a5ab7:	0f b6 4c 38 02       	movzbl 0x2(%eax,%edi,1),%ecx
 87a5abc:	30 4d d7             	xor    %cl,-0x29(%ebp)
 87a5abf:	0f b6 55 d7          	movzbl -0x29(%ebp),%edx
 87a5ac3:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a5ac6:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a5ac9:	88 14 0f             	mov    %dl,(%edi,%ecx,1)
 87a5acc:	83 c1 01             	add    $0x1,%ecx
 87a5acf:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 87a5ad2:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 87a5ad5:	75 99                	jne    87a5a70 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0x50>
 87a5ad7:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a5ada:	89 f2                	mov    %esi,%edx
 87a5adc:	88 10                	mov    %dl,(%eax)
 87a5ade:	88 48 01             	mov    %cl,0x1(%eax)
 87a5ae1:	83 c4 3c             	add    $0x3c,%esp
 87a5ae4:	5b                   	pop    %ebx
 87a5ae5:	5e                   	pop    %esi
 87a5ae6:	5f                   	pop    %edi
 87a5ae7:	5d                   	pop    %ebp
 87a5ae8:	c3                   	ret
 87a5ae9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a5af0:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a5af3:	8b 55 14             	mov    0x14(%ebp),%edx
 87a5af6:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a5af9:	89 04 24             	mov    %eax,(%esp)
 87a5afc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a5b00:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a5b04:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a5b08:	e8 83 fe ff ff       	call   87a5990 <_ZN8TaoCrypt4ARC410AsmProcessEPhPKhj>
 87a5b0d:	83 c4 3c             	add    $0x3c,%esp
 87a5b10:	5b                   	pop    %ebx
 87a5b11:	5e                   	pop    %esi
 87a5b12:	5f                   	pop    %edi
 87a5b13:	5d                   	pop    %ebp
 87a5b14:	c3                   	ret
 87a5b15:	8d 76 00             	lea    0x0(%esi),%esi
 87a5b18:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87a5b1b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a5b1e:	66 90                	xchg   %ax,%ax
 87a5b20:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a5b23:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87a5b26:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 87a5b2a:	88 55 d7             	mov    %dl,-0x29(%ebp)
 87a5b2d:	0f b6 54 30 02       	movzbl 0x2(%eax,%esi,1),%edx
 87a5b32:	0f b6 fa             	movzbl %dl,%edi
 87a5b35:	89 7d dc             	mov    %edi,-0x24(%ebp)
 87a5b38:	03 7d e4             	add    -0x1c(%ebp),%edi
 87a5b3b:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a5b41:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 87a5b44:	0f b6 4c 38 02       	movzbl 0x2(%eax,%edi,1),%ecx
 87a5b49:	88 4c 30 02          	mov    %cl,0x2(%eax,%esi,1)
 87a5b4d:	83 c6 01             	add    $0x1,%esi
 87a5b50:	88 54 38 02          	mov    %dl,0x2(%eax,%edi,1)
 87a5b54:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a5b58:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a5b5e:	8d 3c 11             	lea    (%ecx,%edx,1),%edi
 87a5b61:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a5b67:	0f b6 4c 38 02       	movzbl 0x2(%eax,%edi,1),%ecx
 87a5b6c:	30 4d d7             	xor    %cl,-0x29(%ebp)
 87a5b6f:	0f b6 55 d7          	movzbl -0x29(%ebp),%edx
 87a5b73:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a5b76:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a5b79:	88 14 0f             	mov    %dl,(%edi,%ecx,1)
 87a5b7c:	83 c1 01             	add    $0x1,%ecx
 87a5b7f:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 87a5b82:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 87a5b85:	75 99                	jne    87a5b20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0x100>
 87a5b87:	e9 4b ff ff ff       	jmp    87a5ad7 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj+0xb7>
 87a5b8c:	90                   	nop
 87a5b8d:	90                   	nop
 87a5b8e:	90                   	nop
 87a5b8f:	90                   	nop

```

```c
// TaoCrypt::ARC4::Process @ 0x87a5a20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::Process(ARC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  ARC4 AVar2;
  ARC4 AVar3;
  uint uVar4;
  uint local_34;
  uint local_20;
  
  if (param_3 != 0) {
    if (*PTR_isMMX_0936c5d0 != '\0') {
      AsmProcess(this,param_1,param_2,param_3);
      return;
    }
    uVar4 = (uint)(byte)*this;
    local_20 = (uint)(byte)this[1];
    if (param_2 == param_1) {
      local_34 = 0;
      do {
        bVar1 = param_2[local_34];
        AVar2 = this[uVar4 + 2];
        local_20 = (byte)AVar2 + local_20 & 0xff;
        AVar3 = this[local_20 + 2];
        this[uVar4 + 2] = AVar3;
        this[local_20 + 2] = AVar2;
        uVar4 = uVar4 + 1 & 0xff;
        param_2[local_34] = bVar1 ^ (byte)this[(byte)((char)AVar3 + (char)AVar2) + 2];
        local_34 = local_34 + 1;
      } while (param_3 != local_34);
    }
    else {
      local_34 = 0;
      do {
        bVar1 = param_2[local_34];
        AVar2 = this[uVar4 + 2];
        local_20 = (byte)AVar2 + local_20 & 0xff;
        AVar3 = this[local_20 + 2];
        this[uVar4 + 2] = AVar3;
        this[local_20 + 2] = AVar2;
        uVar4 = uVar4 + 1 & 0xff;
        param_1[local_34] = bVar1 ^ (byte)this[(byte)((char)AVar3 + (char)AVar2) + 2];
        local_34 = local_34 + 1;
      } while (param_3 != local_34);
    }
    *this = SUB41(uVar4,0);
    this[1] = SUB41(local_20,0);
  }
  return;
}

```

---

## SetKey

```asm
// === 087a5900 TaoCrypt::ARC4::SetKey  [0x087a5900-0x87a598f] ===
 87a5900:	55                   	push   %ebp
 87a5901:	31 c0                	xor    %eax,%eax
 87a5903:	89 e5                	mov    %esp,%ebp
 87a5905:	57                   	push   %edi
 87a5906:	56                   	push   %esi
 87a5907:	83 ec 0c             	sub    $0xc,%esp
 87a590a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a590d:	c6 01 01             	movb   $0x1,(%ecx)
 87a5910:	c6 41 01 00          	movb   $0x0,0x1(%ecx)
 87a5914:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a5918:	88 44 01 02          	mov    %al,0x2(%ecx,%eax,1)
 87a591c:	83 c0 01             	add    $0x1,%eax
 87a591f:	3d 00 01 00 00       	cmp    $0x100,%eax
 87a5924:	75 f2                	jne    87a5918 <_ZN8TaoCrypt4ARC46SetKeyEPKhj+0x18>
 87a5926:	8d 91 00 01 00 00    	lea    0x100(%ecx),%edx
 87a592c:	89 c8                	mov    %ecx,%eax
 87a592e:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a5931:	31 f6                	xor    %esi,%esi
 87a5933:	31 d2                	xor    %edx,%edx
 87a5935:	89 4d ec             	mov    %ecx,-0x14(%ebp)
 87a5938:	0f b6 48 02          	movzbl 0x2(%eax),%ecx
 87a593c:	88 4d f7             	mov    %cl,-0x9(%ebp)
 87a593f:	0f b6 f9             	movzbl %cl,%edi
 87a5942:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a5945:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 87a5948:	0f b6 14 31          	movzbl (%ecx,%esi,1),%edx
 87a594c:	83 c6 01             	add    $0x1,%esi
 87a594f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 87a5952:	8d 14 17             	lea    (%edi,%edx,1),%edx
 87a5955:	81 e2 ff 00 00 00    	and    $0xff,%edx
 87a595b:	0f b6 7c 11 02       	movzbl 0x2(%ecx,%edx,1),%edi
 87a5960:	89 f9                	mov    %edi,%ecx
 87a5962:	88 48 02             	mov    %cl,0x2(%eax)
 87a5965:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
 87a5969:	8b 7d ec             	mov    -0x14(%ebp),%edi
 87a596c:	88 4c 17 02          	mov    %cl,0x2(%edi,%edx,1)
 87a5970:	b9 00 00 00 00       	mov    $0x0,%ecx
 87a5975:	3b 75 10             	cmp    0x10(%ebp),%esi
 87a5978:	0f 43 f1             	cmovae %ecx,%esi
 87a597b:	83 c0 01             	add    $0x1,%eax
 87a597e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 87a5981:	75 b5                	jne    87a5938 <_ZN8TaoCrypt4ARC46SetKeyEPKhj+0x38>
 87a5983:	83 c4 0c             	add    $0xc,%esp
 87a5986:	5e                   	pop    %esi
 87a5987:	5f                   	pop    %edi
 87a5988:	5d                   	pop    %ebp
 87a5989:	c3                   	ret
 87a598a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::ARC4::SetKey @ 0x87a5900

/* TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::SetKey(ARC4 *this,uchar *param_1,uint param_2)

{
  byte *pbVar1;
  ARC4 AVar2;
  int iVar3;
  ARC4 *pAVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = 0;
  *this = (ARC4)0x1;
  this[1] = (ARC4)0x0;
  do {
    this[iVar3 + 2] = SUB41(iVar3,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  uVar6 = 0;
  uVar5 = 0;
  pAVar4 = this;
  do {
    AVar2 = pAVar4[2];
    pbVar1 = param_1 + uVar6;
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + (byte)AVar2 + (uint)*pbVar1 & 0xff;
    pAVar4[2] = this[uVar5 + 2];
    this[uVar5 + 2] = AVar2;
    if (param_2 <= uVar6) {
      uVar6 = 0;
    }
    pAVar4 = pAVar4 + 1;
  } while (pAVar4 != this + 0x100);
  return;
}

```

