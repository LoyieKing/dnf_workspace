# TiXmlAttributeSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Add

```asm
// === 087e3a40 TiXmlAttributeSet::Add  [0x087e3a40-0x87e3b4f] ===
 87e3a40:	55                   	push   %ebp
 87e3a41:	89 e5                	mov    %esp,%ebp
 87e3a43:	57                   	push   %edi
 87e3a44:	56                   	push   %esi
 87e3a45:	53                   	push   %ebx
 87e3a46:	83 ec 4c             	sub    $0x4c,%esp
 87e3a49:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e3a4c:	8d 45 e7             	lea    -0x19(%ebp),%eax
 87e3a4f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e3a52:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3a56:	8b 42 14             	mov    0x14(%edx),%eax
 87e3a59:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3a5d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e3a60:	89 04 24             	mov    %eax,(%esp)
 87e3a63:	e8 c8 3b f2 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 87e3a68:	8b 43 20             	mov    0x20(%ebx),%eax
 87e3a6b:	39 d8                	cmp    %ebx,%eax
 87e3a6d:	0f 84 86 00 00 00    	je     87e3af9 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0xb9>
 87e3a73:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e3a76:	89 5d c4             	mov    %ebx,-0x3c(%ebp)
 87e3a79:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87e3a7c:	83 e9 0c             	sub    $0xc,%ecx
 87e3a7f:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 87e3a82:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e3a85:	8b 51 f4             	mov    -0xc(%ecx),%edx
 87e3a88:	eb 0e                	jmp    87e3a98 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x58>
 87e3a8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e3a90:	8b 40 20             	mov    0x20(%eax),%eax
 87e3a93:	39 45 c4             	cmp    %eax,-0x3c(%ebp)
 87e3a96:	74 38                	je     87e3ad0 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x90>
 87e3a98:	8b 70 14             	mov    0x14(%eax),%esi
 87e3a9b:	39 56 f4             	cmp    %edx,-0xc(%esi)
 87e3a9e:	75 f0                	jne    87e3a90 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x50>
 87e3aa0:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e3aa3:	39 d2                	cmp    %edx,%edx
 87e3aa5:	89 d1                	mov    %edx,%ecx
 87e3aa7:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e3aa9:	75 e5                	jne    87e3a90 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x50>
 87e3aab:	c7 44 24 0c 60 14 de 	movl   $0x8de1460,0xc(%esp)
 87e3ab2:	08 
 87e3ab3:	c7 44 24 08 ed 05 00 	movl   $0x5ed,0x8(%esp)
 87e3aba:	00 
 87e3abb:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e3ac2:	08 
 87e3ac3:	c7 04 24 38 10 de 08 	movl   $0x8de1038,(%esp)
 87e3aca:	e8 81 a1 89 ff       	call   807dc50 <__assert_fail@plt>
 87e3acf:	90                   	nop
 87e3ad0:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 87e3ad3:	81 7d d0 f0 cc 48 09 	cmpl   $0x948ccf0,-0x30(%ebp)
 87e3ada:	75 30                	jne    87e3b0c <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0xcc>
 87e3adc:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e3adf:	8b 43 1c             	mov    0x1c(%ebx),%eax
 87e3ae2:	89 5a 20             	mov    %ebx,0x20(%edx)
 87e3ae5:	89 42 1c             	mov    %eax,0x1c(%edx)
 87e3ae8:	8b 43 1c             	mov    0x1c(%ebx),%eax
 87e3aeb:	89 53 1c             	mov    %edx,0x1c(%ebx)
 87e3aee:	89 50 20             	mov    %edx,0x20(%eax)
 87e3af1:	83 c4 4c             	add    $0x4c,%esp
 87e3af4:	5b                   	pop    %ebx
 87e3af5:	5e                   	pop    %esi
 87e3af6:	5f                   	pop    %edi
 87e3af7:	5d                   	pop    %ebp
 87e3af8:	c3                   	ret
 87e3af9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e3afc:	83 e8 0c             	sub    $0xc,%eax
 87e3aff:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e3b02:	eb cf                	jmp    87e3ad3 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x93>
 87e3b04:	89 04 24             	mov    %eax,(%esp)
 87e3b07:	e8 44 fc 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e3b0c:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 87e3b11:	85 c0                	test   %eax,%eax
 87e3b13:	74 23                	je     87e3b38 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0xf8>
 87e3b15:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e3b18:	83 c8 ff             	or     $0xffffffff,%eax
 87e3b1b:	f0 0f c1 42 08       	lock xadd %eax,0x8(%edx)
 87e3b20:	85 c0                	test   %eax,%eax
 87e3b22:	7f b8                	jg     87e3adc <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x9c>
 87e3b24:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87e3b27:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3b2b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e3b2e:	89 04 24             	mov    %eax,(%esp)
 87e3b31:	e8 ea 2d f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e3b36:	eb a4                	jmp    87e3adc <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0x9c>
 87e3b38:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87e3b3b:	8b 41 08             	mov    0x8(%ecx),%eax
 87e3b3e:	8d 50 ff             	lea    -0x1(%eax),%edx
 87e3b41:	89 51 08             	mov    %edx,0x8(%ecx)
 87e3b44:	eb da                	jmp    87e3b20 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute+0xe0>
 87e3b46:	8d 76 00             	lea    0x0(%esi),%esi
 87e3b49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlAttributeSet::Add @ 0x87e3a40

/* WARNING: Removing unreachable block (ram,0x087e3b38) */
/* TiXmlAttributeSet::Add(TiXmlAttribute*) */

void __thiscall TiXmlAttributeSet::Add(TiXmlAttributeSet *this,TiXmlAttribute *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  TiXmlAttributeSet *pTVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  allocator *local_34;
  char *local_24;
  allocator local_1d [13];
  
  bVar8 = 0;
                    /* try { // try from 087e3a63 to 087e3a67 has its CatchHandler @ 087e3b04 */
  std::string::string((string *)&local_24,*(char **)(param_1 + 0x14),local_1d);
  pTVar3 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar3 != this) {
    do {
      if (*(int *)(*(char **)(pTVar3 + 0x14) + -0xc) == *(int *)(local_24 + -0xc)) {
        bVar7 = true;
        iVar4 = *(int *)(local_24 + -0xc);
        pcVar5 = *(char **)(pTVar3 + 0x14);
        pcVar6 = local_24;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        } while (bVar7);
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!Find( std::string( addMe->Name() ) )","tinyxml.cpp",0x5ed,
                        "void TiXmlAttributeSet::Add(TiXmlAttribute*)");
        }
      }
      pTVar3 = *(TiXmlAttributeSet **)(pTVar3 + 0x20);
    } while (this != pTVar3);
  }
  local_34 = (allocator *)(local_24 + -0xc);
  if (local_34 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy(local_34);
    }
  }
  uVar2 = *(undefined4 *)(this + 0x1c);
  *(TiXmlAttributeSet **)(param_1 + 0x20) = this;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  iVar4 = *(int *)(this + 0x1c);
  *(TiXmlAttribute **)(this + 0x1c) = param_1;
  *(TiXmlAttribute **)(iVar4 + 0x20) = param_1;
  return;
}

```

