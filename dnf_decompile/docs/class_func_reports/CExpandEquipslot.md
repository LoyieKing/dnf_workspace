# CExpandEquipslot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## CExpandEquipslot

```asm
// === 084992c0 CExpandEquipslot::CExpandEquipslot  [0x084992c0-0x849935b] ===
 84992c0:	55                   	push   %ebp
 84992c1:	89 e5                	mov    %esp,%ebp
 84992c3:	56                   	push   %esi
 84992c4:	53                   	push   %ebx
 84992c5:	83 ec 10             	sub    $0x10,%esp
 84992c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84992cb:	89 04 24             	mov    %eax,(%esp)
 84992ce:	e8 e7 f9 c2 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 84992d3:	8b 45 08             	mov    0x8(%ebp),%eax
 84992d6:	c7 00 08 b2 c7 08    	movl   $0x8c7b208,(%eax)
 84992dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84992df:	83 c0 05             	add    $0x5,%eax
 84992e2:	89 c3                	mov    %eax,%ebx
 84992e4:	be 0b 00 00 00       	mov    $0xb,%esi
 84992e9:	eb 0e                	jmp    84992f9 <_ZN16CExpandEquipslotC1Ev+0x39>
 84992eb:	89 1c 24             	mov    %ebx,(%esp)
 84992ee:	e8 61 25 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84992f3:	83 c3 3d             	add    $0x3d,%ebx
 84992f6:	83 ee 01             	sub    $0x1,%esi
 84992f9:	83 fe ff             	cmp    $0xffffffff,%esi
 84992fc:	0f 95 c0             	setne  %al
 84992ff:	84 c0                	test   %al,%al
 8499301:	75 e8                	jne    84992eb <_ZN16CExpandEquipslotC1Ev+0x2b>
 8499303:	8b 45 08             	mov    0x8(%ebp),%eax
 8499306:	05 e1 02 00 00       	add    $0x2e1,%eax
 849930b:	89 c3                	mov    %eax,%ebx
 849930d:	be 0b 00 00 00       	mov    $0xb,%esi
 8499312:	eb 0e                	jmp    8499322 <_ZN16CExpandEquipslotC1Ev+0x62>
 8499314:	89 1c 24             	mov    %ebx,(%esp)
 8499317:	e8 38 25 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 849931c:	83 c3 3d             	add    $0x3d,%ebx
 849931f:	83 ee 01             	sub    $0x1,%esi
 8499322:	83 fe ff             	cmp    $0xffffffff,%esi
 8499325:	0f 95 c0             	setne  %al
 8499328:	84 c0                	test   %al,%al
 849932a:	75 e8                	jne    8499314 <_ZN16CExpandEquipslotC1Ev+0x54>
 849932c:	8b 45 08             	mov    0x8(%ebp),%eax
 849932f:	05 bd 05 00 00       	add    $0x5bd,%eax
 8499334:	89 c3                	mov    %eax,%ebx
 8499336:	be 0b 00 00 00       	mov    $0xb,%esi
 849933b:	eb 0e                	jmp    849934b <_ZN16CExpandEquipslotC1Ev+0x8b>
 849933d:	89 1c 24             	mov    %ebx,(%esp)
 8499340:	e8 0f 25 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8499345:	83 c3 3d             	add    $0x3d,%ebx
 8499348:	83 ee 01             	sub    $0x1,%esi
 849934b:	83 fe ff             	cmp    $0xffffffff,%esi
 849934e:	0f 95 c0             	setne  %al
 8499351:	84 c0                	test   %al,%al
 8499353:	75 e8                	jne    849933d <_ZN16CExpandEquipslotC1Ev+0x7d>
 8499355:	83 c4 10             	add    $0x10,%esp
 8499358:	5b                   	pop    %ebx
 8499359:	5e                   	pop    %esi
 849935a:	5d                   	pop    %ebp
 849935b:	c3                   	ret

```

```c
// CExpandEquipslot::CExpandEquipslot @ 0x84992c0

/* CExpandEquipslot::CExpandEquipslot() */

void __thiscall CExpandEquipslot::CExpandEquipslot(CExpandEquipslot *this)

{
  Inven_Item *pIVar1;
  int iVar2;
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7b208;
  pIVar1 = (Inven_Item *)(this + 5);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  pIVar1 = (Inven_Item *)(this + 0x2e1);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  pIVar1 = (Inven_Item *)(this + 0x5bd);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  return;
}

```

---

## Change_Equip

```asm
// === 08499a48 CExpandEquipslot::Change_Equip  [0x08499a48-0x8499d19] ===
 8499a48:	55                   	push   %ebp
 8499a49:	89 e5                	mov    %esp,%ebp
 8499a4b:	53                   	push   %ebx
 8499a4c:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 8499a52:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8499a56:	75 36                	jne    8499a8e <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x46>
 8499a58:	c7 44 24 10 a8 a3 c7 	movl   $0x8c7a3a8,0x10(%esp)
 8499a5f:	08 
 8499a60:	c7 44 24 0c d8 00 00 	movl   $0xd8,0xc(%esp)
 8499a67:	00 
 8499a68:	c7 44 24 08 40 b1 c7 	movl   $0x8c7b140,0x8(%esp)
 8499a6f:	08 
 8499a70:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 8499a77:	08 
 8499a78:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8499a7f:	e8 86 a1 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8499a84:	b8 01 00 00 00       	mov    $0x1,%eax
 8499a89:	e9 86 02 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499a91:	89 04 24             	mov    %eax,(%esp)
 8499a94:	e8 f3 08 c4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8499a99:	83 f8 02             	cmp    $0x2,%eax
 8499a9c:	0f 9e c0             	setle  %al
 8499a9f:	84 c0                	test   %al,%al
 8499aa1:	74 36                	je     8499ad9 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x91>
 8499aa3:	c7 44 24 10 cc a3 c7 	movl   $0x8c7a3cc,0x10(%esp)
 8499aaa:	08 
 8499aab:	c7 44 24 0c de 00 00 	movl   $0xde,0xc(%esp)
 8499ab2:	00 
 8499ab3:	c7 44 24 08 40 b1 c7 	movl   $0x8c7b140,0x8(%esp)
 8499aba:	08 
 8499abb:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 8499ac2:	08 
 8499ac3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8499aca:	e8 3b a1 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8499acf:	b8 13 00 00 00       	mov    $0x13,%eax
 8499ad4:	e9 3b 02 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499adc:	89 04 24             	mov    %eax,(%esp)
 8499adf:	e8 aa 07 c4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8499ae4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8499ae7:	8b 45 10             	mov    0x10(%ebp),%eax
 8499aea:	85 c0                	test   %eax,%eax
 8499aec:	0f 85 1d 02 00 00    	jne    8499d0f <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2c7>
 8499af2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499af5:	89 04 24             	mov    %eax,(%esp)
 8499af8:	e8 81 07 c4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8499afd:	8b 55 14             	mov    0x14(%ebp),%edx
 8499b00:	89 54 24 08          	mov    %edx,0x8(%esp)
 8499b04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499b0b:	00 
 8499b0c:	89 04 24             	mov    %eax,(%esp)
 8499b0f:	e8 ca 26 06 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8499b14:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8499b17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8499b1a:	8b 40 02             	mov    0x2(%eax),%eax
 8499b1d:	89 c3                	mov    %eax,%ebx
 8499b1f:	e8 77 26 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8499b24:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8499b28:	89 04 24             	mov    %eax,(%esp)
 8499b2b:	e8 02 5f ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8499b30:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8499b33:	8b 45 18             	mov    0x18(%ebp),%eax
 8499b36:	83 f8 12             	cmp    $0x12,%eax
 8499b39:	0f 85 c9 01 00 00    	jne    8499d08 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2c0>
 8499b3f:	8b 45 14             	mov    0x14(%ebp),%eax
 8499b42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499b46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499b4d:	00 
 8499b4e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8499b51:	89 04 24             	mov    %eax,(%esp)
 8499b54:	e8 c5 14 06 00       	call   84fb01e <_ZNK10CInventory14CheckValidSlotEii>
 8499b59:	83 f0 01             	xor    $0x1,%eax
 8499b5c:	84 c0                	test   %al,%al
 8499b5e:	74 0a                	je     8499b6a <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x122>
 8499b60:	b8 01 00 00 00       	mov    $0x1,%eax
 8499b65:	e9 aa 01 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499b6a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8499b6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499b71:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8499b78:	00 
 8499b79:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8499b7c:	89 04 24             	mov    %eax,(%esp)
 8499b7f:	e8 9a 14 06 00       	call   84fb01e <_ZNK10CInventory14CheckValidSlotEii>
 8499b84:	83 f0 01             	xor    $0x1,%eax
 8499b87:	84 c0                	test   %al,%al
 8499b89:	74 0a                	je     8499b95 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x14d>
 8499b8b:	b8 01 00 00 00       	mov    $0x1,%eax
 8499b90:	e9 7f 01 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499b95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499b98:	89 04 24             	mov    %eax,(%esp)
 8499b9b:	e8 dc 5e d9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 8499ba0:	84 c0                	test   %al,%al
 8499ba2:	0f 94 c0             	sete   %al
 8499ba5:	84 c0                	test   %al,%al
 8499ba7:	74 3a                	je     8499be3 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x19b>
 8499ba9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8499bad:	74 21                	je     8499bd0 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x188>
 8499baf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499bb6:	00 
 8499bb7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8499bba:	89 04 24             	mov    %eax,(%esp)
 8499bbd:	e8 ba 2c d9 ff       	call   822c87c <_ZNK5CItem13IsEnableWorldE15ENUM_WORLD_TYPE>
 8499bc2:	83 f0 01             	xor    $0x1,%eax
 8499bc5:	84 c0                	test   %al,%al
 8499bc7:	74 07                	je     8499bd0 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x188>
 8499bc9:	b8 01 00 00 00       	mov    $0x1,%eax
 8499bce:	eb 05                	jmp    8499bd5 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x18d>
 8499bd0:	b8 00 00 00 00       	mov    $0x0,%eax
 8499bd5:	84 c0                	test   %al,%al
 8499bd7:	74 0a                	je     8499be3 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x19b>
 8499bd9:	b8 01 00 00 00       	mov    $0x1,%eax
 8499bde:	e9 31 01 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499be3:	8d 85 6a ff ff ff    	lea    -0x96(%ebp),%eax
 8499be9:	8b 55 14             	mov    0x14(%ebp),%edx
 8499bec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8499bf0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8499bf7:	00 
 8499bf8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8499bfb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8499bff:	89 04 24             	mov    %eax,(%esp)
 8499c02:	e8 11 1d 06 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8499c07:	83 ec 04             	sub    $0x4,%esp
 8499c0a:	0f b6 85 6a ff ff ff 	movzbl -0x96(%ebp),%eax
 8499c11:	84 c0                	test   %al,%al
 8499c13:	74 2d                	je     8499c42 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x1fa>
 8499c15:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8499c1a:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8499c21:	00 
 8499c22:	8b 55 0c             	mov    0xc(%ebp),%edx
 8499c25:	89 54 24 04          	mov    %edx,0x4(%esp)
 8499c29:	89 04 24             	mov    %eax,(%esp)
 8499c2c:	e8 d1 ed de ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8499c31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8499c34:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8499c38:	74 08                	je     8499c42 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x1fa>
 8499c3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8499c3d:	e9 d2 00 00 00       	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499c42:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8499c46:	74 61                	je     8499ca9 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x261>
 8499c48:	8b 45 14             	mov    0x14(%ebp),%eax
 8499c4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499c4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499c56:	00 
 8499c57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499c5a:	89 04 24             	mov    %eax,(%esp)
 8499c5d:	e8 e0 cc 1a 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8499c62:	84 c0                	test   %al,%al
 8499c64:	74 33                	je     8499c99 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x251>
 8499c66:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8499c69:	8b 55 14             	mov    0x14(%ebp),%edx
 8499c6c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8499c70:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8499c77:	00 
 8499c78:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8499c7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8499c7f:	89 04 24             	mov    %eax,(%esp)
 8499c82:	e8 91 1c 06 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8499c87:	83 ec 04             	sub    $0x4,%esp
 8499c8a:	0f b6 45 a7          	movzbl -0x59(%ebp),%eax
 8499c8e:	84 c0                	test   %al,%al
 8499c90:	74 07                	je     8499c99 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x251>
 8499c92:	b8 01 00 00 00       	mov    $0x1,%eax
 8499c97:	eb 05                	jmp    8499c9e <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x256>
 8499c99:	b8 00 00 00 00       	mov    $0x0,%eax
 8499c9e:	84 c0                	test   %al,%al
 8499ca0:	74 07                	je     8499ca9 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x261>
 8499ca2:	b8 d5 00 00 00       	mov    $0xd5,%eax
 8499ca7:	eb 6b                	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499ca9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8499cb0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8499cb3:	83 e8 0a             	sub    $0xa,%eax
 8499cb6:	89 44 24 14          	mov    %eax,0x14(%esp)
 8499cba:	8b 45 18             	mov    0x18(%ebp),%eax
 8499cbd:	89 44 24 10          	mov    %eax,0x10(%esp)
 8499cc1:	8b 45 14             	mov    0x14(%ebp),%eax
 8499cc4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8499cc8:	8b 45 10             	mov    0x10(%ebp),%eax
 8499ccb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499cd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8499cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8499cd9:	89 04 24             	mov    %eax,(%esp)
 8499cdc:	e8 a3 02 00 00       	call   8499f84 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii>
 8499ce1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8499ce4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8499ce8:	0f 95 c0             	setne  %al
 8499ceb:	84 c0                	test   %al,%al
 8499ced:	74 05                	je     8499cf4 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2ac>
 8499cef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8499cf2:	eb 20                	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8499cf7:	89 04 24             	mov    %eax,(%esp)
 8499cfa:	e8 c5 ee c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8499cff:	90                   	nop
 8499d00:	90                   	nop
 8499d01:	b8 00 00 00 00       	mov    $0x0,%eax
 8499d06:	eb 0c                	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499d08:	b8 01 00 00 00       	mov    $0x1,%eax
 8499d0d:	eb 05                	jmp    8499d14 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii+0x2cc>
 8499d0f:	b8 01 00 00 00       	mov    $0x1,%eax
 8499d14:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8499d17:	c9                   	leave
 8499d18:	c3                   	ret
 8499d19:	90                   	nop

```

