# expert_extraction__CExtraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CExtraction

```asm
// === 084a2938 expert_extraction::CExtraction::CExtraction  [0x084a2938-0x84a29a1] ===
 84a2938:	55                   	push   %ebp
 84a2939:	89 e5                	mov    %esp,%ebp
 84a293b:	57                   	push   %edi
 84a293c:	56                   	push   %esi
 84a293d:	53                   	push   %ebx
 84a293e:	83 ec 2c             	sub    $0x2c,%esp
 84a2941:	8b 45 08             	mov    0x8(%ebp),%eax
 84a2944:	c7 00 c8 dd c7 08    	movl   $0x8c7ddc8,(%eax)
 84a294a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84a2951:	e8 fa ad bd ff       	call   807d750 <time@plt>
 84a2956:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a2959:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 84a295c:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 84a2963:	e8 e8 1a 28 00       	call   8724450 <_Znwj>
 84a2968:	89 c3                	mov    %eax,%ebx
 84a296a:	89 d8                	mov    %ebx,%eax
 84a296c:	89 74 24 04          	mov    %esi,0x4(%esp)
 84a2970:	89 04 24             	mov    %eax,(%esp)
 84a2973:	e8 b2 90 c2 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 84a2978:	eb 18                	jmp    84a2992 <_ZN17expert_extraction11CExtractionC1Ev+0x5a>
 84a297a:	89 d6                	mov    %edx,%esi
 84a297c:	89 c7                	mov    %eax,%edi
 84a297e:	89 1c 24             	mov    %ebx,(%esp)
 84a2981:	e8 6a 1b 28 00       	call   87244f0 <_ZdlPv>
 84a2986:	89 f8                	mov    %edi,%eax
 84a2988:	89 f2                	mov    %esi,%edx
 84a298a:	89 04 24             	mov    %eax,(%esp)
 84a298d:	e8 be 0d 64 00       	call   8ae3750 <_Unwind_Resume>
 84a2992:	89 da                	mov    %ebx,%edx
 84a2994:	8b 45 08             	mov    0x8(%ebp),%eax
 84a2997:	89 50 04             	mov    %edx,0x4(%eax)
 84a299a:	83 c4 2c             	add    $0x2c,%esp
 84a299d:	5b                   	pop    %ebx
 84a299e:	5e                   	pop    %esi
 84a299f:	5f                   	pop    %edi
 84a29a0:	5d                   	pop    %ebp
 84a29a1:	c3                   	ret

```

```c
// expert_extraction::CExtraction::CExtraction @ 0x84a2938

/* expert_extraction::CExtraction::CExtraction() */

void __thiscall expert_extraction::CExtraction::CExtraction(CExtraction *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  *(undefined ***)this = &PTR__CExtraction_08c7ddc8;
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 084a2973 to 084a2977 has its CatchHandler @ 084a297a */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 4) = this_00;
  return;
}

```

---

## _check_need_slot

```asm
// === 084a29f4 expert_extraction::CExtraction::_check_need_slot  [0x084a29f4-0x84a2a5d] ===
 84a29f4:	55                   	push   %ebp
 84a29f5:	89 e5                	mov    %esp,%ebp
 84a29f7:	83 ec 28             	sub    $0x28,%esp
 84a29fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a29fd:	89 04 24             	mov    %eax,(%esp)
 84a2a00:	e8 79 78 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a2a05:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a2a08:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84a2a0f:	00 
 84a2a10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a2a17:	00 
 84a2a18:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2a1b:	89 04 24             	mov    %eax,(%esp)
 84a2a1e:	e8 01 8e 05 00       	call   84fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 84a2a23:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a2a26:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a2a2d:	00 
 84a2a2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a2a35:	00 
 84a2a36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2a39:	89 04 24             	mov    %eax,(%esp)
 84a2a3c:	e8 e3 8d 05 00       	call   84fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 84a2a41:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a2a44:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84a2a48:	79 06                	jns    84a2a50 <_ZN17expert_extraction11CExtraction16_check_need_slotEP5CUser+0x5c>
 84a2a4a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a2a4e:	78 07                	js     84a2a57 <_ZN17expert_extraction11CExtraction16_check_need_slotEP5CUser+0x63>
 84a2a50:	b8 01 00 00 00       	mov    $0x1,%eax
 84a2a55:	eb 05                	jmp    84a2a5c <_ZN17expert_extraction11CExtraction16_check_need_slotEP5CUser+0x68>
 84a2a57:	b8 00 00 00 00       	mov    $0x0,%eax
 84a2a5c:	c9                   	leave
 84a2a5d:	c3                   	ret

```

