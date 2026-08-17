# TaoCrypt__RSA_BlockType1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Pad

```asm
// === 08767ad0 TaoCrypt::RSA_BlockType1::Pad  [0x08767ad0-0x8767b4f] ===
 8767ad0:	55                   	push   %ebp
 8767ad1:	89 e5                	mov    %esp,%ebp
 8767ad3:	83 ec 28             	sub    $0x28,%esp
 8767ad6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8767ad9:	8b 7d 18             	mov    0x18(%ebp),%edi
 8767adc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8767adf:	e8 14 b3 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767ae4:	81 c3 b4 50 c0 00    	add    $0xc050b4,%ebx
 8767aea:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8767aed:	8b 75 14             	mov    0x14(%ebp),%esi
 8767af0:	f7 c7 07 00 00 00    	test   $0x7,%edi
 8767af6:	74 06                	je     8767afe <_ZNK8TaoCrypt14RSA_BlockType13PadEPKhjPhjRNS_21RandomNumberGeneratorE+0x2e>
 8767af8:	c6 06 00             	movb   $0x0,(%esi)
 8767afb:	83 c6 01             	add    $0x1,%esi
 8767afe:	c6 06 01             	movb   $0x1,(%esi)
 8767b01:	c1 ef 03             	shr    $0x3,%edi
 8767b04:	2b 7d 10             	sub    0x10(%ebp),%edi
 8767b07:	8d 46 01             	lea    0x1(%esi),%eax
 8767b0a:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 8767b11:	00 
 8767b12:	8d 57 fe             	lea    -0x2(%edi),%edx
 8767b15:	89 54 24 08          	mov    %edx,0x8(%esp)
 8767b19:	89 04 24             	mov    %eax,(%esp)
 8767b1c:	e8 9f 61 91 ff       	call   807dcc0 <memset@plt>
 8767b21:	c6 44 3e ff 00       	movb   $0x0,-0x1(%esi,%edi,1)
 8767b26:	8b 45 10             	mov    0x10(%ebp),%eax
 8767b29:	01 fe                	add    %edi,%esi
 8767b2b:	89 34 24             	mov    %esi,(%esp)
 8767b2e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767b32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767b35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767b39:	e8 62 5d 91 ff       	call   807d8a0 <memcpy@plt>
 8767b3e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8767b41:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8767b44:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8767b47:	89 ec                	mov    %ebp,%esp
 8767b49:	5d                   	pop    %ebp
 8767b4a:	c3                   	ret
 8767b4b:	90                   	nop
 8767b4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::RSA_BlockType1::Pad @ 0x8767ad0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType1::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int,
   TaoCrypt::RandomNumberGenerator&) const */

void TaoCrypt::RSA_BlockType1::Pad
               (uchar *param_1,uint param_2,uchar *param_3,uint param_4,
               RandomNumberGenerator *param_5)

{
  int iVar1;
  
  if (((uint)param_5 & 7) != 0) {
    *(undefined1 *)param_4 = 0;
    param_4 = param_4 + 1;
  }
  *(undefined1 *)param_4 = 1;
  iVar1 = ((uint)param_5 >> 3) - (int)param_3;
  memset((undefined1 *)(param_4 + 1),0xff,iVar1 - 2);
  *(undefined1 *)(param_4 + iVar1 + -1) = 0;
  memcpy((undefined1 *)(param_4 + iVar1),(void *)param_2,(size_t)param_3);
  return;
}

```

---

## UnPad