```c
// CExpandEquipslot::Change_Equip @ 0x8499a48

/* CExpandEquipslot::Change_Equip(CUser*, int, int, int, int) */

int __thiscall
CExpandEquipslot::Change_Equip
          (CExpandEquipslot *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CDataManager *this_01;
  char local_9a [61];
  char local_5d [61];
  CInventory *local_20;
  int local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp",
               "int CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)",0xd8,
               "Fail Change_Equip : pUser is NULL");
    local_14 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)",0xde,
                 "Fail Change_Equip : pUser is not valid state");
      local_14 = 0x13;
    }
    else {
      local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      if (param_2 == 0) {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_1c = CInventory::GetInvenRef(this_00,1,param_3);
        iVar3 = *(int *)(local_1c + 2);
        this_01 = (CDataManager *)G_CDataManager();
        local_18 = (CItem *)CDataManager::find_item(this_01,iVar3);
        if (param_4 == 0x12) {
          cVar2 = CInventory::CheckValidSlot(local_20,1,param_3);
          if (cVar2 == '\x01') {
            cVar2 = CInventory::CheckValidSlot(local_20,5,param_5);
            if (cVar2 == '\x01') {
              cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
              if (cVar2 == '\0') {
                if ((local_18 == (CItem *)0x0) ||
                   (cVar2 = CItem::IsEnableWorld(local_18,1), cVar2 == '\x01')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  return 1;
                }
              }
              iVar3 = param_3;
              CInventory::GetInvenSlot((int)local_9a,(int)local_20);
              if ((local_9a[0] == '\0') ||
                 (local_14 = CSecu_ProtectionField::Check
                                       (GlobalData::s_pSecuProtectionField,param_1,0x16,iVar3),
                 local_10 = local_14, local_14 == 0)) {
                if (param_1 != (CUser *)0x0) {
                  cVar2 = CUser::CheckItemLock(param_1,1,param_3);
                  if ((cVar2 == '\0') ||
                     (CInventory::GetInvenSlot((int)local_5d,(int)local_20), local_5d[0] == '\0')) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    return 0xd5;
                  }
                }
                local_14 = 0;
                local_14 = Move_Item(this,param_1,0,param_3,0x12,param_5 + -10);
                if (local_14 == 0) {
                  charac_expand::CData::alter((CData *)this);
                  local_14 = 0;
                }
              }
            }
            else {
              local_14 = 1;
            }
          }
          else {
            local_14 = 1;
          }
        }
        else {
          local_14 = 1;
        }
      }
      else {
        local_14 = 1;
      }
    }
  }
  return local_14;
}

```

---

## EquipslotSwitch

```asm
// === 0849943e CExpandEquipslot::EquipslotSwitch  [0x0849943e-0x849983d] ===
 849943e:	55                   	push   %ebp
 849943f:	89 e5                	mov    %esp,%ebp
 8499441:	56                   	push   %esi
 8499442:	53                   	push   %ebx
 8499443:	81 ec 30 04 00 00    	sub    $0x430,%esp
 8499449:	8b 4d 10             	mov    0x10(%ebp),%ecx
 849944c:	8b 55 14             	mov    0x14(%ebp),%edx
 849944f:	8b 45 18             	mov    0x18(%ebp),%eax
 8499452:	88 8d f4 fb ff ff    	mov    %cl,-0x40c(%ebp)
 8499458:	88 95 f0 fb ff ff    	mov    %dl,-0x410(%ebp)
 849945e:	88 85 ec fb ff ff    	mov    %al,-0x414(%ebp)
 8499464:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8499468:	75 36                	jne    84994a0 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x62>
 849946a:	c7 44 24 10 e0 a2 c7 	movl   $0x8c7a2e0,0x10(%esp)
 8499471:	08 
 8499472:	c7 44 24 0c 44 00 00 	movl   $0x44,0xc(%esp)
 8499479:	00 
 849947a:	c7 44 24 08 c0 b1 c7 	movl   $0x8c7b1c0,0x8(%esp)
 8499481:	08 
 8499482:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 8499489:	08 
 849948a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8499491:	e8 74 a7 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8499496:	b8 01 00 00 00       	mov    $0x1,%eax
 849949b:	e9 93 03 00 00       	jmp    8499833 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3f5>
 84994a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84994a3:	89 04 24             	mov    %eax,(%esp)
 84994a6:	e8 e1 0e c4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84994ab:	83 f8 02             	cmp    $0x2,%eax
 84994ae:	0f 9e c0             	setle  %al
 84994b1:	84 c0                	test   %al,%al
 84994b3:	74 36                	je     84994eb <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0xad>
 84994b5:	c7 44 24 10 1c a3 c7 	movl   $0x8c7a31c,0x10(%esp)
 84994bc:	08 
 84994bd:	c7 44 24 0c 4a 00 00 	movl   $0x4a,0xc(%esp)
 84994c4:	00 
 84994c5:	c7 44 24 08 c0 b1 c7 	movl   $0x8c7b1c0,0x8(%esp)
 84994cc:	08 
 84994cd:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 84994d4:	08 
 84994d5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84994dc:	e8 29 a7 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84994e1:	b8 13 00 00 00       	mov    $0x13,%eax
 84994e6:	e9 48 03 00 00       	jmp    8499833 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3f5>
 84994eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84994ee:	89 04 24             	mov    %eax,(%esp)
 84994f1:	e8 86 65 d9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 84994f6:	88 45 e2             	mov    %al,-0x1e(%ebp)
 84994f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84994fc:	89 04 24             	mov    %eax,(%esp)
 84994ff:	e8 9c 65 d9 ff       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 8499504:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8499507:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 849950b:	3a 85 f0 fb ff ff    	cmp    -0x410(%ebp),%al
 8499511:	75 0c                	jne    849951f <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0xe1>
 8499513:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8499517:	3a 85 ec fb ff ff    	cmp    -0x414(%ebp),%al
 849951d:	74 0a                	je     8499529 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0xeb>
 849951f:	b8 01 00 00 00       	mov    $0x1,%eax
 8499524:	e9 0a 03 00 00       	jmp    8499833 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3f5>
 8499529:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8499530:	00 
 8499531:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499534:	89 04 24             	mov    %eax,(%esp)
 8499537:	e8 48 40 c4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 849953c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849953f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8499542:	89 04 24             	mov    %eax,(%esp)
 8499545:	e8 5a 15 00 00       	call   849aaa4 <_ZN9item_lock9CItemLock17GetItemLockRefVecEv>
 849954a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849954d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8499553:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8499556:	89 54 24 04          	mov    %edx,0x4(%esp)
 849955a:	89 04 24             	mov    %eax,(%esp)
 849955d:	e8 82 15 00 00       	call   849aae4 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE5beginEv>
 8499562:	83 ec 04             	sub    $0x4,%esp
 8499565:	eb 74                	jmp    84995db <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x19d>
 8499567:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 849956d:	89 04 24             	mov    %eax,(%esp)
 8499570:	e8 19 16 00 00       	call   849ab8e <_ZNK9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEdeEv>
 8499575:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8499578:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849957b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 849957f:	66 83 f8 09          	cmp    $0x9,%ax
 8499583:	76 33                	jbe    84995b8 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x17a>
 8499585:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8499588:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 849958c:	66 83 f8 15          	cmp    $0x15,%ax
 8499590:	77 26                	ja     84995b8 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x17a>
 8499592:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8499595:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8499599:	3c 03                	cmp    $0x3,%al
 849959b:	75 09                	jne    84995a6 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x168>
 849959d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84995a0:	c6 40 01 12          	movb   $0x12,0x1(%eax)
 84995a4:	eb 12                	jmp    84995b8 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x17a>
 84995a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84995a9:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84995ad:	3c 12                	cmp    $0x12,%al
 84995af:	75 07                	jne    84995b8 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x17a>
 84995b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84995b4:	c6 40 01 03          	movb   $0x3,0x1(%eax)
 84995b8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 84995be:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84995c5:	00 
 84995c6:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 84995cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84995d0:	89 04 24             	mov    %eax,(%esp)
 84995d3:	e8 82 15 00 00       	call   849ab5a <_ZN9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEppEi>
 84995d8:	83 ec 04             	sub    $0x4,%esp
 84995db:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84995e1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84995e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84995e8:	89 04 24             	mov    %eax,(%esp)
 84995eb:	e8 18 15 00 00       	call   849ab08 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE3endEv>
 84995f0:	83 ec 04             	sub    $0x4,%esp
 84995f3:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84995f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84995fd:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8499603:	89 04 24             	mov    %eax,(%esp)
 8499606:	e8 23 15 00 00       	call   849ab2e <_ZN9__gnu_cxxneIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 849960b:	84 c0                	test   %al,%al
 849960d:	0f 85 54 ff ff ff    	jne    8499567 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x129>
 8499613:	80 bd f4 fb ff ff 00 	cmpb   $0x0,-0x40c(%ebp)
 849961a:	0f 85 0e 02 00 00    	jne    849982e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3f0>
 8499620:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499623:	89 04 24             	mov    %eax,(%esp)
 8499626:	e8 63 0c c4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849962b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849962e:	8d 85 06 fc ff ff    	lea    -0x3fa(%ebp),%eax
 8499634:	89 c3                	mov    %eax,%ebx
 8499636:	be 0b 00 00 00       	mov    $0xb,%esi
 849963b:	eb 0e                	jmp    849964b <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x20d>
 849963d:	89 1c 24             	mov    %ebx,(%esp)
 8499640:	e8 0f 22 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8499645:	83 c3 3d             	add    $0x3d,%ebx
 8499648:	83 ee 01             	sub    $0x1,%esi
 849964b:	83 fe ff             	cmp    $0xffffffff,%esi
 849964e:	0f 95 c0             	setne  %al
 8499651:	84 c0                	test   %al,%al
 8499653:	75 e8                	jne    849963d <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x1ff>
 8499655:	8d 85 1f ff ff ff    	lea    -0xe1(%ebp),%eax
 849965b:	89 04 24             	mov    %eax,(%esp)
 849965e:	e8 f1 21 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8499663:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 8499669:	89 04 24             	mov    %eax,(%esp)
 849966c:	e8 e3 21 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8499671:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8499677:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 849967e:	00 
 849967f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8499686:	00 
 8499687:	8b 55 f0             	mov    -0x10(%ebp),%edx
 849968a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849968e:	89 04 24             	mov    %eax,(%esp)
 8499691:	e8 82 22 06 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8499696:	83 ec 04             	sub    $0x4,%esp
 8499699:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 849969f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84996a3:	8d 85 1f ff ff ff    	lea    -0xe1(%ebp),%eax
 84996a9:	89 04 24             	mov    %eax,(%esp)
 84996ac:	e8 7d 0f cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 84996b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84996b4:	83 c0 42             	add    $0x42,%eax
 84996b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84996bb:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 84996c1:	89 04 24             	mov    %eax,(%esp)
 84996c4:	e8 65 0f cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 84996c9:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 84996d0:	00 
 84996d1:	8d 85 06 fc ff ff    	lea    -0x3fa(%ebp),%eax
 84996d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84996db:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84996e2:	00 
 84996e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84996e6:	89 04 24             	mov    %eax,(%esp)
 84996e9:	e8 34 1b 06 00       	call   84fb222 <_ZNK10CInventory12GetInvenDataEiPvi>
 84996ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84996f1:	83 c0 05             	add    $0x5,%eax
 84996f4:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 84996fb:	00 
 84996fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499700:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8499707:	00 
 8499708:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849970b:	89 04 24             	mov    %eax,(%esp)
 849970e:	e8 07 1a 06 00       	call   84fb11a <_ZN10CInventory12SetInvenDataEiPvi>
 8499713:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 849971a:	00 
 849971b:	8d 85 06 fc ff ff    	lea    -0x3fa(%ebp),%eax
 8499721:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499725:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849972c:	00 
 849972d:	8b 45 08             	mov    0x8(%ebp),%eax
 8499730:	89 04 24             	mov    %eax,(%esp)
 8499733:	e8 4e 02 00 00       	call   8499986 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi>
 8499738:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849973b:	8d 90 bb 02 00 00    	lea    0x2bb(%eax),%edx
 8499741:	8d 85 1f ff ff ff    	lea    -0xe1(%ebp),%eax
 8499747:	89 44 24 04          	mov    %eax,0x4(%esp)
 849974b:	89 14 24             	mov    %edx,(%esp)
 849974e:	e8 db 0e cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8499753:	8b 45 08             	mov    0x8(%ebp),%eax
 8499756:	8d 50 42             	lea    0x42(%eax),%edx
 8499759:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 849975f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8499763:	89 14 24             	mov    %edx,(%esp)
 8499766:	e8 c3 0e cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849976b:	8b 45 0c             	mov    0xc(%ebp),%eax
 849976e:	89 04 24             	mov    %eax,(%esp)
 8499771:	e8 d6 b9 1b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8499776:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8499779:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849977d:	74 0b                	je     849978a <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x34c>
 849977f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8499782:	89 04 24             	mov    %eax,(%esp)
 8499785:	e8 e4 f9 11 00       	call   85b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>
 849978a:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 849978d:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 8499794:	00 
 8499795:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849979c:	00 
 849979d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84997a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84997a4:	89 04 24             	mov    %eax,(%esp)
 84997a7:	e8 6c 21 06 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84997ac:	83 ec 04             	sub    $0x4,%esp
 84997af:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84997b2:	85 c0                	test   %eax,%eax
 84997b4:	75 0a                	jne    84997c0 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x382>
 84997b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84997b9:	8b 40 07             	mov    0x7(%eax),%eax
 84997bc:	85 c0                	test   %eax,%eax
 84997be:	74 07                	je     84997c7 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x389>
 84997c0:	b8 01 00 00 00       	mov    $0x1,%eax
 84997c5:	eb 05                	jmp    84997cc <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x38e>
 84997c7:	b8 00 00 00 00       	mov    $0x0,%eax
 84997cc:	84 c0                	test   %al,%al
 84997ce:	74 23                	je     84997f3 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3b5>
 84997d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84997d3:	05 f4 96 07 00       	add    $0x796f4,%eax
 84997d8:	89 04 24             	mov    %eax,(%esp)
 84997db:	e8 fa 63 d9 ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 84997e0:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84997e7:	00 
 84997e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84997eb:	89 04 24             	mov    %eax,(%esp)
 84997ee:	e8 21 45 1c 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 84997f3:	80 7d e2 00          	cmpb   $0x0,-0x1e(%ebp)
 84997f7:	75 15                	jne    849980e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3d0>
 84997f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84997fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499803:	00 
 8499804:	89 04 24             	mov    %eax,(%esp)
 8499807:	e8 a4 12 00 00       	call   849aab0 <_ZN15CUserCharacInfo28setCurChannelEquipslotSwitchEc>
 849980c:	eb 19                	jmp    8499827 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3e9>
 849980e:	80 7d e2 01          	cmpb   $0x1,-0x1e(%ebp)
 8499812:	75 13                	jne    8499827 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3e9>
 8499814:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499817:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849981e:	00 
 849981f:	89 04 24             	mov    %eax,(%esp)
 8499822:	e8 89 12 00 00       	call   849aab0 <_ZN15CUserCharacInfo28setCurChannelEquipslotSwitchEc>
 8499827:	b8 00 00 00 00       	mov    $0x0,%eax
 849982c:	eb 05                	jmp    8499833 <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc+0x3f5>
 849982e:	b8 01 00 00 00       	mov    $0x1,%eax
 8499833:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8499836:	83 c4 00             	add    $0x0,%esp
 8499839:	5b                   	pop    %ebx
 849983a:	5e                   	pop    %esi
 849983b:	5d                   	pop    %ebp
 849983c:	c3                   	ret
 849983d:	90                   	nop

```