```c
// expert_extraction::CExtraction::_check_need_slot @ 0x84a29f4

/* expert_extraction::CExtraction::_check_need_slot(CUser*) */

undefined4 __thiscall
expert_extraction::CExtraction::_check_need_slot(CExtraction *this,CUser *param_1)

{
  CInventory *pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_empty_slot(pCVar1,1,10);
  iVar3 = CInventory::get_empty_slot(pCVar1,1,0);
  if ((iVar2 < 0) && (iVar3 < 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## check_error

```asm
// === 084a2a5e expert_extraction::CExtraction::check_error  [0x084a2a5e-0x84a2ceb] ===
 84a2a5e:	55                   	push   %ebp
 84a2a5f:	89 e5                	mov    %esp,%ebp
 84a2a61:	53                   	push   %ebx
 84a2a62:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 84a2a68:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84a2a6b:	8b 55 14             	mov    0x14(%ebp),%edx
 84a2a6e:	8b 45 18             	mov    0x18(%ebp),%eax
 84a2a71:	88 8d 64 ff ff ff    	mov    %cl,-0x9c(%ebp)
 84a2a77:	66 89 95 60 ff ff ff 	mov    %dx,-0xa0(%ebp)
 84a2a7e:	66 89 85 5c ff ff ff 	mov    %ax,-0xa4(%ebp)
 84a2a85:	e8 1d 79 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a2a8a:	89 04 24             	mov    %eax,(%esp)
 84a2a8d:	e8 56 fa c9 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 84a2a92:	84 c0                	test   %al,%al
 84a2a94:	74 0a                	je     84a2aa0 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x42>
 84a2a96:	b8 60 00 00 00       	mov    $0x60,%eax
 84a2a9b:	e9 46 02 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2aa3:	89 04 24             	mov    %eax,(%esp)
 84a2aa6:	e8 e9 cd d8 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 84a2aab:	0f be 95 64 ff ff ff 	movsbl -0x9c(%ebp),%edx
 84a2ab2:	39 d0                	cmp    %edx,%eax
 84a2ab4:	0f 95 c0             	setne  %al
 84a2ab7:	84 c0                	test   %al,%al
 84a2ab9:	74 0a                	je     84a2ac5 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x67>
 84a2abb:	b8 13 00 00 00       	mov    $0x13,%eax
 84a2ac0:	e9 21 02 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2ac5:	0f bf 9d 60 ff ff ff 	movswl -0xa0(%ebp),%ebx
 84a2acc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2acf:	89 04 24             	mov    %eax,(%esp)
 84a2ad2:	e8 a7 77 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a2ad7:	8d 55 ab             	lea    -0x55(%ebp),%edx
 84a2ada:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a2ade:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a2ae5:	00 
 84a2ae6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2aea:	89 14 24             	mov    %edx,(%esp)
 84a2aed:	e8 26 8e 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a2af2:	83 ec 04             	sub    $0x4,%esp
 84a2af5:	8b 45 ad             	mov    -0x53(%ebp),%eax
 84a2af8:	89 c3                	mov    %eax,%ebx
 84a2afa:	e8 9c 96 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a2aff:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a2b03:	89 04 24             	mov    %eax,(%esp)
 84a2b06:	e8 27 cf eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a2b0b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a2b0e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84a2b12:	75 0a                	jne    84a2b1e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0xc0>
 84a2b14:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2b19:	e9 c8 01 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2b1e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a2b21:	89 04 24             	mov    %eax,(%esp)
 84a2b24:	e8 d1 e7 c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84a2b29:	83 f0 01             	xor    $0x1,%eax
 84a2b2c:	84 c0                	test   %al,%al
 84a2b2e:	74 0a                	je     84a2b3a <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0xdc>
 84a2b30:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2b35:	e9 ac 01 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2b3a:	0f bf 9d 5c ff ff ff 	movswl -0xa4(%ebp),%ebx
 84a2b41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2b44:	89 04 24             	mov    %eax,(%esp)
 84a2b47:	e8 32 77 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a2b4c:	8d 95 6e ff ff ff    	lea    -0x92(%ebp),%edx
 84a2b52:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a2b56:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a2b5d:	00 
 84a2b5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2b62:	89 14 24             	mov    %edx,(%esp)
 84a2b65:	e8 ae 8d 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a2b6a:	83 ec 04             	sub    $0x4,%esp
 84a2b6d:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 84a2b73:	89 c3                	mov    %eax,%ebx
 84a2b75:	e8 21 96 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a2b7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a2b7e:	89 04 24             	mov    %eax,(%esp)
 84a2b81:	e8 ac ce eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a2b86:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a2b89:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84a2b8d:	75 0a                	jne    84a2b99 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x13b>
 84a2b8f:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2b94:	e9 4d 01 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2b99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2b9c:	8b 00                	mov    (%eax),%eax
 84a2b9e:	83 c0 10             	add    $0x10,%eax
 84a2ba1:	8b 10                	mov    (%eax),%edx
 84a2ba3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2ba6:	89 04 24             	mov    %eax,(%esp)
 84a2ba9:	ff d2                	call   *%edx
 84a2bab:	84 c0                	test   %al,%al
 84a2bad:	74 0a                	je     84a2bb9 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x15b>
 84a2baf:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2bb4:	e9 2d 01 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2bb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2bbc:	8b 00                	mov    (%eax),%eax
 84a2bbe:	83 c0 14             	add    $0x14,%eax
 84a2bc1:	8b 10                	mov    (%eax),%edx
 84a2bc3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2bc6:	89 04 24             	mov    %eax,(%esp)
 84a2bc9:	ff d2                	call   *%edx
 84a2bcb:	84 c0                	test   %al,%al
 84a2bcd:	74 0a                	je     84a2bd9 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x17b>
 84a2bcf:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2bd4:	e9 0d 01 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2bd9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2bdc:	8b 00                	mov    (%eax),%eax
 84a2bde:	83 c0 0c             	add    $0xc,%eax
 84a2be1:	8b 10                	mov    (%eax),%edx
 84a2be3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2be6:	89 04 24             	mov    %eax,(%esp)
 84a2be9:	ff d2                	call   *%edx
 84a2beb:	83 f8 0b             	cmp    $0xb,%eax
 84a2bee:	0f 94 c0             	sete   %al
 84a2bf1:	84 c0                	test   %al,%al
 84a2bf3:	74 0a                	je     84a2bff <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x1a1>
 84a2bf5:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2bfa:	e9 e7 00 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2bff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2c02:	89 04 24             	mov    %eax,(%esp)
 84a2c05:	e8 cc e6 c4 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84a2c0a:	83 f8 02             	cmp    $0x2,%eax
 84a2c0d:	0f 95 c0             	setne  %al
 84a2c10:	84 c0                	test   %al,%al
 84a2c12:	74 0a                	je     84a2c1e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x1c0>
 84a2c14:	b8 8c 00 00 00       	mov    $0x8c,%eax
 84a2c19:	e9 c8 00 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2c1e:	8d 85 6e ff ff ff    	lea    -0x92(%ebp),%eax
 84a2c24:	83 c0 11             	add    $0x11,%eax
 84a2c27:	89 04 24             	mov    %eax,(%esp)
 84a2c2a:	e8 8d db ca ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 84a2c2f:	83 f0 01             	xor    $0x1,%eax
 84a2c32:	84 c0                	test   %al,%al
 84a2c34:	74 0a                	je     84a2c40 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x1e2>
 84a2c36:	b8 ae 00 00 00       	mov    $0xae,%eax
 84a2c3b:	e9 a6 00 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2c40:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2c43:	8b 00                	mov    (%eax),%eax
 84a2c45:	83 c0 38             	add    $0x38,%eax
 84a2c48:	8b 10                	mov    (%eax),%edx
 84a2c4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2c4d:	89 04 24             	mov    %eax,(%esp)
 84a2c50:	ff d2                	call   *%edx
 84a2c52:	84 c0                	test   %al,%al
 84a2c54:	74 0a                	je     84a2c60 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x202>
 84a2c56:	b8 17 00 00 00       	mov    $0x17,%eax
 84a2c5b:	e9 86 00 00 00       	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2c60:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2c63:	89 04 24             	mov    %eax,(%esp)
 84a2c66:	e8 77 e6 c4 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84a2c6b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a2c6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a2c71:	83 f8 02             	cmp    $0x2,%eax
 84a2c74:	75 07                	jne    84a2c7d <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x21f>
 84a2c76:	b8 11 00 00 00       	mov    $0x11,%eax
 84a2c7b:	eb 69                	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2c7d:	0f bf 85 5c ff ff ff 	movswl -0xa4(%ebp),%eax
 84a2c84:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a2c88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a2c8f:	00 
 84a2c90:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2c93:	89 04 24             	mov    %eax,(%esp)
 84a2c96:	e8 a7 3c 1a 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 84a2c9b:	84 c0                	test   %al,%al
 84a2c9d:	74 07                	je     84a2ca6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x248>
 84a2c9f:	b8 d5 00 00 00       	mov    $0xd5,%eax
 84a2ca4:	eb 40                	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2ca6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a2ca9:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 84a2cae:	8d 8d 6e ff ff ff    	lea    -0x92(%ebp),%ecx
 84a2cb4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84a2cb8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a2cbc:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 84a2cc3:	00 
 84a2cc4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a2cc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a2ccb:	89 04 24             	mov    %eax,(%esp)
 84a2cce:	e8 fd 5a de ff       	call   82887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>
 84a2cd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a2cd6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a2cda:	74 05                	je     84a2ce1 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x283>
 84a2cdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a2cdf:	eb 05                	jmp    84a2ce6 <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss+0x288>
 84a2ce1:	b8 00 00 00 00       	mov    $0x0,%eax
 84a2ce6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a2ce9:	c9                   	leave
 84a2cea:	c3                   	ret
 84a2ceb:	90                   	nop