---

## Find

```asm
// === 087e0220 TiXmlAttributeSet::Find  [0x087e0220-0x87e026f] ===
 87e0220:	55                   	push   %ebp
 87e0221:	89 e5                	mov    %esp,%ebp
 87e0223:	57                   	push   %edi
 87e0224:	56                   	push   %esi
 87e0225:	53                   	push   %ebx
 87e0226:	83 ec 1c             	sub    $0x1c,%esp
 87e0229:	8b 75 08             	mov    0x8(%ebp),%esi
 87e022c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e022f:	8b 5e 20             	mov    0x20(%esi),%ebx
 87e0232:	39 f3                	cmp    %esi,%ebx
 87e0234:	75 09                	jne    87e023f <_ZNK17TiXmlAttributeSet4FindEPKc+0x1f>
 87e0236:	eb 28                	jmp    87e0260 <_ZNK17TiXmlAttributeSet4FindEPKc+0x40>
 87e0238:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e023b:	39 f3                	cmp    %esi,%ebx
 87e023d:	74 21                	je     87e0260 <_ZNK17TiXmlAttributeSet4FindEPKc+0x40>
 87e023f:	8b 43 14             	mov    0x14(%ebx),%eax
 87e0242:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e0246:	89 04 24             	mov    %eax,(%esp)
 87e0249:	e8 92 e2 89 ff       	call   807e4e0 <strcmp@plt>
 87e024e:	85 c0                	test   %eax,%eax
 87e0250:	75 e6                	jne    87e0238 <_ZNK17TiXmlAttributeSet4FindEPKc+0x18>
 87e0252:	83 c4 1c             	add    $0x1c,%esp
 87e0255:	89 d8                	mov    %ebx,%eax
 87e0257:	5b                   	pop    %ebx
 87e0258:	5e                   	pop    %esi
 87e0259:	5f                   	pop    %edi
 87e025a:	5d                   	pop    %ebp
 87e025b:	c3                   	ret
 87e025c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0260:	31 db                	xor    %ebx,%ebx
 87e0262:	83 c4 1c             	add    $0x1c,%esp
 87e0265:	89 d8                	mov    %ebx,%eax
 87e0267:	5b                   	pop    %ebx
 87e0268:	5e                   	pop    %esi
 87e0269:	5f                   	pop    %edi
 87e026a:	5d                   	pop    %ebp
 87e026b:	c3                   	ret
 87e026c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlAttributeSet::Find @ 0x87e0220

/* TiXmlAttributeSet::Find(char const*) const */

TiXmlAttributeSet * __thiscall TiXmlAttributeSet::Find(TiXmlAttributeSet *this,char *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
      return (TiXmlAttributeSet *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  return pTVar1;
}

```

