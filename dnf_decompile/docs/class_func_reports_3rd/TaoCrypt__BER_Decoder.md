# TaoCrypt__BER_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## GetError

```asm
// === 08753770 TaoCrypt::BER_Decoder::GetError  [0x08753770-0x875378f] ===
 8753770:	55                   	push   %ebp
 8753771:	89 e5                	mov    %esp,%ebp
 8753773:	8b 55 0c             	mov    0xc(%ebp),%edx
 8753776:	8b 45 08             	mov    0x8(%ebp),%eax
 8753779:	8b 52 04             	mov    0x4(%edx),%edx
 875377c:	8b 52 10             	mov    0x10(%edx),%edx
 875377f:	89 10                	mov    %edx,(%eax)
 8753781:	5d                   	pop    %ebp
 8753782:	c2 04 00             	ret    $0x4
 8753785:	90                   	nop
 8753786:	8d 76 00             	lea    0x0(%esi),%esi
 8753789:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BER_Decoder::GetError @ 0x8753770

/* TaoCrypt::BER_Decoder::GetError() */

void TaoCrypt::BER_Decoder::GetError(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  *in_stack_00000004 = *(undefined4 *)(*(int *)(in_stack_00000008 + 4) + 0x10);
  return;
}

```

---

## GetExplicitVersion

```asm
// === 087538c0 TaoCrypt::BER_Decoder::GetExplicitVersion  [0x087538c0-0x875391f] ===
 87538c0:	55                   	push   %ebp
 87538c1:	31 c0                	xor    %eax,%eax
 87538c3:	89 e5                	mov    %esp,%ebp
 87538c5:	83 ec 18             	sub    $0x18,%esp
 87538c8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87538cb:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87538ce:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87538d1:	e8 22 f5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87538d6:	81 c3 c2 92 c1 00    	add    $0xc192c2,%ebx
 87538dc:	8b 51 04             	mov    0x4(%ecx),%edx
 87538df:	8b 72 10             	mov    0x10(%edx),%esi
 87538e2:	85 f6                	test   %esi,%esi
 87538e4:	75 18                	jne    87538fe <_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv+0x3e>
 87538e6:	8b 42 0c             	mov    0xc(%edx),%eax
 87538e9:	8d 70 01             	lea    0x1(%eax),%esi
 87538ec:	89 72 0c             	mov    %esi,0xc(%edx)
 87538ef:	8b 72 04             	mov    0x4(%edx),%esi
 87538f2:	80 3c 06 a0          	cmpb   $0xa0,(%esi,%eax,1)
 87538f6:	74 10                	je     8753908 <_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv+0x48>
 87538f8:	83 6a 0c 01          	subl   $0x1,0xc(%edx)
 87538fc:	31 c0                	xor    %eax,%eax
 87538fe:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753901:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753904:	89 ec                	mov    %ebp,%esp
 8753906:	5d                   	pop    %ebp
 8753907:	c3                   	ret
 8753908:	83 42 0c 01          	addl   $0x1,0xc(%edx)
 875390c:	89 0c 24             	mov    %ecx,(%esp)
 875390f:	e8 3c ff ff ff       	call   8753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>
 8753914:	eb e8                	jmp    87538fe <_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv+0x3e>
 8753916:	8d 76 00             	lea    0x0(%esi),%esi
 8753919:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BER_Decoder::GetExplicitVersion @ 0x87538c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetExplicitVersion() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetExplicitVersion(BER_Decoder *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(this + 4);
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(iVar1 + 4) + iVar2) == -0x60) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      uVar3 = GetVersion(this);
    }
    else {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## GetInteger

```asm
// === 087544a0 TaoCrypt::BER_Decoder::GetInteger  [0x087544a0-0x87544df] ===
 87544a0:	55                   	push   %ebp
 87544a1:	89 e5                	mov    %esp,%ebp
 87544a3:	83 ec 18             	sub    $0x18,%esp
 87544a6:	8b 45 08             	mov    0x8(%ebp),%eax
 87544a9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87544ac:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87544af:	8b 75 0c             	mov    0xc(%ebp),%esi
 87544b2:	e8 41 e9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87544b7:	81 c3 e1 86 c1 00    	add    $0xc186e1,%ebx
 87544bd:	8b 40 04             	mov    0x4(%eax),%eax
 87544c0:	8b 50 10             	mov    0x10(%eax),%edx
 87544c3:	85 d2                	test   %edx,%edx
 87544c5:	75 0c                	jne    87544d3 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE+0x33>
 87544c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87544cb:	89 34 24             	mov    %esi,(%esp)
 87544ce:	e8 ad bd 00 00       	call   8760280 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE>
 87544d3:	89 f0                	mov    %esi,%eax
 87544d5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87544d8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87544db:	89 ec                	mov    %ebp,%esp
 87544dd:	5d                   	pop    %ebp
 87544de:	c3                   	ret
 87544df:	90                   	nop

