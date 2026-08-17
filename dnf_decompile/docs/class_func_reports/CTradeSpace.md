# CTradeSpace

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 20

---

## GetOppositeUser

```asm
// === 08529a72 CTradeSpace::GetOppositeUser  [0x08529a72-0x8529aa1] ===
 8529a72:	55                   	push   %ebp
 8529a73:	89 e5                	mov    %esp,%ebp
 8529a75:	8b 45 08             	mov    0x8(%ebp),%eax
 8529a78:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8529a7c:	84 c0                	test   %al,%al
 8529a7e:	74 1b                	je     8529a9b <_ZN11CTradeSpace15GetOppositeUserEP5CUser+0x29>
 8529a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8529a83:	8b 40 20             	mov    0x20(%eax),%eax
 8529a86:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8529a89:	75 08                	jne    8529a93 <_ZN11CTradeSpace15GetOppositeUserEP5CUser+0x21>
 8529a8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8529a8e:	8b 40 24             	mov    0x24(%eax),%eax
 8529a91:	eb 0d                	jmp    8529aa0 <_ZN11CTradeSpace15GetOppositeUserEP5CUser+0x2e>
 8529a93:	8b 45 08             	mov    0x8(%ebp),%eax
 8529a96:	8b 40 20             	mov    0x20(%eax),%eax
 8529a99:	eb 05                	jmp    8529aa0 <_ZN11CTradeSpace15GetOppositeUserEP5CUser+0x2e>
 8529a9b:	b8 00 00 00 00       	mov    $0x0,%eax
 8529aa0:	5d                   	pop    %ebp
 8529aa1:	c3                   	ret

```

```c
// CTradeSpace::GetOppositeUser @ 0x8529a72

/* CTradeSpace::GetOppositeUser(CUser*) */

undefined4 __thiscall CTradeSpace::GetOppositeUser(CTradeSpace *this,CUser *param_1)

{
  undefined4 uVar1;
  
  if (this[0x1c] == (CTradeSpace)0x0) {
    uVar1 = 0;
  }
  else if (*(CUser **)(this + 0x20) == param_1) {
    uVar1 = *(undefined4 *)(this + 0x24);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x20);
  }
  return uVar1;
}

```

---

## _CheckTrade4SameAvatar

```asm
// === 08529d48 CTradeSpace::_CheckTrade4SameAvatar  [0x08529d48-0x8529dcd] ===
 8529d48:	55                   	push   %ebp
 8529d49:	89 e5                	mov    %esp,%ebp
 8529d4b:	83 ec 10             	sub    $0x10,%esp
 8529d4e:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8529d55:	eb 65                	jmp    8529dbc <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0x74>
 8529d57:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8529d5a:	89 d0                	mov    %edx,%eax
 8529d5c:	c1 e0 03             	shl    $0x3,%eax
 8529d5f:	01 d0                	add    %edx,%eax
 8529d61:	c1 e0 03             	shl    $0x3,%eax
 8529d64:	03 45 0c             	add    0xc(%ebp),%eax
 8529d67:	8b 50 0b             	mov    0xb(%eax),%edx
 8529d6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8529d6d:	8b 40 02             	mov    0x2(%eax),%eax
 8529d70:	39 c2                	cmp    %eax,%edx
 8529d72:	75 44                	jne    8529db8 <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0x70>
 8529d74:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8529d77:	89 d0                	mov    %edx,%eax
 8529d79:	c1 e0 03             	shl    $0x3,%eax
 8529d7c:	01 d0                	add    %edx,%eax
 8529d7e:	c1 e0 03             	shl    $0x3,%eax
 8529d81:	03 45 0c             	add    0xc(%ebp),%eax
 8529d84:	8b 50 10             	mov    0x10(%eax),%edx
 8529d87:	8b 45 10             	mov    0x10(%ebp),%eax
 8529d8a:	8b 40 07             	mov    0x7(%eax),%eax
 8529d8d:	39 c2                	cmp    %eax,%edx
 8529d8f:	75 27                	jne    8529db8 <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0x70>
 8529d91:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8529d94:	89 d0                	mov    %edx,%eax
 8529d96:	c1 e0 03             	shl    $0x3,%eax
 8529d99:	01 d0                	add    %edx,%eax
 8529d9b:	c1 e0 03             	shl    $0x3,%eax
 8529d9e:	03 45 0c             	add    0xc(%ebp),%eax
 8529da1:	0f b7 50 14          	movzwl 0x14(%eax),%edx
 8529da5:	8b 45 10             	mov    0x10(%ebp),%eax
 8529da8:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8529dac:	66 39 c2             	cmp    %ax,%dx
 8529daf:	75 07                	jne    8529db8 <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0x70>
 8529db1:	b8 01 00 00 00       	mov    $0x1,%eax
 8529db6:	eb 14                	jmp    8529dcc <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0x84>
 8529db8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8529dbc:	83 7d fc 1a          	cmpl   $0x1a,-0x4(%ebp)
 8529dc0:	0f 9e c0             	setle  %al
 8529dc3:	84 c0                	test   %al,%al
 8529dc5:	75 90                	jne    8529d57 <_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item+0xf>
 8529dc7:	b8 00 00 00 00       	mov    $0x0,%eax
 8529dcc:	c9                   	leave
 8529dcd:	c3                   	ret

```

```c
// CTradeSpace::_CheckTrade4SameAvatar @ 0x8529d48

/* CTradeSpace::_CheckTrade4SameAvatar(TradeSlot const*, Inven_Item const&) */

undefined4 __thiscall
CTradeSpace::_CheckTrade4SameAvatar(CTradeSpace *this,TradeSlot *param_1,Inven_Item *param_2)

{
  int local_8;
  
  local_8 = 3;
  while( true ) {
    if (0x1a < local_8) {
      return 0;
    }
    if (((*(int *)(param_1 + local_8 * 0x48 + 0xb) == *(int *)(param_2 + 2)) &&
        (*(int *)(param_1 + local_8 * 0x48 + 0x10) == *(int *)(param_2 + 7))) &&
       (*(short *)(param_1 + local_8 * 0x48 + 0x14) == *(short *)(param_2 + 0xb))) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## _IsTradable

```asm
// === 08529dce CTradeSpace::_IsTradable  [0x08529dce-0x8529e7d] ===
 8529dce:	55                   	push   %ebp
 8529dcf:	89 e5                	mov    %esp,%ebp
 8529dd1:	53                   	push   %ebx
 8529dd2:	83 ec 24             	sub    $0x24,%esp
 8529dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529dd8:	8b 40 02             	mov    0x2(%eax),%eax
 8529ddb:	89 c3                	mov    %eax,%ebx
 8529ddd:	e8 b9 23 ba ff       	call   80cc19b <_Z14G_CDataManagerv>
 8529de2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8529de6:	89 04 24             	mov    %eax,(%esp)
 8529de9:	e8 44 5c e3 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8529dee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8529df1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8529df5:	75 07                	jne    8529dfe <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0x30>
 8529df7:	b8 00 00 00 00       	mov    $0x0,%eax
 8529dfc:	eb 7a                	jmp    8529e78 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xaa>
 8529dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529e01:	83 c0 33             	add    $0x33,%eax
 8529e04:	89 04 24             	mov    %eax,(%esp)
 8529e07:	e8 fe 6c be ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8529e0c:	84 c0                	test   %al,%al
 8529e0e:	0f 95 c0             	setne  %al
 8529e11:	84 c0                	test   %al,%al
 8529e13:	74 07                	je     8529e1c <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0x4e>
 8529e15:	b8 00 00 00 00       	mov    $0x0,%eax
 8529e1a:	eb 5c                	jmp    8529e78 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xaa>
 8529e1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8529e1f:	89 04 24             	mov    %eax,(%esp)
 8529e22:	e8 bb 74 bc ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8529e27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8529e2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8529e2d:	83 f8 05             	cmp    $0x5,%eax
 8529e30:	77 41                	ja     8529e73 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xa5>
 8529e32:	ba 01 00 00 00       	mov    $0x1,%edx
 8529e37:	89 d3                	mov    %edx,%ebx
 8529e39:	89 c1                	mov    %eax,%ecx
 8529e3b:	d3 e3                	shl    %cl,%ebx
 8529e3d:	89 d8                	mov    %ebx,%eax
 8529e3f:	89 c2                	mov    %eax,%edx
 8529e41:	83 e2 36             	and    $0x36,%edx
 8529e44:	85 d2                	test   %edx,%edx
 8529e46:	75 10                	jne    8529e58 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0x8a>
 8529e48:	89 c2                	mov    %eax,%edx
 8529e4a:	83 e2 08             	and    $0x8,%edx
 8529e4d:	85 d2                	test   %edx,%edx
 8529e4f:	75 0e                	jne    8529e5f <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0x91>
 8529e51:	83 e0 01             	and    $0x1,%eax
 8529e54:	85 c0                	test   %eax,%eax
 8529e56:	eb 1b                	jmp    8529e73 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xa5>
 8529e58:	b8 00 00 00 00       	mov    $0x0,%eax
 8529e5d:	eb 19                	jmp    8529e78 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xaa>
 8529e5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529e62:	0f b6 00             	movzbl (%eax),%eax
 8529e65:	83 f0 01             	xor    $0x1,%eax
 8529e68:	84 c0                	test   %al,%al
 8529e6a:	74 07                	je     8529e73 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xa5>
 8529e6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8529e71:	eb 05                	jmp    8529e78 <_ZN11CTradeSpace11_IsTradableERK10Inven_Item+0xaa>
 8529e73:	b8 01 00 00 00       	mov    $0x1,%eax
 8529e78:	83 c4 24             	add    $0x24,%esp
 8529e7b:	5b                   	pop    %ebx
 8529e7c:	5d                   	pop    %ebp
 8529e7d:	c3                   	ret

```

```c
// CTradeSpace::_IsTradable @ 0x8529dce

/* CTradeSpace::_IsTradable(Inven_Item const&) */

undefined4 __thiscall CTradeSpace::_IsTradable(CTradeSpace *this,Inven_Item *param_1)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
    if (cVar2 == '\0') {
      uVar4 = CItem::GetAttachType(this_01);
      if (uVar4 < 6) {
        uVar4 = 1 << ((byte)uVar4 & 0x1f);
        if ((uVar4 & 0x36) != 0) {
          return 0;
        }
        if (((uVar4 & 8) != 0) && (*param_1 != (Inven_Item)0x1)) {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## _SaveAvatarItemOwnerChange

```asm
// === 0853084a CTradeSpace::_SaveAvatarItemOwnerChange  [0x0853084a-0x8530879] ===
 853084a:	55                   	push   %ebp
 853084b:	89 e5                	mov    %esp,%ebp
 853084d:	83 ec 28             	sub    $0x28,%esp
 8530850:	8b 45 18             	mov    0x18(%ebp),%eax
 8530853:	88 45 f4             	mov    %al,-0xc(%ebp)
 8530856:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 853085a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 853085e:	8b 45 14             	mov    0x14(%ebp),%eax
 8530861:	89 44 24 08          	mov    %eax,0x8(%esp)
 8530865:	8b 45 10             	mov    0x10(%ebp),%eax
 8530868:	89 44 24 04          	mov    %eax,0x4(%esp)
 853086c:	8b 45 0c             	mov    0xc(%ebp),%eax
 853086f:	89 04 24             	mov    %eax,(%esp)
 8530872:	e8 e5 fc ec ff       	call   840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>
 8530877:	c9                   	leave
 8530878:	c3                   	ret
 8530879:	90                   	nop

```

```c
// CTradeSpace::_SaveAvatarItemOwnerChange @ 0x853084a

/* CTradeSpace::_SaveAvatarItemOwnerChange(unsigned int, unsigned int, unsigned int, unsigned char)
    */

void __thiscall
CTradeSpace::_SaveAvatarItemOwnerChange
          (CTradeSpace *this,uint param_1,uint param_2,uint param_3,uchar param_4)

{
  DB_AvatarChangeOwner::makeRequest(param_1,param_2,param_3,param_4);
  return;
}

```

---

## add_item

```asm
// === 08529aa2 CTradeSpace::add_item  [0x08529aa2-0x8529d47] ===
 8529aa2:	55                   	push   %ebp
 8529aa3:	89 e5                	mov    %esp,%ebp
 8529aa5:	53                   	push   %ebx
 8529aa6:	83 ec 44             	sub    $0x44,%esp
 8529aa9:	83 7d 58 00          	cmpl   $0x0,0x58(%ebp)
 8529aad:	79 0a                	jns    8529ab9 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x17>
 8529aaf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8529ab4:	e9 88 02 00 00       	jmp    8529d41 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x29f>
 8529ab9:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8529ac0:	8b 45 08             	mov    0x8(%ebp),%eax
 8529ac3:	89 04 24             	mov    %eax,(%esp)
 8529ac6:	e8 17 86 00 00       	call   85320e2 <_ZN11CTradeSpace4lockEv>
 8529acb:	8d 45 10             	lea    0x10(%ebp),%eax
 8529ace:	83 c0 09             	add    $0x9,%eax
 8529ad1:	89 04 24             	mov    %eax,(%esp)
 8529ad4:	e8 39 6d c2 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8529ad9:	84 c0                	test   %al,%al
 8529adb:	74 64                	je     8529b41 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x9f>
 8529add:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8529ae7:	89 04 24             	mov    %eax,(%esp)
 8529aea:	e8 d1 fe ff ff       	call   85299c0 <_ZN11CTradeSpace18get_empty_itemslotEi>
 8529aef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8529af2:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8529af6:	0f 84 37 02 00 00    	je     8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529afc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8529aff:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529b02:	89 d0                	mov    %edx,%eax
 8529b04:	c1 e0 03             	shl    $0x3,%eax
 8529b07:	01 d0                	add    %edx,%eax
 8529b09:	c1 e0 03             	shl    $0x3,%eax
 8529b0c:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8529b12:	01 d0                	add    %edx,%eax
 8529b14:	83 c0 30             	add    $0x30,%eax
 8529b17:	03 45 08             	add    0x8(%ebp),%eax
 8529b1a:	8d 55 10             	lea    0x10(%ebp),%edx
 8529b1d:	39 d0                	cmp    %edx,%eax
 8529b1f:	0f 84 0e 02 00 00    	je     8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529b25:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 8529b2c:	00 
 8529b2d:	8d 55 10             	lea    0x10(%ebp),%edx
 8529b30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8529b34:	89 04 24             	mov    %eax,(%esp)
 8529b37:	e8 64 3d b5 ff       	call   807d8a0 <memcpy@plt>
 8529b3c:	e9 f2 01 00 00       	jmp    8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529b41:	8b 45 1b             	mov    0x1b(%ebp),%eax
 8529b44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8529b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529b4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529b4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8529b52:	89 04 24             	mov    %eax,(%esp)
 8529b55:	e8 be fe ff ff       	call   8529a18 <_ZN11CTradeSpace16check_item_existEii>
 8529b5a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8529b5d:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8529b61:	0f 84 d3 00 00 00    	je     8529c3a <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x198>
 8529b67:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8529b6a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529b6d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8529b70:	89 d0                	mov    %edx,%eax
 8529b72:	c1 e0 03             	shl    $0x3,%eax
 8529b75:	01 d0                	add    %edx,%eax
 8529b77:	c1 e0 03             	shl    $0x3,%eax
 8529b7a:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8529b80:	01 d0                	add    %edx,%eax
 8529b82:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8529b85:	83 c0 40             	add    $0x40,%eax
 8529b88:	8b 00                	mov    (%eax),%eax
 8529b8a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8529b8d:	8b 45 58             	mov    0x58(%ebp),%eax
 8529b90:	01 45 f4             	add    %eax,-0xc(%ebp)
 8529b93:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8529b96:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529b99:	89 d0                	mov    %edx,%eax
 8529b9b:	c1 e0 03             	shl    $0x3,%eax
 8529b9e:	01 d0                	add    %edx,%eax
 8529ba0:	c1 e0 03             	shl    $0x3,%eax
 8529ba3:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8529ba9:	01 d0                	add    %edx,%eax
 8529bab:	83 c0 30             	add    $0x30,%eax
 8529bae:	03 45 08             	add    0x8(%ebp),%eax
 8529bb1:	8d 50 09             	lea    0x9(%eax),%edx
 8529bb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8529bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529bbb:	89 14 24             	mov    %edx,(%esp)
 8529bbe:	e8 c1 1c ba ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8529bc3:	81 7d f4 e7 03 00 00 	cmpl   $0x3e7,-0xc(%ebp)
 8529bca:	0f 8e 63 01 00 00    	jle    8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529bd0:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8529bd3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529bd6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8529bd9:	89 d0                	mov    %edx,%eax
 8529bdb:	c1 e0 03             	shl    $0x3,%eax
 8529bde:	01 d0                	add    %edx,%eax
 8529be0:	c1 e0 03             	shl    $0x3,%eax
 8529be3:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8529be9:	01 d0                	add    %edx,%eax
 8529beb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8529bee:	83 c0 30             	add    $0x30,%eax
 8529bf1:	8b 58 0b             	mov    0xb(%eax),%ebx
 8529bf4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8529bfb:	00 
 8529bfc:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8529c03:	00 
 8529c04:	c7 44 24 04 00 86 c9 	movl   $0x8c98600,0x4(%esp)
 8529c0b:	08 
 8529c0c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8529c0f:	89 04 24             	mov    %eax,(%esp)
 8529c12:	e8 01 5b 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8529c17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8529c1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8529c1e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8529c22:	c7 44 24 04 a4 6f c9 	movl   $0x8c96fa4,0x4(%esp)
 8529c29:	08 
 8529c2a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8529c2d:	89 04 24             	mov    %eax,(%esp)
 8529c30:	e8 53 5b 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8529c35:	e9 f9 00 00 00       	jmp    8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529c3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529c3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529c41:	8b 45 08             	mov    0x8(%ebp),%eax
 8529c44:	89 04 24             	mov    %eax,(%esp)
 8529c47:	e8 74 fd ff ff       	call   85299c0 <_ZN11CTradeSpace18get_empty_itemslotEi>
 8529c4c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8529c4f:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8529c53:	0f 84 da 00 00 00    	je     8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529c59:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8529c5c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529c5f:	89 d0                	mov    %edx,%eax
 8529c61:	c1 e0 03             	shl    $0x3,%eax
 8529c64:	01 d0                	add    %edx,%eax
 8529c66:	c1 e0 03             	shl    $0x3,%eax
 8529c69:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8529c6f:	01 d0                	add    %edx,%eax
 8529c71:	83 c0 30             	add    $0x30,%eax
 8529c74:	03 45 08             	add    0x8(%ebp),%eax
 8529c77:	8d 55 10             	lea    0x10(%ebp),%edx
 8529c7a:	39 d0                	cmp    %edx,%eax
 8529c7c:	74 17                	je     8529c95 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x1f3>
 8529c7e:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 8529c85:	00 
 8529c86:	8d 55 10             	lea    0x10(%ebp),%edx
 8529c89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8529c8d:	89 04 24             	mov    %eax,(%esp)
 8529c90:	e8 0b 3c b5 ff       	call   807d8a0 <memcpy@plt>
 8529c95:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8529c98:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529c9b:	89 d0                	mov    %edx,%eax
 8529c9d:	c1 e0 03             	shl    $0x3,%eax
 8529ca0:	01 d0                	add    %edx,%eax
 8529ca2:	c1 e0 03             	shl    $0x3,%eax
 8529ca5:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8529cab:	01 d0                	add    %edx,%eax
 8529cad:	83 c0 30             	add    $0x30,%eax
 8529cb0:	03 45 08             	add    0x8(%ebp),%eax
 8529cb3:	8d 50 09             	lea    0x9(%eax),%edx
 8529cb6:	8b 45 58             	mov    0x58(%ebp),%eax
 8529cb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529cbd:	89 14 24             	mov    %edx,(%esp)
 8529cc0:	e8 bf 1b ba ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8529cc5:	81 7d 58 e7 03 00 00 	cmpl   $0x3e7,0x58(%ebp)
 8529ccc:	7e 65                	jle    8529d33 <_ZN11CTradeSpace8add_itemEi9TradeSloti+0x291>
 8529cce:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8529cd1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8529cd4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8529cd7:	89 d0                	mov    %edx,%eax
 8529cd9:	c1 e0 03             	shl    $0x3,%eax
 8529cdc:	01 d0                	add    %edx,%eax
 8529cde:	c1 e0 03             	shl    $0x3,%eax
 8529ce1:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8529ce7:	01 d0                	add    %edx,%eax
 8529ce9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8529cec:	83 c0 30             	add    $0x30,%eax
 8529cef:	8b 58 0b             	mov    0xb(%eax),%ebx
 8529cf2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8529cf9:	00 
 8529cfa:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 8529d01:	00 
 8529d02:	c7 44 24 04 00 86 c9 	movl   $0x8c98600,0x4(%esp)
 8529d09:	08 
 8529d0a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8529d0d:	89 04 24             	mov    %eax,(%esp)
 8529d10:	e8 03 5a 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8529d15:	8b 45 58             	mov    0x58(%ebp),%eax
 8529d18:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8529d1c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8529d20:	c7 44 24 04 a4 6f c9 	movl   $0x8c96fa4,0x4(%esp)
 8529d27:	08 
 8529d28:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8529d2b:	89 04 24             	mov    %eax,(%esp)
 8529d2e:	e8 55 5a 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8529d33:	8b 45 08             	mov    0x8(%ebp),%eax
 8529d36:	89 04 24             	mov    %eax,(%esp)
 8529d39:	e8 aa 83 00 00       	call   85320e8 <_ZN11CTradeSpace6unlockEv>
 8529d3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8529d41:	83 c4 44             	add    $0x44,%esp
 8529d44:	5b                   	pop    %ebx
 8529d45:	5d                   	pop    %ebp
 8529d46:	c3                   	ret
 8529d47:	90                   	nop

```

```c
// CTradeSpace::add_item @ 0x8529aa2

/* CTradeSpace::add_item(int, TradeSlot, int) */

int CTradeSpace::add_item
              (CTradeSpace *param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int in_stack_00000054;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (in_stack_00000054 < 0) {
    local_14 = -1;
  }
  else {
    local_14 = 0xffffffff;
    lock();
    cVar2 = Inven_Item::isEquipableItemType((Inven_Item *)((int)&param_5 + 1));
    if (cVar2 == '\0') {
      local_14 = check_item_exist(param_1,param_2,param_5._3_4_);
      if (local_14 == -1) {
        local_14 = get_empty_itemslot(param_1,param_2);
        if (local_14 != -1) {
          if (param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30 != (CTradeSpace *)&param_3) {
            memcpy(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30,&param_3,0x46);
          }
          Inven_Item::set_add_info
                    ((Inven_Item *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x39),
                     in_stack_00000054);
          if (999 < in_stack_00000054) {
            uVar1 = *(undefined4 *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x3b);
            cMyTrace::cMyTrace(local_24,"int CTradeSpace::add_item(int, TradeSlot, int)",0xde,5);
            cMyTrace::operator()
                      (local_24,"CTradeSpace::add_item, ITEM #%d, %d",uVar1,in_stack_00000054);
          }
        }
      }
      else {
        local_10 = *(int *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x40) + in_stack_00000054;
        Inven_Item::set_add_info
                  ((Inven_Item *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x39),local_10);
        if (999 < local_10) {
          uVar1 = *(undefined4 *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x3b);
          cMyTrace::cMyTrace(local_34,"int CTradeSpace::add_item(int, TradeSlot, int)",0xd1,5);
          cMyTrace::operator()(local_34,"CTradeSpace::add_item, ITEM #%d, %d",uVar1,local_10);
        }
      }
    }
    else {
      local_14 = get_empty_itemslot(param_1,param_2);
      if ((local_14 != -1) &&
         (param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30 != (CTradeSpace *)&param_3)) {
        memcpy(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30,&param_3,0x46);
      }
    }
    unlock();
  }
  return local_14;
}

```

---

## cancel_trade

```asm
// === 0852effa CTradeSpace::cancel_trade  [0x0852effa-0x852f085] ===
 852effa:	55                   	push   %ebp
 852effb:	89 e5                	mov    %esp,%ebp
 852effd:	83 ec 28             	sub    $0x28,%esp
 852f000:	8b 45 08             	mov    0x8(%ebp),%eax
 852f003:	8b 40 20             	mov    0x20(%eax),%eax
 852f006:	89 04 24             	mov    %eax,(%esp)
 852f009:	e8 24 14 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852f00e:	85 c0                	test   %eax,%eax
 852f010:	74 12                	je     852f024 <_ZN11CTradeSpace12cancel_tradeEv+0x2a>
 852f012:	8b 45 08             	mov    0x8(%ebp),%eax
 852f015:	8b 40 24             	mov    0x24(%eax),%eax
 852f018:	89 04 24             	mov    %eax,(%esp)
 852f01b:	e8 12 14 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852f020:	85 c0                	test   %eax,%eax
 852f022:	75 07                	jne    852f02b <_ZN11CTradeSpace12cancel_tradeEv+0x31>
 852f024:	b8 01 00 00 00       	mov    $0x1,%eax
 852f029:	eb 05                	jmp    852f030 <_ZN11CTradeSpace12cancel_tradeEv+0x36>
 852f02b:	b8 00 00 00 00       	mov    $0x0,%eax
 852f030:	84 c0                	test   %al,%al
 852f032:	74 3d                	je     852f071 <_ZN11CTradeSpace12cancel_tradeEv+0x77>
 852f034:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852f03b:	00 
 852f03c:	c7 44 24 08 88 07 00 	movl   $0x788,0x8(%esp)
 852f043:	00 
 852f044:	c7 44 24 04 c0 84 c9 	movl   $0x8c984c0,0x4(%esp)
 852f04b:	08 
 852f04c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 852f04f:	89 04 24             	mov    %eax,(%esp)
 852f052:	e8 c1 06 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852f057:	c7 44 24 04 44 74 c9 	movl   $0x8c97444,0x4(%esp)
 852f05e:	08 
 852f05f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 852f062:	89 04 24             	mov    %eax,(%esp)
 852f065:	e8 1e 07 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852f06a:	b8 00 00 00 00       	mov    $0x0,%eax
 852f06f:	eb 13                	jmp    852f084 <_ZN11CTradeSpace12cancel_tradeEv+0x8a>
 852f071:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852f078:	00 
 852f079:	8b 45 08             	mov    0x8(%ebp),%eax
 852f07c:	89 04 24             	mov    %eax,(%esp)
 852f07f:	e8 c0 f4 ff ff       	call   852e544 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser>
 852f084:	c9                   	leave
 852f085:	c3                   	ret

```

```c
// CTradeSpace::cancel_trade @ 0x852effa

/* CTradeSpace::cancel_trade() */

undefined4 __thiscall CTradeSpace::cancel_trade(CTradeSpace *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [24];
  
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
  if (iVar2 != 0) {
    iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0852f030;
    }
  }
  bVar1 = true;
LAB_0852f030:
  if (bVar1) {
    cMyTrace::cMyTrace(local_1c,"bool CTradeSpace::cancel_trade()",0x788,5);
    cMyTrace::operator()
              (local_1c,
               "CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()"
              );
    uVar3 = 0;
  }
  else {
    uVar3 = cancel_trade_for_china(this,(CUser *)0x0);
  }
  return uVar3;
}

```

---

## cancel_trade_by_dis

```asm
// === 0852f086 CTradeSpace::cancel_trade_by_dis  [0x0852f086-0x852f09f] ===
 852f086:	55                   	push   %ebp
 852f087:	89 e5                	mov    %esp,%ebp
 852f089:	83 ec 18             	sub    $0x18,%esp
 852f08c:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f08f:	89 44 24 04          	mov    %eax,0x4(%esp)
 852f093:	8b 45 08             	mov    0x8(%ebp),%eax
 852f096:	89 04 24             	mov    %eax,(%esp)
 852f099:	e8 a6 f4 ff ff       	call   852e544 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser>
 852f09e:	c9                   	leave
 852f09f:	c3                   	ret

```

```c
// CTradeSpace::cancel_trade_by_dis @ 0x852f086

/* CTradeSpace::cancel_trade_by_dis(CUser*) */

void __thiscall CTradeSpace::cancel_trade_by_dis(CTradeSpace *this,CUser *param_1)

{
  cancel_trade_for_china(this,param_1);
  return;
}

```

---

## cancel_trade_for_china

```asm
// === 0852e544 CTradeSpace::cancel_trade_for_china  [0x0852e544-0x852eff9] ===
 852e544:	55                   	push   %ebp
 852e545:	89 e5                	mov    %esp,%ebp
 852e547:	57                   	push   %edi
 852e548:	56                   	push   %esi
 852e549:	53                   	push   %ebx
 852e54a:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 852e550:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 852e557:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852e55e:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 852e561:	89 df                	mov    %ebx,%edi
 852e563:	be 01 00 00 00       	mov    $0x1,%esi
 852e568:	eb 0e                	jmp    852e578 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x34>
 852e56a:	89 3c 24             	mov    %edi,(%esp)
 852e56d:	e8 da f7 05 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 852e572:	83 c7 0c             	add    $0xc,%edi
 852e575:	83 ee 01             	sub    $0x1,%esi
 852e578:	83 fe ff             	cmp    $0xffffffff,%esi
 852e57b:	0f 95 c0             	setne  %al
 852e57e:	84 c0                	test   %al,%al
 852e580:	75 e8                	jne    852e56a <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x26>
 852e582:	eb 3c                	jmp    852e5c0 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x7c>
 852e584:	89 d7                	mov    %edx,%edi
 852e586:	89 45 94             	mov    %eax,-0x6c(%ebp)
 852e589:	85 db                	test   %ebx,%ebx
 852e58b:	74 26                	je     852e5b3 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x6f>
 852e58d:	b8 01 00 00 00       	mov    $0x1,%eax
 852e592:	29 f0                	sub    %esi,%eax
 852e594:	89 c2                	mov    %eax,%edx
 852e596:	89 d0                	mov    %edx,%eax
 852e598:	01 c0                	add    %eax,%eax
 852e59a:	01 d0                	add    %edx,%eax
 852e59c:	c1 e0 02             	shl    $0x2,%eax
 852e59f:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 852e5a2:	39 de                	cmp    %ebx,%esi
 852e5a4:	74 0d                	je     852e5b3 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x6f>
 852e5a6:	83 ee 0c             	sub    $0xc,%esi
 852e5a9:	89 34 24             	mov    %esi,(%esp)
 852e5ac:	e8 cf f8 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852e5b1:	eb ef                	jmp    852e5a2 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x5e>
 852e5b3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 852e5b6:	89 fa                	mov    %edi,%edx
 852e5b8:	89 04 24             	mov    %eax,(%esp)
 852e5bb:	e8 90 51 5b 00       	call   8ae3750 <_Unwind_Resume>
 852e5c0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852e5c7:	e9 d9 08 00 00       	jmp    852eea5 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x961>
 852e5cc:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 852e5d3:	c7 45 e0 03 00 00 00 	movl   $0x3,-0x20(%ebp)
 852e5da:	eb 30                	jmp    852e60c <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xc8>
 852e5dc:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852e5df:	8b 55 e0             	mov    -0x20(%ebp),%edx
 852e5e2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852e5e5:	89 d0                	mov    %edx,%eax
 852e5e7:	c1 e0 03             	shl    $0x3,%eax
 852e5ea:	01 d0                	add    %edx,%eax
 852e5ec:	c1 e0 03             	shl    $0x3,%eax
 852e5ef:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852e5f5:	01 d0                	add    %edx,%eax
 852e5f7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e5fa:	83 c0 30             	add    $0x30,%eax
 852e5fd:	8b 40 0b             	mov    0xb(%eax),%eax
 852e600:	85 c0                	test   %eax,%eax
 852e602:	74 04                	je     852e608 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xc4>
 852e604:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 852e608:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 852e60c:	83 7d e0 1a          	cmpl   $0x1a,-0x20(%ebp)
 852e610:	0f 9e c0             	setle  %al
 852e613:	84 c0                	test   %al,%al
 852e615:	75 c5                	jne    852e5dc <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x98>
 852e617:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e61a:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e61d:	89 d0                	mov    %edx,%eax
 852e61f:	01 c0                	add    %eax,%eax
 852e621:	01 d0                	add    %edx,%eax
 852e623:	c1 e0 02             	shl    $0x2,%eax
 852e626:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e629:	89 04 24             	mov    %eax,(%esp)
 852e62c:	e8 b5 d2 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852e631:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e634:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e637:	89 d0                	mov    %edx,%eax
 852e639:	01 c0                	add    %eax,%eax
 852e63b:	01 d0                	add    %edx,%eax
 852e63d:	c1 e0 02             	shl    $0x2,%eax
 852e640:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e643:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 852e64a:	00 
 852e64b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852e652:	00 
 852e653:	89 04 24             	mov    %eax,(%esp)
 852e656:	e8 a1 d2 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852e65b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 852e662:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 852e669:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e66c:	8b 45 08             	mov    0x8(%ebp),%eax
 852e66f:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852e675:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e678:	85 c0                	test   %eax,%eax
 852e67a:	0f 8e 7c 01 00 00    	jle    852e7fc <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x2b8>
 852e680:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 852e684:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e687:	8b 45 08             	mov    0x8(%ebp),%eax
 852e68a:	83 c2 08             	add    $0x8,%edx
 852e68d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e690:	85 c0                	test   %eax,%eax
 852e692:	0f 84 bb 00 00 00    	je     852e753 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x20f>
 852e698:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e69b:	8b 45 08             	mov    0x8(%ebp),%eax
 852e69e:	83 c2 08             	add    $0x8,%edx
 852e6a1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e6a4:	89 04 24             	mov    %eax,(%esp)
 852e6a7:	e8 86 1d bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852e6ac:	85 c0                	test   %eax,%eax
 852e6ae:	0f 94 c0             	sete   %al
 852e6b1:	84 c0                	test   %al,%al
 852e6b3:	74 40                	je     852e6f5 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x1b1>
 852e6b5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852e6bc:	00 
 852e6bd:	c7 44 24 08 1c 07 00 	movl   $0x71c,0x8(%esp)
 852e6c4:	00 
 852e6c5:	c7 44 24 04 00 85 c9 	movl   $0x8c98500,0x4(%esp)
 852e6cc:	08 
 852e6cd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 852e6d0:	89 04 24             	mov    %eax,(%esp)
 852e6d3:	e8 40 10 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852e6d8:	c7 44 24 04 30 76 c9 	movl   $0x8c97630,0x4(%esp)
 852e6df:	08 
 852e6e0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 852e6e3:	89 04 24             	mov    %eax,(%esp)
 852e6e6:	e8 9d 10 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852e6eb:	be 00 00 00 00       	mov    $0x0,%esi
 852e6f0:	e9 de 08 00 00       	jmp    852efd3 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa8f>
 852e6f5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e6f8:	8b 45 08             	mov    0x8(%ebp),%eax
 852e6fb:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852e701:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 852e704:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e707:	8b 45 08             	mov    0x8(%ebp),%eax
 852e70a:	83 c2 08             	add    $0x8,%edx
 852e70d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e710:	89 04 24             	mov    %eax,(%esp)
 852e713:	e8 76 bb ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852e718:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 852e71f:	00 
 852e720:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852e727:	00 
 852e728:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 852e72f:	00 
 852e730:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852e734:	89 04 24             	mov    %eax,(%esp)
 852e737:	e8 60 0b fd ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 852e73c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e73f:	8b 45 08             	mov    0x8(%ebp),%eax
 852e742:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852e748:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 852e74f:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 852e753:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e756:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e759:	89 d0                	mov    %edx,%eax
 852e75b:	01 c0                	add    %eax,%eax
 852e75d:	01 d0                	add    %edx,%eax
 852e75f:	c1 e0 02             	shl    $0x2,%eax
 852e762:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e765:	89 04 24             	mov    %eax,(%esp)
 852e768:	e8 df 23 be ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 852e76d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 852e770:	8b 45 d0             	mov    -0x30(%ebp),%eax
 852e773:	0f bf c8             	movswl %ax,%ecx
 852e776:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e779:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 852e77c:	89 d0                	mov    %edx,%eax
 852e77e:	01 c0                	add    %eax,%eax
 852e780:	01 d0                	add    %edx,%eax
 852e782:	c1 e0 02             	shl    $0x2,%eax
 852e785:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852e788:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 852e78c:	89 04 24             	mov    %eax,(%esp)
 852e78f:	e8 10 b7 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852e794:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e797:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e79a:	89 d0                	mov    %edx,%eax
 852e79c:	01 c0                	add    %eax,%eax
 852e79e:	01 d0                	add    %edx,%eax
 852e7a0:	c1 e0 02             	shl    $0x2,%eax
 852e7a3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e7a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852e7ad:	00 
 852e7ae:	89 04 24             	mov    %eax,(%esp)
 852e7b1:	e8 ee b6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852e7b6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e7b9:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e7bc:	89 d0                	mov    %edx,%eax
 852e7be:	01 c0                	add    %eax,%eax
 852e7c0:	01 d0                	add    %edx,%eax
 852e7c2:	c1 e0 02             	shl    $0x2,%eax
 852e7c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e7c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852e7cf:	00 
 852e7d0:	89 04 24             	mov    %eax,(%esp)
 852e7d3:	e8 48 d1 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852e7d8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e7db:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e7de:	89 d0                	mov    %edx,%eax
 852e7e0:	01 c0                	add    %eax,%eax
 852e7e2:	01 d0                	add    %edx,%eax
 852e7e4:	c1 e0 02             	shl    $0x2,%eax
 852e7e7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e7ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852e7f1:	00 
 852e7f2:	89 04 24             	mov    %eax,(%esp)
 852e7f5:	e8 aa b6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852e7fa:	eb 41                	jmp    852e83d <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x2f9>
 852e7fc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e7ff:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e802:	89 d0                	mov    %edx,%eax
 852e804:	01 c0                	add    %eax,%eax
 852e806:	01 d0                	add    %edx,%eax
 852e808:	c1 e0 02             	shl    $0x2,%eax
 852e80b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e80e:	89 04 24             	mov    %eax,(%esp)
 852e811:	e8 36 23 be ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 852e816:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 852e819:	8b 45 d0             	mov    -0x30(%ebp),%eax
 852e81c:	0f bf c8             	movswl %ax,%ecx
 852e81f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e822:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 852e825:	89 d0                	mov    %edx,%eax
 852e827:	01 c0                	add    %eax,%eax
 852e829:	01 d0                	add    %edx,%eax
 852e82b:	c1 e0 02             	shl    $0x2,%eax
 852e82e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852e831:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 852e835:	89 04 24             	mov    %eax,(%esp)
 852e838:	e8 67 b6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852e83d:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 852e844:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 852e84b:	e9 f8 05 00 00       	jmp    852ee48 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x904>
 852e850:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e853:	8b 45 08             	mov    0x8(%ebp),%eax
 852e856:	83 c2 08             	add    $0x8,%edx
 852e859:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e85c:	85 c0                	test   %eax,%eax
 852e85e:	0f 84 d9 05 00 00    	je     852ee3d <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x8f9>
 852e864:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e867:	8b 45 08             	mov    0x8(%ebp),%eax
 852e86a:	83 c2 08             	add    $0x8,%edx
 852e86d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e870:	89 04 24             	mov    %eax,(%esp)
 852e873:	e8 ba 1b bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852e878:	85 c0                	test   %eax,%eax
 852e87a:	0f 94 c0             	sete   %al
 852e87d:	84 c0                	test   %al,%al
 852e87f:	0f 85 bb 05 00 00    	jne    852ee40 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x8fc>
 852e885:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852e888:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852e88b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852e88e:	89 d0                	mov    %edx,%eax
 852e890:	c1 e0 03             	shl    $0x3,%eax
 852e893:	01 d0                	add    %edx,%eax
 852e895:	c1 e0 03             	shl    $0x3,%eax
 852e898:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852e89e:	01 d0                	add    %edx,%eax
 852e8a0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e8a3:	83 c0 30             	add    $0x30,%eax
 852e8a6:	8b 40 0b             	mov    0xb(%eax),%eax
 852e8a9:	85 c0                	test   %eax,%eax
 852e8ab:	0f 84 92 05 00 00    	je     852ee43 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x8ff>
 852e8b1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e8b4:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e8b7:	89 d0                	mov    %edx,%eax
 852e8b9:	01 c0                	add    %eax,%eax
 852e8bb:	01 d0                	add    %edx,%eax
 852e8bd:	c1 e0 02             	shl    $0x2,%eax
 852e8c0:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 852e8c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 852e8c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 852e8ca:	89 14 24             	mov    %edx,(%esp)
 852e8cd:	e8 d2 b5 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852e8d2:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852e8d5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852e8d8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852e8db:	89 d0                	mov    %edx,%eax
 852e8dd:	c1 e0 03             	shl    $0x3,%eax
 852e8e0:	01 d0                	add    %edx,%eax
 852e8e2:	c1 e0 03             	shl    $0x3,%eax
 852e8e5:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852e8eb:	01 d0                	add    %edx,%eax
 852e8ed:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e8f0:	83 c0 30             	add    $0x30,%eax
 852e8f3:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 852e8f7:	0f be c0             	movsbl %al,%eax
 852e8fa:	83 f8 01             	cmp    $0x1,%eax
 852e8fd:	0f 84 03 01 00 00    	je     852ea06 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x4c2>
 852e903:	83 f8 07             	cmp    $0x7,%eax
 852e906:	0f 84 a1 02 00 00    	je     852ebad <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x669>
 852e90c:	85 c0                	test   %eax,%eax
 852e90e:	0f 85 a6 03 00 00    	jne    852ecba <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x776>
 852e914:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852e917:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 852e91a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e91d:	8b 45 08             	mov    0x8(%ebp),%eax
 852e920:	83 c2 08             	add    $0x8,%edx
 852e923:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e926:	89 04 24             	mov    %eax,(%esp)
 852e929:	e8 60 b9 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852e92e:	89 c2                	mov    %eax,%edx
 852e930:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852e937:	00 
 852e938:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 852e93f:	00 
 852e940:	c7 44 24 44 02 00 00 	movl   $0x2,0x44(%esp)
 852e947:	00 
 852e948:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852e94b:	89 d8                	mov    %ebx,%eax
 852e94d:	c1 e0 03             	shl    $0x3,%eax
 852e950:	01 d8                	add    %ebx,%eax
 852e952:	c1 e0 03             	shl    $0x3,%eax
 852e955:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 852e95b:	01 d8                	add    %ebx,%eax
 852e95d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e960:	83 c0 30             	add    $0x30,%eax
 852e963:	8b 48 09             	mov    0x9(%eax),%ecx
 852e966:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 852e96a:	8b 48 0d             	mov    0xd(%eax),%ecx
 852e96d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 852e971:	8b 48 11             	mov    0x11(%eax),%ecx
 852e974:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852e978:	8b 48 15             	mov    0x15(%eax),%ecx
 852e97b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 852e97f:	8b 48 19             	mov    0x19(%eax),%ecx
 852e982:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 852e986:	8b 48 1d             	mov    0x1d(%eax),%ecx
 852e989:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 852e98d:	8b 48 21             	mov    0x21(%eax),%ecx
 852e990:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 852e994:	8b 48 25             	mov    0x25(%eax),%ecx
 852e997:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 852e99b:	8b 48 29             	mov    0x29(%eax),%ecx
 852e99e:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 852e9a2:	8b 48 2d             	mov    0x2d(%eax),%ecx
 852e9a5:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 852e9a9:	8b 48 31             	mov    0x31(%eax),%ecx
 852e9ac:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 852e9b0:	8b 48 35             	mov    0x35(%eax),%ecx
 852e9b3:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 852e9b7:	8b 48 39             	mov    0x39(%eax),%ecx
 852e9ba:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 852e9be:	8b 48 3d             	mov    0x3d(%eax),%ecx
 852e9c1:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 852e9c5:	8b 48 41             	mov    0x41(%eax),%ecx
 852e9c8:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 852e9cc:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852e9d0:	88 44 24 40          	mov    %al,0x40(%esp)
 852e9d4:	89 14 24             	mov    %edx,(%esp)
 852e9d7:	e8 aa 43 fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 852e9dc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852e9df:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e9e2:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852e9e5:	89 d0                	mov    %edx,%eax
 852e9e7:	01 c0                	add    %eax,%eax
 852e9e9:	01 d0                	add    %edx,%eax
 852e9eb:	c1 e0 02             	shl    $0x2,%eax
 852e9ee:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e9f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852e9f8:	00 
 852e9f9:	89 04 24             	mov    %eax,(%esp)
 852e9fc:	e8 1f cf b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852ea01:	e9 a1 03 00 00       	jmp    852eda7 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x863>
 852ea06:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852ea09:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 852ea0c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ea0f:	8b 45 08             	mov    0x8(%ebp),%eax
 852ea12:	83 c2 08             	add    $0x8,%edx
 852ea15:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ea18:	89 04 24             	mov    %eax,(%esp)
 852ea1b:	e8 6e b8 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852ea20:	89 c2                	mov    %eax,%edx
 852ea22:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 852ea29:	00 
 852ea2a:	c7 44 24 44 03 00 00 	movl   $0x3,0x44(%esp)
 852ea31:	00 
 852ea32:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ea35:	89 d8                	mov    %ebx,%eax
 852ea37:	c1 e0 03             	shl    $0x3,%eax
 852ea3a:	01 d8                	add    %ebx,%eax
 852ea3c:	c1 e0 03             	shl    $0x3,%eax
 852ea3f:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 852ea45:	01 d8                	add    %ebx,%eax
 852ea47:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ea4a:	83 c0 30             	add    $0x30,%eax
 852ea4d:	8b 48 09             	mov    0x9(%eax),%ecx
 852ea50:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 852ea54:	8b 48 0d             	mov    0xd(%eax),%ecx
 852ea57:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 852ea5b:	8b 48 11             	mov    0x11(%eax),%ecx
 852ea5e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852ea62:	8b 48 15             	mov    0x15(%eax),%ecx
 852ea65:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 852ea69:	8b 48 19             	mov    0x19(%eax),%ecx
 852ea6c:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 852ea70:	8b 48 1d             	mov    0x1d(%eax),%ecx
 852ea73:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 852ea77:	8b 48 21             	mov    0x21(%eax),%ecx
 852ea7a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 852ea7e:	8b 48 25             	mov    0x25(%eax),%ecx
 852ea81:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 852ea85:	8b 48 29             	mov    0x29(%eax),%ecx
 852ea88:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 852ea8c:	8b 48 2d             	mov    0x2d(%eax),%ecx
 852ea8f:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 852ea93:	8b 48 31             	mov    0x31(%eax),%ecx
 852ea96:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 852ea9a:	8b 48 35             	mov    0x35(%eax),%ecx
 852ea9d:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 852eaa1:	8b 48 39             	mov    0x39(%eax),%ecx
 852eaa4:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 852eaa8:	8b 48 3d             	mov    0x3d(%eax),%ecx
 852eaab:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 852eaaf:	8b 48 41             	mov    0x41(%eax),%ecx
 852eab2:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 852eab6:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852eaba:	88 44 24 40          	mov    %al,0x40(%esp)
 852eabe:	89 14 24             	mov    %edx,(%esp)
 852eac1:	e8 b6 4b fd ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 852eac6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852eac9:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 852eacd:	0f 88 b3 00 00 00    	js     852eb86 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x642>
 852ead3:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852ead6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852ead9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852eadc:	89 d0                	mov    %edx,%eax
 852eade:	c1 e0 03             	shl    $0x3,%eax
 852eae1:	01 d0                	add    %edx,%eax
 852eae3:	c1 e0 03             	shl    $0x3,%eax
 852eae6:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852eaec:	01 d0                	add    %edx,%eax
 852eaee:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852eaf1:	83 c0 30             	add    $0x30,%eax
 852eaf4:	8b 00                	mov    (%eax),%eax
 852eaf6:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 852eaf9:	0f 84 87 00 00 00    	je     852eb86 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x642>
 852eaff:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852eb02:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852eb05:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852eb08:	89 d0                	mov    %edx,%eax
 852eb0a:	c1 e0 03             	shl    $0x3,%eax
 852eb0d:	01 d0                	add    %edx,%eax
 852eb0f:	c1 e0 03             	shl    $0x3,%eax
 852eb12:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852eb18:	01 d0                	add    %edx,%eax
 852eb1a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852eb1d:	83 c0 40             	add    $0x40,%eax
 852eb20:	8b 18                	mov    (%eax),%ebx
 852eb22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852eb25:	8d 78 0a             	lea    0xa(%eax),%edi
 852eb28:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852eb2b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852eb2e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852eb31:	89 d0                	mov    %edx,%eax
 852eb33:	c1 e0 03             	shl    $0x3,%eax
 852eb36:	01 d0                	add    %edx,%eax
 852eb38:	c1 e0 03             	shl    $0x3,%eax
 852eb3b:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 852eb41:	01 d0                	add    %edx,%eax
 852eb43:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852eb46:	83 c0 30             	add    $0x30,%eax
 852eb49:	8b 00                	mov    (%eax),%eax
 852eb4b:	8d 70 0a             	lea    0xa(%eax),%esi
 852eb4e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852eb51:	8b 45 08             	mov    0x8(%ebp),%eax
 852eb54:	83 c2 08             	add    $0x8,%edx
 852eb57:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852eb5a:	89 04 24             	mov    %eax,(%esp)
 852eb5d:	e8 1c b7 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852eb62:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852eb69:	00 
 852eb6a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852eb6e:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852eb72:	89 74 24 08          	mov    %esi,0x8(%esp)
 852eb76:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 852eb7d:	00 
 852eb7e:	89 04 24             	mov    %eax,(%esp)
 852eb81:	e8 a8 a0 fd ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 852eb86:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852eb89:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852eb8c:	89 d0                	mov    %edx,%eax
 852eb8e:	01 c0                	add    %eax,%eax
 852eb90:	01 d0                	add    %edx,%eax
 852eb92:	c1 e0 02             	shl    $0x2,%eax
 852eb95:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852eb98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852eb9f:	00 
 852eba0:	89 04 24             	mov    %eax,(%esp)
 852eba3:	e8 78 cd b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852eba8:	e9 fa 01 00 00       	jmp    852eda7 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x863>
 852ebad:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852ebb0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852ebb3:	89 d0                	mov    %edx,%eax
 852ebb5:	c1 e0 03             	shl    $0x3,%eax
 852ebb8:	01 d0                	add    %edx,%eax
 852ebba:	c1 e0 03             	shl    $0x3,%eax
 852ebbd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852ebc3:	01 d0                	add    %edx,%eax
 852ebc5:	83 c0 30             	add    $0x30,%eax
 852ebc8:	03 45 08             	add    0x8(%ebp),%eax
 852ebcb:	8d 58 09             	lea    0x9(%eax),%ebx
 852ebce:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ebd1:	8b 45 08             	mov    0x8(%ebp),%eax
 852ebd4:	83 c2 08             	add    $0x8,%edx
 852ebd7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ebda:	89 04 24             	mov    %eax,(%esp)
 852ebdd:	e8 ac b6 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852ebe2:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 852ebe9:	00 
 852ebea:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852ebf1:	00 
 852ebf2:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 852ebf9:	00 
 852ebfa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852ebfe:	89 04 24             	mov    %eax,(%esp)
 852ec01:	e8 64 bc fd ff       	call   850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>
 852ec06:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852ec09:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 852ec0d:	0f 88 80 00 00 00    	js     852ec93 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x74f>
 852ec13:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852ec16:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852ec19:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ec1c:	89 d0                	mov    %edx,%eax
 852ec1e:	c1 e0 03             	shl    $0x3,%eax
 852ec21:	01 d0                	add    %edx,%eax
 852ec23:	c1 e0 03             	shl    $0x3,%eax
 852ec26:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ec2c:	01 d0                	add    %edx,%eax
 852ec2e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ec31:	83 c0 30             	add    $0x30,%eax
 852ec34:	8b 00                	mov    (%eax),%eax
 852ec36:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 852ec39:	74 58                	je     852ec93 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x74f>
 852ec3b:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852ec3e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852ec41:	89 d0                	mov    %edx,%eax
 852ec43:	c1 e0 03             	shl    $0x3,%eax
 852ec46:	01 d0                	add    %edx,%eax
 852ec48:	c1 e0 03             	shl    $0x3,%eax
 852ec4b:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852ec51:	01 d0                	add    %edx,%eax
 852ec53:	83 c0 30             	add    $0x30,%eax
 852ec56:	03 45 08             	add    0x8(%ebp),%eax
 852ec59:	8d 58 09             	lea    0x9(%eax),%ebx
 852ec5c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ec5f:	8b 45 08             	mov    0x8(%ebp),%eax
 852ec62:	83 c2 08             	add    $0x8,%edx
 852ec65:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ec68:	89 04 24             	mov    %eax,(%esp)
 852ec6b:	e8 1e b6 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852ec70:	89 04 24             	mov    %eax,(%esp)
 852ec73:	e8 f0 e8 ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 852ec78:	c7 44 24 0c 1c 00 00 	movl   $0x1c,0xc(%esp)
 852ec7f:	00 
 852ec80:	8b 55 dc             	mov    -0x24(%ebp),%edx
 852ec83:	89 54 24 08          	mov    %edx,0x8(%esp)
 852ec87:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852ec8b:	89 04 24             	mov    %eax,(%esp)
 852ec8e:	e8 49 c2 e0 ff       	call   833aedc <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii>
 852ec93:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ec96:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852ec99:	89 d0                	mov    %edx,%eax
 852ec9b:	01 c0                	add    %eax,%eax
 852ec9d:	01 d0                	add    %edx,%eax
 852ec9f:	c1 e0 02             	shl    $0x2,%eax
 852eca2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852eca5:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 852ecac:	00 
 852ecad:	89 04 24             	mov    %eax,(%esp)
 852ecb0:	e8 6b cc b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852ecb5:	e9 ed 00 00 00       	jmp    852eda7 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x863>
 852ecba:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852ecbd:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 852ecc0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ecc3:	8b 45 08             	mov    0x8(%ebp),%eax
 852ecc6:	83 c2 08             	add    $0x8,%edx
 852ecc9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852eccc:	89 04 24             	mov    %eax,(%esp)
 852eccf:	e8 ba b5 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852ecd4:	89 c2                	mov    %eax,%edx
 852ecd6:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852ecdd:	00 
 852ecde:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 852ece5:	00 
 852ece6:	c7 44 24 44 02 00 00 	movl   $0x2,0x44(%esp)
 852eced:	00 
 852ecee:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ecf1:	89 d8                	mov    %ebx,%eax
 852ecf3:	c1 e0 03             	shl    $0x3,%eax
 852ecf6:	01 d8                	add    %ebx,%eax
 852ecf8:	c1 e0 03             	shl    $0x3,%eax
 852ecfb:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 852ed01:	01 d8                	add    %ebx,%eax
 852ed03:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ed06:	83 c0 30             	add    $0x30,%eax
 852ed09:	8b 48 09             	mov    0x9(%eax),%ecx
 852ed0c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 852ed10:	8b 48 0d             	mov    0xd(%eax),%ecx
 852ed13:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 852ed17:	8b 48 11             	mov    0x11(%eax),%ecx
 852ed1a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852ed1e:	8b 48 15             	mov    0x15(%eax),%ecx
 852ed21:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 852ed25:	8b 48 19             	mov    0x19(%eax),%ecx
 852ed28:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 852ed2c:	8b 48 1d             	mov    0x1d(%eax),%ecx
 852ed2f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 852ed33:	8b 48 21             	mov    0x21(%eax),%ecx
 852ed36:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 852ed3a:	8b 48 25             	mov    0x25(%eax),%ecx
 852ed3d:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 852ed41:	8b 48 29             	mov    0x29(%eax),%ecx
 852ed44:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 852ed48:	8b 48 2d             	mov    0x2d(%eax),%ecx
 852ed4b:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 852ed4f:	8b 48 31             	mov    0x31(%eax),%ecx
 852ed52:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 852ed56:	8b 48 35             	mov    0x35(%eax),%ecx
 852ed59:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 852ed5d:	8b 48 39             	mov    0x39(%eax),%ecx
 852ed60:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 852ed64:	8b 48 3d             	mov    0x3d(%eax),%ecx
 852ed67:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 852ed6b:	8b 48 41             	mov    0x41(%eax),%ecx
 852ed6e:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 852ed72:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852ed76:	88 44 24 40          	mov    %al,0x40(%esp)
 852ed7a:	89 14 24             	mov    %edx,(%esp)
 852ed7d:	e8 c2 35 fd ff       	call   8502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>
 852ed82:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852ed85:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ed88:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852ed8b:	89 d0                	mov    %edx,%eax
 852ed8d:	01 c0                	add    %eax,%eax
 852ed8f:	01 d0                	add    %edx,%eax
 852ed91:	c1 e0 02             	shl    $0x2,%eax
 852ed94:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ed97:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 852ed9e:	00 
 852ed9f:	89 04 24             	mov    %eax,(%esp)
 852eda2:	e8 79 cb b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852eda7:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 852edab:	79 40                	jns    852eded <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x8a9>
 852edad:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852edb0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852edb3:	89 d0                	mov    %edx,%eax
 852edb5:	c1 e0 03             	shl    $0x3,%eax
 852edb8:	01 d0                	add    %edx,%eax
 852edba:	c1 e0 03             	shl    $0x3,%eax
 852edbd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852edc3:	01 d0                	add    %edx,%eax
 852edc5:	83 c0 30             	add    $0x30,%eax
 852edc8:	03 45 08             	add    0x8(%ebp),%eax
 852edcb:	8d 50 09             	lea    0x9(%eax),%edx
 852edce:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852edd1:	8b 45 08             	mov    0x8(%ebp),%eax
 852edd4:	83 c1 08             	add    $0x8,%ecx
 852edd7:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 852edda:	89 54 24 08          	mov    %edx,0x8(%esp)
 852edde:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ede2:	8b 45 08             	mov    0x8(%ebp),%eax
 852ede5:	89 04 24             	mov    %eax,(%esp)
 852ede8:	e8 bb f5 ff ff       	call   852e3a8 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item>
 852eded:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852edf0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852edf3:	89 d0                	mov    %edx,%eax
 852edf5:	c1 e0 03             	shl    $0x3,%eax
 852edf8:	01 d0                	add    %edx,%eax
 852edfa:	c1 e0 03             	shl    $0x3,%eax
 852edfd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852ee03:	01 d0                	add    %edx,%eax
 852ee05:	83 c0 30             	add    $0x30,%eax
 852ee08:	03 45 08             	add    0x8(%ebp),%eax
 852ee0b:	83 c0 09             	add    $0x9,%eax
 852ee0e:	89 04 24             	mov    %eax,(%esp)
 852ee11:	e8 c2 c9 b9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852ee16:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ee19:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852ee1c:	89 d0                	mov    %edx,%eax
 852ee1e:	01 c0                	add    %eax,%eax
 852ee20:	01 d0                	add    %edx,%eax
 852ee22:	c1 e0 02             	shl    $0x2,%eax
 852ee25:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 852ee28:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852ee2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ee2f:	89 14 24             	mov    %edx,(%esp)
 852ee32:	e8 6d b0 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852ee37:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 852ee3b:	eb 07                	jmp    852ee44 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x900>
 852ee3d:	90                   	nop
 852ee3e:	eb 04                	jmp    852ee44 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x900>
 852ee40:	90                   	nop
 852ee41:	eb 01                	jmp    852ee44 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x900>
 852ee43:	90                   	nop
 852ee44:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 852ee48:	83 7d e4 1a          	cmpl   $0x1a,-0x1c(%ebp)
 852ee4c:	0f 9e c0             	setle  %al
 852ee4f:	84 c0                	test   %al,%al
 852ee51:	0f 85 f9 f9 ff ff    	jne    852e850 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x30c>
 852ee57:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ee5a:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852ee5d:	89 d0                	mov    %edx,%eax
 852ee5f:	01 c0                	add    %eax,%eax
 852ee61:	01 d0                	add    %edx,%eax
 852ee63:	c1 e0 02             	shl    $0x2,%eax
 852ee66:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 852ee69:	8b 45 d8             	mov    -0x28(%ebp),%eax
 852ee6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 852ee70:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 852ee73:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ee77:	89 14 24             	mov    %edx,(%esp)
 852ee7a:	e8 89 7a be ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 852ee7f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ee82:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852ee85:	89 d0                	mov    %edx,%eax
 852ee87:	01 c0                	add    %eax,%eax
 852ee89:	01 d0                	add    %edx,%eax
 852ee8b:	c1 e0 02             	shl    $0x2,%eax
 852ee8e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ee91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852ee98:	00 
 852ee99:	89 04 24             	mov    %eax,(%esp)
 852ee9c:	e8 b7 ca b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852eea1:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 852eea5:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 852eea9:	0f 9e c0             	setle  %al
 852eeac:	84 c0                	test   %al,%al
 852eeae:	0f 85 18 f7 ff ff    	jne    852e5cc <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x88>
 852eeb4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852eebb:	eb 6e                	jmp    852ef2b <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x9e7>
 852eebd:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852eec0:	8b 45 08             	mov    0x8(%ebp),%eax
 852eec3:	83 c2 08             	add    $0x8,%edx
 852eec6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852eec9:	85 c0                	test   %eax,%eax
 852eecb:	74 59                	je     852ef26 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x9e2>
 852eecd:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852eed0:	8b 45 08             	mov    0x8(%ebp),%eax
 852eed3:	83 c2 08             	add    $0x8,%edx
 852eed6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852eed9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 852eedc:	74 49                	je     852ef27 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x9e3>
 852eede:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852eee1:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 852eee4:	89 d0                	mov    %edx,%eax
 852eee6:	01 c0                	add    %eax,%eax
 852eee8:	01 d0                	add    %edx,%eax
 852eeea:	c1 e0 02             	shl    $0x2,%eax
 852eeed:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 852eef0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852eef3:	8b 45 08             	mov    0x8(%ebp),%eax
 852eef6:	83 c1 08             	add    $0x8,%ecx
 852eef9:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 852eefc:	89 54 24 04          	mov    %edx,0x4(%esp)
 852ef00:	89 04 24             	mov    %eax,(%esp)
 852ef03:	e8 b2 96 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852ef08:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ef0b:	8b 45 08             	mov    0x8(%ebp),%eax
 852ef0e:	83 c2 08             	add    $0x8,%edx
 852ef11:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ef14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ef1b:	00 
 852ef1c:	89 04 24             	mov    %eax,(%esp)
 852ef1f:	e8 f0 ed 12 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 852ef24:	eb 01                	jmp    852ef27 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x9e3>
 852ef26:	90                   	nop
 852ef27:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 852ef2b:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 852ef2f:	0f 9e c0             	setle  %al
 852ef32:	84 c0                	test   %al,%al
 852ef34:	75 87                	jne    852eebd <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x979>
 852ef36:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852ef3d:	eb 58                	jmp    852ef97 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa53>
 852ef3f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ef42:	8b 45 08             	mov    0x8(%ebp),%eax
 852ef45:	83 c2 08             	add    $0x8,%edx
 852ef48:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ef4b:	85 c0                	test   %eax,%eax
 852ef4d:	74 43                	je     852ef92 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa4e>
 852ef4f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ef52:	8b 45 08             	mov    0x8(%ebp),%eax
 852ef55:	83 c2 08             	add    $0x8,%edx
 852ef58:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ef5b:	05 00 97 07 00       	add    $0x79700,%eax
 852ef60:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852ef67:	00 
 852ef68:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 852ef6f:	00 
 852ef70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852ef77:	00 
 852ef78:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 852ef7f:	00 
 852ef80:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ef87:	00 
 852ef88:	89 04 24             	mov    %eax,(%esp)
 852ef8b:	e8 ec 60 15 00       	call   868507c <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii>
 852ef90:	eb 01                	jmp    852ef93 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa4f>
 852ef92:	90                   	nop
 852ef93:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 852ef97:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 852ef9b:	0f 9e c0             	setle  %al
 852ef9e:	84 c0                	test   %al,%al
 852efa0:	75 9d                	jne    852ef3f <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0x9fb>
 852efa2:	be 01 00 00 00       	mov    $0x1,%esi
 852efa7:	eb 2a                	jmp    852efd3 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa8f>
 852efa9:	89 d6                	mov    %edx,%esi
 852efab:	89 c7                	mov    %eax,%edi
 852efad:	8d 45 a8             	lea    -0x58(%ebp),%eax
 852efb0:	8d 58 18             	lea    0x18(%eax),%ebx
 852efb3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 852efb6:	39 c3                	cmp    %eax,%ebx
 852efb8:	74 0d                	je     852efc7 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa83>
 852efba:	83 eb 0c             	sub    $0xc,%ebx
 852efbd:	89 1c 24             	mov    %ebx,(%esp)
 852efc0:	e8 bb ee 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852efc5:	eb ec                	jmp    852efb3 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa6f>
 852efc7:	89 f8                	mov    %edi,%eax
 852efc9:	89 f2                	mov    %esi,%edx
 852efcb:	89 04 24             	mov    %eax,(%esp)
 852efce:	e8 7d 47 5b 00       	call   8ae3750 <_Unwind_Resume>
 852efd3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 852efd6:	8d 58 18             	lea    0x18(%eax),%ebx
 852efd9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 852efdc:	39 c3                	cmp    %eax,%ebx
 852efde:	74 0d                	je     852efed <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xaa9>
 852efe0:	83 eb 0c             	sub    $0xc,%ebx
 852efe3:	89 1c 24             	mov    %ebx,(%esp)
 852efe6:	e8 95 ee 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852efeb:	eb ec                	jmp    852efd9 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser+0xa95>
 852efed:	89 f0                	mov    %esi,%eax
 852efef:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 852eff5:	5b                   	pop    %ebx
 852eff6:	5e                   	pop    %esi
 852eff7:	5f                   	pop    %edi
 852eff8:	5d                   	pop    %ebp
 852eff9:	c3                   	ret

```

```c
// CTradeSpace::cancel_trade_for_china @ 0x852e544

/* CTradeSpace::cancel_trade_for_china(CUser*) */

undefined4 __thiscall CTradeSpace::cancel_trade_for_china(CTradeSpace *this,CUser *param_1)

{
  CTradeSpace CVar1;
  int iVar2;
  CInventory *pCVar3;
  CCreatureMgr *this_00;
  int iVar4;
  PacketGuard *pPVar5;
  int iVar6;
  undefined4 uVar7;
  int local_60;
  PacketGuard local_5c [24];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_34 = 0;
  local_30 = 0;
  pPVar5 = local_5c;
  for (iVar6 = 1; iVar6 != -1; iVar6 = iVar6 + -1) {
                    /* try { // try from 0852e56d to 0852e571 has its CatchHandler @ 0852e584 */
    PacketGuard::PacketGuard(pPVar5);
    pPVar5 = pPVar5 + 0xc;
  }
  local_30 = 0;
  do {
    if (1 < local_30) {
      for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
        if ((*(int *)(this + (local_30 + 8) * 4) != 0) &&
           (*(CUser **)(this + (local_30 + 8) * 4) != param_1)) {
          CUser::Send(*(CUser **)(this + (local_30 + 8) * 4),local_5c + local_30 * 0xc);
          CUser::send_equip(*(CUser **)(this + (local_30 + 8) * 4),0);
        }
      }
      for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
        if (*(int *)(this + (local_30 + 8) * 4) != 0) {
          cUserHistoryLog::TradeEnd
                    ((cUserHistoryLog *)(*(int *)(this + (local_30 + 8) * 4) + 0x79700),0,0,0,0,0);
        }
      }
      uVar7 = 1;
LAB_0852efd3:
      pPVar5 = (PacketGuard *)local_44;
      while (pPVar5 != local_5c) {
        pPVar5 = pPVar5 + -0xc;
        PacketGuard::~PacketGuard(pPVar5);
      }
      return uVar7;
    }
    local_34 = 0;
    for (local_24 = 3; local_24 < 0x1b; local_24 = local_24 + 1) {
      if (*(int *)(this + local_24 * 0x48 + local_30 * 0x798 + 0x3b) != 0) {
        local_34 = local_34 + 1;
      }
    }
                    /* try { // try from 0852e62c to 0852ef8f has its CatchHandler @ 0852efa9 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
    InterfacePacketBuf::put_header((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0,0x10);
    local_2c = 0;
    local_60 = 0;
    if (*(int *)(this + (local_30 + 0x3d8) * 4) < 1) {
      local_60 = InterfacePacketBuf::get_index((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),(int)(short)local_34);
    }
    else {
      local_34 = local_34 + 1;
      if (*(int *)(this + (local_30 + 8) * 4) != 0) {
        iVar6 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
        if (iVar6 == 0) {
          cMyTrace::cMyTrace(local_44,"bool CTradeSpace::cancel_trade_for_china(CUser*)",0x71c,5);
          cMyTrace::operator()
                    (local_44,"CTradeSpace::cancel_trade()\tm_pTraders[user_index]->getCurCharacR()"
                    );
          uVar7 = 0;
          goto LAB_0852efd3;
        }
        uVar7 = *(undefined4 *)(this + (local_30 + 0x3d8) * 4);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
        CInventory::gain_money(pCVar3,uVar7,2,1,0);
        *(undefined4 *)(this + (local_30 + 0x3d8) * 4) = 0;
        local_2c = local_2c + 1;
      }
      local_60 = InterfacePacketBuf::get_index((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),(int)(short)local_34);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
    }
    local_28 = 0;
    for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
      if (((*(int *)(this + (local_30 + 8) * 4) != 0) &&
          (iVar6 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_30 + 8) * 4)),
          iVar6 != 0)) && (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x3b) != 0)) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),local_20);
        iVar4 = local_20;
        iVar6 = local_30;
        CVar1 = this[local_20 * 0x48 + local_30 * 0x798 + 0x38];
        if (CVar1 == (CTradeSpace)0x1) {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertAvatarIntoInventory
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],3,1);
          if ((-1 < local_28) &&
             (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30) != local_28)) {
            iVar4 = *(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x40);
            iVar6 = local_28 + 10;
            iVar2 = *(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30);
            pCVar3 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR
                               (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
            CInventory::SendAvatarEvent(pCVar3,0x32,iVar2 + 10,iVar6,iVar4,0);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),1);
        }
        else if (CVar1 == (CTradeSpace)0x7) {
          iVar6 = local_20 * 0x48;
          iVar4 = local_30 * 0x798;
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          local_28 = CInventory::insertItemIntoCreature(uVar7,this + iVar6 + iVar4 + 0x39,0x1c,1,1);
          if ((-1 < local_28) &&
             (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30) != local_28)) {
            iVar6 = local_20 * 0x48;
            iVar4 = local_30 * 0x798;
            pCVar3 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
            this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
            user_creature::CCreatureMgr::ChangeSlotNo
                      (this_00,(Inven_Item *)(this + iVar6 + iVar4 + 0x39),local_28,0x1c);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),7);
        }
        else if (CVar1 == (CTradeSpace)0x0) {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertItemIntoInventory
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],2,1,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
        }
        else {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertItemIntoEquipment
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],2,1,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),3);
        }
        if (local_28 < 0) {
          send_lose_item_for_china
                    (this,*(CUser **)(this + (local_30 + 8) * 4),
                     (Inven_Item *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x39));
        }
        Inven_Item::reset((Inven_Item *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x39));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),local_28);
        local_2c = local_2c + 1;
      }
    }
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),&local_60,local_2c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)(local_5c + local_30 * 0xc),true);
    local_30 = local_30 + 1;
  } while( true );
}

```

---

## change_trade_state

```asm
// === 0852f134 CTradeSpace::change_trade_state  [0x0852f134-0x853020f] ===
 852f134:	55                   	push   %ebp
 852f135:	89 e5                	mov    %esp,%ebp
 852f137:	57                   	push   %edi
 852f138:	56                   	push   %esi
 852f139:	53                   	push   %ebx
 852f13a:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 852f140:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f146:	89 04 24             	mov    %eax,(%esp)
 852f149:	e8 fe eb 05 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 852f14e:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 852f155:	8b 45 08             	mov    0x8(%ebp),%eax
 852f158:	8b 40 20             	mov    0x20(%eax),%eax
 852f15b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 852f15e:	75 19                	jne    852f179 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x45>
 852f160:	8b 45 08             	mov    0x8(%ebp),%eax
 852f163:	8b 40 24             	mov    0x24(%eax),%eax
 852f166:	89 45 8c             	mov    %eax,-0x74(%ebp)
 852f169:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
 852f170:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 852f177:	eb 17                	jmp    852f190 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x5c>
 852f179:	8b 45 08             	mov    0x8(%ebp),%eax
 852f17c:	8b 40 20             	mov    0x20(%eax),%eax
 852f17f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 852f182:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 852f189:	c7 45 94 01 00 00 00 	movl   $0x1,-0x6c(%ebp)
 852f190:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 852f194:	0f 85 8d 00 00 00    	jne    852f227 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xf3>
 852f19a:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f1a0:	89 04 24             	mov    %eax,(%esp)
 852f1a3:	e8 3e c7 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852f1a8:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 852f1af:	00 
 852f1b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f1b7:	00 
 852f1b8:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f1be:	89 04 24             	mov    %eax,(%esp)
 852f1c1:	e8 36 c7 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852f1c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852f1cd:	00 
 852f1ce:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f1d4:	89 04 24             	mov    %eax,(%esp)
 852f1d7:	e8 44 c7 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852f1dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f1e3:	00 
 852f1e4:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f1ea:	89 04 24             	mov    %eax,(%esp)
 852f1ed:	e8 2e c7 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852f1f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f1f9:	00 
 852f1fa:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f200:	89 04 24             	mov    %eax,(%esp)
 852f203:	e8 50 c7 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852f208:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f20e:	89 44 24 04          	mov    %eax,0x4(%esp)
 852f212:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f215:	89 04 24             	mov    %eax,(%esp)
 852f218:	e8 9d 93 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852f21d:	bb 01 00 00 00       	mov    $0x1,%ebx
 852f222:	e9 cd 0f 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852f227:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 852f22b:	0f 87 62 0f 00 00    	ja     8530193 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x105f>
 852f231:	8b 45 10             	mov    0x10(%ebp),%eax
 852f234:	c1 e0 02             	shl    $0x2,%eax
 852f237:	8b 80 34 77 c9 08    	mov    0x8c97734(%eax),%eax
 852f23d:	ff e0                	jmp    *%eax
 852f23f:	8b 45 08             	mov    0x8(%ebp),%eax
 852f242:	89 04 24             	mov    %eax,(%esp)
 852f245:	e8 b0 fd ff ff       	call   852effa <_ZN11CTradeSpace12cancel_tradeEv>
 852f24a:	84 c0                	test   %al,%al
 852f24c:	74 19                	je     852f267 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x133>
 852f24e:	e8 3b cf b9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 852f253:	8b 55 08             	mov    0x8(%ebp),%edx
 852f256:	89 54 24 04          	mov    %edx,0x4(%esp)
 852f25a:	89 04 24             	mov    %eax,(%esp)
 852f25d:	e8 7c 5b d6 ff       	call   8294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>
 852f262:	e9 83 00 00 00       	jmp    852f2ea <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1b6>
 852f267:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852f26a:	89 04 24             	mov    %eax,(%esp)
 852f26d:	e8 dc c9 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852f272:	89 c6                	mov    %eax,%esi
 852f274:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f277:	89 04 24             	mov    %eax,(%esp)
 852f27a:	e8 cf c9 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852f27f:	89 c3                	mov    %eax,%ebx
 852f281:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852f288:	00 
 852f289:	c7 44 24 08 db 09 00 	movl   $0x9db,0x8(%esp)
 852f290:	00 
 852f291:	c7 44 24 04 80 84 c9 	movl   $0x8c98480,0x4(%esp)
 852f298:	08 
 852f299:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 852f29f:	89 04 24             	mov    %eax,(%esp)
 852f2a2:	e8 71 04 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852f2a7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 852f2ab:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852f2af:	c7 44 24 04 74 76 c9 	movl   $0x8c97674,0x4(%esp)
 852f2b6:	08 
 852f2b7:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 852f2bd:	89 04 24             	mov    %eax,(%esp)
 852f2c0:	e8 c3 04 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852f2c5:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f2cb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852f2cf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 852f2d6:	00 
 852f2d7:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f2de:	00 
 852f2df:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f2e2:	89 04 24             	mov    %eax,(%esp)
 852f2e5:	e8 c4 cc 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852f2ea:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 852f2f1:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 852f2f8:	eb 48                	jmp    852f342 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x20e>
 852f2fa:	c7 45 a0 03 00 00 00 	movl   $0x3,-0x60(%ebp)
 852f301:	eb 30                	jmp    852f333 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1ff>
 852f303:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 852f306:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852f309:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f30c:	89 d0                	mov    %edx,%eax
 852f30e:	c1 e0 03             	shl    $0x3,%eax
 852f311:	01 d0                	add    %edx,%eax
 852f313:	c1 e0 03             	shl    $0x3,%eax
 852f316:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f31c:	01 d0                	add    %edx,%eax
 852f31e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f321:	83 c0 30             	add    $0x30,%eax
 852f324:	8b 40 0b             	mov    0xb(%eax),%eax
 852f327:	85 c0                	test   %eax,%eax
 852f329:	74 04                	je     852f32f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1fb>
 852f32b:	83 45 98 01          	addl   $0x1,-0x68(%ebp)
 852f32f:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
 852f333:	83 7d a0 1a          	cmpl   $0x1a,-0x60(%ebp)
 852f337:	0f 9e c0             	setle  %al
 852f33a:	84 c0                	test   %al,%al
 852f33c:	75 c5                	jne    852f303 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1cf>
 852f33e:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 852f342:	83 7d 9c 01          	cmpl   $0x1,-0x64(%ebp)
 852f346:	0f 9e c0             	setle  %al
 852f349:	84 c0                	test   %al,%al
 852f34b:	75 ad                	jne    852f2fa <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1c6>
 852f34d:	83 7d 98 00          	cmpl   $0x0,-0x68(%ebp)
 852f351:	0f 8e 68 0e 00 00    	jle    85301bf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x108b>
 852f357:	8b 45 08             	mov    0x8(%ebp),%eax
 852f35a:	8b 40 20             	mov    0x20(%eax),%eax
 852f35d:	85 c0                	test   %eax,%eax
 852f35f:	0f 84 5d 0e 00 00    	je     85301c2 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x108e>
 852f365:	8b 45 08             	mov    0x8(%ebp),%eax
 852f368:	8b 40 24             	mov    0x24(%eax),%eax
 852f36b:	85 c0                	test   %eax,%eax
 852f36d:	0f 84 52 0e 00 00    	je     85301c5 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1091>
 852f373:	8b 45 08             	mov    0x8(%ebp),%eax
 852f376:	8b 40 24             	mov    0x24(%eax),%eax
 852f379:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852f380:	ff 
 852f381:	89 04 24             	mov    %eax,(%esp)
 852f384:	e8 17 ec 11 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 852f389:	89 c6                	mov    %eax,%esi
 852f38b:	8b 45 08             	mov    0x8(%ebp),%eax
 852f38e:	8b 40 20             	mov    0x20(%eax),%eax
 852f391:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852f398:	ff 
 852f399:	89 04 24             	mov    %eax,(%esp)
 852f39c:	e8 ff eb 11 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 852f3a1:	89 c3                	mov    %eax,%ebx
 852f3a3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852f3aa:	00 
 852f3ab:	c7 44 24 08 eb 09 00 	movl   $0x9eb,0x8(%esp)
 852f3b2:	00 
 852f3b3:	c7 44 24 04 80 84 c9 	movl   $0x8c98480,0x4(%esp)
 852f3ba:	08 
 852f3bb:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 852f3c1:	89 04 24             	mov    %eax,(%esp)
 852f3c4:	e8 4f 03 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852f3c9:	89 74 24 10          	mov    %esi,0x10(%esp)
 852f3cd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 852f3d1:	8b 45 98             	mov    -0x68(%ebp),%eax
 852f3d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 852f3d8:	c7 44 24 04 a8 76 c9 	movl   $0x8c976a8,0x4(%esp)
 852f3df:	08 
 852f3e0:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 852f3e6:	89 04 24             	mov    %eax,(%esp)
 852f3e9:	e8 9a 03 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852f3ee:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 852f3f5:	e9 18 01 00 00       	jmp    852f512 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x3de>
 852f3fa:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852f3fd:	8b 45 08             	mov    0x8(%ebp),%eax
 852f400:	83 c2 08             	add    $0x8,%edx
 852f403:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f406:	85 c0                	test   %eax,%eax
 852f408:	0f 84 00 01 00 00    	je     852f50e <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x3da>
 852f40e:	c7 45 a8 03 00 00 00 	movl   $0x3,-0x58(%ebp)
 852f415:	e9 e5 00 00 00       	jmp    852f4ff <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x3cb>
 852f41a:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852f41d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852f420:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f423:	89 d0                	mov    %edx,%eax
 852f425:	c1 e0 03             	shl    $0x3,%eax
 852f428:	01 d0                	add    %edx,%eax
 852f42a:	c1 e0 03             	shl    $0x3,%eax
 852f42d:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f433:	01 d0                	add    %edx,%eax
 852f435:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f438:	83 c0 30             	add    $0x30,%eax
 852f43b:	8b 40 0b             	mov    0xb(%eax),%eax
 852f43e:	85 c0                	test   %eax,%eax
 852f440:	0f 84 b5 00 00 00    	je     852f4fb <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x3c7>
 852f446:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852f449:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852f44c:	89 d0                	mov    %edx,%eax
 852f44e:	c1 e0 03             	shl    $0x3,%eax
 852f451:	01 d0                	add    %edx,%eax
 852f453:	c1 e0 03             	shl    $0x3,%eax
 852f456:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852f45c:	01 d0                	add    %edx,%eax
 852f45e:	83 c0 30             	add    $0x30,%eax
 852f461:	03 45 08             	add    0x8(%ebp),%eax
 852f464:	83 c0 09             	add    $0x9,%eax
 852f467:	89 04 24             	mov    %eax,(%esp)
 852f46a:	e8 cb 83 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852f46f:	89 c6                	mov    %eax,%esi
 852f471:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852f474:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852f477:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f47a:	89 d0                	mov    %edx,%eax
 852f47c:	c1 e0 03             	shl    $0x3,%eax
 852f47f:	01 d0                	add    %edx,%eax
 852f481:	c1 e0 03             	shl    $0x3,%eax
 852f484:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f48a:	01 d0                	add    %edx,%eax
 852f48c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f48f:	83 c0 30             	add    $0x30,%eax
 852f492:	8b 78 0b             	mov    0xb(%eax),%edi
 852f495:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852f498:	8b 45 08             	mov    0x8(%ebp),%eax
 852f49b:	83 c2 08             	add    $0x8,%edx
 852f49e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f4a1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852f4a8:	ff 
 852f4a9:	89 04 24             	mov    %eax,(%esp)
 852f4ac:	e8 ef ea 11 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 852f4b1:	89 c3                	mov    %eax,%ebx
 852f4b3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852f4ba:	00 
 852f4bb:	c7 44 24 08 f8 09 00 	movl   $0x9f8,0x8(%esp)
 852f4c2:	00 
 852f4c3:	c7 44 24 04 80 84 c9 	movl   $0x8c98480,0x4(%esp)
 852f4ca:	08 
 852f4cb:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 852f4d1:	89 04 24             	mov    %eax,(%esp)
 852f4d4:	e8 3f 02 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852f4d9:	89 74 24 10          	mov    %esi,0x10(%esp)
 852f4dd:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852f4e1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852f4e5:	c7 44 24 04 e5 76 c9 	movl   $0x8c976e5,0x4(%esp)
 852f4ec:	08 
 852f4ed:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 852f4f3:	89 04 24             	mov    %eax,(%esp)
 852f4f6:	e8 8d 02 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852f4fb:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 852f4ff:	83 7d a8 1a          	cmpl   $0x1a,-0x58(%ebp)
 852f503:	0f 9e c0             	setle  %al
 852f506:	84 c0                	test   %al,%al
 852f508:	0f 85 0c ff ff ff    	jne    852f41a <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x2e6>
 852f50e:	83 45 a4 01          	addl   $0x1,-0x5c(%ebp)
 852f512:	83 7d a4 01          	cmpl   $0x1,-0x5c(%ebp)
 852f516:	0f 9e c0             	setle  %al
 852f519:	84 c0                	test   %al,%al
 852f51b:	0f 85 d9 fe ff ff    	jne    852f3fa <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x2c6>
 852f521:	e9 a9 0c 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 852f526:	8b 45 08             	mov    0x8(%ebp),%eax
 852f529:	89 04 24             	mov    %eax,(%esp)
 852f52c:	e8 bd 2b 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 852f531:	84 c0                	test   %al,%al
 852f533:	74 2a                	je     852f55f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x42b>
 852f535:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f53b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852f53f:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 852f546:	00 
 852f547:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f54e:	00 
 852f54f:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f552:	89 04 24             	mov    %eax,(%esp)
 852f555:	e8 54 ca 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852f55a:	e9 70 0c 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 852f55f:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852f562:	8b 45 08             	mov    0x8(%ebp),%eax
 852f565:	83 c2 08             	add    $0x8,%edx
 852f568:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852f56f:	00 
 852f570:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852f577:	00 
 852f578:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852f57b:	89 44 24 08          	mov    %eax,0x8(%esp)
 852f57f:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f582:	89 44 24 04          	mov    %eax,0x4(%esp)
 852f586:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f58c:	89 04 24             	mov    %eax,(%esp)
 852f58f:	e8 0c fb ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 852f594:	e9 36 0c 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 852f599:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 852f59e:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 852f5a5:	00 
 852f5a6:	8b 55 0c             	mov    0xc(%ebp),%edx
 852f5a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 852f5ad:	89 04 24             	mov    %eax,(%esp)
 852f5b0:	e8 4d 94 d5 ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 852f5b5:	89 45 ac             	mov    %eax,-0x54(%ebp)
 852f5b8:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 852f5bc:	0f 84 d1 00 00 00    	je     852f693 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x55f>
 852f5c2:	8b 45 ac             	mov    -0x54(%ebp),%eax
 852f5c5:	0f b6 c0             	movzbl %al,%eax
 852f5c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 852f5cc:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f5d3:	00 
 852f5d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f5d7:	89 04 24             	mov    %eax,(%esp)
 852f5da:	e8 63 c9 14 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 852f5df:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 852f5e4:	8b 55 ac             	mov    -0x54(%ebp),%edx
 852f5e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 852f5eb:	89 04 24             	mov    %eax,(%esp)
 852f5ee:	e8 4d 8b d5 ff       	call   8288140 <_ZN21CSecu_ProtectionField14GetOppositeErrEi>
 852f5f3:	0f b6 c0             	movzbl %al,%eax
 852f5f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 852f5fa:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f601:	00 
 852f602:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852f605:	89 04 24             	mov    %eax,(%esp)
 852f608:	e8 35 c9 14 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 852f60d:	83 7d ac 7b          	cmpl   $0x7b,-0x54(%ebp)
 852f611:	74 09                	je     852f61c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x4e8>
 852f613:	81 7d ac 89 00 00 00 	cmpl   $0x89,-0x54(%ebp)
 852f61a:	75 6d                	jne    852f689 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x555>
 852f61c:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f622:	89 04 24             	mov    %eax,(%esp)
 852f625:	e8 bc c2 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852f62a:	c7 44 24 08 b0 00 00 	movl   $0xb0,0x8(%esp)
 852f631:	00 
 852f632:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852f639:	00 
 852f63a:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f640:	89 04 24             	mov    %eax,(%esp)
 852f643:	e8 b4 c2 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852f648:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f64f:	00 
 852f650:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f656:	89 04 24             	mov    %eax,(%esp)
 852f659:	e8 c2 c2 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852f65e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f665:	00 
 852f666:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f66c:	89 04 24             	mov    %eax,(%esp)
 852f66f:	e8 e4 c2 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852f674:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f67a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852f67e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852f681:	89 04 24             	mov    %eax,(%esp)
 852f684:	e8 31 8f 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852f689:	bb 00 00 00 00       	mov    $0x0,%ebx
 852f68e:	e9 61 0b 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852f693:	8b 45 08             	mov    0x8(%ebp),%eax
 852f696:	89 04 24             	mov    %eax,(%esp)
 852f699:	e8 50 2a 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 852f69e:	84 c0                	test   %al,%al
 852f6a0:	74 2a                	je     852f6cc <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x598>
 852f6a2:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f6a8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852f6ac:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 852f6b3:	00 
 852f6b4:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f6bb:	00 
 852f6bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f6bf:	89 04 24             	mov    %eax,(%esp)
 852f6c2:	e8 e7 c8 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852f6c7:	e9 03 0b 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 852f6cc:	8d 9d 14 ff ff ff    	lea    -0xec(%ebp),%ebx
 852f6d2:	b8 00 00 00 00       	mov    $0x0,%eax
 852f6d7:	ba 0b 00 00 00       	mov    $0xb,%edx
 852f6dc:	89 df                	mov    %ebx,%edi
 852f6de:	89 d1                	mov    %edx,%ecx
 852f6e0:	f3 ab                	rep stos %eax,%es:(%edi)
 852f6e2:	8d 9d e8 fe ff ff    	lea    -0x118(%ebp),%ebx
 852f6e8:	b8 00 00 00 00       	mov    $0x0,%eax
 852f6ed:	ba 0b 00 00 00       	mov    $0xb,%edx
 852f6f2:	89 df                	mov    %ebx,%edi
 852f6f4:	89 d1                	mov    %edx,%ecx
 852f6f6:	f3 ab                	rep stos %eax,%es:(%edi)
 852f6f8:	8b 55 90             	mov    -0x70(%ebp),%edx
 852f6fb:	8b 45 08             	mov    0x8(%ebp),%eax
 852f6fe:	83 c2 08             	add    $0x8,%edx
 852f701:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f704:	89 04 24             	mov    %eax,(%esp)
 852f707:	e8 72 ab ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852f70c:	89 04 24             	mov    %eax,(%esp)
 852f70f:	e8 24 59 fd ff       	call   8505038 <_ZNK10CInventory15QuickEmptyCountEv>
 852f714:	89 45 b0             	mov    %eax,-0x50(%ebp)
 852f717:	c7 45 b4 03 00 00 00 	movl   $0x3,-0x4c(%ebp)
 852f71e:	e9 28 01 00 00       	jmp    852f84b <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x717>
 852f723:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852f726:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 852f729:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f72c:	89 d0                	mov    %edx,%eax
 852f72e:	c1 e0 03             	shl    $0x3,%eax
 852f731:	01 d0                	add    %edx,%eax
 852f733:	c1 e0 03             	shl    $0x3,%eax
 852f736:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f73c:	01 d0                	add    %edx,%eax
 852f73e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f741:	83 c0 30             	add    $0x30,%eax
 852f744:	8b 40 0b             	mov    0xb(%eax),%eax
 852f747:	85 c0                	test   %eax,%eax
 852f749:	0f 84 f7 00 00 00    	je     852f846 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x712>
 852f74f:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 852f752:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 852f755:	89 d0                	mov    %edx,%eax
 852f757:	c1 e0 03             	shl    $0x3,%eax
 852f75a:	01 d0                	add    %edx,%eax
 852f75c:	c1 e0 03             	shl    $0x3,%eax
 852f75f:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852f765:	01 d0                	add    %edx,%eax
 852f767:	83 c0 30             	add    $0x30,%eax
 852f76a:	03 45 08             	add    0x8(%ebp),%eax
 852f76d:	83 c0 09             	add    $0x9,%eax
 852f770:	89 04 24             	mov    %eax,(%esp)
 852f773:	e8 9a 10 c2 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 852f778:	83 f0 01             	xor    $0x1,%eax
 852f77b:	84 c0                	test   %al,%al
 852f77d:	0f 84 88 00 00 00    	je     852f80b <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x6d7>
 852f783:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852f786:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 852f789:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f78c:	89 d0                	mov    %edx,%eax
 852f78e:	c1 e0 03             	shl    $0x3,%eax
 852f791:	01 d0                	add    %edx,%eax
 852f793:	c1 e0 03             	shl    $0x3,%eax
 852f796:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f79c:	01 d0                	add    %edx,%eax
 852f79e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f7a1:	83 c0 30             	add    $0x30,%eax
 852f7a4:	8b 40 0b             	mov    0xb(%eax),%eax
 852f7a7:	89 c3                	mov    %eax,%ebx
 852f7a9:	8b 55 90             	mov    -0x70(%ebp),%edx
 852f7ac:	8b 45 08             	mov    0x8(%ebp),%eax
 852f7af:	83 c2 08             	add    $0x8,%edx
 852f7b2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f7b5:	89 04 24             	mov    %eax,(%esp)
 852f7b8:	e8 c1 aa ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852f7bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852f7c1:	89 04 24             	mov    %eax,(%esp)
 852f7c4:	e8 a9 59 fd ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 852f7c9:	c1 e8 1f             	shr    $0x1f,%eax
 852f7cc:	84 c0                	test   %al,%al
 852f7ce:	74 77                	je     852f847 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x713>
 852f7d0:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852f7d3:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 852f7d6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f7d9:	89 d0                	mov    %edx,%eax
 852f7db:	c1 e0 03             	shl    $0x3,%eax
 852f7de:	01 d0                	add    %edx,%eax
 852f7e0:	c1 e0 03             	shl    $0x3,%eax
 852f7e3:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f7e9:	01 d0                	add    %edx,%eax
 852f7eb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f7ee:	83 c0 30             	add    $0x30,%eax
 852f7f1:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852f7f5:	0f b6 c0             	movzbl %al,%eax
 852f7f8:	8b 94 85 14 ff ff ff 	mov    -0xec(%ebp,%eax,4),%edx
 852f7ff:	83 c2 01             	add    $0x1,%edx
 852f802:	89 94 85 14 ff ff ff 	mov    %edx,-0xec(%ebp,%eax,4)
 852f809:	eb 3c                	jmp    852f847 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x713>
 852f80b:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852f80e:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 852f811:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852f814:	89 d0                	mov    %edx,%eax
 852f816:	c1 e0 03             	shl    $0x3,%eax
 852f819:	01 d0                	add    %edx,%eax
 852f81b:	c1 e0 03             	shl    $0x3,%eax
 852f81e:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852f824:	01 d0                	add    %edx,%eax
 852f826:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852f829:	83 c0 30             	add    $0x30,%eax
 852f82c:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852f830:	0f b6 c0             	movzbl %al,%eax
 852f833:	8b 94 85 14 ff ff ff 	mov    -0xec(%ebp,%eax,4),%edx
 852f83a:	83 c2 01             	add    $0x1,%edx
 852f83d:	89 94 85 14 ff ff ff 	mov    %edx,-0xec(%ebp,%eax,4)
 852f844:	eb 01                	jmp    852f847 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x713>
 852f846:	90                   	nop
 852f847:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 852f84b:	83 7d b4 1a          	cmpl   $0x1a,-0x4c(%ebp)
 852f84f:	0f 9e c0             	setle  %al
 852f852:	84 c0                	test   %al,%al
 852f854:	0f 85 c9 fe ff ff    	jne    852f723 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x5ef>
 852f85a:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 852f861:	e9 9b 00 00 00       	jmp    852f901 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x7cd>
 852f866:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 852f869:	8b 75 b8             	mov    -0x48(%ebp),%esi
 852f86c:	8b 55 90             	mov    -0x70(%ebp),%edx
 852f86f:	8b 45 08             	mov    0x8(%ebp),%eax
 852f872:	83 c2 08             	add    $0x8,%edx
 852f875:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f878:	89 04 24             	mov    %eax,(%esp)
 852f87b:	e8 fe a9 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852f880:	89 74 24 04          	mov    %esi,0x4(%esp)
 852f884:	89 04 24             	mov    %eax,(%esp)
 852f887:	e8 f4 57 fd ff       	call   8505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>
 852f88c:	89 84 9d e8 fe ff ff 	mov    %eax,-0x118(%ebp,%ebx,4)
 852f893:	8b 45 b8             	mov    -0x48(%ebp),%eax
 852f896:	8b 94 85 14 ff ff ff 	mov    -0xec(%ebp,%eax,4),%edx
 852f89d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 852f8a0:	8b 84 85 e8 fe ff ff 	mov    -0x118(%ebp,%eax,4),%eax
 852f8a7:	39 c2                	cmp    %eax,%edx
 852f8a9:	7e 52                	jle    852f8fd <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x7c9>
 852f8ab:	8b 45 b8             	mov    -0x48(%ebp),%eax
 852f8ae:	8b 94 85 e8 fe ff ff 	mov    -0x118(%ebp,%eax,4),%edx
 852f8b5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 852f8b8:	8b 84 85 14 ff ff ff 	mov    -0xec(%ebp,%eax,4),%eax
 852f8bf:	89 d1                	mov    %edx,%ecx
 852f8c1:	29 c1                	sub    %eax,%ecx
 852f8c3:	89 c8                	mov    %ecx,%eax
 852f8c5:	01 45 b0             	add    %eax,-0x50(%ebp)
 852f8c8:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 852f8cc:	79 2f                	jns    852f8fd <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x7c9>
 852f8ce:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f8d4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852f8d8:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 852f8df:	00 
 852f8e0:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f8e7:	00 
 852f8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f8eb:	89 04 24             	mov    %eax,(%esp)
 852f8ee:	e8 bb c6 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852f8f3:	bb 00 00 00 00       	mov    $0x0,%ebx
 852f8f8:	e9 f7 08 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852f8fd:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 852f901:	83 7d b8 0a          	cmpl   $0xa,-0x48(%ebp)
 852f905:	0f 9e c0             	setle  %al
 852f908:	84 c0                	test   %al,%al
 852f90a:	0f 85 56 ff ff ff    	jne    852f866 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x732>
 852f910:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852f913:	8b 45 08             	mov    0x8(%ebp),%eax
 852f916:	83 c2 08             	add    $0x8,%edx
 852f919:	c7 44 90 08 01 00 00 	movl   $0x1,0x8(%eax,%edx,4)
 852f920:	00 
 852f921:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852f928:	00 
 852f929:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852f92c:	89 44 24 08          	mov    %eax,0x8(%esp)
 852f930:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f933:	89 44 24 04          	mov    %eax,0x4(%esp)
 852f937:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f93d:	89 04 24             	mov    %eax,(%esp)
 852f940:	e8 5b f7 ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 852f945:	8b 55 90             	mov    -0x70(%ebp),%edx
 852f948:	8b 45 08             	mov    0x8(%ebp),%eax
 852f94b:	83 c2 08             	add    $0x8,%edx
 852f94e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 852f952:	83 f8 01             	cmp    $0x1,%eax
 852f955:	0f 85 6d 08 00 00    	jne    85301c8 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1094>
 852f95b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852f962:	00 
 852f963:	8b 45 08             	mov    0x8(%ebp),%eax
 852f966:	89 04 24             	mov    %eax,(%esp)
 852f969:	e8 8c 27 00 00       	call   85320fa <_ZN11CTradeSpace8_SetLockEb>
 852f96e:	e9 5c 08 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 852f973:	c6 45 be 00          	movb   $0x0,-0x42(%ebp)
 852f977:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 852f97b:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852f97e:	8b 45 08             	mov    0x8(%ebp),%eax
 852f981:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852f987:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f98a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 852f98d:	8b 55 90             	mov    -0x70(%ebp),%edx
 852f990:	8b 45 08             	mov    0x8(%ebp),%eax
 852f993:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852f999:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852f99c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 852f99f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 852f9a3:	74 5a                	je     852f9ff <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x8cb>
 852f9a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f9a8:	89 04 24             	mov    %eax,(%esp)
 852f9ab:	e8 d0 f9 cf ff       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 852f9b0:	83 f0 01             	xor    $0x1,%eax
 852f9b3:	84 c0                	test   %al,%al
 852f9b5:	74 48                	je     852f9ff <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x8cb>
 852f9b7:	8b 55 c0             	mov    -0x40(%ebp),%edx
 852f9ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f9bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 852f9c1:	89 04 24             	mov    %eax,(%esp)
 852f9c4:	e8 cd 6a 11 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 852f9c9:	83 f0 01             	xor    $0x1,%eax
 852f9cc:	84 c0                	test   %al,%al
 852f9ce:	74 2f                	je     852f9ff <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x8cb>
 852f9d0:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852f9d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852f9da:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 852f9e1:	00 
 852f9e2:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852f9e9:	00 
 852f9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 852f9ed:	89 04 24             	mov    %eax,(%esp)
 852f9f0:	e8 b9 c5 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852f9f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 852f9fa:	e9 f5 07 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852f9ff:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 852fa03:	74 5a                	je     852fa5f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x92b>
 852fa05:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fa08:	89 04 24             	mov    %eax,(%esp)
 852fa0b:	e8 70 f9 cf ff       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 852fa10:	83 f0 01             	xor    $0x1,%eax
 852fa13:	84 c0                	test   %al,%al
 852fa15:	74 48                	je     852fa5f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x92b>
 852fa17:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852fa1a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fa1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 852fa21:	89 04 24             	mov    %eax,(%esp)
 852fa24:	e8 6d 6a 11 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 852fa29:	83 f0 01             	xor    $0x1,%eax
 852fa2c:	84 c0                	test   %al,%al
 852fa2e:	74 2f                	je     852fa5f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x92b>
 852fa30:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852fa36:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852fa3a:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 852fa41:	00 
 852fa42:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852fa49:	00 
 852fa4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fa4d:	89 04 24             	mov    %eax,(%esp)
 852fa50:	e8 59 c5 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852fa55:	bb 00 00 00 00       	mov    $0x0,%ebx
 852fa5a:	e9 95 07 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852fa5f:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852fa62:	8b 45 08             	mov    0x8(%ebp),%eax
 852fa65:	83 c2 08             	add    $0x8,%edx
 852fa68:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 852fa6c:	83 f8 01             	cmp    $0x1,%eax
 852fa6f:	74 2f                	je     852faa0 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x96c>
 852fa71:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852fa77:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852fa7b:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 852fa82:	00 
 852fa83:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 852fa8a:	00 
 852fa8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fa8e:	89 04 24             	mov    %eax,(%esp)
 852fa91:	e8 18 c5 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 852fa96:	bb 00 00 00 00       	mov    $0x0,%ebx
 852fa9b:	e9 54 07 00 00       	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 852faa0:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852faa3:	8b 45 08             	mov    0x8(%ebp),%eax
 852faa6:	83 c2 08             	add    $0x8,%edx
 852faa9:	c7 44 90 08 03 00 00 	movl   $0x3,0x8(%eax,%edx,4)
 852fab0:	00 
 852fab1:	8b 55 90             	mov    -0x70(%ebp),%edx
 852fab4:	8b 45 08             	mov    0x8(%ebp),%eax
 852fab7:	83 c2 08             	add    $0x8,%edx
 852faba:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 852fabe:	83 f8 03             	cmp    $0x3,%eax
 852fac1:	0f 85 04 07 00 00    	jne    85301cb <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1097>
 852fac7:	c6 45 ca 00          	movb   $0x0,-0x36(%ebp)
 852facb:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
 852facf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 852fad3:	0f 84 c6 00 00 00    	je     852fb9f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa6b>
 852fad9:	c7 45 d8 03 00 00 00 	movl   $0x3,-0x28(%ebp)
 852fae0:	e9 ab 00 00 00       	jmp    852fb90 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa5c>
 852fae5:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 852fae8:	8b 55 d8             	mov    -0x28(%ebp),%edx
 852faeb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852faee:	89 d0                	mov    %edx,%eax
 852faf0:	c1 e0 03             	shl    $0x3,%eax
 852faf3:	01 d0                	add    %edx,%eax
 852faf5:	c1 e0 03             	shl    $0x3,%eax
 852faf8:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852fafe:	01 d0                	add    %edx,%eax
 852fb00:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852fb03:	83 c0 30             	add    $0x30,%eax
 852fb06:	8b 40 0b             	mov    0xb(%eax),%eax
 852fb09:	85 c0                	test   %eax,%eax
 852fb0b:	74 7f                	je     852fb8c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa58>
 852fb0d:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 852fb10:	8b 55 d8             	mov    -0x28(%ebp),%edx
 852fb13:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852fb16:	89 d0                	mov    %edx,%eax
 852fb18:	c1 e0 03             	shl    $0x3,%eax
 852fb1b:	01 d0                	add    %edx,%eax
 852fb1d:	c1 e0 03             	shl    $0x3,%eax
 852fb20:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852fb26:	01 d0                	add    %edx,%eax
 852fb28:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852fb2b:	83 c0 30             	add    $0x30,%eax
 852fb2e:	8b 40 0b             	mov    0xb(%eax),%eax
 852fb31:	89 c3                	mov    %eax,%ebx
 852fb33:	e8 63 c6 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 852fb38:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852fb3c:	89 04 24             	mov    %eax,(%esp)
 852fb3f:	e8 ee fe e2 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 852fb44:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852fb47:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 852fb4b:	74 3f                	je     852fb8c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa58>
 852fb4d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852fb50:	8b 00                	mov    (%eax),%eax
 852fb52:	83 c0 10             	add    $0x10,%eax
 852fb55:	8b 10                	mov    (%eax),%edx
 852fb57:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852fb5a:	89 04 24             	mov    %eax,(%esp)
 852fb5d:	ff d2                	call   *%edx
 852fb5f:	83 f0 01             	xor    $0x1,%eax
 852fb62:	84 c0                	test   %al,%al
 852fb64:	74 17                	je     852fb7d <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa49>
 852fb66:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852fb69:	89 04 24             	mov    %eax,(%esp)
 852fb6c:	e8 65 17 bc ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 852fb71:	83 f8 01             	cmp    $0x1,%eax
 852fb74:	7f 07                	jg     852fb7d <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa49>
 852fb76:	b8 01 00 00 00       	mov    $0x1,%eax
 852fb7b:	eb 05                	jmp    852fb82 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa4e>
 852fb7d:	b8 00 00 00 00       	mov    $0x0,%eax
 852fb82:	84 c0                	test   %al,%al
 852fb84:	74 06                	je     852fb8c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa58>
 852fb86:	c6 45 ca 01          	movb   $0x1,-0x36(%ebp)
 852fb8a:	eb 13                	jmp    852fb9f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa6b>
 852fb8c:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 852fb90:	83 7d d8 1a          	cmpl   $0x1a,-0x28(%ebp)
 852fb94:	0f 9e c0             	setle  %al
 852fb97:	84 c0                	test   %al,%al
 852fb99:	0f 85 46 ff ff ff    	jne    852fae5 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x9b1>
 852fb9f:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 852fba3:	0f 84 c6 00 00 00    	je     852fc6f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb3b>
 852fba9:	c7 45 e0 03 00 00 00 	movl   $0x3,-0x20(%ebp)
 852fbb0:	e9 ab 00 00 00       	jmp    852fc60 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb2c>
 852fbb5:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852fbb8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 852fbbb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852fbbe:	89 d0                	mov    %edx,%eax
 852fbc0:	c1 e0 03             	shl    $0x3,%eax
 852fbc3:	01 d0                	add    %edx,%eax
 852fbc5:	c1 e0 03             	shl    $0x3,%eax
 852fbc8:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852fbce:	01 d0                	add    %edx,%eax
 852fbd0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852fbd3:	83 c0 30             	add    $0x30,%eax
 852fbd6:	8b 40 0b             	mov    0xb(%eax),%eax
 852fbd9:	85 c0                	test   %eax,%eax
 852fbdb:	74 7f                	je     852fc5c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb28>
 852fbdd:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 852fbe0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 852fbe3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852fbe6:	89 d0                	mov    %edx,%eax
 852fbe8:	c1 e0 03             	shl    $0x3,%eax
 852fbeb:	01 d0                	add    %edx,%eax
 852fbed:	c1 e0 03             	shl    $0x3,%eax
 852fbf0:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852fbf6:	01 d0                	add    %edx,%eax
 852fbf8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852fbfb:	83 c0 30             	add    $0x30,%eax
 852fbfe:	8b 40 0b             	mov    0xb(%eax),%eax
 852fc01:	89 c3                	mov    %eax,%ebx
 852fc03:	e8 93 c5 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 852fc08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852fc0c:	89 04 24             	mov    %eax,(%esp)
 852fc0f:	e8 1e fe e2 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 852fc14:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 852fc17:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 852fc1b:	74 3f                	je     852fc5c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb28>
 852fc1d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 852fc20:	8b 00                	mov    (%eax),%eax
 852fc22:	83 c0 10             	add    $0x10,%eax
 852fc25:	8b 10                	mov    (%eax),%edx
 852fc27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 852fc2a:	89 04 24             	mov    %eax,(%esp)
 852fc2d:	ff d2                	call   *%edx
 852fc2f:	83 f0 01             	xor    $0x1,%eax
 852fc32:	84 c0                	test   %al,%al
 852fc34:	74 17                	je     852fc4d <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb19>
 852fc36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 852fc39:	89 04 24             	mov    %eax,(%esp)
 852fc3c:	e8 95 16 bc ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 852fc41:	83 f8 01             	cmp    $0x1,%eax
 852fc44:	7f 07                	jg     852fc4d <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb19>
 852fc46:	b8 01 00 00 00       	mov    $0x1,%eax
 852fc4b:	eb 05                	jmp    852fc52 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb1e>
 852fc4d:	b8 00 00 00 00       	mov    $0x0,%eax
 852fc52:	84 c0                	test   %al,%al
 852fc54:	74 06                	je     852fc5c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb28>
 852fc56:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 852fc5a:	eb 13                	jmp    852fc6f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb3b>
 852fc5c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 852fc60:	83 7d e0 1a          	cmpl   $0x1a,-0x20(%ebp)
 852fc64:	0f 9e c0             	setle  %al
 852fc67:	84 c0                	test   %al,%al
 852fc69:	0f 85 46 ff ff ff    	jne    852fbb5 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xa81>
 852fc6f:	8b 45 08             	mov    0x8(%ebp),%eax
 852fc72:	89 04 24             	mov    %eax,(%esp)
 852fc75:	e8 00 0c 00 00       	call   853087a <_ZN11CTradeSpace13proceed_tradeEv>
 852fc7a:	84 c0                	test   %al,%al
 852fc7c:	74 5d                	je     852fcdb <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xba7>
 852fc7e:	e8 0b c5 b9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 852fc83:	8b 55 08             	mov    0x8(%ebp),%edx
 852fc86:	89 54 24 04          	mov    %edx,0x4(%esp)
 852fc8a:	89 04 24             	mov    %eax,(%esp)
 852fc8d:	e8 4c 51 d6 ff       	call   8294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>
 852fc92:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 852fc96:	74 1a                	je     852fcb2 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xb7e>
 852fc98:	0f b6 55 ca          	movzbl -0x36(%ebp),%edx
 852fc9c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 852fc9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 852fca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 852fca7:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fcaa:	89 04 24             	mov    %eax,(%esp)
 852fcad:	e8 d8 68 11 00       	call   864658a <_ZN5CUser18IncrementTradeGoldEji>
 852fcb2:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 852fcb6:	0f 84 e7 00 00 00    	je     852fda3 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xc6f>
 852fcbc:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 852fcc0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 852fcc3:	89 54 24 08          	mov    %edx,0x8(%esp)
 852fcc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 852fccb:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fcce:	89 04 24             	mov    %eax,(%esp)
 852fcd1:	e8 b4 68 11 00       	call   864658a <_ZN5CUser18IncrementTradeGoldEji>
 852fcd6:	e9 c8 00 00 00       	jmp    852fda3 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xc6f>
 852fcdb:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fcde:	89 04 24             	mov    %eax,(%esp)
 852fce1:	e8 68 bf b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852fce6:	89 c6                	mov    %eax,%esi
 852fce8:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fceb:	89 04 24             	mov    %eax,(%esp)
 852fcee:	e8 5b bf b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852fcf3:	89 c3                	mov    %eax,%ebx
 852fcf5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852fcfc:	00 
 852fcfd:	c7 44 24 08 ed 0a 00 	movl   $0xaed,0x8(%esp)
 852fd04:	00 
 852fd05:	c7 44 24 04 80 84 c9 	movl   $0x8c98480,0x4(%esp)
 852fd0c:	08 
 852fd0d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 852fd13:	89 04 24             	mov    %eax,(%esp)
 852fd16:	e8 fd f9 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852fd1b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 852fd1f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852fd23:	c7 44 24 04 00 77 c9 	movl   $0x8c97700,0x4(%esp)
 852fd2a:	08 
 852fd2b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 852fd31:	89 04 24             	mov    %eax,(%esp)
 852fd34:	e8 4f fa 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852fd39:	8b 55 94             	mov    -0x6c(%ebp),%edx
 852fd3c:	8b 45 08             	mov    0x8(%ebp),%eax
 852fd3f:	83 c2 08             	add    $0x8,%edx
 852fd42:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852fd49:	00 
 852fd4a:	8b 55 90             	mov    -0x70(%ebp),%edx
 852fd4d:	8b 45 08             	mov    0x8(%ebp),%eax
 852fd50:	83 c2 08             	add    $0x8,%edx
 852fd53:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852fd5a:	00 
 852fd5b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852fd62:	00 
 852fd63:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fd66:	89 44 24 08          	mov    %eax,0x8(%esp)
 852fd6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fd6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852fd71:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852fd77:	89 04 24             	mov    %eax,(%esp)
 852fd7a:	e8 21 f3 ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 852fd7f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852fd86:	00 
 852fd87:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fd8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 852fd8e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fd91:	89 44 24 04          	mov    %eax,0x4(%esp)
 852fd95:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 852fd9b:	89 04 24             	mov    %eax,(%esp)
 852fd9e:	e8 fd f2 ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 852fda3:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fda6:	89 04 24             	mov    %eax,(%esp)
 852fda9:	e8 0c 0f be ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 852fdae:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 852fdb2:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fdb5:	89 04 24             	mov    %eax,(%esp)
 852fdb8:	e8 fd 0e be ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 852fdbd:	66 89 45 ce          	mov    %ax,-0x32(%ebp)
 852fdc1:	c7 04 24 19 00 00 00 	movl   $0x19,(%esp)
 852fdc8:	e8 ba 1d 18 00       	call   86b1b87 <_Z12get_rand_inti>
 852fdcd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 852fdd0:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 852fdd7:	e8 ab 1d 18 00       	call   86b1b87 <_Z12get_rand_inti>
 852fddc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 852fddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fde2:	89 04 24             	mov    %eax,(%esp)
 852fde5:	e8 94 a4 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852fdea:	89 04 24             	mov    %eax,(%esp)
 852fded:	e8 e4 49 c0 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 852fdf2:	03 45 c0             	add    -0x40(%ebp),%eax
 852fdf5:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 852fdfb:	db 85 e0 fe ff ff    	fildl  -0x120(%ebp)
 852fe01:	db 45 d0             	fildl  -0x30(%ebp)
 852fe04:	dd 05 30 86 c9 08    	fldl   0x8c98630
 852fe0a:	de c9                	fmulp  %st,%st(1)
 852fe0c:	d9 9d e4 fe ff ff    	fstps  -0x11c(%ebp)
 852fe12:	d9 85 e4 fe ff ff    	flds   -0x11c(%ebp)
 852fe18:	dd 05 38 86 c9 08    	fldl   0x8c98638
 852fe1e:	de c1                	faddp  %st,%st(1)
 852fe20:	de c9                	fmulp  %st,%st(1)
 852fe22:	db 45 c0             	fildl  -0x40(%ebp)
 852fe25:	da e9                	fucompp
 852fe27:	df e0                	fnstsw %ax
 852fe29:	f6 c4 45             	test   $0x45,%ah
 852fe2c:	0f 94 c0             	sete   %al
 852fe2f:	84 c0                	test   %al,%al
 852fe31:	74 10                	je     852fe43 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xd0f>
 852fe33:	81 7d c0 0f 27 00 00 	cmpl   $0x270f,-0x40(%ebp)
 852fe3a:	7e 07                	jle    852fe43 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xd0f>
 852fe3c:	b8 01 00 00 00       	mov    $0x1,%eax
 852fe41:	eb 05                	jmp    852fe48 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xd14>
 852fe43:	b8 00 00 00 00       	mov    $0x0,%eax
 852fe48:	84 c0                	test   %al,%al
 852fe4a:	0f 84 1c 01 00 00    	je     852ff6c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xe38>
 852fe50:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852fe53:	89 04 24             	mov    %eax,(%esp)
 852fe56:	e8 13 a5 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 852fe5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 852fe5f:	c7 44 24 04 c0 02 00 	movl   $0x2c0,0x4(%esp)
 852fe66:	00 
 852fe67:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fe6a:	89 04 24             	mov    %eax,(%esp)
 852fe6d:	e8 f6 9a bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 852fe72:	89 c3                	mov    %eax,%ebx
 852fe74:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fe77:	89 04 24             	mov    %eax,(%esp)
 852fe7a:	e8 db 9a bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 852fe7f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852fe86:	00 
 852fe87:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852fe8b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852fe92:	00 
 852fe93:	c7 44 24 08 c0 02 00 	movl   $0x2c0,0x8(%esp)
 852fe9a:	00 
 852fe9b:	8b 55 0c             	mov    0xc(%ebp),%edx
 852fe9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 852fea2:	89 04 24             	mov    %eax,(%esp)
 852fea5:	e8 d4 8d bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 852feaa:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 852feae:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852feb1:	83 c2 78             	add    $0x78,%edx
 852feb4:	39 d0                	cmp    %edx,%eax
 852feb6:	7c 5a                	jl     852ff12 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xdde>
 852feb8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852febb:	89 04 24             	mov    %eax,(%esp)
 852febe:	e8 ab a4 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 852fec3:	89 44 24 08          	mov    %eax,0x8(%esp)
 852fec7:	c7 44 24 04 bd 02 00 	movl   $0x2bd,0x4(%esp)
 852fece:	00 
 852fecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fed2:	89 04 24             	mov    %eax,(%esp)
 852fed5:	e8 8e 9a bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 852feda:	89 c3                	mov    %eax,%ebx
 852fedc:	8b 45 0c             	mov    0xc(%ebp),%eax
 852fedf:	89 04 24             	mov    %eax,(%esp)
 852fee2:	e8 73 9a bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 852fee7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852feee:	00 
 852feef:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852fef3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852fefa:	00 
 852fefb:	c7 44 24 08 bd 02 00 	movl   $0x2bd,0x8(%esp)
 852ff02:	00 
 852ff03:	8b 55 0c             	mov    0xc(%ebp),%edx
 852ff06:	89 54 24 04          	mov    %edx,0x4(%esp)
 852ff0a:	89 04 24             	mov    %eax,(%esp)
 852ff0d:	e8 6c 8d bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 852ff12:	8b 45 0c             	mov    0xc(%ebp),%eax
 852ff15:	89 04 24             	mov    %eax,(%esp)
 852ff18:	e8 51 a4 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 852ff1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 852ff21:	c7 44 24 04 c1 02 00 	movl   $0x2c1,0x4(%esp)
 852ff28:	00 
 852ff29:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852ff2c:	89 04 24             	mov    %eax,(%esp)
 852ff2f:	e8 34 9a bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 852ff34:	89 c3                	mov    %eax,%ebx
 852ff36:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852ff39:	89 04 24             	mov    %eax,(%esp)
 852ff3c:	e8 19 9a bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 852ff41:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852ff48:	00 
 852ff49:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852ff4d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852ff54:	00 
 852ff55:	c7 44 24 08 c1 02 00 	movl   $0x2c1,0x8(%esp)
 852ff5c:	00 
 852ff5d:	8b 55 8c             	mov    -0x74(%ebp),%edx
 852ff60:	89 54 24 04          	mov    %edx,0x4(%esp)
 852ff64:	89 04 24             	mov    %eax,(%esp)
 852ff67:	e8 12 8d bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 852ff6c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852ff6f:	89 04 24             	mov    %eax,(%esp)
 852ff72:	e8 07 a3 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852ff77:	89 04 24             	mov    %eax,(%esp)
 852ff7a:	e8 57 48 c0 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 852ff7f:	03 45 c4             	add    -0x3c(%ebp),%eax
 852ff82:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 852ff88:	db 85 e0 fe ff ff    	fildl  -0x120(%ebp)
 852ff8e:	dd 05 40 86 c9 08    	fldl   0x8c98640
 852ff94:	de c9                	fmulp  %st,%st(1)
 852ff96:	db 45 c4             	fildl  -0x3c(%ebp)
 852ff99:	da e9                	fucompp
 852ff9b:	df e0                	fnstsw %ax
 852ff9d:	f6 c4 45             	test   $0x45,%ah
 852ffa0:	0f 94 c0             	sete   %al
 852ffa3:	84 c0                	test   %al,%al
 852ffa5:	74 10                	je     852ffb7 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xe83>
 852ffa7:	81 7d c4 0f 27 00 00 	cmpl   $0x270f,-0x3c(%ebp)
 852ffae:	7e 07                	jle    852ffb7 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xe83>
 852ffb0:	b8 01 00 00 00       	mov    $0x1,%eax
 852ffb5:	eb 05                	jmp    852ffbc <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xe88>
 852ffb7:	b8 00 00 00 00       	mov    $0x0,%eax
 852ffbc:	84 c0                	test   %al,%al
 852ffbe:	0f 84 0a 02 00 00    	je     85301ce <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109a>
 852ffc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 852ffc7:	89 04 24             	mov    %eax,(%esp)
 852ffca:	e8 9f a3 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 852ffcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 852ffd3:	c7 44 24 04 c0 02 00 	movl   $0x2c0,0x4(%esp)
 852ffda:	00 
 852ffdb:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852ffde:	89 04 24             	mov    %eax,(%esp)
 852ffe1:	e8 82 99 bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 852ffe6:	89 c3                	mov    %eax,%ebx
 852ffe8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 852ffeb:	89 04 24             	mov    %eax,(%esp)
 852ffee:	e8 67 99 bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 852fff3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852fffa:	00 
 852fffb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852ffff:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8530006:	00 
 8530007:	c7 44 24 08 c0 02 00 	movl   $0x2c0,0x8(%esp)
 853000e:	00 
 853000f:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8530012:	89 54 24 04          	mov    %edx,0x4(%esp)
 8530016:	89 04 24             	mov    %eax,(%esp)
 8530019:	e8 60 8c bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 853001e:	66 83 7d ce 77       	cmpw   $0x77,-0x32(%ebp)
 8530023:	76 5a                	jbe    853007f <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0xf4b>
 8530025:	8b 45 0c             	mov    0xc(%ebp),%eax
 8530028:	89 04 24             	mov    %eax,(%esp)
 853002b:	e8 3e a3 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530030:	89 44 24 08          	mov    %eax,0x8(%esp)
 8530034:	c7 44 24 04 bd 02 00 	movl   $0x2bd,0x4(%esp)
 853003b:	00 
 853003c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 853003f:	89 04 24             	mov    %eax,(%esp)
 8530042:	e8 21 99 bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 8530047:	89 c3                	mov    %eax,%ebx
 8530049:	8b 45 8c             	mov    -0x74(%ebp),%eax
 853004c:	89 04 24             	mov    %eax,(%esp)
 853004f:	e8 06 99 bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8530054:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 853005b:	00 
 853005c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8530060:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8530067:	00 
 8530068:	c7 44 24 08 bd 02 00 	movl   $0x2bd,0x8(%esp)
 853006f:	00 
 8530070:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8530073:	89 54 24 04          	mov    %edx,0x4(%esp)
 8530077:	89 04 24             	mov    %eax,(%esp)
 853007a:	e8 ff 8b bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 853007f:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8530082:	89 04 24             	mov    %eax,(%esp)
 8530085:	e8 e4 a2 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 853008a:	89 44 24 08          	mov    %eax,0x8(%esp)
 853008e:	c7 44 24 04 c1 02 00 	movl   $0x2c1,0x4(%esp)
 8530095:	00 
 8530096:	8b 45 0c             	mov    0xc(%ebp),%eax
 8530099:	89 04 24             	mov    %eax,(%esp)
 853009c:	e8 c7 98 bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 85300a1:	89 c3                	mov    %eax,%ebx
 85300a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85300a6:	89 04 24             	mov    %eax,(%esp)
 85300a9:	e8 ac 98 bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85300ae:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85300b5:	00 
 85300b6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85300ba:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85300c1:	00 
 85300c2:	c7 44 24 08 c1 02 00 	movl   $0x2c1,0x8(%esp)
 85300c9:	00 
 85300ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 85300cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85300d1:	89 04 24             	mov    %eax,(%esp)
 85300d4:	e8 a5 8b bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 85300d9:	e9 f1 00 00 00       	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85300de:	8b 45 08             	mov    0x8(%ebp),%eax
 85300e1:	89 04 24             	mov    %eax,(%esp)
 85300e4:	e8 05 20 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 85300e9:	84 c0                	test   %al,%al
 85300eb:	74 7f                	je     853016c <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x1038>
 85300ed:	8b 55 94             	mov    -0x6c(%ebp),%edx
 85300f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85300f3:	83 c2 08             	add    $0x8,%edx
 85300f6:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 85300fd:	00 
 85300fe:	8b 55 90             	mov    -0x70(%ebp),%edx
 8530101:	8b 45 08             	mov    0x8(%ebp),%eax
 8530104:	83 c2 08             	add    $0x8,%edx
 8530107:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 853010e:	00 
 853010f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8530116:	00 
 8530117:	8b 45 8c             	mov    -0x74(%ebp),%eax
 853011a:	89 44 24 08          	mov    %eax,0x8(%esp)
 853011e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8530121:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530125:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 853012b:	89 04 24             	mov    %eax,(%esp)
 853012e:	e8 6d ef ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 8530133:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 853013a:	00 
 853013b:	8b 45 0c             	mov    0xc(%ebp),%eax
 853013e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8530142:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8530145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530149:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 853014f:	89 04 24             	mov    %eax,(%esp)
 8530152:	e8 49 ef ff ff       	call   852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>
 8530157:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 853015e:	00 
 853015f:	8b 45 08             	mov    0x8(%ebp),%eax
 8530162:	89 04 24             	mov    %eax,(%esp)
 8530165:	e8 90 1f 00 00       	call   85320fa <_ZN11CTradeSpace8_SetLockEb>
 853016a:	eb 63                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 853016c:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8530172:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8530176:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 853017d:	00 
 853017e:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 8530185:	00 
 8530186:	8b 45 0c             	mov    0xc(%ebp),%eax
 8530189:	89 04 24             	mov    %eax,(%esp)
 853018c:	e8 1d be 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 8530191:	eb 3c                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 8530193:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8530199:	89 44 24 0c          	mov    %eax,0xc(%esp)
 853019d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85301a4:	00 
 85301a5:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 85301ac:	00 
 85301ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 85301b0:	89 04 24             	mov    %eax,(%esp)
 85301b3:	e8 f6 bd 14 00       	call   867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>
 85301b8:	bb 01 00 00 00       	mov    $0x1,%ebx
 85301bd:	eb 35                	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 85301bf:	90                   	nop
 85301c0:	eb 0d                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85301c2:	90                   	nop
 85301c3:	eb 0a                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85301c5:	90                   	nop
 85301c6:	eb 07                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85301c8:	90                   	nop
 85301c9:	eb 04                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85301cb:	90                   	nop
 85301cc:	eb 01                	jmp    85301cf <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x109b>
 85301ce:	90                   	nop
 85301cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 85301d4:	eb 1e                	jmp    85301f4 <_ZN11CTradeSpace18change_trade_stateEP5CUseri+0x10c0>
 85301d6:	89 d3                	mov    %edx,%ebx
 85301d8:	89 c6                	mov    %eax,%esi
 85301da:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 85301e0:	89 04 24             	mov    %eax,(%esp)
 85301e3:	e8 98 dc 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85301e8:	89 f0                	mov    %esi,%eax
 85301ea:	89 da                	mov    %ebx,%edx
 85301ec:	89 04 24             	mov    %eax,(%esp)
 85301ef:	e8 5c 35 5b 00       	call   8ae3750 <_Unwind_Resume>
 85301f4:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 85301fa:	89 04 24             	mov    %eax,(%esp)
 85301fd:	e8 7e dc 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8530202:	89 d8                	mov    %ebx,%eax
 8530204:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 853020a:	5b                   	pop    %ebx
 853020b:	5e                   	pop    %esi
 853020c:	5f                   	pop    %edi
 853020d:	5d                   	pop    %ebp
 853020e:	c3                   	ret
 853020f:	90                   	nop

```

```c
// CTradeSpace::change_trade_state @ 0x852f134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CTradeSpace::change_trade_state(CUser*, int) */

undefined4 __thiscall CTradeSpace::change_trade_state(CTradeSpace *this,CUser *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *pCVar5;
  CGameManager *pCVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  int iVar9;
  CHackAnalyzer *pCVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  byte bVar14;
  int local_11c [11];
  int local_f0 [11];
  PacketGuard local_c4 [12];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  CUserCharacInfo *local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_46;
  undefined1 local_45;
  uint local_44;
  uint local_40;
  byte local_3a;
  byte local_39;
  ushort local_38;
  ushort local_36;
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  CItem *local_20;
  
  bVar14 = 0;
  PacketGuard::PacketGuard(local_c4);
  bVar13 = *(CUser **)(this + 0x20) != param_1;
  if (bVar13) {
    local_78 = *(CUserCharacInfo **)(this + 0x20);
  }
  else {
    local_78 = *(CUserCharacInfo **)(this + 0x24);
  }
  local_70 = (uint)bVar13;
  local_74 = (uint)!bVar13;
  if (local_78 == (CUserCharacInfo *)0x0) {
                    /* try { // try from 0852f1a3 to 085301b7 has its CatchHandler @ 085301d6 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_c4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,0x1a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
    CUser::Send(param_1,local_c4);
    uVar11 = 1;
  }
  else {
    switch(param_2) {
    case 0:
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
        SendChangeTradeState(local_c4,param_1,local_78,0);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      break;
    case 1:
      local_58 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x36);
      if (local_58 != 0) {
        CUser::SendCmdErrorPacket(param_1,0x1a,local_58 & 0xff);
        uVar1 = CSecu_ProtectionField::GetOppositeErr(GlobalData::s_pSecuProtectionField,local_58);
        CUser::SendCmdErrorPacket((CUser *)local_78,0x1a,uVar1);
        if ((local_58 == 0x7b) || (local_58 == 0x89)) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_c4);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,0,0xb0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
          CUser::Send((CUser *)local_78,local_c4);
        }
        uVar11 = 0;
        goto LAB_085301f4;
      }
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        piVar12 = local_f0;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        piVar12 = local_11c;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        pCVar8 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR
                           (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
        local_54 = CInventory::QuickEmptyCount(pCVar8);
        for (local_50 = 3; local_50 < 0x1b; local_50 = local_50 + 1) {
          if (*(int *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x3b) != 0) {
            cVar2 = Inven_Item::isEquipableItemType
                              ((Inven_Item *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x39));
            if (cVar2 == '\x01') {
              local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] =
                   local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] + 1;
            }
            else {
              iVar9 = *(int *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x3b);
              pCVar8 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
              iVar9 = CInventory::check_item_exist(pCVar8,iVar9);
              if (iVar9 < 0) {
                local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] =
                     local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] + 1;
              }
            }
          }
        }
        for (local_4c = 1; iVar9 = local_4c, local_4c < 0xb; local_4c = local_4c + 1) {
          pCVar8 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR
                             (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
          iVar4 = CInventory::InvenEmptycount(pCVar8,iVar9);
          local_11c[iVar9] = iVar4;
          if ((local_11c[local_4c] < local_f0[local_4c]) &&
             (local_54 = local_54 + (local_11c[local_4c] - local_f0[local_4c]), local_54 < 0)) {
            CUser::SendCmdErrorPacket(param_1,0x1a,4,local_c4);
            uVar11 = 0;
            goto LAB_085301f4;
          }
        }
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 1;
        SendChangeTradeState(local_c4,param_1,local_78,1);
        if (*(int *)(this + (local_74 + 8) * 4 + 8) == 1) {
          _SetLock(this,true);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      break;
    case 2:
      cVar2 = cancel_trade(this);
      if (cVar2 == '\0') {
        uVar11 = CUserCharacInfo::getCurCharacNo(local_78);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_b8,"bool CTradeSpace::change_trade_state(CUser*, int)",0x9db,5);
        cMyTrace::operator()
                  (local_b8,"change_trade_state, cancel_trade Failed 1!  %d %d",uVar7,uVar11);
        CUser::SendCmdErrorPacket(param_1,0x1a,1,local_c4);
      }
      else {
        pCVar6 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar6,this);
      }
      local_6c = 0;
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        for (local_64 = 3; local_64 < 0x1b; local_64 = local_64 + 1) {
          if (*(int *)(this + local_64 * 0x48 + local_68 * 0x798 + 0x3b) != 0) {
            local_6c = local_6c + 1;
          }
        }
      }
      if (((0 < local_6c) && (*(int *)(this + 0x20) != 0)) && (*(int *)(this + 0x24) != 0)) {
        uVar11 = CUser::get_charac_no(*(CUser **)(this + 0x24),-1);
        uVar7 = CUser::get_charac_no(*(CUser **)(this + 0x20),-1);
        cMyTrace::cMyTrace(local_a8,"bool CTradeSpace::change_trade_state(CUser*, int)",0x9eb,5);
        cMyTrace::operator()
                  (local_a8,"TRADE CANCELED! BUT, ITEM REMAINED! %d Count , Ch1 %d Ch2 %d",local_6c,
                   uVar7,uVar11);
        for (local_60 = 0; local_60 < 2; local_60 = local_60 + 1) {
          if (*(int *)(this + (local_60 + 8) * 4) != 0) {
            for (local_5c = 3; local_5c < 0x1b; local_5c = local_5c + 1) {
              if (*(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x3b) != 0) {
                uVar7 = Inven_Item::get_add_info
                                  ((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39))
                ;
                uVar11 = *(undefined4 *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x3b);
                uVar3 = CUser::get_charac_no(*(CUser **)(this + (local_60 + 8) * 4),-1);
                cMyTrace::cMyTrace(local_98,"bool CTradeSpace::change_trade_state(CUser*, int)",
                                   0x9f8,5);
                cMyTrace::operator()(local_98,"Remained Item %d : %d x %d",uVar3,uVar11,uVar7);
              }
            }
          }
        }
      }
      break;
    case 3:
      local_46 = 0;
      local_45 = 0;
      local_44 = *(uint *)(this + (local_70 + 0x3d8) * 4);
      local_40 = *(uint *)(this + (local_74 + 0x3d8) * 4);
      if (((param_1 != (CUser *)0x0) &&
          (cVar2 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1), cVar2 != '\x01'))
         && (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                               ((CUserCharacInfo *)param_1,local_44), cVar2 != '\x01')) {
        CUser::SendCmdErrorPacket(param_1,0x1a,0x46,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      if (((local_78 != (CUserCharacInfo *)0x0) &&
          (cVar2 = CUserCharacInfo::GetReliablePerson(local_78), cVar2 != '\x01')) &&
         (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(local_78,local_40),
         cVar2 != '\x01')) {
        CUser::SendCmdErrorPacket(param_1,0x1a,0x47,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      if (*(int *)(this + (local_70 + 8) * 4 + 8) != 1) {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 3;
      if (*(int *)(this + (local_74 + 8) * 4 + 8) == 3) {
        local_3a = 0;
        local_39 = 0;
        if (param_1 != (CUser *)0x0) {
          for (local_2c = 3; local_2c < 0x1b; local_2c = local_2c + 1) {
            if (*(int *)(this + local_2c * 0x48 + local_74 * 0x798 + 0x3b) != 0) {
              iVar9 = *(int *)(this + local_2c * 0x48 + local_74 * 0x798 + 0x3b);
              pCVar5 = (CDataManager *)G_CDataManager();
              local_28 = (CItem *)CDataManager::find_item(pCVar5,iVar9);
              if (local_28 != (CItem *)0x0) {
                cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
                if ((cVar2 == '\x01') || (iVar9 = CItem::get_rarity(local_28), 1 < iVar9)) {
                  bVar13 = false;
                }
                else {
                  bVar13 = true;
                }
                if (bVar13) {
                  local_3a = 1;
                  break;
                }
              }
            }
          }
        }
        if (local_78 != (CUserCharacInfo *)0x0) {
          for (local_24 = 3; local_24 < 0x1b; local_24 = local_24 + 1) {
            if (*(int *)(this + local_24 * 0x48 + local_70 * 0x798 + 0x3b) != 0) {
              iVar9 = *(int *)(this + local_24 * 0x48 + local_70 * 0x798 + 0x3b);
              pCVar5 = (CDataManager *)G_CDataManager();
              local_20 = (CItem *)CDataManager::find_item(pCVar5,iVar9);
              if (local_20 != (CItem *)0x0) {
                cVar2 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
                if ((cVar2 == '\x01') || (iVar9 = CItem::get_rarity(local_20), 1 < iVar9)) {
                  bVar13 = false;
                }
                else {
                  bVar13 = true;
                }
                if (bVar13) {
                  local_39 = 1;
                  break;
                }
              }
            }
          }
        }
        cVar2 = proceed_trade(this);
        if (cVar2 == '\0') {
          uVar11 = CUserCharacInfo::getCurCharacNo(local_78);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_88,"bool CTradeSpace::change_trade_state(CUser*, int)",0xaed,5);
          cMyTrace::operator()
                    (local_88,"change_trade_state, proceed_trade Failed2! %d %d",uVar7,uVar11);
          *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
          *(undefined4 *)(this + (local_74 + 8) * 4 + 8) = 0;
          SendChangeTradeState(local_c4,param_1,local_78,0);
          SendChangeTradeState(local_c4,local_78,param_1,0);
        }
        else {
          pCVar6 = (CGameManager *)G_CGameManager();
          CGameManager::PutTradeSpace(pCVar6,this);
          if (param_1 != (CUser *)0x0) {
            CUser::IncrementTradeGold(param_1,local_44,(uint)local_3a);
          }
          if (local_78 != (CUserCharacInfo *)0x0) {
            CUser::IncrementTradeGold((CUser *)local_78,local_40,(uint)local_39);
          }
        }
        local_38 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
        local_36 = CUserCharacInfo::getCurCharacUsedFatigue(local_78);
        local_34 = get_rand_int(0x19);
        local_30 = get_rand_int(0x14);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar9 = CInventory::get_money(pCVar8);
        if (((float)(int)local_44 <=
             ((float)_DAT_08c98638 + (float)_DAT_08c98630 * (float)local_34) *
             (float)(int)(iVar9 + local_44)) || ((int)local_44 < 10000)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          iVar9 = CUser::get_acc_id((CUser *)local_78);
          uVar11 = CUser::SetETC(param_1,0x2c0,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2c0,1,uVar11,0);
          if (local_30 + 0x78 <= (int)(uint)local_38) {
            iVar9 = CUser::get_acc_id((CUser *)local_78);
            uVar11 = CUser::SetETC(param_1,0x2bd,iVar9);
            pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2bd,1,uVar11,0);
          }
          iVar9 = CUser::get_acc_id(param_1);
          uVar11 = CUser::SetETC((CUser *)local_78,0x2c1,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2c1,1,uVar11,0);
        }
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_78);
        iVar9 = CInventory::get_money(pCVar8);
        if (((double)(int)local_40 <= _DAT_08c98640 * (double)(int)(iVar9 + local_40)) ||
           ((int)local_40 < 10000)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          iVar9 = CUser::get_acc_id(param_1);
          uVar11 = CUser::SetETC((CUser *)local_78,0x2c0,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2c0,1,uVar11,0);
          if (0x77 < local_36) {
            iVar9 = CUser::get_acc_id(param_1);
            uVar11 = CUser::SetETC((CUser *)local_78,0x2bd,iVar9);
            pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2bd,1,uVar11,0);
          }
          iVar9 = CUser::get_acc_id((CUser *)local_78);
          uVar11 = CUser::SetETC(param_1,0x2c1,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2c1,1,uVar11,0);
        }
      }
      break;
    case 4:
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      else {
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
        *(undefined4 *)(this + (local_74 + 8) * 4 + 8) = 0;
        SendChangeTradeState(local_c4,param_1,local_78,0);
        SendChangeTradeState(local_c4,local_78,param_1,0);
        _SetLock(this,false);
      }
      break;
    default:
      CUser::SendCmdErrorPacket(param_1,0x1a,1,local_c4);
      uVar11 = 1;
      goto LAB_085301f4;
    }
    uVar11 = 0;
  }
LAB_085301f4:
  PacketGuard::~PacketGuard(local_c4);
  return uVar11;
}

```

---

## checkCancelTrade

```asm
// === 0852dbb8 CTradeSpace::checkCancelTrade  [0x0852dbb8-0x852e3a7] ===
 852dbb8:	55                   	push   %ebp
 852dbb9:	89 e5                	mov    %esp,%ebp
 852dbbb:	57                   	push   %edi
 852dbbc:	56                   	push   %esi
 852dbbd:	53                   	push   %ebx
 852dbbe:	81 ec cc 92 01 00    	sub    $0x192cc,%esp
 852dbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 852dbc7:	8b 40 20             	mov    0x20(%eax),%eax
 852dbca:	89 04 24             	mov    %eax,(%esp)
 852dbcd:	e8 60 28 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852dbd2:	85 c0                	test   %eax,%eax
 852dbd4:	74 12                	je     852dbe8 <_ZN11CTradeSpace16checkCancelTradeEv+0x30>
 852dbd6:	8b 45 08             	mov    0x8(%ebp),%eax
 852dbd9:	8b 40 24             	mov    0x24(%eax),%eax
 852dbdc:	89 04 24             	mov    %eax,(%esp)
 852dbdf:	e8 4e 28 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852dbe4:	85 c0                	test   %eax,%eax
 852dbe6:	75 07                	jne    852dbef <_ZN11CTradeSpace16checkCancelTradeEv+0x37>
 852dbe8:	b8 01 00 00 00       	mov    $0x1,%eax
 852dbed:	eb 05                	jmp    852dbf4 <_ZN11CTradeSpace16checkCancelTradeEv+0x3c>
 852dbef:	b8 00 00 00 00       	mov    $0x0,%eax
 852dbf4:	84 c0                	test   %al,%al
 852dbf6:	74 40                	je     852dc38 <_ZN11CTradeSpace16checkCancelTradeEv+0x80>
 852dbf8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852dbff:	00 
 852dc00:	c7 44 24 08 74 06 00 	movl   $0x674,0x8(%esp)
 852dc07:	00 
 852dc08:	c7 44 24 04 40 85 c9 	movl   $0x8c98540,0x4(%esp)
 852dc0f:	08 
 852dc10:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dc13:	89 04 24             	mov    %eax,(%esp)
 852dc16:	e8 fd 1a 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852dc1b:	c7 44 24 04 44 74 c9 	movl   $0x8c97444,0x4(%esp)
 852dc22:	08 
 852dc23:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dc26:	89 04 24             	mov    %eax,(%esp)
 852dc29:	e8 5a 1b 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852dc2e:	bb 00 00 00 00       	mov    $0x0,%ebx
 852dc33:	e9 63 07 00 00       	jmp    852e39b <_ZN11CTradeSpace16checkCancelTradeEv+0x7e3>
 852dc38:	8d 9d 10 f0 ff ff    	lea    -0xff0(%ebp),%ebx
 852dc3e:	89 df                	mov    %ebx,%edi
 852dc40:	be 01 00 00 00       	mov    $0x1,%esi
 852dc45:	eb 11                	jmp    852dc58 <_ZN11CTradeSpace16checkCancelTradeEv+0xa0>
 852dc47:	89 3c 24             	mov    %edi,(%esp)
 852dc4a:	e8 dd f8 cf ff       	call   822d52c <_ZN10CInventoryC1Ev>
 852dc4f:	81 c7 b8 07 00 00    	add    $0x7b8,%edi
 852dc55:	83 ee 01             	sub    $0x1,%esi
 852dc58:	83 fe ff             	cmp    $0xffffffff,%esi
 852dc5b:	0f 95 c0             	setne  %al
 852dc5e:	84 c0                	test   %al,%al
 852dc60:	75 e5                	jne    852dc47 <_ZN11CTradeSpace16checkCancelTradeEv+0x8f>
 852dc62:	eb 40                	jmp    852dca4 <_ZN11CTradeSpace16checkCancelTradeEv+0xec>
 852dc64:	89 d7                	mov    %edx,%edi
 852dc66:	89 85 84 6d fe ff    	mov    %eax,-0x1927c(%ebp)
 852dc6c:	85 db                	test   %ebx,%ebx
 852dc6e:	74 24                	je     852dc94 <_ZN11CTradeSpace16checkCancelTradeEv+0xdc>
 852dc70:	b8 01 00 00 00       	mov    $0x1,%eax
 852dc75:	29 f0                	sub    %esi,%eax
 852dc77:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 852dc7d:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 852dc80:	39 de                	cmp    %ebx,%esi
 852dc82:	74 10                	je     852dc94 <_ZN11CTradeSpace16checkCancelTradeEv+0xdc>
 852dc84:	81 ee b8 07 00 00    	sub    $0x7b8,%esi
 852dc8a:	89 34 24             	mov    %esi,(%esp)
 852dc8d:	e8 6e f9 cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 852dc92:	eb ec                	jmp    852dc80 <_ZN11CTradeSpace16checkCancelTradeEv+0xc8>
 852dc94:	8b 85 84 6d fe ff    	mov    -0x1927c(%ebp),%eax
 852dc9a:	89 fa                	mov    %edi,%edx
 852dc9c:	89 04 24             	mov    %eax,(%esp)
 852dc9f:	e8 ac 5a 5b 00       	call   8ae3750 <_Unwind_Resume>
 852dca4:	8d 85 d1 2e ff ff    	lea    -0xd12f(%ebp),%eax
 852dcaa:	89 04 24             	mov    %eax,(%esp)
 852dcad:	e8 06 f7 cf ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 852dcb2:	8d 85 d1 2e ff ff    	lea    -0xd12f(%ebp),%eax
 852dcb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 852dcbc:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852dcc2:	89 04 24             	mov    %eax,(%esp)
 852dcc5:	e8 2c f8 cf ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 852dcca:	8d 85 92 6d fe ff    	lea    -0x1926e(%ebp),%eax
 852dcd0:	89 04 24             	mov    %eax,(%esp)
 852dcd3:	e8 e0 f6 cf ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 852dcd8:	8d 85 92 6d fe ff    	lea    -0x1926e(%ebp),%eax
 852dcde:	89 44 24 04          	mov    %eax,0x4(%esp)
 852dce2:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852dce8:	05 b8 07 00 00       	add    $0x7b8,%eax
 852dced:	89 04 24             	mov    %eax,(%esp)
 852dcf0:	e8 01 f8 cf ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 852dcf5:	8b 45 08             	mov    0x8(%ebp),%eax
 852dcf8:	8b 40 20             	mov    0x20(%eax),%eax
 852dcfb:	89 04 24             	mov    %eax,(%esp)
 852dcfe:	e8 c7 26 c5 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 852dd03:	89 44 24 04          	mov    %eax,0x4(%esp)
 852dd07:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852dd0d:	89 04 24             	mov    %eax,(%esp)
 852dd10:	e8 ff c5 fc ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 852dd15:	8b 45 08             	mov    0x8(%ebp),%eax
 852dd18:	8b 40 24             	mov    0x24(%eax),%eax
 852dd1b:	89 04 24             	mov    %eax,(%esp)
 852dd1e:	e8 a7 26 c5 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 852dd23:	89 44 24 04          	mov    %eax,0x4(%esp)
 852dd27:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852dd2d:	05 b8 07 00 00       	add    $0x7b8,%eax
 852dd32:	89 04 24             	mov    %eax,(%esp)
 852dd35:	e8 da c5 fc ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 852dd3a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 852dd41:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852dd48:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 852dd4f:	e9 d5 05 00 00       	jmp    852e329 <_ZN11CTradeSpace16checkCancelTradeEv+0x771>
 852dd54:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 852dd5b:	c7 45 dc 03 00 00 00 	movl   $0x3,-0x24(%ebp)
 852dd62:	eb 30                	jmp    852dd94 <_ZN11CTradeSpace16checkCancelTradeEv+0x1dc>
 852dd64:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852dd67:	8b 55 dc             	mov    -0x24(%ebp),%edx
 852dd6a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852dd6d:	89 d0                	mov    %edx,%eax
 852dd6f:	c1 e0 03             	shl    $0x3,%eax
 852dd72:	01 d0                	add    %edx,%eax
 852dd74:	c1 e0 03             	shl    $0x3,%eax
 852dd77:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852dd7d:	01 d0                	add    %edx,%eax
 852dd7f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852dd82:	83 c0 30             	add    $0x30,%eax
 852dd85:	8b 40 0b             	mov    0xb(%eax),%eax
 852dd88:	85 c0                	test   %eax,%eax
 852dd8a:	74 04                	je     852dd90 <_ZN11CTradeSpace16checkCancelTradeEv+0x1d8>
 852dd8c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 852dd90:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 852dd94:	83 7d dc 1a          	cmpl   $0x1a,-0x24(%ebp)
 852dd98:	0f 9e c0             	setle  %al
 852dd9b:	84 c0                	test   %al,%al
 852dd9d:	75 c5                	jne    852dd64 <_ZN11CTradeSpace16checkCancelTradeEv+0x1ac>
 852dd9f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852dda2:	8b 45 08             	mov    0x8(%ebp),%eax
 852dda5:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852ddab:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ddae:	85 c0                	test   %eax,%eax
 852ddb0:	7e 5c                	jle    852de0e <_ZN11CTradeSpace16checkCancelTradeEv+0x256>
 852ddb2:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 852ddb6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ddb9:	8b 45 08             	mov    0x8(%ebp),%eax
 852ddbc:	83 c2 08             	add    $0x8,%edx
 852ddbf:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ddc2:	85 c0                	test   %eax,%eax
 852ddc4:	74 48                	je     852de0e <_ZN11CTradeSpace16checkCancelTradeEv+0x256>
 852ddc6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ddc9:	8b 45 08             	mov    0x8(%ebp),%eax
 852ddcc:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852ddd2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852ddd5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852ddd8:	8d 8d 10 f0 ff ff    	lea    -0xff0(%ebp),%ecx
 852ddde:	69 d2 b8 07 00 00    	imul   $0x7b8,%edx,%edx
 852dde4:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 852dde7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 852ddee:	00 
 852ddef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852ddf6:	00 
 852ddf7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 852ddfe:	00 
 852ddff:	89 44 24 04          	mov    %eax,0x4(%esp)
 852de03:	89 14 24             	mov    %edx,(%esp)
 852de06:	e8 91 14 fd ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 852de0b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 852de0e:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 852de15:	e9 fc 04 00 00       	jmp    852e316 <_ZN11CTradeSpace16checkCancelTradeEv+0x75e>
 852de1a:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852de1d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852de20:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852de23:	89 d0                	mov    %edx,%eax
 852de25:	c1 e0 03             	shl    $0x3,%eax
 852de28:	01 d0                	add    %edx,%eax
 852de2a:	c1 e0 03             	shl    $0x3,%eax
 852de2d:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852de33:	01 d0                	add    %edx,%eax
 852de35:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852de38:	83 c0 30             	add    $0x30,%eax
 852de3b:	8b 40 0b             	mov    0xb(%eax),%eax
 852de3e:	85 c0                	test   %eax,%eax
 852de40:	0f 84 c8 04 00 00    	je     852e30e <_ZN11CTradeSpace16checkCancelTradeEv+0x756>
 852de46:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852de49:	8b 45 08             	mov    0x8(%ebp),%eax
 852de4c:	83 c2 08             	add    $0x8,%edx
 852de4f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852de52:	85 c0                	test   %eax,%eax
 852de54:	0f 84 b7 04 00 00    	je     852e311 <_ZN11CTradeSpace16checkCancelTradeEv+0x759>
 852de5a:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852de5d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852de60:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852de63:	89 d0                	mov    %edx,%eax
 852de65:	c1 e0 03             	shl    $0x3,%eax
 852de68:	01 d0                	add    %edx,%eax
 852de6a:	c1 e0 03             	shl    $0x3,%eax
 852de6d:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852de73:	01 d0                	add    %edx,%eax
 852de75:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852de78:	83 c0 30             	add    $0x30,%eax
 852de7b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 852de7f:	84 c0                	test   %al,%al
 852de81:	0f 85 2a 01 00 00    	jne    852dfb1 <_ZN11CTradeSpace16checkCancelTradeEv+0x3f9>
 852de87:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852de8a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852de8d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852de90:	8d 8d 10 f0 ff ff    	lea    -0xff0(%ebp),%ecx
 852de96:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 852de9c:	01 c1                	add    %eax,%ecx
 852de9e:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852dea5:	00 
 852dea6:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 852dead:	00 
 852deae:	c7 44 24 44 02 00 00 	movl   $0x2,0x44(%esp)
 852deb5:	00 
 852deb6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 852deb9:	89 d0                	mov    %edx,%eax
 852debb:	c1 e0 03             	shl    $0x3,%eax
 852debe:	01 d0                	add    %edx,%eax
 852dec0:	c1 e0 03             	shl    $0x3,%eax
 852dec3:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 852dec9:	01 d0                	add    %edx,%eax
 852decb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852dece:	83 c0 30             	add    $0x30,%eax
 852ded1:	8b 50 09             	mov    0x9(%eax),%edx
 852ded4:	89 54 24 04          	mov    %edx,0x4(%esp)
 852ded8:	8b 50 0d             	mov    0xd(%eax),%edx
 852dedb:	89 54 24 08          	mov    %edx,0x8(%esp)
 852dedf:	8b 50 11             	mov    0x11(%eax),%edx
 852dee2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852dee6:	8b 50 15             	mov    0x15(%eax),%edx
 852dee9:	89 54 24 10          	mov    %edx,0x10(%esp)
 852deed:	8b 50 19             	mov    0x19(%eax),%edx
 852def0:	89 54 24 14          	mov    %edx,0x14(%esp)
 852def4:	8b 50 1d             	mov    0x1d(%eax),%edx
 852def7:	89 54 24 18          	mov    %edx,0x18(%esp)
 852defb:	8b 50 21             	mov    0x21(%eax),%edx
 852defe:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852df02:	8b 50 25             	mov    0x25(%eax),%edx
 852df05:	89 54 24 20          	mov    %edx,0x20(%esp)
 852df09:	8b 50 29             	mov    0x29(%eax),%edx
 852df0c:	89 54 24 24          	mov    %edx,0x24(%esp)
 852df10:	8b 50 2d             	mov    0x2d(%eax),%edx
 852df13:	89 54 24 28          	mov    %edx,0x28(%esp)
 852df17:	8b 50 31             	mov    0x31(%eax),%edx
 852df1a:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852df1e:	8b 50 35             	mov    0x35(%eax),%edx
 852df21:	89 54 24 30          	mov    %edx,0x30(%esp)
 852df25:	8b 50 39             	mov    0x39(%eax),%edx
 852df28:	89 54 24 34          	mov    %edx,0x34(%esp)
 852df2c:	8b 50 3d             	mov    0x3d(%eax),%edx
 852df2f:	89 54 24 38          	mov    %edx,0x38(%esp)
 852df33:	8b 50 41             	mov    0x41(%eax),%edx
 852df36:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852df3a:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852df3e:	88 44 24 40          	mov    %al,0x40(%esp)
 852df42:	89 0c 24             	mov    %ecx,(%esp)
 852df45:	e8 3c 4e fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 852df4a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 852df4d:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 852df51:	0f 89 bb 03 00 00    	jns    852e312 <_ZN11CTradeSpace16checkCancelTradeEv+0x75a>
 852df57:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852df5a:	8b 45 08             	mov    0x8(%ebp),%eax
 852df5d:	83 c2 08             	add    $0x8,%edx
 852df60:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852df63:	89 04 24             	mov    %eax,(%esp)
 852df66:	e8 e3 dc b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852df6b:	89 c3                	mov    %eax,%ebx
 852df6d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852df74:	00 
 852df75:	c7 44 24 08 af 06 00 	movl   $0x6af,0x8(%esp)
 852df7c:	00 
 852df7d:	c7 44 24 04 40 85 c9 	movl   $0x8c98540,0x4(%esp)
 852df84:	08 
 852df85:	8d 45 90             	lea    -0x70(%ebp),%eax
 852df88:	89 04 24             	mov    %eax,(%esp)
 852df8b:	e8 88 17 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852df90:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852df94:	c7 44 24 04 a8 74 c9 	movl   $0x8c974a8,0x4(%esp)
 852df9b:	08 
 852df9c:	8d 45 90             	lea    -0x70(%ebp),%eax
 852df9f:	89 04 24             	mov    %eax,(%esp)
 852dfa2:	e8 e1 17 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852dfa7:	bb 00 00 00 00       	mov    $0x0,%ebx
 852dfac:	e9 c4 03 00 00       	jmp    852e375 <_ZN11CTradeSpace16checkCancelTradeEv+0x7bd>
 852dfb1:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852dfb4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852dfb7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852dfba:	89 d0                	mov    %edx,%eax
 852dfbc:	c1 e0 03             	shl    $0x3,%eax
 852dfbf:	01 d0                	add    %edx,%eax
 852dfc1:	c1 e0 03             	shl    $0x3,%eax
 852dfc4:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852dfca:	01 d0                	add    %edx,%eax
 852dfcc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852dfcf:	83 c0 30             	add    $0x30,%eax
 852dfd2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 852dfd6:	3c 01                	cmp    $0x1,%al
 852dfd8:	0f 85 22 01 00 00    	jne    852e100 <_ZN11CTradeSpace16checkCancelTradeEv+0x548>
 852dfde:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852dfe1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852dfe4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852dfe7:	8d 8d 10 f0 ff ff    	lea    -0xff0(%ebp),%ecx
 852dfed:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 852dff3:	01 c1                	add    %eax,%ecx
 852dff5:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 852dffc:	00 
 852dffd:	c7 44 24 44 03 00 00 	movl   $0x3,0x44(%esp)
 852e004:	00 
 852e005:	8b 5d 08             	mov    0x8(%ebp),%ebx
 852e008:	89 d0                	mov    %edx,%eax
 852e00a:	c1 e0 03             	shl    $0x3,%eax
 852e00d:	01 d0                	add    %edx,%eax
 852e00f:	c1 e0 03             	shl    $0x3,%eax
 852e012:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 852e018:	01 d0                	add    %edx,%eax
 852e01a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852e01d:	83 c0 30             	add    $0x30,%eax
 852e020:	8b 50 09             	mov    0x9(%eax),%edx
 852e023:	89 54 24 04          	mov    %edx,0x4(%esp)
 852e027:	8b 50 0d             	mov    0xd(%eax),%edx
 852e02a:	89 54 24 08          	mov    %edx,0x8(%esp)
 852e02e:	8b 50 11             	mov    0x11(%eax),%edx
 852e031:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852e035:	8b 50 15             	mov    0x15(%eax),%edx
 852e038:	89 54 24 10          	mov    %edx,0x10(%esp)
 852e03c:	8b 50 19             	mov    0x19(%eax),%edx
 852e03f:	89 54 24 14          	mov    %edx,0x14(%esp)
 852e043:	8b 50 1d             	mov    0x1d(%eax),%edx
 852e046:	89 54 24 18          	mov    %edx,0x18(%esp)
 852e04a:	8b 50 21             	mov    0x21(%eax),%edx
 852e04d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852e051:	8b 50 25             	mov    0x25(%eax),%edx
 852e054:	89 54 24 20          	mov    %edx,0x20(%esp)
 852e058:	8b 50 29             	mov    0x29(%eax),%edx
 852e05b:	89 54 24 24          	mov    %edx,0x24(%esp)
 852e05f:	8b 50 2d             	mov    0x2d(%eax),%edx
 852e062:	89 54 24 28          	mov    %edx,0x28(%esp)
 852e066:	8b 50 31             	mov    0x31(%eax),%edx
 852e069:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852e06d:	8b 50 35             	mov    0x35(%eax),%edx
 852e070:	89 54 24 30          	mov    %edx,0x30(%esp)
 852e074:	8b 50 39             	mov    0x39(%eax),%edx
 852e077:	89 54 24 34          	mov    %edx,0x34(%esp)
 852e07b:	8b 50 3d             	mov    0x3d(%eax),%edx
 852e07e:	89 54 24 38          	mov    %edx,0x38(%esp)
 852e082:	8b 50 41             	mov    0x41(%eax),%edx
 852e085:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852e089:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852e08d:	88 44 24 40          	mov    %al,0x40(%esp)
 852e091:	89 0c 24             	mov    %ecx,(%esp)
 852e094:	e8 e3 55 fd ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 852e099:	89 45 d8             	mov    %eax,-0x28(%ebp)
 852e09c:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 852e0a0:	0f 89 6c 02 00 00    	jns    852e312 <_ZN11CTradeSpace16checkCancelTradeEv+0x75a>
 852e0a6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e0a9:	8b 45 08             	mov    0x8(%ebp),%eax
 852e0ac:	83 c2 08             	add    $0x8,%edx
 852e0af:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e0b2:	89 04 24             	mov    %eax,(%esp)
 852e0b5:	e8 94 db b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852e0ba:	89 c3                	mov    %eax,%ebx
 852e0bc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852e0c3:	00 
 852e0c4:	c7 44 24 08 b9 06 00 	movl   $0x6b9,0x8(%esp)
 852e0cb:	00 
 852e0cc:	c7 44 24 04 40 85 c9 	movl   $0x8c98540,0x4(%esp)
 852e0d3:	08 
 852e0d4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 852e0d7:	89 04 24             	mov    %eax,(%esp)
 852e0da:	e8 39 16 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852e0df:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852e0e3:	c7 44 24 04 00 75 c9 	movl   $0x8c97500,0x4(%esp)
 852e0ea:	08 
 852e0eb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 852e0ee:	89 04 24             	mov    %eax,(%esp)
 852e0f1:	e8 92 16 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852e0f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 852e0fb:	e9 75 02 00 00       	jmp    852e375 <_ZN11CTradeSpace16checkCancelTradeEv+0x7bd>
 852e100:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 852e103:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852e106:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852e109:	89 d0                	mov    %edx,%eax
 852e10b:	c1 e0 03             	shl    $0x3,%eax
 852e10e:	01 d0                	add    %edx,%eax
 852e110:	c1 e0 03             	shl    $0x3,%eax
 852e113:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852e119:	01 d0                	add    %edx,%eax
 852e11b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e11e:	83 c0 30             	add    $0x30,%eax
 852e121:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 852e125:	3c 07                	cmp    $0x7,%al
 852e127:	0f 85 be 00 00 00    	jne    852e1eb <_ZN11CTradeSpace16checkCancelTradeEv+0x633>
 852e12d:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 852e130:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852e133:	89 d0                	mov    %edx,%eax
 852e135:	c1 e0 03             	shl    $0x3,%eax
 852e138:	01 d0                	add    %edx,%eax
 852e13a:	c1 e0 03             	shl    $0x3,%eax
 852e13d:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852e143:	01 d0                	add    %edx,%eax
 852e145:	83 c0 30             	add    $0x30,%eax
 852e148:	03 45 08             	add    0x8(%ebp),%eax
 852e14b:	8d 50 09             	lea    0x9(%eax),%edx
 852e14e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852e151:	8d 8d 10 f0 ff ff    	lea    -0xff0(%ebp),%ecx
 852e157:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 852e15d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852e160:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 852e167:	00 
 852e168:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852e16f:	00 
 852e170:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 852e177:	00 
 852e178:	89 54 24 04          	mov    %edx,0x4(%esp)
 852e17c:	89 04 24             	mov    %eax,(%esp)
 852e17f:	e8 e6 c6 fd ff       	call   850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>
 852e184:	89 45 d8             	mov    %eax,-0x28(%ebp)
 852e187:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 852e18b:	0f 89 81 01 00 00    	jns    852e312 <_ZN11CTradeSpace16checkCancelTradeEv+0x75a>
 852e191:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e194:	8b 45 08             	mov    0x8(%ebp),%eax
 852e197:	83 c2 08             	add    $0x8,%edx
 852e19a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e19d:	89 04 24             	mov    %eax,(%esp)
 852e1a0:	e8 a9 da b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852e1a5:	89 c3                	mov    %eax,%ebx
 852e1a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852e1ae:	00 
 852e1af:	c7 44 24 08 c3 06 00 	movl   $0x6c3,0x8(%esp)
 852e1b6:	00 
 852e1b7:	c7 44 24 04 40 85 c9 	movl   $0x8c98540,0x4(%esp)
 852e1be:	08 
 852e1bf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 852e1c2:	89 04 24             	mov    %eax,(%esp)
 852e1c5:	e8 4e 15 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852e1ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852e1ce:	c7 44 24 04 58 75 c9 	movl   $0x8c97558,0x4(%esp)
 852e1d5:	08 
 852e1d6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 852e1d9:	89 04 24             	mov    %eax,(%esp)
 852e1dc:	e8 a7 15 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852e1e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 852e1e6:	e9 8a 01 00 00       	jmp    852e375 <_ZN11CTradeSpace16checkCancelTradeEv+0x7bd>
 852e1eb:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 852e1ee:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852e1f1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852e1f4:	8d 8d 10 f0 ff ff    	lea    -0xff0(%ebp),%ecx
 852e1fa:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 852e200:	01 c1                	add    %eax,%ecx
 852e202:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852e209:	00 
 852e20a:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 852e211:	00 
 852e212:	c7 44 24 44 02 00 00 	movl   $0x2,0x44(%esp)
 852e219:	00 
 852e21a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 852e21d:	89 d0                	mov    %edx,%eax
 852e21f:	c1 e0 03             	shl    $0x3,%eax
 852e222:	01 d0                	add    %edx,%eax
 852e224:	c1 e0 03             	shl    $0x3,%eax
 852e227:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 852e22d:	01 d0                	add    %edx,%eax
 852e22f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852e232:	83 c0 30             	add    $0x30,%eax
 852e235:	8b 50 09             	mov    0x9(%eax),%edx
 852e238:	89 54 24 04          	mov    %edx,0x4(%esp)
 852e23c:	8b 50 0d             	mov    0xd(%eax),%edx
 852e23f:	89 54 24 08          	mov    %edx,0x8(%esp)
 852e243:	8b 50 11             	mov    0x11(%eax),%edx
 852e246:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852e24a:	8b 50 15             	mov    0x15(%eax),%edx
 852e24d:	89 54 24 10          	mov    %edx,0x10(%esp)
 852e251:	8b 50 19             	mov    0x19(%eax),%edx
 852e254:	89 54 24 14          	mov    %edx,0x14(%esp)
 852e258:	8b 50 1d             	mov    0x1d(%eax),%edx
 852e25b:	89 54 24 18          	mov    %edx,0x18(%esp)
 852e25f:	8b 50 21             	mov    0x21(%eax),%edx
 852e262:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852e266:	8b 50 25             	mov    0x25(%eax),%edx
 852e269:	89 54 24 20          	mov    %edx,0x20(%esp)
 852e26d:	8b 50 29             	mov    0x29(%eax),%edx
 852e270:	89 54 24 24          	mov    %edx,0x24(%esp)
 852e274:	8b 50 2d             	mov    0x2d(%eax),%edx
 852e277:	89 54 24 28          	mov    %edx,0x28(%esp)
 852e27b:	8b 50 31             	mov    0x31(%eax),%edx
 852e27e:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852e282:	8b 50 35             	mov    0x35(%eax),%edx
 852e285:	89 54 24 30          	mov    %edx,0x30(%esp)
 852e289:	8b 50 39             	mov    0x39(%eax),%edx
 852e28c:	89 54 24 34          	mov    %edx,0x34(%esp)
 852e290:	8b 50 3d             	mov    0x3d(%eax),%edx
 852e293:	89 54 24 38          	mov    %edx,0x38(%esp)
 852e297:	8b 50 41             	mov    0x41(%eax),%edx
 852e29a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852e29e:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 852e2a2:	88 44 24 40          	mov    %al,0x40(%esp)
 852e2a6:	89 0c 24             	mov    %ecx,(%esp)
 852e2a9:	e8 96 40 fd ff       	call   8502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>
 852e2ae:	89 45 d8             	mov    %eax,-0x28(%ebp)
 852e2b1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 852e2b5:	79 5b                	jns    852e312 <_ZN11CTradeSpace16checkCancelTradeEv+0x75a>
 852e2b7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 852e2ba:	8b 45 08             	mov    0x8(%ebp),%eax
 852e2bd:	83 c2 08             	add    $0x8,%edx
 852e2c0:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852e2c3:	89 04 24             	mov    %eax,(%esp)
 852e2c6:	e8 83 d9 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852e2cb:	89 c3                	mov    %eax,%ebx
 852e2cd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852e2d4:	00 
 852e2d5:	c7 44 24 08 d8 06 00 	movl   $0x6d8,0x8(%esp)
 852e2dc:	00 
 852e2dd:	c7 44 24 04 40 85 c9 	movl   $0x8c98540,0x4(%esp)
 852e2e4:	08 
 852e2e5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 852e2e8:	89 04 24             	mov    %eax,(%esp)
 852e2eb:	e8 28 14 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852e2f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852e2f4:	c7 44 24 04 b4 75 c9 	movl   $0x8c975b4,0x4(%esp)
 852e2fb:	08 
 852e2fc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 852e2ff:	89 04 24             	mov    %eax,(%esp)
 852e302:	e8 81 14 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852e307:	bb 00 00 00 00       	mov    $0x0,%ebx
 852e30c:	eb 67                	jmp    852e375 <_ZN11CTradeSpace16checkCancelTradeEv+0x7bd>
 852e30e:	90                   	nop
 852e30f:	eb 01                	jmp    852e312 <_ZN11CTradeSpace16checkCancelTradeEv+0x75a>
 852e311:	90                   	nop
 852e312:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 852e316:	83 7d e4 1a          	cmpl   $0x1a,-0x1c(%ebp)
 852e31a:	0f 9e c0             	setle  %al
 852e31d:	84 c0                	test   %al,%al
 852e31f:	0f 85 f5 fa ff ff    	jne    852de1a <_ZN11CTradeSpace16checkCancelTradeEv+0x262>
 852e325:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 852e329:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 852e32d:	0f 9e c0             	setle  %al
 852e330:	84 c0                	test   %al,%al
 852e332:	0f 85 1c fa ff ff    	jne    852dd54 <_ZN11CTradeSpace16checkCancelTradeEv+0x19c>
 852e338:	bb 01 00 00 00       	mov    $0x1,%ebx
 852e33d:	eb 36                	jmp    852e375 <_ZN11CTradeSpace16checkCancelTradeEv+0x7bd>
 852e33f:	89 d6                	mov    %edx,%esi
 852e341:	89 c7                	mov    %eax,%edi
 852e343:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852e349:	8d 98 70 0f 00 00    	lea    0xf70(%eax),%ebx
 852e34f:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852e355:	39 c3                	cmp    %eax,%ebx
 852e357:	74 10                	je     852e369 <_ZN11CTradeSpace16checkCancelTradeEv+0x7b1>
 852e359:	81 eb b8 07 00 00    	sub    $0x7b8,%ebx
 852e35f:	89 1c 24             	mov    %ebx,(%esp)
 852e362:	e8 99 f2 cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 852e367:	eb e6                	jmp    852e34f <_ZN11CTradeSpace16checkCancelTradeEv+0x797>
 852e369:	89 f8                	mov    %edi,%eax
 852e36b:	89 f2                	mov    %esi,%edx
 852e36d:	89 04 24             	mov    %eax,(%esp)
 852e370:	e8 db 53 5b 00       	call   8ae3750 <_Unwind_Resume>
 852e375:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852e37b:	8d b0 70 0f 00 00    	lea    0xf70(%eax),%esi
 852e381:	8d 85 10 f0 ff ff    	lea    -0xff0(%ebp),%eax
 852e387:	39 c6                	cmp    %eax,%esi
 852e389:	74 10                	je     852e39b <_ZN11CTradeSpace16checkCancelTradeEv+0x7e3>
 852e38b:	81 ee b8 07 00 00    	sub    $0x7b8,%esi
 852e391:	89 34 24             	mov    %esi,(%esp)
 852e394:	e8 67 f2 cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 852e399:	eb e6                	jmp    852e381 <_ZN11CTradeSpace16checkCancelTradeEv+0x7c9>
 852e39b:	89 d8                	mov    %ebx,%eax
 852e39d:	81 c4 cc 92 01 00    	add    $0x192cc,%esp
 852e3a3:	5b                   	pop    %ebx
 852e3a4:	5e                   	pop    %esi
 852e3a5:	5f                   	pop    %edi
 852e3a6:	5d                   	pop    %ebp
 852e3a7:	c3                   	ret

```

```c
// CTradeSpace::checkCancelTrade @ 0x852dbb8

/* CTradeSpace::checkCancelTrade() */

undefined4 __thiscall CTradeSpace::checkCancelTrade(CTradeSpace *this)

{
  bool bVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  cMyTrace *this_00;
  InventoryMemory aIStack_19272 [49471];
  InventoryMemory local_d133 [49471];
  CInventory local_ff4 [1976];
  CInventory aCStack_83c [1976];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
  if ((iVar2 == 0) ||
     (iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24)), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_84,"bool CTradeSpace::checkCancelTrade()",0x674,5);
    cMyTrace::operator()
              (local_84,
               "CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()"
              );
    uVar4 = 0;
  }
  else {
    pCVar3 = local_ff4;
    for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 0852dc4a to 0852dc4e has its CatchHandler @ 0852dc64 */
      CInventory::CInventory(pCVar3);
      pCVar3 = pCVar3 + 0x7b8;
    }
    InventoryMemory::InventoryMemory(local_d133);
    CInventory::SetInventoryMemory(local_ff4,local_d133);
    InventoryMemory::InventoryMemory(aIStack_19272);
    CInventory::SetInventoryMemory(aCStack_83c,aIStack_19272);
    pCVar3 = (CInventory *)
             CUserCharacInfo::getCurCharacInvenRefR(*(CUserCharacInfo **)(this + 0x20));
                    /* try { // try from 0852dd10 to 0852e306 has its CatchHandler @ 0852e33f */
    CInventory::setCopy(local_ff4,pCVar3);
    pCVar3 = (CInventory *)
             CUserCharacInfo::getCurCharacInvenRefR(*(CUserCharacInfo **)(this + 0x24));
    CInventory::setCopy(aCStack_83c,pCVar3);
    local_34 = 0;
    for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
      local_34 = 0;
      for (local_28 = 3; local_28 < 0x1b; local_28 = local_28 + 1) {
        if (*(int *)(this + local_28 * 0x48 + local_30 * 0x798 + 0x3b) != 0) {
          local_34 = local_34 + 1;
        }
      }
      if ((0 < *(int *)(this + (local_30 + 0x3d8) * 4)) &&
         (local_34 = local_34 + 1, *(int *)(this + (local_30 + 8) * 4) != 0)) {
        local_24 = CInventory::gain_money
                             (local_ff4 + local_30 * 0x7b8,
                              *(undefined4 *)(this + (local_30 + 0x3d8) * 4),2,0,0);
      }
      for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
        if ((*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x3b) != 0) &&
           (*(int *)(this + (local_30 + 8) * 4) != 0)) {
          if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x0) {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertItemIntoInventory
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],2,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_74,"bool CTradeSpace::checkCancelTrade()",0x6af,5);
              cMyTrace::operator()
                        (local_74,
                         "try insert_item(INVEN_TYPE_INVENTORY) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x1) {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertAvatarIntoInventory
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],3,0);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_64,"bool CTradeSpace::checkCancelTrade()",0x6b9,5);
              cMyTrace::operator()
                        (local_64,
                         "try insert_item(ENUM_ITEMSPACE_AVATAR) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x7) {
            local_2c = CInventory::insertItemIntoCreature
                                 (local_ff4 + local_30 * 0x7b8,
                                  this + local_20 * 0x48 + local_30 * 0x798 + 0x39,0x1c,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_54,"bool CTradeSpace::checkCancelTrade()",0x6c3,5);
              cMyTrace::operator()
                        (local_54,
                         "try insert_item(ENUM_ITEMSPACE_CREATURE) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertItemIntoEquipment
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],2,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_44,"bool CTradeSpace::checkCancelTrade()",0x6d8,5);
              cMyTrace::operator()
                        (local_44,
                         "try insert_item(INVEN_TYPE_EQUIP) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
        }
      }
    }
    uVar4 = 1;
LAB_0852e375:
    this_00 = local_84;
    while (this_00 != (cMyTrace *)local_ff4) {
      this_00 = this_00 + -0x7b8;
      CInventory::~CInventory((CInventory *)this_00);
    }
  }
  return uVar4;
}

```

---

## checkTrade

```asm
// === 08530210 CTradeSpace::checkTrade  [0x08530210-0x8530849] ===
 8530210:	55                   	push   %ebp
 8530211:	89 e5                	mov    %esp,%ebp
 8530213:	57                   	push   %edi
 8530214:	56                   	push   %esi
 8530215:	53                   	push   %ebx
 8530216:	81 ec 9c 92 01 00    	sub    $0x1929c,%esp
 853021c:	8d 9d 40 f0 ff ff    	lea    -0xfc0(%ebp),%ebx
 8530222:	89 df                	mov    %ebx,%edi
 8530224:	be 01 00 00 00       	mov    $0x1,%esi
 8530229:	eb 11                	jmp    853023c <_ZN11CTradeSpace10checkTradeEv+0x2c>
 853022b:	89 3c 24             	mov    %edi,(%esp)
 853022e:	e8 f9 d2 cf ff       	call   822d52c <_ZN10CInventoryC1Ev>
 8530233:	81 c7 b8 07 00 00    	add    $0x7b8,%edi
 8530239:	83 ee 01             	sub    $0x1,%esi
 853023c:	83 fe ff             	cmp    $0xffffffff,%esi
 853023f:	0f 95 c0             	setne  %al
 8530242:	84 c0                	test   %al,%al
 8530244:	75 e5                	jne    853022b <_ZN11CTradeSpace10checkTradeEv+0x1b>
 8530246:	eb 40                	jmp    8530288 <_ZN11CTradeSpace10checkTradeEv+0x78>
 8530248:	89 d7                	mov    %edx,%edi
 853024a:	89 85 b4 6d fe ff    	mov    %eax,-0x1924c(%ebp)
 8530250:	85 db                	test   %ebx,%ebx
 8530252:	74 24                	je     8530278 <_ZN11CTradeSpace10checkTradeEv+0x68>
 8530254:	b8 01 00 00 00       	mov    $0x1,%eax
 8530259:	29 f0                	sub    %esi,%eax
 853025b:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 8530261:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8530264:	39 de                	cmp    %ebx,%esi
 8530266:	74 10                	je     8530278 <_ZN11CTradeSpace10checkTradeEv+0x68>
 8530268:	81 ee b8 07 00 00    	sub    $0x7b8,%esi
 853026e:	89 34 24             	mov    %esi,(%esp)
 8530271:	e8 8a d3 cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 8530276:	eb ec                	jmp    8530264 <_ZN11CTradeSpace10checkTradeEv+0x54>
 8530278:	8b 85 b4 6d fe ff    	mov    -0x1924c(%ebp),%eax
 853027e:	89 fa                	mov    %edi,%edx
 8530280:	89 04 24             	mov    %eax,(%esp)
 8530283:	e8 c8 34 5b 00       	call   8ae3750 <_Unwind_Resume>
 8530288:	8d 85 01 2f ff ff    	lea    -0xd0ff(%ebp),%eax
 853028e:	89 04 24             	mov    %eax,(%esp)
 8530291:	e8 22 d1 cf ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 8530296:	8d 85 01 2f ff ff    	lea    -0xd0ff(%ebp),%eax
 853029c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85302a0:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 85302a6:	89 04 24             	mov    %eax,(%esp)
 85302a9:	e8 48 d2 cf ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 85302ae:	8d 85 c2 6d fe ff    	lea    -0x1923e(%ebp),%eax
 85302b4:	89 04 24             	mov    %eax,(%esp)
 85302b7:	e8 fc d0 cf ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 85302bc:	8d 85 c2 6d fe ff    	lea    -0x1923e(%ebp),%eax
 85302c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85302c6:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 85302cc:	05 b8 07 00 00       	add    $0x7b8,%eax
 85302d1:	89 04 24             	mov    %eax,(%esp)
 85302d4:	e8 1d d2 cf ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 85302d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85302dc:	8b 40 20             	mov    0x20(%eax),%eax
 85302df:	89 04 24             	mov    %eax,(%esp)
 85302e2:	e8 4b 01 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85302e7:	05 da 00 00 00       	add    $0xda,%eax
 85302ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85302f0:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 85302f6:	89 04 24             	mov    %eax,(%esp)
 85302f9:	e8 16 a0 fc ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 85302fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8530301:	8b 40 24             	mov    0x24(%eax),%eax
 8530304:	89 04 24             	mov    %eax,(%esp)
 8530307:	e8 26 01 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 853030c:	05 da 00 00 00       	add    $0xda,%eax
 8530311:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530315:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 853031b:	05 b8 07 00 00       	add    $0x7b8,%eax
 8530320:	89 04 24             	mov    %eax,(%esp)
 8530323:	e8 ec 9f fc ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 8530328:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 853032f:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8530336:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 853033d:	e9 89 04 00 00       	jmp    85307cb <_ZN11CTradeSpace10checkTradeEv+0x5bb>
 8530342:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8530349:	c7 45 dc 03 00 00 00 	movl   $0x3,-0x24(%ebp)
 8530350:	eb 30                	jmp    8530382 <_ZN11CTradeSpace10checkTradeEv+0x172>
 8530352:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8530355:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8530358:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853035b:	89 d0                	mov    %edx,%eax
 853035d:	c1 e0 03             	shl    $0x3,%eax
 8530360:	01 d0                	add    %edx,%eax
 8530362:	c1 e0 03             	shl    $0x3,%eax
 8530365:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 853036b:	01 d0                	add    %edx,%eax
 853036d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530370:	83 c0 30             	add    $0x30,%eax
 8530373:	8b 40 0b             	mov    0xb(%eax),%eax
 8530376:	85 c0                	test   %eax,%eax
 8530378:	74 04                	je     853037e <_ZN11CTradeSpace10checkTradeEv+0x16e>
 853037a:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 853037e:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8530382:	83 7d dc 1a          	cmpl   $0x1a,-0x24(%ebp)
 8530386:	0f 9e c0             	setle  %al
 8530389:	84 c0                	test   %al,%al
 853038b:	75 c5                	jne    8530352 <_ZN11CTradeSpace10checkTradeEv+0x142>
 853038d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8530390:	8b 45 08             	mov    0x8(%ebp),%eax
 8530393:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530399:	8b 04 90             	mov    (%eax,%edx,4),%eax
 853039c:	85 c0                	test   %eax,%eax
 853039e:	0f 8e 86 00 00 00    	jle    853042a <_ZN11CTradeSpace10checkTradeEv+0x21a>
 85303a4:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85303a8:	b8 01 00 00 00       	mov    $0x1,%eax
 85303ad:	89 c2                	mov    %eax,%edx
 85303af:	2b 55 d8             	sub    -0x28(%ebp),%edx
 85303b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85303b5:	83 c2 08             	add    $0x8,%edx
 85303b8:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85303bb:	85 c0                	test   %eax,%eax
 85303bd:	74 6b                	je     853042a <_ZN11CTradeSpace10checkTradeEv+0x21a>
 85303bf:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85303c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85303c5:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 85303cb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85303ce:	ba 01 00 00 00       	mov    $0x1,%edx
 85303d3:	2b 55 d8             	sub    -0x28(%ebp),%edx
 85303d6:	8d 8d 40 f0 ff ff    	lea    -0xfc0(%ebp),%ecx
 85303dc:	69 d2 b8 07 00 00    	imul   $0x7b8,%edx,%edx
 85303e2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85303e5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85303ec:	00 
 85303ed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85303f4:	00 
 85303f5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85303fc:	00 
 85303fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530401:	89 14 24             	mov    %edx,(%esp)
 8530404:	e8 93 ee fc ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 8530409:	89 45 e0             	mov    %eax,-0x20(%ebp)
 853040c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 853040f:	8b 45 08             	mov    0x8(%ebp),%eax
 8530412:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530418:	8b 04 90             	mov    (%eax,%edx,4),%eax
 853041b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 853041e:	74 0a                	je     853042a <_ZN11CTradeSpace10checkTradeEv+0x21a>
 8530420:	be 00 00 00 00       	mov    $0x0,%esi
 8530425:	e9 ed 03 00 00       	jmp    8530817 <_ZN11CTradeSpace10checkTradeEv+0x607>
 853042a:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 8530431:	e9 82 03 00 00       	jmp    85307b8 <_ZN11CTradeSpace10checkTradeEv+0x5a8>
 8530436:	b8 01 00 00 00       	mov    $0x1,%eax
 853043b:	89 c2                	mov    %eax,%edx
 853043d:	2b 55 d8             	sub    -0x28(%ebp),%edx
 8530440:	8b 45 08             	mov    0x8(%ebp),%eax
 8530443:	83 c2 08             	add    $0x8,%edx
 8530446:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530449:	85 c0                	test   %eax,%eax
 853044b:	0f 84 63 03 00 00    	je     85307b4 <_ZN11CTradeSpace10checkTradeEv+0x5a4>
 8530451:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8530454:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8530457:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853045a:	89 d0                	mov    %edx,%eax
 853045c:	c1 e0 03             	shl    $0x3,%eax
 853045f:	01 d0                	add    %edx,%eax
 8530461:	c1 e0 03             	shl    $0x3,%eax
 8530464:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 853046a:	01 d0                	add    %edx,%eax
 853046c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 853046f:	83 c0 30             	add    $0x30,%eax
 8530472:	8b 40 0b             	mov    0xb(%eax),%eax
 8530475:	85 c0                	test   %eax,%eax
 8530477:	0f 84 37 03 00 00    	je     85307b4 <_ZN11CTradeSpace10checkTradeEv+0x5a4>
 853047d:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8530480:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8530483:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8530486:	89 d0                	mov    %edx,%eax
 8530488:	c1 e0 03             	shl    $0x3,%eax
 853048b:	01 d0                	add    %edx,%eax
 853048d:	c1 e0 03             	shl    $0x3,%eax
 8530490:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8530496:	01 d0                	add    %edx,%eax
 8530498:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 853049b:	83 c0 30             	add    $0x30,%eax
 853049e:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 85304a2:	3c 08                	cmp    $0x8,%al
 85304a4:	0f 85 c8 00 00 00    	jne    8530572 <_ZN11CTradeSpace10checkTradeEv+0x362>
 85304aa:	8b 75 d8             	mov    -0x28(%ebp),%esi
 85304ad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85304b0:	b8 01 00 00 00       	mov    $0x1,%eax
 85304b5:	2b 45 d8             	sub    -0x28(%ebp),%eax
 85304b8:	8d 8d 40 f0 ff ff    	lea    -0xfc0(%ebp),%ecx
 85304be:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 85304c4:	01 c1                	add    %eax,%ecx
 85304c6:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 85304cd:	00 
 85304ce:	c7 44 24 44 01 00 00 	movl   $0x1,0x44(%esp)
 85304d5:	00 
 85304d6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85304d9:	89 d0                	mov    %edx,%eax
 85304db:	c1 e0 03             	shl    $0x3,%eax
 85304de:	01 d0                	add    %edx,%eax
 85304e0:	c1 e0 03             	shl    $0x3,%eax
 85304e3:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 85304e9:	01 d0                	add    %edx,%eax
 85304eb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85304ee:	83 c0 30             	add    $0x30,%eax
 85304f1:	8b 50 09             	mov    0x9(%eax),%edx
 85304f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85304f8:	8b 50 0d             	mov    0xd(%eax),%edx
 85304fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85304ff:	8b 50 11             	mov    0x11(%eax),%edx
 8530502:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8530506:	8b 50 15             	mov    0x15(%eax),%edx
 8530509:	89 54 24 10          	mov    %edx,0x10(%esp)
 853050d:	8b 50 19             	mov    0x19(%eax),%edx
 8530510:	89 54 24 14          	mov    %edx,0x14(%esp)
 8530514:	8b 50 1d             	mov    0x1d(%eax),%edx
 8530517:	89 54 24 18          	mov    %edx,0x18(%esp)
 853051b:	8b 50 21             	mov    0x21(%eax),%edx
 853051e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8530522:	8b 50 25             	mov    0x25(%eax),%edx
 8530525:	89 54 24 20          	mov    %edx,0x20(%esp)
 8530529:	8b 50 29             	mov    0x29(%eax),%edx
 853052c:	89 54 24 24          	mov    %edx,0x24(%esp)
 8530530:	8b 50 2d             	mov    0x2d(%eax),%edx
 8530533:	89 54 24 28          	mov    %edx,0x28(%esp)
 8530537:	8b 50 31             	mov    0x31(%eax),%edx
 853053a:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 853053e:	8b 50 35             	mov    0x35(%eax),%edx
 8530541:	89 54 24 30          	mov    %edx,0x30(%esp)
 8530545:	8b 50 39             	mov    0x39(%eax),%edx
 8530548:	89 54 24 34          	mov    %edx,0x34(%esp)
 853054c:	8b 50 3d             	mov    0x3d(%eax),%edx
 853054f:	89 54 24 38          	mov    %edx,0x38(%esp)
 8530553:	8b 50 41             	mov    0x41(%eax),%edx
 8530556:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 853055a:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 853055e:	88 44 24 40          	mov    %al,0x40(%esp)
 8530562:	89 0c 24             	mov    %ecx,(%esp)
 8530565:	e8 12 31 fd ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 853056a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 853056d:	e9 58 01 00 00       	jmp    85306ca <_ZN11CTradeSpace10checkTradeEv+0x4ba>
 8530572:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8530575:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8530578:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853057b:	89 d0                	mov    %edx,%eax
 853057d:	c1 e0 03             	shl    $0x3,%eax
 8530580:	01 d0                	add    %edx,%eax
 8530582:	c1 e0 03             	shl    $0x3,%eax
 8530585:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 853058b:	01 d0                	add    %edx,%eax
 853058d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530590:	83 c0 30             	add    $0x30,%eax
 8530593:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8530597:	3c 07                	cmp    $0x7,%al
 8530599:	75 64                	jne    85305ff <_ZN11CTradeSpace10checkTradeEv+0x3ef>
 853059b:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 853059e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85305a1:	89 d0                	mov    %edx,%eax
 85305a3:	c1 e0 03             	shl    $0x3,%eax
 85305a6:	01 d0                	add    %edx,%eax
 85305a8:	c1 e0 03             	shl    $0x3,%eax
 85305ab:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 85305b1:	01 d0                	add    %edx,%eax
 85305b3:	83 c0 30             	add    $0x30,%eax
 85305b6:	03 45 08             	add    0x8(%ebp),%eax
 85305b9:	8d 50 09             	lea    0x9(%eax),%edx
 85305bc:	b8 01 00 00 00       	mov    $0x1,%eax
 85305c1:	2b 45 d8             	sub    -0x28(%ebp),%eax
 85305c4:	8d 8d 40 f0 ff ff    	lea    -0xfc0(%ebp),%ecx
 85305ca:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 85305d0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85305d3:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 85305da:	00 
 85305db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85305e2:	00 
 85305e3:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 85305ea:	00 
 85305eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85305ef:	89 04 24             	mov    %eax,(%esp)
 85305f2:	e8 73 a2 fd ff       	call   850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>
 85305f7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85305fa:	e9 cb 00 00 00       	jmp    85306ca <_ZN11CTradeSpace10checkTradeEv+0x4ba>
 85305ff:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8530602:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8530605:	b8 01 00 00 00       	mov    $0x1,%eax
 853060a:	2b 45 d8             	sub    -0x28(%ebp),%eax
 853060d:	8d 8d 40 f0 ff ff    	lea    -0xfc0(%ebp),%ecx
 8530613:	69 c0 b8 07 00 00    	imul   $0x7b8,%eax,%eax
 8530619:	01 c1                	add    %eax,%ecx
 853061b:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8530622:	00 
 8530623:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 853062a:	00 
 853062b:	c7 44 24 44 01 00 00 	movl   $0x1,0x44(%esp)
 8530632:	00 
 8530633:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8530636:	89 d0                	mov    %edx,%eax
 8530638:	c1 e0 03             	shl    $0x3,%eax
 853063b:	01 d0                	add    %edx,%eax
 853063d:	c1 e0 03             	shl    $0x3,%eax
 8530640:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 8530646:	01 d0                	add    %edx,%eax
 8530648:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 853064b:	83 c0 30             	add    $0x30,%eax
 853064e:	8b 50 09             	mov    0x9(%eax),%edx
 8530651:	89 54 24 04          	mov    %edx,0x4(%esp)
 8530655:	8b 50 0d             	mov    0xd(%eax),%edx
 8530658:	89 54 24 08          	mov    %edx,0x8(%esp)
 853065c:	8b 50 11             	mov    0x11(%eax),%edx
 853065f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8530663:	8b 50 15             	mov    0x15(%eax),%edx
 8530666:	89 54 24 10          	mov    %edx,0x10(%esp)
 853066a:	8b 50 19             	mov    0x19(%eax),%edx
 853066d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8530671:	8b 50 1d             	mov    0x1d(%eax),%edx
 8530674:	89 54 24 18          	mov    %edx,0x18(%esp)
 8530678:	8b 50 21             	mov    0x21(%eax),%edx
 853067b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 853067f:	8b 50 25             	mov    0x25(%eax),%edx
 8530682:	89 54 24 20          	mov    %edx,0x20(%esp)
 8530686:	8b 50 29             	mov    0x29(%eax),%edx
 8530689:	89 54 24 24          	mov    %edx,0x24(%esp)
 853068d:	8b 50 2d             	mov    0x2d(%eax),%edx
 8530690:	89 54 24 28          	mov    %edx,0x28(%esp)
 8530694:	8b 50 31             	mov    0x31(%eax),%edx
 8530697:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 853069b:	8b 50 35             	mov    0x35(%eax),%edx
 853069e:	89 54 24 30          	mov    %edx,0x30(%esp)
 85306a2:	8b 50 39             	mov    0x39(%eax),%edx
 85306a5:	89 54 24 34          	mov    %edx,0x34(%esp)
 85306a9:	8b 50 3d             	mov    0x3d(%eax),%edx
 85306ac:	89 54 24 38          	mov    %edx,0x38(%esp)
 85306b0:	8b 50 41             	mov    0x41(%eax),%edx
 85306b3:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 85306b7:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 85306bb:	88 44 24 40          	mov    %al,0x40(%esp)
 85306bf:	89 0c 24             	mov    %ecx,(%esp)
 85306c2:	e8 bf 26 fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85306c7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85306ca:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 85306ce:	0f 89 e0 00 00 00    	jns    85307b4 <_ZN11CTradeSpace10checkTradeEv+0x5a4>
 85306d4:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 85306d7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85306da:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85306dd:	89 d0                	mov    %edx,%eax
 85306df:	c1 e0 03             	shl    $0x3,%eax
 85306e2:	01 d0                	add    %edx,%eax
 85306e4:	c1 e0 03             	shl    $0x3,%eax
 85306e7:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 85306ed:	01 d0                	add    %edx,%eax
 85306ef:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85306f2:	83 c0 30             	add    $0x30,%eax
 85306f5:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 85306f9:	3c 08                	cmp    $0x8,%al
 85306fb:	75 59                	jne    8530756 <_ZN11CTradeSpace10checkTradeEv+0x546>
 85306fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8530702:	89 c2                	mov    %eax,%edx
 8530704:	2b 55 d8             	sub    -0x28(%ebp),%edx
 8530707:	8b 45 08             	mov    0x8(%ebp),%eax
 853070a:	83 c2 08             	add    $0x8,%edx
 853070d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530710:	89 04 24             	mov    %eax,(%esp)
 8530713:	e8 36 b5 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8530718:	89 c3                	mov    %eax,%ebx
 853071a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8530721:	00 
 8530722:	c7 44 24 08 a7 0b 00 	movl   $0xba7,0x8(%esp)
 8530729:	00 
 853072a:	c7 44 24 04 44 84 c9 	movl   $0x8c98444,0x4(%esp)
 8530731:	08 
 8530732:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8530735:	89 04 24             	mov    %eax,(%esp)
 8530738:	e8 db ef 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 853073d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8530741:	c7 44 24 04 48 77 c9 	movl   $0x8c97748,0x4(%esp)
 8530748:	08 
 8530749:	8d 45 b0             	lea    -0x50(%ebp),%eax
 853074c:	89 04 24             	mov    %eax,(%esp)
 853074f:	e8 34 f0 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8530754:	eb 57                	jmp    85307ad <_ZN11CTradeSpace10checkTradeEv+0x59d>
 8530756:	b8 01 00 00 00       	mov    $0x1,%eax
 853075b:	89 c2                	mov    %eax,%edx
 853075d:	2b 55 d8             	sub    -0x28(%ebp),%edx
 8530760:	8b 45 08             	mov    0x8(%ebp),%eax
 8530763:	83 c2 08             	add    $0x8,%edx
 8530766:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530769:	89 04 24             	mov    %eax,(%esp)
 853076c:	e8 dd b4 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8530771:	89 c3                	mov    %eax,%ebx
 8530773:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 853077a:	00 
 853077b:	c7 44 24 08 ab 0b 00 	movl   $0xbab,0x8(%esp)
 8530782:	00 
 8530783:	c7 44 24 04 44 84 c9 	movl   $0x8c98444,0x4(%esp)
 853078a:	08 
 853078b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 853078e:	89 04 24             	mov    %eax,(%esp)
 8530791:	e8 82 ef 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8530796:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 853079a:	c7 44 24 04 80 77 c9 	movl   $0x8c97780,0x4(%esp)
 85307a1:	08 
 85307a2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85307a5:	89 04 24             	mov    %eax,(%esp)
 85307a8:	e8 db ef 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85307ad:	be 00 00 00 00       	mov    $0x0,%esi
 85307b2:	eb 63                	jmp    8530817 <_ZN11CTradeSpace10checkTradeEv+0x607>
 85307b4:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85307b8:	83 7d e4 1a          	cmpl   $0x1a,-0x1c(%ebp)
 85307bc:	0f 9e c0             	setle  %al
 85307bf:	84 c0                	test   %al,%al
 85307c1:	0f 85 6f fc ff ff    	jne    8530436 <_ZN11CTradeSpace10checkTradeEv+0x226>
 85307c7:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85307cb:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 85307cf:	0f 9e c0             	setle  %al
 85307d2:	84 c0                	test   %al,%al
 85307d4:	0f 85 68 fb ff ff    	jne    8530342 <_ZN11CTradeSpace10checkTradeEv+0x132>
 85307da:	be 01 00 00 00       	mov    $0x1,%esi
 85307df:	eb 36                	jmp    8530817 <_ZN11CTradeSpace10checkTradeEv+0x607>
 85307e1:	89 d6                	mov    %edx,%esi
 85307e3:	89 c7                	mov    %eax,%edi
 85307e5:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 85307eb:	8d 98 70 0f 00 00    	lea    0xf70(%eax),%ebx
 85307f1:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 85307f7:	39 c3                	cmp    %eax,%ebx
 85307f9:	74 10                	je     853080b <_ZN11CTradeSpace10checkTradeEv+0x5fb>
 85307fb:	81 eb b8 07 00 00    	sub    $0x7b8,%ebx
 8530801:	89 1c 24             	mov    %ebx,(%esp)
 8530804:	e8 f7 cd cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 8530809:	eb e6                	jmp    85307f1 <_ZN11CTradeSpace10checkTradeEv+0x5e1>
 853080b:	89 f8                	mov    %edi,%eax
 853080d:	89 f2                	mov    %esi,%edx
 853080f:	89 04 24             	mov    %eax,(%esp)
 8530812:	e8 39 2f 5b 00       	call   8ae3750 <_Unwind_Resume>
 8530817:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 853081d:	8d 98 70 0f 00 00    	lea    0xf70(%eax),%ebx
 8530823:	8d 85 40 f0 ff ff    	lea    -0xfc0(%ebp),%eax
 8530829:	39 c3                	cmp    %eax,%ebx
 853082b:	74 10                	je     853083d <_ZN11CTradeSpace10checkTradeEv+0x62d>
 853082d:	81 eb b8 07 00 00    	sub    $0x7b8,%ebx
 8530833:	89 1c 24             	mov    %ebx,(%esp)
 8530836:	e8 c5 cd cf ff       	call   822d600 <_ZN10CInventoryD1Ev>
 853083b:	eb e6                	jmp    8530823 <_ZN11CTradeSpace10checkTradeEv+0x613>
 853083d:	89 f0                	mov    %esi,%eax
 853083f:	81 c4 9c 92 01 00    	add    $0x1929c,%esp
 8530845:	5b                   	pop    %ebx
 8530846:	5e                   	pop    %esi
 8530847:	5f                   	pop    %edi
 8530848:	5d                   	pop    %ebp
 8530849:	c3                   	ret

```

```c
// CTradeSpace::checkTrade @ 0x8530210

/* CTradeSpace::checkTrade() */

undefined4 __thiscall CTradeSpace::checkTrade(CTradeSpace *this)

{
  CInventory *pCVar1;
  int iVar2;
  undefined4 uVar3;
  InventoryMemory aIStack_19242 [49471];
  InventoryMemory local_d103 [49471];
  CInventory local_fc4 [1976];
  CInventory aCStack_80c [1976];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  pCVar1 = local_fc4;
  for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 0853022e to 08530232 has its CatchHandler @ 08530248 */
    CInventory::CInventory(pCVar1);
    pCVar1 = pCVar1 + 0x7b8;
  }
  InventoryMemory::InventoryMemory(local_d103);
  CInventory::SetInventoryMemory(local_fc4,local_d103);
  InventoryMemory::InventoryMemory(aIStack_19242);
  CInventory::SetInventoryMemory(aCStack_80c,aIStack_19242);
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
                    /* try { // try from 085302f9 to 085307ac has its CatchHandler @ 085307e1 */
  CInventory::setCopy(local_fc4,(CInventory *)(iVar2 + 0xda));
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
  CInventory::setCopy(aCStack_80c,(CInventory *)(iVar2 + 0xda));
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  do {
    if (1 < local_2c) {
      uVar3 = 1;
LAB_08530817:
      pCVar1 = (CInventory *)local_54;
      while (pCVar1 != local_fc4) {
        pCVar1 = pCVar1 + -0x7b8;
        CInventory::~CInventory(pCVar1);
      }
      return uVar3;
    }
    local_34 = 0;
    for (local_28 = 3; local_28 < 0x1b; local_28 = local_28 + 1) {
      if (*(int *)(this + local_28 * 0x48 + local_2c * 0x798 + 0x3b) != 0) {
        local_34 = local_34 + 1;
      }
    }
    if ((0 < *(int *)(this + (local_2c + 0x3d8) * 4)) &&
       (local_34 = local_34 + 1, *(int *)(this + (9 - local_2c) * 4) != 0)) {
      local_24 = CInventory::gain_money
                           (local_fc4 + (1 - local_2c) * 0x7b8,
                            *(undefined4 *)(this + (local_2c + 0x3d8) * 4),1,0,0);
      if (*(int *)(this + (local_2c + 0x3d8) * 4) != local_24) {
        uVar3 = 0;
        goto LAB_08530817;
      }
    }
    for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
      if ((*(int *)(this + (9 - local_2c) * 4) != 0) &&
         (*(int *)(this + local_20 * 0x48 + local_2c * 0x798 + 0x3b) != 0)) {
        if (this[local_20 * 0x48 + local_2c * 0x798 + 0x3a] == (CTradeSpace)0x8) {
          iVar2 = local_20 * 0x48 + local_2c * 0x798;
          local_30 = CInventory::insertAvatarIntoInventory
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                *(undefined4 *)(this + iVar2 + 0x39),
                                *(undefined4 *)(this + iVar2 + 0x3d),
                                *(undefined4 *)(this + iVar2 + 0x41),
                                *(undefined4 *)(this + iVar2 + 0x45),
                                *(undefined4 *)(this + iVar2 + 0x49),
                                *(undefined4 *)(this + iVar2 + 0x4d),
                                *(undefined4 *)(this + iVar2 + 0x51),
                                *(undefined4 *)(this + iVar2 + 0x55),
                                *(undefined4 *)(this + iVar2 + 0x59),
                                *(undefined4 *)(this + iVar2 + 0x5d),
                                *(undefined4 *)(this + iVar2 + 0x61),
                                *(undefined4 *)(this + iVar2 + 0x65),
                                *(undefined4 *)(this + iVar2 + 0x69),
                                *(undefined4 *)(this + iVar2 + 0x6d),
                                *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],1,0);
        }
        else if (this[local_20 * 0x48 + local_2c * 0x798 + 0x38] == (CTradeSpace)0x7) {
          local_30 = CInventory::insertItemIntoCreature
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                this + local_20 * 0x48 + local_2c * 0x798 + 0x39,0x1a,0,1);
        }
        else {
          iVar2 = local_20 * 0x48 + local_2c * 0x798;
          local_30 = CInventory::insertItemIntoInventory
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                *(undefined4 *)(this + iVar2 + 0x39),
                                *(undefined4 *)(this + iVar2 + 0x3d),
                                *(undefined4 *)(this + iVar2 + 0x41),
                                *(undefined4 *)(this + iVar2 + 0x45),
                                *(undefined4 *)(this + iVar2 + 0x49),
                                *(undefined4 *)(this + iVar2 + 0x4d),
                                *(undefined4 *)(this + iVar2 + 0x51),
                                *(undefined4 *)(this + iVar2 + 0x55),
                                *(undefined4 *)(this + iVar2 + 0x59),
                                *(undefined4 *)(this + iVar2 + 0x5d),
                                *(undefined4 *)(this + iVar2 + 0x61),
                                *(undefined4 *)(this + iVar2 + 0x65),
                                *(undefined4 *)(this + iVar2 + 0x69),
                                *(undefined4 *)(this + iVar2 + 0x6d),
                                *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],1,0,1);
        }
        if (local_30 < 0) {
          if (this[local_20 * 0x48 + local_2c * 0x798 + 0x3a] == (CTradeSpace)0x8) {
            uVar3 = CUserCharacInfo::getCurCharacNo
                              (*(CUserCharacInfo **)(this + (9 - local_2c) * 4));
            cMyTrace::cMyTrace(local_54,"bool CTradeSpace::checkTrade()",0xba7,5);
            cMyTrace::operator()
                      (local_54,"try insert_item(INVEN_TYPE_AVATAR) fail - fatal! ch=%d",uVar3);
          }
          else {
            uVar3 = CUserCharacInfo::getCurCharacNo
                              (*(CUserCharacInfo **)(this + (9 - local_2c) * 4));
            cMyTrace::cMyTrace(local_44,"bool CTradeSpace::checkTrade()",0xbab,5);
            cMyTrace::operator()
                      (local_44,"try insert_item(INVEN_TYPE_INVENTORY) fail - fatal! ch=%d",uVar3);
          }
          uVar3 = 0;
          goto LAB_08530817;
        }
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}

```

---

## check_item_exist

```asm
// === 08529a18 CTradeSpace::check_item_exist  [0x08529a18-0x8529a71] ===
 8529a18:	55                   	push   %ebp
 8529a19:	89 e5                	mov    %esp,%ebp
 8529a1b:	53                   	push   %ebx
 8529a1c:	83 ec 10             	sub    $0x10,%esp
 8529a1f:	c7 45 f8 03 00 00 00 	movl   $0x3,-0x8(%ebp)
 8529a26:	eb 34                	jmp    8529a5c <_ZN11CTradeSpace16check_item_existEii+0x44>
 8529a28:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8529a2b:	8b 55 f8             	mov    -0x8(%ebp),%edx
 8529a2e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8529a31:	89 d0                	mov    %edx,%eax
 8529a33:	c1 e0 03             	shl    $0x3,%eax
 8529a36:	01 d0                	add    %edx,%eax
 8529a38:	c1 e0 03             	shl    $0x3,%eax
 8529a3b:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8529a41:	01 d0                	add    %edx,%eax
 8529a43:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8529a46:	83 c0 30             	add    $0x30,%eax
 8529a49:	8b 50 0b             	mov    0xb(%eax),%edx
 8529a4c:	8b 45 10             	mov    0x10(%ebp),%eax
 8529a4f:	39 c2                	cmp    %eax,%edx
 8529a51:	75 05                	jne    8529a58 <_ZN11CTradeSpace16check_item_existEii+0x40>
 8529a53:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8529a56:	eb 14                	jmp    8529a6c <_ZN11CTradeSpace16check_item_existEii+0x54>
 8529a58:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8529a5c:	83 7d f8 1a          	cmpl   $0x1a,-0x8(%ebp)
 8529a60:	0f 9e c0             	setle  %al
 8529a63:	84 c0                	test   %al,%al
 8529a65:	75 c1                	jne    8529a28 <_ZN11CTradeSpace16check_item_existEii+0x10>
 8529a67:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8529a6c:	83 c4 10             	add    $0x10,%esp
 8529a6f:	5b                   	pop    %ebx
 8529a70:	5d                   	pop    %ebp
 8529a71:	c3                   	ret

```

```c
// CTradeSpace::check_item_exist @ 0x8529a18

/* CTradeSpace::check_item_exist(int, int) */

int __thiscall CTradeSpace::check_item_exist(CTradeSpace *this,int param_1,int param_2)

{
  int local_c;
  
  local_c = 3;
  while( true ) {
    if (0x1a < local_c) {
      return -1;
    }
    if (*(int *)(this + local_c * 0x48 + param_1 * 0x798 + 0x3b) == param_2) break;
    local_c = local_c + 1;
  }
  return local_c;
}

```

---

## check_trade_possibility

```asm
// === 0852993c CTradeSpace::check_trade_possibility  [0x0852993c-0x85299bf] ===
 852993c:	55                   	push   %ebp
 852993d:	89 e5                	mov    %esp,%ebp
 852993f:	53                   	push   %ebx
 8529940:	83 ec 14             	sub    $0x14,%esp
 8529943:	8b 45 08             	mov    0x8(%ebp),%eax
 8529946:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 852994a:	83 f0 01             	xor    $0x1,%eax
 852994d:	84 c0                	test   %al,%al
 852994f:	74 07                	je     8529958 <_ZN11CTradeSpace23check_trade_possibilityEv+0x1c>
 8529951:	b8 00 00 00 00       	mov    $0x0,%eax
 8529956:	eb 61                	jmp    85299b9 <_ZN11CTradeSpace23check_trade_possibilityEv+0x7d>
 8529958:	8b 45 08             	mov    0x8(%ebp),%eax
 852995b:	8b 40 20             	mov    0x20(%eax),%eax
 852995e:	89 04 24             	mov    %eax,(%esp)
 8529961:	e8 d8 64 d0 ff       	call   822fe3e <_ZN5CUser13GetTradeSpaceEv>
 8529966:	89 c3                	mov    %eax,%ebx
 8529968:	8b 45 08             	mov    0x8(%ebp),%eax
 852996b:	8b 40 24             	mov    0x24(%eax),%eax
 852996e:	89 04 24             	mov    %eax,(%esp)
 8529971:	e8 c8 64 d0 ff       	call   822fe3e <_ZN5CUser13GetTradeSpaceEv>
 8529976:	39 c3                	cmp    %eax,%ebx
 8529978:	0f 95 c0             	setne  %al
 852997b:	84 c0                	test   %al,%al
 852997d:	74 07                	je     8529986 <_ZN11CTradeSpace23check_trade_possibilityEv+0x4a>
 852997f:	b8 00 00 00 00       	mov    $0x0,%eax
 8529984:	eb 33                	jmp    85299b9 <_ZN11CTradeSpace23check_trade_possibilityEv+0x7d>
 8529986:	8b 45 08             	mov    0x8(%ebp),%eax
 8529989:	8b 40 20             	mov    0x20(%eax),%eax
 852998c:	89 04 24             	mov    %eax,(%esp)
 852998f:	e8 f8 09 bb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8529994:	89 c3                	mov    %eax,%ebx
 8529996:	8b 45 08             	mov    0x8(%ebp),%eax
 8529999:	8b 40 24             	mov    0x24(%eax),%eax
 852999c:	89 04 24             	mov    %eax,(%esp)
 852999f:	e8 e8 09 bb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85299a4:	39 c3                	cmp    %eax,%ebx
 85299a6:	0f 95 c0             	setne  %al
 85299a9:	84 c0                	test   %al,%al
 85299ab:	74 07                	je     85299b4 <_ZN11CTradeSpace23check_trade_possibilityEv+0x78>
 85299ad:	b8 00 00 00 00       	mov    $0x0,%eax
 85299b2:	eb 05                	jmp    85299b9 <_ZN11CTradeSpace23check_trade_possibilityEv+0x7d>
 85299b4:	b8 01 00 00 00       	mov    $0x1,%eax
 85299b9:	83 c4 14             	add    $0x14,%esp
 85299bc:	5b                   	pop    %ebx
 85299bd:	5d                   	pop    %ebp
 85299be:	c3                   	ret
 85299bf:	90                   	nop

```

```c
// CTradeSpace::check_trade_possibility @ 0x852993c

/* CTradeSpace::check_trade_possibility() */

undefined4 __thiscall CTradeSpace::check_trade_possibility(CTradeSpace *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[0x1c] == (CTradeSpace)0x1) {
    iVar2 = CUser::GetTradeSpace(*(CUser **)(this + 0x20));
    iVar3 = CUser::GetTradeSpace(*(CUser **)(this + 0x24));
    if (iVar2 == iVar3) {
      iVar2 = CUser::get_state(*(CUser **)(this + 0x20));
      iVar3 = CUser::get_state(*(CUser **)(this + 0x24));
      if (iVar2 == iVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
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

## get_empty_itemslot

```asm
// === 085299c0 CTradeSpace::get_empty_itemslot  [0x085299c0-0x8529a17] ===
 85299c0:	55                   	push   %ebp
 85299c1:	89 e5                	mov    %esp,%ebp
 85299c3:	53                   	push   %ebx
 85299c4:	83 ec 10             	sub    $0x10,%esp
 85299c7:	c7 45 f8 03 00 00 00 	movl   $0x3,-0x8(%ebp)
 85299ce:	eb 31                	jmp    8529a01 <_ZN11CTradeSpace18get_empty_itemslotEi+0x41>
 85299d0:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85299d3:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85299d6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85299d9:	89 d0                	mov    %edx,%eax
 85299db:	c1 e0 03             	shl    $0x3,%eax
 85299de:	01 d0                	add    %edx,%eax
 85299e0:	c1 e0 03             	shl    $0x3,%eax
 85299e3:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 85299e9:	01 d0                	add    %edx,%eax
 85299eb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85299ee:	83 c0 30             	add    $0x30,%eax
 85299f1:	8b 40 0b             	mov    0xb(%eax),%eax
 85299f4:	85 c0                	test   %eax,%eax
 85299f6:	75 05                	jne    85299fd <_ZN11CTradeSpace18get_empty_itemslotEi+0x3d>
 85299f8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85299fb:	eb 14                	jmp    8529a11 <_ZN11CTradeSpace18get_empty_itemslotEi+0x51>
 85299fd:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8529a01:	83 7d f8 1a          	cmpl   $0x1a,-0x8(%ebp)
 8529a05:	0f 9e c0             	setle  %al
 8529a08:	84 c0                	test   %al,%al
 8529a0a:	75 c4                	jne    85299d0 <_ZN11CTradeSpace18get_empty_itemslotEi+0x10>
 8529a0c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8529a11:	83 c4 10             	add    $0x10,%esp
 8529a14:	5b                   	pop    %ebx
 8529a15:	5d                   	pop    %ebp
 8529a16:	c3                   	ret
 8529a17:	90                   	nop

```

```c
// CTradeSpace::get_empty_itemslot @ 0x85299c0

/* CTradeSpace::get_empty_itemslot(int) */

int __thiscall CTradeSpace::get_empty_itemslot(CTradeSpace *this,int param_1)

{
  int local_c;
  
  local_c = 3;
  while( true ) {
    if (0x1a < local_c) {
      return -1;
    }
    if (*(int *)(this + local_c * 0x48 + param_1 * 0x798 + 0x3b) == 0) break;
    local_c = local_c + 1;
  }
  return local_c;
}

```

---

## proceed_trade

```asm
// === 0853087a CTradeSpace::proceed_trade  [0x0853087a-0x8531f61] ===
 853087a:	55                   	push   %ebp
 853087b:	89 e5                	mov    %esp,%ebp
 853087d:	57                   	push   %edi
 853087e:	56                   	push   %esi
 853087f:	53                   	push   %ebx
 8530880:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8530886:	8b 45 08             	mov    0x8(%ebp),%eax
 8530889:	89 04 24             	mov    %eax,(%esp)
 853088c:	e8 5d 18 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 8530891:	83 f0 01             	xor    $0x1,%eax
 8530894:	84 c0                	test   %al,%al
 8530896:	74 0a                	je     85308a2 <_ZN11CTradeSpace13proceed_tradeEv+0x28>
 8530898:	bb 00 00 00 00       	mov    $0x0,%ebx
 853089d:	e9 b3 16 00 00       	jmp    8531f55 <_ZN11CTradeSpace13proceed_tradeEv+0x16db>
 85308a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85308a5:	89 04 24             	mov    %eax,(%esp)
 85308a8:	e8 63 f9 ff ff       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 85308ad:	83 f0 01             	xor    $0x1,%eax
 85308b0:	84 c0                	test   %al,%al
 85308b2:	74 0a                	je     85308be <_ZN11CTradeSpace13proceed_tradeEv+0x44>
 85308b4:	bb 00 00 00 00       	mov    $0x0,%ebx
 85308b9:	e9 97 16 00 00       	jmp    8531f55 <_ZN11CTradeSpace13proceed_tradeEv+0x16db>
 85308be:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 85308c5:	00 00 00 
 85308c8:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 85308cf:	00 00 00 
 85308d2:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 85308d9:	00 00 00 
 85308dc:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 85308e3:	00 00 00 
 85308e6:	8d 9d 58 ff ff ff    	lea    -0xa8(%ebp),%ebx
 85308ec:	89 df                	mov    %ebx,%edi
 85308ee:	be 01 00 00 00       	mov    $0x1,%esi
 85308f3:	eb 0e                	jmp    8530903 <_ZN11CTradeSpace13proceed_tradeEv+0x89>
 85308f5:	89 3c 24             	mov    %edi,(%esp)
 85308f8:	e8 4f d4 05 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85308fd:	83 c7 0c             	add    $0xc,%edi
 8530900:	83 ee 01             	sub    $0x1,%esi
 8530903:	83 fe ff             	cmp    $0xffffffff,%esi
 8530906:	0f 95 c0             	setne  %al
 8530909:	84 c0                	test   %al,%al
 853090b:	75 e8                	jne    85308f5 <_ZN11CTradeSpace13proceed_tradeEv+0x7b>
 853090d:	eb 42                	jmp    8530951 <_ZN11CTradeSpace13proceed_tradeEv+0xd7>
 853090f:	89 d7                	mov    %edx,%edi
 8530911:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8530917:	85 db                	test   %ebx,%ebx
 8530919:	74 26                	je     8530941 <_ZN11CTradeSpace13proceed_tradeEv+0xc7>
 853091b:	b8 01 00 00 00       	mov    $0x1,%eax
 8530920:	29 f0                	sub    %esi,%eax
 8530922:	89 c2                	mov    %eax,%edx
 8530924:	89 d0                	mov    %edx,%eax
 8530926:	01 c0                	add    %eax,%eax
 8530928:	01 d0                	add    %edx,%eax
 853092a:	c1 e0 02             	shl    $0x2,%eax
 853092d:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8530930:	39 de                	cmp    %ebx,%esi
 8530932:	74 0d                	je     8530941 <_ZN11CTradeSpace13proceed_tradeEv+0xc7>
 8530934:	83 ee 0c             	sub    $0xc,%esi
 8530937:	89 34 24             	mov    %esi,(%esp)
 853093a:	e8 41 d5 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 853093f:	eb ef                	jmp    8530930 <_ZN11CTradeSpace13proceed_tradeEv+0xb6>
 8530941:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8530947:	89 fa                	mov    %edi,%edx
 8530949:	89 04 24             	mov    %eax,(%esp)
 853094c:	e8 ff 2d 5b 00       	call   8ae3750 <_Unwind_Resume>
 8530951:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8530958:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 853095f:	00 00 00 
 8530962:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8530969:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 853096f:	89 04 24             	mov    %eax,(%esp)
 8530972:	e8 af 17 00 00       	call   8532126 <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEEC1Ev>
 8530977:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 853097e:	e9 40 01 00 00       	jmp    8530ac3 <_ZN11CTradeSpace13proceed_tradeEv+0x249>
 8530983:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530986:	8b 45 08             	mov    0x8(%ebp),%eax
 8530989:	83 c2 08             	add    $0x8,%edx
 853098c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 853098f:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8530992:	b8 01 00 00 00       	mov    $0x1,%eax
 8530997:	89 c2                	mov    %eax,%edx
 8530999:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853099c:	8b 45 08             	mov    0x8(%ebp),%eax
 853099f:	83 c2 08             	add    $0x8,%edx
 85309a2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85309a5:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 85309a8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85309ab:	89 04 24             	mov    %eax,(%esp)
 85309ae:	e8 4d fe cf ff       	call   8230800 <_ZN5CUser8getHadesEv>
 85309b3:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 85309b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85309bd:	89 04 24             	mov    %eax,(%esp)
 85309c0:	e8 af 8d f8 ff       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 85309c5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85309c8:	89 04 24             	mov    %eax,(%esp)
 85309cb:	e8 ae 98 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85309d0:	89 04 24             	mov    %eax,(%esp)
 85309d3:	e8 fe 3d c0 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85309d8:	89 c7                	mov    %eax,%edi
 85309da:	8b 55 9c             	mov    -0x64(%ebp),%edx
 85309dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85309e0:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 85309e6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85309e9:	89 c6                	mov    %eax,%esi
 85309eb:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85309ee:	89 04 24             	mov    %eax,(%esp)
 85309f1:	e8 78 99 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85309f6:	89 c3                	mov    %eax,%ebx
 85309f8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85309fb:	89 04 24             	mov    %eax,(%esp)
 85309fe:	e8 17 c1 fb ff       	call   84ecb1a <_ZN5CUser19getAcccountHackInfoEv>
 8530a03:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 8530a09:	89 54 24 18          	mov    %edx,0x18(%esp)
 8530a0d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8530a14:	00 
 8530a15:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8530a19:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8530a1d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8530a21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8530a28:	00 
 8530a29:	89 04 24             	mov    %eax,(%esp)
 8530a2c:	e8 9d 82 d4 ff       	call   8278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>
 8530a31:	c7 45 a8 03 00 00 00 	movl   $0x3,-0x58(%ebp)
 8530a38:	eb 76                	jmp    8530ab0 <_ZN11CTradeSpace13proceed_tradeEv+0x236>
 8530a3a:	b8 01 00 00 00       	mov    $0x1,%eax
 8530a3f:	89 c3                	mov    %eax,%ebx
 8530a41:	2b 5d 9c             	sub    -0x64(%ebp),%ebx
 8530a44:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8530a47:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8530a4a:	89 d0                	mov    %edx,%eax
 8530a4c:	c1 e0 03             	shl    $0x3,%eax
 8530a4f:	01 d0                	add    %edx,%eax
 8530a51:	c1 e0 03             	shl    $0x3,%eax
 8530a54:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8530a5a:	01 d0                	add    %edx,%eax
 8530a5c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530a5f:	83 c0 30             	add    $0x30,%eax
 8530a62:	8b 58 0b             	mov    0xb(%eax),%ebx
 8530a65:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8530a68:	89 04 24             	mov    %eax,(%esp)
 8530a6b:	e8 aa c0 fb ff       	call   84ecb1a <_ZN5CUser19getAcccountHackInfoEv>
 8530a70:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8530a74:	89 04 24             	mov    %eax,(%esp)
 8530a77:	e8 70 80 d4 ff       	call   8278aec <_ZN19Secu_AccountHacking8isAvatarEj>
 8530a7c:	84 c0                	test   %al,%al
 8530a7e:	74 2c                	je     8530aac <_ZN11CTradeSpace13proceed_tradeEv+0x232>
 8530a80:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8530a83:	89 04 24             	mov    %eax,(%esp)
 8530a86:	e8 e3 98 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530a8b:	89 c3                	mov    %eax,%ebx
 8530a8d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8530a90:	89 04 24             	mov    %eax,(%esp)
 8530a93:	e8 82 c0 fb ff       	call   84ecb1a <_ZN5CUser19getAcccountHackInfoEv>
 8530a98:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8530a9c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8530aa3:	00 
 8530aa4:	89 04 24             	mov    %eax,(%esp)
 8530aa7:	e8 6a 84 d4 ff       	call   8278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>
 8530aac:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 8530ab0:	83 7d a8 1a          	cmpl   $0x1a,-0x58(%ebp)
 8530ab4:	0f 9e c0             	setle  %al
 8530ab7:	84 c0                	test   %al,%al
 8530ab9:	0f 85 7b ff ff ff    	jne    8530a3a <_ZN11CTradeSpace13proceed_tradeEv+0x1c0>
 8530abf:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 8530ac3:	83 7d 9c 01          	cmpl   $0x1,-0x64(%ebp)
 8530ac7:	0f 9e c0             	setle  %al
 8530aca:	84 c0                	test   %al,%al
 8530acc:	0f 85 b1 fe ff ff    	jne    8530983 <_ZN11CTradeSpace13proceed_tradeEv+0x109>
 8530ad2:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8530ad9:	e9 9f 11 00 00       	jmp    8531c7d <_ZN11CTradeSpace13proceed_tradeEv+0x1403>
 8530ade:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8530ae5:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530ae8:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8530aee:	89 d0                	mov    %edx,%eax
 8530af0:	01 c0                	add    %eax,%eax
 8530af2:	01 d0                	add    %edx,%eax
 8530af4:	c1 e0 02             	shl    $0x2,%eax
 8530af7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530afa:	89 04 24             	mov    %eax,(%esp)
 8530afd:	e8 e4 ad b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8530b02:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530b05:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8530b0b:	89 d0                	mov    %edx,%eax
 8530b0d:	01 c0                	add    %eax,%eax
 8530b0f:	01 d0                	add    %edx,%eax
 8530b11:	c1 e0 02             	shl    $0x2,%eax
 8530b14:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530b17:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8530b1e:	00 
 8530b1f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8530b26:	00 
 8530b27:	89 04 24             	mov    %eax,(%esp)
 8530b2a:	e8 cd ad b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8530b2f:	c7 45 ac 03 00 00 00 	movl   $0x3,-0x54(%ebp)
 8530b36:	eb 30                	jmp    8530b68 <_ZN11CTradeSpace13proceed_tradeEv+0x2ee>
 8530b38:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8530b3b:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8530b3e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8530b41:	89 d0                	mov    %edx,%eax
 8530b43:	c1 e0 03             	shl    $0x3,%eax
 8530b46:	01 d0                	add    %edx,%eax
 8530b48:	c1 e0 03             	shl    $0x3,%eax
 8530b4b:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8530b51:	01 d0                	add    %edx,%eax
 8530b53:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530b56:	83 c0 30             	add    $0x30,%eax
 8530b59:	8b 40 0b             	mov    0xb(%eax),%eax
 8530b5c:	85 c0                	test   %eax,%eax
 8530b5e:	74 04                	je     8530b64 <_ZN11CTradeSpace13proceed_tradeEv+0x2ea>
 8530b60:	83 45 98 01          	addl   $0x1,-0x68(%ebp)
 8530b64:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 8530b68:	83 7d ac 1a          	cmpl   $0x1a,-0x54(%ebp)
 8530b6c:	0f 9e c0             	setle  %al
 8530b6f:	84 c0                	test   %al,%al
 8530b71:	75 c5                	jne    8530b38 <_ZN11CTradeSpace13proceed_tradeEv+0x2be>
 8530b73:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8530b79:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530b7f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530b82:	85 c0                	test   %eax,%eax
 8530b84:	0f 8e 96 05 00 00    	jle    8531120 <_ZN11CTradeSpace13proceed_tradeEv+0x8a6>
 8530b8a:	83 45 98 01          	addl   $0x1,-0x68(%ebp)
 8530b8e:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530b91:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8530b97:	89 d0                	mov    %edx,%eax
 8530b99:	01 c0                	add    %eax,%eax
 8530b9b:	01 d0                	add    %edx,%eax
 8530b9d:	c1 e0 02             	shl    $0x2,%eax
 8530ba0:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8530ba3:	8b 45 98             	mov    -0x68(%ebp),%eax
 8530ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530baa:	89 14 24             	mov    %edx,(%esp)
 8530bad:	e8 f2 92 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8530bb2:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530bb5:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8530bbb:	89 d0                	mov    %edx,%eax
 8530bbd:	01 c0                	add    %eax,%eax
 8530bbf:	01 d0                	add    %edx,%eax
 8530bc1:	c1 e0 02             	shl    $0x2,%eax
 8530bc4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530bc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8530bce:	00 
 8530bcf:	89 04 24             	mov    %eax,(%esp)
 8530bd2:	e8 cd 92 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8530bd7:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530bda:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8530be0:	89 d0                	mov    %edx,%eax
 8530be2:	01 c0                	add    %eax,%eax
 8530be4:	01 d0                	add    %edx,%eax
 8530be6:	c1 e0 02             	shl    $0x2,%eax
 8530be9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8530bec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8530bf3:	00 
 8530bf4:	89 04 24             	mov    %eax,(%esp)
 8530bf7:	e8 a8 92 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8530bfc:	b8 01 00 00 00       	mov    $0x1,%eax
 8530c01:	89 c2                	mov    %eax,%edx
 8530c03:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8530c09:	83 c2 08             	add    $0x8,%edx
 8530c0c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530c0f:	85 c0                	test   %eax,%eax
 8530c11:	74 4e                	je     8530c61 <_ZN11CTradeSpace13proceed_tradeEv+0x3e7>
 8530c13:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530c16:	8b 45 08             	mov    0x8(%ebp),%eax
 8530c19:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530c1f:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 8530c22:	b8 01 00 00 00       	mov    $0x1,%eax
 8530c27:	89 c2                	mov    %eax,%edx
 8530c29:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530c2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8530c2f:	83 c2 08             	add    $0x8,%edx
 8530c32:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530c35:	89 04 24             	mov    %eax,(%esp)
 8530c38:	e8 51 96 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8530c3d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8530c44:	00 
 8530c45:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8530c4c:	00 
 8530c4d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8530c54:	00 
 8530c55:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8530c59:	89 04 24             	mov    %eax,(%esp)
 8530c5c:	e8 3b e6 fc ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 8530c61:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530c64:	8b 45 08             	mov    0x8(%ebp),%eax
 8530c67:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530c6d:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8530c70:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 8530c75:	89 c8                	mov    %ecx,%eax
 8530c77:	f7 ea                	imul   %edx
 8530c79:	c1 fa 0c             	sar    $0xc,%edx
 8530c7c:	89 c8                	mov    %ecx,%eax
 8530c7e:	c1 f8 1f             	sar    $0x1f,%eax
 8530c81:	89 d3                	mov    %edx,%ebx
 8530c83:	29 c3                	sub    %eax,%ebx
 8530c85:	89 d8                	mov    %ebx,%eax
 8530c87:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 8530c8d:	89 ca                	mov    %ecx,%edx
 8530c8f:	29 c2                	sub    %eax,%edx
 8530c91:	89 d0                	mov    %edx,%eax
 8530c93:	85 c0                	test   %eax,%eax
 8530c95:	0f 84 95 00 00 00    	je     8530d30 <_ZN11CTradeSpace13proceed_tradeEv+0x4b6>
 8530c9b:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530c9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8530ca1:	83 c2 08             	add    $0x8,%edx
 8530ca4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530ca7:	89 04 24             	mov    %eax,(%esp)
 8530caa:	e8 bf 96 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530caf:	89 c2                	mov    %eax,%edx
 8530cb1:	b8 01 00 00 00       	mov    $0x1,%eax
 8530cb6:	89 c1                	mov    %eax,%ecx
 8530cb8:	2b 4d 9c             	sub    -0x64(%ebp),%ecx
 8530cbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8530cbe:	83 c1 08             	add    $0x8,%ecx
 8530cc1:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 8530cc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8530cc8:	c7 44 24 04 c4 02 00 	movl   $0x2c4,0x4(%esp)
 8530ccf:	00 
 8530cd0:	89 04 24             	mov    %eax,(%esp)
 8530cd3:	e8 90 8c bc ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 8530cd8:	89 c6                	mov    %eax,%esi
 8530cda:	b8 01 00 00 00       	mov    $0x1,%eax
 8530cdf:	89 c2                	mov    %eax,%edx
 8530ce1:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8530ce7:	83 c2 08             	add    $0x8,%edx
 8530cea:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 8530ced:	b8 01 00 00 00       	mov    $0x1,%eax
 8530cf2:	89 c2                	mov    %eax,%edx
 8530cf4:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530cf7:	8b 45 08             	mov    0x8(%ebp),%eax
 8530cfa:	83 c2 08             	add    $0x8,%edx
 8530cfd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530d00:	89 04 24             	mov    %eax,(%esp)
 8530d03:	e8 52 8c bc ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8530d08:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8530d0f:	00 
 8530d10:	89 74 24 10          	mov    %esi,0x10(%esp)
 8530d14:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8530d1b:	00 
 8530d1c:	c7 44 24 08 c4 02 00 	movl   $0x2c4,0x8(%esp)
 8530d23:	00 
 8530d24:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8530d28:	89 04 24             	mov    %eax,(%esp)
 8530d2b:	e8 4e 7f bc ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8530d30:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530d33:	8b 45 08             	mov    0x8(%ebp),%eax
 8530d36:	83 c2 08             	add    $0x8,%edx
 8530d39:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530d3c:	89 04 24             	mov    %eax,(%esp)
 8530d3f:	e8 f8 ef cf ff       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 8530d44:	84 c0                	test   %al,%al
 8530d46:	75 18                	jne    8530d60 <_ZN11CTradeSpace13proceed_tradeEv+0x4e6>
 8530d48:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8530d4e:	83 c2 08             	add    $0x8,%edx
 8530d51:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530d54:	89 04 24             	mov    %eax,(%esp)
 8530d57:	e8 f0 ef cf ff       	call   822fd4c <_ZNK5CUser15isHackUserTimerEv>
 8530d5c:	84 c0                	test   %al,%al
 8530d5e:	74 1a                	je     8530d7a <_ZN11CTradeSpace13proceed_tradeEv+0x500>
 8530d60:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530d63:	8b 45 08             	mov    0x8(%ebp),%eax
 8530d66:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530d6c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530d6f:	85 c0                	test   %eax,%eax
 8530d71:	74 07                	je     8530d7a <_ZN11CTradeSpace13proceed_tradeEv+0x500>
 8530d73:	b8 01 00 00 00       	mov    $0x1,%eax
 8530d78:	eb 05                	jmp    8530d7f <_ZN11CTradeSpace13proceed_tradeEv+0x505>
 8530d7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8530d7f:	84 c0                	test   %al,%al
 8530d81:	74 69                	je     8530dec <_ZN11CTradeSpace13proceed_tradeEv+0x572>
 8530d83:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530d86:	8b 45 08             	mov    0x8(%ebp),%eax
 8530d89:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8530d8f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530d92:	89 c3                	mov    %eax,%ebx
 8530d94:	89 c6                	mov    %eax,%esi
 8530d96:	c1 fe 1f             	sar    $0x1f,%esi
 8530d99:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530d9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8530d9f:	83 c2 08             	add    $0x8,%edx
 8530da2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530da5:	89 04 24             	mov    %eax,(%esp)
 8530da8:	e8 c1 95 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530dad:	ba 01 00 00 00       	mov    $0x1,%edx
 8530db2:	89 d1                	mov    %edx,%ecx
 8530db4:	2b 4d 9c             	sub    -0x64(%ebp),%ecx
 8530db7:	8b 55 08             	mov    0x8(%ebp),%edx
 8530dba:	83 c1 08             	add    $0x8,%ecx
 8530dbd:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 8530dc0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8530dc7:	00 
 8530dc8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8530dcf:	00 
 8530dd0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8530dd7:	00 
 8530dd8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8530ddc:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8530de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530de4:	89 14 24             	mov    %edx,(%esp)
 8530de7:	e8 ce ed 14 00       	call   867fbba <_ZN5CUser21gainMoneyFromHackUserEjyjy>
 8530dec:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530def:	8b 45 08             	mov    0x8(%ebp),%eax
 8530df2:	83 c2 08             	add    $0x8,%edx
 8530df5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530df8:	85 c0                	test   %eax,%eax
 8530dfa:	74 36                	je     8530e32 <_ZN11CTradeSpace13proceed_tradeEv+0x5b8>
 8530dfc:	b8 01 00 00 00       	mov    $0x1,%eax
 8530e01:	89 c2                	mov    %eax,%edx
 8530e03:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530e06:	8b 45 08             	mov    0x8(%ebp),%eax
 8530e09:	83 c2 08             	add    $0x8,%edx
 8530e0c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530e0f:	85 c0                	test   %eax,%eax
 8530e11:	74 1f                	je     8530e32 <_ZN11CTradeSpace13proceed_tradeEv+0x5b8>
 8530e13:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530e16:	8b 45 08             	mov    0x8(%ebp),%eax
 8530e19:	83 c2 08             	add    $0x8,%edx
 8530e1c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530e1f:	89 04 24             	mov    %eax,(%esp)
 8530e22:	e8 61 93 c4 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8530e27:	85 c0                	test   %eax,%eax
 8530e29:	75 07                	jne    8530e32 <_ZN11CTradeSpace13proceed_tradeEv+0x5b8>
 8530e2b:	b8 01 00 00 00       	mov    $0x1,%eax
 8530e30:	eb 05                	jmp    8530e37 <_ZN11CTradeSpace13proceed_tradeEv+0x5bd>
 8530e32:	b8 00 00 00 00       	mov    $0x0,%eax
 8530e37:	84 c0                	test   %al,%al
 8530e39:	0f 84 5b 02 00 00    	je     853109a <_ZN11CTradeSpace13proceed_tradeEv+0x820>
 8530e3f:	b8 01 00 00 00       	mov    $0x1,%eax
 8530e44:	89 c2                	mov    %eax,%edx
 8530e46:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8530e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8530e4c:	83 c2 08             	add    $0x8,%edx
 8530e4f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530e52:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8530e55:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8530e58:	8b 45 08             	mov    0x8(%ebp),%eax
 8530e5b:	83 c2 08             	add    $0x8,%edx
 8530e5e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8530e61:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8530e64:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8530e69:	c7 44 24 08 51 0c 00 	movl   $0xc51,0x8(%esp)
 8530e70:	00 
 8530e71:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 8530e78:	08 
 8530e79:	89 04 24             	mov    %eax,(%esp)
 8530e7c:	e8 05 ec d5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8530e81:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8530e88:	00 
 8530e89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530e8d:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8530e93:	89 04 24             	mov    %eax,(%esp)
 8530e96:	e8 8b 7d b9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8530e9b:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8530ea1:	89 04 24             	mov    %eax,(%esp)
 8530ea4:	e8 9d 7d b9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8530ea9:	c7 44 24 04 a1 00 00 	movl   $0xa1,0x4(%esp)
 8530eb0:	00 
 8530eb1:	89 04 24             	mov    %eax,(%esp)
 8530eb4:	e8 9d 7d b9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8530eb9:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8530ebf:	89 04 24             	mov    %eax,(%esp)
 8530ec2:	e8 7f 7d b9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8530ec7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8530ece:	ff 
 8530ecf:	89 04 24             	mov    %eax,(%esp)
 8530ed2:	e8 7f 7d b9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8530ed7:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8530edd:	89 04 24             	mov    %eax,(%esp)
 8530ee0:	e8 69 7d b9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8530ee5:	89 04 24             	mov    %eax,(%esp)
 8530ee8:	e8 b3 12 00 00       	call   85321a0 <_ZN12CStreamGuard11GetInBufferI28SIG_SAVE_GOLD_ZERO_TRADE_LOGEEPT_v>
 8530eed:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8530ef0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8530ef3:	89 04 24             	mov    %eax,(%esp)
 8530ef6:	e8 73 94 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530efb:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8530efe:	89 02                	mov    %eax,(%edx)
 8530f00:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8530f03:	05 e0 00 00 00       	add    $0xe0,%eax
 8530f08:	89 04 24             	mov    %eax,(%esp)
 8530f0b:	e8 fc 5d d0 ff       	call   8236d0c <_ZN8CNetworkILi4096ELi450000EE10get_str_ipEv>
 8530f10:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8530f13:	83 c2 72             	add    $0x72,%edx
 8530f16:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8530f1d:	00 
 8530f1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530f22:	89 14 24             	mov    %edx,(%esp)
 8530f25:	e8 a6 c9 b4 ff       	call   807d8d0 <strncpy@plt>
 8530f2a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8530f2d:	8d 90 86 00 00 00    	lea    0x86(%eax),%edx
 8530f33:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8530f36:	05 e0 00 00 00       	add    $0xe0,%eax
 8530f3b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8530f42:	00 
 8530f43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8530f47:	89 04 24             	mov    %eax,(%esp)
 8530f4a:	e8 df 18 c3 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8530f4f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8530f52:	05 e0 00 00 00       	add    $0xe0,%eax
 8530f57:	89 04 24             	mov    %eax,(%esp)
 8530f5a:	e8 81 5e d0 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 8530f5f:	89 c2                	mov    %eax,%edx
 8530f61:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8530f64:	88 90 9a 00 00 00    	mov    %dl,0x9a(%eax)
 8530f6a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8530f6d:	89 04 24             	mov    %eax,(%esp)
 8530f70:	e8 f9 93 ba ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8530f75:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8530f78:	89 42 04             	mov    %eax,0x4(%edx)
 8530f7b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8530f7e:	05 e0 00 00 00       	add    $0xe0,%eax
 8530f83:	89 04 24             	mov    %eax,(%esp)
 8530f86:	e8 81 5d d0 ff       	call   8236d0c <_ZN8CNetworkILi4096ELi450000EE10get_str_ipEv>
 8530f8b:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8530f8e:	83 c2 08             	add    $0x8,%edx
 8530f91:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8530f98:	00 
 8530f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8530f9d:	89 14 24             	mov    %edx,(%esp)
 8530fa0:	e8 2b c9 b4 ff       	call   807d8d0 <strncpy@plt>
 8530fa5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8530fa8:	8d 50 1c             	lea    0x1c(%eax),%edx
 8530fab:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8530fae:	05 e0 00 00 00       	add    $0xe0,%eax
 8530fb3:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8530fba:	00 
 8530fbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8530fbf:	89 04 24             	mov    %eax,(%esp)
 8530fc2:	e8 67 18 c3 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8530fc7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8530fca:	05 e0 00 00 00       	add    $0xe0,%eax
 8530fcf:	89 04 24             	mov    %eax,(%esp)
 8530fd2:	e8 09 5e d0 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 8530fd7:	89 c2                	mov    %eax,%edx
 8530fd9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8530fdc:	88 50 30             	mov    %dl,0x30(%eax)
 8530fdf:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8530fe2:	05 e0 00 00 00       	add    $0xe0,%eax
 8530fe7:	89 04 24             	mov    %eax,(%esp)
 8530fea:	e8 61 70 d5 ff       	call   8288050 <_ZNK8CNetworkILi4096ELi450000EE12get_mac_addrEv>
 8530fef:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8530ff2:	81 c2 9b 00 00 00    	add    $0x9b,%edx
 8530ff8:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8530fff:	00 
 8531000:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531004:	89 14 24             	mov    %edx,(%esp)
 8531007:	e8 c4 c8 b4 ff       	call   807d8d0 <strncpy@plt>
 853100c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 853100f:	05 e0 00 00 00       	add    $0xe0,%eax
 8531014:	89 04 24             	mov    %eax,(%esp)
 8531017:	e8 34 70 d5 ff       	call   8288050 <_ZNK8CNetworkILi4096ELi450000EE12get_mac_addrEv>
 853101c:	8b 55 b8             	mov    -0x48(%ebp),%edx
 853101f:	83 c2 31             	add    $0x31,%edx
 8531022:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8531029:	00 
 853102a:	89 44 24 04          	mov    %eax,0x4(%esp)
 853102e:	89 14 24             	mov    %edx,(%esp)
 8531031:	e8 9a c8 b4 ff       	call   807d8d0 <strncpy@plt>
 8531036:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531039:	8b 45 08             	mov    0x8(%ebp),%eax
 853103c:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 8531042:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531045:	89 c2                	mov    %eax,%edx
 8531047:	8b 45 b8             	mov    -0x48(%ebp),%eax
 853104a:	89 90 dc 00 00 00    	mov    %edx,0xdc(%eax)
 8531050:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8531055:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 853105b:	89 54 24 08          	mov    %edx,0x8(%esp)
 853105f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8531066:	00 
 8531067:	89 04 24             	mov    %eax,(%esp)
 853106a:	e8 6f ff 03 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 853106f:	eb 1b                	jmp    853108c <_ZN11CTradeSpace13proceed_tradeEv+0x812>
 8531071:	89 d3                	mov    %edx,%ebx
 8531073:	89 c6                	mov    %eax,%esi
 8531075:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 853107b:	89 04 24             	mov    %eax,(%esp)
 853107e:	e8 4f b8 0e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8531083:	89 f0                	mov    %esi,%eax
 8531085:	89 da                	mov    %ebx,%edx
 8531087:	e9 51 0e 00 00       	jmp    8531edd <_ZN11CTradeSpace13proceed_tradeEv+0x1663>
 853108c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8531092:	89 04 24             	mov    %eax,(%esp)
 8531095:	e8 38 b8 0e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 853109a:	8b 55 9c             	mov    -0x64(%ebp),%edx
 853109d:	8b 45 08             	mov    0x8(%ebp),%eax
 85310a0:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 85310a6:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85310ad:	8b 55 9c             	mov    -0x64(%ebp),%edx
 85310b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85310b3:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 85310b9:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85310bc:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85310bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85310c2:	83 c1 08             	add    $0x8,%ecx
 85310c5:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 85310c8:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 85310ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 85310d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85310d9:	00 
 85310da:	89 04 24             	mov    %eax,(%esp)
 85310dd:	e8 06 90 f8 ff       	call   84ba0e8 <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii>
 85310e2:	8b 55 9c             	mov    -0x64(%ebp),%edx
 85310e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85310e8:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 85310ee:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85310f1:	b8 01 00 00 00       	mov    $0x1,%eax
 85310f6:	89 c1                	mov    %eax,%ecx
 85310f8:	2b 4d 9c             	sub    -0x64(%ebp),%ecx
 85310fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85310fe:	83 c1 08             	add    $0x8,%ecx
 8531101:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 8531104:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 853110a:	89 54 24 08          	mov    %edx,0x8(%esp)
 853110e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8531115:	00 
 8531116:	89 04 24             	mov    %eax,(%esp)
 8531119:	e8 10 90 f8 ff       	call   84ba12e <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii>
 853111e:	eb 24                	jmp    8531144 <_ZN11CTradeSpace13proceed_tradeEv+0x8ca>
 8531120:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531123:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8531129:	89 d0                	mov    %edx,%eax
 853112b:	01 c0                	add    %eax,%eax
 853112d:	01 d0                	add    %edx,%eax
 853112f:	c1 e0 02             	shl    $0x2,%eax
 8531132:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8531135:	8b 45 98             	mov    -0x68(%ebp),%eax
 8531138:	89 44 24 04          	mov    %eax,0x4(%esp)
 853113c:	89 14 24             	mov    %edx,(%esp)
 853113f:	e8 60 8d ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8531144:	c7 45 bc 03 00 00 00 	movl   $0x3,-0x44(%ebp)
 853114b:	e9 f5 0a 00 00       	jmp    8531c45 <_ZN11CTradeSpace13proceed_tradeEv+0x13cb>
 8531150:	b8 01 00 00 00       	mov    $0x1,%eax
 8531155:	89 c2                	mov    %eax,%edx
 8531157:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853115a:	8b 45 08             	mov    0x8(%ebp),%eax
 853115d:	83 c2 08             	add    $0x8,%edx
 8531160:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531163:	85 c0                	test   %eax,%eax
 8531165:	0f 84 d6 0a 00 00    	je     8531c41 <_ZN11CTradeSpace13proceed_tradeEv+0x13c7>
 853116b:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 853116e:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531171:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8531174:	89 d0                	mov    %edx,%eax
 8531176:	c1 e0 03             	shl    $0x3,%eax
 8531179:	01 d0                	add    %edx,%eax
 853117b:	c1 e0 03             	shl    $0x3,%eax
 853117e:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8531184:	01 d0                	add    %edx,%eax
 8531186:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531189:	83 c0 30             	add    $0x30,%eax
 853118c:	8b 40 0b             	mov    0xb(%eax),%eax
 853118f:	85 c0                	test   %eax,%eax
 8531191:	0f 84 aa 0a 00 00    	je     8531c41 <_ZN11CTradeSpace13proceed_tradeEv+0x13c7>
 8531197:	e8 f2 af b9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 853119c:	89 04 24             	mov    %eax,(%esp)
 853119f:	e8 84 7e d6 ff       	call   8299028 <_ZN12CGameManager29GetAuctionAveragePriceManagerEv>
 85311a4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85311a7:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 85311ab:	0f 84 8a 00 00 00    	je     853123b <_ZN11CTradeSpace13proceed_tradeEv+0x9c1>
 85311b1:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85311b4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85311b7:	89 d0                	mov    %edx,%eax
 85311b9:	c1 e0 03             	shl    $0x3,%eax
 85311bc:	01 d0                	add    %edx,%eax
 85311be:	c1 e0 03             	shl    $0x3,%eax
 85311c1:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 85311c7:	01 d0                	add    %edx,%eax
 85311c9:	83 c0 30             	add    $0x30,%eax
 85311cc:	03 45 08             	add    0x8(%ebp),%eax
 85311cf:	83 c0 09             	add    $0x9,%eax
 85311d2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85311d5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85311d8:	89 04 24             	mov    %eax,(%esp)
 85311db:	e8 8c 3e bc ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85311e0:	0f b6 d0             	movzbl %al,%edx
 85311e3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85311e6:	8b 40 02             	mov    0x2(%eax),%eax
 85311e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85311ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85311f1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85311f4:	89 04 24             	mov    %eax,(%esp)
 85311f7:	e8 ac 4b dc ff       	call   82f5da8 <_ZNK20CAuctionAveragePrice15GetAveragePriceEih>
 85311fc:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85311ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8531202:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8531206:	3c 02                	cmp    $0x2,%al
 8531208:	74 0b                	je     8531215 <_ZN11CTradeSpace13proceed_tradeEv+0x99b>
 853120a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 853120d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8531211:	3c 03                	cmp    $0x3,%al
 8531213:	75 0f                	jne    8531224 <_ZN11CTradeSpace13proceed_tradeEv+0x9aa>
 8531215:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8531218:	8b 40 07             	mov    0x7(%eax),%eax
 853121b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 853121e:	0f af c2             	imul   %edx,%eax
 8531221:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8531224:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8531227:	8b 55 9c             	mov    -0x64(%ebp),%edx
 853122a:	8b 94 95 70 ff ff ff 	mov    -0x90(%ebp,%edx,4),%edx
 8531231:	03 55 c8             	add    -0x38(%ebp),%edx
 8531234:	89 94 85 70 ff ff ff 	mov    %edx,-0x90(%ebp,%eax,4)
 853123b:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 853123e:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531241:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8531244:	89 d0                	mov    %edx,%eax
 8531246:	c1 e0 03             	shl    $0x3,%eax
 8531249:	01 d0                	add    %edx,%eax
 853124b:	c1 e0 03             	shl    $0x3,%eax
 853124e:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8531254:	01 d0                	add    %edx,%eax
 8531256:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531259:	83 c0 30             	add    $0x30,%eax
 853125c:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8531260:	3c 08                	cmp    $0x8,%al
 8531262:	0f 85 89 02 00 00    	jne    85314f1 <_ZN11CTradeSpace13proceed_tradeEv+0xc77>
 8531268:	8b 75 9c             	mov    -0x64(%ebp),%esi
 853126b:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 853126e:	b8 01 00 00 00       	mov    $0x1,%eax
 8531273:	89 c2                	mov    %eax,%edx
 8531275:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8531278:	8b 45 08             	mov    0x8(%ebp),%eax
 853127b:	83 c2 08             	add    $0x8,%edx
 853127e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531281:	89 04 24             	mov    %eax,(%esp)
 8531284:	e8 05 90 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8531289:	89 c2                	mov    %eax,%edx
 853128b:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 8531292:	00 
 8531293:	c7 44 24 44 01 00 00 	movl   $0x1,0x44(%esp)
 853129a:	00 
 853129b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853129e:	89 d8                	mov    %ebx,%eax
 85312a0:	c1 e0 03             	shl    $0x3,%eax
 85312a3:	01 d8                	add    %ebx,%eax
 85312a5:	c1 e0 03             	shl    $0x3,%eax
 85312a8:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 85312ae:	01 d8                	add    %ebx,%eax
 85312b0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85312b3:	83 c0 30             	add    $0x30,%eax
 85312b6:	8b 48 09             	mov    0x9(%eax),%ecx
 85312b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85312bd:	8b 48 0d             	mov    0xd(%eax),%ecx
 85312c0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85312c4:	8b 48 11             	mov    0x11(%eax),%ecx
 85312c7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85312cb:	8b 48 15             	mov    0x15(%eax),%ecx
 85312ce:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85312d2:	8b 48 19             	mov    0x19(%eax),%ecx
 85312d5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85312d9:	8b 48 1d             	mov    0x1d(%eax),%ecx
 85312dc:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85312e0:	8b 48 21             	mov    0x21(%eax),%ecx
 85312e3:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85312e7:	8b 48 25             	mov    0x25(%eax),%ecx
 85312ea:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85312ee:	8b 48 29             	mov    0x29(%eax),%ecx
 85312f1:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85312f5:	8b 48 2d             	mov    0x2d(%eax),%ecx
 85312f8:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85312fc:	8b 48 31             	mov    0x31(%eax),%ecx
 85312ff:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 8531303:	8b 48 35             	mov    0x35(%eax),%ecx
 8531306:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 853130a:	8b 48 39             	mov    0x39(%eax),%ecx
 853130d:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8531311:	8b 48 3d             	mov    0x3d(%eax),%ecx
 8531314:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8531318:	8b 48 41             	mov    0x41(%eax),%ecx
 853131b:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 853131f:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 8531323:	88 44 24 40          	mov    %al,0x40(%esp)
 8531327:	89 14 24             	mov    %edx,(%esp)
 853132a:	e8 4d 23 fd ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 853132f:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8531335:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 853133b:	85 c0                	test   %eax,%eax
 853133d:	0f 88 05 07 00 00    	js     8531a48 <_ZN11CTradeSpace13proceed_tradeEv+0x11ce>
 8531343:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531346:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531349:	89 d0                	mov    %edx,%eax
 853134b:	c1 e0 03             	shl    $0x3,%eax
 853134e:	01 d0                	add    %edx,%eax
 8531350:	c1 e0 03             	shl    $0x3,%eax
 8531353:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531359:	01 d0                	add    %edx,%eax
 853135b:	83 c0 30             	add    $0x30,%eax
 853135e:	03 45 08             	add    0x8(%ebp),%eax
 8531361:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8531364:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 853136a:	0f b6 d8             	movzbl %al,%ebx
 853136d:	b8 01 00 00 00       	mov    $0x1,%eax
 8531372:	89 c2                	mov    %eax,%edx
 8531374:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8531377:	8b 45 08             	mov    0x8(%ebp),%eax
 853137a:	83 c2 08             	add    $0x8,%edx
 853137d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531380:	89 04 24             	mov    %eax,(%esp)
 8531383:	e8 c6 a8 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8531388:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853138b:	8b 4a 04             	mov    0x4(%edx),%ecx
 853138e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8531391:	8b 52 10             	mov    0x10(%edx),%edx
 8531394:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8531398:	89 44 24 0c          	mov    %eax,0xc(%esp)
 853139c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85313a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85313a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85313a7:	89 04 24             	mov    %eax,(%esp)
 85313aa:	e8 9b f4 ff ff       	call   853084a <_ZN11CTradeSpace26_SaveAvatarItemOwnerChangeEjjjh>
 85313af:	b8 01 00 00 00       	mov    $0x1,%eax
 85313b4:	89 c2                	mov    %eax,%edx
 85313b6:	2b 55 9c             	sub    -0x64(%ebp),%edx
 85313b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85313bc:	83 c2 08             	add    $0x8,%edx
 85313bf:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85313c2:	89 04 24             	mov    %eax,(%esp)
 85313c5:	e8 84 a8 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85313ca:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85313cd:	8b 4a 04             	mov    0x4(%edx),%ecx
 85313d0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85313d3:	8b 52 10             	mov    0x10(%edx),%edx
 85313d6:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 85313dd:	00 
 85313de:	89 44 24 08          	mov    %eax,0x8(%esp)
 85313e2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85313e6:	89 14 24             	mov    %edx,(%esp)
 85313e9:	e8 2c 3d f1 ff       	call   844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>
 85313ee:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85313f1:	8b 58 10             	mov    0x10(%eax),%ebx
 85313f4:	8b 55 9c             	mov    -0x64(%ebp),%edx
 85313f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85313fa:	83 c2 08             	add    $0x8,%edx
 85313fd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531400:	89 04 24             	mov    %eax,(%esp)
 8531403:	e8 86 8e ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8531408:	89 04 24             	mov    %eax,(%esp)
 853140b:	e8 5c f8 bd ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 8531410:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8531414:	89 04 24             	mov    %eax,(%esp)
 8531417:	e8 26 86 dc ff       	call   82f9a42 <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi>
 853141c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 853141f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8531422:	8b 58 10             	mov    0x10(%eax),%ebx
 8531425:	b8 01 00 00 00       	mov    $0x1,%eax
 853142a:	89 c2                	mov    %eax,%edx
 853142c:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853142f:	8b 45 08             	mov    0x8(%ebp),%eax
 8531432:	83 c2 08             	add    $0x8,%edx
 8531435:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531438:	89 04 24             	mov    %eax,(%esp)
 853143b:	e8 4e 8e ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8531440:	89 04 24             	mov    %eax,(%esp)
 8531443:	e8 24 f8 bd ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 8531448:	8b 55 d0             	mov    -0x30(%ebp),%edx
 853144b:	89 54 24 08          	mov    %edx,0x8(%esp)
 853144f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8531453:	89 04 24             	mov    %eax,(%esp)
 8531456:	e8 7b 85 dc ff       	call   82f99d6 <_ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE>
 853145b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 853145e:	89 04 24             	mov    %eax,(%esp)
 8531461:	e8 9c bd cf ff       	call   822d202 <_ZNK8WongWork11Avatar_Item14GetIPGAgencyNoEv>
 8531466:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8531469:	8b 4a 10             	mov    0x10(%edx),%ecx
 853146c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853146f:	8b 52 0b             	mov    0xb(%edx),%edx
 8531472:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531475:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8531478:	83 c6 08             	add    $0x8,%esi
 853147b:	8b 1c b3             	mov    (%ebx,%esi,4),%ebx
 853147e:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 8531484:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 853148b:	00 
 853148c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8531490:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8531494:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531498:	89 1c 24             	mov    %ebx,(%esp)
 853149b:	e8 5a 32 15 00       	call   86846fa <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason>
 85314a0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85314a3:	89 04 24             	mov    %eax,(%esp)
 85314a6:	e8 57 bd cf ff       	call   822d202 <_ZNK8WongWork11Avatar_Item14GetIPGAgencyNoEv>
 85314ab:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85314ae:	8b 4a 10             	mov    0x10(%edx),%ecx
 85314b1:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85314b4:	8b 52 0b             	mov    0xb(%edx),%edx
 85314b7:	bb 01 00 00 00       	mov    $0x1,%ebx
 85314bc:	89 de                	mov    %ebx,%esi
 85314be:	2b 75 9c             	sub    -0x64(%ebp),%esi
 85314c1:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85314c4:	83 c6 08             	add    $0x8,%esi
 85314c7:	8b 1c b3             	mov    (%ebx,%esi,4),%ebx
 85314ca:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 85314d0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 85314d7:	00 
 85314d8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85314dc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85314e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85314e4:	89 1c 24             	mov    %ebx,(%esp)
 85314e7:	e8 66 31 15 00       	call   8684652 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason>
 85314ec:	e9 57 05 00 00       	jmp    8531a48 <_ZN11CTradeSpace13proceed_tradeEv+0x11ce>
 85314f1:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 85314f4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85314f7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85314fa:	89 d0                	mov    %edx,%eax
 85314fc:	c1 e0 03             	shl    $0x3,%eax
 85314ff:	01 d0                	add    %edx,%eax
 8531501:	c1 e0 03             	shl    $0x3,%eax
 8531504:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 853150a:	01 d0                	add    %edx,%eax
 853150c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 853150f:	83 c0 30             	add    $0x30,%eax
 8531512:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8531516:	3c 07                	cmp    $0x7,%al
 8531518:	0f 85 65 03 00 00    	jne    8531883 <_ZN11CTradeSpace13proceed_tradeEv+0x1009>
 853151e:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531521:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 8531524:	b8 01 00 00 00       	mov    $0x1,%eax
 8531529:	89 c2                	mov    %eax,%edx
 853152b:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853152e:	8b 45 08             	mov    0x8(%ebp),%eax
 8531531:	83 c2 08             	add    $0x8,%edx
 8531534:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531537:	89 04 24             	mov    %eax,(%esp)
 853153a:	e8 4f 8d ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 853153f:	89 c2                	mov    %eax,%edx
 8531541:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8531548:	00 
 8531549:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 8531550:	00 
 8531551:	c7 44 24 44 1a 00 00 	movl   $0x1a,0x44(%esp)
 8531558:	00 
 8531559:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853155c:	89 d8                	mov    %ebx,%eax
 853155e:	c1 e0 03             	shl    $0x3,%eax
 8531561:	01 d8                	add    %ebx,%eax
 8531563:	c1 e0 03             	shl    $0x3,%eax
 8531566:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 853156c:	01 d8                	add    %ebx,%eax
 853156e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531571:	83 c0 30             	add    $0x30,%eax
 8531574:	8b 48 09             	mov    0x9(%eax),%ecx
 8531577:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 853157b:	8b 48 0d             	mov    0xd(%eax),%ecx
 853157e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8531582:	8b 48 11             	mov    0x11(%eax),%ecx
 8531585:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8531589:	8b 48 15             	mov    0x15(%eax),%ecx
 853158c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8531590:	8b 48 19             	mov    0x19(%eax),%ecx
 8531593:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8531597:	8b 48 1d             	mov    0x1d(%eax),%ecx
 853159a:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 853159e:	8b 48 21             	mov    0x21(%eax),%ecx
 85315a1:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85315a5:	8b 48 25             	mov    0x25(%eax),%ecx
 85315a8:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85315ac:	8b 48 29             	mov    0x29(%eax),%ecx
 85315af:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85315b3:	8b 48 2d             	mov    0x2d(%eax),%ecx
 85315b6:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85315ba:	8b 48 31             	mov    0x31(%eax),%ecx
 85315bd:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85315c1:	8b 48 35             	mov    0x35(%eax),%ecx
 85315c4:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85315c8:	8b 48 39             	mov    0x39(%eax),%ecx
 85315cb:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85315cf:	8b 48 3d             	mov    0x3d(%eax),%ecx
 85315d2:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85315d6:	8b 48 41             	mov    0x41(%eax),%ecx
 85315d9:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85315dd:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 85315e1:	88 44 24 40          	mov    %al,0x40(%esp)
 85315e5:	89 14 24             	mov    %edx,(%esp)
 85315e8:	e8 99 17 fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85315ed:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 85315f3:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 85315f9:	85 c0                	test   %eax,%eax
 85315fb:	0f 88 47 04 00 00    	js     8531a48 <_ZN11CTradeSpace13proceed_tradeEv+0x11ce>
 8531601:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8531604:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531607:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853160a:	89 d0                	mov    %edx,%eax
 853160c:	c1 e0 03             	shl    $0x3,%eax
 853160f:	01 d0                	add    %edx,%eax
 8531611:	c1 e0 03             	shl    $0x3,%eax
 8531614:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 853161a:	01 d0                	add    %edx,%eax
 853161c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 853161f:	83 c0 30             	add    $0x30,%eax
 8531622:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8531626:	3c 05                	cmp    $0x5,%al
 8531628:	75 5e                	jne    8531688 <_ZN11CTradeSpace13proceed_tradeEv+0xe0e>
 853162a:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 853162d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531630:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8531633:	89 d0                	mov    %edx,%eax
 8531635:	c1 e0 03             	shl    $0x3,%eax
 8531638:	01 d0                	add    %edx,%eax
 853163a:	c1 e0 03             	shl    $0x3,%eax
 853163d:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 8531643:	01 d0                	add    %edx,%eax
 8531645:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531648:	83 c0 40             	add    $0x40,%eax
 853164b:	8b 18                	mov    (%eax),%ebx
 853164d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531650:	8b 45 08             	mov    0x8(%ebp),%eax
 8531653:	83 c2 08             	add    $0x8,%edx
 8531656:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531659:	89 04 24             	mov    %eax,(%esp)
 853165c:	e8 2d 8c ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8531661:	89 04 24             	mov    %eax,(%esp)
 8531664:	e8 ff be ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8531669:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 853166d:	89 04 24             	mov    %eax,(%esp)
 8531670:	e8 1d 7c e0 ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 8531675:	85 c0                	test   %eax,%eax
 8531677:	0f 94 c0             	sete   %al
 853167a:	84 c0                	test   %al,%al
 853167c:	74 0a                	je     8531688 <_ZN11CTradeSpace13proceed_tradeEv+0xe0e>
 853167e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8531683:	e9 6d 08 00 00       	jmp    8531ef5 <_ZN11CTradeSpace13proceed_tradeEv+0x167b>
 8531688:	8b 55 9c             	mov    -0x64(%ebp),%edx
 853168b:	8b 45 08             	mov    0x8(%ebp),%eax
 853168e:	83 c2 08             	add    $0x8,%edx
 8531691:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531694:	89 04 24             	mov    %eax,(%esp)
 8531697:	e8 96 ed be ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 853169c:	8b 00                	mov    (%eax),%eax
 853169e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85316a1:	8b 55 9c             	mov    -0x64(%ebp),%edx
 85316a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85316a7:	83 c2 08             	add    $0x8,%edx
 85316aa:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85316ad:	89 04 24             	mov    %eax,(%esp)
 85316b0:	e8 d9 8b ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85316b5:	89 04 24             	mov    %eax,(%esp)
 85316b8:	e8 4b 5d c8 ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 85316bd:	89 04 24             	mov    %eax,(%esp)
 85316c0:	e8 f9 08 00 00       	call   8531fbe <_ZNK13user_creature12CCreatureMgr19GetCreatureItemSizeEv>
 85316c5:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85316c8:	8b 55 08             	mov    0x8(%ebp),%edx
 85316cb:	81 c1 d8 03 00 00    	add    $0x3d8,%ecx
 85316d1:	8b 54 8a 08          	mov    0x8(%edx,%ecx,4),%edx
 85316d5:	01 d0                	add    %edx,%eax
 85316d7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85316da:	8b 9d 54 ff ff ff    	mov    -0xac(%ebp),%ebx
 85316e0:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85316e3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85316e6:	89 d0                	mov    %edx,%eax
 85316e8:	c1 e0 03             	shl    $0x3,%eax
 85316eb:	01 d0                	add    %edx,%eax
 85316ed:	c1 e0 03             	shl    $0x3,%eax
 85316f0:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 85316f6:	01 d0                	add    %edx,%eax
 85316f8:	83 c0 30             	add    $0x30,%eax
 85316fb:	03 45 08             	add    0x8(%ebp),%eax
 85316fe:	8d 70 09             	lea    0x9(%eax),%esi
 8531701:	b8 01 00 00 00       	mov    $0x1,%eax
 8531706:	89 c2                	mov    %eax,%edx
 8531708:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853170b:	8b 45 08             	mov    0x8(%ebp),%eax
 853170e:	83 c2 08             	add    $0x8,%edx
 8531711:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531714:	89 04 24             	mov    %eax,(%esp)
 8531717:	e8 72 8b ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 853171c:	89 04 24             	mov    %eax,(%esp)
 853171f:	e8 44 be ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8531724:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8531727:	89 54 24 14          	mov    %edx,0x14(%esp)
 853172b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 853172e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8531732:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 8531739:	00 
 853173a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 853173e:	89 74 24 04          	mov    %esi,0x4(%esp)
 8531742:	89 04 24             	mov    %eax,(%esp)
 8531745:	e8 ea 95 e0 ff       	call   833ad34 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii>
 853174a:	b8 01 00 00 00       	mov    $0x1,%eax
 853174f:	2b 45 9c             	sub    -0x64(%ebp),%eax
 8531752:	8b 55 08             	mov    0x8(%ebp),%edx
 8531755:	8d 88 d8 03 00 00    	lea    0x3d8(%eax),%ecx
 853175b:	8b 54 8a 08          	mov    0x8(%edx,%ecx,4),%edx
 853175f:	8d 4a 01             	lea    0x1(%edx),%ecx
 8531762:	8b 55 08             	mov    0x8(%ebp),%edx
 8531765:	05 d8 03 00 00       	add    $0x3d8,%eax
 853176a:	89 4c 82 08          	mov    %ecx,0x8(%edx,%eax,4)
 853176e:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531771:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531774:	89 d0                	mov    %edx,%eax
 8531776:	c1 e0 03             	shl    $0x3,%eax
 8531779:	01 d0                	add    %edx,%eax
 853177b:	c1 e0 03             	shl    $0x3,%eax
 853177e:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531784:	01 d0                	add    %edx,%eax
 8531786:	83 c0 30             	add    $0x30,%eax
 8531789:	03 45 08             	add    0x8(%ebp),%eax
 853178c:	83 c0 09             	add    $0x9,%eax
 853178f:	89 04 24             	mov    %eax,(%esp)
 8531792:	e8 a3 60 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8531797:	89 c3                	mov    %eax,%ebx
 8531799:	8b 55 9c             	mov    -0x64(%ebp),%edx
 853179c:	8b 45 08             	mov    0x8(%ebp),%eax
 853179f:	83 c2 08             	add    $0x8,%edx
 85317a2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85317a5:	89 04 24             	mov    %eax,(%esp)
 85317a8:	e8 e1 8a ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85317ad:	89 04 24             	mov    %eax,(%esp)
 85317b0:	e8 b3 bd ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 85317b5:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 85317bc:	00 
 85317bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85317c1:	89 04 24             	mov    %eax,(%esp)
 85317c4:	e8 3d 9e e0 ff       	call   833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>
 85317c9:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 85317cc:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85317cf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85317d2:	89 d0                	mov    %edx,%eax
 85317d4:	c1 e0 03             	shl    $0x3,%eax
 85317d7:	01 d0                	add    %edx,%eax
 85317d9:	c1 e0 03             	shl    $0x3,%eax
 85317dc:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 85317e2:	01 d0                	add    %edx,%eax
 85317e4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85317e7:	83 c0 30             	add    $0x30,%eax
 85317ea:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 85317ee:	0f b6 d8             	movzbl %al,%ebx
 85317f1:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85317f4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85317f7:	89 d0                	mov    %edx,%eax
 85317f9:	c1 e0 03             	shl    $0x3,%eax
 85317fc:	01 d0                	add    %edx,%eax
 85317fe:	c1 e0 03             	shl    $0x3,%eax
 8531801:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531807:	01 d0                	add    %edx,%eax
 8531809:	83 c0 30             	add    $0x30,%eax
 853180c:	03 45 08             	add    0x8(%ebp),%eax
 853180f:	83 c0 09             	add    $0x9,%eax
 8531812:	89 04 24             	mov    %eax,(%esp)
 8531815:	e8 20 60 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 853181a:	89 c1                	mov    %eax,%ecx
 853181c:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 853181f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531822:	8b 75 08             	mov    0x8(%ebp),%esi
 8531825:	89 d0                	mov    %edx,%eax
 8531827:	c1 e0 03             	shl    $0x3,%eax
 853182a:	01 d0                	add    %edx,%eax
 853182c:	c1 e0 03             	shl    $0x3,%eax
 853182f:	69 d7 98 07 00 00    	imul   $0x798,%edi,%edx
 8531835:	01 d0                	add    %edx,%eax
 8531837:	8d 04 06             	lea    (%esi,%eax,1),%eax
 853183a:	83 c0 30             	add    $0x30,%eax
 853183d:	8b 40 0b             	mov    0xb(%eax),%eax
 8531840:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531843:	8b 55 08             	mov    0x8(%ebp),%edx
 8531846:	83 c6 08             	add    $0x8,%esi
 8531849:	8b 14 b2             	mov    (%edx,%esi,4),%edx
 853184c:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8531852:	c7 44 24 18 14 00 00 	movl   $0x14,0x18(%esp)
 8531859:	00 
 853185a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 853185e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8531865:	00 
 8531866:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 853186a:	89 44 24 08          	mov    %eax,0x8(%esp)
 853186e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8531875:	00 
 8531876:	89 14 24             	mov    %edx,(%esp)
 8531879:	e8 c2 36 15 00       	call   8684f40 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason>
 853187e:	e9 c5 01 00 00       	jmp    8531a48 <_ZN11CTradeSpace13proceed_tradeEv+0x11ce>
 8531883:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531886:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531889:	89 d0                	mov    %edx,%eax
 853188b:	c1 e0 03             	shl    $0x3,%eax
 853188e:	01 d0                	add    %edx,%eax
 8531890:	c1 e0 03             	shl    $0x3,%eax
 8531893:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531899:	01 d0                	add    %edx,%eax
 853189b:	83 c0 30             	add    $0x30,%eax
 853189e:	03 45 08             	add    0x8(%ebp),%eax
 85318a1:	83 c0 09             	add    $0x9,%eax
 85318a4:	89 04 24             	mov    %eax,(%esp)
 85318a7:	e8 30 e9 be ff       	call   81201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>
 85318ac:	84 c0                	test   %al,%al
 85318ae:	0f 84 8a 00 00 00    	je     853193e <_ZN11CTradeSpace13proceed_tradeEv+0x10c4>
 85318b4:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 85318b7:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85318ba:	89 d0                	mov    %edx,%eax
 85318bc:	c1 e0 03             	shl    $0x3,%eax
 85318bf:	01 d0                	add    %edx,%eax
 85318c1:	c1 e0 03             	shl    $0x3,%eax
 85318c4:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 85318ca:	01 d0                	add    %edx,%eax
 85318cc:	83 c0 30             	add    $0x30,%eax
 85318cf:	03 45 08             	add    0x8(%ebp),%eax
 85318d2:	83 c0 09             	add    $0x9,%eax
 85318d5:	89 04 24             	mov    %eax,(%esp)
 85318d8:	e8 5f e8 be ff       	call   812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>
 85318dd:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 85318e0:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85318e3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85318e6:	89 d0                	mov    %edx,%eax
 85318e8:	c1 e0 03             	shl    $0x3,%eax
 85318eb:	01 d0                	add    %edx,%eax
 85318ed:	c1 e0 03             	shl    $0x3,%eax
 85318f0:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 85318f6:	01 d0                	add    %edx,%eax
 85318f8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85318fb:	83 c0 30             	add    $0x30,%eax
 85318fe:	8b 40 0b             	mov    0xb(%eax),%eax
 8531901:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531904:	8b 55 08             	mov    0x8(%ebp),%edx
 8531907:	83 c1 08             	add    $0x8,%ecx
 853190a:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 853190d:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8531913:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 853191a:	00 
 853191b:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8531922:	ff 
 8531923:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8531927:	8b 45 bc             	mov    -0x44(%ebp),%eax
 853192a:	89 44 24 08          	mov    %eax,0x8(%esp)
 853192e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8531935:	00 
 8531936:	89 14 24             	mov    %edx,(%esp)
 8531939:	e8 16 54 15 00       	call   8686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>
 853193e:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531941:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 8531944:	b8 01 00 00 00       	mov    $0x1,%eax
 8531949:	89 c2                	mov    %eax,%edx
 853194b:	2b 55 9c             	sub    -0x64(%ebp),%edx
 853194e:	8b 45 08             	mov    0x8(%ebp),%eax
 8531951:	83 c2 08             	add    $0x8,%edx
 8531954:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531957:	89 04 24             	mov    %eax,(%esp)
 853195a:	e8 2f 89 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 853195f:	89 c2                	mov    %eax,%edx
 8531961:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8531968:	00 
 8531969:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8531970:	00 
 8531971:	c7 44 24 44 01 00 00 	movl   $0x1,0x44(%esp)
 8531978:	00 
 8531979:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853197c:	89 d8                	mov    %ebx,%eax
 853197e:	c1 e0 03             	shl    $0x3,%eax
 8531981:	01 d8                	add    %ebx,%eax
 8531983:	c1 e0 03             	shl    $0x3,%eax
 8531986:	69 de 98 07 00 00    	imul   $0x798,%esi,%ebx
 853198c:	01 d8                	add    %ebx,%eax
 853198e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531991:	83 c0 30             	add    $0x30,%eax
 8531994:	8b 48 09             	mov    0x9(%eax),%ecx
 8531997:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 853199b:	8b 48 0d             	mov    0xd(%eax),%ecx
 853199e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85319a2:	8b 48 11             	mov    0x11(%eax),%ecx
 85319a5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85319a9:	8b 48 15             	mov    0x15(%eax),%ecx
 85319ac:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85319b0:	8b 48 19             	mov    0x19(%eax),%ecx
 85319b3:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85319b7:	8b 48 1d             	mov    0x1d(%eax),%ecx
 85319ba:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85319be:	8b 48 21             	mov    0x21(%eax),%ecx
 85319c1:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85319c5:	8b 48 25             	mov    0x25(%eax),%ecx
 85319c8:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85319cc:	8b 48 29             	mov    0x29(%eax),%ecx
 85319cf:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85319d3:	8b 48 2d             	mov    0x2d(%eax),%ecx
 85319d6:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85319da:	8b 48 31             	mov    0x31(%eax),%ecx
 85319dd:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85319e1:	8b 48 35             	mov    0x35(%eax),%ecx
 85319e4:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85319e8:	8b 48 39             	mov    0x39(%eax),%ecx
 85319eb:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85319ef:	8b 48 3d             	mov    0x3d(%eax),%ecx
 85319f2:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85319f6:	8b 48 41             	mov    0x41(%eax),%ecx
 85319f9:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85319fd:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 8531a01:	88 44 24 40          	mov    %al,0x40(%esp)
 8531a05:	89 14 24             	mov    %edx,(%esp)
 8531a08:	e8 79 13 fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8531a0d:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8531a13:	b8 01 00 00 00       	mov    $0x1,%eax
 8531a18:	2b 45 9c             	sub    -0x64(%ebp),%eax
 8531a1b:	83 c0 08             	add    $0x8,%eax
 8531a1e:	c1 e0 02             	shl    $0x2,%eax
 8531a21:	03 45 08             	add    0x8(%ebp),%eax
 8531a24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531a28:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8531a2e:	89 04 24             	mov    %eax,(%esp)
 8531a31:	e8 96 07 00 00       	call   85321cc <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEEixERS8_>
 8531a36:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 8531a3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531a40:	89 04 24             	mov    %eax,(%esp)
 8531a43:	e8 de f6 bd ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8531a48:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8531a4e:	85 c0                	test   %eax,%eax
 8531a50:	0f 89 8a 00 00 00    	jns    8531ae0 <_ZN11CTradeSpace13proceed_tradeEv+0x1266>
 8531a56:	b8 01 00 00 00       	mov    $0x1,%eax
 8531a5b:	89 c2                	mov    %eax,%edx
 8531a5d:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8531a60:	8b 45 08             	mov    0x8(%ebp),%eax
 8531a63:	83 c2 08             	add    $0x8,%edx
 8531a66:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531a69:	89 04 24             	mov    %eax,(%esp)
 8531a6c:	e8 dd a1 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8531a71:	89 c3                	mov    %eax,%ebx
 8531a73:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8531a7a:	00 
 8531a7b:	c7 44 24 08 e5 0c 00 	movl   $0xce5,0x8(%esp)
 8531a82:	00 
 8531a83:	c7 44 24 04 20 84 c9 	movl   $0x8c98420,0x4(%esp)
 8531a8a:	08 
 8531a8b:	8d 45 80             	lea    -0x80(%ebp),%eax
 8531a8e:	89 04 24             	mov    %eax,(%esp)
 8531a91:	e8 82 dc 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8531a96:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8531a9a:	c7 44 24 04 bc 77 c9 	movl   $0x8c977bc,0x4(%esp)
 8531aa1:	08 
 8531aa2:	8d 45 80             	lea    -0x80(%ebp),%eax
 8531aa5:	89 04 24             	mov    %eax,(%esp)
 8531aa8:	e8 db dc 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8531aad:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531ab0:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531ab3:	89 d0                	mov    %edx,%eax
 8531ab5:	c1 e0 03             	shl    $0x3,%eax
 8531ab8:	01 d0                	add    %edx,%eax
 8531aba:	c1 e0 03             	shl    $0x3,%eax
 8531abd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531ac3:	01 d0                	add    %edx,%eax
 8531ac5:	83 c0 30             	add    $0x30,%eax
 8531ac8:	03 45 08             	add    0x8(%ebp),%eax
 8531acb:	83 c0 09             	add    $0x9,%eax
 8531ace:	89 04 24             	mov    %eax,(%esp)
 8531ad1:	e8 02 9d b9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8531ad6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8531adb:	e9 15 04 00 00       	jmp    8531ef5 <_ZN11CTradeSpace13proceed_tradeEv+0x167b>
 8531ae0:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531ae3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531ae6:	89 d0                	mov    %edx,%eax
 8531ae8:	c1 e0 03             	shl    $0x3,%eax
 8531aeb:	01 d0                	add    %edx,%eax
 8531aed:	c1 e0 03             	shl    $0x3,%eax
 8531af0:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531af6:	01 d0                	add    %edx,%eax
 8531af8:	83 c0 30             	add    $0x30,%eax
 8531afb:	03 45 08             	add    0x8(%ebp),%eax
 8531afe:	83 c0 09             	add    $0x9,%eax
 8531b01:	89 04 24             	mov    %eax,(%esp)
 8531b04:	e8 31 5d bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8531b09:	89 c1                	mov    %eax,%ecx
 8531b0b:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531b0e:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531b11:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8531b14:	89 d0                	mov    %edx,%eax
 8531b16:	c1 e0 03             	shl    $0x3,%eax
 8531b19:	01 d0                	add    %edx,%eax
 8531b1b:	c1 e0 03             	shl    $0x3,%eax
 8531b1e:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 8531b24:	01 d0                	add    %edx,%eax
 8531b26:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8531b29:	83 c0 30             	add    $0x30,%eax
 8531b2c:	8b 40 0b             	mov    0xb(%eax),%eax
 8531b2f:	89 c2                	mov    %eax,%edx
 8531b31:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8531b34:	8b 45 08             	mov    0x8(%ebp),%eax
 8531b37:	83 c3 08             	add    $0x8,%ebx
 8531b3a:	8b 04 98             	mov    (%eax,%ebx,4),%eax
 8531b3d:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 8531b43:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8531b47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531b4b:	89 04 24             	mov    %eax,(%esp)
 8531b4e:	e8 95 85 f8 ff       	call   84ba0e8 <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii>
 8531b53:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531b56:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531b59:	89 d0                	mov    %edx,%eax
 8531b5b:	c1 e0 03             	shl    $0x3,%eax
 8531b5e:	01 d0                	add    %edx,%eax
 8531b60:	c1 e0 03             	shl    $0x3,%eax
 8531b63:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531b69:	01 d0                	add    %edx,%eax
 8531b6b:	83 c0 30             	add    $0x30,%eax
 8531b6e:	03 45 08             	add    0x8(%ebp),%eax
 8531b71:	83 c0 09             	add    $0x9,%eax
 8531b74:	89 04 24             	mov    %eax,(%esp)
 8531b77:	e8 be 5c bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8531b7c:	89 c1                	mov    %eax,%ecx
 8531b7e:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8531b81:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531b84:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8531b87:	89 d0                	mov    %edx,%eax
 8531b89:	c1 e0 03             	shl    $0x3,%eax
 8531b8c:	01 d0                	add    %edx,%eax
 8531b8e:	c1 e0 03             	shl    $0x3,%eax
 8531b91:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 8531b97:	01 d0                	add    %edx,%eax
 8531b99:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8531b9c:	83 c0 30             	add    $0x30,%eax
 8531b9f:	8b 40 0b             	mov    0xb(%eax),%eax
 8531ba2:	89 c2                	mov    %eax,%edx
 8531ba4:	b8 01 00 00 00       	mov    $0x1,%eax
 8531ba9:	89 c3                	mov    %eax,%ebx
 8531bab:	2b 5d 9c             	sub    -0x64(%ebp),%ebx
 8531bae:	8b 45 08             	mov    0x8(%ebp),%eax
 8531bb1:	83 c3 08             	add    $0x8,%ebx
 8531bb4:	8b 04 98             	mov    (%eax,%ebx,4),%eax
 8531bb7:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 8531bbd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8531bc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531bc5:	89 04 24             	mov    %eax,(%esp)
 8531bc8:	e8 61 85 f8 ff       	call   84ba12e <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii>
 8531bcd:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8531bd0:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8531bd3:	89 d0                	mov    %edx,%eax
 8531bd5:	c1 e0 03             	shl    $0x3,%eax
 8531bd8:	01 d0                	add    %edx,%eax
 8531bda:	c1 e0 03             	shl    $0x3,%eax
 8531bdd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 8531be3:	01 d0                	add    %edx,%eax
 8531be5:	83 c0 30             	add    $0x30,%eax
 8531be8:	03 45 08             	add    0x8(%ebp),%eax
 8531beb:	83 c0 09             	add    $0x9,%eax
 8531bee:	89 04 24             	mov    %eax,(%esp)
 8531bf1:	e8 e2 9b b9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8531bf6:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531bf9:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8531bff:	89 d0                	mov    %edx,%eax
 8531c01:	01 c0                	add    %eax,%eax
 8531c03:	01 d0                	add    %edx,%eax
 8531c05:	c1 e0 02             	shl    $0x2,%eax
 8531c08:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8531c0b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8531c0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531c12:	89 14 24             	mov    %edx,(%esp)
 8531c15:	e8 8a 82 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8531c1a:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 8531c20:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531c23:	8d 9d 58 ff ff ff    	lea    -0xa8(%ebp),%ebx
 8531c29:	89 d0                	mov    %edx,%eax
 8531c2b:	01 c0                	add    %eax,%eax
 8531c2d:	01 d0                	add    %edx,%eax
 8531c2f:	c1 e0 02             	shl    $0x2,%eax
 8531c32:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8531c35:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8531c39:	89 04 24             	mov    %eax,(%esp)
 8531c3c:	e8 63 82 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8531c41:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 8531c45:	83 7d bc 1a          	cmpl   $0x1a,-0x44(%ebp)
 8531c49:	0f 9e c0             	setle  %al
 8531c4c:	84 c0                	test   %al,%al
 8531c4e:	0f 85 fc f4 ff ff    	jne    8531150 <_ZN11CTradeSpace13proceed_tradeEv+0x8d6>
 8531c54:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531c57:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8531c5d:	89 d0                	mov    %edx,%eax
 8531c5f:	01 c0                	add    %eax,%eax
 8531c61:	01 d0                	add    %edx,%eax
 8531c63:	c1 e0 02             	shl    $0x2,%eax
 8531c66:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8531c69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8531c70:	00 
 8531c71:	89 04 24             	mov    %eax,(%esp)
 8531c74:	e8 df 9c b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8531c79:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 8531c7d:	83 7d 9c 01          	cmpl   $0x1,-0x64(%ebp)
 8531c81:	0f 9e c0             	setle  %al
 8531c84:	84 c0                	test   %al,%al
 8531c86:	0f 85 52 ee ff ff    	jne    8530ade <_ZN11CTradeSpace13proceed_tradeEv+0x264>
 8531c8c:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8531c93:	eb 53                	jmp    8531ce8 <_ZN11CTradeSpace13proceed_tradeEv+0x146e>
 8531c95:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8531c98:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8531c9e:	89 d0                	mov    %edx,%eax
 8531ca0:	01 c0                	add    %eax,%eax
 8531ca2:	01 d0                	add    %edx,%eax
 8531ca4:	c1 e0 02             	shl    $0x2,%eax
 8531ca7:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8531caa:	b8 01 00 00 00       	mov    $0x1,%eax
 8531caf:	89 c1                	mov    %eax,%ecx
 8531cb1:	2b 4d 9c             	sub    -0x64(%ebp),%ecx
 8531cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8531cb7:	83 c1 08             	add    $0x8,%ecx
 8531cba:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 8531cbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531cc1:	89 04 24             	mov    %eax,(%esp)
 8531cc4:	e8 f1 68 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8531cc9:	b8 01 00 00 00       	mov    $0x1,%eax
 8531cce:	89 c2                	mov    %eax,%edx
 8531cd0:	2b 55 9c             	sub    -0x64(%ebp),%edx
 8531cd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8531cd6:	83 c2 08             	add    $0x8,%edx
 8531cd9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8531cdc:	89 04 24             	mov    %eax,(%esp)
 8531cdf:	e8 b6 03 00 00       	call   853209a <_ZN5CUser13incTradeCountEv>
 8531ce4:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 8531ce8:	83 7d 9c 01          	cmpl   $0x1,-0x64(%ebp)
 8531cec:	0f 9e c0             	setle  %al
 8531cef:	84 c0                	test   %al,%al
 8531cf1:	75 a2                	jne    8531c95 <_ZN11CTradeSpace13proceed_tradeEv+0x141b>
 8531cf3:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8531cf9:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 8531cff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531d03:	89 04 24             	mov    %eax,(%esp)
 8531d06:	e8 0d 06 00 00       	call   8532318 <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEE5beginEv>
 8531d0b:	83 ec 04             	sub    $0x4,%esp
 8531d0e:	e9 d0 00 00 00       	jmp    8531de3 <_ZN11CTradeSpace13proceed_tradeEv+0x1569>
 8531d13:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8531d19:	89 04 24             	mov    %eax,(%esp)
 8531d1c:	e8 75 06 00 00       	call   8532396 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserSt6vectorIiSaIiEEEEdeEv>
 8531d21:	8b 00                	mov    (%eax),%eax
 8531d23:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8531d26:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8531d2a:	75 0a                	jne    8531d36 <_ZN11CTradeSpace13proceed_tradeEv+0x14bc>
 8531d2c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8531d31:	e9 bf 01 00 00       	jmp    8531ef5 <_ZN11CTradeSpace13proceed_tradeEv+0x167b>
 8531d36:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8531d3c:	89 04 24             	mov    %eax,(%esp)
 8531d3f:	e8 52 06 00 00       	call   8532396 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserSt6vectorIiSaIiEEEEdeEv>
 8531d44:	83 c0 04             	add    $0x4,%eax
 8531d47:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8531d4a:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8531d50:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8531d53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531d57:	89 04 24             	mov    %eax,(%esp)
 8531d5a:	e8 e9 c4 b5 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8531d5f:	83 ec 04             	sub    $0x4,%esp
 8531d62:	eb 43                	jmp    8531da7 <_ZN11CTradeSpace13proceed_tradeEv+0x152d>
 8531d64:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8531d6a:	89 04 24             	mov    %eax,(%esp)
 8531d6d:	e8 5a ca b5 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8531d72:	8b 00                	mov    (%eax),%eax
 8531d74:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8531d77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8531d7a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8531d7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8531d85:	00 
 8531d86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8531d8d:	00 
 8531d8e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8531d91:	89 04 24             	mov    %eax,(%esp)
 8531d94:	e8 c1 a8 14 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8531d99:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8531d9f:	89 04 24             	mov    %eax,(%esp)
 8531da2:	e8 e5 8b bb ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 8531da7:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8531daa:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8531dad:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531db1:	89 04 24             	mov    %eax,(%esp)
 8531db4:	e8 b3 c4 b5 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8531db9:	83 ec 04             	sub    $0x4,%esp
 8531dbc:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8531dbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531dc3:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8531dc9:	89 04 24             	mov    %eax,(%esp)
 8531dcc:	e8 91 86 bb ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8531dd1:	84 c0                	test   %al,%al
 8531dd3:	75 8f                	jne    8531d64 <_ZN11CTradeSpace13proceed_tradeEv+0x14ea>
 8531dd5:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8531ddb:	89 04 24             	mov    %eax,(%esp)
 8531dde:	e8 95 05 00 00       	call   8532378 <_ZNSt17_Rb_tree_iteratorISt4pairIKP5CUserSt6vectorIiSaIiEEEEppEv>
 8531de3:	8d 45 90             	lea    -0x70(%ebp),%eax
 8531de6:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 8531dec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8531df0:	89 04 24             	mov    %eax,(%esp)
 8531df3:	e8 46 05 00 00       	call   853233e <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 8531df8:	83 ec 04             	sub    $0x4,%esp
 8531dfb:	8d 45 90             	lea    -0x70(%ebp),%eax
 8531dfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531e02:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8531e08:	89 04 24             	mov    %eax,(%esp)
 8531e0b:	e8 54 05 00 00       	call   8532364 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserSt6vectorIiSaIiEEEEneERKS8_>
 8531e10:	84 c0                	test   %al,%al
 8531e12:	0f 85 fb fe ff ff    	jne    8531d13 <_ZN11CTradeSpace13proceed_tradeEv+0x1499>
 8531e18:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8531e1f:	e9 a3 00 00 00       	jmp    8531ec7 <_ZN11CTradeSpace13proceed_tradeEv+0x164d>
 8531e24:	b8 01 00 00 00       	mov    $0x1,%eax
 8531e29:	2b 45 9c             	sub    -0x64(%ebp),%eax
 8531e2c:	8b 9c 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%ebx
 8531e33:	b8 01 00 00 00       	mov    $0x1,%eax
 8531e38:	2b 45 9c             	sub    -0x64(%ebp),%eax
 8531e3b:	8b 8c 85 70 ff ff ff 	mov    -0x90(%ebp,%eax,4),%ecx
 8531e42:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8531e45:	8b 94 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%edx
 8531e4c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8531e4f:	8b 84 85 70 ff ff ff 	mov    -0x90(%ebp,%eax,4),%eax
 8531e56:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 8531e59:	8b 75 08             	mov    0x8(%ebp),%esi
 8531e5c:	83 c7 08             	add    $0x8,%edi
 8531e5f:	8b 34 be             	mov    (%esi,%edi,4),%esi
 8531e62:	81 c6 00 97 07 00    	add    $0x79700,%esi
 8531e68:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8531e6c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8531e70:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8531e74:	89 44 24 08          	mov    %eax,0x8(%esp)
 8531e78:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8531e7f:	00 
 8531e80:	89 34 24             	mov    %esi,(%esp)
 8531e83:	e8 f4 31 15 00       	call   868507c <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii>
 8531e88:	b8 01 00 00 00       	mov    $0x1,%eax
 8531e8d:	2b 45 9c             	sub    -0x64(%ebp),%eax
 8531e90:	8b 94 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%edx
 8531e97:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8531e9a:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 8531ea1:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8531ea4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8531ea7:	83 c3 08             	add    $0x8,%ebx
 8531eaa:	8b 0c 99             	mov    (%ecx,%ebx,4),%ecx
 8531ead:	81 c1 80 e9 08 00    	add    $0x8e980,%ecx
 8531eb3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8531eb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8531ebb:	89 0c 24             	mov    %ecx,(%esp)
 8531ebe:	e8 2f 5f d5 ff       	call   8287df2 <_ZN16Secu_GoldControl13TradeCompleteEii>
 8531ec3:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 8531ec7:	83 7d 9c 01          	cmpl   $0x1,-0x64(%ebp)
 8531ecb:	0f 9e c0             	setle  %al
 8531ece:	84 c0                	test   %al,%al
 8531ed0:	0f 85 4e ff ff ff    	jne    8531e24 <_ZN11CTradeSpace13proceed_tradeEv+0x15aa>
 8531ed6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8531edb:	eb 18                	jmp    8531ef5 <_ZN11CTradeSpace13proceed_tradeEv+0x167b>
 8531edd:	89 d3                	mov    %edx,%ebx
 8531edf:	89 c6                	mov    %eax,%esi
 8531ee1:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8531ee7:	89 04 24             	mov    %eax,(%esp)
 8531eea:	e8 23 02 00 00       	call   8532112 <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8531eef:	89 f0                	mov    %esi,%eax
 8531ef1:	89 da                	mov    %ebx,%edx
 8531ef3:	eb 10                	jmp    8531f05 <_ZN11CTradeSpace13proceed_tradeEv+0x168b>
 8531ef5:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8531efb:	89 04 24             	mov    %eax,(%esp)
 8531efe:	e8 0f 02 00 00       	call   8532112 <_ZNSt3mapIP5CUserSt6vectorIiSaIiEESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8531f03:	eb 30                	jmp    8531f35 <_ZN11CTradeSpace13proceed_tradeEv+0x16bb>
 8531f05:	89 d6                	mov    %edx,%esi
 8531f07:	89 c7                	mov    %eax,%edi
 8531f09:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8531f0f:	8d 58 18             	lea    0x18(%eax),%ebx
 8531f12:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8531f18:	39 c3                	cmp    %eax,%ebx
 8531f1a:	74 0d                	je     8531f29 <_ZN11CTradeSpace13proceed_tradeEv+0x16af>
 8531f1c:	83 eb 0c             	sub    $0xc,%ebx
 8531f1f:	89 1c 24             	mov    %ebx,(%esp)
 8531f22:	e8 59 bf 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8531f27:	eb e9                	jmp    8531f12 <_ZN11CTradeSpace13proceed_tradeEv+0x1698>
 8531f29:	89 f8                	mov    %edi,%eax
 8531f2b:	89 f2                	mov    %esi,%edx
 8531f2d:	89 04 24             	mov    %eax,(%esp)
 8531f30:	e8 1b 18 5b 00       	call   8ae3750 <_Unwind_Resume>
 8531f35:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8531f3b:	8d 70 18             	lea    0x18(%eax),%esi
 8531f3e:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8531f44:	39 c6                	cmp    %eax,%esi
 8531f46:	74 0d                	je     8531f55 <_ZN11CTradeSpace13proceed_tradeEv+0x16db>
 8531f48:	83 ee 0c             	sub    $0xc,%esi
 8531f4b:	89 34 24             	mov    %esi,(%esp)
 8531f4e:	e8 2d bf 05 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8531f53:	eb e9                	jmp    8531f3e <_ZN11CTradeSpace13proceed_tradeEv+0x16c4>
 8531f55:	89 d8                	mov    %ebx,%eax
 8531f57:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8531f5a:	83 c4 00             	add    $0x0,%esp
 8531f5d:	5b                   	pop    %ebx
 8531f5e:	5e                   	pop    %esi
 8531f5f:	5f                   	pop    %edi
 8531f60:	5d                   	pop    %ebp
 8531f61:	c3                   	ret

```

```c
// CTradeSpace::proceed_trade @ 0x853087a

/* CTradeSpace::proceed_trade() */

undefined4 __thiscall CTradeSpace::proceed_trade(CTradeSpace *this)

{
  CTradeSpace CVar1;
  char cVar2;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar3;
  uchar uVar4;
  bool bVar5;
  CHades *this_00;
  uint uVar6;
  uint uVar7;
  Secu_AccountHacking *pSVar8;
  CInventory *pCVar9;
  undefined4 uVar10;
  CHackAnalyzer *pCVar11;
  Stream *pSVar12;
  CStreamGuard *pCVar13;
  char *pcVar14;
  CGameManager *this_01;
  uint uVar15;
  CAvatarItemMgr *this_02;
  CCreatureMgr *pCVar16;
  int iVar17;
  vector<int,std::allocator<int>> *this_03;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  PacketGuard *pPVar23;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_e8 [4];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_e4 [4];
  CStreamGuard local_e0 [8];
  char local_d8 [16];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_c8 [24];
  int local_b0;
  PacketGuard local_ac [24];
  int local_94 [4];
  cMyTrace local_84 [16];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_74 [4];
  __normal_iterator local_70 [4];
  int local_6c;
  int local_68;
  CUserCharacInfo *local_64;
  CUser *local_60;
  int local_5c;
  int local_58;
  CUser *local_54;
  CUser *local_50;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG *local_4c;
  int local_48;
  CAuctionAveragePrice *local_44;
  Inven_Item *local_40;
  int local_3c;
  CTradeSpace *local_38;
  Avatar_Item *local_34;
  int local_30;
  int local_2c;
  CUser *local_28;
  int local_24;
  undefined4 local_20;
  
  cVar2 = IsLocked(this);
  if (cVar2 == '\x01') {
    cVar2 = checkTrade(this);
    if (cVar2 == '\x01') {
      local_94[2] = 0;
      local_94[3] = 0;
      local_94[0] = 0;
      local_94[1] = 0;
      pPVar23 = local_ac;
      for (iVar22 = 1; iVar22 != -1; iVar22 = iVar22 + -1) {
                    /* try { // try from 085308f8 to 085308fc has its CatchHandler @ 0853090f */
        PacketGuard::PacketGuard(pPVar23);
        pPVar23 = pPVar23 + 0xc;
      }
      local_6c = 0;
      local_b0 = 0;
      local_68 = 0;
                    /* try { // try from 08530972 to 08530976 has its CatchHandler @ 08531f05 */
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::map(local_c8);
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        local_64 = *(CUserCharacInfo **)(this + (local_68 + 8) * 4);
        local_60 = *(CUser **)(this + (9 - local_68) * 4);
        this_00 = (CHades *)CUser::getHades(local_60);
                    /* try { // try from 085309c0 to 08530e80 has its CatchHandler @ 08531edd */
        XNuclear::CHades::GetIP(this_00,local_d8);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_64);
        uVar6 = CInventory::get_money(pCVar9);
        uVar15 = *(uint *)(this + (local_68 + 0x3d8) * 4);
        uVar7 = CUser::get_acc_id(local_60);
        pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
        Secu_AccountHacking::sendGold(pSVar8,(char *)0x0,uVar7,uVar15,uVar6,'\0',local_d8);
        for (local_5c = 3; local_5c < 0x1b; local_5c = local_5c + 1) {
          uVar15 = *(uint *)(this + local_5c * 0x48 + (1 - local_68) * 0x798 + 0x3b);
          pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
          cVar2 = Secu_AccountHacking::isAvatar(pSVar8,uVar15);
          if (cVar2 != '\0') {
            uVar15 = CUser::get_acc_id(local_60);
            pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
            Secu_AccountHacking::sendAvatar(pSVar8,(char *)0x0,uVar15);
          }
        }
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        local_6c = 0;
        InterfacePacketBuf::clear((InterfacePacketBuf *)(local_ac + local_68 * 0xc));
        InterfacePacketBuf::put_header((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0,0x12);
        for (local_58 = 3; local_58 < 0x1b; local_58 = local_58 + 1) {
          if (*(int *)(this + local_58 * 0x48 + local_68 * 0x798 + 0x3b) != 0) {
            local_6c = local_6c + 1;
          }
        }
        if (*(int *)(this + (local_68 + 0x3d8) * 4) < 1) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_6c);
        }
        else {
          local_6c = local_6c + 1;
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_6c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0);
          if (*(int *)(this + (9 - local_68) * 4) != 0) {
            uVar21 = *(undefined4 *)(this + (local_68 + 0x3d8) * 4);
            pCVar9 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
            CInventory::gain_money(pCVar9,(char)uVar21,1,1,0);
          }
          if (*(int *)(this + (local_68 + 0x3d8) * 4) !=
              (*(int *)(this + (local_68 + 0x3d8) * 4) / 10000) * 10000) {
            iVar22 = CUser::get_acc_id(*(CUser **)(this + (local_68 + 8) * 4));
            uVar10 = CUser::SetETC(*(CUser **)(this + (9 - local_68) * 4),0x2c4,iVar22);
            uVar21 = *(undefined4 *)(this + (9 - local_68) * 4);
            pCVar11 = (CHackAnalyzer *)
                      CUser::getHackAnalyzer(*(CUser **)(this + (9 - local_68) * 4));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar11,(char)uVar21,0x2c4,1,uVar10,0);
          }
          cVar2 = CUser::isHackUser(*(CUser **)(this + (local_68 + 8) * 4));
          if (cVar2 == '\0') {
            cVar2 = CUser::isHackUserTimer(*(CUser **)(this + (local_68 + 8) * 4));
            if (cVar2 != '\0') goto LAB_08530d60;
LAB_08530d7a:
            bVar5 = false;
          }
          else {
LAB_08530d60:
            if (*(int *)(this + (local_68 + 0x3d8) * 4) == 0) goto LAB_08530d7a;
            bVar5 = true;
          }
          if (bVar5) {
            iVar22 = *(int *)(this + (local_68 + 0x3d8) * 4);
            uVar21 = CUser::get_acc_id(*(CUser **)(this + (local_68 + 8) * 4));
            CUser::gainMoneyFromHackUser
                      (*(uint *)(this + (9 - local_68) * 4),CONCAT44(iVar22,uVar21),iVar22 >> 0x1f,1
                      );
          }
          if ((*(int *)(this + (local_68 + 8) * 4) == 0) ||
             (*(int *)(this + (9 - local_68) * 4) == 0)) {
LAB_08530e32:
            bVar5 = false;
          }
          else {
            iVar22 = CUserCharacInfo::getCurCharacMoney
                               (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
            if (iVar22 != 0) goto LAB_08530e32;
            bVar5 = true;
          }
          if (bVar5) {
            local_54 = *(CUser **)(this + (9 - local_68) * 4);
            local_50 = *(CUser **)(this + (local_68 + 8) * 4);
            pSVar12 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"item_trade.cpp",0xc51);
            CStreamGuard::CStreamGuard(local_e0,pSVar12,true);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 08530eb4 to 0853106e has its CatchHandler @ 08531071 */
            CStreamGuard::operator<<(pCVar13,0xa1);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
            CStreamGuard::operator<<(pCVar13,-1);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
            local_4c = CStreamGuard::GetInBuffer<SIG_SAVE_GOLD_ZERO_TRADE_LOG>(pCVar13);
            uVar21 = CUser::get_acc_id(local_54);
            *(undefined4 *)local_4c = uVar21;
            pcVar14 = (char *)CNetwork<4096,450000>::get_str_ip
                                        ((CNetwork<4096,450000> *)(local_54 + 0xe0));
            strncpy((char *)(local_4c + 0x72),pcVar14,0x10);
            CNetwork<4096,450000>::GetPeerIP2
                      ((CNetwork<4096,450000> *)(local_54 + 0xe0),(char *)(local_4c + 0x86),0x14);
            SVar3 = (SIG_SAVE_GOLD_ZERO_TRADE_LOG)
                    CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_54 + 0xe0));
            local_4c[0x9a] = SVar3;
            uVar21 = CUser::get_acc_id(local_50);
            *(undefined4 *)(local_4c + 4) = uVar21;
            pcVar14 = (char *)CNetwork<4096,450000>::get_str_ip
                                        ((CNetwork<4096,450000> *)(local_50 + 0xe0));
            strncpy((char *)(local_4c + 8),pcVar14,0x10);
            CNetwork<4096,450000>::GetPeerIP2
                      ((CNetwork<4096,450000> *)(local_50 + 0xe0),(char *)(local_4c + 0x1c),0x14);
            SVar3 = (SIG_SAVE_GOLD_ZERO_TRADE_LOG)
                    CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_50 + 0xe0));
            local_4c[0x30] = SVar3;
            pcVar14 = (char *)CNetwork<4096,450000>::get_mac_addr
                                        ((CNetwork<4096,450000> *)(local_54 + 0xe0));
            strncpy((char *)(local_4c + 0x9b),pcVar14,0x41);
            pcVar14 = (char *)CNetwork<4096,450000>::get_mac_addr
                                        ((CNetwork<4096,450000> *)(local_50 + 0xe0));
            strncpy((char *)(local_4c + 0x31),pcVar14,0x41);
            *(undefined4 *)(local_4c + 0xdc) = *(undefined4 *)(this + (local_68 + 0x3d8) * 4);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_e0);
                    /* try { // try from 08531095 to 08531ec2 has its CatchHandler @ 08531edd */
            CStreamGuard::~CStreamGuard(local_e0);
          }
          *(undefined4 *)(this + (local_68 + 0x3d8) * 4) = 0;
          HistoryLog::WriteTradeUp
                    (*(_IO_FILE **)(*(int *)(this + (local_68 + 8) * 4) + 0x796f8),0,
                     *(int *)(this + (local_68 + 0x3d8) * 4));
          HistoryLog::WriteTradeDown
                    (*(_IO_FILE **)(*(int *)(this + (9 - local_68) * 4) + 0x796f8),0,
                     *(int *)(this + (local_68 + 0x3d8) * 4));
        }
        for (local_48 = 3; local_48 < 0x1b; local_48 = local_48 + 1) {
          if ((*(int *)(this + (9 - local_68) * 4) != 0) &&
             (*(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b) != 0)) {
            this_01 = (CGameManager *)G_CGameManager();
            local_44 = (CAuctionAveragePrice *)CGameManager::GetAuctionAveragePriceManager(this_01);
            if (local_44 != (CAuctionAveragePrice *)0x0) {
              local_40 = (Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39);
              uVar4 = Inven_Item::GetUpgrade(local_40);
              local_3c = CAuctionAveragePrice::GetAveragePrice
                                   (local_44,*(int *)(local_40 + 2),uVar4);
              if ((local_40[1] == (Inven_Item)0x2) || (local_40[1] == (Inven_Item)0x3)) {
                local_3c = *(int *)(local_40 + 7) * local_3c;
              }
              local_94[local_68] = local_94[local_68] + local_3c;
            }
            iVar17 = local_48;
            iVar22 = local_68;
            if (this[local_48 * 0x48 + local_68 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              iVar22 = CInventory::insertAvatarIntoInventory
                                 (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                  *(undefined4 *)(this + iVar22 + 0x3d),
                                  *(undefined4 *)(this + iVar22 + 0x41),
                                  *(undefined4 *)(this + iVar22 + 0x45),
                                  *(undefined4 *)(this + iVar22 + 0x49),
                                  *(undefined4 *)(this + iVar22 + 0x4d),
                                  *(undefined4 *)(this + iVar22 + 0x51),
                                  *(undefined4 *)(this + iVar22 + 0x55),
                                  *(undefined4 *)(this + iVar22 + 0x59),
                                  *(undefined4 *)(this + iVar22 + 0x5d),
                                  *(undefined4 *)(this + iVar22 + 0x61),
                                  *(undefined4 *)(this + iVar22 + 0x65),
                                  *(undefined4 *)(this + iVar22 + 0x69),
                                  *(undefined4 *)(this + iVar22 + 0x6d),
                                  *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],1,0);
              local_b0 = iVar22;
              if (-1 < iVar22) {
                local_38 = this + local_48 * 0x48 + local_68 * 0x798 + 0x30;
                uVar15 = CUserCharacInfo::getCurCharacNo
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                _SaveAvatarItemOwnerChange
                          (this,*(uint *)(local_38 + 0x10),*(uint *)(local_38 + 4),uVar15,
                           (uchar)iVar22);
                uVar15 = CUserCharacInfo::getCurCharacNo
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                DB_InsertCeraItemHistory::makeRequest
                          (*(int *)(local_38 + 0x10),*(uint *)(local_38 + 4),uVar15,'\x02');
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                iVar22 = CInventory::GetAvatarItemMgrW(pCVar9);
                local_34 = (Avatar_Item *)WongWork::CAvatarItemMgr::EraseAvatarItem(iVar22);
                iVar22 = *(int *)(local_38 + 0x10);
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                this_02 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                WongWork::CAvatarItemMgr::AddAvatarItem(this_02,iVar22,local_34);
                uVar21 = WongWork::Avatar_Item::GetIPGAgencyNo(local_34);
                cUserHistoryLog::AvatarItemDel
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),
                           (char)*(undefined4 *)(local_38 + 0xb),*(undefined4 *)(local_38 + 0x10),
                           uVar21,0);
                uVar21 = WongWork::Avatar_Item::GetIPGAgencyNo(local_34);
                cUserHistoryLog::AvatarItemAdd
                          ((cUserHistoryLog *)(*(int *)(this + (9 - local_68) * 4) + 0x79700),
                           (char)*(undefined4 *)(local_38 + 0xb),*(undefined4 *)(local_38 + 0x10),
                           uVar21,1);
              }
            }
            else if (this[local_48 * 0x48 + local_68 * 0x798 + 0x38] == (CTradeSpace)0x7) {
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              local_b0 = CInventory::insertItemIntoInventory
                                   (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                    *(undefined4 *)(this + iVar22 + 0x3d),
                                    *(undefined4 *)(this + iVar22 + 0x41),
                                    *(undefined4 *)(this + iVar22 + 0x45),
                                    *(undefined4 *)(this + iVar22 + 0x49),
                                    *(undefined4 *)(this + iVar22 + 0x4d),
                                    *(undefined4 *)(this + iVar22 + 0x51),
                                    *(undefined4 *)(this + iVar22 + 0x55),
                                    *(undefined4 *)(this + iVar22 + 0x59),
                                    *(undefined4 *)(this + iVar22 + 0x5d),
                                    *(undefined4 *)(this + iVar22 + 0x61),
                                    *(undefined4 *)(this + iVar22 + 0x65),
                                    *(undefined4 *)(this + iVar22 + 0x69),
                                    *(undefined4 *)(this + iVar22 + 0x6d),
                                    *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],0x1a,0
                                    ,1);
              if (-1 < local_b0) {
                if (this[local_48 * 0x48 + local_68 * 0x798 + 0x3a] == (CTradeSpace)0x5) {
                  pCVar9 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                  iVar22 = CInventory::GetCreatureMgrW(pCVar9);
                  iVar22 = user_creature::CCreatureMgr::FindCreatureItem(iVar22);
                  if (iVar22 == 0) {
                    uVar21 = 0;
                    goto LAB_08531ef5;
                  }
                }
                piVar18 = (int *)CUserCharacInfo::getCurCharacR
                                           (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                local_30 = *piVar18;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                pCVar16 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
                local_2c = user_creature::CCreatureMgr::GetCreatureItemSize(pCVar16);
                iVar22 = local_b0;
                local_2c = local_2c + *(int *)(this + (local_68 + 0x3d8) * 4 + 8);
                iVar17 = local_48 * 0x48;
                iVar20 = local_68 * 0x798;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                pCVar16 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar9);
                user_creature::CCreatureMgr::ChangeOwner
                          (pCVar16,(Inven_Item *)(this + iVar17 + iVar20 + 0x39),iVar22,0x1a,
                           local_30,local_2c);
                *(int *)(this + (-local_68 + 0x3d9) * 4 + 8) =
                     *(int *)(this + (-local_68 + 0x3d9) * 4 + 8) + 1;
                iVar22 = Inven_Item::get_add_info
                                   ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39)
                                   );
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                iVar17 = CInventory::GetCreatureMgrW(pCVar9);
                user_creature::CCreatureMgr::DeleteCreatureItem(iVar17,iVar22);
                CVar1 = this[local_48 * 0x48 + local_68 * 0x798 + 0x3a];
                uVar21 = Inven_Item::get_add_info
                                   ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39)
                                   );
                cUserHistoryLog::CreatureItemDel
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),3,
                           *(undefined4 *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),uVar21,
                           0,CVar1,0x14);
              }
            }
            else {
              cVar2 = IsTradeLimitAttachTypeItem
                                ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
              if (cVar2 != '\0') {
                DecreaseTradeLimitCount
                          ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
                cUserHistoryLog::ChangeItemLimitCount
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),1,
                           local_48,*(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),-1,2)
                ;
              }
              iVar17 = local_48;
              iVar22 = local_68;
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              local_b0 = CInventory::insertItemIntoInventory
                                   (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                    *(undefined4 *)(this + iVar22 + 0x3d),
                                    *(undefined4 *)(this + iVar22 + 0x41),
                                    *(undefined4 *)(this + iVar22 + 0x45),
                                    *(undefined4 *)(this + iVar22 + 0x49),
                                    *(undefined4 *)(this + iVar22 + 0x4d),
                                    *(undefined4 *)(this + iVar22 + 0x51),
                                    *(undefined4 *)(this + iVar22 + 0x55),
                                    *(undefined4 *)(this + iVar22 + 0x59),
                                    *(undefined4 *)(this + iVar22 + 0x5d),
                                    *(undefined4 *)(this + iVar22 + 0x61),
                                    *(undefined4 *)(this + iVar22 + 0x65),
                                    *(undefined4 *)(this + iVar22 + 0x69),
                                    *(undefined4 *)(this + iVar22 + 0x6d),
                                    *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],1,1,1)
              ;
              this_03 = (vector<int,std::allocator<int>> *)
                        std::
                        map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
                        ::operator[](local_c8,(CUser **)(this + (9 - local_68) * 4));
              std::vector<int,std::allocator<int>>::push_back(this_03,&local_b0);
            }
            if (local_b0 < 0) {
              uVar21 = CUserCharacInfo::getCurCharacNo
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              cMyTrace::cMyTrace(local_84,"bool CTradeSpace::proceed_trade()",0xce5,5);
              cMyTrace::operator()
                        (local_84,"insert_item(INVEN_TYPE_INVENTORY) fail - fatal! %d",0xbc,uVar21);
              Inven_Item::reset((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
              uVar21 = 0;
              goto LAB_08531ef5;
            }
            iVar22 = Inven_Item::get_add_info
                               ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            HistoryLog::WriteTradeUp
                      (*(_IO_FILE **)(*(int *)(this + (local_68 + 8) * 4) + 0x796f8),
                       *(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),iVar22);
            iVar22 = Inven_Item::get_add_info
                               ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            HistoryLog::WriteTradeDown
                      (*(_IO_FILE **)(*(int *)(this + (9 - local_68) * 4) + 0x796f8),
                       *(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),iVar22);
            Inven_Item::reset((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_48);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_b0);
          }
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)(local_ac + local_68 * 0xc),true);
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        CUser::Send(*(CUser **)(this + (9 - local_68) * 4),local_ac + local_68 * 0xc);
        CUser::incTradeCount(*(CUser **)(this + (9 - local_68) * 4));
      }
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_e4);
      while( true ) {
        std::
        map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
        ::end(local_74);
        cVar2 = std::_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                              *)local_e4,(_Rb_tree_iterator *)local_74);
        if (cVar2 == '\0') break;
        piVar18 = (int *)std::
                         _Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                         ::operator*((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                                      *)local_e4);
        local_28 = (CUser *)*piVar18;
        if (local_28 == (CUser *)0x0) {
          uVar21 = 0;
          goto LAB_08531ef5;
        }
        local_24 = std::
                   _Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>::
                   operator*((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                              *)local_e4);
        local_24 = local_24 + 4;
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar5 = __gnu_cxx::operator!=(local_e8,local_70);
          if (!bVar5) break;
          puVar19 = (undefined4 *)
                    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_e8);
          local_20 = *puVar19;
          CUser::SendUpdateItemList(local_28,1,0,local_20);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_e8);
        }
        std::_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>::
        operator++((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>> *
                   )local_e4);
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        cUserHistoryLog::TradeEnd
                  ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),2,
                   local_94[local_68],local_94[local_68 + 2],local_94[1 - local_68],
                   local_94[3 - local_68]);
        Secu_GoldControl::TradeComplete
                  ((Secu_GoldControl *)(*(int *)(this + (local_68 + 8) * 4) + 0x8e980),
                   local_94[local_68 + 2],local_94[3 - local_68]);
      }
      uVar21 = 1;
LAB_08531ef5:
                    /* try { // try from 08531efe to 08531f02 has its CatchHandler @ 08531f05 */
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::~map(local_c8);
      pPVar23 = (PacketGuard *)local_94;
      while (pPVar23 != local_ac) {
        pPVar23 = pPVar23 + -0xc;
        PacketGuard::~PacketGuard(pPVar23);
      }
    }
    else {
      uVar21 = 0;
    }
  }
  else {
    uVar21 = 0;
  }
  return uVar21;
}

```

---

## regist_item

```asm
// === 08529e7e CTradeSpace::regist_item  [0x08529e7e-0x852bfcb] ===
 8529e7e:	55                   	push   %ebp
 8529e7f:	89 e5                	mov    %esp,%ebp
 8529e81:	57                   	push   %edi
 8529e82:	56                   	push   %esi
 8529e83:	53                   	push   %ebx
 8529e84:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 8529e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8529e8d:	89 04 24             	mov    %eax,(%esp)
 8529e90:	e8 59 82 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 8529e95:	84 c0                	test   %al,%al
 8529e97:	74 0a                	je     8529ea3 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x25>
 8529e99:	bb 9d ff ff ff       	mov    $0xffffff9d,%ebx
 8529e9e:	e9 1c 21 00 00       	jmp    852bfbf <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2141>
 8529ea3:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8529ea7:	7f 0a                	jg     8529eb3 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x35>
 8529ea9:	bb 9e ff ff ff       	mov    $0xffffff9e,%ebx
 8529eae:	e9 0c 21 00 00       	jmp    852bfbf <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2141>
 8529eb3:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8529eba:	8b 45 08             	mov    0x8(%ebp),%eax
 8529ebd:	8b 40 20             	mov    0x20(%eax),%eax
 8529ec0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8529ec3:	75 19                	jne    8529ede <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x60>
 8529ec5:	8b 45 08             	mov    0x8(%ebp),%eax
 8529ec8:	8b 40 24             	mov    0x24(%eax),%eax
 8529ecb:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8529ece:	c7 45 a0 01 00 00 00 	movl   $0x1,-0x60(%ebp)
 8529ed5:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8529edc:	eb 17                	jmp    8529ef5 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x77>
 8529ede:	8b 45 08             	mov    0x8(%ebp),%eax
 8529ee1:	8b 40 20             	mov    0x20(%eax),%eax
 8529ee4:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8529ee7:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8529eee:	c7 45 a4 01 00 00 00 	movl   $0x1,-0x5c(%ebp)
 8529ef5:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 8529ef9:	75 0a                	jne    8529f05 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x87>
 8529efb:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8529f00:	e9 ba 20 00 00       	jmp    852bfbf <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2141>
 8529f05:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8529f0b:	89 04 24             	mov    %eax,(%esp)
 8529f0e:	e8 07 a2 d7 ff       	call   82a411a <_ZN9TradeSlotC1Ev>
 8529f13:	8b 45 10             	mov    0x10(%ebp),%eax
 8529f16:	88 85 d8 fe ff ff    	mov    %al,-0x128(%ebp)
 8529f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529f1f:	89 04 24             	mov    %eax,(%esp)
 8529f22:	e8 0b 65 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8529f27:	85 c0                	test   %eax,%eax
 8529f29:	0f 94 c0             	sete   %al
 8529f2c:	84 c0                	test   %al,%al
 8529f2e:	74 46                	je     8529f76 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xf8>
 8529f30:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8529f37:	00 
 8529f38:	c7 44 24 08 47 01 00 	movl   $0x147,0x8(%esp)
 8529f3f:	00 
 8529f40:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 8529f47:	08 
 8529f48:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8529f4e:	89 04 24             	mov    %eax,(%esp)
 8529f51:	e8 c2 57 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8529f56:	c7 44 24 04 c8 6f c9 	movl   $0x8c96fc8,0x4(%esp)
 8529f5d:	08 
 8529f5e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8529f64:	89 04 24             	mov    %eax,(%esp)
 8529f67:	e8 1c 58 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8529f6c:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 8529f71:	e9 49 20 00 00       	jmp    852bfbf <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2141>
 8529f76:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8529f7a:	74 25                	je     8529fa1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x123>
 8529f7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529f7f:	89 04 24             	mov    %eax,(%esp)
 8529f82:	e8 b5 5d d0 ff       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 8529f87:	84 c0                	test   %al,%al
 8529f89:	75 0f                	jne    8529f9a <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x11c>
 8529f8b:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8529f8e:	89 04 24             	mov    %eax,(%esp)
 8529f91:	e8 a6 5d d0 ff       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 8529f96:	84 c0                	test   %al,%al
 8529f98:	74 07                	je     8529fa1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x123>
 8529f9a:	b8 01 00 00 00       	mov    $0x1,%eax
 8529f9f:	eb 05                	jmp    8529fa6 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x128>
 8529fa1:	b8 00 00 00 00       	mov    $0x0,%eax
 8529fa6:	84 c0                	test   %al,%al
 8529fa8:	74 0a                	je     8529fb4 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x136>
 8529faa:	bb ad fe ff ff       	mov    $0xfffffead,%ebx
 8529faf:	e9 0b 20 00 00       	jmp    852bfbf <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2141>
 8529fb4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8529fba:	89 04 24             	mov    %eax,(%esp)
 8529fbd:	e8 8a 3d 06 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8529fc2:	8b 45 10             	mov    0x10(%ebp),%eax
 8529fc5:	83 f8 01             	cmp    $0x1,%eax
 8529fc8:	0f 84 77 13 00 00    	je     852b345 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x14c7>
 8529fce:	83 f8 01             	cmp    $0x1,%eax
 8529fd1:	7f 09                	jg     8529fdc <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x15e>
 8529fd3:	85 c0                	test   %eax,%eax
 8529fd5:	74 1c                	je     8529ff3 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x175>
 8529fd7:	e9 b0 1f 00 00       	jmp    852bf8c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x210e>
 8529fdc:	83 f8 03             	cmp    $0x3,%eax
 8529fdf:	0f 84 70 0b 00 00    	je     852ab55 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xcd7>
 8529fe5:	83 f8 07             	cmp    $0x7,%eax
 8529fe8:	0f 84 5c 1a 00 00    	je     852ba4a <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1bcc>
 8529fee:	e9 99 1f 00 00       	jmp    852bf8c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x210e>
 8529ff3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8529ff7:	78 09                	js     852a002 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x184>
 8529ff9:	81 7d 14 38 01 00 00 	cmpl   $0x138,0x14(%ebp)
 852a000:	7e 3d                	jle    852a03f <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1c1>
 852a002:	8b 45 14             	mov    0x14(%ebp),%eax
 852a005:	89 44 24 14          	mov    %eax,0x14(%esp)
 852a009:	c7 44 24 10 00 70 c9 	movl   $0x8c97000,0x10(%esp)
 852a010:	08 
 852a011:	c7 44 24 0c 5e 01 00 	movl   $0x15e,0xc(%esp)
 852a018:	00 
 852a019:	c7 44 24 08 c0 85 c9 	movl   $0x8c985c0,0x8(%esp)
 852a020:	08 
 852a021:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852a028:	08 
 852a029:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852a030:	e8 d5 9b 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852a035:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 852a03a:	e9 72 1f 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a03f:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 852a043:	0f 85 85 02 00 00    	jne    852a2ce <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x450>
 852a049:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a04c:	89 04 24             	mov    %eax,(%esp)
 852a04f:	e8 24 80 00 00       	call   8532078 <_ZNK5CUser25getTotalHackUserTradeGoldEv>
 852a054:	89 c3                	mov    %eax,%ebx
 852a056:	89 d6                	mov    %edx,%esi
 852a058:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a05b:	89 04 24             	mov    %eax,(%esp)
 852a05e:	e8 29 80 00 00       	call   853208c <_ZNK5CUser24getTotalHackUserTradeCntEv>
 852a063:	8b 15 d4 f7 41 09    	mov    0x941f7d4,%edx
 852a069:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a06d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 852a071:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a075:	89 14 24             	mov    %edx,(%esp)
 852a078:	e8 55 7f 00 00       	call   8531fd2 <_ZNK8WongWork26CAutoPunishRuleHackTypeMgr23checkTotalTradeRuleOverEjy>
 852a07d:	84 c0                	test   %al,%al
 852a07f:	74 0a                	je     852a08b <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x20d>
 852a081:	bb 96 fe ff ff       	mov    $0xfffffe96,%ebx
 852a086:	e9 26 1f 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a08b:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a08e:	89 04 24             	mov    %eax,(%esp)
 852a091:	e8 f8 01 bb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852a096:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852a09d:	00 
 852a09e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 852a0a5:	00 
 852a0a6:	8b 55 18             	mov    0x18(%ebp),%edx
 852a0a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 852a0ad:	89 04 24             	mov    %eax,(%esp)
 852a0b0:	e8 97 54 fd ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 852a0b5:	84 c0                	test   %al,%al
 852a0b7:	0f 84 07 02 00 00    	je     852a2c4 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x446>
 852a0bd:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a0c0:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852a0c3:	8b 45 08             	mov    0x8(%ebp),%eax
 852a0c6:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852a0cc:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852a0cf:	89 c2                	mov    %eax,%edx
 852a0d1:	03 55 18             	add    0x18(%ebp),%edx
 852a0d4:	8b 45 08             	mov    0x8(%ebp),%eax
 852a0d7:	81 c1 d8 03 00 00    	add    $0x3d8,%ecx
 852a0dd:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 852a0e0:	8b 45 08             	mov    0x8(%ebp),%eax
 852a0e3:	89 04 24             	mov    %eax,(%esp)
 852a0e6:	e8 cd 3a 00 00       	call   852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>
 852a0eb:	84 c0                	test   %al,%al
 852a0ed:	74 16                	je     852a105 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x287>
 852a0ef:	8b 45 08             	mov    0x8(%ebp),%eax
 852a0f2:	89 04 24             	mov    %eax,(%esp)
 852a0f5:	e8 16 61 00 00       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 852a0fa:	84 c0                	test   %al,%al
 852a0fc:	74 07                	je     852a105 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x287>
 852a0fe:	b8 01 00 00 00       	mov    $0x1,%eax
 852a103:	eb 05                	jmp    852a10a <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x28c>
 852a105:	b8 00 00 00 00       	mov    $0x0,%eax
 852a10a:	84 c0                	test   %al,%al
 852a10c:	0f 84 53 01 00 00    	je     852a265 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x3e7>
 852a112:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a118:	89 04 24             	mov    %eax,(%esp)
 852a11b:	e8 c6 17 ba ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852a120:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852a127:	00 
 852a128:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a12f:	00 
 852a130:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a136:	89 04 24             	mov    %eax,(%esp)
 852a139:	e8 be 17 ba ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852a13e:	8b 45 14             	mov    0x14(%ebp),%eax
 852a141:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a145:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a14b:	89 04 24             	mov    %eax,(%esp)
 852a14e:	e8 51 fd ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a153:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a15a:	00 
 852a15b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a161:	89 04 24             	mov    %eax,(%esp)
 852a164:	e8 d3 17 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a169:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852a16c:	8b 45 08             	mov    0x8(%ebp),%eax
 852a16f:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852a175:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852a178:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a17c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a182:	89 04 24             	mov    %eax,(%esp)
 852a185:	e8 b2 17 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a18a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a191:	00 
 852a192:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a198:	89 04 24             	mov    %eax,(%esp)
 852a19b:	e8 80 17 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852a1a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a1a7:	00 
 852a1a8:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a1ae:	89 04 24             	mov    %eax,(%esp)
 852a1b1:	e8 ee fc ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a1b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a1bd:	00 
 852a1be:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a1c4:	89 04 24             	mov    %eax,(%esp)
 852a1c7:	e8 70 17 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a1cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a1d3:	00 
 852a1d4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a1da:	89 04 24             	mov    %eax,(%esp)
 852a1dd:	e8 3e 17 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852a1e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a1e9:	00 
 852a1ea:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a1f0:	89 04 24             	mov    %eax,(%esp)
 852a1f3:	e8 ac fc ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a1f8:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852a1ff:	09 
 852a200:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a206:	89 04 24             	mov    %eax,(%esp)
 852a209:	e8 80 67 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852a20e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852a215:	00 
 852a216:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a21c:	89 04 24             	mov    %eax,(%esp)
 852a21f:	e8 34 17 ba ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852a224:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a22a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a22e:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852a231:	89 04 24             	mov    %eax,(%esp)
 852a234:	e8 81 e3 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852a239:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852a23c:	8b 45 08             	mov    0x8(%ebp),%eax
 852a23f:	83 c2 08             	add    $0x8,%edx
 852a242:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852a249:	00 
 852a24a:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852a24d:	8b 45 08             	mov    0x8(%ebp),%eax
 852a250:	83 c2 08             	add    $0x8,%edx
 852a253:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852a25a:	00 
 852a25b:	bb 00 00 00 00       	mov    $0x0,%ebx
 852a260:	e9 4c 1d 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a265:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a268:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852a26b:	8b 45 08             	mov    0x8(%ebp),%eax
 852a26e:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852a274:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852a277:	89 c2                	mov    %eax,%edx
 852a279:	2b 55 18             	sub    0x18(%ebp),%edx
 852a27c:	8b 45 08             	mov    0x8(%ebp),%eax
 852a27f:	81 c1 d8 03 00 00    	add    $0x3d8,%ecx
 852a285:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 852a288:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a28b:	89 04 24             	mov    %eax,(%esp)
 852a28e:	e8 fb ff ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852a293:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 852a29a:	00 
 852a29b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852a2a2:	00 
 852a2a3:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 852a2aa:	00 
 852a2ab:	8b 55 18             	mov    0x18(%ebp),%edx
 852a2ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 852a2b2:	89 04 24             	mov    %eax,(%esp)
 852a2b5:	e8 e2 4f fd ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 852a2ba:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 852a2bf:	e9 ed 1c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a2c4:	bb fb ff ff ff       	mov    $0xfffffffb,%ebx
 852a2c9:	e9 e3 1c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a2ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a2d1:	89 04 24             	mov    %eax,(%esp)
 852a2d4:	e8 63 5a d0 ff       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 852a2d9:	84 c0                	test   %al,%al
 852a2db:	75 0f                	jne    852a2ec <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x46e>
 852a2dd:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852a2e0:	89 04 24             	mov    %eax,(%esp)
 852a2e3:	e8 54 5a d0 ff       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 852a2e8:	84 c0                	test   %al,%al
 852a2ea:	74 07                	je     852a2f3 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x475>
 852a2ec:	b8 01 00 00 00       	mov    $0x1,%eax
 852a2f1:	eb 05                	jmp    852a2f8 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x47a>
 852a2f3:	b8 00 00 00 00       	mov    $0x0,%eax
 852a2f8:	84 c0                	test   %al,%al
 852a2fa:	74 0a                	je     852a306 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x488>
 852a2fc:	bb 5f fe ff ff       	mov    $0xfffffe5f,%ebx
 852a301:	e9 ab 1c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a306:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a309:	89 04 24             	mov    %eax,(%esp)
 852a30c:	e8 6d ff ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852a311:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 852a317:	8b 4d 14             	mov    0x14(%ebp),%ecx
 852a31a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852a31e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 852a325:	00 
 852a326:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a32a:	89 14 24             	mov    %edx,(%esp)
 852a32d:	e8 e6 15 fd ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 852a332:	83 ec 04             	sub    $0x4,%esp
 852a335:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 852a33b:	89 85 d9 fe ff ff    	mov    %eax,-0x127(%ebp)
 852a341:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 852a347:	89 85 dd fe ff ff    	mov    %eax,-0x123(%ebp)
 852a34d:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 852a353:	89 85 e1 fe ff ff    	mov    %eax,-0x11f(%ebp)
 852a359:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 852a35f:	89 85 e5 fe ff ff    	mov    %eax,-0x11b(%ebp)
 852a365:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 852a36b:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 852a371:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 852a377:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 852a37d:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 852a383:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 852a389:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 852a38f:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 852a395:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 852a39b:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 852a3a1:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 852a3a7:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 852a3ad:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 852a3b3:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 852a3b9:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 852a3bf:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 852a3c5:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 852a3cb:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 852a3d1:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 852a3d7:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 852a3dd:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 852a3e3:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 852a3e9:	0f b6 85 c4 fe ff ff 	movzbl -0x13c(%ebp),%eax
 852a3f0:	88 85 15 ff ff ff    	mov    %al,-0xeb(%ebp)
 852a3f6:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852a3fc:	85 c0                	test   %eax,%eax
 852a3fe:	75 75                	jne    852a475 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x5f7>
 852a400:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a406:	83 c0 09             	add    $0x9,%eax
 852a409:	89 04 24             	mov    %eax,(%esp)
 852a40c:	e8 29 d4 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852a411:	89 c6                	mov    %eax,%esi
 852a413:	8b bd db fe ff ff    	mov    -0x125(%ebp),%edi
 852a419:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a41c:	89 04 24             	mov    %eax,(%esp)
 852a41f:	e8 2a 18 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852a424:	89 c3                	mov    %eax,%ebx
 852a426:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852a42d:	00 
 852a42e:	c7 44 24 08 a8 01 00 	movl   $0x1a8,0x8(%esp)
 852a435:	00 
 852a436:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852a43d:	08 
 852a43e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 852a444:	89 04 24             	mov    %eax,(%esp)
 852a447:	e8 cc 52 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852a44c:	8b 45 14             	mov    0x14(%ebp),%eax
 852a44f:	89 44 24 14          	mov    %eax,0x14(%esp)
 852a453:	89 74 24 10          	mov    %esi,0x10(%esp)
 852a457:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852a45b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a45f:	c7 44 24 04 48 70 c9 	movl   $0x8c97048,0x4(%esp)
 852a466:	08 
 852a467:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 852a46d:	89 04 24             	mov    %eax,(%esp)
 852a470:	e8 13 53 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852a475:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a47b:	83 c0 09             	add    $0x9,%eax
 852a47e:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a482:	8b 45 08             	mov    0x8(%ebp),%eax
 852a485:	89 04 24             	mov    %eax,(%esp)
 852a488:	e8 41 f9 ff ff       	call   8529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>
 852a48d:	83 f0 01             	xor    $0x1,%eax
 852a490:	84 c0                	test   %al,%al
 852a492:	74 0a                	je     852a49e <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x620>
 852a494:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852a499:	e9 13 1b 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a49e:	0f b6 85 da fe ff ff 	movzbl -0x126(%ebp),%eax
 852a4a5:	3c 01                	cmp    $0x1,%al
 852a4a7:	0f 84 9a 00 00 00    	je     852a547 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x6c9>
 852a4ad:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a4b3:	83 c0 09             	add    $0x9,%eax
 852a4b6:	89 04 24             	mov    %eax,(%esp)
 852a4b9:	e8 7c d3 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852a4be:	3b 45 18             	cmp    0x18(%ebp),%eax
 852a4c1:	0f 9c c0             	setl   %al
 852a4c4:	84 c0                	test   %al,%al
 852a4c6:	74 7f                	je     852a547 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x6c9>
 852a4c8:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a4ce:	83 c0 09             	add    $0x9,%eax
 852a4d1:	89 04 24             	mov    %eax,(%esp)
 852a4d4:	e8 61 d3 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852a4d9:	89 c6                	mov    %eax,%esi
 852a4db:	8b bd db fe ff ff    	mov    -0x125(%ebp),%edi
 852a4e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a4e4:	89 04 24             	mov    %eax,(%esp)
 852a4e7:	e8 62 17 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852a4ec:	89 c3                	mov    %eax,%ebx
 852a4ee:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852a4f5:	00 
 852a4f6:	c7 44 24 08 b5 01 00 	movl   $0x1b5,0x8(%esp)
 852a4fd:	00 
 852a4fe:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852a505:	08 
 852a506:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 852a50c:	89 04 24             	mov    %eax,(%esp)
 852a50f:	e8 04 52 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852a514:	8b 45 18             	mov    0x18(%ebp),%eax
 852a517:	89 44 24 14          	mov    %eax,0x14(%esp)
 852a51b:	89 74 24 10          	mov    %esi,0x10(%esp)
 852a51f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852a523:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a527:	c7 44 24 04 88 70 c9 	movl   $0x8c97088,0x4(%esp)
 852a52e:	08 
 852a52f:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 852a535:	89 04 24             	mov    %eax,(%esp)
 852a538:	e8 4b 52 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852a53d:	bb f8 ff ff ff       	mov    $0xfffffff8,%ebx
 852a542:	e9 6a 1a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a547:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 852a54b:	7f 7f                	jg     852a5cc <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x74e>
 852a54d:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a553:	83 c0 09             	add    $0x9,%eax
 852a556:	89 04 24             	mov    %eax,(%esp)
 852a559:	e8 dc d2 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852a55e:	89 c6                	mov    %eax,%esi
 852a560:	8b bd db fe ff ff    	mov    -0x125(%ebp),%edi
 852a566:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a569:	89 04 24             	mov    %eax,(%esp)
 852a56c:	e8 dd 16 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852a571:	89 c3                	mov    %eax,%ebx
 852a573:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852a57a:	00 
 852a57b:	c7 44 24 08 be 01 00 	movl   $0x1be,0x8(%esp)
 852a582:	00 
 852a583:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852a58a:	08 
 852a58b:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 852a591:	89 04 24             	mov    %eax,(%esp)
 852a594:	e8 7f 51 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852a599:	8b 45 18             	mov    0x18(%ebp),%eax
 852a59c:	89 44 24 14          	mov    %eax,0x14(%esp)
 852a5a0:	89 74 24 10          	mov    %esi,0x10(%esp)
 852a5a4:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852a5a8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a5ac:	c7 44 24 04 c8 70 c9 	movl   $0x8c970c8,0x4(%esp)
 852a5b3:	08 
 852a5b4:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 852a5ba:	89 04 24             	mov    %eax,(%esp)
 852a5bd:	e8 c6 51 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852a5c2:	bb f7 ff ff ff       	mov    $0xfffffff7,%ebx
 852a5c7:	e9 e5 19 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a5cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a5cf:	89 04 24             	mov    %eax,(%esp)
 852a5d2:	e8 b7 fc ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852a5d7:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 852a5de:	00 
 852a5df:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 852a5e6:	00 
 852a5e7:	8b 55 18             	mov    0x18(%ebp),%edx
 852a5ea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852a5ee:	8b 55 14             	mov    0x14(%ebp),%edx
 852a5f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 852a5f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852a5fc:	00 
 852a5fd:	89 04 24             	mov    %eax,(%esp)
 852a600:	e8 07 9a fd ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 852a605:	88 45 af             	mov    %al,-0x51(%ebp)
 852a608:	0f b6 45 af          	movzbl -0x51(%ebp),%eax
 852a60c:	83 f0 01             	xor    $0x1,%eax
 852a60f:	84 c0                	test   %al,%al
 852a611:	74 65                	je     852a678 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x7fa>
 852a613:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a616:	89 04 24             	mov    %eax,(%esp)
 852a619:	e8 30 16 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852a61e:	89 c3                	mov    %eax,%ebx
 852a620:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852a627:	00 
 852a628:	c7 44 24 08 c8 01 00 	movl   $0x1c8,0x8(%esp)
 852a62f:	00 
 852a630:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852a637:	08 
 852a638:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 852a63e:	89 04 24             	mov    %eax,(%esp)
 852a641:	e8 d2 50 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852a646:	8b 45 18             	mov    0x18(%ebp),%eax
 852a649:	89 44 24 10          	mov    %eax,0x10(%esp)
 852a64d:	8b 45 14             	mov    0x14(%ebp),%eax
 852a650:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852a654:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a658:	c7 44 24 04 08 71 c9 	movl   $0x8c97108,0x4(%esp)
 852a65f:	08 
 852a660:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 852a666:	89 04 24             	mov    %eax,(%esp)
 852a669:	e8 1a 51 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852a66e:	bb f6 ff ff ff       	mov    $0xfffffff6,%ebx
 852a673:	e9 39 19 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a678:	8b 45 18             	mov    0x18(%ebp),%eax
 852a67b:	89 44 24 50          	mov    %eax,0x50(%esp)
 852a67f:	8d 54 24 08          	lea    0x8(%esp),%edx
 852a683:	8d 9d d0 fe ff ff    	lea    -0x130(%ebp),%ebx
 852a689:	b8 12 00 00 00       	mov    $0x12,%eax
 852a68e:	89 d7                	mov    %edx,%edi
 852a690:	89 de                	mov    %ebx,%esi
 852a692:	89 c1                	mov    %eax,%ecx
 852a694:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852a696:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 852a699:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a69d:	8b 45 08             	mov    0x8(%ebp),%eax
 852a6a0:	89 04 24             	mov    %eax,(%esp)
 852a6a3:	e8 fa f3 ff ff       	call   8529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>
 852a6a8:	89 45 a8             	mov    %eax,-0x58(%ebp)
 852a6ab:	83 7d a8 ff          	cmpl   $0xffffffff,-0x58(%ebp)
 852a6af:	0f 84 98 04 00 00    	je     852ab4d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xccf>
 852a6b5:	8b 45 08             	mov    0x8(%ebp),%eax
 852a6b8:	89 04 24             	mov    %eax,(%esp)
 852a6bb:	e8 50 5b 00 00       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 852a6c0:	84 c0                	test   %al,%al
 852a6c2:	74 16                	je     852a6da <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x85c>
 852a6c4:	8b 45 08             	mov    0x8(%ebp),%eax
 852a6c7:	89 04 24             	mov    %eax,(%esp)
 852a6ca:	e8 e9 34 00 00       	call   852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>
 852a6cf:	84 c0                	test   %al,%al
 852a6d1:	74 07                	je     852a6da <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x85c>
 852a6d3:	b8 01 00 00 00       	mov    $0x1,%eax
 852a6d8:	eb 05                	jmp    852a6df <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x861>
 852a6da:	b8 00 00 00 00       	mov    $0x0,%eax
 852a6df:	84 c0                	test   %al,%al
 852a6e1:	0f 84 aa 01 00 00    	je     852a891 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xa13>
 852a6e7:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852a6ea:	8b 45 08             	mov    0x8(%ebp),%eax
 852a6ed:	83 c2 08             	add    $0x8,%edx
 852a6f0:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852a6f7:	00 
 852a6f8:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852a6fb:	8b 45 08             	mov    0x8(%ebp),%eax
 852a6fe:	83 c2 08             	add    $0x8,%edx
 852a701:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852a708:	00 
 852a709:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a70f:	89 04 24             	mov    %eax,(%esp)
 852a712:	e8 cf 11 ba ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852a717:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852a71e:	00 
 852a71f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852a726:	00 
 852a727:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a72d:	89 04 24             	mov    %eax,(%esp)
 852a730:	e8 c7 11 ba ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852a735:	8b 45 a8             	mov    -0x58(%ebp),%eax
 852a738:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a73c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a742:	89 04 24             	mov    %eax,(%esp)
 852a745:	e8 5a f7 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a74a:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852a750:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a754:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a75a:	89 04 24             	mov    %eax,(%esp)
 852a75d:	e8 da 11 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a762:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a765:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a768:	89 d0                	mov    %edx,%eax
 852a76a:	c1 e0 03             	shl    $0x3,%eax
 852a76d:	01 d0                	add    %edx,%eax
 852a76f:	c1 e0 03             	shl    $0x3,%eax
 852a772:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852a778:	01 d0                	add    %edx,%eax
 852a77a:	83 c0 30             	add    $0x30,%eax
 852a77d:	03 45 08             	add    0x8(%ebp),%eax
 852a780:	83 c0 09             	add    $0x9,%eax
 852a783:	89 04 24             	mov    %eax,(%esp)
 852a786:	e8 af d0 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852a78b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a78f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a795:	89 04 24             	mov    %eax,(%esp)
 852a798:	e8 9f 11 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a79d:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a7a3:	83 c0 09             	add    $0x9,%eax
 852a7a6:	89 04 24             	mov    %eax,(%esp)
 852a7a9:	e8 2e 60 c2 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 852a7ae:	0f b6 c0             	movzbl %al,%eax
 852a7b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a7b5:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a7bb:	89 04 24             	mov    %eax,(%esp)
 852a7be:	e8 5d 11 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852a7c3:	0f b7 85 e4 fe ff ff 	movzwl -0x11c(%ebp),%eax
 852a7ca:	0f b7 c0             	movzwl %ax,%eax
 852a7cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a7d1:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a7d7:	89 04 24             	mov    %eax,(%esp)
 852a7da:	e8 c5 f6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a7df:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 852a7e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a7e9:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a7ef:	89 04 24             	mov    %eax,(%esp)
 852a7f2:	e8 45 11 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852a7f7:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a7fd:	83 c0 1a             	add    $0x1a,%eax
 852a800:	89 04 24             	mov    %eax,(%esp)
 852a803:	e8 2a 5f c2 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 852a808:	0f b6 c0             	movzbl %al,%eax
 852a80b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a80f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a815:	89 04 24             	mov    %eax,(%esp)
 852a818:	e8 03 11 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852a81d:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a823:	83 c0 1a             	add    $0x1a,%eax
 852a826:	89 04 24             	mov    %eax,(%esp)
 852a829:	e8 44 5f c2 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 852a82e:	0f b7 c0             	movzwl %ax,%eax
 852a831:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a835:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a83b:	89 04 24             	mov    %eax,(%esp)
 852a83e:	e8 61 f6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852a843:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852a849:	83 c0 09             	add    $0x9,%eax
 852a84c:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a850:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a856:	89 04 24             	mov    %eax,(%esp)
 852a859:	e8 30 61 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852a85e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852a865:	00 
 852a866:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a86c:	89 04 24             	mov    %eax,(%esp)
 852a86f:	e8 e4 10 ba ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852a874:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852a87a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852a87e:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852a881:	89 04 24             	mov    %eax,(%esp)
 852a884:	e8 31 dd 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852a889:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852a88c:	e9 20 17 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852a891:	8b 45 0c             	mov    0xc(%ebp),%eax
 852a894:	89 04 24             	mov    %eax,(%esp)
 852a897:	e8 b2 13 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852a89c:	89 c3                	mov    %eax,%ebx
 852a89e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852a8a5:	00 
 852a8a6:	c7 44 24 08 fc 01 00 	movl   $0x1fc,0x8(%esp)
 852a8ad:	00 
 852a8ae:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852a8b5:	08 
 852a8b6:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 852a8bc:	89 04 24             	mov    %eax,(%esp)
 852a8bf:	e8 54 4e 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852a8c4:	8b 45 18             	mov    0x18(%ebp),%eax
 852a8c7:	89 44 24 10          	mov    %eax,0x10(%esp)
 852a8cb:	8b 45 14             	mov    0x14(%ebp),%eax
 852a8ce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852a8d2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852a8d6:	c7 44 24 04 44 71 c9 	movl   $0x8c97144,0x4(%esp)
 852a8dd:	08 
 852a8de:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 852a8e4:	89 04 24             	mov    %eax,(%esp)
 852a8e7:	e8 9c 4e 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852a8ec:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a8ef:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a8f2:	89 d0                	mov    %edx,%eax
 852a8f4:	c1 e0 03             	shl    $0x3,%eax
 852a8f7:	01 d0                	add    %edx,%eax
 852a8f9:	c1 e0 03             	shl    $0x3,%eax
 852a8fc:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852a902:	01 d0                	add    %edx,%eax
 852a904:	83 c0 30             	add    $0x30,%eax
 852a907:	03 45 08             	add    0x8(%ebp),%eax
 852a90a:	83 c0 09             	add    $0x9,%eax
 852a90d:	89 04 24             	mov    %eax,(%esp)
 852a910:	e8 fd 5e c2 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 852a915:	84 c0                	test   %al,%al
 852a917:	74 2e                	je     852a947 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xac9>
 852a919:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a91c:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a91f:	89 d0                	mov    %edx,%eax
 852a921:	c1 e0 03             	shl    $0x3,%eax
 852a924:	01 d0                	add    %edx,%eax
 852a926:	c1 e0 03             	shl    $0x3,%eax
 852a929:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852a92f:	01 d0                	add    %edx,%eax
 852a931:	83 c0 30             	add    $0x30,%eax
 852a934:	03 45 08             	add    0x8(%ebp),%eax
 852a937:	83 c0 09             	add    $0x9,%eax
 852a93a:	89 04 24             	mov    %eax,(%esp)
 852a93d:	e8 96 0e ba ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852a942:	e9 f5 00 00 00       	jmp    852aa3c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xbbe>
 852a947:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852a94a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a94d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852a950:	89 d0                	mov    %edx,%eax
 852a952:	c1 e0 03             	shl    $0x3,%eax
 852a955:	01 d0                	add    %edx,%eax
 852a957:	c1 e0 03             	shl    $0x3,%eax
 852a95a:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852a960:	01 d0                	add    %edx,%eax
 852a962:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852a965:	83 c0 40             	add    $0x40,%eax
 852a968:	8b 00                	mov    (%eax),%eax
 852a96a:	3b 45 18             	cmp    0x18(%ebp),%eax
 852a96d:	0f 84 a0 00 00 00    	je     852aa13 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xb95>
 852a973:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852a976:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a979:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852a97c:	89 d0                	mov    %edx,%eax
 852a97e:	c1 e0 03             	shl    $0x3,%eax
 852a981:	01 d0                	add    %edx,%eax
 852a983:	c1 e0 03             	shl    $0x3,%eax
 852a986:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852a98c:	01 d0                	add    %edx,%eax
 852a98e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852a991:	83 c0 40             	add    $0x40,%eax
 852a994:	8b 00                	mov    (%eax),%eax
 852a996:	3b 45 18             	cmp    0x18(%ebp),%eax
 852a999:	7e 4d                	jle    852a9e8 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xb6a>
 852a99b:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 852a99e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a9a1:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 852a9a4:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 852a9a7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 852a9aa:	89 c8                	mov    %ecx,%eax
 852a9ac:	c1 e0 03             	shl    $0x3,%eax
 852a9af:	01 c8                	add    %ecx,%eax
 852a9b1:	c1 e0 03             	shl    $0x3,%eax
 852a9b4:	69 cf 98 07 00 00    	imul   $0x798,%edi,%ecx
 852a9ba:	01 c8                	add    %ecx,%eax
 852a9bc:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852a9bf:	83 c0 40             	add    $0x40,%eax
 852a9c2:	8b 00                	mov    (%eax),%eax
 852a9c4:	89 c1                	mov    %eax,%ecx
 852a9c6:	2b 4d 18             	sub    0x18(%ebp),%ecx
 852a9c9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 852a9cc:	89 d0                	mov    %edx,%eax
 852a9ce:	c1 e0 03             	shl    $0x3,%eax
 852a9d1:	01 d0                	add    %edx,%eax
 852a9d3:	c1 e0 03             	shl    $0x3,%eax
 852a9d6:	69 d6 98 07 00 00    	imul   $0x798,%esi,%edx
 852a9dc:	01 d0                	add    %edx,%eax
 852a9de:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 852a9e1:	83 c0 40             	add    $0x40,%eax
 852a9e4:	89 08                	mov    %ecx,(%eax)
 852a9e6:	eb 54                	jmp    852aa3c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xbbe>
 852a9e8:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852a9eb:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852a9ee:	89 d0                	mov    %edx,%eax
 852a9f0:	c1 e0 03             	shl    $0x3,%eax
 852a9f3:	01 d0                	add    %edx,%eax
 852a9f5:	c1 e0 03             	shl    $0x3,%eax
 852a9f8:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852a9fe:	01 d0                	add    %edx,%eax
 852aa00:	83 c0 30             	add    $0x30,%eax
 852aa03:	03 45 08             	add    0x8(%ebp),%eax
 852aa06:	83 c0 09             	add    $0x9,%eax
 852aa09:	89 04 24             	mov    %eax,(%esp)
 852aa0c:	e8 c7 0d ba ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852aa11:	eb 29                	jmp    852aa3c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xbbe>
 852aa13:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852aa16:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852aa19:	89 d0                	mov    %edx,%eax
 852aa1b:	c1 e0 03             	shl    $0x3,%eax
 852aa1e:	01 d0                	add    %edx,%eax
 852aa20:	c1 e0 03             	shl    $0x3,%eax
 852aa23:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852aa29:	01 d0                	add    %edx,%eax
 852aa2b:	83 c0 30             	add    $0x30,%eax
 852aa2e:	03 45 08             	add    0x8(%ebp),%eax
 852aa31:	83 c0 09             	add    $0x9,%eax
 852aa34:	89 04 24             	mov    %eax,(%esp)
 852aa37:	e8 9c 0d ba ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852aa3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 852aa3f:	89 04 24             	mov    %eax,(%esp)
 852aa42:	e8 47 f8 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852aa47:	c7 44 24 50 10 00 00 	movl   $0x10,0x50(%esp)
 852aa4e:	00 
 852aa4f:	c7 44 24 4c 09 00 00 	movl   $0x9,0x4c(%esp)
 852aa56:	00 
 852aa57:	8b 55 14             	mov    0x14(%ebp),%edx
 852aa5a:	89 54 24 48          	mov    %edx,0x48(%esp)
 852aa5e:	8b 55 18             	mov    0x18(%ebp),%edx
 852aa61:	89 54 24 44          	mov    %edx,0x44(%esp)
 852aa65:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 852aa6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 852aa6f:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 852aa75:	89 54 24 08          	mov    %edx,0x8(%esp)
 852aa79:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 852aa7f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852aa83:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 852aa89:	89 54 24 10          	mov    %edx,0x10(%esp)
 852aa8d:	8b 95 e9 fe ff ff    	mov    -0x117(%ebp),%edx
 852aa93:	89 54 24 14          	mov    %edx,0x14(%esp)
 852aa97:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 852aa9d:	89 54 24 18          	mov    %edx,0x18(%esp)
 852aaa1:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 852aaa7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852aaab:	8b 95 f5 fe ff ff    	mov    -0x10b(%ebp),%edx
 852aab1:	89 54 24 20          	mov    %edx,0x20(%esp)
 852aab5:	8b 95 f9 fe ff ff    	mov    -0x107(%ebp),%edx
 852aabb:	89 54 24 24          	mov    %edx,0x24(%esp)
 852aabf:	8b 95 fd fe ff ff    	mov    -0x103(%ebp),%edx
 852aac5:	89 54 24 28          	mov    %edx,0x28(%esp)
 852aac9:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852aacf:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852aad3:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852aad9:	89 54 24 30          	mov    %edx,0x30(%esp)
 852aadd:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852aae3:	89 54 24 34          	mov    %edx,0x34(%esp)
 852aae7:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852aaed:	89 54 24 38          	mov    %edx,0x38(%esp)
 852aaf1:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852aaf7:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852aafb:	0f b6 95 15 ff ff ff 	movzbl -0xeb(%ebp),%edx
 852ab02:	88 54 24 40          	mov    %dl,0x40(%esp)
 852ab06:	89 04 24             	mov    %eax,(%esp)
 852ab09:	e8 da 8e fd ff       	call   85039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>
 852ab0e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 852ab11:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 852ab15:	79 2c                	jns    852ab43 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xcc5>
 852ab17:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852ab1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 852ab20:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 852ab26:	8b 55 18             	mov    0x18(%ebp),%edx
 852ab29:	89 54 24 08          	mov    %edx,0x8(%esp)
 852ab2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ab31:	89 0c 24             	mov    %ecx,(%esp)
 852ab34:	e8 21 92 15 00       	call   8683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>
 852ab39:	bb f5 ff ff ff       	mov    $0xfffffff5,%ebx
 852ab3e:	e9 6e 14 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ab43:	bb f4 ff ff ff       	mov    $0xfffffff4,%ebx
 852ab48:	e9 64 14 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ab4d:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852ab50:	e9 5c 14 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ab55:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 852ab59:	78 06                	js     852ab61 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xce3>
 852ab5b:	83 7d 14 19          	cmpl   $0x19,0x14(%ebp)
 852ab5f:	7e 3d                	jle    852ab9e <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xd20>
 852ab61:	8b 45 14             	mov    0x14(%ebp),%eax
 852ab64:	89 44 24 14          	mov    %eax,0x14(%esp)
 852ab68:	c7 44 24 10 98 71 c9 	movl   $0x8c97198,0x10(%esp)
 852ab6f:	08 
 852ab70:	c7 44 24 0c 66 02 00 	movl   $0x266,0xc(%esp)
 852ab77:	00 
 852ab78:	c7 44 24 08 c0 85 c9 	movl   $0x8c985c0,0x8(%esp)
 852ab7f:	08 
 852ab80:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852ab87:	08 
 852ab88:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852ab8f:	e8 76 90 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852ab94:	bb f3 ff ff ff       	mov    $0xfffffff3,%ebx
 852ab99:	e9 13 14 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ab9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 852aba1:	89 04 24             	mov    %eax,(%esp)
 852aba4:	e8 d5 f6 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852aba9:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 852abaf:	8b 4d 14             	mov    0x14(%ebp),%ecx
 852abb2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852abb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 852abbd:	00 
 852abbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 852abc2:	89 14 24             	mov    %edx,(%esp)
 852abc5:	e8 4e 0d fd ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 852abca:	83 ec 04             	sub    $0x4,%esp
 852abcd:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 852abd3:	89 85 d9 fe ff ff    	mov    %eax,-0x127(%ebp)
 852abd9:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 852abdf:	89 85 dd fe ff ff    	mov    %eax,-0x123(%ebp)
 852abe5:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 852abeb:	89 85 e1 fe ff ff    	mov    %eax,-0x11f(%ebp)
 852abf1:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 852abf7:	89 85 e5 fe ff ff    	mov    %eax,-0x11b(%ebp)
 852abfd:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 852ac03:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 852ac09:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 852ac0f:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 852ac15:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 852ac1b:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 852ac21:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 852ac27:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 852ac2d:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 852ac33:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 852ac39:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 852ac3f:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 852ac45:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 852ac4b:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 852ac51:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 852ac57:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 852ac5d:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 852ac63:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 852ac69:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 852ac6f:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 852ac75:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 852ac7b:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 852ac81:	0f b6 85 c4 fe ff ff 	movzbl -0x13c(%ebp),%eax
 852ac88:	88 85 15 ff ff ff    	mov    %al,-0xeb(%ebp)
 852ac8e:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852ac94:	85 c0                	test   %eax,%eax
 852ac96:	75 0a                	jne    852aca2 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xe24>
 852ac98:	bb f2 ff ff ff       	mov    $0xfffffff2,%ebx
 852ac9d:	e9 0f 13 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852aca2:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852aca8:	83 c0 09             	add    $0x9,%eax
 852acab:	89 44 24 04          	mov    %eax,0x4(%esp)
 852acaf:	8b 45 08             	mov    0x8(%ebp),%eax
 852acb2:	89 04 24             	mov    %eax,(%esp)
 852acb5:	e8 14 f1 ff ff       	call   8529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>
 852acba:	83 f0 01             	xor    $0x1,%eax
 852acbd:	84 c0                	test   %al,%al
 852acbf:	74 0a                	je     852accb <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xe4d>
 852acc1:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852acc6:	e9 e6 12 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852accb:	83 7d 14 09          	cmpl   $0x9,0x14(%ebp)
 852accf:	0f 8f 8f 00 00 00    	jg     852ad64 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xee6>
 852acd5:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 852acdb:	89 04 24             	mov    %eax,(%esp)
 852acde:	e8 2a 25 d0 ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 852ace3:	84 c0                	test   %al,%al
 852ace5:	74 0a                	je     852acf1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xe73>
 852ace7:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852acec:	e9 c0 12 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852acf1:	8b 45 14             	mov    0x14(%ebp),%eax
 852acf4:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 852acfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 852acfd:	89 04 24             	mov    %eax,(%esp)
 852ad00:	e8 49 0f ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852ad05:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 852ad0b:	8b 9d e0 fe ff ff    	mov    -0x120(%ebp),%ebx
 852ad11:	8b 45 0c             	mov    0xc(%ebp),%eax
 852ad14:	89 04 24             	mov    %eax,(%esp)
 852ad17:	e8 62 f5 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852ad1c:	89 04 24             	mov    %eax,(%esp)
 852ad1f:	e8 52 28 bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852ad24:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852ad28:	89 04 24             	mov    %eax,(%esp)
 852ad2b:	e8 ea ea dc ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 852ad30:	89 45 b8             	mov    %eax,-0x48(%ebp)
 852ad33:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 852ad37:	74 18                	je     852ad51 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xed3>
 852ad39:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 852ad40:	e8 59 0f ba ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 852ad45:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 852ad48:	7e 07                	jle    852ad51 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xed3>
 852ad4a:	b8 01 00 00 00       	mov    $0x1,%eax
 852ad4f:	eb 05                	jmp    852ad56 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xed8>
 852ad51:	b8 00 00 00 00       	mov    $0x0,%eax
 852ad56:	84 c0                	test   %al,%al
 852ad58:	74 0a                	je     852ad64 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xee6>
 852ad5a:	bb 9c ff ff ff       	mov    $0xffffff9c,%ebx
 852ad5f:	e9 4d 12 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ad64:	8b 45 0c             	mov    0xc(%ebp),%eax
 852ad67:	89 04 24             	mov    %eax,(%esp)
 852ad6a:	e8 1f f5 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852ad6f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 852ad76:	00 
 852ad77:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 852ad7e:	00 
 852ad7f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852ad86:	00 
 852ad87:	8b 55 14             	mov    0x14(%ebp),%edx
 852ad8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 852ad8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ad95:	00 
 852ad96:	89 04 24             	mov    %eax,(%esp)
 852ad99:	e8 6e 92 fd ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 852ad9e:	88 45 b7             	mov    %al,-0x49(%ebp)
 852ada1:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 852ada5:	83 f0 01             	xor    $0x1,%eax
 852ada8:	84 c0                	test   %al,%al
 852adaa:	74 5f                	je     852ae0b <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xf8d>
 852adac:	8b 45 0c             	mov    0xc(%ebp),%eax
 852adaf:	89 04 24             	mov    %eax,(%esp)
 852adb2:	e8 97 0e ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852adb7:	89 c3                	mov    %eax,%ebx
 852adb9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852adc0:	00 
 852adc1:	c7 44 24 08 81 02 00 	movl   $0x281,0x8(%esp)
 852adc8:	00 
 852adc9:	c7 44 24 04 c0 85 c9 	movl   $0x8c985c0,0x4(%esp)
 852add0:	08 
 852add1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 852add4:	89 04 24             	mov    %eax,(%esp)
 852add7:	e8 3c 49 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852addc:	8b 45 18             	mov    0x18(%ebp),%eax
 852addf:	89 44 24 10          	mov    %eax,0x10(%esp)
 852ade3:	8b 45 14             	mov    0x14(%ebp),%eax
 852ade6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852adea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852adee:	c7 44 24 04 d4 71 c9 	movl   $0x8c971d4,0x4(%esp)
 852adf5:	08 
 852adf6:	8d 45 8c             	lea    -0x74(%ebp),%eax
 852adf9:	89 04 24             	mov    %eax,(%esp)
 852adfc:	e8 87 49 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852ae01:	bb f1 ff ff ff       	mov    $0xfffffff1,%ebx
 852ae06:	e9 a6 11 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ae0b:	8b 45 18             	mov    0x18(%ebp),%eax
 852ae0e:	89 44 24 50          	mov    %eax,0x50(%esp)
 852ae12:	8d 54 24 08          	lea    0x8(%esp),%edx
 852ae16:	8d 9d d0 fe ff ff    	lea    -0x130(%ebp),%ebx
 852ae1c:	b8 12 00 00 00       	mov    $0x12,%eax
 852ae21:	89 d7                	mov    %edx,%edi
 852ae23:	89 de                	mov    %ebx,%esi
 852ae25:	89 c1                	mov    %eax,%ecx
 852ae27:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852ae29:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 852ae2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ae30:	8b 45 08             	mov    0x8(%ebp),%eax
 852ae33:	89 04 24             	mov    %eax,(%esp)
 852ae36:	e8 67 ec ff ff       	call   8529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>
 852ae3b:	89 45 a8             	mov    %eax,-0x58(%ebp)
 852ae3e:	83 7d a8 ff          	cmpl   $0xffffffff,-0x58(%ebp)
 852ae42:	0f 84 f5 04 00 00    	je     852b33d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x14bf>
 852ae48:	8b 45 08             	mov    0x8(%ebp),%eax
 852ae4b:	89 04 24             	mov    %eax,(%esp)
 852ae4e:	e8 bd 53 00 00       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 852ae53:	84 c0                	test   %al,%al
 852ae55:	74 16                	je     852ae6d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xfef>
 852ae57:	8b 45 08             	mov    0x8(%ebp),%eax
 852ae5a:	89 04 24             	mov    %eax,(%esp)
 852ae5d:	e8 56 2d 00 00       	call   852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>
 852ae62:	84 c0                	test   %al,%al
 852ae64:	74 07                	je     852ae6d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xfef>
 852ae66:	b8 01 00 00 00       	mov    $0x1,%eax
 852ae6b:	eb 05                	jmp    852ae72 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0xff4>
 852ae6d:	b8 00 00 00 00       	mov    $0x0,%eax
 852ae72:	84 c0                	test   %al,%al
 852ae74:	0f 84 89 03 00 00    	je     852b203 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1385>
 852ae7a:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852ae7d:	8b 45 08             	mov    0x8(%ebp),%eax
 852ae80:	83 c2 08             	add    $0x8,%edx
 852ae83:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852ae8a:	00 
 852ae8b:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852ae8e:	8b 45 08             	mov    0x8(%ebp),%eax
 852ae91:	83 c2 08             	add    $0x8,%edx
 852ae94:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852ae9b:	00 
 852ae9c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852aea2:	89 04 24             	mov    %eax,(%esp)
 852aea5:	e8 3c 0a ba ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852aeaa:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852aeb1:	00 
 852aeb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852aeb9:	00 
 852aeba:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852aec0:	89 04 24             	mov    %eax,(%esp)
 852aec3:	e8 34 0a ba ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852aec8:	8b 45 a8             	mov    -0x58(%ebp),%eax
 852aecb:	89 44 24 04          	mov    %eax,0x4(%esp)
 852aecf:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852aed5:	89 04 24             	mov    %eax,(%esp)
 852aed8:	e8 c7 ef ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852aedd:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852aee3:	89 44 24 04          	mov    %eax,0x4(%esp)
 852aee7:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852aeed:	89 04 24             	mov    %eax,(%esp)
 852aef0:	e8 47 0a ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852aef5:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852aef8:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852aefb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852aefe:	89 d0                	mov    %edx,%eax
 852af00:	c1 e0 03             	shl    $0x3,%eax
 852af03:	01 d0                	add    %edx,%eax
 852af05:	c1 e0 03             	shl    $0x3,%eax
 852af08:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852af0e:	01 d0                	add    %edx,%eax
 852af10:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852af13:	83 c0 30             	add    $0x30,%eax
 852af16:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852af1a:	3c 08                	cmp    $0x8,%al
 852af1c:	75 69                	jne    852af87 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1109>
 852af1e:	e8 df 18 06 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 852af23:	89 c6                	mov    %eax,%esi
 852af25:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852af28:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852af2b:	89 d0                	mov    %edx,%eax
 852af2d:	c1 e0 03             	shl    $0x3,%eax
 852af30:	01 d0                	add    %edx,%eax
 852af32:	c1 e0 03             	shl    $0x3,%eax
 852af35:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852af3b:	01 d0                	add    %edx,%eax
 852af3d:	83 c0 30             	add    $0x30,%eax
 852af40:	03 45 08             	add    0x8(%ebp),%eax
 852af43:	83 c0 09             	add    $0x9,%eax
 852af46:	89 04 24             	mov    %eax,(%esp)
 852af49:	e8 ec c8 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852af4e:	89 c3                	mov    %eax,%ebx
 852af50:	8b 45 0c             	mov    0xc(%ebp),%eax
 852af53:	89 04 24             	mov    %eax,(%esp)
 852af56:	e8 23 f3 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852af5b:	89 04 24             	mov    %eax,(%esp)
 852af5e:	e8 13 26 bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852af63:	89 74 24 08          	mov    %esi,0x8(%esp)
 852af67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852af6b:	89 04 24             	mov    %eax,(%esp)
 852af6e:	e8 dd e8 dc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 852af73:	89 44 24 04          	mov    %eax,0x4(%esp)
 852af77:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852af7d:	89 04 24             	mov    %eax,(%esp)
 852af80:	e8 b7 09 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852af85:	eb 3b                	jmp    852afc2 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1144>
 852af87:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852af8a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852af8d:	89 d0                	mov    %edx,%eax
 852af8f:	c1 e0 03             	shl    $0x3,%eax
 852af92:	01 d0                	add    %edx,%eax
 852af94:	c1 e0 03             	shl    $0x3,%eax
 852af97:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852af9d:	01 d0                	add    %edx,%eax
 852af9f:	83 c0 30             	add    $0x30,%eax
 852afa2:	03 45 08             	add    0x8(%ebp),%eax
 852afa5:	83 c0 09             	add    $0x9,%eax
 852afa8:	89 04 24             	mov    %eax,(%esp)
 852afab:	e8 8a c8 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852afb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 852afb4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852afba:	89 04 24             	mov    %eax,(%esp)
 852afbd:	e8 7a 09 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852afc2:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852afc8:	83 c0 09             	add    $0x9,%eax
 852afcb:	89 04 24             	mov    %eax,(%esp)
 852afce:	e8 09 58 c2 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 852afd3:	0f b6 c0             	movzbl %al,%eax
 852afd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 852afda:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852afe0:	89 04 24             	mov    %eax,(%esp)
 852afe3:	e8 38 09 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852afe8:	0f b7 85 e4 fe ff ff 	movzwl -0x11c(%ebp),%eax
 852afef:	0f b7 c0             	movzwl %ax,%eax
 852aff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 852aff6:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852affc:	89 04 24             	mov    %eax,(%esp)
 852afff:	e8 a0 ee ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852b004:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 852b00a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b00e:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b014:	89 04 24             	mov    %eax,(%esp)
 852b017:	e8 20 09 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b01c:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b022:	83 c0 1a             	add    $0x1a,%eax
 852b025:	89 04 24             	mov    %eax,(%esp)
 852b028:	e8 05 57 c2 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 852b02d:	0f b6 c0             	movzbl %al,%eax
 852b030:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b034:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b03a:	89 04 24             	mov    %eax,(%esp)
 852b03d:	e8 de 08 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852b042:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b048:	83 c0 1a             	add    $0x1a,%eax
 852b04b:	89 04 24             	mov    %eax,(%esp)
 852b04e:	e8 1f 57 c2 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 852b053:	0f b7 c0             	movzwl %ax,%eax
 852b056:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b05a:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b060:	89 04 24             	mov    %eax,(%esp)
 852b063:	e8 3c ee ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852b068:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b06b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b06e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b071:	89 d0                	mov    %edx,%eax
 852b073:	c1 e0 03             	shl    $0x3,%eax
 852b076:	01 d0                	add    %edx,%eax
 852b078:	c1 e0 03             	shl    $0x3,%eax
 852b07b:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b081:	01 d0                	add    %edx,%eax
 852b083:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b086:	83 c0 30             	add    $0x30,%eax
 852b089:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852b08d:	3c 08                	cmp    $0x8,%al
 852b08f:	0f 85 20 01 00 00    	jne    852b1b5 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1337>
 852b095:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 852b09c:	00 
 852b09d:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b0a3:	89 04 24             	mov    %eax,(%esp)
 852b0a6:	e8 91 08 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b0ab:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b0ae:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b0b1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b0b4:	89 d0                	mov    %edx,%eax
 852b0b6:	c1 e0 03             	shl    $0x3,%eax
 852b0b9:	01 d0                	add    %edx,%eax
 852b0bb:	c1 e0 03             	shl    $0x3,%eax
 852b0be:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b0c4:	01 d0                	add    %edx,%eax
 852b0c6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b0c9:	83 c0 40             	add    $0x40,%eax
 852b0cc:	8b 18                	mov    (%eax),%ebx
 852b0ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b0d1:	89 04 24             	mov    %eax,(%esp)
 852b0d4:	e8 a5 f1 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b0d9:	89 04 24             	mov    %eax,(%esp)
 852b0dc:	e8 95 24 bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b0e1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b0e5:	89 04 24             	mov    %eax,(%esp)
 852b0e8:	e8 0b e8 dc ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 852b0ed:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 852b0f4:	00 
 852b0f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b0f9:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b0ff:	89 04 24             	mov    %eax,(%esp)
 852b102:	e8 63 58 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b107:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 852b10e:	00 
 852b10f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b115:	89 04 24             	mov    %eax,(%esp)
 852b118:	e8 1f 08 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b11d:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b120:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b123:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b126:	89 d0                	mov    %edx,%eax
 852b128:	c1 e0 03             	shl    $0x3,%eax
 852b12b:	01 d0                	add    %edx,%eax
 852b12d:	c1 e0 03             	shl    $0x3,%eax
 852b130:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b136:	01 d0                	add    %edx,%eax
 852b138:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b13b:	83 c0 40             	add    $0x40,%eax
 852b13e:	8b 18                	mov    (%eax),%ebx
 852b140:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b143:	89 04 24             	mov    %eax,(%esp)
 852b146:	e8 33 f1 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b14b:	89 04 24             	mov    %eax,(%esp)
 852b14e:	e8 23 24 bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b153:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b157:	89 04 24             	mov    %eax,(%esp)
 852b15a:	e8 cf e7 dc ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 852b15f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 852b162:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 852b166:	74 1f                	je     852b187 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1309>
 852b168:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852b16b:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 852b172:	00 
 852b173:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b177:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b17d:	89 04 24             	mov    %eax,(%esp)
 852b180:	e8 e5 57 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b185:	eb 2e                	jmp    852b1b5 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1337>
 852b187:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 852b18d:	89 04 24             	mov    %eax,(%esp)
 852b190:	e8 89 90 e0 ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 852b195:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 852b19b:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 852b1a2:	00 
 852b1a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b1a7:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b1ad:	89 04 24             	mov    %eax,(%esp)
 852b1b0:	e8 b5 57 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b1b5:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b1bb:	83 c0 09             	add    $0x9,%eax
 852b1be:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b1c2:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b1c8:	89 04 24             	mov    %eax,(%esp)
 852b1cb:	e8 be 57 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852b1d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852b1d7:	00 
 852b1d8:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b1de:	89 04 24             	mov    %eax,(%esp)
 852b1e1:	e8 72 07 ba ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852b1e6:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b1ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b1f0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852b1f3:	89 04 24             	mov    %eax,(%esp)
 852b1f6:	e8 bf d3 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852b1fb:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852b1fe:	e9 ae 0d 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b203:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852b206:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b209:	89 d0                	mov    %edx,%eax
 852b20b:	c1 e0 03             	shl    $0x3,%eax
 852b20e:	01 d0                	add    %edx,%eax
 852b210:	c1 e0 03             	shl    $0x3,%eax
 852b213:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852b219:	01 d0                	add    %edx,%eax
 852b21b:	83 c0 30             	add    $0x30,%eax
 852b21e:	03 45 08             	add    0x8(%ebp),%eax
 852b221:	83 c0 09             	add    $0x9,%eax
 852b224:	89 04 24             	mov    %eax,(%esp)
 852b227:	e8 ac 05 ba ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852b22c:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b22f:	89 04 24             	mov    %eax,(%esp)
 852b232:	e8 57 f0 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852b237:	c7 44 24 50 10 00 00 	movl   $0x10,0x50(%esp)
 852b23e:	00 
 852b23f:	c7 44 24 4c 09 00 00 	movl   $0x9,0x4c(%esp)
 852b246:	00 
 852b247:	8b 55 14             	mov    0x14(%ebp),%edx
 852b24a:	89 54 24 48          	mov    %edx,0x48(%esp)
 852b24e:	8b 55 18             	mov    0x18(%ebp),%edx
 852b251:	89 54 24 44          	mov    %edx,0x44(%esp)
 852b255:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 852b25b:	89 54 24 04          	mov    %edx,0x4(%esp)
 852b25f:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 852b265:	89 54 24 08          	mov    %edx,0x8(%esp)
 852b269:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 852b26f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852b273:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 852b279:	89 54 24 10          	mov    %edx,0x10(%esp)
 852b27d:	8b 95 e9 fe ff ff    	mov    -0x117(%ebp),%edx
 852b283:	89 54 24 14          	mov    %edx,0x14(%esp)
 852b287:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 852b28d:	89 54 24 18          	mov    %edx,0x18(%esp)
 852b291:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 852b297:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852b29b:	8b 95 f5 fe ff ff    	mov    -0x10b(%ebp),%edx
 852b2a1:	89 54 24 20          	mov    %edx,0x20(%esp)
 852b2a5:	8b 95 f9 fe ff ff    	mov    -0x107(%ebp),%edx
 852b2ab:	89 54 24 24          	mov    %edx,0x24(%esp)
 852b2af:	8b 95 fd fe ff ff    	mov    -0x103(%ebp),%edx
 852b2b5:	89 54 24 28          	mov    %edx,0x28(%esp)
 852b2b9:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852b2bf:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852b2c3:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852b2c9:	89 54 24 30          	mov    %edx,0x30(%esp)
 852b2cd:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852b2d3:	89 54 24 34          	mov    %edx,0x34(%esp)
 852b2d7:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852b2dd:	89 54 24 38          	mov    %edx,0x38(%esp)
 852b2e1:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852b2e7:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852b2eb:	0f b6 95 15 ff ff ff 	movzbl -0xeb(%ebp),%edx
 852b2f2:	88 54 24 40          	mov    %dl,0x40(%esp)
 852b2f6:	89 04 24             	mov    %eax,(%esp)
 852b2f9:	e8 ea 86 fd ff       	call   85039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>
 852b2fe:	89 45 c0             	mov    %eax,-0x40(%ebp)
 852b301:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 852b305:	79 2c                	jns    852b333 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x14b5>
 852b307:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852b30d:	8b 55 0c             	mov    0xc(%ebp),%edx
 852b310:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 852b316:	8b 55 18             	mov    0x18(%ebp),%edx
 852b319:	89 54 24 08          	mov    %edx,0x8(%esp)
 852b31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b321:	89 0c 24             	mov    %ecx,(%esp)
 852b324:	e8 31 8a 15 00       	call   8683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>
 852b329:	bb f0 ff ff ff       	mov    $0xfffffff0,%ebx
 852b32e:	e9 7e 0c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b333:	bb ef ff ff ff       	mov    $0xffffffef,%ebx
 852b338:	e9 74 0c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b33d:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852b340:	e9 6c 0c 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b345:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b348:	89 04 24             	mov    %eax,(%esp)
 852b34b:	e8 2e ef ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b350:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 852b356:	8b 4d 14             	mov    0x14(%ebp),%ecx
 852b359:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852b35d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 852b364:	00 
 852b365:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b369:	89 14 24             	mov    %edx,(%esp)
 852b36c:	e8 a7 05 fd ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 852b371:	83 ec 04             	sub    $0x4,%esp
 852b374:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 852b37a:	89 85 d9 fe ff ff    	mov    %eax,-0x127(%ebp)
 852b380:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 852b386:	89 85 dd fe ff ff    	mov    %eax,-0x123(%ebp)
 852b38c:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 852b392:	89 85 e1 fe ff ff    	mov    %eax,-0x11f(%ebp)
 852b398:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 852b39e:	89 85 e5 fe ff ff    	mov    %eax,-0x11b(%ebp)
 852b3a4:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 852b3aa:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 852b3b0:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 852b3b6:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 852b3bc:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 852b3c2:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 852b3c8:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 852b3ce:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 852b3d4:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 852b3da:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 852b3e0:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 852b3e6:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 852b3ec:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 852b3f2:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 852b3f8:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 852b3fe:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 852b404:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 852b40a:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 852b410:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 852b416:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 852b41c:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 852b422:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 852b428:	0f b6 85 c4 fe ff ff 	movzbl -0x13c(%ebp),%eax
 852b42f:	88 85 15 ff ff ff    	mov    %al,-0xeb(%ebp)
 852b435:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 852b439:	7f 0a                	jg     852b445 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x15c7>
 852b43b:	bb f7 ff ff ff       	mov    $0xfffffff7,%ebx
 852b440:	e9 6c 0b 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b445:	8b 45 14             	mov    0x14(%ebp),%eax
 852b448:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 852b44e:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b451:	89 04 24             	mov    %eax,(%esp)
 852b454:	e8 f5 07 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852b459:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 852b45f:	8b 9d e0 fe ff ff    	mov    -0x120(%ebp),%ebx
 852b465:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b468:	89 04 24             	mov    %eax,(%esp)
 852b46b:	e8 0e ee ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b470:	89 04 24             	mov    %eax,(%esp)
 852b473:	e8 fe 20 bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b478:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b47c:	89 04 24             	mov    %eax,(%esp)
 852b47f:	e8 96 e3 dc ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 852b484:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 852b487:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 852b48b:	74 18                	je     852b4a5 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1627>
 852b48d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 852b494:	e8 05 08 ba ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 852b499:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 852b49c:	7e 07                	jle    852b4a5 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1627>
 852b49e:	b8 01 00 00 00       	mov    $0x1,%eax
 852b4a3:	eb 05                	jmp    852b4aa <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x162c>
 852b4a5:	b8 00 00 00 00       	mov    $0x0,%eax
 852b4aa:	84 c0                	test   %al,%al
 852b4ac:	74 0a                	je     852b4b8 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x163a>
 852b4ae:	bb 9c ff ff ff       	mov    $0xffffff9c,%ebx
 852b4b3:	e9 f9 0a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b4b8:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 852b4be:	89 04 24             	mov    %eax,(%esp)
 852b4c1:	e8 47 1d d0 ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 852b4c6:	84 c0                	test   %al,%al
 852b4c8:	74 0a                	je     852b4d4 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1656>
 852b4ca:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852b4cf:	e9 dd 0a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b4d4:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b4da:	83 c0 09             	add    $0x9,%eax
 852b4dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 852b4e4:	89 04 24             	mov    %eax,(%esp)
 852b4e7:	e8 e2 e8 ff ff       	call   8529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>
 852b4ec:	83 f0 01             	xor    $0x1,%eax
 852b4ef:	84 c0                	test   %al,%al
 852b4f1:	74 0a                	je     852b4fd <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x167f>
 852b4f3:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852b4f8:	e9 b4 0a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b4fd:	c7 45 cc 03 00 00 00 	movl   $0x3,-0x34(%ebp)
 852b504:	eb 3b                	jmp    852b541 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x16c3>
 852b506:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b509:	8b 55 cc             	mov    -0x34(%ebp),%edx
 852b50c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b50f:	89 d0                	mov    %edx,%eax
 852b511:	c1 e0 03             	shl    $0x3,%eax
 852b514:	01 d0                	add    %edx,%eax
 852b516:	c1 e0 03             	shl    $0x3,%eax
 852b519:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b51f:	01 d0                	add    %edx,%eax
 852b521:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b524:	83 c0 40             	add    $0x40,%eax
 852b527:	8b 10                	mov    (%eax),%edx
 852b529:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 852b52f:	39 c2                	cmp    %eax,%edx
 852b531:	75 0a                	jne    852b53d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x16bf>
 852b533:	bb 99 ff ff ff       	mov    $0xffffff99,%ebx
 852b538:	e9 74 0a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b53d:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 852b541:	83 7d cc 1a          	cmpl   $0x1a,-0x34(%ebp)
 852b545:	0f 9e c0             	setle  %al
 852b548:	84 c0                	test   %al,%al
 852b54a:	75 ba                	jne    852b506 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1688>
 852b54c:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b54f:	89 04 24             	mov    %eax,(%esp)
 852b552:	e8 37 ed ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852b557:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 852b55e:	00 
 852b55f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 852b566:	00 
 852b567:	8b 55 18             	mov    0x18(%ebp),%edx
 852b56a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852b56e:	8b 55 14             	mov    0x14(%ebp),%edx
 852b571:	89 54 24 08          	mov    %edx,0x8(%esp)
 852b575:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 852b57c:	00 
 852b57d:	89 04 24             	mov    %eax,(%esp)
 852b580:	e8 87 8a fd ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 852b585:	88 45 cb             	mov    %al,-0x35(%ebp)
 852b588:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 852b58c:	83 f0 01             	xor    $0x1,%eax
 852b58f:	84 c0                	test   %al,%al
 852b591:	74 0a                	je     852b59d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x171f>
 852b593:	bb f6 ff ff ff       	mov    $0xfffffff6,%ebx
 852b598:	e9 14 0a 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b59d:	8b 45 18             	mov    0x18(%ebp),%eax
 852b5a0:	89 44 24 50          	mov    %eax,0x50(%esp)
 852b5a4:	8d 54 24 08          	lea    0x8(%esp),%edx
 852b5a8:	8d 9d d0 fe ff ff    	lea    -0x130(%ebp),%ebx
 852b5ae:	b8 12 00 00 00       	mov    $0x12,%eax
 852b5b3:	89 d7                	mov    %edx,%edi
 852b5b5:	89 de                	mov    %ebx,%esi
 852b5b7:	89 c1                	mov    %eax,%ecx
 852b5b9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852b5bb:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 852b5be:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b5c2:	8b 45 08             	mov    0x8(%ebp),%eax
 852b5c5:	89 04 24             	mov    %eax,(%esp)
 852b5c8:	e8 d5 e4 ff ff       	call   8529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>
 852b5cd:	89 45 a8             	mov    %eax,-0x58(%ebp)
 852b5d0:	83 7d a8 ff          	cmpl   $0xffffffff,-0x58(%ebp)
 852b5d4:	0f 84 68 04 00 00    	je     852ba42 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1bc4>
 852b5da:	8b 45 08             	mov    0x8(%ebp),%eax
 852b5dd:	89 04 24             	mov    %eax,(%esp)
 852b5e0:	e8 2b 4c 00 00       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 852b5e5:	84 c0                	test   %al,%al
 852b5e7:	74 16                	je     852b5ff <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1781>
 852b5e9:	8b 45 08             	mov    0x8(%ebp),%eax
 852b5ec:	89 04 24             	mov    %eax,(%esp)
 852b5ef:	e8 c4 25 00 00       	call   852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>
 852b5f4:	84 c0                	test   %al,%al
 852b5f6:	74 07                	je     852b5ff <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1781>
 852b5f8:	b8 01 00 00 00       	mov    $0x1,%eax
 852b5fd:	eb 05                	jmp    852b604 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1786>
 852b5ff:	b8 00 00 00 00       	mov    $0x0,%eax
 852b604:	84 c0                	test   %al,%al
 852b606:	0f 84 03 03 00 00    	je     852b90f <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1a91>
 852b60c:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852b60f:	8b 45 08             	mov    0x8(%ebp),%eax
 852b612:	83 c2 08             	add    $0x8,%edx
 852b615:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852b61c:	00 
 852b61d:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852b620:	8b 45 08             	mov    0x8(%ebp),%eax
 852b623:	83 c2 08             	add    $0x8,%edx
 852b626:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852b62d:	00 
 852b62e:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b634:	89 04 24             	mov    %eax,(%esp)
 852b637:	e8 aa 02 ba ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852b63c:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852b643:	00 
 852b644:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852b64b:	00 
 852b64c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b652:	89 04 24             	mov    %eax,(%esp)
 852b655:	e8 a2 02 ba ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852b65a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 852b65d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b661:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b667:	89 04 24             	mov    %eax,(%esp)
 852b66a:	e8 35 e8 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852b66f:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852b675:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b679:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b67f:	89 04 24             	mov    %eax,(%esp)
 852b682:	e8 b5 02 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b687:	e8 76 11 06 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 852b68c:	89 c6                	mov    %eax,%esi
 852b68e:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852b691:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b694:	89 d0                	mov    %edx,%eax
 852b696:	c1 e0 03             	shl    $0x3,%eax
 852b699:	01 d0                	add    %edx,%eax
 852b69b:	c1 e0 03             	shl    $0x3,%eax
 852b69e:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852b6a4:	01 d0                	add    %edx,%eax
 852b6a6:	83 c0 30             	add    $0x30,%eax
 852b6a9:	03 45 08             	add    0x8(%ebp),%eax
 852b6ac:	83 c0 09             	add    $0x9,%eax
 852b6af:	89 04 24             	mov    %eax,(%esp)
 852b6b2:	e8 83 c1 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852b6b7:	89 c3                	mov    %eax,%ebx
 852b6b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b6bc:	89 04 24             	mov    %eax,(%esp)
 852b6bf:	e8 ba eb ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b6c4:	89 04 24             	mov    %eax,(%esp)
 852b6c7:	e8 aa 1e bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b6cc:	89 74 24 08          	mov    %esi,0x8(%esp)
 852b6d0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b6d4:	89 04 24             	mov    %eax,(%esp)
 852b6d7:	e8 74 e1 dc ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 852b6dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b6e0:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b6e6:	89 04 24             	mov    %eax,(%esp)
 852b6e9:	e8 4e 02 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b6ee:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b6f4:	83 c0 09             	add    $0x9,%eax
 852b6f7:	89 04 24             	mov    %eax,(%esp)
 852b6fa:	e8 dd 50 c2 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 852b6ff:	0f b6 c0             	movzbl %al,%eax
 852b702:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b706:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b70c:	89 04 24             	mov    %eax,(%esp)
 852b70f:	e8 0c 02 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852b714:	0f b7 85 e4 fe ff ff 	movzwl -0x11c(%ebp),%eax
 852b71b:	0f b7 c0             	movzwl %ax,%eax
 852b71e:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b722:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b728:	89 04 24             	mov    %eax,(%esp)
 852b72b:	e8 74 e7 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852b730:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 852b736:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b73a:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b740:	89 04 24             	mov    %eax,(%esp)
 852b743:	e8 f4 01 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b748:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852b74f:	00 
 852b750:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b756:	89 04 24             	mov    %eax,(%esp)
 852b759:	e8 c2 01 ba ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852b75e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852b765:	00 
 852b766:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b76c:	89 04 24             	mov    %eax,(%esp)
 852b76f:	e8 30 e7 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852b774:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b777:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b77a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b77d:	89 d0                	mov    %edx,%eax
 852b77f:	c1 e0 03             	shl    $0x3,%eax
 852b782:	01 d0                	add    %edx,%eax
 852b784:	c1 e0 03             	shl    $0x3,%eax
 852b787:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b78d:	01 d0                	add    %edx,%eax
 852b78f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b792:	83 c0 30             	add    $0x30,%eax
 852b795:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852b799:	3c 08                	cmp    $0x8,%al
 852b79b:	0f 85 20 01 00 00    	jne    852b8c1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1a43>
 852b7a1:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 852b7a8:	00 
 852b7a9:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b7af:	89 04 24             	mov    %eax,(%esp)
 852b7b2:	e8 85 01 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b7b7:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b7ba:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b7bd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b7c0:	89 d0                	mov    %edx,%eax
 852b7c2:	c1 e0 03             	shl    $0x3,%eax
 852b7c5:	01 d0                	add    %edx,%eax
 852b7c7:	c1 e0 03             	shl    $0x3,%eax
 852b7ca:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b7d0:	01 d0                	add    %edx,%eax
 852b7d2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b7d5:	83 c0 40             	add    $0x40,%eax
 852b7d8:	8b 18                	mov    (%eax),%ebx
 852b7da:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b7dd:	89 04 24             	mov    %eax,(%esp)
 852b7e0:	e8 99 ea ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b7e5:	89 04 24             	mov    %eax,(%esp)
 852b7e8:	e8 89 1d bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b7ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b7f1:	89 04 24             	mov    %eax,(%esp)
 852b7f4:	e8 ff e0 dc ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 852b7f9:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 852b800:	00 
 852b801:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b805:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b80b:	89 04 24             	mov    %eax,(%esp)
 852b80e:	e8 57 51 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b813:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 852b81a:	00 
 852b81b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b821:	89 04 24             	mov    %eax,(%esp)
 852b824:	e8 13 01 ba ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852b829:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 852b82c:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b82f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852b832:	89 d0                	mov    %edx,%eax
 852b834:	c1 e0 03             	shl    $0x3,%eax
 852b837:	01 d0                	add    %edx,%eax
 852b839:	c1 e0 03             	shl    $0x3,%eax
 852b83c:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852b842:	01 d0                	add    %edx,%eax
 852b844:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852b847:	83 c0 40             	add    $0x40,%eax
 852b84a:	8b 18                	mov    (%eax),%ebx
 852b84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b84f:	89 04 24             	mov    %eax,(%esp)
 852b852:	e8 27 ea ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852b857:	89 04 24             	mov    %eax,(%esp)
 852b85a:	e8 17 1d bb ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 852b85f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852b863:	89 04 24             	mov    %eax,(%esp)
 852b866:	e8 c3 e0 dc ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 852b86b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 852b86e:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 852b872:	74 1f                	je     852b893 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1a15>
 852b874:	8b 45 d0             	mov    -0x30(%ebp),%eax
 852b877:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 852b87e:	00 
 852b87f:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b883:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b889:	89 04 24             	mov    %eax,(%esp)
 852b88c:	e8 d9 50 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b891:	eb 2e                	jmp    852b8c1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1a43>
 852b893:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 852b899:	89 04 24             	mov    %eax,(%esp)
 852b89c:	e8 7d 89 e0 ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 852b8a1:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 852b8a7:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 852b8ae:	00 
 852b8af:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b8b3:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b8b9:	89 04 24             	mov    %eax,(%esp)
 852b8bc:	e8 a9 50 c2 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 852b8c1:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852b8c7:	83 c0 09             	add    $0x9,%eax
 852b8ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b8ce:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b8d4:	89 04 24             	mov    %eax,(%esp)
 852b8d7:	e8 b2 50 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852b8dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852b8e3:	00 
 852b8e4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b8ea:	89 04 24             	mov    %eax,(%esp)
 852b8ed:	e8 66 00 ba ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852b8f2:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852b8f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 852b8fc:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852b8ff:	89 04 24             	mov    %eax,(%esp)
 852b902:	e8 b3 cc 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852b907:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852b90a:	e9 a2 06 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852b90f:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852b912:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852b915:	89 d0                	mov    %edx,%eax
 852b917:	c1 e0 03             	shl    $0x3,%eax
 852b91a:	01 d0                	add    %edx,%eax
 852b91c:	c1 e0 03             	shl    $0x3,%eax
 852b91f:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852b925:	01 d0                	add    %edx,%eax
 852b927:	83 c0 30             	add    $0x30,%eax
 852b92a:	03 45 08             	add    0x8(%ebp),%eax
 852b92d:	83 c0 09             	add    $0x9,%eax
 852b930:	89 04 24             	mov    %eax,(%esp)
 852b933:	e8 a0 fe b9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852b938:	8b 45 0c             	mov    0xc(%ebp),%eax
 852b93b:	89 04 24             	mov    %eax,(%esp)
 852b93e:	e8 4b e9 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852b943:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852b94a:	00 
 852b94b:	c7 44 24 48 04 00 00 	movl   $0x4,0x48(%esp)
 852b952:	00 
 852b953:	8b 55 14             	mov    0x14(%ebp),%edx
 852b956:	89 54 24 44          	mov    %edx,0x44(%esp)
 852b95a:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 852b960:	89 54 24 04          	mov    %edx,0x4(%esp)
 852b964:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 852b96a:	89 54 24 08          	mov    %edx,0x8(%esp)
 852b96e:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 852b974:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852b978:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 852b97e:	89 54 24 10          	mov    %edx,0x10(%esp)
 852b982:	8b 95 e9 fe ff ff    	mov    -0x117(%ebp),%edx
 852b988:	89 54 24 14          	mov    %edx,0x14(%esp)
 852b98c:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 852b992:	89 54 24 18          	mov    %edx,0x18(%esp)
 852b996:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 852b99c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852b9a0:	8b 95 f5 fe ff ff    	mov    -0x10b(%ebp),%edx
 852b9a6:	89 54 24 20          	mov    %edx,0x20(%esp)
 852b9aa:	8b 95 f9 fe ff ff    	mov    -0x107(%ebp),%edx
 852b9b0:	89 54 24 24          	mov    %edx,0x24(%esp)
 852b9b4:	8b 95 fd fe ff ff    	mov    -0x103(%ebp),%edx
 852b9ba:	89 54 24 28          	mov    %edx,0x28(%esp)
 852b9be:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852b9c4:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852b9c8:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852b9ce:	89 54 24 30          	mov    %edx,0x30(%esp)
 852b9d2:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852b9d8:	89 54 24 34          	mov    %edx,0x34(%esp)
 852b9dc:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852b9e2:	89 54 24 38          	mov    %edx,0x38(%esp)
 852b9e6:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852b9ec:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852b9f0:	0f b6 95 15 ff ff ff 	movzbl -0xeb(%ebp),%edx
 852b9f7:	88 54 24 40          	mov    %dl,0x40(%esp)
 852b9fb:	89 04 24             	mov    %eax,(%esp)
 852b9fe:	e8 d5 7d fd ff       	call   85037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>
 852ba03:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 852ba06:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 852ba0a:	79 2c                	jns    852ba38 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1bba>
 852ba0c:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852ba12:	8b 55 0c             	mov    0xc(%ebp),%edx
 852ba15:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 852ba1b:	8b 55 18             	mov    0x18(%ebp),%edx
 852ba1e:	89 54 24 08          	mov    %edx,0x8(%esp)
 852ba22:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ba26:	89 0c 24             	mov    %ecx,(%esp)
 852ba29:	e8 2c 83 15 00       	call   8683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>
 852ba2e:	bb f5 ff ff ff       	mov    $0xfffffff5,%ebx
 852ba33:	e9 79 05 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ba38:	bb f4 ff ff ff       	mov    $0xfffffff4,%ebx
 852ba3d:	e9 6f 05 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ba42:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852ba45:	e9 67 05 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852ba4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 852ba4d:	89 04 24             	mov    %eax,(%esp)
 852ba50:	e8 29 e8 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852ba55:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 852ba5b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 852ba5e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852ba62:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 852ba69:	00 
 852ba6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852ba6e:	89 14 24             	mov    %edx,(%esp)
 852ba71:	e8 a2 fe fc ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 852ba76:	83 ec 04             	sub    $0x4,%esp
 852ba79:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 852ba7f:	89 85 d9 fe ff ff    	mov    %eax,-0x127(%ebp)
 852ba85:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 852ba8b:	89 85 dd fe ff ff    	mov    %eax,-0x123(%ebp)
 852ba91:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 852ba97:	89 85 e1 fe ff ff    	mov    %eax,-0x11f(%ebp)
 852ba9d:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 852baa3:	89 85 e5 fe ff ff    	mov    %eax,-0x11b(%ebp)
 852baa9:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 852baaf:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 852bab5:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 852babb:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 852bac1:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 852bac7:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 852bacd:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 852bad3:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 852bad9:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 852badf:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 852bae5:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 852baeb:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 852baf1:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 852baf7:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 852bafd:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 852bb03:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 852bb09:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 852bb0f:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 852bb15:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 852bb1b:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 852bb21:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 852bb27:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 852bb2d:	0f b6 85 c4 fe ff ff 	movzbl -0x13c(%ebp),%eax
 852bb34:	88 85 15 ff ff ff    	mov    %al,-0xeb(%ebp)
 852bb3a:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 852bb3e:	7f 0a                	jg     852bb4a <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1ccc>
 852bb40:	bb f7 ff ff ff       	mov    $0xfffffff7,%ebx
 852bb45:	e9 67 04 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bb4a:	8b 45 14             	mov    0x14(%ebp),%eax
 852bb4d:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 852bb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 852bb56:	89 04 24             	mov    %eax,(%esp)
 852bb59:	e8 f0 00 ba ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852bb5e:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 852bb64:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852bb6a:	83 c0 09             	add    $0x9,%eax
 852bb6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bb71:	8b 45 08             	mov    0x8(%ebp),%eax
 852bb74:	89 04 24             	mov    %eax,(%esp)
 852bb77:	e8 52 e2 ff ff       	call   8529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>
 852bb7c:	83 f0 01             	xor    $0x1,%eax
 852bb7f:	84 c0                	test   %al,%al
 852bb81:	74 0a                	je     852bb8d <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1d0f>
 852bb83:	bb 9a ff ff ff       	mov    $0xffffff9a,%ebx
 852bb88:	e9 24 04 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bb8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 852bb90:	89 04 24             	mov    %eax,(%esp)
 852bb93:	e8 f6 e6 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852bb98:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 852bb9f:	00 
 852bba0:	c7 44 24 10 15 00 00 	movl   $0x15,0x10(%esp)
 852bba7:	00 
 852bba8:	8b 55 18             	mov    0x18(%ebp),%edx
 852bbab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852bbaf:	8b 55 14             	mov    0x14(%ebp),%edx
 852bbb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 852bbb6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 852bbbd:	00 
 852bbbe:	89 04 24             	mov    %eax,(%esp)
 852bbc1:	e8 46 84 fd ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 852bbc6:	88 45 db             	mov    %al,-0x25(%ebp)
 852bbc9:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 852bbcd:	83 f0 01             	xor    $0x1,%eax
 852bbd0:	84 c0                	test   %al,%al
 852bbd2:	74 0a                	je     852bbde <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1d60>
 852bbd4:	bb f6 ff ff ff       	mov    $0xfffffff6,%ebx
 852bbd9:	e9 d3 03 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bbde:	8b 45 18             	mov    0x18(%ebp),%eax
 852bbe1:	89 44 24 50          	mov    %eax,0x50(%esp)
 852bbe5:	8d 54 24 08          	lea    0x8(%esp),%edx
 852bbe9:	8d 9d d0 fe ff ff    	lea    -0x130(%ebp),%ebx
 852bbef:	b8 12 00 00 00       	mov    $0x12,%eax
 852bbf4:	89 d7                	mov    %edx,%edi
 852bbf6:	89 de                	mov    %ebx,%esi
 852bbf8:	89 c1                	mov    %eax,%ecx
 852bbfa:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852bbfc:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 852bbff:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bc03:	8b 45 08             	mov    0x8(%ebp),%eax
 852bc06:	89 04 24             	mov    %eax,(%esp)
 852bc09:	e8 94 de ff ff       	call   8529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>
 852bc0e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 852bc11:	83 7d a8 ff          	cmpl   $0xffffffff,-0x58(%ebp)
 852bc15:	0f 84 6c 03 00 00    	je     852bf87 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2109>
 852bc1b:	8b 45 08             	mov    0x8(%ebp),%eax
 852bc1e:	89 04 24             	mov    %eax,(%esp)
 852bc21:	e8 ea 45 00 00       	call   8530210 <_ZN11CTradeSpace10checkTradeEv>
 852bc26:	84 c0                	test   %al,%al
 852bc28:	74 16                	je     852bc40 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1dc2>
 852bc2a:	8b 45 08             	mov    0x8(%ebp),%eax
 852bc2d:	89 04 24             	mov    %eax,(%esp)
 852bc30:	e8 83 1f 00 00       	call   852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>
 852bc35:	84 c0                	test   %al,%al
 852bc37:	74 07                	je     852bc40 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1dc2>
 852bc39:	b8 01 00 00 00       	mov    $0x1,%eax
 852bc3e:	eb 05                	jmp    852bc45 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1dc7>
 852bc40:	b8 00 00 00 00       	mov    $0x0,%eax
 852bc45:	84 c0                	test   %al,%al
 852bc47:	0f 84 0d 02 00 00    	je     852be5a <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1fdc>
 852bc4d:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 852bc50:	8b 45 08             	mov    0x8(%ebp),%eax
 852bc53:	83 c2 08             	add    $0x8,%edx
 852bc56:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852bc5d:	00 
 852bc5e:	8b 55 a0             	mov    -0x60(%ebp),%edx
 852bc61:	8b 45 08             	mov    0x8(%ebp),%eax
 852bc64:	83 c2 08             	add    $0x8,%edx
 852bc67:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852bc6e:	00 
 852bc6f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bc75:	89 04 24             	mov    %eax,(%esp)
 852bc78:	e8 69 fc b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852bc7d:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852bc84:	00 
 852bc85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852bc8c:	00 
 852bc8d:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bc93:	89 04 24             	mov    %eax,(%esp)
 852bc96:	e8 61 fc b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852bc9b:	8b 45 a8             	mov    -0x58(%ebp),%eax
 852bc9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bca2:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bca8:	89 04 24             	mov    %eax,(%esp)
 852bcab:	e8 f4 e1 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852bcb0:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852bcb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bcba:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bcc0:	89 04 24             	mov    %eax,(%esp)
 852bcc3:	e8 74 fc b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852bcc8:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852bccb:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852bcce:	89 d0                	mov    %edx,%eax
 852bcd0:	c1 e0 03             	shl    $0x3,%eax
 852bcd3:	01 d0                	add    %edx,%eax
 852bcd5:	c1 e0 03             	shl    $0x3,%eax
 852bcd8:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852bcde:	01 d0                	add    %edx,%eax
 852bce0:	83 c0 30             	add    $0x30,%eax
 852bce3:	03 45 08             	add    0x8(%ebp),%eax
 852bce6:	83 c0 09             	add    $0x9,%eax
 852bce9:	89 04 24             	mov    %eax,(%esp)
 852bcec:	e8 49 bb bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852bcf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bcf5:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bcfb:	89 04 24             	mov    %eax,(%esp)
 852bcfe:	e8 39 fc b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852bd03:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852bd09:	83 c0 09             	add    $0x9,%eax
 852bd0c:	89 04 24             	mov    %eax,(%esp)
 852bd0f:	e8 c8 4a c2 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 852bd14:	0f b6 c0             	movzbl %al,%eax
 852bd17:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bd1b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bd21:	89 04 24             	mov    %eax,(%esp)
 852bd24:	e8 f7 fb b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852bd29:	0f b7 85 e4 fe ff ff 	movzwl -0x11c(%ebp),%eax
 852bd30:	0f b7 c0             	movzwl %ax,%eax
 852bd33:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bd37:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bd3d:	89 04 24             	mov    %eax,(%esp)
 852bd40:	e8 5f e1 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852bd45:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 852bd4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bd4f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bd55:	89 04 24             	mov    %eax,(%esp)
 852bd58:	e8 df fb b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852bd5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852bd64:	00 
 852bd65:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bd6b:	89 04 24             	mov    %eax,(%esp)
 852bd6e:	e8 ad fb b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852bd73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852bd7a:	00 
 852bd7b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bd81:	89 04 24             	mov    %eax,(%esp)
 852bd84:	e8 1b e1 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852bd89:	0f b6 85 da fe ff ff 	movzbl -0x126(%ebp),%eax
 852bd90:	3c 05                	cmp    $0x5,%al
 852bd92:	75 78                	jne    852be0c <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x1f8e>
 852bd94:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 852bd9b:	e8 62 0a 06 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 852bda0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852bda3:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852bda6:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852bda9:	89 d0                	mov    %edx,%eax
 852bdab:	c1 e0 03             	shl    $0x3,%eax
 852bdae:	01 d0                	add    %edx,%eax
 852bdb0:	c1 e0 03             	shl    $0x3,%eax
 852bdb3:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852bdb9:	01 d0                	add    %edx,%eax
 852bdbb:	83 c0 30             	add    $0x30,%eax
 852bdbe:	03 45 08             	add    0x8(%ebp),%eax
 852bdc1:	83 c0 09             	add    $0x9,%eax
 852bdc4:	89 04 24             	mov    %eax,(%esp)
 852bdc7:	e8 6e ba bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852bdcc:	89 c3                	mov    %eax,%ebx
 852bdce:	8b 45 0c             	mov    0xc(%ebp),%eax
 852bdd1:	89 04 24             	mov    %eax,(%esp)
 852bdd4:	e8 a5 e4 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852bdd9:	89 04 24             	mov    %eax,(%esp)
 852bddc:	e8 27 b6 c8 ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 852bde1:	8b 55 dc             	mov    -0x24(%ebp),%edx
 852bde4:	89 54 24 08          	mov    %edx,0x8(%esp)
 852bde8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852bdec:	89 04 24             	mov    %eax,(%esp)
 852bdef:	e8 9a 19 e1 ff       	call   833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>
 852bdf4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 852bdf7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 852bdfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bdfe:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852be04:	89 04 24             	mov    %eax,(%esp)
 852be07:	e8 30 fb b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852be0c:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 852be12:	83 c0 09             	add    $0x9,%eax
 852be15:	89 44 24 04          	mov    %eax,0x4(%esp)
 852be19:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852be1f:	89 04 24             	mov    %eax,(%esp)
 852be22:	e8 67 4b c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852be27:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852be2e:	00 
 852be2f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852be35:	89 04 24             	mov    %eax,(%esp)
 852be38:	e8 1b fb b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852be3d:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852be43:	89 44 24 04          	mov    %eax,0x4(%esp)
 852be47:	8b 45 9c             	mov    -0x64(%ebp),%eax
 852be4a:	89 04 24             	mov    %eax,(%esp)
 852be4d:	e8 68 c7 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852be52:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852be55:	e9 57 01 00 00       	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852be5a:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 852be5d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 852be60:	89 d0                	mov    %edx,%eax
 852be62:	c1 e0 03             	shl    $0x3,%eax
 852be65:	01 d0                	add    %edx,%eax
 852be67:	c1 e0 03             	shl    $0x3,%eax
 852be6a:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852be70:	01 d0                	add    %edx,%eax
 852be72:	83 c0 30             	add    $0x30,%eax
 852be75:	03 45 08             	add    0x8(%ebp),%eax
 852be78:	83 c0 09             	add    $0x9,%eax
 852be7b:	89 04 24             	mov    %eax,(%esp)
 852be7e:	e8 55 f9 b9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 852be83:	8b 45 0c             	mov    0xc(%ebp),%eax
 852be86:	89 04 24             	mov    %eax,(%esp)
 852be89:	e8 00 e4 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852be8e:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852be95:	00 
 852be96:	c7 44 24 48 1d 00 00 	movl   $0x1d,0x48(%esp)
 852be9d:	00 
 852be9e:	8b 55 14             	mov    0x14(%ebp),%edx
 852bea1:	89 54 24 44          	mov    %edx,0x44(%esp)
 852bea5:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 852beab:	89 54 24 04          	mov    %edx,0x4(%esp)
 852beaf:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 852beb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 852beb9:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 852bebf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852bec3:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 852bec9:	89 54 24 10          	mov    %edx,0x10(%esp)
 852becd:	8b 95 e9 fe ff ff    	mov    -0x117(%ebp),%edx
 852bed3:	89 54 24 14          	mov    %edx,0x14(%esp)
 852bed7:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 852bedd:	89 54 24 18          	mov    %edx,0x18(%esp)
 852bee1:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 852bee7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852beeb:	8b 95 f5 fe ff ff    	mov    -0x10b(%ebp),%edx
 852bef1:	89 54 24 20          	mov    %edx,0x20(%esp)
 852bef5:	8b 95 f9 fe ff ff    	mov    -0x107(%ebp),%edx
 852befb:	89 54 24 24          	mov    %edx,0x24(%esp)
 852beff:	8b 95 fd fe ff ff    	mov    -0x103(%ebp),%edx
 852bf05:	89 54 24 28          	mov    %edx,0x28(%esp)
 852bf09:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852bf0f:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852bf13:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852bf19:	89 54 24 30          	mov    %edx,0x30(%esp)
 852bf1d:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852bf23:	89 54 24 34          	mov    %edx,0x34(%esp)
 852bf27:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852bf2d:	89 54 24 38          	mov    %edx,0x38(%esp)
 852bf31:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852bf37:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852bf3b:	0f b6 95 15 ff ff ff 	movzbl -0xeb(%ebp),%edx
 852bf42:	88 54 24 40          	mov    %dl,0x40(%esp)
 852bf46:	89 04 24             	mov    %eax,(%esp)
 852bf49:	e8 c2 eb fd ff       	call   850ab10 <_ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb>
 852bf4e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 852bf51:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 852bf55:	79 29                	jns    852bf80 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2102>
 852bf57:	8b 85 db fe ff ff    	mov    -0x125(%ebp),%eax
 852bf5d:	8b 55 0c             	mov    0xc(%ebp),%edx
 852bf60:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 852bf66:	8b 55 18             	mov    0x18(%ebp),%edx
 852bf69:	89 54 24 08          	mov    %edx,0x8(%esp)
 852bf6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 852bf71:	89 0c 24             	mov    %ecx,(%esp)
 852bf74:	e8 e1 7d 15 00       	call   8683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>
 852bf79:	bb f5 ff ff ff       	mov    $0xfffffff5,%ebx
 852bf7e:	eb 31                	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bf80:	bb f4 ff ff ff       	mov    $0xfffffff4,%ebx
 852bf85:	eb 2a                	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bf87:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 852bf8a:	eb 25                	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bf8c:	bb ec ff ff ff       	mov    $0xffffffec,%ebx
 852bf91:	eb 1e                	jmp    852bfb1 <_ZN11CTradeSpace11regist_itemEP5CUseriii+0x2133>
 852bf93:	89 d3                	mov    %edx,%ebx
 852bf95:	89 c6                	mov    %eax,%esi
 852bf97:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bf9d:	89 04 24             	mov    %eax,(%esp)
 852bfa0:	e8 db 1e 06 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852bfa5:	89 f0                	mov    %esi,%eax
 852bfa7:	89 da                	mov    %ebx,%edx
 852bfa9:	89 04 24             	mov    %eax,(%esp)
 852bfac:	e8 9f 77 5b 00       	call   8ae3750 <_Unwind_Resume>
 852bfb1:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 852bfb7:	89 04 24             	mov    %eax,(%esp)
 852bfba:	e8 c1 1e 06 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852bfbf:	89 d8                	mov    %ebx,%eax
 852bfc1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 852bfc4:	83 c4 00             	add    $0x0,%esp
 852bfc7:	5b                   	pop    %ebx
 852bfc8:	5e                   	pop    %esi
 852bfc9:	5f                   	pop    %edi
 852bfca:	5d                   	pop    %ebp
 852bfcb:	c3                   	ret

```

```c
// CTradeSpace::regist_item @ 0x8529e7e

/* CTradeSpace::regist_item(CUser*, int, int, int) */

int __thiscall
CTradeSpace::regist_item(CTradeSpace *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  uint uVar6;
  CAvatarItemMgr *pCVar7;
  int iVar8;
  char *pcVar9;
  CCreatureMgr *this_00;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  undefined1 local_17c [12];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  Inven_Item local_12b;
  char cStack_12a;
  undefined2 uStack_129;
  undefined2 local_127;
  undefined1 uStack_125;
  int iStack_124;
  undefined1 uStack_120;
  undefined4 uStack_11f;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined1 local_ef;
  stAvatarExpansionInfo_t local_ec [4];
  stAvatarExpansionInfo_t local_e8 [4];
  PacketGuard local_e4 [12];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  CUser *local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  char local_55;
  int local_54;
  char local_4d;
  int local_4c;
  char *local_48;
  int local_44;
  int local_40;
  char local_39;
  int local_38;
  char *local_34;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  bVar13 = 0;
  cVar1 = IsLocked(this);
  if (cVar1 != '\0') {
    return -99;
  }
  if (param_4 < 1) {
    return -0x62;
  }
  bVar12 = *(CUser **)(this + 0x20) != param_1;
  if (bVar12) {
    local_68 = *(CUser **)(this + 0x20);
  }
  else {
    local_68 = *(CUser **)(this + 0x24);
  }
  local_60 = (uint)bVar12;
  local_64 = (uint)!bVar12;
  if (local_68 == (CUser *)0x0) {
    return -1;
  }
  TradeSlot::TradeSlot((TradeSlot *)&local_134);
  local_12c = (undefined1)param_2;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    cMyTrace::cMyTrace(local_d8,"int CTradeSpace::regist_item(CUser*, int, int, int)",0x147,5);
    cMyTrace::operator()(local_d8,"CTradeSpace::regist_item()\t0 == owner->getCurCharacR()");
    return -2;
  }
  if ((param_2 == 0) ||
     ((cVar1 = CUser::isHackUser(param_1), cVar1 == '\0' &&
      (cVar1 = CUser::isHackUser(local_68), cVar1 == '\0')))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (bVar12) {
    return -0x153;
  }
  PacketGuard::PacketGuard(local_e4);
  if (param_2 == 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_17c,iVar2);
    local_12b = SUB41(local_17c._0_4_,0);
    cStack_12a = SUB41(local_17c._0_4_,1);
    uStack_129 = SUB42(local_17c._0_4_,2);
    local_127 = (undefined2)local_17c._4_4_;
    uStack_125 = SUB41(local_17c._4_4_,2);
    iStack_124._1_3_ = (undefined3)local_17c._8_4_;
    iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
    uStack_120 = SUB41(local_17c._8_4_,3);
    uStack_11f = local_170;
    local_11b = local_16c;
    local_117 = local_168;
    local_113 = local_164;
    local_10f = local_160;
    local_10b = local_15c;
    local_107 = local_158;
    local_103 = local_154;
    local_ff = local_150;
    local_fb = local_14c;
    local_f7 = local_148;
    local_f3 = local_144;
    local_ef = local_140;
    if (param_4 < 1) {
      iVar2 = -9;
    }
    else {
      local_134 = param_3;
      local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      iVar2 = iStack_124;
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
      local_40 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar7,iVar2);
      if ((local_40 == 0) ||
         (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         iVar2 <= local_40)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        iVar2 = -100;
      }
      else {
        cVar1 = WongWork::CAvatarItemMgr::IsTempKey(iStack_124);
        if (cVar1 == '\0') {
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            for (local_38 = 3; local_38 < 0x1b; local_38 = local_38 + 1) {
              if (*(int *)(this + local_38 * 0x48 + local_60 * 0x798 + 0x40) == iStack_124) {
                iVar2 = -0x67;
                goto LAB_0852bfb1;
              }
            }
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_39 = CInventory::delete_item(pCVar5,2);
            if (local_39 == '\x01') {
              piVar10 = &local_134;
              piVar11 = (int *)&stack0xfffffe2c;
              for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar11 = *piVar10;
                piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
              }
              iVar2 = add_item(this,local_60);
              local_5c = iVar2;
              if (iVar2 != -1) {
                cVar1 = checkTrade(this);
                if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (bVar12) {
                  *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                  *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                  iVar2 = OS_API::GetDateTimeTick();
                  iVar8 = Inven_Item::get_add_info
                                    ((Inven_Item *)
                                     (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                  iVar2 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar7,iVar8,iVar2);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  uVar6 = Inven_Item::GetItemAttr(&local_12b);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_e4,
                             (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,
                             CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0x1e);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    pcVar9 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar7,iVar2);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,pcVar9,0x1e);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,4);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    local_34 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar7,iVar2);
                    if (local_34 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_ec);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_e4,(char *)local_ec,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,local_34,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                  CUser::Send(local_68,local_e4);
                  iVar2 = local_5c;
                }
                else {
                  Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39)
                                   );
                  uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_30 = CInventory::insertAvatarIntoSpecificSlot
                                       (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                  if (local_30 < 0) {
                    cUserHistoryLog::TradeItemAddFail
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129)
                               ,param_4);
                    iVar2 = -0xb;
                  }
                  else {
                    iVar2 = -0xc;
                  }
                }
              }
            }
            else {
              iVar2 = -10;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
        else {
          iVar2 = -0x66;
        }
      }
    }
    goto LAB_0852bfb1;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      if ((param_3 < 0) || (0x138 < param_3)) {
                    /* try { // try from 0852a030 to 0852bf78 has its CatchHandler @ 0852bf93 */
        LogManager::logFormat
                  (1,"item_trade.cpp","int CTradeSpace::regist_item(CUser*, int, int, int)",0x15e,
                   "slot_no(%d) < 0 || slot_no > Inven_Item::MAX_INVEN_SLOT");
        iVar2 = -3;
      }
      else if (param_3 == 0) {
        uVar3 = CUser::getTotalHackUserTradeGold(param_1);
        uVar4 = CUser::getTotalHackUserTradeCnt(param_1);
        cVar1 = WongWork::CAutoPunishRuleHackTypeMgr::checkTotalTradeRuleOver
                          (GlobalData::g_autoPunishRuleHackTypeMgr,CONCAT44(uVar3,uVar4));
        if (cVar1 == '\0') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::use_money(pCVar5,param_4);
          if (cVar1 == '\0') {
            iVar2 = -5;
          }
          else {
            *(int *)(this + (local_60 + 0x3d8) * 4) =
                 *(int *)(this + (local_60 + 0x3d8) * 4) + param_4;
            cVar1 = checkCancelTrade(this);
            if ((cVar1 == '\0') || (cVar1 = checkTrade(this), cVar1 == '\0')) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int
                        ((InterfacePacketBuf *)local_e4,*(int *)(this + (local_60 + 0x3d8) * 4));
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_packet
                        ((InterfacePacketBuf *)local_e4,(Inven_Item *)g_emptySlot);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
              CUser::Send(local_68,local_e4);
              *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
              *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
              iVar2 = 0;
            }
            else {
              *(int *)(this + (local_60 + 0x3d8) * 4) =
                   *(int *)(this + (local_60 + 0x3d8) * 4) - param_4;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::gain_money(pCVar5,param_4);
              iVar2 = -4;
            }
          }
        }
        else {
          iVar2 = -0x16a;
        }
      }
      else {
        cVar1 = CUser::isHackUser(param_1);
        if ((cVar1 == '\0') && (cVar1 = CUser::isHackUser(local_68), cVar1 == '\0')) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          iVar2 = -0x1a1;
        }
        else {
          iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_17c,iVar2);
          local_12b = SUB41(local_17c._0_4_,0);
          cStack_12a = SUB41(local_17c._0_4_,1);
          uStack_129 = SUB42(local_17c._0_4_,2);
          local_127 = (undefined2)local_17c._4_4_;
          uStack_125 = SUB41(local_17c._4_4_,2);
          iStack_124._1_3_ = (undefined3)local_17c._8_4_;
          iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
          uStack_120 = SUB41(local_17c._8_4_,3);
          uStack_11f = local_170;
          local_11b = local_16c;
          local_117 = local_168;
          local_113 = local_164;
          local_10f = local_160;
          local_10b = local_15c;
          local_107 = local_158;
          local_103 = local_154;
          local_ff = local_150;
          local_fb = local_14c;
          local_f7 = local_148;
          local_f3 = local_144;
          local_ef = local_140;
          if (CONCAT22(local_127,uStack_129) == 0) {
            Inven_Item::get_add_info(&local_12b);
            CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cMyTrace::cMyTrace(local_c8,"int CTradeSpace::regist_item(CUser*, int, int, int)",0x1a8,
                               5);
            cMyTrace::operator()
                      (local_c8,"CTradeSpace::regist_item, item find failed(1), ch=%d %d %d %d");
          }
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            if ((cStack_12a == '\x01') ||
               (iVar2 = Inven_Item::get_add_info(&local_12b), param_4 <= iVar2)) {
              if (param_4 < 1) {
                Inven_Item::get_add_info(&local_12b);
                CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_a8,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                   0x1be,5);
                cMyTrace::operator()
                          (local_a8,"CTradeSpace::regist_item, item count failed(2), ch=%d %d %d %d"
                          );
                iVar2 = -9;
              }
              else {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_55 = CInventory::delete_item(pCVar5,1);
                if (local_55 == '\x01') {
                  piVar10 = &local_134;
                  piVar11 = (int *)&stack0xfffffe2c;
                  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar11 = *piVar10;
                    piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                    piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
                  }
                  iVar2 = add_item(this,local_60);
                  local_5c = iVar2;
                  if (iVar2 != -1) {
                    cVar1 = checkTrade(this);
                    if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    if (bVar12) {
                      *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                      *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                      InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                      iVar2 = Inven_Item::get_add_info
                                        ((Inven_Item *)
                                         (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                      uVar6 = Inven_Item::GetItemAttr(&local_12b);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                      InterfacePacketBuf::put_short
                                ((InterfacePacketBuf *)local_e4,
                                 (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_e4,
                                 CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                      uVar6 = stAmplifyOption_t::getAbilityType
                                        ((stAmplifyOption_t *)((int)&local_11b + 1));
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                      uVar6 = stAmplifyOption_t::getAbilityValue
                                        ((stAmplifyOption_t *)((int)&local_11b + 1));
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,uVar6 & 0xffff);
                      InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                      CUser::Send(local_68,local_e4);
                      iVar2 = local_5c;
                    }
                    else {
                      CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_88,
                                         "int CTradeSpace::regist_item(CUser*, int, int, int)",0x1fc
                                         ,5);
                      cMyTrace::operator()
                                (local_88,
                                 "CTradeSpace::regist_item, (checkTrade() && checkCancelTrade()) failed, ch=%d %d %d"
                                );
                      cVar1 = Inven_Item::isEquipableItemType
                                        ((Inven_Item *)
                                         (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      if (cVar1 == '\0') {
                        if (*(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) == param_4) {
                          Inven_Item::reset((Inven_Item *)
                                            (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                        }
                        else if (param_4 < *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40
                                                   )) {
                          *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) =
                               *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) - param_4;
                        }
                        else {
                          Inven_Item::reset((Inven_Item *)
                                            (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                        }
                      }
                      else {
                        Inven_Item::reset((Inven_Item *)
                                          (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      }
                      uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      local_54 = CInventory::insert_item_special_slot
                                           (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)
                                                          ));
                      if (local_54 < 0) {
                        cUserHistoryLog::TradeItemAddFail
                                  ((cUserHistoryLog *)(param_1 + 0x79700),
                                   CONCAT22(local_127,uStack_129),param_4);
                        iVar2 = -0xb;
                      }
                      else {
                        iVar2 = -0xc;
                      }
                    }
                  }
                }
                else {
                  CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_98,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                     0x1c8,5);
                  cMyTrace::operator()
                            (local_98,"CTradeSpace::regist_item, delete_item failed, ch=%d %d %d");
                  iVar2 = -10;
                }
              }
            }
            else {
              Inven_Item::get_add_info(&local_12b);
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_b8,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                 0x1b5,5);
              cMyTrace::operator()
                        (local_b8,"CTradeSpace::regist_item, item count failed(1), ch=%d %d %d %d");
              iVar2 = -8;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
      }
      goto LAB_0852bfb1;
    }
  }
  else {
    if (param_2 == 3) {
      if ((param_3 < 0) || (0x19 < param_3)) {
        LogManager::logFormat
                  (1,"item_trade.cpp","int CTradeSpace::regist_item(CUser*, int, int, int)",0x266,
                   "slot_no(%d) < 0 || slot_no > ENUM_EQUIPMENTTYPE_TOTAL_MAX");
        iVar2 = -0xd;
      }
      else {
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_17c,iVar2);
        local_12b = SUB41(local_17c._0_4_,0);
        cStack_12a = SUB41(local_17c._0_4_,1);
        uStack_129 = SUB42(local_17c._0_4_,2);
        local_127 = (undefined2)local_17c._4_4_;
        uStack_125 = SUB41(local_17c._4_4_,2);
        iStack_124._1_3_ = (undefined3)local_17c._8_4_;
        iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
        uStack_120 = SUB41(local_17c._8_4_,3);
        uStack_11f = local_170;
        local_11b = local_16c;
        local_117 = local_168;
        local_113 = local_164;
        local_10f = local_160;
        local_10b = local_15c;
        local_107 = local_158;
        local_103 = local_154;
        local_ff = local_150;
        local_fb = local_14c;
        local_f7 = local_148;
        local_f3 = local_144;
        local_ef = local_140;
        if (CONCAT22(local_127,uStack_129) == 0) {
          iVar2 = -0xe;
        }
        else {
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            if (param_3 < 10) {
              cVar1 = WongWork::CAvatarItemMgr::IsTempKey(iStack_124);
              if (cVar1 != '\0') {
                iVar2 = -0x66;
                goto LAB_0852bfb1;
              }
              local_134 = param_3;
              local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              iVar2 = iStack_124;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
              local_4c = WongWork::CAvatarItemMgr::GetExpireDate(pCVar7,iVar2);
              if ((local_4c == 0) ||
                 (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
                 iVar2 <= local_4c)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if (bVar12) {
                iVar2 = -100;
                goto LAB_0852bfb1;
              }
            }
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_4d = CInventory::delete_item(pCVar5,0);
            if (local_4d == '\x01') {
              piVar10 = &local_134;
              piVar11 = (int *)&stack0xfffffe2c;
              for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar11 = *piVar10;
                piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
              }
              iVar2 = add_item(this,local_60);
              local_5c = iVar2;
              if (iVar2 != -1) {
                cVar1 = checkTrade(this);
                if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (bVar12) {
                  *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                  *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    iVar2 = OS_API::GetDateTimeTick();
                    iVar8 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    iVar2 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar7,iVar8,iVar2);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  }
                  else {
                    iVar2 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  }
                  uVar6 = Inven_Item::GetItemAttr(&local_12b);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_e4,
                             (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,
                             CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                  uVar6 = stAmplifyOption_t::getAbilityType
                                    ((stAmplifyOption_t *)((int)&local_11b + 1));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  uVar6 = stAmplifyOption_t::getAbilityValue
                                    ((stAmplifyOption_t *)((int)&local_11b + 1));
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,uVar6 & 0xffff);
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0x1e);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    pcVar9 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar7,iVar2);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,pcVar9,0x1e);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,4);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    local_48 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar7,iVar2);
                    if (local_48 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_e8);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_e4,(char *)local_e8,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,local_48,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                  CUser::Send(local_68,local_e4);
                  iVar2 = local_5c;
                }
                else {
                  Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39)
                                   );
                  uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_44 = CInventory::insert_item_special_slot
                                       (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                  if (local_44 < 0) {
                    cUserHistoryLog::TradeItemAddFail
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129)
                               ,param_4);
                    iVar2 = -0x10;
                  }
                  else {
                    iVar2 = -0x11;
                  }
                }
              }
            }
            else {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_78,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                 0x281,5);
              cMyTrace::operator()
                        (local_78,"CTradeSpace::regist_item 2, delete_item failed, ch=%d, %d %d");
              iVar2 = -0xf;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
      }
      goto LAB_0852bfb1;
    }
    if (param_2 == 7) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_17c,iVar2);
      local_12b = SUB41(local_17c._0_4_,0);
      cStack_12a = SUB41(local_17c._0_4_,1);
      uStack_129 = SUB42(local_17c._0_4_,2);
      local_127 = (undefined2)local_17c._4_4_;
      uStack_125 = SUB41(local_17c._4_4_,2);
      iStack_124._1_3_ = (undefined3)local_17c._8_4_;
      iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
      uStack_120 = SUB41(local_17c._8_4_,3);
      uStack_11f = local_170;
      local_11b = local_16c;
      local_117 = local_168;
      local_113 = local_164;
      local_10f = local_160;
      local_10b = local_15c;
      local_107 = local_158;
      local_103 = local_154;
      local_ff = local_150;
      local_fb = local_14c;
      local_f7 = local_148;
      local_f3 = local_144;
      local_ef = local_140;
      if (param_4 < 1) {
        iVar2 = -9;
      }
      else {
        local_134 = param_3;
        local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cVar1 = _IsTradable(this,&local_12b);
        if (cVar1 == '\x01') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_29 = CInventory::delete_item(pCVar5,3);
          if (local_29 == '\x01') {
            piVar10 = &local_134;
            piVar11 = (int *)&stack0xfffffe2c;
            for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar11 = *piVar10;
              piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
              piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
            }
            iVar2 = add_item(this,local_60);
            local_5c = iVar2;
            if (iVar2 != -1) {
              cVar1 = checkTrade(this);
              if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if (bVar12) {
                *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                iVar2 = Inven_Item::get_add_info
                                  ((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39))
                ;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                uVar6 = Inven_Item::GetItemAttr(&local_12b);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)local_e4,
                           (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_e4,
                           CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
                if (cStack_12a == '\x05') {
                  local_28 = 0;
                  local_28 = OS_API::GetDateTimeTick();
                  iVar2 = Inven_Item::get_add_info
                                    ((Inven_Item *)
                                     (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar5);
                  local_24 = user_creature::CCreatureMgr::GetRemainDate(this_00,iVar2,local_28);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,local_24);
                }
                InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                CUser::Send(local_68,local_e4);
                iVar2 = local_5c;
              }
              else {
                Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_20 = CInventory::insertCreatureIntoSpecificSlot
                                     (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                if (local_20 < 0) {
                  cUserHistoryLog::TradeItemAddFail
                            ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129),
                             param_4);
                  iVar2 = -0xb;
                }
                else {
                  iVar2 = -0xc;
                }
              }
            }
          }
          else {
            iVar2 = -10;
          }
        }
        else {
          iVar2 = -0x66;
        }
      }
      goto LAB_0852bfb1;
    }
  }
  iVar2 = -0x14;
LAB_0852bfb1:
  PacketGuard::~PacketGuard(local_e4);
  return iVar2;
}

```

---

## remove_item

```asm
// === 0852bfcc CTradeSpace::remove_item  [0x0852bfcc-0x852dbb7] ===
 852bfcc:	55                   	push   %ebp
 852bfcd:	89 e5                	mov    %esp,%ebp
 852bfcf:	57                   	push   %edi
 852bfd0:	56                   	push   %esi
 852bfd1:	53                   	push   %ebx
 852bfd2:	81 ec 3c 02 00 00    	sub    $0x23c,%esp
 852bfd8:	8b 45 08             	mov    0x8(%ebp),%eax
 852bfdb:	89 04 24             	mov    %eax,(%esp)
 852bfde:	e8 0b 61 00 00       	call   85320ee <_ZN11CTradeSpace8IsLockedEv>
 852bfe3:	84 c0                	test   %al,%al
 852bfe5:	74 0a                	je     852bff1 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x25>
 852bfe7:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852bfec:	e9 ba 1b 00 00       	jmp    852dbab <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bdf>
 852bff1:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 852bff5:	7f 0a                	jg     852c001 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x35>
 852bff7:	bb 9e ff ff ff       	mov    $0xffffff9e,%ebx
 852bffc:	e9 aa 1b 00 00       	jmp    852dbab <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bdf>
 852c001:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c004:	89 04 24             	mov    %eax,(%esp)
 852c007:	e8 40 1d 06 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 852c00c:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 852c013:	8b 45 08             	mov    0x8(%ebp),%eax
 852c016:	8b 40 20             	mov    0x20(%eax),%eax
 852c019:	3b 45 0c             	cmp    0xc(%ebp),%eax
 852c01c:	75 19                	jne    852c037 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x6b>
 852c01e:	8b 45 08             	mov    0x8(%ebp),%eax
 852c021:	8b 40 24             	mov    0x24(%eax),%eax
 852c024:	89 45 bc             	mov    %eax,-0x44(%ebp)
 852c027:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 852c02e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 852c035:	eb 17                	jmp    852c04e <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x82>
 852c037:	8b 45 08             	mov    0x8(%ebp),%eax
 852c03a:	8b 40 20             	mov    0x20(%eax),%eax
 852c03d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 852c040:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 852c047:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 852c04e:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c051:	8b 45 08             	mov    0x8(%ebp),%eax
 852c054:	83 c2 08             	add    $0x8,%edx
 852c057:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c05e:	00 
 852c05f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 852c062:	8b 45 08             	mov    0x8(%ebp),%eax
 852c065:	83 c2 08             	add    $0x8,%edx
 852c068:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c06f:	00 
 852c070:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 852c074:	74 06                	je     852c07c <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xb0>
 852c076:	83 7d 10 1a          	cmpl   $0x1a,0x10(%ebp)
 852c07a:	7e 0a                	jle    852c086 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xba>
 852c07c:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c081:	e9 1a 1b 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c086:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c089:	8b 45 08             	mov    0x8(%ebp),%eax
 852c08c:	83 c2 08             	add    $0x8,%edx
 852c08f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c092:	89 04 24             	mov    %eax,(%esp)
 852c095:	e8 98 43 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852c09a:	85 c0                	test   %eax,%eax
 852c09c:	74 0f                	je     852c0ad <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xe1>
 852c09e:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c0a1:	89 04 24             	mov    %eax,(%esp)
 852c0a4:	e8 89 43 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852c0a9:	85 c0                	test   %eax,%eax
 852c0ab:	75 07                	jne    852c0b4 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xe8>
 852c0ad:	b8 01 00 00 00       	mov    $0x1,%eax
 852c0b2:	eb 05                	jmp    852c0b9 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xed>
 852c0b4:	b8 00 00 00 00       	mov    $0x0,%eax
 852c0b9:	84 c0                	test   %al,%al
 852c0bb:	74 6b                	je     852c128 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x15c>
 852c0bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c0c0:	89 04 24             	mov    %eax,(%esp)
 852c0c3:	e8 6a 43 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852c0c8:	89 c6                	mov    %eax,%esi
 852c0ca:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c0cd:	8b 45 08             	mov    0x8(%ebp),%eax
 852c0d0:	83 c2 08             	add    $0x8,%edx
 852c0d3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c0d6:	89 04 24             	mov    %eax,(%esp)
 852c0d9:	e8 54 43 bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 852c0de:	89 c3                	mov    %eax,%ebx
 852c0e0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852c0e7:	00 
 852c0e8:	c7 44 24 08 5a 04 00 	movl   $0x45a,0x8(%esp)
 852c0ef:	00 
 852c0f0:	c7 44 24 04 80 85 c9 	movl   $0x8c98580,0x4(%esp)
 852c0f7:	08 
 852c0f8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 852c0fb:	89 04 24             	mov    %eax,(%esp)
 852c0fe:	e8 15 36 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852c103:	89 74 24 0c          	mov    %esi,0xc(%esp)
 852c107:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852c10b:	c7 44 24 04 14 72 c9 	movl   $0x8c97214,0x4(%esp)
 852c112:	08 
 852c113:	8d 45 8c             	lea    -0x74(%ebp),%eax
 852c116:	89 04 24             	mov    %eax,(%esp)
 852c119:	e8 6a 36 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852c11e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c123:	e9 78 1a 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c128:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852c12b:	8b 55 10             	mov    0x10(%ebp),%edx
 852c12e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852c131:	89 d0                	mov    %edx,%eax
 852c133:	c1 e0 03             	shl    $0x3,%eax
 852c136:	01 d0                	add    %edx,%eax
 852c138:	c1 e0 03             	shl    $0x3,%eax
 852c13b:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852c141:	01 d0                	add    %edx,%eax
 852c143:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852c146:	83 c0 30             	add    $0x30,%eax
 852c149:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 852c14d:	0f be c0             	movsbl %al,%eax
 852c150:	3b 45 14             	cmp    0x14(%ebp),%eax
 852c153:	74 0a                	je     852c15f <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x193>
 852c155:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c15a:	e9 41 1a 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c15f:	8b 45 14             	mov    0x14(%ebp),%eax
 852c162:	83 f8 01             	cmp    $0x1,%eax
 852c165:	0f 84 1c 14 00 00    	je     852d587 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x15bb>
 852c16b:	83 f8 01             	cmp    $0x1,%eax
 852c16e:	7f 09                	jg     852c179 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1ad>
 852c170:	85 c0                	test   %eax,%eax
 852c172:	74 1c                	je     852c190 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1c4>
 852c174:	e9 05 1a 00 00       	jmp    852db7e <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bb2>
 852c179:	83 f8 03             	cmp    $0x3,%eax
 852c17c:	0f 84 71 0d 00 00    	je     852cef3 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xf27>
 852c182:	83 f8 07             	cmp    $0x7,%eax
 852c185:	0f 84 af 16 00 00    	je     852d83a <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x186e>
 852c18b:	e9 ee 19 00 00       	jmp    852db7e <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bb2>
 852c190:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 852c194:	0f 85 cd 01 00 00    	jne    852c367 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x39b>
 852c19a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c19d:	8b 45 08             	mov    0x8(%ebp),%eax
 852c1a0:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852c1a6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c1a9:	2b 45 1c             	sub    0x1c(%ebp),%eax
 852c1ac:	85 c0                	test   %eax,%eax
 852c1ae:	0f 88 a9 01 00 00    	js     852c35d <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x391>
 852c1b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c1b7:	89 04 24             	mov    %eax,(%esp)
 852c1ba:	e8 cf e0 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852c1bf:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 852c1c6:	00 
 852c1c7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 852c1ce:	00 
 852c1cf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 852c1d6:	00 
 852c1d7:	8b 55 1c             	mov    0x1c(%ebp),%edx
 852c1da:	89 54 24 04          	mov    %edx,0x4(%esp)
 852c1de:	89 04 24             	mov    %eax,(%esp)
 852c1e1:	e8 b6 30 fd ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 852c1e6:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852c1e9:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c1ec:	8b 45 08             	mov    0x8(%ebp),%eax
 852c1ef:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852c1f5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c1f8:	89 c2                	mov    %eax,%edx
 852c1fa:	2b 55 1c             	sub    0x1c(%ebp),%edx
 852c1fd:	8b 45 08             	mov    0x8(%ebp),%eax
 852c200:	81 c1 d8 03 00 00    	add    $0x3d8,%ecx
 852c206:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 852c209:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c20c:	89 04 24             	mov    %eax,(%esp)
 852c20f:	e8 d2 f6 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852c214:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852c21b:	00 
 852c21c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c223:	00 
 852c224:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c227:	89 04 24             	mov    %eax,(%esp)
 852c22a:	e8 cd f6 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852c22f:	8b 45 10             	mov    0x10(%ebp),%eax
 852c232:	89 44 24 04          	mov    %eax,0x4(%esp)
 852c236:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c239:	89 04 24             	mov    %eax,(%esp)
 852c23c:	e8 63 dc ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852c241:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c244:	8b 45 08             	mov    0x8(%ebp),%eax
 852c247:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852c24d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c250:	85 c0                	test   %eax,%eax
 852c252:	7e 15                	jle    852c269 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x29d>
 852c254:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c25b:	00 
 852c25c:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c25f:	89 04 24             	mov    %eax,(%esp)
 852c262:	e8 d5 f6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c267:	eb 13                	jmp    852c27c <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x2b0>
 852c269:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852c270:	ff 
 852c271:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c274:	89 04 24             	mov    %eax,(%esp)
 852c277:	e8 c0 f6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c27c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c27f:	8b 45 08             	mov    0x8(%ebp),%eax
 852c282:	81 c2 d8 03 00 00    	add    $0x3d8,%edx
 852c288:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c28b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852c28f:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c292:	89 04 24             	mov    %eax,(%esp)
 852c295:	e8 a2 f6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c29a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c2a1:	00 
 852c2a2:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c2a5:	89 04 24             	mov    %eax,(%esp)
 852c2a8:	e8 73 f6 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852c2ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c2b4:	00 
 852c2b5:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c2b8:	89 04 24             	mov    %eax,(%esp)
 852c2bb:	e8 e4 db ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852c2c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c2c7:	00 
 852c2c8:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c2cb:	89 04 24             	mov    %eax,(%esp)
 852c2ce:	e8 69 f6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c2d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c2da:	00 
 852c2db:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c2de:	89 04 24             	mov    %eax,(%esp)
 852c2e1:	e8 3a f6 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852c2e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c2ed:	00 
 852c2ee:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c2f1:	89 04 24             	mov    %eax,(%esp)
 852c2f4:	e8 ab db ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852c2f9:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852c300:	09 
 852c301:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c304:	89 04 24             	mov    %eax,(%esp)
 852c307:	e8 82 46 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852c30c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852c313:	00 
 852c314:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c317:	89 04 24             	mov    %eax,(%esp)
 852c31a:	e8 39 f6 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852c31f:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c322:	89 44 24 04          	mov    %eax,0x4(%esp)
 852c326:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852c329:	89 04 24             	mov    %eax,(%esp)
 852c32c:	e8 89 c2 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852c331:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c334:	8b 45 08             	mov    0x8(%ebp),%eax
 852c337:	83 c2 08             	add    $0x8,%edx
 852c33a:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c341:	00 
 852c342:	8b 55 c0             	mov    -0x40(%ebp),%edx
 852c345:	8b 45 08             	mov    0x8(%ebp),%eax
 852c348:	83 c2 08             	add    $0x8,%edx
 852c34b:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c352:	00 
 852c353:	bb 00 00 00 00       	mov    $0x0,%ebx
 852c358:	e9 43 18 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c35d:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c362:	e9 39 18 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c367:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852c36a:	8b 55 10             	mov    0x10(%ebp),%edx
 852c36d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852c370:	89 d0                	mov    %edx,%eax
 852c372:	c1 e0 03             	shl    $0x3,%eax
 852c375:	01 d0                	add    %edx,%eax
 852c377:	c1 e0 03             	shl    $0x3,%eax
 852c37a:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852c380:	01 d0                	add    %edx,%eax
 852c382:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852c385:	83 c0 30             	add    $0x30,%eax
 852c388:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 852c38e:	b9 11 00 00 00       	mov    $0x11,%ecx
 852c393:	89 d7                	mov    %edx,%edi
 852c395:	89 c6                	mov    %eax,%esi
 852c397:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852c399:	89 f0                	mov    %esi,%eax
 852c39b:	89 fa                	mov    %edi,%edx
 852c39d:	0f b7 08             	movzwl (%eax),%ecx
 852c3a0:	66 89 0a             	mov    %cx,(%edx)
 852c3a3:	83 c2 02             	add    $0x2,%edx
 852c3a6:	83 c0 02             	add    $0x2,%eax
 852c3a9:	c7 45 c8 ff ff ff ff 	movl   $0xffffffff,-0x38(%ebp)
 852c3b0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c3b3:	8b 45 08             	mov    0x8(%ebp),%eax
 852c3b6:	83 c2 08             	add    $0x8,%edx
 852c3b9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c3bc:	89 04 24             	mov    %eax,(%esp)
 852c3bf:	e8 ba de ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852c3c4:	8b 55 18             	mov    0x18(%ebp),%edx
 852c3c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 852c3cb:	89 04 24             	mov    %eax,(%esp)
 852c3ce:	e8 b1 3f fd ff       	call   8500384 <_ZNK10CInventory15GetSlotItemTypeEi>
 852c3d3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 852c3d6:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 852c3da:	74 1b                	je     852c3f7 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x42b>
 852c3dc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 852c3df:	0f b6 85 02 ff ff ff 	movzbl -0xfe(%ebp),%eax
 852c3e6:	0f b6 c0             	movzbl %al,%eax
 852c3e9:	39 c2                	cmp    %eax,%edx
 852c3eb:	74 0a                	je     852c3f7 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x42b>
 852c3ed:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c3f2:	e9 a9 17 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c3f7:	0f b6 85 02 ff ff ff 	movzbl -0xfe(%ebp),%eax
 852c3fe:	3c 01                	cmp    $0x1,%al
 852c400:	0f 85 da 01 00 00    	jne    852c5e0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x614>
 852c406:	0f b6 85 00 ff ff ff 	movzbl -0x100(%ebp),%eax
 852c40d:	84 c0                	test   %al,%al
 852c40f:	74 0a                	je     852c41b <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x44f>
 852c411:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c416:	e9 85 17 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c41b:	0f b6 85 02 ff ff ff 	movzbl -0xfe(%ebp),%eax
 852c422:	0f b6 d8             	movzbl %al,%ebx
 852c425:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c428:	8b 45 08             	mov    0x8(%ebp),%eax
 852c42b:	83 c2 08             	add    $0x8,%edx
 852c42e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c431:	89 04 24             	mov    %eax,(%esp)
 852c434:	e8 45 de ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852c439:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 852c440:	00 
 852c441:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852c445:	89 04 24             	mov    %eax,(%esp)
 852c448:	e8 17 8b fd ff       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 852c44d:	84 c0                	test   %al,%al
 852c44f:	0f 84 3c 01 00 00    	je     852c591 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x5c5>
 852c455:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c458:	8b 45 08             	mov    0x8(%ebp),%eax
 852c45b:	83 c2 08             	add    $0x8,%edx
 852c45e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c461:	89 04 24             	mov    %eax,(%esp)
 852c464:	e8 25 de ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852c469:	c7 44 24 50 10 00 00 	movl   $0x10,0x50(%esp)
 852c470:	00 
 852c471:	c7 44 24 4c 09 00 00 	movl   $0x9,0x4c(%esp)
 852c478:	00 
 852c479:	8b 55 18             	mov    0x18(%ebp),%edx
 852c47c:	89 54 24 48          	mov    %edx,0x48(%esp)
 852c480:	8b 55 1c             	mov    0x1c(%ebp),%edx
 852c483:	89 54 24 44          	mov    %edx,0x44(%esp)
 852c487:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852c48d:	89 54 24 04          	mov    %edx,0x4(%esp)
 852c491:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852c497:	89 54 24 08          	mov    %edx,0x8(%esp)
 852c49b:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852c4a1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852c4a5:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852c4ab:	89 54 24 10          	mov    %edx,0x10(%esp)
 852c4af:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852c4b5:	89 54 24 14          	mov    %edx,0x14(%esp)
 852c4b9:	8b 95 15 ff ff ff    	mov    -0xeb(%ebp),%edx
 852c4bf:	89 54 24 18          	mov    %edx,0x18(%esp)
 852c4c3:	8b 95 19 ff ff ff    	mov    -0xe7(%ebp),%edx
 852c4c9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852c4cd:	8b 95 1d ff ff ff    	mov    -0xe3(%ebp),%edx
 852c4d3:	89 54 24 20          	mov    %edx,0x20(%esp)
 852c4d7:	8b 95 21 ff ff ff    	mov    -0xdf(%ebp),%edx
 852c4dd:	89 54 24 24          	mov    %edx,0x24(%esp)
 852c4e1:	8b 95 25 ff ff ff    	mov    -0xdb(%ebp),%edx
 852c4e7:	89 54 24 28          	mov    %edx,0x28(%esp)
 852c4eb:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 852c4f1:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852c4f5:	8b 95 2d ff ff ff    	mov    -0xd3(%ebp),%edx
 852c4fb:	89 54 24 30          	mov    %edx,0x30(%esp)
 852c4ff:	8b 95 31 ff ff ff    	mov    -0xcf(%ebp),%edx
 852c505:	89 54 24 34          	mov    %edx,0x34(%esp)
 852c509:	8b 95 35 ff ff ff    	mov    -0xcb(%ebp),%edx
 852c50f:	89 54 24 38          	mov    %edx,0x38(%esp)
 852c513:	8b 95 39 ff ff ff    	mov    -0xc7(%ebp),%edx
 852c519:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852c51d:	0f b6 95 3d ff ff ff 	movzbl -0xc3(%ebp),%edx
 852c524:	88 54 24 40          	mov    %dl,0x40(%esp)
 852c528:	89 04 24             	mov    %eax,(%esp)
 852c52b:	e8 b8 74 fd ff       	call   85039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>
 852c530:	89 45 c8             	mov    %eax,-0x38(%ebp)
 852c533:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 852c537:	0f 89 09 04 00 00    	jns    852c946 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x97a>
 852c53d:	8b 9d 03 ff ff ff    	mov    -0xfd(%ebp),%ebx
 852c543:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c546:	89 04 24             	mov    %eax,(%esp)
 852c549:	e8 da 4a bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 852c54e:	8b 55 18             	mov    0x18(%ebp),%edx
 852c551:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852c555:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 852c559:	89 44 24 14          	mov    %eax,0x14(%esp)
 852c55d:	c7 44 24 10 84 72 c9 	movl   $0x8c97284,0x10(%esp)
 852c564:	08 
 852c565:	c7 44 24 0c a5 04 00 	movl   $0x4a5,0xc(%esp)
 852c56c:	00 
 852c56d:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852c574:	08 
 852c575:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852c57c:	08 
 852c57d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852c584:	e8 81 76 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852c589:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 852c58c:	e9 0f 16 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c591:	8b 9d 03 ff ff ff    	mov    -0xfd(%ebp),%ebx
 852c597:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c59a:	89 04 24             	mov    %eax,(%esp)
 852c59d:	e8 86 4a bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 852c5a2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 852c5a6:	89 44 24 14          	mov    %eax,0x14(%esp)
 852c5aa:	c7 44 24 10 b0 72 c9 	movl   $0x8c972b0,0x10(%esp)
 852c5b1:	08 
 852c5b2:	c7 44 24 0c ac 04 00 	movl   $0x4ac,0xc(%esp)
 852c5b9:	00 
 852c5ba:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852c5c1:	08 
 852c5c2:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852c5c9:	08 
 852c5ca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852c5d1:	e8 34 76 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852c5d6:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c5db:	e9 c0 15 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c5e0:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 852c5e6:	83 c0 09             	add    $0x9,%eax
 852c5e9:	89 04 24             	mov    %eax,(%esp)
 852c5ec:	e8 49 b2 bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852c5f1:	3b 45 1c             	cmp    0x1c(%ebp),%eax
 852c5f4:	0f 9c c0             	setl   %al
 852c5f7:	84 c0                	test   %al,%al
 852c5f9:	74 0a                	je     852c605 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x639>
 852c5fb:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c600:	e9 9b 15 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c605:	8b 45 1c             	mov    0x1c(%ebp),%eax
 852c608:	89 44 24 04          	mov    %eax,0x4(%esp)
 852c60c:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 852c612:	83 c0 09             	add    $0x9,%eax
 852c615:	89 04 24             	mov    %eax,(%esp)
 852c618:	e8 67 f2 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 852c61d:	81 7d 1c e7 03 00 00 	cmpl   $0x3e7,0x1c(%ebp)
 852c624:	7e 47                	jle    852c66d <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x6a1>
 852c626:	8b 9d 03 ff ff ff    	mov    -0xfd(%ebp),%ebx
 852c62c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852c633:	00 
 852c634:	c7 44 24 08 b8 04 00 	movl   $0x4b8,0x8(%esp)
 852c63b:	00 
 852c63c:	c7 44 24 04 80 85 c9 	movl   $0x8c98580,0x4(%esp)
 852c643:	08 
 852c644:	8d 45 9c             	lea    -0x64(%ebp),%eax
 852c647:	89 04 24             	mov    %eax,(%esp)
 852c64a:	e8 c9 30 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852c64f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 852c652:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852c656:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852c65a:	c7 44 24 04 d8 72 c9 	movl   $0x8c972d8,0x4(%esp)
 852c661:	08 
 852c662:	8d 45 9c             	lea    -0x64(%ebp),%eax
 852c665:	89 04 24             	mov    %eax,(%esp)
 852c668:	e8 1b 31 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852c66d:	8b 85 03 ff ff ff    	mov    -0xfd(%ebp),%eax
 852c673:	89 c3                	mov    %eax,%ebx
 852c675:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c678:	8b 45 08             	mov    0x8(%ebp),%eax
 852c67b:	83 c2 08             	add    $0x8,%edx
 852c67e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c681:	89 04 24             	mov    %eax,(%esp)
 852c684:	e8 f5 db ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852c689:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852c68d:	89 04 24             	mov    %eax,(%esp)
 852c690:	e8 dd 8a fd ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 852c695:	89 45 d0             	mov    %eax,-0x30(%ebp)
 852c698:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 852c69c:	0f 84 2f 01 00 00    	je     852c7d1 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x805>
 852c6a2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 852c6a8:	83 c2 08             	add    $0x8,%edx
 852c6ab:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c6ae:	89 04 24             	mov    %eax,(%esp)
 852c6b1:	e8 d8 db ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852c6b6:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852c6bd:	00 
 852c6be:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 852c6c5:	00 
 852c6c6:	c7 44 24 44 10 00 00 	movl   $0x10,0x44(%esp)
 852c6cd:	00 
 852c6ce:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852c6d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 852c6d8:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852c6de:	89 54 24 08          	mov    %edx,0x8(%esp)
 852c6e2:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852c6e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852c6ec:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852c6f2:	89 54 24 10          	mov    %edx,0x10(%esp)
 852c6f6:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852c6fc:	89 54 24 14          	mov    %edx,0x14(%esp)
 852c700:	8b 95 15 ff ff ff    	mov    -0xeb(%ebp),%edx
 852c706:	89 54 24 18          	mov    %edx,0x18(%esp)
 852c70a:	8b 95 19 ff ff ff    	mov    -0xe7(%ebp),%edx
 852c710:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852c714:	8b 95 1d ff ff ff    	mov    -0xe3(%ebp),%edx
 852c71a:	89 54 24 20          	mov    %edx,0x20(%esp)
 852c71e:	8b 95 21 ff ff ff    	mov    -0xdf(%ebp),%edx
 852c724:	89 54 24 24          	mov    %edx,0x24(%esp)
 852c728:	8b 95 25 ff ff ff    	mov    -0xdb(%ebp),%edx
 852c72e:	89 54 24 28          	mov    %edx,0x28(%esp)
 852c732:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 852c738:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852c73c:	8b 95 2d ff ff ff    	mov    -0xd3(%ebp),%edx
 852c742:	89 54 24 30          	mov    %edx,0x30(%esp)
 852c746:	8b 95 31 ff ff ff    	mov    -0xcf(%ebp),%edx
 852c74c:	89 54 24 34          	mov    %edx,0x34(%esp)
 852c750:	8b 95 35 ff ff ff    	mov    -0xcb(%ebp),%edx
 852c756:	89 54 24 38          	mov    %edx,0x38(%esp)
 852c75a:	8b 95 39 ff ff ff    	mov    -0xc7(%ebp),%edx
 852c760:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852c764:	0f b6 95 3d ff ff ff 	movzbl -0xc3(%ebp),%edx
 852c76b:	88 54 24 40          	mov    %dl,0x40(%esp)
 852c76f:	89 04 24             	mov    %eax,(%esp)
 852c772:	e8 0f 66 fd ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 852c777:	89 45 c8             	mov    %eax,-0x38(%ebp)
 852c77a:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 852c77e:	0f 89 c2 01 00 00    	jns    852c946 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x97a>
 852c784:	8b 9d 03 ff ff ff    	mov    -0xfd(%ebp),%ebx
 852c78a:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c78d:	89 04 24             	mov    %eax,(%esp)
 852c790:	e8 93 48 bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 852c795:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 852c799:	89 44 24 14          	mov    %eax,0x14(%esp)
 852c79d:	c7 44 24 10 b0 72 c9 	movl   $0x8c972b0,0x10(%esp)
 852c7a4:	08 
 852c7a5:	c7 44 24 0c cc 04 00 	movl   $0x4cc,0xc(%esp)
 852c7ac:	00 
 852c7ad:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852c7b4:	08 
 852c7b5:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852c7bc:	08 
 852c7bd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852c7c4:	e8 41 74 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852c7c9:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 852c7cc:	e9 cf 13 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c7d1:	0f b6 85 02 ff ff ff 	movzbl -0xfe(%ebp),%eax
 852c7d8:	0f b6 d8             	movzbl %al,%ebx
 852c7db:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c7de:	8b 45 08             	mov    0x8(%ebp),%eax
 852c7e1:	83 c2 08             	add    $0x8,%edx
 852c7e4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c7e7:	89 04 24             	mov    %eax,(%esp)
 852c7ea:	e8 8f da ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852c7ef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 852c7f6:	00 
 852c7f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852c7fb:	89 04 24             	mov    %eax,(%esp)
 852c7fe:	e8 61 87 fd ff       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 852c803:	84 c0                	test   %al,%al
 852c805:	0f 84 ec 00 00 00    	je     852c8f7 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x92b>
 852c80b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c80e:	8b 45 08             	mov    0x8(%ebp),%eax
 852c811:	83 c2 08             	add    $0x8,%edx
 852c814:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852c817:	89 04 24             	mov    %eax,(%esp)
 852c81a:	e8 6f da ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852c81f:	c7 44 24 50 10 00 00 	movl   $0x10,0x50(%esp)
 852c826:	00 
 852c827:	c7 44 24 4c 09 00 00 	movl   $0x9,0x4c(%esp)
 852c82e:	00 
 852c82f:	8b 55 18             	mov    0x18(%ebp),%edx
 852c832:	89 54 24 48          	mov    %edx,0x48(%esp)
 852c836:	8b 55 1c             	mov    0x1c(%ebp),%edx
 852c839:	89 54 24 44          	mov    %edx,0x44(%esp)
 852c83d:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 852c843:	89 54 24 04          	mov    %edx,0x4(%esp)
 852c847:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 852c84d:	89 54 24 08          	mov    %edx,0x8(%esp)
 852c851:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 852c857:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852c85b:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 852c861:	89 54 24 10          	mov    %edx,0x10(%esp)
 852c865:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 852c86b:	89 54 24 14          	mov    %edx,0x14(%esp)
 852c86f:	8b 95 15 ff ff ff    	mov    -0xeb(%ebp),%edx
 852c875:	89 54 24 18          	mov    %edx,0x18(%esp)
 852c879:	8b 95 19 ff ff ff    	mov    -0xe7(%ebp),%edx
 852c87f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852c883:	8b 95 1d ff ff ff    	mov    -0xe3(%ebp),%edx
 852c889:	89 54 24 20          	mov    %edx,0x20(%esp)
 852c88d:	8b 95 21 ff ff ff    	mov    -0xdf(%ebp),%edx
 852c893:	89 54 24 24          	mov    %edx,0x24(%esp)
 852c897:	8b 95 25 ff ff ff    	mov    -0xdb(%ebp),%edx
 852c89d:	89 54 24 28          	mov    %edx,0x28(%esp)
 852c8a1:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 852c8a7:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852c8ab:	8b 95 2d ff ff ff    	mov    -0xd3(%ebp),%edx
 852c8b1:	89 54 24 30          	mov    %edx,0x30(%esp)
 852c8b5:	8b 95 31 ff ff ff    	mov    -0xcf(%ebp),%edx
 852c8bb:	89 54 24 34          	mov    %edx,0x34(%esp)
 852c8bf:	8b 95 35 ff ff ff    	mov    -0xcb(%ebp),%edx
 852c8c5:	89 54 24 38          	mov    %edx,0x38(%esp)
 852c8c9:	8b 95 39 ff ff ff    	mov    -0xc7(%ebp),%edx
 852c8cf:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852c8d3:	0f b6 95 3d ff ff ff 	movzbl -0xc3(%ebp),%edx
 852c8da:	88 54 24 40          	mov    %dl,0x40(%esp)
 852c8de:	89 04 24             	mov    %eax,(%esp)
 852c8e1:	e8 02 71 fd ff       	call   85039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>
 852c8e6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 852c8e9:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 852c8ed:	79 57                	jns    852c946 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x97a>
 852c8ef:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 852c8f2:	e9 a9 12 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c8f7:	8b 9d 03 ff ff ff    	mov    -0xfd(%ebp),%ebx
 852c8fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 852c900:	89 04 24             	mov    %eax,(%esp)
 852c903:	e8 20 47 bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 852c908:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 852c90c:	89 44 24 14          	mov    %eax,0x14(%esp)
 852c910:	c7 44 24 10 1c 73 c9 	movl   $0x8c9731c,0x10(%esp)
 852c917:	08 
 852c918:	c7 44 24 0c db 04 00 	movl   $0x4db,0xc(%esp)
 852c91f:	00 
 852c920:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852c927:	08 
 852c928:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852c92f:	08 
 852c930:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852c937:	e8 ce 72 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852c93c:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852c941:	e9 5a 12 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852c946:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852c949:	8b 45 08             	mov    0x8(%ebp),%eax
 852c94c:	83 c2 08             	add    $0x8,%edx
 852c94f:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c956:	00 
 852c957:	8b 55 c0             	mov    -0x40(%ebp),%edx
 852c95a:	8b 45 08             	mov    0x8(%ebp),%eax
 852c95d:	83 c2 08             	add    $0x8,%edx
 852c960:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852c967:	00 
 852c968:	83 7d c8 ff          	cmpl   $0xffffffff,-0x38(%ebp)
 852c96c:	0f 84 79 05 00 00    	je     852ceeb <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xf1f>
 852c972:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c975:	89 04 24             	mov    %eax,(%esp)
 852c978:	e8 69 ef b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852c97d:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852c984:	00 
 852c985:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c98c:	00 
 852c98d:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c990:	89 04 24             	mov    %eax,(%esp)
 852c993:	e8 64 ef b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852c998:	8b 45 10             	mov    0x10(%ebp),%eax
 852c99b:	89 44 24 04          	mov    %eax,0x4(%esp)
 852c99f:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c9a2:	89 04 24             	mov    %eax,(%esp)
 852c9a5:	e8 fa d4 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852c9aa:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852c9ad:	8b 55 10             	mov    0x10(%ebp),%edx
 852c9b0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852c9b3:	89 d0                	mov    %edx,%eax
 852c9b5:	c1 e0 03             	shl    $0x3,%eax
 852c9b8:	01 d0                	add    %edx,%eax
 852c9ba:	c1 e0 03             	shl    $0x3,%eax
 852c9bd:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852c9c3:	01 d0                	add    %edx,%eax
 852c9c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852c9c8:	83 c0 30             	add    $0x30,%eax
 852c9cb:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852c9cf:	3c 01                	cmp    $0x1,%al
 852c9d1:	0f 85 94 01 00 00    	jne    852cb6b <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xb9f>
 852c9d7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852c9de:	ff 
 852c9df:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c9e2:	89 04 24             	mov    %eax,(%esp)
 852c9e5:	e8 52 ef b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c9ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852c9f1:	00 
 852c9f2:	8d 45 80             	lea    -0x80(%ebp),%eax
 852c9f5:	89 04 24             	mov    %eax,(%esp)
 852c9f8:	e8 3f ef b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852c9fd:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ca00:	8b 55 10             	mov    0x10(%ebp),%edx
 852ca03:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ca06:	89 d0                	mov    %edx,%eax
 852ca08:	c1 e0 03             	shl    $0x3,%eax
 852ca0b:	01 d0                	add    %edx,%eax
 852ca0d:	c1 e0 03             	shl    $0x3,%eax
 852ca10:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ca16:	01 d0                	add    %edx,%eax
 852ca18:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ca1b:	83 c0 30             	add    $0x30,%eax
 852ca1e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852ca24:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ca27:	8b 55 10             	mov    0x10(%ebp),%edx
 852ca2a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ca2d:	89 d0                	mov    %edx,%eax
 852ca2f:	c1 e0 03             	shl    $0x3,%eax
 852ca32:	01 d0                	add    %edx,%eax
 852ca34:	c1 e0 03             	shl    $0x3,%eax
 852ca37:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ca3d:	01 d0                	add    %edx,%eax
 852ca3f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ca42:	83 c0 34             	add    $0x34,%eax
 852ca45:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852ca4b:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ca4e:	8b 55 10             	mov    0x10(%ebp),%edx
 852ca51:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ca54:	89 d0                	mov    %edx,%eax
 852ca56:	c1 e0 03             	shl    $0x3,%eax
 852ca59:	01 d0                	add    %edx,%eax
 852ca5b:	c1 e0 03             	shl    $0x3,%eax
 852ca5e:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ca64:	01 d0                	add    %edx,%eax
 852ca66:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ca69:	83 c0 30             	add    $0x30,%eax
 852ca6c:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 852ca70:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ca73:	8b 55 10             	mov    0x10(%ebp),%edx
 852ca76:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ca79:	89 d0                	mov    %edx,%eax
 852ca7b:	c1 e0 03             	shl    $0x3,%eax
 852ca7e:	01 d0                	add    %edx,%eax
 852ca80:	c1 e0 03             	shl    $0x3,%eax
 852ca83:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ca89:	01 d0                	add    %edx,%eax
 852ca8b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ca8e:	83 c0 30             	add    $0x30,%eax
 852ca91:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 852ca95:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ca98:	8b 55 10             	mov    0x10(%ebp),%edx
 852ca9b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ca9e:	89 d0                	mov    %edx,%eax
 852caa0:	c1 e0 03             	shl    $0x3,%eax
 852caa3:	01 d0                	add    %edx,%eax
 852caa5:	c1 e0 03             	shl    $0x3,%eax
 852caa8:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852caae:	01 d0                	add    %edx,%eax
 852cab0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cab3:	83 c0 30             	add    $0x30,%eax
 852cab6:	c7 40 0b 00 00 00 00 	movl   $0x0,0xb(%eax)
 852cabd:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cac0:	8b 55 10             	mov    0x10(%ebp),%edx
 852cac3:	89 d0                	mov    %edx,%eax
 852cac5:	c1 e0 03             	shl    $0x3,%eax
 852cac8:	01 d0                	add    %edx,%eax
 852caca:	c1 e0 03             	shl    $0x3,%eax
 852cacd:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cad3:	01 d0                	add    %edx,%eax
 852cad5:	83 c0 30             	add    $0x30,%eax
 852cad8:	03 45 08             	add    0x8(%ebp),%eax
 852cadb:	83 c0 09             	add    $0x9,%eax
 852cade:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852cae5:	00 
 852cae6:	89 04 24             	mov    %eax,(%esp)
 852cae9:	e8 96 ed b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 852caee:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852caf1:	8b 55 10             	mov    0x10(%ebp),%edx
 852caf4:	89 d0                	mov    %edx,%eax
 852caf6:	c1 e0 03             	shl    $0x3,%eax
 852caf9:	01 d0                	add    %edx,%eax
 852cafb:	c1 e0 03             	shl    $0x3,%eax
 852cafe:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cb04:	01 d0                	add    %edx,%eax
 852cb06:	83 c0 30             	add    $0x30,%eax
 852cb09:	03 45 08             	add    0x8(%ebp),%eax
 852cb0c:	83 c0 09             	add    $0x9,%eax
 852cb0f:	89 04 24             	mov    %eax,(%esp)
 852cb12:	e8 7b ed b9 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 852cb17:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cb1a:	8b 55 10             	mov    0x10(%ebp),%edx
 852cb1d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cb20:	89 d0                	mov    %edx,%eax
 852cb22:	c1 e0 03             	shl    $0x3,%eax
 852cb25:	01 d0                	add    %edx,%eax
 852cb27:	c1 e0 03             	shl    $0x3,%eax
 852cb2a:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cb30:	01 d0                	add    %edx,%eax
 852cb32:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cb35:	83 c0 30             	add    $0x30,%eax
 852cb38:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 852cb3e:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cb41:	8b 55 10             	mov    0x10(%ebp),%edx
 852cb44:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cb47:	89 d0                	mov    %edx,%eax
 852cb49:	c1 e0 03             	shl    $0x3,%eax
 852cb4c:	01 d0                	add    %edx,%eax
 852cb4e:	c1 e0 03             	shl    $0x3,%eax
 852cb51:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cb57:	01 d0                	add    %edx,%eax
 852cb59:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cb5c:	83 c0 30             	add    $0x30,%eax
 852cb5f:	c7 40 16 00 00 00 00 	movl   $0x0,0x16(%eax)
 852cb66:	e9 e9 02 00 00       	jmp    852ce54 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xe88>
 852cb6b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cb6e:	8b 55 10             	mov    0x10(%ebp),%edx
 852cb71:	89 d0                	mov    %edx,%eax
 852cb73:	c1 e0 03             	shl    $0x3,%eax
 852cb76:	01 d0                	add    %edx,%eax
 852cb78:	c1 e0 03             	shl    $0x3,%eax
 852cb7b:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cb81:	01 d0                	add    %edx,%eax
 852cb83:	83 c0 30             	add    $0x30,%eax
 852cb86:	03 45 08             	add    0x8(%ebp),%eax
 852cb89:	83 c0 09             	add    $0x9,%eax
 852cb8c:	89 04 24             	mov    %eax,(%esp)
 852cb8f:	e8 a6 ac bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852cb94:	3b 45 1c             	cmp    0x1c(%ebp),%eax
 852cb97:	0f 9f c0             	setg   %al
 852cb9a:	84 c0                	test   %al,%al
 852cb9c:	0f 84 23 01 00 00    	je     852ccc5 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xcf9>
 852cba2:	8b 85 03 ff ff ff    	mov    -0xfd(%ebp),%eax
 852cba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 852cbac:	8d 45 80             	lea    -0x80(%ebp),%eax
 852cbaf:	89 04 24             	mov    %eax,(%esp)
 852cbb2:	e8 85 ed b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852cbb7:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cbba:	8b 55 10             	mov    0x10(%ebp),%edx
 852cbbd:	89 d0                	mov    %edx,%eax
 852cbbf:	c1 e0 03             	shl    $0x3,%eax
 852cbc2:	01 d0                	add    %edx,%eax
 852cbc4:	c1 e0 03             	shl    $0x3,%eax
 852cbc7:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cbcd:	01 d0                	add    %edx,%eax
 852cbcf:	83 c0 30             	add    $0x30,%eax
 852cbd2:	03 45 08             	add    0x8(%ebp),%eax
 852cbd5:	83 c0 09             	add    $0x9,%eax
 852cbd8:	89 04 24             	mov    %eax,(%esp)
 852cbdb:	e8 5a ac bc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 852cbe0:	2b 45 1c             	sub    0x1c(%ebp),%eax
 852cbe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 852cbe7:	8d 45 80             	lea    -0x80(%ebp),%eax
 852cbea:	89 04 24             	mov    %eax,(%esp)
 852cbed:	e8 4a ed b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852cbf2:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cbf5:	8b 55 10             	mov    0x10(%ebp),%edx
 852cbf8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cbfb:	89 d0                	mov    %edx,%eax
 852cbfd:	c1 e0 03             	shl    $0x3,%eax
 852cc00:	01 d0                	add    %edx,%eax
 852cc02:	c1 e0 03             	shl    $0x3,%eax
 852cc05:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cc0b:	01 d0                	add    %edx,%eax
 852cc0d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cc10:	83 c0 40             	add    $0x40,%eax
 852cc13:	8b 00                	mov    (%eax),%eax
 852cc15:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 852cc18:	8b 45 1c             	mov    0x1c(%ebp),%eax
 852cc1b:	29 45 d4             	sub    %eax,-0x2c(%ebp)
 852cc1e:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cc21:	8b 55 10             	mov    0x10(%ebp),%edx
 852cc24:	89 d0                	mov    %edx,%eax
 852cc26:	c1 e0 03             	shl    $0x3,%eax
 852cc29:	01 d0                	add    %edx,%eax
 852cc2b:	c1 e0 03             	shl    $0x3,%eax
 852cc2e:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cc34:	01 d0                	add    %edx,%eax
 852cc36:	83 c0 30             	add    $0x30,%eax
 852cc39:	03 45 08             	add    0x8(%ebp),%eax
 852cc3c:	8d 50 09             	lea    0x9(%eax),%edx
 852cc3f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852cc42:	89 44 24 04          	mov    %eax,0x4(%esp)
 852cc46:	89 14 24             	mov    %edx,(%esp)
 852cc49:	e8 36 ec b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 852cc4e:	81 7d d4 e7 03 00 00 	cmpl   $0x3e7,-0x2c(%ebp)
 852cc55:	0f 8e f9 01 00 00    	jle    852ce54 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xe88>
 852cc5b:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cc5e:	8b 55 10             	mov    0x10(%ebp),%edx
 852cc61:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cc64:	89 d0                	mov    %edx,%eax
 852cc66:	c1 e0 03             	shl    $0x3,%eax
 852cc69:	01 d0                	add    %edx,%eax
 852cc6b:	c1 e0 03             	shl    $0x3,%eax
 852cc6e:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cc74:	01 d0                	add    %edx,%eax
 852cc76:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cc79:	83 c0 30             	add    $0x30,%eax
 852cc7c:	8b 58 0b             	mov    0xb(%eax),%ebx
 852cc7f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 852cc86:	00 
 852cc87:	c7 44 24 08 03 05 00 	movl   $0x503,0x8(%esp)
 852cc8e:	00 
 852cc8f:	c7 44 24 04 80 85 c9 	movl   $0x8c98580,0x4(%esp)
 852cc96:	08 
 852cc97:	8d 45 ac             	lea    -0x54(%ebp),%eax
 852cc9a:	89 04 24             	mov    %eax,(%esp)
 852cc9d:	e8 76 2a 02 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 852cca2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 852cca5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852cca9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852ccad:	c7 44 24 04 3c 73 c9 	movl   $0x8c9733c,0x4(%esp)
 852ccb4:	08 
 852ccb5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 852ccb8:	89 04 24             	mov    %eax,(%esp)
 852ccbb:	e8 c8 2a 02 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 852ccc0:	e9 8f 01 00 00       	jmp    852ce54 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xe88>
 852ccc5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852cccc:	ff 
 852cccd:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ccd0:	89 04 24             	mov    %eax,(%esp)
 852ccd3:	e8 64 ec b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852ccd8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ccdf:	00 
 852cce0:	8d 45 80             	lea    -0x80(%ebp),%eax
 852cce3:	89 04 24             	mov    %eax,(%esp)
 852cce6:	e8 51 ec b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852cceb:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ccee:	8b 55 10             	mov    0x10(%ebp),%edx
 852ccf1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ccf4:	89 d0                	mov    %edx,%eax
 852ccf6:	c1 e0 03             	shl    $0x3,%eax
 852ccf9:	01 d0                	add    %edx,%eax
 852ccfb:	c1 e0 03             	shl    $0x3,%eax
 852ccfe:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cd04:	01 d0                	add    %edx,%eax
 852cd06:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cd09:	83 c0 30             	add    $0x30,%eax
 852cd0c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852cd12:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cd15:	8b 55 10             	mov    0x10(%ebp),%edx
 852cd18:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cd1b:	89 d0                	mov    %edx,%eax
 852cd1d:	c1 e0 03             	shl    $0x3,%eax
 852cd20:	01 d0                	add    %edx,%eax
 852cd22:	c1 e0 03             	shl    $0x3,%eax
 852cd25:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cd2b:	01 d0                	add    %edx,%eax
 852cd2d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cd30:	83 c0 34             	add    $0x34,%eax
 852cd33:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852cd39:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cd3c:	8b 55 10             	mov    0x10(%ebp),%edx
 852cd3f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cd42:	89 d0                	mov    %edx,%eax
 852cd44:	c1 e0 03             	shl    $0x3,%eax
 852cd47:	01 d0                	add    %edx,%eax
 852cd49:	c1 e0 03             	shl    $0x3,%eax
 852cd4c:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cd52:	01 d0                	add    %edx,%eax
 852cd54:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cd57:	83 c0 30             	add    $0x30,%eax
 852cd5a:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 852cd5e:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cd61:	8b 55 10             	mov    0x10(%ebp),%edx
 852cd64:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cd67:	89 d0                	mov    %edx,%eax
 852cd69:	c1 e0 03             	shl    $0x3,%eax
 852cd6c:	01 d0                	add    %edx,%eax
 852cd6e:	c1 e0 03             	shl    $0x3,%eax
 852cd71:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cd77:	01 d0                	add    %edx,%eax
 852cd79:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cd7c:	83 c0 30             	add    $0x30,%eax
 852cd7f:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 852cd83:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cd86:	8b 55 10             	mov    0x10(%ebp),%edx
 852cd89:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cd8c:	89 d0                	mov    %edx,%eax
 852cd8e:	c1 e0 03             	shl    $0x3,%eax
 852cd91:	01 d0                	add    %edx,%eax
 852cd93:	c1 e0 03             	shl    $0x3,%eax
 852cd96:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cd9c:	01 d0                	add    %edx,%eax
 852cd9e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cda1:	83 c0 30             	add    $0x30,%eax
 852cda4:	c7 40 0b 00 00 00 00 	movl   $0x0,0xb(%eax)
 852cdab:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cdae:	8b 55 10             	mov    0x10(%ebp),%edx
 852cdb1:	89 d0                	mov    %edx,%eax
 852cdb3:	c1 e0 03             	shl    $0x3,%eax
 852cdb6:	01 d0                	add    %edx,%eax
 852cdb8:	c1 e0 03             	shl    $0x3,%eax
 852cdbb:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cdc1:	01 d0                	add    %edx,%eax
 852cdc3:	83 c0 30             	add    $0x30,%eax
 852cdc6:	03 45 08             	add    0x8(%ebp),%eax
 852cdc9:	83 c0 09             	add    $0x9,%eax
 852cdcc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852cdd3:	00 
 852cdd4:	89 04 24             	mov    %eax,(%esp)
 852cdd7:	e8 a8 ea b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 852cddc:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852cddf:	8b 55 10             	mov    0x10(%ebp),%edx
 852cde2:	89 d0                	mov    %edx,%eax
 852cde4:	c1 e0 03             	shl    $0x3,%eax
 852cde7:	01 d0                	add    %edx,%eax
 852cde9:	c1 e0 03             	shl    $0x3,%eax
 852cdec:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852cdf2:	01 d0                	add    %edx,%eax
 852cdf4:	83 c0 30             	add    $0x30,%eax
 852cdf7:	03 45 08             	add    0x8(%ebp),%eax
 852cdfa:	83 c0 09             	add    $0x9,%eax
 852cdfd:	89 04 24             	mov    %eax,(%esp)
 852ce00:	e8 8d ea b9 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 852ce05:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ce08:	8b 55 10             	mov    0x10(%ebp),%edx
 852ce0b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ce0e:	89 d0                	mov    %edx,%eax
 852ce10:	c1 e0 03             	shl    $0x3,%eax
 852ce13:	01 d0                	add    %edx,%eax
 852ce15:	c1 e0 03             	shl    $0x3,%eax
 852ce18:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ce1e:	01 d0                	add    %edx,%eax
 852ce20:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ce23:	83 c0 30             	add    $0x30,%eax
 852ce26:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 852ce2c:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852ce2f:	8b 55 10             	mov    0x10(%ebp),%edx
 852ce32:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852ce35:	89 d0                	mov    %edx,%eax
 852ce37:	c1 e0 03             	shl    $0x3,%eax
 852ce3a:	01 d0                	add    %edx,%eax
 852ce3c:	c1 e0 03             	shl    $0x3,%eax
 852ce3f:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852ce45:	01 d0                	add    %edx,%eax
 852ce47:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852ce4a:	83 c0 30             	add    $0x30,%eax
 852ce4d:	c7 40 16 00 00 00 00 	movl   $0x0,0x16(%eax)
 852ce54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ce5b:	00 
 852ce5c:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ce5f:	89 04 24             	mov    %eax,(%esp)
 852ce62:	e8 b9 ea b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852ce67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ce6e:	00 
 852ce6f:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ce72:	89 04 24             	mov    %eax,(%esp)
 852ce75:	e8 2a d0 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852ce7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ce81:	00 
 852ce82:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ce85:	89 04 24             	mov    %eax,(%esp)
 852ce88:	e8 af ea b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852ce8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852ce94:	00 
 852ce95:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ce98:	89 04 24             	mov    %eax,(%esp)
 852ce9b:	e8 80 ea b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852cea0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852cea7:	00 
 852cea8:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ceab:	89 04 24             	mov    %eax,(%esp)
 852ceae:	e8 f1 cf ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852ceb3:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852ceba:	09 
 852cebb:	8d 45 80             	lea    -0x80(%ebp),%eax
 852cebe:	89 04 24             	mov    %eax,(%esp)
 852cec1:	e8 c8 3a c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852cec6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852cecd:	00 
 852cece:	8d 45 80             	lea    -0x80(%ebp),%eax
 852ced1:	89 04 24             	mov    %eax,(%esp)
 852ced4:	e8 7f ea b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852ced9:	8d 45 80             	lea    -0x80(%ebp),%eax
 852cedc:	89 44 24 04          	mov    %eax,0x4(%esp)
 852cee0:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852cee3:	89 04 24             	mov    %eax,(%esp)
 852cee6:	e8 cf b6 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852ceeb:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 852ceee:	e9 ad 0c 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852cef3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 852cef7:	75 36                	jne    852cf2f <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xf63>
 852cef9:	c7 44 24 10 a0 73 c9 	movl   $0x8c973a0,0x10(%esp)
 852cf00:	08 
 852cf01:	c7 44 24 0c 9a 05 00 	movl   $0x59a,0xc(%esp)
 852cf08:	00 
 852cf09:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852cf10:	08 
 852cf11:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852cf18:	08 
 852cf19:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852cf20:	e8 e5 6c 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852cf25:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852cf2a:	e9 71 0c 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852cf2f:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cf32:	8b 55 10             	mov    0x10(%ebp),%edx
 852cf35:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cf38:	89 d0                	mov    %edx,%eax
 852cf3a:	c1 e0 03             	shl    $0x3,%eax
 852cf3d:	01 d0                	add    %edx,%eax
 852cf3f:	c1 e0 03             	shl    $0x3,%eax
 852cf42:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852cf48:	01 d0                	add    %edx,%eax
 852cf4a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852cf4d:	83 c0 30             	add    $0x30,%eax
 852cf50:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 852cf56:	b9 11 00 00 00       	mov    $0x11,%ecx
 852cf5b:	89 d7                	mov    %edx,%edi
 852cf5d:	89 c6                	mov    %eax,%esi
 852cf5f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852cf61:	89 f0                	mov    %esi,%eax
 852cf63:	89 fa                	mov    %edi,%edx
 852cf65:	0f b7 08             	movzwl (%eax),%ecx
 852cf68:	66 89 0a             	mov    %cx,(%edx)
 852cf6b:	83 c2 02             	add    $0x2,%edx
 852cf6e:	83 c0 02             	add    $0x2,%eax
 852cf71:	0f b6 85 b8 fe ff ff 	movzbl -0x148(%ebp),%eax
 852cf78:	3c 03                	cmp    $0x3,%al
 852cf7a:	74 36                	je     852cfb2 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0xfe6>
 852cf7c:	c7 44 24 10 b4 73 c9 	movl   $0x8c973b4,0x10(%esp)
 852cf83:	08 
 852cf84:	c7 44 24 0c a2 05 00 	movl   $0x5a2,0xc(%esp)
 852cf8b:	00 
 852cf8c:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852cf93:	08 
 852cf94:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852cf9b:	08 
 852cf9c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852cfa3:	e8 62 6c 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852cfa8:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852cfad:	e9 ee 0b 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852cfb2:	8b 85 bb fe ff ff    	mov    -0x145(%ebp),%eax
 852cfb8:	85 c0                	test   %eax,%eax
 852cfba:	75 36                	jne    852cff2 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1026>
 852cfbc:	c7 44 24 10 e3 73 c9 	movl   $0x8c973e3,0x10(%esp)
 852cfc3:	08 
 852cfc4:	c7 44 24 0c a8 05 00 	movl   $0x5a8,0xc(%esp)
 852cfcb:	00 
 852cfcc:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852cfd3:	08 
 852cfd4:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852cfdb:	08 
 852cfdc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852cfe3:	e8 22 6c 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852cfe8:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852cfed:	e9 ae 0b 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852cff2:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852cff5:	8b 55 10             	mov    0x10(%ebp),%edx
 852cff8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852cffb:	89 d0                	mov    %edx,%eax
 852cffd:	c1 e0 03             	shl    $0x3,%eax
 852d000:	01 d0                	add    %edx,%eax
 852d002:	c1 e0 03             	shl    $0x3,%eax
 852d005:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d00b:	01 d0                	add    %edx,%eax
 852d00d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d010:	83 c0 30             	add    $0x30,%eax
 852d013:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 852d017:	3c 08                	cmp    $0x8,%al
 852d019:	75 10                	jne    852d02b <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x105f>
 852d01b:	83 7d 18 09          	cmpl   $0x9,0x18(%ebp)
 852d01f:	7e 20                	jle    852d041 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1075>
 852d021:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d026:	e9 75 0b 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d02b:	83 7d 18 09          	cmpl   $0x9,0x18(%ebp)
 852d02f:	7e 06                	jle    852d037 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x106b>
 852d031:	83 7d 18 15          	cmpl   $0x15,0x18(%ebp)
 852d035:	7e 0a                	jle    852d041 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1075>
 852d037:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d03c:	e9 5f 0b 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d041:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d044:	89 04 24             	mov    %eax,(%esp)
 852d047:	e8 32 d2 ba ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 852d04c:	8d 95 43 ff ff ff    	lea    -0xbd(%ebp),%edx
 852d052:	8b 4d 18             	mov    0x18(%ebp),%ecx
 852d055:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 852d059:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 852d060:	00 
 852d061:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d065:	89 14 24             	mov    %edx,(%esp)
 852d068:	e8 ab e8 fc ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 852d06d:	83 ec 04             	sub    $0x4,%esp
 852d070:	8b 85 45 ff ff ff    	mov    -0xbb(%ebp),%eax
 852d076:	85 c0                	test   %eax,%eax
 852d078:	74 36                	je     852d0b0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x10e4>
 852d07a:	c7 44 24 10 e3 73 c9 	movl   $0x8c973e3,0x10(%esp)
 852d081:	08 
 852d082:	c7 44 24 0c bb 05 00 	movl   $0x5bb,0xc(%esp)
 852d089:	00 
 852d08a:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852d091:	08 
 852d092:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852d099:	08 
 852d09a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852d0a1:	e8 64 6b 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852d0a6:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d0ab:	e9 f0 0a 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d0b0:	8b 85 bb fe ff ff    	mov    -0x145(%ebp),%eax
 852d0b6:	89 c3                	mov    %eax,%ebx
 852d0b8:	e8 de f0 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 852d0bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 852d0c1:	89 04 24             	mov    %eax,(%esp)
 852d0c4:	e8 69 29 e3 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 852d0c9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 852d0cc:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 852d0d0:	75 36                	jne    852d108 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x113c>
 852d0d2:	c7 44 24 10 fe 73 c9 	movl   $0x8c973fe,0x10(%esp)
 852d0d9:	08 
 852d0da:	c7 44 24 0c c3 05 00 	movl   $0x5c3,0xc(%esp)
 852d0e1:	00 
 852d0e2:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852d0e9:	08 
 852d0ea:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852d0f1:	08 
 852d0f2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852d0f9:	e8 0c 6b 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852d0fe:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d103:	e9 98 0a 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d108:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d10b:	89 04 24             	mov    %eax,(%esp)
 852d10e:	e8 a5 d1 ba ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 852d113:	89 c3                	mov    %eax,%ebx
 852d115:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d118:	89 04 24             	mov    %eax,(%esp)
 852d11b:	e8 00 0e bd ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 852d120:	8b 55 18             	mov    0x18(%ebp),%edx
 852d123:	0f be d2             	movsbl %dl,%edx
 852d126:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 852d12a:	89 44 24 08          	mov    %eax,0x8(%esp)
 852d12e:	89 54 24 04          	mov    %edx,0x4(%esp)
 852d132:	8b 45 d8             	mov    -0x28(%ebp),%eax
 852d135:	89 04 24             	mov    %eax,(%esp)
 852d138:	e8 bf 37 fe ff       	call   85108fc <_ZN10CEquipItem19check_able_To_equipEcii>
 852d13d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 852d140:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 852d144:	74 3d                	je     852d183 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x11b7>
 852d146:	8b 45 dc             	mov    -0x24(%ebp),%eax
 852d149:	89 44 24 14          	mov    %eax,0x14(%esp)
 852d14d:	c7 44 24 10 10 74 c9 	movl   $0x8c97410,0x10(%esp)
 852d154:	08 
 852d155:	c7 44 24 0c ca 05 00 	movl   $0x5ca,0xc(%esp)
 852d15c:	00 
 852d15d:	c7 44 24 08 80 85 c9 	movl   $0x8c98580,0x8(%esp)
 852d164:	08 
 852d165:	c7 44 24 04 38 70 c9 	movl   $0x8c97038,0x4(%esp)
 852d16c:	08 
 852d16d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 852d174:	e8 91 6a 5a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 852d179:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d17e:	e9 1d 0a 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d183:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d186:	89 04 24             	mov    %eax,(%esp)
 852d189:	e8 00 d1 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d18e:	89 c2                	mov    %eax,%edx
 852d190:	8b 45 18             	mov    0x18(%ebp),%eax
 852d193:	6b c0 3d             	imul   $0x3d,%eax,%eax
 852d196:	8d 04 02             	lea    (%edx,%eax,1),%eax
 852d199:	83 c0 10             	add    $0x10,%eax
 852d19c:	8b 95 b9 fe ff ff    	mov    -0x147(%ebp),%edx
 852d1a2:	89 50 0c             	mov    %edx,0xc(%eax)
 852d1a5:	8b 95 bd fe ff ff    	mov    -0x143(%ebp),%edx
 852d1ab:	89 50 10             	mov    %edx,0x10(%eax)
 852d1ae:	8b 95 c1 fe ff ff    	mov    -0x13f(%ebp),%edx
 852d1b4:	89 50 14             	mov    %edx,0x14(%eax)
 852d1b7:	8b 95 c5 fe ff ff    	mov    -0x13b(%ebp),%edx
 852d1bd:	89 50 18             	mov    %edx,0x18(%eax)
 852d1c0:	8b 95 c9 fe ff ff    	mov    -0x137(%ebp),%edx
 852d1c6:	89 50 1c             	mov    %edx,0x1c(%eax)
 852d1c9:	8b 95 cd fe ff ff    	mov    -0x133(%ebp),%edx
 852d1cf:	89 50 20             	mov    %edx,0x20(%eax)
 852d1d2:	8b 95 d1 fe ff ff    	mov    -0x12f(%ebp),%edx
 852d1d8:	89 50 24             	mov    %edx,0x24(%eax)
 852d1db:	8b 95 d5 fe ff ff    	mov    -0x12b(%ebp),%edx
 852d1e1:	89 50 28             	mov    %edx,0x28(%eax)
 852d1e4:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 852d1ea:	89 50 2c             	mov    %edx,0x2c(%eax)
 852d1ed:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 852d1f3:	89 50 30             	mov    %edx,0x30(%eax)
 852d1f6:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 852d1fc:	89 50 34             	mov    %edx,0x34(%eax)
 852d1ff:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 852d205:	89 50 38             	mov    %edx,0x38(%eax)
 852d208:	8b 95 e9 fe ff ff    	mov    -0x117(%ebp),%edx
 852d20e:	89 50 3c             	mov    %edx,0x3c(%eax)
 852d211:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 852d217:	89 50 40             	mov    %edx,0x40(%eax)
 852d21a:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 852d220:	89 50 44             	mov    %edx,0x44(%eax)
 852d223:	0f b6 95 f5 fe ff ff 	movzbl -0x10b(%ebp),%edx
 852d22a:	88 50 48             	mov    %dl,0x48(%eax)
 852d22d:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d230:	89 04 24             	mov    %eax,(%esp)
 852d233:	e8 ae e6 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852d238:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852d23f:	00 
 852d240:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d247:	00 
 852d248:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d24b:	89 04 24             	mov    %eax,(%esp)
 852d24e:	e8 a9 e6 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852d253:	8b 45 10             	mov    0x10(%ebp),%eax
 852d256:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d25a:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d25d:	89 04 24             	mov    %eax,(%esp)
 852d260:	e8 3f cc ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d265:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852d26c:	ff 
 852d26d:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d270:	89 04 24             	mov    %eax,(%esp)
 852d273:	e8 c4 e6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d278:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d27f:	00 
 852d280:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d283:	89 04 24             	mov    %eax,(%esp)
 852d286:	e8 b1 e6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d28b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d292:	00 
 852d293:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d296:	89 04 24             	mov    %eax,(%esp)
 852d299:	e8 82 e6 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852d29e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d2a5:	00 
 852d2a6:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d2a9:	89 04 24             	mov    %eax,(%esp)
 852d2ac:	e8 f3 cb ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d2b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d2b8:	00 
 852d2b9:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d2bc:	89 04 24             	mov    %eax,(%esp)
 852d2bf:	e8 78 e6 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d2c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d2cb:	00 
 852d2cc:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d2cf:	89 04 24             	mov    %eax,(%esp)
 852d2d2:	e8 49 e6 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852d2d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d2de:	00 
 852d2df:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d2e2:	89 04 24             	mov    %eax,(%esp)
 852d2e5:	e8 ba cb ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d2ea:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852d2f1:	09 
 852d2f2:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d2f5:	89 04 24             	mov    %eax,(%esp)
 852d2f8:	e8 91 36 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852d2fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852d304:	00 
 852d305:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d308:	89 04 24             	mov    %eax,(%esp)
 852d30b:	e8 48 e6 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852d310:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d313:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d317:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852d31a:	89 04 24             	mov    %eax,(%esp)
 852d31d:	e8 98 b2 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852d322:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d325:	8b 55 10             	mov    0x10(%ebp),%edx
 852d328:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d32b:	89 d0                	mov    %edx,%eax
 852d32d:	c1 e0 03             	shl    $0x3,%eax
 852d330:	01 d0                	add    %edx,%eax
 852d332:	c1 e0 03             	shl    $0x3,%eax
 852d335:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d33b:	01 d0                	add    %edx,%eax
 852d33d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d340:	83 c0 30             	add    $0x30,%eax
 852d343:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852d349:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d34c:	8b 55 10             	mov    0x10(%ebp),%edx
 852d34f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d352:	89 d0                	mov    %edx,%eax
 852d354:	c1 e0 03             	shl    $0x3,%eax
 852d357:	01 d0                	add    %edx,%eax
 852d359:	c1 e0 03             	shl    $0x3,%eax
 852d35c:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d362:	01 d0                	add    %edx,%eax
 852d364:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d367:	83 c0 34             	add    $0x34,%eax
 852d36a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 852d370:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d373:	8b 55 10             	mov    0x10(%ebp),%edx
 852d376:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d379:	89 d0                	mov    %edx,%eax
 852d37b:	c1 e0 03             	shl    $0x3,%eax
 852d37e:	01 d0                	add    %edx,%eax
 852d380:	c1 e0 03             	shl    $0x3,%eax
 852d383:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d389:	01 d0                	add    %edx,%eax
 852d38b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d38e:	83 c0 30             	add    $0x30,%eax
 852d391:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 852d395:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d398:	8b 55 10             	mov    0x10(%ebp),%edx
 852d39b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d39e:	89 d0                	mov    %edx,%eax
 852d3a0:	c1 e0 03             	shl    $0x3,%eax
 852d3a3:	01 d0                	add    %edx,%eax
 852d3a5:	c1 e0 03             	shl    $0x3,%eax
 852d3a8:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d3ae:	01 d0                	add    %edx,%eax
 852d3b0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d3b3:	83 c0 30             	add    $0x30,%eax
 852d3b6:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 852d3ba:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d3bd:	8b 55 10             	mov    0x10(%ebp),%edx
 852d3c0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d3c3:	89 d0                	mov    %edx,%eax
 852d3c5:	c1 e0 03             	shl    $0x3,%eax
 852d3c8:	01 d0                	add    %edx,%eax
 852d3ca:	c1 e0 03             	shl    $0x3,%eax
 852d3cd:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d3d3:	01 d0                	add    %edx,%eax
 852d3d5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d3d8:	83 c0 30             	add    $0x30,%eax
 852d3db:	c7 40 0b 00 00 00 00 	movl   $0x0,0xb(%eax)
 852d3e2:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852d3e5:	8b 55 10             	mov    0x10(%ebp),%edx
 852d3e8:	89 d0                	mov    %edx,%eax
 852d3ea:	c1 e0 03             	shl    $0x3,%eax
 852d3ed:	01 d0                	add    %edx,%eax
 852d3ef:	c1 e0 03             	shl    $0x3,%eax
 852d3f2:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852d3f8:	01 d0                	add    %edx,%eax
 852d3fa:	83 c0 30             	add    $0x30,%eax
 852d3fd:	03 45 08             	add    0x8(%ebp),%eax
 852d400:	83 c0 09             	add    $0x9,%eax
 852d403:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d40a:	00 
 852d40b:	89 04 24             	mov    %eax,(%esp)
 852d40e:	e8 71 e4 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 852d413:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852d416:	8b 55 10             	mov    0x10(%ebp),%edx
 852d419:	89 d0                	mov    %edx,%eax
 852d41b:	c1 e0 03             	shl    $0x3,%eax
 852d41e:	01 d0                	add    %edx,%eax
 852d420:	c1 e0 03             	shl    $0x3,%eax
 852d423:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852d429:	01 d0                	add    %edx,%eax
 852d42b:	83 c0 30             	add    $0x30,%eax
 852d42e:	03 45 08             	add    0x8(%ebp),%eax
 852d431:	83 c0 09             	add    $0x9,%eax
 852d434:	89 04 24             	mov    %eax,(%esp)
 852d437:	e8 56 e4 b9 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 852d43c:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d43f:	8b 55 10             	mov    0x10(%ebp),%edx
 852d442:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d445:	89 d0                	mov    %edx,%eax
 852d447:	c1 e0 03             	shl    $0x3,%eax
 852d44a:	01 d0                	add    %edx,%eax
 852d44c:	c1 e0 03             	shl    $0x3,%eax
 852d44f:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d455:	01 d0                	add    %edx,%eax
 852d457:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d45a:	83 c0 30             	add    $0x30,%eax
 852d45d:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 852d463:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d466:	8b 55 10             	mov    0x10(%ebp),%edx
 852d469:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d46c:	89 d0                	mov    %edx,%eax
 852d46e:	c1 e0 03             	shl    $0x3,%eax
 852d471:	01 d0                	add    %edx,%eax
 852d473:	c1 e0 03             	shl    $0x3,%eax
 852d476:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d47c:	01 d0                	add    %edx,%eax
 852d47e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d481:	83 c0 30             	add    $0x30,%eax
 852d484:	c7 40 16 00 00 00 00 	movl   $0x0,0x16(%eax)
 852d48b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d48e:	8b 45 08             	mov    0x8(%ebp),%eax
 852d491:	83 c2 08             	add    $0x8,%edx
 852d494:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852d49b:	00 
 852d49c:	8b 55 c0             	mov    -0x40(%ebp),%edx
 852d49f:	8b 45 08             	mov    0x8(%ebp),%eax
 852d4a2:	83 c2 08             	add    $0x8,%edx
 852d4a5:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 852d4ac:	00 
 852d4ad:	83 7d 10 0b          	cmpl   $0xb,0x10(%ebp)
 852d4b1:	0f 8f c8 00 00 00    	jg     852d57f <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x15b3>
 852d4b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d4ba:	89 04 24             	mov    %eax,(%esp)
 852d4bd:	e8 ca ce ba ff       	call   80da38c <_ZN5CUser9get_stateEv>
 852d4c2:	83 f8 05             	cmp    $0x5,%eax
 852d4c5:	74 17                	je     852d4de <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1512>
 852d4c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d4ca:	89 04 24             	mov    %eax,(%esp)
 852d4cd:	e8 ba ce ba ff       	call   80da38c <_ZN5CUser9get_stateEv>
 852d4d2:	83 f8 08             	cmp    $0x8,%eax
 852d4d5:	74 07                	je     852d4de <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1512>
 852d4d7:	b8 01 00 00 00       	mov    $0x1,%eax
 852d4dc:	eb 05                	jmp    852d4e3 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1517>
 852d4de:	b8 00 00 00 00       	mov    $0x0,%eax
 852d4e3:	84 c0                	test   %al,%al
 852d4e5:	0f 84 94 00 00 00    	je     852d57f <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x15b3>
 852d4eb:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d4ee:	89 04 24             	mov    %eax,(%esp)
 852d4f1:	e8 f0 e3 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852d4f6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 852d4fd:	00 
 852d4fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d505:	00 
 852d506:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d509:	89 04 24             	mov    %eax,(%esp)
 852d50c:	e8 eb e3 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852d511:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d518:	00 
 852d519:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d51c:	89 04 24             	mov    %eax,(%esp)
 852d51f:	e8 fc e3 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852d524:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852d52b:	00 
 852d52c:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d52f:	89 04 24             	mov    %eax,(%esp)
 852d532:	e8 6d c9 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d537:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d53a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 852d541:	00 
 852d542:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d546:	8b 45 0c             	mov    0xc(%ebp),%eax
 852d549:	89 04 24             	mov    %eax,(%esp)
 852d54c:	e8 fd ce 12 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 852d551:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852d558:	00 
 852d559:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d55c:	89 04 24             	mov    %eax,(%esp)
 852d55f:	e8 f4 e3 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852d564:	e8 3e ce ba ff       	call   80da3a7 <_Z11G_GameWorldv>
 852d569:	8b 55 0c             	mov    0xc(%ebp),%edx
 852d56c:	89 54 24 08          	mov    %edx,0x8(%esp)
 852d570:	8d 55 80             	lea    -0x80(%ebp),%edx
 852d573:	89 54 24 04          	mov    %edx,0x4(%esp)
 852d577:	89 04 24             	mov    %eax,(%esp)
 852d57a:	e8 dd 73 c0 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 852d57f:	8b 5d 18             	mov    0x18(%ebp),%ebx
 852d582:	e9 19 06 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d587:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d58a:	8b 55 10             	mov    0x10(%ebp),%edx
 852d58d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d590:	89 d0                	mov    %edx,%eax
 852d592:	c1 e0 03             	shl    $0x3,%eax
 852d595:	01 d0                	add    %edx,%eax
 852d597:	c1 e0 03             	shl    $0x3,%eax
 852d59a:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d5a0:	01 d0                	add    %edx,%eax
 852d5a2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d5a5:	83 c0 30             	add    $0x30,%eax
 852d5a8:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 852d5ae:	b9 11 00 00 00       	mov    $0x11,%ecx
 852d5b3:	89 d7                	mov    %edx,%edi
 852d5b5:	89 c6                	mov    %eax,%esi
 852d5b7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852d5b9:	89 f0                	mov    %esi,%eax
 852d5bb:	89 fa                	mov    %edi,%edx
 852d5bd:	0f b7 08             	movzwl (%eax),%ecx
 852d5c0:	66 89 0a             	mov    %cx,(%edx)
 852d5c3:	83 c2 02             	add    $0x2,%edx
 852d5c6:	83 c0 02             	add    $0x2,%eax
 852d5c9:	0f b6 85 70 fe ff ff 	movzbl -0x190(%ebp),%eax
 852d5d0:	3c 01                	cmp    $0x1,%al
 852d5d2:	74 0a                	je     852d5de <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1612>
 852d5d4:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d5d9:	e9 c2 05 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d5de:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d5e1:	8b 45 08             	mov    0x8(%ebp),%eax
 852d5e4:	83 c2 08             	add    $0x8,%edx
 852d5e7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852d5ea:	89 04 24             	mov    %eax,(%esp)
 852d5ed:	e8 9c cc ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d5f2:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852d5f9:	00 
 852d5fa:	c7 44 24 48 04 00 00 	movl   $0x4,0x48(%esp)
 852d601:	00 
 852d602:	8b 55 18             	mov    0x18(%ebp),%edx
 852d605:	89 54 24 44          	mov    %edx,0x44(%esp)
 852d609:	8b 95 71 fe ff ff    	mov    -0x18f(%ebp),%edx
 852d60f:	89 54 24 04          	mov    %edx,0x4(%esp)
 852d613:	8b 95 75 fe ff ff    	mov    -0x18b(%ebp),%edx
 852d619:	89 54 24 08          	mov    %edx,0x8(%esp)
 852d61d:	8b 95 79 fe ff ff    	mov    -0x187(%ebp),%edx
 852d623:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852d627:	8b 95 7d fe ff ff    	mov    -0x183(%ebp),%edx
 852d62d:	89 54 24 10          	mov    %edx,0x10(%esp)
 852d631:	8b 95 81 fe ff ff    	mov    -0x17f(%ebp),%edx
 852d637:	89 54 24 14          	mov    %edx,0x14(%esp)
 852d63b:	8b 95 85 fe ff ff    	mov    -0x17b(%ebp),%edx
 852d641:	89 54 24 18          	mov    %edx,0x18(%esp)
 852d645:	8b 95 89 fe ff ff    	mov    -0x177(%ebp),%edx
 852d64b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852d64f:	8b 95 8d fe ff ff    	mov    -0x173(%ebp),%edx
 852d655:	89 54 24 20          	mov    %edx,0x20(%esp)
 852d659:	8b 95 91 fe ff ff    	mov    -0x16f(%ebp),%edx
 852d65f:	89 54 24 24          	mov    %edx,0x24(%esp)
 852d663:	8b 95 95 fe ff ff    	mov    -0x16b(%ebp),%edx
 852d669:	89 54 24 28          	mov    %edx,0x28(%esp)
 852d66d:	8b 95 99 fe ff ff    	mov    -0x167(%ebp),%edx
 852d673:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852d677:	8b 95 9d fe ff ff    	mov    -0x163(%ebp),%edx
 852d67d:	89 54 24 30          	mov    %edx,0x30(%esp)
 852d681:	8b 95 a1 fe ff ff    	mov    -0x15f(%ebp),%edx
 852d687:	89 54 24 34          	mov    %edx,0x34(%esp)
 852d68b:	8b 95 a5 fe ff ff    	mov    -0x15b(%ebp),%edx
 852d691:	89 54 24 38          	mov    %edx,0x38(%esp)
 852d695:	8b 95 a9 fe ff ff    	mov    -0x157(%ebp),%edx
 852d69b:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852d69f:	0f b6 95 ad fe ff ff 	movzbl -0x153(%ebp),%edx
 852d6a6:	88 54 24 40          	mov    %dl,0x40(%esp)
 852d6aa:	89 04 24             	mov    %eax,(%esp)
 852d6ad:	e8 26 61 fd ff       	call   85037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>
 852d6b2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 852d6b5:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 852d6b9:	0f 88 73 01 00 00    	js     852d832 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1866>
 852d6bf:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852d6c2:	8b 55 10             	mov    0x10(%ebp),%edx
 852d6c5:	89 d0                	mov    %edx,%eax
 852d6c7:	c1 e0 03             	shl    $0x3,%eax
 852d6ca:	01 d0                	add    %edx,%eax
 852d6cc:	c1 e0 03             	shl    $0x3,%eax
 852d6cf:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852d6d5:	01 d0                	add    %edx,%eax
 852d6d7:	83 c0 30             	add    $0x30,%eax
 852d6da:	03 45 08             	add    0x8(%ebp),%eax
 852d6dd:	89 04 24             	mov    %eax,(%esp)
 852d6e0:	e8 57 6a d7 ff       	call   82a413c <_ZN9TradeSlot5ResetEv>
 852d6e5:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 852d6eb:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 852d6ee:	74 4d                	je     852d73d <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1771>
 852d6f0:	8b 9d 78 fe ff ff    	mov    -0x188(%ebp),%ebx
 852d6f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 852d6f9:	8d 78 0a             	lea    0xa(%eax),%edi
 852d6fc:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 852d702:	8d 70 0a             	lea    0xa(%eax),%esi
 852d705:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d708:	8b 45 08             	mov    0x8(%ebp),%eax
 852d70b:	83 c2 08             	add    $0x8,%edx
 852d70e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852d711:	89 04 24             	mov    %eax,(%esp)
 852d714:	e8 75 cb ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d719:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 852d720:	00 
 852d721:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 852d725:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 852d729:	89 74 24 08          	mov    %esi,0x8(%esp)
 852d72d:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 852d734:	00 
 852d735:	89 04 24             	mov    %eax,(%esp)
 852d738:	e8 f1 b4 fd ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 852d73d:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d740:	89 04 24             	mov    %eax,(%esp)
 852d743:	e8 9e e1 b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852d748:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852d74f:	00 
 852d750:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d757:	00 
 852d758:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d75b:	89 04 24             	mov    %eax,(%esp)
 852d75e:	e8 99 e1 b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852d763:	8b 45 10             	mov    0x10(%ebp),%eax
 852d766:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d76a:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d76d:	89 04 24             	mov    %eax,(%esp)
 852d770:	e8 2f c7 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d775:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852d77c:	ff 
 852d77d:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d780:	89 04 24             	mov    %eax,(%esp)
 852d783:	e8 b4 e1 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d788:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d78f:	00 
 852d790:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d793:	89 04 24             	mov    %eax,(%esp)
 852d796:	e8 a1 e1 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d79b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d7a2:	00 
 852d7a3:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d7a6:	89 04 24             	mov    %eax,(%esp)
 852d7a9:	e8 72 e1 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852d7ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d7b5:	00 
 852d7b6:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d7b9:	89 04 24             	mov    %eax,(%esp)
 852d7bc:	e8 e3 c6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d7c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d7c8:	00 
 852d7c9:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d7cc:	89 04 24             	mov    %eax,(%esp)
 852d7cf:	e8 68 e1 b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852d7d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d7db:	00 
 852d7dc:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d7df:	89 04 24             	mov    %eax,(%esp)
 852d7e2:	e8 39 e1 b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852d7e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852d7ee:	00 
 852d7ef:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d7f2:	89 04 24             	mov    %eax,(%esp)
 852d7f5:	e8 aa c6 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852d7fa:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852d801:	09 
 852d802:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d805:	89 04 24             	mov    %eax,(%esp)
 852d808:	e8 81 31 c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852d80d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852d814:	00 
 852d815:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d818:	89 04 24             	mov    %eax,(%esp)
 852d81b:	e8 38 e1 b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852d820:	8d 45 80             	lea    -0x80(%ebp),%eax
 852d823:	89 44 24 04          	mov    %eax,0x4(%esp)
 852d827:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852d82a:	89 04 24             	mov    %eax,(%esp)
 852d82d:	e8 88 ad 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852d832:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 852d835:	e9 66 03 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d83a:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 852d83d:	8b 55 10             	mov    0x10(%ebp),%edx
 852d840:	8b 4d 08             	mov    0x8(%ebp),%ecx
 852d843:	89 d0                	mov    %edx,%eax
 852d845:	c1 e0 03             	shl    $0x3,%eax
 852d848:	01 d0                	add    %edx,%eax
 852d84a:	c1 e0 03             	shl    $0x3,%eax
 852d84d:	69 d3 98 07 00 00    	imul   $0x798,%ebx,%edx
 852d853:	01 d0                	add    %edx,%eax
 852d855:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 852d858:	83 c0 30             	add    $0x30,%eax
 852d85b:	8d 95 20 fe ff ff    	lea    -0x1e0(%ebp),%edx
 852d861:	b9 11 00 00 00       	mov    $0x11,%ecx
 852d866:	89 d7                	mov    %edx,%edi
 852d868:	89 c6                	mov    %eax,%esi
 852d86a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 852d86c:	89 f0                	mov    %esi,%eax
 852d86e:	89 fa                	mov    %edi,%edx
 852d870:	0f b7 08             	movzwl (%eax),%ecx
 852d873:	66 89 0a             	mov    %cx,(%edx)
 852d876:	83 c2 02             	add    $0x2,%edx
 852d879:	83 c0 02             	add    $0x2,%eax
 852d87c:	0f b6 85 28 fe ff ff 	movzbl -0x1d8(%ebp),%eax
 852d883:	3c 07                	cmp    $0x7,%al
 852d885:	74 0a                	je     852d891 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x18c5>
 852d887:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d88c:	e9 0f 03 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d891:	0f b6 85 2a fe ff ff 	movzbl -0x1d6(%ebp),%eax
 852d898:	3c 05                	cmp    $0x5,%al
 852d89a:	75 3c                	jne    852d8d8 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x190c>
 852d89c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d89f:	8b 45 08             	mov    0x8(%ebp),%eax
 852d8a2:	83 c2 08             	add    $0x8,%edx
 852d8a5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852d8a8:	89 04 24             	mov    %eax,(%esp)
 852d8ab:	e8 de c9 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d8b0:	89 04 24             	mov    %eax,(%esp)
 852d8b3:	e8 b0 fc ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 852d8b8:	8b 55 18             	mov    0x18(%ebp),%edx
 852d8bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 852d8bf:	89 04 24             	mov    %eax,(%esp)
 852d8c2:	e8 a5 b9 e0 ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 852d8c7:	83 f0 01             	xor    $0x1,%eax
 852d8ca:	84 c0                	test   %al,%al
 852d8cc:	74 0a                	je     852d8d8 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x190c>
 852d8ce:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852d8d3:	e9 c8 02 00 00       	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852d8d8:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d8db:	8b 45 08             	mov    0x8(%ebp),%eax
 852d8de:	83 c2 08             	add    $0x8,%edx
 852d8e1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852d8e4:	89 04 24             	mov    %eax,(%esp)
 852d8e7:	e8 a2 c9 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d8ec:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 852d8f3:	00 
 852d8f4:	c7 44 24 48 1d 00 00 	movl   $0x1d,0x48(%esp)
 852d8fb:	00 
 852d8fc:	8b 55 18             	mov    0x18(%ebp),%edx
 852d8ff:	89 54 24 44          	mov    %edx,0x44(%esp)
 852d903:	8b 95 29 fe ff ff    	mov    -0x1d7(%ebp),%edx
 852d909:	89 54 24 04          	mov    %edx,0x4(%esp)
 852d90d:	8b 95 2d fe ff ff    	mov    -0x1d3(%ebp),%edx
 852d913:	89 54 24 08          	mov    %edx,0x8(%esp)
 852d917:	8b 95 31 fe ff ff    	mov    -0x1cf(%ebp),%edx
 852d91d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 852d921:	8b 95 35 fe ff ff    	mov    -0x1cb(%ebp),%edx
 852d927:	89 54 24 10          	mov    %edx,0x10(%esp)
 852d92b:	8b 95 39 fe ff ff    	mov    -0x1c7(%ebp),%edx
 852d931:	89 54 24 14          	mov    %edx,0x14(%esp)
 852d935:	8b 95 3d fe ff ff    	mov    -0x1c3(%ebp),%edx
 852d93b:	89 54 24 18          	mov    %edx,0x18(%esp)
 852d93f:	8b 95 41 fe ff ff    	mov    -0x1bf(%ebp),%edx
 852d945:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 852d949:	8b 95 45 fe ff ff    	mov    -0x1bb(%ebp),%edx
 852d94f:	89 54 24 20          	mov    %edx,0x20(%esp)
 852d953:	8b 95 49 fe ff ff    	mov    -0x1b7(%ebp),%edx
 852d959:	89 54 24 24          	mov    %edx,0x24(%esp)
 852d95d:	8b 95 4d fe ff ff    	mov    -0x1b3(%ebp),%edx
 852d963:	89 54 24 28          	mov    %edx,0x28(%esp)
 852d967:	8b 95 51 fe ff ff    	mov    -0x1af(%ebp),%edx
 852d96d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 852d971:	8b 95 55 fe ff ff    	mov    -0x1ab(%ebp),%edx
 852d977:	89 54 24 30          	mov    %edx,0x30(%esp)
 852d97b:	8b 95 59 fe ff ff    	mov    -0x1a7(%ebp),%edx
 852d981:	89 54 24 34          	mov    %edx,0x34(%esp)
 852d985:	8b 95 5d fe ff ff    	mov    -0x1a3(%ebp),%edx
 852d98b:	89 54 24 38          	mov    %edx,0x38(%esp)
 852d98f:	8b 95 61 fe ff ff    	mov    -0x19f(%ebp),%edx
 852d995:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 852d999:	0f b6 95 65 fe ff ff 	movzbl -0x19b(%ebp),%edx
 852d9a0:	88 54 24 40          	mov    %dl,0x40(%esp)
 852d9a4:	89 04 24             	mov    %eax,(%esp)
 852d9a7:	e8 64 d1 fd ff       	call   850ab10 <_ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb>
 852d9ac:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 852d9af:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 852d9b3:	0f 88 c0 01 00 00    	js     852db79 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bad>
 852d9b9:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 852d9bc:	8b 55 10             	mov    0x10(%ebp),%edx
 852d9bf:	89 d0                	mov    %edx,%eax
 852d9c1:	c1 e0 03             	shl    $0x3,%eax
 852d9c4:	01 d0                	add    %edx,%eax
 852d9c6:	c1 e0 03             	shl    $0x3,%eax
 852d9c9:	69 d1 98 07 00 00    	imul   $0x798,%ecx,%edx
 852d9cf:	01 d0                	add    %edx,%eax
 852d9d1:	83 c0 30             	add    $0x30,%eax
 852d9d4:	03 45 08             	add    0x8(%ebp),%eax
 852d9d7:	89 04 24             	mov    %eax,(%esp)
 852d9da:	e8 5d 67 d7 ff       	call   82a413c <_ZN9TradeSlot5ResetEv>
 852d9df:	8b 85 20 fe ff ff    	mov    -0x1e0(%ebp),%eax
 852d9e5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 852d9e8:	74 42                	je     852da2c <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1a60>
 852d9ea:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852d9ed:	8b 45 08             	mov    0x8(%ebp),%eax
 852d9f0:	83 c2 08             	add    $0x8,%edx
 852d9f3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852d9f6:	89 04 24             	mov    %eax,(%esp)
 852d9f9:	e8 90 c8 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852d9fe:	89 04 24             	mov    %eax,(%esp)
 852da01:	e8 62 fb ba ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 852da06:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 852da0d:	00 
 852da0e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 852da11:	89 54 24 08          	mov    %edx,0x8(%esp)
 852da15:	8d 95 20 fe ff ff    	lea    -0x1e0(%ebp),%edx
 852da1b:	83 c2 09             	add    $0x9,%edx
 852da1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 852da22:	89 04 24             	mov    %eax,(%esp)
 852da25:	e8 b2 d4 e0 ff       	call   833aedc <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii>
 852da2a:	eb 58                	jmp    852da84 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1ab8>
 852da2c:	0f b6 85 2a fe ff ff 	movzbl -0x1d6(%ebp),%eax
 852da33:	0f b6 f8             	movzbl %al,%edi
 852da36:	8b b5 30 fe ff ff    	mov    -0x1d0(%ebp),%esi
 852da3c:	8b 85 2b fe ff ff    	mov    -0x1d5(%ebp),%eax
 852da42:	89 c3                	mov    %eax,%ebx
 852da44:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 852da47:	8b 45 08             	mov    0x8(%ebp),%eax
 852da4a:	83 c2 08             	add    $0x8,%edx
 852da4d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 852da50:	89 04 24             	mov    %eax,(%esp)
 852da53:	e8 36 c8 ba ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 852da58:	c7 44 24 18 1d 00 00 	movl   $0x1d,0x18(%esp)
 852da5f:	00 
 852da60:	89 7c 24 14          	mov    %edi,0x14(%esp)
 852da64:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 852da6b:	00 
 852da6c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 852da70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 852da74:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 852da7b:	00 
 852da7c:	89 04 24             	mov    %eax,(%esp)
 852da7f:	e8 2c ca fd ff       	call   850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>
 852da84:	8d 45 80             	lea    -0x80(%ebp),%eax
 852da87:	89 04 24             	mov    %eax,(%esp)
 852da8a:	e8 57 de b9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 852da8f:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 852da96:	00 
 852da97:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852da9e:	00 
 852da9f:	8d 45 80             	lea    -0x80(%ebp),%eax
 852daa2:	89 04 24             	mov    %eax,(%esp)
 852daa5:	e8 52 de b9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 852daaa:	8b 45 10             	mov    0x10(%ebp),%eax
 852daad:	89 44 24 04          	mov    %eax,0x4(%esp)
 852dab1:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dab4:	89 04 24             	mov    %eax,(%esp)
 852dab7:	e8 e8 c3 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852dabc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 852dac3:	ff 
 852dac4:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dac7:	89 04 24             	mov    %eax,(%esp)
 852daca:	e8 6d de b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852dacf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852dad6:	00 
 852dad7:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dada:	89 04 24             	mov    %eax,(%esp)
 852dadd:	e8 5a de b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852dae2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852dae9:	00 
 852daea:	8d 45 80             	lea    -0x80(%ebp),%eax
 852daed:	89 04 24             	mov    %eax,(%esp)
 852daf0:	e8 2b de b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852daf5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852dafc:	00 
 852dafd:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db00:	89 04 24             	mov    %eax,(%esp)
 852db03:	e8 9c c3 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852db08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852db0f:	00 
 852db10:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db13:	89 04 24             	mov    %eax,(%esp)
 852db16:	e8 21 de b9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 852db1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852db22:	00 
 852db23:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db26:	89 04 24             	mov    %eax,(%esp)
 852db29:	e8 f2 dd b9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 852db2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852db35:	00 
 852db36:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db39:	89 04 24             	mov    %eax,(%esp)
 852db3c:	e8 63 c3 ba ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 852db41:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 852db48:	09 
 852db49:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db4c:	89 04 24             	mov    %eax,(%esp)
 852db4f:	e8 3a 2e c2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 852db54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 852db5b:	00 
 852db5c:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db5f:	89 04 24             	mov    %eax,(%esp)
 852db62:	e8 f1 dd b9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 852db67:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 852db6e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 852db71:	89 04 24             	mov    %eax,(%esp)
 852db74:	e8 41 aa 11 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 852db79:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 852db7c:	eb 22                	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852db7e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 852db83:	eb 1b                	jmp    852dba0 <_ZN11CTradeSpace11remove_itemEP5CUseriiii+0x1bd4>
 852db85:	89 d3                	mov    %edx,%ebx
 852db87:	89 c6                	mov    %eax,%esi
 852db89:	8d 45 80             	lea    -0x80(%ebp),%eax
 852db8c:	89 04 24             	mov    %eax,(%esp)
 852db8f:	e8 ec 02 06 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852db94:	89 f0                	mov    %esi,%eax
 852db96:	89 da                	mov    %ebx,%edx
 852db98:	89 04 24             	mov    %eax,(%esp)
 852db9b:	e8 b0 5b 5b 00       	call   8ae3750 <_Unwind_Resume>
 852dba0:	8d 45 80             	lea    -0x80(%ebp),%eax
 852dba3:	89 04 24             	mov    %eax,(%esp)
 852dba6:	e8 d5 02 06 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 852dbab:	89 d8                	mov    %ebx,%eax
 852dbad:	8d 65 f4             	lea    -0xc(%ebp),%esp
 852dbb0:	83 c4 00             	add    $0x0,%esp
 852dbb3:	5b                   	pop    %ebx
 852dbb4:	5e                   	pop    %esi
 852dbb5:	5f                   	pop    %edi
 852dbb6:	5d                   	pop    %ebp
 852dbb7:	c3                   	ret

```

```c
// CTradeSpace::remove_item @ 0x852bfcc

/* CTradeSpace::remove_item(CUser*, int, int, int, int) */

int __thiscall
CTradeSpace::remove_item
          (CTradeSpace *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  CDataManager *this_00;
  int iVar6;
  GameWorld *this_01;
  CCreatureMgr *pCVar7;
  CTradeSpace *pCVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  byte bVar12;
  int local_1e4 [2];
  char local_1dc;
  Inven_Item local_1db;
  char cStack_1da;
  undefined2 uStack_1d9;
  undefined2 local_1d7;
  undefined1 uStack_1d5;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined4 local_1cf;
  undefined4 local_1cb;
  undefined4 local_1c7;
  undefined4 local_1c3;
  undefined4 local_1bf;
  undefined4 local_1bb;
  undefined4 local_1b7;
  undefined4 local_1b3;
  undefined4 local_1af;
  undefined4 local_1ab;
  undefined4 local_1a7;
  undefined4 local_1a3;
  undefined1 local_19f;
  int local_19c [2];
  char local_194;
  undefined4 local_193;
  undefined4 local_18f;
  undefined4 local_18b;
  undefined4 local_187;
  undefined4 local_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined4 local_177;
  undefined4 local_173;
  undefined4 local_16f;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined1 local_157;
  undefined4 local_154 [2];
  char local_14c;
  undefined2 uStack_14b;
  undefined2 local_149;
  undefined2 uStack_147;
  undefined2 uStack_145;
  undefined4 local_143;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  undefined4 local_11f;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined1 local_10f;
  undefined4 local_10c [2];
  char local_104;
  Inven_Item local_103;
  byte bStack_102;
  undefined2 uStack_101;
  undefined2 local_ff;
  undefined2 uStack_fd;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined1 local_c7;
  undefined1 local_c1 [2];
  int local_bf;
  PacketGuard local_84 [12];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  CUser *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  CEquipItem *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  cVar1 = IsLocked(this);
  if (cVar1 != '\0') {
    return -1;
  }
  if (param_5 < 1) {
    return -0x62;
  }
  PacketGuard::PacketGuard(local_84);
  bVar11 = *(CUser **)(this + 0x20) != param_1;
  if (bVar11) {
    local_48 = *(CUser **)(this + 0x20);
  }
  else {
    local_48 = *(CUser **)(this + 0x24);
  }
  local_40 = (uint)bVar11;
  local_44 = (uint)!bVar11;
  *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
  *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
  if ((local_48 == (CUser *)0x0) || (0x1a < param_2)) {
    iVar2 = -1;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
    if ((iVar2 == 0) ||
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      uVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      uVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    /* try { // try from 0852c0fe to 0852db78 has its CatchHandler @ 0852db85 */
      cMyTrace::cMyTrace(local_78,"int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x45a,5
                        );
      cMyTrace::operator()
                (local_78,
                 "CTradeSpace::remove_item()\t0 == m_pTraders[owner_index]->getCurCharacR() %x || 0 == owner->getCurCharacR() %x"
                 ,uVar4,uVar3);
      iVar2 = -1;
    }
    else if ((char)this[param_2 * 0x48 + local_40 * 0x798 + 0x38] == param_3) {
      if (param_3 == 1) {
        pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
        piVar10 = local_19c;
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar10 = *(int *)pCVar8;
          pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
          piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
        }
        *(undefined2 *)piVar10 = *(undefined2 *)pCVar8;
        if (local_194 == '\x01') {
          uVar3 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
          local_24 = CInventory::insertAvatarIntoSpecificSlot
                               (uVar3,local_193,local_18f,local_18b,local_187,local_183,local_17f,
                                local_17b,local_177,local_173,local_16f,local_16b,local_167,
                                local_163,local_15f,local_15b,local_157,param_4,4,1);
          iVar2 = local_24;
          if (-1 < local_24) {
            TradeSlot::Reset((TradeSlot *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30));
            if (local_19c[0] != local_24) {
              iVar2 = local_24 + 10;
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              CInventory::SendAvatarEvent
                        (pCVar5,0x32,local_19c[0] + 10,iVar2,
                         CONCAT31((undefined3)local_18b,local_18f._3_1_),0);
            }
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot)
            ;
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
            CUser::Send(local_48,local_84);
            iVar2 = local_24;
          }
        }
        else {
          iVar2 = -1;
        }
      }
      else {
        if (param_3 < 2) {
          if (param_3 == 0) {
            if (param_2 == 0) {
              if (*(int *)(this + (local_40 + 0x3d8) * 4) - param_5 < 0) {
                iVar2 = -1;
              }
              else {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::gain_money(pCVar5,param_5,1,1,0);
                *(int *)(this + (local_40 + 0x3d8) * 4) =
                     *(int *)(this + (local_40 + 0x3d8) * 4) - param_5;
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                if (*(int *)(this + (local_40 + 0x3d8) * 4) < 1) {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                }
                else {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                }
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_84,*(int *)(this + (local_40 + 0x3d8) * 4));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_packet
                          ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                CUser::Send(local_48,local_84);
                *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                iVar2 = 0;
              }
            }
            else {
              pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
              puVar9 = local_10c;
              for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar9 = *(undefined4 *)pCVar8;
                pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
              }
              *(undefined2 *)puVar9 = *(undefined2 *)pCVar8;
              local_3c = -1;
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              local_38 = CInventory::GetSlotItemType(pCVar5,param_4);
              if ((local_38 == 0) || (local_38 == bStack_102)) {
                if (bStack_102 == 1) {
                  if (local_104 != '\0') {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  cVar1 = CInventory::check_empty_count(pCVar5,1,1);
                  if (cVar1 == '\0') {
                    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4ac,
                               "[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                               CONCAT22(local_ff,uStack_101));
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  uVar3 = CUserCharacInfo::getCurCharacInvenW
                                    (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  local_3c = CInventory::insert_item_special_slot
                                       (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                        CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                        local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                        local_d7,local_d3,local_cf,local_cb,local_c7,param_5,param_4
                                        ,9,0x10);
                  if (local_3c < 0) {
                    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4a5,
                               "FATAL_ERROR USER[%s] ITEMID[%d] -> SLOT[%d]",uVar3,
                               CONCAT22(local_ff,uStack_101),param_4);
                    iVar2 = local_3c;
                    goto LAB_0852dba0;
                  }
                }
                else {
                  iVar2 = Inven_Item::get_add_info(&local_103);
                  if (iVar2 < param_5) {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  Inven_Item::set_add_info(&local_103,param_5);
                  if (999 < param_5) {
                    uVar3 = CONCAT22(local_ff,uStack_101);
                    cMyTrace::cMyTrace(local_68,
                                       "int CTradeSpace::remove_item(CUser*, int, int, int, int)",
                                       0x4b8,5);
                    cMyTrace::operator()
                              (local_68,
                               "CTradeSpace::remove_item, moveitem.item.set_add_info , ITEM #%d, %d"
                               ,uVar3,param_5);
                  }
                  iVar2 = CONCAT22(local_ff,uStack_101);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  local_34 = CInventory::check_item_exist(pCVar5,iVar2);
                  bVar12 = bStack_102;
                  if (local_34 == -1) {
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR
                                       (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    cVar1 = CInventory::check_empty_count(pCVar5,bVar12,1);
                    if (cVar1 == '\0') {
                      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4db,
                                 "FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                                 CONCAT22(local_ff,uStack_101));
                      iVar2 = -1;
                      goto LAB_0852dba0;
                    }
                    uVar3 = CUserCharacInfo::getCurCharacInvenW
                                      (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    local_3c = CInventory::insert_item_special_slot
                                         (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                          CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                          local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                          local_d7,local_d3,local_cf,local_cb,local_c7,param_5,
                                          param_4,9,0x10);
                    iVar2 = local_3c;
                    if (local_3c < 0) goto LAB_0852dba0;
                  }
                  else {
                    uVar3 = CUserCharacInfo::getCurCharacInvenW
                                      (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    local_3c = CInventory::insertItemIntoInventory
                                         (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                          CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                          local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                          local_d7,local_d3,local_cf,local_cb,local_c7,0x10,1,1);
                    if (local_3c < 0) {
                      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4cc,
                                 "[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                                 CONCAT22(local_ff,uStack_101));
                      iVar2 = local_3c;
                      goto LAB_0852dba0;
                    }
                  }
                }
                *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                iVar2 = local_3c;
                if (local_3c != -1) {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                  if (this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] == (CTradeSpace)0x1) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                    this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                    this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                    Inven_Item::set_add_info
                              ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0);
                    Inven_Item::ResetItemAttr
                              ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                    *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                  }
                  else {
                    iVar2 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                    if (param_5 < iVar2) {
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_84,CONCAT22(local_ff,uStack_101));
                      iVar2 = Inven_Item::get_add_info
                                        ((Inven_Item *)
                                         (this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,iVar2 - param_5);
                      local_30 = *(int *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x40) - param_5
                      ;
                      Inven_Item::set_add_info
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),
                                 local_30);
                      if (999 < local_30) {
                        uVar3 = *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b);
                        cMyTrace::cMyTrace(local_58,
                                           "int CTradeSpace::remove_item(CUser*, int, int, int, int)"
                                           ,0x503,5);
                        cMyTrace::operator()
                                  (local_58,
                                   "CTradeSpace::remove_item, m_ItemSlot[owner_index][trade_slot_no].item.set_add_info 2 , ITEM #%d, %d"
                                   ,uVar3,local_30);
                      }
                    }
                    else {
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                      this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                      this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                      Inven_Item::set_add_info
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0);
                      Inven_Item::ResetItemAttr
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                      *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                    }
                  }
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_packet
                            ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                  CUser::Send(local_48,local_84);
                  iVar2 = local_3c;
                }
              }
              else {
                iVar2 = -1;
              }
            }
            goto LAB_0852dba0;
          }
        }
        else {
          if (param_3 == 3) {
            if (param_2 == 0) {
              LogManager::logFormat
                        (1,"item_trade.cpp",
                         "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x59a,
                         "trade_slot_no == 0");
              iVar2 = -1;
            }
            else {
              pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
              puVar9 = local_154;
              for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar9 = *(undefined4 *)pCVar8;
                pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
              }
              *(undefined2 *)puVar9 = *(undefined2 *)pCVar8;
              if (local_14c == '\x03') {
                if (CONCAT22(uStack_147,local_149) == 0) {
                  LogManager::logFormat
                            (1,"item_trade.cpp",
                             "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5a8,
                             "moveitem.item.item_id == 0");
                  iVar2 = -1;
                }
                else {
                  if (this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    if (9 < param_4) {
                      iVar2 = -1;
                      goto LAB_0852dba0;
                    }
                  }
                  else if ((param_4 < 10) || (0x15 < param_4)) {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_c1,iVar2);
                  if (local_bf == 0) {
                    iVar2 = CONCAT22(uStack_147,local_149);
                    this_00 = (CDataManager *)G_CDataManager();
                    local_2c = (CEquipItem *)CDataManager::find_item(this_00,iVar2);
                    if (local_2c == (CEquipItem *)0x0) {
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5c3,
                                 "equip_ref == NULL");
                      iVar2 = -1;
                    }
                    else {
                      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
                      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
                      local_28 = CEquipItem::check_able_To_equip(local_2c,(char)param_4,iVar6,iVar2)
                      ;
                      if (local_28 == 0) {
                        iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        iVar2 = iVar2 + param_4 * 0x3d;
                        *(uint *)(iVar2 + 0x1c) = CONCAT22(local_149,uStack_14b);
                        *(uint *)(iVar2 + 0x20) = CONCAT22(uStack_145,uStack_147);
                        *(undefined4 *)(iVar2 + 0x24) = local_143;
                        *(undefined4 *)(iVar2 + 0x28) = local_13f;
                        *(undefined4 *)(iVar2 + 0x2c) = local_13b;
                        *(undefined4 *)(iVar2 + 0x30) = local_137;
                        *(undefined4 *)(iVar2 + 0x34) = local_133;
                        *(undefined4 *)(iVar2 + 0x38) = local_12f;
                        *(undefined4 *)(iVar2 + 0x3c) = local_12b;
                        *(undefined4 *)(iVar2 + 0x40) = local_127;
                        *(undefined4 *)(iVar2 + 0x44) = local_123;
                        *(undefined4 *)(iVar2 + 0x48) = local_11f;
                        *(undefined4 *)(iVar2 + 0x4c) = local_11b;
                        *(undefined4 *)(iVar2 + 0x50) = local_117;
                        *(undefined4 *)(iVar2 + 0x54) = local_113;
                        *(undefined1 *)(iVar2 + 0x58) = local_10f;
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_packet
                                  ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                        CUser::Send(local_48,local_84);
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                        this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                        this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                        Inven_Item::set_add_info
                                  ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0
                                  );
                        Inven_Item::ResetItemAttr
                                  ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                        *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                        *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                        *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                        iVar2 = param_4;
                        if (param_2 < 0xc) {
                          iVar2 = CUser::get_state(param_1);
                          if ((iVar2 == 5) || (iVar2 = CUser::get_state(param_1), iVar2 == 8)) {
                            bVar11 = false;
                          }
                          else {
                            bVar11 = true;
                          }
                          iVar2 = param_4;
                          if (bVar11) {
                            InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,2);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,1);
                            CUser::make_basic_info(param_1,(char *)local_84,'\0');
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                            this_01 = (GameWorld *)G_GameWorld();
                            GameWorld::send_all(this_01,local_84,param_1);
                            iVar2 = param_4;
                          }
                        }
                      }
                      else {
                        LogManager::logFormat
                                  (1,"item_trade.cpp",
                                   "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5ca,
                                   "equip_ref->check_able_To_equip return false res(%d)",local_28);
                        iVar2 = -1;
                      }
                    }
                  }
                  else {
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5bb,
                               "moveitem.item.item_id == 0");
                    iVar2 = -1;
                  }
                }
              }
              else {
                LogManager::logFormat
                          (1,"item_trade.cpp",
                           "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5a2,
                           "moveitem.item_space != ENUM_ITEMSPACE_EQUIPPED");
                iVar2 = -1;
              }
            }
            goto LAB_0852dba0;
          }
          if (param_3 == 7) {
            pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
            piVar10 = local_1e4;
            for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar10 = *(int *)pCVar8;
              pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
              piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
            }
            *(undefined2 *)piVar10 = *(undefined2 *)pCVar8;
            if (local_1dc == '\a') {
              if (cStack_1da == '\x05') {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                cVar1 = user_creature::CCreatureMgr::IsCreatureEquipmentScope(pCVar7,param_4);
                if (cVar1 != '\x01') {
                  iVar2 = -1;
                  goto LAB_0852dba0;
                }
              }
              uVar3 = CUserCharacInfo::getCurCharacInvenW
                                (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              local_20 = CInventory::insertCreatureIntoSpecificSlot
                                   (uVar3,CONCAT22(uStack_1d9,CONCAT11(cStack_1da,local_1db)),
                                    CONCAT13((undefined1)uStack_1d4,CONCAT12(uStack_1d5,local_1d7)),
                                    CONCAT13(uStack_1d0,uStack_1d4._1_3_),local_1cf,local_1cb,
                                    local_1c7,local_1c3,local_1bf,local_1bb,local_1b7,local_1b3,
                                    local_1af,local_1ab,local_1a7,local_1a3,local_19f,param_4,0x1d,1
                                   );
              iVar2 = local_20;
              if (-1 < local_20) {
                TradeSlot::Reset((TradeSlot *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30));
                if (local_1e4[0] == local_20) {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  CInventory::WriteCreatureLog
                            (pCVar5,3,CONCAT22(local_1d7,uStack_1d9),uStack_1d4,1,cStack_1da,0x1d);
                }
                else {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                  user_creature::CCreatureMgr::ChangeSlotNo(pCVar7,&local_1db,local_20,0x1d);
                }
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_packet
                          ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                CUser::Send(local_48,local_84);
                iVar2 = local_20;
              }
            }
            else {
              iVar2 = -1;
            }
            goto LAB_0852dba0;
          }
        }
        iVar2 = -1;
      }
    }
    else {
      iVar2 = -1;
    }
  }
LAB_0852dba0:
  PacketGuard::~PacketGuard(local_84);
  return iVar2;
}

```

---

## reset

```asm
// === 085297f2 CTradeSpace::reset  [0x085297f2-0x852993b] ===
 85297f2:	55                   	push   %ebp
 85297f3:	89 e5                	mov    %esp,%ebp
 85297f5:	83 ec 18             	sub    $0x18,%esp
 85297f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85297fb:	89 04 24             	mov    %eax,(%esp)
 85297fe:	e8 df 88 00 00       	call   85320e2 <_ZN11CTradeSpace4lockEv>
 8529803:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 852980a:	00 
 852980b:	8b 45 08             	mov    0x8(%ebp),%eax
 852980e:	89 04 24             	mov    %eax,(%esp)
 8529811:	e8 e4 88 00 00       	call   85320fa <_ZN11CTradeSpace8_SetLockEb>
 8529816:	8b 45 08             	mov    0x8(%ebp),%eax
 8529819:	c6 40 1c 00          	movb   $0x0,0x1c(%eax)
 852981d:	8b 45 08             	mov    0x8(%ebp),%eax
 8529820:	8b 40 20             	mov    0x20(%eax),%eax
 8529823:	85 c0                	test   %eax,%eax
 8529825:	74 39                	je     8529860 <_ZN11CTradeSpace5resetEv+0x6e>
 8529827:	8b 45 08             	mov    0x8(%ebp),%eax
 852982a:	8b 40 20             	mov    0x20(%eax),%eax
 852982d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8529834:	ff 
 8529835:	89 04 24             	mov    %eax,(%esp)
 8529838:	e8 77 88 00 00       	call   85320b4 <_ZN5CUser13SetTradeSpaceEi>
 852983d:	8b 45 08             	mov    0x8(%ebp),%eax
 8529840:	8b 40 20             	mov    0x20(%eax),%eax
 8529843:	05 00 97 07 00       	add    $0x79700,%eax
 8529848:	c7 44 24 08 a0 6f c9 	movl   $0x8c96fa0,0x8(%esp)
 852984f:	08 
 8529850:	c7 44 24 04 a0 6f c9 	movl   $0x8c96fa0,0x4(%esp)
 8529857:	08 
 8529858:	89 04 24             	mov    %eax,(%esp)
 852985b:	e8 d6 87 00 00       	call   8532036 <_ZN15cUserHistoryLog9SetTraderEPKcS1_>
 8529860:	8b 45 08             	mov    0x8(%ebp),%eax
 8529863:	8b 40 24             	mov    0x24(%eax),%eax
 8529866:	85 c0                	test   %eax,%eax
 8529868:	74 39                	je     85298a3 <_ZN11CTradeSpace5resetEv+0xb1>
 852986a:	8b 45 08             	mov    0x8(%ebp),%eax
 852986d:	8b 40 24             	mov    0x24(%eax),%eax
 8529870:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8529877:	ff 
 8529878:	89 04 24             	mov    %eax,(%esp)
 852987b:	e8 34 88 00 00       	call   85320b4 <_ZN5CUser13SetTradeSpaceEi>
 8529880:	8b 45 08             	mov    0x8(%ebp),%eax
 8529883:	8b 40 24             	mov    0x24(%eax),%eax
 8529886:	05 00 97 07 00       	add    $0x79700,%eax
 852988b:	c7 44 24 08 a0 6f c9 	movl   $0x8c96fa0,0x8(%esp)
 8529892:	08 
 8529893:	c7 44 24 04 a0 6f c9 	movl   $0x8c96fa0,0x4(%esp)
 852989a:	08 
 852989b:	89 04 24             	mov    %eax,(%esp)
 852989e:	e8 93 87 00 00       	call   8532036 <_ZN15cUserHistoryLog9SetTraderEPKcS1_>
 85298a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85298a6:	c7 80 60 0f 00 00 00 	movl   $0x0,0xf60(%eax)
 85298ad:	00 00 00 
 85298b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85298b3:	c7 80 64 0f 00 00 00 	movl   $0x0,0xf64(%eax)
 85298ba:	00 00 00 
 85298bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85298c0:	c7 40 28 02 00 00 00 	movl   $0x2,0x28(%eax)
 85298c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85298ca:	c7 40 2c 02 00 00 00 	movl   $0x2,0x2c(%eax)
 85298d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85298d4:	83 c0 30             	add    $0x30,%eax
 85298d7:	c7 44 24 08 98 07 00 	movl   $0x798,0x8(%esp)
 85298de:	00 
 85298df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85298e6:	00 
 85298e7:	89 04 24             	mov    %eax,(%esp)
 85298ea:	e8 d1 43 b5 ff       	call   807dcc0 <memset@plt>
 85298ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85298f2:	05 c8 07 00 00       	add    $0x7c8,%eax
 85298f7:	c7 44 24 08 98 07 00 	movl   $0x798,0x8(%esp)
 85298fe:	00 
 85298ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8529906:	00 
 8529907:	89 04 24             	mov    %eax,(%esp)
 852990a:	e8 b1 43 b5 ff       	call   807dcc0 <memset@plt>
 852990f:	8b 45 08             	mov    0x8(%ebp),%eax
 8529912:	05 68 0f 00 00       	add    $0xf68,%eax
 8529917:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 852991e:	00 
 852991f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8529926:	00 
 8529927:	89 04 24             	mov    %eax,(%esp)
 852992a:	e8 91 43 b5 ff       	call   807dcc0 <memset@plt>
 852992f:	8b 45 08             	mov    0x8(%ebp),%eax
 8529932:	89 04 24             	mov    %eax,(%esp)
 8529935:	e8 ae 87 00 00       	call   85320e8 <_ZN11CTradeSpace6unlockEv>
 852993a:	c9                   	leave
 852993b:	c3                   	ret

```

```c
// CTradeSpace::reset @ 0x85297f2

/* CTradeSpace::reset() */

void __thiscall CTradeSpace::reset(CTradeSpace *this)

{
  lock();
  _SetLock(this,false);
  this[0x1c] = (CTradeSpace)0x0;
  if (*(int *)(this + 0x20) != 0) {
    CUser::SetTradeSpace(*(CUser **)(this + 0x20),-1);
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),"","");
  }
  if (*(int *)(this + 0x24) != 0) {
    CUser::SetTradeSpace(*(CUser **)(this + 0x24),-1);
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x24) + 0x79700),"","");
  }
  *(undefined4 *)(this + 0xf60) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0x28) = 2;
  *(undefined4 *)(this + 0x2c) = 2;
  memset(this + 0x30,0,0x798);
  memset(this + 0x7c8,0,0x798);
  memset(this + 0xf68,0,8);
  unlock();
  return;
}

```

---

## send_lose_item_for_china

```asm
// === 0852e3a8 CTradeSpace::send_lose_item_for_china  [0x0852e3a8-0x852e543] ===
 852e3a8:	55                   	push   %ebp
 852e3a9:	89 e5                	mov    %esp,%ebp
 852e3ab:	57                   	push   %edi
 852e3ac:	56                   	push   %esi
 852e3ad:	53                   	push   %ebx
 852e3ae:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 852e3b4:	8b 45 10             	mov    0x10(%ebp),%eax
 852e3b7:	8b 40 02             	mov    0x2(%eax),%eax
 852e3ba:	85 c0                	test   %eax,%eax
 852e3bc:	0f 84 72 01 00 00    	je     852e534 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x18c>
 852e3c2:	8d 45 cb             	lea    -0x35(%ebp),%eax
 852e3c5:	ba 1d 00 00 00       	mov    $0x1d,%edx
 852e3ca:	b9 00 00 00 00       	mov    $0x0,%ecx
 852e3cf:	89 c3                	mov    %eax,%ebx
 852e3d1:	83 e3 01             	and    $0x1,%ebx
 852e3d4:	85 db                	test   %ebx,%ebx
 852e3d6:	74 08                	je     852e3e0 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x38>
 852e3d8:	88 08                	mov    %cl,(%eax)
 852e3da:	83 c0 01             	add    $0x1,%eax
 852e3dd:	83 ea 01             	sub    $0x1,%edx
 852e3e0:	89 c3                	mov    %eax,%ebx
 852e3e2:	83 e3 02             	and    $0x2,%ebx
 852e3e5:	85 db                	test   %ebx,%ebx
 852e3e7:	74 09                	je     852e3f2 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x4a>
 852e3e9:	66 89 08             	mov    %cx,(%eax)
 852e3ec:	83 c0 02             	add    $0x2,%eax
 852e3ef:	83 ea 02             	sub    $0x2,%edx
 852e3f2:	89 d6                	mov    %edx,%esi
 852e3f4:	83 e6 fc             	and    $0xfffffffc,%esi
 852e3f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 852e3fc:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 852e3ff:	83 c3 04             	add    $0x4,%ebx
 852e402:	39 f3                	cmp    %esi,%ebx
 852e404:	72 f6                	jb     852e3fc <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x54>
 852e406:	01 d8                	add    %ebx,%eax
 852e408:	89 d3                	mov    %edx,%ebx
 852e40a:	83 e3 02             	and    $0x2,%ebx
 852e40d:	85 db                	test   %ebx,%ebx
 852e40f:	74 06                	je     852e417 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x6f>
 852e411:	66 89 08             	mov    %cx,(%eax)
 852e414:	83 c0 02             	add    $0x2,%eax
 852e417:	83 e2 01             	and    $0x1,%edx
 852e41a:	85 d2                	test   %edx,%edx
 852e41c:	74 05                	je     852e423 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x7b>
 852e41e:	88 08                	mov    %cl,(%eax)
 852e420:	83 c0 01             	add    $0x1,%eax
 852e423:	8d 95 cc fe ff ff    	lea    -0x134(%ebp),%edx
 852e429:	b8 00 00 00 00       	mov    $0x0,%eax
 852e42e:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 852e433:	89 d7                	mov    %edx,%edi
 852e435:	f3 ab                	rep stos %eax,%es:(%edi)
 852e437:	89 fa                	mov    %edi,%edx
 852e439:	66 89 02             	mov    %ax,(%edx)
 852e43c:	83 c2 02             	add    $0x2,%edx
 852e43f:	88 02                	mov    %al,(%edx)
 852e441:	83 c2 01             	add    $0x1,%edx
 852e444:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852e44b:	00 
 852e44c:	c7 44 24 08 07 76 c9 	movl   $0x8c97607,0x8(%esp)
 852e453:	08 
 852e454:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 852e45b:	00 
 852e45c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 852e463:	e8 96 73 57 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 852e468:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 852e46f:	00 
 852e470:	89 44 24 04          	mov    %eax,0x4(%esp)
 852e474:	8d 45 cb             	lea    -0x35(%ebp),%eax
 852e477:	89 04 24             	mov    %eax,(%esp)
 852e47a:	e8 51 f4 b4 ff       	call   807d8d0 <strncpy@plt>
 852e47f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 852e486:	00 
 852e487:	c7 44 24 08 1b 76 c9 	movl   $0x8c9761b,0x8(%esp)
 852e48e:	08 
 852e48f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 852e496:	00 
 852e497:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 852e49e:	e8 5b 73 57 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 852e4a3:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 852e4aa:	00 
 852e4ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 852e4af:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 852e4b5:	89 04 24             	mov    %eax,(%esp)
 852e4b8:	e8 13 f4 b4 ff       	call   807d8d0 <strncpy@plt>
 852e4bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 852e4c0:	89 04 24             	mov    %eax,(%esp)
 852e4c3:	e8 c8 d7 b9 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 852e4c8:	89 c3                	mov    %eax,%ebx
 852e4ca:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 852e4d0:	89 04 24             	mov    %eax,(%esp)
 852e4d3:	e8 d8 fe b4 ff       	call   807e3b0 <strlen@plt>
 852e4d8:	89 c6                	mov    %eax,%esi
 852e4da:	8b 45 0c             	mov    0xc(%ebp),%eax
 852e4dd:	89 04 24             	mov    %eax,(%esp)
 852e4e0:	e8 69 d7 b9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 852e4e5:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 852e4ec:	00 
 852e4ed:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 852e4f4:	00 
 852e4f5:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 852e4f9:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 852e500:	00 
 852e501:	89 74 24 14          	mov    %esi,0x14(%esp)
 852e505:	8d 95 cc fe ff ff    	lea    -0x134(%ebp),%edx
 852e50b:	89 54 24 10          	mov    %edx,0x10(%esp)
 852e50f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 852e513:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 852e51a:	00 
 852e51b:	8b 45 10             	mov    0x10(%ebp),%eax
 852e51e:	89 44 24 04          	mov    %eax,0x4(%esp)
 852e522:	8d 45 cb             	lea    -0x35(%ebp),%eax
 852e525:	89 04 24             	mov    %eax,(%esp)
 852e528:	e8 bb 70 02 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 852e52d:	b8 01 00 00 00       	mov    $0x1,%eax
 852e532:	eb 05                	jmp    852e539 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item+0x191>
 852e534:	b8 00 00 00 00       	mov    $0x0,%eax
 852e539:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 852e53f:	5b                   	pop    %ebx
 852e540:	5e                   	pop    %esi
 852e541:	5f                   	pop    %edi
 852e542:	5d                   	pop    %ebp
 852e543:	c3                   	ret

```

```c
// CTradeSpace::send_lose_item_for_china @ 0x852e3a8

/* CTradeSpace::send_lose_item_for_china(CUser*, Inven_Item&) */

undefined4 __thiscall
CTradeSpace::send_lose_item_for_china(CTradeSpace *this,CUser *param_1,Inven_Item *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char local_138 [2];
  char acStack_136 [253];
  char local_39;
  char local_38 [40];
  
  if (*(int *)(param_2 + 2) == 0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = &local_39;
    uVar7 = 0x1d;
    bVar9 = ((uint)pcVar2 & 1) != 0;
    if (bVar9) {
      local_39 = '\0';
      pcVar2 = local_38;
      uVar7 = 0x1c;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar7 = uVar7 - 2;
    }
    uVar8 = 0;
    do {
      pcVar1 = pcVar2 + uVar8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar8 = uVar8 + 4;
    } while (uVar8 < (uVar7 & 0xfffffffc));
    pcVar2 = pcVar2 + uVar8;
    if ((uVar7 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar9) {
      *pcVar2 = '\0';
    }
    pcVar2 = local_138;
    for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_287",(bool *)0x0);
    strncpy(&local_39,pcVar2,0x1d);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_288",(bool *)0x0);
    strncpy(local_138,pcVar2,0xff);
    uVar3 = CUser::GetServerGroup(param_1);
    sVar4 = strlen(local_138);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_39,param_2,0,uVar5,local_138,sVar4,0,uVar3,0,0);
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## set_traders

```asm
// === 085295f0 CTradeSpace::set_traders  [0x085295f0-0x85297f1] ===
 85295f0:	55                   	push   %ebp
 85295f1:	89 e5                	mov    %esp,%ebp
 85295f3:	53                   	push   %ebx
 85295f4:	83 ec 14             	sub    $0x14,%esp
 85295f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85295fa:	89 04 24             	mov    %eax,(%esp)
 85295fd:	e8 e0 8a 00 00       	call   85320e2 <_ZN11CTradeSpace4lockEv>
 8529602:	8b 45 08             	mov    0x8(%ebp),%eax
 8529605:	c6 40 1c 01          	movb   $0x1,0x1c(%eax)
 8529609:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8529610:	00 
 8529611:	8b 45 08             	mov    0x8(%ebp),%eax
 8529614:	89 04 24             	mov    %eax,(%esp)
 8529617:	e8 de 8a 00 00       	call   85320fa <_ZN11CTradeSpace8_SetLockEb>
 852961c:	8b 45 08             	mov    0x8(%ebp),%eax
 852961f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8529622:	89 50 20             	mov    %edx,0x20(%eax)
 8529625:	8b 45 08             	mov    0x8(%ebp),%eax
 8529628:	8b 58 20             	mov    0x20(%eax),%ebx
 852962b:	8b 45 10             	mov    0x10(%ebp),%eax
 852962e:	89 04 24             	mov    %eax,(%esp)
 8529631:	e8 46 0d bb ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8529636:	0f b7 c0             	movzwl %ax,%eax
 8529639:	89 83 5c d2 08 00    	mov    %eax,0x8d25c(%ebx)
 852963f:	8b 45 08             	mov    0x8(%ebp),%eax
 8529642:	8b 55 10             	mov    0x10(%ebp),%edx
 8529645:	89 50 24             	mov    %edx,0x24(%eax)
 8529648:	8b 45 08             	mov    0x8(%ebp),%eax
 852964b:	8b 58 24             	mov    0x24(%eax),%ebx
 852964e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529651:	89 04 24             	mov    %eax,(%esp)
 8529654:	e8 23 0d bb ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8529659:	0f b7 c0             	movzwl %ax,%eax
 852965c:	89 83 5c d2 08 00    	mov    %eax,0x8d25c(%ebx)
 8529662:	8b 45 08             	mov    0x8(%ebp),%eax
 8529665:	8b 40 24             	mov    0x24(%eax),%eax
 8529668:	89 04 24             	mov    %eax,(%esp)
 852966b:	e8 c2 6d bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8529670:	85 c0                	test   %eax,%eax
 8529672:	74 19                	je     852968d <_ZN11CTradeSpace11set_tradersEP5CUserS1_+0x9d>
 8529674:	8b 45 08             	mov    0x8(%ebp),%eax
 8529677:	8b 40 20             	mov    0x20(%eax),%eax
 852967a:	89 04 24             	mov    %eax,(%esp)
 852967d:	e8 b0 6d bf ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8529682:	85 c0                	test   %eax,%eax
 8529684:	74 07                	je     852968d <_ZN11CTradeSpace11set_tradersEP5CUserS1_+0x9d>
 8529686:	b8 01 00 00 00       	mov    $0x1,%eax
 852968b:	eb 05                	jmp    8529692 <_ZN11CTradeSpace11set_tradersEP5CUserS1_+0xa2>
 852968d:	b8 00 00 00 00       	mov    $0x0,%eax
 8529692:	84 c0                	test   %al,%al
 8529694:	74 74                	je     852970a <_ZN11CTradeSpace11set_tradersEP5CUserS1_+0x11a>
 8529696:	8b 45 08             	mov    0x8(%ebp),%eax
 8529699:	8b 40 24             	mov    0x24(%eax),%eax
 852969c:	89 04 24             	mov    %eax,(%esp)
 852969f:	e8 84 79 bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85296a4:	89 c3                	mov    %eax,%ebx
 85296a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85296a9:	8b 40 24             	mov    0x24(%eax),%eax
 85296ac:	89 04 24             	mov    %eax,(%esp)
 85296af:	e8 be 79 bd ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85296b4:	8b 55 08             	mov    0x8(%ebp),%edx
 85296b7:	8b 52 20             	mov    0x20(%edx),%edx
 85296ba:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85296c0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85296c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85296c8:	89 14 24             	mov    %edx,(%esp)
 85296cb:	e8 66 89 00 00       	call   8532036 <_ZN15cUserHistoryLog9SetTraderEPKcS1_>
 85296d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85296d3:	8b 40 20             	mov    0x20(%eax),%eax
 85296d6:	89 04 24             	mov    %eax,(%esp)
 85296d9:	e8 4a 79 bd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85296de:	89 c3                	mov    %eax,%ebx
 85296e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85296e3:	8b 40 20             	mov    0x20(%eax),%eax
 85296e6:	89 04 24             	mov    %eax,(%esp)
 85296e9:	e8 84 79 bd ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85296ee:	8b 55 08             	mov    0x8(%ebp),%edx
 85296f1:	8b 52 24             	mov    0x24(%edx),%edx
 85296f4:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85296fa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85296fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529702:	89 14 24             	mov    %edx,(%esp)
 8529705:	e8 2c 89 00 00       	call   8532036 <_ZN15cUserHistoryLog9SetTraderEPKcS1_>
 852970a:	8b 45 08             	mov    0x8(%ebp),%eax
 852970d:	8b 40 18             	mov    0x18(%eax),%eax
 8529710:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529714:	8b 45 0c             	mov    0xc(%ebp),%eax
 8529717:	89 04 24             	mov    %eax,(%esp)
 852971a:	e8 95 89 00 00       	call   85320b4 <_ZN5CUser13SetTradeSpaceEi>
 852971f:	8b 45 08             	mov    0x8(%ebp),%eax
 8529722:	8b 40 18             	mov    0x18(%eax),%eax
 8529725:	89 44 24 04          	mov    %eax,0x4(%esp)
 8529729:	8b 45 10             	mov    0x10(%ebp),%eax
 852972c:	89 04 24             	mov    %eax,(%esp)
 852972f:	e8 80 89 00 00       	call   85320b4 <_ZN5CUser13SetTradeSpaceEi>
 8529734:	8b 45 08             	mov    0x8(%ebp),%eax
 8529737:	c7 80 60 0f 00 00 00 	movl   $0x0,0xf60(%eax)
 852973e:	00 00 00 
 8529741:	8b 45 08             	mov    0x8(%ebp),%eax
 8529744:	c7 80 64 0f 00 00 00 	movl   $0x0,0xf64(%eax)
 852974b:	00 00 00 
 852974e:	8b 45 08             	mov    0x8(%ebp),%eax
 8529751:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8529758:	8b 45 08             	mov    0x8(%ebp),%eax
 852975b:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 8529762:	8b 45 08             	mov    0x8(%ebp),%eax
 8529765:	83 c0 30             	add    $0x30,%eax
 8529768:	c7 44 24 08 98 07 00 	movl   $0x798,0x8(%esp)
 852976f:	00 
 8529770:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8529777:	00 
 8529778:	89 04 24             	mov    %eax,(%esp)
 852977b:	e8 40 45 b5 ff       	call   807dcc0 <memset@plt>
 8529780:	8b 45 08             	mov    0x8(%ebp),%eax
 8529783:	05 c8 07 00 00       	add    $0x7c8,%eax
 8529788:	c7 44 24 08 98 07 00 	movl   $0x798,0x8(%esp)
 852978f:	00 
 8529790:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8529797:	00 
 8529798:	89 04 24             	mov    %eax,(%esp)
 852979b:	e8 20 45 b5 ff       	call   807dcc0 <memset@plt>
 85297a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85297a3:	05 68 0f 00 00       	add    $0xf68,%eax
 85297a8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 85297af:	00 
 85297b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85297b7:	00 
 85297b8:	89 04 24             	mov    %eax,(%esp)
 85297bb:	e8 00 45 b5 ff       	call   807dcc0 <memset@plt>
 85297c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85297c3:	89 04 24             	mov    %eax,(%esp)
 85297c6:	e8 1d 89 00 00       	call   85320e8 <_ZN11CTradeSpace6unlockEv>
 85297cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85297ce:	05 00 97 07 00       	add    $0x79700,%eax
 85297d3:	89 04 24             	mov    %eax,(%esp)
 85297d6:	e8 63 b8 15 00       	call   868503e <_ZN15cUserHistoryLog10TradeBeginEv>
 85297db:	8b 45 10             	mov    0x10(%ebp),%eax
 85297de:	05 00 97 07 00       	add    $0x79700,%eax
 85297e3:	89 04 24             	mov    %eax,(%esp)
 85297e6:	e8 53 b8 15 00       	call   868503e <_ZN15cUserHistoryLog10TradeBeginEv>
 85297eb:	83 c4 14             	add    $0x14,%esp
 85297ee:	5b                   	pop    %ebx
 85297ef:	5d                   	pop    %ebp
 85297f0:	c3                   	ret
 85297f1:	90                   	nop

```

```c
// CTradeSpace::set_traders @ 0x85295f0

/* CTradeSpace::set_traders(CUser*, CUser*) */

void __thiscall CTradeSpace::set_traders(CTradeSpace *this,CUser *param_1,CUser *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  lock();
  this[0x1c] = (CTradeSpace)0x1;
  _SetLock(this,false);
  *(CUser **)(this + 0x20) = param_1;
  iVar3 = *(int *)(this + 0x20);
  uVar2 = CUser::get_unique_id(param_2);
  *(uint *)(iVar3 + 0x8d25c) = uVar2 & 0xffff;
  *(CUser **)(this + 0x24) = param_2;
  iVar3 = *(int *)(this + 0x24);
  uVar2 = CUser::get_unique_id(param_1);
  *(uint *)(iVar3 + 0x8d25c) = uVar2 & 0xffff;
  iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_08529692;
    }
  }
  bVar1 = false;
LAB_08529692:
  if (bVar1) {
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x24));
    pcVar5 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x24));
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),pcVar5,pcVar4);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x20));
    pcVar5 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x20));
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x24) + 0x79700),pcVar5,pcVar4);
  }
  CUser::SetTradeSpace(param_1,*(int *)(this + 0x18));
  CUser::SetTradeSpace(param_2,*(int *)(this + 0x18));
  *(undefined4 *)(this + 0xf60) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  memset(this + 0x30,0,0x798);
  memset(this + 0x7c8,0,0x798);
  memset(this + 0xf68,0,8);
  unlock();
  cUserHistoryLog::TradeBegin((cUserHistoryLog *)(param_1 + 0x79700));
  cUserHistoryLog::TradeBegin((cUserHistoryLog *)(param_2 + 0x79700));
  return;
}

```