```

```c
// expert_extraction::CExtraction::check_error @ 0x84a2a5e

/* expert_extraction::CExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CExtraction::check_error
          (CExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  CDataManager *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_96 [2];
  int local_94;
  stAmplifyOption_t asStack_85 [44];
  undefined1 local_59 [2];
  int local_57;
  CItem *local_1c;
  CItem *local_18;
  int local_14;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this_00);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar2 == param_2) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_59,iVar2);
      pCVar3 = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(pCVar3,local_57);
      if (local_1c == (CItem *)0x0) {
        iVar2 = 0x11;
      }
      else {
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\x01') {
          iVar4 = (int)param_4;
          iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          uVar5 = 1;
          CInventory::GetInvenSlot((int)local_96,iVar2);
          pCVar3 = (CDataManager *)G_CDataManager();
          local_18 = (CItem *)CDataManager::find_item(pCVar3,local_94);
          if (local_18 == (CItem *)0x0) {
            iVar2 = 0x11;
          }
          else {
            cVar1 = (**(code **)(*(int *)local_18 + 0x10))(local_18,local_94,uVar5,iVar4);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*(int *)local_18 + 0x14))(local_18);
              if (cVar1 == '\0') {
                iVar2 = (**(code **)(*(int *)local_18 + 0xc))(local_18);
                if (iVar2 == 0xb) {
                  iVar2 = 0x11;
                }
                else {
                  iVar2 = CItem::get_rarity(local_18);
                  if (iVar2 == 2) {
                    cVar1 = stAmplifyOption_t::isIdentified(asStack_85);
                    if (cVar1 == '\x01') {
                      cVar1 = (**(code **)(*(int *)local_18 + 0x38))(local_18);
                      if (cVar1 == '\0') {
                        local_14 = CItem::GetAttachType(local_18);
                        if (local_14 == 2) {
                          iVar2 = 0x11;
                        }
                        else {
                          cVar1 = CUser::CheckItemLock(param_1,1,(int)param_4);
                          if (cVar1 == '\0') {
                            iVar2 = CSecu_ProtectionField::CheckItemRarity
                                              (GlobalData::s_pSecuProtectionField,param_1,0x28,
                                               local_18,local_96);
                            if (iVar2 == 0) {
                              iVar2 = 0;
                            }
                          }
                          else {
                            iVar2 = 0xd5;
                          }
                        }
                      }
                      else {
                        iVar2 = 0x17;
                      }
                    }
                    else {
                      iVar2 = 0xae;
                    }
                  }
                  else {
                    iVar2 = 0x8c;
                  }
                }
              }
              else {
                iVar2 = 0x11;
              }
            }
            else {
              iVar2 = 0x11;
            }
          }
        }
        else {
          iVar2 = 0x11;
        }
      }
    }
    else {
      iVar2 = 0x13;
    }
  }
  else {
    iVar2 = 0x60;
  }
  return iVar2;
}

```

---

## inven_process

```asm
// === 084a2cec expert_extraction::CExtraction::inven_process  [0x084a2cec-0x84a302d] ===
 84a2cec:	55                   	push   %ebp
 84a2ced:	89 e5                	mov    %esp,%ebp
 84a2cef:	56                   	push   %esi
 84a2cf0:	53                   	push   %ebx
 84a2cf1:	81 ec b0 c9 00 00    	sub    $0xc9b0,%esp
 84a2cf7:	8b 45 10             	mov    0x10(%ebp),%eax
 84a2cfa:	66 89 85 a4 36 ff ff 	mov    %ax,-0xc95c(%ebp)
 84a2d01:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2d04:	89 04 24             	mov    %eax,(%esp)
 84a2d07:	e8 82 75 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84a2d0c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a2d0f:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a2d15:	89 04 24             	mov    %eax,(%esp)
 84a2d18:	e8 0f a8 d8 ff       	call   822d52c <_ZN10CInventoryC1Ev>
 84a2d1d:	8d 85 a9 36 ff ff    	lea    -0xc957(%ebp),%eax
 84a2d23:	89 04 24             	mov    %eax,(%esp)
 84a2d26:	e8 8d a6 d8 ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 84a2d2b:	8d 85 a9 36 ff ff    	lea    -0xc957(%ebp),%eax
 84a2d31:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2d35:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a2d3b:	89 04 24             	mov    %eax,(%esp)
 84a2d3e:	e8 b3 a7 d8 ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 84a2d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a2d46:	89 04 24             	mov    %eax,(%esp)
 84a2d49:	e8 7c d6 cd ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 84a2d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2d52:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a2d58:	89 04 24             	mov    %eax,(%esp)
 84a2d5b:	e8 b4 75 05 00       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 84a2d60:	0f bf 85 a4 36 ff ff 	movswl -0xc95c(%ebp),%eax
 84a2d67:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84a2d6e:	00 
 84a2d6f:	c7 44 24 10 2d 00 00 	movl   $0x2d,0x10(%esp)
 84a2d76:	00 
 84a2d77:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84a2d7e:	00 
 84a2d7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a2d83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a2d8a:	00 
 84a2d8b:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a2d91:	89 04 24             	mov    %eax,(%esp)
 84a2d94:	e8 73 12 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84a2d99:	88 45 f3             	mov    %al,-0xd(%ebp)
 84a2d9c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84a2da0:	83 f0 01             	xor    $0x1,%eax
 84a2da3:	84 c0                	test   %al,%al
 84a2da5:	74 0a                	je     84a2db1 <_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE+0xc5>
 84a2da7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84a2dac:	e9 63 02 00 00       	jmp    84a3014 <_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE+0x328>
 84a2db1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a2db8:	00 
 84a2db9:	8b 45 14             	mov    0x14(%ebp),%eax
 84a2dbc:	89 04 24             	mov    %eax,(%esp)
 84a2dbf:	e8 e0 7a c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a2dc4:	8b 00                	mov    (%eax),%eax
 84a2dc6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a2dc9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a2dd0:	00 
 84a2dd1:	8b 45 14             	mov    0x14(%ebp),%eax
 84a2dd4:	89 04 24             	mov    %eax,(%esp)
 84a2dd7:	e8 c8 7a c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a2ddc:	8b 40 04             	mov    0x4(%eax),%eax
 84a2ddf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a2de2:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 84a2de5:	e8 b1 93 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a2dea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a2dee:	89 04 24             	mov    %eax,(%esp)
 84a2df1:	e8 3c cc eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a2df6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a2df9:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 84a2dfc:	89 04 24             	mov    %eax,(%esp)
 84a2dff:	e8 50 8a c2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84a2e04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a2e07:	8b 00                	mov    (%eax),%eax
 84a2e09:	83 c0 08             	add    $0x8,%eax
 84a2e0c:	8b 10                	mov    (%eax),%edx
 84a2e0e:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 84a2e11:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2e15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a2e18:	89 04 24             	mov    %eax,(%esp)
 84a2e1b:	ff d2                	call   *%edx
 84a2e1d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a2e20:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2e24:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 84a2e27:	89 04 24             	mov    %eax,(%esp)
 84a2e2a:	e8 55 8a c2 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 84a2e2f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a2e32:	89 45 a5             	mov    %eax,-0x5b(%ebp)
 84a2e35:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 84a2e3c:	00 
 84a2e3d:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 84a2e44:	00 
 84a2e45:	c7 44 24 44 35 00 00 	movl   $0x35,0x44(%esp)
 84a2e4c:	00 
 84a2e4d:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84a2e50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2e54:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84a2e57:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a2e5b:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84a2e5e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a2e62:	8b 45 af             	mov    -0x51(%ebp),%eax
 84a2e65:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a2e69:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84a2e6c:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a2e70:	8b 45 b7             	mov    -0x49(%ebp),%eax
 84a2e73:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a2e77:	8b 45 bb             	mov    -0x45(%ebp),%eax
 84a2e7a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a2e7e:	8b 45 bf             	mov    -0x41(%ebp),%eax
 84a2e81:	89 44 24 20          	mov    %eax,0x20(%esp)
 84a2e85:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 84a2e88:	89 44 24 24          	mov    %eax,0x24(%esp)
 84a2e8c:	8b 45 c7             	mov    -0x39(%ebp),%eax
 84a2e8f:	89 44 24 28          	mov    %eax,0x28(%esp)
 84a2e93:	8b 45 cb             	mov    -0x35(%ebp),%eax
 84a2e96:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84a2e9a:	8b 45 cf             	mov    -0x31(%ebp),%eax
 84a2e9d:	89 44 24 30          	mov    %eax,0x30(%esp)
 84a2ea1:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 84a2ea4:	89 44 24 34          	mov    %eax,0x34(%esp)
 84a2ea8:	8b 45 d7             	mov    -0x29(%ebp),%eax
 84a2eab:	89 44 24 38          	mov    %eax,0x38(%esp)
 84a2eaf:	8b 45 db             	mov    -0x25(%ebp),%eax
 84a2eb2:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84a2eb6:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84a2eba:	88 44 24 40          	mov    %al,0x40(%esp)
 84a2ebe:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a2ec4:	89 04 24             	mov    %eax,(%esp)
 84a2ec7:	e8 ba fe 05 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84a2ecc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a2ecf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a2ed2:	83 f8 ff             	cmp    $0xffffffff,%eax
 84a2ed5:	75 0a                	jne    84a2ee1 <_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE+0x1f5>
 84a2ed7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84a2edc:	e9 33 01 00 00       	jmp    84a3014 <_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE+0x328>
 84a2ee1:	0f bf 85 a4 36 ff ff 	movswl -0xc95c(%ebp),%eax
 84a2ee8:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84a2eef:	00 
 84a2ef0:	c7 44 24 10 2d 00 00 	movl   $0x2d,0x10(%esp)
 84a2ef7:	00 
 84a2ef8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84a2eff:	00 
 84a2f00:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a2f04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a2f0b:	00 
 84a2f0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2f0f:	89 04 24             	mov    %eax,(%esp)
 84a2f12:	e8 f5 10 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84a2f17:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 84a2f1e:	00 
 84a2f1f:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84a2f26:	00 
 84a2f27:	c7 44 24 44 35 00 00 	movl   $0x35,0x44(%esp)
 84a2f2e:	00 
 84a2f2f:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84a2f32:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2f36:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84a2f39:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a2f3d:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84a2f40:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a2f44:	8b 45 af             	mov    -0x51(%ebp),%eax
 84a2f47:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a2f4b:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84a2f4e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a2f52:	8b 45 b7             	mov    -0x49(%ebp),%eax
 84a2f55:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a2f59:	8b 45 bb             	mov    -0x45(%ebp),%eax
 84a2f5c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a2f60:	8b 45 bf             	mov    -0x41(%ebp),%eax
 84a2f63:	89 44 24 20          	mov    %eax,0x20(%esp)
 84a2f67:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 84a2f6a:	89 44 24 24          	mov    %eax,0x24(%esp)
 84a2f6e:	8b 45 c7             	mov    -0x39(%ebp),%eax
 84a2f71:	89 44 24 28          	mov    %eax,0x28(%esp)
 84a2f75:	8b 45 cb             	mov    -0x35(%ebp),%eax
 84a2f78:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84a2f7c:	8b 45 cf             	mov    -0x31(%ebp),%eax
 84a2f7f:	89 44 24 30          	mov    %eax,0x30(%esp)
 84a2f83:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 84a2f86:	89 44 24 34          	mov    %eax,0x34(%esp)
 84a2f8a:	8b 45 d7             	mov    -0x29(%ebp),%eax
 84a2f8d:	89 44 24 38          	mov    %eax,0x38(%esp)
 84a2f91:	8b 45 db             	mov    -0x25(%ebp),%eax
 84a2f94:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84a2f98:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84a2f9c:	88 44 24 40          	mov    %al,0x40(%esp)
 84a2fa0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a2fa3:	89 04 24             	mov    %eax,(%esp)
 84a2fa6:	e8 db fd 05 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84a2fab:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a2fae:	8b 45 18             	mov    0x18(%ebp),%eax
 84a2fb1:	89 04 24             	mov    %eax,(%esp)
 84a2fb4:	e8 b5 3b bf ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 84a2fb9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84a2fbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2fc0:	8b 45 18             	mov    0x18(%ebp),%eax
 84a2fc3:	89 04 24             	mov    %eax,(%esp)
 84a2fc6:	e8 5b e1 c6 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 84a2fcb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84a2fce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2fd2:	8b 45 18             	mov    0x18(%ebp),%eax
 84a2fd5:	89 04 24             	mov    %eax,(%esp)
 84a2fd8:	e8 49 e1 c6 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 84a2fdd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84a2fe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a2fe4:	8b 45 18             	mov    0x18(%ebp),%eax
 84a2fe7:	89 04 24             	mov    %eax,(%esp)
 84a2fea:	e8 37 e1 c6 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 84a2fef:	bb 01 00 00 00       	mov    $0x1,%ebx
 84a2ff4:	eb 1e                	jmp    84a3014 <_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE+0x328>
 84a2ff6:	89 d3                	mov    %edx,%ebx
 84a2ff8:	89 c6                	mov    %eax,%esi
 84a2ffa:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a3000:	89 04 24             	mov    %eax,(%esp)
 84a3003:	e8 f8 a5 d8 ff       	call   822d600 <_ZN10CInventoryD1Ev>
 84a3008:	89 f0                	mov    %esi,%eax
 84a300a:	89 da                	mov    %ebx,%edx
 84a300c:	89 04 24             	mov    %eax,(%esp)
 84a300f:	e8 3c 07 64 00       	call   8ae3750 <_Unwind_Resume>
 84a3014:	8d 85 e8 f7 ff ff    	lea    -0x818(%ebp),%eax
 84a301a:	89 04 24             	mov    %eax,(%esp)
 84a301d:	e8 de a5 d8 ff       	call   822d600 <_ZN10CInventoryD1Ev>
 84a3022:	89 d8                	mov    %ebx,%eax
 84a3024:	81 c4 b0 c9 00 00    	add    $0xc9b0,%esp
 84a302a:	5b                   	pop    %ebx
 84a302b:	5e                   	pop    %esi
 84a302c:	5d                   	pop    %ebp
 84a302d:	c3                   	ret

```

```c
// expert_extraction::CExtraction::inven_process @ 0x84a2cec

/* expert_extraction::CExtraction::inven_process(CUser*, short, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&) */

