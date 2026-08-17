# TaoCrypt__AES

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AsmDecrypt

```asm
// === 087a1a90 TaoCrypt::AES::AsmDecrypt  [0x087a1a90-0x87a1ad5] ===
 87a1a90:	55                   	push   %ebp
 87a1a91:	89 e5                	mov    %esp,%ebp
 87a1a93:	0f 6e df             	movd   %edi,%mm3
 87a1a96:	0f 6e e3             	movd   %ebx,%mm4
 87a1a99:	83 ec 04             	sub    $0x4,%esp
 87a1a9c:	0f 6e fd             	movd   %ebp,%mm7
 87a1a9f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a1aa2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a1aa5:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a1aa8:	8b 6d 14             	mov    0x14(%ebp),%ebp
 87a1aab:	8b 51 38             	mov    0x38(%ecx),%edx
 87a1aae:	8d 79 3c             	lea    0x3c(%ecx),%edi
 87a1ab1:	4a                   	dec    %edx
 87a1ab2:	0f 6e f7             	movd   %edi,%mm6
 87a1ab5:	0f 6e ea             	movd   %edx,%mm5
 87a1ab8:	8b 06                	mov    (%esi),%eax
 87a1aba:	8b 5e 04             	mov    0x4(%esi),%ebx
 87a1abd:	8b 4e 08             	mov    0x8(%esi),%ecx
 87a1ac0:	8b 56 0c             	mov    0xc(%esi),%edx
 87a1ac3:	0f c8                	bswap  %eax
 87a1ac5:	0f cb                	bswap  %ebx
 87a1ac7:	0f c9                	bswap  %ecx
 87a1ac9:	0f ca                	bswap  %edx
 87a1acb:	33 07                	xor    (%edi),%eax
 87a1acd:	33 5f 04             	xor    0x4(%edi),%ebx
 87a1ad0:	33 4f 08             	xor    0x8(%edi),%ecx
 87a1ad3:	33 57 0c             	xor    0xc(%edi),%edx

```

```c
// TaoCrypt::AES::AsmDecrypt @ 0x87a1a90

/* TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const */

void __thiscall TaoCrypt::AES::AsmDecrypt(AES *this,uchar *param_1,uchar *param_2,void *param_3)

{
  AES *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  AES *pAVar13;
  
  iVar6 = *(int *)(this + 0x38) + -1;
  uVar2 = *(uint *)param_1;
  uVar4 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ^
          *(uint *)(this + 0x3c);
  uVar8 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
          *(uint *)(this + 0x40);
  uVar4 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) ^
          *(uint *)(this + 0x44);
  uVar7 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
          *(uint *)(this + 0x48);
  pAVar1 = this + 0x3c;
  do {
    pAVar13 = pAVar1;
    uVar9 = uVar2 >> 0x10;
    uVar10 = uVar8 >> 0x10;
    uVar3 = uVar2 >> 8;
    uVar11 = uVar4 >> 0x10;
    uVar5 = uVar8 >> 8;
    uVar12 = uVar2 & 0xff;
    uVar2 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar8 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x10);
    uVar8 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar9 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar4 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x14);
    uVar4 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar3 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x18);
    uVar7 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar11 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar5 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + uVar12 * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x1c);
    iVar6 = iVar6 + -1;
    pAVar1 = pAVar13 + 0x10;
  } while (iVar6 != 0);
  uVar3 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar8 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x20);
  uVar9 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar2 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar4 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x24);
  uVar5 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar8 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar2 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x28);
  uVar2 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar8 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar2 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x2c);
  *(uint *)param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
  ;
  *(uint *)(param_2 + 4) =
       uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  *(uint *)(param_2 + 8) =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  *(uint *)(param_2 + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

```

---

## AsmEncrypt

```asm
// === 087a17d0 TaoCrypt::AES::AsmEncrypt  [0x087a17d0-0x87a1815] ===
 87a17d0:	55                   	push   %ebp
 87a17d1:	89 e5                	mov    %esp,%ebp
 87a17d3:	0f 6e df             	movd   %edi,%mm3
 87a17d6:	0f 6e e3             	movd   %ebx,%mm4
 87a17d9:	83 ec 04             	sub    $0x4,%esp
 87a17dc:	0f 6e fd             	movd   %ebp,%mm7
 87a17df:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a17e2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a17e5:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a17e8:	8b 6d 14             	mov    0x14(%ebp),%ebp
 87a17eb:	8b 51 38             	mov    0x38(%ecx),%edx
 87a17ee:	8d 79 3c             	lea    0x3c(%ecx),%edi
 87a17f1:	4a                   	dec    %edx
 87a17f2:	0f 6e f7             	movd   %edi,%mm6
 87a17f5:	0f 6e ea             	movd   %edx,%mm5
 87a17f8:	8b 06                	mov    (%esi),%eax
 87a17fa:	8b 5e 04             	mov    0x4(%esi),%ebx
 87a17fd:	8b 4e 08             	mov    0x8(%esi),%ecx
 87a1800:	8b 56 0c             	mov    0xc(%esi),%edx
 87a1803:	0f c8                	bswap  %eax
 87a1805:	0f cb                	bswap  %ebx
 87a1807:	0f c9                	bswap  %ecx
 87a1809:	0f ca                	bswap  %edx
 87a180b:	33 07                	xor    (%edi),%eax
 87a180d:	33 5f 04             	xor    0x4(%edi),%ebx
 87a1810:	33 4f 08             	xor    0x8(%edi),%ecx
 87a1813:	33 57 0c             	xor    0xc(%edi),%edx

```

```c
// TaoCrypt::AES::AsmEncrypt @ 0x87a17d0

/* TaoCrypt::AES::AsmEncrypt(unsigned char const*, unsigned char*, void*) const */

void __thiscall TaoCrypt::AES::AsmEncrypt(AES *this,uchar *param_1,uchar *param_2,void *param_3)

{
  AES *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  AES *pAVar13;
  
  iVar6 = *(int *)(this + 0x38) + -1;
  uVar2 = *(uint *)param_1;
  uVar4 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ^
          *(uint *)(this + 0x3c);
  uVar8 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
          *(uint *)(this + 0x40);
  uVar4 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) ^
          *(uint *)(this + 0x44);
  uVar7 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
          *(uint *)(this + 0x48);
  pAVar1 = this + 0x3c;
  do {
    pAVar13 = pAVar1;
    uVar9 = uVar2 & 0xff;
    uVar3 = uVar2 >> 8;
    uVar10 = uVar8 & 0xff;
    uVar11 = uVar2 >> 0x10;
    uVar5 = uVar8 >> 8;
    uVar12 = uVar4 & 0xff;
    uVar2 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar8 >> 0x10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x10);
    uVar8 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + uVar9 * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x14);
    uVar4 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar3 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + uVar10 * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x18);
    uVar7 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar11 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar5 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + uVar12 * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x1c);
    iVar6 = iVar6 + -1;
    pAVar1 = pAVar13 + 0x10;
  } while (iVar6 != 0);
  uVar3 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar8 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x20);
  uVar9 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar2 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x24);
  uVar5 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar2 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar8 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x28);
  uVar2 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar2 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar8 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar4 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x2c);
  *(uint *)param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
  ;
  *(uint *)(param_2 + 4) =
       uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  *(uint *)(param_2 + 8) =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  *(uint *)(param_2 + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

```

---

## Process

```asm
// === 087a3950 TaoCrypt::AES::Process  [0x087a3950-0x87a3d2f] ===
 87a3950:	55                   	push   %ebp
 87a3951:	89 e5                	mov    %esp,%ebp
 87a3953:	57                   	push   %edi
 87a3954:	56                   	push   %esi
 87a3955:	53                   	push   %ebx
 87a3956:	e8 9d f4 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a395b:	81 c3 3d 92 bc 00    	add    $0xbc923d,%ebx
 87a3961:	83 ec 5c             	sub    $0x5c,%esp
 87a3964:	8b 75 08             	mov    0x8(%ebp),%esi
 87a3967:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a396a:	8b 45 14             	mov    0x14(%ebp),%eax
 87a396d:	8b 93 38 fa ff ff    	mov    -0x5c8(%ebx),%edx
 87a3973:	80 3a 00             	cmpb   $0x0,(%edx)
 87a3976:	0f 84 b4 00 00 00    	je     87a3a30 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xe0>
 87a397c:	8b 56 34             	mov    0x34(%esi),%edx
 87a397f:	c1 e8 04             	shr    $0x4,%eax
 87a3982:	85 d2                	test   %edx,%edx
 87a3984:	0f 85 8e 00 00 00    	jne    87a3a18 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xc8>
 87a398a:	85 c0                	test   %eax,%eax
 87a398c:	0f 84 8f 00 00 00    	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3992:	83 e8 01             	sub    $0x1,%eax
 87a3995:	89 f1                	mov    %esi,%ecx
 87a3997:	89 c6                	mov    %eax,%esi
 87a3999:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a399c:	89 7d cc             	mov    %edi,-0x34(%ebp)
 87a399f:	89 d7                	mov    %edx,%edi
 87a39a1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a39a4:	89 c8                	mov    %ecx,%eax
 87a39a6:	eb 2f                	jmp    87a39d7 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x87>
 87a39a8:	8b 93 d8 ff ff ff    	mov    -0x28(%ebx),%edx
 87a39ae:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a39b1:	8b 12                	mov    (%edx),%edx
 87a39b3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a39b7:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a39ba:	89 04 24             	mov    %eax,(%esp)
 87a39bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a39c1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a39c5:	e8 06 de ff ff       	call   87a17d0 <_ZNK8TaoCrypt3AES10AsmEncryptEPKhPhPv>
 87a39ca:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a39cd:	83 c7 10             	add    $0x10,%edi
 87a39d0:	85 f6                	test   %esi,%esi
 87a39d2:	74 4d                	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a39d4:	83 ee 01             	sub    $0x1,%esi
 87a39d7:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a39da:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a39dd:	01 fa                	add    %edi,%edx
 87a39df:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87a39e2:	8b 50 30             	mov    0x30(%eax),%edx
 87a39e5:	01 f9                	add    %edi,%ecx
 87a39e7:	85 d2                	test   %edx,%edx
 87a39e9:	74 bd                	je     87a39a8 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x58>
 87a39eb:	8b 93 88 fe ff ff    	mov    -0x178(%ebx),%edx
 87a39f1:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a39f4:	8b 12                	mov    (%edx),%edx
 87a39f6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a39fa:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a39fd:	89 04 24             	mov    %eax,(%esp)
 87a3a00:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a3a04:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a3a08:	e8 83 e0 ff ff       	call   87a1a90 <_ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv>
 87a3a0d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a3a10:	eb bb                	jmp    87a39cd <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x7d>
 87a3a12:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a3a18:	83 fa 01             	cmp    $0x1,%edx
 87a3a1b:	0f 84 ef 00 00 00    	je     87a3b10 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x1c0>
 87a3a21:	83 c4 5c             	add    $0x5c,%esp
 87a3a24:	5b                   	pop    %ebx
 87a3a25:	5e                   	pop    %esi
 87a3a26:	5f                   	pop    %edi
 87a3a27:	5d                   	pop    %ebp
 87a3a28:	c3                   	ret
 87a3a29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a3a30:	8b 56 34             	mov    0x34(%esi),%edx
 87a3a33:	85 d2                	test   %edx,%edx
 87a3a35:	75 51                	jne    87a3a88 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x138>
 87a3a37:	31 d2                	xor    %edx,%edx
 87a3a39:	f7 76 04             	divl   0x4(%esi)
 87a3a3c:	85 c0                	test   %eax,%eax
 87a3a3e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3a41:	74 de                	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3a43:	89 f8                	mov    %edi,%eax
 87a3a45:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a3a48:	89 f7                	mov    %esi,%edi
 87a3a4a:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87a3a4d:	8d 76 00             	lea    0x0(%esi),%esi
 87a3a50:	8b 17                	mov    (%edi),%edx
 87a3a52:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a3a55:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a3a59:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3a5d:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 87a3a60:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a3a67:	00 
 87a3a68:	89 3c 24             	mov    %edi,(%esp)
 87a3a6b:	ff 52 0c             	call   *0xc(%edx)
 87a3a6e:	8b 57 04             	mov    0x4(%edi),%edx
 87a3a71:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 87a3a74:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a3a77:	01 d1                	add    %edx,%ecx
 87a3a79:	01 d0                	add    %edx,%eax
 87a3a7b:	83 ee 01             	sub    $0x1,%esi
 87a3a7e:	75 d0                	jne    87a3a50 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x100>
 87a3a80:	eb 9f                	jmp    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3a82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a3a88:	83 fa 01             	cmp    $0x1,%edx
 87a3a8b:	75 94                	jne    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3a8d:	8b 4e 30             	mov    0x30(%esi),%ecx
 87a3a90:	85 c9                	test   %ecx,%ecx
 87a3a92:	0f 85 86 01 00 00    	jne    87a3c1e <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x2ce>
 87a3a98:	31 d2                	xor    %edx,%edx
 87a3a9a:	f7 76 04             	divl   0x4(%esi)
 87a3a9d:	85 c0                	test   %eax,%eax
 87a3a9f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3aa2:	0f 84 79 ff ff ff    	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3aa8:	89 fa                	mov    %edi,%edx
 87a3aaa:	8b 46 04             	mov    0x4(%esi),%eax
 87a3aad:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a3ab0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3ab4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3ab8:	8b 46 08             	mov    0x8(%esi),%eax
 87a3abb:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a3abe:	89 04 24             	mov    %eax,(%esp)
 87a3ac1:	e8 4a 39 fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 87a3ac6:	8b 46 08             	mov    0x8(%esi),%eax
 87a3ac9:	8b 0e                	mov    (%esi),%ecx
 87a3acb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a3ad2:	00 
 87a3ad3:	89 34 24             	mov    %esi,(%esp)
 87a3ad6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a3ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3ade:	ff 51 0c             	call   *0xc(%ecx)
 87a3ae1:	8b 46 08             	mov    0x8(%esi),%eax
 87a3ae4:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a3ae7:	89 3c 24             	mov    %edi,(%esp)
 87a3aea:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3aee:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3af2:	e8 a9 9d 8d ff       	call   807d8a0 <memcpy@plt>
 87a3af7:	8b 46 04             	mov    0x4(%esi),%eax
 87a3afa:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a3afd:	01 c7                	add    %eax,%edi
 87a3aff:	01 c2                	add    %eax,%edx
 87a3b01:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 87a3b05:	75 a9                	jne    87a3ab0 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x160>
 87a3b07:	e9 15 ff ff ff       	jmp    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3b0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a3b10:	8b 56 30             	mov    0x30(%esi),%edx
 87a3b13:	85 d2                	test   %edx,%edx
 87a3b15:	0f 84 85 00 00 00    	je     87a3ba0 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x250>
 87a3b1b:	85 c0                	test   %eax,%eax
 87a3b1d:	8d 76 00             	lea    0x0(%esi),%esi
 87a3b20:	0f 84 fb fe ff ff    	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3b26:	8d 56 10             	lea    0x10(%esi),%edx
 87a3b29:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3b2c:	89 f0                	mov    %esi,%eax
 87a3b2e:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a3b31:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a3b38:	8b 8b 88 fe ff ff    	mov    -0x178(%ebx),%ecx
 87a3b3e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a3b41:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a3b44:	8b 09                	mov    (%ecx),%ecx
 87a3b46:	89 74 24 08          	mov    %esi,0x8(%esp)
 87a3b4a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a3b4e:	89 04 24             	mov    %eax,(%esp)
 87a3b51:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a3b55:	e8 36 df ff ff       	call   87a1a90 <_ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv>
 87a3b5a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a3b5d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a3b60:	8b 48 10             	mov    0x10(%eax),%ecx
 87a3b63:	31 0e                	xor    %ecx,(%esi)
 87a3b65:	8b 48 14             	mov    0x14(%eax),%ecx
 87a3b68:	31 4e 04             	xor    %ecx,0x4(%esi)
 87a3b6b:	8b 48 18             	mov    0x18(%eax),%ecx
 87a3b6e:	31 4e 08             	xor    %ecx,0x8(%esi)
 87a3b71:	8b 48 1c             	mov    0x1c(%eax),%ecx
 87a3b74:	31 4e 0c             	xor    %ecx,0xc(%esi)
 87a3b77:	83 c6 10             	add    $0x10,%esi
 87a3b7a:	8b 0f                	mov    (%edi),%ecx
 87a3b7c:	89 0a                	mov    %ecx,(%edx)
 87a3b7e:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a3b81:	89 4a 04             	mov    %ecx,0x4(%edx)
 87a3b84:	8b 4f 08             	mov    0x8(%edi),%ecx
 87a3b87:	89 4a 08             	mov    %ecx,0x8(%edx)
 87a3b8a:	8b 4f 0c             	mov    0xc(%edi),%ecx
 87a3b8d:	83 c7 10             	add    $0x10,%edi
 87a3b90:	89 4a 0c             	mov    %ecx,0xc(%edx)
 87a3b93:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 87a3b97:	75 9f                	jne    87a3b38 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x1e8>
 87a3b99:	e9 83 fe ff ff       	jmp    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3b9e:	66 90                	xchg   %ax,%ax
 87a3ba0:	85 c0                	test   %eax,%eax
 87a3ba2:	0f 84 79 fe ff ff    	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3ba8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a3bab:	8d 56 10             	lea    0x10(%esi),%edx
 87a3bae:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3bb1:	89 f8                	mov    %edi,%eax
 87a3bb3:	89 d7                	mov    %edx,%edi
 87a3bb5:	8d 76 00             	lea    0x0(%esi),%esi
 87a3bb8:	8b 10                	mov    (%eax),%edx
 87a3bba:	31 56 10             	xor    %edx,0x10(%esi)
 87a3bbd:	8b 50 04             	mov    0x4(%eax),%edx
 87a3bc0:	31 56 14             	xor    %edx,0x14(%esi)
 87a3bc3:	8b 50 08             	mov    0x8(%eax),%edx
 87a3bc6:	31 56 18             	xor    %edx,0x18(%esi)
 87a3bc9:	8b 50 0c             	mov    0xc(%eax),%edx
 87a3bcc:	31 56 1c             	xor    %edx,0x1c(%esi)
 87a3bcf:	8b 93 d8 ff ff ff    	mov    -0x28(%ebx),%edx
 87a3bd5:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a3bd8:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 87a3bdb:	8b 12                	mov    (%edx),%edx
 87a3bdd:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a3be1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a3be5:	89 34 24             	mov    %esi,(%esp)
 87a3be8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a3bec:	e8 df db ff ff       	call   87a17d0 <_ZNK8TaoCrypt3AES10AsmEncryptEPKhPhPv>
 87a3bf1:	8b 17                	mov    (%edi),%edx
 87a3bf3:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 87a3bf6:	89 11                	mov    %edx,(%ecx)
 87a3bf8:	8b 57 04             	mov    0x4(%edi),%edx
 87a3bfb:	89 51 04             	mov    %edx,0x4(%ecx)
 87a3bfe:	8b 57 08             	mov    0x8(%edi),%edx
 87a3c01:	89 51 08             	mov    %edx,0x8(%ecx)
 87a3c04:	8b 57 0c             	mov    0xc(%edi),%edx
 87a3c07:	89 51 0c             	mov    %edx,0xc(%ecx)
 87a3c0a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a3c0d:	83 c1 10             	add    $0x10,%ecx
 87a3c10:	83 c0 10             	add    $0x10,%eax
 87a3c13:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 87a3c17:	75 9f                	jne    87a3bb8 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x268>
 87a3c19:	e9 03 fe ff ff       	jmp    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3c1e:	31 d2                	xor    %edx,%edx
 87a3c20:	f7 76 04             	divl   0x4(%esi)
 87a3c23:	85 c0                	test   %eax,%eax
 87a3c25:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3c28:	0f 84 f3 fd ff ff    	je     87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3c2e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 87a3c31:	8b 46 04             	mov    0x4(%esi),%eax
 87a3c34:	89 55 cc             	mov    %edx,-0x34(%ebp)
 87a3c37:	89 fa                	mov    %edi,%edx
 87a3c39:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a3c3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a3c40:	8b 4e 0c             	mov    0xc(%esi),%ecx
 87a3c43:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a3c46:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3c4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3c4e:	89 0c 24             	mov    %ecx,(%esp)
 87a3c51:	e8 4a 9c 8d ff       	call   807d8a0 <memcpy@plt>
 87a3c56:	8b 06                	mov    (%esi),%eax
 87a3c58:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87a3c5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a3c63:	00 
 87a3c64:	8b 4e 0c             	mov    0xc(%esi),%ecx
 87a3c67:	89 34 24             	mov    %esi,(%esp)
 87a3c6a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a3c6e:	ff 50 0c             	call   *0xc(%eax)
 87a3c71:	8b 46 04             	mov    0x4(%esi),%eax
 87a3c74:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3c78:	8b 46 08             	mov    0x8(%esi),%eax
 87a3c7b:	89 3c 24             	mov    %edi,(%esp)
 87a3c7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3c82:	e8 89 37 fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 87a3c87:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a3c8a:	8b 46 08             	mov    0x8(%esi),%eax
 87a3c8d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3c91:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a3c94:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3c98:	89 0c 24             	mov    %ecx,(%esp)
 87a3c9b:	e8 00 9c 8d ff       	call   807d8a0 <memcpy@plt>
 87a3ca0:	8b 46 0c             	mov    0xc(%esi),%eax
 87a3ca3:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a3ca6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3caa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3cae:	8b 46 08             	mov    0x8(%esi),%eax
 87a3cb1:	89 04 24             	mov    %eax,(%esp)
 87a3cb4:	e8 e7 9b 8d ff       	call   807d8a0 <memcpy@plt>
 87a3cb9:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a3cbc:	8b 46 0c             	mov    0xc(%esi),%eax
 87a3cbf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3cc3:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a3cc6:	89 04 24             	mov    %eax,(%esp)
 87a3cc9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a3ccd:	e8 ce 9b 8d ff       	call   807d8a0 <memcpy@plt>
 87a3cd2:	8b 46 04             	mov    0x4(%esi),%eax
 87a3cd5:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a3cd8:	01 c7                	add    %eax,%edi
 87a3cda:	01 c2                	add    %eax,%edx
 87a3cdc:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 87a3ce0:	0f 85 5a ff ff ff    	jne    87a3c40 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0x2f0>
 87a3ce6:	e9 36 fd ff ff       	jmp    87a3a21 <_ZN8TaoCrypt3AES7ProcessEPhPKhj+0xd1>
 87a3ceb:	90                   	nop
 87a3cec:	90                   	nop
 87a3ced:	90                   	nop
 87a3cee:	90                   	nop
 87a3cef:	90                   	nop

087a3cf0 <_ZN8TaoCrypt3AESD1Ev>:
 87a3cf0:	e8 cf 08 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a3cf5:	81 c1 a3 8e bc 00    	add    $0xbc8ea3,%ecx
 87a3cfb:	55                   	push   %ebp
 87a3cfc:	89 e5                	mov    %esp,%ebp
 87a3cfe:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a3d04:	8d 50 08             	lea    0x8(%eax),%edx
 87a3d07:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3d0a:	89 10                	mov    %edx,(%eax)
 87a3d0c:	5d                   	pop    %ebp
 87a3d0d:	c3                   	ret
 87a3d0e:	90                   	nop
 87a3d0f:	90                   	nop

087a3d10 <_ZN8TaoCrypt3AESD0Ev>:
 87a3d10:	e8 af 08 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a3d15:	81 c1 83 8e bc 00    	add    $0xbc8e83,%ecx
 87a3d1b:	55                   	push   %ebp
 87a3d1c:	89 e5                	mov    %esp,%ebp
 87a3d1e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a3d24:	8d 50 08             	lea    0x8(%eax),%edx
 87a3d27:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3d2a:	89 10                	mov    %edx,(%eax)
 87a3d2c:	5d                   	pop    %ebp
 87a3d2d:	c3                   	ret
 87a3d2e:	90                   	nop
 87a3d2f:	90                   	nop

```

