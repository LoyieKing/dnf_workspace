# TaoCrypt__RSA_BlockType2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Pad

```asm
// === 08767c10 TaoCrypt::RSA_BlockType2::Pad  [0x08767c10-0x8767c9f] ===
 8767c10:	55                   	push   %ebp
 8767c11:	89 e5                	mov    %esp,%ebp
 8767c13:	57                   	push   %edi
 8767c14:	56                   	push   %esi
 8767c15:	53                   	push   %ebx
 8767c16:	83 ec 2c             	sub    $0x2c,%esp
 8767c19:	8b 55 18             	mov    0x18(%ebp),%edx
 8767c1c:	e8 d7 b1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767c21:	81 c3 77 4f c0 00    	add    $0xc04f77,%ebx
 8767c27:	8b 75 14             	mov    0x14(%ebp),%esi
 8767c2a:	f6 c2 07             	test   $0x7,%dl
 8767c2d:	74 06                	je     8767c35 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE+0x25>
 8767c2f:	c6 06 00             	movb   $0x0,(%esi)
 8767c32:	83 c6 01             	add    $0x1,%esi
 8767c35:	8d 46 01             	lea    0x1(%esi),%eax
 8767c38:	c6 06 02             	movb   $0x2,(%esi)
 8767c3b:	c1 ea 03             	shr    $0x3,%edx
 8767c3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767c42:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8767c45:	2b 55 10             	sub    0x10(%ebp),%edx
 8767c48:	8d 7a ff             	lea    -0x1(%edx),%edi
 8767c4b:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8767c4e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8767c52:	89 04 24             	mov    %eax,(%esp)
 8767c55:	e8 86 fc ff ff       	call   87678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>
 8767c5a:	83 ff 01             	cmp    $0x1,%edi
 8767c5d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8767c60:	76 17                	jbe    8767c79 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE+0x69>
 8767c62:	b8 01 00 00 00       	mov    $0x1,%eax
 8767c67:	90                   	nop
 8767c68:	80 3c 06 00          	cmpb   $0x0,(%esi,%eax,1)
 8767c6c:	75 04                	jne    8767c72 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE+0x62>
 8767c6e:	c6 04 06 01          	movb   $0x1,(%esi,%eax,1)
 8767c72:	83 c0 01             	add    $0x1,%eax
 8767c75:	39 c7                	cmp    %eax,%edi
 8767c77:	77 ef                	ja     8767c68 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE+0x58>
 8767c79:	c6 44 16 ff 00       	movb   $0x0,-0x1(%esi,%edx,1)
 8767c7e:	8b 45 10             	mov    0x10(%ebp),%eax
 8767c81:	01 d6                	add    %edx,%esi
 8767c83:	89 34 24             	mov    %esi,(%esp)
 8767c86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767c8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767c8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767c91:	e8 0a 5c 91 ff       	call   807d8a0 <memcpy@plt>
 8767c96:	83 c4 2c             	add    $0x2c,%esp
 8767c99:	5b                   	pop    %ebx
 8767c9a:	5e                   	pop    %esi
 8767c9b:	5f                   	pop    %edi
 8767c9c:	5d                   	pop    %ebp
 8767c9d:	c3                   	ret
 8767c9e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::RSA_BlockType2::Pad @ 0x8767c10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType2::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int,
   TaoCrypt::RandomNumberGenerator&) const */

void __thiscall
TaoCrypt::RSA_BlockType2::Pad
          (RSA_BlockType2 *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4,
          RandomNumberGenerator *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_4 & 7) != 0) {
    *param_3 = '\0';
    param_3 = param_3 + 1;
  }
  *param_3 = '\x02';
  iVar3 = (param_4 >> 3) - param_2;
  uVar1 = iVar3 - 1;
  RandomNumberGenerator::GenerateBlock(param_5,param_3 + 1,uVar1);
  if (1 < uVar1) {
    uVar2 = 1;
    do {
      if (param_3[uVar2] == '\0') {
        param_3[uVar2] = '\x01';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  param_3[iVar3 + -1] = '\0';
  memcpy(param_3 + iVar3,param_1,param_2);
  return;
}

```

---

## UnPad

