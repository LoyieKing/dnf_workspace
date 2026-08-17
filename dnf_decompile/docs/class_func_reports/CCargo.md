# CCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 31

---

## FindItemLock

```asm
// === 0850c836 CCargo::FindItemLock  [0x0850c836-0x850c8a7] ===
 850c836:	55                   	push   %ebp
 850c837:	89 e5                	mov    %esp,%ebp
 850c839:	83 ec 28             	sub    $0x28,%esp
 850c83c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c83f:	88 45 f4             	mov    %al,-0xc(%ebp)
 850c842:	8b 45 10             	mov    0x10(%ebp),%eax
 850c845:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 850c84b:	8b 45 14             	mov    0x14(%ebp),%eax
 850c84e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 850c854:	eb 3a                	jmp    850c890 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi+0x5a>
 850c856:	8b 45 08             	mov    0x8(%ebp),%eax
 850c859:	8b 50 04             	mov    0x4(%eax),%edx
 850c85c:	8b 45 14             	mov    0x14(%ebp),%eax
 850c85f:	8b 00                	mov    (%eax),%eax
 850c861:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c864:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c867:	83 c0 11             	add    $0x11,%eax
 850c86a:	89 04 24             	mov    %eax,(%esp)
 850c86d:	e8 36 ed d7 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 850c872:	3a 45 f4             	cmp    -0xc(%ebp),%al
 850c875:	0f 94 c0             	sete   %al
 850c878:	84 c0                	test   %al,%al
 850c87a:	74 07                	je     850c883 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi+0x4d>
 850c87c:	b8 01 00 00 00       	mov    $0x1,%eax
 850c881:	eb 23                	jmp    850c8a6 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi+0x70>
 850c883:	8b 45 14             	mov    0x14(%ebp),%eax
 850c886:	8b 00                	mov    (%eax),%eax
 850c888:	8d 50 01             	lea    0x1(%eax),%edx
 850c88b:	8b 45 14             	mov    0x14(%ebp),%eax
 850c88e:	89 10                	mov    %edx,(%eax)
 850c890:	8b 45 14             	mov    0x14(%ebp),%eax
 850c893:	8b 00                	mov    (%eax),%eax
 850c895:	3d 97 00 00 00       	cmp    $0x97,%eax
 850c89a:	0f 9e c0             	setle  %al
 850c89d:	84 c0                	test   %al,%al
 850c89f:	75 b5                	jne    850c856 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi+0x20>
 850c8a1:	b8 00 00 00 00       	mov    $0x0,%eax
 850c8a6:	c9                   	leave
 850c8a7:	c3                   	ret

```

```c
// CCargo::FindItemLock @ 0x850c836

/* CCargo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CCargo::FindItemLock(CCargo *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  
  *(undefined4 *)param_2 = 2;
  *param_3 = 0;
  while( true ) {
    if (0x97 < *param_3) {
      return 0;
    }
    uVar1 = stAmplifyOption_t::GetLock
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + *param_3 * 0x3d + 0x11));
    if (uVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}

```

---

## GetCargoData

```asm
// === 0850c6e0 CCargo::GetCargoData  [0x0850c6e0-0x850c79d] ===
 850c6e0:	55                   	push   %ebp
 850c6e1:	89 e5                	mov    %esp,%ebp
 850c6e3:	83 ec 10             	sub    $0x10,%esp
 850c6e6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 850c6ed:	e9 92 00 00 00       	jmp    850c784 <_ZNK6CCargo12GetCargoDataEiR10Inven_Item+0xa4>
 850c6f2:	8b 45 08             	mov    0x8(%ebp),%eax
 850c6f5:	8b 50 04             	mov    0x4(%eax),%edx
 850c6f8:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850c6fb:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c6fe:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c701:	8b 50 02             	mov    0x2(%eax),%edx
 850c704:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c707:	39 c2                	cmp    %eax,%edx
 850c709:	75 75                	jne    850c780 <_ZNK6CCargo12GetCargoDataEiR10Inven_Item+0xa0>
 850c70b:	8b 45 08             	mov    0x8(%ebp),%eax
 850c70e:	8b 50 04             	mov    0x4(%eax),%edx
 850c711:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850c714:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c717:	01 c2                	add    %eax,%edx
 850c719:	8b 45 10             	mov    0x10(%ebp),%eax
 850c71c:	8b 0a                	mov    (%edx),%ecx
 850c71e:	89 08                	mov    %ecx,(%eax)
 850c720:	8b 4a 04             	mov    0x4(%edx),%ecx
 850c723:	89 48 04             	mov    %ecx,0x4(%eax)
 850c726:	8b 4a 08             	mov    0x8(%edx),%ecx
 850c729:	89 48 08             	mov    %ecx,0x8(%eax)
 850c72c:	8b 4a 0c             	mov    0xc(%edx),%ecx
 850c72f:	89 48 0c             	mov    %ecx,0xc(%eax)
 850c732:	8b 4a 10             	mov    0x10(%edx),%ecx
 850c735:	89 48 10             	mov    %ecx,0x10(%eax)
 850c738:	8b 4a 14             	mov    0x14(%edx),%ecx
 850c73b:	89 48 14             	mov    %ecx,0x14(%eax)
 850c73e:	8b 4a 18             	mov    0x18(%edx),%ecx
 850c741:	89 48 18             	mov    %ecx,0x18(%eax)
 850c744:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 850c747:	89 48 1c             	mov    %ecx,0x1c(%eax)
 850c74a:	8b 4a 20             	mov    0x20(%edx),%ecx
 850c74d:	89 48 20             	mov    %ecx,0x20(%eax)
 850c750:	8b 4a 24             	mov    0x24(%edx),%ecx
 850c753:	89 48 24             	mov    %ecx,0x24(%eax)
 850c756:	8b 4a 28             	mov    0x28(%edx),%ecx
 850c759:	89 48 28             	mov    %ecx,0x28(%eax)
 850c75c:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 850c75f:	89 48 2c             	mov    %ecx,0x2c(%eax)
 850c762:	8b 4a 30             	mov    0x30(%edx),%ecx
 850c765:	89 48 30             	mov    %ecx,0x30(%eax)
 850c768:	8b 4a 34             	mov    0x34(%edx),%ecx
 850c76b:	89 48 34             	mov    %ecx,0x34(%eax)
 850c76e:	8b 4a 38             	mov    0x38(%edx),%ecx
 850c771:	89 48 38             	mov    %ecx,0x38(%eax)
 850c774:	0f b6 52 3c          	movzbl 0x3c(%edx),%edx
 850c778:	88 50 3c             	mov    %dl,0x3c(%eax)
 850c77b:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850c77e:	eb 1b                	jmp    850c79b <_ZNK6CCargo12GetCargoDataEiR10Inven_Item+0xbb>
 850c780:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 850c784:	81 7d fc 97 00 00 00 	cmpl   $0x97,-0x4(%ebp)
 850c78b:	0f 9e c0             	setle  %al
 850c78e:	84 c0                	test   %al,%al
 850c790:	0f 85 5c ff ff ff    	jne    850c6f2 <_ZNK6CCargo12GetCargoDataEiR10Inven_Item+0x12>
 850c796:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850c79b:	c9                   	leave
 850c79c:	c3                   	ret
 850c79d:	90                   	nop

```

```c
// CCargo::GetCargoData @ 0x850c6e0

/* CCargo::GetCargoData(int, Inven_Item&) const */

int __thiscall CCargo::GetCargoData(CCargo *this,int param_1,Inven_Item *param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x97 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 4) + local_8 * 0x3d);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  *(undefined4 *)(param_2 + 0xc) = puVar1[3];
  *(undefined4 *)(param_2 + 0x10) = puVar1[4];
  *(undefined4 *)(param_2 + 0x14) = puVar1[5];
  *(undefined4 *)(param_2 + 0x18) = puVar1[6];
  *(undefined4 *)(param_2 + 0x1c) = puVar1[7];
  *(undefined4 *)(param_2 + 0x20) = puVar1[8];
  *(undefined4 *)(param_2 + 0x24) = puVar1[9];
  *(undefined4 *)(param_2 + 0x28) = puVar1[10];
  *(undefined4 *)(param_2 + 0x2c) = puVar1[0xb];
  *(undefined4 *)(param_2 + 0x30) = puVar1[0xc];
  *(undefined4 *)(param_2 + 0x34) = puVar1[0xd];
  *(undefined4 *)(param_2 + 0x38) = puVar1[0xe];
  param_2[0x3c] = *(Inven_Item *)(puVar1 + 0xf);
  return local_8;
}

```

---

## GetCargoRef

```asm
// === 0850b390 CCargo::GetCargoRef  [0x0850b390-0x850b3c7] ===
 850b390:	55                   	push   %ebp
 850b391:	89 e5                	mov    %esp,%ebp
 850b393:	83 ec 18             	sub    $0x18,%esp
 850b396:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b399:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b39d:	8b 45 08             	mov    0x8(%ebp),%eax
 850b3a0:	89 04 24             	mov    %eax,(%esp)
 850b3a3:	e8 f4 1f 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b3a8:	83 f0 01             	xor    $0x1,%eax
 850b3ab:	84 c0                	test   %al,%al
 850b3ad:	74 07                	je     850b3b6 <_ZNK6CCargo11GetCargoRefEi+0x26>
 850b3af:	b8 00 00 00 00       	mov    $0x0,%eax
 850b3b4:	eb 0f                	jmp    850b3c5 <_ZNK6CCargo11GetCargoRefEi+0x35>
 850b3b6:	8b 45 08             	mov    0x8(%ebp),%eax
 850b3b9:	8b 50 04             	mov    0x4(%eax),%edx
 850b3bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b3bf:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b3c2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b3c5:	c9                   	leave
 850b3c6:	c3                   	ret
 850b3c7:	90                   	nop

```

```c
// CCargo::GetCargoRef @ 0x850b390

/* CCargo::GetCargoRef(int) const */

int __thiscall CCargo::GetCargoRef(CCargo *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(this + 4) + param_1 * 0x3d;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

---

## GetCargoRef_0850b3c8

```asm
// === 0850b3c8 CCargo::GetCargoRef  [0x0850b3c8-0x850b3ff] ===
 850b3c8:	55                   	push   %ebp
 850b3c9:	89 e5                	mov    %esp,%ebp
 850b3cb:	83 ec 18             	sub    $0x18,%esp
 850b3ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b3d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b3d5:	8b 45 08             	mov    0x8(%ebp),%eax
 850b3d8:	89 04 24             	mov    %eax,(%esp)
 850b3db:	e8 bc 1f 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b3e0:	83 f0 01             	xor    $0x1,%eax
 850b3e3:	84 c0                	test   %al,%al
 850b3e5:	74 07                	je     850b3ee <_ZN6CCargo11GetCargoRefEi+0x26>
 850b3e7:	b8 00 00 00 00       	mov    $0x0,%eax
 850b3ec:	eb 0f                	jmp    850b3fd <_ZN6CCargo11GetCargoRefEi+0x35>
 850b3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 850b3f1:	8b 50 04             	mov    0x4(%eax),%edx
 850b3f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b3f7:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b3fa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b3fd:	c9                   	leave
 850b3fe:	c3                   	ret
 850b3ff:	90                   	nop

```

```c
// CCargo::GetCargoRef @ 0x850b3c8

/* CCargo::GetCargoRef(int) */

