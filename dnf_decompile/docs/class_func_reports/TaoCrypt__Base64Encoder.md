# TaoCrypt__Base64Encoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Encode

```asm
// === 08756fb0 TaoCrypt::Base64Encoder::Encode  [0x08756fb0-0x87571ff] ===
 8756fb0:	55                   	push   %ebp
 8756fb1:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 8756fb6:	89 e5                	mov    %esp,%ebp
 8756fb8:	57                   	push   %edi
 8756fb9:	56                   	push   %esi
 8756fba:	53                   	push   %ebx
 8756fbb:	83 ec 6c             	sub    $0x6c,%esp
 8756fbe:	8b 75 08             	mov    0x8(%ebp),%esi
 8756fc1:	e8 32 be fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756fc6:	81 c3 d2 5b c1 00    	add    $0xc15bd2,%ebx
 8756fcc:	8b 46 0c             	mov    0xc(%esi),%eax
 8756fcf:	8b 00                	mov    (%eax),%eax
 8756fd1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8756fd8:	00 
 8756fd9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8756fdc:	83 c0 02             	add    $0x2,%eax
 8756fdf:	f7 e2                	mul    %edx
 8756fe1:	d1 ea                	shr    $1,%edx
 8756fe3:	c1 e2 02             	shl    $0x2,%edx
 8756fe6:	8d 42 3f             	lea    0x3f(%edx),%eax
 8756fe9:	c1 e8 06             	shr    $0x6,%eax
 8756fec:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 8756fef:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8756ff3:	8b 06                	mov    (%esi),%eax
 8756ff5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756ff9:	8b 46 04             	mov    0x4(%esi),%eax
 8756ffc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757000:	8d 46 08             	lea    0x8(%esi),%eax
 8757003:	89 04 24             	mov    %eax,(%esp)
 8757006:	e8 c5 02 00 00       	call   87572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>
 875700b:	31 d2                	xor    %edx,%edx
 875700d:	89 3e                	mov    %edi,(%esi)
 875700f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8757016:	89 46 04             	mov    %eax,0x4(%esi)
 8757019:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 875701d:	0f 86 d2 00 00 00    	jbe    87570f5 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x145>
 8757023:	8b 4e 0c             	mov    0xc(%esi),%ecx
 8757026:	8b 41 0c             	mov    0xc(%ecx),%eax
 8757029:	8d 78 01             	lea    0x1(%eax),%edi
 875702c:	89 79 0c             	mov    %edi,0xc(%ecx)
 875702f:	8b 79 04             	mov    0x4(%ecx),%edi
 8757032:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 8757035:	0f b6 0c 07          	movzbl (%edi,%eax,1),%ecx
 8757039:	8d 78 02             	lea    0x2(%eax),%edi
 875703c:	88 4d c7             	mov    %cl,-0x39(%ebp)
 875703f:	8b 4e 0c             	mov    0xc(%esi),%ecx
 8757042:	89 79 0c             	mov    %edi,0xc(%ecx)
 8757045:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8757048:	8d 78 03             	lea    0x3(%eax),%edi
 875704b:	0f b6 4c 01 01       	movzbl 0x1(%ecx,%eax,1),%ecx
 8757050:	88 4d e7             	mov    %cl,-0x19(%ebp)
 8757053:	8b 4e 0c             	mov    0xc(%esi),%ecx
 8757056:	89 79 0c             	mov    %edi,0xc(%ecx)
 8757059:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 875705c:	0f b6 4d c7          	movzbl -0x39(%ebp),%ecx
 8757060:	0f b6 44 07 02       	movzbl 0x2(%edi,%eax,1),%eax
 8757065:	89 cf                	mov    %ecx,%edi
 8757067:	83 e1 03             	and    $0x3,%ecx
 875706a:	c1 ef 02             	shr    $0x2,%edi
 875706d:	c1 e1 04             	shl    $0x4,%ecx
 8757070:	88 45 e6             	mov    %al,-0x1a(%ebp)
 8757073:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8757077:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 875707a:	0f b6 84 3b c8 86 99 	movzbl -0x667938(%ebx,%edi,1),%eax
 8757081:	ff 
 8757082:	8b 7e 04             	mov    0x4(%esi),%edi
 8757085:	88 04 17             	mov    %al,(%edi,%edx,1)
 8757088:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 875708b:	8b 46 04             	mov    0x4(%esi),%eax
 875708e:	c1 ff 04             	sar    $0x4,%edi
 8757091:	09 f9                	or     %edi,%ecx
 8757093:	0f b6 8c 0b c8 86 99 	movzbl -0x667938(%ebx,%ecx,1),%ecx
 875709a:	ff 
 875709b:	88 4c 10 01          	mov    %cl,0x1(%eax,%edx,1)
 875709f:	0f b6 4d e6          	movzbl -0x1a(%ebp),%ecx
 87570a3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87570a6:	89 cf                	mov    %ecx,%edi
 87570a8:	83 e1 3f             	and    $0x3f,%ecx
 87570ab:	83 e0 0f             	and    $0xf,%eax
 87570ae:	0f b6 8c 0b c8 86 99 	movzbl -0x667938(%ebx,%ecx,1),%ecx
 87570b5:	ff 
 87570b6:	c1 ff 06             	sar    $0x6,%edi
 87570b9:	c1 e0 02             	shl    $0x2,%eax
 87570bc:	09 f8                	or     %edi,%eax
 87570be:	8b 7e 04             	mov    0x4(%esi),%edi
 87570c1:	0f b6 84 03 c8 86 99 	movzbl -0x667938(%ebx,%eax,1),%eax
 87570c8:	ff 
 87570c9:	88 44 17 02          	mov    %al,0x2(%edi,%edx,1)
 87570cd:	8b 46 04             	mov    0x4(%esi),%eax
 87570d0:	8d 7a 04             	lea    0x4(%edx),%edi
 87570d3:	88 4c 10 03          	mov    %cl,0x3(%eax,%edx,1)
 87570d7:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 87570db:	83 6d e0 03          	subl   $0x3,-0x20(%ebp)
 87570df:	f6 45 c8 0f          	testb  $0xf,-0x38(%ebp)
 87570e3:	0f 84 d7 00 00 00    	je     87571c0 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x210>
 87570e9:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 87570ed:	89 fa                	mov    %edi,%edx
 87570ef:	0f 87 2e ff ff ff    	ja     8757023 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x73>
 87570f5:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 87570f9:	0f 84 ca 00 00 00    	je     87571c9 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x219>
 87570ff:	8b 46 0c             	mov    0xc(%esi),%eax
 8757102:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 8757106:	8b 48 0c             	mov    0xc(%eax),%ecx
 8757109:	0f 94 45 e0          	sete   -0x20(%ebp)
 875710d:	89 cf                	mov    %ecx,%edi
 875710f:	83 c7 01             	add    $0x1,%edi
 8757112:	89 78 0c             	mov    %edi,0xc(%eax)
 8757115:	8b 78 04             	mov    0x4(%eax),%edi
 8757118:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 875711b:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 875711f:	0f b6 0c 0f          	movzbl (%edi,%ecx,1),%ecx
 8757123:	c6 45 e6 00          	movb   $0x0,-0x1a(%ebp)
 8757127:	c6 45 c8 00          	movb   $0x0,-0x38(%ebp)
 875712b:	88 4d e7             	mov    %cl,-0x19(%ebp)
 875712e:	74 29                	je     8757159 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x1a9>
 8757130:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8757133:	83 c1 02             	add    $0x2,%ecx
 8757136:	89 48 0c             	mov    %ecx,0xc(%eax)
 8757139:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 875713c:	0f b6 44 0f 01       	movzbl 0x1(%edi,%ecx,1),%eax
 8757141:	0f b6 c8             	movzbl %al,%ecx
 8757144:	83 e0 0f             	and    $0xf,%eax
 8757147:	c1 e9 04             	shr    $0x4,%ecx
 875714a:	8d 3c 85 00 00 00 00 	lea    0x0(,%eax,4),%edi
 8757151:	88 4d c8             	mov    %cl,-0x38(%ebp)
 8757154:	89 f9                	mov    %edi,%ecx
 8757156:	88 4d e6             	mov    %cl,-0x1a(%ebp)
 8757159:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 875715d:	8b 7e 04             	mov    0x4(%esi),%edi
 8757160:	89 c1                	mov    %eax,%ecx
 8757162:	83 e0 03             	and    $0x3,%eax
 8757165:	c1 e9 02             	shr    $0x2,%ecx
 8757168:	0f b6 8c 0b c8 86 99 	movzbl -0x667938(%ebx,%ecx,1),%ecx
 875716f:	ff 
 8757170:	c1 e0 04             	shl    $0x4,%eax
 8757173:	88 0c 17             	mov    %cl,(%edi,%edx,1)
 8757176:	8b 7e 04             	mov    0x4(%esi),%edi
 8757179:	8d 4a 02             	lea    0x2(%edx),%ecx
 875717c:	0a 45 c8             	or     -0x38(%ebp),%al
 875717f:	0f b6 c0             	movzbl %al,%eax
 8757182:	0f b6 84 03 c8 86 99 	movzbl -0x667938(%ebx,%eax,1),%eax
 8757189:	ff 
 875718a:	88 44 17 01          	mov    %al,0x1(%edi,%edx,1)
 875718e:	8d 42 03             	lea    0x3(%edx),%eax
 8757191:	8b 7e 04             	mov    0x4(%esi),%edi
 8757194:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 8757198:	ba 3d 00 00 00       	mov    $0x3d,%edx
 875719d:	74 0c                	je     87571ab <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x1fb>
 875719f:	0f b6 55 e6          	movzbl -0x1a(%ebp),%edx
 87571a3:	0f b6 94 13 c8 86 99 	movzbl -0x667938(%ebx,%edx,1),%edx
 87571aa:	ff 
 87571ab:	88 14 0f             	mov    %dl,(%edi,%ecx,1)
 87571ae:	8b 4e 04             	mov    0x4(%esi),%ecx
 87571b1:	8d 50 01             	lea    0x1(%eax),%edx
 87571b4:	c6 04 01 3d          	movb   $0x3d,(%ecx,%eax,1)
 87571b8:	eb 0f                	jmp    87571c9 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x219>
 87571ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87571c0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87571c3:	85 c9                	test   %ecx,%ecx
 87571c5:	75 21                	jne    87571e8 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x238>
 87571c7:	89 fa                	mov    %edi,%edx
 87571c9:	8b 46 04             	mov    0x4(%esi),%eax
 87571cc:	c6 04 10 0a          	movb   $0xa,(%eax,%edx,1)
 87571d0:	89 74 24 04          	mov    %esi,0x4(%esp)
 87571d4:	8b 46 0c             	mov    0xc(%esi),%eax
 87571d7:	89 04 24             	mov    %eax,(%esp)
 87571da:	e8 51 16 00 00       	call   8758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>
 87571df:	83 c4 6c             	add    $0x6c,%esp
 87571e2:	5b                   	pop    %ebx
 87571e3:	5e                   	pop    %esi
 87571e4:	5f                   	pop    %edi
 87571e5:	5d                   	pop    %ebp
 87571e6:	c3                   	ret
 87571e7:	90                   	nop
 87571e8:	8b 46 04             	mov    0x4(%esi),%eax
 87571eb:	83 c2 05             	add    $0x5,%edx
 87571ee:	c6 04 38 0a          	movb   $0xa,(%eax,%edi,1)
 87571f2:	e9 22 fe ff ff       	jmp    8757019 <_ZN8TaoCrypt13Base64Encoder6EncodeEv+0x69>
 87571f7:	90                   	nop
 87571f8:	90                   	nop
 87571f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Base64Encoder::Encode @ 0x8756fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Base64Encoder::Encode() */

void __thiscall TaoCrypt::Base64Encoder::Encode(Base64Encoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint local_3c;
  byte local_1e;
  
  uVar4 = **(uint **)(this + 0xc);
  iVar11 = ((uVar4 + 2) / 3) * 4;
  iVar11 = (iVar11 + 0x3fU >> 6) + iVar11;
  uVar7 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,iVar11,0);
  *(int *)this = iVar11;
  local_3c = 0;
  *(undefined4 *)(this + 4) = uVar7;
  iVar11 = 0;
  while (iVar6 = iVar11, 2 < uVar4) {
    iVar11 = *(int *)(this + 0xc);
    iVar5 = *(int *)(iVar11 + 0xc);
    *(int *)(iVar11 + 0xc) = iVar5 + 1;
    iVar11 = *(int *)(iVar11 + 4);
    bVar1 = *(byte *)(iVar11 + iVar5);
    *(int *)(*(int *)(this + 0xc) + 0xc) = iVar5 + 2;
    bVar2 = *(byte *)(iVar11 + 1 + iVar5);
    *(int *)(*(int *)(this + 0xc) + 0xc) = iVar5 + 3;
    bVar3 = *(byte *)(iVar11 + 2 + iVar5);
    uVar8 = (uint)bVar2;
    *(char *)(*(int *)(this + 4) + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
    *(char *)(*(int *)(this + 4) + 1 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(bVar1 & 3) << 4 | (int)uVar8 >> 4];
    uVar9 = (uint)bVar3;
    cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar9 & 0x3f];
    *(char *)(*(int *)(this + 4) + 2 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(uVar8 & 0xf) << 2 | (int)uVar9 >> 6];
    iVar11 = iVar6 + 4;
    *(char *)(*(int *)(this + 4) + 3 + iVar6) = cVar10;
    local_3c = local_3c + 1;
    uVar4 = uVar4 - 3;
    if ((local_3c & 0xf) == 0) {
      if (uVar4 == 0) goto LAB_087571c9;
      *(undefined1 *)(*(int *)(this + 4) + iVar11) = 10;
      iVar11 = iVar6 + 5;
    }
  }
  iVar11 = iVar6;
  if (uVar4 != 0) {
    iVar11 = *(int *)(this + 0xc);
    iVar5 = *(int *)(iVar11 + 0xc);
    *(int *)(iVar11 + 0xc) = iVar5 + 1;
    bVar1 = *(byte *)(*(int *)(iVar11 + 4) + iVar5);
    local_1e = 0;
    bVar2 = 0;
    if (uVar4 == 2) {
      *(int *)(iVar11 + 0xc) = iVar5 + 2;
      bVar3 = *(byte *)(*(int *)(iVar11 + 4) + 1 + iVar5);
      bVar2 = bVar3 >> 4;
      local_1e = (bVar3 & 0xf) * '\x04';
    }
    *(char *)(*(int *)(this + 4) + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
    *(char *)(*(int *)(this + 4) + 1 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(byte)((bVar1 & 3) << 4 | bVar2)];
    cVar10 = '=';
    if (uVar4 == 2) {
      cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[local_1e];
    }
    *(char *)(*(int *)(this + 4) + iVar6 + 2) = cVar10;
    iVar11 = iVar6 + 4;
    *(undefined1 *)(*(int *)(this + 4) + iVar6 + 3) = 0x3d;
  }
LAB_087571c9:
  *(undefined1 *)(*(int *)(this + 4) + iVar11) = 10;
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}

```