```asm
// === 08767a10 TaoCrypt::RSA_BlockType1::UnPad  [0x08767a10-0x8767acf] ===
 8767a10:	55                   	push   %ebp
 8767a11:	31 d2                	xor    %edx,%edx
 8767a13:	89 e5                	mov    %esp,%ebp
 8767a15:	57                   	push   %edi
 8767a16:	56                   	push   %esi
 8767a17:	53                   	push   %ebx
 8767a18:	83 ec 2c             	sub    $0x2c,%esp
 8767a1b:	8b 45 10             	mov    0x10(%ebp),%eax
 8767a1e:	e8 d5 b3 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767a23:	81 c3 75 51 c0 00    	add    $0xc05175,%ebx
 8767a29:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8767a2c:	c6 45 d8 00          	movb   $0x0,-0x28(%ebp)
 8767a30:	89 c6                	mov    %eax,%esi
 8767a32:	c1 ee 03             	shr    $0x3,%esi
 8767a35:	83 fe 0a             	cmp    $0xa,%esi
 8767a38:	8d 7e f6             	lea    -0xa(%esi),%edi
 8767a3b:	0f 47 d7             	cmova  %edi,%edx
 8767a3e:	a8 07                	test   $0x7,%al
 8767a40:	74 0a                	je     8767a4c <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x3c>
 8767a42:	80 39 00             	cmpb   $0x0,(%ecx)
 8767a45:	0f 95 45 d8          	setne  -0x28(%ebp)
 8767a49:	83 c1 01             	add    $0x1,%ecx
 8767a4c:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 8767a50:	bf 01 00 00 00       	mov    $0x1,%edi
 8767a55:	80 39 01             	cmpb   $0x1,(%ecx)
 8767a58:	0f 45 c7             	cmovne %edi,%eax
 8767a5b:	83 fe 01             	cmp    $0x1,%esi
 8767a5e:	88 45 d8             	mov    %al,-0x28(%ebp)
 8767a61:	b8 01 00 00 00       	mov    $0x1,%eax
 8767a66:	76 12                	jbe    8767a7a <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x6a>
 8767a68:	80 79 01 00          	cmpb   $0x0,0x1(%ecx)
 8767a6c:	b0 02                	mov    $0x2,%al
 8767a6e:	89 d7                	mov    %edx,%edi
 8767a70:	74 08                	je     8767a7a <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x6a>
 8767a72:	39 f0                	cmp    %esi,%eax
 8767a74:	72 22                	jb     8767a98 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x88>
 8767a76:	66 90                	xchg   %ax,%ax
 8767a78:	89 fa                	mov    %edi,%edx
 8767a7a:	29 c6                	sub    %eax,%esi
 8767a7c:	39 d6                	cmp    %edx,%esi
 8767a7e:	77 08                	ja     8767a88 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x78>
 8767a80:	80 7d d8 00          	cmpb   $0x0,-0x28(%ebp)
 8767a84:	74 2a                	je     8767ab0 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0xa0>
 8767a86:	66 90                	xchg   %ax,%ax
 8767a88:	31 f6                	xor    %esi,%esi
 8767a8a:	83 c4 2c             	add    $0x2c,%esp
 8767a8d:	89 f0                	mov    %esi,%eax
 8767a8f:	5b                   	pop    %ebx
 8767a90:	5e                   	pop    %esi
 8767a91:	5f                   	pop    %edi
 8767a92:	5d                   	pop    %ebp
 8767a93:	c3                   	ret
 8767a94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8767a98:	0f b6 14 01          	movzbl (%ecx,%eax,1),%edx
 8767a9c:	83 c0 01             	add    $0x1,%eax
 8767a9f:	84 d2                	test   %dl,%dl
 8767aa1:	74 d5                	je     8767a78 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x68>
 8767aa3:	39 f0                	cmp    %esi,%eax
 8767aa5:	72 f1                	jb     8767a98 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x88>
 8767aa7:	eb cf                	jmp    8767a78 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh+0x68>
 8767aa9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8767ab0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8767ab3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767ab7:	8b 45 14             	mov    0x14(%ebp),%eax
 8767aba:	89 74 24 08          	mov    %esi,0x8(%esp)
 8767abe:	89 04 24             	mov    %eax,(%esp)
 8767ac1:	e8 da 5d 91 ff       	call   807d8a0 <memcpy@plt>
 8767ac6:	83 c4 2c             	add    $0x2c,%esp
 8767ac9:	89 f0                	mov    %esi,%eax
 8767acb:	5b                   	pop    %ebx
 8767acc:	5e                   	pop    %esi
 8767acd:	5f                   	pop    %edi
 8767ace:	5d                   	pop    %ebp
 8767acf:	c3                   	ret

```

```c
// TaoCrypt::RSA_BlockType1::UnPad @ 0x8767a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType1::UnPad(unsigned char const*, unsigned int, unsigned char*) const */

uint __thiscall
TaoCrypt::RSA_BlockType1::UnPad(RSA_BlockType1 *this,uchar *param_1,uint param_2,uchar *param_3)

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
  if (*param_1 != '\x01') {
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