int __thiscall CCargo::GetCargoRef(CCargo *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(this + 4) + param_1 * 0x3d;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

---

## MakeItemList

```asm
// === 0850bee2 CCargo::MakeItemList  [0x0850bee2-0x850c15f] ===
 850bee2:	55                   	push   %ebp
 850bee3:	89 e5                	mov    %esp,%ebp
 850bee5:	56                   	push   %esi
 850bee6:	53                   	push   %ebx
 850bee7:	83 ec 20             	sub    $0x20,%esp
 850beea:	8b 45 0c             	mov    0xc(%ebp),%eax
 850beed:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 850bef4:	00 
 850bef5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850befc:	00 
 850befd:	89 04 24             	mov    %eax,(%esp)
 850bf00:	e8 f7 f9 bb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 850bf05:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bf08:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850bf0f:	00 
 850bf10:	89 04 24             	mov    %eax,(%esp)
 850bf13:	e8 08 fa bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850bf18:	8b 45 08             	mov    0x8(%ebp),%eax
 850bf1b:	89 04 24             	mov    %eax,(%esp)
 850bf1e:	e8 e5 17 d2 ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 850bf23:	8b 55 0c             	mov    0xc(%ebp),%edx
 850bf26:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bf2a:	89 14 24             	mov    %edx,(%esp)
 850bf2d:	e8 72 df bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850bf32:	8b 45 08             	mov    0x8(%ebp),%eax
 850bf35:	89 04 24             	mov    %eax,(%esp)
 850bf38:	e8 b3 da fd ff       	call   84e99f0 <_ZNK6CCargo12GetItemCountEv>
 850bf3d:	8b 55 0c             	mov    0xc(%ebp),%edx
 850bf40:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bf44:	89 14 24             	mov    %edx,(%esp)
 850bf47:	e8 58 df bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850bf4c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850bf53:	e9 d7 01 00 00       	jmp    850c12f <_ZNK6CCargo12MakeItemListEP11PacketGuard+0x24d>
 850bf58:	8b 45 08             	mov    0x8(%ebp),%eax
 850bf5b:	8b 50 04             	mov    0x4(%eax),%edx
 850bf5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bf61:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bf64:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bf67:	8b 40 02             	mov    0x2(%eax),%eax
 850bf6a:	85 c0                	test   %eax,%eax
 850bf6c:	0f 84 b9 01 00 00    	je     850c12b <_ZNK6CCargo12MakeItemListEP11PacketGuard+0x249>
 850bf72:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bf75:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850bf78:	89 54 24 04          	mov    %edx,0x4(%esp)
 850bf7c:	89 04 24             	mov    %eax,(%esp)
 850bf7f:	e8 20 df bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850bf84:	8b 45 08             	mov    0x8(%ebp),%eax
 850bf87:	8b 50 04             	mov    0x4(%eax),%edx
 850bf8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bf8d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bf90:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bf93:	8b 40 02             	mov    0x2(%eax),%eax
 850bf96:	89 c2                	mov    %eax,%edx
 850bf98:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bf9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850bf9f:	89 04 24             	mov    %eax,(%esp)
 850bfa2:	e8 95 f9 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850bfa7:	8b 45 08             	mov    0x8(%ebp),%eax
 850bfaa:	8b 50 04             	mov    0x4(%eax),%edx
 850bfad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bfb0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bfb3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bfb6:	8b 50 07             	mov    0x7(%eax),%edx
 850bfb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bfbc:	89 54 24 04          	mov    %edx,0x4(%esp)
 850bfc0:	89 04 24             	mov    %eax,(%esp)
 850bfc3:	e8 74 f9 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850bfc8:	8b 45 08             	mov    0x8(%ebp),%eax
 850bfcb:	8b 50 04             	mov    0x4(%eax),%edx
 850bfce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bfd1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bfd4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bfd7:	89 04 24             	mov    %eax,(%esp)
 850bfda:	e8 20 06 ff ff       	call   84fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>
 850bfdf:	0f b6 d0             	movzbl %al,%edx
 850bfe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bfe5:	89 54 24 04          	mov    %edx,0x4(%esp)
 850bfe9:	89 04 24             	mov    %eax,(%esp)
 850bfec:	e8 2f f9 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850bff1:	8b 45 08             	mov    0x8(%ebp),%eax
 850bff4:	8b 50 04             	mov    0x4(%eax),%edx
 850bff7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bffa:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bffd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c000:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 850c004:	0f b7 d0             	movzwl %ax,%edx
 850c007:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c00a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c00e:	89 04 24             	mov    %eax,(%esp)
 850c011:	e8 8e de bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c016:	8b 45 08             	mov    0x8(%ebp),%eax
 850c019:	8b 50 04             	mov    0x4(%eax),%edx
 850c01c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c01f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c022:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c025:	0f b6 00             	movzbl (%eax),%eax
 850c028:	0f b6 d0             	movzbl %al,%edx
 850c02b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c02e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c032:	89 04 24             	mov    %eax,(%esp)
 850c035:	e8 e6 f8 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c03a:	e8 68 e3 bc ff       	call   80da3a7 <_Z11G_GameWorldv>
 850c03f:	89 04 24             	mov    %eax,(%esp)
 850c042:	e8 b5 83 d2 ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 850c047:	84 c0                	test   %al,%al
 850c049:	74 15                	je     850c060 <_ZNK6CCargo12MakeItemListEP11PacketGuard+0x17e>
 850c04b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c04e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c055:	00 
 850c056:	89 04 24             	mov    %eax,(%esp)
 850c059:	e8 de f8 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c05e:	eb 23                	jmp    850c083 <_ZNK6CCargo12MakeItemListEP11PacketGuard+0x1a1>
 850c060:	8b 45 08             	mov    0x8(%ebp),%eax
 850c063:	8b 50 04             	mov    0x4(%eax),%edx
 850c066:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c069:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c06c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c06f:	8b 40 0d             	mov    0xd(%eax),%eax
 850c072:	89 c2                	mov    %eax,%edx
 850c074:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c077:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c07b:	89 04 24             	mov    %eax,(%esp)
 850c07e:	e8 b9 f8 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c083:	8b 45 08             	mov    0x8(%ebp),%eax
 850c086:	8b 50 04             	mov    0x4(%eax),%edx
 850c089:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c08c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c08f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c092:	83 c0 11             	add    $0x11,%eax
 850c095:	89 04 24             	mov    %eax,(%esp)
 850c098:	e8 95 46 c4 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 850c09d:	0f b6 d0             	movzbl %al,%edx
 850c0a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c0a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c0a7:	89 04 24             	mov    %eax,(%esp)
 850c0aa:	e8 71 f8 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c0af:	8b 45 08             	mov    0x8(%ebp),%eax
 850c0b2:	8b 50 04             	mov    0x4(%eax),%edx
 850c0b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c0b8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c0bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c0be:	83 c0 11             	add    $0x11,%eax
 850c0c1:	89 04 24             	mov    %eax,(%esp)
 850c0c4:	e8 a9 46 c4 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 850c0c9:	0f b7 d0             	movzwl %ax,%edx
 850c0cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c0cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c0d3:	89 04 24             	mov    %eax,(%esp)
 850c0d6:	e8 c9 dd bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c0db:	8b 45 08             	mov    0x8(%ebp),%eax
 850c0de:	8b 50 04             	mov    0x4(%eax),%edx
 850c0e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c0e4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c0e7:	8d 34 02             	lea    (%edx,%eax,1),%esi
 850c0ea:	8b 45 08             	mov    0x8(%ebp),%eax
 850c0ed:	8b 18                	mov    (%eax),%ebx
 850c0ef:	e8 a7 00 bc ff       	call   80cc19b <_Z14G_CDataManagerv>
 850c0f4:	8b 40 20             	mov    0x20(%eax),%eax
 850c0f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 850c0fa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850c0fe:	89 74 24 08          	mov    %esi,0x8(%esp)
 850c102:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850c106:	89 04 24             	mov    %eax,(%esp)
 850c109:	e8 9c e8 03 00       	call   854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>
 850c10e:	8b 45 08             	mov    0x8(%ebp),%eax
 850c111:	8b 50 04             	mov    0x4(%eax),%edx
 850c114:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c117:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c11a:	01 c2                	add    %eax,%edx
 850c11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c11f:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c123:	89 04 24             	mov    %eax,(%esp)
 850c126:	e8 63 48 c4 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 850c12b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850c12f:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850c136:	0f 9e c0             	setle  %al
 850c139:	84 c0                	test   %al,%al
 850c13b:	0f 85 17 fe ff ff    	jne    850bf58 <_ZNK6CCargo12MakeItemListEP11PacketGuard+0x76>
 850c141:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c144:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 850c14b:	00 
 850c14c:	89 04 24             	mov    %eax,(%esp)
 850c14f:	e8 04 f8 bb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 850c154:	b8 01 00 00 00       	mov    $0x1,%eax
 850c159:	83 c4 20             	add    $0x20,%esp
 850c15c:	5b                   	pop    %ebx
 850c15d:	5e                   	pop    %esi
 850c15e:	5d                   	pop    %ebp
 850c15f:	c3                   	ret

```

```c
// CCargo::MakeItemList @ 0x850bee2

/* CCargo::MakeItemList(PacketGuard*) const */

undefined4 __thiscall CCargo::MakeItemList(CCargo *this,PacketGuard *param_1)

{
  CUser *pCVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  int iVar5;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
  iVar3 = GetCapacity(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar3);
  iVar3 = GetItemCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar3);
  for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) != 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2));
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 7));
      uVar4 = GetIntegratedPvPItemAttr((Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)param_1,
                 (uint)*(ushort *)(*(int *)(this + 4) + local_10 * 0x3d + 0xb));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)param_1,(uint)*(byte *)(*(int *)(this + 4) + local_10 * 0x3d)
                );
      this_00 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsEnchantRevisionChannel(this_00);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)param_1,
                   *(int *)(*(int *)(this + 4) + local_10 * 0x3d + 0xd));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
      }
      uVar4 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
      uVar4 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
      iVar3 = *(int *)(this + 4);
      pCVar1 = *(CUser **)this;
      iVar5 = G_CDataManager();
      WongWork::CItemUpgrade::make3rdChroniclePacket
                (*(CItemUpgrade **)(iVar5 + 0x20),pCVar1,(Inven_Item *)(iVar3 + local_10 * 0x3d),
                 param_1);
      InterfacePacketBuf::put_packet
                ((InterfacePacketBuf *)param_1,(Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d))
      ;
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return 1;
}

```

---

## MakeItemPacket

```asm
// === 0850c160 CCargo::MakeItemPacket  [0x0850c160-0x850c405] ===
 850c160:	55                   	push   %ebp
 850c161:	89 e5                	mov    %esp,%ebp
 850c163:	56                   	push   %esi
 850c164:	53                   	push   %ebx
 850c165:	83 ec 10             	sub    $0x10,%esp
 850c168:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c16b:	8b 55 10             	mov    0x10(%ebp),%edx
 850c16e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c172:	89 04 24             	mov    %eax,(%esp)
 850c175:	e8 2a dd bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c17a:	8b 45 08             	mov    0x8(%ebp),%eax
 850c17d:	8b 50 04             	mov    0x4(%eax),%edx
 850c180:	8b 45 10             	mov    0x10(%ebp),%eax
 850c183:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c186:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c189:	8b 40 02             	mov    0x2(%eax),%eax
 850c18c:	85 c0                	test   %eax,%eax
 850c18e:	0f 84 ac 01 00 00    	je     850c340 <_ZNK6CCargo14MakeItemPacketEP11PacketGuardi+0x1e0>
 850c194:	8b 45 08             	mov    0x8(%ebp),%eax
 850c197:	8b 50 04             	mov    0x4(%eax),%edx
 850c19a:	8b 45 10             	mov    0x10(%ebp),%eax
 850c19d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c1a0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c1a3:	8b 40 02             	mov    0x2(%eax),%eax
 850c1a6:	89 c2                	mov    %eax,%edx
 850c1a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c1ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c1af:	89 04 24             	mov    %eax,(%esp)
 850c1b2:	e8 85 f7 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c1b7:	8b 45 08             	mov    0x8(%ebp),%eax
 850c1ba:	8b 50 04             	mov    0x4(%eax),%edx
 850c1bd:	8b 45 10             	mov    0x10(%ebp),%eax
 850c1c0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c1c3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c1c6:	8b 50 07             	mov    0x7(%eax),%edx
 850c1c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c1cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c1d0:	89 04 24             	mov    %eax,(%esp)
 850c1d3:	e8 64 f7 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c1d8:	8b 45 08             	mov    0x8(%ebp),%eax
 850c1db:	8b 50 04             	mov    0x4(%eax),%edx
 850c1de:	8b 45 10             	mov    0x10(%ebp),%eax
 850c1e1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c1e4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c1e7:	89 04 24             	mov    %eax,(%esp)
 850c1ea:	e8 10 04 ff ff       	call   84fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>
 850c1ef:	0f b6 d0             	movzbl %al,%edx
 850c1f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c1f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c1f9:	89 04 24             	mov    %eax,(%esp)
 850c1fc:	e8 1f f7 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c201:	8b 45 08             	mov    0x8(%ebp),%eax
 850c204:	8b 50 04             	mov    0x4(%eax),%edx
 850c207:	8b 45 10             	mov    0x10(%ebp),%eax
 850c20a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c20d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c210:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 850c214:	0f b7 d0             	movzwl %ax,%edx
 850c217:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c21a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c21e:	89 04 24             	mov    %eax,(%esp)
 850c221:	e8 7e dc bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c226:	8b 45 08             	mov    0x8(%ebp),%eax
 850c229:	8b 50 04             	mov    0x4(%eax),%edx
 850c22c:	8b 45 10             	mov    0x10(%ebp),%eax
 850c22f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c232:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c235:	0f b6 00             	movzbl (%eax),%eax
 850c238:	0f b6 d0             	movzbl %al,%edx
 850c23b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c23e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c242:	89 04 24             	mov    %eax,(%esp)
 850c245:	e8 d6 f6 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c24a:	e8 58 e1 bc ff       	call   80da3a7 <_Z11G_GameWorldv>
 850c24f:	89 04 24             	mov    %eax,(%esp)
 850c252:	e8 a5 81 d2 ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 850c257:	84 c0                	test   %al,%al
 850c259:	74 15                	je     850c270 <_ZNK6CCargo14MakeItemPacketEP11PacketGuardi+0x110>
 850c25b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c25e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c265:	00 
 850c266:	89 04 24             	mov    %eax,(%esp)
 850c269:	e8 ce f6 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c26e:	eb 23                	jmp    850c293 <_ZNK6CCargo14MakeItemPacketEP11PacketGuardi+0x133>
 850c270:	8b 45 08             	mov    0x8(%ebp),%eax
 850c273:	8b 50 04             	mov    0x4(%eax),%edx
 850c276:	8b 45 10             	mov    0x10(%ebp),%eax
 850c279:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c27c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c27f:	8b 40 0d             	mov    0xd(%eax),%eax
 850c282:	89 c2                	mov    %eax,%edx
 850c284:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c287:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c28b:	89 04 24             	mov    %eax,(%esp)
 850c28e:	e8 a9 f6 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c293:	8b 45 08             	mov    0x8(%ebp),%eax
 850c296:	8b 50 04             	mov    0x4(%eax),%edx
 850c299:	8b 45 10             	mov    0x10(%ebp),%eax
 850c29c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c29f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c2a2:	83 c0 11             	add    $0x11,%eax
 850c2a5:	89 04 24             	mov    %eax,(%esp)
 850c2a8:	e8 85 44 c4 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 850c2ad:	0f b6 d0             	movzbl %al,%edx
 850c2b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c2b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c2b7:	89 04 24             	mov    %eax,(%esp)
 850c2ba:	e8 61 f6 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c2bf:	8b 45 08             	mov    0x8(%ebp),%eax
 850c2c2:	8b 50 04             	mov    0x4(%eax),%edx
 850c2c5:	8b 45 10             	mov    0x10(%ebp),%eax
 850c2c8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c2cb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c2ce:	83 c0 11             	add    $0x11,%eax
 850c2d1:	89 04 24             	mov    %eax,(%esp)
 850c2d4:	e8 99 44 c4 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 850c2d9:	0f b7 d0             	movzwl %ax,%edx
 850c2dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c2df:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c2e3:	89 04 24             	mov    %eax,(%esp)
 850c2e6:	e8 b9 db bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c2eb:	8b 45 08             	mov    0x8(%ebp),%eax
 850c2ee:	8b 50 04             	mov    0x4(%eax),%edx
 850c2f1:	8b 45 10             	mov    0x10(%ebp),%eax
 850c2f4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c2f7:	8d 34 02             	lea    (%edx,%eax,1),%esi
 850c2fa:	8b 45 08             	mov    0x8(%ebp),%eax
 850c2fd:	8b 18                	mov    (%eax),%ebx
 850c2ff:	e8 97 fe bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850c304:	8b 40 20             	mov    0x20(%eax),%eax
 850c307:	8b 55 0c             	mov    0xc(%ebp),%edx
 850c30a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850c30e:	89 74 24 08          	mov    %esi,0x8(%esp)
 850c312:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850c316:	89 04 24             	mov    %eax,(%esp)
 850c319:	e8 8c e6 03 00       	call   854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>
 850c31e:	8b 45 08             	mov    0x8(%ebp),%eax
 850c321:	8b 50 04             	mov    0x4(%eax),%edx
 850c324:	8b 45 10             	mov    0x10(%ebp),%eax
 850c327:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c32a:	01 c2                	add    %eax,%edx
 850c32c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c32f:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c333:	89 04 24             	mov    %eax,(%esp)
 850c336:	e8 53 46 c4 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 850c33b:	e9 be 00 00 00       	jmp    850c3fe <_ZNK6CCargo14MakeItemPacketEP11PacketGuardi+0x29e>
 850c340:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c343:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 850c34a:	ff 
 850c34b:	89 04 24             	mov    %eax,(%esp)
 850c34e:	e8 e9 f5 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c353:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c356:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c35d:	00 
 850c35e:	89 04 24             	mov    %eax,(%esp)
 850c361:	e8 d6 f5 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c366:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c369:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c370:	00 
 850c371:	89 04 24             	mov    %eax,(%esp)
 850c374:	e8 a7 f5 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c379:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c37c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c383:	00 
 850c384:	89 04 24             	mov    %eax,(%esp)
 850c387:	e8 18 db bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c38c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c38f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c396:	00 
 850c397:	89 04 24             	mov    %eax,(%esp)
 850c39a:	e8 81 f5 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c39f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c3a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c3a9:	00 
 850c3aa:	89 04 24             	mov    %eax,(%esp)
 850c3ad:	e8 8a f5 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 850c3b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c3b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c3bc:	00 
 850c3bd:	89 04 24             	mov    %eax,(%esp)
 850c3c0:	e8 5b f5 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c3c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c3c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c3cf:	00 
 850c3d0:	89 04 24             	mov    %eax,(%esp)
 850c3d3:	e8 cc da bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850c3d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c3db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850c3e2:	00 
 850c3e3:	89 04 24             	mov    %eax,(%esp)
 850c3e6:	e8 35 f5 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850c3eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c3ee:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 850c3f5:	09 
 850c3f6:	89 04 24             	mov    %eax,(%esp)
 850c3f9:	e8 90 45 c4 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 850c3fe:	83 c4 10             	add    $0x10,%esp
 850c401:	5b                   	pop    %ebx
 850c402:	5e                   	pop    %esi
 850c403:	5d                   	pop    %ebp
 850c404:	c3                   	ret
 850c405:	90                   	nop

```

```c
// CCargo::MakeItemPacket @ 0x850c160

/* CCargo::MakeItemPacket(PacketGuard*, int) const */

void __thiscall CCargo::MakeItemPacket(CCargo *this,PacketGuard *param_1,int param_2)

{
  int iVar1;
  CUser *pCVar2;
  char cVar3;
  uint uVar4;
  GameWorld *this_00;
  int iVar5;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,-1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_1,(Inven_Item *)g_emptySlot);
  }
  else {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2));
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7));
    uVar4 = GetIntegratedPvPItemAttr((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,
               (uint)*(ushort *)(*(int *)(this + 4) + param_2 * 0x3d + 0xb));
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,(uint)*(byte *)(*(int *)(this + 4) + param_2 * 0x3d));
    this_00 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar3 == '\0') {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 0xd));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    uVar4 = stAmplifyOption_t::getAbilityType
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + param_2 * 0x3d + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
    uVar4 = stAmplifyOption_t::getAbilityValue
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + param_2 * 0x3d + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
    iVar1 = *(int *)(this + 4);
    pCVar2 = *(CUser **)this;
    iVar5 = G_CDataManager();
    WongWork::CItemUpgrade::make3rdChroniclePacket
              (*(CItemUpgrade **)(iVar5 + 0x20),pCVar2,(Inven_Item *)(iVar1 + param_2 * 0x3d),
               param_1);
    InterfacePacketBuf::put_packet
              ((InterfacePacketBuf *)param_1,(Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
  }
  return;
}

```

---

## SendItemLockList

```asm
// === 0850bd50 CCargo::SendItemLockList  [0x0850bd50-0x850bee1] ===
 850bd50:	55                   	push   %ebp
 850bd51:	89 e5                	mov    %esp,%ebp
 850bd53:	56                   	push   %esi
 850bd54:	53                   	push   %ebx
 850bd55:	83 ec 30             	sub    $0x30,%esp
 850bd58:	8b 45 08             	mov    0x8(%ebp),%eax
 850bd5b:	8b 00                	mov    (%eax),%eax
 850bd5d:	85 c0                	test   %eax,%eax
 850bd5f:	0f 84 75 01 00 00    	je     850beda <_ZNK6CCargo16SendItemLockListEv+0x18a>
 850bd65:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bd68:	89 04 24             	mov    %eax,(%esp)
 850bd6b:	e8 dc 1f 08 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 850bd70:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bd73:	89 04 24             	mov    %eax,(%esp)
 850bd76:	e8 6b fb bb ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 850bd7b:	c7 44 24 08 fb 00 00 	movl   $0xfb,0x8(%esp)
 850bd82:	00 
 850bd83:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850bd8a:	00 
 850bd8b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bd8e:	89 04 24             	mov    %eax,(%esp)
 850bd91:	e8 66 fb bb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 850bd96:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bd99:	89 04 24             	mov    %eax,(%esp)
 850bd9c:	e8 ab 4d c0 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 850bda1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 850bda4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 850bdab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850bdae:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bdb2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bdb5:	89 04 24             	mov    %eax,(%esp)
 850bdb8:	e8 e7 e0 bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850bdbd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850bdc4:	e9 95 00 00 00       	jmp    850be5e <_ZNK6CCargo16SendItemLockListEv+0x10e>
 850bdc9:	8b 45 08             	mov    0x8(%ebp),%eax
 850bdcc:	8b 50 04             	mov    0x4(%eax),%edx
 850bdcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bdd2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bdd5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bdd8:	83 c0 11             	add    $0x11,%eax
 850bddb:	89 04 24             	mov    %eax,(%esp)
 850bdde:	e8 c5 f7 d7 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 850bde3:	84 c0                	test   %al,%al
 850bde5:	0f 95 c0             	setne  %al
 850bde8:	84 c0                	test   %al,%al
 850bdea:	74 6e                	je     850be5a <_ZNK6CCargo16SendItemLockListEv+0x10a>
 850bdec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850bdf3:	00 
 850bdf4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bdf7:	89 04 24             	mov    %eax,(%esp)
 850bdfa:	e8 21 fb bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 850bdff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850be02:	89 44 24 04          	mov    %eax,0x4(%esp)
 850be06:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850be09:	89 04 24             	mov    %eax,(%esp)
 850be0c:	e8 93 e0 bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 850be11:	8b 45 08             	mov    0x8(%ebp),%eax
 850be14:	8b 50 04             	mov    0x4(%eax),%edx
 850be17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850be1a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850be1d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850be20:	83 c0 11             	add    $0x11,%eax
 850be23:	89 04 24             	mov    %eax,(%esp)
 850be26:	e8 7d f7 d7 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 850be2b:	0f b6 d8             	movzbl %al,%ebx
 850be2e:	8b 45 08             	mov    0x8(%ebp),%eax
 850be31:	8b 00                	mov    (%eax),%eax
 850be33:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850be3a:	00 
 850be3b:	89 04 24             	mov    %eax,(%esp)
 850be3e:	e8 9b f7 d7 ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 850be43:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 850be47:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 850be4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850be4e:	89 04 24             	mov    %eax,(%esp)
 850be51:	e8 50 68 03 00       	call   85426a6 <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh>
 850be56:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 850be5a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850be5e:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850be65:	0f 9e c0             	setle  %al
 850be68:	84 c0                	test   %al,%al
 850be6a:	0f 85 59 ff ff ff    	jne    850bdc9 <_ZNK6CCargo16SendItemLockListEv+0x79>
 850be70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850be73:	89 44 24 08          	mov    %eax,0x8(%esp)
 850be77:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850be7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 850be7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850be81:	89 04 24             	mov    %eax,(%esp)
 850be84:	e8 9f 4c c0 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 850be89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 850be90:	00 
 850be91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850be94:	89 04 24             	mov    %eax,(%esp)
 850be97:	e8 bc fa bb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 850be9c:	8b 45 08             	mov    0x8(%ebp),%eax
 850be9f:	8b 00                	mov    (%eax),%eax
 850bea1:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 850bea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 850bea8:	89 04 24             	mov    %eax,(%esp)
 850beab:	e8 0a c7 13 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 850beb0:	eb 1b                	jmp    850becd <_ZNK6CCargo16SendItemLockListEv+0x17d>
 850beb2:	89 d3                	mov    %edx,%ebx
 850beb4:	89 c6                	mov    %eax,%esi
 850beb6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850beb9:	89 04 24             	mov    %eax,(%esp)
 850bebc:	e8 bf 1f 08 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 850bec1:	89 f0                	mov    %esi,%eax
 850bec3:	89 da                	mov    %ebx,%edx
 850bec5:	89 04 24             	mov    %eax,(%esp)
 850bec8:	e8 83 78 5d 00       	call   8ae3750 <_Unwind_Resume>
 850becd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850bed0:	89 04 24             	mov    %eax,(%esp)
 850bed3:	e8 a8 1f 08 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 850bed8:	eb 01                	jmp    850bedb <_ZNK6CCargo16SendItemLockListEv+0x18b>
 850beda:	90                   	nop
 850bedb:	83 c4 30             	add    $0x30,%esp
 850bede:	5b                   	pop    %ebx
 850bedf:	5e                   	pop    %esi
 850bee0:	5d                   	pop    %ebp
 850bee1:	c3                   	ret

```

```c
// CCargo::SendItemLockList @ 0x850bd50

/* CCargo::SendItemLockList() const */

void __thiscall CCargo::SendItemLockList(CCargo *this)

{
  char cVar1;
  PacketGuard *pPVar2;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0850bd76 to 0850beaf has its CatchHandler @ 0850beb2 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xfb);
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
    local_14 = 0;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
      cVar1 = stAmplifyOption_t::GetLock
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      if (cVar1 != '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,local_10);
        stAmplifyOption_t::GetLock
                  ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
        pPVar2 = (PacketGuard *)CUser::GetCharacExpandDataR(*(CUser **)this,2);
        item_lock::CItemLock::MakeItemLockPacket(pPVar2,(uchar)local_20);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,&local_24,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(*(CUser **)this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}

```

---

## UpgradeCargo

```asm
// === 0850c656 CCargo::UpgradeCargo  [0x0850c656-0x850c697] ===
 850c656:	55                   	push   %ebp
 850c657:	89 e5                	mov    %esp,%ebp
 850c659:	8b 45 08             	mov    0x8(%ebp),%eax
 850c65c:	8b 40 0c             	mov    0xc(%eax),%eax
 850c65f:	85 c0                	test   %eax,%eax
 850c661:	74 0b                	je     850c66e <_ZN6CCargo12UpgradeCargoEi+0x18>
 850c663:	8b 45 08             	mov    0x8(%ebp),%eax
 850c666:	8b 40 0c             	mov    0xc(%eax),%eax
 850c669:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850c66c:	7e 07                	jle    850c675 <_ZN6CCargo12UpgradeCargoEi+0x1f>
 850c66e:	b8 00 00 00 00       	mov    $0x0,%eax
 850c673:	eb 20                	jmp    850c695 <_ZN6CCargo12UpgradeCargoEi+0x3f>
 850c675:	8b 45 08             	mov    0x8(%ebp),%eax
 850c678:	8b 40 0c             	mov    0xc(%eax),%eax
 850c67b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850c67e:	7c 07                	jl     850c687 <_ZN6CCargo12UpgradeCargoEi+0x31>
 850c680:	b8 00 00 00 00       	mov    $0x0,%eax
 850c685:	eb 0e                	jmp    850c695 <_ZN6CCargo12UpgradeCargoEi+0x3f>
 850c687:	8b 45 08             	mov    0x8(%ebp),%eax
 850c68a:	8b 55 0c             	mov    0xc(%ebp),%edx
 850c68d:	89 50 0c             	mov    %edx,0xc(%eax)
 850c690:	b8 01 00 00 00       	mov    $0x1,%eax
 850c695:	5d                   	pop    %ebp
 850c696:	c3                   	ret
 850c697:	90                   	nop

```

```c
// CCargo::UpgradeCargo @ 0x850c656

/* CCargo::UpgradeCargo(int) */

undefined4 __thiscall CCargo::UpgradeCargo(CCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0xc) == 0) || (param_1 < *(int *)(this + 0xc))) {
    uVar1 = 0;
  }
  else if (*(int *)(this + 0xc) < param_1) {
    *(int *)(this + 0xc) = param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## _AddItem

```asm
// === 0850c4ba CCargo::_AddItem  [0x0850c4ba-0x850c545] ===
 850c4ba:	55                   	push   %ebp
 850c4bb:	89 e5                	mov    %esp,%ebp
 850c4bd:	8b 45 08             	mov    0x8(%ebp),%eax
 850c4c0:	8b 50 04             	mov    0x4(%eax),%edx
 850c4c3:	8b 45 10             	mov    0x10(%ebp),%eax
 850c4c6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c4c9:	01 c2                	add    %eax,%edx
 850c4cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c4ce:	8b 08                	mov    (%eax),%ecx
 850c4d0:	89 0a                	mov    %ecx,(%edx)
 850c4d2:	8b 48 04             	mov    0x4(%eax),%ecx
 850c4d5:	89 4a 04             	mov    %ecx,0x4(%edx)
 850c4d8:	8b 48 08             	mov    0x8(%eax),%ecx
 850c4db:	89 4a 08             	mov    %ecx,0x8(%edx)
 850c4de:	8b 48 0c             	mov    0xc(%eax),%ecx
 850c4e1:	89 4a 0c             	mov    %ecx,0xc(%edx)
 850c4e4:	8b 48 10             	mov    0x10(%eax),%ecx
 850c4e7:	89 4a 10             	mov    %ecx,0x10(%edx)
 850c4ea:	8b 48 14             	mov    0x14(%eax),%ecx
 850c4ed:	89 4a 14             	mov    %ecx,0x14(%edx)
 850c4f0:	8b 48 18             	mov    0x18(%eax),%ecx
 850c4f3:	89 4a 18             	mov    %ecx,0x18(%edx)
 850c4f6:	8b 48 1c             	mov    0x1c(%eax),%ecx
 850c4f9:	89 4a 1c             	mov    %ecx,0x1c(%edx)
 850c4fc:	8b 48 20             	mov    0x20(%eax),%ecx
 850c4ff:	89 4a 20             	mov    %ecx,0x20(%edx)
 850c502:	8b 48 24             	mov    0x24(%eax),%ecx
 850c505:	89 4a 24             	mov    %ecx,0x24(%edx)
 850c508:	8b 48 28             	mov    0x28(%eax),%ecx
 850c50b:	89 4a 28             	mov    %ecx,0x28(%edx)
 850c50e:	8b 48 2c             	mov    0x2c(%eax),%ecx
 850c511:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 850c514:	8b 48 30             	mov    0x30(%eax),%ecx
 850c517:	89 4a 30             	mov    %ecx,0x30(%edx)
 850c51a:	8b 48 34             	mov    0x34(%eax),%ecx
 850c51d:	89 4a 34             	mov    %ecx,0x34(%edx)
 850c520:	8b 48 38             	mov    0x38(%eax),%ecx
 850c523:	89 4a 38             	mov    %ecx,0x38(%edx)
 850c526:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 850c52a:	88 42 3c             	mov    %al,0x3c(%edx)
 850c52d:	8b 45 08             	mov    0x8(%ebp),%eax
 850c530:	8b 40 08             	mov    0x8(%eax),%eax
 850c533:	8d 50 01             	lea    0x1(%eax),%edx
 850c536:	8b 45 08             	mov    0x8(%ebp),%eax
 850c539:	89 50 08             	mov    %edx,0x8(%eax)
 850c53c:	8b 45 08             	mov    0x8(%ebp),%eax
 850c53f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850c543:	5d                   	pop    %ebp
 850c544:	c3                   	ret
 850c545:	90                   	nop

```

```c
// CCargo::_AddItem @ 0x850c4ba

/* CCargo::_AddItem(Inven_Item const&, int) */

void __thiscall CCargo::_AddItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = *(undefined4 *)(param_1 + 4);
  puVar1[2] = *(undefined4 *)(param_1 + 8);
  puVar1[3] = *(undefined4 *)(param_1 + 0xc);
  puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  puVar1[5] = *(undefined4 *)(param_1 + 0x14);
  puVar1[6] = *(undefined4 *)(param_1 + 0x18);
  puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
  puVar1[8] = *(undefined4 *)(param_1 + 0x20);
  puVar1[9] = *(undefined4 *)(param_1 + 0x24);
  puVar1[10] = *(undefined4 *)(param_1 + 0x28);
  puVar1[0xb] = *(undefined4 *)(param_1 + 0x2c);
  puVar1[0xc] = *(undefined4 *)(param_1 + 0x30);
  puVar1[0xd] = *(undefined4 *)(param_1 + 0x34);
  puVar1[0xe] = *(undefined4 *)(param_1 + 0x38);
  *(Inven_Item *)(puVar1 + 0xf) = param_1[0x3c];
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  this[0x10] = (CCargo)0x0;
  return;
}