```

```c
// TaoCrypt::BER_Decoder::GetInteger @ 0x87544a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&) */

Integer * __thiscall TaoCrypt::BER_Decoder::GetInteger(BER_Decoder *this,Integer *param_1)

{
  if (*(int *)(*(Source **)(this + 4) + 0x10) == 0) {
    Integer::Decode(param_1,*(Source **)(this + 4));
  }
  return param_1;
}

```

---

## GetSequence

```asm
// === 08753790 TaoCrypt::BER_Decoder::GetSequence  [0x08753790-0x87537ef] ===
 8753790:	55                   	push   %ebp
 8753791:	89 e5                	mov    %esp,%ebp
 8753793:	53                   	push   %ebx
 8753794:	83 ec 14             	sub    $0x14,%esp
 8753797:	8b 45 08             	mov    0x8(%ebp),%eax
 875379a:	e8 59 f6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875379f:	81 c3 f9 93 c1 00    	add    $0xc193f9,%ebx
 87537a5:	8b 50 04             	mov    0x4(%eax),%edx
 87537a8:	31 c0                	xor    %eax,%eax
 87537aa:	8b 4a 10             	mov    0x10(%edx),%ecx
 87537ad:	85 c9                	test   %ecx,%ecx
 87537af:	75 1b                	jne    87537cc <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv+0x3c>
 87537b1:	8b 42 0c             	mov    0xc(%edx),%eax
 87537b4:	8d 48 01             	lea    0x1(%eax),%ecx
 87537b7:	89 4a 0c             	mov    %ecx,0xc(%edx)
 87537ba:	8b 4a 04             	mov    0x4(%edx),%ecx
 87537bd:	80 3c 01 30          	cmpb   $0x30,(%ecx,%eax,1)
 87537c1:	74 15                	je     87537d8 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv+0x48>
 87537c3:	c7 42 10 fc 03 00 00 	movl   $0x3fc,0x10(%edx)
 87537ca:	31 c0                	xor    %eax,%eax
 87537cc:	83 c4 14             	add    $0x14,%esp
 87537cf:	5b                   	pop    %ebx
 87537d0:	5d                   	pop    %ebp
 87537d1:	c3                   	ret
 87537d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87537d8:	89 14 24             	mov    %edx,(%esp)
 87537db:	e8 20 ff ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 87537e0:	83 c4 14             	add    $0x14,%esp
 87537e3:	5b                   	pop    %ebx
 87537e4:	5d                   	pop    %ebp
 87537e5:	c3                   	ret
 87537e6:	8d 76 00             	lea    0x0(%esi),%esi
 87537e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BER_Decoder::GetSequence @ 0x8753790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetSequence() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetSequence(BER_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '0') {
      uVar3 = GetLength(pSVar1);
      return uVar3;
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x3fc;
  }
  return 0;
}

```

---

## GetSet

```asm
// === 087537f0 TaoCrypt::BER_Decoder::GetSet  [0x087537f0-0x875384f] ===
 87537f0:	55                   	push   %ebp
 87537f1:	89 e5                	mov    %esp,%ebp
 87537f3:	53                   	push   %ebx
 87537f4:	83 ec 14             	sub    $0x14,%esp
 87537f7:	8b 45 08             	mov    0x8(%ebp),%eax
 87537fa:	e8 f9 f5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87537ff:	81 c3 99 93 c1 00    	add    $0xc19399,%ebx
 8753805:	8b 50 04             	mov    0x4(%eax),%edx
 8753808:	31 c0                	xor    %eax,%eax
 875380a:	8b 4a 10             	mov    0x10(%edx),%ecx
 875380d:	85 c9                	test   %ecx,%ecx
 875380f:	75 1b                	jne    875382c <_ZN8TaoCrypt11BER_Decoder6GetSetEv+0x3c>
 8753811:	8b 42 0c             	mov    0xc(%edx),%eax
 8753814:	8d 48 01             	lea    0x1(%eax),%ecx
 8753817:	89 4a 0c             	mov    %ecx,0xc(%edx)
 875381a:	8b 4a 04             	mov    0x4(%edx),%ecx
 875381d:	80 3c 01 31          	cmpb   $0x31,(%ecx,%eax,1)
 8753821:	74 15                	je     8753838 <_ZN8TaoCrypt11BER_Decoder6GetSetEv+0x48>
 8753823:	c7 42 10 fd 03 00 00 	movl   $0x3fd,0x10(%edx)
 875382a:	31 c0                	xor    %eax,%eax
 875382c:	83 c4 14             	add    $0x14,%esp
 875382f:	5b                   	pop    %ebx
 8753830:	5d                   	pop    %ebp
 8753831:	c3                   	ret
 8753832:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753838:	89 14 24             	mov    %edx,(%esp)
 875383b:	e8 c0 fe ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8753840:	83 c4 14             	add    $0x14,%esp
 8753843:	5b                   	pop    %ebx
 8753844:	5d                   	pop    %ebp
 8753845:	c3                   	ret
 8753846:	8d 76 00             	lea    0x0(%esi),%esi
 8753849:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BER_Decoder::GetSet @ 0x87537f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetSet() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetSet(BER_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '1') {
      uVar3 = GetLength(pSVar1);
      return uVar3;
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x3fd;
  }
  return 0;
}

