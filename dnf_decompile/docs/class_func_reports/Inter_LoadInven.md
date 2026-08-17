# Inter_LoadInven

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _CheckOverEquipItem

```asm
// === 084c4d38 Inter_LoadInven::_CheckOverEquipItem  [0x084c4d38-0x84c5053] ===
 84c4d38:	55                   	push   %ebp
 84c4d39:	89 e5                	mov    %esp,%ebp
 84c4d3b:	53                   	push   %ebx
 84c4d3c:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 84c4d42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4d45:	89 04 24             	mov    %eax,(%esp)
 84c4d48:	e8 f1 73 02 00       	call   84ec13e <_ZN15CUserCharacInfo27needCurCharacCheckOverEquipEv>
 84c4d4d:	83 f0 01             	xor    $0x1,%eax
 84c4d50:	84 c0                	test   %al,%al
 84c4d52:	0f 85 f2 02 00 00    	jne    84c504a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x312>
 84c4d58:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4d5b:	89 04 24             	mov    %eax,(%esp)
 84c4d5e:	e8 cf b6 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c4d63:	85 c0                	test   %eax,%eax
 84c4d65:	0f 94 c0             	sete   %al
 84c4d68:	84 c0                	test   %al,%al
 84c4d6a:	0f 85 dd 02 00 00    	jne    84c504d <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x315>
 84c4d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4d73:	89 04 24             	mov    %eax,(%esp)
 84c4d76:	e8 13 55 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c4d7b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c4d7e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84c4d85:	e9 a4 02 00 00       	jmp    84c502e <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f6>
 84c4d8a:	8d 45 9f             	lea    -0x61(%ebp),%eax
 84c4d8d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c4d90:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c4d94:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c4d9b:	00 
 84c4d9c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c4d9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4da3:	89 04 24             	mov    %eax,(%esp)
 84c4da6:	e8 6d 6b 03 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84c4dab:	83 ec 04             	sub    $0x4,%esp
 84c4dae:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 84c4db1:	85 c0                	test   %eax,%eax
 84c4db3:	0f 84 67 02 00 00    	je     84c5020 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2e8>
 84c4db9:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 84c4dbc:	89 c3                	mov    %eax,%ebx
 84c4dbe:	e8 d8 73 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c4dc3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c4dc7:	89 04 24             	mov    %eax,(%esp)
 84c4dca:	e8 63 ac e9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84c4dcf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c4dd2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84c4dd6:	0f 84 47 02 00 00    	je     84c5023 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2eb>
 84c4ddc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4ddf:	89 04 24             	mov    %eax,(%esp)
 84c4de2:	e8 13 c5 c2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84c4de7:	84 c0                	test   %al,%al
 84c4de9:	0f 85 37 02 00 00    	jne    84c5026 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2ee>
 84c4def:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 84c4df2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4df5:	89 04 24             	mov    %eax,(%esp)
 84c4df8:	e8 2b 80 c6 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 84c4dfd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c4e01:	89 04 24             	mov    %eax,(%esp)
 84c4e04:	e8 f3 4b 02 00       	call   84e99fc <_ZNK8WongWork12CUserPremium21GetOverEquipableLevelE18ENUM_EQUIPMENTTYPE>
 84c4e09:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c4e0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4e0f:	89 04 24             	mov    %eax,(%esp)
 84c4e12:	e8 89 19 18 00       	call   86467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>
 84c4e17:	89 c3                	mov    %eax,%ebx
 84c4e19:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4e1c:	89 04 24             	mov    %eax,(%esp)
 84c4e1f:	e8 94 54 c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c4e24:	89 da                	mov    %ebx,%edx
 84c4e26:	29 c2                	sub    %eax,%edx
 84c4e28:	89 d0                	mov    %edx,%eax
 84c4e2a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c4e2d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c4e30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4e34:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84c4e37:	89 04 24             	mov    %eax,(%esp)
 84c4e3a:	e8 d9 93 bc ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84c4e3f:	8b 00                	mov    (%eax),%eax
 84c4e41:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c4e44:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4e47:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c4e4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4e4d:	89 04 24             	mov    %eax,(%esp)
 84c4e50:	e8 63 54 c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c4e55:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84c4e58:	01 d0                	add    %edx,%eax
 84c4e5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4e5e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4e61:	89 04 24             	mov    %eax,(%esp)
 84c4e64:	e8 53 47 02 00       	call   84e95bc <_ZNK5CItem15check_low_levelEi>
 84c4e69:	83 f0 01             	xor    $0x1,%eax
 84c4e6c:	84 c0                	test   %al,%al
 84c4e6e:	75 2c                	jne    84c4e9c <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x164>
 84c4e70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4e73:	89 04 24             	mov    %eax,(%esp)
 84c4e76:	e8 67 c4 c2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84c4e7b:	83 f8 05             	cmp    $0x5,%eax
 84c4e7e:	75 23                	jne    84c4ea3 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x16b>
 84c4e80:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c4e83:	89 04 24             	mov    %eax,(%esp)
 84c4e86:	e8 75 48 02 00       	call   84e9700 <_ZNK10CEquipItem17GetUsableMaxLevelEv>
 84c4e8b:	89 c3                	mov    %eax,%ebx
 84c4e8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4e90:	89 04 24             	mov    %eax,(%esp)
 84c4e93:	e8 20 54 c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c4e98:	39 c3                	cmp    %eax,%ebx
 84c4e9a:	7d 07                	jge    84c4ea3 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x16b>
 84c4e9c:	b8 01 00 00 00       	mov    $0x1,%eax
 84c4ea1:	eb 05                	jmp    84c4ea8 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x170>
 84c4ea3:	b8 00 00 00 00       	mov    $0x0,%eax
 84c4ea8:	84 c0                	test   %al,%al
 84c4eaa:	0f 84 7a 01 00 00    	je     84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c4eb0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4eb3:	8b 00                	mov    (%eax),%eax
 84c4eb5:	83 c0 10             	add    $0x10,%eax
 84c4eb8:	8b 10                	mov    (%eax),%edx
 84c4eba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4ebd:	89 04 24             	mov    %eax,(%esp)
 84c4ec0:	ff d2                	call   *%edx
 84c4ec2:	84 c0                	test   %al,%al
 84c4ec4:	74 62                	je     84c4f28 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x1f0>
 84c4ec6:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 84c4ecd:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 84c4ed4:	00 
 84c4ed5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c4edc:	00 
 84c4edd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c4ee0:	89 04 24             	mov    %eax,(%esp)
 84c4ee3:	e8 3c 69 03 00       	call   84fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 84c4ee8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c4eeb:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 84c4eef:	0f 94 c0             	sete   %al
 84c4ef2:	84 c0                	test   %al,%al
 84c4ef4:	0f 85 2f 01 00 00    	jne    84c5029 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f1>
 84c4efa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c4efd:	89 44 24 10          	mov    %eax,0x10(%esp)
 84c4f01:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 84c4f08:	00 
 84c4f09:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84c4f0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4f10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c4f17:	00 
 84c4f18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c4f1b:	89 04 24             	mov    %eax,(%esp)
 84c4f1e:	e8 65 b7 03 00       	call   8500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>
 84c4f23:	e9 02 01 00 00       	jmp    84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c4f28:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84c4f2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4f2f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c4f36:	00 
 84c4f37:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c4f3a:	89 04 24             	mov    %eax,(%esp)
 84c4f3d:	e8 e8 63 03 00       	call   84fb32a <_ZN10CInventory9ResetSlotEii>
 84c4f42:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 84c4f49:	00 
 84c4f4a:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 84c4f51:	00 
 84c4f52:	c7 44 24 44 0e 00 00 	movl   $0xe,0x44(%esp)
 84c4f59:	00 
 84c4f5a:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84c4f5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4f61:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84c4f64:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4f68:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84c4f6b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c4f6f:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84c4f72:	89 44 24 10          	mov    %eax,0x10(%esp)
 84c4f76:	8b 45 af             	mov    -0x51(%ebp),%eax
 84c4f79:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c4f7d:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84c4f80:	89 44 24 18          	mov    %eax,0x18(%esp)
 84c4f84:	8b 45 b7             	mov    -0x49(%ebp),%eax
 84c4f87:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84c4f8b:	8b 45 bb             	mov    -0x45(%ebp),%eax
 84c4f8e:	89 44 24 20          	mov    %eax,0x20(%esp)
 84c4f92:	8b 45 bf             	mov    -0x41(%ebp),%eax
 84c4f95:	89 44 24 24          	mov    %eax,0x24(%esp)
 84c4f99:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 84c4f9c:	89 44 24 28          	mov    %eax,0x28(%esp)
 84c4fa0:	8b 45 c7             	mov    -0x39(%ebp),%eax
 84c4fa3:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84c4fa7:	8b 45 cb             	mov    -0x35(%ebp),%eax
 84c4faa:	89 44 24 30          	mov    %eax,0x30(%esp)
 84c4fae:	8b 45 cf             	mov    -0x31(%ebp),%eax
 84c4fb1:	89 44 24 34          	mov    %eax,0x34(%esp)
 84c4fb5:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 84c4fb8:	89 44 24 38          	mov    %eax,0x38(%esp)
 84c4fbc:	8b 45 d7             	mov    -0x29(%ebp),%eax
 84c4fbf:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84c4fc3:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 84c4fc7:	88 44 24 40          	mov    %al,0x40(%esp)
 84c4fcb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c4fce:	89 04 24             	mov    %eax,(%esp)
 84c4fd1:	e8 b0 dd 03 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84c4fd6:	c1 e8 1f             	shr    $0x1f,%eax
 84c4fd9:	84 c0                	test   %al,%al
 84c4fdb:	74 4d                	je     84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c4fdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4fe0:	89 04 24             	mov    %eax,(%esp)
 84c4fe3:	e8 66 6c c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c4fe8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84c4fef:	00 
 84c4ff0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c4ff7:	00 
 84c4ff8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84c4fff:	00 
 84c5000:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c5004:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c500b:	00 
 84c500c:	8d 45 9f             	lea    -0x61(%ebp),%eax
 84c500f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5013:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5016:	89 04 24             	mov    %eax,(%esp)
 84c5019:	e8 aa 0a 09 00       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 84c501e:	eb 0a                	jmp    84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c5020:	90                   	nop
 84c5021:	eb 07                	jmp    84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c5023:	90                   	nop
 84c5024:	eb 04                	jmp    84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c5026:	90                   	nop
 84c5027:	eb 01                	jmp    84c502a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x2f2>
 84c5029:	90                   	nop
 84c502a:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84c502e:	83 7d e8 15          	cmpl   $0x15,-0x18(%ebp)
 84c5032:	0f 9e c0             	setle  %al
 84c5035:	84 c0                	test   %al,%al
 84c5037:	0f 85 4d fd ff ff    	jne    84c4d8a <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x52>
 84c503d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5040:	89 04 24             	mov    %eax,(%esp)
 84c5043:	e8 1a 71 02 00       	call   84ec162 <_ZN15CUserCharacInfo27resetCurCharacOverEquipFlagEv>
 84c5048:	eb 04                	jmp    84c504e <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x316>
 84c504a:	90                   	nop
 84c504b:	eb 01                	jmp    84c504e <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser+0x316>
 84c504d:	90                   	nop
 84c504e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84c5051:	c9                   	leave
 84c5052:	c3                   	ret
 84c5053:	90                   	nop

```