```c
// CExpandEquipslot::EquipslotSwitch @ 0x849943e

/* CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char) */

undefined4 __thiscall
CExpandEquipslot::EquipslotSwitch
          (CExpandEquipslot *this,CUser *param_1,char param_2,char param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  Inven_Item *this_00;
  Inven_Item local_3fe [732];
  Inven_Item local_122 [61];
  Inven_Item local_e5 [61];
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_a8 [4];
  __normal_iterator local_a4 [4];
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_a0 [4];
  Inven_Item local_9c [61];
  undefined1 local_5f [2];
  int local_5d;
  char local_22;
  char local_21;
  CItemLock *local_20;
  undefined4 local_1c;
  int local_18;
  CInventory *local_14;
  CParty *local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp",
               "int CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)",0x44,
               "Fail Equipslot Switch : pUser is NULL");
    uVar2 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)",0x4a,
                 "Fail Equipslot Switch : pUser is not valid state");
      uVar2 = 0x13;
    }
    else {
      local_22 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      local_21 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      if ((local_22 == param_3) && (local_21 == param_4)) {
        local_20 = (CItemLock *)CUser::GetCharacExpandData(param_1,2);
        local_1c = item_lock::CItemLock::GetItemLockRefVec(local_20);
        std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
        while( true ) {
          std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
          bVar1 = __gnu_cxx::operator!=(local_a8,local_a4);
          if (!bVar1) break;
          local_18 = __gnu_cxx::
                     __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                     ::operator*(local_a8);
          if ((9 < *(ushort *)(local_18 + 2)) && (*(ushort *)(local_18 + 2) < 0x16)) {
            if (*(char *)(local_18 + 1) == '\x03') {
              *(undefined1 *)(local_18 + 1) = 0x12;
            }
            else if (*(char *)(local_18 + 1) == '\x12') {
              *(undefined1 *)(local_18 + 1) = 3;
            }
          }
          __gnu_cxx::
          __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
          ::operator++(local_a0,(int)local_a8);
        }
        if (param_2 == '\0') {
          local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          this_00 = local_3fe;
          for (iVar3 = 0xb; iVar3 != -1; iVar3 = iVar3 + -1) {
            Inven_Item::Inven_Item(this_00);
            this_00 = this_00 + 0x3d;
          }
          Inven_Item::Inven_Item(local_e5);
          Inven_Item::Inven_Item(local_122);
          CInventory::GetInvenSlot((int)local_9c,(int)local_14);
          Inven_Item::setCopy(local_e5,local_9c);
          Inven_Item::setCopy(local_122,(Inven_Item *)(this + 0x42));
          CInventory::GetInvenData(local_14,5,local_3fe,0x2dc);
          CInventory::SetInvenData(local_14,5,this + 5,0x2dc);
          SetExpandEquipslot(this,1,local_3fe,0x2dc);
          Inven_Item::setCopy((Inven_Item *)(local_14 + 699),local_e5);
          Inven_Item::setCopy((Inven_Item *)(this + 0x42),local_122);
          local_10 = (CParty *)CUser::GetParty(param_1);
          if (local_10 != (CParty *)0x0) {
            CParty::Reset_party_overlapped_drop_ratio(local_10);
          }
          CInventory::GetInvenSlot((int)local_5f,(int)local_14);
          if ((local_5d == 0) && (*(int *)(this + 7) == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
            CUser::send_equip(param_1,10);
          }
          if (local_22 == '\0') {
            CUserCharacInfo::setCurChannelEquipslotSwitch((CUserCharacInfo *)param_1,'\x01');
          }
          else if (local_22 == '\x01') {
            CUserCharacInfo::setCurChannelEquipslotSwitch((CUserCharacInfo *)param_1,'\0');
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

```

---

## FindItemLock

```asm
// === 08499f0a CExpandEquipslot::FindItemLock  [0x08499f0a-0x8499f83] ===
 8499f0a:	55                   	push   %ebp
 8499f0b:	89 e5                	mov    %esp,%ebp
 8499f0d:	83 ec 28             	sub    $0x28,%esp
 8499f10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499f13:	88 45 f4             	mov    %al,-0xc(%ebp)
 8499f16:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f19:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8499f1f:	eb 4d                	jmp    8499f6e <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi+0x64>
 8499f21:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f24:	8b 00                	mov    (%eax),%eax
 8499f26:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8499f29:	83 c0 10             	add    $0x10,%eax
 8499f2c:	03 45 08             	add    0x8(%ebp),%eax
 8499f2f:	83 c0 06             	add    $0x6,%eax
 8499f32:	89 04 24             	mov    %eax,(%esp)
 8499f35:	e8 6e 16 df ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8499f3a:	3a 45 f4             	cmp    -0xc(%ebp),%al
 8499f3d:	0f 94 c0             	sete   %al
 8499f40:	84 c0                	test   %al,%al
 8499f42:	74 1d                	je     8499f61 <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi+0x57>
 8499f44:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f47:	8b 00                	mov    (%eax),%eax
 8499f49:	8d 50 0a             	lea    0xa(%eax),%edx
 8499f4c:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f4f:	89 10                	mov    %edx,(%eax)
 8499f51:	8b 45 10             	mov    0x10(%ebp),%eax
 8499f54:	c7 00 12 00 00 00    	movl   $0x12,(%eax)
 8499f5a:	b8 01 00 00 00       	mov    $0x1,%eax
 8499f5f:	eb 21                	jmp    8499f82 <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi+0x78>
 8499f61:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f64:	8b 00                	mov    (%eax),%eax
 8499f66:	8d 50 01             	lea    0x1(%eax),%edx
 8499f69:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f6c:	89 10                	mov    %edx,(%eax)
 8499f6e:	8b 45 14             	mov    0x14(%ebp),%eax
 8499f71:	8b 00                	mov    (%eax),%eax
 8499f73:	83 f8 0b             	cmp    $0xb,%eax
 8499f76:	0f 9e c0             	setle  %al
 8499f79:	84 c0                	test   %al,%al
 8499f7b:	75 a4                	jne    8499f21 <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi+0x17>
 8499f7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8499f82:	c9                   	leave
 8499f83:	c3                   	ret

```

```c
// CExpandEquipslot::FindItemLock @ 0x8499f0a

/* CExpandEquipslot::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CExpandEquipslot::FindItemLock
          (CExpandEquipslot *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  
  *param_3 = 0;
  while( true ) {
    if (0xb < *param_3) {
      return 0;
    }
    uVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(this + *param_3 * 0x3d + 0x16));
    if (uVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  *param_3 = *param_3 + 10;
  *(undefined4 *)param_2 = 0x12;
  return 1;
}

```

---

## GetInvenRefR

```asm
// === 08499e90 CExpandEquipslot::GetInvenRefR  [0x08499e90-0x8499ec5] ===
 8499e90:	55                   	push   %ebp
 8499e91:	89 e5                	mov    %esp,%ebp
 8499e93:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 8499e97:	7e 06                	jle    8499e9f <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi+0xf>
 8499e99:	83 7d 10 16          	cmpl   $0x16,0x10(%ebp)
 8499e9d:	7e 07                	jle    8499ea6 <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi+0x16>
 8499e9f:	b8 00 00 00 00       	mov    $0x0,%eax
 8499ea4:	eb 1e                	jmp    8499ec4 <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi+0x34>
 8499ea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499ea9:	83 f8 05             	cmp    $0x5,%eax
 8499eac:	75 11                	jne    8499ebf <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi+0x2f>
 8499eae:	8b 45 10             	mov    0x10(%ebp),%eax
 8499eb1:	83 e8 0a             	sub    $0xa,%eax
 8499eb4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8499eb7:	03 45 08             	add    0x8(%ebp),%eax
 8499eba:	83 c0 05             	add    $0x5,%eax
 8499ebd:	eb 05                	jmp    8499ec4 <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi+0x34>
 8499ebf:	b8 00 00 00 00       	mov    $0x0,%eax
 8499ec4:	5d                   	pop    %ebp
 8499ec5:	c3                   	ret

```

```c
// CExpandEquipslot::GetInvenRefR @ 0x8499e90

/* CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const */

CExpandEquipslot * __thiscall
CExpandEquipslot::GetInvenRefR(CExpandEquipslot *this,int param_2,int param_3)

{
  if ((param_3 < 10) || (0x16 < param_3)) {
    this = (CExpandEquipslot *)0x0;
  }
  else if (param_2 == 5) {
    this = this + (param_3 + -10) * 0x3d + 5;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}

```

---

## GetInvenRefW

```asm
// === 08499ec6 CExpandEquipslot::GetInvenRefW  [0x08499ec6-0x8499f09] ===
 8499ec6:	55                   	push   %ebp
 8499ec7:	89 e5                	mov    %esp,%ebp
 8499ec9:	83 ec 18             	sub    $0x18,%esp
 8499ecc:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 8499ed0:	7e 06                	jle    8499ed8 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi+0x12>
 8499ed2:	83 7d 10 16          	cmpl   $0x16,0x10(%ebp)
 8499ed6:	7e 07                	jle    8499edf <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi+0x19>
 8499ed8:	b8 00 00 00 00       	mov    $0x0,%eax
 8499edd:	eb 29                	jmp    8499f08 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi+0x42>
 8499edf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499ee2:	83 f8 05             	cmp    $0x5,%eax
 8499ee5:	75 1c                	jne    8499f03 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi+0x3d>
 8499ee7:	8b 45 08             	mov    0x8(%ebp),%eax
 8499eea:	89 04 24             	mov    %eax,(%esp)
 8499eed:	e8 d2 ec c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8499ef2:	8b 45 10             	mov    0x10(%ebp),%eax
 8499ef5:	83 e8 0a             	sub    $0xa,%eax
 8499ef8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8499efb:	03 45 08             	add    0x8(%ebp),%eax
 8499efe:	83 c0 05             	add    $0x5,%eax
 8499f01:	eb 05                	jmp    8499f08 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi+0x42>
 8499f03:	b8 00 00 00 00       	mov    $0x0,%eax
 8499f08:	c9                   	leave
 8499f09:	c3                   	ret

```

```c
// CExpandEquipslot::GetInvenRefW @ 0x8499ec6

/* CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int) */

CExpandEquipslot * __thiscall
CExpandEquipslot::GetInvenRefW(CExpandEquipslot *this,int param_2,int param_3)

{
  if ((param_3 < 10) || (0x16 < param_3)) {
    this = (CExpandEquipslot *)0x0;
  }
  else if (param_2 == 5) {
    charac_expand::CData::alter((CData *)this);
    this = this + (param_3 + -10) * 0x3d + 5;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}

```

---

## GetInvenSlot