```

---

## GetVersion

```asm
// === 08753850 TaoCrypt::BER_Decoder::GetVersion  [0x08753850-0x87538bf] ===
 8753850:	55                   	push   %ebp
 8753851:	89 e5                	mov    %esp,%ebp
 8753853:	8b 45 08             	mov    0x8(%ebp),%eax
 8753856:	56                   	push   %esi
 8753857:	8b 50 04             	mov    0x4(%eax),%edx
 875385a:	31 c0                	xor    %eax,%eax
 875385c:	8b 72 10             	mov    0x10(%edx),%esi
 875385f:	85 f6                	test   %esi,%esi
 8753861:	75 1b                	jne    875387e <_ZN8TaoCrypt11BER_Decoder10GetVersionEv+0x2e>
 8753863:	8b 42 0c             	mov    0xc(%edx),%eax
 8753866:	8d 48 01             	lea    0x1(%eax),%ecx
 8753869:	89 4a 0c             	mov    %ecx,0xc(%edx)
 875386c:	8b 4a 04             	mov    0x4(%edx),%ecx
 875386f:	80 3c 01 02          	cmpb   $0x2,(%ecx,%eax,1)
 8753873:	74 13                	je     8753888 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv+0x38>
 8753875:	c7 42 10 f2 03 00 00 	movl   $0x3f2,0x10(%edx)
 875387c:	31 c0                	xor    %eax,%eax
 875387e:	5e                   	pop    %esi
 875387f:	5d                   	pop    %ebp
 8753880:	c3                   	ret
 8753881:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753888:	8d 70 02             	lea    0x2(%eax),%esi
 875388b:	89 72 0c             	mov    %esi,0xc(%edx)
 875388e:	80 7c 01 01 01       	cmpb   $0x1,0x1(%ecx,%eax,1)
 8753893:	74 13                	je     87538a8 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv+0x58>
 8753895:	c7 42 10 fe 03 00 00 	movl   $0x3fe,0x10(%edx)
 875389c:	31 c0                	xor    %eax,%eax
 875389e:	5e                   	pop    %esi
 875389f:	5d                   	pop    %ebp
 87538a0:	c3                   	ret
 87538a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87538a8:	8d 70 03             	lea    0x3(%eax),%esi
 87538ab:	89 72 0c             	mov    %esi,0xc(%edx)
 87538ae:	0f b6 44 01 02       	movzbl 0x2(%ecx,%eax,1),%eax
 87538b3:	eb c9                	jmp    875387e <_ZN8TaoCrypt11BER_Decoder10GetVersionEv+0x2e>
 87538b5:	90                   	nop
 87538b6:	8d 76 00             	lea    0x0(%esi),%esi
 87538b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BER_Decoder::GetVersion @ 0x8753850

/* TaoCrypt::BER_Decoder::GetVersion() */

undefined1 __thiscall TaoCrypt::BER_Decoder::GetVersion(BER_Decoder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)(this + 4);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar2 + 1;
    iVar3 = *(int *)(iVar1 + 4);
    if (*(char *)(iVar3 + iVar2) == '\x02') {
      *(int *)(iVar1 + 0xc) = iVar2 + 2;
      if (*(char *)(iVar3 + 1 + iVar2) != '\x01') {
        *(undefined4 *)(iVar1 + 0x10) = 0x3fe;
        return 0;
      }
      *(int *)(iVar1 + 0xc) = iVar2 + 3;
      uVar4 = *(undefined1 *)(iVar3 + 2 + iVar2);
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = 0x3f2;
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