```c
// Inter_LoadInven::_CheckOverEquipItem @ 0x84c4d38

/* Inter_LoadInven::_CheckOverEquipItem(CUser*) */

void __thiscall Inter_LoadInven::_CheckOverEquipItem(Inter_LoadInven *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CUserPremium *pCVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 uStack_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
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
  undefined1 local_29;
  int local_28;
  int local_24;
  CInventory *local_20;
  int local_1c;
  CItem *local_18;
  CItem *local_14;
  int local_10;
  
  cVar2 = CUserCharacInfo::needCurCharacCheckOverEquip((CUserCharacInfo *)param_1);
  if ((cVar2 == '\x01') &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    for (local_1c = 0; local_1c < 0x16; local_1c = local_1c + 1) {
      CInventory::GetInvenSlot((int)&local_65,(int)local_20);
      if (CONCAT22(uStack_61,uStack_63) != 0) {
        iVar3 = CONCAT22(uStack_61,uStack_63);
        this_00 = (CDataManager *)G_CDataManager();
        local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
        if ((local_18 != (CItem *)0x0) &&
           (cVar2 = CItem::is_stackable(local_18), iVar3 = local_1c, cVar2 == '\0')) {
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
          local_28 = WongWork::CUserPremium::GetOverEquipableLevel(pCVar4,iVar3);
          iVar3 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
          local_24 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_24 = iVar3 - local_24;
          piVar5 = std::max<int>(&local_28,&local_24);
          local_28 = *piVar5;
          local_14 = local_18;
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          cVar2 = CItem::check_low_level(local_18,iVar3 + local_28);
          if (cVar2 == '\x01') {
            iVar3 = CItem::GetAttachType(local_18);
            if (iVar3 == 5) {
              iVar3 = CEquipItem::GetUsableMaxLevel((CEquipItem *)local_14);
              iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
              if (iVar3 < iVar6) goto LAB_084c4e9c;
            }
            bVar1 = false;
          }
          else {
LAB_084c4e9c:
            bVar1 = true;
          }
          if (bVar1) {
            cVar2 = (**(code **)(*(int *)local_18 + 0x10))(local_18);
            if (cVar2 == '\0') {
              CInventory::ResetSlot(local_20,0,local_1c);
              iVar3 = CInventory::insertItemIntoInventory
                                (local_20,CONCAT22(uStack_63,local_65),CONCAT22(uStack_5f,uStack_61)
                                 ,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,
                                 local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,0xe,
                                 0,0);
              if (iVar3 < 0) {
                uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                WongWork::CMailBoxHelper::ReqDBSendNewMail
                          (param_1,(Inven_Item *)&local_65,0,uVar7,true,(char *)0x0,0);
              }
            }
            else {
              local_10 = 0xffffffff;
              local_10 = CInventory::get_empty_slot(local_20,2,8);
              if (local_10 != -1) {
                CInventory::move_item(local_20,0,local_1c,2,local_10);
              }
            }
          }
        }
      }
    }
    CUserCharacInfo::resetCurCharacOverEquipFlag((CUserCharacInfo *)param_1);
  }
  return;
}

```

---

## _CheckUsableExpertJobEquipment

```asm
// === 084c4b38 Inter_LoadInven::_CheckUsableExpertJobEquipment  [0x084c4b38-0x84c4d37] ===
 84c4b38:	55                   	push   %ebp
 84c4b39:	89 e5                	mov    %esp,%ebp
 84c4b3b:	53                   	push   %ebx
 84c4b3c:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 84c4b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4b45:	89 04 24             	mov    %eax,(%esp)
 84c4b48:	e8 e5 b8 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c4b4d:	85 c0                	test   %eax,%eax
 84c4b4f:	0f 94 c0             	sete   %al
 84c4b52:	84 c0                	test   %al,%al
 84c4b54:	0f 85 d8 01 00 00    	jne    84c4d32 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1fa>
 84c4b5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4b5d:	89 04 24             	mov    %eax,(%esp)
 84c4b60:	e8 29 57 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c4b65:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c4b68:	c7 45 f0 0a 00 00 00 	movl   $0xa,-0x10(%ebp)
 84c4b6f:	e9 ad 01 00 00       	jmp    84c4d21 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e9>
 84c4b74:	8d 45 af             	lea    -0x51(%ebp),%eax
 84c4b77:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84c4b7a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c4b7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c4b85:	00 
 84c4b86:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84c4b89:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4b8d:	89 04 24             	mov    %eax,(%esp)
 84c4b90:	e8 83 6d 03 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84c4b95:	83 ec 04             	sub    $0x4,%esp
 84c4b98:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 84c4b9b:	85 c0                	test   %eax,%eax
 84c4b9d:	0f 84 73 01 00 00    	je     84c4d16 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1de>
 84c4ba3:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 84c4ba6:	89 c3                	mov    %eax,%ebx
 84c4ba8:	e8 ee 75 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c4bad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c4bb1:	89 04 24             	mov    %eax,(%esp)
 84c4bb4:	e8 79 ae e9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84c4bb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c4bbc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c4bc0:	0f 84 53 01 00 00    	je     84c4d19 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e1>
 84c4bc6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c4bc9:	89 04 24             	mov    %eax,(%esp)
 84c4bcc:	e8 29 c7 c2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84c4bd1:	84 c0                	test   %al,%al
 84c4bd3:	0f 85 43 01 00 00    	jne    84c4d1c <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e4>
 84c4bd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4bdc:	89 04 24             	mov    %eax,(%esp)
 84c4bdf:	e8 42 04 eb ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 84c4be4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4be8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4beb:	89 04 24             	mov    %eax,(%esp)
 84c4bee:	e8 89 70 1c 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 84c4bf3:	89 c3                	mov    %eax,%ebx
 84c4bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4bf8:	89 04 24             	mov    %eax,(%esp)
 84c4bfb:	e8 94 ac d6 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 84c4c00:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c4c04:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4c08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c4c0b:	89 04 24             	mov    %eax,(%esp)
 84c4c0e:	e8 bb 49 02 00       	call   84e95ce <_ZNK5CItem17isExpertJobUsableE20ENUM_EXPERT_JOB_TYPEi>
 84c4c13:	83 f0 01             	xor    $0x1,%eax
 84c4c16:	84 c0                	test   %al,%al
 84c4c18:	0f 84 ff 00 00 00    	je     84c4d1d <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e5>
 84c4c1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c4c21:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4c25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c4c2c:	00 
 84c4c2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4c30:	89 04 24             	mov    %eax,(%esp)
 84c4c33:	e8 f2 66 03 00       	call   84fb32a <_ZN10CInventory9ResetSlotEii>
 84c4c38:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 84c4c3f:	00 
 84c4c40:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 84c4c47:	00 
 84c4c48:	c7 44 24 44 0e 00 00 	movl   $0xe,0x44(%esp)
 84c4c4f:	00 
 84c4c50:	8b 45 af             	mov    -0x51(%ebp),%eax
 84c4c53:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4c57:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84c4c5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4c5e:	8b 45 b7             	mov    -0x49(%ebp),%eax
 84c4c61:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c4c65:	8b 45 bb             	mov    -0x45(%ebp),%eax
 84c4c68:	89 44 24 10          	mov    %eax,0x10(%esp)
 84c4c6c:	8b 45 bf             	mov    -0x41(%ebp),%eax
 84c4c6f:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c4c73:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 84c4c76:	89 44 24 18          	mov    %eax,0x18(%esp)
 84c4c7a:	8b 45 c7             	mov    -0x39(%ebp),%eax
 84c4c7d:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84c4c81:	8b 45 cb             	mov    -0x35(%ebp),%eax
 84c4c84:	89 44 24 20          	mov    %eax,0x20(%esp)
 84c4c88:	8b 45 cf             	mov    -0x31(%ebp),%eax
 84c4c8b:	89 44 24 24          	mov    %eax,0x24(%esp)
 84c4c8f:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 84c4c92:	89 44 24 28          	mov    %eax,0x28(%esp)
 84c4c96:	8b 45 d7             	mov    -0x29(%ebp),%eax
 84c4c99:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84c4c9d:	8b 45 db             	mov    -0x25(%ebp),%eax
 84c4ca0:	89 44 24 30          	mov    %eax,0x30(%esp)
 84c4ca4:	8b 45 df             	mov    -0x21(%ebp),%eax
 84c4ca7:	89 44 24 34          	mov    %eax,0x34(%esp)
 84c4cab:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 84c4cae:	89 44 24 38          	mov    %eax,0x38(%esp)
 84c4cb2:	8b 45 e7             	mov    -0x19(%ebp),%eax
 84c4cb5:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84c4cb9:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84c4cbd:	88 44 24 40          	mov    %al,0x40(%esp)
 84c4cc1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4cc4:	89 04 24             	mov    %eax,(%esp)
 84c4cc7:	e8 ba e0 03 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84c4ccc:	c1 e8 1f             	shr    $0x1f,%eax
 84c4ccf:	84 c0                	test   %al,%al
 84c4cd1:	74 4a                	je     84c4d1d <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e5>
 84c4cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4cd6:	89 04 24             	mov    %eax,(%esp)
 84c4cd9:	e8 70 6f c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c4cde:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84c4ce5:	00 
 84c4ce6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c4ced:	00 
 84c4cee:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84c4cf5:	00 
 84c4cf6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c4cfa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c4d01:	00 
 84c4d02:	8d 45 af             	lea    -0x51(%ebp),%eax
 84c4d05:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4d09:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4d0c:	89 04 24             	mov    %eax,(%esp)
 84c4d0f:	e8 b4 0d 09 00       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 84c4d14:	eb 07                	jmp    84c4d1d <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e5>
 84c4d16:	90                   	nop
 84c4d17:	eb 04                	jmp    84c4d1d <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e5>
 84c4d19:	90                   	nop
 84c4d1a:	eb 01                	jmp    84c4d1d <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1e5>
 84c4d1c:	90                   	nop
 84c4d1d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84c4d21:	83 7d f0 15          	cmpl   $0x15,-0x10(%ebp)
 84c4d25:	0f 9e c0             	setle  %al
 84c4d28:	84 c0                	test   %al,%al
 84c4d2a:	0f 85 44 fe ff ff    	jne    84c4b74 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x3c>
 84c4d30:	eb 01                	jmp    84c4d33 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser+0x1fb>
 84c4d32:	90                   	nop
 84c4d33:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84c4d36:	c9                   	leave
 84c4d37:	c3                   	ret

```