```c
// TaoCrypt::AES::Process @ 0x87a3950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::AES::Process(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  AES *pAVar2;
  uint uVar3;
  size_t __n;
  int iVar4;
  uint local_30;
  undefined1 local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x87a395b;
  if (*PTR_isMMX_0936c5d0 == '\0') {
    if (*(int *)(this + 0x34) == 0) {
      for (uVar3 = param_3 / *(uint *)(this + 4); uVar3 != 0; uVar3 = uVar3 - 1) {
        (**(code **)(*(int *)this + 0xc))(this,param_2,0,param_1);
        param_1 = param_1 + *(int *)(this + 4);
        param_2 = param_2 + *(int *)(this + 4);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        local_30 = param_3 / *(uint *)(this + 4);
        if (local_30 != 0) {
          uVar3 = *(uint *)(this + 4);
          do {
            xorbuf(*(uchar **)(this + 8),param_2,uVar3);
            (**(code **)(*(int *)this + 0xc))
                      (this,*(undefined4 *)(this + 8),0,*(undefined4 *)(this + 8));
            memcpy(param_1,*(void **)(this + 8),*(size_t *)(this + 4));
            uVar3 = *(uint *)(this + 4);
            param_1 = param_1 + uVar3;
            param_2 = param_2 + uVar3;
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
      else {
        local_30 = param_3 / *(uint *)(this + 4);
        if (local_30 != 0) {
          __n = *(size_t *)(this + 4);
          do {
            memcpy(*(void **)(this + 0xc),param_2,__n);
            (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0xc),0,param_1);
            xorbuf(param_1,*(uchar **)(this + 8),*(uint *)(this + 4));
            memcpy(local_2c,*(void **)(this + 8),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 8),*(void **)(this + 0xc),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 0xc),local_2c,*(size_t *)(this + 4));
            __n = *(size_t *)(this + 4);
            param_1 = param_1 + __n;
            param_2 = param_2 + __n;
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
    }
  }
  else {
    local_30 = param_3 >> 4;
    if (*(int *)(this + 0x34) == 0) {
      if (local_30 != 0) {
        iVar4 = 0;
        do {
          local_30 = local_30 - 1;
          if (*(int *)(this + 0x30) == 0) {
            AsmEncrypt(this,param_2 + iVar4,param_1 + iVar4,*(void **)PTR_Te0_0936cb70);
          }
          else {
            AsmDecrypt(this,param_2 + iVar4,param_1 + iVar4,*(void **)PTR_Td0_0936ca20);
          }
          iVar4 = iVar4 + 0x10;
        } while (local_30 != 0);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        if (local_30 != 0) {
          pAVar2 = this + 0x10;
          do {
            *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ *(uint *)param_2;
            *(uint *)(this + 0x14) = *(uint *)(this + 0x14) ^ *(uint *)((int)param_2 + 4);
            *(uint *)(this + 0x18) = *(uint *)(this + 0x18) ^ *(uint *)((int)param_2 + 8);
            *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) ^ *(uint *)((int)param_2 + 0xc);
            AsmEncrypt(this,(uchar *)pAVar2,(uchar *)pAVar2,*(void **)PTR_Te0_0936cb70);
            *(undefined4 *)param_1 = *(undefined4 *)pAVar2;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x14);
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x18);
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x1c);
            param_1 = param_1 + 0x10;
            param_2 = (uchar *)((int)param_2 + 0x10);
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
      else if (local_30 != 0) {
        do {
          AsmDecrypt(this,param_2,param_1,*(void **)PTR_Td0_0936ca20);
          *(uint *)param_1 = *(uint *)param_1 ^ *(uint *)(this + 0x10);
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) ^ *(uint *)(this + 0x14);
          *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) ^ *(uint *)(this + 0x18);
          *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) ^ *(uint *)(this + 0x1c);
          param_1 = (uchar *)((int)param_1 + 0x10);
          *(undefined4 *)(this + 0x10) = *(undefined4 *)param_2;
          *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 8);
          puVar1 = param_2 + 0xc;
          param_2 = param_2 + 0x10;
          *(undefined4 *)(this + 0x1c) = *(undefined4 *)puVar1;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
  }
  return;
}

```

---

## ProcessAndXorBlock

```asm
// === 087a38e0 TaoCrypt::AES::ProcessAndXorBlock  [0x087a38e0-0x87a394f] ===
 87a38e0:	55                   	push   %ebp
 87a38e1:	89 e5                	mov    %esp,%ebp
 87a38e3:	83 ec 18             	sub    $0x18,%esp
 87a38e6:	8b 45 08             	mov    0x8(%ebp),%eax
 87a38e9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a38ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a38ef:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a38f2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a38f5:	e8 fe f4 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a38fa:	81 c3 9e 92 bc 00    	add    $0xbc929e,%ebx
 87a3900:	8b 75 14             	mov    0x14(%ebp),%esi
 87a3903:	83 78 30 00          	cmpl   $0x0,0x30(%eax)
 87a3907:	74 1f                	je     87a3928 <_ZNK8TaoCrypt3AES18ProcessAndXorBlockEPKhS2_Ph+0x48>
 87a3909:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87a390d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3911:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3915:	89 04 24             	mov    %eax,(%esp)
 87a3918:	e8 93 f4 ff ff       	call   87a2db0 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph>
 87a391d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a3920:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a3923:	89 ec                	mov    %ebp,%esp
 87a3925:	5d                   	pop    %ebp
 87a3926:	c3                   	ret
 87a3927:	90                   	nop
 87a3928:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87a392c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3930:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3934:	89 04 24             	mov    %eax,(%esp)
 87a3937:	e8 04 fa ff ff       	call   87a3340 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph>
 87a393c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a393f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a3942:	89 ec                	mov    %ebp,%esp
 87a3944:	5d                   	pop    %ebp
 87a3945:	c3                   	ret
 87a3946:	8d 76 00             	lea    0x0(%esi),%esi
 87a3949:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::AES::ProcessAndXorBlock @ 0x87a38e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*)
   const */

void __thiscall
TaoCrypt::AES::ProcessAndXorBlock(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  if (*(int *)(this + 0x30) != 0) {
    decrypt(this,param_1,param_2,param_3);
    return;
  }
  encrypt(this,param_1,param_2,param_3);
  return;
}

```

---

## SetKey