undefined4 __thiscall
expert_extraction::CExtraction::inven_process
          (CExtraction *this,CUser *param_1,short param_2,vector *param_3,vector *param_4)

{
  int iVar1;
  CInventory *pCVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this_00;
  undefined4 uVar5;
  InventoryMemory local_c95b [49471];
  CInventory local_81c [1979];
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined2 uStack_5d;
  undefined2 uStack_5b;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  int local_24;
  int local_20;
  int local_1c;
  CInventory *local_18;
  char local_11;
  int *local_10;
  
  local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::CInventory(local_81c);
  InventoryMemory::InventoryMemory(local_c95b);
  CInventory::SetInventoryMemory(local_81c,local_c95b);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 084a2d5b to 084a2fee has its CatchHandler @ 084a2ff6 */
  CInventory::setCopy(local_81c,pCVar2);
  local_11 = CInventory::delete_item(local_81c,1,(int)param_2,1,0x2d,0);
  if (local_11 == '\x01') {
    piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               param_3,0);
    local_1c = *piVar3;
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,0);
    iVar1 = local_1c;
    local_20 = *(int *)(iVar4 + 4);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    Inven_Item::Inven_Item((Inven_Item *)&local_61);
    (**(code **)(*local_10 + 8))(local_10,&local_61);
    Inven_Item::set_add_info((Inven_Item *)&local_61,local_20);
    uStack_5f = (undefined2)local_1c;
    uStack_5d = (undefined2)((uint)local_1c >> 0x10);
    local_24 = CInventory::insertItemIntoInventory
                         (local_81c,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,uStack_5d),
                          local_59,local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                          local_39,local_35,local_31,local_2d,local_29,local_25,0x35,0,1);
    if (local_24 == -1) {
      uVar5 = 0;
      local_24 = -1;
    }
    else {
      CInventory::delete_item(local_18,1,(int)param_2,1,0x2d,1);
      local_24 = CInventory::insertItemIntoInventory
                           (local_18,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,uStack_5d),
                            local_59,local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                            local_39,local_35,local_31,local_2d,local_29,local_25,0x35,1,1);
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_4);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_24);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_1c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_20);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  CInventory::~CInventory(local_81c);
  return uVar5;
}