```c
// Inter_LoadInven::_CheckUsableExpertJobEquipment @ 0x84c4b38

/* Inter_LoadInven::_CheckUsableExpertJobEquipment(CUser*) */

void __thiscall
Inter_LoadInven::_CheckUsableExpertJobEquipment(Inter_LoadInven *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined2 uStack_4f;
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
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  CInventory *local_18;
  int local_14;
  CItem *local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
      CInventory::GetInvenSlot((int)&local_55,(int)local_18);
      if (CONCAT22(uStack_51,uStack_53) != 0) {
        iVar2 = CONCAT22(uStack_51,uStack_53);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar2);
        if ((local_10 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_10), cVar1 == '\0')) {
          iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
          uVar3 = CUser::GetCurExpertJobLevel(param_1,iVar2);
          uVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
          cVar1 = CItem::isExpertJobUsable(local_10,uVar4,uVar3);
          if (cVar1 != '\x01') {
            CInventory::ResetSlot(local_18,0,local_14);
            iVar2 = CInventory::insertItemIntoInventory
                              (local_18,CONCAT22(uStack_53,local_55),CONCAT22(uStack_4f,uStack_51),
                               local_4d,local_49,local_45,local_41,local_3d,local_39,local_35,
                               local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,0xe,0,
                               0);
            if (iVar2 < 0) {
              uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewMail
                        (param_1,(Inven_Item *)&local_55,0,uVar5,true,(char *)0x0,0);
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## _UpdateDimensionRentalItems

```asm
// === 084c4858 Inter_LoadInven::_UpdateDimensionRentalItems  [0x084c4858-0x84c4b37] ===
 84c4858:	55                   	push   %ebp
 84c4859:	89 e5                	mov    %esp,%ebp
 84c485b:	56                   	push   %esi
 84c485c:	53                   	push   %ebx
 84c485d:	83 c4 80             	add    $0xffffff80,%esp
 84c4860:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84c4864:	0f 84 bf 02 00 00    	je     84c4b29 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2d1>
 84c486a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84c486e:	0f 84 b8 02 00 00    	je     84c4b2c <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2d4>
 84c4874:	e8 2e 5b c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c4879:	89 04 24             	mov    %eax,(%esp)
 84c487c:	e8 9f 22 c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c4881:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c4884:	83 7d e4 0f          	cmpl   $0xf,-0x1c(%ebp)
 84c4888:	74 06                	je     84c4890 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x38>
 84c488a:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 84c488e:	75 18                	jne    84c48a8 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x50>
 84c4890:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c4897:	00 
 84c4898:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c489b:	89 04 24             	mov    %eax,(%esp)
 84c489e:	e8 7f 27 1b 00       	call   8677022 <_ZN5CUser20DeleteRentalItemInfoEi>
 84c48a3:	e9 85 02 00 00       	jmp    84c4b2d <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2d5>
 84c48a8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c48ab:	89 04 24             	mov    %eax,(%esp)
 84c48ae:	e8 a5 a7 d6 ff       	call   822f058 <_ZN20InstanceRentalSystem9RentInputC1Ev>
 84c48b3:	c7 45 d8 02 00 00 00 	movl   $0x2,-0x28(%ebp)
 84c48ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c48bd:	89 04 24             	mov    %eax,(%esp)
 84c48c0:	e8 49 7d 02 00       	call   84ec60e <_ZN5CUser31CheckLoadRentalInfoFromExchangeEv>
 84c48c5:	84 c0                	test   %al,%al
 84c48c7:	0f 84 92 00 00 00    	je     84c495f <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x107>
 84c48cd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84c48d0:	89 04 24             	mov    %eax,(%esp)
 84c48d3:	e8 56 a7 d6 ff       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 84c48d8:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84c48df:	eb 6e                	jmp    84c494f <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0xf7>
 84c48e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84c48e4:	05 7e 2a 00 00       	add    $0x2a7e,%eax
 84c48e9:	c1 e0 03             	shl    $0x3,%eax
 84c48ec:	03 45 10             	add    0x10(%ebp),%eax
 84c48ef:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c48f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c48f5:	8b 00                	mov    (%eax),%eax
 84c48f7:	85 c0                	test   %eax,%eax
 84c48f9:	74 4f                	je     84c494a <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0xf2>
 84c48fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c48fe:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84c4902:	88 45 c4             	mov    %al,-0x3c(%ebp)
 84c4905:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4908:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84c490c:	88 45 c5             	mov    %al,-0x3b(%ebp)
 84c490f:	c6 45 c6 00          	movb   $0x0,-0x3a(%ebp)
 84c4913:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4916:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 84c491a:	88 45 c7             	mov    %al,-0x39(%ebp)
 84c491d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c4920:	8b 45 10             	mov    0x10(%ebp),%eax
 84c4923:	81 c2 7e 2a 00 00    	add    $0x2a7e,%edx
 84c4929:	0f b6 44 d0 06       	movzbl 0x6(%eax,%edx,8),%eax
 84c492e:	84 c0                	test   %al,%al
 84c4930:	74 04                	je     84c4936 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0xde>
 84c4932:	c6 45 c6 01          	movb   $0x1,-0x3a(%ebp)
 84c4936:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84c4939:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c493d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4940:	89 04 24             	mov    %eax,(%esp)
 84c4943:	e8 1c 2b d7 ff       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 84c4948:	eb 01                	jmp    84c494b <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0xf3>
 84c494a:	90                   	nop
 84c494b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84c494f:	83 7d e8 0a          	cmpl   $0xa,-0x18(%ebp)
 84c4953:	0f 9e c0             	setle  %al
 84c4956:	84 c0                	test   %al,%al
 84c4958:	75 87                	jne    84c48e1 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x89>
 84c495a:	e9 ff 00 00 00       	jmp    84c4a5e <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x206>
 84c495f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4962:	89 04 24             	mov    %eax,(%esp)
 84c4965:	e8 ca 17 d7 ff       	call   8236134 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EEC1Ev>
 84c496a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84c4971:	00 
 84c4972:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4975:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4979:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c497c:	89 04 24             	mov    %eax,(%esp)
 84c497f:	e8 e2 27 1b 00       	call   8677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>
 84c4984:	84 c0                	test   %al,%al
 84c4986:	0f 84 c7 00 00 00    	je     84c4a53 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x1fb>
 84c498c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c498f:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84c4992:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4996:	89 04 24             	mov    %eax,(%esp)
 84c4999:	e8 08 2c d7 ff       	call   82375a6 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE5beginEv>
 84c499e:	83 ec 04             	sub    $0x4,%esp
 84c49a1:	eb 67                	jmp    84c4a0a <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x1b2>
 84c49a3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c49a6:	89 04 24             	mov    %eax,(%esp)
 84c49a9:	e8 a0 d4 da ff       	call   8271e4e <_ZNK9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEdeEv>
 84c49ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c49b1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84c49b4:	89 04 24             	mov    %eax,(%esp)
 84c49b7:	e8 72 a6 d6 ff       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 84c49bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c49bf:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84c49c3:	88 45 ac             	mov    %al,-0x54(%ebp)
 84c49c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c49c9:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84c49cd:	88 45 ad             	mov    %al,-0x53(%ebp)
 84c49d0:	c6 45 ae 00          	movb   $0x0,-0x52(%ebp)
 84c49d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c49d7:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84c49db:	88 45 af             	mov    %al,-0x51(%ebp)
 84c49de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c49e1:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c49e5:	84 c0                	test   %al,%al
 84c49e7:	74 04                	je     84c49ed <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x195>
 84c49e9:	c6 45 ae 01          	movb   $0x1,-0x52(%ebp)
 84c49ed:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84c49f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c49f4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c49f7:	89 04 24             	mov    %eax,(%esp)
 84c49fa:	e8 65 2a d7 ff       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 84c49ff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c4a02:	89 04 24             	mov    %eax,(%esp)
 84c4a05:	e8 2e d4 da ff       	call   8271e38 <_ZN9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEppEv>
 84c4a0a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c4a0d:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84c4a10:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4a14:	89 04 24             	mov    %eax,(%esp)
 84c4a17:	e8 c8 2b d7 ff       	call   82375e4 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE3endEv>
 84c4a1c:	83 ec 04             	sub    $0x4,%esp
 84c4a1f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c4a22:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4a26:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c4a29:	89 04 24             	mov    %eax,(%esp)
 84c4a2c:	e8 da d3 da ff       	call   8271e0b <_ZN9__gnu_cxxneIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84c4a31:	84 c0                	test   %al,%al
 84c4a33:	0f 85 6a ff ff ff    	jne    84c49a3 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x14b>
 84c4a39:	eb 18                	jmp    84c4a53 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x1fb>
 84c4a3b:	89 d3                	mov    %edx,%ebx
 84c4a3d:	89 c6                	mov    %eax,%esi
 84c4a3f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4a42:	89 04 24             	mov    %eax,(%esp)
 84c4a45:	e8 fe 16 d7 ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 84c4a4a:	89 f0                	mov    %esi,%eax
 84c4a4c:	89 da                	mov    %ebx,%edx
 84c4a4e:	e9 ae 00 00 00       	jmp    84c4b01 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2a9>
 84c4a53:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4a56:	89 04 24             	mov    %eax,(%esp)
 84c4a59:	e8 ea 16 d7 ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 84c4a5e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4a61:	89 04 24             	mov    %eax,(%esp)
 84c4a64:	e8 99 cb 02 00       	call   84f1602 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5emptyEv>
 84c4a69:	83 f0 01             	xor    $0x1,%eax
 84c4a6c:	84 c0                	test   %al,%al
 84c4a6e:	74 7c                	je     84c4aec <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x294>
 84c4a70:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4a73:	89 04 24             	mov    %eax,(%esp)
 84c4a76:	e8 d3 d1 d6 ff       	call   8231c4e <_ZN20InstanceRentalSystem10RentOutputC1Ev>
 84c4a7b:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84c4a80:	8d 55 94             	lea    -0x6c(%ebp),%edx
 84c4a83:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c4a87:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84c4a8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c4a8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c4a91:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4a95:	89 04 24             	mov    %eax,(%esp)
 84c4a98:	e8 eb b7 da ff       	call   8270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>
 84c4a9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c4aa0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c4aa4:	75 39                	jne    84c4adf <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x287>
 84c4aa6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c4aad:	00 
 84c4aae:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84c4ab5:	00 
 84c4ab6:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4ab9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4abd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4ac0:	89 04 24             	mov    %eax,(%esp)
 84c4ac3:	e8 74 23 1b 00       	call   8676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>
 84c4ac8:	eb 15                	jmp    84c4adf <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x287>
 84c4aca:	89 d3                	mov    %edx,%ebx
 84c4acc:	89 c6                	mov    %eax,%esi
 84c4ace:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4ad1:	89 04 24             	mov    %eax,(%esp)
 84c4ad4:	e8 bb d1 d6 ff       	call   8231c94 <_ZN20InstanceRentalSystem10RentOutputD1Ev>
 84c4ad9:	89 f0                	mov    %esi,%eax
 84c4adb:	89 da                	mov    %ebx,%edx
 84c4add:	eb 22                	jmp    84c4b01 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2a9>
 84c4adf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4ae2:	89 04 24             	mov    %eax,(%esp)
 84c4ae5:	e8 aa d1 d6 ff       	call   8231c94 <_ZN20InstanceRentalSystem10RentOutputD1Ev>
 84c4aea:	eb 30                	jmp    84c4b1c <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2c4>
 84c4aec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c4af3:	00 
 84c4af4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4af7:	89 04 24             	mov    %eax,(%esp)
 84c4afa:	e8 51 25 1b 00       	call   8677050 <_ZN5CUser33DeleteCurrentCharacRentalItemInfoEi>
 84c4aff:	eb 1b                	jmp    84c4b1c <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2c4>
 84c4b01:	89 d3                	mov    %edx,%ebx
 84c4b03:	89 c6                	mov    %eax,%esi
 84c4b05:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4b08:	89 04 24             	mov    %eax,(%esp)
 84c4b0b:	e8 a2 07 d7 ff       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 84c4b10:	89 f0                	mov    %esi,%eax
 84c4b12:	89 da                	mov    %ebx,%edx
 84c4b14:	89 04 24             	mov    %eax,(%esp)
 84c4b17:	e8 34 ec 61 00       	call   8ae3750 <_Unwind_Resume>
 84c4b1c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4b1f:	89 04 24             	mov    %eax,(%esp)
 84c4b22:	e8 8b 07 d7 ff       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 84c4b27:	eb 04                	jmp    84c4b2d <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2d5>
 84c4b29:	90                   	nop
 84c4b2a:	eb 01                	jmp    84c4b2d <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2d5>
 84c4b2c:	90                   	nop
 84c4b2d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84c4b30:	83 c4 00             	add    $0x0,%esp
 84c4b33:	5b                   	pop    %ebx
 84c4b34:	5e                   	pop    %esi
 84c4b35:	5d                   	pop    %ebp
 84c4b36:	c3                   	ret
 84c4b37:	90                   	nop