```asm
// === 087a1d50 TaoCrypt::AES::SetKey  [0x087a1d50-0x87a2daf] ===
 87a1d50:	55                   	push   %ebp
 87a1d51:	89 e5                	mov    %esp,%ebp
 87a1d53:	57                   	push   %edi
 87a1d54:	56                   	push   %esi
 87a1d55:	53                   	push   %ebx
 87a1d56:	83 ec 4c             	sub    $0x4c,%esp
 87a1d59:	8b 55 10             	mov    0x10(%ebp),%edx
 87a1d5c:	8b 75 08             	mov    0x8(%ebp),%esi
 87a1d5f:	e8 94 10 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1d64:	81 c3 34 ae bc 00    	add    $0xbcae34,%ebx
 87a1d6a:	c1 ea 02             	shr    $0x2,%edx
 87a1d6d:	8d 42 06             	lea    0x6(%edx),%eax
 87a1d70:	89 46 38             	mov    %eax,0x38(%esi)
 87a1d73:	8b 45 10             	mov    0x10(%ebp),%eax
 87a1d76:	8d 7e 3c             	lea    0x3c(%esi),%edi
 87a1d79:	89 55 cc             	mov    %edx,-0x34(%ebp)
 87a1d7c:	89 3c 24             	mov    %edi,(%esp)
 87a1d7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a1d83:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a1d86:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1d8a:	e8 11 bb 8d ff       	call   807d8a0 <memcpy@plt>
 87a1d8f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a1d92:	8b 45 10             	mov    0x10(%ebp),%eax
 87a1d95:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a1d9c:	00 
 87a1d9d:	c1 e2 02             	shl    $0x2,%edx
 87a1da0:	2b 55 10             	sub    0x10(%ebp),%edx
 87a1da3:	8d 04 07             	lea    (%edi,%eax,1),%eax
 87a1da6:	89 04 24             	mov    %eax,(%esp)
 87a1da9:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a1dad:	e8 0e bf 8d ff       	call   807dcc0 <memset@plt>
 87a1db2:	8b 45 10             	mov    0x10(%ebp),%eax
 87a1db5:	83 c0 03             	add    $0x3,%eax
 87a1db8:	c1 e8 02             	shr    $0x2,%eax
 87a1dbb:	85 c0                	test   %eax,%eax
 87a1dbd:	74 30                	je     87a1def <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x9f>
 87a1dbf:	89 7d e0             	mov    %edi,-0x20(%ebp)
 87a1dc2:	31 d2                	xor    %edx,%edx
 87a1dc4:	89 c7                	mov    %eax,%edi
 87a1dc6:	66 90                	xchg   %ax,%ax
 87a1dc8:	8b 4c 96 3c          	mov    0x3c(%esi,%edx,4),%ecx
 87a1dcc:	89 c8                	mov    %ecx,%eax
 87a1dce:	c1 c8 18             	ror    $0x18,%eax
 87a1dd1:	c1 c9 08             	ror    $0x8,%ecx
 87a1dd4:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a1dd9:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a1ddf:	09 c8                	or     %ecx,%eax
 87a1de1:	89 44 96 3c          	mov    %eax,0x3c(%esi,%edx,4)
 87a1de5:	83 c2 01             	add    $0x1,%edx
 87a1de8:	39 fa                	cmp    %edi,%edx
 87a1dea:	75 dc                	jne    87a1dc8 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x78>
 87a1dec:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a1def:	83 7d 10 18          	cmpl   $0x18,0x10(%ebp)
 87a1df3:	0f 84 b6 0b 00 00    	je     87a29af <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xc5f>
 87a1df9:	83 7d 10 20          	cmpl   $0x20,0x10(%ebp)
 87a1dfd:	0f 84 5a 06 00 00    	je     87a245d <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x70d>
 87a1e03:	83 7d 10 10          	cmpl   $0x10,0x10(%ebp)
 87a1e07:	74 12                	je     87a1e1b <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xcb>
 87a1e09:	83 7e 30 01          	cmpl   $0x1,0x30(%esi)
 87a1e0d:	0f 84 6c 04 00 00    	je     87a227f <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x52f>
 87a1e13:	83 c4 4c             	add    $0x4c,%esp
 87a1e16:	5b                   	pop    %ebx
 87a1e17:	5e                   	pop    %esi
 87a1e18:	5f                   	pop    %edi
 87a1e19:	5d                   	pop    %ebp
 87a1e1a:	c3                   	ret
 87a1e1b:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a1e21:	8d 57 10             	lea    0x10(%edi),%edx
 87a1e24:	8b 83 1c fc ff ff    	mov    -0x3e4(%ebx),%eax
 87a1e2a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a1e2d:	8b 56 3c             	mov    0x3c(%esi),%edx
 87a1e30:	33 11                	xor    (%ecx),%edx
 87a1e32:	8b 00                	mov    (%eax),%eax
 87a1e34:	0f b6 4f 0c          	movzbl 0xc(%edi),%ecx
 87a1e38:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1e3b:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a1e41:	31 ca                	xor    %ecx,%edx
 87a1e43:	8b 4f 0c             	mov    0xc(%edi),%ecx
 87a1e46:	c1 e9 10             	shr    $0x10,%ecx
 87a1e49:	0f b6 c9             	movzbl %cl,%ecx
 87a1e4c:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1e4f:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a1e55:	31 ca                	xor    %ecx,%edx
 87a1e57:	8b 4f 0c             	mov    0xc(%edi),%ecx
 87a1e5a:	0f b6 cd             	movzbl %ch,%ecx
 87a1e5d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1e60:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a1e66:	31 ca                	xor    %ecx,%edx
 87a1e68:	8b 4f 0c             	mov    0xc(%edi),%ecx
 87a1e6b:	c1 e9 18             	shr    $0x18,%ecx
 87a1e6e:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a1e72:	31 ca                	xor    %ecx,%edx
 87a1e74:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a1e77:	89 57 10             	mov    %edx,0x10(%edi)
 87a1e7a:	31 d1                	xor    %edx,%ecx
 87a1e7c:	89 4f 14             	mov    %ecx,0x14(%edi)
 87a1e7f:	33 4f 08             	xor    0x8(%edi),%ecx
 87a1e82:	89 4f 18             	mov    %ecx,0x18(%edi)
 87a1e85:	33 4f 0c             	xor    0xc(%edi),%ecx
 87a1e88:	89 4f 1c             	mov    %ecx,0x1c(%edi)
 87a1e8b:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a1e8e:	8d 4f 20             	lea    0x20(%edi),%ecx
 87a1e91:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a1e94:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a1e9a:	33 51 04             	xor    0x4(%ecx),%edx
 87a1e9d:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a1ea1:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1ea4:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a1eaa:	31 ca                	xor    %ecx,%edx
 87a1eac:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1eaf:	c1 e9 10             	shr    $0x10,%ecx
 87a1eb2:	0f b6 c9             	movzbl %cl,%ecx
 87a1eb5:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1eb8:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a1ebe:	31 ca                	xor    %ecx,%edx
 87a1ec0:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1ec3:	0f b6 cd             	movzbl %ch,%ecx
 87a1ec6:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1ec9:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a1ecf:	31 ca                	xor    %ecx,%edx
 87a1ed1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1ed4:	c1 e9 18             	shr    $0x18,%ecx
 87a1ed7:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a1edb:	31 ca                	xor    %ecx,%edx
 87a1edd:	89 57 20             	mov    %edx,0x20(%edi)
 87a1ee0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a1ee3:	33 51 04             	xor    0x4(%ecx),%edx
 87a1ee6:	89 51 14             	mov    %edx,0x14(%ecx)
 87a1ee9:	33 51 08             	xor    0x8(%ecx),%edx
 87a1eec:	89 51 18             	mov    %edx,0x18(%ecx)
 87a1eef:	33 57 1c             	xor    0x1c(%edi),%edx
 87a1ef2:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a1ef5:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a1efb:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a1efe:	8d 57 30             	lea    0x30(%edi),%edx
 87a1f01:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a1f04:	8b 57 20             	mov    0x20(%edi),%edx
 87a1f07:	33 51 08             	xor    0x8(%ecx),%edx
 87a1f0a:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a1f0e:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1f11:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a1f17:	31 ca                	xor    %ecx,%edx
 87a1f19:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1f1c:	c1 e9 10             	shr    $0x10,%ecx
 87a1f1f:	0f b6 c9             	movzbl %cl,%ecx
 87a1f22:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1f25:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a1f2b:	31 ca                	xor    %ecx,%edx
 87a1f2d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1f30:	0f b6 cd             	movzbl %ch,%ecx
 87a1f33:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1f36:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a1f3c:	31 ca                	xor    %ecx,%edx
 87a1f3e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1f41:	c1 e9 18             	shr    $0x18,%ecx
 87a1f44:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a1f48:	31 ca                	xor    %ecx,%edx
 87a1f4a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a1f4d:	89 57 30             	mov    %edx,0x30(%edi)
 87a1f50:	33 51 04             	xor    0x4(%ecx),%edx
 87a1f53:	89 51 14             	mov    %edx,0x14(%ecx)
 87a1f56:	33 51 08             	xor    0x8(%ecx),%edx
 87a1f59:	89 51 18             	mov    %edx,0x18(%ecx)
 87a1f5c:	33 57 2c             	xor    0x2c(%edi),%edx
 87a1f5f:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a1f62:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a1f68:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a1f6b:	8d 57 40             	lea    0x40(%edi),%edx
 87a1f6e:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a1f71:	8b 57 30             	mov    0x30(%edi),%edx
 87a1f74:	33 51 0c             	xor    0xc(%ecx),%edx
 87a1f77:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a1f7b:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1f7e:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a1f84:	31 ca                	xor    %ecx,%edx
 87a1f86:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1f89:	c1 e9 10             	shr    $0x10,%ecx
 87a1f8c:	0f b6 c9             	movzbl %cl,%ecx
 87a1f8f:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1f92:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a1f98:	31 ca                	xor    %ecx,%edx
 87a1f9a:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1f9d:	0f b6 cd             	movzbl %ch,%ecx
 87a1fa0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1fa3:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a1fa9:	31 ca                	xor    %ecx,%edx
 87a1fab:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1fae:	c1 e9 18             	shr    $0x18,%ecx
 87a1fb1:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a1fb5:	31 ca                	xor    %ecx,%edx
 87a1fb7:	89 57 40             	mov    %edx,0x40(%edi)
 87a1fba:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a1fbd:	33 51 04             	xor    0x4(%ecx),%edx
 87a1fc0:	89 51 14             	mov    %edx,0x14(%ecx)
 87a1fc3:	33 51 08             	xor    0x8(%ecx),%edx
 87a1fc6:	89 51 18             	mov    %edx,0x18(%ecx)
 87a1fc9:	33 57 3c             	xor    0x3c(%edi),%edx
 87a1fcc:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a1fcf:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a1fd5:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a1fd8:	8d 57 50             	lea    0x50(%edi),%edx
 87a1fdb:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a1fde:	8b 57 40             	mov    0x40(%edi),%edx
 87a1fe1:	33 51 10             	xor    0x10(%ecx),%edx
 87a1fe4:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a1fe8:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1feb:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a1ff1:	31 ca                	xor    %ecx,%edx
 87a1ff3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a1ff6:	c1 e9 10             	shr    $0x10,%ecx
 87a1ff9:	0f b6 c9             	movzbl %cl,%ecx
 87a1ffc:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a1fff:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2005:	31 ca                	xor    %ecx,%edx
 87a2007:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a200a:	0f b6 cd             	movzbl %ch,%ecx
 87a200d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2010:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2016:	31 ca                	xor    %ecx,%edx
 87a2018:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a201b:	c1 e9 18             	shr    $0x18,%ecx
 87a201e:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2022:	31 ca                	xor    %ecx,%edx
 87a2024:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2027:	89 57 50             	mov    %edx,0x50(%edi)
 87a202a:	33 51 04             	xor    0x4(%ecx),%edx
 87a202d:	89 51 14             	mov    %edx,0x14(%ecx)
 87a2030:	33 51 08             	xor    0x8(%ecx),%edx
 87a2033:	89 51 18             	mov    %edx,0x18(%ecx)
 87a2036:	33 57 4c             	xor    0x4c(%edi),%edx
 87a2039:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a203c:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2042:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2045:	8d 57 60             	lea    0x60(%edi),%edx
 87a2048:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a204b:	8b 57 50             	mov    0x50(%edi),%edx
 87a204e:	33 51 14             	xor    0x14(%ecx),%edx
 87a2051:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2055:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2058:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a205e:	31 ca                	xor    %ecx,%edx
 87a2060:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2063:	c1 e9 10             	shr    $0x10,%ecx
 87a2066:	0f b6 c9             	movzbl %cl,%ecx
 87a2069:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a206c:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2072:	31 ca                	xor    %ecx,%edx
 87a2074:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2077:	0f b6 cd             	movzbl %ch,%ecx
 87a207a:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a207d:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2083:	31 ca                	xor    %ecx,%edx
 87a2085:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2088:	c1 e9 18             	shr    $0x18,%ecx
 87a208b:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a208f:	31 ca                	xor    %ecx,%edx
 87a2091:	89 57 60             	mov    %edx,0x60(%edi)
 87a2094:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2097:	33 51 04             	xor    0x4(%ecx),%edx
 87a209a:	89 51 14             	mov    %edx,0x14(%ecx)
 87a209d:	33 51 08             	xor    0x8(%ecx),%edx
 87a20a0:	89 51 18             	mov    %edx,0x18(%ecx)
 87a20a3:	33 57 5c             	xor    0x5c(%edi),%edx
 87a20a6:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a20a9:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a20af:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a20b2:	8d 57 70             	lea    0x70(%edi),%edx
 87a20b5:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a20b8:	8b 57 60             	mov    0x60(%edi),%edx
 87a20bb:	33 51 18             	xor    0x18(%ecx),%edx
 87a20be:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a20c2:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a20c5:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a20cb:	31 ca                	xor    %ecx,%edx
 87a20cd:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a20d0:	c1 e9 10             	shr    $0x10,%ecx
 87a20d3:	0f b6 c9             	movzbl %cl,%ecx
 87a20d6:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a20d9:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a20df:	31 ca                	xor    %ecx,%edx
 87a20e1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a20e4:	0f b6 cd             	movzbl %ch,%ecx
 87a20e7:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a20ea:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a20f0:	31 ca                	xor    %ecx,%edx
 87a20f2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a20f5:	c1 e9 18             	shr    $0x18,%ecx
 87a20f8:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a20fc:	31 ca                	xor    %ecx,%edx
 87a20fe:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2101:	89 57 70             	mov    %edx,0x70(%edi)
 87a2104:	33 51 04             	xor    0x4(%ecx),%edx
 87a2107:	89 51 14             	mov    %edx,0x14(%ecx)
 87a210a:	33 51 08             	xor    0x8(%ecx),%edx
 87a210d:	89 51 18             	mov    %edx,0x18(%ecx)
 87a2110:	33 57 6c             	xor    0x6c(%edi),%edx
 87a2113:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2116:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a211c:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a211f:	8d 97 80 00 00 00    	lea    0x80(%edi),%edx
 87a2125:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a2128:	8b 57 70             	mov    0x70(%edi),%edx
 87a212b:	33 51 1c             	xor    0x1c(%ecx),%edx
 87a212e:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2132:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2135:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a213b:	31 ca                	xor    %ecx,%edx
 87a213d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2140:	c1 e9 10             	shr    $0x10,%ecx
 87a2143:	0f b6 c9             	movzbl %cl,%ecx
 87a2146:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2149:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a214f:	31 ca                	xor    %ecx,%edx
 87a2151:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2154:	0f b6 cd             	movzbl %ch,%ecx
 87a2157:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a215a:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2160:	31 ca                	xor    %ecx,%edx
 87a2162:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2165:	c1 e9 18             	shr    $0x18,%ecx
 87a2168:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a216c:	31 ca                	xor    %ecx,%edx
 87a216e:	89 97 80 00 00 00    	mov    %edx,0x80(%edi)
 87a2174:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2177:	33 51 04             	xor    0x4(%ecx),%edx
 87a217a:	89 51 14             	mov    %edx,0x14(%ecx)
 87a217d:	33 51 08             	xor    0x8(%ecx),%edx
 87a2180:	89 51 18             	mov    %edx,0x18(%ecx)
 87a2183:	33 57 7c             	xor    0x7c(%edi),%edx
 87a2186:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2189:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a218f:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2192:	8d 97 90 00 00 00    	lea    0x90(%edi),%edx
 87a2198:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a219b:	8b 97 80 00 00 00    	mov    0x80(%edi),%edx
 87a21a1:	33 51 20             	xor    0x20(%ecx),%edx
 87a21a4:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a21a8:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a21ab:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a21b1:	31 ca                	xor    %ecx,%edx
 87a21b3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a21b6:	c1 e9 10             	shr    $0x10,%ecx
 87a21b9:	0f b6 c9             	movzbl %cl,%ecx
 87a21bc:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a21bf:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a21c5:	31 ca                	xor    %ecx,%edx
 87a21c7:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a21ca:	0f b6 cd             	movzbl %ch,%ecx
 87a21cd:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 87a21d0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a21d3:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a21d9:	31 ca                	xor    %ecx,%edx
 87a21db:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a21de:	c1 e9 18             	shr    $0x18,%ecx
 87a21e1:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a21e5:	31 ca                	xor    %ecx,%edx
 87a21e7:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a21ea:	89 97 90 00 00 00    	mov    %edx,0x90(%edi)
 87a21f0:	33 51 04             	xor    0x4(%ecx),%edx
 87a21f3:	89 51 14             	mov    %edx,0x14(%ecx)
 87a21f6:	33 51 08             	xor    0x8(%ecx),%edx
 87a21f9:	89 51 18             	mov    %edx,0x18(%ecx)
 87a21fc:	33 97 8c 00 00 00    	xor    0x8c(%edi),%edx
 87a2202:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2205:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a220b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a220e:	8b 97 90 00 00 00    	mov    0x90(%edi),%edx
 87a2214:	33 51 24             	xor    0x24(%ecx),%edx
 87a2217:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
 87a221b:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a221e:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2224:	31 ca                	xor    %ecx,%edx
 87a2226:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2229:	c1 e9 10             	shr    $0x10,%ecx
 87a222c:	0f b6 c9             	movzbl %cl,%ecx
 87a222f:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2232:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2238:	31 ca                	xor    %ecx,%edx
 87a223a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a223d:	0f b6 cd             	movzbl %ch,%ecx
 87a2240:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2243:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2246:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a224c:	31 ca                	xor    %ecx,%edx
 87a224e:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2251:	c1 e9 18             	shr    $0x18,%ecx
 87a2254:	0f b6 04 88          	movzbl (%eax,%ecx,4),%eax
 87a2258:	31 c2                	xor    %eax,%edx
 87a225a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a225d:	89 50 10             	mov    %edx,0x10(%eax)
 87a2260:	33 50 04             	xor    0x4(%eax),%edx
 87a2263:	89 50 14             	mov    %edx,0x14(%eax)
 87a2266:	33 50 08             	xor    0x8(%eax),%edx
 87a2269:	89 50 18             	mov    %edx,0x18(%eax)
 87a226c:	33 97 9c 00 00 00    	xor    0x9c(%edi),%edx
 87a2272:	83 7e 30 01          	cmpl   $0x1,0x30(%esi)
 87a2276:	89 50 1c             	mov    %edx,0x1c(%eax)
 87a2279:	0f 85 94 fb ff ff    	jne    87a1e13 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xc3>
 87a227f:	8b 56 38             	mov    0x38(%esi),%edx
 87a2282:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a2285:	c1 e2 02             	shl    $0x2,%edx
 87a2288:	85 d2                	test   %edx,%edx
 87a228a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a228d:	74 51                	je     87a22e0 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x590>
 87a228f:	8d 54 96 3c          	lea    0x3c(%esi,%edx,4),%edx
 87a2293:	31 c0                	xor    %eax,%eax
 87a2295:	89 7d dc             	mov    %edi,-0x24(%ebp)
 87a2298:	8b 4c 86 3c          	mov    0x3c(%esi,%eax,4),%ecx
 87a229c:	8b 3a                	mov    (%edx),%edi
 87a229e:	89 7c 86 3c          	mov    %edi,0x3c(%esi,%eax,4)
 87a22a2:	8b 7a 04             	mov    0x4(%edx),%edi
 87a22a5:	89 0a                	mov    %ecx,(%edx)
 87a22a7:	8b 4c 86 40          	mov    0x40(%esi,%eax,4),%ecx
 87a22ab:	89 7c 86 40          	mov    %edi,0x40(%esi,%eax,4)
 87a22af:	8b 7a 08             	mov    0x8(%edx),%edi
 87a22b2:	89 4a 04             	mov    %ecx,0x4(%edx)
 87a22b5:	8b 4c 86 44          	mov    0x44(%esi,%eax,4),%ecx
 87a22b9:	89 7c 86 44          	mov    %edi,0x44(%esi,%eax,4)
 87a22bd:	8b 7a 0c             	mov    0xc(%edx),%edi
 87a22c0:	89 4a 08             	mov    %ecx,0x8(%edx)
 87a22c3:	8b 4c 86 48          	mov    0x48(%esi,%eax,4),%ecx
 87a22c7:	89 7c 86 48          	mov    %edi,0x48(%esi,%eax,4)
 87a22cb:	83 c0 04             	add    $0x4,%eax
 87a22ce:	89 4a 0c             	mov    %ecx,0xc(%edx)
 87a22d1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a22d4:	83 ea 10             	sub    $0x10,%edx
 87a22d7:	29 c1                	sub    %eax,%ecx
 87a22d9:	39 c8                	cmp    %ecx,%eax
 87a22db:	72 bb                	jb     87a2298 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x548>
 87a22dd:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a22e0:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 87a22e4:	0f 86 29 fb ff ff    	jbe    87a1e13 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xc3>
 87a22ea:	8b 93 88 fe ff ff    	mov    -0x178(%ebx),%edx
 87a22f0:	8b 83 1c fc ff ff    	mov    -0x3e4(%ebx),%eax
 87a22f6:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 87a22fd:	89 75 d0             	mov    %esi,-0x30(%ebp)
 87a2300:	8b 12                	mov    (%edx),%edx
 87a2302:	8b 00                	mov    (%eax),%eax
 87a2304:	89 55 d8             	mov    %edx,-0x28(%ebp)
 87a2307:	8b 93 d8 fd ff ff    	mov    -0x228(%ebx),%edx
 87a230d:	8b 12                	mov    (%edx),%edx
 87a230f:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2312:	8b 93 a0 fd ff ff    	mov    -0x260(%ebx),%edx
 87a2318:	8b 12                	mov    (%edx),%edx
 87a231a:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a231d:	8b 93 e4 fb ff ff    	mov    -0x41c(%ebx),%edx
 87a2323:	8b 12                	mov    (%edx),%edx
 87a2325:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a2328:	83 c7 10             	add    $0x10,%edi
 87a232b:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a232e:	8b 17                	mov    (%edi),%edx
 87a2330:	8b 37                	mov    (%edi),%esi
 87a2332:	c1 ea 18             	shr    $0x18,%edx
 87a2335:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a2339:	c1 ee 10             	shr    $0x10,%esi
 87a233c:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a2342:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a2346:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 87a2349:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a234c:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a234f:	0f b6 37             	movzbl (%edi),%esi
 87a2352:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2355:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a2359:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a235c:	8b 0f                	mov    (%edi),%ecx
 87a235e:	0f b6 f5             	movzbl %ch,%esi
 87a2361:	0f b6 0c b0          	movzbl (%eax,%esi,4),%ecx
 87a2365:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87a2368:	33 14 8e             	xor    (%esi,%ecx,4),%edx
 87a236b:	8b 77 04             	mov    0x4(%edi),%esi
 87a236e:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a2371:	89 17                	mov    %edx,(%edi)
 87a2373:	8b 57 04             	mov    0x4(%edi),%edx
 87a2376:	c1 ee 10             	shr    $0x10,%esi
 87a2379:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a237f:	c1 ea 18             	shr    $0x18,%edx
 87a2382:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a2386:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a238a:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 87a238d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2390:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a2393:	0f b6 77 04          	movzbl 0x4(%edi),%esi
 87a2397:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a239a:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a239e:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a23a1:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a23a4:	0f b6 f5             	movzbl %ch,%esi
 87a23a7:	0f b6 0c b0          	movzbl (%eax,%esi,4),%ecx
 87a23ab:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87a23ae:	33 14 8e             	xor    (%esi,%ecx,4),%edx
 87a23b1:	89 57 04             	mov    %edx,0x4(%edi)
 87a23b4:	8b 57 08             	mov    0x8(%edi),%edx
 87a23b7:	8b 77 08             	mov    0x8(%edi),%esi
 87a23ba:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a23bd:	c1 ea 18             	shr    $0x18,%edx
 87a23c0:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a23c4:	c1 ee 10             	shr    $0x10,%esi
 87a23c7:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a23cd:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a23d1:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 87a23d4:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a23d7:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a23da:	0f b6 77 08          	movzbl 0x8(%edi),%esi
 87a23de:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a23e1:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a23e5:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a23e8:	8b 4f 08             	mov    0x8(%edi),%ecx
 87a23eb:	0f b6 f5             	movzbl %ch,%esi
 87a23ee:	0f b6 0c b0          	movzbl (%eax,%esi,4),%ecx
 87a23f2:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87a23f5:	33 14 8e             	xor    (%esi,%ecx,4),%edx
 87a23f8:	8b 77 0c             	mov    0xc(%edi),%esi
 87a23fb:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a23fe:	89 57 08             	mov    %edx,0x8(%edi)
 87a2401:	8b 57 0c             	mov    0xc(%edi),%edx
 87a2404:	c1 ee 10             	shr    $0x10,%esi
 87a2407:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a240d:	c1 ea 18             	shr    $0x18,%edx
 87a2410:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a2414:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a2418:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 87a241b:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a241e:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a2421:	0f b6 77 0c          	movzbl 0xc(%edi),%esi
 87a2425:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2428:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a242c:	33 14 b1             	xor    (%ecx,%esi,4),%edx
 87a242f:	8b 4f 0c             	mov    0xc(%edi),%ecx
 87a2432:	0f b6 f5             	movzbl %ch,%esi
 87a2435:	0f b6 0c b0          	movzbl (%eax,%esi,4),%ecx
 87a2439:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87a243c:	33 14 8e             	xor    (%esi,%ecx,4),%edx
 87a243f:	89 57 0c             	mov    %edx,0xc(%edi)
 87a2442:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87a2445:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 87a2449:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a244c:	39 4a 38             	cmp    %ecx,0x38(%edx)
 87a244f:	0f 87 d3 fe ff ff    	ja     87a2328 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0x5d8>
 87a2455:	83 c4 4c             	add    $0x4c,%esp
 87a2458:	5b                   	pop    %ebx
 87a2459:	5e                   	pop    %esi
 87a245a:	5f                   	pop    %edi
 87a245b:	5d                   	pop    %ebp
 87a245c:	c3                   	ret
 87a245d:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2463:	8d 57 20             	lea    0x20(%edi),%edx
 87a2466:	8b 83 1c fc ff ff    	mov    -0x3e4(%ebx),%eax
 87a246c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a246f:	8b 56 3c             	mov    0x3c(%esi),%edx
 87a2472:	33 11                	xor    (%ecx),%edx
 87a2474:	8b 00                	mov    (%eax),%eax
 87a2476:	0f b6 4f 1c          	movzbl 0x1c(%edi),%ecx
 87a247a:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a247d:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2483:	31 ca                	xor    %ecx,%edx
 87a2485:	8b 4f 1c             	mov    0x1c(%edi),%ecx
 87a2488:	c1 e9 10             	shr    $0x10,%ecx
 87a248b:	0f b6 c9             	movzbl %cl,%ecx
 87a248e:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2491:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2497:	31 ca                	xor    %ecx,%edx
 87a2499:	8b 4f 1c             	mov    0x1c(%edi),%ecx
 87a249c:	0f b6 cd             	movzbl %ch,%ecx
 87a249f:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a24a2:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a24a8:	31 ca                	xor    %ecx,%edx
 87a24aa:	8b 4f 1c             	mov    0x1c(%edi),%ecx
 87a24ad:	c1 e9 18             	shr    $0x18,%ecx
 87a24b0:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a24b4:	31 ca                	xor    %ecx,%edx
 87a24b6:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a24b9:	89 57 20             	mov    %edx,0x20(%edi)
 87a24bc:	31 d1                	xor    %edx,%ecx
 87a24be:	89 4f 24             	mov    %ecx,0x24(%edi)
 87a24c1:	33 4f 08             	xor    0x8(%edi),%ecx
 87a24c4:	89 4f 28             	mov    %ecx,0x28(%edi)
 87a24c7:	33 4f 0c             	xor    0xc(%edi),%ecx
 87a24ca:	89 4f 2c             	mov    %ecx,0x2c(%edi)
 87a24cd:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a24d0:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a24d4:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a24d8:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a24db:	8b 4f 10             	mov    0x10(%edi),%ecx
 87a24de:	31 4d e0             	xor    %ecx,-0x20(%ebp)
 87a24e1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a24e4:	c1 e9 18             	shr    $0x18,%ecx
 87a24e7:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a24ea:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a24f0:	31 4d e0             	xor    %ecx,-0x20(%ebp)
 87a24f3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a24f6:	c1 e9 10             	shr    $0x10,%ecx
 87a24f9:	0f b6 c9             	movzbl %cl,%ecx
 87a24fc:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a24ff:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2505:	31 4d e0             	xor    %ecx,-0x20(%ebp)
 87a2508:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a250b:	0f b6 cd             	movzbl %ch,%ecx
 87a250e:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2511:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2517:	31 4d e0             	xor    %ecx,-0x20(%ebp)
 87a251a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a251d:	89 4f 30             	mov    %ecx,0x30(%edi)
 87a2520:	33 4f 14             	xor    0x14(%edi),%ecx
 87a2523:	89 4f 34             	mov    %ecx,0x34(%edi)
 87a2526:	33 4f 18             	xor    0x18(%edi),%ecx
 87a2529:	89 4f 38             	mov    %ecx,0x38(%edi)
 87a252c:	33 4f 1c             	xor    0x1c(%edi),%ecx
 87a252f:	89 4f 3c             	mov    %ecx,0x3c(%edi)
 87a2532:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2535:	8d 4f 40             	lea    0x40(%edi),%ecx
 87a2538:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a253b:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2541:	33 51 04             	xor    0x4(%ecx),%edx
 87a2544:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2548:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a254b:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2551:	31 ca                	xor    %ecx,%edx
 87a2553:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2556:	c1 e9 10             	shr    $0x10,%ecx
 87a2559:	0f b6 c9             	movzbl %cl,%ecx
 87a255c:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a255f:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2565:	31 ca                	xor    %ecx,%edx
 87a2567:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a256a:	0f b6 cd             	movzbl %ch,%ecx
 87a256d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2570:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2576:	31 ca                	xor    %ecx,%edx
 87a2578:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a257b:	c1 e9 18             	shr    $0x18,%ecx
 87a257e:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2582:	31 ca                	xor    %ecx,%edx
 87a2584:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2587:	89 57 40             	mov    %edx,0x40(%edi)
 87a258a:	33 51 04             	xor    0x4(%ecx),%edx
 87a258d:	89 51 24             	mov    %edx,0x24(%ecx)
 87a2590:	33 51 08             	xor    0x8(%ecx),%edx
 87a2593:	89 51 28             	mov    %edx,0x28(%ecx)
 87a2596:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2599:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a259c:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a259f:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a25a3:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a25a7:	33 51 10             	xor    0x10(%ecx),%edx
 87a25aa:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a25ad:	c1 e9 18             	shr    $0x18,%ecx
 87a25b0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a25b3:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a25b9:	31 ca                	xor    %ecx,%edx
 87a25bb:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a25be:	c1 e9 10             	shr    $0x10,%ecx
 87a25c1:	0f b6 c9             	movzbl %cl,%ecx
 87a25c4:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a25c7:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a25cd:	31 ca                	xor    %ecx,%edx
 87a25cf:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a25d2:	0f b6 cd             	movzbl %ch,%ecx
 87a25d5:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a25d8:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a25de:	31 ca                	xor    %ecx,%edx
 87a25e0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a25e3:	89 51 30             	mov    %edx,0x30(%ecx)
 87a25e6:	33 51 14             	xor    0x14(%ecx),%edx
 87a25e9:	89 51 34             	mov    %edx,0x34(%ecx)
 87a25ec:	33 51 18             	xor    0x18(%ecx),%edx
 87a25ef:	89 51 38             	mov    %edx,0x38(%ecx)
 87a25f2:	33 57 3c             	xor    0x3c(%edi),%edx
 87a25f5:	89 51 3c             	mov    %edx,0x3c(%ecx)
 87a25f8:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a25fe:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2601:	8d 57 60             	lea    0x60(%edi),%edx
 87a2604:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a2607:	8b 57 40             	mov    0x40(%edi),%edx
 87a260a:	33 51 08             	xor    0x8(%ecx),%edx
 87a260d:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2611:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2614:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a261a:	31 ca                	xor    %ecx,%edx
 87a261c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a261f:	c1 e9 10             	shr    $0x10,%ecx
 87a2622:	0f b6 c9             	movzbl %cl,%ecx
 87a2625:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2628:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a262e:	31 ca                	xor    %ecx,%edx
 87a2630:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2633:	0f b6 cd             	movzbl %ch,%ecx
 87a2636:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2639:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a263f:	31 ca                	xor    %ecx,%edx
 87a2641:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2644:	c1 e9 18             	shr    $0x18,%ecx
 87a2647:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a264b:	31 ca                	xor    %ecx,%edx
 87a264d:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2650:	89 57 60             	mov    %edx,0x60(%edi)
 87a2653:	33 51 04             	xor    0x4(%ecx),%edx
 87a2656:	89 51 24             	mov    %edx,0x24(%ecx)
 87a2659:	33 51 08             	xor    0x8(%ecx),%edx
 87a265c:	89 51 28             	mov    %edx,0x28(%ecx)
 87a265f:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2662:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a2665:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2668:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a266c:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a2670:	33 51 10             	xor    0x10(%ecx),%edx
 87a2673:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2676:	c1 e9 18             	shr    $0x18,%ecx
 87a2679:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a267c:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2682:	31 ca                	xor    %ecx,%edx
 87a2684:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2687:	c1 e9 10             	shr    $0x10,%ecx
 87a268a:	0f b6 c9             	movzbl %cl,%ecx
 87a268d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2690:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2696:	31 ca                	xor    %ecx,%edx
 87a2698:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a269b:	0f b6 cd             	movzbl %ch,%ecx
 87a269e:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a26a1:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a26a7:	31 ca                	xor    %ecx,%edx
 87a26a9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a26ac:	89 51 30             	mov    %edx,0x30(%ecx)
 87a26af:	33 51 14             	xor    0x14(%ecx),%edx
 87a26b2:	89 51 34             	mov    %edx,0x34(%ecx)
 87a26b5:	33 51 18             	xor    0x18(%ecx),%edx
 87a26b8:	89 51 38             	mov    %edx,0x38(%ecx)
 87a26bb:	33 57 5c             	xor    0x5c(%edi),%edx
 87a26be:	89 51 3c             	mov    %edx,0x3c(%ecx)
 87a26c1:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a26c7:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a26ca:	8d 97 80 00 00 00    	lea    0x80(%edi),%edx
 87a26d0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a26d3:	8b 57 60             	mov    0x60(%edi),%edx
 87a26d6:	33 51 0c             	xor    0xc(%ecx),%edx
 87a26d9:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a26dd:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a26e0:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a26e6:	31 ca                	xor    %ecx,%edx
 87a26e8:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a26eb:	c1 e9 10             	shr    $0x10,%ecx
 87a26ee:	0f b6 c9             	movzbl %cl,%ecx
 87a26f1:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a26f4:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a26fa:	31 ca                	xor    %ecx,%edx
 87a26fc:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a26ff:	0f b6 cd             	movzbl %ch,%ecx
 87a2702:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2705:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a270b:	31 ca                	xor    %ecx,%edx
 87a270d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2710:	c1 e9 18             	shr    $0x18,%ecx
 87a2713:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2717:	31 ca                	xor    %ecx,%edx
 87a2719:	89 97 80 00 00 00    	mov    %edx,0x80(%edi)
 87a271f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2722:	33 51 04             	xor    0x4(%ecx),%edx
 87a2725:	89 51 24             	mov    %edx,0x24(%ecx)
 87a2728:	33 51 08             	xor    0x8(%ecx),%edx
 87a272b:	89 51 28             	mov    %edx,0x28(%ecx)
 87a272e:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2731:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a2734:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2737:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a273b:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a273f:	33 51 10             	xor    0x10(%ecx),%edx
 87a2742:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2745:	c1 e9 18             	shr    $0x18,%ecx
 87a2748:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a274b:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2751:	31 ca                	xor    %ecx,%edx
 87a2753:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2756:	c1 e9 10             	shr    $0x10,%ecx
 87a2759:	0f b6 c9             	movzbl %cl,%ecx
 87a275c:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a275f:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2765:	31 ca                	xor    %ecx,%edx
 87a2767:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a276a:	0f b6 cd             	movzbl %ch,%ecx
 87a276d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2770:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2776:	31 ca                	xor    %ecx,%edx
 87a2778:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a277b:	89 51 30             	mov    %edx,0x30(%ecx)
 87a277e:	33 51 14             	xor    0x14(%ecx),%edx
 87a2781:	89 51 34             	mov    %edx,0x34(%ecx)
 87a2784:	33 51 18             	xor    0x18(%ecx),%edx
 87a2787:	89 51 38             	mov    %edx,0x38(%ecx)
 87a278a:	33 57 7c             	xor    0x7c(%edi),%edx
 87a278d:	89 51 3c             	mov    %edx,0x3c(%ecx)
 87a2790:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2796:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2799:	8d 97 a0 00 00 00    	lea    0xa0(%edi),%edx
 87a279f:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a27a2:	8b 97 80 00 00 00    	mov    0x80(%edi),%edx
 87a27a8:	33 51 10             	xor    0x10(%ecx),%edx
 87a27ab:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a27af:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a27b2:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a27b8:	31 ca                	xor    %ecx,%edx
 87a27ba:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a27bd:	c1 e9 10             	shr    $0x10,%ecx
 87a27c0:	0f b6 c9             	movzbl %cl,%ecx
 87a27c3:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a27c6:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a27cc:	31 ca                	xor    %ecx,%edx
 87a27ce:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a27d1:	0f b6 cd             	movzbl %ch,%ecx
 87a27d4:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a27d7:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a27dd:	31 ca                	xor    %ecx,%edx
 87a27df:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a27e2:	c1 e9 18             	shr    $0x18,%ecx
 87a27e5:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a27e9:	31 ca                	xor    %ecx,%edx
 87a27eb:	89 97 a0 00 00 00    	mov    %edx,0xa0(%edi)
 87a27f1:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a27f4:	33 51 04             	xor    0x4(%ecx),%edx
 87a27f7:	89 51 24             	mov    %edx,0x24(%ecx)
 87a27fa:	33 51 08             	xor    0x8(%ecx),%edx
 87a27fd:	89 51 28             	mov    %edx,0x28(%ecx)
 87a2800:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2803:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a2806:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a2809:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a280d:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a2811:	33 51 10             	xor    0x10(%ecx),%edx
 87a2814:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2817:	c1 e9 18             	shr    $0x18,%ecx
 87a281a:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a281d:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2823:	31 ca                	xor    %ecx,%edx
 87a2825:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2828:	c1 e9 10             	shr    $0x10,%ecx
 87a282b:	0f b6 c9             	movzbl %cl,%ecx
 87a282e:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2831:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2837:	31 ca                	xor    %ecx,%edx
 87a2839:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a283c:	0f b6 cd             	movzbl %ch,%ecx
 87a283f:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2842:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2848:	31 ca                	xor    %ecx,%edx
 87a284a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a284d:	89 51 30             	mov    %edx,0x30(%ecx)
 87a2850:	33 51 14             	xor    0x14(%ecx),%edx
 87a2853:	89 51 34             	mov    %edx,0x34(%ecx)
 87a2856:	33 51 18             	xor    0x18(%ecx),%edx
 87a2859:	89 51 38             	mov    %edx,0x38(%ecx)
 87a285c:	33 97 9c 00 00 00    	xor    0x9c(%edi),%edx
 87a2862:	89 51 3c             	mov    %edx,0x3c(%ecx)
 87a2865:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a286b:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a286e:	8d 97 c0 00 00 00    	lea    0xc0(%edi),%edx
 87a2874:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a2877:	8b 97 a0 00 00 00    	mov    0xa0(%edi),%edx
 87a287d:	33 51 14             	xor    0x14(%ecx),%edx
 87a2880:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2884:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2887:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a288d:	31 ca                	xor    %ecx,%edx
 87a288f:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2892:	c1 e9 10             	shr    $0x10,%ecx
 87a2895:	0f b6 c9             	movzbl %cl,%ecx
 87a2898:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a289b:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a28a1:	31 ca                	xor    %ecx,%edx
 87a28a3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a28a6:	0f b6 cd             	movzbl %ch,%ecx
 87a28a9:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 87a28ac:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a28af:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a28b5:	31 ca                	xor    %ecx,%edx
 87a28b7:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a28ba:	c1 e9 18             	shr    $0x18,%ecx
 87a28bd:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a28c1:	31 ca                	xor    %ecx,%edx
 87a28c3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a28c6:	89 97 c0 00 00 00    	mov    %edx,0xc0(%edi)
 87a28cc:	33 51 04             	xor    0x4(%ecx),%edx
 87a28cf:	89 51 24             	mov    %edx,0x24(%ecx)
 87a28d2:	33 51 08             	xor    0x8(%ecx),%edx
 87a28d5:	89 51 28             	mov    %edx,0x28(%ecx)
 87a28d8:	33 51 0c             	xor    0xc(%ecx),%edx
 87a28db:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a28de:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a28e1:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 87a28e5:	0f b6 14 90          	movzbl (%eax,%edx,4),%edx
 87a28e9:	33 51 10             	xor    0x10(%ecx),%edx
 87a28ec:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a28ef:	c1 e9 18             	shr    $0x18,%ecx
 87a28f2:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a28f5:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a28fb:	31 ca                	xor    %ecx,%edx
 87a28fd:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2900:	c1 e9 10             	shr    $0x10,%ecx
 87a2903:	0f b6 c9             	movzbl %cl,%ecx
 87a2906:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2909:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a290f:	31 ca                	xor    %ecx,%edx
 87a2911:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2914:	0f b6 cd             	movzbl %ch,%ecx
 87a2917:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a291a:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2920:	31 ca                	xor    %ecx,%edx
 87a2922:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2925:	89 51 30             	mov    %edx,0x30(%ecx)
 87a2928:	33 51 14             	xor    0x14(%ecx),%edx
 87a292b:	89 51 34             	mov    %edx,0x34(%ecx)
 87a292e:	33 51 18             	xor    0x18(%ecx),%edx
 87a2931:	89 51 38             	mov    %edx,0x38(%ecx)
 87a2934:	33 97 bc 00 00 00    	xor    0xbc(%edi),%edx
 87a293a:	89 51 3c             	mov    %edx,0x3c(%ecx)
 87a293d:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2943:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a2946:	8b 97 c0 00 00 00    	mov    0xc0(%edi),%edx
 87a294c:	33 51 18             	xor    0x18(%ecx),%edx
 87a294f:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 87a2953:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2956:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a295c:	31 ca                	xor    %ecx,%edx
 87a295e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2961:	c1 e9 10             	shr    $0x10,%ecx
 87a2964:	0f b6 c9             	movzbl %cl,%ecx
 87a2967:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a296a:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2970:	31 ca                	xor    %ecx,%edx
 87a2972:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2975:	0f b6 cd             	movzbl %ch,%ecx
 87a2978:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a297b:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a297e:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2984:	31 ca                	xor    %ecx,%edx
 87a2986:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2989:	c1 e9 18             	shr    $0x18,%ecx
 87a298c:	0f b6 04 88          	movzbl (%eax,%ecx,4),%eax
 87a2990:	31 c2                	xor    %eax,%edx
 87a2992:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2995:	89 50 20             	mov    %edx,0x20(%eax)
 87a2998:	33 50 04             	xor    0x4(%eax),%edx
 87a299b:	89 50 24             	mov    %edx,0x24(%eax)
 87a299e:	33 50 08             	xor    0x8(%eax),%edx
 87a29a1:	89 50 28             	mov    %edx,0x28(%eax)
 87a29a4:	33 50 0c             	xor    0xc(%eax),%edx
 87a29a7:	89 50 2c             	mov    %edx,0x2c(%eax)
 87a29aa:	e9 5a f4 ff ff       	jmp    87a1e09 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xb9>
 87a29af:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a29b5:	8d 57 18             	lea    0x18(%edi),%edx
 87a29b8:	8b 83 1c fc ff ff    	mov    -0x3e4(%ebx),%eax
 87a29be:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a29c1:	8b 56 3c             	mov    0x3c(%esi),%edx
 87a29c4:	33 11                	xor    (%ecx),%edx
 87a29c6:	8b 00                	mov    (%eax),%eax
 87a29c8:	0f b6 4f 14          	movzbl 0x14(%edi),%ecx
 87a29cc:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a29cf:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a29d5:	31 ca                	xor    %ecx,%edx
 87a29d7:	8b 4f 14             	mov    0x14(%edi),%ecx
 87a29da:	c1 e9 10             	shr    $0x10,%ecx
 87a29dd:	0f b6 c9             	movzbl %cl,%ecx
 87a29e0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a29e3:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a29e9:	31 ca                	xor    %ecx,%edx
 87a29eb:	8b 4f 14             	mov    0x14(%edi),%ecx
 87a29ee:	0f b6 cd             	movzbl %ch,%ecx
 87a29f1:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a29f4:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a29fa:	31 ca                	xor    %ecx,%edx
 87a29fc:	8b 4f 14             	mov    0x14(%edi),%ecx
 87a29ff:	c1 e9 18             	shr    $0x18,%ecx
 87a2a02:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2a06:	31 ca                	xor    %ecx,%edx
 87a2a08:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a2a0b:	89 57 18             	mov    %edx,0x18(%edi)
 87a2a0e:	31 d1                	xor    %edx,%ecx
 87a2a10:	89 4f 1c             	mov    %ecx,0x1c(%edi)
 87a2a13:	33 4f 08             	xor    0x8(%edi),%ecx
 87a2a16:	89 4f 20             	mov    %ecx,0x20(%edi)
 87a2a19:	33 4f 0c             	xor    0xc(%edi),%ecx
 87a2a1c:	89 4f 24             	mov    %ecx,0x24(%edi)
 87a2a1f:	33 4f 10             	xor    0x10(%edi),%ecx
 87a2a22:	89 4f 28             	mov    %ecx,0x28(%edi)
 87a2a25:	33 4f 14             	xor    0x14(%edi),%ecx
 87a2a28:	89 4f 2c             	mov    %ecx,0x2c(%edi)
 87a2a2b:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2a2e:	8d 4f 30             	lea    0x30(%edi),%ecx
 87a2a31:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a2a34:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2a3a:	33 51 04             	xor    0x4(%ecx),%edx
 87a2a3d:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2a41:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2a44:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2a4a:	31 ca                	xor    %ecx,%edx
 87a2a4c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2a4f:	c1 e9 10             	shr    $0x10,%ecx
 87a2a52:	0f b6 c9             	movzbl %cl,%ecx
 87a2a55:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2a58:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2a5e:	31 ca                	xor    %ecx,%edx
 87a2a60:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2a63:	0f b6 cd             	movzbl %ch,%ecx
 87a2a66:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2a69:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2a6f:	31 ca                	xor    %ecx,%edx
 87a2a71:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2a74:	c1 e9 18             	shr    $0x18,%ecx
 87a2a77:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2a7b:	31 ca                	xor    %ecx,%edx
 87a2a7d:	89 57 30             	mov    %edx,0x30(%edi)
 87a2a80:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2a83:	33 51 04             	xor    0x4(%ecx),%edx
 87a2a86:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2a89:	89 d1                	mov    %edx,%ecx
 87a2a8b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a2a8e:	33 4a 08             	xor    0x8(%edx),%ecx
 87a2a91:	89 4a 20             	mov    %ecx,0x20(%edx)
 87a2a94:	33 4a 0c             	xor    0xc(%edx),%ecx
 87a2a97:	89 4a 24             	mov    %ecx,0x24(%edx)
 87a2a9a:	33 4a 10             	xor    0x10(%edx),%ecx
 87a2a9d:	89 4a 28             	mov    %ecx,0x28(%edx)
 87a2aa0:	33 4f 2c             	xor    0x2c(%edi),%ecx
 87a2aa3:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 87a2aa6:	8b 57 30             	mov    0x30(%edi),%edx
 87a2aa9:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2aac:	8d 4f 48             	lea    0x48(%edi),%ecx
 87a2aaf:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a2ab2:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2ab8:	33 51 08             	xor    0x8(%ecx),%edx
 87a2abb:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2abf:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2ac2:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2ac8:	31 ca                	xor    %ecx,%edx
 87a2aca:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2acd:	c1 e9 10             	shr    $0x10,%ecx
 87a2ad0:	0f b6 c9             	movzbl %cl,%ecx
 87a2ad3:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2ad6:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2adc:	31 ca                	xor    %ecx,%edx
 87a2ade:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2ae1:	0f b6 cd             	movzbl %ch,%ecx
 87a2ae4:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2ae7:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2aed:	31 ca                	xor    %ecx,%edx
 87a2aef:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2af2:	c1 e9 18             	shr    $0x18,%ecx
 87a2af5:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2af9:	31 ca                	xor    %ecx,%edx
 87a2afb:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2afe:	89 57 48             	mov    %edx,0x48(%edi)
 87a2b01:	33 51 04             	xor    0x4(%ecx),%edx
 87a2b04:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2b07:	89 d1                	mov    %edx,%ecx
 87a2b09:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a2b0c:	33 4a 08             	xor    0x8(%edx),%ecx
 87a2b0f:	89 4a 20             	mov    %ecx,0x20(%edx)
 87a2b12:	33 4a 0c             	xor    0xc(%edx),%ecx
 87a2b15:	89 4a 24             	mov    %ecx,0x24(%edx)
 87a2b18:	33 4a 10             	xor    0x10(%edx),%ecx
 87a2b1b:	89 4a 28             	mov    %ecx,0x28(%edx)
 87a2b1e:	33 4f 44             	xor    0x44(%edi),%ecx
 87a2b21:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 87a2b24:	8b 57 48             	mov    0x48(%edi),%edx
 87a2b27:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2b2a:	8d 4f 60             	lea    0x60(%edi),%ecx
 87a2b2d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a2b30:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2b36:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2b39:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2b3d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2b40:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2b46:	31 ca                	xor    %ecx,%edx
 87a2b48:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2b4b:	c1 e9 10             	shr    $0x10,%ecx
 87a2b4e:	0f b6 c9             	movzbl %cl,%ecx
 87a2b51:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2b54:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2b5a:	31 ca                	xor    %ecx,%edx
 87a2b5c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2b5f:	0f b6 cd             	movzbl %ch,%ecx
 87a2b62:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2b65:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2b6b:	31 ca                	xor    %ecx,%edx
 87a2b6d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2b70:	c1 e9 18             	shr    $0x18,%ecx
 87a2b73:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2b77:	31 ca                	xor    %ecx,%edx
 87a2b79:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2b7c:	89 57 60             	mov    %edx,0x60(%edi)
 87a2b7f:	33 51 04             	xor    0x4(%ecx),%edx
 87a2b82:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2b85:	89 d1                	mov    %edx,%ecx
 87a2b87:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a2b8a:	33 4a 08             	xor    0x8(%edx),%ecx
 87a2b8d:	89 4a 20             	mov    %ecx,0x20(%edx)
 87a2b90:	33 4a 0c             	xor    0xc(%edx),%ecx
 87a2b93:	89 4a 24             	mov    %ecx,0x24(%edx)
 87a2b96:	33 4a 10             	xor    0x10(%edx),%ecx
 87a2b99:	89 4a 28             	mov    %ecx,0x28(%edx)
 87a2b9c:	33 4f 5c             	xor    0x5c(%edi),%ecx
 87a2b9f:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 87a2ba2:	8b 57 60             	mov    0x60(%edi),%edx
 87a2ba5:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2ba8:	8d 4f 78             	lea    0x78(%edi),%ecx
 87a2bab:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a2bae:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2bb4:	33 51 10             	xor    0x10(%ecx),%edx
 87a2bb7:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2bbb:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2bbe:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2bc4:	31 ca                	xor    %ecx,%edx
 87a2bc6:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2bc9:	c1 e9 10             	shr    $0x10,%ecx
 87a2bcc:	0f b6 c9             	movzbl %cl,%ecx
 87a2bcf:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2bd2:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2bd8:	31 ca                	xor    %ecx,%edx
 87a2bda:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2bdd:	0f b6 cd             	movzbl %ch,%ecx
 87a2be0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2be3:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2be9:	31 ca                	xor    %ecx,%edx
 87a2beb:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2bee:	c1 e9 18             	shr    $0x18,%ecx
 87a2bf1:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2bf5:	31 ca                	xor    %ecx,%edx
 87a2bf7:	89 57 78             	mov    %edx,0x78(%edi)
 87a2bfa:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2bfd:	33 51 04             	xor    0x4(%ecx),%edx
 87a2c00:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2c03:	89 d1                	mov    %edx,%ecx
 87a2c05:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a2c08:	33 4a 08             	xor    0x8(%edx),%ecx
 87a2c0b:	89 4a 20             	mov    %ecx,0x20(%edx)
 87a2c0e:	33 4a 0c             	xor    0xc(%edx),%ecx
 87a2c11:	89 4a 24             	mov    %ecx,0x24(%edx)
 87a2c14:	33 4a 10             	xor    0x10(%edx),%ecx
 87a2c17:	89 4a 28             	mov    %ecx,0x28(%edx)
 87a2c1a:	33 4f 74             	xor    0x74(%edi),%ecx
 87a2c1d:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 87a2c20:	8b 57 78             	mov    0x78(%edi),%edx
 87a2c23:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2c26:	8d 8f 90 00 00 00    	lea    0x90(%edi),%ecx
 87a2c2c:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87a2c2f:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2c35:	33 51 14             	xor    0x14(%ecx),%edx
 87a2c38:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2c3c:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2c3f:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2c45:	31 ca                	xor    %ecx,%edx
 87a2c47:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2c4a:	c1 e9 10             	shr    $0x10,%ecx
 87a2c4d:	0f b6 c9             	movzbl %cl,%ecx
 87a2c50:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2c53:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2c59:	31 ca                	xor    %ecx,%edx
 87a2c5b:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2c5e:	0f b6 cd             	movzbl %ch,%ecx
 87a2c61:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2c64:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2c6a:	31 ca                	xor    %ecx,%edx
 87a2c6c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2c6f:	c1 e9 18             	shr    $0x18,%ecx
 87a2c72:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2c76:	31 ca                	xor    %ecx,%edx
 87a2c78:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a2c7b:	89 97 90 00 00 00    	mov    %edx,0x90(%edi)
 87a2c81:	33 51 04             	xor    0x4(%ecx),%edx
 87a2c84:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2c87:	89 d1                	mov    %edx,%ecx
 87a2c89:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a2c8c:	33 4a 08             	xor    0x8(%edx),%ecx
 87a2c8f:	89 4a 20             	mov    %ecx,0x20(%edx)
 87a2c92:	33 4a 0c             	xor    0xc(%edx),%ecx
 87a2c95:	89 4a 24             	mov    %ecx,0x24(%edx)
 87a2c98:	33 4a 10             	xor    0x10(%edx),%ecx
 87a2c9b:	89 4a 28             	mov    %ecx,0x28(%edx)
 87a2c9e:	33 8f 8c 00 00 00    	xor    0x8c(%edi),%ecx
 87a2ca4:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 87a2ca7:	8b 97 90 00 00 00    	mov    0x90(%edi),%edx
 87a2cad:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2cb0:	8d 8f a8 00 00 00    	lea    0xa8(%edi),%ecx
 87a2cb6:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87a2cb9:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2cbf:	33 51 18             	xor    0x18(%ecx),%edx
 87a2cc2:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 87a2cc6:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2cc9:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2ccf:	31 ca                	xor    %ecx,%edx
 87a2cd1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2cd4:	c1 e9 10             	shr    $0x10,%ecx
 87a2cd7:	0f b6 c9             	movzbl %cl,%ecx
 87a2cda:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2cdd:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2ce3:	31 ca                	xor    %ecx,%edx
 87a2ce5:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2ce8:	0f b6 cd             	movzbl %ch,%ecx
 87a2ceb:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 87a2cee:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2cf1:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2cf7:	31 ca                	xor    %ecx,%edx
 87a2cf9:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2cfc:	c1 e9 18             	shr    $0x18,%ecx
 87a2cff:	0f b6 0c 88          	movzbl (%eax,%ecx,4),%ecx
 87a2d03:	31 ca                	xor    %ecx,%edx
 87a2d05:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2d08:	89 97 a8 00 00 00    	mov    %edx,0xa8(%edi)
 87a2d0e:	33 51 04             	xor    0x4(%ecx),%edx
 87a2d11:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87a2d14:	33 51 08             	xor    0x8(%ecx),%edx
 87a2d17:	89 51 20             	mov    %edx,0x20(%ecx)
 87a2d1a:	33 51 0c             	xor    0xc(%ecx),%edx
 87a2d1d:	89 51 24             	mov    %edx,0x24(%ecx)
 87a2d20:	33 51 10             	xor    0x10(%ecx),%edx
 87a2d23:	89 51 28             	mov    %edx,0x28(%ecx)
 87a2d26:	33 97 a4 00 00 00    	xor    0xa4(%edi),%edx
 87a2d2c:	89 51 2c             	mov    %edx,0x2c(%ecx)
 87a2d2f:	8b 8b 9c fb ff ff    	mov    -0x464(%ebx),%ecx
 87a2d35:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a2d38:	8b 97 a8 00 00 00    	mov    0xa8(%edi),%edx
 87a2d3e:	33 51 1c             	xor    0x1c(%ecx),%edx
 87a2d41:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 87a2d45:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2d48:	81 e1 00 ff 00 00    	and    $0xff00,%ecx
 87a2d4e:	31 ca                	xor    %ecx,%edx
 87a2d50:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2d53:	c1 e9 10             	shr    $0x10,%ecx
 87a2d56:	0f b6 c9             	movzbl %cl,%ecx
 87a2d59:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2d5c:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a2d62:	31 ca                	xor    %ecx,%edx
 87a2d64:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2d67:	0f b6 cd             	movzbl %ch,%ecx
 87a2d6a:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87a2d6d:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a2d70:	81 e1 00 00 ff 00    	and    $0xff0000,%ecx
 87a2d76:	31 ca                	xor    %ecx,%edx
 87a2d78:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87a2d7b:	c1 e9 18             	shr    $0x18,%ecx
 87a2d7e:	0f b6 04 88          	movzbl (%eax,%ecx,4),%eax
 87a2d82:	31 c2                	xor    %eax,%edx
 87a2d84:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2d87:	89 50 18             	mov    %edx,0x18(%eax)
 87a2d8a:	33 50 04             	xor    0x4(%eax),%edx
 87a2d8d:	89 50 1c             	mov    %edx,0x1c(%eax)
 87a2d90:	33 50 08             	xor    0x8(%eax),%edx
 87a2d93:	89 50 20             	mov    %edx,0x20(%eax)
 87a2d96:	33 50 0c             	xor    0xc(%eax),%edx
 87a2d99:	89 50 24             	mov    %edx,0x24(%eax)
 87a2d9c:	e9 68 f0 ff ff       	jmp    87a1e09 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE+0xb9>
 87a2da1:	90                   	nop
 87a2da2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a2da9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::AES::SetKey @ 0x87a1d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void TaoCrypt::AES::SetKey(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *__dest;
  uint local_30;
  uint *puVar11;
  
  *(uint *)(param_1 + 0x38) = (param_3 >> 2) + 6;
  __dest = (uint *)(param_1 + 0x3c);
  memcpy(__dest,param_2,param_3);
  memset((byte *)((int)__dest + param_3),0,(param_3 >> 2) * 4 - param_3);
  uVar8 = param_3 + 3 >> 2;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x3c + uVar9 * 4);
      *(uint *)(param_1 + 0x3c + uVar9 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  if (param_3 == 0x18) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x50) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 0x18) * 4);
    *(uint *)(param_1 + 0x54) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x58) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x5c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x4c);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x6c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x84) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x8c);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xac);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xb4) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xbc);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xcc) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xe8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xec) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xf0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xdc);
    *(uint *)(param_1 + 0xf4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0xf8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xe4) ^ *(uint *)(PTR_rcon__0936c734 + 0x1c) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xfc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xec);
    *(uint *)(param_1 + 0x104) = uVar8;
    *(uint *)(param_1 + 0x108) = uVar8 ^ *(uint *)(param_1 + 0xf0);
  }
  else if (param_3 == 0x20) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x58) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 0x18) * 4);
    *(uint *)(param_1 + 0x5c) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x4c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x6c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x7c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x8c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xac) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xbc) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xe8) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xcc) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xec) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xf0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xf4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xf8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xdc) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xfc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0x100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0x104) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x108) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xec) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x10c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0x110) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf4);
    *(uint *)(param_1 + 0x114) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0x118) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xfc) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x11c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x120) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x104);
    *(uint *)(param_1 + 0x124) = uVar8;
    *(uint *)(param_1 + 0x128) = uVar8 ^ *(uint *)(param_1 + 0x108);
  }
  else if (param_3 == 0x10) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x48) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 0x18) * 4);
    *(uint *)(param_1 + 0x4c) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x50) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x54) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x58) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x5c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x5c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x6c) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x7c) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x8c) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xac) ^ *(uint *)(PTR_rcon__0936c734 + 0x1c) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xbc) ^ *(uint *)(PTR_rcon__0936c734 + 0x20) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xcc) ^ *(uint *)(PTR_rcon__0936c734 + 0x24) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0xe8) = uVar8 ^ *(uint *)(param_1 + 0xd8);
    goto joined_r0x087a2279;
  }
  iVar2 = *(int *)(param_1 + 0x30);
joined_r0x087a2279:
  if (iVar2 == 1) {
    uVar8 = *(uint *)(param_1 + 0x38);
    if (uVar8 * 4 != 0) {
      puVar10 = (undefined4 *)(param_1 + 0x3c + uVar8 * 0x10);
      uVar9 = 0;
      do {
        uVar3 = *(undefined4 *)(param_1 + 0x3c + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x3c + uVar9 * 4) = *puVar10;
        *puVar10 = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x40 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x40 + uVar9 * 4) = puVar10[1];
        puVar10[1] = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x44 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x44 + uVar9 * 4) = puVar10[2];
        puVar10[2] = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x48 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x48 + uVar9 * 4) = puVar10[3];
        uVar9 = uVar9 + 4;
        puVar10[3] = uVar3;
        puVar10 = puVar10 + -4;
      } while (uVar9 < uVar8 * 4 - uVar9);
    }
    if (1 < uVar8) {
      local_30 = 1;
      iVar2 = *(int *)PTR_Td0_0936ca20;
      iVar4 = *(int *)PTR_Te4_0936c7b4;
      iVar5 = *(int *)PTR_Td1_0936c970;
      iVar6 = *(int *)PTR_Td2_0936c938;
      iVar7 = *(int *)PTR_Td3_0936c77c;
      do {
        puVar11 = __dest + 4;
        *puVar11 = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (*puVar11 >> 0x18) * 4) * 4) ^
                   *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (*puVar11 >> 0x10 & 0xff) * 4) * 4) ^
                   *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)*puVar11 * 4) * 4) ^
                   *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (*puVar11 >> 8 & 0xff) * 4) * 4);
        __dest[5] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[5] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[5] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[5] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[5] >> 8 & 0xff) * 4) * 4);
        __dest[6] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[6] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[6] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[6] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[6] >> 8 & 0xff) * 4) * 4);
        __dest[7] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[7] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[7] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[7] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[7] >> 8 & 0xff) * 4) * 4);
        local_30 = local_30 + 1;
        __dest = puVar11;
      } while (local_30 < *(uint *)(param_1 + 0x38));
      return;
    }
  }
  return;
}

```