```

---

## ~CExtraction

```asm
// === 084a29a2 expert_extraction::CExtraction::~CExtraction  [0x084a29a2-0x84a29d5] ===
 84a29a2:	55                   	push   %ebp
 84a29a3:	89 e5                	mov    %esp,%ebp
 84a29a5:	83 ec 18             	sub    $0x18,%esp
 84a29a8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a29ab:	c7 00 c8 dd c7 08    	movl   $0x8c7ddc8,(%eax)
 84a29b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a29b4:	8b 40 04             	mov    0x4(%eax),%eax
 84a29b7:	89 04 24             	mov    %eax,(%esp)
 84a29ba:	e8 31 1b 28 00       	call   87244f0 <_ZdlPv>
 84a29bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84a29c4:	84 c0                	test   %al,%al
 84a29c6:	74 0b                	je     84a29d3 <_ZN17expert_extraction11CExtractionD1Ev+0x31>
 84a29c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a29cb:	89 04 24             	mov    %eax,(%esp)
 84a29ce:	e8 1d 1b 28 00       	call   87244f0 <_ZdlPv>
 84a29d3:	c9                   	leave
 84a29d4:	c3                   	ret
 84a29d5:	90                   	nop

```

```c
// expert_extraction::CExtraction::~CExtraction @ 0x84a29a2