```

```c
// Inter_LoadInven::_UpdateDimensionRentalItems @ 0x84c4858

/* Inter_LoadInven::_UpdateDimensionRentalItems(CUser*, SIG_LOAD_INVENTORY*) */

void __thiscall
Inter_LoadInven::_UpdateDimensionRentalItems
          (Inter_LoadInven *this,CUser *param_1,SIG_LOAD_INVENTORY *param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  RentOutput local_70 [24];
  RentInElem local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_50 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_4c [12];
  SIG_LOAD_INVENTORY local_40;
  SIG_LOAD_INVENTORY local_3f;
  undefined1 local_3e;
  SIG_LOAD_INVENTORY local_3d;
  RentInput local_38 [12];
  undefined4 local_2c;
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (SIG_LOAD_INVENTORY *)0x0)) {
    this_00 = (GameWorld *)G_GameWorld();
    local_20 = GameWorld::GetChannelType(this_00);
    if ((local_20 == 0xf) || (local_20 == 0x10)) {
      CUser::DeleteRentalItemInfo(param_1,2);
    }
    else {
      InstanceRentalSystem::RentInput::RentInput(local_38);
      local_2c = 2;
      cVar1 = CUser::CheckLoadRentalInfoFromExchange(param_1);
      if (cVar1 == '\0') {
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        vector(local_4c);
                    /* try { // try from 084c497f to 084c4a30 has its CatchHandler @ 084c4a3b */
        cVar1 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_4c,2);
        if (cVar1 != '\0') {
          std::
          vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
          ::begin();
          while( true ) {
            std::
            vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
            ::end();
            bVar2 = __gnu_cxx::operator!=(local_50,local_24);
            if (!bVar2) break;
            local_14 = __gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                       ::operator*(local_50);
            InstanceRentalSystem::RentInput::RentInElem::RentInElem(&local_58);
            local_58 = *(RentInElem *)(local_14 + 8);
            local_57 = *(undefined1 *)(local_14 + 9);
            local_55 = *(undefined1 *)(local_14 + 0xb);
            local_56 = *(char *)(local_14 + 10) != '\0';
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,&local_58);
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
            ::operator++(local_50);
          }
        }
                    /* try { // try from 084c4a59 to 084c4a7a has its CatchHandler @ 084c4b01 */
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        ~vector(local_4c);
      }
      else {
        InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_40);
        for (local_1c = 0; local_1c < 0xb; local_1c = local_1c + 1) {
          local_18 = param_2 + (local_1c + 0x2a7e) * 8;
          if (*(int *)local_18 != 0) {
            local_40 = local_18[4];
            local_3f = local_18[5];
            local_3d = local_18[7];
            local_3e = param_2[(local_1c + 0x2a7e) * 8 + 6] != (SIG_LOAD_INVENTORY)0x0;
                    /* try { // try from 084c4943 to 084c4969 has its CatchHandler @ 084c4b01 */
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,(RentInElem *)&local_40);
          }
        }
      }
      cVar1 = std::
              vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
              ::empty();
      if (cVar1 == '\x01') {
        CUser::DeleteCurrentCharacRentalItemInfo(param_1,2);
      }
      else {
        InstanceRentalSystem::RentOutput::RentOutput(local_70);
                    /* try { // try from 084c4a98 to 084c4ac7 has its CatchHandler @ 084c4aca */
        local_10 = InstanceRentalSystem::Rent(GlobalData::s_rentalSystem,param_1,local_38,local_70);
        if (local_10 == 0) {
          CUser::UpdateCurrentCharacRentalInfo(param_1,local_70,2,true);
        }
                    /* try { // try from 084c4ae5 to 084c4afe has its CatchHandler @ 084c4b01 */
        InstanceRentalSystem::RentOutput::~RentOutput(local_70);
      }
      InstanceRentalSystem::RentInput::~RentInput(local_38);
    }
  }
  return;
}