```

---

## _AddStackItem

```asm
// === 0850c546 CCargo::_AddStackItem  [0x0850c546-0x850c655] ===
 850c546:	55                   	push   %ebp
 850c547:	89 e5                	mov    %esp,%ebp
 850c549:	56                   	push   %esi
 850c54a:	53                   	push   %ebx
 850c54b:	83 ec 10             	sub    $0x10,%esp
 850c54e:	8b 45 08             	mov    0x8(%ebp),%eax
 850c551:	8b 50 04             	mov    0x4(%eax),%edx
 850c554:	8b 45 10             	mov    0x10(%ebp),%eax
 850c557:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c55a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c55d:	8b 50 02             	mov    0x2(%eax),%edx
 850c560:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c563:	8b 40 02             	mov    0x2(%eax),%eax
 850c566:	39 c2                	cmp    %eax,%edx
 850c568:	0f 85 db 00 00 00    	jne    850c649 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0x103>
 850c56e:	8b 45 08             	mov    0x8(%ebp),%eax
 850c571:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850c575:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c578:	89 04 24             	mov    %eax,(%esp)
 850c57b:	e8 ba b2 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850c580:	ba ff ff ff 7f       	mov    $0x7fffffff,%edx
 850c585:	89 d1                	mov    %edx,%ecx
 850c587:	29 c1                	sub    %eax,%ecx
 850c589:	8b 45 08             	mov    0x8(%ebp),%eax
 850c58c:	8b 50 04             	mov    0x4(%eax),%edx
 850c58f:	8b 45 10             	mov    0x10(%ebp),%eax
 850c592:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c595:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c598:	8b 40 07             	mov    0x7(%eax),%eax
 850c59b:	39 c1                	cmp    %eax,%ecx
 850c59d:	0f 9c c0             	setl   %al
 850c5a0:	84 c0                	test   %al,%al
 850c5a2:	74 1b                	je     850c5bf <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0x79>
 850c5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 850c5a7:	8b 50 04             	mov    0x4(%eax),%edx
 850c5aa:	8b 45 10             	mov    0x10(%ebp),%eax
 850c5ad:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c5b0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c5b3:	c7 40 07 00 00 00 00 	movl   $0x0,0x7(%eax)
 850c5ba:	e9 85 00 00 00       	jmp    850c644 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0xfe>
 850c5bf:	8b 45 08             	mov    0x8(%ebp),%eax
 850c5c2:	8b 50 04             	mov    0x4(%eax),%edx
 850c5c5:	8b 45 10             	mov    0x10(%ebp),%eax
 850c5c8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c5cb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c5ce:	89 04 24             	mov    %eax,(%esp)
 850c5d1:	e8 64 b2 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850c5d6:	89 c3                	mov    %eax,%ebx
 850c5d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c5db:	89 04 24             	mov    %eax,(%esp)
 850c5de:	e8 57 b2 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850c5e3:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 850c5e6:	8b 45 08             	mov    0x8(%ebp),%eax
 850c5e9:	8b 48 04             	mov    0x4(%eax),%ecx
 850c5ec:	8b 45 10             	mov    0x10(%ebp),%eax
 850c5ef:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c5f2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 850c5f5:	8b 40 02             	mov    0x2(%eax),%eax
 850c5f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 850c5fc:	89 04 24             	mov    %eax,(%esp)
 850c5ff:	e8 75 54 ff ff       	call   8501a79 <_Z19checkStackableLimitmi>
 850c604:	83 f0 01             	xor    $0x1,%eax
 850c607:	84 c0                	test   %al,%al
 850c609:	74 07                	je     850c612 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0xcc>
 850c60b:	b8 f6 ff ff ff       	mov    $0xfffffff6,%eax
 850c610:	eb 3c                	jmp    850c64e <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0x108>
 850c612:	8b 45 08             	mov    0x8(%ebp),%eax
 850c615:	8b 50 04             	mov    0x4(%eax),%edx
 850c618:	8b 45 10             	mov    0x10(%ebp),%eax
 850c61b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c61e:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 850c621:	8b 45 08             	mov    0x8(%ebp),%eax
 850c624:	8b 50 04             	mov    0x4(%eax),%edx
 850c627:	8b 45 10             	mov    0x10(%ebp),%eax
 850c62a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c62d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c630:	8b 70 07             	mov    0x7(%eax),%esi
 850c633:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c636:	89 04 24             	mov    %eax,(%esp)
 850c639:	e8 fc b1 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850c63e:	8d 04 06             	lea    (%esi,%eax,1),%eax
 850c641:	89 43 07             	mov    %eax,0x7(%ebx)
 850c644:	8b 45 10             	mov    0x10(%ebp),%eax
 850c647:	eb 05                	jmp    850c64e <_ZN6CCargo13_AddStackItemERK10Inven_Itemi+0x108>
 850c649:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850c64e:	83 c4 10             	add    $0x10,%esp
 850c651:	5b                   	pop    %ebx
 850c652:	5e                   	pop    %esi
 850c653:	5d                   	pop    %ebp
 850c654:	c3                   	ret
 850c655:	90                   	nop

```

```c
// CCargo::_AddStackItem @ 0x850c546

/* CCargo::_AddStackItem(Inven_Item const&, int) */

int __thiscall CCargo::_AddStackItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
    this[0x10] = (CCargo)0x0;
    iVar2 = Inven_Item::get_add_info(param_1);
    if (0x7fffffff - iVar2 < *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7)) {
      *(undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d + 7) = 0;
    }
    else {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
      iVar3 = Inven_Item::get_add_info(param_1);
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 4) + param_2 * 0x3d + 2),iVar2 + iVar3)
      ;
      if (cVar1 == '\x01') {
        iVar2 = *(int *)(this + 4);
        iVar3 = *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7);
        iVar4 = Inven_Item::get_add_info(param_1);
        *(int *)(iVar2 + param_2 * 0x3d + 7) = iVar3 + iVar4;
      }
      else {
        param_2 = -10;
      }
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}

