# TaoCrypt__Integer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 58

---

## AbsoluteValue

```asm
// === 0875f450 TaoCrypt::Integer::AbsoluteValue  [0x0875f450-0x875f48f] ===
 875f450:	55                   	push   %ebp
 875f451:	89 e5                	mov    %esp,%ebp
 875f453:	83 ec 18             	sub    $0x18,%esp
 875f456:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875f459:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f45c:	e8 97 39 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f461:	81 c3 37 d7 c0 00    	add    $0xc0d737,%ebx
 875f467:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875f46a:	8b 75 08             	mov    0x8(%ebp),%esi
 875f46d:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f471:	89 34 24             	mov    %esi,(%esp)
 875f474:	e8 f7 fd ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f479:	89 f0                	mov    %esi,%eax
 875f47b:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 875f482:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875f485:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875f488:	89 ec                	mov    %ebp,%esp
 875f48a:	5d                   	pop    %ebp
 875f48b:	c2 04 00             	ret    $0x4
 875f48e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::AbsoluteValue @ 0x875f450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::AbsoluteValue() const */

Integer * TaoCrypt::Integer::AbsoluteValue(void)

{
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  
  Integer(in_stack_00000004,in_stack_00000008);
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  return in_stack_00000004;
}

```

---

## BitCount

```asm
// === 0875ebe0 TaoCrypt::Integer::BitCount  [0x0875ebe0-0x875ec2f] ===
 875ebe0:	55                   	push   %ebp
 875ebe1:	89 e5                	mov    %esp,%ebp
 875ebe3:	83 ec 28             	sub    $0x28,%esp
 875ebe6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ebe9:	e8 0a 42 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ebee:	81 c3 aa df c0 00    	add    $0xc0dfaa,%ebx
 875ebf4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ebf7:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ebfa:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ebfd:	89 3c 24             	mov    %edi,(%esp)
 875ec00:	e8 2b e5 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875ec05:	89 c6                	mov    %eax,%esi
 875ec07:	31 c0                	xor    %eax,%eax
 875ec09:	85 f6                	test   %esi,%esi
 875ec0b:	74 16                	je     875ec23 <_ZNK8TaoCrypt7Integer8BitCountEv+0x43>
 875ec0d:	8b 47 04             	mov    0x4(%edi),%eax
 875ec10:	8b 44 b0 fc          	mov    -0x4(%eax,%esi,4),%eax
 875ec14:	c1 e6 05             	shl    $0x5,%esi
 875ec17:	89 04 24             	mov    %eax,(%esp)
 875ec1a:	e8 21 89 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875ec1f:	8d 44 30 e0          	lea    -0x20(%eax,%esi,1),%eax
 875ec23:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875ec26:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875ec29:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875ec2c:	89 ec                	mov    %ebp,%esp
 875ec2e:	5d                   	pop    %ebp
 875ec2f:	c3                   	ret

```

```c
// TaoCrypt::Integer::BitCount @ 0x875ebe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::BitCount() const */

int __thiscall TaoCrypt::Integer::BitCount(Integer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = WordCount(this);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BitPrecision(*(uint *)(*(int *)(this + 4) + -4 + iVar1 * 4));
    iVar2 = iVar2 + -0x20 + iVar1 * 0x20;
  }
  return iVar2;
}

```

---

## ByteCount

```asm
// === 0875ec30 TaoCrypt::Integer::ByteCount  [0x0875ec30-0x875ec7f] ===
 875ec30:	55                   	push   %ebp
 875ec31:	89 e5                	mov    %esp,%ebp
 875ec33:	83 ec 28             	sub    $0x28,%esp
 875ec36:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ec39:	e8 ba 41 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ec3e:	81 c3 5a df c0 00    	add    $0xc0df5a,%ebx
 875ec44:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ec47:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ec4a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ec4d:	89 3c 24             	mov    %edi,(%esp)
 875ec50:	e8 db e4 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875ec55:	89 c6                	mov    %eax,%esi
 875ec57:	31 c0                	xor    %eax,%eax
 875ec59:	85 f6                	test   %esi,%esi
 875ec5b:	74 13                	je     875ec70 <_ZNK8TaoCrypt7Integer9ByteCountEv+0x40>
 875ec5d:	8b 47 04             	mov    0x4(%edi),%eax
 875ec60:	8b 44 b0 fc          	mov    -0x4(%eax,%esi,4),%eax
 875ec64:	89 04 24             	mov    %eax,(%esp)
 875ec67:	e8 94 88 00 00       	call   8767500 <_ZN8TaoCrypt13BytePrecisionEj>
 875ec6c:	8d 44 b0 fc          	lea    -0x4(%eax,%esi,4),%eax
 875ec70:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875ec73:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875ec76:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875ec79:	89 ec                	mov    %ebp,%esp
 875ec7b:	5d                   	pop    %ebp
 875ec7c:	c3                   	ret
 875ec7d:	90                   	nop
 875ec7e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::ByteCount @ 0x875ec30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::ByteCount() const */

int __thiscall TaoCrypt::Integer::ByteCount(Integer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = WordCount(this);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BytePrecision(*(uint *)(*(int *)(this + 4) + -4 + iVar1 * 4));
    iVar2 = iVar2 + -4 + iVar1 * 4;
  }
  return iVar2;
}

```

---

## Compare

```asm
// === 0875d220 TaoCrypt::Integer::Compare  [0x0875d220-0x875d27f] ===
 875d220:	55                   	push   %ebp
 875d221:	89 e5                	mov    %esp,%ebp
 875d223:	53                   	push   %ebx
 875d224:	83 ec 14             	sub    $0x14,%esp
 875d227:	8b 55 08             	mov    0x8(%ebp),%edx
 875d22a:	e8 c9 5b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d22f:	81 c3 69 f9 c0 00    	add    $0xc0f969,%ebx
 875d235:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875d238:	83 7a 0c 01          	cmpl   $0x1,0xc(%edx)
 875d23c:	74 22                	je     875d260 <_ZNK8TaoCrypt7Integer7CompareERKS0_+0x40>
 875d23e:	83 79 0c 01          	cmpl   $0x1,0xc(%ecx)
 875d242:	b8 01 00 00 00       	mov    $0x1,%eax
 875d247:	74 0c                	je     875d255 <_ZNK8TaoCrypt7Integer7CompareERKS0_+0x35>
 875d249:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875d24d:	89 14 24             	mov    %edx,(%esp)
 875d250:	e8 1b ff ff ff       	call   875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>
 875d255:	83 c4 14             	add    $0x14,%esp
 875d258:	5b                   	pop    %ebx
 875d259:	5d                   	pop    %ebp
 875d25a:	c3                   	ret
 875d25b:	90                   	nop
 875d25c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d260:	83 79 0c 01          	cmpl   $0x1,0xc(%ecx)
 875d264:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 875d269:	75 ea                	jne    875d255 <_ZNK8TaoCrypt7Integer7CompareERKS0_+0x35>
 875d26b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875d26f:	89 14 24             	mov    %edx,(%esp)
 875d272:	e8 f9 fe ff ff       	call   875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>
 875d277:	f7 d8                	neg    %eax
 875d279:	eb da                	jmp    875d255 <_ZNK8TaoCrypt7Integer7CompareERKS0_+0x35>
 875d27b:	90                   	nop
 875d27c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Compare @ 0x875d220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const */

int __thiscall TaoCrypt::Integer::Compare(Integer *this,Integer *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0xc) == 1) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0xc) == 1) {
      iVar1 = PositiveCompare(this,param_1);
      iVar1 = -iVar1;
    }
  }
  else {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xc) != 1) {
      iVar1 = PositiveCompare(this,param_1);
    }
  }
  return iVar1;
}

```

---

## ConvertToLong

```asm
// === 0875d570 TaoCrypt::Integer::ConvertToLong  [0x0875d570-0x875d58f] ===
 875d570:	55                   	push   %ebp
 875d571:	89 e5                	mov    %esp,%ebp
 875d573:	8b 55 08             	mov    0x8(%ebp),%edx
 875d576:	5d                   	pop    %ebp
 875d577:	8b 42 04             	mov    0x4(%edx),%eax
 875d57a:	8b 52 0c             	mov    0xc(%edx),%edx
 875d57d:	8b 00                	mov    (%eax),%eax
 875d57f:	89 c1                	mov    %eax,%ecx
 875d581:	f7 d9                	neg    %ecx
 875d583:	85 d2                	test   %edx,%edx
 875d585:	0f 45 c1             	cmovne %ecx,%eax
 875d588:	c3                   	ret
 875d589:	90                   	nop
 875d58a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Integer::ConvertToLong @ 0x875d570

/* TaoCrypt::Integer::ConvertToLong() const */

int __thiscall TaoCrypt::Integer::ConvertToLong(Integer *this)

{
  int iVar1;
  
  iVar1 = **(int **)(this + 4);
  if (*(int *)(this + 0xc) != 0) {
    iVar1 = -**(int **)(this + 4);
  }
  return iVar1;
}

```

---

## Decode

```asm
// === 08760280 TaoCrypt::Integer::Decode  [0x08760280-0x87603bf] ===
 8760280:	55                   	push   %ebp
 8760281:	89 e5                	mov    %esp,%ebp
 8760283:	83 ec 38             	sub    $0x38,%esp
 8760286:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8760289:	8b 75 0c             	mov    0xc(%ebp),%esi
 876028c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876028f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760292:	e8 61 2b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760297:	81 c3 01 c9 c0 00    	add    $0xc0c901,%ebx
 876029d:	8b 46 0c             	mov    0xc(%esi),%eax
 87602a0:	8d 50 01             	lea    0x1(%eax),%edx
 87602a3:	89 56 0c             	mov    %edx,0xc(%esi)
 87602a6:	8b 56 04             	mov    0x4(%esi),%edx
 87602a9:	80 3c 02 02          	cmpb   $0x2,(%edx,%eax,1)
 87602ad:	74 19                	je     87602c8 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x48>
 87602af:	c7 46 10 f2 03 00 00 	movl   $0x3f2,0x10(%esi)
 87602b6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87602b9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87602bc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87602bf:	89 ec                	mov    %ebp,%esp
 87602c1:	5d                   	pop    %ebp
 87602c2:	c3                   	ret
 87602c3:	90                   	nop
 87602c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87602c8:	89 34 24             	mov    %esi,(%esp)
 87602cb:	e8 30 34 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 87602d0:	89 c7                	mov    %eax,%edi
 87602d2:	8b 46 0c             	mov    0xc(%esi),%eax
 87602d5:	8d 50 01             	lea    0x1(%eax),%edx
 87602d8:	89 56 0c             	mov    %edx,0xc(%esi)
 87602db:	8b 56 04             	mov    0x4(%esi),%edx
 87602de:	80 3c 02 00          	cmpb   $0x0,(%edx,%eax,1)
 87602e2:	0f 85 90 00 00 00    	jne    8760378 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0xf8>
 87602e8:	83 ef 01             	sub    $0x1,%edi
 87602eb:	8d 47 03             	lea    0x3(%edi),%eax
 87602ee:	c1 e8 02             	shr    $0x2,%eax
 87602f1:	83 f8 08             	cmp    $0x8,%eax
 87602f4:	0f 86 86 00 00 00    	jbe    8760380 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x100>
 87602fa:	83 f8 10             	cmp    $0x10,%eax
 87602fd:	ba 10 00 00 00       	mov    $0x10,%edx
 8760302:	76 14                	jbe    8760318 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x98>
 8760304:	83 f8 20             	cmp    $0x20,%eax
 8760307:	b2 20                	mov    $0x20,%dl
 8760309:	76 0d                	jbe    8760318 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x98>
 876030b:	83 f8 40             	cmp    $0x40,%eax
 876030e:	b2 40                	mov    $0x40,%dl
 8760310:	0f 87 8a 00 00 00    	ja     87603a0 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x120>
 8760316:	66 90                	xchg   %ax,%ax
 8760318:	8b 45 08             	mov    0x8(%ebp),%eax
 876031b:	39 10                	cmp    %edx,(%eax)
 876031d:	72 71                	jb     8760390 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x110>
 876031f:	85 ff                	test   %edi,%edi
 8760321:	89 f8                	mov    %edi,%eax
 8760323:	7e 91                	jle    87602b6 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x36>
 8760325:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8760328:	89 f7                	mov    %esi,%edi
 876032a:	8b 56 04             	mov    0x4(%esi),%edx
 876032d:	8b 49 04             	mov    0x4(%ecx),%ecx
 8760330:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8760333:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8760336:	66 90                	xchg   %ax,%ax
 8760338:	8b 57 0c             	mov    0xc(%edi),%edx
 876033b:	83 e8 01             	sub    $0x1,%eax
 876033e:	89 c6                	mov    %eax,%esi
 8760340:	83 e6 fc             	and    $0xfffffffc,%esi
 8760343:	8d 4a 01             	lea    0x1(%edx),%ecx
 8760346:	89 4f 0c             	mov    %ecx,0xc(%edi)
 8760349:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 876034c:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 8760350:	89 c1                	mov    %eax,%ecx
 8760352:	83 e1 03             	and    $0x3,%ecx
 8760355:	c1 e1 03             	shl    $0x3,%ecx
 8760358:	d3 e2                	shl    %cl,%edx
 876035a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 876035d:	09 14 31             	or     %edx,(%ecx,%esi,1)
 8760360:	85 c0                	test   %eax,%eax
 8760362:	75 d4                	jne    8760338 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0xb8>
 8760364:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760367:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876036a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876036d:	89 ec                	mov    %ebp,%esp
 876036f:	5d                   	pop    %ebp
 8760370:	c3                   	ret
 8760371:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760378:	89 46 0c             	mov    %eax,0xc(%esi)
 876037b:	e9 6b ff ff ff       	jmp    87602eb <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x6b>
 8760380:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 8760387:	eb 8f                	jmp    8760318 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x98>
 8760389:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760390:	89 54 24 04          	mov    %edx,0x4(%esp)
 8760394:	89 04 24             	mov    %eax,(%esp)
 8760397:	e8 d4 3f 00 00       	call   8764370 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj>
 876039c:	eb 81                	jmp    876031f <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x9f>
 876039e:	66 90                	xchg   %ax,%ax
 87603a0:	83 e8 01             	sub    $0x1,%eax
 87603a3:	89 04 24             	mov    %eax,(%esp)
 87603a6:	e8 95 71 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87603ab:	ba 01 00 00 00       	mov    $0x1,%edx
 87603b0:	89 c1                	mov    %eax,%ecx
 87603b2:	d3 e2                	shl    %cl,%edx
 87603b4:	e9 5f ff ff ff       	jmp    8760318 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE+0x98>
 87603b9:	90                   	nop
 87603ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Integer::Decode @ 0x8760280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Decode(TaoCrypt::Source&) */

void __thiscall TaoCrypt::Integer::Decode(Integer *this,Source *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (*(char *)(*(int *)(param_1 + 4) + iVar2) == '\x02') {
    uVar6 = GetLength(param_1);
    iVar2 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(param_1 + 4) + iVar2) == '\0') {
      uVar6 = uVar6 - 1;
    }
    else {
      *(int *)(param_1 + 0xc) = iVar2;
    }
    uVar7 = uVar6 + 3 >> 2;
    if (uVar7 < 9) {
      uVar8 = (&RoundupSizeTable)[uVar7];
    }
    else {
      uVar8 = 0x10;
      if (((0x10 < uVar7) && (uVar8 = 0x20, 0x20 < uVar7)) && (uVar8 = 0x40, 0x40 < uVar7)) {
        bVar5 = BitPrecision(uVar7 - 1);
        uVar8 = 1 << (bVar5 & 0x1f);
      }
    }
    if (*(uint *)this < uVar8) {
      Block<unsigned_int,TaoCrypt::AllocatorWithCleanup<unsigned_int>>::CleanNew
                ((Block<unsigned_int,TaoCrypt::AllocatorWithCleanup<unsigned_int>> *)this,uVar8);
    }
    if (0 < (int)uVar6) {
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(this + 4);
      do {
        iVar4 = *(int *)(param_1 + 0xc);
        uVar6 = uVar6 - 1;
        *(int *)(param_1 + 0xc) = iVar4 + 1;
        puVar1 = (uint *)(iVar3 + (uVar6 & 0xfffffffc));
        *puVar1 = *puVar1 | (uint)*(byte *)(iVar2 + iVar4) << (sbyte)((uVar6 & 3) << 3);
      } while (uVar6 != 0);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x3f2;
  }
  return;
}

```

---

## Decode_08761050

```asm
// === 08761050 TaoCrypt::Integer::Decode  [0x08761050-0x87612ff] ===
 8761050:	55                   	push   %ebp
 8761051:	89 e5                	mov    %esp,%ebp
 8761053:	57                   	push   %edi
 8761054:	56                   	push   %esi
 8761055:	53                   	push   %ebx
 8761056:	83 ec 2c             	sub    $0x2c,%esp
 8761059:	8b 55 0c             	mov    0xc(%ebp),%edx
 876105c:	e8 97 1d fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761061:	81 c3 37 bb c0 00    	add    $0xc0bb37,%ebx
 8761067:	0f b6 02             	movzbl (%edx),%eax
 876106a:	89 c2                	mov    %eax,%edx
 876106c:	c0 ea 07             	shr    $0x7,%dl
 876106f:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8761073:	0f 94 c1             	sete   %cl
 8761076:	31 ff                	xor    %edi,%edi
 8761078:	21 ca                	and    %ecx,%edx
 876107a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 876107d:	0f b6 d2             	movzbl %dl,%edx
 8761080:	89 51 0c             	mov    %edx,0xc(%ecx)
 8761083:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8761086:	85 c9                	test   %ecx,%ecx
 8761088:	0f 84 21 01 00 00    	je     87611af <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x15f>
 876108e:	85 d2                	test   %edx,%edx
 8761090:	66 bf 01 00          	mov    $0x1,%di
 8761094:	0f 85 ed 00 00 00    	jne    8761187 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x137>
 876109a:	84 c0                	test   %al,%al
 876109c:	0f 84 f6 00 00 00    	je     8761198 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x148>
 87610a2:	8b 45 10             	mov    0x10(%ebp),%eax
 87610a5:	83 c0 03             	add    $0x3,%eax
 87610a8:	c1 e8 02             	shr    $0x2,%eax
 87610ab:	83 f8 08             	cmp    $0x8,%eax
 87610ae:	0f 86 40 02 00 00    	jbe    87612f4 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x2a4>
 87610b4:	83 f8 10             	cmp    $0x10,%eax
 87610b7:	0f 86 2b 01 00 00    	jbe    87611e8 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x198>
 87610bd:	83 f8 20             	cmp    $0x20,%eax
 87610c0:	0f 86 12 02 00 00    	jbe    87612d8 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x288>
 87610c6:	83 f8 40             	cmp    $0x40,%eax
 87610c9:	0f 87 e1 01 00 00    	ja     87612b0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x260>
 87610cf:	83 ef 01             	sub    $0x1,%edi
 87610d2:	be 40 00 00 00       	mov    $0x40,%esi
 87610d7:	c7 45 e4 00 01 00 00 	movl   $0x100,-0x1c(%ebp)
 87610de:	66 90                	xchg   %ax,%ax
 87610e0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87610e3:	8b 11                	mov    (%ecx),%edx
 87610e5:	8b 41 04             	mov    0x4(%ecx),%eax
 87610e8:	39 d6                	cmp    %edx,%esi
 87610ea:	74 1f                	je     876110b <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0xbb>
 87610ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 87610f0:	89 c8                	mov    %ecx,%eax
 87610f2:	83 c0 08             	add    $0x8,%eax
 87610f5:	89 04 24             	mov    %eax,(%esp)
 87610f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 87610fc:	e8 7f 2a 00 00       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 8761101:	31 c0                	xor    %eax,%eax
 8761103:	85 f6                	test   %esi,%esi
 8761105:	0f 85 c5 00 00 00    	jne    87611d0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x180>
 876110b:	8b 55 08             	mov    0x8(%ebp),%edx
 876110e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8761111:	89 42 04             	mov    %eax,0x4(%edx)
 8761114:	89 32                	mov    %esi,(%edx)
 8761116:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 876111a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761121:	00 
 8761122:	89 04 24             	mov    %eax,(%esp)
 8761125:	e8 96 cb 91 ff       	call   807dcc0 <memset@plt>
 876112a:	8b 55 10             	mov    0x10(%ebp),%edx
 876112d:	85 d2                	test   %edx,%edx
 876112f:	74 31                	je     8761162 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x112>
 8761131:	8b 45 08             	mov    0x8(%ebp),%eax
 8761134:	03 7d 0c             	add    0xc(%ebp),%edi
 8761137:	8b 50 04             	mov    0x4(%eax),%edx
 876113a:	8b 45 10             	mov    0x10(%ebp),%eax
 876113d:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8761140:	83 e8 01             	sub    $0x1,%eax
 8761143:	0f b6 17             	movzbl (%edi),%edx
 8761146:	83 c7 01             	add    $0x1,%edi
 8761149:	89 c1                	mov    %eax,%ecx
 876114b:	89 c6                	mov    %eax,%esi
 876114d:	83 e1 03             	and    $0x3,%ecx
 8761150:	83 e6 fc             	and    $0xfffffffc,%esi
 8761153:	c1 e1 03             	shl    $0x3,%ecx
 8761156:	d3 e2                	shl    %cl,%edx
 8761158:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 876115b:	09 14 31             	or     %edx,(%ecx,%esi,1)
 876115e:	85 c0                	test   %eax,%eax
 8761160:	75 de                	jne    8761140 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0xf0>
 8761162:	8b 7d 08             	mov    0x8(%ebp),%edi
 8761165:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 8761169:	0f 84 91 00 00 00    	je     8761200 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x1b0>
 876116f:	83 c4 2c             	add    $0x2c,%esp
 8761172:	5b                   	pop    %ebx
 8761173:	5e                   	pop    %esi
 8761174:	5f                   	pop    %edi
 8761175:	5d                   	pop    %ebp
 8761176:	c3                   	ret
 8761177:	8b 55 0c             	mov    0xc(%ebp),%edx
 876117a:	0f b6 04 3a          	movzbl (%edx,%edi,1),%eax
 876117e:	83 c7 01             	add    $0x1,%edi
 8761181:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 8761185:	74 25                	je     87611ac <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x15c>
 8761187:	3c ff                	cmp    $0xff,%al
 8761189:	0f 85 13 ff ff ff    	jne    87610a2 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x52>
 876118f:	eb e6                	jmp    8761177 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x127>
 8761191:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8761198:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 876119b:	0f b6 04 39          	movzbl (%ecx,%edi,1),%eax
 876119f:	83 c7 01             	add    $0x1,%edi
 87611a2:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 87611a6:	0f 85 ee fe ff ff    	jne    876109a <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x4a>
 87611ac:	83 ef 01             	sub    $0x1,%edi
 87611af:	c7 45 10 00 00 00 00 	movl   $0x0,0x10(%ebp)
 87611b6:	31 c0                	xor    %eax,%eax
 87611b8:	8b b4 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%esi
 87611bf:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 87611c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87611c9:	e9 12 ff ff ff       	jmp    87610e0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x90>
 87611ce:	66 90                	xchg   %ax,%ax
 87611d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87611d3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87611d8:	89 04 24             	mov    %eax,(%esp)
 87611db:	e8 b0 65 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87611e0:	e9 26 ff ff ff       	jmp    876110b <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0xbb>
 87611e5:	8d 76 00             	lea    0x0(%esi),%esi
 87611e8:	83 ef 01             	sub    $0x1,%edi
 87611eb:	be 10 00 00 00       	mov    $0x10,%esi
 87611f0:	c7 45 e4 40 00 00 00 	movl   $0x40,-0x1c(%ebp)
 87611f7:	e9 e4 fe ff ff       	jmp    87610e0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x90>
 87611fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761200:	8b 0f                	mov    (%edi),%ecx
 8761202:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
 8761209:	39 45 10             	cmp    %eax,0x10(%ebp)
 876120c:	0f 83 da 00 00 00    	jae    87612ec <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x29c>
 8761212:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8761215:	8b 45 10             	mov    0x10(%ebp),%eax
 8761218:	8b 51 04             	mov    0x4(%ecx),%edx
 876121b:	89 d6                	mov    %edx,%esi
 876121d:	8d 76 00             	lea    0x0(%esi),%esi
 8761220:	89 c1                	mov    %eax,%ecx
 8761222:	89 c2                	mov    %eax,%edx
 8761224:	83 e1 03             	and    $0x3,%ecx
 8761227:	83 e2 fc             	and    $0xfffffffc,%edx
 876122a:	c1 e1 03             	shl    $0x3,%ecx
 876122d:	bf ff 00 00 00       	mov    $0xff,%edi
 8761232:	d3 e7                	shl    %cl,%edi
 8761234:	83 c0 01             	add    $0x1,%eax
 8761237:	09 3c 16             	or     %edi,(%esi,%edx,1)
 876123a:	8b 55 08             	mov    0x8(%ebp),%edx
 876123d:	8b 0a                	mov    (%edx),%ecx
 876123f:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
 8761246:	39 c2                	cmp    %eax,%edx
 8761248:	77 d6                	ja     8761220 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x1d0>
 876124a:	89 f2                	mov    %esi,%edx
 876124c:	8b 32                	mov    (%edx),%esi
 876124e:	8d 46 ff             	lea    -0x1(%esi),%eax
 8761251:	39 c6                	cmp    %eax,%esi
 8761253:	89 02                	mov    %eax,(%edx)
 8761255:	73 49                	jae    87612a0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x250>
 8761257:	83 f9 01             	cmp    $0x1,%ecx
 876125a:	76 44                	jbe    87612a0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x250>
 876125c:	8b 72 04             	mov    0x4(%edx),%esi
 876125f:	8d 46 ff             	lea    -0x1(%esi),%eax
 8761262:	85 f6                	test   %esi,%esi
 8761264:	89 42 04             	mov    %eax,0x4(%edx)
 8761267:	b8 01 00 00 00       	mov    $0x1,%eax
 876126c:	74 0f                	je     876127d <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x22d>
 876126e:	eb 14                	jmp    8761284 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x234>
 8761270:	8b 34 82             	mov    (%edx,%eax,4),%esi
 8761273:	8d 7e ff             	lea    -0x1(%esi),%edi
 8761276:	85 f6                	test   %esi,%esi
 8761278:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 876127b:	75 07                	jne    8761284 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x234>
 876127d:	83 c0 01             	add    $0x1,%eax
 8761280:	39 c8                	cmp    %ecx,%eax
 8761282:	72 ec                	jb     8761270 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x220>
 8761284:	31 c0                	xor    %eax,%eax
 8761286:	66 90                	xchg   %ax,%ax
 8761288:	f7 14 82             	notl   (%edx,%eax,4)
 876128b:	83 c0 01             	add    $0x1,%eax
 876128e:	39 c8                	cmp    %ecx,%eax
 8761290:	72 f6                	jb     8761288 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x238>
 8761292:	83 c4 2c             	add    $0x2c,%esp
 8761295:	5b                   	pop    %ebx
 8761296:	5e                   	pop    %esi
 8761297:	5f                   	pop    %edi
 8761298:	5d                   	pop    %ebp
 8761299:	c3                   	ret
 876129a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87612a0:	85 c9                	test   %ecx,%ecx
 87612a2:	75 e0                	jne    8761284 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x234>
 87612a4:	e9 c6 fe ff ff       	jmp    876116f <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x11f>
 87612a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87612b0:	83 e8 01             	sub    $0x1,%eax
 87612b3:	be 01 00 00 00       	mov    $0x1,%esi
 87612b8:	89 04 24             	mov    %eax,(%esp)
 87612bb:	83 ef 01             	sub    $0x1,%edi
 87612be:	e8 7d 62 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87612c3:	89 c1                	mov    %eax,%ecx
 87612c5:	d3 e6                	shl    %cl,%esi
 87612c7:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 87612ce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87612d1:	e9 0a fe ff ff       	jmp    87610e0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x90>
 87612d6:	66 90                	xchg   %ax,%ax
 87612d8:	83 ef 01             	sub    $0x1,%edi
 87612db:	be 20 00 00 00       	mov    $0x20,%esi
 87612e0:	c7 45 e4 80 00 00 00 	movl   $0x80,-0x1c(%ebp)
 87612e7:	e9 f4 fd ff ff       	jmp    87610e0 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x90>
 87612ec:	8b 57 04             	mov    0x4(%edi),%edx
 87612ef:	e9 58 ff ff ff       	jmp    876124c <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x1fc>
 87612f4:	83 ef 01             	sub    $0x1,%edi
 87612f7:	e9 bc fe ff ff       	jmp    87611b8 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE+0x168>
 87612fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Decode @ 0x8761050

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness) */

void __thiscall TaoCrypt::Integer::Decode(Integer *this,byte *param_1,uint param_2,int param_4)

{
  uint *puVar1;
  byte bVar2;
  void *__s;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  void *pvVar8;
  size_t local_20;
  
  bVar2 = *param_1;
  iVar7 = 0;
  uVar4 = (uint)(bVar2 >> 7 & param_4 == 1);
  *(uint *)(this + 0xc) = uVar4;
  if (param_2 != 0) {
    iVar7 = 1;
    if (uVar4 == 0) {
      do {
        if (bVar2 != 0) goto LAB_087610a2;
        bVar2 = param_1[iVar7];
        iVar7 = iVar7 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    else {
      do {
        if (bVar2 != 0xff) goto LAB_087610a2;
        bVar2 = param_1[iVar7];
        iVar7 = iVar7 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    iVar7 = iVar7 + -1;
  }
  param_2 = 0;
  uVar4 = 0;
LAB_087611b8:
  uVar4 = (&RoundupSizeTable)[uVar4];
  local_20 = uVar4 * 4;
LAB_087610e0:
  __s = *(void **)(this + 4);
  if (uVar4 != *(uint *)this) {
    pvVar8 = __s;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(this + 8),__s,*(uint *)this);
    __s = (void *)0x0;
    if (uVar4 != 0) {
      __s = operator_new__(local_20,(uint)pvVar8 & 0xffffff00);
    }
  }
  *(void **)(this + 4) = __s;
  *(uint *)this = uVar4;
  memset(__s,0,local_20);
  if (param_2 != 0) {
    param_1 = param_1 + iVar7;
    iVar7 = *(int *)(this + 4);
    uVar4 = param_2;
    do {
      uVar4 = uVar4 - 1;
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = (uint *)(iVar7 + (uVar4 & 0xfffffffc));
      *puVar6 = *puVar6 | (uint)bVar2 << (sbyte)((uVar4 & 3) << 3);
    } while (uVar4 != 0);
  }
  if (*(int *)(this + 0xc) == 1) {
    uVar4 = *(uint *)this;
    if (param_2 < uVar4 * 4) {
      puVar6 = *(uint **)(this + 4);
      do {
        uVar4 = param_2 & 3;
        uVar5 = param_2 & 0xfffffffc;
        param_2 = param_2 + 1;
        puVar1 = (uint *)((int)puVar6 + uVar5);
        *puVar1 = *puVar1 | 0xff << (sbyte)(uVar4 << 3);
        uVar4 = *(uint *)this;
      } while (param_2 <= uVar4 * 4 && uVar4 * 4 - param_2 != 0);
    }
    else {
      puVar6 = *(uint **)(this + 4);
    }
    uVar3 = *puVar6;
    uVar5 = uVar3 - 1;
    *puVar6 = uVar5;
    if ((uVar3 < uVar5) && (1 < uVar4)) {
      uVar5 = puVar6[1];
      puVar6[1] = uVar5 - 1;
      uVar3 = 1;
      while ((uVar5 == 0 && (uVar3 = uVar3 + 1, uVar3 < uVar4))) {
        uVar5 = puVar6[uVar3];
        puVar6[uVar3] = uVar5 - 1;
      }
    }
    else if (uVar4 == 0) {
      return;
    }
    uVar5 = 0;
    do {
      puVar6[uVar5] = ~puVar6[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
    return;
  }
  return;
LAB_087610a2:
  uVar4 = param_2 + 3 >> 2;
  if (8 < uVar4) {
    if (uVar4 < 0x11) {
      iVar7 = iVar7 + -1;
      uVar4 = 0x10;
      local_20 = 0x40;
    }
    else if (uVar4 < 0x21) {
      iVar7 = iVar7 + -1;
      uVar4 = 0x20;
      local_20 = 0x80;
    }
    else if (uVar4 < 0x41) {
      iVar7 = iVar7 + -1;
      uVar4 = 0x40;
      local_20 = 0x100;
    }
    else {
      iVar7 = iVar7 + -1;
      bVar2 = BitPrecision(uVar4 - 1);
      uVar4 = 1 << (bVar2 & 0x1f);
      local_20 = uVar4 * 4;
    }
    goto LAB_087610e0;
  }
  iVar7 = iVar7 + -1;
  goto LAB_087611b8;
}

```

---

## Divide

```asm
// === 08761740 TaoCrypt::Integer::Divide  [0x08761740-0x8761a6f] ===
 8761740:	55                   	push   %ebp
 8761741:	89 e5                	mov    %esp,%ebp
 8761743:	57                   	push   %edi
 8761744:	56                   	push   %esi
 8761745:	53                   	push   %ebx
 8761746:	83 ec 6c             	sub    $0x6c,%esp
 8761749:	8b 75 14             	mov    0x14(%ebp),%esi
 876174c:	e8 a7 16 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761751:	81 c3 47 b4 c0 00    	add    $0xc0b447,%ebx
 8761757:	83 ee 01             	sub    $0x1,%esi
 876175a:	85 75 14             	test   %esi,0x14(%ebp)
 876175d:	0f 84 bd 01 00 00    	je     8761920 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x1e0>
 8761763:	8b 45 10             	mov    0x10(%ebp),%eax
 8761766:	89 04 24             	mov    %eax,(%esp)
 8761769:	e8 c2 b9 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 876176e:	83 f8 08             	cmp    $0x8,%eax
 8761771:	89 c6                	mov    %eax,%esi
 8761773:	0f 86 37 01 00 00    	jbe    87618b0 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x170>
 8761779:	83 f8 10             	cmp    $0x10,%eax
 876177c:	0f 86 a6 02 00 00    	jbe    8761a28 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x2e8>
 8761782:	83 f8 20             	cmp    $0x20,%eax
 8761785:	0f 86 85 02 00 00    	jbe    8761a10 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x2d0>
 876178b:	83 f8 40             	cmp    $0x40,%eax
 876178e:	66 90                	xchg   %ax,%ax
 8761790:	0f 87 aa 02 00 00    	ja     8761a40 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x300>
 8761796:	8d 50 ff             	lea    -0x1(%eax),%edx
 8761799:	bf 00 01 00 00       	mov    $0x100,%edi
 876179e:	be 40 00 00 00       	mov    $0x40,%esi
 87617a3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87617a6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87617ad:	00 
 87617ae:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87617b2:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87617b5:	8b 01                	mov    (%ecx),%eax
 87617b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87617bb:	8b 41 04             	mov    0x4(%ecx),%eax
 87617be:	89 44 24 04          	mov    %eax,0x4(%esp)
 87617c2:	89 c8                	mov    %ecx,%eax
 87617c4:	83 c0 08             	add    $0x8,%eax
 87617c7:	89 04 24             	mov    %eax,(%esp)
 87617ca:	e8 f1 24 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 87617cf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87617d2:	89 31                	mov    %esi,(%ecx)
 87617d4:	89 41 04             	mov    %eax,0x4(%ecx)
 87617d7:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87617db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87617e2:	00 
 87617e3:	89 04 24             	mov    %eax,(%esp)
 87617e6:	e8 d5 c4 91 ff       	call   807dcc0 <memset@plt>
 87617eb:	8b 45 08             	mov    0x8(%ebp),%eax
 87617ee:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87617f1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87617f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87617fa:	8d 3c 95 00 00 00 00 	lea    0x0(,%edx,4),%edi
 8761801:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8761804:	8b 40 04             	mov    0x4(%eax),%eax
 8761807:	8b 49 04             	mov    0x4(%ecx),%ecx
 876180a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876180d:	31 c0                	xor    %eax,%eax
 876180f:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8761812:	89 d1                	mov    %edx,%ecx
 8761814:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761818:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876181b:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876181e:	01 fe                	add    %edi,%esi
 8761820:	8b 16                	mov    (%esi),%edx
 8761822:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8761825:	8b 45 14             	mov    0x14(%ebp),%eax
 8761828:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 876182f:	00 
 8761830:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8761833:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8761836:	89 44 24 08          	mov    %eax,0x8(%esp)
 876183a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 876183d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761841:	89 04 24             	mov    %eax,(%esp)
 8761844:	e8 b7 ee 37 00       	call   8ae0700 <__udivdi3>
 8761849:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876184c:	89 04 3a             	mov    %eax,(%edx,%edi,1)
 876184f:	8b 55 08             	mov    0x8(%ebp),%edx
 8761852:	83 ef 04             	sub    $0x4,%edi
 8761855:	8b 02                	mov    (%edx),%eax
 8761857:	8b 16                	mov    (%esi),%edx
 8761859:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8761860:	00 
 8761861:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8761864:	8b 45 14             	mov    0x14(%ebp),%eax
 8761867:	89 55 d8             	mov    %edx,-0x28(%ebp)
 876186a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 876186d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761871:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8761874:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761878:	89 04 24             	mov    %eax,(%esp)
 876187b:	e8 b0 ef 37 00       	call   8ae0830 <__umoddi3>
 8761880:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8761883:	8b 55 08             	mov    0x8(%ebp),%edx
 8761886:	83 e9 01             	sub    $0x1,%ecx
 8761889:	83 f9 ff             	cmp    $0xffffffff,%ecx
 876188c:	89 02                	mov    %eax,(%edx)
 876188e:	75 88                	jne    8761818 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0xd8>
 8761890:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8761893:	83 79 0c 01          	cmpl   $0x1,0xc(%ecx)
 8761897:	0f 84 43 01 00 00    	je     87619e0 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x2a0>
 876189d:	8b 45 0c             	mov    0xc(%ebp),%eax
 87618a0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87618a7:	83 c4 6c             	add    $0x6c,%esp
 87618aa:	5b                   	pop    %ebx
 87618ab:	5e                   	pop    %esi
 87618ac:	5f                   	pop    %edi
 87618ad:	5d                   	pop    %ebp
 87618ae:	c3                   	ret
 87618af:	90                   	nop
 87618b0:	8b bc 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edi
 87618b7:	8d 50 ff             	lea    -0x1(%eax),%edx
 87618ba:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87618bd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87618c4:	00 
 87618c5:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87618c8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87618cc:	8b 01                	mov    (%ecx),%eax
 87618ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 87618d2:	8b 41 04             	mov    0x4(%ecx),%eax
 87618d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87618d9:	89 c8                	mov    %ecx,%eax
 87618db:	83 c0 08             	add    $0x8,%eax
 87618de:	89 04 24             	mov    %eax,(%esp)
 87618e1:	e8 da 23 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 87618e6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87618e9:	89 39                	mov    %edi,(%ecx)
 87618eb:	c1 e7 02             	shl    $0x2,%edi
 87618ee:	89 41 04             	mov    %eax,0x4(%ecx)
 87618f1:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87618f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87618fc:	00 
 87618fd:	89 04 24             	mov    %eax,(%esp)
 8761900:	e8 bb c3 91 ff       	call   807dcc0 <memset@plt>
 8761905:	8b 45 08             	mov    0x8(%ebp),%eax
 8761908:	85 f6                	test   %esi,%esi
 876190a:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876190d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8761913:	0f 85 de fe ff ff    	jne    87617f7 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0xb7>
 8761919:	e9 72 ff ff ff       	jmp    8761890 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x150>
 876191e:	66 90                	xchg   %ax,%ax
 8761920:	8b 45 14             	mov    0x14(%ebp),%eax
 8761923:	8d 7d b8             	lea    -0x48(%ebp),%edi
 8761926:	89 04 24             	mov    %eax,(%esp)
 8761929:	e8 12 5c 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 876192e:	8b 55 10             	mov    0x10(%ebp),%edx
 8761931:	89 3c 24             	mov    %edi,(%esp)
 8761934:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761938:	89 45 ac             	mov    %eax,-0x54(%ebp)
 876193b:	e8 30 d9 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8761940:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8761943:	89 3c 24             	mov    %edi,(%esp)
 8761946:	83 e8 01             	sub    $0x1,%eax
 8761949:	89 44 24 04          	mov    %eax,0x4(%esp)
 876194d:	e8 ce ee ff ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 8761952:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8761955:	89 14 24             	mov    %edx,(%esp)
 8761958:	89 55 ac             	mov    %edx,-0x54(%ebp)
 876195b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876195f:	e8 0c d9 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8761964:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8761967:	8b 7d bc             	mov    -0x44(%ebp),%edi
 876196a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761971:	00 
 8761972:	c1 e0 02             	shl    $0x2,%eax
 8761975:	89 3c 24             	mov    %edi,(%esp)
 8761978:	89 44 24 08          	mov    %eax,0x8(%esp)
 876197c:	e8 3f c3 91 ff       	call   807dcc0 <memset@plt>
 8761981:	89 3c 24             	mov    %edi,(%esp)
 8761984:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761989:	e8 92 5d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876198e:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8761991:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8761994:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761998:	89 0c 24             	mov    %ecx,(%esp)
 876199b:	e8 c0 ea ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87619a0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87619a3:	8b 7d cc             	mov    -0x34(%ebp),%edi
 87619a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87619ad:	00 
 87619ae:	c1 e0 02             	shl    $0x2,%eax
 87619b1:	89 3c 24             	mov    %edi,(%esp)
 87619b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87619b8:	e8 03 c3 91 ff       	call   807dcc0 <memset@plt>
 87619bd:	89 3c 24             	mov    %edi,(%esp)
 87619c0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87619c5:	e8 56 5d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87619ca:	8b 55 10             	mov    0x10(%ebp),%edx
 87619cd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87619d0:	8b 42 04             	mov    0x4(%edx),%eax
 87619d3:	23 30                	and    (%eax),%esi
 87619d5:	89 31                	mov    %esi,(%ecx)
 87619d7:	83 c4 6c             	add    $0x6c,%esp
 87619da:	5b                   	pop    %ebx
 87619db:	5e                   	pop    %esi
 87619dc:	5f                   	pop    %edi
 87619dd:	5d                   	pop    %ebp
 87619de:	c3                   	ret
 87619df:	90                   	nop
 87619e0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87619e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 87619e6:	8b 31                	mov    (%ecx),%esi
 87619e8:	c7 42 0c 01 00 00 00 	movl   $0x1,0xc(%edx)
 87619ef:	85 f6                	test   %esi,%esi
 87619f1:	0f 84 b0 fe ff ff    	je     87618a7 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x167>
 87619f7:	89 14 24             	mov    %edx,(%esp)
 87619fa:	e8 71 fb ff ff       	call   8761570 <_ZN8TaoCrypt7IntegermmEv>
 87619ff:	8b 55 08             	mov    0x8(%ebp),%edx
 8761a02:	8b 45 14             	mov    0x14(%ebp),%eax
 8761a05:	2b 02                	sub    (%edx),%eax
 8761a07:	89 02                	mov    %eax,(%edx)
 8761a09:	e9 99 fe ff ff       	jmp    87618a7 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x167>
 8761a0e:	66 90                	xchg   %ax,%ax
 8761a10:	8d 50 ff             	lea    -0x1(%eax),%edx
 8761a13:	bf 80 00 00 00       	mov    $0x80,%edi
 8761a18:	be 20 00 00 00       	mov    $0x20,%esi
 8761a1d:	e9 81 fd ff ff       	jmp    87617a3 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x63>
 8761a22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8761a28:	8d 50 ff             	lea    -0x1(%eax),%edx
 8761a2b:	bf 40 00 00 00       	mov    $0x40,%edi
 8761a30:	be 10 00 00 00       	mov    $0x10,%esi
 8761a35:	e9 69 fd ff ff       	jmp    87617a3 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x63>
 8761a3a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8761a40:	8d 50 ff             	lea    -0x1(%eax),%edx
 8761a43:	be 01 00 00 00       	mov    $0x1,%esi
 8761a48:	89 14 24             	mov    %edx,(%esp)
 8761a4b:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8761a4e:	e8 ed 5a 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 8761a53:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8761a56:	89 c1                	mov    %eax,%ecx
 8761a58:	d3 e6                	shl    %cl,%esi
 8761a5a:	8d 3c b5 00 00 00 00 	lea    0x0(,%esi,4),%edi
 8761a61:	e9 3d fd ff ff       	jmp    87617a3 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j+0x63>
 8761a66:	8d 76 00             	lea    0x0(%esi),%esi
 8761a69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Divide @ 0x8761740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Divide(unsigned int&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned
   int) */

void TaoCrypt::Integer::Divide(uint *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  Integer *pIVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  size_t __n;
  int iVar11;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  
  if ((param_4 & param_4 - 1) == 0) {
    iVar11 = BitPrecision(param_4);
    Integer((Integer *)&local_4c,param_3);
    pIVar7 = (Integer *)operator>>=((Integer *)&local_4c,iVar11 - 1);
    Integer((Integer *)&local_3c,pIVar7);
    uVar4 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar4 & 0xffffff00);
    operator=(param_2,(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    *param_1 = param_4 - 1 & **(uint **)(param_3 + 4);
    return;
  }
  uVar4 = WordCount(param_3);
  if (uVar4 < 9) {
    uVar9 = (&RoundupSizeTable)[uVar4];
    pvVar5 = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                               ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),
                                *(uint **)(param_2 + 4),*(uint *)param_2,uVar9,false);
    *(uint *)param_2 = uVar9;
    *(void **)(param_2 + 4) = pvVar5;
    memset(pvVar5,0,uVar9 << 2);
    *param_1 = 0;
    if (uVar4 == 0) goto LAB_08761890;
  }
  else {
    if (uVar4 < 0x11) {
      __n = 0x40;
      uVar9 = 0x10;
    }
    else if (uVar4 < 0x21) {
      __n = 0x80;
      uVar9 = 0x20;
    }
    else if (uVar4 < 0x41) {
      __n = 0x100;
      uVar9 = 0x40;
    }
    else {
      bVar3 = BitPrecision(uVar4 - 1);
      uVar9 = 1 << (bVar3 & 0x1f);
      __n = uVar9 * 4;
    }
    pvVar5 = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                               ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),
                                *(uint **)(param_2 + 4),*(uint *)param_2,uVar9,false);
    *(uint *)param_2 = uVar9;
    *(void **)(param_2 + 4) = pvVar5;
    memset(pvVar5,0,__n);
    *param_1 = 0;
  }
  iVar8 = uVar4 - 1;
  iVar11 = iVar8 * 4;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_3 + 4);
  uVar4 = 0;
  do {
    puVar10 = (undefined4 *)(iVar2 + iVar11);
    local_24 = *puVar10;
    local_20 = uVar4;
    uVar6 = __udivdi3(local_24,uVar4,param_4,0);
    *(undefined4 *)(iVar1 + iVar11) = uVar6;
    iVar11 = iVar11 + -4;
    local_28 = *param_1;
    local_2c = *puVar10;
    uVar4 = __umoddi3(local_2c,local_28,param_4,0);
    iVar8 = iVar8 + -1;
    *param_1 = uVar4;
  } while (iVar8 != -1);
LAB_08761890:
  if (*(int *)(param_3 + 0xc) == 1) {
    uVar4 = *param_1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (uVar4 != 0) {
      operator--(param_2);
      *param_1 = param_4 - *param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

```

---

## DivideByPowerOf2

```asm
// === 08761ac0 TaoCrypt::Integer::DivideByPowerOf2  [0x08761ac0-0x8761e4f] ===
 8761ac0:	55                   	push   %ebp
 8761ac1:	89 e5                	mov    %esp,%ebp
 8761ac3:	57                   	push   %edi
 8761ac4:	56                   	push   %esi
 8761ac5:	53                   	push   %ebx
 8761ac6:	e8 2d 13 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761acb:	81 c3 cd b0 c0 00    	add    $0xc0b0cd,%ebx
 8761ad1:	83 ec 4c             	sub    $0x4c,%esp
 8761ad4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8761ad7:	8b 45 10             	mov    0x10(%ebp),%eax
 8761ada:	89 14 24             	mov    %edx,(%esp)
 8761add:	89 44 24 04          	mov    %eax,0x4(%esp)
 8761ae1:	e8 7a e9 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8761ae6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8761ae9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8761aec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8761af0:	89 04 24             	mov    %eax,(%esp)
 8761af3:	e8 28 ed ff ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 8761af8:	8b 55 10             	mov    0x10(%ebp),%edx
 8761afb:	8b 75 14             	mov    0x14(%ebp),%esi
 8761afe:	89 14 24             	mov    %edx,(%esp)
 8761b01:	e8 2a b6 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8761b06:	83 c6 1f             	add    $0x1f,%esi
 8761b09:	c1 ee 05             	shr    $0x5,%esi
 8761b0c:	39 f0                	cmp    %esi,%eax
 8761b0e:	0f 82 34 01 00 00    	jb     8761c48 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x188>
 8761b14:	83 fe 08             	cmp    $0x8,%esi
 8761b17:	0f 86 1b 02 00 00    	jbe    8761d38 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x278>
 8761b1d:	83 fe 10             	cmp    $0x10,%esi
 8761b20:	bf 10 00 00 00       	mov    $0x10,%edi
 8761b25:	76 29                	jbe    8761b50 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x90>
 8761b27:	83 fe 20             	cmp    $0x20,%esi
 8761b2a:	66 bf 20 00          	mov    $0x20,%di
 8761b2e:	76 20                	jbe    8761b50 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x90>
 8761b30:	83 fe 40             	cmp    $0x40,%esi
 8761b33:	66 bf 40 00          	mov    $0x40,%di
 8761b37:	76 17                	jbe    8761b50 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x90>
 8761b39:	8d 46 ff             	lea    -0x1(%esi),%eax
 8761b3c:	66 bf 01 00          	mov    $0x1,%di
 8761b40:	89 04 24             	mov    %eax,(%esp)
 8761b43:	e8 f8 59 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 8761b48:	89 c1                	mov    %eax,%ecx
 8761b4a:	d3 e7                	shl    %cl,%edi
 8761b4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761b50:	8b 45 08             	mov    0x8(%ebp),%eax
 8761b53:	8b 08                	mov    (%eax),%ecx
 8761b55:	8b 50 04             	mov    0x4(%eax),%edx
 8761b58:	39 f9                	cmp    %edi,%ecx
 8761b5a:	74 62                	je     8761bbe <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0xfe>
 8761b5c:	85 ff                	test   %edi,%edi
 8761b5e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8761b65:	0f 85 95 02 00 00    	jne    8761e00 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x340>
 8761b6b:	39 cf                	cmp    %ecx,%edi
 8761b6d:	89 c8                	mov    %ecx,%eax
 8761b6f:	0f 46 c7             	cmovbe %edi,%eax
 8761b72:	c1 e0 02             	shl    $0x2,%eax
 8761b75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761b79:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8761b7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761b80:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8761b83:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8761b86:	89 04 24             	mov    %eax,(%esp)
 8761b89:	e8 12 bd 91 ff       	call   807d8a0 <memcpy@plt>
 8761b8e:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8761b91:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8761b94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761b9b:	00 
 8761b9c:	c1 e1 02             	shl    $0x2,%ecx
 8761b9f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8761ba3:	89 14 24             	mov    %edx,(%esp)
 8761ba6:	e8 15 c1 91 ff       	call   807dcc0 <memset@plt>
 8761bab:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8761bae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761bb3:	89 14 24             	mov    %edx,(%esp)
 8761bb6:	e8 65 5b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761bbb:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8761bbe:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8761bc1:	85 f6                	test   %esi,%esi
 8761bc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8761bc6:	89 51 04             	mov    %edx,0x4(%ecx)
 8761bc9:	89 39                	mov    %edi,(%ecx)
 8761bcb:	8b 48 04             	mov    0x4(%eax),%ecx
 8761bce:	74 1d                	je     8761bed <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x12d>
 8761bd0:	31 c0                	xor    %eax,%eax
 8761bd2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8761bd8:	8b 3c 81             	mov    (%ecx,%eax,4),%edi
 8761bdb:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 8761bde:	83 c0 01             	add    $0x1,%eax
 8761be1:	39 c6                	cmp    %eax,%esi
 8761be3:	77 f3                	ja     8761bd8 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x118>
 8761be5:	8b 55 08             	mov    0x8(%ebp),%edx
 8761be8:	8b 3a                	mov    (%edx),%edi
 8761bea:	8b 52 04             	mov    0x4(%edx),%edx
 8761bed:	29 f7                	sub    %esi,%edi
 8761bef:	8d 14 b2             	lea    (%edx,%esi,4),%edx
 8761bf2:	74 12                	je     8761c06 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x146>
 8761bf4:	31 c0                	xor    %eax,%eax
 8761bf6:	66 90                	xchg   %ax,%ax
 8761bf8:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 8761bff:	83 c0 01             	add    $0x1,%eax
 8761c02:	39 c7                	cmp    %eax,%edi
 8761c04:	77 f2                	ja     8761bf8 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x138>
 8761c06:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8761c09:	83 e1 1f             	and    $0x1f,%ecx
 8761c0c:	74 19                	je     8761c27 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x167>
 8761c0e:	8b 55 08             	mov    0x8(%ebp),%edx
 8761c11:	8d 04 b5 fc ff ff ff 	lea    -0x4(,%esi,4),%eax
 8761c18:	03 42 04             	add    0x4(%edx),%eax
 8761c1b:	ba 01 00 00 00       	mov    $0x1,%edx
 8761c20:	d3 e2                	shl    %cl,%edx
 8761c22:	83 ea 01             	sub    $0x1,%edx
 8761c25:	21 10                	and    %edx,(%eax)
 8761c27:	8b 55 08             	mov    0x8(%ebp),%edx
 8761c2a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8761c2d:	c7 42 0c 00 00 00 00 	movl   $0x0,0xc(%edx)
 8761c34:	83 79 0c 01          	cmpl   $0x1,0xc(%ecx)
 8761c38:	0f 84 0a 01 00 00    	je     8761d48 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x288>
 8761c3e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8761c41:	5b                   	pop    %ebx
 8761c42:	5e                   	pop    %esi
 8761c43:	5f                   	pop    %edi
 8761c44:	5d                   	pop    %ebp
 8761c45:	c3                   	ret
 8761c46:	66 90                	xchg   %ax,%ax
 8761c48:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8761c4b:	89 0c 24             	mov    %ecx,(%esp)
 8761c4e:	e8 dd b4 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8761c53:	83 f8 08             	cmp    $0x8,%eax
 8761c56:	0f 86 cc 00 00 00    	jbe    8761d28 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x268>
 8761c5c:	83 f8 10             	cmp    $0x10,%eax
 8761c5f:	be 10 00 00 00       	mov    $0x10,%esi
 8761c64:	76 2a                	jbe    8761c90 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x1d0>
 8761c66:	83 f8 20             	cmp    $0x20,%eax
 8761c69:	66 be 20 00          	mov    $0x20,%si
 8761c6d:	76 21                	jbe    8761c90 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x1d0>
 8761c6f:	83 f8 40             	cmp    $0x40,%eax
 8761c72:	66 be 40 00          	mov    $0x40,%si
 8761c76:	76 18                	jbe    8761c90 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x1d0>
 8761c78:	83 e8 01             	sub    $0x1,%eax
 8761c7b:	66 be 01 00          	mov    $0x1,%si
 8761c7f:	89 04 24             	mov    %eax,(%esp)
 8761c82:	e8 b9 58 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 8761c87:	89 c1                	mov    %eax,%ecx
 8761c89:	d3 e6                	shl    %cl,%esi
 8761c8b:	90                   	nop
 8761c8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8761c93:	8b 10                	mov    (%eax),%edx
 8761c95:	8b 78 04             	mov    0x4(%eax),%edi
 8761c98:	39 f2                	cmp    %esi,%edx
 8761c9a:	74 56                	je     8761cf2 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x232>
 8761c9c:	31 c9                	xor    %ecx,%ecx
 8761c9e:	85 f6                	test   %esi,%esi
 8761ca0:	0f 85 82 01 00 00    	jne    8761e28 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x368>
 8761ca6:	39 d6                	cmp    %edx,%esi
 8761ca8:	89 d0                	mov    %edx,%eax
 8761caa:	0f 46 c6             	cmovbe %esi,%eax
 8761cad:	c1 e0 02             	shl    $0x2,%eax
 8761cb0:	89 0c 24             	mov    %ecx,(%esp)
 8761cb3:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8761cb6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8761cba:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8761cbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761cc1:	e8 da bb 91 ff       	call   807d8a0 <memcpy@plt>
 8761cc6:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8761cc9:	89 3c 24             	mov    %edi,(%esp)
 8761ccc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761cd3:	00 
 8761cd4:	c1 e2 02             	shl    $0x2,%edx
 8761cd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8761cdb:	e8 e0 bf 91 ff       	call   807dcc0 <memset@plt>
 8761ce0:	89 3c 24             	mov    %edi,(%esp)
 8761ce3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761ce8:	e8 33 5a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761ced:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8761cf0:	89 cf                	mov    %ecx,%edi
 8761cf2:	8b 55 08             	mov    0x8(%ebp),%edx
 8761cf5:	85 f6                	test   %esi,%esi
 8761cf7:	8b 45 10             	mov    0x10(%ebp),%eax
 8761cfa:	89 7a 04             	mov    %edi,0x4(%edx)
 8761cfd:	89 32                	mov    %esi,(%edx)
 8761cff:	8b 48 04             	mov    0x4(%eax),%ecx
 8761d02:	0f 84 1f ff ff ff    	je     8761c27 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x167>
 8761d08:	31 c0                	xor    %eax,%eax
 8761d0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8761d10:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 8761d13:	89 14 87             	mov    %edx,(%edi,%eax,4)
 8761d16:	83 c0 01             	add    $0x1,%eax
 8761d19:	39 f0                	cmp    %esi,%eax
 8761d1b:	72 f3                	jb     8761d10 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x250>
 8761d1d:	e9 05 ff ff ff       	jmp    8761c27 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x167>
 8761d22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8761d28:	8b b4 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%esi
 8761d2f:	e9 5c ff ff ff       	jmp    8761c90 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x1d0>
 8761d34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761d38:	8b bc b3 48 87 99 ff 	mov    -0x6678b8(%ebx,%esi,4),%edi
 8761d3f:	e9 0c fe ff ff       	jmp    8761b50 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x90>
 8761d44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761d48:	89 14 24             	mov    %edx,(%esp)
 8761d4b:	e8 30 b5 ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 8761d50:	84 c0                	test   %al,%al
 8761d52:	0f 85 e6 fe ff ff    	jne    8761c3e <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x17e>
 8761d58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8761d5b:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8761d5e:	8d 75 c8             	lea    -0x38(%ebp),%esi
 8761d61:	89 04 24             	mov    %eax,(%esp)
 8761d64:	e8 07 f8 ff ff       	call   8761570 <_ZN8TaoCrypt7IntegermmEv>
 8761d69:	8b 55 14             	mov    0x14(%ebp),%edx
 8761d6c:	89 3c 24             	mov    %edi,(%esp)
 8761d6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8761d73:	e8 f8 ef ff ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 8761d78:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8761d7b:	83 ec 04             	sub    $0x4,%esp
 8761d7e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8761d82:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8761d86:	89 34 24             	mov    %esi,(%esp)
 8761d89:	e8 52 e3 ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 8761d8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8761d91:	83 ec 04             	sub    $0x4,%esp
 8761d94:	89 74 24 04          	mov    %esi,0x4(%esp)
 8761d98:	89 04 24             	mov    %eax,(%esp)
 8761d9b:	e8 c0 e6 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8761da0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8761da3:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8761da6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761dad:	00 
 8761dae:	c1 e0 02             	shl    $0x2,%eax
 8761db1:	89 34 24             	mov    %esi,(%esp)
 8761db4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761db8:	e8 03 bf 91 ff       	call   807dcc0 <memset@plt>
 8761dbd:	89 34 24             	mov    %esi,(%esp)
 8761dc0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761dc5:	e8 56 59 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761dca:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8761dcd:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8761dd0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761dd7:	00 
 8761dd8:	c1 e0 02             	shl    $0x2,%eax
 8761ddb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761ddf:	89 34 24             	mov    %esi,(%esp)
 8761de2:	e8 d9 be 91 ff       	call   807dcc0 <memset@plt>
 8761de7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761dec:	89 34 24             	mov    %esi,(%esp)
 8761def:	e8 2c 59 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761df4:	e9 45 fe ff ff       	jmp    8761c3e <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x17e>
 8761df9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8761e00:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 8761e07:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8761e0a:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8761e0d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761e12:	89 04 24             	mov    %eax,(%esp)
 8761e15:	e8 76 59 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8761e1a:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8761e1d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8761e20:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8761e23:	e9 43 fd ff ff       	jmp    8761b6b <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0xab>
 8761e28:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 8761e2f:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8761e32:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761e37:	89 04 24             	mov    %eax,(%esp)
 8761e3a:	e8 51 59 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8761e3f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8761e42:	89 c1                	mov    %eax,%ecx
 8761e44:	e9 5d fe ff ff       	jmp    8761ca6 <_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j+0x1e6>
 8761e49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::DivideByPowerOf2 @ 0x8761ac0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DivideByPowerOf2(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer
   const&, unsigned int) */

void TaoCrypt::Integer::DivideByPowerOf2
               (Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  void *__dest;
  uint uVar8;
  uint uVar9;
  void *local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x8761acb;
  operator=(param_2,param_3);
  uVar9 = param_4;
  operator>>=(param_2,param_4);
  uVar6 = WordCount(param_3);
  uVar8 = param_4 + 0x1f >> 5;
  if (uVar6 < uVar8) {
    uVar6 = WordCount(param_3);
    if (uVar6 < 9) {
      uVar8 = (&RoundupSizeTable)[uVar6];
    }
    else {
      uVar8 = 0x10;
      if (((0x10 < uVar6) && (uVar8 = 0x20, 0x20 < uVar6)) && (uVar8 = 0x40, 0x40 < uVar6)) {
        bVar4 = BitPrecision(uVar6 - 1);
        uVar8 = 1 << (bVar4 & 0x1f);
      }
    }
    uVar6 = *(uint *)param_1;
    pvVar2 = *(void **)(param_1 + 4);
    __dest = pvVar2;
    if (uVar6 != uVar8) {
      __dest = (void *)0x0;
      if (uVar8 != 0) {
        __dest = operator_new__(uVar8 * 4,uVar9 & 0xffffff00);
      }
      uVar9 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = uVar8;
      }
      memcpy(__dest,pvVar2,uVar9 << 2);
      uVar9 = 0;
      memset(pvVar2,0,uVar6 << 2);
      operator_delete__(pvVar2,uVar9 & 0xffffff00);
    }
    *(void **)(param_1 + 4) = __dest;
    *(uint *)param_1 = uVar8;
    iVar3 = *(int *)(param_3 + 4);
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)__dest + uVar9 * 4) = *(undefined4 *)(iVar3 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
  }
  else {
    if (uVar8 < 9) {
      uVar6 = (&RoundupSizeTable)[uVar8];
    }
    else {
      uVar6 = 0x10;
      if (((0x10 < uVar8) && (uVar6 = 0x20, 0x20 < uVar8)) && (uVar6 = 0x40, 0x40 < uVar8)) {
        bVar4 = BitPrecision(uVar8 - 1);
        uVar6 = 1 << (bVar4 & 0x1f);
      }
    }
    uVar1 = *(uint *)param_1;
    pvVar2 = *(void **)(param_1 + 4);
    local_40 = pvVar2;
    if (uVar1 != uVar6) {
      local_40 = (void *)0x0;
      if (uVar6 != 0) {
        local_40 = operator_new__(uVar6 * 4,uVar9 & 0xffffff00);
      }
      uVar9 = uVar1;
      if (uVar6 <= uVar1) {
        uVar9 = uVar6;
      }
      memcpy(local_40,pvVar2,uVar9 << 2);
      uVar9 = 0;
      memset(pvVar2,0,uVar1 << 2);
      operator_delete__(pvVar2,uVar9 & 0xffffff00);
    }
    *(void **)(param_1 + 4) = local_40;
    *(uint *)param_1 = uVar6;
    iVar3 = *(int *)(param_3 + 4);
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_40 + uVar9 * 4) = *(undefined4 *)(iVar3 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
      uVar6 = *(uint *)param_1;
      local_40 = *(void **)(param_1 + 4);
    }
    if (uVar6 != uVar8) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_40 + uVar9 * 4 + uVar8 * 4) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6 - uVar8);
    }
    if ((param_4 & 0x1f) != 0) {
      puVar7 = (uint *)(uVar8 * 4 + -4 + *(int *)(param_1 + 4));
      *puVar7 = *puVar7 & (1 << (sbyte)(param_4 & 0x1f)) - 1U;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(int *)(param_3 + 0xc) == 1) && (cVar5 = operator!(param_1), cVar5 == '\0')) {
    operator--(param_2);
    Power2((Integer *)&local_2c,param_4);
    Minus((Integer *)&local_3c);
    operator=(param_1,(Integer *)&local_3c);
    uVar9 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar9 & 0xffffff00);
    uVar9 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar9 & 0xffffff00);
  }
  return;
}

```

---

## Divide_08762520

```asm
// === 08762520 TaoCrypt::Integer::Divide  [0x08762520-0x876261f] ===
 8762520:	55                   	push   %ebp
 8762521:	89 e5                	mov    %esp,%ebp
 8762523:	83 ec 58             	sub    $0x58,%esp
 8762526:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8762529:	8b 45 10             	mov    0x10(%ebp),%eax
 876252c:	e8 c7 08 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8762531:	81 c3 67 a6 c0 00    	add    $0xc0a667,%ebx
 8762537:	8b 55 08             	mov    0x8(%ebp),%edx
 876253a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876253d:	8b 75 14             	mov    0x14(%ebp),%esi
 8762540:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8762543:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8762546:	89 44 24 08          	mov    %eax,0x8(%esp)
 876254a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 876254d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8762551:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762555:	89 14 24             	mov    %edx,(%esp)
 8762558:	e8 53 fc ff ff       	call   87621b0 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_>
 876255d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8762560:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 8762564:	74 32                	je     8762598 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_+0x78>
 8762566:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 876256a:	74 14                	je     8762580 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_+0x60>
 876256c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876256f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8762572:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8762575:	89 ec                	mov    %ebp,%esp
 8762577:	5d                   	pop    %ebp
 8762578:	c3                   	ret
 8762579:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8762580:	89 3c 24             	mov    %edi,(%esp)
 8762583:	e8 48 ad ff ff       	call   875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>
 8762588:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876258b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876258e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8762591:	89 ec                	mov    %ebp,%esp
 8762593:	5d                   	pop    %ebp
 8762594:	c3                   	ret
 8762595:	8d 76 00             	lea    0x0(%esi),%esi
 8762598:	89 3c 24             	mov    %edi,(%esp)
 876259b:	e8 30 ad ff ff       	call   875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>
 87625a0:	8b 45 08             	mov    0x8(%ebp),%eax
 87625a3:	89 04 24             	mov    %eax,(%esp)
 87625a6:	e8 d5 ac ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 87625ab:	84 c0                	test   %al,%al
 87625ad:	75 b7                	jne    8762566 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_+0x46>
 87625af:	89 3c 24             	mov    %edi,(%esp)
 87625b2:	e8 b9 ef ff ff       	call   8761570 <_ZN8TaoCrypt7IntegermmEv>
 87625b7:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 87625ba:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87625bd:	89 74 24 04          	mov    %esi,0x4(%esp)
 87625c1:	89 0c 24             	mov    %ecx,(%esp)
 87625c4:	e8 87 ce ff ff       	call   875f450 <_ZNK8TaoCrypt7Integer13AbsoluteValueEv>
 87625c9:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87625cc:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87625cf:	8b 45 08             	mov    0x8(%ebp),%eax
 87625d2:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87625d5:	83 ec 04             	sub    $0x4,%esp
 87625d8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87625dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87625e0:	89 14 24             	mov    %edx,(%esp)
 87625e3:	e8 f8 da ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87625e8:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87625eb:	8b 45 08             	mov    0x8(%ebp),%eax
 87625ee:	83 ec 04             	sub    $0x4,%esp
 87625f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 87625f5:	89 04 24             	mov    %eax,(%esp)
 87625f8:	e8 63 de ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87625fd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8762600:	89 14 24             	mov    %edx,(%esp)
 8762603:	e8 68 16 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 8762608:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 876260b:	89 0c 24             	mov    %ecx,(%esp)
 876260e:	e8 5d 16 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 8762613:	e9 4e ff ff ff       	jmp    8762566 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_+0x46>
 8762618:	90                   	nop
 8762619:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Divide @ 0x8762520

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Divide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void TaoCrypt::Integer::Divide(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  char cVar1;
  Integer local_3c [16];
  Integer local_2c [28];
  
  PositiveDivide(param_1,param_2,param_3,param_4);
  if (*(int *)(param_3 + 0xc) == 1) {
    Negate(param_2);
    cVar1 = operator!(param_1);
    if (cVar1 == '\0') {
      operator--(param_2);
      AbsoluteValue();
      Minus(local_3c);
      operator=(param_1,local_3c);
      ~Integer(local_3c);
      ~Integer(local_2c);
    }
  }
  if (*(int *)(param_4 + 0xc) != 1) {
    return;
  }
  Negate(param_2);
  return;
}

```

---

## DividedBy

```asm
// === 08761a70 TaoCrypt::Integer::DividedBy  [0x08761a70-0x8761abf] ===
 8761a70:	55                   	push   %ebp
 8761a71:	89 e5                	mov    %esp,%ebp
 8761a73:	83 ec 28             	sub    $0x28,%esp
 8761a76:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8761a79:	e8 7a 13 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761a7e:	81 c3 1a b1 c0 00    	add    $0xc0b11a,%ebx
 8761a84:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8761a87:	8b 75 08             	mov    0x8(%ebp),%esi
 8761a8a:	89 34 24             	mov    %esi,(%esp)
 8761a8d:	e8 fe da ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8761a92:	8b 45 10             	mov    0x10(%ebp),%eax
 8761a95:	89 74 24 04          	mov    %esi,0x4(%esp)
 8761a99:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8761a9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8761aa0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761aa4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8761aa7:	89 04 24             	mov    %eax,(%esp)
 8761aaa:	e8 91 fc ff ff       	call   8761740 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j>
 8761aaf:	89 f0                	mov    %esi,%eax
 8761ab1:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8761ab4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8761ab7:	89 ec                	mov    %ebp,%esp
 8761ab9:	5d                   	pop    %ebp
 8761aba:	c2 04 00             	ret    $0x4
 8761abd:	90                   	nop
 8761abe:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::DividedBy @ 0x8761a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DividedBy(unsigned int) const */

uint TaoCrypt::Integer::DividedBy(uint param_1)

{
  Integer *in_stack_00000008;
  uint in_stack_0000000c;
  uint local_10;
  
  Integer((Integer *)param_1);
  Divide(&local_10,(Integer *)param_1,in_stack_00000008,in_stack_0000000c);
  return param_1;
}

```

---

## DividedBy_08763150

```asm
// === 08763150 TaoCrypt::Integer::DividedBy  [0x08763150-0x87631df] ===
 8763150:	55                   	push   %ebp
 8763151:	89 e5                	mov    %esp,%ebp
 8763153:	83 ec 38             	sub    $0x38,%esp
 8763156:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763159:	e8 9a fc fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876315e:	81 c3 3a 9a c0 00    	add    $0xc09a3a,%ebx
 8763164:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763167:	8b 75 08             	mov    0x8(%ebp),%esi
 876316a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876316d:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8763170:	89 3c 24             	mov    %edi,(%esp)
 8763173:	e8 18 c4 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8763178:	89 34 24             	mov    %esi,(%esp)
 876317b:	e8 10 c4 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8763180:	8b 45 10             	mov    0x10(%ebp),%eax
 8763183:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763187:	89 3c 24             	mov    %edi,(%esp)
 876318a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876318e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8763191:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763195:	e8 86 f3 ff ff       	call   8762520 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_>
 876319a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876319d:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87631a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87631a7:	00 
 87631a8:	c1 e0 02             	shl    $0x2,%eax
 87631ab:	89 3c 24             	mov    %edi,(%esp)
 87631ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 87631b2:	e8 09 ab 91 ff       	call   807dcc0 <memset@plt>
 87631b7:	89 3c 24             	mov    %edi,(%esp)
 87631ba:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87631bf:	e8 5c 45 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87631c4:	89 f0                	mov    %esi,%eax
 87631c6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87631c9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87631cc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87631cf:	89 ec                	mov    %ebp,%esp
 87631d1:	5d                   	pop    %ebp
 87631d2:	c2 04 00             	ret    $0x4
 87631d5:	90                   	nop
 87631d6:	8d 76 00             	lea    0x0(%esi),%esi
 87631d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::DividedBy @ 0x8763150

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::DividedBy(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer((Integer *)&local_2c);
  Integer(param_1);
  Divide((Integer *)&local_2c,param_1,in_stack_00000008,in_stack_0000000c);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}

```

---

## Encode

```asm
// === 08760f10 TaoCrypt::Integer::Encode  [0x08760f10-0x876104f] ===
 8760f10:	55                   	push   %ebp
 8760f11:	89 e5                	mov    %esp,%ebp
 8760f13:	57                   	push   %edi
 8760f14:	56                   	push   %esi
 8760f15:	53                   	push   %ebx
 8760f16:	83 ec 4c             	sub    $0x4c,%esp
 8760f19:	8b 45 14             	mov    0x14(%ebp),%eax
 8760f1c:	e8 d7 1e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760f21:	81 c3 77 bc c0 00    	add    $0xc0bc77,%ebx
 8760f27:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8760f2a:	85 c0                	test   %eax,%eax
 8760f2c:	75 32                	jne    8760f60 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0x50>
 8760f2e:	8b 75 10             	mov    0x10(%ebp),%esi
 8760f31:	85 f6                	test   %esi,%esi
 8760f33:	74 1e                	je     8760f53 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0x43>
 8760f35:	8b 75 10             	mov    0x10(%ebp),%esi
 8760f38:	8b 45 08             	mov    0x8(%ebp),%eax
 8760f3b:	83 ee 01             	sub    $0x1,%esi
 8760f3e:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760f42:	89 04 24             	mov    %eax,(%esp)
 8760f45:	e8 b6 c1 ff ff       	call   875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>
 8760f4a:	88 07                	mov    %al,(%edi)
 8760f4c:	83 c7 01             	add    $0x1,%edi
 8760f4f:	85 f6                	test   %esi,%esi
 8760f51:	75 e5                	jne    8760f38 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0x28>
 8760f53:	8b 45 10             	mov    0x10(%ebp),%eax
 8760f56:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8760f59:	5b                   	pop    %ebx
 8760f5a:	5e                   	pop    %esi
 8760f5b:	5f                   	pop    %edi
 8760f5c:	5d                   	pop    %ebp
 8760f5d:	c3                   	ret
 8760f5e:	66 90                	xchg   %ax,%ax
 8760f60:	8b 45 08             	mov    0x8(%ebp),%eax
 8760f63:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 8760f67:	75 c5                	jne    8760f2e <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0x1e>
 8760f69:	89 04 24             	mov    %eax,(%esp)
 8760f6c:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8760f6f:	e8 bc dc ff ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8760f74:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8760f77:	89 14 24             	mov    %edx,(%esp)
 8760f7a:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8760f7d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8760f80:	0f 42 45 10          	cmovb  0x10(%ebp),%eax
 8760f84:	c1 e0 03             	shl    $0x3,%eax
 8760f87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760f8b:	e8 e0 fd ff ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 8760f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8760f93:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8760f96:	83 ec 04             	sub    $0x4,%esp
 8760f99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760f9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8760fa1:	89 34 24             	mov    %esi,(%esp)
 8760fa4:	e8 07 f2 ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8760fa9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8760fac:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8760faf:	c1 e0 02             	shl    $0x2,%eax
 8760fb2:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8760fb5:	83 ec 04             	sub    $0x4,%esp
 8760fb8:	89 14 24             	mov    %edx,(%esp)
 8760fbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760fbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760fc6:	00 
 8760fc7:	e8 f4 cc 91 ff       	call   807dcc0 <memset@plt>
 8760fcc:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8760fcf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760fd4:	89 14 24             	mov    %edx,(%esp)
 8760fd7:	e8 44 67 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760fdc:	8b 45 10             	mov    0x10(%ebp),%eax
 8760fdf:	31 d2                	xor    %edx,%edx
 8760fe1:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8760fe4:	83 e8 01             	sub    $0x1,%eax
 8760fe7:	85 c9                	test   %ecx,%ecx
 8760fe9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8760fec:	74 29                	je     8761017 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0x107>
 8760fee:	89 75 c0             	mov    %esi,-0x40(%ebp)
 8760ff1:	89 d6                	mov    %edx,%esi
 8760ff3:	90                   	nop
 8760ff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760ff8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8760ffb:	29 f0                	sub    %esi,%eax
 8760ffd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8761001:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8761004:	89 04 24             	mov    %eax,(%esp)
 8761007:	e8 f4 c0 ff ff       	call   875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>
 876100c:	88 04 37             	mov    %al,(%edi,%esi,1)
 876100f:	83 c6 01             	add    $0x1,%esi
 8761012:	3b 75 10             	cmp    0x10(%ebp),%esi
 8761015:	72 e1                	jb     8760ff8 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE+0xe8>
 8761017:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876101a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 876101d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761024:	00 
 8761025:	c1 e0 02             	shl    $0x2,%eax
 8761028:	89 34 24             	mov    %esi,(%esp)
 876102b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876102f:	e8 8c cc 91 ff       	call   807dcc0 <memset@plt>
 8761034:	89 34 24             	mov    %esi,(%esp)
 8761037:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876103c:	e8 df 66 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761041:	8b 45 10             	mov    0x10(%ebp),%eax
 8761044:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8761047:	5b                   	pop    %ebx
 8761048:	5e                   	pop    %esi
 8761049:	5f                   	pop    %edi
 876104a:	5d                   	pop    %ebp
 876104b:	c3                   	ret
 876104c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Encode @ 0x8760f10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const */

uint __thiscall
TaoCrypt::Integer::Encode(Integer *this,undefined1 *param_1,uint param_2,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  uVar2 = param_2;
  if ((param_4 != 0) && (*(int *)(this + 0xc) == 1)) {
    uVar2 = ByteCount(this);
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
    Power2((Integer *)&local_3c,uVar2 << 3);
    Plus((Integer *)&local_2c);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        uVar1 = GetByte((Integer *)&local_2c,(param_2 - 1) - uVar2);
        param_1[uVar2] = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    return param_2;
  }
  while (uVar2 != 0) {
    uVar1 = GetByte(this,uVar2 - 1);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  }
  return param_2;
}

```

---

## Gcd

```asm
// === 0875f760 TaoCrypt::Integer::Gcd  [0x0875f760-0x875f85f] ===
 875f760:	55                   	push   %ebp
 875f761:	89 e5                	mov    %esp,%ebp
 875f763:	57                   	push   %edi
 875f764:	56                   	push   %esi
 875f765:	53                   	push   %ebx
 875f766:	e8 8d 36 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f76b:	81 c3 2d d4 c0 00    	add    $0xc0d42d,%ebx
 875f771:	83 ec 5c             	sub    $0x5c,%esp
 875f774:	8b 75 08             	mov    0x8(%ebp),%esi
 875f777:	8b 83 c0 ff ff ff    	mov    -0x40(%ebx),%eax
 875f77d:	8b 93 68 fc ff ff    	mov    -0x398(%ebx),%edx
 875f783:	83 c0 08             	add    $0x8,%eax
 875f786:	8d 7a 08             	lea    0x8(%edx),%edi
 875f789:	89 45 c0             	mov    %eax,-0x40(%ebp)
 875f78c:	8d 55 c8             	lea    -0x38(%ebp),%edx
 875f78f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 875f792:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 875f795:	89 45 b0             	mov    %eax,-0x50(%ebp)
 875f798:	89 7d bc             	mov    %edi,-0x44(%ebp)
 875f79b:	89 14 24             	mov    %edx,(%esp)
 875f79e:	e8 ed fd ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875f7a3:	8b 93 f4 fa ff ff    	mov    -0x50c(%ebx),%edx
 875f7a9:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 875f7ac:	89 0c 24             	mov    %ecx,(%esp)
 875f7af:	83 c2 08             	add    $0x8,%edx
 875f7b2:	89 55 bc             	mov    %edx,-0x44(%ebp)
 875f7b5:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 875f7b8:	e8 d3 fd ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875f7bd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875f7c0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 875f7c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875f7c7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875f7ca:	89 04 24             	mov    %eax,(%esp)
 875f7cd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875f7d1:	e8 0a 5d 04 00       	call   87a54e0 <_ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_>
 875f7d6:	89 34 24             	mov    %esi,(%esp)
 875f7d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f7dd:	e8 8e fa ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f7e2:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 875f7e5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875f7e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f7ef:	00 
 875f7f0:	89 55 bc             	mov    %edx,-0x44(%ebp)
 875f7f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875f7f6:	c1 e0 02             	shl    $0x2,%eax
 875f7f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f7fd:	89 14 24             	mov    %edx,(%esp)
 875f800:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 875f803:	e8 b8 e4 91 ff       	call   807dcc0 <memset@plt>
 875f808:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 875f80b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f810:	89 14 24             	mov    %edx,(%esp)
 875f813:	e8 08 7f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875f818:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875f81b:	89 7d bc             	mov    %edi,-0x44(%ebp)
 875f81e:	8b 7d cc             	mov    -0x34(%ebp),%edi
 875f821:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f828:	00 
 875f829:	c1 e0 02             	shl    $0x2,%eax
 875f82c:	89 3c 24             	mov    %edi,(%esp)
 875f82f:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f833:	e8 88 e4 91 ff       	call   807dcc0 <memset@plt>
 875f838:	89 3c 24             	mov    %edi,(%esp)
 875f83b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f840:	e8 db 7e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875f845:	83 c4 5c             	add    $0x5c,%esp
 875f848:	89 f0                	mov    %esi,%eax
 875f84a:	5b                   	pop    %ebx
 875f84b:	5e                   	pop    %esi
 875f84c:	5f                   	pop    %edi
 875f84d:	5d                   	pop    %ebp
 875f84e:	c2 04 00             	ret    $0x4
 875f851:	90                   	nop
 875f852:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875f859:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Gcd @ 0x875f760

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::Gcd(Integer *this,Integer *param_1,Integer *param_2)

{
  undefined *puVar1;
  Integer *pIVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *local_48;
  undefined *local_44;
  AbstractEuclideanDomain *local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875f76b;
  local_44 = PTR_vtable_0936cb58 + 8;
  puVar1 = PTR_vtable_0936c800 + 8;
  local_48 = puVar1;
  local_40 = (AbstractEuclideanDomain *)&local_48;
  Integer((Integer *)&local_3c);
  puVar3 = PTR_vtable_0936c68c + 8;
  local_48 = puVar3;
  Integer((Integer *)&local_2c);
  pIVar2 = (Integer *)
           AbstractEuclideanDomain::Gcd((AbstractEuclideanDomain *)&local_48,param_1,param_2);
  Integer(this,pIVar2);
  uVar4 = 0;
  local_48 = puVar3;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar4 & 0xffffff00);
  uVar4 = 0;
  local_48 = puVar1;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar4 & 0xffffff00);
  return this;
}

```

---

## GetBit

```asm
// === 0875d080 TaoCrypt::Integer::GetBit  [0x0875d080-0x875d0af] ===
 875d080:	55                   	push   %ebp
 875d081:	31 c0                	xor    %eax,%eax
 875d083:	89 e5                	mov    %esp,%ebp
 875d085:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875d088:	56                   	push   %esi
 875d089:	8b 75 08             	mov    0x8(%ebp),%esi
 875d08c:	89 ca                	mov    %ecx,%edx
 875d08e:	c1 ea 05             	shr    $0x5,%edx
 875d091:	3b 16                	cmp    (%esi),%edx
 875d093:	73 0e                	jae    875d0a3 <_ZNK8TaoCrypt7Integer6GetBitEj+0x23>
 875d095:	8b 46 04             	mov    0x4(%esi),%eax
 875d098:	83 e1 1f             	and    $0x1f,%ecx
 875d09b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 875d09e:	d3 e8                	shr    %cl,%eax
 875d0a0:	83 e0 01             	and    $0x1,%eax
 875d0a3:	5e                   	pop    %esi
 875d0a4:	5d                   	pop    %ebp
 875d0a5:	c3                   	ret
 875d0a6:	8d 76 00             	lea    0x0(%esi),%esi
 875d0a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::GetBit @ 0x875d080

/* TaoCrypt::Integer::GetBit(unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetBit(Integer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 >> 5 < *(uint *)this) {
    uVar1 = *(uint *)(*(int *)(this + 4) + (param_1 >> 5) * 4) >> ((byte)param_1 & 0x1f) & 1;
  }
  return uVar1;
}

```

---

## GetBits

```asm
// === 0875d0b0 TaoCrypt::Integer::GetBits  [0x0875d0b0-0x875d0ff] ===
 875d0b0:	55                   	push   %ebp
 875d0b1:	89 e5                	mov    %esp,%ebp
 875d0b3:	57                   	push   %edi
 875d0b4:	31 ff                	xor    %edi,%edi
 875d0b6:	56                   	push   %esi
 875d0b7:	31 f6                	xor    %esi,%esi
 875d0b9:	53                   	push   %ebx
 875d0ba:	83 ec 1c             	sub    $0x1c,%esp
 875d0bd:	8b 45 10             	mov    0x10(%ebp),%eax
 875d0c0:	e8 33 5d fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d0c5:	81 c3 d3 fa c0 00    	add    $0xc0fad3,%ebx
 875d0cb:	85 c0                	test   %eax,%eax
 875d0cd:	74 27                	je     875d0f6 <_ZNK8TaoCrypt7Integer7GetBitsEjj+0x46>
 875d0cf:	90                   	nop
 875d0d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d0d3:	8d 04 07             	lea    (%edi,%eax,1),%eax
 875d0d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d0da:	8b 45 08             	mov    0x8(%ebp),%eax
 875d0dd:	89 04 24             	mov    %eax,(%esp)
 875d0e0:	e8 9b ff ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 875d0e5:	89 f9                	mov    %edi,%ecx
 875d0e7:	83 c7 01             	add    $0x1,%edi
 875d0ea:	0f b6 c0             	movzbl %al,%eax
 875d0ed:	d3 e0                	shl    %cl,%eax
 875d0ef:	09 c6                	or     %eax,%esi
 875d0f1:	39 7d 10             	cmp    %edi,0x10(%ebp)
 875d0f4:	77 da                	ja     875d0d0 <_ZNK8TaoCrypt7Integer7GetBitsEjj+0x20>
 875d0f6:	83 c4 1c             	add    $0x1c,%esp
 875d0f9:	89 f0                	mov    %esi,%eax
 875d0fb:	5b                   	pop    %ebx
 875d0fc:	5e                   	pop    %esi
 875d0fd:	5f                   	pop    %edi
 875d0fe:	5d                   	pop    %ebp
 875d0ff:	c3                   	ret

```

```c
// TaoCrypt::Integer::GetBits @ 0x875d0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::GetBits(unsigned int, unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetBits(Integer *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = GetBit(this,uVar3 + param_1);
      uVar4 = uVar3 + 1;
      uVar2 = uVar2 | (uVar1 & 0xff) << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
    } while (uVar4 < param_2);
  }
  return uVar2;
}

```

---

## GetByte

```asm
// === 0875d100 TaoCrypt::Integer::GetByte  [0x0875d100-0x875d12f] ===
 875d100:	55                   	push   %ebp
 875d101:	31 c0                	xor    %eax,%eax
 875d103:	89 e5                	mov    %esp,%ebp
 875d105:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875d108:	56                   	push   %esi
 875d109:	8b 75 08             	mov    0x8(%ebp),%esi
 875d10c:	89 ca                	mov    %ecx,%edx
 875d10e:	c1 ea 02             	shr    $0x2,%edx
 875d111:	3b 16                	cmp    (%esi),%edx
 875d113:	73 0e                	jae    875d123 <_ZNK8TaoCrypt7Integer7GetByteEj+0x23>
 875d115:	8b 76 04             	mov    0x4(%esi),%esi
 875d118:	83 e1 03             	and    $0x3,%ecx
 875d11b:	c1 e1 03             	shl    $0x3,%ecx
 875d11e:	8b 04 96             	mov    (%esi,%edx,4),%eax
 875d121:	d3 e8                	shr    %cl,%eax
 875d123:	5e                   	pop    %esi
 875d124:	5d                   	pop    %ebp
 875d125:	c3                   	ret
 875d126:	8d 76 00             	lea    0x0(%esi),%esi
 875d129:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::GetByte @ 0x875d100

/* TaoCrypt::Integer::GetByte(unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetByte(Integer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 >> 2 < *(uint *)this) {
    uVar1 = *(uint *)(*(int *)(this + 4) + (param_1 >> 2) * 4) >> (sbyte)((param_1 & 3) << 3);
  }
  return uVar1;
}

```

---

## Integer

```asm
// === 0875f050 TaoCrypt::Integer::Integer  [0x0875f050-0x875f0ef] ===
 875f050:	55                   	push   %ebp
 875f051:	89 e5                	mov    %esp,%ebp
 875f053:	83 ec 38             	sub    $0x38,%esp
 875f056:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875f059:	8b 75 08             	mov    0x8(%ebp),%esi
 875f05c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875f05f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875f062:	e8 91 3d fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f067:	81 c3 31 db c0 00    	add    $0xc0db31,%ebx
 875f06d:	c7 06 02 00 00 00    	movl   $0x2,(%esi)
 875f073:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f078:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875f07f:	e8 0c 87 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f084:	8b 3e                	mov    (%esi),%edi
 875f086:	89 46 04             	mov    %eax,0x4(%esi)
 875f089:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f08d:	8d 46 08             	lea    0x8(%esi),%eax
 875f090:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875f094:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f098:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f09f:	00 
 875f0a0:	89 04 24             	mov    %eax,(%esp)
 875f0a3:	e8 18 4c 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f0a8:	89 3e                	mov    %edi,(%esi)
 875f0aa:	c1 e7 02             	shl    $0x2,%edi
 875f0ad:	89 46 04             	mov    %eax,0x4(%esi)
 875f0b0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f0b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f0bb:	00 
 875f0bc:	89 04 24             	mov    %eax,(%esp)
 875f0bf:	e8 fc eb 91 ff       	call   807dcc0 <memset@plt>
 875f0c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f0c7:	8b 55 14             	mov    0x14(%ebp),%edx
 875f0ca:	89 46 0c             	mov    %eax,0xc(%esi)
 875f0cd:	8b 46 04             	mov    0x4(%esi),%eax
 875f0d0:	89 10                	mov    %edx,(%eax)
 875f0d2:	8b 55 10             	mov    0x10(%ebp),%edx
 875f0d5:	89 50 04             	mov    %edx,0x4(%eax)
 875f0d8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875f0db:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875f0de:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875f0e1:	89 ec                	mov    %ebp,%esp
 875f0e3:	5d                   	pop    %ebp
 875f0e4:	c3                   	ret
 875f0e5:	90                   	nop
 875f0e6:	8d 76 00             	lea    0x0(%esi),%esi
 875f0e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Integer @ 0x875f050

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Integer::Sign, unsigned int, unsigned int) */

void __thiscall
TaoCrypt::Integer::Integer(Integer *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *__s;
  uint in_stack_ffffffc8;
  
  *(undefined4 *)this = 2;
  puVar3 = operator_new__(8,in_stack_ffffffc8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar3;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar3,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  *(undefined4 *)(this + 0xc) = param_2;
  puVar2 = *(undefined4 **)(this + 4);
  *puVar2 = param_4;
  puVar2[1] = param_3;
  return;
}

```

---

## Integer_0875f0f0

```asm
// === 0875f0f0 TaoCrypt::Integer::Integer  [0x0875f0f0-0x875f1ff] ===
 875f0f0:	55                   	push   %ebp
 875f0f1:	89 e5                	mov    %esp,%ebp
 875f0f3:	57                   	push   %edi
 875f0f4:	56                   	push   %esi
 875f0f5:	53                   	push   %ebx
 875f0f6:	83 ec 2c             	sub    $0x2c,%esp
 875f0f9:	8b 45 10             	mov    0x10(%ebp),%eax
 875f0fc:	e8 f7 3c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f101:	81 c3 97 da c0 00    	add    $0xc0da97,%ebx
 875f107:	8b 75 08             	mov    0x8(%ebp),%esi
 875f10a:	83 f8 08             	cmp    $0x8,%eax
 875f10d:	0f 86 ad 00 00 00    	jbe    875f1c0 <_ZN8TaoCrypt7IntegerC1Ejj+0xd0>
 875f113:	83 f8 10             	cmp    $0x10,%eax
 875f116:	ba 40 00 00 00       	mov    $0x40,%edx
 875f11b:	b9 10 00 00 00       	mov    $0x10,%ecx
 875f120:	76 18                	jbe    875f13a <_ZN8TaoCrypt7IntegerC1Ejj+0x4a>
 875f122:	83 f8 20             	cmp    $0x20,%eax
 875f125:	b2 80                	mov    $0x80,%dl
 875f127:	b1 20                	mov    $0x20,%cl
 875f129:	76 0f                	jbe    875f13a <_ZN8TaoCrypt7IntegerC1Ejj+0x4a>
 875f12b:	83 f8 40             	cmp    $0x40,%eax
 875f12e:	66 ba 00 01          	mov    $0x100,%dx
 875f132:	b1 40                	mov    $0x40,%cl
 875f134:	0f 87 9e 00 00 00    	ja     875f1d8 <_ZN8TaoCrypt7IntegerC1Ejj+0xe8>
 875f13a:	89 0e                	mov    %ecx,(%esi)
 875f13c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f141:	89 14 24             	mov    %edx,(%esp)
 875f144:	e8 47 86 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f149:	8b 3e                	mov    (%esi),%edi
 875f14b:	89 46 04             	mov    %eax,0x4(%esi)
 875f14e:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f152:	8d 46 08             	lea    0x8(%esi),%eax
 875f155:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f15c:	00 
 875f15d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875f161:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f165:	89 04 24             	mov    %eax,(%esp)
 875f168:	e8 53 4b 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f16d:	89 3e                	mov    %edi,(%esi)
 875f16f:	c1 e7 02             	shl    $0x2,%edi
 875f172:	89 46 04             	mov    %eax,0x4(%esi)
 875f175:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f179:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f180:	00 
 875f181:	89 04 24             	mov    %eax,(%esp)
 875f184:	e8 37 eb 91 ff       	call   807dcc0 <memset@plt>
 875f189:	8b 56 04             	mov    0x4(%esi),%edx
 875f18c:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f18f:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 875f196:	89 02                	mov    %eax,(%edx)
 875f198:	8b 0e                	mov    (%esi),%ecx
 875f19a:	83 e9 01             	sub    $0x1,%ecx
 875f19d:	74 18                	je     875f1b7 <_ZN8TaoCrypt7IntegerC1Ejj+0xc7>
 875f19f:	31 c0                	xor    %eax,%eax
 875f1a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875f1a8:	c7 44 82 04 00 00 00 	movl   $0x0,0x4(%edx,%eax,4)
 875f1af:	00 
 875f1b0:	83 c0 01             	add    $0x1,%eax
 875f1b3:	39 c1                	cmp    %eax,%ecx
 875f1b5:	77 f1                	ja     875f1a8 <_ZN8TaoCrypt7IntegerC1Ejj+0xb8>
 875f1b7:	83 c4 2c             	add    $0x2c,%esp
 875f1ba:	5b                   	pop    %ebx
 875f1bb:	5e                   	pop    %esi
 875f1bc:	5f                   	pop    %edi
 875f1bd:	5d                   	pop    %ebp
 875f1be:	c3                   	ret
 875f1bf:	90                   	nop
 875f1c0:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 875f1c7:	85 d2                	test   %edx,%edx
 875f1c9:	89 16                	mov    %edx,(%esi)
 875f1cb:	75 21                	jne    875f1ee <_ZN8TaoCrypt7IntegerC1Ejj+0xfe>
 875f1cd:	31 c0                	xor    %eax,%eax
 875f1cf:	e9 75 ff ff ff       	jmp    875f149 <_ZN8TaoCrypt7IntegerC1Ejj+0x59>
 875f1d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875f1d8:	83 e8 01             	sub    $0x1,%eax
 875f1db:	89 04 24             	mov    %eax,(%esp)
 875f1de:	e8 5d 83 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875f1e3:	ba 01 00 00 00       	mov    $0x1,%edx
 875f1e8:	89 c1                	mov    %eax,%ecx
 875f1ea:	d3 e2                	shl    %cl,%edx
 875f1ec:	eb d9                	jmp    875f1c7 <_ZN8TaoCrypt7IntegerC1Ejj+0xd7>
 875f1ee:	c1 e2 02             	shl    $0x2,%edx
 875f1f1:	e9 46 ff ff ff       	jmp    875f13c <_ZN8TaoCrypt7IntegerC1Ejj+0x4c>
 875f1f6:	8d 76 00             	lea    0x0(%esi),%esi
 875f1f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Integer @ 0x875f0f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(unsigned int, unsigned int) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,uint param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  void *__s;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_stack_ffffffc8;
  
  if (param_2 < 9) {
    iVar5 = (&RoundupSizeTable)[param_2];
LAB_0875f1c7:
    *(int *)this = iVar5;
    if (iVar5 == 0) {
      puVar2 = (uint *)0x0;
      goto LAB_0875f149;
    }
    iVar5 = iVar5 << 2;
  }
  else {
    iVar5 = 0x40;
    uVar4 = 0x10;
    if (0x10 < param_2) {
      iVar5 = 0x80;
      uVar4 = 0x20;
      if (0x20 < param_2) {
        iVar5 = 0x100;
        uVar4 = 0x40;
        if (0x40 < param_2) {
          bVar1 = BitPrecision(param_2 - 1);
          iVar5 = 1 << (bVar1 & 0x1f);
          goto LAB_0875f1c7;
        }
      }
    }
    *(undefined4 *)this = uVar4;
  }
  puVar2 = operator_new__(iVar5,in_stack_ffffffc8 & 0xffffff00);
LAB_0875f149:
  uVar3 = *(uint *)this;
  *(uint **)(this + 4) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar2,uVar3,uVar3,false
                          );
  *(uint *)this = uVar3;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar3 << 2);
  puVar2 = *(uint **)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  *puVar2 = param_1;
  iVar5 = *(int *)this;
  if (iVar5 != 1) {
    uVar3 = 0;
    do {
      puVar2[uVar3 + 1] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar5 - 1U);
  }
  return;
}

```

---

## Integer_0875f270

```asm
// === 0875f270 TaoCrypt::Integer::Integer  [0x0875f270-0x875f37f] ===
 875f270:	55                   	push   %ebp
 875f271:	89 e5                	mov    %esp,%ebp
 875f273:	57                   	push   %edi
 875f274:	56                   	push   %esi
 875f275:	53                   	push   %ebx
 875f276:	e8 7d 3b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f27b:	81 c3 1d d9 c0 00    	add    $0xc0d91d,%ebx
 875f281:	83 ec 3c             	sub    $0x3c,%esp
 875f284:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875f287:	8b 75 08             	mov    0x8(%ebp),%esi
 875f28a:	89 3c 24             	mov    %edi,(%esp)
 875f28d:	e8 9e de ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875f292:	83 f8 08             	cmp    $0x8,%eax
 875f295:	0f 86 ad 00 00 00    	jbe    875f348 <_ZN8TaoCrypt7IntegerC1ERKS0_+0xd8>
 875f29b:	83 f8 10             	cmp    $0x10,%eax
 875f29e:	ba 40 00 00 00       	mov    $0x40,%edx
 875f2a3:	b9 10 00 00 00       	mov    $0x10,%ecx
 875f2a8:	76 18                	jbe    875f2c2 <_ZN8TaoCrypt7IntegerC1ERKS0_+0x52>
 875f2aa:	83 f8 20             	cmp    $0x20,%eax
 875f2ad:	b2 80                	mov    $0x80,%dl
 875f2af:	b1 20                	mov    $0x20,%cl
 875f2b1:	76 0f                	jbe    875f2c2 <_ZN8TaoCrypt7IntegerC1ERKS0_+0x52>
 875f2b3:	83 f8 40             	cmp    $0x40,%eax
 875f2b6:	66 ba 00 01          	mov    $0x100,%dx
 875f2ba:	b1 40                	mov    $0x40,%cl
 875f2bc:	0f 87 9e 00 00 00    	ja     875f360 <_ZN8TaoCrypt7IntegerC1ERKS0_+0xf0>
 875f2c2:	89 0e                	mov    %ecx,(%esi)
 875f2c4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f2c9:	89 14 24             	mov    %edx,(%esp)
 875f2cc:	e8 bf 84 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f2d1:	8b 16                	mov    (%esi),%edx
 875f2d3:	89 46 04             	mov    %eax,0x4(%esi)
 875f2d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f2da:	8d 46 08             	lea    0x8(%esi),%eax
 875f2dd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f2e4:	00 
 875f2e5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875f2e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 875f2ed:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875f2f0:	89 04 24             	mov    %eax,(%esp)
 875f2f3:	e8 c8 49 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f2f8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875f2fb:	89 16                	mov    %edx,(%esi)
 875f2fd:	c1 e2 02             	shl    $0x2,%edx
 875f300:	89 46 04             	mov    %eax,0x4(%esi)
 875f303:	89 54 24 08          	mov    %edx,0x8(%esp)
 875f307:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f30e:	00 
 875f30f:	89 04 24             	mov    %eax,(%esp)
 875f312:	e8 a9 e9 91 ff       	call   807dcc0 <memset@plt>
 875f317:	8b 0e                	mov    (%esi),%ecx
 875f319:	8b 47 0c             	mov    0xc(%edi),%eax
 875f31c:	8b 7f 04             	mov    0x4(%edi),%edi
 875f31f:	85 c9                	test   %ecx,%ecx
 875f321:	89 46 0c             	mov    %eax,0xc(%esi)
 875f324:	8b 76 04             	mov    0x4(%esi),%esi
 875f327:	74 14                	je     875f33d <_ZN8TaoCrypt7IntegerC1ERKS0_+0xcd>
 875f329:	31 c0                	xor    %eax,%eax
 875f32b:	90                   	nop
 875f32c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875f330:	8b 14 87             	mov    (%edi,%eax,4),%edx
 875f333:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875f336:	83 c0 01             	add    $0x1,%eax
 875f339:	39 c1                	cmp    %eax,%ecx
 875f33b:	77 f3                	ja     875f330 <_ZN8TaoCrypt7IntegerC1ERKS0_+0xc0>
 875f33d:	83 c4 3c             	add    $0x3c,%esp
 875f340:	5b                   	pop    %ebx
 875f341:	5e                   	pop    %esi
 875f342:	5f                   	pop    %edi
 875f343:	5d                   	pop    %ebp
 875f344:	c3                   	ret
 875f345:	8d 76 00             	lea    0x0(%esi),%esi
 875f348:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 875f34f:	85 d2                	test   %edx,%edx
 875f351:	89 16                	mov    %edx,(%esi)
 875f353:	75 21                	jne    875f376 <_ZN8TaoCrypt7IntegerC1ERKS0_+0x106>
 875f355:	31 c0                	xor    %eax,%eax
 875f357:	e9 75 ff ff ff       	jmp    875f2d1 <_ZN8TaoCrypt7IntegerC1ERKS0_+0x61>
 875f35c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875f360:	83 e8 01             	sub    $0x1,%eax
 875f363:	89 04 24             	mov    %eax,(%esp)
 875f366:	e8 d5 81 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875f36b:	ba 01 00 00 00       	mov    $0x1,%edx
 875f370:	89 c1                	mov    %eax,%ecx
 875f372:	d3 e2                	shl    %cl,%edx
 875f374:	eb d9                	jmp    875f34f <_ZN8TaoCrypt7IntegerC1ERKS0_+0xdf>
 875f376:	c1 e2 02             	shl    $0x2,%edx
 875f379:	e9 46 ff ff ff       	jmp    875f2c4 <_ZN8TaoCrypt7IntegerC1ERKS0_+0x54>
 875f37e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::Integer @ 0x875f270

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,Integer *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  void *__s;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_stack_ffffffb8;
  
  uVar3 = WordCount(param_1);
  if (uVar3 < 9) {
    iVar7 = (&RoundupSizeTable)[uVar3];
LAB_0875f34f:
    *(int *)this = iVar7;
    if (iVar7 == 0) {
      puVar4 = (uint *)0x0;
      goto LAB_0875f2d1;
    }
    iVar7 = iVar7 << 2;
  }
  else {
    iVar7 = 0x40;
    uVar6 = 0x10;
    if (0x10 < uVar3) {
      iVar7 = 0x80;
      uVar6 = 0x20;
      if (0x20 < uVar3) {
        iVar7 = 0x100;
        uVar6 = 0x40;
        if (0x40 < uVar3) {
          bVar2 = BitPrecision(uVar3 - 1);
          iVar7 = 1 << (bVar2 & 0x1f);
          goto LAB_0875f34f;
        }
      }
    }
    *(undefined4 *)this = uVar6;
  }
  puVar4 = operator_new__(iVar7,in_stack_ffffffb8 & 0xffffff00);
LAB_0875f2d1:
  uVar3 = *(uint *)this;
  *(uint **)(this + 4) = puVar4;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar4,uVar3,uVar3,false
                          );
  *(uint *)this = uVar3;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar3 << 2);
  uVar3 = *(uint *)this;
  iVar7 = *(int *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(this + 4);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      *(undefined4 *)(iVar1 + uVar5 * 4) = *(undefined4 *)(iVar7 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}

```

---

## Integer_0875f4d0

```asm
// === 0875f4d0 TaoCrypt::Integer::Integer  [0x0875f4d0-0x875f58f] ===
 875f4d0:	55                   	push   %ebp
 875f4d1:	89 e5                	mov    %esp,%ebp
 875f4d3:	83 ec 48             	sub    $0x48,%esp
 875f4d6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875f4d9:	8b 75 08             	mov    0x8(%ebp),%esi
 875f4dc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875f4df:	8b 55 0c             	mov    0xc(%ebp),%edx
 875f4e2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875f4e5:	e8 0e 39 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f4ea:	81 c3 ae d6 c0 00    	add    $0xc0d6ae,%ebx
 875f4f0:	c7 06 02 00 00 00    	movl   $0x2,(%esi)
 875f4f6:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875f4f9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f4fe:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875f505:	e8 86 82 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f50a:	8b 3e                	mov    (%esi),%edi
 875f50c:	89 46 04             	mov    %eax,0x4(%esi)
 875f50f:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f513:	8d 46 08             	lea    0x8(%esi),%eax
 875f516:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875f51a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f51e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f525:	00 
 875f526:	89 04 24             	mov    %eax,(%esp)
 875f529:	e8 92 47 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f52e:	89 3e                	mov    %edi,(%esi)
 875f530:	c1 e7 02             	shl    $0x2,%edi
 875f533:	89 46 04             	mov    %eax,0x4(%esi)
 875f536:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f53a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f541:	00 
 875f542:	89 04 24             	mov    %eax,(%esp)
 875f545:	e8 76 e7 91 ff       	call   807dcc0 <memset@plt>
 875f54a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875f54d:	85 d2                	test   %edx,%edx
 875f54f:	78 27                	js     875f578 <_ZN8TaoCrypt7IntegerC1El+0xa8>
 875f551:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 875f558:	8b 46 04             	mov    0x4(%esi),%eax
 875f55b:	89 10                	mov    %edx,(%eax)
 875f55d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 875f564:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875f567:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875f56a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875f56d:	89 ec                	mov    %ebp,%esp
 875f56f:	5d                   	pop    %ebp
 875f570:	c3                   	ret
 875f571:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875f578:	c7 46 0c 01 00 00 00 	movl   $0x1,0xc(%esi)
 875f57f:	f7 da                	neg    %edx
 875f581:	eb d5                	jmp    875f558 <_ZN8TaoCrypt7IntegerC1El+0x88>
 875f583:	90                   	nop
 875f584:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f58a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::Integer @ 0x875f4d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(long) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,long param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  void *__s;
  uint in_stack_ffffffb8;
  
  *(undefined4 *)this = 2;
  puVar3 = operator_new__(8,in_stack_ffffffb8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar3;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar3,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  if (param_1 < 0) {
    *(undefined4 *)(this + 0xc) = 1;
    param_1 = -param_1;
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
  }
  piVar2 = *(int **)(this + 4);
  *piVar2 = param_1;
  piVar2[1] = 0;
  return;
}

```

---

## Integer_0875f590

```asm
// === 0875f590 TaoCrypt::Integer::Integer  [0x0875f590-0x875f62f] ===
 875f590:	55                   	push   %ebp
 875f591:	89 e5                	mov    %esp,%ebp
 875f593:	83 ec 38             	sub    $0x38,%esp
 875f596:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875f599:	8b 75 08             	mov    0x8(%ebp),%esi
 875f59c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875f59f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875f5a2:	e8 51 38 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f5a7:	81 c3 f1 d5 c0 00    	add    $0xc0d5f1,%ebx
 875f5ad:	c7 06 02 00 00 00    	movl   $0x2,(%esi)
 875f5b3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f5b8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875f5bf:	e8 cc 81 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f5c4:	8b 3e                	mov    (%esi),%edi
 875f5c6:	89 46 04             	mov    %eax,0x4(%esi)
 875f5c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f5cd:	8d 46 08             	lea    0x8(%esi),%eax
 875f5d0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875f5d4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f5d8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f5df:	00 
 875f5e0:	89 04 24             	mov    %eax,(%esp)
 875f5e3:	e8 d8 46 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f5e8:	89 3e                	mov    %edi,(%esi)
 875f5ea:	c1 e7 02             	shl    $0x2,%edi
 875f5ed:	89 46 04             	mov    %eax,0x4(%esi)
 875f5f0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f5f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f5fb:	00 
 875f5fc:	89 04 24             	mov    %eax,(%esp)
 875f5ff:	e8 bc e6 91 ff       	call   807dcc0 <memset@plt>
 875f604:	8b 46 04             	mov    0x4(%esi),%eax
 875f607:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 875f60e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 875f615:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 875f61b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875f61e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875f621:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875f624:	89 ec                	mov    %ebp,%esp
 875f626:	5d                   	pop    %ebp
 875f627:	c3                   	ret
 875f628:	90                   	nop
 875f629:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Integer @ 0x875f590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer() */

void __thiscall TaoCrypt::Integer::Integer(Integer *this)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *__s;
  uint in_stack_ffffffc8;
  
  *(undefined4 *)this = 2;
  puVar3 = operator_new__(8,in_stack_ffffffc8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar3;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar3,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  puVar2 = *(undefined4 **)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  return;
}

```

---

## Integer_087603c0

```asm
// === 087603c0 TaoCrypt::Integer::Integer  [0x087603c0-0x876045f] ===
 87603c0:	55                   	push   %ebp
 87603c1:	89 e5                	mov    %esp,%ebp
 87603c3:	83 ec 38             	sub    $0x38,%esp
 87603c6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87603c9:	8b 75 08             	mov    0x8(%ebp),%esi
 87603cc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87603cf:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87603d2:	e8 21 2a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87603d7:	81 c3 c1 c7 c0 00    	add    $0xc0c7c1,%ebx
 87603dd:	c7 06 02 00 00 00    	movl   $0x2,(%esi)
 87603e3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87603e8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87603ef:	e8 9c 73 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87603f4:	8b 3e                	mov    (%esi),%edi
 87603f6:	89 46 04             	mov    %eax,0x4(%esi)
 87603f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87603fd:	8d 46 08             	lea    0x8(%esi),%eax
 8760400:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8760404:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8760408:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 876040f:	00 
 8760410:	89 04 24             	mov    %eax,(%esp)
 8760413:	e8 a8 38 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 8760418:	89 3e                	mov    %edi,(%esi)
 876041a:	c1 e7 02             	shl    $0x2,%edi
 876041d:	89 46 04             	mov    %eax,0x4(%esi)
 8760420:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8760424:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876042b:	00 
 876042c:	89 04 24             	mov    %eax,(%esp)
 876042f:	e8 8c d8 91 ff       	call   807dcc0 <memset@plt>
 8760434:	8b 45 0c             	mov    0xc(%ebp),%eax
 8760437:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 876043e:	89 34 24             	mov    %esi,(%esp)
 8760441:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760445:	e8 36 fe ff ff       	call   8760280 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE>
 876044a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876044d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760450:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760453:	89 ec                	mov    %ebp,%esp
 8760455:	5d                   	pop    %ebp
 8760456:	c3                   	ret
 8760457:	90                   	nop
 8760458:	90                   	nop
 8760459:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Integer @ 0x87603c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Source&) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,Source *param_1)

{
  uint uVar1;
  uint *puVar2;
  void *__s;
  uint in_stack_ffffffc8;
  
  *(undefined4 *)this = 2;
  puVar2 = operator_new__(8,in_stack_ffffffc8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar2,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  *(undefined4 *)(this + 0xc) = 0;
  Decode(this,param_1);
  return;
}

```

---

## Integer_08761300

```asm
// === 08761300 TaoCrypt::Integer::Integer  [0x08761300-0x876137f] ===
 8761300:	55                   	push   %ebp
 8761301:	89 e5                	mov    %esp,%ebp
 8761303:	56                   	push   %esi
 8761304:	53                   	push   %ebx
 8761305:	e8 ee 1a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876130a:	81 c3 8e b8 c0 00    	add    $0xc0b88e,%ebx
 8761310:	83 ec 20             	sub    $0x20,%esp
 8761313:	8b 75 08             	mov    0x8(%ebp),%esi
 8761316:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 876131c:	8d 46 08             	lea    0x8(%esi),%eax
 876131f:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8761326:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 876132d:	00 
 876132e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8761335:	00 
 8761336:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 876133d:	00 
 876133e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761345:	00 
 8761346:	89 04 24             	mov    %eax,(%esp)
 8761349:	e8 72 29 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 876134e:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8761354:	89 46 04             	mov    %eax,0x4(%esi)
 8761357:	8b 45 14             	mov    0x14(%ebp),%eax
 876135a:	89 34 24             	mov    %esi,(%esp)
 876135d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8761361:	8b 45 10             	mov    0x10(%ebp),%eax
 8761364:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761368:	8b 45 0c             	mov    0xc(%ebp),%eax
 876136b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876136f:	e8 dc fc ff ff       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 8761374:	83 c4 20             	add    $0x20,%esp
 8761377:	5b                   	pop    %ebx
 8761378:	5e                   	pop    %esi
 8761379:	5d                   	pop    %ebp
 876137a:	c3                   	ret
 876137b:	90                   	nop
 876137c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Integer @ 0x8761300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness) */

void __thiscall
TaoCrypt::Integer::Integer(Integer *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar1 = AllocatorWithCleanup<unsigned_int>::reallocate
                    ((AllocatorWithCleanup<unsigned_int> *)(this + 8),(uint *)0x0,0,0,false);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = uVar1;
  Decode(this,param_1,param_2,param_4);
  return;
}

```

---

## Integer_087614f0

```asm
// === 087614f0 TaoCrypt::Integer::Integer  [0x087614f0-0x876156f] ===
 87614f0:	55                   	push   %ebp
 87614f1:	89 e5                	mov    %esp,%ebp
 87614f3:	56                   	push   %esi
 87614f4:	53                   	push   %ebx
 87614f5:	e8 fe 18 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87614fa:	81 c3 9e b6 c0 00    	add    $0xc0b69e,%ebx
 8761500:	83 ec 20             	sub    $0x20,%esp
 8761503:	8b 75 08             	mov    0x8(%ebp),%esi
 8761506:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 876150c:	8d 46 08             	lea    0x8(%esi),%eax
 876150f:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8761516:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 876151d:	00 
 876151e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8761525:	00 
 8761526:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 876152d:	00 
 876152e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761535:	00 
 8761536:	89 04 24             	mov    %eax,(%esp)
 8761539:	e8 82 27 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 876153e:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8761544:	89 46 04             	mov    %eax,0x4(%esi)
 8761547:	8b 45 14             	mov    0x14(%ebp),%eax
 876154a:	89 34 24             	mov    %esi,(%esp)
 876154d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8761551:	8b 45 10             	mov    0x10(%ebp),%eax
 8761554:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761558:	8b 45 0c             	mov    0xc(%ebp),%eax
 876155b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876155f:	e8 dc fe ff ff       	call   8761440 <_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorERKS0_S4_>
 8761564:	83 c4 20             	add    $0x20,%esp
 8761567:	5b                   	pop    %ebx
 8761568:	5e                   	pop    %esi
 8761569:	5d                   	pop    %ebp
 876156a:	c3                   	ret
 876156b:	90                   	nop
 876156c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Integer @ 0x87614f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::Integer::Integer
          (Integer *this,RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar1 = AllocatorWithCleanup<unsigned_int>::reallocate
                    ((AllocatorWithCleanup<unsigned_int> *)(this + 8),(uint *)0x0,0,0,false);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = uVar1;
  Randomize((RandomNumberGenerator *)this,(Integer *)param_1,param_2);
  return;
}

```

---

## InverseMod

```asm
// === 0875d760 TaoCrypt::Integer::InverseMod  [0x0875d760-0x875d81f] ===
 875d760:	55                   	push   %ebp
 875d761:	89 e5                	mov    %esp,%ebp
 875d763:	57                   	push   %edi
 875d764:	56                   	push   %esi
 875d765:	53                   	push   %ebx
 875d766:	83 ec 2c             	sub    $0x2c,%esp
 875d769:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d76c:	e8 87 56 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d771:	81 c3 27 f4 c0 00    	add    $0xc0f427,%ebx
 875d777:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d77b:	8b 45 08             	mov    0x8(%ebp),%eax
 875d77e:	89 04 24             	mov    %eax,(%esp)
 875d781:	e8 3a fe ff ff       	call   875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>
 875d786:	85 c0                	test   %eax,%eax
 875d788:	89 c1                	mov    %eax,%ecx
 875d78a:	74 5c                	je     875d7e8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x88>
 875d78c:	83 f8 01             	cmp    $0x1,%eax
 875d78f:	bf 01 00 00 00       	mov    $0x1,%edi
 875d794:	74 54                	je     875d7ea <_ZNK8TaoCrypt7Integer10InverseModEj+0x8a>
 875d796:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d799:	31 d2                	xor    %edx,%edx
 875d79b:	f7 f1                	div    %ecx
 875d79d:	85 d2                	test   %edx,%edx
 875d79f:	74 47                	je     875d7e8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x88>
 875d7a1:	83 fa 01             	cmp    $0x1,%edx
 875d7a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875d7a7:	74 4f                	je     875d7f8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x98>
 875d7a9:	89 c8                	mov    %ecx,%eax
 875d7ab:	89 f9                	mov    %edi,%ecx
 875d7ad:	89 d7                	mov    %edx,%edi
 875d7af:	eb 2d                	jmp    875d7de <_ZNK8TaoCrypt7Integer10InverseModEj+0x7e>
 875d7b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875d7b8:	0f af 45 e4          	imul   -0x1c(%ebp),%eax
 875d7bc:	01 c1                	add    %eax,%ecx
 875d7be:	83 fe 01             	cmp    $0x1,%esi
 875d7c1:	74 45                	je     875d808 <_ZNK8TaoCrypt7Integer10InverseModEj+0xa8>
 875d7c3:	89 f8                	mov    %edi,%eax
 875d7c5:	31 d2                	xor    %edx,%edx
 875d7c7:	f7 f6                	div    %esi
 875d7c9:	85 d2                	test   %edx,%edx
 875d7cb:	89 c7                	mov    %eax,%edi
 875d7cd:	74 19                	je     875d7e8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x88>
 875d7cf:	0f af f9             	imul   %ecx,%edi
 875d7d2:	01 7d e4             	add    %edi,-0x1c(%ebp)
 875d7d5:	83 fa 01             	cmp    $0x1,%edx
 875d7d8:	74 1e                	je     875d7f8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x98>
 875d7da:	89 d7                	mov    %edx,%edi
 875d7dc:	89 f0                	mov    %esi,%eax
 875d7de:	31 d2                	xor    %edx,%edx
 875d7e0:	f7 f7                	div    %edi
 875d7e2:	85 d2                	test   %edx,%edx
 875d7e4:	89 d6                	mov    %edx,%esi
 875d7e6:	75 d0                	jne    875d7b8 <_ZNK8TaoCrypt7Integer10InverseModEj+0x58>
 875d7e8:	31 ff                	xor    %edi,%edi
 875d7ea:	83 c4 2c             	add    $0x2c,%esp
 875d7ed:	89 f8                	mov    %edi,%eax
 875d7ef:	5b                   	pop    %ebx
 875d7f0:	5e                   	pop    %esi
 875d7f1:	5f                   	pop    %edi
 875d7f2:	5d                   	pop    %ebp
 875d7f3:	c3                   	ret
 875d7f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d7f8:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875d7fb:	2b 7d e4             	sub    -0x1c(%ebp),%edi
 875d7fe:	83 c4 2c             	add    $0x2c,%esp
 875d801:	5b                   	pop    %ebx
 875d802:	5e                   	pop    %esi
 875d803:	89 f8                	mov    %edi,%eax
 875d805:	5f                   	pop    %edi
 875d806:	5d                   	pop    %ebp
 875d807:	c3                   	ret
 875d808:	89 cf                	mov    %ecx,%edi
 875d80a:	83 c4 2c             	add    $0x2c,%esp
 875d80d:	89 f8                	mov    %edi,%eax
 875d80f:	5b                   	pop    %ebx
 875d810:	5e                   	pop    %esi
 875d811:	5f                   	pop    %edi
 875d812:	5d                   	pop    %ebp
 875d813:	c3                   	ret
 875d814:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d81a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::InverseMod @ 0x875d760

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::InverseMod(unsigned int) const */

int __thiscall TaoCrypt::Integer::InverseMod(Integer *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_20;
  
  uVar3 = Modulo(this,param_1);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      return 1;
    }
    local_20 = param_1 / uVar3;
    uVar6 = param_1 % uVar3;
    if (uVar6 != 0) {
      if (uVar6 != 1) {
        iVar5 = 1;
        do {
          uVar4 = uVar3 / uVar6;
          uVar2 = (ulonglong)uVar3 % (ulonglong)uVar6;
          uVar3 = (uint)uVar2;
          if (uVar3 == 0) {
            return 0;
          }
          iVar5 = iVar5 + uVar4 * local_20;
          if (uVar3 == 1) {
            return iVar5;
          }
          uVar1 = (ulonglong)uVar6;
          uVar6 = (uint)(uVar1 % uVar2);
          if (uVar6 == 0) {
            return 0;
          }
          local_20 = local_20 + (int)(uVar1 / uVar2) * iVar5;
        } while (uVar6 != 1);
      }
      return param_1 - local_20;
    }
  }
  return 0;
}

```

---

## InverseMod_087631e0

```asm
// === 087631e0 TaoCrypt::Integer::InverseMod  [0x087631e0-0x876357f] ===
 87631e0:	55                   	push   %ebp
 87631e1:	89 e5                	mov    %esp,%ebp
 87631e3:	57                   	push   %edi
 87631e4:	56                   	push   %esi
 87631e5:	53                   	push   %ebx
 87631e6:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 87631ec:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87631ef:	e8 04 fc fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87631f4:	81 c3 a4 99 c0 00    	add    $0xc099a4,%ebx
 87631fa:	8b 75 10             	mov    0x10(%ebp),%esi
 87631fd:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 8763201:	74 10                	je     8763213 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x33>
 8763203:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763207:	89 3c 24             	mov    %edi,(%esp)
 876320a:	e8 11 a0 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 876320f:	85 c0                	test   %eax,%eax
 8763211:	78 75                	js     8763288 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0xa8>
 8763213:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8763216:	89 74 24 08          	mov    %esi,0x8(%esp)
 876321a:	89 04 24             	mov    %eax,(%esp)
 876321d:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8763223:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8763227:	e8 f4 f3 ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 876322c:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8763232:	83 ec 04             	sub    $0x4,%esp
 8763235:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763239:	8b 45 08             	mov    0x8(%ebp),%eax
 876323c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8763240:	89 04 24             	mov    %eax,(%esp)
 8763243:	e8 98 ff ff ff       	call   87631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>
 8763248:	8b 75 d0             	mov    -0x30(%ebp),%esi
 876324b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 876324e:	83 ec 04             	sub    $0x4,%esp
 8763251:	c1 e0 02             	shl    $0x2,%eax
 8763254:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763258:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876325f:	00 
 8763260:	89 34 24             	mov    %esi,(%esp)
 8763263:	e8 58 aa 91 ff       	call   807dcc0 <memset@plt>
 8763268:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876326d:	89 34 24             	mov    %esi,(%esp)
 8763270:	e8 ab 44 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763275:	8b 45 08             	mov    0x8(%ebp),%eax
 8763278:	8d 65 f4             	lea    -0xc(%ebp),%esp
 876327b:	5b                   	pop    %ebx
 876327c:	5e                   	pop    %esi
 876327d:	5f                   	pop    %edi
 876327e:	5d                   	pop    %ebp
 876327f:	c2 04 00             	ret    $0x4
 8763282:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8763288:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876328f:	00 
 8763290:	89 34 24             	mov    %esi,(%esp)
 8763293:	e8 e8 9d ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 8763298:	84 c0                	test   %al,%al
 876329a:	75 2c                	jne    87632c8 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0xe8>
 876329c:	89 34 24             	mov    %esi,(%esp)
 876329f:	e8 dc 9f ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 87632a4:	84 c0                	test   %al,%al
 87632a6:	0f 84 64 01 00 00    	je     8763410 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x230>
 87632ac:	e8 af c5 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 87632b1:	8b 55 08             	mov    0x8(%ebp),%edx
 87632b4:	89 14 24             	mov    %edx,(%esp)
 87632b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87632bb:	e8 b0 bf ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87632c0:	eb b3                	jmp    8763275 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x95>
 87632c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87632c8:	8b 0e                	mov    (%esi),%ecx
 87632ca:	31 c0                	xor    %eax,%eax
 87632cc:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
 87632d3:	85 d2                	test   %edx,%edx
 87632d5:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87632d8:	74 13                	je     87632ed <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x10d>
 87632da:	c1 e1 04             	shl    $0x4,%ecx
 87632dd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87632e2:	89 0c 24             	mov    %ecx,(%esp)
 87632e5:	e8 a6 44 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87632ea:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87632ed:	c1 e2 02             	shl    $0x2,%edx
 87632f0:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 87632f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 87632fa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87632fd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763304:	00 
 8763305:	89 04 24             	mov    %eax,(%esp)
 8763308:	e8 b3 a9 91 ff       	call   807dcc0 <memset@plt>
 876330d:	8b 06                	mov    (%esi),%eax
 876330f:	8d 8d 6c ff ff ff    	lea    -0x94(%ebp),%ecx
 8763315:	89 0c 24             	mov    %ecx,(%esp)
 8763318:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 876331e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763325:	00 
 8763326:	89 44 24 08          	mov    %eax,0x8(%esp)
 876332a:	e8 c1 bd ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 876332f:	8b 06                	mov    (%esi),%eax
 8763331:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8763334:	89 44 24 14          	mov    %eax,0x14(%esp)
 8763338:	8b 46 04             	mov    0x4(%esi),%eax
 876333b:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 8763341:	89 44 24 10          	mov    %eax,0x10(%esp)
 8763345:	8b 07                	mov    (%edi),%eax
 8763347:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876334b:	8b 47 04             	mov    0x4(%edi),%eax
 876334e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8763352:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763356:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876335c:	89 04 24             	mov    %eax,(%esp)
 876335f:	e8 1c 96 ff ff       	call   875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>
 8763364:	8b 3e                	mov    (%esi),%edi
 8763366:	89 7c 24 10          	mov    %edi,0x10(%esp)
 876336a:	8b 76 04             	mov    0x4(%esi),%esi
 876336d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763371:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8763377:	89 74 24 0c          	mov    %esi,0xc(%esp)
 876337b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876337f:	89 04 24             	mov    %eax,(%esp)
 8763382:	e8 09 9b ff ff       	call   875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>
 8763387:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876338d:	8b 7d 08             	mov    0x8(%ebp),%edi
 8763390:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8763394:	89 3c 24             	mov    %edi,(%esp)
 8763397:	e8 d4 be ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 876339c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 87633a2:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 87633a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87633af:	00 
 87633b0:	c1 e0 02             	shl    $0x2,%eax
 87633b3:	89 34 24             	mov    %esi,(%esp)
 87633b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87633ba:	e8 01 a9 91 ff       	call   807dcc0 <memset@plt>
 87633bf:	89 34 24             	mov    %esi,(%esp)
 87633c2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87633c7:	e8 54 43 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87633cc:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 87633d2:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87633d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87633df:	00 
 87633e0:	89 14 24             	mov    %edx,(%esp)
 87633e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87633e7:	e8 d4 a8 91 ff       	call   807dcc0 <memset@plt>
 87633ec:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 87633f2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87633f7:	89 14 24             	mov    %edx,(%esp)
 87633fa:	e8 21 43 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87633ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8763402:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8763405:	5b                   	pop    %ebx
 8763406:	5e                   	pop    %esi
 8763407:	5f                   	pop    %edi
 8763408:	5d                   	pop    %ebp
 8763409:	c2 04 00             	ret    $0x4
 876340c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8763410:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763417:	00 
 8763418:	89 3c 24             	mov    %edi,(%esp)
 876341b:	e8 60 9c ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 8763420:	84 c0                	test   %al,%al
 8763422:	0f 84 84 fe ff ff    	je     87632ac <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0xcc>
 8763428:	e8 d3 bd ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 876342d:	89 3c 24             	mov    %edi,(%esp)
 8763430:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763434:	e8 e7 9d ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8763439:	85 c0                	test   %eax,%eax
 876343b:	74 53                	je     8763490 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x2b0>
 876343d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8763440:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8763446:	89 04 24             	mov    %eax,(%esp)
 8763449:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876344d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763451:	e8 8a fd ff ff       	call   87631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>
 8763456:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876345c:	83 ec 04             	sub    $0x4,%esp
 876345f:	89 14 24             	mov    %edx,(%esp)
 8763462:	e8 19 9e ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 8763467:	84 c0                	test   %al,%al
 8763469:	74 45                	je     87634b0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x2d0>
 876346b:	e8 f0 c3 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8763470:	8b 7d 08             	mov    0x8(%ebp),%edi
 8763473:	89 3c 24             	mov    %edi,(%esp)
 8763476:	89 44 24 04          	mov    %eax,0x4(%esp)
 876347a:	e8 f1 bd ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 876347f:	8b 75 c0             	mov    -0x40(%ebp),%esi
 8763482:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8763485:	e9 c7 fd ff ff       	jmp    8763251 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x71>
 876348a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8763490:	e8 6b bd ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 8763495:	8b 7d 08             	mov    0x8(%ebp),%edi
 8763498:	89 3c 24             	mov    %edi,(%esp)
 876349b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876349f:	e8 cc bd ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87634a4:	e9 cc fd ff ff       	jmp    8763275 <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x95>
 87634a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87634b0:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 87634b3:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 87634b9:	89 0c 24             	mov    %ecx,(%esp)
 87634bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87634c3:	00 
 87634c4:	e8 07 c0 ff ff       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 87634c9:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87634cf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 87634d2:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 87634d8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87634dc:	89 04 24             	mov    %eax,(%esp)
 87634df:	89 54 24 08          	mov    %edx,0x8(%esp)
 87634e3:	e8 f8 cb ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87634e8:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 87634ee:	8d 55 9c             	lea    -0x64(%ebp),%edx
 87634f1:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 87634f7:	83 ec 04             	sub    $0x4,%esp
 87634fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 87634fe:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763502:	8d b5 7c ff ff ff    	lea    -0x84(%ebp),%esi
 8763508:	89 14 24             	mov    %edx,(%esp)
 876350b:	e8 50 ec ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8763510:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 8763516:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876351c:	83 ec 04             	sub    $0x4,%esp
 876351f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8763523:	89 54 24 04          	mov    %edx,0x4(%esp)
 8763527:	89 34 24             	mov    %esi,(%esp)
 876352a:	e8 81 cc ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 876352f:	83 ec 04             	sub    $0x4,%esp
 8763532:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8763536:	8b 7d 08             	mov    0x8(%ebp),%edi
 8763539:	89 74 24 04          	mov    %esi,0x4(%esp)
 876353d:	89 3c 24             	mov    %edi,(%esp)
 8763540:	e8 0b fc ff ff       	call   8763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>
 8763545:	83 ec 04             	sub    $0x4,%esp
 8763548:	89 34 24             	mov    %esi,(%esp)
 876354b:	e8 20 07 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 8763550:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8763556:	89 14 24             	mov    %edx,(%esp)
 8763559:	e8 12 07 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 876355e:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8763564:	89 04 24             	mov    %eax,(%esp)
 8763567:	e8 04 07 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 876356c:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 8763572:	89 0c 24             	mov    %ecx,(%esp)
 8763575:	e8 f6 06 00 00       	call   8763c70 <_ZN8TaoCrypt7IntegerD1Ev>
 876357a:	e9 00 ff ff ff       	jmp    876347f <_ZNK8TaoCrypt7Integer10InverseModERKS0_+0x29f>
 876357f:	90                   	nop

```

```c
// TaoCrypt::Integer::InverseMod @ 0x87631e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::InverseMod(Integer *param_1)

{
  uint *__s;
  char cVar1;
  int iVar2;
  Integer *pIVar3;
  size_t __n;
  void *__s_00;
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  uint uVar4;
  int local_98;
  uint *local_94;
  Integer local_88 [16];
  Integer local_78 [16];
  Integer local_68 [16];
  Integer local_58 [16];
  int local_48;
  void *local_44;
  int local_38;
  void *local_34;
  int local_28;
  uint *local_24;
  
  if ((*(int *)(in_stack_00000008 + 0xc) == 1) ||
     (iVar2 = Compare(in_stack_00000008,in_stack_0000000c), -1 < iVar2)) {
    Modulo((Integer *)&local_38);
    InverseMod(param_1);
    __s_00 = local_34;
  }
  else {
    uVar4 = 0;
    cVar1 = GetBit(in_stack_0000000c,0);
    if (cVar1 != '\0') {
      local_24 = (uint *)0x0;
      local_28 = *(int *)in_stack_0000000c * 4;
      if (local_28 != 0) {
        local_24 = operator_new__(*(int *)in_stack_0000000c << 4,uVar4 & 0xffffff00);
      }
      __n = local_28 << 2;
      memset(local_24,0,__n);
      Integer((Integer *)&local_98,0,*(uint *)in_stack_0000000c);
      __s = local_24;
      uVar4 = AlmostInverse(local_94,local_24,*(uint **)(in_stack_00000008 + 4),
                            *(uint *)in_stack_00000008,*(uint **)(in_stack_0000000c + 4),
                            *(uint *)in_stack_0000000c);
      DivideByPower2Mod(local_94,local_94,uVar4,*(uint **)(in_stack_0000000c + 4),
                        *(uint *)in_stack_0000000c);
      Integer(param_1,(Integer *)&local_98);
      uVar4 = 0;
      memset(local_94,0,local_98 << 2);
      operator_delete__(local_94,uVar4 & 0xffffff00);
      uVar4 = 0;
      memset(__s,0,__n);
      operator_delete__(__s,uVar4 & 0xffffff00);
      return param_1;
    }
    cVar1 = operator!(in_stack_0000000c);
    if ((cVar1 != '\0') || (cVar1 = GetBit(in_stack_00000008,0), cVar1 == '\0')) {
      pIVar3 = (Integer *)Zero();
      Integer(param_1,pIVar3);
      return param_1;
    }
    pIVar3 = (Integer *)One();
    iVar2 = Compare(in_stack_00000008,pIVar3);
    if (iVar2 == 0) {
      pIVar3 = (Integer *)One();
      Integer(param_1,pIVar3);
      return param_1;
    }
    InverseMod((Integer *)&local_48);
    cVar1 = operator!((Integer *)&local_48);
    if (cVar1 == '\0') {
      Integer(local_78,1);
      Minus(local_58);
      Times(local_68);
      Plus(local_88);
      DividedBy(param_1);
      ~Integer(local_88);
      ~Integer(local_68);
      ~Integer(local_58);
      ~Integer(local_78);
      local_38 = local_48;
      __s_00 = local_44;
    }
    else {
      pIVar3 = (Integer *)Zero();
      Integer(param_1,pIVar3);
      local_38 = local_48;
      __s_00 = local_44;
    }
  }
  uVar4 = 0;
  memset(__s_00,0,local_38 << 2);
  operator_delete__(__s_00,uVar4 & 0xffffff00);
  return param_1;
}

```

---

## IsConvertableToLong

```asm
// === 0875ec80 TaoCrypt::Integer::IsConvertableToLong  [0x0875ec80-0x875ecdf] ===
 875ec80:	55                   	push   %ebp
 875ec81:	89 e5                	mov    %esp,%ebp
 875ec83:	83 ec 18             	sub    $0x18,%esp
 875ec86:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875ec89:	e8 6a 41 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ec8e:	81 c3 0a df c0 00    	add    $0xc0df0a,%ebx
 875ec94:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875ec97:	8b 75 08             	mov    0x8(%ebp),%esi
 875ec9a:	89 34 24             	mov    %esi,(%esp)
 875ec9d:	e8 8e ff ff ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 875eca2:	89 c2                	mov    %eax,%edx
 875eca4:	31 c0                	xor    %eax,%eax
 875eca6:	83 fa 04             	cmp    $0x4,%edx
 875eca9:	77 11                	ja     875ecbc <_ZNK8TaoCrypt7Integer19IsConvertableToLongEv+0x3c>
 875ecab:	8b 56 0c             	mov    0xc(%esi),%edx
 875ecae:	8b 46 04             	mov    0x4(%esi),%eax
 875ecb1:	85 d2                	test   %edx,%edx
 875ecb3:	8b 00                	mov    (%eax),%eax
 875ecb5:	74 11                	je     875ecc8 <_ZNK8TaoCrypt7Integer19IsConvertableToLongEv+0x48>
 875ecb7:	f7 d8                	neg    %eax
 875ecb9:	c1 e8 1f             	shr    $0x1f,%eax
 875ecbc:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875ecbf:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875ecc2:	89 ec                	mov    %ebp,%esp
 875ecc4:	5d                   	pop    %ebp
 875ecc5:	c3                   	ret
 875ecc6:	66 90                	xchg   %ax,%ax
 875ecc8:	f7 d0                	not    %eax
 875ecca:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875eccd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875ecd0:	c1 e8 1f             	shr    $0x1f,%eax
 875ecd3:	89 ec                	mov    %ebp,%esp
 875ecd5:	5d                   	pop    %ebp
 875ecd6:	c3                   	ret
 875ecd7:	89 f6                	mov    %esi,%esi
 875ecd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::IsConvertableToLong @ 0x875ec80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsConvertableToLong() const */

uint __thiscall TaoCrypt::Integer::IsConvertableToLong(Integer *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ByteCount(this);
  uVar2 = 0;
  if (uVar1 < 5) {
    if (*(int *)(this + 0xc) == 0) {
      return ~**(uint **)(this + 4) >> 0x1f;
    }
    uVar2 = -**(uint **)(this + 4) >> 0x1f;
  }
  return uVar2;
}

```

---

## IsSquare

```asm
// === 08763820 TaoCrypt::Integer::IsSquare  [0x08763820-0x8764e3f] ===
 8763820:	55                   	push   %ebp
 8763821:	89 e5                	mov    %esp,%ebp
 8763823:	83 ec 58             	sub    $0x58,%esp
 8763826:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763829:	e8 ca f5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876382e:	81 c3 6a 93 c0 00    	add    $0xc0936a,%ebx
 8763834:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763837:	8b 7d 08             	mov    0x8(%ebp),%edi
 876383a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876383d:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8763840:	89 34 24             	mov    %esi,(%esp)
 8763843:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8763847:	e8 34 fd ff ff       	call   8763580 <_ZNK8TaoCrypt7Integer10SquareRootEv>
 876384c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 876384f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8763852:	83 ec 04             	sub    $0x4,%esp
 8763855:	89 74 24 08          	mov    %esi,0x8(%esp)
 8763859:	89 74 24 04          	mov    %esi,0x4(%esp)
 876385d:	89 04 24             	mov    %eax,(%esp)
 8763860:	e8 fb e8 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8763865:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8763868:	83 ec 04             	sub    $0x4,%esp
 876386b:	89 3c 24             	mov    %edi,(%esp)
 876386e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763872:	e8 a9 99 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8763877:	8b 75 cc             	mov    -0x34(%ebp),%esi
 876387a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763881:	00 
 8763882:	89 34 24             	mov    %esi,(%esp)
 8763885:	89 c7                	mov    %eax,%edi
 8763887:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876388a:	c1 e0 02             	shl    $0x2,%eax
 876388d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763891:	e8 2a a4 91 ff       	call   807dcc0 <memset@plt>
 8763896:	89 34 24             	mov    %esi,(%esp)
 8763899:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876389e:	e8 7d 3e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87638a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87638a6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87638a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87638b0:	00 
 87638b1:	c1 e0 02             	shl    $0x2,%eax
 87638b4:	89 34 24             	mov    %esi,(%esp)
 87638b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87638bb:	e8 00 a4 91 ff       	call   807dcc0 <memset@plt>
 87638c0:	89 34 24             	mov    %esi,(%esp)
 87638c3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87638c8:	e8 53 3e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87638cd:	85 ff                	test   %edi,%edi
 87638cf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87638d2:	0f 94 c0             	sete   %al
 87638d5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87638d8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87638db:	89 ec                	mov    %ebp,%esp
 87638dd:	5d                   	pop    %ebp
 87638de:	c3                   	ret
 87638df:	90                   	nop

087638e0 <_ZNK8TaoCrypt12AbstractRing19MultiplicativeGroupEv>:
 87638e0:	55                   	push   %ebp
 87638e1:	89 e5                	mov    %esp,%ebp
 87638e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87638e6:	5d                   	pop    %ebp
 87638e7:	83 c0 04             	add    $0x4,%eax
 87638ea:	c3                   	ret
 87638eb:	90                   	nop
 87638ec:	90                   	nop
 87638ed:	90                   	nop
 87638ee:	90                   	nop
 87638ef:	90                   	nop

087638f0 <_ZNK8TaoCrypt17ModularArithmetic26IsMontgomeryRepresentationEv>:
 87638f0:	55                   	push   %ebp
 87638f1:	31 c0                	xor    %eax,%eax
 87638f3:	89 e5                	mov    %esp,%ebp
 87638f5:	5d                   	pop    %ebp
 87638f6:	c3                   	ret
 87638f7:	90                   	nop
 87638f8:	90                   	nop
 87638f9:	90                   	nop
 87638fa:	90                   	nop
 87638fb:	90                   	nop
 87638fc:	90                   	nop
 87638fd:	90                   	nop
 87638fe:	90                   	nop
 87638ff:	90                   	nop

08763900 <_ZNK8TaoCrypt17ModularArithmetic6DoubleERKNS_7IntegerE>:
 8763900:	55                   	push   %ebp
 8763901:	89 e5                	mov    %esp,%ebp
 8763903:	83 ec 18             	sub    $0x18,%esp
 8763906:	8b 45 08             	mov    0x8(%ebp),%eax
 8763909:	8b 55 0c             	mov    0xc(%ebp),%edx
 876390c:	8b 08                	mov    (%eax),%ecx
 876390e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8763912:	89 54 24 04          	mov    %edx,0x4(%esp)
 8763916:	89 04 24             	mov    %eax,(%esp)
 8763919:	ff 51 10             	call   *0x10(%ecx)
 876391c:	c9                   	leave
 876391d:	c3                   	ret
 876391e:	90                   	nop
 876391f:	90                   	nop

08763920 <_ZNK8TaoCrypt17ModularArithmetic6DivideERKNS_7IntegerES3_>:
 8763920:	55                   	push   %ebp
 8763921:	89 e5                	mov    %esp,%ebp
 8763923:	83 ec 18             	sub    $0x18,%esp
 8763926:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763929:	8b 75 08             	mov    0x8(%ebp),%esi
 876392c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876392f:	8b 55 10             	mov    0x10(%ebp),%edx
 8763932:	8b 06                	mov    (%esi),%eax
 8763934:	8b 78 40             	mov    0x40(%eax),%edi
 8763937:	89 54 24 04          	mov    %edx,0x4(%esp)
 876393b:	89 34 24             	mov    %esi,(%esp)
 876393e:	ff 50 44             	call   *0x44(%eax)
 8763941:	89 34 24             	mov    %esi,(%esp)
 8763944:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763948:	8b 45 0c             	mov    0xc(%ebp),%eax
 876394b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876394f:	ff d7                	call   *%edi
 8763951:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8763954:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8763957:	89 ec                	mov    %ebp,%esp
 8763959:	5d                   	pop    %ebp
 876395a:	c3                   	ret
 876395b:	90                   	nop
 876395c:	90                   	nop
 876395d:	90                   	nop
 876395e:	90                   	nop
 876395f:	90                   	nop

08763960 <_ZNK8TaoCrypt24MontgomeryRepresentation26IsMontgomeryRepresentationEv>:
 8763960:	55                   	push   %ebp
 8763961:	b8 01 00 00 00       	mov    $0x1,%eax
 8763966:	89 e5                	mov    %esp,%ebp
 8763968:	5d                   	pop    %ebp
 8763969:	c3                   	ret
 876396a:	90                   	nop
 876396b:	90                   	nop
 876396c:	90                   	nop
 876396d:	90                   	nop
 876396e:	90                   	nop
 876396f:	90                   	nop

08763970 <_ZNK8TaoCrypt17ModularArithmetic5EqualERKNS_7IntegerES3_>:
 8763970:	55                   	push   %ebp
 8763971:	89 e5                	mov    %esp,%ebp
 8763973:	53                   	push   %ebx
 8763974:	83 ec 14             	sub    $0x14,%esp
 8763977:	8b 45 10             	mov    0x10(%ebp),%eax
 876397a:	e8 79 f4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876397f:	81 c3 19 92 c0 00    	add    $0xc09219,%ebx
 8763985:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763989:	8b 45 0c             	mov    0xc(%ebp),%eax
 876398c:	89 04 24             	mov    %eax,(%esp)
 876398f:	e8 8c 98 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8763994:	85 c0                	test   %eax,%eax
 8763996:	0f 94 c0             	sete   %al
 8763999:	83 c4 14             	add    $0x14,%esp
 876399c:	5b                   	pop    %ebx
 876399d:	5d                   	pop    %ebp
 876399e:	c3                   	ret
 876399f:	90                   	nop

087639a0 <_ZNK8TaoCrypt17EuclideanDomainOf5EqualERKNS_7IntegerES3_>:
 87639a0:	55                   	push   %ebp
 87639a1:	89 e5                	mov    %esp,%ebp
 87639a3:	53                   	push   %ebx
 87639a4:	83 ec 14             	sub    $0x14,%esp
 87639a7:	8b 45 10             	mov    0x10(%ebp),%eax
 87639aa:	e8 49 f4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87639af:	81 c3 e9 91 c0 00    	add    $0xc091e9,%ebx
 87639b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87639b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87639bc:	89 04 24             	mov    %eax,(%esp)
 87639bf:	e8 5c 98 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 87639c4:	85 c0                	test   %eax,%eax
 87639c6:	0f 94 c0             	sete   %al
 87639c9:	83 c4 14             	add    $0x14,%esp
 87639cc:	5b                   	pop    %ebx
 87639cd:	5d                   	pop    %ebp
 87639ce:	c3                   	ret
 87639cf:	90                   	nop

087639d0 <_ZNK8TaoCrypt17EuclideanDomainOf6IsUnitERKNS_7IntegerE>:
 87639d0:	55                   	push   %ebp
 87639d1:	89 e5                	mov    %esp,%ebp
 87639d3:	53                   	push   %ebx
 87639d4:	e8 1f f4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87639d9:	81 c3 bf 91 c0 00    	add    $0xc091bf,%ebx
 87639df:	83 ec 14             	sub    $0x14,%esp
 87639e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87639e5:	89 04 24             	mov    %eax,(%esp)
 87639e8:	e8 23 9d ff ff       	call   875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>
 87639ed:	83 c4 14             	add    $0x14,%esp
 87639f0:	5b                   	pop    %ebx
 87639f1:	5d                   	pop    %ebp
 87639f2:	c3                   	ret
 87639f3:	90                   	nop
 87639f4:	90                   	nop
 87639f5:	90                   	nop
 87639f6:	90                   	nop
 87639f7:	90                   	nop
 87639f8:	90                   	nop
 87639f9:	90                   	nop
 87639fa:	90                   	nop
 87639fb:	90                   	nop
 87639fc:	90                   	nop
 87639fd:	90                   	nop
 87639fe:	90                   	nop
 87639ff:	90                   	nop

08763a00 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_>:
 8763a00:	55                   	push   %ebp
 8763a01:	89 e5                	mov    %esp,%ebp
 8763a03:	57                   	push   %edi
 8763a04:	56                   	push   %esi
 8763a05:	53                   	push   %ebx
 8763a06:	83 ec 6c             	sub    $0x6c,%esp
 8763a09:	8b 7d 08             	mov    0x8(%ebp),%edi
 8763a0c:	e8 e7 f3 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763a11:	81 c3 87 91 c0 00    	add    $0xc09187,%ebx
 8763a17:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 8763a1b:	0f 84 3f 01 00 00    	je     8763b60 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x160>
 8763a21:	8d 47 04             	lea    0x4(%edi),%eax
 8763a24:	8b 4f 08             	mov    0x8(%edi),%ecx
 8763a27:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8763a2a:	8b 45 10             	mov    0x10(%ebp),%eax
 8763a2d:	8d 77 08             	lea    0x8(%edi),%esi
 8763a30:	8b 57 04             	mov    0x4(%edi),%edx
 8763a33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8763a3a:	00 
 8763a3b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8763a3f:	83 c0 01             	add    $0x1,%eax
 8763a42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763a46:	89 14 24             	mov    %edx,(%esp)
 8763a49:	e8 b2 cc 37 00       	call   8ae0700 <__udivdi3>
 8763a4e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8763a51:	8b 55 0c             	mov    0xc(%ebp),%edx
 8763a54:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8763a5b:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8763a62:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8763a69:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8763a6c:	f7 65 c8             	mull   -0x38(%ebp)
 8763a6f:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8763a76:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8763a79:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8763a7c:	8b 07                	mov    (%edi),%eax
 8763a7e:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8763a81:	31 d2                	xor    %edx,%edx
 8763a83:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8763a86:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8763a89:	2b 45 e0             	sub    -0x20(%ebp),%eax
 8763a8c:	1b 55 e4             	sbb    -0x1c(%ebp),%edx
 8763a8f:	89 07                	mov    %eax,(%edi)
 8763a91:	8b 45 10             	mov    0x10(%ebp),%eax
 8763a94:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763a97:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8763a9a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8763a9d:	f7 65 d0             	mull   -0x30(%ebp)
 8763aa0:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8763aa3:	8b 01                	mov    (%ecx),%eax
 8763aa5:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8763aa8:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8763aab:	31 d2                	xor    %edx,%edx
 8763aad:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8763ab0:	2b 45 c0             	sub    -0x40(%ebp),%eax
 8763ab3:	1b 55 c4             	sbb    -0x3c(%ebp),%edx
 8763ab6:	f7 5d e0             	negl   -0x20(%ebp)
 8763ab9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8763abc:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8763abf:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8763ac2:	2b 45 e0             	sub    -0x20(%ebp),%eax
 8763ac5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8763acc:	1b 55 e4             	sbb    -0x1c(%ebp),%edx
 8763acf:	2b 45 b8             	sub    -0x48(%ebp),%eax
 8763ad2:	1b 55 bc             	sbb    -0x44(%ebp),%edx
 8763ad5:	89 01                	mov    %eax,(%ecx)
 8763ad7:	01 16                	add    %edx,(%esi)
 8763ad9:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763adc:	8b 06                	mov    (%esi),%eax
 8763ade:	85 c0                	test   %eax,%eax
 8763ae0:	75 1e                	jne    8763b00 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x100>
 8763ae2:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8763ae5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8763ae8:	3b 0a                	cmp    (%edx),%ecx
 8763aea:	72 14                	jb     8763b00 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x100>
 8763aec:	74 5a                	je     8763b48 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x148>
 8763aee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8763af1:	83 c4 6c             	add    $0x6c,%esp
 8763af4:	5b                   	pop    %ebx
 8763af5:	5e                   	pop    %esi
 8763af6:	5f                   	pop    %edi
 8763af7:	5d                   	pop    %ebp
 8763af8:	c3                   	ret
 8763af9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8763b00:	8b 07                	mov    (%edi),%eax
 8763b02:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8763b05:	31 d2                	xor    %edx,%edx
 8763b07:	2b 45 c8             	sub    -0x38(%ebp),%eax
 8763b0a:	1b 55 cc             	sbb    -0x34(%ebp),%edx
 8763b0d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8763b14:	89 07                	mov    %eax,(%edi)
 8763b16:	8b 01                	mov    (%ecx),%eax
 8763b18:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763b1b:	31 d2                	xor    %edx,%edx
 8763b1d:	2b 45 d0             	sub    -0x30(%ebp),%eax
 8763b20:	1b 55 d4             	sbb    -0x2c(%ebp),%edx
 8763b23:	f7 5d e0             	negl   -0x20(%ebp)
 8763b26:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8763b29:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8763b2c:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8763b2f:	2b 45 e0             	sub    -0x20(%ebp),%eax
 8763b32:	1b 55 e4             	sbb    -0x1c(%ebp),%edx
 8763b35:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8763b39:	89 01                	mov    %eax,(%ecx)
 8763b3b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763b3e:	01 16                	add    %edx,(%esi)
 8763b40:	eb 9a                	jmp    8763adc <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0xdc>
 8763b42:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8763b48:	8b 07                	mov    (%edi),%eax
 8763b4a:	39 45 0c             	cmp    %eax,0xc(%ebp)
 8763b4d:	76 b3                	jbe    8763b02 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x102>
 8763b4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8763b52:	83 c4 6c             	add    $0x6c,%esp
 8763b55:	5b                   	pop    %ebx
 8763b56:	5e                   	pop    %esi
 8763b57:	5f                   	pop    %edi
 8763b58:	5d                   	pop    %ebp
 8763b59:	c3                   	ret
 8763b5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8763b60:	8b 47 08             	mov    0x8(%edi),%eax
 8763b63:	8d 57 04             	lea    0x4(%edi),%edx
 8763b66:	8d 77 08             	lea    0x8(%edi),%esi
 8763b69:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8763b6c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8763b6f:	e9 dd fe ff ff       	jmp    8763a51 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_+0x51>
 8763b74:	90                   	nop
 8763b75:	90                   	nop
 8763b76:	90                   	nop
 8763b77:	90                   	nop
 8763b78:	90                   	nop
 8763b79:	90                   	nop
 8763b7a:	90                   	nop
 8763b7b:	90                   	nop
 8763b7c:	90                   	nop
 8763b7d:	90                   	nop
 8763b7e:	90                   	nop
 8763b7f:	90                   	nop

08763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>:
 8763b80:	55                   	push   %ebp
 8763b81:	89 e5                	mov    %esp,%ebp
 8763b83:	83 ec 18             	sub    $0x18,%esp
 8763b86:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8763b89:	8b 45 10             	mov    0x10(%ebp),%eax
 8763b8c:	e8 67 f2 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763b91:	81 c3 07 90 c0 00    	add    $0xc09007,%ebx
 8763b97:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8763b9a:	8b 75 0c             	mov    0xc(%ebp),%esi
 8763b9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763ba4:	00 
 8763ba5:	c1 e0 02             	shl    $0x2,%eax
 8763ba8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763bac:	89 34 24             	mov    %esi,(%esp)
 8763baf:	e8 0c a1 91 ff       	call   807dcc0 <memset@plt>
 8763bb4:	89 34 24             	mov    %esi,(%esp)
 8763bb7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763bbc:	e8 5f 3b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763bc1:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8763bc4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8763bc7:	89 ec                	mov    %ebp,%esp
 8763bc9:	5d                   	pop    %ebp
 8763bca:	c3                   	ret
 8763bcb:	90                   	nop
 8763bcc:	90                   	nop
 8763bcd:	90                   	nop
 8763bce:	90                   	nop
 8763bcf:	90                   	nop

08763bd0 <_ZNK8TaoCrypt24MontgomeryRepresentation24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>:
 8763bd0:	55                   	push   %ebp
 8763bd1:	89 e5                	mov    %esp,%ebp
 8763bd3:	53                   	push   %ebx
 8763bd4:	83 ec 24             	sub    $0x24,%esp
 8763bd7:	8b 45 18             	mov    0x18(%ebp),%eax
 8763bda:	e8 19 f2 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763bdf:	81 c3 b9 8f c0 00    	add    $0xc08fb9,%ebx
 8763be5:	89 44 24 10          	mov    %eax,0x10(%esp)
 8763be9:	8b 45 14             	mov    0x14(%ebp),%eax
 8763bec:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8763bf0:	8b 45 10             	mov    0x10(%ebp),%eax
 8763bf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8763bfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8763c01:	89 04 24             	mov    %eax,(%esp)
 8763c04:	e8 87 18 04 00       	call   87a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>
 8763c09:	83 c4 24             	add    $0x24,%esp
 8763c0c:	5b                   	pop    %ebx
 8763c0d:	5d                   	pop    %ebp
 8763c0e:	c3                   	ret
 8763c0f:	90                   	nop

08763c10 <_ZNK8TaoCrypt24MontgomeryRepresentation19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>:
 8763c10:	55                   	push   %ebp
 8763c11:	89 e5                	mov    %esp,%ebp
 8763c13:	83 ec 28             	sub    $0x28,%esp
 8763c16:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8763c19:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8763c1c:	e8 d7 f1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763c21:	81 c3 77 8f c0 00    	add    $0xc08f77,%ebx
 8763c27:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8763c2a:	8b 75 08             	mov    0x8(%ebp),%esi
 8763c2d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8763c31:	8b 45 18             	mov    0x18(%ebp),%eax
 8763c34:	89 34 24             	mov    %esi,(%esp)
 8763c37:	89 44 24 10          	mov    %eax,0x10(%esp)
 8763c3b:	8b 45 14             	mov    0x14(%ebp),%eax
 8763c3e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8763c42:	8b 45 10             	mov    0x10(%ebp),%eax
 8763c45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763c49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8763c4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763c50:	e8 eb 0b 04 00       	call   87a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>
 8763c55:	89 f0                	mov    %esi,%eax
 8763c57:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8763c5a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8763c5d:	83 ec 04             	sub    $0x4,%esp
 8763c60:	89 ec                	mov    %ebp,%esp
 8763c62:	5d                   	pop    %ebp
 8763c63:	c2 04 00             	ret    $0x4
 8763c66:	90                   	nop
 8763c67:	90                   	nop
 8763c68:	90                   	nop
 8763c69:	90                   	nop
 8763c6a:	90                   	nop
 8763c6b:	90                   	nop
 8763c6c:	90                   	nop
 8763c6d:	90                   	nop
 8763c6e:	90                   	nop
 8763c6f:	90                   	nop

08763c70 <_ZN8TaoCrypt7IntegerD1Ev>:
 8763c70:	55                   	push   %ebp
 8763c71:	89 e5                	mov    %esp,%ebp
 8763c73:	83 ec 18             	sub    $0x18,%esp
 8763c76:	8b 45 08             	mov    0x8(%ebp),%eax
 8763c79:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8763c7c:	e8 77 f1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763c81:	81 c3 17 8f c0 00    	add    $0xc08f17,%ebx
 8763c87:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8763c8a:	8b 70 04             	mov    0x4(%eax),%esi
 8763c8d:	8b 00                	mov    (%eax),%eax
 8763c8f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763c96:	00 
 8763c97:	89 34 24             	mov    %esi,(%esp)
 8763c9a:	c1 e0 02             	shl    $0x2,%eax
 8763c9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763ca1:	e8 1a a0 91 ff       	call   807dcc0 <memset@plt>
 8763ca6:	89 34 24             	mov    %esi,(%esp)
 8763ca9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763cae:	e8 6d 3a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763cb3:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8763cb6:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8763cb9:	89 ec                	mov    %ebp,%esp
 8763cbb:	5d                   	pop    %ebp
 8763cbc:	c3                   	ret
 8763cbd:	90                   	nop
 8763cbe:	90                   	nop
 8763cbf:	90                   	nop

08763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>:
 8763cc0:	55                   	push   %ebp
 8763cc1:	89 e5                	mov    %esp,%ebp
 8763cc3:	83 ec 38             	sub    $0x38,%esp
 8763cc6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763cc9:	8b 55 10             	mov    0x10(%ebp),%edx
 8763ccc:	8b 7d 14             	mov    0x14(%ebp),%edi
 8763ccf:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763cd2:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 8763cd6:	e8 1d f1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763cdb:	81 c3 bd 8e c0 00    	add    $0xc08ebd,%ebx
 8763ce1:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763ce4:	8b 75 0c             	mov    0xc(%ebp),%esi
 8763ce7:	39 fa                	cmp    %edi,%edx
 8763ce9:	74 58                	je     8763d43 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0x83>
 8763ceb:	84 c0                	test   %al,%al
 8763ced:	0f 84 85 00 00 00    	je     8763d78 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0xb8>
 8763cf3:	31 c9                	xor    %ecx,%ecx
 8763cf5:	85 ff                	test   %edi,%edi
 8763cf7:	75 5f                	jne    8763d58 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0x98>
 8763cf9:	39 d7                	cmp    %edx,%edi
 8763cfb:	0f 47 fa             	cmova  %edx,%edi
 8763cfe:	c1 e7 02             	shl    $0x2,%edi
 8763d01:	89 0c 24             	mov    %ecx,(%esp)
 8763d04:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8763d07:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763d0b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763d0e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8763d12:	e8 89 9b 91 ff       	call   807d8a0 <memcpy@plt>
 8763d17:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8763d1a:	89 34 24             	mov    %esi,(%esp)
 8763d1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763d24:	00 
 8763d25:	c1 e2 02             	shl    $0x2,%edx
 8763d28:	89 54 24 08          	mov    %edx,0x8(%esp)
 8763d2c:	e8 8f 9f 91 ff       	call   807dcc0 <memset@plt>
 8763d31:	89 34 24             	mov    %esi,(%esp)
 8763d34:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763d39:	e8 e2 39 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763d3e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8763d41:	89 ce                	mov    %ecx,%esi
 8763d43:	89 f0                	mov    %esi,%eax
 8763d45:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8763d48:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8763d4b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8763d4e:	89 ec                	mov    %ebp,%esp
 8763d50:	5d                   	pop    %ebp
 8763d51:	c3                   	ret
 8763d52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8763d58:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 8763d5f:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8763d62:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763d67:	89 04 24             	mov    %eax,(%esp)
 8763d6a:	e8 21 3a 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8763d6f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8763d72:	89 c1                	mov    %eax,%ecx
 8763d74:	eb 83                	jmp    8763cf9 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0x39>
 8763d76:	66 90                	xchg   %ax,%ax
 8763d78:	8b 45 08             	mov    0x8(%ebp),%eax
 8763d7b:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763d7f:	31 f6                	xor    %esi,%esi
 8763d81:	89 54 24 08          	mov    %edx,0x8(%esp)
 8763d85:	89 04 24             	mov    %eax,(%esp)
 8763d88:	e8 f3 fd ff ff       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 8763d8d:	85 ff                	test   %edi,%edi
 8763d8f:	74 b2                	je     8763d43 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0x83>
 8763d91:	c1 e7 02             	shl    $0x2,%edi
 8763d94:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763d99:	89 3c 24             	mov    %edi,(%esp)
 8763d9c:	e8 ef 39 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8763da1:	89 c6                	mov    %eax,%esi
 8763da3:	eb 9e                	jmp    8763d43 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb+0x83>
 8763da5:	90                   	nop
 8763da6:	90                   	nop
 8763da7:	90                   	nop
 8763da8:	90                   	nop
 8763da9:	90                   	nop
 8763daa:	90                   	nop
 8763dab:	90                   	nop
 8763dac:	90                   	nop
 8763dad:	90                   	nop
 8763dae:	90                   	nop
 8763daf:	90                   	nop

08763db0 <_ZN8TaoCrypt17ModularArithmeticD1Ev>:
 8763db0:	55                   	push   %ebp
 8763db1:	89 e5                	mov    %esp,%ebp
 8763db3:	83 ec 28             	sub    $0x28,%esp
 8763db6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763db9:	e8 3a f0 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763dbe:	81 c3 da 8d c0 00    	add    $0xc08dda,%ebx
 8763dc4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763dc7:	8b 75 08             	mov    0x8(%ebp),%esi
 8763dca:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763dcd:	8b 7e 30             	mov    0x30(%esi),%edi
 8763dd0:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 8763dd6:	83 c0 08             	add    $0x8,%eax
 8763dd9:	89 06                	mov    %eax,(%esi)
 8763ddb:	8b 46 2c             	mov    0x2c(%esi),%eax
 8763dde:	89 3c 24             	mov    %edi,(%esp)
 8763de1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763de8:	00 
 8763de9:	c1 e0 02             	shl    $0x2,%eax
 8763dec:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763df0:	e8 cb 9e 91 ff       	call   807dcc0 <memset@plt>
 8763df5:	89 3c 24             	mov    %edi,(%esp)
 8763df8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763dfd:	e8 1e 39 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763e02:	8b 46 1c             	mov    0x1c(%esi),%eax
 8763e05:	8b 7e 20             	mov    0x20(%esi),%edi
 8763e08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763e0f:	00 
 8763e10:	c1 e0 02             	shl    $0x2,%eax
 8763e13:	89 3c 24             	mov    %edi,(%esp)
 8763e16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763e1a:	e8 a1 9e 91 ff       	call   807dcc0 <memset@plt>
 8763e1f:	89 3c 24             	mov    %edi,(%esp)
 8763e22:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763e27:	e8 f4 38 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763e2c:	8b 46 0c             	mov    0xc(%esi),%eax
 8763e2f:	8b 7e 10             	mov    0x10(%esi),%edi
 8763e32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763e39:	00 
 8763e3a:	c1 e0 02             	shl    $0x2,%eax
 8763e3d:	89 3c 24             	mov    %edi,(%esp)
 8763e40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763e44:	e8 77 9e 91 ff       	call   807dcc0 <memset@plt>
 8763e49:	89 3c 24             	mov    %edi,(%esp)
 8763e4c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763e51:	e8 ca 38 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763e56:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 8763e5c:	83 c0 08             	add    $0x8,%eax
 8763e5f:	89 46 04             	mov    %eax,0x4(%esi)
 8763e62:	89 06                	mov    %eax,(%esi)
 8763e64:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8763e67:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8763e6a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8763e6d:	89 ec                	mov    %ebp,%esp
 8763e6f:	5d                   	pop    %ebp
 8763e70:	c3                   	ret
 8763e71:	90                   	nop
 8763e72:	90                   	nop
 8763e73:	90                   	nop
 8763e74:	90                   	nop
 8763e75:	90                   	nop
 8763e76:	90                   	nop
 8763e77:	90                   	nop
 8763e78:	90                   	nop
 8763e79:	90                   	nop
 8763e7a:	90                   	nop
 8763e7b:	90                   	nop
 8763e7c:	90                   	nop
 8763e7d:	90                   	nop
 8763e7e:	90                   	nop
 8763e7f:	90                   	nop

08763e80 <_ZN8TaoCrypt17EuclideanDomainOfD1Ev>:
 8763e80:	55                   	push   %ebp
 8763e81:	89 e5                	mov    %esp,%ebp
 8763e83:	83 ec 28             	sub    $0x28,%esp
 8763e86:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763e89:	e8 6a ef fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763e8e:	81 c3 0a 8d c0 00    	add    $0xc08d0a,%ebx
 8763e94:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763e97:	8b 75 08             	mov    0x8(%ebp),%esi
 8763e9a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763e9d:	8b 7e 20             	mov    0x20(%esi),%edi
 8763ea0:	8b 83 f4 fa ff ff    	mov    -0x50c(%ebx),%eax
 8763ea6:	83 c0 08             	add    $0x8,%eax
 8763ea9:	89 06                	mov    %eax,(%esi)
 8763eab:	8b 46 1c             	mov    0x1c(%esi),%eax
 8763eae:	89 3c 24             	mov    %edi,(%esp)
 8763eb1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763eb8:	00 
 8763eb9:	c1 e0 02             	shl    $0x2,%eax
 8763ebc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763ec0:	e8 fb 9d 91 ff       	call   807dcc0 <memset@plt>
 8763ec5:	89 3c 24             	mov    %edi,(%esp)
 8763ec8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763ecd:	e8 4e 38 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763ed2:	8b 83 68 fc ff ff    	mov    -0x398(%ebx),%eax
 8763ed8:	8b 7e 10             	mov    0x10(%esi),%edi
 8763edb:	83 c0 08             	add    $0x8,%eax
 8763ede:	89 06                	mov    %eax,(%esi)
 8763ee0:	8b 46 0c             	mov    0xc(%esi),%eax
 8763ee3:	89 3c 24             	mov    %edi,(%esp)
 8763ee6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763eed:	00 
 8763eee:	c1 e0 02             	shl    $0x2,%eax
 8763ef1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763ef5:	e8 c6 9d 91 ff       	call   807dcc0 <memset@plt>
 8763efa:	89 3c 24             	mov    %edi,(%esp)
 8763efd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763f02:	e8 19 38 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763f07:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 8763f0d:	83 c0 08             	add    $0x8,%eax
 8763f10:	89 46 04             	mov    %eax,0x4(%esi)
 8763f13:	89 06                	mov    %eax,(%esi)
 8763f15:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8763f18:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8763f1b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8763f1e:	89 ec                	mov    %ebp,%esp
 8763f20:	5d                   	pop    %ebp
 8763f21:	c3                   	ret
 8763f22:	90                   	nop
 8763f23:	90                   	nop
 8763f24:	90                   	nop
 8763f25:	90                   	nop
 8763f26:	90                   	nop
 8763f27:	90                   	nop
 8763f28:	90                   	nop
 8763f29:	90                   	nop
 8763f2a:	90                   	nop
 8763f2b:	90                   	nop
 8763f2c:	90                   	nop
 8763f2d:	90                   	nop
 8763f2e:	90                   	nop
 8763f2f:	90                   	nop

08763f30 <_ZN8TaoCrypt17EuclideanDomainOfD0Ev>:
 8763f30:	55                   	push   %ebp
 8763f31:	89 e5                	mov    %esp,%ebp
 8763f33:	83 ec 28             	sub    $0x28,%esp
 8763f36:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763f39:	e8 ba ee fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763f3e:	81 c3 5a 8c c0 00    	add    $0xc08c5a,%ebx
 8763f44:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763f47:	8b 75 08             	mov    0x8(%ebp),%esi
 8763f4a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763f4d:	8b 7e 20             	mov    0x20(%esi),%edi
 8763f50:	8b 83 f4 fa ff ff    	mov    -0x50c(%ebx),%eax
 8763f56:	83 c0 08             	add    $0x8,%eax
 8763f59:	89 06                	mov    %eax,(%esi)
 8763f5b:	8b 46 1c             	mov    0x1c(%esi),%eax
 8763f5e:	89 3c 24             	mov    %edi,(%esp)
 8763f61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763f68:	00 
 8763f69:	c1 e0 02             	shl    $0x2,%eax
 8763f6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763f70:	e8 4b 9d 91 ff       	call   807dcc0 <memset@plt>
 8763f75:	89 3c 24             	mov    %edi,(%esp)
 8763f78:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763f7d:	e8 9e 37 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763f82:	8b 83 68 fc ff ff    	mov    -0x398(%ebx),%eax
 8763f88:	8b 7e 10             	mov    0x10(%esi),%edi
 8763f8b:	83 c0 08             	add    $0x8,%eax
 8763f8e:	89 06                	mov    %eax,(%esi)
 8763f90:	8b 46 0c             	mov    0xc(%esi),%eax
 8763f93:	89 3c 24             	mov    %edi,(%esp)
 8763f96:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763f9d:	00 
 8763f9e:	c1 e0 02             	shl    $0x2,%eax
 8763fa1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763fa5:	e8 16 9d 91 ff       	call   807dcc0 <memset@plt>
 8763faa:	89 3c 24             	mov    %edi,(%esp)
 8763fad:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763fb2:	e8 69 37 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763fb7:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 8763fbd:	83 c0 08             	add    $0x8,%eax
 8763fc0:	89 46 04             	mov    %eax,0x4(%esi)
 8763fc3:	89 06                	mov    %eax,(%esi)
 8763fc5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8763fc8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8763fcb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8763fce:	89 ec                	mov    %ebp,%esp
 8763fd0:	5d                   	pop    %ebp
 8763fd1:	c3                   	ret
 8763fd2:	90                   	nop
 8763fd3:	90                   	nop
 8763fd4:	90                   	nop
 8763fd5:	90                   	nop
 8763fd6:	90                   	nop
 8763fd7:	90                   	nop
 8763fd8:	90                   	nop
 8763fd9:	90                   	nop
 8763fda:	90                   	nop
 8763fdb:	90                   	nop
 8763fdc:	90                   	nop
 8763fdd:	90                   	nop
 8763fde:	90                   	nop
 8763fdf:	90                   	nop

08763fe0 <_ZN8TaoCrypt17ModularArithmeticD0Ev>:
 8763fe0:	55                   	push   %ebp
 8763fe1:	89 e5                	mov    %esp,%ebp
 8763fe3:	83 ec 28             	sub    $0x28,%esp
 8763fe6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8763fe9:	e8 0a ee fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763fee:	81 c3 aa 8b c0 00    	add    $0xc08baa,%ebx
 8763ff4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8763ff7:	8b 75 08             	mov    0x8(%ebp),%esi
 8763ffa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8763ffd:	8b 7e 30             	mov    0x30(%esi),%edi
 8764000:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 8764006:	83 c0 08             	add    $0x8,%eax
 8764009:	89 06                	mov    %eax,(%esi)
 876400b:	8b 46 2c             	mov    0x2c(%esi),%eax
 876400e:	89 3c 24             	mov    %edi,(%esp)
 8764011:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764018:	00 
 8764019:	c1 e0 02             	shl    $0x2,%eax
 876401c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764020:	e8 9b 9c 91 ff       	call   807dcc0 <memset@plt>
 8764025:	89 3c 24             	mov    %edi,(%esp)
 8764028:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876402d:	e8 ee 36 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764032:	8b 46 1c             	mov    0x1c(%esi),%eax
 8764035:	8b 7e 20             	mov    0x20(%esi),%edi
 8764038:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876403f:	00 
 8764040:	c1 e0 02             	shl    $0x2,%eax
 8764043:	89 3c 24             	mov    %edi,(%esp)
 8764046:	89 44 24 08          	mov    %eax,0x8(%esp)
 876404a:	e8 71 9c 91 ff       	call   807dcc0 <memset@plt>
 876404f:	89 3c 24             	mov    %edi,(%esp)
 8764052:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764057:	e8 c4 36 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876405c:	8b 46 0c             	mov    0xc(%esi),%eax
 876405f:	8b 7e 10             	mov    0x10(%esi),%edi
 8764062:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764069:	00 
 876406a:	c1 e0 02             	shl    $0x2,%eax
 876406d:	89 3c 24             	mov    %edi,(%esp)
 8764070:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764074:	e8 47 9c 91 ff       	call   807dcc0 <memset@plt>
 8764079:	89 3c 24             	mov    %edi,(%esp)
 876407c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764081:	e8 9a 36 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764086:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 876408c:	83 c0 08             	add    $0x8,%eax
 876408f:	89 46 04             	mov    %eax,0x4(%esi)
 8764092:	89 06                	mov    %eax,(%esi)
 8764094:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764097:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876409a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876409d:	89 ec                	mov    %ebp,%esp
 876409f:	5d                   	pop    %ebp
 87640a0:	c3                   	ret
 87640a1:	90                   	nop
 87640a2:	90                   	nop
 87640a3:	90                   	nop
 87640a4:	90                   	nop
 87640a5:	90                   	nop
 87640a6:	90                   	nop
 87640a7:	90                   	nop
 87640a8:	90                   	nop
 87640a9:	90                   	nop
 87640aa:	90                   	nop
 87640ab:	90                   	nop
 87640ac:	90                   	nop
 87640ad:	90                   	nop
 87640ae:	90                   	nop
 87640af:	90                   	nop

087640b0 <_ZN8TaoCrypt24MontgomeryRepresentationD1Ev>:
 87640b0:	55                   	push   %ebp
 87640b1:	89 e5                	mov    %esp,%ebp
 87640b3:	57                   	push   %edi
 87640b4:	56                   	push   %esi
 87640b5:	53                   	push   %ebx
 87640b6:	e8 3d ed fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87640bb:	81 c3 dd 8a c0 00    	add    $0xc08add,%ebx
 87640c1:	83 ec 1c             	sub    $0x1c,%esp
 87640c4:	8b 75 08             	mov    0x8(%ebp),%esi
 87640c7:	8b 7e 50             	mov    0x50(%esi),%edi
 87640ca:	8b 83 d4 fa ff ff    	mov    -0x52c(%ebx),%eax
 87640d0:	83 c0 08             	add    $0x8,%eax
 87640d3:	89 06                	mov    %eax,(%esi)
 87640d5:	8b 46 4c             	mov    0x4c(%esi),%eax
 87640d8:	89 3c 24             	mov    %edi,(%esp)
 87640db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87640e2:	00 
 87640e3:	c1 e0 02             	shl    $0x2,%eax
 87640e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87640ea:	e8 d1 9b 91 ff       	call   807dcc0 <memset@plt>
 87640ef:	89 3c 24             	mov    %edi,(%esp)
 87640f2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87640f7:	e8 24 36 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87640fc:	8b 46 3c             	mov    0x3c(%esi),%eax
 87640ff:	8b 7e 40             	mov    0x40(%esi),%edi
 8764102:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764109:	00 
 876410a:	c1 e0 02             	shl    $0x2,%eax
 876410d:	89 3c 24             	mov    %edi,(%esp)
 8764110:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764114:	e8 a7 9b 91 ff       	call   807dcc0 <memset@plt>
 8764119:	89 3c 24             	mov    %edi,(%esp)
 876411c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764121:	e8 fa 35 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764126:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 876412c:	8b 7e 30             	mov    0x30(%esi),%edi
 876412f:	83 c0 08             	add    $0x8,%eax
 8764132:	89 06                	mov    %eax,(%esi)
 8764134:	8b 46 2c             	mov    0x2c(%esi),%eax
 8764137:	89 3c 24             	mov    %edi,(%esp)
 876413a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764141:	00 
 8764142:	c1 e0 02             	shl    $0x2,%eax
 8764145:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764149:	e8 72 9b 91 ff       	call   807dcc0 <memset@plt>
 876414e:	89 3c 24             	mov    %edi,(%esp)
 8764151:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764156:	e8 c5 35 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876415b:	8b 46 1c             	mov    0x1c(%esi),%eax
 876415e:	8b 7e 20             	mov    0x20(%esi),%edi
 8764161:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764168:	00 
 8764169:	c1 e0 02             	shl    $0x2,%eax
 876416c:	89 3c 24             	mov    %edi,(%esp)
 876416f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764173:	e8 48 9b 91 ff       	call   807dcc0 <memset@plt>
 8764178:	89 3c 24             	mov    %edi,(%esp)
 876417b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764180:	e8 9b 35 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764185:	8b 46 0c             	mov    0xc(%esi),%eax
 8764188:	8b 7e 10             	mov    0x10(%esi),%edi
 876418b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764192:	00 
 8764193:	c1 e0 02             	shl    $0x2,%eax
 8764196:	89 3c 24             	mov    %edi,(%esp)
 8764199:	89 44 24 08          	mov    %eax,0x8(%esp)
 876419d:	e8 1e 9b 91 ff       	call   807dcc0 <memset@plt>
 87641a2:	89 3c 24             	mov    %edi,(%esp)
 87641a5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87641aa:	e8 71 35 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87641af:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 87641b5:	83 c0 08             	add    $0x8,%eax
 87641b8:	89 46 04             	mov    %eax,0x4(%esi)
 87641bb:	89 06                	mov    %eax,(%esi)
 87641bd:	83 c4 1c             	add    $0x1c,%esp
 87641c0:	5b                   	pop    %ebx
 87641c1:	5e                   	pop    %esi
 87641c2:	5f                   	pop    %edi
 87641c3:	5d                   	pop    %ebp
 87641c4:	c3                   	ret
 87641c5:	90                   	nop
 87641c6:	90                   	nop
 87641c7:	90                   	nop
 87641c8:	90                   	nop
 87641c9:	90                   	nop
 87641ca:	90                   	nop
 87641cb:	90                   	nop
 87641cc:	90                   	nop
 87641cd:	90                   	nop
 87641ce:	90                   	nop
 87641cf:	90                   	nop

087641d0 <_ZNK8TaoCrypt17ModularArithmetic22MultiplicativeIdentityEv>:
 87641d0:	55                   	push   %ebp
 87641d1:	89 e5                	mov    %esp,%ebp
 87641d3:	53                   	push   %ebx
 87641d4:	e8 1f ec fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87641d9:	81 c3 bf 89 c0 00    	add    $0xc089bf,%ebx
 87641df:	83 ec 04             	sub    $0x4,%esp
 87641e2:	e8 19 b0 ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 87641e7:	83 c4 04             	add    $0x4,%esp
 87641ea:	5b                   	pop    %ebx
 87641eb:	5d                   	pop    %ebp
 87641ec:	c3                   	ret
 87641ed:	90                   	nop
 87641ee:	90                   	nop
 87641ef:	90                   	nop

087641f0 <_ZNK8TaoCrypt17EuclideanDomainOf22MultiplicativeIdentityEv>:
 87641f0:	55                   	push   %ebp
 87641f1:	89 e5                	mov    %esp,%ebp
 87641f3:	53                   	push   %ebx
 87641f4:	e8 ff eb fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87641f9:	81 c3 9f 89 c0 00    	add    $0xc0899f,%ebx
 87641ff:	83 ec 04             	sub    $0x4,%esp
 8764202:	e8 f9 af ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 8764207:	83 c4 04             	add    $0x4,%esp
 876420a:	5b                   	pop    %ebx
 876420b:	5d                   	pop    %ebp
 876420c:	c3                   	ret
 876420d:	90                   	nop
 876420e:	90                   	nop
 876420f:	90                   	nop

08764210 <_ZNK8TaoCrypt17ModularArithmetic10ConvertOutERKNS_7IntegerE>:
 8764210:	55                   	push   %ebp
 8764211:	89 e5                	mov    %esp,%ebp
 8764213:	83 ec 18             	sub    $0x18,%esp
 8764216:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8764219:	8b 45 10             	mov    0x10(%ebp),%eax
 876421c:	e8 d7 eb fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764221:	81 c3 77 89 c0 00    	add    $0xc08977,%ebx
 8764227:	89 75 fc             	mov    %esi,-0x4(%ebp)
 876422a:	8b 75 08             	mov    0x8(%ebp),%esi
 876422d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764231:	89 34 24             	mov    %esi,(%esp)
 8764234:	e8 37 b0 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8764239:	89 f0                	mov    %esi,%eax
 876423b:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 876423e:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8764241:	89 ec                	mov    %ebp,%esp
 8764243:	5d                   	pop    %ebp
 8764244:	c2 04 00             	ret    $0x4
 8764247:	90                   	nop
 8764248:	90                   	nop
 8764249:	90                   	nop
 876424a:	90                   	nop
 876424b:	90                   	nop
 876424c:	90                   	nop
 876424d:	90                   	nop
 876424e:	90                   	nop
 876424f:	90                   	nop

08764250 <_ZNK8TaoCrypt17ModularArithmetic6IsUnitERKNS_7IntegerE>:
 8764250:	55                   	push   %ebp
 8764251:	89 e5                	mov    %esp,%ebp
 8764253:	83 ec 38             	sub    $0x38,%esp
 8764256:	8b 45 08             	mov    0x8(%ebp),%eax
 8764259:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876425c:	e8 97 eb fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764261:	81 c3 37 89 c0 00    	add    $0xc08937,%ebx
 8764267:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876426a:	8d 75 d8             	lea    -0x28(%ebp),%esi
 876426d:	83 c0 0c             	add    $0xc,%eax
 8764270:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764274:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764277:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876427a:	89 34 24             	mov    %esi,(%esp)
 876427d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764281:	e8 da b4 ff ff       	call   875f760 <_ZN8TaoCrypt7Integer3GcdERKS0_S2_>
 8764286:	83 ec 04             	sub    $0x4,%esp
 8764289:	89 34 24             	mov    %esi,(%esp)
 876428c:	e8 7f 94 ff ff       	call   875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>
 8764291:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764294:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876429b:	00 
 876429c:	89 34 24             	mov    %esi,(%esp)
 876429f:	89 c7                	mov    %eax,%edi
 87642a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87642a4:	c1 e0 02             	shl    $0x2,%eax
 87642a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87642ab:	e8 10 9a 91 ff       	call   807dcc0 <memset@plt>
 87642b0:	89 34 24             	mov    %esi,(%esp)
 87642b3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87642b8:	e8 63 34 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87642bd:	89 f8                	mov    %edi,%eax
 87642bf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87642c2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87642c5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87642c8:	89 ec                	mov    %ebp,%esp
 87642ca:	5d                   	pop    %ebp
 87642cb:	c3                   	ret
 87642cc:	90                   	nop
 87642cd:	90                   	nop
 87642ce:	90                   	nop
 87642cf:	90                   	nop

087642d0 <_ZNK8TaoCrypt17ModularArithmetic8IdentityEv>:
 87642d0:	55                   	push   %ebp
 87642d1:	89 e5                	mov    %esp,%ebp
 87642d3:	53                   	push   %ebx
 87642d4:	e8 1f eb fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87642d9:	81 c3 bf 88 c0 00    	add    $0xc088bf,%ebx
 87642df:	83 ec 04             	sub    $0x4,%esp
 87642e2:	e8 79 b5 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 87642e7:	83 c4 04             	add    $0x4,%esp
 87642ea:	5b                   	pop    %ebx
 87642eb:	5d                   	pop    %ebp
 87642ec:	c3                   	ret
 87642ed:	90                   	nop
 87642ee:	90                   	nop
 87642ef:	90                   	nop

087642f0 <_ZNK8TaoCrypt17EuclideanDomainOf8IdentityEv>:
 87642f0:	55                   	push   %ebp
 87642f1:	89 e5                	mov    %esp,%ebp
 87642f3:	53                   	push   %ebx
 87642f4:	e8 ff ea fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87642f9:	81 c3 9f 88 c0 00    	add    $0xc0889f,%ebx
 87642ff:	83 ec 04             	sub    $0x4,%esp
 8764302:	e8 59 b5 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8764307:	83 c4 04             	add    $0x4,%esp
 876430a:	5b                   	pop    %ebx
 876430b:	5d                   	pop    %ebp
 876430c:	c3                   	ret
 876430d:	90                   	nop
 876430e:	90                   	nop
 876430f:	90                   	nop

08764310 <_ZNK8TaoCrypt17EuclideanDomainOf6ReduceERNS_7IntegerERKS1_>:
 8764310:	55                   	push   %ebp
 8764311:	89 e5                	mov    %esp,%ebp
 8764313:	53                   	push   %ebx
 8764314:	83 ec 14             	sub    $0x14,%esp
 8764317:	8b 45 10             	mov    0x10(%ebp),%eax
 876431a:	e8 d9 ea fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876431f:	81 c3 79 88 c0 00    	add    $0xc08879,%ebx
 8764325:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764329:	8b 45 0c             	mov    0xc(%ebp),%eax
 876432c:	89 04 24             	mov    %eax,(%esp)
 876432f:	e8 8c b9 ff ff       	call   875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>
 8764334:	83 c4 14             	add    $0x14,%esp
 8764337:	5b                   	pop    %ebx
 8764338:	5d                   	pop    %ebp
 8764339:	c3                   	ret
 876433a:	90                   	nop
 876433b:	90                   	nop
 876433c:	90                   	nop
 876433d:	90                   	nop
 876433e:	90                   	nop
 876433f:	90                   	nop

08764340 <_ZNK8TaoCrypt17EuclideanDomainOf10AccumulateERNS_7IntegerERKS1_>:
 8764340:	55                   	push   %ebp
 8764341:	89 e5                	mov    %esp,%ebp
 8764343:	53                   	push   %ebx
 8764344:	83 ec 14             	sub    $0x14,%esp
 8764347:	8b 45 10             	mov    0x10(%ebp),%eax
 876434a:	e8 a9 ea fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876434f:	81 c3 49 88 c0 00    	add    $0xc08849,%ebx
 8764355:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764359:	8b 45 0c             	mov    0xc(%ebp),%eax
 876435c:	89 04 24             	mov    %eax,(%esp)
 876435f:	e8 7c ba ff ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 8764364:	83 c4 14             	add    $0x14,%esp
 8764367:	5b                   	pop    %ebx
 8764368:	5d                   	pop    %ebp
 8764369:	c3                   	ret
 876436a:	90                   	nop
 876436b:	90                   	nop
 876436c:	90                   	nop
 876436d:	90                   	nop
 876436e:	90                   	nop
 876436f:	90                   	nop

08764370 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj>:
 8764370:	55                   	push   %ebp
 8764371:	89 e5                	mov    %esp,%ebp
 8764373:	83 ec 38             	sub    $0x38,%esp
 8764376:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8764379:	8b 75 08             	mov    0x8(%ebp),%esi
 876437c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876437f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764382:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8764385:	e8 6e ea fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876438a:	81 c3 0e 88 c0 00    	add    $0xc0880e,%ebx
 8764390:	8b 16                	mov    (%esi),%edx
 8764392:	8b 46 04             	mov    0x4(%esi),%eax
 8764395:	39 d7                	cmp    %edx,%edi
 8764397:	74 67                	je     8764400 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj+0x90>
 8764399:	89 44 24 04          	mov    %eax,0x4(%esp)
 876439d:	8d 46 08             	lea    0x8(%esi),%eax
 87643a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 87643a4:	89 04 24             	mov    %eax,(%esp)
 87643a7:	e8 d4 f7 ff ff       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 87643ac:	31 d2                	xor    %edx,%edx
 87643ae:	31 c0                	xor    %eax,%eax
 87643b0:	85 ff                	test   %edi,%edi
 87643b2:	75 2c                	jne    87643e0 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj+0x70>
 87643b4:	89 3e                	mov    %edi,(%esi)
 87643b6:	89 46 04             	mov    %eax,0x4(%esi)
 87643b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 87643bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87643c4:	00 
 87643c5:	89 04 24             	mov    %eax,(%esp)
 87643c8:	e8 f3 98 91 ff       	call   807dcc0 <memset@plt>
 87643cd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87643d0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87643d3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87643d6:	89 ec                	mov    %ebp,%esp
 87643d8:	5d                   	pop    %ebp
 87643d9:	c3                   	ret
 87643da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87643e0:	8d 14 bd 00 00 00 00 	lea    0x0(,%edi,4),%edx
 87643e7:	89 14 24             	mov    %edx,(%esp)
 87643ea:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87643ed:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87643f2:	e8 99 33 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87643f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87643fa:	eb b8                	jmp    87643b4 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj+0x44>
 87643fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8764400:	8d 14 bd 00 00 00 00 	lea    0x0(,%edi,4),%edx
 8764407:	eb ab                	jmp    87643b4 <_ZN8TaoCrypt5BlockIjNS_20AllocatorWithCleanupIjEEE8CleanNewEj+0x44>
 8764409:	90                   	nop
 876440a:	90                   	nop
 876440b:	90                   	nop
 876440c:	90                   	nop
 876440d:	90                   	nop
 876440e:	90                   	nop
 876440f:	90                   	nop

08764410 <_ZNK8TaoCrypt17EuclideanDomainOf8SubtractERKNS_7IntegerES3_>:
 8764410:	55                   	push   %ebp
 8764411:	89 e5                	mov    %esp,%ebp
 8764413:	83 ec 38             	sub    $0x38,%esp
 8764416:	8b 45 10             	mov    0x10(%ebp),%eax
 8764419:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876441c:	e8 d7 e9 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764421:	81 c3 77 87 c0 00    	add    $0xc08777,%ebx
 8764427:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876442a:	8d 75 d8             	lea    -0x28(%ebp),%esi
 876442d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764431:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764434:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764437:	89 34 24             	mov    %esi,(%esp)
 876443a:	89 44 24 04          	mov    %eax,0x4(%esp)
 876443e:	e8 9d bc ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 8764443:	8b 45 08             	mov    0x8(%ebp),%eax
 8764446:	83 c0 1c             	add    $0x1c,%eax
 8764449:	83 ec 04             	sub    $0x4,%esp
 876444c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764450:	89 04 24             	mov    %eax,(%esp)
 8764453:	e8 08 c0 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764458:	8b 75 dc             	mov    -0x24(%ebp),%esi
 876445b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764462:	00 
 8764463:	89 34 24             	mov    %esi,(%esp)
 8764466:	89 c7                	mov    %eax,%edi
 8764468:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876446b:	c1 e0 02             	shl    $0x2,%eax
 876446e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764472:	e8 49 98 91 ff       	call   807dcc0 <memset@plt>
 8764477:	89 34 24             	mov    %esi,(%esp)
 876447a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876447f:	e8 9c 32 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764484:	89 f8                	mov    %edi,%eax
 8764486:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764489:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876448c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876448f:	89 ec                	mov    %ebp,%esp
 8764491:	5d                   	pop    %ebp
 8764492:	c3                   	ret
 8764493:	90                   	nop
 8764494:	90                   	nop
 8764495:	90                   	nop
 8764496:	90                   	nop
 8764497:	90                   	nop
 8764498:	90                   	nop
 8764499:	90                   	nop
 876449a:	90                   	nop
 876449b:	90                   	nop
 876449c:	90                   	nop
 876449d:	90                   	nop
 876449e:	90                   	nop
 876449f:	90                   	nop

087644a0 <_ZNK8TaoCrypt17EuclideanDomainOf3AddERKNS_7IntegerES3_>:
 87644a0:	55                   	push   %ebp
 87644a1:	89 e5                	mov    %esp,%ebp
 87644a3:	83 ec 38             	sub    $0x38,%esp
 87644a6:	8b 45 10             	mov    0x10(%ebp),%eax
 87644a9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87644ac:	e8 47 e9 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87644b1:	81 c3 e7 86 c0 00    	add    $0xc086e7,%ebx
 87644b7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87644ba:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87644bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87644c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 87644c4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87644c7:	89 34 24             	mov    %esi,(%esp)
 87644ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 87644ce:	e8 dd bc ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 87644d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87644d6:	83 c0 1c             	add    $0x1c,%eax
 87644d9:	83 ec 04             	sub    $0x4,%esp
 87644dc:	89 74 24 04          	mov    %esi,0x4(%esp)
 87644e0:	89 04 24             	mov    %eax,(%esp)
 87644e3:	e8 78 bf ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87644e8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87644eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87644f2:	00 
 87644f3:	89 34 24             	mov    %esi,(%esp)
 87644f6:	89 c7                	mov    %eax,%edi
 87644f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87644fb:	c1 e0 02             	shl    $0x2,%eax
 87644fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764502:	e8 b9 97 91 ff       	call   807dcc0 <memset@plt>
 8764507:	89 34 24             	mov    %esi,(%esp)
 876450a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876450f:	e8 0c 32 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764514:	89 f8                	mov    %edi,%eax
 8764516:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764519:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876451c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876451f:	89 ec                	mov    %ebp,%esp
 8764521:	5d                   	pop    %ebp
 8764522:	c3                   	ret
 8764523:	90                   	nop
 8764524:	90                   	nop
 8764525:	90                   	nop
 8764526:	90                   	nop
 8764527:	90                   	nop
 8764528:	90                   	nop
 8764529:	90                   	nop
 876452a:	90                   	nop
 876452b:	90                   	nop
 876452c:	90                   	nop
 876452d:	90                   	nop
 876452e:	90                   	nop
 876452f:	90                   	nop

08764530 <_ZNK8TaoCrypt17EuclideanDomainOf6DoubleERKNS_7IntegerE>:
 8764530:	55                   	push   %ebp
 8764531:	89 e5                	mov    %esp,%ebp
 8764533:	83 ec 38             	sub    $0x38,%esp
 8764536:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8764539:	8b 45 0c             	mov    0xc(%ebp),%eax
 876453c:	e8 b7 e8 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764541:	81 c3 57 86 c0 00    	add    $0xc08657,%ebx
 8764547:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876454a:	8d 75 d8             	lea    -0x28(%ebp),%esi
 876454d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764550:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764554:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764558:	89 34 24             	mov    %esi,(%esp)
 876455b:	e8 50 bc ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8764560:	8b 45 08             	mov    0x8(%ebp),%eax
 8764563:	83 c0 1c             	add    $0x1c,%eax
 8764566:	83 ec 04             	sub    $0x4,%esp
 8764569:	89 74 24 04          	mov    %esi,0x4(%esp)
 876456d:	89 04 24             	mov    %eax,(%esp)
 8764570:	e8 eb be ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764575:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764578:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876457f:	00 
 8764580:	89 34 24             	mov    %esi,(%esp)
 8764583:	89 c7                	mov    %eax,%edi
 8764585:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764588:	c1 e0 02             	shl    $0x2,%eax
 876458b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876458f:	e8 2c 97 91 ff       	call   807dcc0 <memset@plt>
 8764594:	89 34 24             	mov    %esi,(%esp)
 8764597:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876459c:	e8 7f 31 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87645a1:	89 f8                	mov    %edi,%eax
 87645a3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87645a6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87645a9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87645ac:	89 ec                	mov    %ebp,%esp
 87645ae:	5d                   	pop    %ebp
 87645af:	c3                   	ret

087645b0 <_ZNK8TaoCrypt17EuclideanDomainOf7InverseERKNS_7IntegerE>:
 87645b0:	55                   	push   %ebp
 87645b1:	89 e5                	mov    %esp,%ebp
 87645b3:	83 ec 38             	sub    $0x38,%esp
 87645b6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87645b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87645bc:	e8 37 e8 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87645c1:	81 c3 d7 85 c0 00    	add    $0xc085d7,%ebx
 87645c7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87645ca:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87645cd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87645d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87645d4:	89 34 24             	mov    %esi,(%esp)
 87645d7:	e8 b4 ae ff ff       	call   875f490 <_ZNK8TaoCrypt7IntegerngEv>
 87645dc:	8b 45 08             	mov    0x8(%ebp),%eax
 87645df:	83 c0 1c             	add    $0x1c,%eax
 87645e2:	83 ec 04             	sub    $0x4,%esp
 87645e5:	89 74 24 04          	mov    %esi,0x4(%esp)
 87645e9:	89 04 24             	mov    %eax,(%esp)
 87645ec:	e8 6f be ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87645f1:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87645f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87645fb:	00 
 87645fc:	89 34 24             	mov    %esi,(%esp)
 87645ff:	89 c7                	mov    %eax,%edi
 8764601:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764604:	c1 e0 02             	shl    $0x2,%eax
 8764607:	89 44 24 08          	mov    %eax,0x8(%esp)
 876460b:	e8 b0 96 91 ff       	call   807dcc0 <memset@plt>
 8764610:	89 34 24             	mov    %esi,(%esp)
 8764613:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764618:	e8 03 31 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876461d:	89 f8                	mov    %edi,%eax
 876461f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764622:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8764625:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8764628:	89 ec                	mov    %ebp,%esp
 876462a:	5d                   	pop    %ebp
 876462b:	c3                   	ret
 876462c:	90                   	nop
 876462d:	90                   	nop
 876462e:	90                   	nop
 876462f:	90                   	nop

08764630 <_ZNK8TaoCrypt17EuclideanDomainOf21MultiplicativeInverseERKNS_7IntegerE>:
 8764630:	55                   	push   %ebp
 8764631:	89 e5                	mov    %esp,%ebp
 8764633:	83 ec 38             	sub    $0x38,%esp
 8764636:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8764639:	8b 45 0c             	mov    0xc(%ebp),%eax
 876463c:	e8 b7 e7 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764641:	81 c3 57 85 c0 00    	add    $0xc08557,%ebx
 8764647:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876464a:	8d 75 d8             	lea    -0x28(%ebp),%esi
 876464d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764650:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764654:	89 34 24             	mov    %esi,(%esp)
 8764657:	e8 64 b2 ff ff       	call   875f8c0 <_ZNK8TaoCrypt7Integer21MultiplicativeInverseEv>
 876465c:	8b 45 08             	mov    0x8(%ebp),%eax
 876465f:	83 c0 1c             	add    $0x1c,%eax
 8764662:	83 ec 04             	sub    $0x4,%esp
 8764665:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764669:	89 04 24             	mov    %eax,(%esp)
 876466c:	e8 ef bd ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764671:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764674:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876467b:	00 
 876467c:	89 34 24             	mov    %esi,(%esp)
 876467f:	89 c7                	mov    %eax,%edi
 8764681:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764684:	c1 e0 02             	shl    $0x2,%eax
 8764687:	89 44 24 08          	mov    %eax,0x8(%esp)
 876468b:	e8 30 96 91 ff       	call   807dcc0 <memset@plt>
 8764690:	89 34 24             	mov    %esi,(%esp)
 8764693:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764698:	e8 83 30 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876469d:	89 f8                	mov    %edi,%eax
 876469f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87646a2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87646a5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87646a8:	89 ec                	mov    %ebp,%esp
 87646aa:	5d                   	pop    %ebp
 87646ab:	c3                   	ret
 87646ac:	90                   	nop
 87646ad:	90                   	nop
 87646ae:	90                   	nop
 87646af:	90                   	nop

087646b0 <_ZN8TaoCrypt24MontgomeryRepresentationD0Ev>:
 87646b0:	55                   	push   %ebp
 87646b1:	89 e5                	mov    %esp,%ebp
 87646b3:	57                   	push   %edi
 87646b4:	56                   	push   %esi
 87646b5:	53                   	push   %ebx
 87646b6:	e8 3d e7 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87646bb:	81 c3 dd 84 c0 00    	add    $0xc084dd,%ebx
 87646c1:	83 ec 1c             	sub    $0x1c,%esp
 87646c4:	8b 75 08             	mov    0x8(%ebp),%esi
 87646c7:	8b 7e 50             	mov    0x50(%esi),%edi
 87646ca:	8b 83 d4 fa ff ff    	mov    -0x52c(%ebx),%eax
 87646d0:	83 c0 08             	add    $0x8,%eax
 87646d3:	89 06                	mov    %eax,(%esi)
 87646d5:	8b 46 4c             	mov    0x4c(%esi),%eax
 87646d8:	89 3c 24             	mov    %edi,(%esp)
 87646db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87646e2:	00 
 87646e3:	c1 e0 02             	shl    $0x2,%eax
 87646e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87646ea:	e8 d1 95 91 ff       	call   807dcc0 <memset@plt>
 87646ef:	89 3c 24             	mov    %edi,(%esp)
 87646f2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87646f7:	e8 24 30 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87646fc:	8b 46 3c             	mov    0x3c(%esi),%eax
 87646ff:	8b 7e 40             	mov    0x40(%esi),%edi
 8764702:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764709:	00 
 876470a:	c1 e0 02             	shl    $0x2,%eax
 876470d:	89 3c 24             	mov    %edi,(%esp)
 8764710:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764714:	e8 a7 95 91 ff       	call   807dcc0 <memset@plt>
 8764719:	89 3c 24             	mov    %edi,(%esp)
 876471c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764721:	e8 fa 2f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764726:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 876472c:	8b 7e 30             	mov    0x30(%esi),%edi
 876472f:	83 c0 08             	add    $0x8,%eax
 8764732:	89 06                	mov    %eax,(%esi)
 8764734:	8b 46 2c             	mov    0x2c(%esi),%eax
 8764737:	89 3c 24             	mov    %edi,(%esp)
 876473a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764741:	00 
 8764742:	c1 e0 02             	shl    $0x2,%eax
 8764745:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764749:	e8 72 95 91 ff       	call   807dcc0 <memset@plt>
 876474e:	89 3c 24             	mov    %edi,(%esp)
 8764751:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764756:	e8 c5 2f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876475b:	8b 46 1c             	mov    0x1c(%esi),%eax
 876475e:	8b 7e 20             	mov    0x20(%esi),%edi
 8764761:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764768:	00 
 8764769:	c1 e0 02             	shl    $0x2,%eax
 876476c:	89 3c 24             	mov    %edi,(%esp)
 876476f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764773:	e8 48 95 91 ff       	call   807dcc0 <memset@plt>
 8764778:	89 3c 24             	mov    %edi,(%esp)
 876477b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764780:	e8 9b 2f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764785:	8b 46 0c             	mov    0xc(%esi),%eax
 8764788:	8b 7e 10             	mov    0x10(%esi),%edi
 876478b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764792:	00 
 8764793:	c1 e0 02             	shl    $0x2,%eax
 8764796:	89 3c 24             	mov    %edi,(%esp)
 8764799:	89 44 24 08          	mov    %eax,0x8(%esp)
 876479d:	e8 1e 95 91 ff       	call   807dcc0 <memset@plt>
 87647a2:	89 3c 24             	mov    %edi,(%esp)
 87647a5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87647aa:	e8 71 2f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87647af:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 87647b5:	83 c0 08             	add    $0x8,%eax
 87647b8:	89 46 04             	mov    %eax,0x4(%esi)
 87647bb:	89 06                	mov    %eax,(%esi)
 87647bd:	83 c4 1c             	add    $0x1c,%esp
 87647c0:	5b                   	pop    %ebx
 87647c1:	5e                   	pop    %esi
 87647c2:	5f                   	pop    %edi
 87647c3:	5d                   	pop    %ebp
 87647c4:	c3                   	ret
 87647c5:	90                   	nop
 87647c6:	90                   	nop
 87647c7:	90                   	nop
 87647c8:	90                   	nop
 87647c9:	90                   	nop
 87647ca:	90                   	nop
 87647cb:	90                   	nop
 87647cc:	90                   	nop
 87647cd:	90                   	nop
 87647ce:	90                   	nop
 87647cf:	90                   	nop

087647d0 <_ZNK8TaoCrypt17EuclideanDomainOf6SquareERKNS_7IntegerE>:
 87647d0:	55                   	push   %ebp
 87647d1:	89 e5                	mov    %esp,%ebp
 87647d3:	83 ec 38             	sub    $0x38,%esp
 87647d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87647d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87647dc:	e8 17 e6 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87647e1:	81 c3 b7 83 c0 00    	add    $0xc083b7,%ebx
 87647e7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87647ea:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87647ed:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87647f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 87647f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87647f8:	89 34 24             	mov    %esi,(%esp)
 87647fb:	e8 60 d9 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8764800:	8b 45 08             	mov    0x8(%ebp),%eax
 8764803:	83 c0 1c             	add    $0x1c,%eax
 8764806:	83 ec 04             	sub    $0x4,%esp
 8764809:	89 74 24 04          	mov    %esi,0x4(%esp)
 876480d:	89 04 24             	mov    %eax,(%esp)
 8764810:	e8 4b bc ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764815:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764818:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876481f:	00 
 8764820:	89 34 24             	mov    %esi,(%esp)
 8764823:	89 c7                	mov    %eax,%edi
 8764825:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764828:	c1 e0 02             	shl    $0x2,%eax
 876482b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876482f:	e8 8c 94 91 ff       	call   807dcc0 <memset@plt>
 8764834:	89 34 24             	mov    %esi,(%esp)
 8764837:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876483c:	e8 df 2e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764841:	89 f8                	mov    %edi,%eax
 8764843:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764846:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8764849:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876484c:	89 ec                	mov    %ebp,%esp
 876484e:	5d                   	pop    %ebp
 876484f:	c3                   	ret

08764850 <_ZNK8TaoCrypt17EuclideanDomainOf8MultiplyERKNS_7IntegerES3_>:
 8764850:	55                   	push   %ebp
 8764851:	89 e5                	mov    %esp,%ebp
 8764853:	83 ec 38             	sub    $0x38,%esp
 8764856:	8b 45 10             	mov    0x10(%ebp),%eax
 8764859:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876485c:	e8 97 e5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764861:	81 c3 37 83 c0 00    	add    $0xc08337,%ebx
 8764867:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876486a:	8d 75 d8             	lea    -0x28(%ebp),%esi
 876486d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764871:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764874:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764877:	89 34 24             	mov    %esi,(%esp)
 876487a:	89 44 24 04          	mov    %eax,0x4(%esp)
 876487e:	e8 dd d8 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8764883:	8b 45 08             	mov    0x8(%ebp),%eax
 8764886:	83 c0 1c             	add    $0x1c,%eax
 8764889:	83 ec 04             	sub    $0x4,%esp
 876488c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764890:	89 04 24             	mov    %eax,(%esp)
 8764893:	e8 c8 bb ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764898:	8b 75 dc             	mov    -0x24(%ebp),%esi
 876489b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87648a2:	00 
 87648a3:	89 34 24             	mov    %esi,(%esp)
 87648a6:	89 c7                	mov    %eax,%edi
 87648a8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87648ab:	c1 e0 02             	shl    $0x2,%eax
 87648ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 87648b2:	e8 09 94 91 ff       	call   807dcc0 <memset@plt>
 87648b7:	89 34 24             	mov    %esi,(%esp)
 87648ba:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87648bf:	e8 5c 2e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87648c4:	89 f8                	mov    %edi,%eax
 87648c6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87648c9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87648cc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87648cf:	89 ec                	mov    %ebp,%esp
 87648d1:	5d                   	pop    %ebp
 87648d2:	c3                   	ret
 87648d3:	90                   	nop
 87648d4:	90                   	nop
 87648d5:	90                   	nop
 87648d6:	90                   	nop
 87648d7:	90                   	nop
 87648d8:	90                   	nop
 87648d9:	90                   	nop
 87648da:	90                   	nop
 87648db:	90                   	nop
 87648dc:	90                   	nop
 87648dd:	90                   	nop
 87648de:	90                   	nop
 87648df:	90                   	nop

087648e0 <_ZNK8TaoCrypt17EuclideanDomainOf17DivisionAlgorithmERNS_7IntegerES2_RKS1_S4_>:
 87648e0:	55                   	push   %ebp
 87648e1:	89 e5                	mov    %esp,%ebp
 87648e3:	53                   	push   %ebx
 87648e4:	83 ec 14             	sub    $0x14,%esp
 87648e7:	8b 45 18             	mov    0x18(%ebp),%eax
 87648ea:	e8 09 e5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87648ef:	81 c3 a9 82 c0 00    	add    $0xc082a9,%ebx
 87648f5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87648f9:	8b 45 14             	mov    0x14(%ebp),%eax
 87648fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764900:	8b 45 10             	mov    0x10(%ebp),%eax
 8764903:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764907:	8b 45 0c             	mov    0xc(%ebp),%eax
 876490a:	89 04 24             	mov    %eax,(%esp)
 876490d:	e8 0e dc ff ff       	call   8762520 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_>
 8764912:	83 c4 14             	add    $0x14,%esp
 8764915:	5b                   	pop    %ebx
 8764916:	5d                   	pop    %ebp
 8764917:	c3                   	ret
 8764918:	90                   	nop
 8764919:	90                   	nop
 876491a:	90                   	nop
 876491b:	90                   	nop
 876491c:	90                   	nop
 876491d:	90                   	nop
 876491e:	90                   	nop
 876491f:	90                   	nop

08764920 <_ZNK8TaoCrypt17ModularArithmetic9ConvertInERKNS_7IntegerE>:
 8764920:	55                   	push   %ebp
 8764921:	89 e5                	mov    %esp,%ebp
 8764923:	83 ec 18             	sub    $0x18,%esp
 8764926:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764929:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 876492c:	e8 c7 e4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764931:	81 c3 67 82 c0 00    	add    $0xc08267,%ebx
 8764937:	89 75 fc             	mov    %esi,-0x4(%ebp)
 876493a:	8b 75 08             	mov    0x8(%ebp),%esi
 876493d:	83 c0 0c             	add    $0xc,%eax
 8764940:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764944:	8b 45 10             	mov    0x10(%ebp),%eax
 8764947:	89 34 24             	mov    %esi,(%esp)
 876494a:	89 44 24 04          	mov    %eax,0x4(%esp)
 876494e:	e8 cd dc ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8764953:	89 f0                	mov    %esi,%eax
 8764955:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8764958:	8b 75 fc             	mov    -0x4(%ebp),%esi
 876495b:	83 ec 04             	sub    $0x4,%esp
 876495e:	89 ec                	mov    %ebp,%esp
 8764960:	5d                   	pop    %ebp
 8764961:	c2 04 00             	ret    $0x4
 8764964:	90                   	nop
 8764965:	90                   	nop
 8764966:	90                   	nop
 8764967:	90                   	nop
 8764968:	90                   	nop
 8764969:	90                   	nop
 876496a:	90                   	nop
 876496b:	90                   	nop
 876496c:	90                   	nop
 876496d:	90                   	nop
 876496e:	90                   	nop
 876496f:	90                   	nop

08764970 <_ZNK8TaoCrypt17ModularArithmetic6SquareERKNS_7IntegerE>:
 8764970:	55                   	push   %ebp
 8764971:	89 e5                	mov    %esp,%ebp
 8764973:	57                   	push   %edi
 8764974:	56                   	push   %esi
 8764975:	53                   	push   %ebx
 8764976:	e8 7d e4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876497b:	81 c3 1d 82 c0 00    	add    $0xc0821d,%ebx
 8764981:	83 ec 4c             	sub    $0x4c,%esp
 8764984:	8b 55 0c             	mov    0xc(%ebp),%edx
 8764987:	8d 45 d8             	lea    -0x28(%ebp),%eax
 876498a:	8b 75 08             	mov    0x8(%ebp),%esi
 876498d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8764990:	8d 7d c8             	lea    -0x38(%ebp),%edi
 8764993:	89 04 24             	mov    %eax,(%esp)
 8764996:	89 54 24 08          	mov    %edx,0x8(%esp)
 876499a:	89 54 24 04          	mov    %edx,0x4(%esp)
 876499e:	e8 bd d7 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 87649a3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87649a6:	8d 56 0c             	lea    0xc(%esi),%edx
 87649a9:	83 c6 2c             	add    $0x2c,%esi
 87649ac:	83 ec 04             	sub    $0x4,%esp
 87649af:	89 54 24 08          	mov    %edx,0x8(%esp)
 87649b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87649b7:	89 3c 24             	mov    %edi,(%esp)
 87649ba:	e8 61 dc ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 87649bf:	83 ec 04             	sub    $0x4,%esp
 87649c2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87649c6:	89 34 24             	mov    %esi,(%esp)
 87649c9:	e8 92 ba ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87649ce:	8b 75 cc             	mov    -0x34(%ebp),%esi
 87649d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87649d8:	00 
 87649d9:	89 34 24             	mov    %esi,(%esp)
 87649dc:	89 c7                	mov    %eax,%edi
 87649de:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87649e1:	c1 e0 02             	shl    $0x2,%eax
 87649e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87649e8:	e8 d3 92 91 ff       	call   807dcc0 <memset@plt>
 87649ed:	89 34 24             	mov    %esi,(%esp)
 87649f0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87649f5:	e8 26 2d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87649fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87649fd:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764a00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764a07:	00 
 8764a08:	c1 e0 02             	shl    $0x2,%eax
 8764a0b:	89 34 24             	mov    %esi,(%esp)
 8764a0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764a12:	e8 a9 92 91 ff       	call   807dcc0 <memset@plt>
 8764a17:	89 34 24             	mov    %esi,(%esp)
 8764a1a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764a1f:	e8 fc 2c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764a24:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8764a27:	89 f8                	mov    %edi,%eax
 8764a29:	5b                   	pop    %ebx
 8764a2a:	5e                   	pop    %esi
 8764a2b:	5f                   	pop    %edi
 8764a2c:	5d                   	pop    %ebp
 8764a2d:	c3                   	ret
 8764a2e:	90                   	nop
 8764a2f:	90                   	nop

08764a30 <_ZNK8TaoCrypt17ModularArithmetic8MultiplyERKNS_7IntegerES3_>:
 8764a30:	55                   	push   %ebp
 8764a31:	89 e5                	mov    %esp,%ebp
 8764a33:	57                   	push   %edi
 8764a34:	56                   	push   %esi
 8764a35:	53                   	push   %ebx
 8764a36:	83 ec 4c             	sub    $0x4c,%esp
 8764a39:	8b 55 10             	mov    0x10(%ebp),%edx
 8764a3c:	e8 b7 e3 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764a41:	81 c3 57 81 c0 00    	add    $0xc08157,%ebx
 8764a47:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8764a4a:	8b 75 08             	mov    0x8(%ebp),%esi
 8764a4d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8764a50:	8d 7d c8             	lea    -0x38(%ebp),%edi
 8764a53:	89 04 24             	mov    %eax,(%esp)
 8764a56:	89 54 24 08          	mov    %edx,0x8(%esp)
 8764a5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8764a5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8764a61:	e8 fa d6 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8764a66:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8764a69:	8d 56 0c             	lea    0xc(%esi),%edx
 8764a6c:	83 c6 2c             	add    $0x2c,%esi
 8764a6f:	83 ec 04             	sub    $0x4,%esp
 8764a72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8764a76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764a7a:	89 3c 24             	mov    %edi,(%esp)
 8764a7d:	e8 9e db ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8764a82:	83 ec 04             	sub    $0x4,%esp
 8764a85:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8764a89:	89 34 24             	mov    %esi,(%esp)
 8764a8c:	e8 cf b9 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764a91:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8764a94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764a9b:	00 
 8764a9c:	89 34 24             	mov    %esi,(%esp)
 8764a9f:	89 c7                	mov    %eax,%edi
 8764aa1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8764aa4:	c1 e0 02             	shl    $0x2,%eax
 8764aa7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764aab:	e8 10 92 91 ff       	call   807dcc0 <memset@plt>
 8764ab0:	89 34 24             	mov    %esi,(%esp)
 8764ab3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764ab8:	e8 63 2c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764abd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764ac0:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764ac3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764aca:	00 
 8764acb:	c1 e0 02             	shl    $0x2,%eax
 8764ace:	89 34 24             	mov    %esi,(%esp)
 8764ad1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764ad5:	e8 e6 91 91 ff       	call   807dcc0 <memset@plt>
 8764ada:	89 34 24             	mov    %esi,(%esp)
 8764add:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764ae2:	e8 39 2c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764ae7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8764aea:	89 f8                	mov    %edi,%eax
 8764aec:	5b                   	pop    %ebx
 8764aed:	5e                   	pop    %esi
 8764aee:	5f                   	pop    %edi
 8764aef:	5d                   	pop    %ebp
 8764af0:	c3                   	ret
 8764af1:	90                   	nop
 8764af2:	90                   	nop
 8764af3:	90                   	nop
 8764af4:	90                   	nop
 8764af5:	90                   	nop
 8764af6:	90                   	nop
 8764af7:	90                   	nop
 8764af8:	90                   	nop
 8764af9:	90                   	nop
 8764afa:	90                   	nop
 8764afb:	90                   	nop
 8764afc:	90                   	nop
 8764afd:	90                   	nop
 8764afe:	90                   	nop
 8764aff:	90                   	nop

08764b00 <_ZNK8TaoCrypt24MontgomeryRepresentation9ConvertInERKNS_7IntegerE>:
 8764b00:	55                   	push   %ebp
 8764b01:	89 e5                	mov    %esp,%ebp
 8764b03:	57                   	push   %edi
 8764b04:	56                   	push   %esi
 8764b05:	53                   	push   %ebx
 8764b06:	e8 ed e2 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764b0b:	81 c3 8d 80 c0 00    	add    $0xc0808d,%ebx
 8764b11:	83 ec 4c             	sub    $0x4c,%esp
 8764b14:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8764b17:	8b 45 10             	mov    0x10(%ebp),%eax
 8764b1a:	8b 77 0c             	mov    0xc(%edi),%esi
 8764b1d:	83 c7 0c             	add    $0xc,%edi
 8764b20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764b24:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8764b27:	89 04 24             	mov    %eax,(%esp)
 8764b2a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8764b2d:	e8 3e a7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8764b32:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8764b35:	c1 e6 05             	shl    $0x5,%esi
 8764b38:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764b3c:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8764b3f:	89 04 24             	mov    %eax,(%esp)
 8764b42:	e8 59 a2 ff ff       	call   875eda0 <_ZN8TaoCrypt7IntegerlSEj>
 8764b47:	89 34 24             	mov    %esi,(%esp)
 8764b4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764b4e:	e8 1d a7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8764b53:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8764b56:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8764b59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764b60:	00 
 8764b61:	c1 e0 02             	shl    $0x2,%eax
 8764b64:	89 14 24             	mov    %edx,(%esp)
 8764b67:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8764b6a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764b6e:	e8 4d 91 91 ff       	call   807dcc0 <memset@plt>
 8764b73:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8764b76:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764b7b:	89 14 24             	mov    %edx,(%esp)
 8764b7e:	e8 9d 2b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764b83:	8b 45 08             	mov    0x8(%ebp),%eax
 8764b86:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8764b8a:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764b8e:	89 04 24             	mov    %eax,(%esp)
 8764b91:	e8 8a da ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8764b96:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764b99:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764b9c:	c1 e0 02             	shl    $0x2,%eax
 8764b9f:	83 ec 04             	sub    $0x4,%esp
 8764ba2:	89 34 24             	mov    %esi,(%esp)
 8764ba5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764ba9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764bb0:	00 
 8764bb1:	e8 0a 91 91 ff       	call   807dcc0 <memset@plt>
 8764bb6:	89 34 24             	mov    %esi,(%esp)
 8764bb9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764bbe:	e8 5d 2b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764bc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8764bc6:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8764bc9:	5b                   	pop    %ebx
 8764bca:	5e                   	pop    %esi
 8764bcb:	5f                   	pop    %edi
 8764bcc:	5d                   	pop    %ebp
 8764bcd:	c2 04 00             	ret    $0x4

08764bd0 <_ZNK8TaoCrypt24MontgomeryRepresentation22MultiplicativeIdentityEv>:
 8764bd0:	55                   	push   %ebp
 8764bd1:	89 e5                	mov    %esp,%ebp
 8764bd3:	57                   	push   %edi
 8764bd4:	56                   	push   %esi
 8764bd5:	53                   	push   %ebx
 8764bd6:	83 ec 4c             	sub    $0x4c,%esp
 8764bd9:	8b 75 08             	mov    0x8(%ebp),%esi
 8764bdc:	e8 17 e2 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764be1:	81 c3 b7 7f c0 00    	add    $0xc07fb7,%ebx
 8764be7:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8764bea:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8764bed:	8d 7d c8             	lea    -0x38(%ebp),%edi
 8764bf0:	8b 46 0c             	mov    0xc(%esi),%eax
 8764bf3:	89 14 24             	mov    %edx,(%esp)
 8764bf6:	c1 e0 05             	shl    $0x5,%eax
 8764bf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764bfd:	e8 6e c1 ff ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 8764c02:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8764c05:	8d 46 0c             	lea    0xc(%esi),%eax
 8764c08:	83 c6 2c             	add    $0x2c,%esi
 8764c0b:	83 ec 04             	sub    $0x4,%esp
 8764c0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8764c12:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764c16:	89 3c 24             	mov    %edi,(%esp)
 8764c19:	e8 02 da ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8764c1e:	83 ec 04             	sub    $0x4,%esp
 8764c21:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8764c25:	89 34 24             	mov    %esi,(%esp)
 8764c28:	e8 33 b8 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764c2d:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8764c30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764c37:	00 
 8764c38:	89 34 24             	mov    %esi,(%esp)
 8764c3b:	89 c7                	mov    %eax,%edi
 8764c3d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8764c40:	c1 e0 02             	shl    $0x2,%eax
 8764c43:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764c47:	e8 74 90 91 ff       	call   807dcc0 <memset@plt>
 8764c4c:	89 34 24             	mov    %esi,(%esp)
 8764c4f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764c54:	e8 c7 2a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764c59:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764c5c:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764c5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764c66:	00 
 8764c67:	c1 e0 02             	shl    $0x2,%eax
 8764c6a:	89 34 24             	mov    %esi,(%esp)
 8764c6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764c71:	e8 4a 90 91 ff       	call   807dcc0 <memset@plt>
 8764c76:	89 34 24             	mov    %esi,(%esp)
 8764c79:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764c7e:	e8 9d 2a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764c83:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8764c86:	89 f8                	mov    %edi,%eax
 8764c88:	5b                   	pop    %ebx
 8764c89:	5e                   	pop    %esi
 8764c8a:	5f                   	pop    %edi
 8764c8b:	5d                   	pop    %ebp
 8764c8c:	c3                   	ret
 8764c8d:	90                   	nop
 8764c8e:	90                   	nop
 8764c8f:	90                   	nop

08764c90 <_ZNK8TaoCrypt17EuclideanDomainOf3ModERKNS_7IntegerES3_>:
 8764c90:	55                   	push   %ebp
 8764c91:	89 e5                	mov    %esp,%ebp
 8764c93:	83 ec 38             	sub    $0x38,%esp
 8764c96:	8b 45 10             	mov    0x10(%ebp),%eax
 8764c99:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8764c9c:	e8 57 e1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764ca1:	81 c3 f7 7e c0 00    	add    $0xc07ef7,%ebx
 8764ca7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8764caa:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8764cad:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764cb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764cb4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764cb7:	89 34 24             	mov    %esi,(%esp)
 8764cba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764cbe:	e8 5d d9 ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8764cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8764cc6:	83 c0 1c             	add    $0x1c,%eax
 8764cc9:	83 ec 04             	sub    $0x4,%esp
 8764ccc:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764cd0:	89 04 24             	mov    %eax,(%esp)
 8764cd3:	e8 88 b7 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764cd8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764cdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764ce2:	00 
 8764ce3:	89 34 24             	mov    %esi,(%esp)
 8764ce6:	89 c7                	mov    %eax,%edi
 8764ce8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764ceb:	c1 e0 02             	shl    $0x2,%eax
 8764cee:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764cf2:	e8 c9 8f 91 ff       	call   807dcc0 <memset@plt>
 8764cf7:	89 34 24             	mov    %esi,(%esp)
 8764cfa:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764cff:	e8 1c 2a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764d04:	89 f8                	mov    %edi,%eax
 8764d06:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764d09:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8764d0c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8764d0f:	89 ec                	mov    %ebp,%esp
 8764d11:	5d                   	pop    %ebp
 8764d12:	c3                   	ret
 8764d13:	90                   	nop
 8764d14:	90                   	nop
 8764d15:	90                   	nop
 8764d16:	90                   	nop
 8764d17:	90                   	nop
 8764d18:	90                   	nop
 8764d19:	90                   	nop
 8764d1a:	90                   	nop
 8764d1b:	90                   	nop
 8764d1c:	90                   	nop
 8764d1d:	90                   	nop
 8764d1e:	90                   	nop
 8764d1f:	90                   	nop

08764d20 <_ZNK8TaoCrypt17ModularArithmetic21MultiplicativeInverseERKNS_7IntegerE>:
 8764d20:	55                   	push   %ebp
 8764d21:	89 e5                	mov    %esp,%ebp
 8764d23:	83 ec 38             	sub    $0x38,%esp
 8764d26:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8764d29:	8b 75 08             	mov    0x8(%ebp),%esi
 8764d2c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8764d2f:	e8 c4 e0 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764d34:	81 c3 64 7e c0 00    	add    $0xc07e64,%ebx
 8764d3a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764d3d:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8764d40:	8d 46 0c             	lea    0xc(%esi),%eax
 8764d43:	83 c6 2c             	add    $0x2c,%esi
 8764d46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764d4d:	89 3c 24             	mov    %edi,(%esp)
 8764d50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764d54:	e8 87 e4 ff ff       	call   87631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>
 8764d59:	83 ec 04             	sub    $0x4,%esp
 8764d5c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8764d60:	89 34 24             	mov    %esi,(%esp)
 8764d63:	e8 f8 b6 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764d68:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764d6b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764d72:	00 
 8764d73:	89 34 24             	mov    %esi,(%esp)
 8764d76:	89 c7                	mov    %eax,%edi
 8764d78:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764d7b:	c1 e0 02             	shl    $0x2,%eax
 8764d7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764d82:	e8 39 8f 91 ff       	call   807dcc0 <memset@plt>
 8764d87:	89 34 24             	mov    %esi,(%esp)
 8764d8a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764d8f:	e8 8c 29 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764d94:	89 f8                	mov    %edi,%eax
 8764d96:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764d99:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8764d9c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8764d9f:	89 ec                	mov    %ebp,%esp
 8764da1:	5d                   	pop    %ebp
 8764da2:	c3                   	ret
 8764da3:	90                   	nop
 8764da4:	90                   	nop
 8764da5:	90                   	nop
 8764da6:	90                   	nop
 8764da7:	90                   	nop
 8764da8:	90                   	nop
 8764da9:	90                   	nop
 8764daa:	90                   	nop
 8764dab:	90                   	nop
 8764dac:	90                   	nop
 8764dad:	90                   	nop
 8764dae:	90                   	nop
 8764daf:	90                   	nop

08764db0 <_ZNK8TaoCrypt17EuclideanDomainOf6DivideERKNS_7IntegerES3_>:
 8764db0:	55                   	push   %ebp
 8764db1:	89 e5                	mov    %esp,%ebp
 8764db3:	83 ec 38             	sub    $0x38,%esp
 8764db6:	8b 45 10             	mov    0x10(%ebp),%eax
 8764db9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8764dbc:	e8 37 e0 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8764dc1:	81 c3 d7 7d c0 00    	add    $0xc07dd7,%ebx
 8764dc7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8764dca:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8764dcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764dd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8764dd4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8764dd7:	89 34 24             	mov    %esi,(%esp)
 8764dda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8764dde:	e8 6d e3 ff ff       	call   8763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>
 8764de3:	8b 45 08             	mov    0x8(%ebp),%eax
 8764de6:	83 c0 1c             	add    $0x1c,%eax
 8764de9:	83 ec 04             	sub    $0x4,%esp
 8764dec:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764df0:	89 04 24             	mov    %eax,(%esp)
 8764df3:	e8 68 b6 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8764df8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8764dfb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8764e02:	00 
 8764e03:	89 34 24             	mov    %esi,(%esp)
 8764e06:	89 c7                	mov    %eax,%edi
 8764e08:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8764e0b:	c1 e0 02             	shl    $0x2,%eax
 8764e0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8764e12:	e8 a9 8e 91 ff       	call   807dcc0 <memset@plt>
 8764e17:	89 34 24             	mov    %esi,(%esp)
 8764e1a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8764e1f:	e8 fc 28 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8764e24:	89 f8                	mov    %edi,%eax
 8764e26:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8764e29:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8764e2c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8764e2f:	89 ec                	mov    %ebp,%esp
 8764e31:	5d                   	pop    %ebp
 8764e32:	c3                   	ret
 8764e33:	90                   	nop
 8764e34:	90                   	nop
 8764e35:	90                   	nop
 8764e36:	90                   	nop
 8764e37:	90                   	nop
 8764e38:	90                   	nop
 8764e39:	90                   	nop
 8764e3a:	90                   	nop
 8764e3b:	90                   	nop
 8764e3c:	90                   	nop
 8764e3d:	90                   	nop
 8764e3e:	90                   	nop
 8764e3f:	90                   	nop

```

```c
// TaoCrypt::Integer::IsSquare @ 0x8763820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsSquare() const */

bool __thiscall TaoCrypt::Integer::IsSquare(Integer *this)

{
  int iVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  SquareRoot();
  Times((Integer *)&local_3c);
  iVar1 = Compare(this,(Integer *)&local_3c);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return iVar1 == 0;
}

```

---

## IsUnit

```asm
// === 0875d710 TaoCrypt::Integer::IsUnit  [0x0875d710-0x875d75f] ===
 875d710:	55                   	push   %ebp
 875d711:	89 e5                	mov    %esp,%ebp
 875d713:	83 ec 18             	sub    $0x18,%esp
 875d716:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875d719:	e8 da 56 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d71e:	81 c3 7a f4 c0 00    	add    $0xc0f47a,%ebx
 875d724:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875d727:	8b 75 08             	mov    0x8(%ebp),%esi
 875d72a:	89 34 24             	mov    %esi,(%esp)
 875d72d:	e8 fe f9 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d732:	89 c2                	mov    %eax,%edx
 875d734:	31 c0                	xor    %eax,%eax
 875d736:	83 fa 01             	cmp    $0x1,%edx
 875d739:	74 0d                	je     875d748 <_ZNK8TaoCrypt7Integer6IsUnitEv+0x38>
 875d73b:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875d73e:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875d741:	89 ec                	mov    %ebp,%esp
 875d743:	5d                   	pop    %ebp
 875d744:	c3                   	ret
 875d745:	8d 76 00             	lea    0x0(%esi),%esi
 875d748:	8b 46 04             	mov    0x4(%esi),%eax
 875d74b:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875d74e:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875d751:	83 38 01             	cmpl   $0x1,(%eax)
 875d754:	0f 94 c0             	sete   %al
 875d757:	89 ec                	mov    %ebp,%esp
 875d759:	5d                   	pop    %ebp
 875d75a:	c3                   	ret
 875d75b:	90                   	nop
 875d75c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::IsUnit @ 0x875d710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsUnit() const */

undefined4 __thiscall TaoCrypt::Integer::IsUnit(Integer *this)

{
  int iVar1;
  
  iVar1 = WordCount(this);
  if (iVar1 != 1) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int **)(this + 4) >> 8),**(int **)(this + 4) == 1);
}

```

---

## MinEncodedSize

```asm
// === 08760dd0 TaoCrypt::Integer::MinEncodedSize  [0x08760dd0-0x8760f0f] ===
 8760dd0:	55                   	push   %ebp
 8760dd1:	89 e5                	mov    %esp,%ebp
 8760dd3:	83 ec 58             	sub    $0x58,%esp
 8760dd6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8760dd9:	e8 1a 20 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760dde:	81 c3 ba bd c0 00    	add    $0xc0bdba,%ebx
 8760de4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760de7:	8b 7d 08             	mov    0x8(%ebp),%edi
 8760dea:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8760ded:	89 3c 24             	mov    %edi,(%esp)
 8760df0:	e8 3b de ff ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8760df5:	85 c0                	test   %eax,%eax
 8760df7:	89 c6                	mov    %eax,%esi
 8760df9:	b8 01 00 00 00       	mov    $0x1,%eax
 8760dfe:	0f 44 f0             	cmove  %eax,%esi
 8760e01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8760e04:	85 c0                	test   %eax,%eax
 8760e06:	74 25                	je     8760e2d <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x5d>
 8760e08:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 8760e0c:	74 32                	je     8760e40 <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x70>
 8760e0e:	8d 46 ff             	lea    -0x1(%esi),%eax
 8760e11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760e15:	89 3c 24             	mov    %edi,(%esp)
 8760e18:	e8 e3 c2 ff ff       	call   875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>
 8760e1d:	84 c0                	test   %al,%al
 8760e1f:	0f 88 db 00 00 00    	js     8760f00 <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x130>
 8760e25:	8b 47 0c             	mov    0xc(%edi),%eax
 8760e28:	83 f8 01             	cmp    $0x1,%eax
 8760e2b:	74 13                	je     8760e40 <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x70>
 8760e2d:	89 f0                	mov    %esi,%eax
 8760e2f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760e32:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760e35:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760e38:	89 ec                	mov    %ebp,%esp
 8760e3a:	5d                   	pop    %ebp
 8760e3b:	c3                   	ret
 8760e3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760e40:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8760e43:	8d 04 f5 ff ff ff ff 	lea    -0x1(,%esi,8),%eax
 8760e4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760e4e:	89 14 24             	mov    %edx,(%esp)
 8760e51:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8760e54:	e8 17 ff ff ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 8760e59:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8760e5c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8760e5f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8760e62:	83 ec 04             	sub    $0x4,%esp
 8760e65:	89 54 24 04          	mov    %edx,0x4(%esp)
 8760e69:	89 04 24             	mov    %eax,(%esp)
 8760e6c:	e8 1f e6 ff ff       	call   875f490 <_ZNK8TaoCrypt7IntegerngEv>
 8760e71:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8760e74:	83 ec 04             	sub    $0x4,%esp
 8760e77:	89 3c 24             	mov    %edi,(%esp)
 8760e7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760e7e:	e8 9d c3 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8760e83:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8760e86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760e8d:	00 
 8760e8e:	89 3c 24             	mov    %edi,(%esp)
 8760e91:	89 c2                	mov    %eax,%edx
 8760e93:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8760e96:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8760e99:	c1 e0 02             	shl    $0x2,%eax
 8760e9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760ea0:	e8 1b ce 91 ff       	call   807dcc0 <memset@plt>
 8760ea5:	89 3c 24             	mov    %edi,(%esp)
 8760ea8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760ead:	e8 6e 68 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760eb2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8760eb5:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8760eb8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760ebf:	00 
 8760ec0:	c1 e0 02             	shl    $0x2,%eax
 8760ec3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760ec7:	89 3c 24             	mov    %edi,(%esp)
 8760eca:	e8 f1 cd 91 ff       	call   807dcc0 <memset@plt>
 8760ecf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760ed4:	89 3c 24             	mov    %edi,(%esp)
 8760ed7:	e8 44 68 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760edc:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8760edf:	85 d2                	test   %edx,%edx
 8760ee1:	0f 89 46 ff ff ff    	jns    8760e2d <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x5d>
 8760ee7:	83 c6 01             	add    $0x1,%esi
 8760eea:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760eed:	89 f0                	mov    %esi,%eax
 8760eef:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760ef2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760ef5:	89 ec                	mov    %ebp,%esp
 8760ef7:	5d                   	pop    %ebp
 8760ef8:	c3                   	ret
 8760ef9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760f00:	83 c6 01             	add    $0x1,%esi
 8760f03:	e9 1d ff ff ff       	jmp    8760e25 <_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE+0x55>
 8760f08:	90                   	nop
 8760f09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::MinEncodedSize @ 0x8760dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::MinEncodedSize(TaoCrypt::Integer::Signedness) const */

int __thiscall TaoCrypt::Integer::MinEncodedSize(Integer *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  iVar2 = ByteCount(this);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(this + 0xc) != 1) {
      cVar1 = GetByte(this,iVar2 - 1);
      if (cVar1 < '\0') {
        iVar2 = iVar2 + 1;
      }
      if (*(int *)(this + 0xc) != 1) {
        return iVar2;
      }
    }
    Power2((Integer *)&local_2c,iVar2 * 8 - 1);
    operator-((Integer *)&local_3c);
    iVar3 = Compare(this,(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar4 & 0xffffff00);
    if (iVar3 < 0) {
      return iVar2 + 1;
    }
  }
  return iVar2;
}

```

---

## Minus

```asm
// === 087600e0 TaoCrypt::Integer::Minus  [0x087600e0-0x87601af] ===
 87600e0:	55                   	push   %ebp
 87600e1:	89 e5                	mov    %esp,%ebp
 87600e3:	83 ec 38             	sub    $0x38,%esp
 87600e6:	8b 45 10             	mov    0x10(%ebp),%eax
 87600e9:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87600ec:	8b 75 0c             	mov    0xc(%ebp),%esi
 87600ef:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87600f2:	e8 01 2d fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87600f7:	81 c3 a1 ca c0 00    	add    $0xc0caa1,%ebx
 87600fd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760100:	8b 7d 08             	mov    0x8(%ebp),%edi
 8760103:	8b 10                	mov    (%eax),%edx
 8760105:	39 16                	cmp    %edx,(%esi)
 8760107:	0f 43 16             	cmovae (%esi),%edx
 876010a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 876010d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760114:	00 
 8760115:	89 54 24 08          	mov    %edx,0x8(%esp)
 8760119:	89 3c 24             	mov    %edi,(%esp)
 876011c:	e8 cf ef ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 8760121:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8760124:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 8760128:	74 2e                	je     8760158 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0x78>
 876012a:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 876012e:	74 48                	je     8760178 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0x98>
 8760130:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760134:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760138:	89 3c 24             	mov    %edi,(%esp)
 876013b:	e8 d0 d1 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 8760140:	89 f8                	mov    %edi,%eax
 8760142:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760145:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760148:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876014b:	89 ec                	mov    %ebp,%esp
 876014d:	5d                   	pop    %ebp
 876014e:	c2 04 00             	ret    $0x4
 8760151:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760158:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 876015c:	74 32                	je     8760190 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0xb0>
 876015e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760162:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760166:	89 3c 24             	mov    %edi,(%esp)
 8760169:	e8 c2 f8 ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 876016e:	c7 47 0c 01 00 00 00 	movl   $0x1,0xc(%edi)
 8760175:	eb c9                	jmp    8760140 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0x60>
 8760177:	90                   	nop
 8760178:	89 44 24 08          	mov    %eax,0x8(%esp)
 876017c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760180:	89 3c 24             	mov    %edi,(%esp)
 8760183:	e8 a8 f8 ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 8760188:	eb b6                	jmp    8760140 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0x60>
 876018a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8760190:	89 74 24 08          	mov    %esi,0x8(%esp)
 8760194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760198:	89 3c 24             	mov    %edi,(%esp)
 876019b:	e8 70 d1 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 87601a0:	eb 9e                	jmp    8760140 <_ZNK8TaoCrypt7Integer5MinusERKS0_+0x60>
 87601a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87601a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Minus @ 0x87600e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Minus(Integer *param_1)

{
  uint uVar1;
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  uVar1 = *(uint *)in_stack_0000000c;
  if (*(uint *)in_stack_0000000c <= *(uint *)in_stack_00000008) {
    uVar1 = *(uint *)in_stack_00000008;
  }
  Integer(param_1,0,uVar1);
  if (*(int *)(in_stack_00000008 + 0xc) == 1) {
    if (*(int *)(in_stack_0000000c + 0xc) == 1) {
      PositiveSubtract(param_1,in_stack_0000000c,in_stack_00000008);
    }
    else {
      PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  else if (*(int *)(in_stack_0000000c + 0xc) == 1) {
    PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
  }
  else {
    PositiveSubtract(param_1,in_stack_00000008,in_stack_0000000c);
  }
  return param_1;
}

```

---

## Modulo

```asm
// === 0875d5c0 TaoCrypt::Integer::Modulo  [0x0875d5c0-0x875d70f] ===
 875d5c0:	55                   	push   %ebp
 875d5c1:	89 e5                	mov    %esp,%ebp
 875d5c3:	57                   	push   %edi
 875d5c4:	56                   	push   %esi
 875d5c5:	53                   	push   %ebx
 875d5c6:	83 ec 5c             	sub    $0x5c,%esp
 875d5c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d5cc:	e8 27 58 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d5d1:	81 c3 c7 f5 c0 00    	add    $0xc0f5c7,%ebx
 875d5d7:	83 e8 01             	sub    $0x1,%eax
 875d5da:	85 45 0c             	test   %eax,0xc(%ebp)
 875d5dd:	75 21                	jne    875d600 <_ZNK8TaoCrypt7Integer6ModuloEj+0x40>
 875d5df:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d5e2:	8b 51 04             	mov    0x4(%ecx),%edx
 875d5e5:	23 02                	and    (%edx),%eax
 875d5e7:	8b 75 08             	mov    0x8(%ebp),%esi
 875d5ea:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 875d5ee:	0f 84 9c 00 00 00    	je     875d690 <_ZNK8TaoCrypt7Integer6ModuloEj+0xd0>
 875d5f4:	83 c4 5c             	add    $0x5c,%esp
 875d5f7:	5b                   	pop    %ebx
 875d5f8:	5e                   	pop    %esi
 875d5f9:	5f                   	pop    %edi
 875d5fa:	5d                   	pop    %ebp
 875d5fb:	c3                   	ret
 875d5fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d600:	8b 75 08             	mov    0x8(%ebp),%esi
 875d603:	89 34 24             	mov    %esi,(%esp)
 875d606:	e8 25 fb ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d60b:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 875d60f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875d612:	0f 87 90 00 00 00    	ja     875d6a8 <_ZNK8TaoCrypt7Integer6ModuloEj+0xe8>
 875d618:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875d61b:	85 c9                	test   %ecx,%ecx
 875d61d:	0f 84 dd 00 00 00    	je     875d700 <_ZNK8TaoCrypt7Integer6ModuloEj+0x140>
 875d623:	8b 7d 08             	mov    0x8(%ebp),%edi
 875d626:	31 f6                	xor    %esi,%esi
 875d628:	31 c0                	xor    %eax,%eax
 875d62a:	89 f1                	mov    %esi,%ecx
 875d62c:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875d62f:	89 c2                	mov    %eax,%edx
 875d631:	8b 7f 04             	mov    0x4(%edi),%edi
 875d634:	8d 04 b5 fc ff ff ff 	lea    -0x4(,%esi,4),%eax
 875d63b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 875d63e:	89 7d d0             	mov    %edi,-0x30(%ebp)
 875d641:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875d648:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 875d64b:	8b 75 d0             	mov    -0x30(%ebp),%esi
 875d64e:	8b 34 3e             	mov    (%esi,%edi,1),%esi
 875d651:	31 ff                	xor    %edi,%edi
 875d653:	01 f2                	add    %esi,%edx
 875d655:	11 f9                	adc    %edi,%ecx
 875d657:	83 6d c4 04          	subl   $0x4,-0x3c(%ebp)
 875d65b:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 875d65f:	75 e7                	jne    875d648 <_ZNK8TaoCrypt7Integer6ModuloEj+0x88>
 875d661:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875d664:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 875d66b:	00 
 875d66c:	89 14 24             	mov    %edx,(%esp)
 875d66f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875d673:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875d677:	e8 b4 31 38 00       	call   8ae0830 <__umoddi3>
 875d67c:	8b 75 08             	mov    0x8(%ebp),%esi
 875d67f:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 875d683:	0f 85 6b ff ff ff    	jne    875d5f4 <_ZNK8TaoCrypt7Integer6ModuloEj+0x34>
 875d689:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875d690:	8b 55 0c             	mov    0xc(%ebp),%edx
 875d693:	29 c2                	sub    %eax,%edx
 875d695:	85 c0                	test   %eax,%eax
 875d697:	0f 45 c2             	cmovne %edx,%eax
 875d69a:	83 c4 5c             	add    $0x5c,%esp
 875d69d:	5b                   	pop    %ebx
 875d69e:	5e                   	pop    %esi
 875d69f:	5f                   	pop    %edi
 875d6a0:	5d                   	pop    %ebp
 875d6a1:	c3                   	ret
 875d6a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d6a8:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875d6ab:	31 c0                	xor    %eax,%eax
 875d6ad:	85 f6                	test   %esi,%esi
 875d6af:	0f 84 32 ff ff ff    	je     875d5e7 <_ZNK8TaoCrypt7Integer6ModuloEj+0x27>
 875d6b5:	8b 45 08             	mov    0x8(%ebp),%eax
 875d6b8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875d6bb:	8b 78 04             	mov    0x4(%eax),%edi
 875d6be:	31 c0                	xor    %eax,%eax
 875d6c0:	8d 34 95 fc ff ff ff 	lea    -0x4(,%edx,4),%esi
 875d6c7:	90                   	nop
 875d6c8:	8b 14 37             	mov    (%edi,%esi,1),%edx
 875d6cb:	83 ee 04             	sub    $0x4,%esi
 875d6ce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875d6d1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875d6d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 875d6db:	00 
 875d6dc:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875d6df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875d6e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875d6e5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875d6e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 875d6ed:	89 04 24             	mov    %eax,(%esp)
 875d6f0:	e8 3b 31 38 00       	call   8ae0830 <__umoddi3>
 875d6f5:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 875d6f9:	75 cd                	jne    875d6c8 <_ZNK8TaoCrypt7Integer6ModuloEj+0x108>
 875d6fb:	e9 e7 fe ff ff       	jmp    875d5e7 <_ZNK8TaoCrypt7Integer6ModuloEj+0x27>
 875d700:	31 c0                	xor    %eax,%eax
 875d702:	31 f6                	xor    %esi,%esi
 875d704:	89 c2                	mov    %eax,%edx
 875d706:	89 f1                	mov    %esi,%ecx
 875d708:	e9 54 ff ff ff       	jmp    875d661 <_ZNK8TaoCrypt7Integer6ModuloEj+0xa1>
 875d70d:	90                   	nop
 875d70e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::Modulo @ 0x875d5c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Modulo(unsigned int) const */

uint __thiscall TaoCrypt::Integer::Modulo(Integer *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_40;
  int local_30;
  
  if ((param_1 & param_1 - 1) == 0) {
    uVar2 = param_1 - 1 & **(uint **)(this + 4);
  }
  else {
    local_30 = WordCount(this);
    if (param_1 < 6) {
      if (local_30 == 0) {
        uVar2 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        uVar2 = 0;
        local_40 = local_30 * 4;
        do {
          local_40 = local_40 + -4;
          bVar5 = CARRY4(uVar2,*(uint *)(*(int *)(this + 4) + local_40));
          uVar2 = uVar2 + *(uint *)(*(int *)(this + 4) + local_40);
          iVar4 = iVar4 + (uint)bVar5;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      uVar2 = __umoddi3(uVar2,iVar4,param_1,0);
      iVar4 = *(int *)(this + 0xc);
      goto joined_r0x0875d683;
    }
    uVar2 = 0;
    if (local_30 != 0) {
      iVar1 = *(int *)(this + 4);
      uVar2 = 0;
      iVar4 = local_30 * 4;
      do {
        iVar4 = iVar4 + -4;
        uVar2 = __umoddi3(*(undefined4 *)(iVar1 + iVar4),uVar2,param_1,0);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  iVar4 = *(int *)(this + 0xc);
joined_r0x0875d683:
  if (iVar4 != 1) {
    return uVar2;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_1 - uVar2;
  }
  return uVar3;
}

```

---

## Modulo_08762620

```asm
// === 08762620 TaoCrypt::Integer::Modulo  [0x08762620-0x87626af] ===
 8762620:	55                   	push   %ebp
 8762621:	89 e5                	mov    %esp,%ebp
 8762623:	83 ec 38             	sub    $0x38,%esp
 8762626:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8762629:	e8 ca 07 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876262e:	81 c3 6a a5 c0 00    	add    $0xc0a56a,%ebx
 8762634:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8762637:	8b 75 08             	mov    0x8(%ebp),%esi
 876263a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876263d:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8762640:	89 34 24             	mov    %esi,(%esp)
 8762643:	e8 48 cf ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8762648:	89 3c 24             	mov    %edi,(%esp)
 876264b:	e8 40 cf ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8762650:	8b 45 10             	mov    0x10(%ebp),%eax
 8762653:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762657:	89 34 24             	mov    %esi,(%esp)
 876265a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876265e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8762661:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762665:	e8 b6 fe ff ff       	call   8762520 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_>
 876266a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876266d:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8762670:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762677:	00 
 8762678:	c1 e0 02             	shl    $0x2,%eax
 876267b:	89 3c 24             	mov    %edi,(%esp)
 876267e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762682:	e8 39 b6 91 ff       	call   807dcc0 <memset@plt>
 8762687:	89 3c 24             	mov    %edi,(%esp)
 876268a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876268f:	e8 8c 50 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762694:	89 f0                	mov    %esi,%eax
 8762696:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8762699:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876269c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876269f:	89 ec                	mov    %ebp,%esp
 87626a1:	5d                   	pop    %ebp
 87626a2:	c2 04 00             	ret    $0x4
 87626a5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87626a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Modulo @ 0x8762620

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Modulo(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer(param_1);
  Integer((Integer *)&local_2c);
  Divide(param_1,(Integer *)&local_2c,in_stack_00000008,in_stack_0000000c);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}

```

---

## MultiplicativeInverse

```asm
// === 0875f8c0 TaoCrypt::Integer::MultiplicativeInverse  [0x0875f8c0-0x875f90f] ===
 875f8c0:	55                   	push   %ebp
 875f8c1:	89 e5                	mov    %esp,%ebp
 875f8c3:	83 ec 28             	sub    $0x28,%esp
 875f8c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875f8c9:	e8 2a 35 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f8ce:	81 c3 ca d2 c0 00    	add    $0xc0d2ca,%ebx
 875f8d4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875f8d7:	8b 75 0c             	mov    0xc(%ebp),%esi
 875f8da:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875f8dd:	8b 7d 08             	mov    0x8(%ebp),%edi
 875f8e0:	89 34 24             	mov    %esi,(%esp)
 875f8e3:	e8 28 de ff ff       	call   875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>
 875f8e8:	84 c0                	test   %al,%al
 875f8ea:	75 07                	jne    875f8f3 <_ZNK8TaoCrypt7Integer21MultiplicativeInverseEv+0x33>
 875f8ec:	e8 6f ff ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 875f8f1:	89 c6                	mov    %eax,%esi
 875f8f3:	89 74 24 04          	mov    %esi,0x4(%esp)
 875f8f7:	89 3c 24             	mov    %edi,(%esp)
 875f8fa:	e8 71 f9 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f8ff:	89 f8                	mov    %edi,%eax
 875f901:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875f904:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875f907:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875f90a:	89 ec                	mov    %ebp,%esp
 875f90c:	5d                   	pop    %ebp
 875f90d:	c2 04 00             	ret    $0x4

```

```c
// TaoCrypt::Integer::MultiplicativeInverse @ 0x875f8c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::MultiplicativeInverse() const */

Integer * TaoCrypt::Integer::MultiplicativeInverse(void)

{
  char cVar1;
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  
  cVar1 = IsUnit(in_stack_00000008);
  if (cVar1 == '\0') {
    in_stack_00000008 = (Integer *)Zero();
  }
  Integer(in_stack_00000004,in_stack_00000008);
  return in_stack_00000004;
}

```

---

## Negate

```asm
// === 0875d2d0 TaoCrypt::Integer::Negate  [0x0875d2d0-0x875d30f] ===
 875d2d0:	55                   	push   %ebp
 875d2d1:	89 e5                	mov    %esp,%ebp
 875d2d3:	83 ec 18             	sub    $0x18,%esp
 875d2d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875d2d9:	e8 1a 5b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d2de:	81 c3 ba f8 c0 00    	add    $0xc0f8ba,%ebx
 875d2e4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875d2e7:	8b 75 08             	mov    0x8(%ebp),%esi
 875d2ea:	89 34 24             	mov    %esi,(%esp)
 875d2ed:	e8 8e ff ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 875d2f2:	84 c0                	test   %al,%al
 875d2f4:	75 0b                	jne    875d301 <_ZN8TaoCrypt7Integer6NegateEv+0x31>
 875d2f6:	b8 01 00 00 00       	mov    $0x1,%eax
 875d2fb:	2b 46 0c             	sub    0xc(%esi),%eax
 875d2fe:	89 46 0c             	mov    %eax,0xc(%esi)
 875d301:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875d304:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875d307:	89 ec                	mov    %ebp,%esp
 875d309:	5d                   	pop    %ebp
 875d30a:	c3                   	ret
 875d30b:	90                   	nop
 875d30c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::Negate @ 0x875d2d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Negate() */

void __thiscall TaoCrypt::Integer::Negate(Integer *this)

{
  char cVar1;
  
  cVar1 = operator!(this);
  if (cVar1 == '\0') {
    *(int *)(this + 0xc) = 1 - *(int *)(this + 0xc);
  }
  return;
}

```

---

## One

```asm
// === 0875f200 TaoCrypt::Integer::One  [0x0875f200-0x875f26f] ===
 875f200:	55                   	push   %ebp
 875f201:	89 e5                	mov    %esp,%ebp
 875f203:	53                   	push   %ebx
 875f204:	e8 ef 3b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f209:	81 c3 8f d9 c0 00    	add    $0xc0d98f,%ebx
 875f20f:	83 ec 24             	sub    $0x24,%esp
 875f212:	8b 83 94 4c 12 00    	mov    0x124c94(%ebx),%eax
 875f218:	85 c0                	test   %eax,%eax
 875f21a:	74 0c                	je     875f228 <_ZN8TaoCrypt7Integer3OneEv+0x28>
 875f21c:	83 c4 24             	add    $0x24,%esp
 875f21f:	5b                   	pop    %ebx
 875f220:	5d                   	pop    %ebp
 875f221:	c3                   	ret
 875f222:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f228:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f22d:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 875f234:	e8 17 85 00 00       	call   8767750 <_ZnwjN8TaoCrypt5new_tE>
 875f239:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 875f240:	00 
 875f241:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 875f248:	00 
 875f249:	89 04 24             	mov    %eax,(%esp)
 875f24c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 875f24f:	e8 9c fe ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 875f254:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875f257:	89 83 94 4c 12 00    	mov    %eax,0x124c94(%ebx)
 875f25d:	83 c4 24             	add    $0x24,%esp
 875f260:	5b                   	pop    %ebx
 875f261:	5d                   	pop    %ebp
 875f262:	c3                   	ret
 875f263:	90                   	nop
 875f264:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f26a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::One @ 0x875f200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::One() */

void TaoCrypt::Integer::One(void)

{
  Integer *this;
  uint in_stack_ffffffd8;
  
  if (one != (Integer *)0x0) {
    return;
  }
  this = operator_new(0x10,in_stack_ffffffd8 & 0xffffff00);
  Integer(this,1,2);
  one = this;
  return;
}

```

---

## Plus

```asm
// === 087601b0 TaoCrypt::Integer::Plus  [0x087601b0-0x876027f] ===
 87601b0:	55                   	push   %ebp
 87601b1:	89 e5                	mov    %esp,%ebp
 87601b3:	83 ec 38             	sub    $0x38,%esp
 87601b6:	8b 45 10             	mov    0x10(%ebp),%eax
 87601b9:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87601bc:	8b 75 0c             	mov    0xc(%ebp),%esi
 87601bf:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87601c2:	e8 31 2c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87601c7:	81 c3 d1 c9 c0 00    	add    $0xc0c9d1,%ebx
 87601cd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87601d0:	8b 7d 08             	mov    0x8(%ebp),%edi
 87601d3:	8b 10                	mov    (%eax),%edx
 87601d5:	39 16                	cmp    %edx,(%esi)
 87601d7:	0f 43 16             	cmovae (%esi),%edx
 87601da:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87601dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87601e4:	00 
 87601e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 87601e9:	89 3c 24             	mov    %edi,(%esp)
 87601ec:	e8 ff ee ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 87601f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87601f4:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 87601f8:	74 2e                	je     8760228 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0x78>
 87601fa:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 87601fe:	74 40                	je     8760240 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0x90>
 8760200:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760204:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760208:	89 3c 24             	mov    %edi,(%esp)
 876020b:	e8 20 f8 ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 8760210:	89 f8                	mov    %edi,%eax
 8760212:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760215:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760218:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876021b:	89 ec                	mov    %ebp,%esp
 876021d:	5d                   	pop    %ebp
 876021e:	c2 04 00             	ret    $0x4
 8760221:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760228:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 876022c:	74 2a                	je     8760258 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0xa8>
 876022e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8760232:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760236:	89 3c 24             	mov    %edi,(%esp)
 8760239:	e8 d2 d0 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 876023e:	eb d0                	jmp    8760210 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0x60>
 8760240:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760244:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760248:	89 3c 24             	mov    %edi,(%esp)
 876024b:	e8 c0 d0 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 8760250:	eb be                	jmp    8760210 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0x60>
 8760252:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8760258:	89 44 24 08          	mov    %eax,0x8(%esp)
 876025c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760260:	89 3c 24             	mov    %edi,(%esp)
 8760263:	e8 c8 f7 ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 8760268:	c7 47 0c 01 00 00 00 	movl   $0x1,0xc(%edi)
 876026f:	eb 9f                	jmp    8760210 <_ZNK8TaoCrypt7Integer4PlusERKS0_+0x60>
 8760271:	90                   	nop
 8760272:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760279:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Plus @ 0x87601b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Plus(Integer *param_1)

{
  uint uVar1;
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  uVar1 = *(uint *)in_stack_0000000c;
  if (*(uint *)in_stack_0000000c <= *(uint *)in_stack_00000008) {
    uVar1 = *(uint *)in_stack_00000008;
  }
  Integer(param_1,0,uVar1);
  if (*(int *)(in_stack_00000008 + 0xc) == 1) {
    if (*(int *)(in_stack_0000000c + 0xc) == 1) {
      PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      PositiveSubtract(param_1,in_stack_0000000c,in_stack_00000008);
    }
  }
  else if (*(int *)(in_stack_0000000c + 0xc) == 1) {
    PositiveSubtract(param_1,in_stack_00000008,in_stack_0000000c);
  }
  else {
    PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
  }
  return param_1;
}

```

---

## PositiveCompare

```asm
// === 0875d170 TaoCrypt::Integer::PositiveCompare  [0x0875d170-0x875d21f] ===
 875d170:	55                   	push   %ebp
 875d171:	89 e5                	mov    %esp,%ebp
 875d173:	83 ec 28             	sub    $0x28,%esp
 875d176:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875d179:	8b 45 08             	mov    0x8(%ebp),%eax
 875d17c:	e8 77 5c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d181:	81 c3 17 fa c0 00    	add    $0xc0fa17,%ebx
 875d187:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875d18a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875d18d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875d190:	89 04 24             	mov    %eax,(%esp)
 875d193:	e8 98 ff ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d198:	89 3c 24             	mov    %edi,(%esp)
 875d19b:	89 c6                	mov    %eax,%esi
 875d19d:	e8 8e ff ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d1a2:	39 c6                	cmp    %eax,%esi
 875d1a4:	74 32                	je     875d1d8 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x68>
 875d1a6:	77 18                	ja     875d1c0 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x50>
 875d1a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 875d1ad:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875d1b0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875d1b3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875d1b6:	89 ec                	mov    %ebp,%esp
 875d1b8:	5d                   	pop    %ebp
 875d1b9:	c3                   	ret
 875d1ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d1c0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875d1c3:	b8 01 00 00 00       	mov    $0x1,%eax
 875d1c8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875d1cb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875d1ce:	89 ec                	mov    %ebp,%esp
 875d1d0:	5d                   	pop    %ebp
 875d1d1:	c3                   	ret
 875d1d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d1d8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d1db:	8d 04 b5 fc ff ff ff 	lea    -0x4(,%esi,4),%eax
 875d1e2:	89 c2                	mov    %eax,%edx
 875d1e4:	03 47 04             	add    0x4(%edi),%eax
 875d1e7:	03 51 04             	add    0x4(%ecx),%edx
 875d1ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d1f0:	85 f6                	test   %esi,%esi
 875d1f2:	74 1c                	je     875d210 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0xa0>
 875d1f4:	8b 3a                	mov    (%edx),%edi
 875d1f6:	83 ee 01             	sub    $0x1,%esi
 875d1f9:	8b 08                	mov    (%eax),%ecx
 875d1fb:	39 cf                	cmp    %ecx,%edi
 875d1fd:	77 c1                	ja     875d1c0 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x50>
 875d1ff:	83 ea 04             	sub    $0x4,%edx
 875d202:	83 e8 04             	sub    $0x4,%eax
 875d205:	39 cf                	cmp    %ecx,%edi
 875d207:	73 e7                	jae    875d1f0 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x80>
 875d209:	eb 9d                	jmp    875d1a8 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x38>
 875d20b:	90                   	nop
 875d20c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d210:	31 c0                	xor    %eax,%eax
 875d212:	eb 99                	jmp    875d1ad <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_+0x3d>
 875d214:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d21a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::PositiveCompare @ 0x875d170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const */

undefined4 __thiscall TaoCrypt::Integer::PositiveCompare(Integer *this,Integer *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = WordCount(this);
  uVar4 = WordCount(param_1);
  if (uVar3 == uVar4) {
    iVar1 = uVar3 * 4 + -4;
    puVar5 = (uint *)(iVar1 + *(int *)(param_1 + 4));
    puVar6 = (uint *)(iVar1 + *(int *)(this + 4));
    do {
      if (uVar3 == 0) {
        return 0;
      }
      uVar4 = *puVar6;
      uVar3 = uVar3 - 1;
      uVar2 = *puVar5;
      if (uVar2 < uVar4) {
        return 1;
      }
      puVar6 = puVar6 + -1;
      puVar5 = puVar5 + -1;
    } while (uVar2 <= uVar4);
  }
  else if (uVar4 < uVar3) {
    return 1;
  }
  return 0xffffffff;
}

```

---

## Power2

```asm
// === 08760d70 TaoCrypt::Integer::Power2  [0x08760d70-0x8760dcf] ===
 8760d70:	55                   	push   %ebp
 8760d71:	89 e5                	mov    %esp,%ebp
 8760d73:	83 ec 28             	sub    $0x28,%esp
 8760d76:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8760d79:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760d7c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8760d7f:	e8 74 20 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760d84:	81 c3 14 be c0 00    	add    $0xc0be14,%ebx
 8760d8a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8760d8d:	8b 75 08             	mov    0x8(%ebp),%esi
 8760d90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760d97:	00 
 8760d98:	8d 47 20             	lea    0x20(%edi),%eax
 8760d9b:	c1 e8 05             	shr    $0x5,%eax
 8760d9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760da2:	89 34 24             	mov    %esi,(%esp)
 8760da5:	e8 46 e3 ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 8760daa:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8760dae:	89 34 24             	mov    %esi,(%esp)
 8760db1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8760db8:	00 
 8760db9:	e8 92 fe ff ff       	call   8760c50 <_ZN8TaoCrypt7Integer6SetBitEjb>
 8760dbe:	89 f0                	mov    %esi,%eax
 8760dc0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760dc3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760dc6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760dc9:	89 ec                	mov    %ebp,%esp
 8760dcb:	5d                   	pop    %ebp
 8760dcc:	c2 04 00             	ret    $0x4
 8760dcf:	90                   	nop

```

```c
// TaoCrypt::Integer::Power2 @ 0x8760d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Power2(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::Power2(Integer *this,uint param_1)

{
  Integer(this,0,param_1 + 0x20 >> 5);
  SetBit(this,param_1,true);
  return this;
}

```

---

## Randomize

```asm
// === 08761380 TaoCrypt::Integer::Randomize  [0x08761380-0x876143f] ===
 8761380:	55                   	push   %ebp
 8761381:	89 e5                	mov    %esp,%ebp
 8761383:	83 ec 28             	sub    $0x28,%esp
 8761386:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8761389:	8b 7d 10             	mov    0x10(%ebp),%edi
 876138c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876138f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8761392:	e8 61 1a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761397:	81 c3 01 b8 c0 00    	add    $0xc0b801,%ebx
 876139d:	c1 ef 03             	shr    $0x3,%edi
 87613a0:	83 c7 01             	add    $0x1,%edi
 87613a3:	89 3c 24             	mov    %edi,(%esp)
 87613a6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87613ab:	e8 e0 63 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87613b0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87613b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87613bb:	00 
 87613bc:	89 c6                	mov    %eax,%esi
 87613be:	89 04 24             	mov    %eax,(%esp)
 87613c1:	e8 fa c8 91 ff       	call   807dcc0 <memset@plt>
 87613c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87613c9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87613cd:	89 74 24 04          	mov    %esi,0x4(%esp)
 87613d1:	89 04 24             	mov    %eax,(%esp)
 87613d4:	e8 07 65 00 00       	call   87678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>
 87613d9:	8b 45 10             	mov    0x10(%ebp),%eax
 87613dc:	83 e0 07             	and    $0x7,%eax
 87613df:	89 44 24 04          	mov    %eax,0x4(%esp)
 87613e3:	0f b6 06             	movzbl (%esi),%eax
 87613e6:	89 04 24             	mov    %eax,(%esp)
 87613e9:	e8 92 61 00 00       	call   8767580 <_ZN8TaoCrypt4CropEjj>
 87613ee:	88 06                	mov    %al,(%esi)
 87613f0:	8b 45 08             	mov    0x8(%ebp),%eax
 87613f3:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87613f7:	89 74 24 04          	mov    %esi,0x4(%esp)
 87613fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8761402:	00 
 8761403:	89 04 24             	mov    %eax,(%esp)
 8761406:	e8 45 fc ff ff       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 876140b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876140f:	89 34 24             	mov    %esi,(%esp)
 8761412:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761419:	00 
 876141a:	e8 a1 c8 91 ff       	call   807dcc0 <memset@plt>
 876141f:	89 34 24             	mov    %esi,(%esp)
 8761422:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761427:	e8 f4 62 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876142c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876142f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8761432:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8761435:	89 ec                	mov    %ebp,%esp
 8761437:	5d                   	pop    %ebp
 8761438:	c3                   	ret
 8761439:	90                   	nop
 876143a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Integer::Randomize @ 0x8761380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, unsigned int) */

void __thiscall
TaoCrypt::Integer::Randomize(Integer *this,RandomNumberGenerator *param_1,uint param_2)

{
  byte bVar1;
  byte *__s;
  size_t __n;
  uint in_stack_ffffffd8;
  uint uVar2;
  
  __n = (param_2 >> 3) + 1;
  __s = operator_new__(__n,in_stack_ffffffd8 & 0xffffff00);
  memset(__s,0,__n);
  RandomNumberGenerator::GenerateBlock(param_1,__s,__n);
  bVar1 = Crop((uint)*__s,param_2 & 7);
  *__s = bVar1;
  Decode(this,__s,__n,0);
  uVar2 = 0;
  memset(__s,0,__n);
  operator_delete__(__s,uVar2 & 0xffffff00);
  return;
}

```

---

## Randomize_08761440

```asm
// === 08761440 TaoCrypt::Integer::Randomize  [0x08761440-0x87614ef] ===
 8761440:	55                   	push   %ebp
 8761441:	89 e5                	mov    %esp,%ebp
 8761443:	57                   	push   %edi
 8761444:	56                   	push   %esi
 8761445:	53                   	push   %ebx
 8761446:	83 ec 3c             	sub    $0x3c,%esp
 8761449:	8b 45 10             	mov    0x10(%ebp),%eax
 876144c:	e8 a7 19 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761451:	81 c3 47 b7 c0 00    	add    $0xc0b747,%ebx
 8761457:	8d 7d d8             	lea    -0x28(%ebp),%edi
 876145a:	8b 75 08             	mov    0x8(%ebp),%esi
 876145d:	89 3c 24             	mov    %edi,(%esp)
 8761460:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761464:	8b 45 14             	mov    0x14(%ebp),%eax
 8761467:	89 44 24 04          	mov    %eax,0x4(%esp)
 876146b:	e8 70 ec ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 8761470:	83 ec 04             	sub    $0x4,%esp
 8761473:	89 3c 24             	mov    %edi,(%esp)
 8761476:	e8 65 d7 ff ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 876147b:	89 7d d0             	mov    %edi,-0x30(%ebp)
 876147e:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8761481:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8761484:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761488:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 876148b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 876148f:	89 34 24             	mov    %esi,(%esp)
 8761492:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761496:	e8 e5 fe ff ff       	call   8761380 <_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorEj>
 876149b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 876149e:	89 34 24             	mov    %esi,(%esp)
 87614a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87614a5:	e8 76 bd ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 87614aa:	85 c0                	test   %eax,%eax
 87614ac:	7f da                	jg     8761488 <_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorERKS0_S4_+0x48>
 87614ae:	8b 45 10             	mov    0x10(%ebp),%eax
 87614b1:	89 34 24             	mov    %esi,(%esp)
 87614b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87614b8:	e8 23 e9 ff ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 87614bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87614c0:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87614c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87614ca:	00 
 87614cb:	c1 e0 02             	shl    $0x2,%eax
 87614ce:	89 34 24             	mov    %esi,(%esp)
 87614d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 87614d5:	e8 e6 c7 91 ff       	call   807dcc0 <memset@plt>
 87614da:	89 34 24             	mov    %esi,(%esp)
 87614dd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87614e2:	e8 39 62 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87614e7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87614ea:	5b                   	pop    %ebx
 87614eb:	5e                   	pop    %esi
 87614ec:	5f                   	pop    %edi
 87614ed:	5d                   	pop    %ebp
 87614ee:	c3                   	ret
 87614ef:	90                   	nop

```

```c
// TaoCrypt::Integer::Randomize @ 0x8761440

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void TaoCrypt::Integer::Randomize(RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3)

{
  uint uVar1;
  int iVar2;
  int local_2c;
  void *local_28;
  
  Minus((Integer *)&local_2c);
  uVar1 = BitCount((Integer *)&local_2c);
  do {
    Randomize((Integer *)param_1,(RandomNumberGenerator *)param_2,uVar1);
    iVar2 = Compare((Integer *)param_1,(Integer *)&local_2c);
  } while (0 < iVar2);
  operator+=((Integer *)param_1,param_3);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return;
}

```

---

## SetBit

```asm
// === 08760c50 TaoCrypt::Integer::SetBit  [0x08760c50-0x8760d6f] ===
 8760c50:	55                   	push   %ebp
 8760c51:	89 e5                	mov    %esp,%ebp
 8760c53:	83 ec 48             	sub    $0x48,%esp
 8760c56:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8760c59:	e8 9a 21 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760c5e:	81 c3 3a bf c0 00    	add    $0xc0bf3a,%ebx
 8760c64:	80 7d 10 00          	cmpb   $0x0,0x10(%ebp)
 8760c68:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8760c6b:	8b 75 08             	mov    0x8(%ebp),%esi
 8760c6e:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760c71:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8760c74:	75 2a                	jne    8760ca0 <_ZN8TaoCrypt7Integer6SetBitEjb+0x50>
 8760c76:	89 f8                	mov    %edi,%eax
 8760c78:	c1 e8 05             	shr    $0x5,%eax
 8760c7b:	3b 06                	cmp    (%esi),%eax
 8760c7d:	73 14                	jae    8760c93 <_ZN8TaoCrypt7Integer6SetBitEjb+0x43>
 8760c7f:	c1 e0 02             	shl    $0x2,%eax
 8760c82:	89 f9                	mov    %edi,%ecx
 8760c84:	03 46 04             	add    0x4(%esi),%eax
 8760c87:	83 e1 1f             	and    $0x1f,%ecx
 8760c8a:	ba fe ff ff ff       	mov    $0xfffffffe,%edx
 8760c8f:	d3 c2                	rol    %cl,%edx
 8760c91:	21 10                	and    %edx,(%eax)
 8760c93:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760c96:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760c99:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760c9c:	89 ec                	mov    %ebp,%esp
 8760c9e:	5d                   	pop    %ebp
 8760c9f:	c3                   	ret
 8760ca0:	8d 47 20             	lea    0x20(%edi),%eax
 8760ca3:	c1 e8 05             	shr    $0x5,%eax
 8760ca6:	83 f8 08             	cmp    $0x8,%eax
 8760ca9:	76 35                	jbe    8760ce0 <_ZN8TaoCrypt7Integer6SetBitEjb+0x90>
 8760cab:	83 f8 10             	cmp    $0x10,%eax
 8760cae:	ba 10 00 00 00       	mov    $0x10,%edx
 8760cb3:	76 32                	jbe    8760ce7 <_ZN8TaoCrypt7Integer6SetBitEjb+0x97>
 8760cb5:	83 f8 20             	cmp    $0x20,%eax
 8760cb8:	b2 20                	mov    $0x20,%dl
 8760cba:	76 2b                	jbe    8760ce7 <_ZN8TaoCrypt7Integer6SetBitEjb+0x97>
 8760cbc:	83 f8 40             	cmp    $0x40,%eax
 8760cbf:	b2 40                	mov    $0x40,%dl
 8760cc1:	76 24                	jbe    8760ce7 <_ZN8TaoCrypt7Integer6SetBitEjb+0x97>
 8760cc3:	83 e8 01             	sub    $0x1,%eax
 8760cc6:	89 04 24             	mov    %eax,(%esp)
 8760cc9:	e8 72 68 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 8760cce:	ba 01 00 00 00       	mov    $0x1,%edx
 8760cd3:	89 c1                	mov    %eax,%ecx
 8760cd5:	d3 e2                	shl    %cl,%edx
 8760cd7:	eb 0e                	jmp    8760ce7 <_ZN8TaoCrypt7Integer6SetBitEjb+0x97>
 8760cd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760ce0:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 8760ce7:	8b 06                	mov    (%esi),%eax
 8760ce9:	39 c2                	cmp    %eax,%edx
 8760ceb:	76 50                	jbe    8760d3d <_ZN8TaoCrypt7Integer6SetBitEjb+0xed>
 8760ced:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8760cf1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8760cf8:	00 
 8760cf9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760cfd:	8b 46 04             	mov    0x4(%esi),%eax
 8760d00:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8760d03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760d07:	8d 46 08             	lea    0x8(%esi),%eax
 8760d0a:	89 04 24             	mov    %eax,(%esp)
 8760d0d:	e8 ae 2f 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 8760d12:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8760d15:	89 d1                	mov    %edx,%ecx
 8760d17:	2b 0e                	sub    (%esi),%ecx
 8760d19:	89 46 04             	mov    %eax,0x4(%esi)
 8760d1c:	c1 e1 02             	shl    $0x2,%ecx
 8760d1f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8760d23:	8b 0e                	mov    (%esi),%ecx
 8760d25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760d2c:	00 
 8760d2d:	8d 04 88             	lea    (%eax,%ecx,4),%eax
 8760d30:	89 04 24             	mov    %eax,(%esp)
 8760d33:	e8 88 cf 91 ff       	call   807dcc0 <memset@plt>
 8760d38:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8760d3b:	89 16                	mov    %edx,(%esi)
 8760d3d:	89 f8                	mov    %edi,%eax
 8760d3f:	89 f9                	mov    %edi,%ecx
 8760d41:	c1 e8 05             	shr    $0x5,%eax
 8760d44:	83 e1 1f             	and    $0x1f,%ecx
 8760d47:	c1 e0 02             	shl    $0x2,%eax
 8760d4a:	ba 01 00 00 00       	mov    $0x1,%edx
 8760d4f:	03 46 04             	add    0x4(%esi),%eax
 8760d52:	d3 e2                	shl    %cl,%edx
 8760d54:	09 10                	or     %edx,(%eax)
 8760d56:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760d59:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760d5c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760d5f:	89 ec                	mov    %ebp,%esp
 8760d61:	5d                   	pop    %ebp
 8760d62:	c3                   	ret
 8760d63:	90                   	nop
 8760d64:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8760d6a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::SetBit @ 0x8760c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SetBit(unsigned int, bool) */

void __thiscall TaoCrypt::Integer::SetBit(Integer *this,uint param_1,bool param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  if (!param_2) {
    if (param_1 >> 5 < *(uint *)this) {
      puVar1 = (uint *)((param_1 >> 5) * 4 + *(int *)(this + 4));
      bVar4 = (byte)param_1 & 0x1f;
      *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
    return;
  }
  uVar2 = param_1 + 0x20 >> 5;
  if (uVar2 < 9) {
    uVar5 = (&RoundupSizeTable)[uVar2];
  }
  else {
    uVar5 = 0x10;
    if (((0x10 < uVar2) && (uVar5 = 0x20, 0x20 < uVar2)) && (uVar5 = 0x40, 0x40 < uVar2)) {
      bVar4 = BitPrecision(uVar2 - 1);
      uVar5 = 1 << (bVar4 & 0x1f);
    }
  }
  if (*(uint *)this < uVar5) {
    iVar3 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar5,true);
    *(int *)(this + 4) = iVar3;
    memset((void *)(iVar3 + *(int *)this * 4),0,(uVar5 - *(int *)this) * 4);
    *(uint *)this = uVar5;
  }
  puVar1 = (uint *)((param_1 >> 5) * 4 + *(int *)(this + 4));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}

```

---

## SetByte

```asm
// === 0875ef40 TaoCrypt::Integer::SetByte  [0x0875ef40-0x875f04f] ===
 875ef40:	55                   	push   %ebp
 875ef41:	89 e5                	mov    %esp,%ebp
 875ef43:	83 ec 48             	sub    $0x48,%esp
 875ef46:	0f b6 45 10          	movzbl 0x10(%ebp),%eax
 875ef4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 875ef4d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ef50:	e8 a3 3e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ef55:	81 c3 43 dc c0 00    	add    $0xc0dc43,%ebx
 875ef5b:	88 45 e7             	mov    %al,-0x19(%ebp)
 875ef5e:	8d 42 04             	lea    0x4(%edx),%eax
 875ef61:	c1 e8 02             	shr    $0x2,%eax
 875ef64:	83 f8 08             	cmp    $0x8,%eax
 875ef67:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ef6a:	8b 75 08             	mov    0x8(%ebp),%esi
 875ef6d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ef70:	0f 86 aa 00 00 00    	jbe    875f020 <_ZN8TaoCrypt7Integer7SetByteEjh+0xe0>
 875ef76:	83 f8 10             	cmp    $0x10,%eax
 875ef79:	bf 10 00 00 00       	mov    $0x10,%edi
 875ef7e:	76 18                	jbe    875ef98 <_ZN8TaoCrypt7Integer7SetByteEjh+0x58>
 875ef80:	83 f8 20             	cmp    $0x20,%eax
 875ef83:	66 bf 20 00          	mov    $0x20,%di
 875ef87:	76 0f                	jbe    875ef98 <_ZN8TaoCrypt7Integer7SetByteEjh+0x58>
 875ef89:	83 f8 40             	cmp    $0x40,%eax
 875ef8c:	66 bf 40 00          	mov    $0x40,%di
 875ef90:	0f 87 9a 00 00 00    	ja     875f030 <_ZN8TaoCrypt7Integer7SetByteEjh+0xf0>
 875ef96:	66 90                	xchg   %ax,%ax
 875ef98:	8b 06                	mov    (%esi),%eax
 875ef9a:	39 c7                	cmp    %eax,%edi
 875ef9c:	76 4d                	jbe    875efeb <_ZN8TaoCrypt7Integer7SetByteEjh+0xab>
 875ef9e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 875efa5:	00 
 875efa6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875efaa:	89 44 24 08          	mov    %eax,0x8(%esp)
 875efae:	8b 46 04             	mov    0x4(%esi),%eax
 875efb1:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875efb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 875efb8:	8d 46 08             	lea    0x8(%esi),%eax
 875efbb:	89 04 24             	mov    %eax,(%esp)
 875efbe:	e8 fd 4c 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875efc3:	89 f9                	mov    %edi,%ecx
 875efc5:	2b 0e                	sub    (%esi),%ecx
 875efc7:	c1 e1 02             	shl    $0x2,%ecx
 875efca:	89 46 04             	mov    %eax,0x4(%esi)
 875efcd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875efd1:	8b 0e                	mov    (%esi),%ecx
 875efd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875efda:	00 
 875efdb:	8d 04 88             	lea    (%eax,%ecx,4),%eax
 875efde:	89 04 24             	mov    %eax,(%esp)
 875efe1:	e8 da ec 91 ff       	call   807dcc0 <memset@plt>
 875efe6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875efe9:	89 3e                	mov    %edi,(%esi)
 875efeb:	89 d0                	mov    %edx,%eax
 875efed:	83 e2 03             	and    $0x3,%edx
 875eff0:	83 e0 fc             	and    $0xfffffffc,%eax
 875eff3:	03 46 04             	add    0x4(%esi),%eax
 875eff6:	be ff 00 00 00       	mov    $0xff,%esi
 875effb:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 875f002:	d3 e6                	shl    %cl,%esi
 875f004:	f7 d6                	not    %esi
 875f006:	21 30                	and    %esi,(%eax)
 875f008:	0f b6 75 e7          	movzbl -0x19(%ebp),%esi
 875f00c:	d3 e6                	shl    %cl,%esi
 875f00e:	09 30                	or     %esi,(%eax)
 875f010:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875f013:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875f016:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875f019:	89 ec                	mov    %ebp,%esp
 875f01b:	5d                   	pop    %ebp
 875f01c:	c3                   	ret
 875f01d:	8d 76 00             	lea    0x0(%esi),%esi
 875f020:	8b bc 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edi
 875f027:	e9 6c ff ff ff       	jmp    875ef98 <_ZN8TaoCrypt7Integer7SetByteEjh+0x58>
 875f02c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875f030:	83 e8 01             	sub    $0x1,%eax
 875f033:	66 bf 01 00          	mov    $0x1,%di
 875f037:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875f03a:	89 04 24             	mov    %eax,(%esp)
 875f03d:	e8 fe 84 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875f042:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875f045:	89 c1                	mov    %eax,%ecx
 875f047:	d3 e7                	shl    %cl,%edi
 875f049:	e9 4a ff ff ff       	jmp    875ef98 <_ZN8TaoCrypt7Integer7SetByteEjh+0x58>
 875f04e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::SetByte @ 0x875ef40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SetByte(unsigned int, unsigned char) */

void __thiscall TaoCrypt::Integer::SetByte(Integer *this,uint param_1,uchar param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  
  uVar2 = param_1 + 4 >> 2;
  if (uVar2 < 9) {
    uVar6 = (&RoundupSizeTable)[uVar2];
  }
  else {
    uVar6 = 0x10;
    if (((0x10 < uVar2) && (uVar6 = 0x20, 0x20 < uVar2)) && (uVar6 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      uVar6 = 1 << (bVar1 & 0x1f);
    }
  }
  if (*(uint *)this < uVar6) {
    iVar3 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar6,true);
    *(int *)(this + 4) = iVar3;
    memset((void *)(iVar3 + *(int *)this * 4),0,(uVar6 - *(int *)this) * 4);
    *(uint *)this = uVar6;
  }
  puVar4 = (uint *)((param_1 & 0xfffffffc) + *(int *)(this + 4));
  sVar5 = ((byte)param_1 & 3) * '\b';
  *puVar4 = *puVar4 & ~(0xff << sVar5);
  *puVar4 = *puVar4 | (uint)param_2 << sVar5;
  return;
}

```

---

## SquareRoot

```asm
// === 08763580 TaoCrypt::Integer::SquareRoot  [0x08763580-0x876381f] ===
 8763580:	55                   	push   %ebp
 8763581:	89 e5                	mov    %esp,%ebp
 8763583:	57                   	push   %edi
 8763584:	56                   	push   %esi
 8763585:	53                   	push   %ebx
 8763586:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 876358c:	8b 45 0c             	mov    0xc(%ebp),%eax
 876358f:	e8 64 f8 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8763594:	81 c3 04 96 c0 00    	add    $0xc09604,%ebx
 876359a:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 876359e:	0f 84 4c 02 00 00    	je     87637f0 <_ZNK8TaoCrypt7Integer10SquareRootEv+0x270>
 87635a4:	89 04 24             	mov    %eax,(%esp)
 87635a7:	e8 d4 9c ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 87635ac:	84 c0                	test   %al,%al
 87635ae:	0f 85 3c 02 00 00    	jne    87637f0 <_ZNK8TaoCrypt7Integer10SquareRootEv+0x270>
 87635b4:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87635b7:	89 34 24             	mov    %esi,(%esp)
 87635ba:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87635bd:	e8 ce bf ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87635c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87635c5:	89 04 24             	mov    %eax,(%esp)
 87635c8:	e8 13 b6 ff ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 87635cd:	89 3c 24             	mov    %edi,(%esp)
 87635d0:	83 c0 01             	add    $0x1,%eax
 87635d3:	d1 e8                	shr    $1,%eax
 87635d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87635d9:	e8 92 d7 ff ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 87635de:	8d 45 b8             	lea    -0x48(%ebp),%eax
 87635e1:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 87635e7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 87635ea:	89 45 84             	mov    %eax,-0x7c(%ebp)
 87635ed:	8d 45 88             	lea    -0x78(%ebp),%eax
 87635f0:	89 45 80             	mov    %eax,-0x80(%ebp)
 87635f3:	8d 45 98             	lea    -0x68(%ebp),%eax
 87635f6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 87635fc:	83 ec 04             	sub    $0x4,%esp
 87635ff:	90                   	nop
 8763600:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8763604:	89 34 24             	mov    %esi,(%esp)
 8763607:	e8 54 ce ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 876360c:	8b 45 0c             	mov    0xc(%ebp),%eax
 876360f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8763613:	89 44 24 04          	mov    %eax,0x4(%esp)
 8763617:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876361d:	89 04 24             	mov    %eax,(%esp)
 8763620:	e8 2b fb ff ff       	call   8763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>
 8763625:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876362b:	83 ec 04             	sub    $0x4,%esp
 876362e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763632:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8763635:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763639:	89 04 24             	mov    %eax,(%esp)
 876363c:	e8 6f cb ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8763641:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8763644:	83 ec 04             	sub    $0x4,%esp
 8763647:	89 44 24 04          	mov    %eax,0x4(%esp)
 876364b:	8b 45 80             	mov    -0x80(%ebp),%eax
 876364e:	89 04 24             	mov    %eax,(%esp)
 8763651:	e8 1a bc ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8763656:	8b 45 80             	mov    -0x80(%ebp),%eax
 8763659:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8763660:	00 
 8763661:	89 04 24             	mov    %eax,(%esp)
 8763664:	e8 b7 d1 ff ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 8763669:	89 44 24 04          	mov    %eax,0x4(%esp)
 876366d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8763673:	89 04 24             	mov    %eax,(%esp)
 8763676:	e8 f5 bb ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 876367b:	8b 45 88             	mov    -0x78(%ebp),%eax
 876367e:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8763681:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763688:	00 
 8763689:	c1 e0 02             	shl    $0x2,%eax
 876368c:	89 14 24             	mov    %edx,(%esp)
 876368f:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 8763695:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763699:	e8 22 a6 91 ff       	call   807dcc0 <memset@plt>
 876369e:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 87636a4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87636a9:	89 14 24             	mov    %edx,(%esp)
 87636ac:	e8 6f 40 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87636b1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 87636b7:	89 3c 24             	mov    %edi,(%esp)
 87636ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 87636be:	e8 9d cd ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87636c3:	8b 45 98             	mov    -0x68(%ebp),%eax
 87636c6:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87636c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87636d0:	00 
 87636d1:	c1 e0 02             	shl    $0x2,%eax
 87636d4:	89 14 24             	mov    %edx,(%esp)
 87636d7:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 87636dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87636e1:	e8 da a5 91 ff       	call   807dcc0 <memset@plt>
 87636e6:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 87636ec:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87636f1:	89 14 24             	mov    %edx,(%esp)
 87636f4:	e8 27 40 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87636f9:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87636fc:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87636ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763706:	00 
 8763707:	c1 e0 02             	shl    $0x2,%eax
 876370a:	89 14 24             	mov    %edx,(%esp)
 876370d:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 8763713:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763717:	e8 a4 a5 91 ff       	call   807dcc0 <memset@plt>
 876371c:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8763722:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763727:	89 14 24             	mov    %edx,(%esp)
 876372a:	e8 f1 3f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876372f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8763732:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8763735:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876373c:	00 
 876373d:	c1 e0 02             	shl    $0x2,%eax
 8763740:	89 14 24             	mov    %edx,(%esp)
 8763743:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 8763749:	89 44 24 08          	mov    %eax,0x8(%esp)
 876374d:	e8 6e a5 91 ff       	call   807dcc0 <memset@plt>
 8763752:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8763758:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876375d:	89 14 24             	mov    %edx,(%esp)
 8763760:	e8 bb 3f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763765:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763769:	89 3c 24             	mov    %edi,(%esp)
 876376c:	e8 af 9a ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8763771:	85 c0                	test   %eax,%eax
 8763773:	0f 88 87 fe ff ff    	js     8763600 <_ZNK8TaoCrypt7Integer10SquareRootEv+0x80>
 8763779:	8b 45 08             	mov    0x8(%ebp),%eax
 876377c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8763780:	89 04 24             	mov    %eax,(%esp)
 8763783:	e8 e8 ba ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8763788:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876378b:	8b 75 cc             	mov    -0x34(%ebp),%esi
 876378e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763795:	00 
 8763796:	c1 e0 02             	shl    $0x2,%eax
 8763799:	89 34 24             	mov    %esi,(%esp)
 876379c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87637a0:	e8 1b a5 91 ff       	call   807dcc0 <memset@plt>
 87637a5:	89 34 24             	mov    %esi,(%esp)
 87637a8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87637ad:	e8 6e 3f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87637b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87637b5:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87637b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87637bf:	00 
 87637c0:	c1 e0 02             	shl    $0x2,%eax
 87637c3:	89 34 24             	mov    %esi,(%esp)
 87637c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87637ca:	e8 f1 a4 91 ff       	call   807dcc0 <memset@plt>
 87637cf:	89 34 24             	mov    %esi,(%esp)
 87637d2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87637d7:	e8 44 3f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87637dc:	8b 45 08             	mov    0x8(%ebp),%eax
 87637df:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87637e2:	5b                   	pop    %ebx
 87637e3:	5e                   	pop    %esi
 87637e4:	5f                   	pop    %edi
 87637e5:	5d                   	pop    %ebp
 87637e6:	c2 04 00             	ret    $0x4
 87637e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87637f0:	e8 6b c0 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 87637f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87637f9:	8b 45 08             	mov    0x8(%ebp),%eax
 87637fc:	89 04 24             	mov    %eax,(%esp)
 87637ff:	e8 6c ba ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8763804:	8b 45 08             	mov    0x8(%ebp),%eax
 8763807:	8d 65 f4             	lea    -0xc(%ebp),%esp
 876380a:	5b                   	pop    %ebx
 876380b:	5e                   	pop    %esi
 876380c:	5f                   	pop    %edi
 876380d:	5d                   	pop    %ebp
 876380e:	c2 04 00             	ret    $0x4
 8763811:	90                   	nop
 8763812:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8763819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::SquareRoot @ 0x8763580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SquareRoot() const */

Integer * TaoCrypt::Integer::SquareRoot(void)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  Integer *pIVar4;
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  uint uVar5;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  if (*(int *)(in_stack_00000008 + 0xc) != 1) {
    cVar2 = operator!(in_stack_00000008);
    if (cVar2 == '\0') {
      Integer((Integer *)&local_2c);
      iVar3 = BitCount(in_stack_00000008);
      Power2((Integer *)&local_3c,iVar3 + 1U >> 1);
      do {
        operator=((Integer *)&local_2c,(Integer *)&local_3c);
        DividedBy((Integer *)&local_4c);
        Plus((Integer *)&local_5c);
        Integer((Integer *)&local_7c,(Integer *)&local_5c);
        pIVar4 = (Integer *)operator>>=((Integer *)&local_7c,1);
        Integer((Integer *)&local_6c,pIVar4);
        pvVar1 = local_78;
        uVar5 = 0;
        memset(local_78,0,local_7c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        operator=((Integer *)&local_3c,(Integer *)&local_6c);
        pvVar1 = local_68;
        uVar5 = 0;
        memset(local_68,0,local_6c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        pvVar1 = local_58;
        uVar5 = 0;
        memset(local_58,0,local_5c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        pvVar1 = local_48;
        uVar5 = 0;
        memset(local_48,0,local_4c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        iVar3 = Compare((Integer *)&local_3c,(Integer *)&local_2c);
      } while (iVar3 < 0);
      Integer(in_stack_00000004,(Integer *)&local_2c);
      uVar5 = 0;
      memset(local_38,0,local_3c << 2);
      operator_delete__(local_38,uVar5 & 0xffffff00);
      uVar5 = 0;
      memset(local_28,0,local_2c << 2);
      operator_delete__(local_28,uVar5 & 0xffffff00);
      return in_stack_00000004;
    }
  }
  pIVar4 = (Integer *)Zero();
  Integer(in_stack_00000004,pIVar4);
  return in_stack_00000004;
}

```

---

## Swap

```asm
// === 0875d590 TaoCrypt::Integer::Swap  [0x0875d590-0x875d5bf] ===
 875d590:	55                   	push   %ebp
 875d591:	89 e5                	mov    %esp,%ebp
 875d593:	8b 55 08             	mov    0x8(%ebp),%edx
 875d596:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d599:	56                   	push   %esi
 875d59a:	8b 0a                	mov    (%edx),%ecx
 875d59c:	8b 30                	mov    (%eax),%esi
 875d59e:	89 32                	mov    %esi,(%edx)
 875d5a0:	8b 70 04             	mov    0x4(%eax),%esi
 875d5a3:	89 08                	mov    %ecx,(%eax)
 875d5a5:	8b 4a 04             	mov    0x4(%edx),%ecx
 875d5a8:	89 72 04             	mov    %esi,0x4(%edx)
 875d5ab:	8b 70 0c             	mov    0xc(%eax),%esi
 875d5ae:	89 48 04             	mov    %ecx,0x4(%eax)
 875d5b1:	8b 4a 0c             	mov    0xc(%edx),%ecx
 875d5b4:	89 72 0c             	mov    %esi,0xc(%edx)
 875d5b7:	89 48 0c             	mov    %ecx,0xc(%eax)
 875d5ba:	5e                   	pop    %esi
 875d5bb:	5d                   	pop    %ebp
 875d5bc:	c3                   	ret
 875d5bd:	90                   	nop
 875d5be:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::Swap @ 0x875d590

/* TaoCrypt::Integer::Swap(TaoCrypt::Integer&) */

void __thiscall TaoCrypt::Integer::Swap(Integer *this,Integer *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

```

---

## Times

```asm
// === 08762160 TaoCrypt::Integer::Times  [0x08762160-0x87621af] ===
 8762160:	55                   	push   %ebp
 8762161:	89 e5                	mov    %esp,%ebp
 8762163:	83 ec 18             	sub    $0x18,%esp
 8762166:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8762169:	e8 8a 0c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876216e:	81 c3 2a aa c0 00    	add    $0xc0aa2a,%ebx
 8762174:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8762177:	8b 75 08             	mov    0x8(%ebp),%esi
 876217a:	89 34 24             	mov    %esi,(%esp)
 876217d:	e8 0e d4 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8762182:	8b 45 10             	mov    0x10(%ebp),%eax
 8762185:	89 34 24             	mov    %esi,(%esp)
 8762188:	89 44 24 08          	mov    %eax,0x8(%esp)
 876218c:	8b 45 0c             	mov    0xc(%ebp),%eax
 876218f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762193:	e8 68 ff ff ff       	call   8762100 <_ZN8TaoCrypt8MultiplyERNS_7IntegerERKS0_S3_>
 8762198:	89 f0                	mov    %esi,%eax
 876219a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 876219d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87621a0:	89 ec                	mov    %ebp,%esp
 87621a2:	5d                   	pop    %ebp
 87621a3:	c2 04 00             	ret    $0x4
 87621a6:	8d 76 00             	lea    0x0(%esi),%esi
 87621a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::Times @ 0x8762160

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Times(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  Integer(param_1);
  Multiply(param_1,in_stack_00000008,in_stack_0000000c);
  return param_1;
}

```

---

## WordCount

```asm
// === 0875d130 TaoCrypt::Integer::WordCount  [0x0875d130-0x875d16f] ===
 875d130:	55                   	push   %ebp
 875d131:	89 e5                	mov    %esp,%ebp
 875d133:	8b 55 08             	mov    0x8(%ebp),%edx
 875d136:	56                   	push   %esi
 875d137:	8b 02                	mov    (%edx),%eax
 875d139:	8b 72 04             	mov    0x4(%edx),%esi
 875d13c:	85 c0                	test   %eax,%eax
 875d13e:	74 16                	je     875d156 <_ZNK8TaoCrypt7Integer9WordCountEv+0x26>
 875d140:	8d 48 ff             	lea    -0x1(%eax),%ecx
 875d143:	8d 54 86 f8          	lea    -0x8(%esi,%eax,4),%edx
 875d147:	8b 34 8e             	mov    (%esi,%ecx,4),%esi
 875d14a:	85 f6                	test   %esi,%esi
 875d14c:	75 08                	jne    875d156 <_ZNK8TaoCrypt7Integer9WordCountEv+0x26>
 875d14e:	66 90                	xchg   %ax,%ax
 875d150:	85 c9                	test   %ecx,%ecx
 875d152:	89 c8                	mov    %ecx,%eax
 875d154:	75 0a                	jne    875d160 <_ZNK8TaoCrypt7Integer9WordCountEv+0x30>
 875d156:	5e                   	pop    %esi
 875d157:	5d                   	pop    %ebp
 875d158:	c3                   	ret
 875d159:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875d160:	8b 32                	mov    (%edx),%esi
 875d162:	83 ea 04             	sub    $0x4,%edx
 875d165:	85 f6                	test   %esi,%esi
 875d167:	75 ed                	jne    875d156 <_ZNK8TaoCrypt7Integer9WordCountEv+0x26>
 875d169:	83 e9 01             	sub    $0x1,%ecx
 875d16c:	eb e2                	jmp    875d150 <_ZNK8TaoCrypt7Integer9WordCountEv+0x20>
 875d16e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Integer::WordCount @ 0x875d130

/* TaoCrypt::Integer::WordCount() const */

int __thiscall TaoCrypt::Integer::WordCount(Integer *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(this + 4) + -8 + iVar2 * 4);
    iVar1 = iVar2 + -1;
    if (*(int *)(*(int *)(this + 4) + (iVar2 + -1) * 4) == 0) {
      while ((iVar2 = iVar1, iVar2 != 0 && (iVar1 = *piVar3, piVar3 = piVar3 + -1, iVar1 == 0))) {
        iVar1 = iVar2 + -1;
      }
    }
  }
  return iVar2;
}

```

---

## Zero

```asm
// === 0875f860 TaoCrypt::Integer::Zero  [0x0875f860-0x875f8bf] ===
 875f860:	55                   	push   %ebp
 875f861:	89 e5                	mov    %esp,%ebp
 875f863:	53                   	push   %ebx
 875f864:	e8 8f 35 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f869:	81 c3 2f d3 c0 00    	add    $0xc0d32f,%ebx
 875f86f:	83 ec 24             	sub    $0x24,%esp
 875f872:	8b 83 98 4c 12 00    	mov    0x124c98(%ebx),%eax
 875f878:	85 c0                	test   %eax,%eax
 875f87a:	74 0c                	je     875f888 <_ZN8TaoCrypt7Integer4ZeroEv+0x28>
 875f87c:	83 c4 24             	add    $0x24,%esp
 875f87f:	5b                   	pop    %ebx
 875f880:	5d                   	pop    %ebp
 875f881:	c3                   	ret
 875f882:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f888:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f88d:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 875f894:	e8 b7 7e 00 00       	call   8767750 <_ZnwjN8TaoCrypt5new_tE>
 875f899:	89 04 24             	mov    %eax,(%esp)
 875f89c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 875f89f:	e8 ec fc ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875f8a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875f8a7:	89 83 98 4c 12 00    	mov    %eax,0x124c98(%ebx)
 875f8ad:	83 c4 24             	add    $0x24,%esp
 875f8b0:	5b                   	pop    %ebx
 875f8b1:	5d                   	pop    %ebp
 875f8b2:	c3                   	ret
 875f8b3:	90                   	nop
 875f8b4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f8ba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::Zero @ 0x875f860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Zero() */

void TaoCrypt::Integer::Zero(void)

{
  Integer *this;
  
  if (zero != (Integer *)0x0) {
    return;
  }
  this = operator_new(0x10,0);
  Integer(this);
  zero = this;
  return;
}

```

---

## operator!

```asm
// === 0875d280 TaoCrypt::Integer::operator!  [0x0875d280-0x875d2cf] ===
 875d280:	55                   	push   %ebp
 875d281:	89 e5                	mov    %esp,%ebp
 875d283:	53                   	push   %ebx
 875d284:	83 ec 14             	sub    $0x14,%esp
 875d287:	8b 45 08             	mov    0x8(%ebp),%eax
 875d28a:	e8 69 5b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d28f:	81 c3 09 f9 c0 00    	add    $0xc0f909,%ebx
 875d295:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 875d299:	74 09                	je     875d2a4 <_ZNK8TaoCrypt7IntegerntEv+0x24>
 875d29b:	8b 50 04             	mov    0x4(%eax),%edx
 875d29e:	8b 12                	mov    (%edx),%edx
 875d2a0:	85 d2                	test   %edx,%edx
 875d2a2:	74 0c                	je     875d2b0 <_ZNK8TaoCrypt7IntegerntEv+0x30>
 875d2a4:	83 c4 14             	add    $0x14,%esp
 875d2a7:	31 c0                	xor    %eax,%eax
 875d2a9:	5b                   	pop    %ebx
 875d2aa:	5d                   	pop    %ebp
 875d2ab:	c3                   	ret
 875d2ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d2b0:	89 04 24             	mov    %eax,(%esp)
 875d2b3:	e8 78 fe ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d2b8:	85 c0                	test   %eax,%eax
 875d2ba:	0f 94 c0             	sete   %al
 875d2bd:	83 c4 14             	add    $0x14,%esp
 875d2c0:	5b                   	pop    %ebx
 875d2c1:	5d                   	pop    %ebp
 875d2c2:	c3                   	ret
 875d2c3:	90                   	nop
 875d2c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d2ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Integer::operator! @ 0x875d280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall TaoCrypt::Integer::operator!(Integer *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xc) != 1) && (**(int **)(this + 4) == 0)) {
    iVar1 = WordCount(this);
    return iVar1 == 0;
  }
  return false;
}

```

---

## operator++

```asm
// === 08760b10 TaoCrypt::Integer::operator++  [0x08760b10-0x8760c4f] ===
 8760b10:	55                   	push   %ebp
 8760b11:	89 e5                	mov    %esp,%ebp
 8760b13:	57                   	push   %edi
 8760b14:	56                   	push   %esi
 8760b15:	53                   	push   %ebx
 8760b16:	83 ec 3c             	sub    $0x3c,%esp
 8760b19:	8b 75 08             	mov    0x8(%ebp),%esi
 8760b1c:	e8 d7 22 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760b21:	81 c3 77 c0 c0 00    	add    $0xc0c077,%ebx
 8760b27:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 8760b2b:	74 63                	je     8760b90 <_ZN8TaoCrypt7IntegerppEv+0x80>
 8760b2d:	8b 4e 04             	mov    0x4(%esi),%ecx
 8760b30:	8b 3e                	mov    (%esi),%edi
 8760b32:	8b 11                	mov    (%ecx),%edx
 8760b34:	8d 42 01             	lea    0x1(%edx),%eax
 8760b37:	39 c2                	cmp    %eax,%edx
 8760b39:	89 01                	mov    %eax,(%ecx)
 8760b3b:	76 47                	jbe    8760b84 <_ZN8TaoCrypt7IntegerppEv+0x74>
 8760b3d:	83 ff 01             	cmp    $0x1,%edi
 8760b40:	76 2a                	jbe    8760b6c <_ZN8TaoCrypt7IntegerppEv+0x5c>
 8760b42:	8b 51 04             	mov    0x4(%ecx),%edx
 8760b45:	b8 01 00 00 00       	mov    $0x1,%eax
 8760b4a:	83 c2 01             	add    $0x1,%edx
 8760b4d:	85 d2                	test   %edx,%edx
 8760b4f:	89 51 04             	mov    %edx,0x4(%ecx)
 8760b52:	74 11                	je     8760b65 <_ZN8TaoCrypt7IntegerppEv+0x55>
 8760b54:	eb 2e                	jmp    8760b84 <_ZN8TaoCrypt7IntegerppEv+0x74>
 8760b56:	66 90                	xchg   %ax,%ax
 8760b58:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 8760b5b:	83 c2 01             	add    $0x1,%edx
 8760b5e:	85 d2                	test   %edx,%edx
 8760b60:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 8760b63:	75 1f                	jne    8760b84 <_ZN8TaoCrypt7IntegerppEv+0x74>
 8760b65:	83 c0 01             	add    $0x1,%eax
 8760b68:	39 c7                	cmp    %eax,%edi
 8760b6a:	77 ec                	ja     8760b58 <_ZN8TaoCrypt7IntegerppEv+0x48>
 8760b6c:	8b 06                	mov    (%esi),%eax
 8760b6e:	8d 3c 00             	lea    (%eax,%eax,1),%edi
 8760b71:	39 c7                	cmp    %eax,%edi
 8760b73:	0f 87 87 00 00 00    	ja     8760c00 <_ZN8TaoCrypt7IntegerppEv+0xf0>
 8760b79:	89 c7                	mov    %eax,%edi
 8760b7b:	d1 ef                	shr    $1,%edi
 8760b7d:	c7 04 b9 01 00 00 00 	movl   $0x1,(%ecx,%edi,4)
 8760b84:	83 c4 3c             	add    $0x3c,%esp
 8760b87:	89 f0                	mov    %esi,%eax
 8760b89:	5b                   	pop    %ebx
 8760b8a:	5e                   	pop    %esi
 8760b8b:	5f                   	pop    %edi
 8760b8c:	5d                   	pop    %ebp
 8760b8d:	c3                   	ret
 8760b8e:	66 90                	xchg   %ax,%ax
 8760b90:	8b 4e 04             	mov    0x4(%esi),%ecx
 8760b93:	8b 3e                	mov    (%esi),%edi
 8760b95:	8b 11                	mov    (%ecx),%edx
 8760b97:	8d 42 ff             	lea    -0x1(%edx),%eax
 8760b9a:	39 c2                	cmp    %eax,%edx
 8760b9c:	89 01                	mov    %eax,(%ecx)
 8760b9e:	73 37                	jae    8760bd7 <_ZN8TaoCrypt7IntegerppEv+0xc7>
 8760ba0:	83 ff 01             	cmp    $0x1,%edi
 8760ba3:	76 32                	jbe    8760bd7 <_ZN8TaoCrypt7IntegerppEv+0xc7>
 8760ba5:	8b 51 04             	mov    0x4(%ecx),%edx
 8760ba8:	8d 42 ff             	lea    -0x1(%edx),%eax
 8760bab:	85 d2                	test   %edx,%edx
 8760bad:	89 41 04             	mov    %eax,0x4(%ecx)
 8760bb0:	b8 01 00 00 00       	mov    $0x1,%eax
 8760bb5:	75 20                	jne    8760bd7 <_ZN8TaoCrypt7IntegerppEv+0xc7>
 8760bb7:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 8760bba:	eb 11                	jmp    8760bcd <_ZN8TaoCrypt7IntegerppEv+0xbd>
 8760bbc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760bc0:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 8760bc3:	8d 72 ff             	lea    -0x1(%edx),%esi
 8760bc6:	85 d2                	test   %edx,%edx
 8760bc8:	89 34 81             	mov    %esi,(%ecx,%eax,4)
 8760bcb:	75 07                	jne    8760bd4 <_ZN8TaoCrypt7IntegerppEv+0xc4>
 8760bcd:	83 c0 01             	add    $0x1,%eax
 8760bd0:	39 c7                	cmp    %eax,%edi
 8760bd2:	77 ec                	ja     8760bc0 <_ZN8TaoCrypt7IntegerppEv+0xb0>
 8760bd4:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8760bd7:	89 34 24             	mov    %esi,(%esp)
 8760bda:	e8 51 c5 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8760bdf:	85 c0                	test   %eax,%eax
 8760be1:	75 a1                	jne    8760b84 <_ZN8TaoCrypt7IntegerppEv+0x74>
 8760be3:	e8 78 ec ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8760be8:	89 34 24             	mov    %esi,(%esp)
 8760beb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760bef:	e8 6c f8 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8760bf4:	83 c4 3c             	add    $0x3c,%esp
 8760bf7:	89 f0                	mov    %esi,%eax
 8760bf9:	5b                   	pop    %ebx
 8760bfa:	5e                   	pop    %esi
 8760bfb:	5f                   	pop    %edi
 8760bfc:	5d                   	pop    %ebp
 8760bfd:	c3                   	ret
 8760bfe:	66 90                	xchg   %ax,%ax
 8760c00:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760c04:	8d 46 08             	lea    0x8(%esi),%eax
 8760c07:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8760c0b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8760c12:	00 
 8760c13:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8760c17:	89 04 24             	mov    %eax,(%esp)
 8760c1a:	e8 a1 30 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 8760c1f:	8b 16                	mov    (%esi),%edx
 8760c21:	89 f9                	mov    %edi,%ecx
 8760c23:	29 d1                	sub    %edx,%ecx
 8760c25:	c1 e1 02             	shl    $0x2,%ecx
 8760c28:	89 46 04             	mov    %eax,0x4(%esi)
 8760c2b:	8d 04 90             	lea    (%eax,%edx,4),%eax
 8760c2e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8760c32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760c39:	00 
 8760c3a:	89 04 24             	mov    %eax,(%esp)
 8760c3d:	e8 7e d0 91 ff       	call   807dcc0 <memset@plt>
 8760c42:	8b 4e 04             	mov    0x4(%esi),%ecx
 8760c45:	89 3e                	mov    %edi,(%esi)
 8760c47:	e9 2f ff ff ff       	jmp    8760b7b <_ZN8TaoCrypt7IntegerppEv+0x6b>
 8760c4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::operator++ @ 0x8760b10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall TaoCrypt::Integer::operator++(Integer *this)

{
  uint uVar1;
  uint uVar2;
  Integer *pIVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  if (*(int *)(this + 0xc) == 1) {
    puVar5 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar6 = *puVar5;
    uVar2 = uVar6 - 1;
    *puVar5 = uVar2;
    if ((uVar6 < uVar2) && (1 < uVar1)) {
      uVar2 = puVar5[1];
      puVar5[1] = uVar2 - 1;
      uVar6 = 1;
      while ((uVar2 == 0 && (uVar6 = uVar6 + 1, uVar6 < uVar1))) {
        uVar2 = puVar5[uVar6];
        puVar5[uVar6] = uVar2 - 1;
      }
    }
    iVar4 = WordCount(this);
    if (iVar4 == 0) {
      pIVar3 = (Integer *)Zero();
      operator=(this,pIVar3);
      return this;
    }
  }
  else {
    puVar5 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar6 = *puVar5;
    uVar2 = uVar6 + 1;
    *puVar5 = uVar2;
    if (uVar2 < uVar6) {
      if (uVar1 < 2) {
LAB_08760b6c:
        uVar2 = *(uint *)this;
        uVar1 = uVar2 * 2;
        if (uVar2 < uVar1) {
          iVar4 = AllocatorWithCleanup<unsigned_int>::reallocate
                            ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar5,uVar2,uVar1,
                             true);
          *(int *)(this + 4) = iVar4;
          memset((void *)(iVar4 + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
          puVar5 = *(uint **)(this + 4);
          *(uint *)this = uVar1;
          uVar2 = uVar1;
        }
        puVar5[uVar2 >> 1] = 1;
      }
      else {
        uVar2 = 1;
        uVar6 = puVar5[1] + 1;
        puVar5[1] = uVar6;
        while (uVar6 == 0) {
          uVar2 = uVar2 + 1;
          if (uVar1 <= uVar2) goto LAB_08760b6c;
          uVar6 = puVar5[uVar2] + 1;
          puVar5[uVar2] = uVar6;
        }
      }
    }
  }
  return this;
}

```

---

## operator+=

```asm
// === 0875fde0 TaoCrypt::Integer::operator+=  [0x0875fde0-0x875feff] ===
 875fde0:	55                   	push   %ebp
 875fde1:	89 e5                	mov    %esp,%ebp
 875fde3:	83 ec 48             	sub    $0x48,%esp
 875fde6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875fde9:	8b 75 08             	mov    0x8(%ebp),%esi
 875fdec:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875fdef:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875fdf2:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875fdf5:	e8 fe 2f fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875fdfa:	81 c3 9e cd c0 00    	add    $0xc0cd9e,%ebx
 875fe00:	8b 06                	mov    (%esi),%eax
 875fe02:	8b 17                	mov    (%edi),%edx
 875fe04:	39 c2                	cmp    %eax,%edx
 875fe06:	76 50                	jbe    875fe58 <_ZN8TaoCrypt7IntegerpLERKS0_+0x78>
 875fe08:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875fe0c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 875fe13:	00 
 875fe14:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fe18:	8b 46 04             	mov    0x4(%esi),%eax
 875fe1b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875fe1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fe22:	8d 46 08             	lea    0x8(%esi),%eax
 875fe25:	89 04 24             	mov    %eax,(%esp)
 875fe28:	e8 93 3e 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875fe2d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875fe30:	89 d1                	mov    %edx,%ecx
 875fe32:	2b 0e                	sub    (%esi),%ecx
 875fe34:	89 46 04             	mov    %eax,0x4(%esi)
 875fe37:	c1 e1 02             	shl    $0x2,%ecx
 875fe3a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875fe3e:	8b 0e                	mov    (%esi),%ecx
 875fe40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875fe47:	00 
 875fe48:	8d 04 88             	lea    (%eax,%ecx,4),%eax
 875fe4b:	89 04 24             	mov    %eax,(%esp)
 875fe4e:	e8 6d de 91 ff       	call   807dcc0 <memset@plt>
 875fe53:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875fe56:	89 16                	mov    %edx,(%esi)
 875fe58:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 875fe5c:	74 2a                	je     875fe88 <_ZN8TaoCrypt7IntegerpLERKS0_+0xa8>
 875fe5e:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 875fe62:	74 4c                	je     875feb0 <_ZN8TaoCrypt7IntegerpLERKS0_+0xd0>
 875fe64:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875fe68:	89 74 24 04          	mov    %esi,0x4(%esp)
 875fe6c:	89 34 24             	mov    %esi,(%esp)
 875fe6f:	e8 bc fb ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 875fe74:	89 f0                	mov    %esi,%eax
 875fe76:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fe79:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fe7c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fe7f:	89 ec                	mov    %ebp,%esp
 875fe81:	5d                   	pop    %ebp
 875fe82:	c3                   	ret
 875fe83:	90                   	nop
 875fe84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875fe88:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 875fe8c:	74 42                	je     875fed0 <_ZN8TaoCrypt7IntegerpLERKS0_+0xf0>
 875fe8e:	89 74 24 08          	mov    %esi,0x8(%esp)
 875fe92:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875fe96:	89 34 24             	mov    %esi,(%esp)
 875fe99:	e8 72 d4 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 875fe9e:	89 f0                	mov    %esi,%eax
 875fea0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fea3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fea6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fea9:	89 ec                	mov    %ebp,%esp
 875feab:	5d                   	pop    %ebp
 875feac:	c3                   	ret
 875fead:	8d 76 00             	lea    0x0(%esi),%esi
 875feb0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875feb4:	89 74 24 04          	mov    %esi,0x4(%esp)
 875feb8:	89 34 24             	mov    %esi,(%esp)
 875febb:	e8 50 d4 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 875fec0:	89 f0                	mov    %esi,%eax
 875fec2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fec5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fec8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fecb:	89 ec                	mov    %ebp,%esp
 875fecd:	5d                   	pop    %ebp
 875fece:	c3                   	ret
 875fecf:	90                   	nop
 875fed0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875fed4:	89 74 24 04          	mov    %esi,0x4(%esp)
 875fed8:	89 34 24             	mov    %esi,(%esp)
 875fedb:	e8 50 fb ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 875fee0:	89 f0                	mov    %esi,%eax
 875fee2:	c7 46 0c 01 00 00 00 	movl   $0x1,0xc(%esi)
 875fee9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875feec:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875feef:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fef2:	89 ec                	mov    %ebp,%esp
 875fef4:	5d                   	pop    %ebp
 875fef5:	c3                   	ret
 875fef6:	8d 76 00             	lea    0x0(%esi),%esi
 875fef9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::operator+= @ 0x875fde0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator+=(Integer *this,Integer *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)param_1;
  if (*(uint *)this < uVar1) {
    iVar2 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar1,true);
    *(int *)(this + 4) = iVar2;
    memset((void *)(iVar2 + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
    *(uint *)this = uVar1;
  }
  if (*(int *)(this + 0xc) != 1) {
    if (*(int *)(param_1 + 0xc) != 1) {
      PositiveAdd(this,this,param_1);
      return this;
    }
    PositiveSubtract(this,this,param_1);
    return this;
  }
  if (*(int *)(param_1 + 0xc) != 1) {
    PositiveSubtract(this,param_1,this);
    return this;
  }
  PositiveAdd(this,this,param_1);
  *(undefined4 *)(this + 0xc) = 1;
  return this;
}

```

---

## operator--

```asm
// === 08761570 TaoCrypt::Integer::operator--  [0x08761570-0x876173f] ===
 8761570:	55                   	push   %ebp
 8761571:	89 e5                	mov    %esp,%ebp
 8761573:	57                   	push   %edi
 8761574:	56                   	push   %esi
 8761575:	53                   	push   %ebx
 8761576:	83 ec 3c             	sub    $0x3c,%esp
 8761579:	8b 45 08             	mov    0x8(%ebp),%eax
 876157c:	e8 77 18 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761581:	81 c3 17 b6 c0 00    	add    $0xc0b617,%ebx
 8761587:	83 78 0c 01          	cmpl   $0x1,0xc(%eax)
 876158b:	0f 84 a7 00 00 00    	je     8761638 <_ZN8TaoCrypt7IntegermmEv+0xc8>
 8761591:	8b 48 04             	mov    0x4(%eax),%ecx
 8761594:	8b 38                	mov    (%eax),%edi
 8761596:	8b 11                	mov    (%ecx),%edx
 8761598:	8d 42 ff             	lea    -0x1(%edx),%eax
 876159b:	39 c2                	cmp    %eax,%edx
 876159d:	89 01                	mov    %eax,(%ecx)
 876159f:	0f 83 83 00 00 00    	jae    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 87615a5:	83 ff 01             	cmp    $0x1,%edi
 87615a8:	76 2a                	jbe    87615d4 <_ZN8TaoCrypt7IntegermmEv+0x64>
 87615aa:	8b 51 04             	mov    0x4(%ecx),%edx
 87615ad:	8d 42 ff             	lea    -0x1(%edx),%eax
 87615b0:	85 d2                	test   %edx,%edx
 87615b2:	89 41 04             	mov    %eax,0x4(%ecx)
 87615b5:	b8 01 00 00 00       	mov    $0x1,%eax
 87615ba:	74 11                	je     87615cd <_ZN8TaoCrypt7IntegermmEv+0x5d>
 87615bc:	eb 6a                	jmp    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 87615be:	66 90                	xchg   %ax,%ax
 87615c0:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 87615c3:	8d 72 ff             	lea    -0x1(%edx),%esi
 87615c6:	85 d2                	test   %edx,%edx
 87615c8:	89 34 81             	mov    %esi,(%ecx,%eax,4)
 87615cb:	75 5b                	jne    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 87615cd:	83 c0 01             	add    $0x1,%eax
 87615d0:	39 c7                	cmp    %eax,%edi
 87615d2:	77 ec                	ja     87615c0 <_ZN8TaoCrypt7IntegermmEv+0x50>
 87615d4:	e8 27 dc ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 87615d9:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87615dc:	89 34 24             	mov    %esi,(%esp)
 87615df:	89 44 24 04          	mov    %eax,0x4(%esp)
 87615e3:	e8 a8 de ff ff       	call   875f490 <_ZNK8TaoCrypt7IntegerngEv>
 87615e8:	8b 55 08             	mov    0x8(%ebp),%edx
 87615eb:	83 ec 04             	sub    $0x4,%esp
 87615ee:	89 74 24 04          	mov    %esi,0x4(%esp)
 87615f2:	89 14 24             	mov    %edx,(%esp)
 87615f5:	e8 66 ee ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87615fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87615fd:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8761600:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761607:	00 
 8761608:	c1 e0 02             	shl    $0x2,%eax
 876160b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876160f:	89 34 24             	mov    %esi,(%esp)
 8761612:	e8 a9 c6 91 ff       	call   807dcc0 <memset@plt>
 8761617:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876161c:	89 34 24             	mov    %esi,(%esp)
 876161f:	e8 fc 60 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8761624:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761628:	8b 45 08             	mov    0x8(%ebp),%eax
 876162b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 876162e:	5b                   	pop    %ebx
 876162f:	5e                   	pop    %esi
 8761630:	5f                   	pop    %edi
 8761631:	5d                   	pop    %ebp
 8761632:	c3                   	ret
 8761633:	90                   	nop
 8761634:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761638:	8b 70 04             	mov    0x4(%eax),%esi
 876163b:	8b 08                	mov    (%eax),%ecx
 876163d:	8b 16                	mov    (%esi),%edx
 876163f:	8d 42 01             	lea    0x1(%edx),%eax
 8761642:	39 c2                	cmp    %eax,%edx
 8761644:	89 06                	mov    %eax,(%esi)
 8761646:	76 e0                	jbe    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 8761648:	83 f9 01             	cmp    $0x1,%ecx
 876164b:	76 2f                	jbe    876167c <_ZN8TaoCrypt7IntegermmEv+0x10c>
 876164d:	8b 56 04             	mov    0x4(%esi),%edx
 8761650:	b8 01 00 00 00       	mov    $0x1,%eax
 8761655:	83 c2 01             	add    $0x1,%edx
 8761658:	85 d2                	test   %edx,%edx
 876165a:	89 56 04             	mov    %edx,0x4(%esi)
 876165d:	74 16                	je     8761675 <_ZN8TaoCrypt7IntegermmEv+0x105>
 876165f:	eb c7                	jmp    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 8761661:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8761668:	8b 14 86             	mov    (%esi,%eax,4),%edx
 876166b:	83 c2 01             	add    $0x1,%edx
 876166e:	85 d2                	test   %edx,%edx
 8761670:	89 14 86             	mov    %edx,(%esi,%eax,4)
 8761673:	75 b3                	jne    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 8761675:	83 c0 01             	add    $0x1,%eax
 8761678:	39 c1                	cmp    %eax,%ecx
 876167a:	77 ec                	ja     8761668 <_ZN8TaoCrypt7IntegermmEv+0xf8>
 876167c:	8b 45 08             	mov    0x8(%ebp),%eax
 876167f:	8b 10                	mov    (%eax),%edx
 8761681:	8d 3c 12             	lea    (%edx,%edx,1),%edi
 8761684:	39 d7                	cmp    %edx,%edi
 8761686:	77 0d                	ja     8761695 <_ZN8TaoCrypt7IntegermmEv+0x125>
 8761688:	89 d7                	mov    %edx,%edi
 876168a:	d1 ef                	shr    $1,%edi
 876168c:	c7 04 be 01 00 00 00 	movl   $0x1,(%esi,%edi,4)
 8761693:	eb 93                	jmp    8761628 <_ZN8TaoCrypt7IntegermmEv+0xb8>
 8761695:	31 c0                	xor    %eax,%eax
 8761697:	31 c9                	xor    %ecx,%ecx
 8761699:	85 ff                	test   %edi,%edi
 876169b:	75 76                	jne    8761713 <_ZN8TaoCrypt7IntegermmEv+0x1a3>
 876169d:	c1 e0 02             	shl    $0x2,%eax
 87616a0:	89 0c 24             	mov    %ecx,(%esp)
 87616a3:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87616a6:	89 74 24 04          	mov    %esi,0x4(%esp)
 87616aa:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87616ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87616b1:	e8 ea c1 91 ff       	call   807d8a0 <memcpy@plt>
 87616b6:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87616b9:	89 34 24             	mov    %esi,(%esp)
 87616bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87616c3:	00 
 87616c4:	c1 e2 02             	shl    $0x2,%edx
 87616c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 87616cb:	e8 f0 c5 91 ff       	call   807dcc0 <memset@plt>
 87616d0:	89 34 24             	mov    %esi,(%esp)
 87616d3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87616d8:	e8 43 60 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87616dd:	8b 55 08             	mov    0x8(%ebp),%edx
 87616e0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87616e3:	8b 02                	mov    (%edx),%eax
 87616e5:	89 4a 04             	mov    %ecx,0x4(%edx)
 87616e8:	89 fa                	mov    %edi,%edx
 87616ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87616f1:	00 
 87616f2:	29 c2                	sub    %eax,%edx
 87616f4:	c1 e2 02             	shl    $0x2,%edx
 87616f7:	8d 04 81             	lea    (%ecx,%eax,4),%eax
 87616fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 87616fe:	89 04 24             	mov    %eax,(%esp)
 8761701:	e8 ba c5 91 ff       	call   807dcc0 <memset@plt>
 8761706:	8b 45 08             	mov    0x8(%ebp),%eax
 8761709:	89 38                	mov    %edi,(%eax)
 876170b:	8b 70 04             	mov    0x4(%eax),%esi
 876170e:	e9 77 ff ff ff       	jmp    876168a <_ZN8TaoCrypt7IntegermmEv+0x11a>
 8761713:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 876171a:	89 55 d0             	mov    %edx,-0x30(%ebp)
 876171d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761722:	89 04 24             	mov    %eax,(%esp)
 8761725:	e8 66 60 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 876172a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 876172d:	89 c1                	mov    %eax,%ecx
 876172f:	89 d0                	mov    %edx,%eax
 8761731:	e9 67 ff ff ff       	jmp    876169d <_ZN8TaoCrypt7IntegermmEv+0x12d>
 8761736:	8d 76 00             	lea    0x0(%esi),%esi
 8761739:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Integer::operator-- @ 0x8761570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall TaoCrypt::Integer::operator--(Integer *this)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint *puVar3;
  uint in_stack_ffffffb8;
  uint uVar4;
  int local_2c;
  void *local_28;
  
  if (*(int *)(this + 0xc) == 1) {
    puVar3 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
    *puVar3 = uVar4;
    if (uVar4 < uVar2) {
      if (uVar1 < 2) {
LAB_0876167c:
        uVar4 = *(uint *)this;
        uVar1 = uVar4 * 2;
        if (uVar4 < uVar1) {
          __dest = (void *)0x0;
          uVar2 = 0;
          if (uVar1 != 0) {
            __dest = operator_new__(uVar4 * 8,in_stack_ffffffb8 & 0xffffff00);
            uVar2 = uVar4;
          }
          memcpy(__dest,puVar3,uVar2 << 2);
          uVar2 = 0;
          memset(puVar3,0,uVar4 << 2);
          operator_delete__(puVar3,uVar2 & 0xffffff00);
          *(void **)(this + 4) = __dest;
          memset((void *)((int)__dest + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
          *(uint *)this = uVar1;
          puVar3 = *(uint **)(this + 4);
          uVar4 = uVar1;
        }
        puVar3[uVar4 >> 1] = 1;
      }
      else {
        uVar4 = 1;
        uVar2 = puVar3[1] + 1;
        puVar3[1] = uVar2;
        while (uVar2 == 0) {
          uVar4 = uVar4 + 1;
          if (uVar1 <= uVar4) goto LAB_0876167c;
          uVar2 = puVar3[uVar4] + 1;
          puVar3[uVar4] = uVar2;
        }
      }
    }
  }
  else {
    puVar3 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar2 = *puVar3;
    uVar4 = uVar2 - 1;
    *puVar3 = uVar4;
    if (uVar2 < uVar4) {
      if (uVar1 < 2) {
LAB_087615d4:
        One();
        operator-((Integer *)&local_2c);
        operator=(this,(Integer *)&local_2c);
        uVar4 = 0;
        memset(local_28,0,local_2c << 2);
        operator_delete__(local_28,uVar4 & 0xffffff00);
      }
      else {
        uVar4 = puVar3[1];
        puVar3[1] = uVar4 - 1;
        uVar2 = 1;
        while (uVar4 == 0) {
          uVar2 = uVar2 + 1;
          if (uVar1 <= uVar2) goto LAB_087615d4;
          uVar4 = puVar3[uVar2];
          puVar3[uVar2] = uVar4 - 1;
        }
      }
    }
  }
  return this;
}

```

---

## operator-

```asm
// === 0875f490 TaoCrypt::Integer::operator-  [0x0875f490-0x875f4cf] ===
 875f490:	55                   	push   %ebp
 875f491:	89 e5                	mov    %esp,%ebp
 875f493:	83 ec 18             	sub    $0x18,%esp
 875f496:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875f499:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f49c:	e8 57 39 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f4a1:	81 c3 f7 d6 c0 00    	add    $0xc0d6f7,%ebx
 875f4a7:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875f4aa:	8b 75 08             	mov    0x8(%ebp),%esi
 875f4ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f4b1:	89 34 24             	mov    %esi,(%esp)
 875f4b4:	e8 b7 fd ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f4b9:	89 34 24             	mov    %esi,(%esp)
 875f4bc:	e8 0f de ff ff       	call   875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>
 875f4c1:	89 f0                	mov    %esi,%eax
 875f4c3:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875f4c6:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875f4c9:	89 ec                	mov    %ebp,%esp
 875f4cb:	5d                   	pop    %ebp
 875f4cc:	c2 04 00             	ret    $0x4
 875f4cf:	90                   	nop

```

```c
// TaoCrypt::Integer::operator- @ 0x875f490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

Integer * __thiscall TaoCrypt::Integer::operator-(Integer *this)

{
  Integer *in_stack_00000008;
  
  Integer(this,in_stack_00000008);
  Negate(this);
  return this;
}

```

---

## operator-=

```asm
// === 0875fcc0 TaoCrypt::Integer::operator-=  [0x0875fcc0-0x875fddf] ===
 875fcc0:	55                   	push   %ebp
 875fcc1:	89 e5                	mov    %esp,%ebp
 875fcc3:	83 ec 48             	sub    $0x48,%esp
 875fcc6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875fcc9:	8b 75 08             	mov    0x8(%ebp),%esi
 875fccc:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875fccf:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875fcd2:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875fcd5:	e8 1e 31 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875fcda:	81 c3 be ce c0 00    	add    $0xc0cebe,%ebx
 875fce0:	8b 06                	mov    (%esi),%eax
 875fce2:	8b 17                	mov    (%edi),%edx
 875fce4:	39 c2                	cmp    %eax,%edx
 875fce6:	76 50                	jbe    875fd38 <_ZN8TaoCrypt7IntegermIERKS0_+0x78>
 875fce8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875fcec:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 875fcf3:	00 
 875fcf4:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fcf8:	8b 46 04             	mov    0x4(%esi),%eax
 875fcfb:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875fcfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fd02:	8d 46 08             	lea    0x8(%esi),%eax
 875fd05:	89 04 24             	mov    %eax,(%esp)
 875fd08:	e8 b3 3f 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875fd0d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875fd10:	89 d1                	mov    %edx,%ecx
 875fd12:	2b 0e                	sub    (%esi),%ecx
 875fd14:	89 46 04             	mov    %eax,0x4(%esi)
 875fd17:	c1 e1 02             	shl    $0x2,%ecx
 875fd1a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875fd1e:	8b 0e                	mov    (%esi),%ecx
 875fd20:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875fd27:	00 
 875fd28:	8d 04 88             	lea    (%eax,%ecx,4),%eax
 875fd2b:	89 04 24             	mov    %eax,(%esp)
 875fd2e:	e8 8d df 91 ff       	call   807dcc0 <memset@plt>
 875fd33:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875fd36:	89 16                	mov    %edx,(%esi)
 875fd38:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 875fd3c:	74 2a                	je     875fd68 <_ZN8TaoCrypt7IntegermIERKS0_+0xa8>
 875fd3e:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 875fd42:	74 54                	je     875fd98 <_ZN8TaoCrypt7IntegermIERKS0_+0xd8>
 875fd44:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875fd48:	89 74 24 04          	mov    %esi,0x4(%esp)
 875fd4c:	89 34 24             	mov    %esi,(%esp)
 875fd4f:	e8 bc d5 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 875fd54:	89 f0                	mov    %esi,%eax
 875fd56:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fd59:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fd5c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fd5f:	89 ec                	mov    %ebp,%esp
 875fd61:	5d                   	pop    %ebp
 875fd62:	c3                   	ret
 875fd63:	90                   	nop
 875fd64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875fd68:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 875fd6c:	74 4a                	je     875fdb8 <_ZN8TaoCrypt7IntegermIERKS0_+0xf8>
 875fd6e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875fd72:	89 74 24 04          	mov    %esi,0x4(%esp)
 875fd76:	89 34 24             	mov    %esi,(%esp)
 875fd79:	e8 b2 fc ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 875fd7e:	89 f0                	mov    %esi,%eax
 875fd80:	c7 46 0c 01 00 00 00 	movl   $0x1,0xc(%esi)
 875fd87:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fd8a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fd8d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fd90:	89 ec                	mov    %ebp,%esp
 875fd92:	5d                   	pop    %ebp
 875fd93:	c3                   	ret
 875fd94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875fd98:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875fd9c:	89 74 24 04          	mov    %esi,0x4(%esp)
 875fda0:	89 34 24             	mov    %esi,(%esp)
 875fda3:	e8 88 fc ff ff       	call   875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>
 875fda8:	89 f0                	mov    %esi,%eax
 875fdaa:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fdad:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fdb0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fdb3:	89 ec                	mov    %ebp,%esp
 875fdb5:	5d                   	pop    %ebp
 875fdb6:	c3                   	ret
 875fdb7:	90                   	nop
 875fdb8:	89 74 24 08          	mov    %esi,0x8(%esp)
 875fdbc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875fdc0:	89 34 24             	mov    %esi,(%esp)
 875fdc3:	e8 48 d5 ff ff       	call   875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>
 875fdc8:	89 f0                	mov    %esi,%eax
 875fdca:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875fdcd:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875fdd0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875fdd3:	89 ec                	mov    %ebp,%esp
 875fdd5:	5d                   	pop    %ebp
 875fdd6:	c3                   	ret
 875fdd7:	90                   	nop
 875fdd8:	90                   	nop
 875fdd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::operator-= @ 0x875fcc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator-=(Integer *this,Integer *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)param_1;
  if (*(uint *)this < uVar1) {
    iVar2 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar1,true);
    *(int *)(this + 4) = iVar2;
    memset((void *)(iVar2 + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
    *(uint *)this = uVar1;
  }
  if (*(int *)(this + 0xc) != 1) {
    if (*(int *)(param_1 + 0xc) != 1) {
      PositiveSubtract(this,this,param_1);
      return this;
    }
    PositiveAdd(this,this,param_1);
    return this;
  }
  if (*(int *)(param_1 + 0xc) != 1) {
    PositiveAdd(this,this,param_1);
    *(undefined4 *)(this + 0xc) = 1;
    return this;
  }
  PositiveSubtract(this,param_1,this);
  return this;
}

```

---

## operator=

```asm
// === 08760460 TaoCrypt::Integer::operator=  [0x08760460-0x876057f] ===
 8760460:	55                   	push   %ebp
 8760461:	89 e5                	mov    %esp,%ebp
 8760463:	57                   	push   %edi
 8760464:	56                   	push   %esi
 8760465:	53                   	push   %ebx
 8760466:	83 ec 1c             	sub    $0x1c,%esp
 8760469:	8b 45 0c             	mov    0xc(%ebp),%eax
 876046c:	e8 87 29 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760471:	81 c3 27 c7 c0 00    	add    $0xc0c727,%ebx
 8760477:	39 45 08             	cmp    %eax,0x8(%ebp)
 876047a:	74 78                	je     87604f4 <_ZN8TaoCrypt7IntegeraSERKS0_+0x94>
 876047c:	89 04 24             	mov    %eax,(%esp)
 876047f:	e8 ac cc ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8760484:	83 f8 08             	cmp    $0x8,%eax
 8760487:	0f 86 ab 00 00 00    	jbe    8760538 <_ZN8TaoCrypt7IntegeraSERKS0_+0xd8>
 876048d:	83 f8 10             	cmp    $0x10,%eax
 8760490:	be 10 00 00 00       	mov    $0x10,%esi
 8760495:	76 16                	jbe    87604ad <_ZN8TaoCrypt7IntegeraSERKS0_+0x4d>
 8760497:	83 f8 20             	cmp    $0x20,%eax
 876049a:	66 be 20 00          	mov    $0x20,%si
 876049e:	76 0d                	jbe    87604ad <_ZN8TaoCrypt7IntegeraSERKS0_+0x4d>
 87604a0:	83 f8 40             	cmp    $0x40,%eax
 87604a3:	66 be 40 00          	mov    $0x40,%si
 87604a7:	0f 87 bb 00 00 00    	ja     8760568 <_ZN8TaoCrypt7IntegeraSERKS0_+0x108>
 87604ad:	8b 45 08             	mov    0x8(%ebp),%eax
 87604b0:	8b 10                	mov    (%eax),%edx
 87604b2:	89 c1                	mov    %eax,%ecx
 87604b4:	8b 40 04             	mov    0x4(%eax),%eax
 87604b7:	39 f2                	cmp    %esi,%edx
 87604b9:	0f 84 92 00 00 00    	je     8760551 <_ZN8TaoCrypt7IntegeraSERKS0_+0xf1>
 87604bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87604c3:	89 c8                	mov    %ecx,%eax
 87604c5:	83 c0 08             	add    $0x8,%eax
 87604c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 87604cc:	89 04 24             	mov    %eax,(%esp)
 87604cf:	e8 ac 36 00 00       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 87604d4:	85 f6                	test   %esi,%esi
 87604d6:	75 28                	jne    8760500 <_ZN8TaoCrypt7IntegeraSERKS0_+0xa0>
 87604d8:	8b 45 08             	mov    0x8(%ebp),%eax
 87604db:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87604e2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87604e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 87604eb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87604ee:	8b 42 0c             	mov    0xc(%edx),%eax
 87604f1:	89 41 0c             	mov    %eax,0xc(%ecx)
 87604f4:	8b 45 08             	mov    0x8(%ebp),%eax
 87604f7:	83 c4 1c             	add    $0x1c,%esp
 87604fa:	5b                   	pop    %ebx
 87604fb:	5e                   	pop    %esi
 87604fc:	5f                   	pop    %edi
 87604fd:	5d                   	pop    %ebp
 87604fe:	c3                   	ret
 87604ff:	90                   	nop
 8760500:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 8760507:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876050c:	89 04 24             	mov    %eax,(%esp)
 876050f:	e8 7c 72 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8760514:	8b 55 08             	mov    0x8(%ebp),%edx
 8760517:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 876051a:	89 32                	mov    %esi,(%edx)
 876051c:	89 42 04             	mov    %eax,0x4(%edx)
 876051f:	8b 79 04             	mov    0x4(%ecx),%edi
 8760522:	31 d2                	xor    %edx,%edx
 8760524:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760528:	8b 0c 97             	mov    (%edi,%edx,4),%ecx
 876052b:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 876052e:	83 c2 01             	add    $0x1,%edx
 8760531:	39 f2                	cmp    %esi,%edx
 8760533:	72 f3                	jb     8760528 <_ZN8TaoCrypt7IntegeraSERKS0_+0xc8>
 8760535:	eb b1                	jmp    87604e8 <_ZN8TaoCrypt7IntegeraSERKS0_+0x88>
 8760537:	90                   	nop
 8760538:	8b b4 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%esi
 876053f:	8b 45 08             	mov    0x8(%ebp),%eax
 8760542:	8b 10                	mov    (%eax),%edx
 8760544:	89 c1                	mov    %eax,%ecx
 8760546:	8b 40 04             	mov    0x4(%eax),%eax
 8760549:	39 f2                	cmp    %esi,%edx
 876054b:	0f 85 6e ff ff ff    	jne    87604bf <_ZN8TaoCrypt7IntegeraSERKS0_+0x5f>
 8760551:	8b 55 08             	mov    0x8(%ebp),%edx
 8760554:	85 f6                	test   %esi,%esi
 8760556:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8760559:	89 42 04             	mov    %eax,0x4(%edx)
 876055c:	89 32                	mov    %esi,(%edx)
 876055e:	8b 79 04             	mov    0x4(%ecx),%edi
 8760561:	75 bf                	jne    8760522 <_ZN8TaoCrypt7IntegeraSERKS0_+0xc2>
 8760563:	eb 83                	jmp    87604e8 <_ZN8TaoCrypt7IntegeraSERKS0_+0x88>
 8760565:	8d 76 00             	lea    0x0(%esi),%esi
 8760568:	83 e8 01             	sub    $0x1,%eax
 876056b:	66 be 01 00          	mov    $0x1,%si
 876056f:	89 04 24             	mov    %eax,(%esp)
 8760572:	e8 c9 6f 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 8760577:	89 c1                	mov    %eax,%ecx
 8760579:	d3 e6                	shl    %cl,%esi
 876057b:	e9 2d ff ff ff       	jmp    87604ad <_ZN8TaoCrypt7IntegeraSERKS0_+0x4d>

```

```c
// TaoCrypt::Integer::operator= @ 0x8760460

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator=(Integer *this,Integer *param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  if (this == param_1) {
    return this;
  }
  uVar2 = WordCount(param_1);
  if (uVar2 < 9) {
    uVar4 = (&RoundupSizeTable)[uVar2];
    uVar2 = *(uint *)this;
    pvVar3 = *(void **)(this + 4);
    if (uVar2 == uVar4) goto LAB_08760551;
LAB_087604bf:
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(this + 8),pvVar3,uVar2);
    if (uVar4 == 0) {
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
      goto LAB_087604e8;
    }
    pvVar3 = operator_new__(uVar4 * 4,(uint)pvVar3 & 0xffffff00);
    *(uint *)this = uVar4;
    *(void **)(this + 4) = pvVar3;
    iVar5 = *(int *)(param_1 + 4);
  }
  else {
    uVar4 = 0x10;
    if (((0x10 < uVar2) && (uVar4 = 0x20, 0x20 < uVar2)) && (uVar4 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      uVar4 = 1 << (bVar1 & 0x1f);
    }
    uVar2 = *(uint *)this;
    pvVar3 = *(void **)(this + 4);
    if (uVar2 != uVar4) goto LAB_087604bf;
LAB_08760551:
    *(void **)(this + 4) = pvVar3;
    *(uint *)this = uVar4;
    iVar5 = *(int *)(param_1 + 4);
    if (uVar4 == 0) goto LAB_087604e8;
  }
  uVar2 = 0;
  do {
    *(undefined4 *)((int)pvVar3 + uVar2 * 4) = *(undefined4 *)(iVar5 + uVar2 * 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < uVar4);
LAB_087604e8:
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

```

---

## operator_gt__gt_=

```asm
// === 08760820 TaoCrypt::Integer::operator>>=  [0x08760820-0x876092f] ===
 8760820:	55                   	push   %ebp
 8760821:	89 e5                	mov    %esp,%ebp
 8760823:	57                   	push   %edi
 8760824:	56                   	push   %esi
 8760825:	53                   	push   %ebx
 8760826:	e8 cd 25 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876082b:	81 c3 6d c3 c0 00    	add    $0xc0c36d,%ebx
 8760831:	83 ec 4c             	sub    $0x4c,%esp
 8760834:	8b 45 08             	mov    0x8(%ebp),%eax
 8760837:	89 04 24             	mov    %eax,(%esp)
 876083a:	e8 f1 c8 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 876083f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8760842:	8b 7d 08             	mov    0x8(%ebp),%edi
 8760845:	c1 ea 05             	shr    $0x5,%edx
 8760848:	89 d6                	mov    %edx,%esi
 876084a:	8b 4f 04             	mov    0x4(%edi),%ecx
 876084d:	39 d0                	cmp    %edx,%eax
 876084f:	0f 46 f0             	cmovbe %eax,%esi
 8760852:	85 f6                	test   %esi,%esi
 8760854:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8760857:	74 3d                	je     8760896 <_ZN8TaoCrypt7IntegerrSEj+0x76>
 8760859:	39 f0                	cmp    %esi,%eax
 876085b:	76 1b                	jbe    8760878 <_ZN8TaoCrypt7IntegerrSEj+0x58>
 876085d:	89 f7                	mov    %esi,%edi
 876085f:	31 d2                	xor    %edx,%edx
 8760861:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760868:	8b 3c b9             	mov    (%ecx,%edi,4),%edi
 876086b:	89 3c 91             	mov    %edi,(%ecx,%edx,4)
 876086e:	83 c2 01             	add    $0x1,%edx
 8760871:	8d 3c 32             	lea    (%edx,%esi,1),%edi
 8760874:	39 f8                	cmp    %edi,%eax
 8760876:	77 f0                	ja     8760868 <_ZN8TaoCrypt7IntegerrSEj+0x48>
 8760878:	89 c2                	mov    %eax,%edx
 876087a:	29 f2                	sub    %esi,%edx
 876087c:	8d 3c 91             	lea    (%ecx,%edx,4),%edi
 876087f:	31 d2                	xor    %edx,%edx
 8760881:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760888:	c7 04 97 00 00 00 00 	movl   $0x0,(%edi,%edx,4)
 876088f:	83 c2 01             	add    $0x1,%edx
 8760892:	39 f2                	cmp    %esi,%edx
 8760894:	72 f2                	jb     8760888 <_ZN8TaoCrypt7IntegerrSEj+0x68>
 8760896:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8760899:	76 52                	jbe    87608ed <_ZN8TaoCrypt7IntegerrSEj+0xcd>
 876089b:	8b 55 0c             	mov    0xc(%ebp),%edx
 876089e:	83 e2 1f             	and    $0x1f,%edx
 87608a1:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87608a4:	74 47                	je     87608ed <_ZN8TaoCrypt7IntegerrSEj+0xcd>
 87608a6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87608a9:	f7 d2                	not    %edx
 87608ab:	01 d0                	add    %edx,%eax
 87608ad:	78 3e                	js     87608ed <_ZN8TaoCrypt7IntegerrSEj+0xcd>
 87608af:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87608b2:	8d 14 81             	lea    (%ecx,%eax,4),%edx
 87608b5:	c7 45 e4 20 00 00 00 	movl   $0x20,-0x1c(%ebp)
 87608bc:	29 7d e4             	sub    %edi,-0x1c(%ebp)
 87608bf:	31 ff                	xor    %edi,%edi
 87608c1:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87608c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87608c8:	8b 32                	mov    (%edx),%esi
 87608ca:	83 e8 01             	sub    $0x1,%eax
 87608cd:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
 87608d1:	89 f7                	mov    %esi,%edi
 87608d3:	d3 ef                	shr    %cl,%edi
 87608d5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87608d8:	09 cf                	or     %ecx,%edi
 87608da:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 87608de:	89 3a                	mov    %edi,(%edx)
 87608e0:	83 ea 04             	sub    $0x4,%edx
 87608e3:	d3 e6                	shl    %cl,%esi
 87608e5:	83 f8 ff             	cmp    $0xffffffff,%eax
 87608e8:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 87608eb:	75 db                	jne    87608c8 <_ZN8TaoCrypt7IntegerrSEj+0xa8>
 87608ed:	8b 7d 08             	mov    0x8(%ebp),%edi
 87608f0:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 87608f4:	74 12                	je     8760908 <_ZN8TaoCrypt7IntegerrSEj+0xe8>
 87608f6:	8b 45 08             	mov    0x8(%ebp),%eax
 87608f9:	83 c4 4c             	add    $0x4c,%esp
 87608fc:	5b                   	pop    %ebx
 87608fd:	5e                   	pop    %esi
 87608fe:	5f                   	pop    %edi
 87608ff:	5d                   	pop    %ebp
 8760900:	c3                   	ret
 8760901:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760908:	89 3c 24             	mov    %edi,(%esp)
 876090b:	e8 20 c8 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8760910:	85 c0                	test   %eax,%eax
 8760912:	75 e2                	jne    87608f6 <_ZN8TaoCrypt7IntegerrSEj+0xd6>
 8760914:	e8 47 ef ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8760919:	89 3c 24             	mov    %edi,(%esp)
 876091c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760920:	e8 3b fb ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8760925:	eb cf                	jmp    87608f6 <_ZN8TaoCrypt7IntegerrSEj+0xd6>
 8760927:	90                   	nop
 8760928:	90                   	nop
 8760929:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Integer::operator>>= @ 0x8760820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::operator>>=(Integer *this,uint param_1)

{
  sbyte sVar1;
  uint uVar2;
  int iVar3;
  Integer *pIVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint local_40;
  byte local_20;
  
  uVar2 = WordCount(this);
  uVar5 = param_1 >> 5;
  iVar3 = *(int *)(this + 4);
  uVar9 = uVar5;
  if (uVar2 <= uVar5) {
    uVar9 = uVar2;
  }
  if (uVar9 != 0) {
    if (uVar9 < uVar2) {
      iVar6 = 0;
      uVar7 = uVar9;
      do {
        *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
        iVar6 = iVar6 + 1;
        uVar7 = iVar6 + uVar9;
      } while (uVar7 < uVar2);
    }
    uVar7 = 0;
    do {
      *(undefined4 *)(iVar3 + (uVar2 - uVar9) * 4 + uVar7 * 4) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  if (((uVar5 < uVar2) && ((param_1 & 0x1f) != 0)) && (iVar6 = uVar2 + ~uVar5, -1 < iVar6)) {
    puVar8 = (uint *)(iVar3 + iVar6 * 4);
    sVar1 = (sbyte)(param_1 & 0x1f);
    local_20 = 0x20 - sVar1;
    local_40 = 0;
    do {
      uVar9 = *puVar8;
      iVar6 = iVar6 + -1;
      *puVar8 = uVar9 >> sVar1 | local_40;
      puVar8 = puVar8 + -1;
      local_40 = uVar9 << (local_20 & 0x1f);
    } while (iVar6 != -1);
  }
  if (*(int *)(this + 0xc) == 1) {
    iVar3 = WordCount(this);
    if (iVar3 == 0) {
      pIVar4 = (Integer *)Zero();
      operator=(this,pIVar4);
    }
  }
  return this;
}

```

---

## operator_lt__lt_=

```asm
// === 0875eda0 TaoCrypt::Integer::operator<<=  [0x0875eda0-0x875ef3f] ===
 875eda0:	55                   	push   %ebp
 875eda1:	89 e5                	mov    %esp,%ebp
 875eda3:	57                   	push   %edi
 875eda4:	56                   	push   %esi
 875eda5:	53                   	push   %ebx
 875eda6:	e8 4d 40 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875edab:	81 c3 ed dd c0 00    	add    $0xc0dded,%ebx
 875edb1:	83 ec 4c             	sub    $0x4c,%esp
 875edb4:	8b 45 08             	mov    0x8(%ebp),%eax
 875edb7:	8b 75 0c             	mov    0xc(%ebp),%esi
 875edba:	89 04 24             	mov    %eax,(%esp)
 875edbd:	e8 6e e3 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875edc2:	89 f2                	mov    %esi,%edx
 875edc4:	89 f1                	mov    %esi,%ecx
 875edc6:	83 c6 1f             	add    $0x1f,%esi
 875edc9:	83 e1 1f             	and    $0x1f,%ecx
 875edcc:	c1 ee 05             	shr    $0x5,%esi
 875edcf:	c1 ea 05             	shr    $0x5,%edx
 875edd2:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875edd5:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 875edd8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875eddb:	01 f0                	add    %esi,%eax
 875eddd:	83 f8 08             	cmp    $0x8,%eax
 875ede0:	0f 86 32 01 00 00    	jbe    875ef18 <_ZN8TaoCrypt7IntegerlSEj+0x178>
 875ede6:	83 f8 10             	cmp    $0x10,%eax
 875ede9:	be 10 00 00 00       	mov    $0x10,%esi
 875edee:	76 18                	jbe    875ee08 <_ZN8TaoCrypt7IntegerlSEj+0x68>
 875edf0:	83 f8 20             	cmp    $0x20,%eax
 875edf3:	66 be 20 00          	mov    $0x20,%si
 875edf7:	76 0f                	jbe    875ee08 <_ZN8TaoCrypt7IntegerlSEj+0x68>
 875edf9:	83 f8 40             	cmp    $0x40,%eax
 875edfc:	66 be 40 00          	mov    $0x40,%si
 875ee00:	0f 87 22 01 00 00    	ja     875ef28 <_ZN8TaoCrypt7IntegerlSEj+0x188>
 875ee06:	66 90                	xchg   %ax,%ax
 875ee08:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ee0b:	8b 07                	mov    (%edi),%eax
 875ee0d:	39 c6                	cmp    %eax,%esi
 875ee0f:	76 49                	jbe    875ee5a <_ZN8TaoCrypt7IntegerlSEj+0xba>
 875ee11:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 875ee18:	00 
 875ee19:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875ee1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 875ee21:	8b 47 04             	mov    0x4(%edi),%eax
 875ee24:	89 44 24 04          	mov    %eax,0x4(%esp)
 875ee28:	89 f8                	mov    %edi,%eax
 875ee2a:	83 c0 08             	add    $0x8,%eax
 875ee2d:	89 04 24             	mov    %eax,(%esp)
 875ee30:	e8 8b 4e 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875ee35:	8b 17                	mov    (%edi),%edx
 875ee37:	89 f1                	mov    %esi,%ecx
 875ee39:	29 d1                	sub    %edx,%ecx
 875ee3b:	c1 e1 02             	shl    $0x2,%ecx
 875ee3e:	89 47 04             	mov    %eax,0x4(%edi)
 875ee41:	8d 04 90             	lea    (%eax,%edx,4),%eax
 875ee44:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875ee48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875ee4f:	00 
 875ee50:	89 04 24             	mov    %eax,(%esp)
 875ee53:	e8 68 ee 91 ff       	call   807dcc0 <memset@plt>
 875ee58:	89 37                	mov    %esi,(%edi)
 875ee5a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ee5d:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875ee60:	03 55 e4             	add    -0x1c(%ebp),%edx
 875ee63:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 875ee66:	8b 45 08             	mov    0x8(%ebp),%eax
 875ee69:	0f 46 f2             	cmovbe %edx,%esi
 875ee6c:	85 f6                	test   %esi,%esi
 875ee6e:	8b 78 04             	mov    0x4(%eax),%edi
 875ee71:	74 43                	je     875eeb6 <_ZN8TaoCrypt7IntegerlSEj+0x116>
 875ee73:	8d 42 ff             	lea    -0x1(%edx),%eax
 875ee76:	39 f0                	cmp    %esi,%eax
 875ee78:	72 2a                	jb     875eea4 <_ZN8TaoCrypt7IntegerlSEj+0x104>
 875ee7a:	89 d1                	mov    %edx,%ecx
 875ee7c:	29 f1                	sub    %esi,%ecx
 875ee7e:	8d 4c 8f fc          	lea    -0x4(%edi,%ecx,4),%ecx
 875ee82:	8d 54 97 fc          	lea    -0x4(%edi,%edx,4),%edx
 875ee86:	89 7d d8             	mov    %edi,-0x28(%ebp)
 875ee89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875ee90:	8b 39                	mov    (%ecx),%edi
 875ee92:	83 e8 01             	sub    $0x1,%eax
 875ee95:	83 e9 04             	sub    $0x4,%ecx
 875ee98:	89 3a                	mov    %edi,(%edx)
 875ee9a:	83 ea 04             	sub    $0x4,%edx
 875ee9d:	39 f0                	cmp    %esi,%eax
 875ee9f:	73 ef                	jae    875ee90 <_ZN8TaoCrypt7IntegerlSEj+0xf0>
 875eea1:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875eea4:	31 c0                	xor    %eax,%eax
 875eea6:	66 90                	xchg   %ax,%ax
 875eea8:	c7 04 87 00 00 00 00 	movl   $0x0,(%edi,%eax,4)
 875eeaf:	83 c0 01             	add    $0x1,%eax
 875eeb2:	39 f0                	cmp    %esi,%eax
 875eeb4:	72 f2                	jb     875eea8 <_ZN8TaoCrypt7IntegerlSEj+0x108>
 875eeb6:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875eeb9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875eebc:	85 c9                	test   %ecx,%ecx
 875eebe:	8d 34 97             	lea    (%edi,%edx,4),%esi
 875eec1:	74 49                	je     875ef0c <_ZN8TaoCrypt7IntegerlSEj+0x16c>
 875eec3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875eec6:	83 c1 01             	add    $0x1,%ecx
 875eec9:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875eecc:	74 3e                	je     875ef0c <_ZN8TaoCrypt7IntegerlSEj+0x16c>
 875eece:	8b 7d dc             	mov    -0x24(%ebp),%edi
 875eed1:	31 c0                	xor    %eax,%eax
 875eed3:	c7 45 e4 20 00 00 00 	movl   $0x20,-0x1c(%ebp)
 875eeda:	29 7d e4             	sub    %edi,-0x1c(%ebp)
 875eedd:	31 ff                	xor    %edi,%edi
 875eedf:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875eee2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875eee8:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875eeeb:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
 875eeef:	89 d7                	mov    %edx,%edi
 875eef1:	d3 e7                	shl    %cl,%edi
 875eef3:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875eef6:	09 cf                	or     %ecx,%edi
 875eef8:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 875eefc:	89 3c 86             	mov    %edi,(%esi,%eax,4)
 875eeff:	83 c0 01             	add    $0x1,%eax
 875ef02:	d3 ea                	shr    %cl,%edx
 875ef04:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 875ef07:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875ef0a:	77 dc                	ja     875eee8 <_ZN8TaoCrypt7IntegerlSEj+0x148>
 875ef0c:	8b 45 08             	mov    0x8(%ebp),%eax
 875ef0f:	83 c4 4c             	add    $0x4c,%esp
 875ef12:	5b                   	pop    %ebx
 875ef13:	5e                   	pop    %esi
 875ef14:	5f                   	pop    %edi
 875ef15:	5d                   	pop    %ebp
 875ef16:	c3                   	ret
 875ef17:	90                   	nop
 875ef18:	8b b4 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%esi
 875ef1f:	e9 e4 fe ff ff       	jmp    875ee08 <_ZN8TaoCrypt7IntegerlSEj+0x68>
 875ef24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875ef28:	83 e8 01             	sub    $0x1,%eax
 875ef2b:	66 be 01 00          	mov    $0x1,%si
 875ef2f:	89 04 24             	mov    %eax,(%esp)
 875ef32:	e8 09 86 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875ef37:	89 c1                	mov    %eax,%ecx
 875ef39:	d3 e6                	shl    %cl,%esi
 875ef3b:	e9 c8 fe ff ff       	jmp    875ee08 <_ZN8TaoCrypt7IntegerlSEj+0x68>

```

```c
// TaoCrypt::Integer::operator<<= @ 0x875eda0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::operator<<=(Integer *this,uint param_1)

{
  undefined4 uVar1;
  sbyte sVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_30;
  byte local_20;
  
  iVar4 = WordCount(this);
  uVar9 = param_1 >> 5;
  uVar5 = iVar4 + (param_1 + 0x1f >> 5);
  if (uVar5 < 9) {
    uVar11 = (&RoundupSizeTable)[uVar5];
  }
  else {
    uVar11 = 0x10;
    if (((0x10 < uVar5) && (uVar11 = 0x20, 0x20 < uVar5)) && (uVar11 = 0x40, 0x40 < uVar5)) {
      bVar3 = BitPrecision(uVar5 - 1);
      uVar11 = 1 << (bVar3 & 0x1f);
    }
  }
  if (*(uint *)this < uVar11) {
    iVar6 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar11,true);
    *(int *)(this + 4) = iVar6;
    memset((void *)(iVar6 + *(int *)this * 4),0,(uVar11 - *(int *)this) * 4);
    *(uint *)this = uVar11;
  }
  uVar11 = iVar4 + uVar9;
  uVar5 = uVar9;
  if (uVar11 <= uVar9) {
    uVar5 = uVar11;
  }
  iVar6 = *(int *)(this + 4);
  if (uVar5 != 0) {
    uVar7 = uVar11 - 1;
    if (uVar5 <= uVar7) {
      puVar8 = (undefined4 *)(iVar6 + -4 + (uVar11 - uVar5) * 4);
      puVar10 = (undefined4 *)(iVar6 + -4 + uVar11 * 4);
      do {
        uVar1 = *puVar8;
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + -1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + -1;
      } while (uVar5 <= uVar7);
    }
    uVar11 = 0;
    do {
      *(undefined4 *)(iVar6 + uVar11 * 4) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  iVar6 = iVar6 + uVar9 * 4;
  if (((param_1 & 0x1f) != 0) && (iVar4 != -1)) {
    uVar5 = 0;
    sVar2 = (sbyte)(param_1 & 0x1f);
    local_20 = 0x20 - sVar2;
    local_30 = 0;
    do {
      uVar9 = *(uint *)(iVar6 + uVar5 * 4);
      *(uint *)(iVar6 + uVar5 * 4) = uVar9 << sVar2 | local_30;
      uVar5 = uVar5 + 1;
      local_30 = uVar9 >> (local_20 & 0x1f);
    } while (uVar5 < iVar4 + 1U);
  }
  return this;
}

```