---

## FindOrCreate

```asm
// === 087e3b50 TiXmlAttributeSet::FindOrCreate  [0x087e3b50-0x87e3c1f] ===
 87e3b50:	55                   	push   %ebp
 87e3b51:	89 e5                	mov    %esp,%ebp
 87e3b53:	57                   	push   %edi
 87e3b54:	56                   	push   %esi
 87e3b55:	53                   	push   %ebx
 87e3b56:	83 ec 3c             	sub    $0x3c,%esp
 87e3b59:	8b 55 08             	mov    0x8(%ebp),%edx
 87e3b5c:	8b 5a 20             	mov    0x20(%edx),%ebx
 87e3b5f:	39 d3                	cmp    %edx,%ebx
 87e3b61:	74 40                	je     87e3ba3 <_ZN17TiXmlAttributeSet12FindOrCreateERKSs+0x53>
 87e3b63:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3b66:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e3b69:	8b 00                	mov    (%eax),%eax
 87e3b6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3b6e:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e3b71:	eb 0d                	jmp    87e3b80 <_ZN17TiXmlAttributeSet12FindOrCreateERKSs+0x30>
 87e3b73:	90                   	nop
 87e3b74:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e3b78:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e3b7b:	39 5d d4             	cmp    %ebx,-0x2c(%ebp)
 87e3b7e:	74 20                	je     87e3ba0 <_ZN17TiXmlAttributeSet12FindOrCreateERKSs+0x50>
 87e3b80:	8b 73 14             	mov    0x14(%ebx),%esi
 87e3b83:	3b 46 f4             	cmp    -0xc(%esi),%eax
 87e3b86:	75 f0                	jne    87e3b78 <_ZN17TiXmlAttributeSet12FindOrCreateERKSs+0x28>
 87e3b88:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e3b8b:	39 c0                	cmp    %eax,%eax
 87e3b8d:	89 c1                	mov    %eax,%ecx
 87e3b8f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e3b91:	75 e5                	jne    87e3b78 <_ZN17TiXmlAttributeSet12FindOrCreateERKSs+0x28>
 87e3b93:	83 c4 3c             	add    $0x3c,%esp
 87e3b96:	89 d8                	mov    %ebx,%eax
 87e3b98:	5b                   	pop    %ebx
 87e3b99:	5e                   	pop    %esi
 87e3b9a:	5f                   	pop    %edi
 87e3b9b:	5d                   	pop    %ebp
 87e3b9c:	c3                   	ret
 87e3b9d:	8d 76 00             	lea    0x0(%esi),%esi
 87e3ba0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e3ba3:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87e3ba6:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e3bad:	e8 9e 08 f4 ff       	call   8724450 <_Znwj>
 87e3bb2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e3bb5:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e3bbc:	89 c3                	mov    %eax,%ebx
 87e3bbe:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e3bc5:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e3bcc:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e3bd2:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e3bd9:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e3be0:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e3be7:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e3bee:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e3bf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3bf9:	89 14 24             	mov    %edx,(%esp)
 87e3bfc:	e8 3f fe ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e3c01:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3c04:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3c08:	8d 43 14             	lea    0x14(%ebx),%eax
 87e3c0b:	89 04 24             	mov    %eax,(%esp)
 87e3c0e:	e8 1d 40 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e3c13:	83 c4 3c             	add    $0x3c,%esp
 87e3c16:	89 d8                	mov    %ebx,%eax
 87e3c18:	5b                   	pop    %ebx
 87e3c19:	5e                   	pop    %esi
 87e3c1a:	5f                   	pop    %edi
 87e3c1b:	5d                   	pop    %ebp
 87e3c1c:	c3                   	ret
 87e3c1d:	90                   	nop
 87e3c1e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlAttributeSet::FindOrCreate @ 0x87e3b50

/* TiXmlAttributeSet::FindOrCreate(std::string const&) */

TiXmlAttributeSet * __thiscall
TiXmlAttributeSet::FindOrCreate(TiXmlAttributeSet *this,string *param_1)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  int iVar3;
  TiXmlAttributeSet *pTVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  pTVar4 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar4 != this) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (iVar1 == *(int *)(*(char **)(pTVar4 + 0x14) + -0xc)) {
        bVar7 = true;
        iVar3 = iVar1;
        pcVar5 = *(char **)(pTVar4 + 0x14);
        pcVar6 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          return pTVar4;
        }
      }
      pTVar4 = *(TiXmlAttributeSet **)(pTVar4 + 0x20);
    } while (this != pTVar4);
  }
  pTVar2 = operator_new(0x24);
  *(undefined4 *)(pTVar2 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 0xc) = 0;
  *(undefined ***)pTVar2 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar2 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar2 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar2 + 0x10) = 0;
  *(undefined4 *)(pTVar2 + 0x20) = 0;
  *(undefined4 *)(pTVar2 + 0x1c) = 0;
  Add(this,pTVar2);
  std::string::assign((string *)(pTVar2 + 0x14),param_1);
  return (TiXmlAttributeSet *)pTVar2;
}

```