```

---

## _CompareSlot

```asm
// === 0850bc5a CCargo::_CompareSlot  [0x0850bc5a-0x850bd0b] ===
 850bc5a:	55                   	push   %ebp
 850bc5b:	89 e5                	mov    %esp,%ebp
 850bc5d:	83 ec 10             	sub    $0x10,%esp
 850bc60:	8b 45 08             	mov    0x8(%ebp),%eax
 850bc63:	89 45 f0             	mov    %eax,-0x10(%ebp)
 850bc66:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bc69:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850bc6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850bc6f:	8b 40 02             	mov    0x2(%eax),%eax
 850bc72:	85 c0                	test   %eax,%eax
 850bc74:	74 0c                	je     850bc82 <_ZN6CCargo12_CompareSlotEPKvS1_+0x28>
 850bc76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850bc79:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 850bc7d:	0f b6 c0             	movzbl %al,%eax
 850bc80:	eb 05                	jmp    850bc87 <_ZN6CCargo12_CompareSlotEPKvS1_+0x2d>
 850bc82:	b8 0f 27 00 00       	mov    $0x270f,%eax
 850bc87:	89 45 f8             	mov    %eax,-0x8(%ebp)
 850bc8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bc8d:	8b 40 02             	mov    0x2(%eax),%eax
 850bc90:	85 c0                	test   %eax,%eax
 850bc92:	74 0c                	je     850bca0 <_ZN6CCargo12_CompareSlotEPKvS1_+0x46>
 850bc94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bc97:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 850bc9b:	0f b6 c0             	movzbl %al,%eax
 850bc9e:	eb 05                	jmp    850bca5 <_ZN6CCargo12_CompareSlotEPKvS1_+0x4b>
 850bca0:	b8 0f 27 00 00       	mov    $0x270f,%eax
 850bca5:	89 45 fc             	mov    %eax,-0x4(%ebp)
 850bca8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 850bcab:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 850bcae:	7d 07                	jge    850bcb7 <_ZN6CCargo12_CompareSlotEPKvS1_+0x5d>
 850bcb0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850bcb5:	eb 52                	jmp    850bd09 <_ZN6CCargo12_CompareSlotEPKvS1_+0xaf>
 850bcb7:	8b 45 f8             	mov    -0x8(%ebp),%eax
 850bcba:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 850bcbd:	7e 07                	jle    850bcc6 <_ZN6CCargo12_CompareSlotEPKvS1_+0x6c>
 850bcbf:	b8 01 00 00 00       	mov    $0x1,%eax
 850bcc4:	eb 43                	jmp    850bd09 <_ZN6CCargo12_CompareSlotEPKvS1_+0xaf>
 850bcc6:	81 7d f8 0f 27 00 00 	cmpl   $0x270f,-0x8(%ebp)
 850bccd:	74 35                	je     850bd04 <_ZN6CCargo12_CompareSlotEPKvS1_+0xaa>
 850bccf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850bcd2:	8b 50 02             	mov    0x2(%eax),%edx
 850bcd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bcd8:	8b 40 02             	mov    0x2(%eax),%eax
 850bcdb:	39 c2                	cmp    %eax,%edx
 850bcdd:	74 1e                	je     850bcfd <_ZN6CCargo12_CompareSlotEPKvS1_+0xa3>
 850bcdf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850bce2:	8b 50 02             	mov    0x2(%eax),%edx
 850bce5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850bce8:	8b 40 02             	mov    0x2(%eax),%eax
 850bceb:	39 c2                	cmp    %eax,%edx
 850bced:	73 07                	jae    850bcf6 <_ZN6CCargo12_CompareSlotEPKvS1_+0x9c>
 850bcef:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850bcf4:	eb 05                	jmp    850bcfb <_ZN6CCargo12_CompareSlotEPKvS1_+0xa1>
 850bcf6:	b8 01 00 00 00       	mov    $0x1,%eax
 850bcfb:	eb 05                	jmp    850bd02 <_ZN6CCargo12_CompareSlotEPKvS1_+0xa8>
 850bcfd:	b8 00 00 00 00       	mov    $0x0,%eax
 850bd02:	eb 05                	jmp    850bd09 <_ZN6CCargo12_CompareSlotEPKvS1_+0xaf>
 850bd04:	b8 00 00 00 00       	mov    $0x0,%eax
 850bd09:	c9                   	leave
 850bd0a:	c3                   	ret
 850bd0b:	90                   	nop

```

```c
// CCargo::_CompareSlot @ 0x850bc5a

/* CCargo::_CompareSlot(void const*, void const*) */

undefined4 CCargo::_CompareSlot(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 2) == 0) {
    uVar1 = 9999;
  }
  else {
    uVar1 = (uint)*(byte *)((int)param_1 + 1);
  }
  if (*(int *)((int)param_2 + 2) == 0) {
    uVar2 = 9999;
  }
  else {
    uVar2 = (uint)*(byte *)((int)param_2 + 1);
  }
  if (uVar1 < uVar2) {
    uVar3 = 0xffffffff;
  }
  else if (uVar2 < uVar1) {
    uVar3 = 1;
  }
  else if (uVar1 == 9999) {
    uVar3 = 0;
  }
  else if (*(int *)((int)param_1 + 2) == *(int *)((int)param_2 + 2)) {
    uVar3 = 0;
  }
  else if (*(uint *)((int)param_1 + 2) < *(uint *)((int)param_2 + 2)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## _GetItemCount

```asm
// === 0850c462 CCargo::_GetItemCount  [0x0850c462-0x850c4b9] ===
 850c462:	55                   	push   %ebp
 850c463:	89 e5                	mov    %esp,%ebp
 850c465:	83 ec 10             	sub    $0x10,%esp
 850c468:	8b 45 08             	mov    0x8(%ebp),%eax
 850c46b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 850c472:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 850c479:	eb 29                	jmp    850c4a4 <_ZN6CCargo13_GetItemCountEv+0x42>
 850c47b:	8b 45 08             	mov    0x8(%ebp),%eax
 850c47e:	8b 50 04             	mov    0x4(%eax),%edx
 850c481:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850c484:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c487:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c48a:	8b 40 02             	mov    0x2(%eax),%eax
 850c48d:	85 c0                	test   %eax,%eax
 850c48f:	74 0f                	je     850c4a0 <_ZN6CCargo13_GetItemCountEv+0x3e>
 850c491:	8b 45 08             	mov    0x8(%ebp),%eax
 850c494:	8b 40 08             	mov    0x8(%eax),%eax
 850c497:	8d 50 01             	lea    0x1(%eax),%edx
 850c49a:	8b 45 08             	mov    0x8(%ebp),%eax
 850c49d:	89 50 08             	mov    %edx,0x8(%eax)
 850c4a0:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 850c4a4:	81 7d fc 97 00 00 00 	cmpl   $0x97,-0x4(%ebp)
 850c4ab:	0f 9e c0             	setle  %al
 850c4ae:	84 c0                	test   %al,%al
 850c4b0:	75 c9                	jne    850c47b <_ZN6CCargo13_GetItemCountEv+0x19>
 850c4b2:	8b 45 08             	mov    0x8(%ebp),%eax
 850c4b5:	8b 40 08             	mov    0x8(%eax),%eax
 850c4b8:	c9                   	leave
 850c4b9:	c3                   	ret

```

```c
// CCargo::_GetItemCount @ 0x850c462

/* CCargo::_GetItemCount() */

undefined4 __thiscall CCargo::_GetItemCount(CCargo *this)

{
  int local_8;
  
  *(undefined4 *)(this + 8) = 0;
  for (local_8 = 0; local_8 < 0x98; local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) != 0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  return *(undefined4 *)(this + 8);
}

```

---

## _IsExistEquipItem

```asm
// === 0850c7b2 CCargo::_IsExistEquipItem  [0x0850c7b2-0x850c835] ===
 850c7b2:	55                   	push   %ebp
 850c7b3:	89 e5                	mov    %esp,%ebp
 850c7b5:	83 ec 28             	sub    $0x28,%esp
 850c7b8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850c7bf:	eb 60                	jmp    850c821 <_ZN6CCargo17_IsExistEquipItemEii+0x6f>
 850c7c1:	8b 45 08             	mov    0x8(%ebp),%eax
 850c7c4:	8b 50 04             	mov    0x4(%eax),%edx
 850c7c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c7ca:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c7cd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c7d0:	89 04 24             	mov    %eax,(%esp)
 850c7d3:	e8 3a 40 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850c7d8:	83 f0 01             	xor    $0x1,%eax
 850c7db:	84 c0                	test   %al,%al
 850c7dd:	75 37                	jne    850c816 <_ZN6CCargo17_IsExistEquipItemEii+0x64>
 850c7df:	8b 45 08             	mov    0x8(%ebp),%eax
 850c7e2:	8b 50 04             	mov    0x4(%eax),%edx
 850c7e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c7e8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c7eb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c7ee:	8b 50 02             	mov    0x2(%eax),%edx
 850c7f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 850c7f4:	39 c2                	cmp    %eax,%edx
 850c7f6:	75 21                	jne    850c819 <_ZN6CCargo17_IsExistEquipItemEii+0x67>
 850c7f8:	8b 45 08             	mov    0x8(%ebp),%eax
 850c7fb:	8b 50 04             	mov    0x4(%eax),%edx
 850c7fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c801:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c804:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c807:	8b 40 07             	mov    0x7(%eax),%eax
 850c80a:	3b 45 10             	cmp    0x10(%ebp),%eax
 850c80d:	75 0d                	jne    850c81c <_ZN6CCargo17_IsExistEquipItemEii+0x6a>
 850c80f:	b8 01 00 00 00       	mov    $0x1,%eax
 850c814:	eb 1e                	jmp    850c834 <_ZN6CCargo17_IsExistEquipItemEii+0x82>
 850c816:	90                   	nop
 850c817:	eb 04                	jmp    850c81d <_ZN6CCargo17_IsExistEquipItemEii+0x6b>
 850c819:	90                   	nop
 850c81a:	eb 01                	jmp    850c81d <_ZN6CCargo17_IsExistEquipItemEii+0x6b>
 850c81c:	90                   	nop
 850c81d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850c821:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850c828:	0f 9e c0             	setle  %al
 850c82b:	84 c0                	test   %al,%al
 850c82d:	75 92                	jne    850c7c1 <_ZN6CCargo17_IsExistEquipItemEii+0xf>
 850c82f:	b8 00 00 00 00       	mov    $0x0,%eax
 850c834:	c9                   	leave
 850c835:	c3                   	ret

```

```c
// CCargo::_IsExistEquipItem @ 0x850c7b2

/* CCargo::_IsExistEquipItem(int, int) */

undefined4 __thiscall CCargo::_IsExistEquipItem(CCargo *this,int param_1,int param_2)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x97 < local_10) {
      return 0;
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d));
    if (((cVar1 == '\x01') && (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) == param_1)) &&
       (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 7) == param_2)) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## _ResetSlot

```asm
// === 0850b1a0 CCargo::_ResetSlot  [0x0850b1a0-0x850b2b3] ===
 850b1a0:	55                   	push   %ebp
 850b1a1:	89 e5                	mov    %esp,%ebp
 850b1a3:	53                   	push   %ebx
 850b1a4:	83 ec 64             	sub    $0x64,%esp
 850b1a7:	8b 45 08             	mov    0x8(%ebp),%eax
 850b1aa:	8b 50 04             	mov    0x4(%eax),%edx
 850b1ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b1b0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b1b3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b1b6:	8b 10                	mov    (%eax),%edx
 850b1b8:	89 55 bb             	mov    %edx,-0x45(%ebp)
 850b1bb:	8b 50 04             	mov    0x4(%eax),%edx
 850b1be:	89 55 bf             	mov    %edx,-0x41(%ebp)
 850b1c1:	8b 50 08             	mov    0x8(%eax),%edx
 850b1c4:	89 55 c3             	mov    %edx,-0x3d(%ebp)
 850b1c7:	8b 50 0c             	mov    0xc(%eax),%edx
 850b1ca:	89 55 c7             	mov    %edx,-0x39(%ebp)
 850b1cd:	8b 50 10             	mov    0x10(%eax),%edx
 850b1d0:	89 55 cb             	mov    %edx,-0x35(%ebp)
 850b1d3:	8b 50 14             	mov    0x14(%eax),%edx
 850b1d6:	89 55 cf             	mov    %edx,-0x31(%ebp)
 850b1d9:	8b 50 18             	mov    0x18(%eax),%edx
 850b1dc:	89 55 d3             	mov    %edx,-0x2d(%ebp)
 850b1df:	8b 50 1c             	mov    0x1c(%eax),%edx
 850b1e2:	89 55 d7             	mov    %edx,-0x29(%ebp)
 850b1e5:	8b 50 20             	mov    0x20(%eax),%edx
 850b1e8:	89 55 db             	mov    %edx,-0x25(%ebp)
 850b1eb:	8b 50 24             	mov    0x24(%eax),%edx
 850b1ee:	89 55 df             	mov    %edx,-0x21(%ebp)
 850b1f1:	8b 50 28             	mov    0x28(%eax),%edx
 850b1f4:	89 55 e3             	mov    %edx,-0x1d(%ebp)
 850b1f7:	8b 50 2c             	mov    0x2c(%eax),%edx
 850b1fa:	89 55 e7             	mov    %edx,-0x19(%ebp)
 850b1fd:	8b 50 30             	mov    0x30(%eax),%edx
 850b200:	89 55 eb             	mov    %edx,-0x15(%ebp)
 850b203:	8b 50 34             	mov    0x34(%eax),%edx
 850b206:	89 55 ef             	mov    %edx,-0x11(%ebp)
 850b209:	8b 50 38             	mov    0x38(%eax),%edx
 850b20c:	89 55 f3             	mov    %edx,-0xd(%ebp)
 850b20f:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 850b213:	88 45 f7             	mov    %al,-0x9(%ebp)
 850b216:	8b 45 08             	mov    0x8(%ebp),%eax
 850b219:	8b 50 04             	mov    0x4(%eax),%edx
 850b21c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b21f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b222:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b225:	89 04 24             	mov    %eax,(%esp)
 850b228:	e8 ab 05 bc ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 850b22d:	8d 45 bb             	lea    -0x45(%ebp),%eax
 850b230:	89 04 24             	mov    %eax,(%esp)
 850b233:	e8 da 55 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850b238:	84 c0                	test   %al,%al
 850b23a:	74 33                	je     850b26f <_ZN6CCargo10_ResetSlotEi14eItemDelReason+0xcf>
 850b23c:	8b 45 bd             	mov    -0x43(%ebp),%eax
 850b23f:	8b 55 08             	mov    0x8(%ebp),%edx
 850b242:	8b 12                	mov    (%edx),%edx
 850b244:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 850b24a:	8b 55 10             	mov    0x10(%ebp),%edx
 850b24d:	89 54 24 10          	mov    %edx,0x10(%esp)
 850b251:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 850b258:	00 
 850b259:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 850b260:	00 
 850b261:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b265:	89 0c 24             	mov    %ecx,(%esp)
 850b268:	e8 b3 8a 17 00       	call   8683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>
 850b26d:	eb 30                	jmp    850b29f <_ZN6CCargo10_ResetSlotEi14eItemDelReason+0xff>
 850b26f:	8b 55 c2             	mov    -0x3e(%ebp),%edx
 850b272:	8b 45 bd             	mov    -0x43(%ebp),%eax
 850b275:	8b 4d 08             	mov    0x8(%ebp),%ecx
 850b278:	8b 09                	mov    (%ecx),%ecx
 850b27a:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 850b280:	8b 4d 10             	mov    0x10(%ebp),%ecx
 850b283:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 850b287:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 850b28e:	00 
 850b28f:	89 54 24 08          	mov    %edx,0x8(%esp)
 850b293:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b297:	89 1c 24             	mov    %ebx,(%esp)
 850b29a:	e8 81 8a 17 00       	call   8683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>
 850b29f:	8b 45 08             	mov    0x8(%ebp),%eax
 850b2a2:	8b 40 08             	mov    0x8(%eax),%eax
 850b2a5:	8d 50 ff             	lea    -0x1(%eax),%edx
 850b2a8:	8b 45 08             	mov    0x8(%ebp),%eax
 850b2ab:	89 50 08             	mov    %edx,0x8(%eax)
 850b2ae:	83 c4 64             	add    $0x64,%esp
 850b2b1:	5b                   	pop    %ebx
 850b2b2:	5d                   	pop    %ebp
 850b2b3:	c3                   	ret

```

```c
// CCargo::_ResetSlot @ 0x850b1a0

/* CCargo::_ResetSlot(int, eItemDelReason) */

void __thiscall CCargo::_ResetSlot(CCargo *this,int param_1,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 local_49;
  undefined2 uStack_47;
  undefined2 local_45;
  undefined1 uStack_43;
  undefined4 uStack_42;
  undefined1 uStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
  local_49 = (undefined2)*puVar1;
  uStack_47 = (undefined2)((uint)*puVar1 >> 0x10);
  uVar2 = puVar1[1];
  local_45 = (undefined2)uVar2;
  uStack_43 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_42._1_3_ = (undefined3)puVar1[2];
  uStack_42 = CONCAT31(uStack_42._1_3_,(char)((uint)uVar2 >> 0x18));
  uStack_3e = (undefined1)((uint)puVar1[2] >> 0x18);
  local_3d = puVar1[3];
  local_39 = puVar1[4];
  local_35 = puVar1[5];
  local_31 = puVar1[6];
  local_2d = puVar1[7];
  local_29 = puVar1[8];
  local_25 = puVar1[9];
  local_21 = puVar1[10];
  local_1d = puVar1[0xb];
  local_19 = puVar1[0xc];
  local_15 = puVar1[0xd];
  local_11 = puVar1[0xe];
  local_d = *(undefined1 *)(puVar1 + 0xf);
  Inven_Item::reset((Inven_Item *)(*(int *)(this + 4) + param_1 * 0x3d));
  cVar3 = Inven_Item::isEquipableItemType((Inven_Item *)&local_49);
  if (cVar3 == '\0') {
    cUserHistoryLog::ItemDelCargo
              ((cUserHistoryLog *)(*(int *)this + 0x79700),CONCAT22(local_45,uStack_47),uStack_42,0,
               param_3);
  }
  else {
    cUserHistoryLog::ItemDelCargo
              ((cUserHistoryLog *)(*(int *)this + 0x79700),CONCAT22(local_45,uStack_47),1,0,param_3)
    ;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return;
}

```

---

## _tryAddStackItem

```asm
// === 0850b4b0 CCargo::_tryAddStackItem  [0x0850b4b0-0x850b56f] ===
 850b4b0:	55                   	push   %ebp
 850b4b1:	89 e5                	mov    %esp,%ebp
 850b4b3:	53                   	push   %ebx
 850b4b4:	83 ec 14             	sub    $0x14,%esp
 850b4b7:	8b 45 08             	mov    0x8(%ebp),%eax
 850b4ba:	8b 50 04             	mov    0x4(%eax),%edx
 850b4bd:	8b 45 10             	mov    0x10(%ebp),%eax
 850b4c0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b4c3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b4c6:	8b 50 02             	mov    0x2(%eax),%edx
 850b4c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b4cc:	8b 40 02             	mov    0x2(%eax),%eax
 850b4cf:	39 c2                	cmp    %eax,%edx
 850b4d1:	0f 85 8e 00 00 00    	jne    850b565 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0xb5>
 850b4d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b4da:	89 04 24             	mov    %eax,(%esp)
 850b4dd:	e8 58 c3 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850b4e2:	ba ff ff ff 7f       	mov    $0x7fffffff,%edx
 850b4e7:	89 d1                	mov    %edx,%ecx
 850b4e9:	29 c1                	sub    %eax,%ecx
 850b4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 850b4ee:	8b 50 04             	mov    0x4(%eax),%edx
 850b4f1:	8b 45 10             	mov    0x10(%ebp),%eax
 850b4f4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b4f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b4fa:	8b 40 07             	mov    0x7(%eax),%eax
 850b4fd:	39 c1                	cmp    %eax,%ecx
 850b4ff:	0f 9c c0             	setl   %al
 850b502:	84 c0                	test   %al,%al
 850b504:	74 07                	je     850b50d <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0x5d>
 850b506:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b50b:	eb 5d                	jmp    850b56a <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0xba>
 850b50d:	8b 45 08             	mov    0x8(%ebp),%eax
 850b510:	8b 50 04             	mov    0x4(%eax),%edx
 850b513:	8b 45 10             	mov    0x10(%ebp),%eax
 850b516:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b519:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b51c:	89 04 24             	mov    %eax,(%esp)
 850b51f:	e8 16 c3 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850b524:	89 c3                	mov    %eax,%ebx
 850b526:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b529:	89 04 24             	mov    %eax,(%esp)
 850b52c:	e8 09 c3 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 850b531:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 850b534:	8b 45 08             	mov    0x8(%ebp),%eax
 850b537:	8b 48 04             	mov    0x4(%eax),%ecx
 850b53a:	8b 45 10             	mov    0x10(%ebp),%eax
 850b53d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b540:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 850b543:	8b 40 02             	mov    0x2(%eax),%eax
 850b546:	89 54 24 04          	mov    %edx,0x4(%esp)
 850b54a:	89 04 24             	mov    %eax,(%esp)
 850b54d:	e8 27 65 ff ff       	call   8501a79 <_Z19checkStackableLimitmi>
 850b552:	83 f0 01             	xor    $0x1,%eax
 850b555:	84 c0                	test   %al,%al
 850b557:	74 07                	je     850b560 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0xb0>
 850b559:	b8 f6 ff ff ff       	mov    $0xfffffff6,%eax
 850b55e:	eb 0a                	jmp    850b56a <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0xba>
 850b560:	8b 45 10             	mov    0x10(%ebp),%eax
 850b563:	eb 05                	jmp    850b56a <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi+0xba>
 850b565:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b56a:	83 c4 14             	add    $0x14,%esp
 850b56d:	5b                   	pop    %ebx
 850b56e:	5d                   	pop    %ebp
 850b56f:	c3                   	ret

```

```c
// CCargo::_tryAddStackItem @ 0x850b4b0

/* CCargo::_tryAddStackItem(Inven_Item const&, int) const */

int __thiscall CCargo::_tryAddStackItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
    iVar2 = Inven_Item::get_add_info(param_1);
    if (0x7fffffff - iVar2 < *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7)) {
      param_2 = -1;
    }
    else {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
      iVar3 = Inven_Item::get_add_info(param_1);
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 4) + param_2 * 0x3d + 2),iVar2 + iVar3)
      ;
      if (cVar1 != '\x01') {
        param_2 = -10;
      }
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}