```asm
// === 08499d1a CExpandEquipslot::GetInvenSlot  [0x08499d1a-0x8499e8f] ===
 8499d1a:	55                   	push   %ebp
 8499d1b:	89 e5                	mov    %esp,%ebp
 8499d1d:	53                   	push   %ebx
 8499d1e:	83 ec 54             	sub    $0x54,%esp
 8499d21:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8499d24:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8499d27:	89 04 24             	mov    %eax,(%esp)
 8499d2a:	e8 25 1b c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8499d2f:	83 7d 14 09          	cmpl   $0x9,0x14(%ebp)
 8499d33:	7e 06                	jle    8499d3b <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi+0x21>
 8499d35:	83 7d 14 16          	cmpl   $0x16,0x14(%ebp)
 8499d39:	7e 65                	jle    8499da0 <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi+0x86>
 8499d3b:	8b 45 bb             	mov    -0x45(%ebp),%eax
 8499d3e:	89 03                	mov    %eax,(%ebx)
 8499d40:	8b 45 bf             	mov    -0x41(%ebp),%eax
 8499d43:	89 43 04             	mov    %eax,0x4(%ebx)
 8499d46:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 8499d49:	89 43 08             	mov    %eax,0x8(%ebx)
 8499d4c:	8b 45 c7             	mov    -0x39(%ebp),%eax
 8499d4f:	89 43 0c             	mov    %eax,0xc(%ebx)
 8499d52:	8b 45 cb             	mov    -0x35(%ebp),%eax
 8499d55:	89 43 10             	mov    %eax,0x10(%ebx)
 8499d58:	8b 45 cf             	mov    -0x31(%ebp),%eax
 8499d5b:	89 43 14             	mov    %eax,0x14(%ebx)
 8499d5e:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 8499d61:	89 43 18             	mov    %eax,0x18(%ebx)
 8499d64:	8b 45 d7             	mov    -0x29(%ebp),%eax
 8499d67:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8499d6a:	8b 45 db             	mov    -0x25(%ebp),%eax
 8499d6d:	89 43 20             	mov    %eax,0x20(%ebx)
 8499d70:	8b 45 df             	mov    -0x21(%ebp),%eax
 8499d73:	89 43 24             	mov    %eax,0x24(%ebx)
 8499d76:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 8499d79:	89 43 28             	mov    %eax,0x28(%ebx)
 8499d7c:	8b 45 e7             	mov    -0x19(%ebp),%eax
 8499d7f:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8499d82:	8b 45 eb             	mov    -0x15(%ebp),%eax
 8499d85:	89 43 30             	mov    %eax,0x30(%ebx)
 8499d88:	8b 45 ef             	mov    -0x11(%ebp),%eax
 8499d8b:	89 43 34             	mov    %eax,0x34(%ebx)
 8499d8e:	8b 45 f3             	mov    -0xd(%ebp),%eax
 8499d91:	89 43 38             	mov    %eax,0x38(%ebx)
 8499d94:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8499d98:	88 43 3c             	mov    %al,0x3c(%ebx)
 8499d9b:	e9 e6 00 00 00       	jmp    8499e86 <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi+0x16c>
 8499da0:	8b 45 10             	mov    0x10(%ebp),%eax
 8499da3:	83 f8 05             	cmp    $0x5,%eax
 8499da6:	75 7e                	jne    8499e26 <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi+0x10c>
 8499da8:	8b 45 14             	mov    0x14(%ebp),%eax
 8499dab:	8d 50 f6             	lea    -0xa(%eax),%edx
 8499dae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499db1:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8499db4:	8b 4c 02 05          	mov    0x5(%edx,%eax,1),%ecx
 8499db8:	89 0b                	mov    %ecx,(%ebx)
 8499dba:	8b 4c 02 09          	mov    0x9(%edx,%eax,1),%ecx
 8499dbe:	89 4b 04             	mov    %ecx,0x4(%ebx)
 8499dc1:	8b 4c 02 0d          	mov    0xd(%edx,%eax,1),%ecx
 8499dc5:	89 4b 08             	mov    %ecx,0x8(%ebx)
 8499dc8:	8b 4c 02 11          	mov    0x11(%edx,%eax,1),%ecx
 8499dcc:	89 4b 0c             	mov    %ecx,0xc(%ebx)
 8499dcf:	8b 4c 02 15          	mov    0x15(%edx,%eax,1),%ecx
 8499dd3:	89 4b 10             	mov    %ecx,0x10(%ebx)
 8499dd6:	8b 4c 02 19          	mov    0x19(%edx,%eax,1),%ecx
 8499dda:	89 4b 14             	mov    %ecx,0x14(%ebx)
 8499ddd:	8b 4c 02 1d          	mov    0x1d(%edx,%eax,1),%ecx
 8499de1:	89 4b 18             	mov    %ecx,0x18(%ebx)
 8499de4:	8b 4c 02 21          	mov    0x21(%edx,%eax,1),%ecx
 8499de8:	89 4b 1c             	mov    %ecx,0x1c(%ebx)
 8499deb:	8b 4c 02 25          	mov    0x25(%edx,%eax,1),%ecx
 8499def:	89 4b 20             	mov    %ecx,0x20(%ebx)
 8499df2:	8b 4c 02 29          	mov    0x29(%edx,%eax,1),%ecx
 8499df6:	89 4b 24             	mov    %ecx,0x24(%ebx)
 8499df9:	8b 4c 02 2d          	mov    0x2d(%edx,%eax,1),%ecx
 8499dfd:	89 4b 28             	mov    %ecx,0x28(%ebx)
 8499e00:	8b 4c 02 31          	mov    0x31(%edx,%eax,1),%ecx
 8499e04:	89 4b 2c             	mov    %ecx,0x2c(%ebx)
 8499e07:	8b 4c 02 35          	mov    0x35(%edx,%eax,1),%ecx
 8499e0b:	89 4b 30             	mov    %ecx,0x30(%ebx)
 8499e0e:	8b 4c 02 39          	mov    0x39(%edx,%eax,1),%ecx
 8499e12:	89 4b 34             	mov    %ecx,0x34(%ebx)
 8499e15:	8b 4c 02 3d          	mov    0x3d(%edx,%eax,1),%ecx
 8499e19:	89 4b 38             	mov    %ecx,0x38(%ebx)
 8499e1c:	0f b6 44 02 41       	movzbl 0x41(%edx,%eax,1),%eax
 8499e21:	88 43 3c             	mov    %al,0x3c(%ebx)
 8499e24:	eb 60                	jmp    8499e86 <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi+0x16c>
 8499e26:	8b 45 bb             	mov    -0x45(%ebp),%eax
 8499e29:	89 03                	mov    %eax,(%ebx)
 8499e2b:	8b 45 bf             	mov    -0x41(%ebp),%eax
 8499e2e:	89 43 04             	mov    %eax,0x4(%ebx)
 8499e31:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 8499e34:	89 43 08             	mov    %eax,0x8(%ebx)
 8499e37:	8b 45 c7             	mov    -0x39(%ebp),%eax
 8499e3a:	89 43 0c             	mov    %eax,0xc(%ebx)
 8499e3d:	8b 45 cb             	mov    -0x35(%ebp),%eax
 8499e40:	89 43 10             	mov    %eax,0x10(%ebx)
 8499e43:	8b 45 cf             	mov    -0x31(%ebp),%eax
 8499e46:	89 43 14             	mov    %eax,0x14(%ebx)
 8499e49:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 8499e4c:	89 43 18             	mov    %eax,0x18(%ebx)
 8499e4f:	8b 45 d7             	mov    -0x29(%ebp),%eax
 8499e52:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8499e55:	8b 45 db             	mov    -0x25(%ebp),%eax
 8499e58:	89 43 20             	mov    %eax,0x20(%ebx)
 8499e5b:	8b 45 df             	mov    -0x21(%ebp),%eax
 8499e5e:	89 43 24             	mov    %eax,0x24(%ebx)
 8499e61:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 8499e64:	89 43 28             	mov    %eax,0x28(%ebx)
 8499e67:	8b 45 e7             	mov    -0x19(%ebp),%eax
 8499e6a:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8499e6d:	8b 45 eb             	mov    -0x15(%ebp),%eax
 8499e70:	89 43 30             	mov    %eax,0x30(%ebx)
 8499e73:	8b 45 ef             	mov    -0x11(%ebp),%eax
 8499e76:	89 43 34             	mov    %eax,0x34(%ebx)
 8499e79:	8b 45 f3             	mov    -0xd(%ebp),%eax
 8499e7c:	89 43 38             	mov    %eax,0x38(%ebx)
 8499e7f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8499e83:	88 43 3c             	mov    %al,0x3c(%ebx)
 8499e86:	89 d8                	mov    %ebx,%eax
 8499e88:	83 c4 54             	add    $0x54,%esp
 8499e8b:	5b                   	pop    %ebx
 8499e8c:	5d                   	pop    %ebp
 8499e8d:	c2 04 00             	ret    $0x4

```

```c
// CExpandEquipslot::GetInvenSlot @ 0x8499d1a

/* CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const */

undefined4 * CExpandEquipslot::GetInvenSlot(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
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
  
  Inven_Item::Inven_Item((Inven_Item *)&local_49);
  if ((param_4 < 10) || (0x16 < param_4)) {
    *param_1 = local_49;
    param_1[1] = local_45;
    param_1[2] = local_41;
    param_1[3] = local_3d;
    param_1[4] = local_39;
    param_1[5] = local_35;
    param_1[6] = local_31;
    param_1[7] = local_2d;
    param_1[8] = local_29;
    param_1[9] = local_25;
    param_1[10] = local_21;
    param_1[0xb] = local_1d;
    param_1[0xc] = local_19;
    param_1[0xd] = local_15;
    param_1[0xe] = local_11;
    *(undefined1 *)(param_1 + 0xf) = local_d;
  }
  else if (param_3 == 5) {
    iVar1 = (param_4 + -10) * 0x3d;
    *param_1 = *(undefined4 *)(iVar1 + 5 + param_2);
    param_1[1] = *(undefined4 *)(iVar1 + 9 + param_2);
    param_1[2] = *(undefined4 *)(iVar1 + 0xd + param_2);
    param_1[3] = *(undefined4 *)(iVar1 + 0x11 + param_2);
    param_1[4] = *(undefined4 *)(iVar1 + 0x15 + param_2);
    param_1[5] = *(undefined4 *)(iVar1 + 0x19 + param_2);
    param_1[6] = *(undefined4 *)(iVar1 + 0x1d + param_2);
    param_1[7] = *(undefined4 *)(iVar1 + 0x21 + param_2);
    param_1[8] = *(undefined4 *)(iVar1 + 0x25 + param_2);
    param_1[9] = *(undefined4 *)(iVar1 + 0x29 + param_2);
    param_1[10] = *(undefined4 *)(iVar1 + 0x2d + param_2);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x31 + param_2);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0x35 + param_2);
    param_1[0xd] = *(undefined4 *)(iVar1 + 0x39 + param_2);
    param_1[0xe] = *(undefined4 *)(iVar1 + 0x3d + param_2);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar1 + 0x41 + param_2);
  }
  else {
    *param_1 = local_49;
    param_1[1] = local_45;
    param_1[2] = local_41;
    param_1[3] = local_3d;
    param_1[4] = local_39;
    param_1[5] = local_35;
    param_1[6] = local_31;
    param_1[7] = local_2d;
    param_1[8] = local_29;
    param_1[9] = local_25;
    param_1[10] = local_21;
    param_1[0xb] = local_1d;
    param_1[0xc] = local_19;
    param_1[0xd] = local_15;
    param_1[0xe] = local_11;
    *(undefined1 *)(param_1 + 0xf) = local_d;
  }
  return param_1;
}

```

---

## Move_Item

```asm
// === 08499f84 CExpandEquipslot::Move_Item  [0x08499f84-0x849a2c9] ===
 8499f84:	55                   	push   %ebp
 8499f85:	89 e5                	mov    %esp,%ebp
 8499f87:	53                   	push   %ebx
 8499f88:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8499f8e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8499f92:	75 36                	jne    8499fca <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x46>
 8499f94:	c7 44 24 10 fc a3 c7 	movl   $0x8c7a3fc,0x10(%esp)
 8499f9b:	08 
 8499f9c:	c7 44 24 0c 7c 01 00 	movl   $0x17c,0xc(%esp)
 8499fa3:	00 
 8499fa4:	c7 44 24 08 00 b1 c7 	movl   $0x8c7b100,0x8(%esp)
 8499fab:	08 
 8499fac:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 8499fb3:	08 
 8499fb4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8499fbb:	e8 4a 9c 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8499fc0:	b8 11 00 00 00       	mov    $0x11,%eax
 8499fc5:	e9 f7 02 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 8499fca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499fcd:	89 04 24             	mov    %eax,(%esp)
 8499fd0:	e8 b7 03 c4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8499fd5:	83 f8 02             	cmp    $0x2,%eax
 8499fd8:	0f 9e c0             	setle  %al
 8499fdb:	84 c0                	test   %al,%al
 8499fdd:	74 36                	je     849a015 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x91>
 8499fdf:	c7 44 24 10 1c a4 c7 	movl   $0x8c7a41c,0x10(%esp)
 8499fe6:	08 
 8499fe7:	c7 44 24 0c 82 01 00 	movl   $0x182,0xc(%esp)
 8499fee:	00 
 8499fef:	c7 44 24 08 00 b1 c7 	movl   $0x8c7b100,0x8(%esp)
 8499ff6:	08 
 8499ff7:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 8499ffe:	08 
 8499fff:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 849a006:	e8 ff 9b 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 849a00b:	b8 11 00 00 00       	mov    $0x11,%eax
 849a010:	e9 ac 02 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a015:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a018:	89 04 24             	mov    %eax,(%esp)
 849a01b:	e8 6e 02 c4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849a020:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849a023:	8b 45 10             	mov    0x10(%ebp),%eax
 849a026:	85 c0                	test   %eax,%eax
 849a028:	0f 85 8e 02 00 00    	jne    849a2bc <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x338>
 849a02e:	8b 45 18             	mov    0x18(%ebp),%eax
 849a031:	83 f8 12             	cmp    $0x12,%eax
 849a034:	0f 85 7b 02 00 00    	jne    849a2b5 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x331>
 849a03a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849a03d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a040:	03 45 08             	add    0x8(%ebp),%eax
 849a043:	8d 50 05             	lea    0x5(%eax),%edx
 849a046:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849a049:	8b 88 50 06 00 00    	mov    0x650(%eax),%ecx
 849a04f:	8b 45 14             	mov    0x14(%ebp),%eax
 849a052:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a055:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 849a058:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a05c:	89 04 24             	mov    %eax,(%esp)
 849a05f:	e8 7c 62 06 00       	call   85002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>
 849a064:	83 f0 01             	xor    $0x1,%eax
 849a067:	84 c0                	test   %al,%al
 849a069:	74 0a                	je     849a075 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0xf1>
 849a06b:	b8 11 00 00 00       	mov    $0x11,%eax
 849a070:	e9 4c 02 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a075:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849a078:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 849a07e:	8b 45 14             	mov    0x14(%ebp),%eax
 849a081:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a084:	8d 04 02             	lea    (%edx,%eax,1),%eax
 849a087:	83 c0 11             	add    $0x11,%eax
 849a08a:	89 04 24             	mov    %eax,(%esp)
 849a08d:	e8 2a 67 cb ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 849a092:	83 f0 01             	xor    $0x1,%eax
 849a095:	84 c0                	test   %al,%al
 849a097:	75 1e                	jne    849a0b7 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x133>
 849a099:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849a09c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a09f:	83 c0 10             	add    $0x10,%eax
 849a0a2:	03 45 08             	add    0x8(%ebp),%eax
 849a0a5:	83 c0 06             	add    $0x6,%eax
 849a0a8:	89 04 24             	mov    %eax,(%esp)
 849a0ab:	e8 0c 67 cb ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 849a0b0:	83 f0 01             	xor    $0x1,%eax
 849a0b3:	84 c0                	test   %al,%al
 849a0b5:	74 07                	je     849a0be <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x13a>
 849a0b7:	b8 01 00 00 00       	mov    $0x1,%eax
 849a0bc:	eb 05                	jmp    849a0c3 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x13f>
 849a0be:	b8 00 00 00 00       	mov    $0x0,%eax
 849a0c3:	84 c0                	test   %al,%al
 849a0c5:	74 0a                	je     849a0d1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x14d>
 849a0c7:	b8 11 00 00 00       	mov    $0x11,%eax
 849a0cc:	e9 f0 01 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a0d1:	8d 45 9b             	lea    -0x65(%ebp),%eax
 849a0d4:	89 04 24             	mov    %eax,(%esp)
 849a0d7:	e8 78 17 c3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 849a0dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849a0df:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 849a0e5:	8b 45 14             	mov    0x14(%ebp),%eax
 849a0e8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a0eb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 849a0ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a0f2:	8d 45 9b             	lea    -0x65(%ebp),%eax
 849a0f5:	89 04 24             	mov    %eax,(%esp)
 849a0f8:	e8 31 05 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a0fd:	8b 45 9d             	mov    -0x63(%ebp),%eax
 849a100:	85 c0                	test   %eax,%eax
 849a102:	0f 84 5b 01 00 00    	je     849a263 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x2df>
 849a108:	8b 45 9d             	mov    -0x63(%ebp),%eax
 849a10b:	89 c3                	mov    %eax,%ebx
 849a10d:	e8 89 20 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849a112:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849a116:	89 04 24             	mov    %eax,(%esp)
 849a119:	e8 14 59 ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849a11e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849a121:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 849a125:	74 06                	je     849a12d <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x1a9>
 849a127:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 849a12b:	75 47                	jne    849a174 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x1f0>
 849a12d:	8b 5d 9d             	mov    -0x63(%ebp),%ebx
 849a130:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849a137:	00 
 849a138:	c7 44 24 08 a0 01 00 	movl   $0x1a0,0x8(%esp)
 849a13f:	00 
 849a140:	c7 44 24 04 00 b1 c7 	movl   $0x8c7b100,0x4(%esp)
 849a147:	08 
 849a148:	8d 45 d8             	lea    -0x28(%ebp),%eax
 849a14b:	89 04 24             	mov    %eax,(%esp)
 849a14e:	e8 c5 55 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849a153:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849a157:	c7 44 24 04 48 a4 c7 	movl   $0x8c7a448,0x4(%esp)
 849a15e:	08 
 849a15f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 849a162:	89 04 24             	mov    %eax,(%esp)
 849a165:	e8 1e 56 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849a16a:	b8 11 00 00 00       	mov    $0x11,%eax
 849a16f:	e9 4d 01 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a174:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a177:	8b 00                	mov    (%eax),%eax
 849a179:	83 c0 10             	add    $0x10,%eax
 849a17c:	8b 10                	mov    (%eax),%edx
 849a17e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a181:	89 04 24             	mov    %eax,(%esp)
 849a184:	ff d2                	call   *%edx
 849a186:	84 c0                	test   %al,%al
 849a188:	74 0a                	je     849a194 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x210>
 849a18a:	b8 11 00 00 00       	mov    $0x11,%eax
 849a18f:	e9 2d 01 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a194:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a197:	8b 00                	mov    (%eax),%eax
 849a199:	83 c0 14             	add    $0x14,%eax
 849a19c:	8b 10                	mov    (%eax),%edx
 849a19e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a1a1:	89 04 24             	mov    %eax,(%esp)
 849a1a4:	ff d2                	call   *%edx
 849a1a6:	84 c0                	test   %al,%al
 849a1a8:	74 0a                	je     849a1b4 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x230>
 849a1aa:	b8 11 00 00 00       	mov    $0x11,%eax
 849a1af:	e9 0d 01 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a1b4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849a1bb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849a1be:	83 c0 0a             	add    $0xa,%eax
 849a1c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 849a1c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a1c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a1cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a1cf:	89 04 24             	mov    %eax,(%esp)
 849a1d2:	e8 e7 61 06 00       	call   85003be <_Z11IsEquipableP5CUserPK5CItemi>
 849a1d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849a1da:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849a1de:	0f 95 c0             	setne  %al
 849a1e1:	84 c0                	test   %al,%al
 849a1e3:	74 08                	je     849a1ed <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x269>
 849a1e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849a1e8:	e9 d4 00 00 00       	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a1ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a1f0:	8b 00                	mov    (%eax),%eax
 849a1f2:	83 c0 48             	add    $0x48,%eax
 849a1f5:	8b 10                	mov    (%eax),%edx
 849a1f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a1fa:	89 04 24             	mov    %eax,(%esp)
 849a1fd:	ff d2                	call   *%edx
 849a1ff:	85 c0                	test   %eax,%eax
 849a201:	0f 95 c0             	setne  %al
 849a204:	84 c0                	test   %al,%al
 849a206:	74 5b                	je     849a263 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x2df>
 849a208:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 849a20f:	e8 8a 1a c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 849a214:	89 c3                	mov    %eax,%ebx
 849a216:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a219:	8b 00                	mov    (%eax),%eax
 849a21b:	83 c0 48             	add    $0x48,%eax
 849a21e:	8b 10                	mov    (%eax),%edx
 849a220:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a223:	89 04 24             	mov    %eax,(%esp)
 849a226:	ff d2                	call   *%edx
 849a228:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 849a22e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 849a231:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849a234:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849a238:	74 29                	je     849a263 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x2df>
 849a23a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a23d:	8d 88 80 b5 5a bb    	lea    -0x44a54a80(%eax),%ecx
 849a243:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 849a248:	89 c8                	mov    %ecx,%eax
 849a24a:	f7 ea                	imul   %edx
 849a24c:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 849a24f:	89 c2                	mov    %eax,%edx
 849a251:	c1 fa 10             	sar    $0x10,%edx
 849a254:	89 c8                	mov    %ecx,%eax
 849a256:	c1 f8 1f             	sar    $0x1f,%eax
 849a259:	89 d1                	mov    %edx,%ecx
 849a25b:	29 c1                	sub    %eax,%ecx
 849a25d:	89 c8                	mov    %ecx,%eax
 849a25f:	66 89 45 a6          	mov    %ax,-0x5a(%ebp)
 849a263:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849a266:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a269:	03 45 08             	add    0x8(%ebp),%eax
 849a26c:	8d 50 05             	lea    0x5(%eax),%edx
 849a26f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849a272:	8b 88 50 06 00 00    	mov    0x650(%eax),%ecx
 849a278:	8b 45 14             	mov    0x14(%ebp),%eax
 849a27b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a27e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 849a281:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a285:	89 04 24             	mov    %eax,(%esp)
 849a288:	e8 a1 03 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a28d:	c6 45 9b 00          	movb   $0x0,-0x65(%ebp)
 849a291:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849a294:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a297:	03 45 08             	add    0x8(%ebp),%eax
 849a29a:	8d 50 05             	lea    0x5(%eax),%edx
 849a29d:	8d 45 9b             	lea    -0x65(%ebp),%eax
 849a2a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a2a4:	89 14 24             	mov    %edx,(%esp)
 849a2a7:	e8 82 03 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a2ac:	90                   	nop
 849a2ad:	90                   	nop
 849a2ae:	b8 00 00 00 00       	mov    $0x0,%eax
 849a2b3:	eb 0c                	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a2b5:	b8 11 00 00 00       	mov    $0x11,%eax
 849a2ba:	eb 05                	jmp    849a2c1 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii+0x33d>
 849a2bc:	b8 11 00 00 00       	mov    $0x11,%eax
 849a2c1:	81 c4 84 00 00 00    	add    $0x84,%esp
 849a2c7:	5b                   	pop    %ebx
 849a2c8:	5d                   	pop    %ebp
 849a2c9:	c3                   	ret

```