---

## FindOrCreate_087e49a0

```asm
// === 087e49a0 TiXmlAttributeSet::FindOrCreate  [0x087e49a0-0x87e4a5f] ===
 87e49a0:	55                   	push   %ebp
 87e49a1:	89 e5                	mov    %esp,%ebp
 87e49a3:	57                   	push   %edi
 87e49a4:	56                   	push   %esi
 87e49a5:	53                   	push   %ebx
 87e49a6:	83 ec 1c             	sub    $0x1c,%esp
 87e49a9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e49ac:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e49af:	8b 5e 20             	mov    0x20(%esi),%ebx
 87e49b2:	39 f3                	cmp    %esi,%ebx
 87e49b4:	75 09                	jne    87e49bf <_ZN17TiXmlAttributeSet12FindOrCreateEPKc+0x1f>
 87e49b6:	eb 28                	jmp    87e49e0 <_ZN17TiXmlAttributeSet12FindOrCreateEPKc+0x40>
 87e49b8:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e49bb:	39 f3                	cmp    %esi,%ebx
 87e49bd:	74 21                	je     87e49e0 <_ZN17TiXmlAttributeSet12FindOrCreateEPKc+0x40>
 87e49bf:	8b 43 14             	mov    0x14(%ebx),%eax
 87e49c2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e49c6:	89 04 24             	mov    %eax,(%esp)
 87e49c9:	e8 12 9b 89 ff       	call   807e4e0 <strcmp@plt>
 87e49ce:	85 c0                	test   %eax,%eax
 87e49d0:	75 e6                	jne    87e49b8 <_ZN17TiXmlAttributeSet12FindOrCreateEPKc+0x18>
 87e49d2:	83 c4 1c             	add    $0x1c,%esp
 87e49d5:	89 d8                	mov    %ebx,%eax
 87e49d7:	5b                   	pop    %ebx
 87e49d8:	5e                   	pop    %esi
 87e49d9:	5f                   	pop    %edi
 87e49da:	5d                   	pop    %ebp
 87e49db:	c3                   	ret
 87e49dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e49e0:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e49e7:	e8 64 fa f3 ff       	call   8724450 <_Znwj>
 87e49ec:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e49f3:	89 c3                	mov    %eax,%ebx
 87e49f5:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e49fc:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e4a03:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e4a09:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e4a10:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e4a17:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e4a1e:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e4a25:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e4a2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4a30:	89 34 24             	mov    %esi,(%esp)
 87e4a33:	e8 08 f0 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e4a38:	89 3c 24             	mov    %edi,(%esp)
 87e4a3b:	e8 70 99 89 ff       	call   807e3b0 <strlen@plt>
 87e4a40:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e4a44:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4a48:	8d 43 14             	lea    0x14(%ebx),%eax
 87e4a4b:	89 04 24             	mov    %eax,(%esp)
 87e4a4e:	e8 4d 3b f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e4a53:	83 c4 1c             	add    $0x1c,%esp
 87e4a56:	89 d8                	mov    %ebx,%eax
 87e4a58:	5b                   	pop    %ebx
 87e4a59:	5e                   	pop    %esi
 87e4a5a:	5f                   	pop    %edi
 87e4a5b:	5d                   	pop    %ebp
 87e4a5c:	c3                   	ret
 87e4a5d:	90                   	nop
 87e4a5e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlAttributeSet::FindOrCreate @ 0x87e49a0

/* TiXmlAttributeSet::FindOrCreate(char const*) */

TiXmlAttribute * __thiscall TiXmlAttributeSet::FindOrCreate(TiXmlAttributeSet *this,char *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  TiXmlAttribute *pTVar3;
  size_t sVar4;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
      pTVar3 = operator_new(0x24);
      *(undefined4 *)(pTVar3 + 8) = 0xffffffff;
      *(undefined4 *)(pTVar3 + 4) = 0xffffffff;
      *(undefined4 *)(pTVar3 + 0xc) = 0;
      *(undefined ***)pTVar3 = &PTR__TiXmlAttribute_08de2028;
      *(undefined1 **)(pTVar3 + 0x14) = &DAT_0948ccfc;
      *(undefined1 **)(pTVar3 + 0x18) = &DAT_0948ccfc;
      *(undefined4 *)(pTVar3 + 0x10) = 0;
      *(undefined4 *)(pTVar3 + 0x20) = 0;
      *(undefined4 *)(pTVar3 + 0x1c) = 0;
      Add(this,pTVar3);
      sVar4 = strlen(param_1);
      std::string::assign((string *)(pTVar3 + 0x14),param_1,sVar4);
      return pTVar3;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  return (TiXmlAttribute *)pTVar1;
}

```