```

---

## calcCargoItemCount

```asm
// === 0850c79e CCargo::calcCargoItemCount  [0x0850c79e-0x850c7b1] ===
 850c79e:	55                   	push   %ebp
 850c79f:	89 e5                	mov    %esp,%ebp
 850c7a1:	83 ec 04             	sub    $0x4,%esp
 850c7a4:	8b 45 08             	mov    0x8(%ebp),%eax
 850c7a7:	89 04 24             	mov    %eax,(%esp)
 850c7aa:	e8 b3 fc ff ff       	call   850c462 <_ZN6CCargo13_GetItemCountEv>
 850c7af:	c9                   	leave
 850c7b0:	c3                   	ret
 850c7b1:	90                   	nop

```

```c
// CCargo::calcCargoItemCount @ 0x850c79e

/* CCargo::calcCargoItemCount() */

void __thiscall CCargo::calcCargoItemCount(CCargo *this)

{
  _GetItemCount(this);
  return;
}

```

---

## check_item_exist

```asm
// === 0850bc14 CCargo::check_item_exist  [0x0850bc14-0x850bc59] ===
 850bc14:	55                   	push   %ebp
 850bc15:	89 e5                	mov    %esp,%ebp
 850bc17:	83 ec 10             	sub    $0x10,%esp
 850bc1a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 850bc21:	eb 22                	jmp    850bc45 <_ZNK6CCargo16check_item_existEi+0x31>
 850bc23:	8b 45 08             	mov    0x8(%ebp),%eax
 850bc26:	8b 50 04             	mov    0x4(%eax),%edx
 850bc29:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850bc2c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bc2f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bc32:	8b 50 02             	mov    0x2(%eax),%edx
 850bc35:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bc38:	39 c2                	cmp    %eax,%edx
 850bc3a:	75 05                	jne    850bc41 <_ZNK6CCargo16check_item_existEi+0x2d>
 850bc3c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850bc3f:	eb 17                	jmp    850bc58 <_ZNK6CCargo16check_item_existEi+0x44>
 850bc41:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 850bc45:	81 7d fc 97 00 00 00 	cmpl   $0x97,-0x4(%ebp)
 850bc4c:	0f 9e c0             	setle  %al
 850bc4f:	84 c0                	test   %al,%al
 850bc51:	75 d0                	jne    850bc23 <_ZNK6CCargo16check_item_existEi+0xf>
 850bc53:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850bc58:	c9                   	leave
 850bc59:	c3                   	ret

```

```c
// CCargo::check_item_exist @ 0x850bc14

/* CCargo::check_item_exist(int) const */