---

## decrypt

```asm
// === 087a2db0 TaoCrypt::AES::decrypt  [0x087a2db0-0x87a333f] ===
 87a2db0:	55                   	push   %ebp
 87a2db1:	89 e5                	mov    %esp,%ebp
 87a2db3:	57                   	push   %edi
 87a2db4:	56                   	push   %esi
 87a2db5:	53                   	push   %ebx
 87a2db6:	83 ec 34             	sub    $0x34,%esp
 87a2db9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a2dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 87a2dbf:	e8 34 00 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a2dc4:	81 c3 d4 9d bc 00    	add    $0xbc9dd4,%ebx
 87a2dca:	8b 0a                	mov    (%edx),%ecx
 87a2dcc:	83 c0 3c             	add    $0x3c,%eax
 87a2dcf:	8b 72 04             	mov    0x4(%edx),%esi
 87a2dd2:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87a2dd5:	8b 7a 08             	mov    0x8(%edx),%edi
 87a2dd8:	89 c8                	mov    %ecx,%eax
 87a2dda:	c1 c9 18             	ror    $0x18,%ecx
 87a2ddd:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a2de3:	c1 c8 08             	ror    $0x8,%eax
 87a2de6:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 87a2de9:	25 00 ff 00 ff       	and    $0xff00ff00,%eax
 87a2dee:	89 f1                	mov    %esi,%ecx
 87a2df0:	09 45 e8             	or     %eax,-0x18(%ebp)
 87a2df3:	8b 45 08             	mov    0x8(%ebp),%eax
 87a2df6:	c1 ce 18             	ror    $0x18,%esi
 87a2df9:	89 75 ec             	mov    %esi,-0x14(%ebp)
 87a2dfc:	c1 c9 08             	ror    $0x8,%ecx
 87a2dff:	89 fe                	mov    %edi,%esi
 87a2e01:	81 65 ec ff 00 ff 00 	andl   $0xff00ff,-0x14(%ebp)
 87a2e08:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a2e0e:	09 4d ec             	or     %ecx,-0x14(%ebp)
 87a2e11:	8b 40 3c             	mov    0x3c(%eax),%eax
 87a2e14:	c1 cf 18             	ror    $0x18,%edi
 87a2e17:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a2e1a:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a2e20:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a2e23:	c1 ce 08             	ror    $0x8,%esi
 87a2e26:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a2e29:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a2e2f:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87a2e32:	8b 7a 0c             	mov    0xc(%edx),%edi
 87a2e35:	09 75 f0             	or     %esi,-0x10(%ebp)
 87a2e38:	8b 49 04             	mov    0x4(%ecx),%ecx
 87a2e3b:	8b 40 08             	mov    0x8(%eax),%eax
 87a2e3e:	31 4d ec             	xor    %ecx,-0x14(%ebp)
 87a2e41:	89 fa                	mov    %edi,%edx
 87a2e43:	31 45 f0             	xor    %eax,-0x10(%ebp)
 87a2e46:	8b 83 88 fe ff ff    	mov    -0x178(%ebx),%eax
 87a2e4c:	c1 ca 08             	ror    $0x8,%edx
 87a2e4f:	c1 cf 18             	ror    $0x18,%edi
 87a2e52:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a2e55:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a2e5b:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a2e61:	09 d7                	or     %edx,%edi
 87a2e63:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a2e66:	8b 00                	mov    (%eax),%eax
 87a2e68:	8b 49 38             	mov    0x38(%ecx),%ecx
 87a2e6b:	33 7a 0c             	xor    0xc(%edx),%edi
 87a2e6e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a2e71:	8b 83 d8 fd ff ff    	mov    -0x228(%ebx),%eax
 87a2e77:	d1 e9                	shr    $1,%ecx
 87a2e79:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a2e7c:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 87a2e7f:	8b 00                	mov    (%eax),%eax
 87a2e81:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 87a2e84:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a2e87:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87a2e8a:	8b 83 a0 fd ff ff    	mov    -0x260(%ebx),%eax
 87a2e90:	8b 00                	mov    (%eax),%eax
 87a2e92:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87a2e95:	8b 83 e4 fb ff ff    	mov    -0x41c(%ebx),%eax
 87a2e9b:	8b 00                	mov    (%eax),%eax
 87a2e9d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87a2ea0:	89 c7                	mov    %eax,%edi
 87a2ea2:	e9 0d 01 00 00       	jmp    87a2fb4 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0x204>
 87a2ea7:	90                   	nop
 87a2ea8:	0f b6 7d c0          	movzbl -0x40(%ebp),%edi
 87a2eac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2eaf:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2eb2:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a2eb5:	8b 3f                	mov    (%edi),%edi
 87a2eb7:	31 f8                	xor    %edi,%eax
 87a2eb9:	89 f7                	mov    %esi,%edi
 87a2ebb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 87a2ebe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a2ec1:	c1 ef 18             	shr    $0x18,%edi
 87a2ec4:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2ec7:	89 cf                	mov    %ecx,%edi
 87a2ec9:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a2ecc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a2ecf:	c1 ef 10             	shr    $0x10,%edi
 87a2ed2:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a2ed8:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2edb:	0f b6 fe             	movzbl %dh,%edi
 87a2ede:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a2ee1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87a2ee4:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2ee7:	0f b6 fa             	movzbl %dl,%edi
 87a2eea:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a2eed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2ef0:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2ef3:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a2ef6:	8b 7f 04             	mov    0x4(%edi),%edi
 87a2ef9:	31 f8                	xor    %edi,%eax
 87a2efb:	8b 7d c0             	mov    -0x40(%ebp),%edi
 87a2efe:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87a2f01:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a2f04:	c1 ef 18             	shr    $0x18,%edi
 87a2f07:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f0a:	89 f7                	mov    %esi,%edi
 87a2f0c:	31 45 ec             	xor    %eax,-0x14(%ebp)
 87a2f0f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a2f12:	c1 ef 10             	shr    $0x10,%edi
 87a2f15:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a2f1b:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f1e:	0f b6 fd             	movzbl %ch,%edi
 87a2f21:	31 45 ec             	xor    %eax,-0x14(%ebp)
 87a2f24:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87a2f27:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f2a:	0f b6 f9             	movzbl %cl,%edi
 87a2f2d:	31 45 ec             	xor    %eax,-0x14(%ebp)
 87a2f30:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2f33:	c1 e9 18             	shr    $0x18,%ecx
 87a2f36:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f39:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a2f3c:	8b 7f 08             	mov    0x8(%edi),%edi
 87a2f3f:	31 f8                	xor    %edi,%eax
 87a2f41:	89 d7                	mov    %edx,%edi
 87a2f43:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a2f46:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a2f49:	c1 ef 18             	shr    $0x18,%edi
 87a2f4c:	c1 ea 10             	shr    $0x10,%edx
 87a2f4f:	0f b6 d2             	movzbl %dl,%edx
 87a2f52:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f55:	8b 7d c0             	mov    -0x40(%ebp),%edi
 87a2f58:	31 45 f0             	xor    %eax,-0x10(%ebp)
 87a2f5b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a2f5e:	c1 ef 10             	shr    $0x10,%edi
 87a2f61:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a2f67:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f6a:	31 45 f0             	xor    %eax,-0x10(%ebp)
 87a2f6d:	89 f0                	mov    %esi,%eax
 87a2f6f:	0f b6 fc             	movzbl %ah,%edi
 87a2f72:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87a2f75:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a2f7b:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a2f7e:	31 45 f0             	xor    %eax,-0x10(%ebp)
 87a2f81:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a2f84:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a2f87:	8b 7f 0c             	mov    0xc(%edi),%edi
 87a2f8a:	8b 04 b0             	mov    (%eax,%esi,4),%eax
 87a2f8d:	31 f8                	xor    %edi,%eax
 87a2f8f:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87a2f92:	8b 3c 8f             	mov    (%edi,%ecx,4),%edi
 87a2f95:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a2f98:	31 f8                	xor    %edi,%eax
 87a2f9a:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a2f9d:	8b 0c 91             	mov    (%ecx,%edx,4),%ecx
 87a2fa0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a2fa3:	31 c8                	xor    %ecx,%eax
 87a2fa5:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2fa8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a2fab:	0f b6 c6             	movzbl %dh,%eax
 87a2fae:	8b 0c 81             	mov    (%ecx,%eax,4),%ecx
 87a2fb1:	31 4d c4             	xor    %ecx,-0x3c(%ebp)
 87a2fb4:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
 87a2fb8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a2fbb:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a2fbe:	8b 34 87             	mov    (%edi,%eax,4),%esi
 87a2fc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a2fc4:	33 70 10             	xor    0x10(%eax),%esi
 87a2fc7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 87a2fca:	c1 e8 18             	shr    $0x18,%eax
 87a2fcd:	33 34 82             	xor    (%edx,%eax,4),%esi
 87a2fd0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a2fd3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a2fd6:	c1 e8 10             	shr    $0x10,%eax
 87a2fd9:	0f b6 c0             	movzbl %al,%eax
 87a2fdc:	33 34 81             	xor    (%ecx,%eax,4),%esi
 87a2fdf:	0f b6 c6             	movzbl %dh,%eax
 87a2fe2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a2fe5:	33 34 81             	xor    (%ecx,%eax,4),%esi
 87a2fe8:	0f b6 c2             	movzbl %dl,%eax
 87a2feb:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a2fee:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a2ff1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a2ff4:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a2ff7:	8b 7f 14             	mov    0x14(%edi),%edi
 87a2ffa:	c1 ea 18             	shr    $0x18,%edx
 87a2ffd:	8b 0c 91             	mov    (%ecx,%edx,4),%ecx
 87a3000:	8b 55 e8             	mov    -0x18(%ebp),%edx
 87a3003:	31 f8                	xor    %edi,%eax
 87a3005:	8b 7d d8             	mov    -0x28(%ebp),%edi
 87a3008:	31 c8                	xor    %ecx,%eax
 87a300a:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a300d:	c1 ea 10             	shr    $0x10,%edx
 87a3010:	0f b6 d2             	movzbl %dl,%edx
 87a3013:	8b 3c 97             	mov    (%edi,%edx,4),%edi
 87a3016:	31 f8                	xor    %edi,%eax
 87a3018:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a301b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a301e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a3021:	0f b6 d4             	movzbl %ah,%edx
 87a3024:	8b 0c 91             	mov    (%ecx,%edx,4),%ecx
 87a3027:	0f b6 d0             	movzbl %al,%edx
 87a302a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a302d:	8b 14 97             	mov    (%edi,%edx,4),%edx
 87a3030:	31 4d c0             	xor    %ecx,-0x40(%ebp)
 87a3033:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a3036:	33 50 18             	xor    0x18(%eax),%edx
 87a3039:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a303c:	8b 7d d8             	mov    -0x28(%ebp),%edi
 87a303f:	c1 e8 18             	shr    $0x18,%eax
 87a3042:	33 14 81             	xor    (%ecx,%eax,4),%edx
 87a3045:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 87a3048:	c1 e9 10             	shr    $0x10,%ecx
 87a304b:	0f b6 c1             	movzbl %cl,%eax
 87a304e:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 87a3051:	33 14 87             	xor    (%edi,%eax,4),%edx
 87a3054:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a3057:	0f b6 c5             	movzbl %ch,%eax
 87a305a:	0f b6 4d e8          	movzbl -0x18(%ebp),%ecx
 87a305e:	33 14 87             	xor    (%edi,%eax,4),%edx
 87a3061:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a3064:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a3067:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a306a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a306d:	33 4f 1c             	xor    0x1c(%edi),%ecx
 87a3070:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87a3073:	c1 e8 18             	shr    $0x18,%eax
 87a3076:	33 0c 87             	xor    (%edi,%eax,4),%ecx
 87a3079:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a307c:	c1 ef 10             	shr    $0x10,%edi
 87a307f:	89 f8                	mov    %edi,%eax
 87a3081:	0f b6 f8             	movzbl %al,%edi
 87a3084:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a3087:	33 0c b8             	xor    (%eax,%edi,4),%ecx
 87a308a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a308d:	0f b6 fc             	movzbl %ah,%edi
 87a3090:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87a3093:	33 0c b8             	xor    (%eax,%edi,4),%ecx
 87a3096:	83 45 e4 20          	addl   $0x20,-0x1c(%ebp)
 87a309a:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 87a309e:	0f 85 04 fe ff ff    	jne    87a2ea8 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0xf8>
 87a30a4:	8b 7d c8             	mov    -0x38(%ebp),%edi
 87a30a7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a30aa:	c1 e7 05             	shl    $0x5,%edi
 87a30ad:	03 7d cc             	add    -0x34(%ebp),%edi
 87a30b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87a30b3:	0f b6 45 dc          	movzbl -0x24(%ebp),%eax
 87a30b7:	89 7d e0             	mov    %edi,-0x20(%ebp)
 87a30ba:	8b bb c0 fe ff ff    	mov    -0x140(%ebx),%edi
 87a30c0:	8b 3f                	mov    (%edi),%edi
 87a30c2:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87a30c5:	0f b6 04 87          	movzbl (%edi,%eax,4),%eax
 87a30c9:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a30cc:	8b 3f                	mov    (%edi),%edi
 87a30ce:	31 f8                	xor    %edi,%eax
 87a30d0:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a30d3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87a30d6:	89 f0                	mov    %esi,%eax
 87a30d8:	c1 e8 18             	shr    $0x18,%eax
 87a30db:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a30de:	89 cf                	mov    %ecx,%edi
 87a30e0:	c1 ef 10             	shr    $0x10,%edi
 87a30e3:	25 00 00 00 ff       	and    $0xff000000,%eax
 87a30e8:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 87a30eb:	89 f8                	mov    %edi,%eax
 87a30ed:	0f b6 f8             	movzbl %al,%edi
 87a30f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a30f3:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a30f6:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a30f9:	25 00 00 ff 00       	and    $0xff0000,%eax
 87a30fe:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 87a3101:	0f b6 c6             	movzbl %dh,%eax
 87a3104:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a3107:	25 00 ff 00 00       	and    $0xff00,%eax
 87a310c:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 87a310f:	0f b6 c2             	movzbl %dl,%eax
 87a3112:	0f b6 04 87          	movzbl (%edi,%eax,4),%eax
 87a3116:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3119:	8b 7f 04             	mov    0x4(%edi),%edi
 87a311c:	31 f8                	xor    %edi,%eax
 87a311e:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a3121:	89 45 e8             	mov    %eax,-0x18(%ebp)
 87a3124:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87a3127:	c1 e8 18             	shr    $0x18,%eax
 87a312a:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a312d:	89 f7                	mov    %esi,%edi
 87a312f:	c1 ef 10             	shr    $0x10,%edi
 87a3132:	25 00 00 00 ff       	and    $0xff000000,%eax
 87a3137:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a313a:	89 f8                	mov    %edi,%eax
 87a313c:	0f b6 f8             	movzbl %al,%edi
 87a313f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a3142:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a3145:	25 00 00 ff 00       	and    $0xff0000,%eax
 87a314a:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a314d:	0f b6 c5             	movzbl %ch,%eax
 87a3150:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a3153:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a3156:	25 00 ff 00 00       	and    $0xff00,%eax
 87a315b:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a315e:	0f b6 c1             	movzbl %cl,%eax
 87a3161:	0f b6 04 87          	movzbl (%edi,%eax,4),%eax
 87a3165:	c1 e9 18             	shr    $0x18,%ecx
 87a3168:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a316b:	8b 7f 08             	mov    0x8(%edi),%edi
 87a316e:	31 f8                	xor    %edi,%eax
 87a3170:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a3173:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87a3176:	89 d0                	mov    %edx,%eax
 87a3178:	c1 e8 18             	shr    $0x18,%eax
 87a317b:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a317e:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a3181:	25 00 00 00 ff       	and    $0xff000000,%eax
 87a3186:	c1 ef 10             	shr    $0x10,%edi
 87a3189:	31 45 ec             	xor    %eax,-0x14(%ebp)
 87a318c:	89 f8                	mov    %edi,%eax
 87a318e:	0f b6 f8             	movzbl %al,%edi
 87a3191:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a3194:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a3197:	25 00 00 ff 00       	and    $0xff0000,%eax
 87a319c:	31 45 ec             	xor    %eax,-0x14(%ebp)
 87a319f:	89 f0                	mov    %esi,%eax
 87a31a1:	0f b6 fc             	movzbl %ah,%edi
 87a31a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a31a7:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a31ad:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a31b0:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a31b3:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a31b7:	81 e7 00 ff 00 00    	and    $0xff00,%edi
 87a31bd:	31 7d ec             	xor    %edi,-0x14(%ebp)
 87a31c0:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a31c6:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a31c9:	33 77 0c             	xor    0xc(%edi),%esi
 87a31cc:	31 ce                	xor    %ecx,%esi
 87a31ce:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a31d1:	c1 ea 10             	shr    $0x10,%edx
 87a31d4:	0f b6 d2             	movzbl %dl,%edx
 87a31d7:	8b 14 90             	mov    (%eax,%edx,4),%edx
 87a31da:	81 e2 00 00 ff 00    	and    $0xff0000,%edx
 87a31e0:	31 d6                	xor    %edx,%esi
 87a31e2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a31e5:	0f b6 c6             	movzbl %dh,%eax
 87a31e8:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 87a31eb:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a31ee:	25 00 ff 00 00       	and    $0xff00,%eax
 87a31f3:	31 c6                	xor    %eax,%esi
 87a31f5:	85 c9                	test   %ecx,%ecx
 87a31f7:	0f 84 bb 00 00 00    	je     87a32b8 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0x508>
 87a31fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a3200:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a3203:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a3206:	c1 c8 18             	ror    $0x18,%eax
 87a3209:	c1 ca 08             	ror    $0x8,%edx
 87a320c:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a3211:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a3217:	09 d0                	or     %edx,%eax
 87a3219:	8b 55 14             	mov    0x14(%ebp),%edx
 87a321c:	33 07                	xor    (%edi),%eax
 87a321e:	89 02                	mov    %eax,(%edx)
 87a3220:	89 d0                	mov    %edx,%eax
 87a3222:	83 c0 04             	add    $0x4,%eax
 87a3225:	83 ff fc             	cmp    $0xfffffffc,%edi
 87a3228:	0f 84 ad 00 00 00    	je     87a32db <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0x52b>
 87a322e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 87a3231:	8b 55 e8             	mov    -0x18(%ebp),%edx
 87a3234:	c1 c8 18             	ror    $0x18,%eax
 87a3237:	c1 ca 08             	ror    $0x8,%edx
 87a323a:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a323f:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a3245:	09 d0                	or     %edx,%eax
 87a3247:	8b 55 14             	mov    0x14(%ebp),%edx
 87a324a:	33 47 04             	xor    0x4(%edi),%eax
 87a324d:	89 42 04             	mov    %eax,0x4(%edx)
 87a3250:	89 d0                	mov    %edx,%eax
 87a3252:	83 c0 08             	add    $0x8,%eax
 87a3255:	83 ff f8             	cmp    $0xfffffff8,%edi
 87a3258:	0f 84 9c 00 00 00    	je     87a32fa <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0x54a>
 87a325e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a3261:	89 f9                	mov    %edi,%ecx
 87a3263:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a3266:	c1 c8 18             	ror    $0x18,%eax
 87a3269:	c1 ca 08             	ror    $0x8,%edx
 87a326c:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a3271:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a3277:	09 d0                	or     %edx,%eax
 87a3279:	33 47 08             	xor    0x8(%edi),%eax
 87a327c:	8b 7d 14             	mov    0x14(%ebp),%edi
 87a327f:	89 47 08             	mov    %eax,0x8(%edi)
 87a3282:	89 f8                	mov    %edi,%eax
 87a3284:	83 c0 0c             	add    $0xc,%eax
 87a3287:	83 f9 f4             	cmp    $0xfffffff4,%ecx
 87a328a:	0f 84 89 00 00 00    	je     87a3319 <_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph+0x569>
 87a3290:	89 f0                	mov    %esi,%eax
 87a3292:	c1 c8 18             	ror    $0x18,%eax
 87a3295:	c1 ce 08             	ror    $0x8,%esi
 87a3298:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a329d:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a32a3:	09 f0                	or     %esi,%eax
 87a32a5:	33 41 0c             	xor    0xc(%ecx),%eax
 87a32a8:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a32ab:	89 41 0c             	mov    %eax,0xc(%ecx)
 87a32ae:	83 c4 34             	add    $0x34,%esp
 87a32b1:	5b                   	pop    %ebx
 87a32b2:	5e                   	pop    %esi
 87a32b3:	5f                   	pop    %edi
 87a32b4:	5d                   	pop    %ebp
 87a32b5:	c3                   	ret
 87a32b6:	66 90                	xchg   %ax,%ax
 87a32b8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a32bb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a32be:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a32c1:	c1 c8 18             	ror    $0x18,%eax
 87a32c4:	c1 ca 08             	ror    $0x8,%edx
 87a32c7:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a32cc:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a32d2:	09 d0                	or     %edx,%eax
 87a32d4:	89 01                	mov    %eax,(%ecx)
 87a32d6:	89 c8                	mov    %ecx,%eax
 87a32d8:	83 c0 04             	add    $0x4,%eax
 87a32db:	8b 55 e8             	mov    -0x18(%ebp),%edx
 87a32de:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 87a32e1:	c1 ca 18             	ror    $0x18,%edx
 87a32e4:	c1 c9 08             	ror    $0x8,%ecx
 87a32e7:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a32ed:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a32f3:	09 ca                	or     %ecx,%edx
 87a32f5:	89 10                	mov    %edx,(%eax)
 87a32f7:	83 c0 04             	add    $0x4,%eax
 87a32fa:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a32fd:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 87a3300:	c1 ca 18             	ror    $0x18,%edx
 87a3303:	c1 c9 08             	ror    $0x8,%ecx
 87a3306:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a330c:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a3312:	09 ca                	or     %ecx,%edx
 87a3314:	89 10                	mov    %edx,(%eax)
 87a3316:	83 c0 04             	add    $0x4,%eax
 87a3319:	89 f2                	mov    %esi,%edx
 87a331b:	c1 ca 18             	ror    $0x18,%edx
 87a331e:	c1 ce 08             	ror    $0x8,%esi
 87a3321:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a3327:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a332d:	09 f2                	or     %esi,%edx
 87a332f:	89 10                	mov    %edx,(%eax)
 87a3331:	83 c4 34             	add    $0x34,%esp
 87a3334:	5b                   	pop    %ebx
 87a3335:	5e                   	pop    %esi
 87a3336:	5f                   	pop    %edi
 87a3337:	5d                   	pop    %ebp
 87a3338:	c3                   	ret
 87a3339:	90                   	nop
 87a333a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::AES::decrypt @ 0x87a2db0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::decrypt(unsigned char const*, unsigned char const*, unsigned char*) const */

void __thiscall TaoCrypt::AES::decrypt(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  AES *pAVar18;
  uint local_40;
  uint local_34;
  AES *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar17 = *(uint *)param_1;
  uVar14 = *(uint *)(param_1 + 4);
  uVar15 = *(uint *)(param_1 + 8);
  local_1c = (uVar17 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
             *(uint *)(this + 0x3c);
  uVar17 = *(uint *)(param_1 + 0xc);
  local_18 = (uVar14 >> 0x18 | (uVar14 & 0xff00) << 8 | uVar14 >> 8 & 0xff00ff00 | uVar14 << 0x18) ^
             *(uint *)(this + 0x40);
  local_14 = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x44);
  iVar7 = *(int *)PTR_Td0_0936ca20;
  local_40 = (uVar17 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
             *(uint *)(this + 0x48);
  iVar8 = *(int *)PTR_Td1_0936c970;
  iVar9 = *(int *)PTR_Td2_0936c938;
  iVar10 = *(int *)PTR_Td3_0936c77c;
  local_34 = *(uint *)(this + 0x38) >> 1;
  local_20 = this + 0x3c;
  while( true ) {
    uVar16 = *(uint *)(iVar10 + (local_18 & 0xff) * 4) ^ *(uint *)(local_20 + 0x10) ^
             *(uint *)(iVar7 + (local_1c >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_40 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_14 >> 8 & 0xff) * 4);
    uVar17 = *(uint *)(iVar10 + (local_14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x14) ^
             *(uint *)(iVar7 + (local_18 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_1c >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_40 >> 8 & 0xff) * 4);
    uVar15 = *(uint *)(iVar10 + (local_40 & 0xff) * 4) ^ *(uint *)(local_20 + 0x18) ^
             *(uint *)(iVar7 + (local_14 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_1c >> 8 & 0xff) * 4);
    uVar14 = *(uint *)(iVar10 + (local_1c & 0xff) * 4) ^ *(uint *)(local_20 + 0x1c) ^
             *(uint *)(iVar7 + (local_40 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_14 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_18 >> 8 & 0xff) * 4);
    local_34 = local_34 - 1;
    if (local_34 == 0) break;
    local_1c = *(uint *)(iVar10 + (uVar17 & 0xff) * 4) ^ *(uint *)(local_20 + 0x20) ^
               *(uint *)(iVar7 + (uVar16 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar15 >> 8 & 0xff) * 4);
    local_18 = *(uint *)(iVar10 + (uVar15 & 0xff) * 4) ^ *(uint *)(local_20 + 0x24) ^
               *(uint *)(iVar7 + (uVar17 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar16 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar14 >> 8 & 0xff) * 4);
    local_14 = *(uint *)(iVar10 + (uVar14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x28) ^
               *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar17 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar16 >> 8 & 0xff) * 4);
    local_40 = *(uint *)(iVar10 + (uVar16 & 0xff) * 4) ^ *(uint *)(local_20 + 0x2c) ^
               *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar17 >> 8 & 0xff) * 4);
    local_20 = local_20 + 0x20;
  }
  pAVar18 = this + 0x3c + (*(uint *)(this + 0x38) >> 1) * 0x20;
  iVar7 = *(int *)PTR_Td4_0936ca58;
  uVar11 = (uint)*(byte *)(iVar7 + (uVar17 & 0xff) * 4) ^ *(uint *)pAVar18;
  uVar1 = uVar11 ^ *(uint *)(iVar7 + (uVar16 >> 0x18) * 4) & 0xff000000;
  uVar2 = uVar1 ^ *(uint *)(iVar7 + (uVar14 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar15 >> 8 & 0xff) * 4) & 0xff00;
  uVar12 = (uint)*(byte *)(iVar7 + (uVar15 & 0xff) * 4) ^ *(uint *)(pAVar18 + 4);
  uVar3 = uVar12 ^ *(uint *)(iVar7 + (uVar17 >> 0x18) * 4) & 0xff000000;
  uVar4 = uVar3 ^ *(uint *)(iVar7 + (uVar16 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar14 >> 8 & 0xff) * 4) & 0xff00;
  uVar13 = (uint)*(byte *)(iVar7 + (uVar14 & 0xff) * 4) ^ *(uint *)(pAVar18 + 8);
  uVar5 = uVar13 ^ *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) & 0xff000000;
  uVar6 = uVar5 ^ *(uint *)(iVar7 + (uVar17 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar16 >> 8 & 0xff) * 4) & 0xff00;
  uVar16 = (uint)*(byte *)(iVar7 + (uVar16 & 0xff) * 4) ^ *(uint *)(pAVar18 + 0xc);
  uVar14 = uVar16 ^ *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) & 0xff000000;
  uVar17 = uVar14 ^ *(uint *)(iVar7 + (uVar15 >> 0x10 & 0xff) * 4) & 0xff0000 ^
           *(uint *)(iVar7 + (uVar17 >> 8 & 0xff) * 4) & 0xff00;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar11 << 0x18;
LAB_087a32db:
    *(uint *)(param_3 + 4) =
         uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar12 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
         *(uint *)param_2;
    if (param_2 == (uchar *)0xfffffffc) goto LAB_087a32db;
    *(uint *)(param_3 + 4) =
         (uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar12 << 0x18) ^
         *(uint *)(param_2 + 4);
    if (param_2 != (uchar *)0xfffffff8) {
      *(uint *)(param_3 + 8) =
           (uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar13 << 0x18) ^
           *(uint *)(param_2 + 8);
      if (param_2 != (uchar *)0xfffffff4) {
        *(uint *)(param_3 + 0xc) =
             (uVar14 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar16 << 0x18) ^
             *(uint *)(param_2 + 0xc);
        return;
      }
      goto LAB_087a3319;
    }
  }
  *(uint *)(param_3 + 8) =
       uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar13 << 0x18;
LAB_087a3319:
  *(uint *)(param_3 + 0xc) =
       uVar14 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar16 << 0x18;
  return;
}

```