```

---

## _UpdateRentalItems

```asm
// === 084c455c Inter_LoadInven::_UpdateRentalItems  [0x084c455c-0x84c4857] ===
 84c455c:	55                   	push   %ebp
 84c455d:	89 e5                	mov    %esp,%ebp
 84c455f:	56                   	push   %esi
 84c4560:	53                   	push   %ebx
 84c4561:	83 c4 80             	add    $0xffffff80,%esp
 84c4564:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84c4568:	0f 84 db 02 00 00    	je     84c4849 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2ed>
 84c456e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84c4572:	0f 84 d4 02 00 00    	je     84c484c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2f0>
 84c4578:	e8 2a 5e c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c457d:	89 04 24             	mov    %eax,(%esp)
 84c4580:	e8 9b 25 c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c4585:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c4588:	83 7d e4 0f          	cmpl   $0xf,-0x1c(%ebp)
 84c458c:	74 06                	je     84c4594 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x38>
 84c458e:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 84c4592:	75 18                	jne    84c45ac <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x50>
 84c4594:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c459b:	00 
 84c459c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c459f:	89 04 24             	mov    %eax,(%esp)
 84c45a2:	e8 7b 2a 1b 00       	call   8677022 <_ZN5CUser20DeleteRentalItemInfoEi>
 84c45a7:	e9 a1 02 00 00       	jmp    84c484d <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2f1>
 84c45ac:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c45af:	89 04 24             	mov    %eax,(%esp)
 84c45b2:	e8 a1 aa d6 ff       	call   822f058 <_ZN20InstanceRentalSystem9RentInputC1Ev>
 84c45b7:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 84c45be:	c6 45 dd 01          	movb   $0x1,-0x23(%ebp)
 84c45c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c45c5:	89 04 24             	mov    %eax,(%esp)
 84c45c8:	e8 41 80 02 00       	call   84ec60e <_ZN5CUser31CheckLoadRentalInfoFromExchangeEv>
 84c45cd:	84 c0                	test   %al,%al
 84c45cf:	0f 84 ab 00 00 00    	je     84c4680 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x124>
 84c45d5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84c45d8:	89 04 24             	mov    %eax,(%esp)
 84c45db:	e8 4e aa d6 ff       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 84c45e0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84c45e7:	e9 80 00 00 00       	jmp    84c466c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x110>
 84c45ec:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c45ef:	89 d0                	mov    %edx,%eax
 84c45f1:	01 c0                	add    %eax,%eax
 84c45f3:	01 d0                	add    %edx,%eax
 84c45f5:	c1 e0 02             	shl    $0x2,%eax
 84c45f8:	05 e0 53 01 00       	add    $0x153e0,%eax
 84c45fd:	03 45 10             	add    0x10(%ebp),%eax
 84c4600:	83 c0 04             	add    $0x4,%eax
 84c4603:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c4606:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4609:	8b 00                	mov    (%eax),%eax
 84c460b:	85 c0                	test   %eax,%eax
 84c460d:	74 58                	je     84c4667 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x10b>
 84c460f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c4612:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84c4616:	88 45 c4             	mov    %al,-0x3c(%ebp)
 84c4619:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c461c:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84c4620:	88 45 c5             	mov    %al,-0x3b(%ebp)
 84c4623:	c6 45 c6 00          	movb   $0x0,-0x3a(%ebp)
 84c4627:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c462a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84c462d:	89 d0                	mov    %edx,%eax
 84c462f:	01 c0                	add    %eax,%eax
 84c4631:	01 d0                	add    %edx,%eax
 84c4633:	c1 e0 02             	shl    $0x2,%eax
 84c4636:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c4639:	05 e0 53 01 00       	add    $0x153e0,%eax
 84c463e:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c4642:	84 c0                	test   %al,%al
 84c4644:	74 04                	je     84c464a <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0xee>
 84c4646:	c6 45 c6 01          	movb   $0x1,-0x3a(%ebp)
 84c464a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c464d:	8b 40 08             	mov    0x8(%eax),%eax
 84c4650:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84c4653:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84c4656:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c465a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c465d:	89 04 24             	mov    %eax,(%esp)
 84c4660:	e8 ff 2d d7 ff       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 84c4665:	eb 01                	jmp    84c4668 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x10c>
 84c4667:	90                   	nop
 84c4668:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84c466c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84c4670:	0f 9e c0             	setle  %al
 84c4673:	84 c0                	test   %al,%al
 84c4675:	0f 85 71 ff ff ff    	jne    84c45ec <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x90>
 84c467b:	e9 fe 00 00 00       	jmp    84c477e <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x222>
 84c4680:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4683:	89 04 24             	mov    %eax,(%esp)
 84c4686:	e8 a9 1a d7 ff       	call   8236134 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EEC1Ev>
 84c468b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c4692:	00 
 84c4693:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4696:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c469a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c469d:	89 04 24             	mov    %eax,(%esp)
 84c46a0:	e8 c1 2a 1b 00       	call   8677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>
 84c46a5:	84 c0                	test   %al,%al
 84c46a7:	0f 84 c6 00 00 00    	je     84c4773 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x217>
 84c46ad:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c46b0:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84c46b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c46b7:	89 04 24             	mov    %eax,(%esp)
 84c46ba:	e8 e7 2e d7 ff       	call   82375a6 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE5beginEv>
 84c46bf:	83 ec 04             	sub    $0x4,%esp
 84c46c2:	eb 66                	jmp    84c472a <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x1ce>
 84c46c4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c46c7:	89 04 24             	mov    %eax,(%esp)
 84c46ca:	e8 7f d7 da ff       	call   8271e4e <_ZNK9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEdeEv>
 84c46cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c46d2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84c46d5:	89 04 24             	mov    %eax,(%esp)
 84c46d8:	e8 51 a9 d6 ff       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 84c46dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c46e0:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84c46e4:	88 45 ac             	mov    %al,-0x54(%ebp)
 84c46e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c46ea:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84c46ee:	88 45 ad             	mov    %al,-0x53(%ebp)
 84c46f1:	c6 45 ae 00          	movb   $0x0,-0x52(%ebp)
 84c46f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c46f8:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c46fc:	84 c0                	test   %al,%al
 84c46fe:	74 04                	je     84c4704 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x1a8>
 84c4700:	c6 45 ae 01          	movb   $0x1,-0x52(%ebp)
 84c4704:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c4707:	8b 40 0c             	mov    0xc(%eax),%eax
 84c470a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84c470d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84c4710:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4714:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4717:	89 04 24             	mov    %eax,(%esp)
 84c471a:	e8 45 2d d7 ff       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 84c471f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c4722:	89 04 24             	mov    %eax,(%esp)
 84c4725:	e8 0e d7 da ff       	call   8271e38 <_ZN9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEppEv>
 84c472a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c472d:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84c4730:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4734:	89 04 24             	mov    %eax,(%esp)
 84c4737:	e8 a8 2e d7 ff       	call   82375e4 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE3endEv>
 84c473c:	83 ec 04             	sub    $0x4,%esp
 84c473f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c4742:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4746:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84c4749:	89 04 24             	mov    %eax,(%esp)
 84c474c:	e8 ba d6 da ff       	call   8271e0b <_ZN9__gnu_cxxneIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84c4751:	84 c0                	test   %al,%al
 84c4753:	0f 85 6b ff ff ff    	jne    84c46c4 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x168>
 84c4759:	eb 18                	jmp    84c4773 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x217>
 84c475b:	89 d3                	mov    %edx,%ebx
 84c475d:	89 c6                	mov    %eax,%esi
 84c475f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4762:	89 04 24             	mov    %eax,(%esp)
 84c4765:	e8 de 19 d7 ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 84c476a:	89 f0                	mov    %esi,%eax
 84c476c:	89 da                	mov    %ebx,%edx
 84c476e:	e9 ae 00 00 00       	jmp    84c4821 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2c5>
 84c4773:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84c4776:	89 04 24             	mov    %eax,(%esp)
 84c4779:	e8 ca 19 d7 ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 84c477e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4781:	89 04 24             	mov    %eax,(%esp)
 84c4784:	e8 79 ce 02 00       	call   84f1602 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5emptyEv>
 84c4789:	83 f0 01             	xor    $0x1,%eax
 84c478c:	84 c0                	test   %al,%al
 84c478e:	74 7c                	je     84c480c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2b0>
 84c4790:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4793:	89 04 24             	mov    %eax,(%esp)
 84c4796:	e8 b3 d4 d6 ff       	call   8231c4e <_ZN20InstanceRentalSystem10RentOutputC1Ev>
 84c479b:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84c47a0:	8d 55 94             	lea    -0x6c(%ebp),%edx
 84c47a3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c47a7:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84c47aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c47ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c47b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c47b5:	89 04 24             	mov    %eax,(%esp)
 84c47b8:	e8 cb ba da ff       	call   8270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>
 84c47bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c47c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c47c4:	75 39                	jne    84c47ff <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2a3>
 84c47c6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c47cd:	00 
 84c47ce:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c47d5:	00 
 84c47d6:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c47d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c47dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c47e0:	89 04 24             	mov    %eax,(%esp)
 84c47e3:	e8 54 26 1b 00       	call   8676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>
 84c47e8:	eb 15                	jmp    84c47ff <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2a3>
 84c47ea:	89 d3                	mov    %edx,%ebx
 84c47ec:	89 c6                	mov    %eax,%esi
 84c47ee:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c47f1:	89 04 24             	mov    %eax,(%esp)
 84c47f4:	e8 9b d4 d6 ff       	call   8231c94 <_ZN20InstanceRentalSystem10RentOutputD1Ev>
 84c47f9:	89 f0                	mov    %esi,%eax
 84c47fb:	89 da                	mov    %ebx,%edx
 84c47fd:	eb 22                	jmp    84c4821 <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2c5>
 84c47ff:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c4802:	89 04 24             	mov    %eax,(%esp)
 84c4805:	e8 8a d4 d6 ff       	call   8231c94 <_ZN20InstanceRentalSystem10RentOutputD1Ev>
 84c480a:	eb 30                	jmp    84c483c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2e0>
 84c480c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c4813:	00 
 84c4814:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4817:	89 04 24             	mov    %eax,(%esp)
 84c481a:	e8 31 28 1b 00       	call   8677050 <_ZN5CUser33DeleteCurrentCharacRentalItemInfoEi>
 84c481f:	eb 1b                	jmp    84c483c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2e0>
 84c4821:	89 d3                	mov    %edx,%ebx
 84c4823:	89 c6                	mov    %eax,%esi
 84c4825:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c4828:	89 04 24             	mov    %eax,(%esp)
 84c482b:	e8 82 0a d7 ff       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 84c4830:	89 f0                	mov    %esi,%eax
 84c4832:	89 da                	mov    %ebx,%edx
 84c4834:	89 04 24             	mov    %eax,(%esp)
 84c4837:	e8 14 ef 61 00       	call   8ae3750 <_Unwind_Resume>
 84c483c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c483f:	89 04 24             	mov    %eax,(%esp)
 84c4842:	e8 6b 0a d7 ff       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 84c4847:	eb 04                	jmp    84c484d <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2f1>
 84c4849:	90                   	nop
 84c484a:	eb 01                	jmp    84c484d <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY+0x2f1>
 84c484c:	90                   	nop
 84c484d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84c4850:	83 c4 00             	add    $0x0,%esp
 84c4853:	5b                   	pop    %ebx
 84c4854:	5e                   	pop    %esi
 84c4855:	5d                   	pop    %ebp
 84c4856:	c3                   	ret
 84c4857:	90                   	nop