int __thiscall CCargo::check_item_exist(CCargo *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x97 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## check_slot_empty

```asm
// === 0850bbca CCargo::check_slot_empty  [0x0850bbca-0x850bc13] ===
 850bbca:	55                   	push   %ebp
 850bbcb:	89 e5                	mov    %esp,%ebp
 850bbcd:	83 ec 18             	sub    $0x18,%esp
 850bbd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bbd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 850bbda:	89 04 24             	mov    %eax,(%esp)
 850bbdd:	e8 ba 17 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850bbe2:	83 f0 01             	xor    $0x1,%eax
 850bbe5:	84 c0                	test   %al,%al
 850bbe7:	74 07                	je     850bbf0 <_ZNK6CCargo16check_slot_emptyEi+0x26>
 850bbe9:	b8 00 00 00 00       	mov    $0x0,%eax
 850bbee:	eb 22                	jmp    850bc12 <_ZNK6CCargo16check_slot_emptyEi+0x48>
 850bbf0:	8b 45 08             	mov    0x8(%ebp),%eax
 850bbf3:	8b 50 04             	mov    0x4(%eax),%edx
 850bbf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bbf9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bbfc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bbff:	8b 40 02             	mov    0x2(%eax),%eax
 850bc02:	85 c0                	test   %eax,%eax
 850bc04:	75 07                	jne    850bc0d <_ZNK6CCargo16check_slot_emptyEi+0x43>
 850bc06:	b8 01 00 00 00       	mov    $0x1,%eax
 850bc0b:	eb 05                	jmp    850bc12 <_ZNK6CCargo16check_slot_emptyEi+0x48>
 850bc0d:	b8 00 00 00 00       	mov    $0x0,%eax
 850bc12:	c9                   	leave
 850bc13:	c3                   	ret

```

```c
// CCargo::check_slot_empty @ 0x850bbca

/* CCargo::check_slot_empty(int) const */

undefined4 __thiscall CCargo::check_slot_empty(CCargo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## delete_item

```asm
// === 0850b794 CCargo::delete_item  [0x0850b794-0x850b903] ===
 850b794:	55                   	push   %ebp
 850b795:	89 e5                	mov    %esp,%ebp
 850b797:	53                   	push   %ebx
 850b798:	83 ec 24             	sub    $0x24,%esp
 850b79b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b79e:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b7a2:	8b 45 08             	mov    0x8(%ebp),%eax
 850b7a5:	89 04 24             	mov    %eax,(%esp)
 850b7a8:	e8 ef 1b 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b7ad:	83 f0 01             	xor    $0x1,%eax
 850b7b0:	84 c0                	test   %al,%al
 850b7b2:	74 0a                	je     850b7be <_ZN6CCargo11delete_itemEii14eItemDelReason+0x2a>
 850b7b4:	b8 00 00 00 00       	mov    $0x0,%eax
 850b7b9:	e9 3f 01 00 00       	jmp    850b8fd <_ZN6CCargo11delete_itemEii14eItemDelReason+0x169>
 850b7be:	8b 45 08             	mov    0x8(%ebp),%eax
 850b7c1:	8b 50 04             	mov    0x4(%eax),%edx
 850b7c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b7c7:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b7ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b7cd:	8b 40 02             	mov    0x2(%eax),%eax
 850b7d0:	85 c0                	test   %eax,%eax
 850b7d2:	75 0a                	jne    850b7de <_ZN6CCargo11delete_itemEii14eItemDelReason+0x4a>
 850b7d4:	b8 00 00 00 00       	mov    $0x0,%eax
 850b7d9:	e9 1f 01 00 00       	jmp    850b8fd <_ZN6CCargo11delete_itemEii14eItemDelReason+0x169>
 850b7de:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 850b7e2:	7f 0a                	jg     850b7ee <_ZN6CCargo11delete_itemEii14eItemDelReason+0x5a>
 850b7e4:	b8 00 00 00 00       	mov    $0x0,%eax
 850b7e9:	e9 0f 01 00 00       	jmp    850b8fd <_ZN6CCargo11delete_itemEii14eItemDelReason+0x169>
 850b7ee:	8b 45 08             	mov    0x8(%ebp),%eax
 850b7f1:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850b7f5:	8b 45 08             	mov    0x8(%ebp),%eax
 850b7f8:	8b 50 04             	mov    0x4(%eax),%edx
 850b7fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b7fe:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b801:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b804:	89 04 24             	mov    %eax,(%esp)
 850b807:	e8 06 50 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850b80c:	84 c0                	test   %al,%al
 850b80e:	74 1e                	je     850b82e <_ZN6CCargo11delete_itemEii14eItemDelReason+0x9a>
 850b810:	8b 45 14             	mov    0x14(%ebp),%eax
 850b813:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b817:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b81a:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b81e:	8b 45 08             	mov    0x8(%ebp),%eax
 850b821:	89 04 24             	mov    %eax,(%esp)
 850b824:	e8 77 f9 ff ff       	call   850b1a0 <_ZN6CCargo10_ResetSlotEi14eItemDelReason>
 850b829:	e9 ca 00 00 00       	jmp    850b8f8 <_ZN6CCargo11delete_itemEii14eItemDelReason+0x164>
 850b82e:	8b 45 08             	mov    0x8(%ebp),%eax
 850b831:	8b 50 04             	mov    0x4(%eax),%edx
 850b834:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b837:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b83a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b83d:	8b 40 07             	mov    0x7(%eax),%eax
 850b840:	3b 45 10             	cmp    0x10(%ebp),%eax
 850b843:	75 1e                	jne    850b863 <_ZN6CCargo11delete_itemEii14eItemDelReason+0xcf>
 850b845:	8b 45 14             	mov    0x14(%ebp),%eax
 850b848:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b853:	8b 45 08             	mov    0x8(%ebp),%eax
 850b856:	89 04 24             	mov    %eax,(%esp)
 850b859:	e8 42 f9 ff ff       	call   850b1a0 <_ZN6CCargo10_ResetSlotEi14eItemDelReason>
 850b85e:	e9 95 00 00 00       	jmp    850b8f8 <_ZN6CCargo11delete_itemEii14eItemDelReason+0x164>
 850b863:	8b 45 08             	mov    0x8(%ebp),%eax
 850b866:	8b 50 04             	mov    0x4(%eax),%edx
 850b869:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b86c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b86f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b872:	8b 40 07             	mov    0x7(%eax),%eax
 850b875:	2b 45 10             	sub    0x10(%ebp),%eax
 850b878:	85 c0                	test   %eax,%eax
 850b87a:	7e 75                	jle    850b8f1 <_ZN6CCargo11delete_itemEii14eItemDelReason+0x15d>
 850b87c:	8b 45 08             	mov    0x8(%ebp),%eax
 850b87f:	8b 50 04             	mov    0x4(%eax),%edx
 850b882:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b885:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b888:	01 c2                	add    %eax,%edx
 850b88a:	8b 45 08             	mov    0x8(%ebp),%eax
 850b88d:	8b 48 04             	mov    0x4(%eax),%ecx
 850b890:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b893:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b896:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 850b899:	8b 40 07             	mov    0x7(%eax),%eax
 850b89c:	2b 45 10             	sub    0x10(%ebp),%eax
 850b89f:	89 42 07             	mov    %eax,0x7(%edx)
 850b8a2:	8b 45 08             	mov    0x8(%ebp),%eax
 850b8a5:	8b 50 04             	mov    0x4(%eax),%edx
 850b8a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b8ab:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b8ae:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b8b1:	8b 50 07             	mov    0x7(%eax),%edx
 850b8b4:	8b 45 08             	mov    0x8(%ebp),%eax
 850b8b7:	8b 48 04             	mov    0x4(%eax),%ecx
 850b8ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b8bd:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b8c0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 850b8c3:	8b 40 02             	mov    0x2(%eax),%eax
 850b8c6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 850b8c9:	8b 09                	mov    (%ecx),%ecx
 850b8cb:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 850b8d1:	8b 4d 14             	mov    0x14(%ebp),%ecx
 850b8d4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 850b8d8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850b8dc:	8b 55 10             	mov    0x10(%ebp),%edx
 850b8df:	89 54 24 08          	mov    %edx,0x8(%esp)
 850b8e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b8e7:	89 1c 24             	mov    %ebx,(%esp)
 850b8ea:	e8 31 84 17 00       	call   8683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>
 850b8ef:	eb 07                	jmp    850b8f8 <_ZN6CCargo11delete_itemEii14eItemDelReason+0x164>
 850b8f1:	b8 00 00 00 00       	mov    $0x0,%eax
 850b8f6:	eb 05                	jmp    850b8fd <_ZN6CCargo11delete_itemEii14eItemDelReason+0x169>
 850b8f8:	b8 01 00 00 00       	mov    $0x1,%eax
 850b8fd:	83 c4 24             	add    $0x24,%esp
 850b900:	5b                   	pop    %ebx
 850b901:	5d                   	pop    %ebp
 850b902:	c3                   	ret
 850b903:	90                   	nop

```

```c
// CCargo::delete_item @ 0x850b794

/* CCargo::delete_item(int, int, eItemDelReason) */

undefined4 __thiscall CCargo::delete_item(CCargo *this,int param_1,int param_2,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = IsOperatorable(this,param_1);
  if (cVar2 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      uVar3 = 0;
    }
    else if (param_2 < 1) {
      uVar3 = 0;
    }
    else {
      this[0x10] = (CCargo)0x0;
      cVar2 = Inven_Item::isEquipableItemType((Inven_Item *)(*(int *)(this + 4) + param_1 * 0x3d));
      if (cVar2 == '\0') {
        if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) == param_2) {
          _ResetSlot(this,param_1,param_4);
        }
        else {
          iVar1 = *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7);
          if (iVar1 == param_2 || iVar1 - param_2 < 0) {
            return 0;
          }
          *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) =
               *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) - param_2;
          cUserHistoryLog::ItemDelCargo
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),
                     *(undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d + 2),param_2,
                     *(undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d + 7),param_4);
        }
      }
      else {
        _ResetSlot(this,param_1,param_4);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## get_cargo

```asm
// === 0850b164 CCargo::get_cargo  [0x0850b164-0x850b19f] ===
 850b164:	55                   	push   %ebp
 850b165:	89 e5                	mov    %esp,%ebp
 850b167:	83 ec 18             	sub    $0x18,%esp
 850b16a:	8b 45 08             	mov    0x8(%ebp),%eax
 850b16d:	8b 40 0c             	mov    0xc(%eax),%eax
 850b170:	85 c0                	test   %eax,%eax
 850b172:	7f 07                	jg     850b17b <_ZNK6CCargo9get_cargoEPv+0x17>
 850b174:	b8 00 00 00 00       	mov    $0x0,%eax
 850b179:	eb 22                	jmp    850b19d <_ZNK6CCargo9get_cargoEPv+0x39>
 850b17b:	8b 45 08             	mov    0x8(%ebp),%eax
 850b17e:	8b 40 04             	mov    0x4(%eax),%eax
 850b181:	c7 44 24 08 38 24 00 	movl   $0x2438,0x8(%esp)
 850b188:	00 
 850b189:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b18d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b190:	89 04 24             	mov    %eax,(%esp)
 850b193:	e8 08 27 b7 ff       	call   807d8a0 <memcpy@plt>
 850b198:	b8 01 00 00 00       	mov    $0x1,%eax
 850b19d:	c9                   	leave
 850b19e:	c3                   	ret
 850b19f:	90                   	nop

```

```c
// CCargo::get_cargo @ 0x850b164

/* CCargo::get_cargo(void*) const */

bool __thiscall CCargo::get_cargo(CCargo *this,void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    memcpy(param_1,*(void **)(this + 4),0x2438);
  }
  return 0 < iVar1;
}

```

---

## get_cargo_slot

```asm
// === 0850b2b4 CCargo::get_cargo_slot  [0x0850b2b4-0x850b38f] ===
 850b2b4:	55                   	push   %ebp
 850b2b5:	89 e5                	mov    %esp,%ebp
 850b2b7:	53                   	push   %ebx
 850b2b8:	83 ec 54             	sub    $0x54,%esp
 850b2bb:	8b 5d 08             	mov    0x8(%ebp),%ebx
 850b2be:	8b 45 10             	mov    0x10(%ebp),%eax
 850b2c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b2c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b2c8:	89 04 24             	mov    %eax,(%esp)
 850b2cb:	e8 cc 20 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b2d0:	83 f0 01             	xor    $0x1,%eax
 850b2d3:	84 c0                	test   %al,%al
 850b2d5:	0f 84 88 00 00 00    	je     850b363 <_ZNK6CCargo14get_cargo_slotEi+0xaf>
 850b2db:	8d 45 bb             	lea    -0x45(%ebp),%eax
 850b2de:	89 04 24             	mov    %eax,(%esp)
 850b2e1:	e8 6e 05 bc ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 850b2e6:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 850b2ed:	00 
 850b2ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850b2f5:	00 
 850b2f6:	8d 45 bb             	lea    -0x45(%ebp),%eax
 850b2f9:	89 04 24             	mov    %eax,(%esp)
 850b2fc:	e8 bf 29 b7 ff       	call   807dcc0 <memset@plt>
 850b301:	8b 45 bb             	mov    -0x45(%ebp),%eax
 850b304:	89 03                	mov    %eax,(%ebx)
 850b306:	8b 45 bf             	mov    -0x41(%ebp),%eax
 850b309:	89 43 04             	mov    %eax,0x4(%ebx)
 850b30c:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 850b30f:	89 43 08             	mov    %eax,0x8(%ebx)
 850b312:	8b 45 c7             	mov    -0x39(%ebp),%eax
 850b315:	89 43 0c             	mov    %eax,0xc(%ebx)
 850b318:	8b 45 cb             	mov    -0x35(%ebp),%eax
 850b31b:	89 43 10             	mov    %eax,0x10(%ebx)
 850b31e:	8b 45 cf             	mov    -0x31(%ebp),%eax
 850b321:	89 43 14             	mov    %eax,0x14(%ebx)
 850b324:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 850b327:	89 43 18             	mov    %eax,0x18(%ebx)
 850b32a:	8b 45 d7             	mov    -0x29(%ebp),%eax
 850b32d:	89 43 1c             	mov    %eax,0x1c(%ebx)
 850b330:	8b 45 db             	mov    -0x25(%ebp),%eax
 850b333:	89 43 20             	mov    %eax,0x20(%ebx)
 850b336:	8b 45 df             	mov    -0x21(%ebp),%eax
 850b339:	89 43 24             	mov    %eax,0x24(%ebx)
 850b33c:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 850b33f:	89 43 28             	mov    %eax,0x28(%ebx)
 850b342:	8b 45 e7             	mov    -0x19(%ebp),%eax
 850b345:	89 43 2c             	mov    %eax,0x2c(%ebx)
 850b348:	8b 45 eb             	mov    -0x15(%ebp),%eax
 850b34b:	89 43 30             	mov    %eax,0x30(%ebx)
 850b34e:	8b 45 ef             	mov    -0x11(%ebp),%eax
 850b351:	89 43 34             	mov    %eax,0x34(%ebx)
 850b354:	8b 45 f3             	mov    -0xd(%ebp),%eax
 850b357:	89 43 38             	mov    %eax,0x38(%ebx)
 850b35a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 850b35e:	88 43 3c             	mov    %al,0x3c(%ebx)
 850b361:	eb 23                	jmp    850b386 <_ZNK6CCargo14get_cargo_slotEi+0xd2>
 850b363:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b366:	8b 50 04             	mov    0x4(%eax),%edx
 850b369:	8b 45 10             	mov    0x10(%ebp),%eax
 850b36c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b36f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b372:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 850b379:	00 
 850b37a:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b37e:	89 1c 24             	mov    %ebx,(%esp)
 850b381:	e8 fa 24 b7 ff       	call   807d880 <memmove@plt>
 850b386:	89 d8                	mov    %ebx,%eax
 850b388:	83 c4 54             	add    $0x54,%esp
 850b38b:	5b                   	pop    %ebx
 850b38c:	5d                   	pop    %ebp
 850b38d:	c2 04 00             	ret    $0x4

```

```c
// CCargo::get_cargo_slot @ 0x850b2b4

/* CCargo::get_cargo_slot(int) const */

int CCargo::get_cargo_slot(int param_1)

{
  char cVar1;
  CCargo *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  cVar1 = IsOperatorable(in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\x01') {
    memmove((void *)param_1,(void *)(*(int *)(in_stack_00000008 + 4) + in_stack_0000000c * 0x3d),
            0x3d);
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_49);
    memset(&local_49,0,0x3d);
    *(undefined4 *)param_1 = local_49;
    *(undefined4 *)(param_1 + 4) = local_45;
    *(undefined4 *)(param_1 + 8) = local_41;
    *(undefined4 *)(param_1 + 0xc) = local_3d;
    *(undefined4 *)(param_1 + 0x10) = local_39;
    *(undefined4 *)(param_1 + 0x14) = local_35;
    *(undefined4 *)(param_1 + 0x18) = local_31;
    *(undefined4 *)(param_1 + 0x1c) = local_2d;
    *(undefined4 *)(param_1 + 0x20) = local_29;
    *(undefined4 *)(param_1 + 0x24) = local_25;
    *(undefined4 *)(param_1 + 0x28) = local_21;
    *(undefined4 *)(param_1 + 0x2c) = local_1d;
    *(undefined4 *)(param_1 + 0x30) = local_19;
    *(undefined4 *)(param_1 + 0x34) = local_15;
    *(undefined4 *)(param_1 + 0x38) = local_11;
    *(undefined1 *)(param_1 + 0x3c) = local_d;
  }
  return param_1;
}

```

---

## get_empty_slot

```asm
// === 0850c406 CCargo::get_empty_slot  [0x0850c406-0x850c461] ===
 850c406:	55                   	push   %ebp
 850c407:	89 e5                	mov    %esp,%ebp
 850c409:	83 ec 28             	sub    $0x28,%esp
 850c40c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850c413:	eb 1a                	jmp    850c42f <_ZNK6CCargo14get_empty_slotEv+0x29>
 850c415:	8b 45 08             	mov    0x8(%ebp),%eax
 850c418:	8b 50 04             	mov    0x4(%eax),%edx
 850c41b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c41e:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850c421:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850c424:	8b 40 02             	mov    0x2(%eax),%eax
 850c427:	85 c0                	test   %eax,%eax
 850c429:	74 14                	je     850c43f <_ZNK6CCargo14get_empty_slotEv+0x39>
 850c42b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850c42f:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850c436:	0f 9e c0             	setle  %al
 850c439:	84 c0                	test   %al,%al
 850c43b:	75 d8                	jne    850c415 <_ZNK6CCargo14get_empty_slotEv+0xf>
 850c43d:	eb 01                	jmp    850c440 <_ZNK6CCargo14get_empty_slotEv+0x3a>
 850c43f:	90                   	nop
 850c440:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c443:	89 44 24 04          	mov    %eax,0x4(%esp)
 850c447:	8b 45 08             	mov    0x8(%ebp),%eax
 850c44a:	89 04 24             	mov    %eax,(%esp)
 850c44d:	e8 4a 0f 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850c452:	84 c0                	test   %al,%al
 850c454:	74 05                	je     850c45b <_ZNK6CCargo14get_empty_slotEv+0x55>
 850c456:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850c459:	eb 05                	jmp    850c460 <_ZNK6CCargo14get_empty_slotEv+0x5a>
 850c45b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850c460:	c9                   	leave
 850c461:	c3                   	ret

```

```c
// CCargo::get_empty_slot @ 0x850c406

/* CCargo::get_empty_slot() const */

int __thiscall CCargo::get_empty_slot(CCargo *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while ((local_10 < 0x98 && (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) != 0))) {
    local_10 = local_10 + 1;
  }
  cVar1 = IsOperatorable(this,local_10);
  if (cVar1 == '\0') {
    local_10 = -1;
  }
  return local_10;
}

```

---

## insert_item

```asm
// === 0850b400 CCargo::insert_item  [0x0850b400-0x850b4af] ===
 850b400:	55                   	push   %ebp
 850b401:	89 e5                	mov    %esp,%ebp
 850b403:	83 ec 28             	sub    $0x28,%esp
 850b406:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850b40d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b410:	89 04 24             	mov    %eax,(%esp)
 850b413:	e8 fa 53 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850b418:	83 f0 01             	xor    $0x1,%eax
 850b41b:	84 c0                	test   %al,%al
 850b41d:	74 3b                	je     850b45a <_ZN6CCargo11insert_itemERK10Inven_Item+0x5a>
 850b41f:	eb 2b                	jmp    850b44c <_ZN6CCargo11insert_itemERK10Inven_Item+0x4c>
 850b421:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850b424:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b428:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b42b:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b42f:	8b 45 08             	mov    0x8(%ebp),%eax
 850b432:	89 04 24             	mov    %eax,(%esp)
 850b435:	e8 0c 11 00 00       	call   850c546 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi>
 850b43a:	f7 d0                	not    %eax
 850b43c:	c1 e8 1f             	shr    $0x1f,%eax
 850b43f:	84 c0                	test   %al,%al
 850b441:	74 05                	je     850b448 <_ZN6CCargo11insert_itemERK10Inven_Item+0x48>
 850b443:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850b446:	eb 66                	jmp    850b4ae <_ZN6CCargo11insert_itemERK10Inven_Item+0xae>
 850b448:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850b44c:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850b453:	0f 9e c0             	setle  %al
 850b456:	84 c0                	test   %al,%al
 850b458:	75 c7                	jne    850b421 <_ZN6CCargo11insert_itemERK10Inven_Item+0x21>
 850b45a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850b461:	eb 38                	jmp    850b49b <_ZN6CCargo11insert_itemERK10Inven_Item+0x9b>
 850b463:	8b 45 08             	mov    0x8(%ebp),%eax
 850b466:	8b 50 04             	mov    0x4(%eax),%edx
 850b469:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850b46c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b46f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b472:	8b 40 02             	mov    0x2(%eax),%eax
 850b475:	85 c0                	test   %eax,%eax
 850b477:	75 1e                	jne    850b497 <_ZN6CCargo11insert_itemERK10Inven_Item+0x97>
 850b479:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850b47c:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b480:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b483:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b487:	8b 45 08             	mov    0x8(%ebp),%eax
 850b48a:	89 04 24             	mov    %eax,(%esp)
 850b48d:	e8 28 10 00 00       	call   850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>
 850b492:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850b495:	eb 17                	jmp    850b4ae <_ZN6CCargo11insert_itemERK10Inven_Item+0xae>
 850b497:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850b49b:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 850b4a2:	0f 9e c0             	setle  %al
 850b4a5:	84 c0                	test   %al,%al
 850b4a7:	75 ba                	jne    850b463 <_ZN6CCargo11insert_itemERK10Inven_Item+0x63>
 850b4a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b4ae:	c9                   	leave
 850b4af:	c3                   	ret

```

```c
// CCargo::insert_item @ 0x850b400

/* CCargo::insert_item(Inven_Item const&) */

int __thiscall CCargo::insert_item(CCargo *this,Inven_Item *param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 != '\x01') {
    for (; local_10 < 0x98; local_10 = local_10 + 1) {
      iVar2 = _AddStackItem(this,param_1,local_10);
      if (-1 < iVar2) {
        return local_10;
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (0x97 < local_10) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) == 0) break;
    local_10 = local_10 + 1;
  }
  _AddItem(this,param_1,local_10);
  return local_10;
}

```

---

## insert_item_special_slot

```asm
// === 0850b672 CCargo::insert_item_special_slot  [0x0850b672-0x850b793] ===
 850b672:	55                   	push   %ebp
 850b673:	89 e5                	mov    %esp,%ebp
 850b675:	83 ec 28             	sub    $0x28,%esp
 850b678:	8b 45 10             	mov    0x10(%ebp),%eax
 850b67b:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b67f:	8b 45 08             	mov    0x8(%ebp),%eax
 850b682:	89 04 24             	mov    %eax,(%esp)
 850b685:	e8 12 1d 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b68a:	83 f0 01             	xor    $0x1,%eax
 850b68d:	84 c0                	test   %al,%al
 850b68f:	74 0a                	je     850b69b <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x29>
 850b691:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 850b696:	e9 f6 00 00 00       	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b69b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b69e:	89 04 24             	mov    %eax,(%esp)
 850b6a1:	e8 6c 51 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850b6a6:	83 f0 01             	xor    $0x1,%eax
 850b6a9:	84 c0                	test   %al,%al
 850b6ab:	0f 84 a7 00 00 00    	je     850b758 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xe6>
 850b6b1:	8b 45 08             	mov    0x8(%ebp),%eax
 850b6b4:	8b 50 04             	mov    0x4(%eax),%edx
 850b6b7:	8b 45 10             	mov    0x10(%ebp),%eax
 850b6ba:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b6bd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b6c0:	8b 50 02             	mov    0x2(%eax),%edx
 850b6c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b6c6:	8b 40 02             	mov    0x2(%eax),%eax
 850b6c9:	39 c2                	cmp    %eax,%edx
 850b6cb:	74 57                	je     850b724 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xb2>
 850b6cd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850b6d4:	eb 3e                	jmp    850b714 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xa2>
 850b6d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 850b6d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b6dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b6e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b6e4:	8b 45 08             	mov    0x8(%ebp),%eax
 850b6e7:	89 04 24             	mov    %eax,(%esp)
 850b6ea:	e8 c1 fd ff ff       	call   850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>
 850b6ef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 850b6f2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 850b6f6:	78 08                	js     850b700 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x8e>
 850b6f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 850b6fb:	e9 91 00 00 00       	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b700:	83 7d f0 f6          	cmpl   $0xfffffff6,-0x10(%ebp)
 850b704:	75 0a                	jne    850b710 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x9e>
 850b706:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b70b:	e9 81 00 00 00       	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b710:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 850b714:	81 7d ec 97 00 00 00 	cmpl   $0x97,-0x14(%ebp)
 850b71b:	0f 9e c0             	setle  %al
 850b71e:	84 c0                	test   %al,%al
 850b720:	75 b4                	jne    850b6d6 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x64>
 850b722:	eb 34                	jmp    850b758 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xe6>
 850b724:	8b 45 10             	mov    0x10(%ebp),%eax
 850b727:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b72b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b72e:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b732:	8b 45 08             	mov    0x8(%ebp),%eax
 850b735:	89 04 24             	mov    %eax,(%esp)
 850b738:	e8 09 0e 00 00       	call   850c546 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi>
 850b73d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850b740:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 850b744:	78 05                	js     850b74b <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xd9>
 850b746:	8b 45 10             	mov    0x10(%ebp),%eax
 850b749:	eb 46                	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b74b:	83 7d f4 f6          	cmpl   $0xfffffff6,-0xc(%ebp)
 850b74f:	75 07                	jne    850b758 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0xe6>
 850b751:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b756:	eb 39                	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b758:	8b 45 08             	mov    0x8(%ebp),%eax
 850b75b:	8b 50 04             	mov    0x4(%eax),%edx
 850b75e:	8b 45 10             	mov    0x10(%ebp),%eax
 850b761:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b764:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b767:	8b 40 02             	mov    0x2(%eax),%eax
 850b76a:	85 c0                	test   %eax,%eax
 850b76c:	75 1e                	jne    850b78c <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11a>
 850b76e:	8b 45 10             	mov    0x10(%ebp),%eax
 850b771:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b775:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b778:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b77c:	8b 45 08             	mov    0x8(%ebp),%eax
 850b77f:	89 04 24             	mov    %eax,(%esp)
 850b782:	e8 33 0d 00 00       	call   850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>
 850b787:	8b 45 10             	mov    0x10(%ebp),%eax
 850b78a:	eb 05                	jmp    850b791 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi+0x11f>
 850b78c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b791:	c9                   	leave
 850b792:	c3                   	ret
 850b793:	90                   	nop

```

```c
// CCargo::insert_item_special_slot @ 0x850b672

/* CCargo::insert_item_special_slot(Inven_Item&, int) */

int __thiscall CCargo::insert_item_special_slot(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_18;
  
  cVar1 = IsOperatorable(this,param_2);
  if (cVar1 != '\x01') {
    return -2;
  }
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 != '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
      iVar2 = _AddStackItem(this,param_1,param_2);
      if (-1 < iVar2) {
        return param_2;
      }
      if (iVar2 == -10) {
        return -1;
      }
    }
    else {
      for (local_18 = 0; local_18 < 0x98; local_18 = local_18 + 1) {
        iVar2 = _tryAddStackItem(this,param_1,local_18);
        if (-1 < iVar2) {
          return local_18;
        }
        if (iVar2 == -10) {
          return -1;
        }
      }
    }
  }
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0) {
    _AddItem(this,param_1,param_2);
  }
  else {
    param_2 = -1;
  }
  return param_2;
}

```

---

## isUpgradable

```asm
// === 0850c698 CCargo::isUpgradable  [0x0850c698-0x850c6df] ===
 850c698:	55                   	push   %ebp
 850c699:	89 e5                	mov    %esp,%ebp
 850c69b:	8b 45 08             	mov    0x8(%ebp),%eax
 850c69e:	8b 40 0c             	mov    0xc(%eax),%eax
 850c6a1:	85 c0                	test   %eax,%eax
 850c6a3:	74 0b                	je     850c6b0 <_ZNK6CCargo12isUpgradableEi+0x18>
 850c6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 850c6a8:	8b 40 0c             	mov    0xc(%eax),%eax
 850c6ab:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850c6ae:	7e 07                	jle    850c6b7 <_ZNK6CCargo12isUpgradableEi+0x1f>
 850c6b0:	b8 00 00 00 00       	mov    $0x0,%eax
 850c6b5:	eb 27                	jmp    850c6de <_ZNK6CCargo12isUpgradableEi+0x46>
 850c6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 850c6ba:	8b 40 0c             	mov    0xc(%eax),%eax
 850c6bd:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850c6c0:	7c 07                	jl     850c6c9 <_ZNK6CCargo12isUpgradableEi+0x31>
 850c6c2:	b8 00 00 00 00       	mov    $0x0,%eax
 850c6c7:	eb 15                	jmp    850c6de <_ZNK6CCargo12isUpgradableEi+0x46>
 850c6c9:	81 7d 0c 98 00 00 00 	cmpl   $0x98,0xc(%ebp)
 850c6d0:	7e 07                	jle    850c6d9 <_ZNK6CCargo12isUpgradableEi+0x41>
 850c6d2:	b8 00 00 00 00       	mov    $0x0,%eax
 850c6d7:	eb 05                	jmp    850c6de <_ZNK6CCargo12isUpgradableEi+0x46>
 850c6d9:	b8 01 00 00 00       	mov    $0x1,%eax
 850c6de:	5d                   	pop    %ebp
 850c6df:	c3                   	ret

```

```c
// CCargo::isUpgradable @ 0x850c698

/* CCargo::isUpgradable(int) const */

undefined4 __thiscall CCargo::isUpgradable(CCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0xc) == 0) || (param_1 < *(int *)(this + 0xc))) {
    uVar1 = 0;
  }
  else if (*(int *)(this + 0xc) < param_1) {
    if (param_1 < 0x99) {
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

## move_item

```asm
// === 0850b904 CCargo::move_item  [0x0850b904-0x850baff] ===
 850b904:	55                   	push   %ebp
 850b905:	89 e5                	mov    %esp,%ebp
 850b907:	83 ec 58             	sub    $0x58,%esp
 850b90a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b90d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b911:	8b 45 08             	mov    0x8(%ebp),%eax
 850b914:	89 04 24             	mov    %eax,(%esp)
 850b917:	e8 80 1a 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b91c:	83 f0 01             	xor    $0x1,%eax
 850b91f:	84 c0                	test   %al,%al
 850b921:	75 19                	jne    850b93c <_ZN6CCargo9move_itemEii+0x38>
 850b923:	8b 45 10             	mov    0x10(%ebp),%eax
 850b926:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b92a:	8b 45 08             	mov    0x8(%ebp),%eax
 850b92d:	89 04 24             	mov    %eax,(%esp)
 850b930:	e8 67 1a 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b935:	83 f0 01             	xor    $0x1,%eax
 850b938:	84 c0                	test   %al,%al
 850b93a:	74 07                	je     850b943 <_ZN6CCargo9move_itemEii+0x3f>
 850b93c:	b8 01 00 00 00       	mov    $0x1,%eax
 850b941:	eb 05                	jmp    850b948 <_ZN6CCargo9move_itemEii+0x44>
 850b943:	b8 00 00 00 00       	mov    $0x0,%eax
 850b948:	84 c0                	test   %al,%al
 850b94a:	74 0a                	je     850b956 <_ZN6CCargo9move_itemEii+0x52>
 850b94c:	b8 00 00 00 00       	mov    $0x0,%eax
 850b951:	e9 a8 01 00 00       	jmp    850bafe <_ZN6CCargo9move_itemEii+0x1fa>
 850b956:	8b 45 08             	mov    0x8(%ebp),%eax
 850b959:	8b 50 04             	mov    0x4(%eax),%edx
 850b95c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b95f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b962:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b965:	8b 40 02             	mov    0x2(%eax),%eax
 850b968:	85 c0                	test   %eax,%eax
 850b96a:	75 20                	jne    850b98c <_ZN6CCargo9move_itemEii+0x88>
 850b96c:	8b 45 08             	mov    0x8(%ebp),%eax
 850b96f:	8b 50 04             	mov    0x4(%eax),%edx
 850b972:	8b 45 10             	mov    0x10(%ebp),%eax
 850b975:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b978:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b97b:	8b 40 02             	mov    0x2(%eax),%eax
 850b97e:	85 c0                	test   %eax,%eax
 850b980:	75 0a                	jne    850b98c <_ZN6CCargo9move_itemEii+0x88>
 850b982:	b8 00 00 00 00       	mov    $0x0,%eax
 850b987:	e9 72 01 00 00       	jmp    850bafe <_ZN6CCargo9move_itemEii+0x1fa>
 850b98c:	8d 45 bb             	lea    -0x45(%ebp),%eax
 850b98f:	89 04 24             	mov    %eax,(%esp)
 850b992:	e8 bd fe bb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 850b997:	8b 45 08             	mov    0x8(%ebp),%eax
 850b99a:	8b 50 04             	mov    0x4(%eax),%edx
 850b99d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b9a0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b9a3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b9a6:	8b 10                	mov    (%eax),%edx
 850b9a8:	89 55 bb             	mov    %edx,-0x45(%ebp)
 850b9ab:	8b 50 04             	mov    0x4(%eax),%edx
 850b9ae:	89 55 bf             	mov    %edx,-0x41(%ebp)
 850b9b1:	8b 50 08             	mov    0x8(%eax),%edx
 850b9b4:	89 55 c3             	mov    %edx,-0x3d(%ebp)
 850b9b7:	8b 50 0c             	mov    0xc(%eax),%edx
 850b9ba:	89 55 c7             	mov    %edx,-0x39(%ebp)
 850b9bd:	8b 50 10             	mov    0x10(%eax),%edx
 850b9c0:	89 55 cb             	mov    %edx,-0x35(%ebp)
 850b9c3:	8b 50 14             	mov    0x14(%eax),%edx
 850b9c6:	89 55 cf             	mov    %edx,-0x31(%ebp)
 850b9c9:	8b 50 18             	mov    0x18(%eax),%edx
 850b9cc:	89 55 d3             	mov    %edx,-0x2d(%ebp)
 850b9cf:	8b 50 1c             	mov    0x1c(%eax),%edx
 850b9d2:	89 55 d7             	mov    %edx,-0x29(%ebp)
 850b9d5:	8b 50 20             	mov    0x20(%eax),%edx
 850b9d8:	89 55 db             	mov    %edx,-0x25(%ebp)
 850b9db:	8b 50 24             	mov    0x24(%eax),%edx
 850b9de:	89 55 df             	mov    %edx,-0x21(%ebp)
 850b9e1:	8b 50 28             	mov    0x28(%eax),%edx
 850b9e4:	89 55 e3             	mov    %edx,-0x1d(%ebp)
 850b9e7:	8b 50 2c             	mov    0x2c(%eax),%edx
 850b9ea:	89 55 e7             	mov    %edx,-0x19(%ebp)
 850b9ed:	8b 50 30             	mov    0x30(%eax),%edx
 850b9f0:	89 55 eb             	mov    %edx,-0x15(%ebp)
 850b9f3:	8b 50 34             	mov    0x34(%eax),%edx
 850b9f6:	89 55 ef             	mov    %edx,-0x11(%ebp)
 850b9f9:	8b 50 38             	mov    0x38(%eax),%edx
 850b9fc:	89 55 f3             	mov    %edx,-0xd(%ebp)
 850b9ff:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 850ba03:	88 45 f7             	mov    %al,-0x9(%ebp)
 850ba06:	8b 45 08             	mov    0x8(%ebp),%eax
 850ba09:	8b 50 04             	mov    0x4(%eax),%edx
 850ba0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ba0f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850ba12:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850ba15:	8b 55 08             	mov    0x8(%ebp),%edx
 850ba18:	8b 4a 04             	mov    0x4(%edx),%ecx
 850ba1b:	8b 55 10             	mov    0x10(%ebp),%edx
 850ba1e:	6b d2 3d             	imul   $0x3d,%edx,%edx
 850ba21:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 850ba24:	8b 0a                	mov    (%edx),%ecx
 850ba26:	89 08                	mov    %ecx,(%eax)
 850ba28:	8b 4a 04             	mov    0x4(%edx),%ecx
 850ba2b:	89 48 04             	mov    %ecx,0x4(%eax)
 850ba2e:	8b 4a 08             	mov    0x8(%edx),%ecx
 850ba31:	89 48 08             	mov    %ecx,0x8(%eax)
 850ba34:	8b 4a 0c             	mov    0xc(%edx),%ecx
 850ba37:	89 48 0c             	mov    %ecx,0xc(%eax)
 850ba3a:	8b 4a 10             	mov    0x10(%edx),%ecx
 850ba3d:	89 48 10             	mov    %ecx,0x10(%eax)
 850ba40:	8b 4a 14             	mov    0x14(%edx),%ecx
 850ba43:	89 48 14             	mov    %ecx,0x14(%eax)
 850ba46:	8b 4a 18             	mov    0x18(%edx),%ecx
 850ba49:	89 48 18             	mov    %ecx,0x18(%eax)
 850ba4c:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 850ba4f:	89 48 1c             	mov    %ecx,0x1c(%eax)
 850ba52:	8b 4a 20             	mov    0x20(%edx),%ecx
 850ba55:	89 48 20             	mov    %ecx,0x20(%eax)
 850ba58:	8b 4a 24             	mov    0x24(%edx),%ecx
 850ba5b:	89 48 24             	mov    %ecx,0x24(%eax)
 850ba5e:	8b 4a 28             	mov    0x28(%edx),%ecx
 850ba61:	89 48 28             	mov    %ecx,0x28(%eax)
 850ba64:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 850ba67:	89 48 2c             	mov    %ecx,0x2c(%eax)
 850ba6a:	8b 4a 30             	mov    0x30(%edx),%ecx
 850ba6d:	89 48 30             	mov    %ecx,0x30(%eax)
 850ba70:	8b 4a 34             	mov    0x34(%edx),%ecx
 850ba73:	89 48 34             	mov    %ecx,0x34(%eax)
 850ba76:	8b 4a 38             	mov    0x38(%edx),%ecx
 850ba79:	89 48 38             	mov    %ecx,0x38(%eax)
 850ba7c:	0f b6 52 3c          	movzbl 0x3c(%edx),%edx
 850ba80:	88 50 3c             	mov    %dl,0x3c(%eax)
 850ba83:	8b 45 08             	mov    0x8(%ebp),%eax
 850ba86:	8b 50 04             	mov    0x4(%eax),%edx
 850ba89:	8b 45 10             	mov    0x10(%ebp),%eax
 850ba8c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850ba8f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850ba92:	8b 55 bb             	mov    -0x45(%ebp),%edx
 850ba95:	89 10                	mov    %edx,(%eax)
 850ba97:	8b 55 bf             	mov    -0x41(%ebp),%edx
 850ba9a:	89 50 04             	mov    %edx,0x4(%eax)
 850ba9d:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 850baa0:	89 50 08             	mov    %edx,0x8(%eax)
 850baa3:	8b 55 c7             	mov    -0x39(%ebp),%edx
 850baa6:	89 50 0c             	mov    %edx,0xc(%eax)
 850baa9:	8b 55 cb             	mov    -0x35(%ebp),%edx
 850baac:	89 50 10             	mov    %edx,0x10(%eax)
 850baaf:	8b 55 cf             	mov    -0x31(%ebp),%edx
 850bab2:	89 50 14             	mov    %edx,0x14(%eax)
 850bab5:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 850bab8:	89 50 18             	mov    %edx,0x18(%eax)
 850babb:	8b 55 d7             	mov    -0x29(%ebp),%edx
 850babe:	89 50 1c             	mov    %edx,0x1c(%eax)
 850bac1:	8b 55 db             	mov    -0x25(%ebp),%edx
 850bac4:	89 50 20             	mov    %edx,0x20(%eax)
 850bac7:	8b 55 df             	mov    -0x21(%ebp),%edx
 850baca:	89 50 24             	mov    %edx,0x24(%eax)
 850bacd:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 850bad0:	89 50 28             	mov    %edx,0x28(%eax)
 850bad3:	8b 55 e7             	mov    -0x19(%ebp),%edx
 850bad6:	89 50 2c             	mov    %edx,0x2c(%eax)
 850bad9:	8b 55 eb             	mov    -0x15(%ebp),%edx
 850badc:	89 50 30             	mov    %edx,0x30(%eax)
 850badf:	8b 55 ef             	mov    -0x11(%ebp),%edx
 850bae2:	89 50 34             	mov    %edx,0x34(%eax)
 850bae5:	8b 55 f3             	mov    -0xd(%ebp),%edx
 850bae8:	89 50 38             	mov    %edx,0x38(%eax)
 850baeb:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 850baef:	88 50 3c             	mov    %dl,0x3c(%eax)
 850baf2:	8b 45 08             	mov    0x8(%ebp),%eax
 850baf5:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850baf9:	b8 01 00 00 00       	mov    $0x1,%eax
 850bafe:	c9                   	leave
 850baff:	c3                   	ret

```

```c
// CCargo::move_item @ 0x850b904

/* CCargo::move_item(int, int) */

undefined4 __thiscall CCargo::move_item(CCargo *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  char cVar19;
  undefined4 uVar20;
  Inven_Item local_49 [69];
  
  cVar19 = IsOperatorable(this,param_1);
  if (cVar19 == '\x01') {
    cVar19 = IsOperatorable(this,param_2);
    if (cVar19 == '\x01') {
      bVar18 = false;
      goto LAB_0850b948;
    }
  }
  bVar18 = true;
LAB_0850b948:
  if (bVar18) {
    uVar20 = 0;
  }
  else if ((*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) &&
          (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0)) {
    uVar20 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_49);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
    uVar20 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[4];
    uVar8 = puVar1[5];
    uVar9 = puVar1[6];
    uVar10 = puVar1[7];
    uVar11 = puVar1[8];
    uVar12 = puVar1[9];
    uVar13 = puVar1[10];
    uVar14 = puVar1[0xb];
    uVar15 = puVar1[0xc];
    uVar16 = puVar1[0xd];
    uVar17 = puVar1[0xe];
    uVar3 = *(undefined1 *)(puVar1 + 0xf);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
    puVar2 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[8] = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(puVar2 + 0xf);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
    *puVar1 = uVar20;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    puVar1[8] = uVar11;
    puVar1[9] = uVar12;
    puVar1[10] = uVar13;
    puVar1[0xb] = uVar14;
    puVar1[0xc] = uVar15;
    puVar1[0xd] = uVar16;
    puVar1[0xe] = uVar17;
    *(undefined1 *)(puVar1 + 0xf) = uVar3;
    this[0x10] = (CCargo)0x0;
    uVar20 = 1;
  }
  return uVar20;
}