/* WARNING: Removing unreachable block (ram,0x084a29c8) */
/* expert_extraction::CExtraction::~CExtraction() */

void __thiscall expert_extraction::CExtraction::~CExtraction(CExtraction *this)

{
  *(undefined ***)this = &PTR__CExtraction_08c7ddc8;
  operator_delete(*(void **)(this + 4));
  return;
}

```

---

## ~CExtraction_084a29d6

```asm
// === 084a29d6 expert_extraction::CExtraction::~CExtraction  [0x084a29d6-0x84a29f3] ===
 84a29d6:	55                   	push   %ebp
 84a29d7:	89 e5                	mov    %esp,%ebp
 84a29d9:	83 ec 18             	sub    $0x18,%esp
 84a29dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84a29df:	89 04 24             	mov    %eax,(%esp)
 84a29e2:	e8 bb ff ff ff       	call   84a29a2 <_ZN17expert_extraction11CExtractionD1Ev>
 84a29e7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a29ea:	89 04 24             	mov    %eax,(%esp)
 84a29ed:	e8 fe 1a 28 00       	call   87244f0 <_ZdlPv>
 84a29f2:	c9                   	leave
 84a29f3:	c3                   	ret

```

```c
// expert_extraction::CExtraction::~CExtraction @ 0x84a29d6

/* expert_extraction::CExtraction::~CExtraction() */

void __thiscall expert_extraction::CExtraction::~CExtraction(CExtraction *this)

{
  ~CExtraction(this);
  operator_delete(this);
  return;
}

```