```c
// CExpandEquipslot::Move_Item @ 0x8499f84

/* CExpandEquipslot::Move_Item(CUser*, int, int, int, int) */

int __thiscall
CExpandEquipslot::Move_Item
          (CExpandEquipslot *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  Inven_Item local_69 [2];
  int local_67;
  undefined2 local_5e;
  cMyTrace local_2c [16];
  int local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)"
               ,0x17c,"Fail Move_Item : pUser is NULL");
    iVar3 = 0x11;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)",0x182,
                 "Fail Move_Item : pUser is not valid state");
      iVar3 = 0x11;
    }
    else {
      local_1c = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      if (param_2 == 0) {
        if (param_4 == 0x12) {
          cVar2 = CheckEquipable((Inven_Item *)(*(int *)(local_1c + 0x650) + param_3 * 0x3d),
                                 (Inven_Item *)(this + param_5 * 0x3d + 5));
          if (cVar2 == '\x01') {
            cVar2 = stAmplifyOption_t::isIdentified
                              ((stAmplifyOption_t *)
                               (*(int *)(local_1c + 0x650) + param_3 * 0x3d + 0x11));
            if ((cVar2 == '\x01') &&
               (cVar2 = stAmplifyOption_t::isIdentified
                                  ((stAmplifyOption_t *)(this + param_5 * 0x3d + 0x16)),
               cVar2 == '\x01')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              iVar3 = 0x11;
            }
            else {
              Inven_Item::Inven_Item(local_69);
              Inven_Item::setCopy(local_69,(Inven_Item *)
                                           (*(int *)(local_1c + 0x650) + param_3 * 0x3d));
              iVar3 = local_67;
              if (local_67 != 0) {
                this_00 = (CDataManager *)G_CDataManager();
                local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
                if ((local_18 == (CItem *)0x0) || (param_1 == (CUser *)0x0)) {
                  cMyTrace::cMyTrace(local_2c,
                                     "int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)",
                                     0x1a0,5);
                  cMyTrace::operator()
                            (local_2c,"CExpandEquipslot::Move_Item Move_Item return false (%d)",
                             local_67);
                  return 0x11;
                }
                cVar2 = (**(code **)(*(int *)local_18 + 0x10))(local_18);
                if (cVar2 != '\0') {
                  return 0x11;
                }
                cVar2 = (**(code **)(*(int *)local_18 + 0x14))(local_18);
                if (cVar2 != '\0') {
                  return 0x11;
                }
                local_14 = 0;
                local_14 = IsEquipable(param_1,local_18,param_5 + 10);
                if (local_14 != 0) {
                  return local_14;
                }
                iVar3 = (**(code **)(*(int *)local_18 + 0x48))(local_18);
                if (iVar3 != 0) {
                  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  iVar4 = (**(code **)(*(int *)local_18 + 0x48))(local_18);
                  local_10 = iVar3 + iVar4 * 0x15180;
                  if (local_10 != 0) {
                    local_5e = (undefined2)((local_10 + -0x44a54a80) / 0x15180);
                  }
                }
              }
              Inven_Item::setCopy((Inven_Item *)(*(int *)(local_1c + 0x650) + param_3 * 0x3d),
                                  (Inven_Item *)(this + param_5 * 0x3d + 5));
              local_69[0] = (Inven_Item)0x0;
              Inven_Item::setCopy((Inven_Item *)(this + param_5 * 0x3d + 5),local_69);
              iVar3 = 0;
            }
          }
          else {
            iVar3 = 0x11;
          }
        }
        else {
          iVar3 = 0x11;
        }
      }
      else {
        iVar3 = 0x11;
      }
    }
  }
  return iVar3;
}

```

---

## Send_Equip_Info

```asm
// === 0849983e CExpandEquipslot::Send_Equip_Info  [0x0849983e-0x8499985] ===
 849983e:	55                   	push   %ebp
 849983f:	89 e5                	mov    %esp,%ebp
 8499841:	56                   	push   %esi
 8499842:	53                   	push   %ebx
 8499843:	83 ec 30             	sub    $0x30,%esp
 8499846:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 849984a:	75 36                	jne    8499882 <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser+0x44>
 849984c:	c7 44 24 10 50 a3 c7 	movl   $0x8c7a350,0x10(%esp)
 8499853:	08 
 8499854:	c7 44 24 0c 9a 00 00 	movl   $0x9a,0xc(%esp)
 849985b:	00 
 849985c:	c7 44 24 08 80 b1 c7 	movl   $0x8c7b180,0x8(%esp)
 8499863:	08 
 8499864:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 849986b:	08 
 849986c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8499873:	e8 92 a3 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8499878:	bb 01 00 00 00       	mov    $0x1,%ebx
 849987d:	e9 fb 00 00 00       	jmp    849997d <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser+0x13f>
 8499882:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499885:	89 04 24             	mov    %eax,(%esp)
 8499888:	e8 ff 0a c4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 849988d:	83 f8 02             	cmp    $0x2,%eax
 8499890:	0f 9e c0             	setle  %al
 8499893:	84 c0                	test   %al,%al
 8499895:	74 36                	je     84998cd <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser+0x8f>
 8499897:	c7 44 24 10 78 a3 c7 	movl   $0x8c7a378,0x10(%esp)
 849989e:	08 
 849989f:	c7 44 24 0c a0 00 00 	movl   $0xa0,0xc(%esp)
 84998a6:	00 
 84998a7:	c7 44 24 08 80 b1 c7 	movl   $0x8c7b180,0x8(%esp)
 84998ae:	08 
 84998af:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 84998b6:	08 
 84998b7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84998be:	e8 47 a3 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84998c3:	bb 13 00 00 00       	mov    $0x13,%ebx
 84998c8:	e9 b0 00 00 00       	jmp    849997d <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser+0x13f>
 84998cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84998d0:	89 04 24             	mov    %eax,(%esp)
 84998d3:	e8 74 44 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84998d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84998db:	89 04 24             	mov    %eax,(%esp)
 84998de:	e8 03 20 c3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84998e3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84998ea:	00 
 84998eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84998f2:	00 
 84998f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84998f6:	89 04 24             	mov    %eax,(%esp)
 84998f9:	e8 fe 1f c3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84998fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499905:	00 
 8499906:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499909:	89 04 24             	mov    %eax,(%esp)
 849990c:	e8 0f 20 c3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8499911:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499914:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 849991b:	00 
 849991c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8499920:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499923:	89 04 24             	mov    %eax,(%esp)
 8499926:	e8 23 0b 1c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 849992b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8499932:	00 
 8499933:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499936:	89 04 24             	mov    %eax,(%esp)
 8499939:	e8 1a 20 c3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849993e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499941:	89 44 24 04          	mov    %eax,0x4(%esp)
 8499945:	8b 45 0c             	mov    0xc(%ebp),%eax
 8499948:	89 04 24             	mov    %eax,(%esp)
 849994b:	e8 6a ec 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8499950:	bb 00 00 00 00       	mov    $0x0,%ebx
 8499955:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499958:	89 04 24             	mov    %eax,(%esp)
 849995b:	e8 20 45 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8499960:	eb 1b                	jmp    849997d <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser+0x13f>
 8499962:	89 d3                	mov    %edx,%ebx
 8499964:	89 c6                	mov    %eax,%esi
 8499966:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8499969:	89 04 24             	mov    %eax,(%esp)
 849996c:	e8 0f 45 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8499971:	89 f0                	mov    %esi,%eax
 8499973:	89 da                	mov    %ebx,%edx
 8499975:	89 04 24             	mov    %eax,(%esp)
 8499978:	e8 d3 9d 64 00       	call   8ae3750 <_Unwind_Resume>
 849997d:	89 d8                	mov    %ebx,%eax
 849997f:	83 c4 30             	add    $0x30,%esp
 8499982:	5b                   	pop    %ebx
 8499983:	5e                   	pop    %esi
 8499984:	5d                   	pop    %ebp
 8499985:	c3                   	ret

```

```c
// CExpandEquipslot::Send_Equip_Info @ 0x849983e

/* CExpandEquipslot::Send_Equip_Info(CUser*) */

undefined4 __thiscall CExpandEquipslot::Send_Equip_Info(CExpandEquipslot *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_18 [12];
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Equip_Info(CUser*)",0x9a,
               "Fail Send_Equip_Info : pUser is NULL");
    uVar2 = 1;
  }
  else {
    iVar1 = CUser::get_state(param_1);
    if (iVar1 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Equip_Info(CUser*)",0xa0,
                 "Fail Send_Equip_Info : pUser is not valid state");
      uVar2 = 0x13;
    }
    else {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084998de to 0849994f has its CatchHandler @ 08499962 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
      CUser::make_basic_info(param_1,(char *)local_18,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CUser::Send(param_1,local_18);
      uVar2 = 0;
      PacketGuard::~PacketGuard(local_18);
    }
  }
  return uVar2;
}

```

---

## Send_Expand_Equip_Info