```asm
// === 08767b50 TaoCrypt::RSA_BlockType2::UnPad  [0x08767b50-0x8767c0f] ===
 8767b50:	55                   	push   %ebp
 8767b51:	31 d2                	xor    %edx,%edx
 8767b53:	89 e5                	mov    %esp,%ebp
 8767b55:	57                   	push   %edi
 8767b56:	56                   	push   %esi
 8767b57:	53                   	push   %ebx
 8767b58:	83 ec 2c             	sub    $0x2c,%esp
 8767b5b:	8b 45 10             	mov    0x10(%ebp),%eax
 8767b5e:	e8 95 b2 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767b63:	81 c3 35 50 c0 00    	add    $0xc05035,%ebx
 8767b69:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8767b6c:	c6 45 d8 00          	movb   $0x0,-0x28(%ebp)
 8767b70:	89 c6                	mov    %eax,%esi
 8767b72:	c1 ee 03             	shr    $0x3,%esi
 8767b75:	83 fe 0a             	cmp    $0xa,%esi
 8767b78:	8d 7e f6             	lea    -0xa(%esi),%edi
 8767b7b:	0f 47 d7             	cmova  %edi,%edx
 8767b7e:	a8 07                	test   $0x7,%al
 8767b80:	74 0a                	je     8767b8c <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x3c>
 8767b82:	80 39 00             	cmpb   $0x0,(%ecx)
 8767b85:	0f 95 45 d8          	setne  -0x28(%ebp)
 8767b89:	83 c1 01             	add    $0x1,%ecx
 8767b8c:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 8767b90:	bf 01 00 00 00       	mov    $0x1,%edi
 8767b95:	80 39 02             	cmpb   $0x2,(%ecx)
 8767b98:	0f 45 c7             	cmovne %edi,%eax
 8767b9b:	83 fe 01             	cmp    $0x1,%esi
 8767b9e:	88 45 d8             	mov    %al,-0x28(%ebp)
 8767ba1:	b8 01 00 00 00       	mov    $0x1,%eax
 8767ba6:	76 12                	jbe    8767bba <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x6a>
 8767ba8:	80 79 01 00          	cmpb   $0x0,0x1(%ecx)
 8767bac:	b0 02                	mov    $0x2,%al
 8767bae:	89 d7                	mov    %edx,%edi
 8767bb0:	74 08                	je     8767bba <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x6a>
 8767bb2:	39 f0                	cmp    %esi,%eax
 8767bb4:	72 22                	jb     8767bd8 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x88>
 8767bb6:	66 90                	xchg   %ax,%ax
 8767bb8:	89 fa                	mov    %edi,%edx
 8767bba:	29 c6                	sub    %eax,%esi
 8767bbc:	39 d6                	cmp    %edx,%esi
 8767bbe:	77 08                	ja     8767bc8 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x78>
 8767bc0:	80 7d d8 00          	cmpb   $0x0,-0x28(%ebp)
 8767bc4:	74 2a                	je     8767bf0 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0xa0>
 8767bc6:	66 90                	xchg   %ax,%ax
 8767bc8:	31 f6                	xor    %esi,%esi
 8767bca:	83 c4 2c             	add    $0x2c,%esp
 8767bcd:	89 f0                	mov    %esi,%eax
 8767bcf:	5b                   	pop    %ebx
 8767bd0:	5e                   	pop    %esi
 8767bd1:	5f                   	pop    %edi
 8767bd2:	5d                   	pop    %ebp
 8767bd3:	c3                   	ret
 8767bd4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8767bd8:	0f b6 14 01          	movzbl (%ecx,%eax,1),%edx
 8767bdc:	83 c0 01             	add    $0x1,%eax
 8767bdf:	84 d2                	test   %dl,%dl
 8767be1:	74 d5                	je     8767bb8 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x68>
 8767be3:	39 f0                	cmp    %esi,%eax
 8767be5:	72 f1                	jb     8767bd8 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x88>
 8767be7:	eb cf                	jmp    8767bb8 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh+0x68>
 8767be9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8767bf0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8767bf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767bf7:	8b 45 14             	mov    0x14(%ebp),%eax
 8767bfa:	89 74 24 08          	mov    %esi,0x8(%esp)
 8767bfe:	89 04 24             	mov    %eax,(%esp)
 8767c01:	e8 9a 5c 91 ff       	call   807d8a0 <memcpy@plt>
 8767c06:	83 c4 2c             	add    $0x2c,%esp
 8767c09:	89 f0                	mov    %esi,%eax
 8767c0b:	5b                   	pop    %ebx
 8767c0c:	5e                   	pop    %esi
 8767c0d:	5f                   	pop    %edi
 8767c0e:	5d                   	pop    %ebp
 8767c0f:	c3                   	ret

```

```c
// TaoCrypt::RSA_BlockType2::UnPad @ 0x8767b50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType2::UnPad(unsigned char const*, unsigned int, unsigned char*) const */

uint __thiscall
TaoCrypt::RSA_BlockType2::UnPad(RSA_BlockType2 *this,uchar *param_1,uint param_2,uchar *param_3)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  uVar4 = param_2 >> 3;
  uVar3 = 0;
  if (10 < uVar4) {
    uVar3 = uVar4 - 10;
  }
  if ((param_2 & 7) != 0) {
    bVar5 = *param_1 != '\0';
    param_1 = param_1 + 1;
  }
  if (*param_1 != '\x02') {
    bVar5 = true;
  }
  uVar2 = 1;
  if (((1 < uVar4) && (uVar2 = 2, param_1[1] != '\0')) && (2 < uVar4)) {
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      if (*puVar1 == '\0') break;
    } while (uVar2 < uVar4);
  }
  uVar4 = uVar4 - uVar2;
  if ((uVar4 <= uVar3) && (!bVar5)) {
    memcpy(param_3,param_1 + uVar2,uVar4);
    return uVar4;
  }
  return 0;
}

```