```

```c
// Inter_LoadInven::_UpdateRentalItems @ 0x84c455c

/* Inter_LoadInven::_UpdateRentalItems(CUser*, SIG_LOAD_INVENTORY*) */

void __thiscall
Inter_LoadInven::_UpdateRentalItems
          (Inter_LoadInven *this,CUser *param_1,SIG_LOAD_INVENTORY *param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  RentOutput local_70 [24];
  RentInElem local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_54;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_50 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_4c [12];
  SIG_LOAD_INVENTORY local_40;
  SIG_LOAD_INVENTORY local_3f;
  undefined1 local_3e;
  undefined4 local_3c;
  RentInput local_38 [12];
  undefined4 local_2c;
  undefined1 local_27;
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (SIG_LOAD_INVENTORY *)0x0)) {
    this_00 = (GameWorld *)G_GameWorld();
    local_20 = GameWorld::GetChannelType(this_00);
    if ((local_20 == 0xf) || (local_20 == 0x10)) {
      CUser::DeleteRentalItemInfo(param_1,1);
    }
    else {
      InstanceRentalSystem::RentInput::RentInput(local_38);
      local_2c = 1;
      local_27 = 1;
      cVar1 = CUser::CheckLoadRentalInfoFromExchange(param_1);
      if (cVar1 == '\0') {
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        vector(local_4c);
                    /* try { // try from 084c46a0 to 084c4750 has its CatchHandler @ 084c475b */
        cVar1 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_4c,1);
        if (cVar1 != '\0') {
          std::
          vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
          ::begin();
          while( true ) {
            std::
            vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
            ::end();
            bVar2 = __gnu_cxx::operator!=(local_50,local_24);
            if (!bVar2) break;
            local_14 = __gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                       ::operator*(local_50);
            InstanceRentalSystem::RentInput::RentInElem::RentInElem(&local_58);
            local_58 = *(RentInElem *)(local_14 + 8);
            local_57 = *(undefined1 *)(local_14 + 9);
            local_56 = *(char *)(local_14 + 10) != '\0';
            local_54 = *(undefined4 *)(local_14 + 0xc);
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,&local_58);
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
            ::operator++(local_50);
          }
        }
                    /* try { // try from 084c4779 to 084c479a has its CatchHandler @ 084c4821 */
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        ~vector(local_4c);
      }
      else {
        InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_40);
        for (local_1c = 0; local_1c < 1; local_1c = local_1c + 1) {
          local_18 = param_2 + local_1c * 0xc + 0x153e4;
          if (*(int *)local_18 != 0) {
            local_40 = param_2[local_1c * 0xc + 0x153e8];
            local_3f = param_2[local_1c * 0xc + 0x153e9];
            local_3e = param_2[local_1c * 0xc + 0x153ea] != (SIG_LOAD_INVENTORY)0x0;
            local_3c = *(undefined4 *)(param_2 + local_1c * 0xc + 0x153ec);
                    /* try { // try from 084c4660 to 084c468a has its CatchHandler @ 084c4821 */
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,(RentInElem *)&local_40);
          }
        }
      }
      cVar1 = std::
              vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
              ::empty();
      if (cVar1 == '\x01') {
        CUser::DeleteCurrentCharacRentalItemInfo(param_1,1);
      }
      else {
        InstanceRentalSystem::RentOutput::RentOutput(local_70);
                    /* try { // try from 084c47b8 to 084c47e7 has its CatchHandler @ 084c47ea */
        local_10 = InstanceRentalSystem::Rent(GlobalData::s_rentalSystem,param_1,local_38,local_70);
        if (local_10 == 0) {
          CUser::UpdateCurrentCharacRentalInfo(param_1,local_70,1,true);
        }
                    /* try { // try from 084c4805 to 084c481e has its CatchHandler @ 084c4821 */
        InstanceRentalSystem::RentOutput::~RentOutput(local_70);
      }
      InstanceRentalSystem::RentInput::~RentInput(local_38);
    }
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 084c3f92 Inter_LoadInven::dispatch_sig  [0x084c3f92-0x84c455b] ===
 84c3f92:	55                   	push   %ebp
 84c3f93:	89 e5                	mov    %esp,%ebp
 84c3f95:	56                   	push   %esi
 84c3f96:	53                   	push   %ebx
 84c3f97:	83 ec 40             	sub    $0x40,%esp
 84c3f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3f9d:	89 04 24             	mov    %eax,(%esp)
 84c3fa0:	e8 e7 63 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c3fa5:	85 c0                	test   %eax,%eax
 84c3fa7:	0f 94 c0             	sete   %al
 84c3faa:	84 c0                	test   %al,%al
 84c3fac:	74 0a                	je     84c3fb8 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x26>
 84c3fae:	b8 35 18 00 00       	mov    $0x1835,%eax
 84c3fb3:	e9 9d 05 00 00       	jmp    84c4555 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x5c3>
 84c3fb8:	8b 45 10             	mov    0x10(%ebp),%eax
 84c3fbb:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84c3fbe:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c3fc1:	8b 80 30 40 00 00    	mov    0x4030(%eax),%eax
 84c3fc7:	83 f8 01             	cmp    $0x1,%eax
 84c3fca:	75 0a                	jne    84c3fd6 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x44>
 84c3fcc:	b8 3c 18 00 00       	mov    $0x183c,%eax
 84c3fd1:	e9 7f 05 00 00       	jmp    84c4555 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x5c3>
 84c3fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3fd9:	89 04 24             	mov    %eax,(%esp)
 84c3fdc:	e8 51 c4 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3fe1:	85 c0                	test   %eax,%eax
 84c3fe3:	0f 94 c0             	sete   %al
 84c3fe6:	84 c0                	test   %al,%al
 84c3fe8:	74 0a                	je     84c3ff4 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x62>
 84c3fea:	b8 41 18 00 00       	mov    $0x1841,%eax
 84c3fef:	e9 61 05 00 00       	jmp    84c4555 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x5c3>
 84c3ff4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c3ff7:	8b 80 3c 53 01 00    	mov    0x1533c(%eax),%eax
 84c3ffd:	89 c3                	mov    %eax,%ebx
 84c3fff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4002:	89 04 24             	mov    %eax,(%esp)
 84c4005:	e8 74 62 c1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84c400a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c400e:	89 04 24             	mov    %eax,(%esp)
 84c4011:	e8 d8 96 d6 ff       	call   822d6ee <_ZN10CInventory22set_inventory_capacityEi>
 84c4016:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c401d:	00 
 84c401e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4021:	89 04 24             	mov    %eax,(%esp)
 84c4024:	e8 5b 95 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c4029:	89 04 24             	mov    %eax,(%esp)
 84c402c:	e8 73 6a fd ff       	call   849aaa4 <_ZN9item_lock9CItemLock17GetItemLockRefVecEv>
 84c4031:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c4034:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c4038:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c403c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c403f:	89 04 24             	mov    %eax,(%esp)
 84c4042:	e8 fe c0 02 00       	call   84f0145 <_Z16_verifyInventoryP18SIG_LOAD_INVENTORYRSt6vectorIN9item_lock13stItemLockRefESaIS3_EEP5CUser>
 84c4047:	83 f0 01             	xor    $0x1,%eax
 84c404a:	84 c0                	test   %al,%al
 84c404c:	74 23                	je     84c4071 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0xdf>
 84c404e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c4055:	00 
 84c4056:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c405d:	00 
 84c405e:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 84c4065:	00 
 84c4066:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4069:	89 04 24             	mov    %eax,(%esp)
 84c406c:	e8 83 49 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c4071:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4074:	89 04 24             	mov    %eax,(%esp)
 84c4077:	e8 12 62 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c407c:	89 04 24             	mov    %eax,(%esp)
 84c407f:	e8 e4 94 c1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84c4084:	89 04 24             	mov    %eax,(%esp)
 84c4087:	e8 ce 63 e7 ff       	call   833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>
 84c408c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c408f:	89 04 24             	mov    %eax,(%esp)
 84c4092:	e8 f7 61 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c4097:	89 04 24             	mov    %eax,(%esp)
 84c409a:	e8 c9 94 c1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84c409f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c40a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c40a6:	89 04 24             	mov    %eax,(%esp)
 84c40a9:	e8 ec 92 d6 ff       	call   822d39a <_ZN13user_creature12CCreatureMgr7SetUserEP5CUser>
 84c40ae:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84c40b5:	eb 6b                	jmp    84c4122 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x190>
 84c40b7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c40ba:	c1 e0 03             	shl    $0x3,%eax
 84c40bd:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84c40c4:	29 c2                	sub    %eax,%edx
 84c40c6:	8d 82 80 28 01 00    	lea    0x12880(%edx),%eax
 84c40cc:	89 c3                	mov    %eax,%ebx
 84c40ce:	03 5d cc             	add    -0x34(%ebp),%ebx
 84c40d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c40d4:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84c40d7:	c1 e0 03             	shl    $0x3,%eax
 84c40da:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84c40e1:	29 c2                	sub    %eax,%edx
 84c40e3:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 84c40e6:	05 80 28 01 00       	add    $0x12880,%eax
 84c40eb:	8b 00                	mov    (%eax),%eax
 84c40ed:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84c40f0:	05 d0 ee 00 00       	add    $0xeed0,%eax
 84c40f5:	03 45 cc             	add    -0x34(%ebp),%eax
 84c40f8:	8d 70 01             	lea    0x1(%eax),%esi
 84c40fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c40fe:	89 04 24             	mov    %eax,(%esp)
 84c4101:	e8 88 61 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c4106:	89 04 24             	mov    %eax,(%esp)
 84c4109:	e8 5a 94 c1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84c410e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c4112:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c4116:	89 04 24             	mov    %eax,(%esp)
 84c4119:	e8 6e 75 e7 ff       	call   833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>
 84c411e:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 84c4122:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c4125:	8b 80 7c 28 01 00    	mov    0x1287c(%eax),%eax
 84c412b:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 84c412e:	0f 9f c0             	setg   %al
 84c4131:	84 c0                	test   %al,%al
 84c4133:	75 82                	jne    84c40b7 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x125>
 84c4135:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84c413c:	eb 34                	jmp    84c4172 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x1e0>
 84c413e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c4141:	05 68 2a 00 00       	add    $0x2a68,%eax
 84c4146:	c1 e0 03             	shl    $0x3,%eax
 84c4149:	03 45 cc             	add    -0x34(%ebp),%eax
 84c414c:	8d 58 04             	lea    0x4(%eax),%ebx
 84c414f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4152:	89 04 24             	mov    %eax,(%esp)
 84c4155:	e8 34 61 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c415a:	89 04 24             	mov    %eax,(%esp)
 84c415d:	e8 06 94 c1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84c4162:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c4166:	89 04 24             	mov    %eax,(%esp)
 84c4169:	e8 6a 98 e7 ff       	call   833d9d8 <_ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD>
 84c416e:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84c4172:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c4175:	8b 80 40 53 01 00    	mov    0x15340(%eax),%eax
 84c417b:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84c417e:	0f 9f c0             	setg   %al
 84c4181:	84 c0                	test   %al,%al
 84c4183:	75 b9                	jne    84c413e <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x1ac>
 84c4185:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c4188:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c418c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c418f:	89 04 24             	mov    %eax,(%esp)
 84c4192:	e8 c9 8f 18 00       	call   864d160 <_ZN5CUser12SetInventoryEP18SIG_LOAD_INVENTORY>
 84c4197:	83 f0 01             	xor    $0x1,%eax
 84c419a:	84 c0                	test   %al,%al
 84c419c:	74 0a                	je     84c41a8 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x216>
 84c419e:	b8 72 18 00 00       	mov    $0x1872,%eax
 84c41a3:	e9 ad 03 00 00       	jmp    84c4555 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x5c3>
 84c41a8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c41ab:	8b 40 08             	mov    0x8(%eax),%eax
 84c41ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c41b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c41b5:	89 04 24             	mov    %eax,(%esp)
 84c41b8:	e8 55 9d 18 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84c41bd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84c41c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c41c3:	8b 40 08             	mov    0x8(%eax),%eax
 84c41c6:	85 c0                	test   %eax,%eax
 84c41c8:	74 2c                	je     84c41f6 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x264>
 84c41ca:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 84c41ce:	74 26                	je     84c41f6 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x264>
 84c41d0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c41d3:	83 c0 0c             	add    $0xc,%eax
 84c41d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c41da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c41dd:	89 04 24             	mov    %eax,(%esp)
 84c41e0:	e8 41 c0 1c 00       	call   8690226 <_ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA>
 84c41e5:	83 f0 01             	xor    $0x1,%eax
 84c41e8:	84 c0                	test   %al,%al
 84c41ea:	74 0a                	je     84c41f6 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x264>
 84c41ec:	b8 92 18 00 00       	mov    $0x1892,%eax
 84c41f1:	e9 5f 03 00 00       	jmp    84c4555 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x5c3>
 84c41f6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c41f9:	8d 98 58 47 01 00    	lea    0x14758(%eax),%ebx
 84c41ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4202:	89 04 24             	mov    %eax,(%esp)
 84c4205:	e8 84 60 c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c420a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c420e:	89 04 24             	mov    %eax,(%esp)
 84c4211:	e8 9e 57 02 00       	call   84e99b4 <_ZN10CInventory14SetClearAvatarEPm>
 84c4216:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84c421d:	e9 f5 00 00 00       	jmp    84c4317 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x385>
 84c4222:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84c4229:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c422c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c422f:	6b c0 4b             	imul   $0x4b,%eax,%eax
 84c4232:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84c4235:	05 40 cd 00 00       	add    $0xcd40,%eax
 84c423a:	8b 40 05             	mov    0x5(%eax),%eax
 84c423d:	85 c0                	test   %eax,%eax
 84c423f:	0f 84 97 00 00 00    	je     84c42dc <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x34a>
 84c4245:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c4248:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c424b:	6b c0 4b             	imul   $0x4b,%eax,%eax
 84c424e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84c4251:	05 40 cd 00 00       	add    $0xcd40,%eax
 84c4256:	8b 40 05             	mov    0x5(%eax),%eax
 84c4259:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c425c:	81 c2 44 40 00 00    	add    $0x4044,%edx
 84c4262:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4266:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 84c426d:	00 
 84c426e:	89 14 24             	mov    %edx,(%esp)
 84c4271:	e8 2e 4f 02 00       	call   84e91a4 <_Z18GetItemIdByAddInfoP10Inven_Itemii>
 84c4276:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c4279:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c4280:	eb 4f                	jmp    84c42d1 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x33f>
 84c4282:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c4285:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c4288:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84c428b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84c428e:	05 a8 a3 00 00       	add    $0xa3a8,%eax
 84c4293:	8b 10                	mov    (%eax),%edx
 84c4295:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c4298:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84c429b:	6b c0 4b             	imul   $0x4b,%eax,%eax
 84c429e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c42a1:	05 20 cd 00 00       	add    $0xcd20,%eax
 84c42a6:	8b 00                	mov    (%eax),%eax
 84c42a8:	39 c2                	cmp    %eax,%edx
 84c42aa:	75 21                	jne    84c42cd <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x33b>
 84c42ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c42af:	89 04 24             	mov    %eax,(%esp)
 84c42b2:	e8 d7 5f c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c42b7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c42ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c42be:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c42c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c42c5:	89 04 24             	mov    %eax,(%esp)
 84c42c8:	e8 c3 56 02 00       	call   84e9990 <_ZN10CInventory14SetClearAvatarEii>
 84c42cd:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84c42d1:	83 7d e4 09          	cmpl   $0x9,-0x1c(%ebp)
 84c42d5:	0f 9e c0             	setle  %al
 84c42d8:	84 c0                	test   %al,%al
 84c42da:	75 a6                	jne    84c4282 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x2f0>
 84c42dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c42df:	6b c0 4b             	imul   $0x4b,%eax,%eax
 84c42e2:	05 20 cd 00 00       	add    $0xcd20,%eax
 84c42e7:	89 c3                	mov    %eax,%ebx
 84c42e9:	03 5d cc             	add    -0x34(%ebp),%ebx
 84c42ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c42ef:	89 04 24             	mov    %eax,(%esp)
 84c42f2:	e8 97 5f c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c42f7:	89 04 24             	mov    %eax,(%esp)
 84c42fa:	e8 6d c9 c4 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 84c42ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c4306:	00 
 84c4307:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c430b:	89 04 24             	mov    %eax,(%esp)
 84c430e:	e8 9d 4c e3 ff       	call   82f8fb0 <_ZN8WongWork14CAvatarItemMgr10RegistItemERK16AvatarDetailInfob>
 84c4313:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84c4317:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c431a:	8b 80 1c cd 00 00    	mov    0xcd1c(%eax),%eax
 84c4320:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 84c4323:	0f 9f c0             	setg   %al
 84c4326:	84 c0                	test   %al,%al
 84c4328:	0f 85 f4 fe ff ff    	jne    84c4222 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x290>
 84c432e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c4331:	8b 80 48 54 01 00    	mov    0x15448(%eax),%eax
 84c4337:	85 c0                	test   %eax,%eax
 84c4339:	74 18                	je     84c4353 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x3c1>
 84c433b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c433e:	8b 90 48 54 01 00    	mov    0x15448(%eax),%edx
 84c4344:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4347:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c434b:	89 04 24             	mov    %eax,(%esp)
 84c434e:	e8 6f 24 18 00       	call   86467c2 <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi>
 84c4353:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4356:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c435a:	8b 45 08             	mov    0x8(%ebp),%eax
 84c435d:	89 04 24             	mov    %eax,(%esp)
 84c4360:	e8 d3 09 00 00       	call   84c4d38 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser>
 84c4365:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4368:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c436c:	8b 45 08             	mov    0x8(%ebp),%eax
 84c436f:	89 04 24             	mov    %eax,(%esp)
 84c4372:	e8 c1 07 00 00       	call   84c4b38 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser>
 84c4377:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c437e:	00 
 84c437f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4382:	89 04 24             	mov    %eax,(%esp)
 84c4385:	e8 6a 10 c6 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c438a:	e8 18 60 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c438f:	89 04 24             	mov    %eax,(%esp)
 84c4392:	e8 89 27 c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c4397:	83 f8 07             	cmp    $0x7,%eax
 84c439a:	0f 94 c0             	sete   %al
 84c439d:	84 c0                	test   %al,%al
 84c439f:	0f 84 fd 00 00 00    	je     84c44a2 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x510>
 84c43a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c43a8:	89 04 24             	mov    %eax,(%esp)
 84c43ab:	e8 de 5e c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c43b0:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84c43b7:	00 
 84c43b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c43bf:	00 
 84c43c0:	89 04 24             	mov    %eax,(%esp)
 84c43c3:	e8 e6 7e 03 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 84c43c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c43cf:	00 
 84c43d0:	89 04 24             	mov    %eax,(%esp)
 84c43d3:	e8 24 cc c2 ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 84c43d8:	c7 45 e8 0b 00 00 00 	movl   $0xb,-0x18(%ebp)
 84c43df:	eb 36                	jmp    84c4417 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x485>
 84c43e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c43e4:	89 04 24             	mov    %eax,(%esp)
 84c43e7:	e8 a2 5e c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c43ec:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c43ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c43f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c43fa:	00 
 84c43fb:	89 04 24             	mov    %eax,(%esp)
 84c43fe:	e8 ab 7e 03 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 84c4403:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c440a:	00 
 84c440b:	89 04 24             	mov    %eax,(%esp)
 84c440e:	e8 e9 cb c2 ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 84c4413:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84c4417:	83 7d e8 15          	cmpl   $0x15,-0x18(%ebp)
 84c441b:	0f 9e c0             	setle  %al
 84c441e:	84 c0                	test   %al,%al
 84c4420:	75 bf                	jne    84c43e1 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x44f>
 84c4422:	c7 45 ec 03 00 00 00 	movl   $0x3,-0x14(%ebp)
 84c4429:	eb 6c                	jmp    84c4497 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x505>
 84c442b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c442e:	89 04 24             	mov    %eax,(%esp)
 84c4431:	e8 58 5e c1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84c4436:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84c4439:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c443d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c4444:	00 
 84c4445:	89 04 24             	mov    %eax,(%esp)
 84c4448:	e8 61 7e 03 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 84c444d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c4450:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c4453:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84c4457:	3c 01                	cmp    $0x1,%al
 84c4459:	75 38                	jne    84c4493 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x501>
 84c445b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c445e:	8b 40 02             	mov    0x2(%eax),%eax
 84c4461:	89 c3                	mov    %eax,%ebx
 84c4463:	e8 33 7d c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c4468:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c446c:	89 04 24             	mov    %eax,(%esp)
 84c446f:	e8 be b5 e9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84c4474:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c4477:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c447b:	74 15                	je     84c4492 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x500>
 84c447d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c4484:	00 
 84c4485:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c4488:	89 04 24             	mov    %eax,(%esp)
 84c448b:	e8 6c cb c2 ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 84c4490:	eb 01                	jmp    84c4493 <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x501>
 84c4492:	90                   	nop
 84c4493:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84c4497:	83 7d ec 38          	cmpl   $0x38,-0x14(%ebp)
 84c449b:	0f 9e c0             	setle  %al
 84c449e:	84 c0                	test   %al,%al
 84c44a0:	75 89                	jne    84c442b <_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci+0x499>
 84c44a2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c44a9:	00 
 84c44aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c44ad:	89 04 24             	mov    %eax,(%esp)
 84c44b0:	e8 cf 90 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c44b5:	8b 10                	mov    (%eax),%edx
 84c44b7:	83 c2 04             	add    $0x4,%edx
 84c44ba:	8b 0a                	mov    (%edx),%ecx
 84c44bc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c44bf:	81 c2 84 47 01 00    	add    $0x14784,%edx
 84c44c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c44c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c44cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c44d0:	89 04 24             	mov    %eax,(%esp)
 84c44d3:	ff d1                	call   *%ecx
 84c44d5:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84c44dc:	00 
 84c44dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c44e0:	89 04 24             	mov    %eax,(%esp)
 84c44e3:	e8 9c 90 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c44e8:	8b 10                	mov    (%eax),%edx
 84c44ea:	83 c2 04             	add    $0x4,%edx
 84c44ed:	8b 0a                	mov    (%edx),%ecx
 84c44ef:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84c44f2:	81 c2 a4 4a 01 00    	add    $0x14aa4,%edx
 84c44f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c44fc:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c44ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c4503:	89 04 24             	mov    %eax,(%esp)
 84c4506:	ff d1                	call   *%ecx
 84c4508:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c450b:	89 04 24             	mov    %eax,(%esp)
 84c450e:	e8 05 7a 02 00       	call   84ebf18 <_ZN15CUserCharacInfo16disableSaveInvenEv>
 84c4513:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4516:	89 04 24             	mov    %eax,(%esp)
 84c4519:	e8 2a 7a 02 00       	call   84ebf48 <_ZN15CUserCharacInfo16disableSaveCargoEv>
 84c451e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c4521:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c4525:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4528:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c452c:	8b 45 08             	mov    0x8(%ebp),%eax
 84c452f:	89 04 24             	mov    %eax,(%esp)
 84c4532:	e8 25 00 00 00       	call   84c455c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY>
 84c4537:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c453a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c453e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c4541:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c4545:	8b 45 08             	mov    0x8(%ebp),%eax
 84c4548:	89 04 24             	mov    %eax,(%esp)
 84c454b:	e8 08 03 00 00       	call   84c4858 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY>
 84c4550:	b8 00 00 00 00       	mov    $0x0,%eax
 84c4555:	83 c4 40             	add    $0x40,%esp
 84c4558:	5b                   	pop    %ebx
 84c4559:	5e                   	pop    %esi
 84c455a:	5d                   	pop    %ebp
 84c455b:	c3                   	ret