```asm
// === 0849a57c CExpandEquipslot::Send_Expand_Equip_Info  [0x0849a57c-0x849a759] ===
 849a57c:	55                   	push   %ebp
 849a57d:	89 e5                	mov    %esp,%ebp
 849a57f:	56                   	push   %esi
 849a580:	53                   	push   %ebx
 849a581:	83 ec 30             	sub    $0x30,%esp
 849a584:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 849a588:	75 36                	jne    849a5c0 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x44>
 849a58a:	c7 44 24 10 80 a4 c7 	movl   $0x8c7a480,0x10(%esp)
 849a591:	08 
 849a592:	c7 44 24 0c 1b 02 00 	movl   $0x21b,0xc(%esp)
 849a599:	00 
 849a59a:	c7 44 24 08 c0 b0 c7 	movl   $0x8c7b0c0,0x8(%esp)
 849a5a1:	08 
 849a5a2:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 849a5a9:	08 
 849a5aa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 849a5b1:	e8 54 96 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 849a5b6:	bb 01 00 00 00       	mov    $0x1,%ebx
 849a5bb:	e9 90 01 00 00       	jmp    849a750 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x1d4>
 849a5c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a5c3:	89 04 24             	mov    %eax,(%esp)
 849a5c6:	e8 c1 fd c3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 849a5cb:	83 f8 02             	cmp    $0x2,%eax
 849a5ce:	0f 9e c0             	setle  %al
 849a5d1:	84 c0                	test   %al,%al
 849a5d3:	74 36                	je     849a60b <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x8f>
 849a5d5:	c7 44 24 10 80 a4 c7 	movl   $0x8c7a480,0x10(%esp)
 849a5dc:	08 
 849a5dd:	c7 44 24 0c 21 02 00 	movl   $0x221,0xc(%esp)
 849a5e4:	00 
 849a5e5:	c7 44 24 08 c0 b0 c7 	movl   $0x8c7b0c0,0x8(%esp)
 849a5ec:	08 
 849a5ed:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 849a5f4:	08 
 849a5f5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 849a5fc:	e8 09 96 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 849a601:	bb 13 00 00 00       	mov    $0x13,%ebx
 849a606:	e9 45 01 00 00       	jmp    849a750 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x1d4>
 849a60b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a60e:	89 04 24             	mov    %eax,(%esp)
 849a611:	e8 36 37 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849a616:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a619:	89 04 24             	mov    %eax,(%esp)
 849a61c:	e8 c5 12 c3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849a621:	c7 44 24 08 53 01 00 	movl   $0x153,0x8(%esp)
 849a628:	00 
 849a629:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849a630:	00 
 849a631:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a634:	89 04 24             	mov    %eax,(%esp)
 849a637:	e8 c0 12 c3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849a63c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a63f:	89 04 24             	mov    %eax,(%esp)
 849a642:	e8 35 fd c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849a647:	0f b7 c0             	movzwl %ax,%eax
 849a64a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a64e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a651:	89 04 24             	mov    %eax,(%esp)
 849a654:	e8 4b f8 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849a659:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 849a65d:	e9 8d 00 00 00       	jmp    849a6ef <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x173>
 849a662:	80 7d f7 01          	cmpb   $0x1,-0x9(%ebp)
 849a666:	75 3e                	jne    849a6a6 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x12a>
 849a668:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a66b:	89 04 24             	mov    %eax,(%esp)
 849a66e:	e8 09 54 d9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 849a673:	3c 01                	cmp    $0x1,%al
 849a675:	0f 94 c0             	sete   %al
 849a678:	84 c0                	test   %al,%al
 849a67a:	74 15                	je     849a691 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x115>
 849a67c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849a683:	00 
 849a684:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a687:	89 04 24             	mov    %eax,(%esp)
 849a68a:	e8 91 12 c3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849a68f:	eb 28                	jmp    849a6b9 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x13d>
 849a691:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849a695:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a699:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a69c:	89 04 24             	mov    %eax,(%esp)
 849a69f:	e8 7c 12 c3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849a6a4:	eb 13                	jmp    849a6b9 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x13d>
 849a6a6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849a6aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a6ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a6b1:	89 04 24             	mov    %eax,(%esp)
 849a6b4:	e8 67 12 c3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849a6b9:	0f b6 5d f7          	movzbl -0x9(%ebp),%ebx
 849a6bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a6c0:	89 04 24             	mov    %eax,(%esp)
 849a6c3:	e8 b6 fb c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849a6c8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 849a6cc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849a6d3:	00 
 849a6d4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 849a6db:	00 
 849a6dc:	8d 55 e8             	lea    -0x18(%ebp),%edx
 849a6df:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a6e3:	89 04 24             	mov    %eax,(%esp)
 849a6e6:	e8 f7 3b 06 00       	call   84fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>
 849a6eb:	80 45 f7 01          	addb   $0x1,-0x9(%ebp)
 849a6ef:	80 7d f7 03          	cmpb   $0x3,-0x9(%ebp)
 849a6f3:	0f 96 c0             	setbe  %al
 849a6f6:	84 c0                	test   %al,%al
 849a6f8:	0f 85 64 ff ff ff    	jne    849a662 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0xe6>
 849a6fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849a705:	00 
 849a706:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a709:	89 04 24             	mov    %eax,(%esp)
 849a70c:	e8 47 12 c3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849a711:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a714:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a718:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a71b:	89 04 24             	mov    %eax,(%esp)
 849a71e:	e8 97 de 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849a723:	bb 00 00 00 00       	mov    $0x0,%ebx
 849a728:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a72b:	89 04 24             	mov    %eax,(%esp)
 849a72e:	e8 4d 37 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849a733:	eb 1b                	jmp    849a750 <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser+0x1d4>
 849a735:	89 d3                	mov    %edx,%ebx
 849a737:	89 c6                	mov    %eax,%esi
 849a739:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849a73c:	89 04 24             	mov    %eax,(%esp)
 849a73f:	e8 3c 37 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849a744:	89 f0                	mov    %esi,%eax
 849a746:	89 da                	mov    %ebx,%edx
 849a748:	89 04 24             	mov    %eax,(%esp)
 849a74b:	e8 00 90 64 00       	call   8ae3750 <_Unwind_Resume>
 849a750:	89 d8                	mov    %ebx,%eax
 849a752:	83 c4 30             	add    $0x30,%esp
 849a755:	5b                   	pop    %ebx
 849a756:	5e                   	pop    %esi
 849a757:	5d                   	pop    %ebp
 849a758:	c3                   	ret
 849a759:	90                   	nop

```

```c
// CExpandEquipslot::Send_Expand_Equip_Info @ 0x849a57c

/* CExpandEquipslot::Send_Expand_Equip_Info(CUser*) */

undefined4 __thiscall
CExpandEquipslot::Send_Expand_Equip_Info(CExpandEquipslot *this,CUser *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  PacketGuard local_1c [15];
  byte local_d;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Expand_Equip_Info(CUser*)",0x21b,
               "Fail Send_Expand_Equip_Info : pUser is NULL");
    uVar6 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Expand_Equip_Info(CUser*)",
                 0x221,"Fail Send_Expand_Equip_Info : pUser is NULL");
      uVar6 = 0x13;
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849a61c to 0849a722 has its CatchHandler @ 0849a735 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x153);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
      for (local_d = 1; local_d < 4; local_d = local_d + 1) {
        if (local_d == 1) {
          cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
          if (cVar2 == '\x01') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
          }
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
        }
        bVar1 = local_d;
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::MakeEquipList(pCVar5,local_1c,1,1,bVar1);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar6;
}

```

---

## SetExpandEquipslot

```asm
// === 08499986 CExpandEquipslot::SetExpandEquipslot  [0x08499986-0x8499a47] ===
 8499986:	55                   	push   %ebp
 8499987:	89 e5                	mov    %esp,%ebp
 8499989:	83 ec 18             	sub    $0x18,%esp
 849998c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849998f:	83 f8 02             	cmp    $0x2,%eax
 8499992:	74 44                	je     84999d8 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0x52>
 8499994:	83 f8 03             	cmp    $0x3,%eax
 8499997:	74 74                	je     8499a0d <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0x87>
 8499999:	83 f8 01             	cmp    $0x1,%eax
 849999c:	0f 85 a4 00 00 00    	jne    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 84999a2:	81 7d 14 dc 02 00 00 	cmpl   $0x2dc,0x14(%ebp)
 84999a9:	0f 85 93 00 00 00    	jne    8499a42 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xbc>
 84999af:	8b 45 14             	mov    0x14(%ebp),%eax
 84999b2:	8b 55 08             	mov    0x8(%ebp),%edx
 84999b5:	83 c2 05             	add    $0x5,%edx
 84999b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84999bc:	8b 45 10             	mov    0x10(%ebp),%eax
 84999bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84999c3:	89 14 24             	mov    %edx,(%esp)
 84999c6:	e8 d5 3e be ff       	call   807d8a0 <memcpy@plt>
 84999cb:	8b 45 08             	mov    0x8(%ebp),%eax
 84999ce:	89 04 24             	mov    %eax,(%esp)
 84999d1:	e8 ee f1 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 84999d6:	eb 6e                	jmp    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 84999d8:	81 7d 14 dc 02 00 00 	cmpl   $0x2dc,0x14(%ebp)
 84999df:	75 64                	jne    8499a45 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xbf>
 84999e1:	8b 45 14             	mov    0x14(%ebp),%eax
 84999e4:	8b 55 08             	mov    0x8(%ebp),%edx
 84999e7:	81 c2 e1 02 00 00    	add    $0x2e1,%edx
 84999ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 84999f1:	8b 45 10             	mov    0x10(%ebp),%eax
 84999f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84999f8:	89 14 24             	mov    %edx,(%esp)
 84999fb:	e8 a0 3e be ff       	call   807d8a0 <memcpy@plt>
 8499a00:	8b 45 08             	mov    0x8(%ebp),%eax
 8499a03:	89 04 24             	mov    %eax,(%esp)
 8499a06:	e8 b9 f1 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8499a0b:	eb 39                	jmp    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 8499a0d:	81 7d 14 dc 02 00 00 	cmpl   $0x2dc,0x14(%ebp)
 8499a14:	75 30                	jne    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 8499a16:	8b 45 14             	mov    0x14(%ebp),%eax
 8499a19:	8b 55 08             	mov    0x8(%ebp),%edx
 8499a1c:	81 c2 bd 05 00 00    	add    $0x5bd,%edx
 8499a22:	89 44 24 08          	mov    %eax,0x8(%esp)
 8499a26:	8b 45 10             	mov    0x10(%ebp),%eax
 8499a29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8499a2d:	89 14 24             	mov    %edx,(%esp)
 8499a30:	e8 6b 3e be ff       	call   807d8a0 <memcpy@plt>
 8499a35:	8b 45 08             	mov    0x8(%ebp),%eax
 8499a38:	89 04 24             	mov    %eax,(%esp)
 8499a3b:	e8 84 f1 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8499a40:	eb 04                	jmp    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 8499a42:	90                   	nop
 8499a43:	eb 01                	jmp    8499a46 <_ZN16CExpandEquipslot18SetExpandEquipslotEiPvi+0xc0>
 8499a45:	90                   	nop
 8499a46:	c9                   	leave
 8499a47:	c3                   	ret

```

```c
// CExpandEquipslot::SetExpandEquipslot @ 0x8499986

/* CExpandEquipslot::SetExpandEquipslot(int, void*, int) */

void __thiscall
CExpandEquipslot::SetExpandEquipslot(CExpandEquipslot *this,int param_1,void *param_2,int param_3)

{
  if (param_1 == 2) {
    if (param_3 == 0x2dc) {
      memcpy(this + 0x2e1,param_2,0x2dc);
      charac_expand::CData::alter((CData *)this);
    }
  }
  else if (param_1 == 3) {
    if (param_3 == 0x2dc) {
      memcpy(this + 0x5bd,param_2,0x2dc);
      charac_expand::CData::alter((CData *)this);
    }
  }
  else if ((param_1 == 1) && (param_3 == 0x2dc)) {
    memcpy(this + 5,param_2,0x2dc);
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## _reset

```asm
// === 0849a9e2 CExpandEquipslot::_reset  [0x0849a9e2-0x849aa47] ===
 849a9e2:	55                   	push   %ebp
 849a9e3:	89 e5                	mov    %esp,%ebp
 849a9e5:	83 ec 28             	sub    $0x28,%esp
 849a9e8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849a9ef:	eb 4a                	jmp    849aa3b <_ZN16CExpandEquipslot6_resetEv+0x59>
 849a9f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a9f4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a9f7:	03 45 08             	add    0x8(%ebp),%eax
 849a9fa:	83 c0 05             	add    $0x5,%eax
 849a9fd:	89 04 24             	mov    %eax,(%esp)
 849aa00:	e8 d3 0d c3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 849aa05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849aa08:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849aa0b:	05 e0 02 00 00       	add    $0x2e0,%eax
 849aa10:	03 45 08             	add    0x8(%ebp),%eax
 849aa13:	83 c0 01             	add    $0x1,%eax
 849aa16:	89 04 24             	mov    %eax,(%esp)
 849aa19:	e8 ba 0d c3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 849aa1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849aa21:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849aa24:	05 b0 05 00 00       	add    $0x5b0,%eax
 849aa29:	03 45 08             	add    0x8(%ebp),%eax
 849aa2c:	83 c0 0d             	add    $0xd,%eax
 849aa2f:	89 04 24             	mov    %eax,(%esp)
 849aa32:	e8 a1 0d c3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 849aa37:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 849aa3b:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
 849aa3f:	0f 9e c0             	setle  %al
 849aa42:	84 c0                	test   %al,%al
 849aa44:	75 ab                	jne    849a9f1 <_ZN16CExpandEquipslot6_resetEv+0xf>
 849aa46:	c9                   	leave
 849aa47:	c3                   	ret

```

```c
// CExpandEquipslot::_reset @ 0x849a9e2

/* CExpandEquipslot::_reset() */

void __thiscall CExpandEquipslot::_reset(CExpandEquipslot *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 5));
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0x2e1));
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0x5bd));
  }
  return;
}