---

## Find_087e0370

```asm
// === 087e0370 TiXmlAttributeSet::Find  [0x087e0370-0x87e03bf] ===
 87e0370:	55                   	push   %ebp
 87e0371:	89 e5                	mov    %esp,%ebp
 87e0373:	57                   	push   %edi
 87e0374:	56                   	push   %esi
 87e0375:	53                   	push   %ebx
 87e0376:	83 ec 08             	sub    $0x8,%esp
 87e0379:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e037c:	8b 43 20             	mov    0x20(%ebx),%eax
 87e037f:	39 d8                	cmp    %ebx,%eax
 87e0381:	74 38                	je     87e03bb <_ZNK17TiXmlAttributeSet4FindERKSs+0x4b>
 87e0383:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e0386:	89 5d ec             	mov    %ebx,-0x14(%ebp)
 87e0389:	8b 12                	mov    (%edx),%edx
 87e038b:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87e038e:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e0391:	eb 0d                	jmp    87e03a0 <_ZNK17TiXmlAttributeSet4FindERKSs+0x30>
 87e0393:	90                   	nop
 87e0394:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0398:	8b 40 20             	mov    0x20(%eax),%eax
 87e039b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 87e039e:	74 1b                	je     87e03bb <_ZNK17TiXmlAttributeSet4FindERKSs+0x4b>
 87e03a0:	8b 70 14             	mov    0x14(%eax),%esi
 87e03a3:	39 56 f4             	cmp    %edx,-0xc(%esi)
 87e03a6:	75 f0                	jne    87e0398 <_ZNK17TiXmlAttributeSet4FindERKSs+0x28>
 87e03a8:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87e03ab:	39 d2                	cmp    %edx,%edx
 87e03ad:	89 d1                	mov    %edx,%ecx
 87e03af:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e03b1:	75 e5                	jne    87e0398 <_ZNK17TiXmlAttributeSet4FindERKSs+0x28>
 87e03b3:	83 c4 08             	add    $0x8,%esp
 87e03b6:	5b                   	pop    %ebx
 87e03b7:	5e                   	pop    %esi
 87e03b8:	5f                   	pop    %edi
 87e03b9:	5d                   	pop    %ebp
 87e03ba:	c3                   	ret
 87e03bb:	31 c0                	xor    %eax,%eax
 87e03bd:	eb f4                	jmp    87e03b3 <_ZNK17TiXmlAttributeSet4FindERKSs+0x43>
 87e03bf:	90                   	nop

```