---

## encrypt

```asm
// === 087a3340 TaoCrypt::AES::encrypt  [0x087a3340-0x87a38df] ===
 87a3340:	55                   	push   %ebp
 87a3341:	89 e5                	mov    %esp,%ebp
 87a3343:	57                   	push   %edi
 87a3344:	56                   	push   %esi
 87a3345:	53                   	push   %ebx
 87a3346:	83 ec 34             	sub    $0x34,%esp
 87a3349:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a334c:	8b 45 08             	mov    0x8(%ebp),%eax
 87a334f:	e8 a4 fa f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3354:	81 c3 44 98 bc 00    	add    $0xbc9844,%ebx
 87a335a:	8b 3a                	mov    (%edx),%edi
 87a335c:	83 c0 3c             	add    $0x3c,%eax
 87a335f:	8b 72 04             	mov    0x4(%edx),%esi
 87a3362:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87a3365:	89 f8                	mov    %edi,%eax
 87a3367:	c1 cf 18             	ror    $0x18,%edi
 87a336a:	89 f1                	mov    %esi,%ecx
 87a336c:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a3372:	c1 c8 08             	ror    $0x8,%eax
 87a3375:	89 7d e8             	mov    %edi,-0x18(%ebp)
 87a3378:	25 00 ff 00 ff       	and    $0xff00ff00,%eax
 87a337d:	8b 7a 08             	mov    0x8(%edx),%edi
 87a3380:	09 45 e8             	or     %eax,-0x18(%ebp)
 87a3383:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3386:	c1 ce 18             	ror    $0x18,%esi
 87a3389:	89 75 ec             	mov    %esi,-0x14(%ebp)
 87a338c:	c1 c9 08             	ror    $0x8,%ecx
 87a338f:	81 65 ec ff 00 ff 00 	andl   $0xff00ff,-0x14(%ebp)
 87a3396:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a339c:	09 4d ec             	or     %ecx,-0x14(%ebp)
 87a339f:	89 fe                	mov    %edi,%esi
 87a33a1:	8b 40 3c             	mov    0x3c(%eax),%eax
 87a33a4:	c1 cf 18             	ror    $0x18,%edi
 87a33a7:	31 45 e8             	xor    %eax,-0x18(%ebp)
 87a33aa:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a33b0:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a33b3:	c1 ce 08             	ror    $0x8,%esi
 87a33b6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a33b9:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a33bf:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87a33c2:	8b 7a 0c             	mov    0xc(%edx),%edi
 87a33c5:	09 75 f0             	or     %esi,-0x10(%ebp)
 87a33c8:	8b 49 04             	mov    0x4(%ecx),%ecx
 87a33cb:	8b 40 08             	mov    0x8(%eax),%eax
 87a33ce:	31 4d ec             	xor    %ecx,-0x14(%ebp)
 87a33d1:	89 fa                	mov    %edi,%edx
 87a33d3:	31 45 f0             	xor    %eax,-0x10(%ebp)
 87a33d6:	8b 83 d8 ff ff ff    	mov    -0x28(%ebx),%eax
 87a33dc:	c1 ca 08             	ror    $0x8,%edx
 87a33df:	c1 cf 18             	ror    $0x18,%edi
 87a33e2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a33e5:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a33eb:	81 e7 ff 00 ff 00    	and    $0xff00ff,%edi
 87a33f1:	09 d7                	or     %edx,%edi
 87a33f3:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a33f6:	8b 00                	mov    (%eax),%eax
 87a33f8:	8b 49 38             	mov    0x38(%ecx),%ecx
 87a33fb:	33 7a 0c             	xor    0xc(%edx),%edi
 87a33fe:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3401:	8b 83 bc ff ff ff    	mov    -0x44(%ebx),%eax
 87a3407:	d1 e9                	shr    $1,%ecx
 87a3409:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a340c:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 87a340f:	8b 00                	mov    (%eax),%eax
 87a3411:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 87a3414:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a3417:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87a341a:	8b 83 e0 ff ff ff    	mov    -0x20(%ebx),%eax
 87a3420:	8b 00                	mov    (%eax),%eax
 87a3422:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87a3425:	8b 83 c4 fb ff ff    	mov    -0x43c(%ebx),%eax
 87a342b:	8b 00                	mov    (%eax),%eax
 87a342d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87a3430:	89 c7                	mov    %eax,%edi
 87a3432:	e9 0e 01 00 00       	jmp    87a3545 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0x205>
 87a3437:	90                   	nop
 87a3438:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a343b:	0f b6 f9             	movzbl %cl,%edi
 87a343e:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a3441:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a3444:	8b 3f                	mov    (%edi),%edi
 87a3446:	31 fa                	xor    %edi,%edx
 87a3448:	89 f7                	mov    %esi,%edi
 87a344a:	89 55 e8             	mov    %edx,-0x18(%ebp)
 87a344d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a3450:	c1 ef 18             	shr    $0x18,%edi
 87a3453:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a3456:	8b 7d c0             	mov    -0x40(%ebp),%edi
 87a3459:	31 55 e8             	xor    %edx,-0x18(%ebp)
 87a345c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87a345f:	c1 ef 10             	shr    $0x10,%edi
 87a3462:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a3468:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a346b:	0f b6 fc             	movzbl %ah,%edi
 87a346e:	31 55 e8             	xor    %edx,-0x18(%ebp)
 87a3471:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a3474:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a3477:	31 55 e8             	xor    %edx,-0x18(%ebp)
 87a347a:	89 f2                	mov    %esi,%edx
 87a347c:	0f b6 fa             	movzbl %dl,%edi
 87a347f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a3482:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a3485:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a3488:	8b 7f 04             	mov    0x4(%edi),%edi
 87a348b:	31 fa                	xor    %edi,%edx
 87a348d:	8b 7d c0             	mov    -0x40(%ebp),%edi
 87a3490:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a3493:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a3496:	c1 ef 18             	shr    $0x18,%edi
 87a3499:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a349c:	89 c7                	mov    %eax,%edi
 87a349e:	31 55 ec             	xor    %edx,-0x14(%ebp)
 87a34a1:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87a34a4:	c1 ef 10             	shr    $0x10,%edi
 87a34a7:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a34ad:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a34b0:	0f b6 fd             	movzbl %ch,%edi
 87a34b3:	31 55 ec             	xor    %edx,-0x14(%ebp)
 87a34b6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a34b9:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a34bc:	31 55 ec             	xor    %edx,-0x14(%ebp)
 87a34bf:	0f b6 7d c0          	movzbl -0x40(%ebp),%edi
 87a34c3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a34c6:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a34c9:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a34cc:	8b 7f 08             	mov    0x8(%edi),%edi
 87a34cf:	31 fa                	xor    %edi,%edx
 87a34d1:	89 c7                	mov    %eax,%edi
 87a34d3:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a34d6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a34d9:	c1 ef 18             	shr    $0x18,%edi
 87a34dc:	0f b6 c0             	movzbl %al,%eax
 87a34df:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a34e2:	89 cf                	mov    %ecx,%edi
 87a34e4:	31 55 f0             	xor    %edx,-0x10(%ebp)
 87a34e7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87a34ea:	c1 ef 10             	shr    $0x10,%edi
 87a34ed:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a34f3:	c1 e9 18             	shr    $0x18,%ecx
 87a34f6:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a34f9:	31 55 f0             	xor    %edx,-0x10(%ebp)
 87a34fc:	89 f2                	mov    %esi,%edx
 87a34fe:	0f b6 fe             	movzbl %dh,%edi
 87a3501:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a3504:	c1 ee 10             	shr    $0x10,%esi
 87a3507:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a350d:	8b 14 ba             	mov    (%edx,%edi,4),%edx
 87a3510:	31 55 f0             	xor    %edx,-0x10(%ebp)
 87a3513:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3516:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a3519:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a351c:	8b 52 0c             	mov    0xc(%edx),%edx
 87a351f:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87a3522:	31 d0                	xor    %edx,%eax
 87a3524:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87a3527:	8b 3c 8f             	mov    (%edi,%ecx,4),%edi
 87a352a:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a352d:	8b 14 b2             	mov    (%edx,%esi,4),%edx
 87a3530:	31 f8                	xor    %edi,%eax
 87a3532:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a3535:	31 d0                	xor    %edx,%eax
 87a3537:	0f b6 d5             	movzbl %ch,%edx
 87a353a:	8b 3c 97             	mov    (%edi,%edx,4),%edi
 87a353d:	31 f8                	xor    %edi,%eax
 87a353f:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3542:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a3545:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 87a3549:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a354c:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a354f:	8b 34 87             	mov    (%edi,%eax,4),%esi
 87a3552:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a3555:	33 70 10             	xor    0x10(%eax),%esi
 87a3558:	8b 45 e8             	mov    -0x18(%ebp),%eax
 87a355b:	c1 e8 18             	shr    $0x18,%eax
 87a355e:	33 34 82             	xor    (%edx,%eax,4),%esi
 87a3561:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a3564:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a3567:	c1 e8 10             	shr    $0x10,%eax
 87a356a:	0f b6 c0             	movzbl %al,%eax
 87a356d:	33 34 81             	xor    (%ecx,%eax,4),%esi
 87a3570:	0f b6 c6             	movzbl %dh,%eax
 87a3573:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a3576:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a3579:	33 34 81             	xor    (%ecx,%eax,4),%esi
 87a357c:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
 87a3580:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87a3583:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a3586:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a3589:	8b 7f 14             	mov    0x14(%edi),%edi
 87a358c:	31 f8                	xor    %edi,%eax
 87a358e:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3591:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a3594:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a3597:	c1 e8 18             	shr    $0x18,%eax
 87a359a:	8b 14 82             	mov    (%edx,%eax,4),%edx
 87a359d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a35a0:	31 55 c0             	xor    %edx,-0x40(%ebp)
 87a35a3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a35a6:	c1 e8 10             	shr    $0x10,%eax
 87a35a9:	0f b6 c0             	movzbl %al,%eax
 87a35ac:	8b 0c 81             	mov    (%ecx,%eax,4),%ecx
 87a35af:	0f b6 c6             	movzbl %dh,%eax
 87a35b2:	31 4d c0             	xor    %ecx,-0x40(%ebp)
 87a35b5:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87a35b8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a35bb:	8b 0c 81             	mov    (%ecx,%eax,4),%ecx
 87a35be:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
 87a35c2:	31 4d c0             	xor    %ecx,-0x40(%ebp)
 87a35c5:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a35c8:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a35cb:	33 42 18             	xor    0x18(%edx),%eax
 87a35ce:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a35d1:	8b 7d d8             	mov    -0x28(%ebp),%edi
 87a35d4:	c1 ea 18             	shr    $0x18,%edx
 87a35d7:	33 04 91             	xor    (%ecx,%edx,4),%eax
 87a35da:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a35dd:	c1 e9 10             	shr    $0x10,%ecx
 87a35e0:	0f b6 d1             	movzbl %cl,%edx
 87a35e3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 87a35e6:	33 04 97             	xor    (%edi,%edx,4),%eax
 87a35e9:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a35ec:	0f b6 d5             	movzbl %ch,%edx
 87a35ef:	0f b6 4d f0          	movzbl -0x10(%ebp),%ecx
 87a35f3:	33 04 97             	xor    (%edi,%edx,4),%eax
 87a35f6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87a35f9:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87a35fc:	8b 0c 8a             	mov    (%edx,%ecx,4),%ecx
 87a35ff:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a3602:	33 4f 1c             	xor    0x1c(%edi),%ecx
 87a3605:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87a3608:	c1 ea 18             	shr    $0x18,%edx
 87a360b:	33 0c 97             	xor    (%edi,%edx,4),%ecx
 87a360e:	8b 7d e8             	mov    -0x18(%ebp),%edi
 87a3611:	c1 ef 10             	shr    $0x10,%edi
 87a3614:	89 fa                	mov    %edi,%edx
 87a3616:	0f b6 fa             	movzbl %dl,%edi
 87a3619:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87a361c:	33 0c ba             	xor    (%edx,%edi,4),%ecx
 87a361f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a3622:	0f b6 fe             	movzbl %dh,%edi
 87a3625:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a3628:	33 0c ba             	xor    (%edx,%edi,4),%ecx
 87a362b:	83 45 e4 20          	addl   $0x20,-0x1c(%ebp)
 87a362f:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 87a3633:	0f 85 ff fd ff ff    	jne    87a3438 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0xf8>
 87a3639:	89 f7                	mov    %esi,%edi
 87a363b:	89 c6                	mov    %eax,%esi
 87a363d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a3640:	89 fa                	mov    %edi,%edx
 87a3642:	8b 7d c8             	mov    -0x38(%ebp),%edi
 87a3645:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87a3648:	0f b6 c1             	movzbl %cl,%eax
 87a364b:	c1 e7 05             	shl    $0x5,%edi
 87a364e:	03 7d cc             	add    -0x34(%ebp),%edi
 87a3651:	89 7d e0             	mov    %edi,-0x20(%ebp)
 87a3654:	8b bb 1c fc ff ff    	mov    -0x3e4(%ebx),%edi
 87a365a:	8b 3f                	mov    (%edi),%edi
 87a365c:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87a365f:	0f b6 04 87          	movzbl (%edi,%eax,4),%eax
 87a3663:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3666:	8b 3f                	mov    (%edi),%edi
 87a3668:	31 f8                	xor    %edi,%eax
 87a366a:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a366d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87a3670:	89 d0                	mov    %edx,%eax
 87a3672:	c1 e8 18             	shr    $0x18,%eax
 87a3675:	8b 04 87             	mov    (%edi,%eax,4),%eax
 87a3678:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a367b:	25 00 00 00 ff       	and    $0xff000000,%eax
 87a3680:	c1 ef 10             	shr    $0x10,%edi
 87a3683:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 87a3686:	89 f8                	mov    %edi,%eax
 87a3688:	0f b6 f8             	movzbl %al,%edi
 87a368b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a368e:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 87a3691:	25 00 00 ff 00       	and    $0xff0000,%eax
 87a3696:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 87a3699:	89 f0                	mov    %esi,%eax
 87a369b:	0f b6 fc             	movzbl %ah,%edi
 87a369e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a36a1:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a36a4:	81 e7 00 ff 00 00    	and    $0xff00,%edi
 87a36aa:	31 7d e4             	xor    %edi,-0x1c(%ebp)
 87a36ad:	0f b6 fa             	movzbl %dl,%edi
 87a36b0:	0f b6 3c b8          	movzbl (%eax,%edi,4),%edi
 87a36b4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a36b7:	8b 40 04             	mov    0x4(%eax),%eax
 87a36ba:	31 c7                	xor    %eax,%edi
 87a36bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a36bf:	89 7d e8             	mov    %edi,-0x18(%ebp)
 87a36c2:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a36c5:	c1 ef 18             	shr    $0x18,%edi
 87a36c8:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a36cb:	81 e7 00 00 00 ff    	and    $0xff000000,%edi
 87a36d1:	31 7d e8             	xor    %edi,-0x18(%ebp)
 87a36d4:	89 f7                	mov    %esi,%edi
 87a36d6:	c1 ef 10             	shr    $0x10,%edi
 87a36d9:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a36df:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a36e2:	81 e7 00 00 ff 00    	and    $0xff0000,%edi
 87a36e8:	31 7d e8             	xor    %edi,-0x18(%ebp)
 87a36eb:	0f b6 fd             	movzbl %ch,%edi
 87a36ee:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a36f1:	81 e7 00 ff 00 00    	and    $0xff00,%edi
 87a36f7:	31 7d e8             	xor    %edi,-0x18(%ebp)
 87a36fa:	0f b6 7d dc          	movzbl -0x24(%ebp),%edi
 87a36fe:	0f b6 3c b8          	movzbl (%eax,%edi,4),%edi
 87a3702:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a3705:	8b 40 08             	mov    0x8(%eax),%eax
 87a3708:	31 c7                	xor    %eax,%edi
 87a370a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a370d:	89 7d ec             	mov    %edi,-0x14(%ebp)
 87a3710:	89 f7                	mov    %esi,%edi
 87a3712:	81 e6 ff 00 00 00    	and    $0xff,%esi
 87a3718:	c1 ef 18             	shr    $0x18,%edi
 87a371b:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a371e:	0f b6 34 b0          	movzbl (%eax,%esi,4),%esi
 87a3722:	81 e7 00 00 00 ff    	and    $0xff000000,%edi
 87a3728:	31 7d ec             	xor    %edi,-0x14(%ebp)
 87a372b:	89 cf                	mov    %ecx,%edi
 87a372d:	c1 ef 10             	shr    $0x10,%edi
 87a3730:	81 e7 ff 00 00 00    	and    $0xff,%edi
 87a3736:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a3739:	81 e7 00 00 ff 00    	and    $0xff0000,%edi
 87a373f:	31 7d ec             	xor    %edi,-0x14(%ebp)
 87a3742:	0f b6 fe             	movzbl %dh,%edi
 87a3745:	8b 3c b8             	mov    (%eax,%edi,4),%edi
 87a3748:	81 e7 00 ff 00 00    	and    $0xff00,%edi
 87a374e:	31 7d ec             	xor    %edi,-0x14(%ebp)
 87a3751:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a3754:	33 77 0c             	xor    0xc(%edi),%esi
 87a3757:	c1 e9 18             	shr    $0x18,%ecx
 87a375a:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a375d:	c1 ea 10             	shr    $0x10,%edx
 87a3760:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 87a3763:	0f b6 d2             	movzbl %dl,%edx
 87a3766:	8b 14 90             	mov    (%eax,%edx,4),%edx
 87a3769:	81 e1 00 00 00 ff    	and    $0xff000000,%ecx
 87a376f:	31 ce                	xor    %ecx,%esi
 87a3771:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a3774:	81 e2 00 00 ff 00    	and    $0xff0000,%edx
 87a377a:	31 d6                	xor    %edx,%esi
 87a377c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a377f:	0f b6 c6             	movzbl %dh,%eax
 87a3782:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 87a3785:	25 00 ff 00 00       	and    $0xff00,%eax
 87a378a:	31 c6                	xor    %eax,%esi
 87a378c:	85 ff                	test   %edi,%edi
 87a378e:	0f 84 bc 00 00 00    	je     87a3850 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0x510>
 87a3794:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a3797:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a379a:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a379d:	c1 c8 18             	ror    $0x18,%eax
 87a37a0:	c1 ca 08             	ror    $0x8,%edx
 87a37a3:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a37a8:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a37ae:	09 d0                	or     %edx,%eax
 87a37b0:	8b 55 14             	mov    0x14(%ebp),%edx
 87a37b3:	33 07                	xor    (%edi),%eax
 87a37b5:	89 02                	mov    %eax,(%edx)
 87a37b7:	89 d0                	mov    %edx,%eax
 87a37b9:	83 c0 04             	add    $0x4,%eax
 87a37bc:	83 ff fc             	cmp    $0xfffffffc,%edi
 87a37bf:	0f 84 ae 00 00 00    	je     87a3873 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0x533>
 87a37c5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 87a37c8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 87a37cb:	c1 c8 18             	ror    $0x18,%eax
 87a37ce:	c1 ca 08             	ror    $0x8,%edx
 87a37d1:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a37d6:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a37dc:	09 d0                	or     %edx,%eax
 87a37de:	8b 55 14             	mov    0x14(%ebp),%edx
 87a37e1:	33 47 04             	xor    0x4(%edi),%eax
 87a37e4:	89 42 04             	mov    %eax,0x4(%edx)
 87a37e7:	89 d0                	mov    %edx,%eax
 87a37e9:	83 c0 08             	add    $0x8,%eax
 87a37ec:	83 ff f8             	cmp    $0xfffffff8,%edi
 87a37ef:	0f 84 9d 00 00 00    	je     87a3892 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0x552>
 87a37f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a37f8:	89 f9                	mov    %edi,%ecx
 87a37fa:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a37fd:	c1 c8 18             	ror    $0x18,%eax
 87a3800:	c1 ca 08             	ror    $0x8,%edx
 87a3803:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a3808:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a380e:	09 d0                	or     %edx,%eax
 87a3810:	33 47 08             	xor    0x8(%edi),%eax
 87a3813:	8b 7d 14             	mov    0x14(%ebp),%edi
 87a3816:	89 47 08             	mov    %eax,0x8(%edi)
 87a3819:	89 f8                	mov    %edi,%eax
 87a381b:	83 c0 0c             	add    $0xc,%eax
 87a381e:	83 f9 f4             	cmp    $0xfffffff4,%ecx
 87a3821:	0f 84 8a 00 00 00    	je     87a38b1 <_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph+0x571>
 87a3827:	89 f0                	mov    %esi,%eax
 87a3829:	c1 c8 18             	ror    $0x18,%eax
 87a382c:	c1 ce 08             	ror    $0x8,%esi
 87a382f:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a3834:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a383a:	09 f0                	or     %esi,%eax
 87a383c:	33 41 0c             	xor    0xc(%ecx),%eax
 87a383f:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a3842:	89 41 0c             	mov    %eax,0xc(%ecx)
 87a3845:	83 c4 34             	add    $0x34,%esp
 87a3848:	5b                   	pop    %ebx
 87a3849:	5e                   	pop    %esi
 87a384a:	5f                   	pop    %edi
 87a384b:	5d                   	pop    %ebp
 87a384c:	c3                   	ret
 87a384d:	8d 76 00             	lea    0x0(%esi),%esi
 87a3850:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a3853:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a3856:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a3859:	c1 c8 18             	ror    $0x18,%eax
 87a385c:	c1 ca 08             	ror    $0x8,%edx
 87a385f:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a3864:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a386a:	09 d0                	or     %edx,%eax
 87a386c:	89 01                	mov    %eax,(%ecx)
 87a386e:	89 c8                	mov    %ecx,%eax
 87a3870:	83 c0 04             	add    $0x4,%eax
 87a3873:	8b 55 e8             	mov    -0x18(%ebp),%edx
 87a3876:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 87a3879:	c1 ca 18             	ror    $0x18,%edx
 87a387c:	c1 c9 08             	ror    $0x8,%ecx
 87a387f:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a3885:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a388b:	09 ca                	or     %ecx,%edx
 87a388d:	89 10                	mov    %edx,(%eax)
 87a388f:	83 c0 04             	add    $0x4,%eax
 87a3892:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a3895:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 87a3898:	c1 ca 18             	ror    $0x18,%edx
 87a389b:	c1 c9 08             	ror    $0x8,%ecx
 87a389e:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a38a4:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a38aa:	09 ca                	or     %ecx,%edx
 87a38ac:	89 10                	mov    %edx,(%eax)
 87a38ae:	83 c0 04             	add    $0x4,%eax
 87a38b1:	89 f2                	mov    %esi,%edx
 87a38b3:	c1 ca 18             	ror    $0x18,%edx
 87a38b6:	c1 ce 08             	ror    $0x8,%esi
 87a38b9:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a38bf:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 87a38c5:	09 f2                	or     %esi,%edx
 87a38c7:	89 10                	mov    %edx,(%eax)
 87a38c9:	83 c4 34             	add    $0x34,%esp
 87a38cc:	5b                   	pop    %ebx
 87a38cd:	5e                   	pop    %esi
 87a38ce:	5f                   	pop    %edi
 87a38cf:	5d                   	pop    %ebp
 87a38d0:	c3                   	ret
 87a38d1:	90                   	nop
 87a38d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a38d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::AES::encrypt @ 0x87a3340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::encrypt(unsigned char const*, unsigned char const*, unsigned char*) const */

void __thiscall TaoCrypt::AES::encrypt(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  AES *pAVar16;
  uint uVar17;
  uint uVar18;
  uint local_40;
  uint local_34;
  AES *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar15 = *(uint *)param_1;
  uVar11 = *(uint *)(param_1 + 4);
  uVar13 = *(uint *)(param_1 + 8);
  local_1c = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x3c);
  uVar15 = *(uint *)(param_1 + 0xc);
  local_18 = (uVar11 >> 0x18 | (uVar11 & 0xff00) << 8 | uVar11 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
             *(uint *)(this + 0x40);
  local_14 = (uVar13 >> 0x18 | (uVar13 & 0xff00) << 8 | uVar13 >> 8 & 0xff00ff00 | uVar13 << 0x18) ^
             *(uint *)(this + 0x44);
  iVar7 = *(int *)PTR_Te0_0936cb70;
  local_40 = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x48);
  iVar8 = *(int *)PTR_Te1_0936cb54;
  iVar9 = *(int *)PTR_Te2_0936cb78;
  iVar10 = *(int *)PTR_Te3_0936c75c;
  local_34 = *(uint *)(this + 0x38) >> 1;
  local_20 = this + 0x3c;
  while( true ) {
    uVar14 = *(uint *)(iVar10 + (local_40 & 0xff) * 4) ^ *(uint *)(local_20 + 0x10) ^
             *(uint *)(iVar7 + (local_1c >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_14 >> 8 & 0xff) * 4);
    uVar15 = *(uint *)(iVar10 + (local_1c & 0xff) * 4) ^ *(uint *)(local_20 + 0x14) ^
             *(uint *)(iVar7 + (local_18 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_14 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_40 >> 8 & 0xff) * 4);
    uVar11 = *(uint *)(iVar10 + (local_18 & 0xff) * 4) ^ *(uint *)(local_20 + 0x18) ^
             *(uint *)(iVar7 + (local_14 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_40 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_1c >> 8 & 0xff) * 4);
    uVar13 = *(uint *)(iVar10 + (local_14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x1c) ^
             *(uint *)(iVar7 + (local_40 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_1c >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_18 >> 8 & 0xff) * 4);
    local_34 = local_34 - 1;
    if (local_34 == 0) break;
    local_1c = *(uint *)(iVar10 + (uVar13 & 0xff) * 4) ^ *(uint *)(local_20 + 0x20) ^
               *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar11 >> 8 & 0xff) * 4);
    local_18 = *(uint *)(iVar10 + (uVar14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x24) ^
               *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar13 >> 8 & 0xff) * 4);
    local_14 = *(uint *)(iVar10 + (uVar15 & 0xff) * 4) ^ *(uint *)(local_20 + 0x28) ^
               *(uint *)(iVar7 + (uVar11 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar14 >> 8 & 0xff) * 4);
    local_40 = *(uint *)(iVar10 + (uVar11 & 0xff) * 4) ^ *(uint *)(local_20 + 0x2c) ^
               *(uint *)(iVar7 + (uVar13 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar15 >> 8 & 0xff) * 4);
    local_20 = local_20 + 0x20;
  }
  pAVar16 = this + 0x3c + (*(uint *)(this + 0x38) >> 1) * 0x20;
  iVar7 = *(int *)PTR_Te4_0936c7b4;
  uVar12 = (uint)*(byte *)(iVar7 + (uVar13 & 0xff) * 4) ^ *(uint *)pAVar16;
  uVar1 = uVar12 ^ *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) & 0xff000000;
  uVar2 = uVar1 ^ *(uint *)(iVar7 + (uVar15 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar11 >> 8 & 0xff) * 4) & 0xff00;
  uVar17 = (uint)*(byte *)(iVar7 + (uVar14 & 0xff) * 4) ^ *(uint *)(pAVar16 + 4);
  uVar3 = uVar17 ^ *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) & 0xff000000;
  uVar4 = uVar3 ^ *(uint *)(iVar7 + (uVar11 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar13 >> 8 & 0xff) * 4) & 0xff00;
  uVar18 = (uint)*(byte *)(iVar7 + (uVar15 & 0xff) * 4) ^ *(uint *)(pAVar16 + 8);
  uVar5 = uVar18 ^ *(uint *)(iVar7 + (uVar11 >> 0x18) * 4) & 0xff000000;
  uVar6 = uVar5 ^ *(uint *)(iVar7 + (uVar13 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar14 >> 8 & 0xff) * 4) & 0xff00;
  uVar11 = (uint)*(byte *)(iVar7 + (uVar11 & 0xff) * 4) ^ *(uint *)(pAVar16 + 0xc);
  uVar13 = uVar11 ^ *(uint *)(iVar7 + (uVar13 >> 0x18) * 4) & 0xff000000;
  uVar15 = uVar13 ^ *(uint *)(iVar7 + (uVar14 >> 0x10 & 0xff) * 4) & 0xff0000 ^
           *(uint *)(iVar7 + (uVar15 >> 8 & 0xff) * 4) & 0xff00;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar12 << 0x18;
LAB_087a3873:
    *(uint *)(param_3 + 4) =
         uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar17 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar12 << 0x18) ^
         *(uint *)param_2;
    if (param_2 == (uchar *)0xfffffffc) goto LAB_087a3873;
    *(uint *)(param_3 + 4) =
         (uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
         *(uint *)(param_2 + 4);
    if (param_2 != (uchar *)0xfffffff8) {
      *(uint *)(param_3 + 8) =
           (uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar18 << 0x18) ^
           *(uint *)(param_2 + 8);
      if (param_2 != (uchar *)0xfffffff4) {
        *(uint *)(param_3 + 0xc) =
             (uVar13 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
             *(uint *)(param_2 + 0xc);
        return;
      }
      goto LAB_087a38b1;
    }
  }
  *(uint *)(param_3 + 8) =
       uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar18 << 0x18;
LAB_087a38b1:
  *(uint *)(param_3 + 0xc) =
       uVar13 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar11 << 0x18;
  return;
}

```