```

---

## reset

```asm
// === 0850b0c2 CCargo::reset  [0x0850b0c2-0x850b115] ===
 850b0c2:	55                   	push   %ebp
 850b0c3:	89 e5                	mov    %esp,%ebp
 850b0c5:	83 ec 18             	sub    $0x18,%esp
 850b0c8:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0cb:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 850b0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0d5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 850b0db:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0de:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 850b0e5:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0e8:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850b0ec:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0ef:	8b 40 04             	mov    0x4(%eax),%eax
 850b0f2:	85 c0                	test   %eax,%eax
 850b0f4:	74 1e                	je     850b114 <_ZN6CCargo5resetEv+0x52>
 850b0f6:	8b 45 08             	mov    0x8(%ebp),%eax
 850b0f9:	8b 40 04             	mov    0x4(%eax),%eax
 850b0fc:	c7 44 24 08 38 24 00 	movl   $0x2438,0x8(%esp)
 850b103:	00 
 850b104:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 850b10b:	00 
 850b10c:	89 04 24             	mov    %eax,(%esp)
 850b10f:	e8 ac 2b b7 ff       	call   807dcc0 <memset@plt>
 850b114:	c9                   	leave
 850b115:	c3                   	ret

```

```c
// CCargo::reset @ 0x850b0c2