```c
// TiXmlAttributeSet::Find @ 0x87e0370

/* TiXmlAttributeSet::Find(std::string const&) const */

TiXmlAttributeSet * __thiscall TiXmlAttributeSet::Find(TiXmlAttributeSet *this,string *param_1)

{
  int iVar1;
  TiXmlAttributeSet *pTVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar2 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar2 != this) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar2 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar3 = iVar1;
        pcVar4 = *(char **)(pTVar2 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return pTVar2;
        }
      }
      pTVar2 = *(TiXmlAttributeSet **)(pTVar2 + 0x20);
    } while (pTVar2 != this);
  }
  return (TiXmlAttributeSet *)0x0;
}

```

---

## Remove

```asm
// === 087e03c0 TiXmlAttributeSet::Remove  [0x087e03c0-0x87e042f] ===
 87e03c0:	55                   	push   %ebp
 87e03c1:	89 e5                	mov    %esp,%ebp
 87e03c3:	83 ec 18             	sub    $0x18,%esp
 87e03c6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e03c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e03cc:	8b 41 20             	mov    0x20(%ecx),%eax
 87e03cf:	39 c8                	cmp    %ecx,%eax
 87e03d1:	74 2f                	je     87e0402 <_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute+0x42>
 87e03d3:	39 d0                	cmp    %edx,%eax
 87e03d5:	74 0c                	je     87e03e3 <_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute+0x23>
 87e03d7:	90                   	nop
 87e03d8:	8b 40 20             	mov    0x20(%eax),%eax
 87e03db:	39 c8                	cmp    %ecx,%eax
 87e03dd:	74 23                	je     87e0402 <_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute+0x42>
 87e03df:	39 c2                	cmp    %eax,%edx
 87e03e1:	75 f5                	jne    87e03d8 <_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute+0x18>
 87e03e3:	8b 42 1c             	mov    0x1c(%edx),%eax
 87e03e6:	8b 4a 20             	mov    0x20(%edx),%ecx
 87e03e9:	89 48 20             	mov    %ecx,0x20(%eax)
 87e03ec:	8b 4a 20             	mov    0x20(%edx),%ecx
 87e03ef:	c7 42 20 00 00 00 00 	movl   $0x0,0x20(%edx)
 87e03f6:	89 41 1c             	mov    %eax,0x1c(%ecx)
 87e03f9:	c7 42 1c 00 00 00 00 	movl   $0x0,0x1c(%edx)
 87e0400:	c9                   	leave
 87e0401:	c3                   	ret
 87e0402:	c7 44 24 0c 20 14 de 	movl   $0x8de1420,0xc(%esp)
 87e0409:	08 
 87e040a:	c7 44 24 08 08 06 00 	movl   $0x608,0x8(%esp)
 87e0411:	00 
 87e0412:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e0419:	08 
 87e041a:	c7 04 24 6d 45 d0 08 	movl   $0x8d0456d,(%esp)
 87e0421:	e8 2a d8 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0426:	8d 76 00             	lea    0x0(%esi),%esi
 87e0429:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlAttributeSet::Remove @ 0x87e03c0

/* TiXmlAttributeSet::Remove(TiXmlAttribute*) */

void __thiscall TiXmlAttributeSet::Remove(TiXmlAttributeSet *this,TiXmlAttribute *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  int iVar3;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","tinyxml.cpp",0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
    }
    if (pTVar1 == (TiXmlAttributeSet *)param_1) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

```