```

---

## _saveData

```asm
// === 0849a75a CExpandEquipslot::_saveData  [0x0849a75a-0x849a9e1] ===
 849a75a:	55                   	push   %ebp
 849a75b:	89 e5                	mov    %esp,%ebp
 849a75d:	56                   	push   %esi
 849a75e:	53                   	push   %ebx
 849a75f:	83 ec 30             	sub    $0x30,%esp
 849a762:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 849a767:	c7 44 24 08 47 02 00 	movl   $0x247,0x8(%esp)
 849a76e:	00 
 849a76f:	c7 44 24 04 06 a3 c7 	movl   $0x8c7a306,0x4(%esp)
 849a776:	08 
 849a777:	89 04 24             	mov    %eax,(%esp)
 849a77a:	e8 07 53 df ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 849a77f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 849a786:	00 
 849a787:	89 44 24 04          	mov    %eax,0x4(%esp)
 849a78b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a78e:	89 04 24             	mov    %eax,(%esp)
 849a791:	e8 90 e4 c2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 849a796:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a799:	89 04 24             	mov    %eax,(%esp)
 849a79c:	e8 a5 e4 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 849a7a1:	c7 44 24 04 6d 02 00 	movl   $0x26d,0x4(%esp)
 849a7a8:	00 
 849a7a9:	89 04 24             	mov    %eax,(%esp)
 849a7ac:	e8 a5 e4 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 849a7b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a7b4:	89 04 24             	mov    %eax,(%esp)
 849a7b7:	e8 da e4 c2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 849a7bc:	89 c3                	mov    %eax,%ebx
 849a7be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a7c1:	89 04 24             	mov    %eax,(%esp)
 849a7c4:	e8 7d e4 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 849a7c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849a7cd:	89 04 24             	mov    %eax,(%esp)
 849a7d0:	e8 81 e4 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 849a7d5:	c7 45 e4 0c 00 00 00 	movl   $0xc,-0x1c(%ebp)
 849a7dc:	c7 45 e8 24 00 00 00 	movl   $0x24,-0x18(%ebp)
 849a7e3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a7e6:	89 04 24             	mov    %eax,(%esp)
 849a7e9:	e8 60 e4 c2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 849a7ee:	89 04 24             	mov    %eax,(%esp)
 849a7f1:	e8 a2 03 00 00       	call   849ab98 <_ZN12CStreamGuard11GetInBufferI22SIG_SAVE_EXPAND_CHARACEEPT_v>
 849a7f6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849a7f9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 849a7fd:	75 0a                	jne    849a809 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0xaf>
 849a7ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 849a804:	e9 c4 01 00 00       	jmp    849a9cd <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x273>
 849a809:	c7 44 24 08 9c 08 00 	movl   $0x89c,0x8(%esp)
 849a810:	00 
 849a811:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849a818:	00 
 849a819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a81c:	89 04 24             	mov    %eax,(%esp)
 849a81f:	e8 9c 34 be ff       	call   807dcc0 <memset@plt>
 849a824:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 849a82b:	ff 
 849a82c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a82f:	89 04 24             	mov    %eax,(%esp)
 849a832:	e8 69 37 1b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 849a837:	89 c2                	mov    %eax,%edx
 849a839:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849a83c:	89 10                	mov    %edx,(%eax)
 849a83e:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 849a845:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849a84c:	e9 07 01 00 00       	jmp    849a958 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x1fe>
 849a851:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849a855:	74 3c                	je     849a893 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x139>
 849a857:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a85a:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a85f:	89 c8                	mov    %ecx,%eax
 849a861:	f7 e2                	mul    %edx
 849a863:	c1 ea 03             	shr    $0x3,%edx
 849a866:	89 d0                	mov    %edx,%eax
 849a868:	01 c0                	add    %eax,%eax
 849a86a:	01 d0                	add    %edx,%eax
 849a86c:	c1 e0 02             	shl    $0x2,%eax
 849a86f:	89 ca                	mov    %ecx,%edx
 849a871:	29 c2                	sub    %eax,%edx
 849a873:	85 d2                	test   %edx,%edx
 849a875:	75 1c                	jne    849a893 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x139>
 849a877:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a87b:	75 09                	jne    849a886 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x12c>
 849a87d:	c7 45 f0 02 00 00 00 	movl   $0x2,-0x10(%ebp)
 849a884:	eb 0d                	jmp    849a893 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x139>
 849a886:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a88a:	76 07                	jbe    849a893 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x139>
 849a88c:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 849a893:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 849a897:	75 29                	jne    849a8c2 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x168>
 849a899:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a89c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a89f:	03 45 08             	add    0x8(%ebp),%eax
 849a8a2:	8d 50 05             	lea    0x5(%eax),%edx
 849a8a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a8a8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a8ab:	03 45 ec             	add    -0x14(%ebp),%eax
 849a8ae:	83 c0 04             	add    $0x4,%eax
 849a8b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a8b5:	89 04 24             	mov    %eax,(%esp)
 849a8b8:	e8 71 fd ca ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a8bd:	e9 92 00 00 00       	jmp    849a954 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x1fa>
 849a8c2:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 849a8c6:	75 44                	jne    849a90c <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x1b2>
 849a8c8:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a8cb:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a8d0:	89 c8                	mov    %ecx,%eax
 849a8d2:	f7 e2                	mul    %edx
 849a8d4:	c1 ea 03             	shr    $0x3,%edx
 849a8d7:	89 d0                	mov    %edx,%eax
 849a8d9:	01 c0                	add    %eax,%eax
 849a8db:	01 d0                	add    %edx,%eax
 849a8dd:	c1 e0 02             	shl    $0x2,%eax
 849a8e0:	89 ca                	mov    %ecx,%edx
 849a8e2:	29 c2                	sub    %eax,%edx
 849a8e4:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a8e7:	05 e0 02 00 00       	add    $0x2e0,%eax
 849a8ec:	03 45 08             	add    0x8(%ebp),%eax
 849a8ef:	8d 50 01             	lea    0x1(%eax),%edx
 849a8f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a8f5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a8f8:	03 45 ec             	add    -0x14(%ebp),%eax
 849a8fb:	83 c0 04             	add    $0x4,%eax
 849a8fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a902:	89 04 24             	mov    %eax,(%esp)
 849a905:	e8 24 fd ca ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a90a:	eb 48                	jmp    849a954 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x1fa>
 849a90c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 849a910:	75 42                	jne    849a954 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x1fa>
 849a912:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a915:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a91a:	89 c8                	mov    %ecx,%eax
 849a91c:	f7 e2                	mul    %edx
 849a91e:	c1 ea 03             	shr    $0x3,%edx
 849a921:	89 d0                	mov    %edx,%eax
 849a923:	01 c0                	add    %eax,%eax
 849a925:	01 d0                	add    %edx,%eax
 849a927:	c1 e0 02             	shl    $0x2,%eax
 849a92a:	89 ca                	mov    %ecx,%edx
 849a92c:	29 c2                	sub    %eax,%edx
 849a92e:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a931:	05 b0 05 00 00       	add    $0x5b0,%eax
 849a936:	03 45 08             	add    0x8(%ebp),%eax
 849a939:	8d 50 0d             	lea    0xd(%eax),%edx
 849a93c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a93f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a942:	03 45 ec             	add    -0x14(%ebp),%eax
 849a945:	83 c0 04             	add    $0x4,%eax
 849a948:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a94c:	89 04 24             	mov    %eax,(%esp)
 849a94f:	e8 da fc ca ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a954:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 849a958:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 849a95c:	0f 96 c0             	setbe  %al
 849a95f:	84 c0                	test   %al,%al
 849a961:	0f 85 ea fe ff ff    	jne    849a851 <_ZN16CExpandEquipslot9_saveDataEP5CUser+0xf7>
 849a967:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a96a:	89 04 24             	mov    %eax,(%esp)
 849a96d:	e8 0a 51 d9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 849a972:	8b 55 ec             	mov    -0x14(%ebp),%edx
 849a975:	88 82 98 08 00 00    	mov    %al,0x898(%edx)
 849a97b:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a97e:	89 04 24             	mov    %eax,(%esp)
 849a981:	e8 1a 51 d9 ff       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 849a986:	8b 55 ec             	mov    -0x14(%ebp),%edx
 849a989:	88 82 99 08 00 00    	mov    %al,0x899(%edx)
 849a98f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 849a994:	8d 55 dc             	lea    -0x24(%ebp),%edx
 849a997:	89 54 24 08          	mov    %edx,0x8(%esp)
 849a99b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 849a9a2:	00 
 849a9a3:	89 04 24             	mov    %eax,(%esp)
 849a9a6:	e8 33 66 0d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 849a9ab:	bb 01 00 00 00       	mov    $0x1,%ebx
 849a9b0:	eb 1b                	jmp    849a9cd <_ZN16CExpandEquipslot9_saveDataEP5CUser+0x273>
 849a9b2:	89 d3                	mov    %edx,%ebx
 849a9b4:	89 c6                	mov    %eax,%esi
 849a9b6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a9b9:	89 04 24             	mov    %eax,(%esp)
 849a9bc:	e8 11 1f 18 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 849a9c1:	89 f0                	mov    %esi,%eax
 849a9c3:	89 da                	mov    %ebx,%edx
 849a9c5:	89 04 24             	mov    %eax,(%esp)
 849a9c8:	e8 83 8d 64 00       	call   8ae3750 <_Unwind_Resume>
 849a9cd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849a9d0:	89 04 24             	mov    %eax,(%esp)
 849a9d3:	e8 fa 1e 18 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 849a9d8:	89 d8                	mov    %ebx,%eax
 849a9da:	83 c4 30             	add    $0x30,%esp
 849a9dd:	5b                   	pop    %ebx
 849a9de:	5e                   	pop    %esi
 849a9df:	5d                   	pop    %ebp
 849a9e0:	c3                   	ret
 849a9e1:	90                   	nop

```

```c
// CExpandEquipslot::_saveData @ 0x849a75a

/* CExpandEquipslot::_saveData(CUser*) */

undefined4 __thiscall CExpandEquipslot::_saveData(CExpandEquipslot *this,CUser *param_1)

{
  SIG_SAVE_EXPAND_CHARAC SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  SIG_SAVE_EXPAND_CHARAC *local_18;
  int local_14;
  uint local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ExpandEquipslot.cpp",0x247);
  CStreamGuard::CStreamGuard(local_28,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0849a7ac to 0849a9aa has its CatchHandler @ 0849a9b2 */
  CStreamGuard::operator<<(pCVar3,0x26d);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar3,iVar4);
  local_20 = 0xc;
  local_1c = 0x24;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_18 = CStreamGuard::GetInBuffer<SIG_SAVE_EXPAND_CHARAC>(pCVar3);
  if (local_18 == (SIG_SAVE_EXPAND_CHARAC *)0x0) {
    uVar5 = 0;
  }
  else {
    memset(local_18,0,0x89c);
    uVar5 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_18 = uVar5;
    local_14 = 1;
    for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
      if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
        if (local_10 == 0xc) {
          local_14 = 2;
        }
        else if (0xc < local_10) {
          local_14 = 3;
        }
      }
      if (local_14 == 1) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + local_10 * 0x3d + 5));
      }
      else if (local_14 == 2) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1));
      }
      else if (local_14 == 3) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd));
      }
    }
    SVar1 = (SIG_SAVE_EXPAND_CHARAC)
            CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    local_18[0x898] = SVar1;
    SVar1 = (SIG_SAVE_EXPAND_CHARAC)
            CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
    local_18[0x899] = SVar1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
    uVar5 = 1;
  }
  CStreamGuard::~CStreamGuard(local_28);
  return uVar5;
}

```

---

## getData

```asm
// === 0849a436 CExpandEquipslot::getData  [0x0849a436-0x849a57b] ===
 849a436:	55                   	push   %ebp
 849a437:	89 e5                	mov    %esp,%ebp
 849a439:	83 ec 38             	sub    $0x38,%esp
 849a43c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849a43f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849a442:	c7 45 e8 0c 00 00 00 	movl   $0xc,-0x18(%ebp)
 849a449:	c7 45 ec 24 00 00 00 	movl   $0x24,-0x14(%ebp)
 849a450:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 849a457:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849a45e:	e9 07 01 00 00       	jmp    849a56a <_ZNK16CExpandEquipslot7getDataEPc+0x134>
 849a463:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849a467:	74 3c                	je     849a4a5 <_ZNK16CExpandEquipslot7getDataEPc+0x6f>
 849a469:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a46c:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a471:	89 c8                	mov    %ecx,%eax
 849a473:	f7 e2                	mul    %edx
 849a475:	c1 ea 03             	shr    $0x3,%edx
 849a478:	89 d0                	mov    %edx,%eax
 849a47a:	01 c0                	add    %eax,%eax
 849a47c:	01 d0                	add    %edx,%eax
 849a47e:	c1 e0 02             	shl    $0x2,%eax
 849a481:	89 ca                	mov    %ecx,%edx
 849a483:	29 c2                	sub    %eax,%edx
 849a485:	85 d2                	test   %edx,%edx
 849a487:	75 1c                	jne    849a4a5 <_ZNK16CExpandEquipslot7getDataEPc+0x6f>
 849a489:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a48d:	75 09                	jne    849a498 <_ZNK16CExpandEquipslot7getDataEPc+0x62>
 849a48f:	c7 45 f0 02 00 00 00 	movl   $0x2,-0x10(%ebp)
 849a496:	eb 0d                	jmp    849a4a5 <_ZNK16CExpandEquipslot7getDataEPc+0x6f>
 849a498:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a49c:	76 07                	jbe    849a4a5 <_ZNK16CExpandEquipslot7getDataEPc+0x6f>
 849a49e:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 849a4a5:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 849a4a9:	75 29                	jne    849a4d4 <_ZNK16CExpandEquipslot7getDataEPc+0x9e>
 849a4ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a4ae:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a4b1:	03 45 08             	add    0x8(%ebp),%eax
 849a4b4:	8d 50 05             	lea    0x5(%eax),%edx
 849a4b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a4ba:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a4bd:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a4c0:	83 c0 04             	add    $0x4,%eax
 849a4c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a4c7:	89 04 24             	mov    %eax,(%esp)
 849a4ca:	e8 5f 01 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a4cf:	e9 92 00 00 00       	jmp    849a566 <_ZNK16CExpandEquipslot7getDataEPc+0x130>
 849a4d4:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 849a4d8:	75 44                	jne    849a51e <_ZNK16CExpandEquipslot7getDataEPc+0xe8>
 849a4da:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a4dd:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a4e2:	89 c8                	mov    %ecx,%eax
 849a4e4:	f7 e2                	mul    %edx
 849a4e6:	c1 ea 03             	shr    $0x3,%edx
 849a4e9:	89 d0                	mov    %edx,%eax
 849a4eb:	01 c0                	add    %eax,%eax
 849a4ed:	01 d0                	add    %edx,%eax
 849a4ef:	c1 e0 02             	shl    $0x2,%eax
 849a4f2:	89 ca                	mov    %ecx,%edx
 849a4f4:	29 c2                	sub    %eax,%edx
 849a4f6:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a4f9:	05 e0 02 00 00       	add    $0x2e0,%eax
 849a4fe:	03 45 08             	add    0x8(%ebp),%eax
 849a501:	8d 50 01             	lea    0x1(%eax),%edx
 849a504:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a507:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a50a:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a50d:	83 c0 04             	add    $0x4,%eax
 849a510:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a514:	89 04 24             	mov    %eax,(%esp)
 849a517:	e8 12 01 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a51c:	eb 48                	jmp    849a566 <_ZNK16CExpandEquipslot7getDataEPc+0x130>
 849a51e:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 849a522:	75 42                	jne    849a566 <_ZNK16CExpandEquipslot7getDataEPc+0x130>
 849a524:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a527:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a52c:	89 c8                	mov    %ecx,%eax
 849a52e:	f7 e2                	mul    %edx
 849a530:	c1 ea 03             	shr    $0x3,%edx
 849a533:	89 d0                	mov    %edx,%eax
 849a535:	01 c0                	add    %eax,%eax
 849a537:	01 d0                	add    %edx,%eax
 849a539:	c1 e0 02             	shl    $0x2,%eax
 849a53c:	89 ca                	mov    %ecx,%edx
 849a53e:	29 c2                	sub    %eax,%edx
 849a540:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a543:	05 b0 05 00 00       	add    $0x5b0,%eax
 849a548:	03 45 08             	add    0x8(%ebp),%eax
 849a54b:	8d 50 0d             	lea    0xd(%eax),%edx
 849a54e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a551:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a554:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a557:	83 c0 04             	add    $0x4,%eax
 849a55a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a55e:	89 04 24             	mov    %eax,(%esp)
 849a561:	e8 c8 00 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a566:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 849a56a:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 849a56e:	0f 96 c0             	setbe  %al
 849a571:	84 c0                	test   %al,%al
 849a573:	0f 85 ea fe ff ff    	jne    849a463 <_ZNK16CExpandEquipslot7getDataEPc+0x2d>
 849a579:	c9                   	leave
 849a57a:	c3                   	ret
 849a57b:	90                   	nop