```

```c
// Inter_LoadInven::dispatch_sig @ 0x84c3f92

/* Inter_LoadInven::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadInven::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  CItemLock *this;
  vector *pvVar5;
  CCreatureMgr *pCVar6;
  CAvatarItemMgr *this_00;
  GameWorld *this_01;
  Inven_Item *pIVar7;
  CDataManager *this_02;
  int *piVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x1835;
  }
  else if (*(int *)(param_3 + 0x4030) == 1) {
    uVar3 = 0x183c;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x1841;
    }
    else {
      iVar2 = *(int *)(param_3 + 0x1533c);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::set_inventory_capacity(pCVar4,iVar2);
      this = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      pvVar5 = (vector *)item_lock::CItemLock::GetItemLockRefVec(this);
      cVar1 = _verifyInventory((SIG_LOAD_INVENTORY *)param_3,pvVar5,(CUser *)param_2);
      if (cVar1 != '\x01') {
        CUser::DisConnSig((CUser *)param_2,0x24,1,0);
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
      user_creature::CCreatureMgr::Reset(pCVar6);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
      user_creature::CCreatureMgr::SetUser(pCVar6,(CUser *)param_2);
      for (local_30 = 0; local_30 < *(int *)(param_3 + 0x1287c); local_30 = local_30 + 1) {
        iVar2 = *(int *)(param_3 + local_30 * 0x38 + 0x12880);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
        user_creature::CCreatureMgr::LoadCreatureItem
                  (pCVar6,(Inven_Item *)(iVar2 * 0x3d + param_3 + 0xeed1),
                   (SIG_CREATURE_ITEM_DETAIL_INFO *)(local_30 * 0x38 + 0x12880 + param_3));
      }
      for (local_2c = 0; local_2c < *(int *)(param_3 + 0x15340); local_2c = local_2c + 1) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
        user_creature::CCreatureMgr::LoadCreatureTempPeriod
                  (pCVar6,(SIG_POSTAL_CREATURE_TEMP_PERIOD *)((local_2c + 0x2a68) * 8 + param_3 + 4)
                  );
      }
      cVar1 = CUser::SetInventory((CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3);
      if (cVar1 == '\x01') {
        iVar2 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(param_3 + 8));
        if (((*(int *)(param_3 + 8) != 0) && (iVar2 != -1)) &&
           (cVar1 = CUser::setTagCharacInven
                              ((CUser *)param_2,(TAG_CHARAC_INVEN_DATA *)(param_3 + 0xc)),
           cVar1 != '\x01')) {
          return 0x1892;
        }
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        CInventory::SetClearAvatar(pCVar4,(ulong *)(param_3 + 0x14758));
        for (local_28 = 0; local_28 < *(int *)(param_3 + 0xcd1c); local_28 = local_28 + 1) {
          if (*(int *)(param_3 + local_28 * 0x4b + 0xcd45) != 0) {
            iVar2 = GetItemIdByAddInfo((Inven_Item *)(param_3 + 0x4044),0x69,
                                       *(int *)(param_3 + local_28 * 0x4b + 0xcd45));
            for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
              if (*(int *)(param_3 + local_20 * 0x3d + 0xa3a8) ==
                  *(int *)(param_3 + local_28 * 0x4b + 0xcd20)) {
                pCVar4 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                CInventory::SetClearAvatar(pCVar4,local_20,iVar2);
              }
            }
          }
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar4);
          WongWork::CAvatarItemMgr::RegistItem
                    (this_00,(AvatarDetailInfo *)(local_28 * 0x4b + 0xcd20 + param_3),false);
        }
        if (*(int *)(param_3 + 0x15448) != 0) {
          CUserCharacInfo::SetCurCharacMaxEquipLevel
                    ((CUserCharacInfo *)param_2,*(int *)(param_3 + 0x15448));
        }
        _CheckOverEquipItem((Inter_LoadInven *)param_1,(CUser *)param_2);
        _CheckUsableExpertJobEquipment((Inter_LoadInven *)param_1,(CUser *)param_2);
        CUser::EnableCharacInfo((CUser *)param_2,1);
        this_01 = (GameWorld *)G_GameWorld();
        iVar2 = GameWorld::GetChannelType(this_01);
        if (iVar2 == 7) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,0,10);
          Inven_Item::SetUpgrade(pIVar7,'\0');
          for (local_1c = 0xb; local_1c < 0x16; local_1c = local_1c + 1) {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,0,local_1c);
            Inven_Item::SetUpgrade(pIVar7,'\0');
          }
          for (local_18 = 3; local_18 < 0x39; local_18 = local_18 + 1) {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,1,local_18);
            if (pIVar7[1] == (Inven_Item)0x1) {
              iVar2 = *(int *)(pIVar7 + 2);
              this_02 = (CDataManager *)G_CDataManager();
              iVar2 = CDataManager::find_item(this_02,iVar2);
              if (iVar2 != 0) {
                Inven_Item::SetUpgrade(pIVar7,'\0');
              }
            }
          }
        }
        piVar8 = (int *)CUser::GetCharacExpandData((CUser *)param_2,2);
        (**(code **)(*piVar8 + 4))(piVar8,param_2,param_3 + 0x14784);
        piVar8 = (int *)CUser::GetCharacExpandData((CUser *)param_2,9);
        (**(code **)(*piVar8 + 4))(piVar8,param_2,param_3 + 0x14aa4);
        CUserCharacInfo::disableSaveInven((CUserCharacInfo *)param_2);
        CUserCharacInfo::disableSaveCargo((CUserCharacInfo *)param_2);
        _UpdateRentalItems((Inter_LoadInven *)param_1,(CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3
                          );
        _UpdateDimensionRentalItems
                  ((Inter_LoadInven *)param_1,(CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3);
        uVar3 = 0;
      }
      else {
        uVar3 = 0x1872;
      }
    }
  }
  return uVar3;
}

```