---

## TiXmlAttributeSet

```asm
// === 087e0100 TiXmlAttributeSet::TiXmlAttributeSet  [0x087e0100-0x87e013f] ===
 87e0100:	55                   	push   %ebp
 87e0101:	89 e5                	mov    %esp,%ebp
 87e0103:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0106:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e010d:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e0114:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e011b:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e0121:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e0128:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e012f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e0136:	89 40 20             	mov    %eax,0x20(%eax)
 87e0139:	89 40 1c             	mov    %eax,0x1c(%eax)
 87e013c:	5d                   	pop    %ebp
 87e013d:	c3                   	ret
 87e013e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlAttributeSet::TiXmlAttributeSet @ 0x87e0100

/* TiXmlAttributeSet::TiXmlAttributeSet() */

void __thiscall TiXmlAttributeSet::TiXmlAttributeSet(TiXmlAttributeSet *this)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(TiXmlAttributeSet **)(this + 0x20) = this;
  *(TiXmlAttributeSet **)(this + 0x1c) = this;
  return;
}

```

---

## ~TiXmlAttributeSet

```asm
// === 087e1cd0 TiXmlAttributeSet::~TiXmlAttributeSet  [0x087e1cd0-0x87e1d7f] ===
 87e1cd0:	55                   	push   %ebp
 87e1cd1:	89 e5                	mov    %esp,%ebp
 87e1cd3:	83 ec 28             	sub    $0x28,%esp
 87e1cd6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e1cd9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e1cdc:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e1cdf:	8b 5e 20             	mov    0x20(%esi),%ebx
 87e1ce2:	39 f3                	cmp    %esi,%ebx
 87e1ce4:	75 31                	jne    87e1d17 <_ZN17TiXmlAttributeSetD1Ev+0x47>
 87e1ce6:	3b 5b 1c             	cmp    0x1c(%ebx),%ebx
 87e1ce9:	75 50                	jne    87e1d3b <_ZN17TiXmlAttributeSetD1Ev+0x6b>
 87e1ceb:	c7 03 28 20 de 08    	movl   $0x8de2028,(%ebx)
 87e1cf1:	8d 43 18             	lea    0x18(%ebx),%eax
 87e1cf4:	89 04 24             	mov    %eax,(%esp)
 87e1cf7:	e8 e4 5e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e1cfc:	83 c6 14             	add    $0x14,%esi
 87e1cff:	89 34 24             	mov    %esi,(%esp)
 87e1d02:	e8 d9 5e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e1d07:	c7 03 f8 13 de 08    	movl   $0x8de13f8,(%ebx)
 87e1d0d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e1d10:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e1d13:	89 ec                	mov    %ebp,%esp
 87e1d15:	5d                   	pop    %ebp
 87e1d16:	c3                   	ret
 87e1d17:	c7 44 24 0c a0 14 de 	movl   $0x8de14a0,0xc(%esp)
 87e1d1e:	08 
 87e1d1f:	c7 44 24 08 e5 05 00 	movl   $0x5e5,0x8(%esp)
 87e1d26:	00 
 87e1d27:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e1d2e:	08 
 87e1d2f:	c7 04 24 07 0f de 08 	movl   $0x8de0f07,(%esp)
 87e1d36:	e8 15 bf 89 ff       	call   807dc50 <__assert_fail@plt>
 87e1d3b:	c7 44 24 0c a0 14 de 	movl   $0x8de14a0,0xc(%esp)
 87e1d42:	08 
 87e1d43:	c7 44 24 08 e6 05 00 	movl   $0x5e6,0x8(%esp)
 87e1d4a:	00 
 87e1d4b:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e1d52:	08 
 87e1d53:	c7 04 24 22 0f de 08 	movl   $0x8de0f22,(%esp)
 87e1d5a:	e8 f1 be 89 ff       	call   807dc50 <__assert_fail@plt>
 87e1d5f:	c7 03 f8 13 de 08    	movl   $0x8de13f8,(%ebx)
 87e1d65:	89 04 24             	mov    %eax,(%esp)
 87e1d68:	e8 e3 19 30 00       	call   8ae3750 <_Unwind_Resume>
 87e1d6d:	83 c6 14             	add    $0x14,%esi
 87e1d70:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e1d73:	89 34 24             	mov    %esi,(%esp)
 87e1d76:	e8 65 5e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e1d7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e1d7e:	eb df                	jmp    87e1d5f <_ZN17TiXmlAttributeSetD1Ev+0x8f>

```