```

```c
// CExpandEquipslot::getData @ 0x849a436

/* CExpandEquipslot::getData(char*) const */

void __thiscall CExpandEquipslot::getData(CExpandEquipslot *this,char *param_1)

{
  int local_14;
  uint local_10;
  
  local_14 = 1;
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
      if (local_10 == 0xc) {
        local_14 = 2;
      }
      else if (0xc < local_10) {
        local_14 = 3;
      }
    }
    if (local_14 == 1) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + local_10 * 0x3d + 5));
    }
    else if (local_14 == 2) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1));
    }
    else if (local_14 == 3) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd));
    }
  }
  return;
}

```

---

## getExpandEquipslotR

```asm
// === 084993aa CExpandEquipslot::getExpandEquipslotR  [0x084993aa-0x84993e1] ===
 84993aa:	55                   	push   %ebp
 84993ab:	89 e5                	mov    %esp,%ebp
 84993ad:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 84993b1:	75 08                	jne    84993bb <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x11>
 84993b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84993b6:	83 c0 05             	add    $0x5,%eax
 84993b9:	eb 25                	jmp    84993e0 <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x36>
 84993bb:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 84993bf:	75 0a                	jne    84993cb <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x21>
 84993c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84993c4:	05 e1 02 00 00       	add    $0x2e1,%eax
 84993c9:	eb 15                	jmp    84993e0 <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x36>
 84993cb:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 84993cf:	75 0a                	jne    84993db <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x31>
 84993d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84993d4:	05 bd 05 00 00       	add    $0x5bd,%eax
 84993d9:	eb 05                	jmp    84993e0 <_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT+0x36>
 84993db:	b8 00 00 00 00       	mov    $0x0,%eax
 84993e0:	5d                   	pop    %ebp
 84993e1:	c3                   	ret

```

```c
// CExpandEquipslot::getExpandEquipslotR @ 0x84993aa

/* CExpandEquipslot::getExpandEquipslotR(ENUM_EQUIPSLOT) const */

CExpandEquipslot * __thiscall
CExpandEquipslot::getExpandEquipslotR(CExpandEquipslot *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 5;
  }
  else if (param_2 == 2) {
    this = this + 0x2e1;
  }
  else if (param_2 == 3) {
    this = this + 0x5bd;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}

```

---

## getExpandEquipslotW

```asm
// === 084993e2 CExpandEquipslot::getExpandEquipslotW  [0x084993e2-0x849943d] ===
 84993e2:	55                   	push   %ebp
 84993e3:	89 e5                	mov    %esp,%ebp
 84993e5:	83 ec 18             	sub    $0x18,%esp
 84993e8:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 84993ec:	75 13                	jne    8499401 <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x1f>
 84993ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84993f1:	89 04 24             	mov    %eax,(%esp)
 84993f4:	e8 cb f7 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 84993f9:	8b 45 08             	mov    0x8(%ebp),%eax
 84993fc:	83 c0 05             	add    $0x5,%eax
 84993ff:	eb 3b                	jmp    849943c <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x5a>
 8499401:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8499405:	75 15                	jne    849941c <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x3a>
 8499407:	8b 45 08             	mov    0x8(%ebp),%eax
 849940a:	89 04 24             	mov    %eax,(%esp)
 849940d:	e8 b2 f7 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8499412:	8b 45 08             	mov    0x8(%ebp),%eax
 8499415:	05 e1 02 00 00       	add    $0x2e1,%eax
 849941a:	eb 20                	jmp    849943c <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x5a>
 849941c:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8499420:	75 15                	jne    8499437 <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x55>
 8499422:	8b 45 08             	mov    0x8(%ebp),%eax
 8499425:	89 04 24             	mov    %eax,(%esp)
 8499428:	e8 97 f7 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 849942d:	8b 45 08             	mov    0x8(%ebp),%eax
 8499430:	05 bd 05 00 00       	add    $0x5bd,%eax
 8499435:	eb 05                	jmp    849943c <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT+0x5a>
 8499437:	b8 00 00 00 00       	mov    $0x0,%eax
 849943c:	c9                   	leave
 849943d:	c3                   	ret

```

```c
// CExpandEquipslot::getExpandEquipslotW @ 0x84993e2

/* CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT) */

CExpandEquipslot * __thiscall
CExpandEquipslot::getExpandEquipslotW(CExpandEquipslot *this,int param_2)

{
  if (param_2 == 1) {
    charac_expand::CData::alter((CData *)this);
    this = this + 5;
  }
  else if (param_2 == 2) {
    charac_expand::CData::alter((CData *)this);
    this = this + 0x2e1;
  }
  else if (param_2 == 3) {
    charac_expand::CData::alter((CData *)this);
    this = this + 0x5bd;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}

```

---

## loadData

```asm
// === 0849a2ca CExpandEquipslot::loadData  [0x0849a2ca-0x849a435] ===
 849a2ca:	55                   	push   %ebp
 849a2cb:	89 e5                	mov    %esp,%ebp
 849a2cd:	53                   	push   %ebx
 849a2ce:	83 ec 34             	sub    $0x34,%esp
 849a2d1:	8b 45 08             	mov    0x8(%ebp),%eax
 849a2d4:	8b 00                	mov    (%eax),%eax
 849a2d6:	83 c0 1c             	add    $0x1c,%eax
 849a2d9:	8b 10                	mov    (%eax),%edx
 849a2db:	8b 45 08             	mov    0x8(%ebp),%eax
 849a2de:	89 04 24             	mov    %eax,(%esp)
 849a2e1:	ff d2                	call   *%edx
 849a2e3:	8b 45 10             	mov    0x10(%ebp),%eax
 849a2e6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849a2e9:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 849a2f0:	c7 45 ec 0c 00 00 00 	movl   $0xc,-0x14(%ebp)
 849a2f7:	c7 45 f0 24 00 00 00 	movl   $0x24,-0x10(%ebp)
 849a2fe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849a305:	e9 07 01 00 00       	jmp    849a411 <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x147>
 849a30a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849a30e:	74 3c                	je     849a34c <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x82>
 849a310:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a313:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a318:	89 c8                	mov    %ecx,%eax
 849a31a:	f7 e2                	mul    %edx
 849a31c:	c1 ea 03             	shr    $0x3,%edx
 849a31f:	89 d0                	mov    %edx,%eax
 849a321:	01 c0                	add    %eax,%eax
 849a323:	01 d0                	add    %edx,%eax
 849a325:	c1 e0 02             	shl    $0x2,%eax
 849a328:	89 ca                	mov    %ecx,%edx
 849a32a:	29 c2                	sub    %eax,%edx
 849a32c:	85 d2                	test   %edx,%edx
 849a32e:	75 1c                	jne    849a34c <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x82>
 849a330:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a334:	75 09                	jne    849a33f <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x75>
 849a336:	c7 45 e8 02 00 00 00 	movl   $0x2,-0x18(%ebp)
 849a33d:	eb 0d                	jmp    849a34c <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x82>
 849a33f:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 849a343:	76 07                	jbe    849a34c <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x82>
 849a345:	c7 45 e8 03 00 00 00 	movl   $0x3,-0x18(%ebp)
 849a34c:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 849a350:	75 29                	jne    849a37b <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0xb1>
 849a352:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a355:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a358:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a35b:	8d 50 04             	lea    0x4(%eax),%edx
 849a35e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a361:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a364:	03 45 08             	add    0x8(%ebp),%eax
 849a367:	83 c0 05             	add    $0x5,%eax
 849a36a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849a36e:	89 04 24             	mov    %eax,(%esp)
 849a371:	e8 b8 02 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a376:	e9 92 00 00 00       	jmp    849a40d <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x143>
 849a37b:	83 7d e8 02          	cmpl   $0x2,-0x18(%ebp)
 849a37f:	75 44                	jne    849a3c5 <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0xfb>
 849a381:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a384:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a387:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a38a:	8d 58 04             	lea    0x4(%eax),%ebx
 849a38d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a390:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a395:	89 c8                	mov    %ecx,%eax
 849a397:	f7 e2                	mul    %edx
 849a399:	c1 ea 03             	shr    $0x3,%edx
 849a39c:	89 d0                	mov    %edx,%eax
 849a39e:	01 c0                	add    %eax,%eax
 849a3a0:	01 d0                	add    %edx,%eax
 849a3a2:	c1 e0 02             	shl    $0x2,%eax
 849a3a5:	89 ca                	mov    %ecx,%edx
 849a3a7:	29 c2                	sub    %eax,%edx
 849a3a9:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a3ac:	05 e0 02 00 00       	add    $0x2e0,%eax
 849a3b1:	03 45 08             	add    0x8(%ebp),%eax
 849a3b4:	83 c0 01             	add    $0x1,%eax
 849a3b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849a3bb:	89 04 24             	mov    %eax,(%esp)
 849a3be:	e8 6b 02 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a3c3:	eb 48                	jmp    849a40d <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x143>
 849a3c5:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 849a3c9:	75 42                	jne    849a40d <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x143>
 849a3cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849a3ce:	6b c0 3d             	imul   $0x3d,%eax,%eax
 849a3d1:	03 45 e4             	add    -0x1c(%ebp),%eax
 849a3d4:	8d 58 04             	lea    0x4(%eax),%ebx
 849a3d7:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 849a3da:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 849a3df:	89 c8                	mov    %ecx,%eax
 849a3e1:	f7 e2                	mul    %edx
 849a3e3:	c1 ea 03             	shr    $0x3,%edx
 849a3e6:	89 d0                	mov    %edx,%eax
 849a3e8:	01 c0                	add    %eax,%eax
 849a3ea:	01 d0                	add    %edx,%eax
 849a3ec:	c1 e0 02             	shl    $0x2,%eax
 849a3ef:	89 ca                	mov    %ecx,%edx
 849a3f1:	29 c2                	sub    %eax,%edx
 849a3f3:	6b c2 3d             	imul   $0x3d,%edx,%eax
 849a3f6:	05 b0 05 00 00       	add    $0x5b0,%eax
 849a3fb:	03 45 08             	add    0x8(%ebp),%eax
 849a3fe:	83 c0 0d             	add    $0xd,%eax
 849a401:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849a405:	89 04 24             	mov    %eax,(%esp)
 849a408:	e8 21 02 cb ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 849a40d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 849a411:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 849a415:	0f 96 c0             	setbe  %al
 849a418:	84 c0                	test   %al,%al
 849a41a:	0f 85 ea fe ff ff    	jne    849a30a <_ZN16CExpandEquipslot8loadDataEP5CUserPc+0x40>
 849a420:	8b 45 08             	mov    0x8(%ebp),%eax
 849a423:	89 04 24             	mov    %eax,(%esp)
 849a426:	e8 99 e7 c2 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 849a42b:	b8 01 00 00 00       	mov    $0x1,%eax
 849a430:	83 c4 34             	add    $0x34,%esp
 849a433:	5b                   	pop    %ebx
 849a434:	5d                   	pop    %ebp
 849a435:	c3                   	ret

```

```c
// CExpandEquipslot::loadData @ 0x849a2ca

/* CExpandEquipslot::loadData(CUser*, char*) */

undefined4 __thiscall
CExpandEquipslot::loadData(CExpandEquipslot *this,CUser *param_1,char *param_2)

{
  int local_1c;
  uint local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_1c = 1;
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
      if (local_10 == 0xc) {
        local_1c = 2;
      }
      else if (0xc < local_10) {
        local_1c = 3;
      }
    }
    if (local_1c == 1) {
      Inven_Item::setCopy((Inven_Item *)(this + local_10 * 0x3d + 5),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
    else if (local_1c == 2) {
      Inven_Item::setCopy((Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
    else if (local_1c == 3) {
      Inven_Item::setCopy((Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
  }
  charac_expand::CData::alter((CData *)this);
  return 1;
}

```

---

## ~CExpandEquipslot

```asm
// === 0849935c CExpandEquipslot::~CExpandEquipslot  [0x0849935c-0x849938b] ===
 849935c:	55                   	push   %ebp
 849935d:	89 e5                	mov    %esp,%ebp
 849935f:	83 ec 18             	sub    $0x18,%esp
 8499362:	8b 45 08             	mov    0x8(%ebp),%eax
 8499365:	c7 00 08 b2 c7 08    	movl   $0x8c7b208,(%eax)
 849936b:	8b 45 08             	mov    0x8(%ebp),%eax
 849936e:	89 04 24             	mov    %eax,(%esp)
 8499371:	e8 6c f8 c2 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 8499376:	b8 00 00 00 00       	mov    $0x0,%eax
 849937b:	84 c0                	test   %al,%al
 849937d:	74 0b                	je     849938a <_ZN16CExpandEquipslotD1Ev+0x2e>
 849937f:	8b 45 08             	mov    0x8(%ebp),%eax
 8499382:	89 04 24             	mov    %eax,(%esp)
 8499385:	e8 66 b1 28 00       	call   87244f0 <_ZdlPv>
 849938a:	c9                   	leave
 849938b:	c3                   	ret

```

```c
// CExpandEquipslot::~CExpandEquipslot @ 0x849935c

/* WARNING: Removing unreachable block (ram,0x0849937f) */
/* CExpandEquipslot::~CExpandEquipslot() */

void __thiscall CExpandEquipslot::~CExpandEquipslot(CExpandEquipslot *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7b208;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CExpandEquipslot_0849938c

```asm
// === 0849938c CExpandEquipslot::~CExpandEquipslot  [0x0849938c-0x84993a9] ===
 849938c:	55                   	push   %ebp
 849938d:	89 e5                	mov    %esp,%ebp
 849938f:	83 ec 18             	sub    $0x18,%esp
 8499392:	8b 45 08             	mov    0x8(%ebp),%eax
 8499395:	89 04 24             	mov    %eax,(%esp)
 8499398:	e8 bf ff ff ff       	call   849935c <_ZN16CExpandEquipslotD1Ev>
 849939d:	8b 45 08             	mov    0x8(%ebp),%eax
 84993a0:	89 04 24             	mov    %eax,(%esp)
 84993a3:	e8 48 b1 28 00       	call   87244f0 <_ZdlPv>
 84993a8:	c9                   	leave
 84993a9:	c3                   	ret

```

```c
// CExpandEquipslot::~CExpandEquipslot @ 0x849938c

/* CExpandEquipslot::~CExpandEquipslot() */

void __thiscall CExpandEquipslot::~CExpandEquipslot(CExpandEquipslot *this)

{
  ~CExpandEquipslot(this);
  operator_delete(this);
  return;
}

```