/* CCargo::reset() */

void __thiscall CCargo::reset(CCargo *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CCargo)0x0;
  if (*(int *)(this + 4) != 0) {
    memset(*(void **)(this + 4),0,0x2438);
  }
  return;
}

```

---

## set_cargo

```asm
// === 0850b116 CCargo::set_cargo  [0x0850b116-0x850b163] ===
 850b116:	55                   	push   %ebp
 850b117:	89 e5                	mov    %esp,%ebp
 850b119:	83 ec 18             	sub    $0x18,%esp
 850b11c:	8b 45 08             	mov    0x8(%ebp),%eax
 850b11f:	8b 40 0c             	mov    0xc(%eax),%eax
 850b122:	85 c0                	test   %eax,%eax
 850b124:	7f 07                	jg     850b12d <_ZN6CCargo9set_cargoEPv+0x17>
 850b126:	b8 00 00 00 00       	mov    $0x0,%eax
 850b12b:	eb 34                	jmp    850b161 <_ZN6CCargo9set_cargoEPv+0x4b>
 850b12d:	8b 45 08             	mov    0x8(%ebp),%eax
 850b130:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 850b134:	8b 45 08             	mov    0x8(%ebp),%eax
 850b137:	8b 40 04             	mov    0x4(%eax),%eax
 850b13a:	c7 44 24 08 38 24 00 	movl   $0x2438,0x8(%esp)
 850b141:	00 
 850b142:	8b 55 0c             	mov    0xc(%ebp),%edx
 850b145:	89 54 24 04          	mov    %edx,0x4(%esp)
 850b149:	89 04 24             	mov    %eax,(%esp)
 850b14c:	e8 4f 27 b7 ff       	call   807d8a0 <memcpy@plt>
 850b151:	8b 45 08             	mov    0x8(%ebp),%eax
 850b154:	89 04 24             	mov    %eax,(%esp)
 850b157:	e8 06 13 00 00       	call   850c462 <_ZN6CCargo13_GetItemCountEv>
 850b15c:	b8 01 00 00 00       	mov    $0x1,%eax
 850b161:	c9                   	leave
 850b162:	c3                   	ret
 850b163:	90                   	nop

```

```c
// CCargo::set_cargo @ 0x850b116

/* CCargo::set_cargo(void*) */

bool __thiscall CCargo::set_cargo(CCargo *this,void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    this[0x10] = (CCargo)0x0;
    memcpy(*(void **)(this + 4),param_1,0x2438);
    _GetItemCount(this);
  }
  return 0 < iVar1;
}

```

---

## sort

```asm
// === 0850bd0c CCargo::sort  [0x0850bd0c-0x850bd4f] ===
 850bd0c:	55                   	push   %ebp
 850bd0d:	89 e5                	mov    %esp,%ebp
 850bd0f:	83 ec 18             	sub    $0x18,%esp
 850bd12:	8b 45 08             	mov    0x8(%ebp),%eax
 850bd15:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 850bd19:	83 f0 01             	xor    $0x1,%eax
 850bd1c:	84 c0                	test   %al,%al
 850bd1e:	74 2d                	je     850bd4d <_ZN6CCargo4sortEv+0x41>
 850bd20:	8b 45 08             	mov    0x8(%ebp),%eax
 850bd23:	8b 40 04             	mov    0x4(%eax),%eax
 850bd26:	c7 44 24 0c 5a bc 50 	movl   $0x850bc5a,0xc(%esp)
 850bd2d:	08 
 850bd2e:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 850bd35:	00 
 850bd36:	c7 44 24 04 98 00 00 	movl   $0x98,0x4(%esp)
 850bd3d:	00 
 850bd3e:	89 04 24             	mov    %eax,(%esp)
 850bd41:	e8 2a 2b b7 ff       	call   807e870 <qsort@plt>
 850bd46:	8b 45 08             	mov    0x8(%ebp),%eax
 850bd49:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 850bd4d:	c9                   	leave
 850bd4e:	c3                   	ret
 850bd4f:	90                   	nop

```

```c
// CCargo::sort @ 0x850bd0c

/* CCargo::sort() */

void __thiscall CCargo::sort(CCargo *this)

{
  if (this[0x10] != (CCargo)0x1) {
    qsort(*(void **)(this + 4),0x98,0x3d,_CompareSlot);
    this[0x10] = (CCargo)0x1;
  }
  return;
}

```

---

## tryInsertItemSpecialSlot

```asm
// === 0850b570 CCargo::tryInsertItemSpecialSlot  [0x0850b570-0x850b671] ===
 850b570:	55                   	push   %ebp
 850b571:	89 e5                	mov    %esp,%ebp
 850b573:	83 ec 28             	sub    $0x28,%esp
 850b576:	8b 45 10             	mov    0x10(%ebp),%eax
 850b579:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b57d:	8b 45 08             	mov    0x8(%ebp),%eax
 850b580:	89 04 24             	mov    %eax,(%esp)
 850b583:	e8 14 1e 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850b588:	83 f0 01             	xor    $0x1,%eax
 850b58b:	84 c0                	test   %al,%al
 850b58d:	74 0a                	je     850b599 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x29>
 850b58f:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 850b594:	e9 d7 00 00 00       	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b599:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b59c:	89 04 24             	mov    %eax,(%esp)
 850b59f:	e8 6e 52 c4 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 850b5a4:	83 f0 01             	xor    $0x1,%eax
 850b5a7:	84 c0                	test   %al,%al
 850b5a9:	0f 84 a1 00 00 00    	je     850b650 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xe0>
 850b5af:	8b 45 08             	mov    0x8(%ebp),%eax
 850b5b2:	8b 50 04             	mov    0x4(%eax),%edx
 850b5b5:	8b 45 10             	mov    0x10(%ebp),%eax
 850b5b8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b5bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b5be:	8b 50 02             	mov    0x2(%eax),%edx
 850b5c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b5c4:	8b 40 02             	mov    0x2(%eax),%eax
 850b5c7:	39 c2                	cmp    %eax,%edx
 850b5c9:	74 51                	je     850b61c <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xac>
 850b5cb:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850b5d2:	eb 38                	jmp    850b60c <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x9c>
 850b5d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 850b5d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b5db:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b5de:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b5e2:	8b 45 08             	mov    0x8(%ebp),%eax
 850b5e5:	89 04 24             	mov    %eax,(%esp)
 850b5e8:	e8 c3 fe ff ff       	call   850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>
 850b5ed:	89 45 f0             	mov    %eax,-0x10(%ebp)
 850b5f0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 850b5f4:	78 05                	js     850b5fb <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x8b>
 850b5f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 850b5f9:	eb 75                	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b5fb:	83 7d f0 f6          	cmpl   $0xfffffff6,-0x10(%ebp)
 850b5ff:	75 07                	jne    850b608 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x98>
 850b601:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b606:	eb 68                	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b608:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 850b60c:	81 7d ec 97 00 00 00 	cmpl   $0x97,-0x14(%ebp)
 850b613:	0f 9e c0             	setle  %al
 850b616:	84 c0                	test   %al,%al
 850b618:	75 ba                	jne    850b5d4 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x64>
 850b61a:	eb 34                	jmp    850b650 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xe0>
 850b61c:	8b 45 10             	mov    0x10(%ebp),%eax
 850b61f:	89 44 24 08          	mov    %eax,0x8(%esp)
 850b623:	8b 45 0c             	mov    0xc(%ebp),%eax
 850b626:	89 44 24 04          	mov    %eax,0x4(%esp)
 850b62a:	8b 45 08             	mov    0x8(%ebp),%eax
 850b62d:	89 04 24             	mov    %eax,(%esp)
 850b630:	e8 7b fe ff ff       	call   850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>
 850b635:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850b638:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 850b63c:	78 05                	js     850b643 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xd3>
 850b63e:	8b 45 10             	mov    0x10(%ebp),%eax
 850b641:	eb 2d                	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b643:	83 7d f4 f6          	cmpl   $0xfffffff6,-0xc(%ebp)
 850b647:	75 07                	jne    850b650 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xe0>
 850b649:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b64e:	eb 20                	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b650:	8b 45 08             	mov    0x8(%ebp),%eax
 850b653:	8b 50 04             	mov    0x4(%eax),%edx
 850b656:	8b 45 10             	mov    0x10(%ebp),%eax
 850b659:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850b65c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850b65f:	8b 40 02             	mov    0x2(%eax),%eax
 850b662:	85 c0                	test   %eax,%eax
 850b664:	75 05                	jne    850b66b <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0xfb>
 850b666:	8b 45 10             	mov    0x10(%ebp),%eax
 850b669:	eb 05                	jmp    850b670 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi+0x100>
 850b66b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850b670:	c9                   	leave
 850b671:	c3                   	ret

```

```c
// CCargo::tryInsertItemSpecialSlot @ 0x850b570

/* CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const */

int __thiscall CCargo::tryInsertItemSpecialSlot(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_18;
  
  cVar1 = IsOperatorable(this,param_2);
  if (cVar1 != '\x01') {
    return -2;
  }
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 != '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
      iVar2 = _tryAddStackItem(this,param_1,param_2);
      if (-1 < iVar2) {
        return param_2;
      }
      if (iVar2 == -10) {
        return -1;
      }
    }
    else {
      for (local_18 = 0; local_18 < 0x98; local_18 = local_18 + 1) {
        iVar2 = _tryAddStackItem(this,param_1,local_18);
        if (-1 < iVar2) {
          return local_18;
        }
        if (iVar2 == -10) {
          return -1;
        }
      }
    }
  }
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) != 0) {
    param_2 = -1;
  }
  return param_2;
}

```

---

## update_item

```asm
// === 0850bb00 CCargo::update_item  [0x0850bb00-0x850bbc9] ===
 850bb00:	55                   	push   %ebp
 850bb01:	89 e5                	mov    %esp,%ebp
 850bb03:	83 ec 18             	sub    $0x18,%esp
 850bb06:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bb09:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bb0d:	8b 45 08             	mov    0x8(%ebp),%eax
 850bb10:	89 04 24             	mov    %eax,(%esp)
 850bb13:	e8 84 18 00 00       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 850bb18:	83 f0 01             	xor    $0x1,%eax
 850bb1b:	84 c0                	test   %al,%al
 850bb1d:	0f 85 a3 00 00 00    	jne    850bbc6 <_ZN6CCargo11update_itemEiRK10Inven_Item+0xc6>
 850bb23:	8b 45 08             	mov    0x8(%ebp),%eax
 850bb26:	8b 50 04             	mov    0x4(%eax),%edx
 850bb29:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bb2c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bb2f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850bb32:	8b 40 02             	mov    0x2(%eax),%eax
 850bb35:	85 c0                	test   %eax,%eax
 850bb37:	75 1b                	jne    850bb54 <_ZN6CCargo11update_itemEiRK10Inven_Item+0x54>
 850bb39:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bb3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 850bb40:	8b 45 10             	mov    0x10(%ebp),%eax
 850bb43:	89 44 24 04          	mov    %eax,0x4(%esp)
 850bb47:	8b 45 08             	mov    0x8(%ebp),%eax
 850bb4a:	89 04 24             	mov    %eax,(%esp)
 850bb4d:	e8 68 09 00 00       	call   850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>
 850bb52:	eb 73                	jmp    850bbc7 <_ZN6CCargo11update_itemEiRK10Inven_Item+0xc7>
 850bb54:	8b 45 08             	mov    0x8(%ebp),%eax
 850bb57:	8b 50 04             	mov    0x4(%eax),%edx
 850bb5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850bb5d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 850bb60:	01 c2                	add    %eax,%edx
 850bb62:	8b 45 10             	mov    0x10(%ebp),%eax
 850bb65:	8b 08                	mov    (%eax),%ecx
 850bb67:	89 0a                	mov    %ecx,(%edx)
 850bb69:	8b 48 04             	mov    0x4(%eax),%ecx
 850bb6c:	89 4a 04             	mov    %ecx,0x4(%edx)
 850bb6f:	8b 48 08             	mov    0x8(%eax),%ecx
 850bb72:	89 4a 08             	mov    %ecx,0x8(%edx)
 850bb75:	8b 48 0c             	mov    0xc(%eax),%ecx
 850bb78:	89 4a 0c             	mov    %ecx,0xc(%edx)
 850bb7b:	8b 48 10             	mov    0x10(%eax),%ecx
 850bb7e:	89 4a 10             	mov    %ecx,0x10(%edx)
 850bb81:	8b 48 14             	mov    0x14(%eax),%ecx
 850bb84:	89 4a 14             	mov    %ecx,0x14(%edx)
 850bb87:	8b 48 18             	mov    0x18(%eax),%ecx
 850bb8a:	89 4a 18             	mov    %ecx,0x18(%edx)
 850bb8d:	8b 48 1c             	mov    0x1c(%eax),%ecx
 850bb90:	89 4a 1c             	mov    %ecx,0x1c(%edx)
 850bb93:	8b 48 20             	mov    0x20(%eax),%ecx
 850bb96:	89 4a 20             	mov    %ecx,0x20(%edx)
 850bb99:	8b 48 24             	mov    0x24(%eax),%ecx
 850bb9c:	89 4a 24             	mov    %ecx,0x24(%edx)
 850bb9f:	8b 48 28             	mov    0x28(%eax),%ecx
 850bba2:	89 4a 28             	mov    %ecx,0x28(%edx)
 850bba5:	8b 48 2c             	mov    0x2c(%eax),%ecx
 850bba8:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 850bbab:	8b 48 30             	mov    0x30(%eax),%ecx
 850bbae:	89 4a 30             	mov    %ecx,0x30(%edx)
 850bbb1:	8b 48 34             	mov    0x34(%eax),%ecx
 850bbb4:	89 4a 34             	mov    %ecx,0x34(%edx)
 850bbb7:	8b 48 38             	mov    0x38(%eax),%ecx
 850bbba:	89 4a 38             	mov    %ecx,0x38(%edx)
 850bbbd:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 850bbc1:	88 42 3c             	mov    %al,0x3c(%edx)
 850bbc4:	eb 01                	jmp    850bbc7 <_ZN6CCargo11update_itemEiRK10Inven_Item+0xc7>
 850bbc6:	90                   	nop
 850bbc7:	c9                   	leave
 850bbc8:	c3                   	ret
 850bbc9:	90                   	nop

```

```c
// CCargo::update_item @ 0x850bb00

/* CCargo::update_item(int, Inven_Item const&) */

void __thiscall CCargo::update_item(CCargo *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      _AddItem(this,param_2,param_1);
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = *(undefined4 *)(param_2 + 4);
      puVar2[2] = *(undefined4 *)(param_2 + 8);
      puVar2[3] = *(undefined4 *)(param_2 + 0xc);
      puVar2[4] = *(undefined4 *)(param_2 + 0x10);
      puVar2[5] = *(undefined4 *)(param_2 + 0x14);
      puVar2[6] = *(undefined4 *)(param_2 + 0x18);
      puVar2[7] = *(undefined4 *)(param_2 + 0x1c);
      puVar2[8] = *(undefined4 *)(param_2 + 0x20);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
      puVar2[10] = *(undefined4 *)(param_2 + 0x28);
      puVar2[0xb] = *(undefined4 *)(param_2 + 0x2c);
      puVar2[0xc] = *(undefined4 *)(param_2 + 0x30);
      puVar2[0xd] = *(undefined4 *)(param_2 + 0x34);
      puVar2[0xe] = *(undefined4 *)(param_2 + 0x38);
      *(Inven_Item *)(puVar2 + 0xf) = param_2[0x3c];
    }
  }
  return;
}

```