```c
// TiXmlAttributeSet::~TiXmlAttributeSet @ 0x87e1cd0

/* TiXmlAttributeSet::~TiXmlAttributeSet() */

void __thiscall TiXmlAttributeSet::~TiXmlAttributeSet(TiXmlAttributeSet *this)

{
  TiXmlAttributeSet *pTVar1;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar1 != this) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sentinel.next == &sentinel","tinyxml.cpp",0x5e5,
                  "TiXmlAttributeSet::~TiXmlAttributeSet()");
  }
  if (pTVar1 == *(TiXmlAttributeSet **)(pTVar1 + 0x1c)) {
    *(undefined ***)pTVar1 = &PTR__TiXmlAttribute_08de2028;
                    /* try { // try from 087e1cf7 to 087e1cfb has its CatchHandler @ 087e1d6d */
    std::string::~string((string *)(pTVar1 + 0x18));
                    /* try { // try from 087e1d02 to 087e1d06 has its CatchHandler @ 087e1d5f */
    std::string::~string((string *)(this + 0x14));
    *(undefined ***)pTVar1 = &PTR__TiXmlBase_08de13f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("sentinel.prev == &sentinel","tinyxml.cpp",0x5e6,
                "TiXmlAttributeSet::~TiXmlAttributeSet()");
}

```

