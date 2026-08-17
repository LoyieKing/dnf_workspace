# Store

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetSellItemPrice

```asm
// === 08618ea0 Store::GetSellItemPrice  [0x08618ea0-0x8619007] ===
 8618ea0:	55                   	push   %ebp
 8618ea1:	89 e5                	mov    %esp,%ebp
 8618ea3:	57                   	push   %edi
 8618ea4:	56                   	push   %esi
 8618ea5:	53                   	push   %ebx
 8618ea6:	83 ec 3c             	sub    $0x3c,%esp
 8618ea9:	8b 55 14             	mov    0x14(%ebp),%edx
 8618eac:	8b 45 18             	mov    0x18(%ebp),%eax
 8618eaf:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 8618eb3:	88 45 d0             	mov    %al,-0x30(%ebp)
 8618eb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618eb9:	89 04 24             	mov    %eax,(%esp)
 8618ebc:	e8 51 79 b3 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8618ec1:	83 f0 01             	xor    $0x1,%eax
 8618ec4:	84 c0                	test   %al,%al
 8618ec6:	0f 84 81 00 00 00    	je     8618f4d <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0xad>
 8618ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618ecf:	89 04 24             	mov    %eax,(%esp)
 8618ed2:	e8 63 e9 ad ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8618ed7:	0f bf 55 d4          	movswl -0x2c(%ebp),%edx
 8618edb:	39 d0                	cmp    %edx,%eax
 8618edd:	7c 07                	jl     8618ee6 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x46>
 8618edf:	66 83 7d d4 00       	cmpw   $0x0,-0x2c(%ebp)
 8618ee4:	7f 07                	jg     8618eed <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x4d>
 8618ee6:	b8 01 00 00 00       	mov    $0x1,%eax
 8618eeb:	eb 05                	jmp    8618ef2 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x52>
 8618eed:	b8 00 00 00 00       	mov    $0x0,%eax
 8618ef2:	84 c0                	test   %al,%al
 8618ef4:	74 0a                	je     8618f00 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x60>
 8618ef6:	b8 11 00 00 00       	mov    $0x11,%eax
 8618efb:	e9 00 01 00 00       	jmp    8619000 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x160>
 8618f00:	8b 45 10             	mov    0x10(%ebp),%eax
 8618f03:	8b 00                	mov    (%eax),%eax
 8618f05:	83 c0 4c             	add    $0x4c,%eax
 8618f08:	8b 10                	mov    (%eax),%edx
 8618f0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8618f0d:	89 04 24             	mov    %eax,(%esp)
 8618f10:	ff d2                	call   *%edx
 8618f12:	0f b6 d8             	movzbl %al,%ebx
 8618f15:	8b 45 10             	mov    0x10(%ebp),%eax
 8618f18:	89 04 24             	mov    %eax,(%esp)
 8618f1b:	e8 f2 a6 e5 ff       	call   8473612 <_ZNK5CItem12GetSellPriceEv>
 8618f20:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8618f24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8618f2b:	00 
 8618f2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8618f33:	00 
 8618f34:	89 04 24             	mov    %eax,(%esp)
 8618f37:	e8 32 39 37 00       	call   898c86e <_Z16getItemSellPriceiiib>
 8618f3c:	0f bf 55 d4          	movswl -0x2c(%ebp),%edx
 8618f40:	0f af d0             	imul   %eax,%edx
 8618f43:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8618f46:	89 10                	mov    %edx,(%eax)
 8618f48:	e9 ae 00 00 00       	jmp    8618ffb <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x15b>
 8618f4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8618f50:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8618f53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8618f56:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8618f5c:	83 f8 0b             	cmp    $0xb,%eax
 8618f5f:	74 0e                	je     8618f6f <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0xcf>
 8618f61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8618f64:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8618f6a:	83 f8 09             	cmp    $0x9,%eax
 8618f6d:	7f 0a                	jg     8618f79 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0xd9>
 8618f6f:	b8 17 00 00 00       	mov    $0x17,%eax
 8618f74:	e9 87 00 00 00       	jmp    8619000 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x160>
 8618f79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618f7c:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8618f80:	0f b7 d8             	movzwl %ax,%ebx
 8618f83:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8618f86:	89 04 24             	mov    %eax,(%esp)
 8618f89:	e8 0a 5e b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8618f8e:	39 c3                	cmp    %eax,%ebx
 8618f90:	0f 9f c0             	setg   %al
 8618f93:	84 c0                	test   %al,%al
 8618f95:	74 14                	je     8618fab <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi+0x10b>
 8618f97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8618f9a:	89 04 24             	mov    %eax,(%esp)
 8618f9d:	e8 f6 5d b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8618fa2:	89 c2                	mov    %eax,%edx
 8618fa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618fa7:	66 89 50 0b          	mov    %dx,0xb(%eax)
 8618fab:	8b 45 10             	mov    0x10(%ebp),%eax
 8618fae:	8b 00                	mov    (%eax),%eax
 8618fb0:	83 c0 4c             	add    $0x4c,%eax
 8618fb3:	8b 10                	mov    (%eax),%edx
 8618fb5:	8b 45 10             	mov    0x10(%ebp),%eax
 8618fb8:	89 04 24             	mov    %eax,(%esp)
 8618fbb:	ff d2                	call   *%edx
 8618fbd:	0f b6 f8             	movzbl %al,%edi
 8618fc0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8618fc3:	89 04 24             	mov    %eax,(%esp)
 8618fc6:	e8 cd 5d b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8618fcb:	89 c3                	mov    %eax,%ebx
 8618fcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618fd0:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8618fd4:	0f b7 f0             	movzwl %ax,%esi
 8618fd7:	8b 45 10             	mov    0x10(%ebp),%eax
 8618fda:	89 04 24             	mov    %eax,(%esp)
 8618fdd:	e8 30 a6 e5 ff       	call   8473612 <_ZNK5CItem12GetSellPriceEv>
 8618fe2:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8618fe6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8618fea:	89 74 24 04          	mov    %esi,0x4(%esp)
 8618fee:	89 04 24             	mov    %eax,(%esp)
 8618ff1:	e8 78 38 37 00       	call   898c86e <_Z16getItemSellPriceiiib>
 8618ff6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8618ff9:	89 02                	mov    %eax,(%edx)
 8618ffb:	b8 00 00 00 00       	mov    $0x0,%eax
 8619000:	83 c4 3c             	add    $0x3c,%esp
 8619003:	5b                   	pop    %ebx
 8619004:	5e                   	pop    %esi
 8619005:	5f                   	pop    %edi
 8619006:	5d                   	pop    %ebp
 8619007:	c3                   	ret

```

```c
// Store::GetSellItemPrice @ 0x8618ea0

/* Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&) */

undefined4 __thiscall
Store::GetSellItemPrice
          (Store *this,Inven_Item *param_1,CItem *param_2,short param_3,bool param_4,int *param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  cVar2 = Inven_Item::isEquipableItemType(param_1);
  if (cVar2 == '\x01') {
    if ((*(int *)(param_2 + 0x234) == 0xb) || (*(int *)(param_2 + 0x234) < 10)) {
      return 0x17;
    }
    uVar1 = *(ushort *)(param_1 + 0xb);
    iVar5 = CEquipItem::get_endurance((CEquipItem *)param_2);
    if (iVar5 < (int)(uint)uVar1) {
      uVar4 = CEquipItem::get_endurance((CEquipItem *)param_2);
      *(undefined2 *)(param_1 + 0xb) = uVar4;
    }
    bVar3 = (bool)(**(code **)(*(int *)param_2 + 0x4c))(param_2);
    iVar5 = CEquipItem::get_endurance((CEquipItem *)param_2);
    uVar1 = *(ushort *)(param_1 + 0xb);
    iVar6 = CItem::GetSellPrice(param_2);
    iVar5 = getItemSellPrice(iVar6,(uint)uVar1,iVar5,bVar3);
    *param_5 = iVar5;
  }
  else {
    iVar5 = Inven_Item::get_add_info(param_1);
    if ((iVar5 < param_3) || (param_3 < 1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      return 0x11;
    }
    bVar3 = (bool)(**(code **)(*(int *)param_2 + 0x4c))(param_2);
    iVar5 = CItem::GetSellPrice(param_2);
    iVar5 = getItemSellPrice(iVar5,0,0,bVar3);
    *param_5 = param_3 * iVar5;
  }
  return 0;
}

```

---

## GetSellItemPrice_08619008

```asm
// === 08619008 Store::GetSellItemPrice  [0x08619008-0x86193f7] ===
 8619008:	55                   	push   %ebp
 8619009:	89 e5                	mov    %esp,%ebp
 861900b:	53                   	push   %ebx
 861900c:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 8619012:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8619015:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8619018:	8b 55 18             	mov    0x18(%ebp),%edx
 861901b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 861901e:	88 5d a4             	mov    %bl,-0x5c(%ebp)
 8619021:	66 89 4d a0          	mov    %cx,-0x60(%ebp)
 8619025:	66 89 55 9c          	mov    %dx,-0x64(%ebp)
 8619029:	88 45 98             	mov    %al,-0x68(%ebp)
 861902c:	8d 45 b7             	lea    -0x49(%ebp),%eax
 861902f:	89 04 24             	mov    %eax,(%esp)
 8619032:	e8 1d 28 ab ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8619037:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 861903b:	83 f8 02             	cmp    $0x2,%eax
 861903e:	0f 84 d9 00 00 00    	je     861911d <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x115>
 8619044:	83 f8 02             	cmp    $0x2,%eax
 8619047:	7f 09                	jg     8619052 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x4a>
 8619049:	85 c0                	test   %eax,%eax
 861904b:	74 1c                	je     8619069 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x61>
 861904d:	e9 ec 02 00 00       	jmp    861933e <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x336>
 8619052:	83 f8 03             	cmp    $0x3,%eax
 8619055:	0f 84 6e 01 00 00    	je     86191c9 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x1c1>
 861905b:	83 f8 07             	cmp    $0x7,%eax
 861905e:	0f 84 19 02 00 00    	je     861927d <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x275>
 8619064:	e9 d5 02 00 00       	jmp    861933e <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x336>
 8619069:	0f bf 5d a0          	movswl -0x60(%ebp),%ebx
 861906d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619070:	89 04 24             	mov    %eax,(%esp)
 8619073:	e8 06 12 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619078:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 861907e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8619082:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8619089:	00 
 861908a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861908e:	89 14 24             	mov    %edx,(%esp)
 8619091:	e8 82 28 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8619096:	83 ec 04             	sub    $0x4,%esp
 8619099:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 861909f:	89 45 b7             	mov    %eax,-0x49(%ebp)
 86190a2:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 86190a8:	89 45 bb             	mov    %eax,-0x45(%ebp)
 86190ab:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 86190b1:	89 45 bf             	mov    %eax,-0x41(%ebp)
 86190b4:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 86190ba:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 86190bd:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86190c3:	89 45 c7             	mov    %eax,-0x39(%ebp)
 86190c6:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 86190cc:	89 45 cb             	mov    %eax,-0x35(%ebp)
 86190cf:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 86190d5:	89 45 cf             	mov    %eax,-0x31(%ebp)
 86190d8:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86190de:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 86190e1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 86190e7:	89 45 d7             	mov    %eax,-0x29(%ebp)
 86190ea:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 86190f0:	89 45 db             	mov    %eax,-0x25(%ebp)
 86190f3:	8b 45 80             	mov    -0x80(%ebp),%eax
 86190f6:	89 45 df             	mov    %eax,-0x21(%ebp)
 86190f9:	8b 45 84             	mov    -0x7c(%ebp),%eax
 86190fc:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 86190ff:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619102:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8619105:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8619108:	89 45 eb             	mov    %eax,-0x15(%ebp)
 861910b:	8b 45 90             	mov    -0x70(%ebp),%eax
 861910e:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8619111:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8619115:	88 45 f3             	mov    %al,-0xd(%ebp)
 8619118:	e9 2c 02 00 00       	jmp    8619349 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x341>
 861911d:	0f bf 5d a0          	movswl -0x60(%ebp),%ebx
 8619121:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619124:	89 04 24             	mov    %eax,(%esp)
 8619127:	e8 58 89 b3 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 861912c:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8619132:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619136:	89 44 24 04          	mov    %eax,0x4(%esp)
 861913a:	89 14 24             	mov    %edx,(%esp)
 861913d:	e8 72 21 ef ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 8619142:	83 ec 04             	sub    $0x4,%esp
 8619145:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 861914b:	89 45 b7             	mov    %eax,-0x49(%ebp)
 861914e:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8619154:	89 45 bb             	mov    %eax,-0x45(%ebp)
 8619157:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 861915d:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8619160:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8619166:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8619169:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 861916f:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8619172:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8619178:	89 45 cb             	mov    %eax,-0x35(%ebp)
 861917b:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8619181:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8619184:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 861918a:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 861918d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8619193:	89 45 d7             	mov    %eax,-0x29(%ebp)
 8619196:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 861919c:	89 45 db             	mov    %eax,-0x25(%ebp)
 861919f:	8b 45 80             	mov    -0x80(%ebp),%eax
 86191a2:	89 45 df             	mov    %eax,-0x21(%ebp)
 86191a5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 86191a8:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 86191ab:	8b 45 88             	mov    -0x78(%ebp),%eax
 86191ae:	89 45 e7             	mov    %eax,-0x19(%ebp)
 86191b1:	8b 45 8c             	mov    -0x74(%ebp),%eax
 86191b4:	89 45 eb             	mov    %eax,-0x15(%ebp)
 86191b7:	8b 45 90             	mov    -0x70(%ebp),%eax
 86191ba:	89 45 ef             	mov    %eax,-0x11(%ebp)
 86191bd:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 86191c1:	88 45 f3             	mov    %al,-0xd(%ebp)
 86191c4:	e9 80 01 00 00       	jmp    8619349 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x341>
 86191c9:	0f bf 5d a0          	movswl -0x60(%ebp),%ebx
 86191cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86191d0:	89 04 24             	mov    %eax,(%esp)
 86191d3:	e8 a6 10 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86191d8:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 86191de:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86191e2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86191e9:	00 
 86191ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 86191ee:	89 14 24             	mov    %edx,(%esp)
 86191f1:	e8 22 27 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86191f6:	83 ec 04             	sub    $0x4,%esp
 86191f9:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86191ff:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8619202:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8619208:	89 45 bb             	mov    %eax,-0x45(%ebp)
 861920b:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8619211:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8619214:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 861921a:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 861921d:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8619223:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8619226:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 861922c:	89 45 cb             	mov    %eax,-0x35(%ebp)
 861922f:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8619235:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8619238:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 861923e:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8619241:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8619247:	89 45 d7             	mov    %eax,-0x29(%ebp)
 861924a:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8619250:	89 45 db             	mov    %eax,-0x25(%ebp)
 8619253:	8b 45 80             	mov    -0x80(%ebp),%eax
 8619256:	89 45 df             	mov    %eax,-0x21(%ebp)
 8619259:	8b 45 84             	mov    -0x7c(%ebp),%eax
 861925c:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 861925f:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619262:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8619265:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8619268:	89 45 eb             	mov    %eax,-0x15(%ebp)
 861926b:	8b 45 90             	mov    -0x70(%ebp),%eax
 861926e:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8619271:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8619275:	88 45 f3             	mov    %al,-0xd(%ebp)
 8619278:	e9 cc 00 00 00       	jmp    8619349 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x341>
 861927d:	0f bf 5d a0          	movswl -0x60(%ebp),%ebx
 8619281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619284:	89 04 24             	mov    %eax,(%esp)
 8619287:	e8 f2 0f ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 861928c:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8619292:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8619296:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 861929d:	00 
 861929e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86192a2:	89 14 24             	mov    %edx,(%esp)
 86192a5:	e8 6e 26 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86192aa:	83 ec 04             	sub    $0x4,%esp
 86192ad:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86192b3:	89 45 b7             	mov    %eax,-0x49(%ebp)
 86192b6:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 86192bc:	89 45 bb             	mov    %eax,-0x45(%ebp)
 86192bf:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 86192c5:	89 45 bf             	mov    %eax,-0x41(%ebp)
 86192c8:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 86192ce:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 86192d1:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86192d7:	89 45 c7             	mov    %eax,-0x39(%ebp)
 86192da:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 86192e0:	89 45 cb             	mov    %eax,-0x35(%ebp)
 86192e3:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 86192e9:	89 45 cf             	mov    %eax,-0x31(%ebp)
 86192ec:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86192f2:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 86192f5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 86192fb:	89 45 d7             	mov    %eax,-0x29(%ebp)
 86192fe:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8619304:	89 45 db             	mov    %eax,-0x25(%ebp)
 8619307:	8b 45 80             	mov    -0x80(%ebp),%eax
 861930a:	89 45 df             	mov    %eax,-0x21(%ebp)
 861930d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8619310:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 8619313:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619316:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8619319:	8b 45 8c             	mov    -0x74(%ebp),%eax
 861931c:	89 45 eb             	mov    %eax,-0x15(%ebp)
 861931f:	8b 45 90             	mov    -0x70(%ebp),%eax
 8619322:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8619325:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8619329:	88 45 f3             	mov    %al,-0xd(%ebp)
 861932c:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
 8619330:	3c 05                	cmp    $0x5,%al
 8619332:	75 14                	jne    8619348 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x340>
 8619334:	b8 11 00 00 00       	mov    $0x11,%eax
 8619339:	e9 b4 00 00 00       	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 861933e:	b8 11 00 00 00       	mov    $0x11,%eax
 8619343:	e9 aa 00 00 00       	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 8619348:	90                   	nop
 8619349:	8b 45 b9             	mov    -0x47(%ebp),%eax
 861934c:	85 c0                	test   %eax,%eax
 861934e:	75 0a                	jne    861935a <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x352>
 8619350:	b8 11 00 00 00       	mov    $0x11,%eax
 8619355:	e9 98 00 00 00       	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 861935a:	8b 45 b9             	mov    -0x47(%ebp),%eax
 861935d:	89 c3                	mov    %eax,%ebx
 861935f:	e8 37 2e ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 8619364:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8619368:	89 04 24             	mov    %eax,(%esp)
 861936b:	e8 c2 66 d4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8619370:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8619373:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8619377:	75 07                	jne    8619380 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x378>
 8619379:	b8 11 00 00 00       	mov    $0x11,%eax
 861937e:	eb 72                	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 8619380:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8619383:	89 04 24             	mov    %eax,(%esp)
 8619386:	e8 b3 34 c1 ff       	call   822c83e <_ZNK5CItem19GetFinishPointPriceEv>
 861938b:	85 c0                	test   %eax,%eax
 861938d:	0f 95 c0             	setne  %al
 8619390:	84 c0                	test   %al,%al
 8619392:	74 07                	je     861939b <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x393>
 8619394:	b8 17 00 00 00       	mov    $0x17,%eax
 8619399:	eb 57                	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 861939b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861939e:	89 04 24             	mov    %eax,(%esp)
 86193a1:	e8 3c 7f ad ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 86193a6:	83 f8 02             	cmp    $0x2,%eax
 86193a9:	75 07                	jne    86193b2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3aa>
 86193ab:	b8 17 00 00 00       	mov    $0x17,%eax
 86193b0:	eb 40                	jmp    86193f2 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_+0x3ea>
 86193b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86193b5:	89 04 24             	mov    %eax,(%esp)
 86193b8:	e8 8b 78 af ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 86193bd:	8b 55 20             	mov    0x20(%ebp),%edx
 86193c0:	89 02                	mov    %eax,(%edx)
 86193c2:	0f b6 55 98          	movzbl -0x68(%ebp),%edx
 86193c6:	0f bf 45 9c          	movswl -0x64(%ebp),%eax
 86193ca:	8b 4d 24             	mov    0x24(%ebp),%ecx
 86193cd:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86193d1:	89 54 24 10          	mov    %edx,0x10(%esp)
 86193d5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86193d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86193dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 86193e0:	8d 45 b7             	lea    -0x49(%ebp),%eax
 86193e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86193e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86193ea:	89 04 24             	mov    %eax,(%esp)
 86193ed:	e8 ae fa ff ff       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 86193f2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86193f5:	c9                   	leave
 86193f6:	c3                   	ret
 86193f7:	90                   	nop

```

```c
// Store::GetSellItemPrice @ 0x8619008

/* Store::GetSellItemPrice(CUser*, char, short, short, bool, int&, int&) */

undefined4 __thiscall
Store::GetSellItemPrice
          (Store *this,CUser *param_1,char param_2,short param_3,short param_4,bool param_5,
          int *param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  bool local_6c;
  short local_68;
  short local_64;
  char local_60;
  Inven_Item local_4d;
  char cStack_4c;
  undefined2 uStack_4b;
  undefined2 local_49;
  undefined2 uStack_47;
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
  undefined1 local_11;
  CItem *local_10;
  
  local_60 = param_2;
  local_64 = param_3;
  local_68 = param_4;
  local_6c = param_5;
  Inven_Item::Inven_Item(&local_4d);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0x11;
    }
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else if (local_60 == '\x03') {
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else {
    if (local_60 != '\a') {
      return 0x11;
    }
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
    if (cStack_4c == '\x05') {
      return 0x11;
    }
  }
  if (CONCAT22(local_49,uStack_4b) == 0) {
    uVar2 = 0x11;
  }
  else {
    iVar1 = CONCAT22(local_49,uStack_4b);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (CItem *)0x0) {
      uVar2 = 0x11;
    }
    else {
      iVar1 = CItem::GetFinishPointPrice(local_10);
      if (iVar1 == 0) {
        iVar1 = CItem::GetAttachType(local_10);
        if (iVar1 == 2) {
          uVar2 = 0x17;
        }
        else {
          iVar1 = CItem::get_index(local_10);
          *param_6 = iVar1;
          uVar2 = GetSellItemPrice(this,&local_4d,local_10,local_68,local_6c,param_7);
        }
      }
      else {
        uVar2 = 0x17;
      }
    }
  }
  return uVar2;
}

```

---

## repair_equip

```asm
// === 08619cec Store::repair_equip  [0x08619cec-0x861b031] ===
 8619cec:	55                   	push   %ebp
 8619ced:	89 e5                	mov    %esp,%ebp
 8619cef:	57                   	push   %edi
 8619cf0:	56                   	push   %esi
 8619cf1:	53                   	push   %ebx
 8619cf2:	81 ec bc 01 00 00    	sub    $0x1bc,%esp
 8619cf8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8619cfb:	8b 55 14             	mov    0x14(%ebp),%edx
 8619cfe:	8b 45 18             	mov    0x18(%ebp),%eax
 8619d01:	88 8d e4 fe ff ff    	mov    %cl,-0x11c(%ebp)
 8619d07:	66 89 95 e0 fe ff ff 	mov    %dx,-0x120(%ebp)
 8619d0e:	66 89 85 dc fe ff ff 	mov    %ax,-0x124(%ebp)
 8619d15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619d18:	89 04 24             	mov    %eax,(%esp)
 8619d1b:	e8 de 05 ac ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8619d20:	84 c0                	test   %al,%al
 8619d22:	74 0a                	je     8619d2e <_ZN5Store12repair_equipEP5CUsercstRt+0x42>
 8619d24:	bb 13 00 00 00       	mov    $0x13,%ebx
 8619d29:	e9 f7 12 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 8619d2e:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 8619d34:	89 04 24             	mov    %eax,(%esp)
 8619d37:	e8 18 1b ab ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8619d3c:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8619d43:	66 83 bd e0 fe ff ff 	cmpw   $0xffff,-0x120(%ebp)
 8619d4a:	ff 
 8619d4b:	0f 84 87 09 00 00    	je     861a6d8 <_ZN5Store12repair_equipEP5CUsercstRt+0x9ec>
 8619d51:	0f be 85 e4 fe ff ff 	movsbl -0x11c(%ebp),%eax
 8619d58:	83 f8 02             	cmp    $0x2,%eax
 8619d5b:	0f 84 0a 01 00 00    	je     8619e6b <_ZN5Store12repair_equipEP5CUsercstRt+0x17f>
 8619d61:	83 f8 03             	cmp    $0x3,%eax
 8619d64:	0f 84 f2 01 00 00    	je     8619f5c <_ZN5Store12repair_equipEP5CUsercstRt+0x270>
 8619d6a:	85 c0                	test   %eax,%eax
 8619d6c:	0f 85 e0 02 00 00    	jne    861a052 <_ZN5Store12repair_equipEP5CUsercstRt+0x366>
 8619d72:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 8619d79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619d7c:	89 04 24             	mov    %eax,(%esp)
 8619d7f:	e8 fa 04 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619d84:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 8619d8a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8619d8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8619d95:	00 
 8619d96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619d9a:	89 14 24             	mov    %edx,(%esp)
 8619d9d:	e8 76 1b ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8619da2:	83 ec 04             	sub    $0x4,%esp
 8619da5:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8619dab:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8619db1:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8619db7:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8619dbd:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8619dc3:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 8619dc9:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8619dcf:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 8619dd5:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8619ddb:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 8619de1:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8619de7:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8619ded:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8619df3:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 8619df9:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8619dff:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 8619e05:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8619e0b:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8619e11:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8619e17:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8619e1d:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8619e23:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 8619e29:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 8619e2f:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 8619e35:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 8619e3b:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 8619e41:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8619e47:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 8619e4d:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8619e53:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 8619e59:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 8619e60:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 8619e66:	e9 f1 01 00 00       	jmp    861a05c <_ZN5Store12repair_equipEP5CUsercstRt+0x370>
 8619e6b:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 8619e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619e75:	89 04 24             	mov    %eax,(%esp)
 8619e78:	e8 07 7c b3 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 8619e7d:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 8619e83:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619e8b:	89 14 24             	mov    %edx,(%esp)
 8619e8e:	e8 21 14 ef ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 8619e93:	83 ec 04             	sub    $0x4,%esp
 8619e96:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8619e9c:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8619ea2:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8619ea8:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8619eae:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8619eb4:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 8619eba:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8619ec0:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 8619ec6:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8619ecc:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 8619ed2:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8619ed8:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8619ede:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8619ee4:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 8619eea:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8619ef0:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 8619ef6:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8619efc:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8619f02:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8619f08:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8619f0e:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8619f14:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 8619f1a:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 8619f20:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 8619f26:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 8619f2c:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 8619f32:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8619f38:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 8619f3e:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8619f44:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 8619f4a:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 8619f51:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 8619f57:	e9 00 01 00 00       	jmp    861a05c <_ZN5Store12repair_equipEP5CUsercstRt+0x370>
 8619f5c:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 8619f63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619f66:	89 04 24             	mov    %eax,(%esp)
 8619f69:	e8 10 03 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619f6e:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 8619f74:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8619f78:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8619f7f:	00 
 8619f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619f84:	89 14 24             	mov    %edx,(%esp)
 8619f87:	e8 8c 19 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8619f8c:	83 ec 04             	sub    $0x4,%esp
 8619f8f:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8619f95:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8619f9b:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8619fa1:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8619fa7:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8619fad:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 8619fb3:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8619fb9:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 8619fbf:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8619fc5:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 8619fcb:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8619fd1:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8619fd7:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8619fdd:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 8619fe3:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8619fe9:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 8619fef:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8619ff5:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8619ffb:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 861a001:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 861a007:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 861a00d:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861a013:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 861a019:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 861a01f:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 861a025:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 861a02b:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 861a031:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 861a037:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 861a03d:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 861a043:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 861a04a:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 861a050:	eb 0a                	jmp    861a05c <_ZN5Store12repair_equipEP5CUsercstRt+0x370>
 861a052:	bb 11 00 00 00       	mov    $0x11,%ebx
 861a057:	e9 c9 0f 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a05c:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861a062:	85 c0                	test   %eax,%eax
 861a064:	74 0b                	je     861a071 <_ZN5Store12repair_equipEP5CUsercstRt+0x385>
 861a066:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 861a06d:	3c 01                	cmp    $0x1,%al
 861a06f:	74 0a                	je     861a07b <_ZN5Store12repair_equipEP5CUsercstRt+0x38f>
 861a071:	bb 11 00 00 00       	mov    $0x11,%ebx
 861a076:	e9 aa 0f 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a07b:	0f b7 95 36 ff ff ff 	movzwl -0xca(%ebp),%edx
 861a082:	8b 45 1c             	mov    0x1c(%ebp),%eax
 861a085:	66 89 10             	mov    %dx,(%eax)
 861a088:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861a08e:	89 c3                	mov    %eax,%ebx
 861a090:	e8 06 21 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861a095:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861a099:	89 04 24             	mov    %eax,(%esp)
 861a09c:	e8 91 59 d4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 861a0a1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 861a0a4:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 861a0a8:	75 0a                	jne    861a0b4 <_ZN5Store12repair_equipEP5CUsercstRt+0x3c8>
 861a0aa:	bb 11 00 00 00       	mov    $0x11,%ebx
 861a0af:	e9 71 0f 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a0b4:	8b 45 ac             	mov    -0x54(%ebp),%eax
 861a0b7:	89 45 b0             	mov    %eax,-0x50(%ebp)
 861a0ba:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a0bd:	89 04 24             	mov    %eax,(%esp)
 861a0c0:	e8 d3 4c b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a0c5:	85 c0                	test   %eax,%eax
 861a0c7:	0f 94 c0             	sete   %al
 861a0ca:	84 c0                	test   %al,%al
 861a0cc:	74 0a                	je     861a0d8 <_ZN5Store12repair_equipEP5CUsercstRt+0x3ec>
 861a0ce:	bb 11 00 00 00       	mov    $0x11,%ebx
 861a0d3:	e9 4d 0f 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a0d8:	8d 85 ee fe ff ff    	lea    -0x112(%ebp),%eax
 861a0de:	89 04 24             	mov    %eax,(%esp)
 861a0e1:	e8 6e 17 ab ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 861a0e6:	66 83 bd dc fe ff ff 	cmpw   $0xffff,-0x124(%ebp)
 861a0ed:	ff 
 861a0ee:	0f 84 37 01 00 00    	je     861a22b <_ZN5Store12repair_equipEP5CUsercstRt+0x53f>
 861a0f4:	0f b7 9d dc fe ff ff 	movzwl -0x124(%ebp),%ebx
 861a0fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a0fe:	89 04 24             	mov    %eax,(%esp)
 861a101:	e8 78 01 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 861a106:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 861a10c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 861a110:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 861a117:	00 
 861a118:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a11c:	89 14 24             	mov    %edx,(%esp)
 861a11f:	e8 f4 17 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 861a124:	83 ec 04             	sub    $0x4,%esp
 861a127:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 861a12d:	89 85 ee fe ff ff    	mov    %eax,-0x112(%ebp)
 861a133:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 861a139:	89 85 f2 fe ff ff    	mov    %eax,-0x10e(%ebp)
 861a13f:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 861a145:	89 85 f6 fe ff ff    	mov    %eax,-0x10a(%ebp)
 861a14b:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 861a151:	89 85 fa fe ff ff    	mov    %eax,-0x106(%ebp)
 861a157:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 861a15d:	89 85 fe fe ff ff    	mov    %eax,-0x102(%ebp)
 861a163:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 861a169:	89 85 02 ff ff ff    	mov    %eax,-0xfe(%ebp)
 861a16f:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 861a175:	89 85 06 ff ff ff    	mov    %eax,-0xfa(%ebp)
 861a17b:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 861a181:	89 85 0a ff ff ff    	mov    %eax,-0xf6(%ebp)
 861a187:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 861a18d:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 861a193:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 861a199:	89 85 12 ff ff ff    	mov    %eax,-0xee(%ebp)
 861a19f:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 861a1a5:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 861a1ab:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 861a1b1:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 861a1b7:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 861a1bd:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 861a1c3:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 861a1c9:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 861a1cf:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 861a1d5:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 861a1db:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 861a1e2:	88 85 2a ff ff ff    	mov    %al,-0xd6(%ebp)
 861a1e8:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 861a1ee:	85 c0                	test   %eax,%eax
 861a1f0:	74 0b                	je     861a1fd <_ZN5Store12repair_equipEP5CUsercstRt+0x511>
 861a1f2:	0f b6 85 ef fe ff ff 	movzbl -0x111(%ebp),%eax
 861a1f9:	3c 02                	cmp    $0x2,%al
 861a1fb:	74 0a                	je     861a207 <_ZN5Store12repair_equipEP5CUsercstRt+0x51b>
 861a1fd:	bb 15 00 00 00       	mov    $0x15,%ebx
 861a202:	e9 1e 0e 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a207:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 861a20d:	3d 77 1f 00 00       	cmp    $0x1f77,%eax
 861a212:	74 17                	je     861a22b <_ZN5Store12repair_equipEP5CUsercstRt+0x53f>
 861a214:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 861a21a:	3d 1f 20 00 00       	cmp    $0x201f,%eax
 861a21f:	74 0a                	je     861a22b <_ZN5Store12repair_equipEP5CUsercstRt+0x53f>
 861a221:	bb 15 00 00 00       	mov    $0x15,%ebx
 861a226:	e9 fa 0d 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a22b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a22e:	89 04 24             	mov    %eax,(%esp)
 861a231:	e8 82 00 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861a236:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a23a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a23d:	89 04 24             	mov    %eax,(%esp)
 861a240:	e8 73 95 ef ff       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 861a245:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 861a248:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a24b:	89 04 24             	mov    %eax,(%esp)
 861a24e:	e8 65 00 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861a253:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a257:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a25a:	89 04 24             	mov    %eax,(%esp)
 861a25d:	e8 ba 95 ef ff       	call   851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>
 861a262:	89 45 b8             	mov    %eax,-0x48(%ebp)
 861a265:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861a26b:	83 c0 11             	add    $0x11,%eax
 861a26e:	89 04 24             	mov    %eax,(%esp)
 861a271:	e8 56 65 b3 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 861a276:	0f b6 f0             	movzbl %al,%esi
 861a279:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861a27f:	89 04 24             	mov    %eax,(%esp)
 861a282:	e8 e5 ad ad ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 861a287:	0f b6 d8             	movzbl %al,%ebx
 861a28a:	e8 0c 1f ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861a28f:	89 74 24 08          	mov    %esi,0x8(%esp)
 861a293:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861a297:	89 04 24             	mov    %eax,(%esp)
 861a29a:	e8 35 93 d4 ff       	call   83635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>
 861a29f:	d9 9d 88 fe ff ff    	fstps  -0x178(%ebp)
 861a2a5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a2a8:	89 04 24             	mov    %eax,(%esp)
 861a2ab:	e8 e8 4a b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a2b0:	0f b7 95 36 ff ff ff 	movzwl -0xca(%ebp),%edx
 861a2b7:	0f b7 d2             	movzwl %dx,%edx
 861a2ba:	d9 85 88 fe ff ff    	flds   -0x178(%ebp)
 861a2c0:	d9 5c 24 14          	fstps  0x14(%esp)
 861a2c4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 861a2cb:	00 
 861a2cc:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 861a2cf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 861a2d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 861a2d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 861a2db:	8b 45 b8             	mov    -0x48(%ebp),%eax
 861a2de:	89 04 24             	mov    %eax,(%esp)
 861a2e1:	e8 16 26 37 00       	call   898c8fc <_Z23getEquipmentRepairPriceiiiibf>
 861a2e6:	89 45 a8             	mov    %eax,-0x58(%ebp)
 861a2e9:	66 83 bd dc fe ff ff 	cmpw   $0xffff,-0x124(%ebp)
 861a2f0:	ff 
 861a2f1:	0f 84 88 00 00 00    	je     861a37f <_ZN5Store12repair_equipEP5CUsercstRt+0x693>
 861a2f7:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 861a2fd:	3d 77 1f 00 00       	cmp    $0x1f77,%eax
 861a302:	74 0d                	je     861a311 <_ZN5Store12repair_equipEP5CUsercstRt+0x625>
 861a304:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 861a30a:	3d 1f 20 00 00       	cmp    $0x201f,%eax
 861a30f:	75 6e                	jne    861a37f <_ZN5Store12repair_equipEP5CUsercstRt+0x693>
 861a311:	0f b7 9d dc fe ff ff 	movzwl -0x124(%ebp),%ebx
 861a318:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a31b:	89 04 24             	mov    %eax,(%esp)
 861a31e:	e8 6b ff ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861a323:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 861a32a:	00 
 861a32b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 861a332:	00 
 861a333:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861a337:	89 04 24             	mov    %eax,(%esp)
 861a33a:	e8 9f 55 ee ff       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 861a33f:	85 c0                	test   %eax,%eax
 861a341:	0f 95 c0             	setne  %al
 861a344:	84 c0                	test   %al,%al
 861a346:	74 0a                	je     861a352 <_ZN5Store12repair_equipEP5CUsercstRt+0x666>
 861a348:	bb 16 00 00 00       	mov    $0x16,%ebx
 861a34d:	e9 d3 0c 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a352:	0f b7 85 dc fe ff ff 	movzwl -0x124(%ebp),%eax
 861a359:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861a35d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861a364:	00 
 861a365:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a36c:	00 
 861a36d:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a370:	89 04 24             	mov    %eax,(%esp)
 861a373:	e8 60 1f 06 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 861a378:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 861a37f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a382:	89 04 24             	mov    %eax,(%esp)
 861a385:	e8 04 ff ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861a38a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 861a391:	00 
 861a392:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 861a399:	00 
 861a39a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 861a39d:	89 54 24 04          	mov    %edx,0x4(%esp)
 861a3a1:	89 04 24             	mov    %eax,(%esp)
 861a3a4:	e8 a3 51 ee ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 861a3a9:	83 f0 01             	xor    $0x1,%eax
 861a3ac:	84 c0                	test   %al,%al
 861a3ae:	74 0a                	je     861a3ba <_ZN5Store12repair_equipEP5CUsercstRt+0x6ce>
 861a3b0:	bb 0a 00 00 00       	mov    $0xa,%ebx
 861a3b5:	e9 6b 0c 00 00       	jmp    861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861a3ba:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 861a3bd:	e8 2d 32 ff ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 861a3c2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 861a3c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 861a3c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 861a3cd:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 861a3d4:	00 
 861a3d5:	89 04 24             	mov    %eax,(%esp)
 861a3d8:	e8 a5 32 ff ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 861a3dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a3e0:	89 04 24             	mov    %eax,(%esp)
 861a3e3:	e8 a4 ff ab ff       	call   80da38c <_ZN5CUser9get_stateEv>
 861a3e8:	83 f8 0a             	cmp    $0xa,%eax
 861a3eb:	0f 94 c0             	sete   %al
 861a3ee:	84 c0                	test   %al,%al
 861a3f0:	74 7b                	je     861a46d <_ZN5Store12repair_equipEP5CUsercstRt+0x781>
 861a3f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a3f5:	89 04 24             	mov    %eax,(%esp)
 861a3f8:	e8 a7 ae 03 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 861a3fd:	89 45 c0             	mov    %eax,-0x40(%ebp)
 861a400:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 861a404:	74 67                	je     861a46d <_ZN5Store12repair_equipEP5CUsercstRt+0x781>
 861a406:	8b 45 c0             	mov    -0x40(%ebp),%eax
 861a409:	89 04 24             	mov    %eax,(%esp)
 861a40c:	e8 01 a2 c1 ff       	call   8234612 <_ZNK8WongWork11CDeathTower14getCDungeonMGrEv>
 861a411:	89 04 24             	mov    %eax,(%esp)
 861a414:	e8 d7 a1 c1 ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 861a419:	89 04 24             	mov    %eax,(%esp)
 861a41c:	e8 cf 38 ae ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 861a421:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 861a426:	0f 94 c0             	sete   %al
 861a429:	84 c0                	test   %al,%al
 861a42b:	74 06                	je     861a433 <_ZN5Store12repair_equipEP5CUsercstRt+0x747>
 861a42d:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 861a431:	eb 04                	jmp    861a437 <_ZN5Store12repair_equipEP5CUsercstRt+0x74b>
 861a433:	c6 45 bf 01          	movb   $0x1,-0x41(%ebp)
 861a437:	8b 7d a8             	mov    -0x58(%ebp),%edi
 861a43a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a43d:	89 04 24             	mov    %eax,(%esp)
 861a440:	e8 73 fe ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861a445:	0f be f0             	movsbl %al,%esi
 861a448:	0f be 5d bf          	movsbl -0x41(%ebp),%ebx
 861a44c:	e8 e6 4e ff ff       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 861a451:	89 7c 24 10          	mov    %edi,0x10(%esp)
 861a455:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861a459:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861a45d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 861a464:	00 
 861a465:	89 04 24             	mov    %eax,(%esp)
 861a468:	e8 d5 4e ff ff       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 861a46d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a470:	89 04 24             	mov    %eax,(%esp)
 861a473:	e8 20 49 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a478:	66 89 85 36 ff ff ff 	mov    %ax,-0xca(%ebp)
 861a47f:	0f be 85 e4 fe ff ff 	movsbl -0x11c(%ebp),%eax
 861a486:	83 f8 02             	cmp    $0x2,%eax
 861a489:	0f 84 03 01 00 00    	je     861a592 <_ZN5Store12repair_equipEP5CUsercstRt+0x8a6>
 861a48f:	83 f8 03             	cmp    $0x3,%eax
 861a492:	0f 84 4e 01 00 00    	je     861a5e6 <_ZN5Store12repair_equipEP5CUsercstRt+0x8fa>
 861a498:	85 c0                	test   %eax,%eax
 861a49a:	0f 85 7f 0b 00 00    	jne    861b01f <_ZN5Store12repair_equipEP5CUsercstRt+0x1333>
 861a4a0:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 861a4a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a4aa:	89 04 24             	mov    %eax,(%esp)
 861a4ad:	e8 dc fd ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861a4b2:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 861a4b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861a4bc:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 861a4c2:	89 54 24 10          	mov    %edx,0x10(%esp)
 861a4c6:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 861a4cc:	89 54 24 14          	mov    %edx,0x14(%esp)
 861a4d0:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 861a4d6:	89 54 24 18          	mov    %edx,0x18(%esp)
 861a4da:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 861a4e0:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 861a4e4:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 861a4ea:	89 54 24 20          	mov    %edx,0x20(%esp)
 861a4ee:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 861a4f4:	89 54 24 24          	mov    %edx,0x24(%esp)
 861a4f8:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 861a4fe:	89 54 24 28          	mov    %edx,0x28(%esp)
 861a502:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 861a508:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 861a50c:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 861a512:	89 54 24 30          	mov    %edx,0x30(%esp)
 861a516:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 861a51c:	89 54 24 34          	mov    %edx,0x34(%esp)
 861a520:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 861a526:	89 54 24 38          	mov    %edx,0x38(%esp)
 861a52a:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 861a530:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 861a534:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 861a53a:	89 54 24 40          	mov    %edx,0x40(%esp)
 861a53e:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 861a544:	89 54 24 44          	mov    %edx,0x44(%esp)
 861a548:	0f b6 95 67 ff ff ff 	movzbl -0x99(%ebp),%edx
 861a54f:	88 54 24 48          	mov    %dl,0x48(%esp)
 861a553:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861a557:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a55e:	00 
 861a55f:	89 04 24             	mov    %eax,(%esp)
 861a562:	e8 47 5b ee ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 861a567:	0f bf 85 e0 fe ff ff 	movswl -0x120(%ebp),%eax
 861a56e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861a572:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861a579:	00 
 861a57a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a581:	00 
 861a582:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a585:	89 04 24             	mov    %eax,(%esp)
 861a588:	e8 4b 1d 06 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 861a58d:	e9 8e 0a 00 00       	jmp    861b020 <_ZN5Store12repair_equipEP5CUsercstRt+0x1334>
 861a592:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 861a599:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a59c:	89 04 24             	mov    %eax,(%esp)
 861a59f:	e8 f0 74 b3 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 861a5a4:	8d 95 2b ff ff ff    	lea    -0xd5(%ebp),%edx
 861a5aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 861a5ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861a5b2:	89 04 24             	mov    %eax,(%esp)
 861a5b5:	e8 46 15 ef ff       	call   850bb00 <_ZN6CCargo11update_itemEiRK10Inven_Item>
 861a5ba:	0f bf 85 e0 fe ff ff 	movswl -0x120(%ebp),%eax
 861a5c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861a5c5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 861a5cc:	00 
 861a5cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a5d4:	00 
 861a5d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a5d8:	89 04 24             	mov    %eax,(%esp)
 861a5db:	e8 f8 1c 06 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 861a5e0:	90                   	nop
 861a5e1:	e9 3a 0a 00 00       	jmp    861b020 <_ZN5Store12repair_equipEP5CUsercstRt+0x1334>
 861a5e6:	0f bf 9d e0 fe ff ff 	movswl -0x120(%ebp),%ebx
 861a5ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a5f0:	89 04 24             	mov    %eax,(%esp)
 861a5f3:	e8 96 fc ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861a5f8:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 861a5fe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861a602:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 861a608:	89 54 24 10          	mov    %edx,0x10(%esp)
 861a60c:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 861a612:	89 54 24 14          	mov    %edx,0x14(%esp)
 861a616:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 861a61c:	89 54 24 18          	mov    %edx,0x18(%esp)
 861a620:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 861a626:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 861a62a:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 861a630:	89 54 24 20          	mov    %edx,0x20(%esp)
 861a634:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 861a63a:	89 54 24 24          	mov    %edx,0x24(%esp)
 861a63e:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 861a644:	89 54 24 28          	mov    %edx,0x28(%esp)
 861a648:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 861a64e:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 861a652:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 861a658:	89 54 24 30          	mov    %edx,0x30(%esp)
 861a65c:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 861a662:	89 54 24 34          	mov    %edx,0x34(%esp)
 861a666:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 861a66c:	89 54 24 38          	mov    %edx,0x38(%esp)
 861a670:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 861a676:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 861a67a:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 861a680:	89 54 24 40          	mov    %edx,0x40(%esp)
 861a684:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 861a68a:	89 54 24 44          	mov    %edx,0x44(%esp)
 861a68e:	0f b6 95 67 ff ff ff 	movzbl -0x99(%ebp),%edx
 861a695:	88 54 24 48          	mov    %dl,0x48(%esp)
 861a699:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861a69d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861a6a4:	00 
 861a6a5:	89 04 24             	mov    %eax,(%esp)
 861a6a8:	e8 01 5a ee ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 861a6ad:	0f bf 85 e0 fe ff ff 	movswl -0x120(%ebp),%eax
 861a6b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861a6b8:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 861a6bf:	00 
 861a6c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a6c7:	00 
 861a6c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a6cb:	89 04 24             	mov    %eax,(%esp)
 861a6ce:	e8 05 1c 06 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 861a6d3:	e9 48 09 00 00       	jmp    861b020 <_ZN5Store12repair_equipEP5CUsercstRt+0x1334>
 861a6d8:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 861a6de:	89 04 24             	mov    %eax,(%esp)
 861a6e1:	e8 c8 09 00 00       	call   861b0ae <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EEC1Ev>
 861a6e6:	c7 45 c4 03 00 00 00 	movl   $0x3,-0x3c(%ebp)
 861a6ed:	e9 72 02 00 00       	jmp    861a964 <_ZN5Store12repair_equipEP5CUsercstRt+0xc78>
 861a6f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a6f5:	89 04 24             	mov    %eax,(%esp)
 861a6f8:	e8 81 fb ab ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 861a6fd:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 861a703:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 861a706:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 861a70a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 861a711:	00 
 861a712:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a716:	89 14 24             	mov    %edx,(%esp)
 861a719:	e8 fa 11 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 861a71e:	83 ec 04             	sub    $0x4,%esp
 861a721:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 861a727:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 861a72d:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 861a733:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 861a739:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 861a73f:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 861a745:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 861a74b:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 861a751:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 861a757:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 861a75d:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 861a763:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 861a769:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 861a76f:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 861a775:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 861a77b:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 861a781:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 861a787:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 861a78d:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 861a793:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 861a799:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 861a79f:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861a7a5:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 861a7ab:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 861a7b1:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 861a7b7:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 861a7bd:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 861a7c3:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 861a7c9:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 861a7cf:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 861a7d5:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 861a7dc:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 861a7e2:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861a7e8:	85 c0                	test   %eax,%eax
 861a7ea:	0f 84 70 01 00 00    	je     861a960 <_ZN5Store12repair_equipEP5CUsercstRt+0xc74>
 861a7f0:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 861a7f7:	3c 01                	cmp    $0x1,%al
 861a7f9:	0f 85 5d 01 00 00    	jne    861a95c <_ZN5Store12repair_equipEP5CUsercstRt+0xc70>
 861a7ff:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861a805:	89 c6                	mov    %eax,%esi
 861a807:	e8 8f 19 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861a80c:	8b 40 0c             	mov    0xc(%eax),%eax
 861a80f:	89 74 24 04          	mov    %esi,0x4(%esp)
 861a813:	89 04 24             	mov    %eax,(%esp)
 861a816:	e8 6f 76 ef ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 861a81b:	89 45 ac             	mov    %eax,-0x54(%ebp)
 861a81e:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 861a822:	0f 84 37 01 00 00    	je     861a95f <_ZN5Store12repair_equipEP5CUsercstRt+0xc73>
 861a828:	8b 45 ac             	mov    -0x54(%ebp),%eax
 861a82b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 861a82e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a831:	89 04 24             	mov    %eax,(%esp)
 861a834:	e8 7f fa ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861a839:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a83d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a840:	89 04 24             	mov    %eax,(%esp)
 861a843:	e8 70 8f ef ff       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 861a848:	89 45 c8             	mov    %eax,-0x38(%ebp)
 861a84b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a84e:	89 04 24             	mov    %eax,(%esp)
 861a851:	e8 62 fa ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861a856:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a85a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a85d:	89 04 24             	mov    %eax,(%esp)
 861a860:	e8 b7 8f ef ff       	call   851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>
 861a865:	89 45 cc             	mov    %eax,-0x34(%ebp)
 861a868:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861a86e:	83 c0 11             	add    $0x11,%eax
 861a871:	89 04 24             	mov    %eax,(%esp)
 861a874:	e8 53 5f b3 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 861a879:	0f b6 f8             	movzbl %al,%edi
 861a87c:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861a882:	89 04 24             	mov    %eax,(%esp)
 861a885:	e8 e2 a7 ad ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 861a88a:	0f b6 f0             	movzbl %al,%esi
 861a88d:	e8 09 19 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861a892:	89 7c 24 08          	mov    %edi,0x8(%esp)
 861a896:	89 74 24 04          	mov    %esi,0x4(%esp)
 861a89a:	89 04 24             	mov    %eax,(%esp)
 861a89d:	e8 32 8d d4 ff       	call   83635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>
 861a8a2:	d9 9d 8c fe ff ff    	fstps  -0x174(%ebp)
 861a8a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a8ab:	89 04 24             	mov    %eax,(%esp)
 861a8ae:	e8 e5 44 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a8b3:	0f b7 95 36 ff ff ff 	movzwl -0xca(%ebp),%edx
 861a8ba:	0f b7 d2             	movzwl %dx,%edx
 861a8bd:	d9 85 8c fe ff ff    	flds   -0x174(%ebp)
 861a8c3:	d9 5c 24 14          	fstps  0x14(%esp)
 861a8c7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 861a8ce:	00 
 861a8cf:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 861a8d2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 861a8d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 861a8da:	89 54 24 04          	mov    %edx,0x4(%esp)
 861a8de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 861a8e1:	89 04 24             	mov    %eax,(%esp)
 861a8e4:	e8 13 20 37 00       	call   898c8fc <_Z23getEquipmentRepairPriceiiiibf>
 861a8e9:	01 45 a8             	add    %eax,-0x58(%ebp)
 861a8ec:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a8ef:	89 04 24             	mov    %eax,(%esp)
 861a8f2:	e8 a1 44 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a8f7:	85 c0                	test   %eax,%eax
 861a8f9:	74 20                	je     861a91b <_ZN5Store12repair_equipEP5CUsercstRt+0xc2f>
 861a8fb:	0f b7 85 36 ff ff ff 	movzwl -0xca(%ebp),%eax
 861a902:	0f b7 f0             	movzwl %ax,%esi
 861a905:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a908:	89 04 24             	mov    %eax,(%esp)
 861a90b:	e8 88 44 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861a910:	39 c6                	cmp    %eax,%esi
 861a912:	74 07                	je     861a91b <_ZN5Store12repair_equipEP5CUsercstRt+0xc2f>
 861a914:	b8 01 00 00 00       	mov    $0x1,%eax
 861a919:	eb 05                	jmp    861a920 <_ZN5Store12repair_equipEP5CUsercstRt+0xc34>
 861a91b:	b8 00 00 00 00       	mov    $0x0,%eax
 861a920:	84 c0                	test   %al,%al
 861a922:	74 3c                	je     861a960 <_ZN5Store12repair_equipEP5CUsercstRt+0xc74>
 861a924:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861a927:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861a92b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 861a92e:	89 44 24 08          	mov    %eax,0x8(%esp)
 861a932:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861a939:	00 
 861a93a:	8d 45 88             	lea    -0x78(%ebp),%eax
 861a93d:	89 04 24             	mov    %eax,(%esp)
 861a940:	e8 49 07 00 00       	call   861b08e <_ZN17tagRepairItemInfoC1E10INVEN_TYPEiPK10CEquipItem>
 861a945:	8d 45 88             	lea    -0x78(%ebp),%eax
 861a948:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a94c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 861a952:	89 04 24             	mov    %eax,(%esp)
 861a955:	e8 c6 07 00 00       	call   861b120 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EE9push_backEOS0_>
 861a95a:	eb 04                	jmp    861a960 <_ZN5Store12repair_equipEP5CUsercstRt+0xc74>
 861a95c:	90                   	nop
 861a95d:	eb 01                	jmp    861a960 <_ZN5Store12repair_equipEP5CUsercstRt+0xc74>
 861a95f:	90                   	nop
 861a960:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 861a964:	83 7d c4 08          	cmpl   $0x8,-0x3c(%ebp)
 861a968:	0f 9e c0             	setle  %al
 861a96b:	84 c0                	test   %al,%al
 861a96d:	0f 85 7f fd ff ff    	jne    861a6f2 <_ZN5Store12repair_equipEP5CUsercstRt+0xa06>
 861a973:	c7 45 d0 0a 00 00 00 	movl   $0xa,-0x30(%ebp)
 861a97a:	e9 6f 02 00 00       	jmp    861abee <_ZN5Store12repair_equipEP5CUsercstRt+0xf02>
 861a97f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861a982:	89 04 24             	mov    %eax,(%esp)
 861a985:	e8 f4 f8 ab ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 861a98a:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 861a990:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 861a993:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 861a997:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861a99e:	00 
 861a99f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861a9a3:	89 14 24             	mov    %edx,(%esp)
 861a9a6:	e8 6d 0f ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 861a9ab:	83 ec 04             	sub    $0x4,%esp
 861a9ae:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 861a9b4:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 861a9ba:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 861a9c0:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 861a9c6:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 861a9cc:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 861a9d2:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 861a9d8:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 861a9de:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 861a9e4:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 861a9ea:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 861a9f0:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 861a9f6:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 861a9fc:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 861aa02:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 861aa08:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 861aa0e:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 861aa14:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 861aa1a:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 861aa20:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 861aa26:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 861aa2c:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861aa32:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 861aa38:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 861aa3e:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 861aa44:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 861aa4a:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 861aa50:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 861aa56:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 861aa5c:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 861aa62:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 861aa69:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 861aa6f:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861aa75:	85 c0                	test   %eax,%eax
 861aa77:	0f 84 6d 01 00 00    	je     861abea <_ZN5Store12repair_equipEP5CUsercstRt+0xefe>
 861aa7d:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 861aa84:	3c 01                	cmp    $0x1,%al
 861aa86:	0f 85 5a 01 00 00    	jne    861abe6 <_ZN5Store12repair_equipEP5CUsercstRt+0xefa>
 861aa8c:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861aa92:	89 c6                	mov    %eax,%esi
 861aa94:	e8 02 17 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861aa99:	89 74 24 04          	mov    %esi,0x4(%esp)
 861aa9d:	89 04 24             	mov    %eax,(%esp)
 861aaa0:	e8 8d 4f d4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 861aaa5:	89 45 ac             	mov    %eax,-0x54(%ebp)
 861aaa8:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 861aaac:	0f 84 37 01 00 00    	je     861abe9 <_ZN5Store12repair_equipEP5CUsercstRt+0xefd>
 861aab2:	8b 45 ac             	mov    -0x54(%ebp),%eax
 861aab5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 861aab8:	8b 45 0c             	mov    0xc(%ebp),%eax
 861aabb:	89 04 24             	mov    %eax,(%esp)
 861aabe:	e8 f5 f7 ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861aac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 861aac7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861aaca:	89 04 24             	mov    %eax,(%esp)
 861aacd:	e8 e6 8c ef ff       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 861aad2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 861aad5:	8b 45 0c             	mov    0xc(%ebp),%eax
 861aad8:	89 04 24             	mov    %eax,(%esp)
 861aadb:	e8 d8 f7 ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861aae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 861aae4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861aae7:	89 04 24             	mov    %eax,(%esp)
 861aaea:	e8 2d 8d ef ff       	call   851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>
 861aaef:	89 45 d8             	mov    %eax,-0x28(%ebp)
 861aaf2:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861aaf8:	83 c0 11             	add    $0x11,%eax
 861aafb:	89 04 24             	mov    %eax,(%esp)
 861aafe:	e8 c9 5c b3 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 861ab03:	0f b6 f8             	movzbl %al,%edi
 861ab06:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 861ab0c:	89 04 24             	mov    %eax,(%esp)
 861ab0f:	e8 58 a5 ad ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 861ab14:	0f b6 f0             	movzbl %al,%esi
 861ab17:	e8 7f 16 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 861ab1c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 861ab20:	89 74 24 04          	mov    %esi,0x4(%esp)
 861ab24:	89 04 24             	mov    %eax,(%esp)
 861ab27:	e8 a8 8a d4 ff       	call   83635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>
 861ab2c:	d9 9d 90 fe ff ff    	fstps  -0x170(%ebp)
 861ab32:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861ab35:	89 04 24             	mov    %eax,(%esp)
 861ab38:	e8 5b 42 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861ab3d:	0f b7 95 36 ff ff ff 	movzwl -0xca(%ebp),%edx
 861ab44:	0f b7 d2             	movzwl %dx,%edx
 861ab47:	d9 85 90 fe ff ff    	flds   -0x170(%ebp)
 861ab4d:	d9 5c 24 14          	fstps  0x14(%esp)
 861ab51:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 861ab58:	00 
 861ab59:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 861ab5c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 861ab60:	89 44 24 08          	mov    %eax,0x8(%esp)
 861ab64:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ab68:	8b 45 d8             	mov    -0x28(%ebp),%eax
 861ab6b:	89 04 24             	mov    %eax,(%esp)
 861ab6e:	e8 89 1d 37 00       	call   898c8fc <_Z23getEquipmentRepairPriceiiiibf>
 861ab73:	01 45 a8             	add    %eax,-0x58(%ebp)
 861ab76:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861ab79:	89 04 24             	mov    %eax,(%esp)
 861ab7c:	e8 17 42 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861ab81:	85 c0                	test   %eax,%eax
 861ab83:	74 20                	je     861aba5 <_ZN5Store12repair_equipEP5CUsercstRt+0xeb9>
 861ab85:	0f b7 85 36 ff ff ff 	movzwl -0xca(%ebp),%eax
 861ab8c:	0f b7 f0             	movzwl %ax,%esi
 861ab8f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861ab92:	89 04 24             	mov    %eax,(%esp)
 861ab95:	e8 fe 41 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861ab9a:	39 c6                	cmp    %eax,%esi
 861ab9c:	74 07                	je     861aba5 <_ZN5Store12repair_equipEP5CUsercstRt+0xeb9>
 861ab9e:	b8 01 00 00 00       	mov    $0x1,%eax
 861aba3:	eb 05                	jmp    861abaa <_ZN5Store12repair_equipEP5CUsercstRt+0xebe>
 861aba5:	b8 00 00 00 00       	mov    $0x0,%eax
 861abaa:	84 c0                	test   %al,%al
 861abac:	74 3c                	je     861abea <_ZN5Store12repair_equipEP5CUsercstRt+0xefe>
 861abae:	8b 45 b0             	mov    -0x50(%ebp),%eax
 861abb1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861abb5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 861abb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 861abbc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861abc3:	00 
 861abc4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 861abc7:	89 04 24             	mov    %eax,(%esp)
 861abca:	e8 bf 04 00 00       	call   861b08e <_ZN17tagRepairItemInfoC1E10INVEN_TYPEiPK10CEquipItem>
 861abcf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 861abd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 861abd6:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 861abdc:	89 04 24             	mov    %eax,(%esp)
 861abdf:	e8 3c 05 00 00       	call   861b120 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EE9push_backEOS0_>
 861abe4:	eb 04                	jmp    861abea <_ZN5Store12repair_equipEP5CUsercstRt+0xefe>
 861abe6:	90                   	nop
 861abe7:	eb 01                	jmp    861abea <_ZN5Store12repair_equipEP5CUsercstRt+0xefe>
 861abe9:	90                   	nop
 861abea:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 861abee:	83 7d d0 15          	cmpl   $0x15,-0x30(%ebp)
 861abf2:	0f 9e c0             	setle  %al
 861abf5:	84 c0                	test   %al,%al
 861abf7:	0f 85 82 fd ff ff    	jne    861a97f <_ZN5Store12repair_equipEP5CUsercstRt+0xc93>
 861abfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ac00:	89 04 24             	mov    %eax,(%esp)
 861ac03:	e8 86 f6 ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861ac08:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 861ac0f:	00 
 861ac10:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 861ac17:	00 
 861ac18:	8b 55 a8             	mov    -0x58(%ebp),%edx
 861ac1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ac1f:	89 04 24             	mov    %eax,(%esp)
 861ac22:	e8 25 49 ee ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 861ac27:	83 f0 01             	xor    $0x1,%eax
 861ac2a:	84 c0                	test   %al,%al
 861ac2c:	74 0f                	je     861ac3d <_ZN5Store12repair_equipEP5CUsercstRt+0xf51>
 861ac2e:	bb 0a 00 00 00       	mov    $0xa,%ebx
 861ac33:	be 00 00 00 00       	mov    $0x0,%esi
 861ac38:	e9 ce 03 00 00       	jmp    861b00b <_ZN5Store12repair_equipEP5CUsercstRt+0x131f>
 861ac3d:	8b 75 a8             	mov    -0x58(%ebp),%esi
 861ac40:	e8 aa 29 ff ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 861ac45:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861ac49:	8b 55 0c             	mov    0xc(%ebp),%edx
 861ac4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 861ac50:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 861ac57:	00 
 861ac58:	89 04 24             	mov    %eax,(%esp)
 861ac5b:	e8 22 2a ff ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 861ac60:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ac63:	89 04 24             	mov    %eax,(%esp)
 861ac66:	e8 21 f7 ab ff       	call   80da38c <_ZN5CUser9get_stateEv>
 861ac6b:	83 f8 0a             	cmp    $0xa,%eax
 861ac6e:	0f 94 c0             	sete   %al
 861ac71:	84 c0                	test   %al,%al
 861ac73:	0f 84 87 00 00 00    	je     861ad00 <_ZN5Store12repair_equipEP5CUsercstRt+0x1014>
 861ac79:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ac7c:	89 04 24             	mov    %eax,(%esp)
 861ac7f:	e8 20 a6 03 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 861ac84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 861ac87:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 861ac8b:	74 73                	je     861ad00 <_ZN5Store12repair_equipEP5CUsercstRt+0x1014>
 861ac8d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 861ac90:	89 04 24             	mov    %eax,(%esp)
 861ac93:	e8 7a 99 c1 ff       	call   8234612 <_ZNK8WongWork11CDeathTower14getCDungeonMGrEv>
 861ac98:	89 04 24             	mov    %eax,(%esp)
 861ac9b:	e8 50 99 c1 ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 861aca0:	89 04 24             	mov    %eax,(%esp)
 861aca3:	e8 48 30 ae ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 861aca8:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 861acad:	0f 94 c0             	sete   %al
 861acb0:	84 c0                	test   %al,%al
 861acb2:	74 06                	je     861acba <_ZN5Store12repair_equipEP5CUsercstRt+0xfce>
 861acb4:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 861acb8:	eb 04                	jmp    861acbe <_ZN5Store12repair_equipEP5CUsercstRt+0xfd2>
 861acba:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 861acbe:	8b 45 a8             	mov    -0x58(%ebp),%eax
 861acc1:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 861acc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 861acca:	89 04 24             	mov    %eax,(%esp)
 861accd:	e8 e6 f5 ab ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 861acd2:	0f be f8             	movsbl %al,%edi
 861acd5:	0f be 75 df          	movsbl -0x21(%ebp),%esi
 861acd9:	e8 59 46 ff ff       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 861acde:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 861ace4:	89 54 24 10          	mov    %edx,0x10(%esp)
 861ace8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 861acec:	89 74 24 08          	mov    %esi,0x8(%esp)
 861acf0:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 861acf7:	00 
 861acf8:	89 04 24             	mov    %eax,(%esp)
 861acfb:	e8 42 46 ff ff       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 861ad00:	8d 45 a0             	lea    -0x60(%ebp),%eax
 861ad03:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 861ad09:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ad0d:	89 04 24             	mov    %eax,(%esp)
 861ad10:	e8 2d 04 00 00       	call   861b142 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EE5beginEv>
 861ad15:	83 ec 04             	sub    $0x4,%esp
 861ad18:	8d 45 a0             	lea    -0x60(%ebp),%eax
 861ad1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 861ad1f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 861ad25:	89 04 24             	mov    %eax,(%esp)
 861ad28:	e8 39 04 00 00       	call   861b166 <_ZN9__gnu_cxx17__normal_iteratorIPK17tagRepairItemInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 861ad2d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 861ad30:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 861ad36:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ad3a:	89 04 24             	mov    %eax,(%esp)
 861ad3d:	e8 3e 04 00 00       	call   861b180 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EE3endEv>
 861ad42:	83 ec 04             	sub    $0x4,%esp
 861ad45:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 861ad48:	89 44 24 04          	mov    %eax,0x4(%esp)
 861ad4c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 861ad52:	89 04 24             	mov    %eax,(%esp)
 861ad55:	e8 0c 04 00 00       	call   861b166 <_ZN9__gnu_cxx17__normal_iteratorIPK17tagRepairItemInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 861ad5a:	e9 2d 02 00 00       	jmp    861af8c <_ZN5Store12repair_equipEP5CUsercstRt+0x12a0>
 861ad5f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 861ad65:	89 04 24             	mov    %eax,(%esp)
 861ad68:	e8 7b 04 00 00       	call   861b1e8 <_ZNK9__gnu_cxx17__normal_iteratorIPK17tagRepairItemInfoSt6vectorIS1_SaIS1_EEEdeEv>
 861ad6d:	8b 10                	mov    (%eax),%edx
 861ad6f:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 861ad75:	8b 50 04             	mov    0x4(%eax),%edx
 861ad78:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 861ad7e:	8b 40 08             	mov    0x8(%eax),%eax
 861ad81:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 861ad87:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 861ad8d:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 861ad93:	89 c6                	mov    %eax,%esi
 861ad95:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ad98:	89 04 24             	mov    %eax,(%esp)
 861ad9b:	e8 de f4 ab ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 861ada0:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 861ada6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 861adaa:	89 74 24 08          	mov    %esi,0x8(%esp)
 861adae:	89 44 24 04          	mov    %eax,0x4(%esp)
 861adb2:	89 14 24             	mov    %edx,(%esp)
 861adb5:	e8 5e 0b ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 861adba:	83 ec 04             	sub    $0x4,%esp
 861adbd:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 861adc3:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 861adc9:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 861adcf:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 861add5:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 861addb:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 861ade1:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 861ade7:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 861aded:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 861adf3:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 861adf9:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 861adff:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 861ae05:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 861ae0b:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 861ae11:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 861ae17:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 861ae1d:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 861ae23:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 861ae29:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 861ae2f:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 861ae35:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 861ae3b:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861ae41:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 861ae47:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 861ae4d:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 861ae53:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 861ae59:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 861ae5f:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 861ae65:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 861ae6b:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 861ae71:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 861ae78:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 861ae7e:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 861ae84:	85 c0                	test   %eax,%eax
 861ae86:	0f 84 ee 00 00 00    	je     861af7a <_ZN5Store12repair_equipEP5CUsercstRt+0x128e>
 861ae8c:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 861ae93:	3c 01                	cmp    $0x1,%al
 861ae95:	0f 85 e2 00 00 00    	jne    861af7d <_ZN5Store12repair_equipEP5CUsercstRt+0x1291>
 861ae9b:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 861aea1:	89 04 24             	mov    %eax,(%esp)
 861aea4:	e8 ef 3e b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 861aea9:	66 89 85 36 ff ff ff 	mov    %ax,-0xca(%ebp)
 861aeb0:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 861aeb6:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 861aebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861aebf:	89 04 24             	mov    %eax,(%esp)
 861aec2:	e8 c7 f3 ab ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 861aec7:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 861aecd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861aed1:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 861aed7:	89 54 24 10          	mov    %edx,0x10(%esp)
 861aedb:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 861aee1:	89 54 24 14          	mov    %edx,0x14(%esp)
 861aee5:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 861aeeb:	89 54 24 18          	mov    %edx,0x18(%esp)
 861aeef:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 861aef5:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 861aef9:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 861aeff:	89 54 24 20          	mov    %edx,0x20(%esp)
 861af03:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 861af09:	89 54 24 24          	mov    %edx,0x24(%esp)
 861af0d:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 861af13:	89 54 24 28          	mov    %edx,0x28(%esp)
 861af17:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 861af1d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 861af21:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 861af27:	89 54 24 30          	mov    %edx,0x30(%esp)
 861af2b:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 861af31:	89 54 24 34          	mov    %edx,0x34(%esp)
 861af35:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 861af3b:	89 54 24 38          	mov    %edx,0x38(%esp)
 861af3f:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 861af45:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 861af49:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 861af4f:	89 54 24 40          	mov    %edx,0x40(%esp)
 861af53:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 861af59:	89 54 24 44          	mov    %edx,0x44(%esp)
 861af5d:	0f b6 95 67 ff ff ff 	movzbl -0x99(%ebp),%edx
 861af64:	88 54 24 48          	mov    %dl,0x48(%esp)
 861af68:	89 7c 24 08          	mov    %edi,0x8(%esp)
 861af6c:	89 74 24 04          	mov    %esi,0x4(%esp)
 861af70:	89 04 24             	mov    %eax,(%esp)
 861af73:	e8 36 51 ee ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 861af78:	eb 04                	jmp    861af7e <_ZN5Store12repair_equipEP5CUsercstRt+0x1292>
 861af7a:	90                   	nop
 861af7b:	eb 01                	jmp    861af7e <_ZN5Store12repair_equipEP5CUsercstRt+0x1292>
 861af7d:	90                   	nop
 861af7e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 861af84:	89 04 24             	mov    %eax,(%esp)
 861af87:	e8 46 02 00 00       	call   861b1d2 <_ZN9__gnu_cxx17__normal_iteratorIPK17tagRepairItemInfoSt6vectorIS1_SaIS1_EEEppEv>
 861af8c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 861af92:	89 44 24 04          	mov    %eax,0x4(%esp)
 861af96:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 861af9c:	89 04 24             	mov    %eax,(%esp)
 861af9f:	e8 02 02 00 00       	call   861b1a6 <_ZN9__gnu_cxxneIPK17tagRepairItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 861afa4:	84 c0                	test   %al,%al
 861afa6:	0f 85 b3 fd ff ff    	jne    861ad5f <_ZN5Store12repair_equipEP5CUsercstRt+0x1073>
 861afac:	c7 45 e4 0a 00 00 00 	movl   $0xa,-0x1c(%ebp)
 861afb3:	eb 26                	jmp    861afdb <_ZN5Store12repair_equipEP5CUsercstRt+0x12ef>
 861afb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861afb8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 861afbc:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 861afc3:	00 
 861afc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861afcb:	00 
 861afcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861afcf:	89 04 24             	mov    %eax,(%esp)
 861afd2:	e8 01 13 06 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 861afd7:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 861afdb:	83 7d e4 15          	cmpl   $0x15,-0x1c(%ebp)
 861afdf:	0f 9e c0             	setle  %al
 861afe2:	84 c0                	test   %al,%al
 861afe4:	75 cf                	jne    861afb5 <_ZN5Store12repair_equipEP5CUsercstRt+0x12c9>
 861afe6:	be 01 00 00 00       	mov    $0x1,%esi
 861afeb:	eb 1e                	jmp    861b00b <_ZN5Store12repair_equipEP5CUsercstRt+0x131f>
 861afed:	89 d3                	mov    %edx,%ebx
 861afef:	89 c6                	mov    %eax,%esi
 861aff1:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 861aff7:	89 04 24             	mov    %eax,(%esp)
 861affa:	e8 c3 00 00 00       	call   861b0c2 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EED1Ev>
 861afff:	89 f0                	mov    %esi,%eax
 861b001:	89 da                	mov    %ebx,%edx
 861b003:	89 04 24             	mov    %eax,(%esp)
 861b006:	e8 45 87 4c 00       	call   8ae3750 <_Unwind_Resume>
 861b00b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 861b011:	89 04 24             	mov    %eax,(%esp)
 861b014:	e8 a9 00 00 00       	call   861b0c2 <_ZNSt6vectorI17tagRepairItemInfoSaIS0_EED1Ev>
 861b019:	85 f6                	test   %esi,%esi
 861b01b:	74 08                	je     861b025 <_ZN5Store12repair_equipEP5CUsercstRt+0x1339>
 861b01d:	eb 01                	jmp    861b020 <_ZN5Store12repair_equipEP5CUsercstRt+0x1334>
 861b01f:	90                   	nop
 861b020:	bb 00 00 00 00       	mov    $0x0,%ebx
 861b025:	89 d8                	mov    %ebx,%eax
 861b027:	8d 65 f4             	lea    -0xc(%ebp),%esp
 861b02a:	83 c4 00             	add    $0x0,%esp
 861b02d:	5b                   	pop    %ebx
 861b02e:	5e                   	pop    %esi
 861b02f:	5f                   	pop    %edi
 861b030:	5d                   	pop    %ebp
 861b031:	c3                   	ret

```

```c
// Store::repair_equip @ 0x8619cec

/* Store::repair_equip(CUser*, char, short, unsigned short, unsigned short&) */

undefined4 __thiscall
Store::repair_equip(Store *this,CUser *param_1,char param_2,short param_3,ushort param_4,
                   ushort *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  CDataManager *pCVar7;
  uint uVar8;
  CInventory *pCVar9;
  CValueStatistic *pCVar10;
  CDungeonMgr *pCVar11;
  CDungeon *pCVar12;
  int iVar13;
  CDeathTowerValueStatistic *pCVar14;
  undefined4 uVar15;
  CCargo *this_00;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 unaff_EBX;
  longdouble lVar18;
  undefined1 local_16c [8];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  ushort local_128;
  short local_124;
  char local_120;
  Inven_Item local_116;
  char cStack_115;
  undefined2 uStack_114;
  undefined2 local_112;
  undefined2 uStack_110;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined1 local_da;
  Inven_Item local_d9;
  char cStack_d8;
  undefined2 uStack_d7;
  undefined2 local_d5;
  undefined2 uStack_d3;
  undefined4 local_d1;
  undefined4 uStack_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  CEquipItem *local_94;
  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
  local_90 [4];
  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
  local_8c [4];
  vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>> local_88 [12];
  tagRepairItemInfo local_7c [12];
  tagRepairItemInfo local_70 [12];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  int local_5c;
  CEquipItem *local_58;
  CEquipItem *local_54;
  int local_50;
  int local_4c;
  char local_45;
  CDeathTower *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  char local_25;
  CDeathTower *local_24;
  int local_20;
  
  local_120 = param_2;
  local_124 = param_3;
  local_128 = param_4;
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  Inven_Item::Inven_Item(&local_d9);
  local_5c = 0;
  if (local_124 == -1) {
    std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::vector(local_88);
    for (local_40 = 3; local_40 < 9; local_40 = local_40 + 1) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 0861a719 to 0861afd6 has its CatchHandler @ 0861afed */
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
      if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
        iVar6 = CONCAT22(local_d5,uStack_d7);
        iVar13 = G_CDataManager();
        local_58 = (CEquipItem *)CItemList::find_item(*(CItemList **)(iVar13 + 0xc),iVar6);
        if (local_58 != (CEquipItem *)0x0) {
          local_54 = local_58;
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_3c = CEquipItem::getGrowthGrade(local_54,iVar6);
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_38 = CEquipItem::getGrowthRepairCost(local_54,iVar6);
          bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
          uVar8 = Inven_Item::GetUpgrade(&local_d9);
          pCVar7 = (CDataManager *)G_CDataManager();
          lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4)
          ;
          iVar6 = CEquipItem::get_endurance(local_54);
          iVar6 = getEquipmentRepairPrice
                            (local_38,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                             local_3c,false,(float)lVar18);
          local_5c = local_5c + iVar6;
          iVar6 = CEquipItem::get_endurance(local_54);
          if (iVar6 == 0) {
LAB_0861a91b:
            bVar4 = false;
          }
          else {
            uVar1 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
            uVar8 = CEquipItem::get_endurance(local_54);
            if (uVar1 == uVar8) goto LAB_0861a91b;
            bVar4 = true;
          }
          if (bVar4) {
            tagRepairItemInfo::tagRepairItemInfo(local_7c,1,local_40,local_54);
            std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::push_back
                      (local_88,local_7c);
          }
        }
      }
    }
    for (local_34 = 10; local_34 < 0x16; local_34 = local_34 + 1) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
      if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
        iVar6 = CONCAT22(local_d5,uStack_d7);
        pCVar7 = (CDataManager *)G_CDataManager();
        local_58 = (CEquipItem *)CDataManager::find_item(pCVar7,iVar6);
        if (local_58 != (CEquipItem *)0x0) {
          local_54 = local_58;
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_30 = CEquipItem::getGrowthGrade(local_54,iVar6);
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_2c = CEquipItem::getGrowthRepairCost(local_54,iVar6);
          bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
          uVar8 = Inven_Item::GetUpgrade(&local_d9);
          pCVar7 = (CDataManager *)G_CDataManager();
          lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4)
          ;
          iVar6 = CEquipItem::get_endurance(local_54);
          iVar6 = getEquipmentRepairPrice
                            (local_2c,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                             local_30,false,(float)lVar18);
          local_5c = local_5c + iVar6;
          iVar6 = CEquipItem::get_endurance(local_54);
          if (iVar6 == 0) {
LAB_0861aba5:
            bVar4 = false;
          }
          else {
            uVar1 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
            uVar8 = CEquipItem::get_endurance(local_54);
            if (uVar1 == uVar8) goto LAB_0861aba5;
            bVar4 = true;
          }
          if (bVar4) {
            tagRepairItemInfo::tagRepairItemInfo(local_70,0,local_34,local_54);
            std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::push_back
                      (local_88,local_70);
          }
        }
      }
    }
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar9,local_5c,1,1);
    iVar6 = local_5c;
    if (cVar3 == '\x01') {
      pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar10,0x14,param_1,iVar6);
      iVar6 = CUser::get_state(param_1);
      if ((iVar6 == 10) &&
         (local_24 = (CDeathTower *)CUser::getDeathTower(param_1), local_24 != (CDeathTower *)0x0))
      {
        pCVar11 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_24);
        pCVar12 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar11);
        iVar13 = CDungeon::get_index(pCVar12);
        iVar6 = local_5c;
        local_25 = iVar13 != 11000;
        cVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        iVar13 = (int)local_25;
        pCVar14 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
        CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar14,9,iVar13,(int)cVar3,iVar6);
      }
      std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::begin();
      __gnu_cxx::
      __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
      ::__normal_iterator<tagRepairItemInfo*>(local_8c,local_64);
      std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::end();
      __gnu_cxx::
      __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
      ::__normal_iterator<tagRepairItemInfo*>(local_90,local_60);
      while (bVar4 = __gnu_cxx::operator!=(local_8c,local_90), bVar4) {
        puVar16 = (undefined4 *)
                  __gnu_cxx::
                  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
                  ::operator*(local_8c);
        local_9c = *puVar16;
        local_98 = puVar16[1];
        local_94 = (CEquipItem *)puVar16[2];
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_16c,iVar6);
        local_d9 = SUB41(local_16c._0_4_,0);
        cStack_d8 = SUB41(local_16c._0_4_,1);
        uStack_d7 = SUB42(local_16c._0_4_,2);
        local_d5 = (undefined2)local_16c._4_4_;
        uStack_d3 = SUB42(local_16c._4_4_,2);
        local_d1 = local_164;
        uStack_cd = local_160;
        local_c9 = local_15c;
        local_c5 = local_158;
        local_c1 = local_154;
        local_bd = local_150;
        local_b9 = local_14c;
        local_b5 = local_148;
        local_b1 = local_144;
        local_ad = local_140;
        local_a9 = local_13c;
        local_a5 = local_138;
        local_a1 = local_134;
        local_9d = local_130;
        if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
          uVar5 = CEquipItem::get_endurance(local_94);
          uVar2 = local_98;
          uVar15 = local_9c;
          local_d1._3_1_ = (undefined1)uVar5;
          uStack_cd._0_1_ = (undefined1)((ushort)uVar5 >> 8);
          uVar17 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::update_item
                    (uVar17,uVar15,uVar2,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                     CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,
                     local_bd,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,
                     local_9d);
        }
        __gnu_cxx::
        __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
        ::operator++(local_8c);
      }
      for (local_20 = 10; local_20 < 0x16; local_20 = local_20 + 1) {
        CUser::SendUpdateItem(param_1,1,3,local_20);
      }
      bVar4 = true;
    }
    else {
      unaff_EBX = 10;
      bVar4 = false;
    }
    std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::~vector(local_88);
    if (!bVar4) {
      return unaff_EBX;
    }
  }
  else {
    if (local_120 == '\x02') {
      CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      CCargo::get_cargo_slot((int)local_16c);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    else if (local_120 == '\x03') {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    else {
      if (local_120 != '\0') {
        return 0x11;
      }
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    if ((CONCAT22(local_d5,uStack_d7) == 0) || (cStack_d8 != '\x01')) {
      return 0x11;
    }
    *param_5 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
    iVar6 = CONCAT22(local_d5,uStack_d7);
    local_164 = local_d1;
    local_160 = uStack_cd;
    local_15c = local_c9;
    local_158 = local_c5;
    local_154 = local_c1;
    local_150 = local_bd;
    local_14c = local_b9;
    local_148 = local_b5;
    local_144 = local_b1;
    local_140 = local_ad;
    local_13c = local_a9;
    local_138 = local_a5;
    local_134 = local_a1;
    local_130 = local_9d;
    pCVar7 = (CDataManager *)G_CDataManager();
    local_58 = (CEquipItem *)CDataManager::find_item(pCVar7,iVar6);
    if (local_58 == (CEquipItem *)0x0) {
      return 0x11;
    }
    local_54 = local_58;
    iVar6 = CEquipItem::get_endurance(local_58);
    if (iVar6 == 0) {
      return 0x11;
    }
    Inven_Item::Inven_Item(&local_116);
    if (local_128 != 0xffff) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_116 = SUB41(local_16c._0_4_,0);
      cStack_115 = SUB41(local_16c._0_4_,1);
      uStack_114 = SUB42(local_16c._0_4_,2);
      local_112 = (undefined2)local_16c._4_4_;
      uStack_110 = SUB42(local_16c._4_4_,2);
      local_10e = local_164;
      local_10a = local_160;
      local_106 = local_15c;
      local_102 = local_158;
      local_fe = local_154;
      local_fa = local_150;
      local_f6 = local_14c;
      local_f2 = local_148;
      local_ee = local_144;
      local_ea = local_140;
      local_e6 = local_13c;
      local_e2 = local_138;
      local_de = local_134;
      local_da = local_130;
      if ((CONCAT22(local_112,uStack_114) == 0) || (cStack_115 != '\x02')) {
        return 0x15;
      }
      if ((CONCAT22(local_112,uStack_114) != 0x1f77) && (CONCAT22(local_112,uStack_114) != 0x201f))
      {
        return 0x15;
      }
    }
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_50 = CEquipItem::getGrowthGrade(local_54,iVar6);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_4c = CEquipItem::getGrowthRepairCost(local_54,iVar6);
    bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
    uVar8 = Inven_Item::GetUpgrade(&local_d9);
    pCVar7 = (CDataManager *)G_CDataManager();
    lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4);
    iVar6 = CEquipItem::get_endurance(local_54);
    local_5c = getEquipmentRepairPrice
                         (local_4c,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                          local_50,false,(float)lVar18);
    if ((local_128 != 0xffff) &&
       ((CONCAT22(local_112,uStack_114) == 0x1f77 || (CONCAT22(local_112,uStack_114) == 0x201f)))) {
      uVar8 = (uint)local_128;
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar6 = CInventory::use_item(pCVar9,uVar8,1,0);
      if (iVar6 != 0) {
        return 0x16;
      }
      CUser::SendUpdateItem(param_1,1,0,local_128);
      local_5c = 0;
    }
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar9,local_5c,1,1);
    iVar6 = local_5c;
    if (cVar3 != '\x01') {
      return 10;
    }
    pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar10,0x14,param_1,iVar6);
    iVar6 = CUser::get_state(param_1);
    if ((iVar6 == 10) &&
       (local_44 = (CDeathTower *)CUser::getDeathTower(param_1), local_44 != (CDeathTower *)0x0)) {
      pCVar11 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_44);
      pCVar12 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar11);
      iVar13 = CDungeon::get_index(pCVar12);
      iVar6 = local_5c;
      local_45 = iVar13 != 11000;
      cVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar13 = (int)local_45;
      pCVar14 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
      CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar14,9,iVar13,(int)cVar3,iVar6);
    }
    uVar5 = CEquipItem::get_endurance(local_54);
    local_d1._3_1_ = (undefined1)uVar5;
    uStack_cd._0_1_ = (undefined1)((ushort)uVar5 >> 8);
    if (local_120 == '\x02') {
      iVar6 = (int)local_124;
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
      CCargo::update_item(this_00,iVar6,&local_d9);
      CUser::SendUpdateItem(param_1,1,2,(int)local_124);
    }
    else if (local_120 == '\x03') {
      iVar6 = (int)local_124;
      uVar15 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar15,0,iVar6,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                 CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,local_bd
                 ,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d);
      CUser::SendUpdateItem(param_1,1,3,(int)local_124);
    }
    else if (local_120 == '\0') {
      iVar6 = (int)local_124;
      uVar15 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar15,1,iVar6,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                 CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,local_bd
                 ,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d);
      CUser::SendUpdateItem(param_1,1,0,(int)local_124);
    }
  }
  return 0;
}

```

---

## user_buy_item

```asm
// === 08618a44 Store::user_buy_item  [0x08618a44-0x8618e9f] ===
 8618a44:	55                   	push   %ebp
 8618a45:	89 e5                	mov    %esp,%ebp
 8618a47:	56                   	push   %esi
 8618a48:	53                   	push   %ebx
 8618a49:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 8618a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618a52:	89 04 24             	mov    %eax,(%esp)
 8618a55:	e8 a4 18 ac ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8618a5a:	84 c0                	test   %al,%al
 8618a5c:	74 0a                	je     8618a68 <_ZN5Store13user_buy_itemEP5CUserii+0x24>
 8618a5e:	bb 13 00 00 00       	mov    $0x13,%ebx
 8618a63:	e9 2b 04 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618a68:	e8 2e 37 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 8618a6d:	8b 40 0c             	mov    0xc(%eax),%eax
 8618a70:	8b 55 10             	mov    0x10(%ebp),%edx
 8618a73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8618a77:	89 04 24             	mov    %eax,(%esp)
 8618a7a:	e8 0b 94 ef ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8618a7f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8618a82:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8618a86:	75 0a                	jne    8618a92 <_ZN5Store13user_buy_itemEP5CUserii+0x4e>
 8618a88:	bb 11 00 00 00       	mov    $0x11,%ebx
 8618a8d:	e9 01 04 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618a92:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618a95:	89 04 24             	mov    %eax,(%esp)
 8618a98:	e8 5d 88 ad ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8618a9d:	84 c0                	test   %al,%al
 8618a9f:	74 14                	je     8618ab5 <_ZN5Store13user_buy_itemEP5CUserii+0x71>
 8618aa1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618aa4:	89 04 24             	mov    %eax,(%esp)
 8618aa7:	e8 9e 3d c1 ff       	call   822c84a <_ZNK5CItem9get_priceEv>
 8618aac:	0f af 45 14          	imul   0x14(%ebp),%eax
 8618ab0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8618ab3:	eb 0e                	jmp    8618ac3 <_ZN5Store13user_buy_itemEP5CUserii+0x7f>
 8618ab5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618ab8:	89 04 24             	mov    %eax,(%esp)
 8618abb:	e8 8a 3d c1 ff       	call   822c84a <_ZNK5CItem9get_priceEv>
 8618ac0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8618ac3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618ac6:	89 04 24             	mov    %eax,(%esp)
 8618ac9:	e8 b0 17 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8618ace:	89 04 24             	mov    %eax,(%esp)
 8618ad1:	e8 00 bd b1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8618ad6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8618ad9:	0f 9c c0             	setl   %al
 8618adc:	84 c0                	test   %al,%al
 8618ade:	74 0a                	je     8618aea <_ZN5Store13user_buy_itemEP5CUserii+0xa6>
 8618ae0:	bb 0a 00 00 00       	mov    $0xa,%ebx
 8618ae5:	e9 a9 03 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618aea:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618aed:	89 04 24             	mov    %eax,(%esp)
 8618af0:	e8 5f 2d ab ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8618af5:	8b 45 10             	mov    0x10(%ebp),%eax
 8618af8:	89 45 8d             	mov    %eax,-0x73(%ebp)
 8618afb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618afe:	89 04 24             	mov    %eax,(%esp)
 8618b01:	e8 f4 87 ad ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8618b06:	84 c0                	test   %al,%al
 8618b08:	0f 84 d2 00 00 00    	je     8618be0 <_ZN5Store13user_buy_itemEP5CUserii+0x19c>
 8618b0e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b11:	8b 00                	mov    (%eax),%eax
 8618b13:	83 c0 0c             	add    $0xc,%eax
 8618b16:	8b 10                	mov    (%eax),%edx
 8618b18:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b1b:	89 04 24             	mov    %eax,(%esp)
 8618b1e:	ff d2                	call   *%edx
 8618b20:	83 f8 01             	cmp    $0x1,%eax
 8618b23:	0f 94 c0             	sete   %al
 8618b26:	84 c0                	test   %al,%al
 8618b28:	74 04                	je     8618b2e <_ZN5Store13user_buy_itemEP5CUserii+0xea>
 8618b2a:	c6 45 8c 03          	movb   $0x3,-0x74(%ebp)
 8618b2e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b31:	8b 00                	mov    (%eax),%eax
 8618b33:	83 c0 0c             	add    $0xc,%eax
 8618b36:	8b 10                	mov    (%eax),%edx
 8618b38:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b3b:	89 04 24             	mov    %eax,(%esp)
 8618b3e:	ff d2                	call   *%edx
 8618b40:	83 f8 02             	cmp    $0x2,%eax
 8618b43:	0f 94 c0             	sete   %al
 8618b46:	84 c0                	test   %al,%al
 8618b48:	74 04                	je     8618b4e <_ZN5Store13user_buy_itemEP5CUserii+0x10a>
 8618b4a:	c6 45 8c 0a          	movb   $0xa,-0x74(%ebp)
 8618b4e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b51:	8b 00                	mov    (%eax),%eax
 8618b53:	83 c0 0c             	add    $0xc,%eax
 8618b56:	8b 10                	mov    (%eax),%edx
 8618b58:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618b5b:	89 04 24             	mov    %eax,(%esp)
 8618b5e:	ff d2                	call   *%edx
 8618b60:	83 f8 08             	cmp    $0x8,%eax
 8618b63:	0f 94 c0             	sete   %al
 8618b66:	84 c0                	test   %al,%al
 8618b68:	74 04                	je     8618b6e <_ZN5Store13user_buy_itemEP5CUserii+0x12a>
 8618b6a:	c6 45 8c 04          	movb   $0x4,-0x74(%ebp)
 8618b6e:	8b 45 14             	mov    0x14(%ebp),%eax
 8618b71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618b75:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618b78:	89 04 24             	mov    %eax,(%esp)
 8618b7b:	e8 04 2d ab ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8618b80:	81 7d 14 e7 03 00 00 	cmpl   $0x3e7,0x14(%ebp)
 8618b87:	7e 44                	jle    8618bcd <_ZN5Store13user_buy_itemEP5CUserii+0x189>
 8618b89:	8b 5d 8d             	mov    -0x73(%ebp),%ebx
 8618b8c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8618b93:	00 
 8618b94:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 8618b9b:	00 
 8618b9c:	c7 44 24 04 80 21 ce 	movl   $0x8ce2180,0x4(%esp)
 8618ba3:	08 
 8618ba4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8618ba7:	89 04 24             	mov    %eax,(%esp)
 8618baa:	e8 69 6b f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8618baf:	8b 45 14             	mov    0x14(%ebp),%eax
 8618bb2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8618bb6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8618bba:	c7 44 24 04 a4 13 ce 	movl   $0x8ce13a4,0x4(%esp)
 8618bc1:	08 
 8618bc2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8618bc5:	89 04 24             	mov    %eax,(%esp)
 8618bc8:	e8 bb 6b f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8618bcd:	66 c7 45 96 00 00    	movw   $0x0,-0x6a(%ebp)
 8618bd3:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618bd6:	89 04 24             	mov    %eax,(%esp)
 8618bd9:	e8 b4 2c ab ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8618bde:	eb 67                	jmp    8618c47 <_ZN5Store13user_buy_itemEP5CUserii+0x203>
 8618be0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618be3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8618be6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8618be9:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8618bef:	83 f8 0b             	cmp    $0xb,%eax
 8618bf2:	75 0a                	jne    8618bfe <_ZN5Store13user_buy_itemEP5CUserii+0x1ba>
 8618bf4:	bb 17 00 00 00       	mov    $0x17,%ebx
 8618bf9:	e9 95 02 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618bfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8618c01:	89 04 24             	mov    %eax,(%esp)
 8618c04:	e8 d9 86 ad ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8618c09:	83 f8 03             	cmp    $0x3,%eax
 8618c0c:	0f 94 c0             	sete   %al
 8618c0f:	84 c0                	test   %al,%al
 8618c11:	74 04                	je     8618c17 <_ZN5Store13user_buy_itemEP5CUserii+0x1d3>
 8618c13:	c6 45 8b 01          	movb   $0x1,-0x75(%ebp)
 8618c17:	c6 45 8c 01          	movb   $0x1,-0x74(%ebp)
 8618c1b:	8b 45 14             	mov    0x14(%ebp),%eax
 8618c1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618c22:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618c25:	89 04 24             	mov    %eax,(%esp)
 8618c28:	e8 57 2c ab ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8618c2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8618c30:	89 04 24             	mov    %eax,(%esp)
 8618c33:	e8 60 61 b0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8618c38:	66 89 45 96          	mov    %ax,-0x6a(%ebp)
 8618c3c:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618c3f:	89 04 24             	mov    %eax,(%esp)
 8618c42:	e8 4b 2c ab ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8618c47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618c4a:	89 04 24             	mov    %eax,(%esp)
 8618c4d:	e8 3c 16 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8618c52:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8618c59:	00 
 8618c5a:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8618c61:	00 
 8618c62:	c7 44 24 44 00 00 00 	movl   $0x0,0x44(%esp)
 8618c69:	00 
 8618c6a:	8b 55 8b             	mov    -0x75(%ebp),%edx
 8618c6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8618c71:	8b 55 8f             	mov    -0x71(%ebp),%edx
 8618c74:	89 54 24 08          	mov    %edx,0x8(%esp)
 8618c78:	8b 55 93             	mov    -0x6d(%ebp),%edx
 8618c7b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8618c7f:	8b 55 97             	mov    -0x69(%ebp),%edx
 8618c82:	89 54 24 10          	mov    %edx,0x10(%esp)
 8618c86:	8b 55 9b             	mov    -0x65(%ebp),%edx
 8618c89:	89 54 24 14          	mov    %edx,0x14(%esp)
 8618c8d:	8b 55 9f             	mov    -0x61(%ebp),%edx
 8618c90:	89 54 24 18          	mov    %edx,0x18(%esp)
 8618c94:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8618c97:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8618c9b:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8618c9e:	89 54 24 20          	mov    %edx,0x20(%esp)
 8618ca2:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8618ca5:	89 54 24 24          	mov    %edx,0x24(%esp)
 8618ca9:	8b 55 af             	mov    -0x51(%ebp),%edx
 8618cac:	89 54 24 28          	mov    %edx,0x28(%esp)
 8618cb0:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8618cb3:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8618cb7:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8618cba:	89 54 24 30          	mov    %edx,0x30(%esp)
 8618cbe:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8618cc1:	89 54 24 34          	mov    %edx,0x34(%esp)
 8618cc5:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8618cc8:	89 54 24 38          	mov    %edx,0x38(%esp)
 8618ccc:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8618ccf:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8618cd3:	0f b6 55 c7          	movzbl -0x39(%ebp),%edx
 8618cd7:	88 54 24 40          	mov    %dl,0x40(%esp)
 8618cdb:	89 04 24             	mov    %eax,(%esp)
 8618cde:	e8 a3 a0 ee ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8618ce3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8618ce6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8618cea:	75 0a                	jne    8618cf6 <_ZN5Store13user_buy_itemEP5CUserii+0x2b2>
 8618cec:	bb 04 00 00 00       	mov    $0x4,%ebx
 8618cf1:	e9 9d 01 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618cf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618cf9:	89 04 24             	mov    %eax,(%esp)
 8618cfc:	e8 8d 15 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8618d01:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8618d08:	00 
 8618d09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8618d10:	00 
 8618d11:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8618d14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8618d18:	89 04 24             	mov    %eax,(%esp)
 8618d1b:	e8 2c 68 ee ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8618d20:	83 f0 01             	xor    $0x1,%eax
 8618d23:	84 c0                	test   %al,%al
 8618d25:	74 0a                	je     8618d31 <_ZN5Store13user_buy_itemEP5CUserii+0x2ed>
 8618d27:	bb 0a 00 00 00       	mov    $0xa,%ebx
 8618d2c:	e9 62 01 00 00       	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618d31:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8618d38:	8b 45 92             	mov    -0x6e(%ebp),%eax
 8618d3b:	98                   	cwtl
 8618d3c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8618d3f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8618d43:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8618d4a:	00 
 8618d4b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8618d4f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8618d52:	89 44 24 08          	mov    %eax,0x8(%esp)
 8618d56:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8618d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8618d60:	89 04 24             	mov    %eax,(%esp)
 8618d63:	e8 38 01 00 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 8618d68:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8618d6b:	89 c3                	mov    %eax,%ebx
 8618d6d:	e8 7d 48 ff ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8618d72:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8618d76:	8b 55 0c             	mov    0xc(%ebp),%edx
 8618d79:	89 54 24 08          	mov    %edx,0x8(%esp)
 8618d7d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8618d84:	00 
 8618d85:	89 04 24             	mov    %eax,(%esp)
 8618d88:	e8 f5 48 ff ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8618d8d:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8618d90:	e8 5a 48 ff ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8618d95:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8618d99:	8b 55 0c             	mov    0xc(%ebp),%edx
 8618d9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8618da0:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8618da7:	00 
 8618da8:	89 04 24             	mov    %eax,(%esp)
 8618dab:	e8 d2 48 ff ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8618db0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618db3:	89 04 24             	mov    %eax,(%esp)
 8618db6:	e8 91 4f f7 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8618dbb:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8618dc2:	00 
 8618dc3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8618dca:	00 
 8618dcb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618dce:	89 04 24             	mov    %eax,(%esp)
 8618dd1:	e8 26 2b ab ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8618dd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8618ddd:	00 
 8618dde:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618de1:	89 04 24             	mov    %eax,(%esp)
 8618de4:	e8 37 2b ab ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8618de9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618dec:	89 04 24             	mov    %eax,(%esp)
 8618def:	e8 8a 14 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8618df4:	89 04 24             	mov    %eax,(%esp)
 8618df7:	e8 da b9 b1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8618dfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618e00:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e03:	89 04 24             	mov    %eax,(%esp)
 8618e06:	e8 31 2b ab ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8618e0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8618e0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618e12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e15:	89 04 24             	mov    %eax,(%esp)
 8618e18:	e8 87 10 ac ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8618e1d:	8b 45 10             	mov    0x10(%ebp),%eax
 8618e20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618e24:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e27:	89 04 24             	mov    %eax,(%esp)
 8618e2a:	e8 0d 2b ab ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8618e2f:	8b 45 14             	mov    0x14(%ebp),%eax
 8618e32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618e36:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e39:	89 04 24             	mov    %eax,(%esp)
 8618e3c:	e8 fb 2a ab ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8618e41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8618e48:	00 
 8618e49:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e4c:	89 04 24             	mov    %eax,(%esp)
 8618e4f:	e8 04 2b ab ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8618e54:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8618e5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8618e5e:	89 04 24             	mov    %eax,(%esp)
 8618e61:	e8 54 f7 02 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8618e66:	bb 00 00 00 00       	mov    $0x0,%ebx
 8618e6b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e6e:	89 04 24             	mov    %eax,(%esp)
 8618e71:	e8 0a 50 f7 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8618e76:	eb 1b                	jmp    8618e93 <_ZN5Store13user_buy_itemEP5CUserii+0x44f>
 8618e78:	89 d3                	mov    %edx,%ebx
 8618e7a:	89 c6                	mov    %eax,%esi
 8618e7c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8618e7f:	89 04 24             	mov    %eax,(%esp)
 8618e82:	e8 f9 4f f7 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8618e87:	89 f0                	mov    %esi,%eax
 8618e89:	89 da                	mov    %ebx,%edx
 8618e8b:	89 04 24             	mov    %eax,(%esp)
 8618e8e:	e8 bd a8 4c 00       	call   8ae3750 <_Unwind_Resume>
 8618e93:	89 d8                	mov    %ebx,%eax
 8618e95:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 8618e9b:	5b                   	pop    %ebx
 8618e9c:	5e                   	pop    %esi
 8618e9d:	5d                   	pop    %ebp
 8618e9e:	c3                   	ret
 8618e9f:	90                   	nop

```

```c
// Store::user_buy_item @ 0x8618a44

/* Store::user_buy_item(CUser*, int, int) */

undefined4 __thiscall Store::user_buy_item(Store *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  CInventory *pCVar4;
  CValueStatistic *pCVar5;
  undefined4 uVar6;
  Inven_Item local_79;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined4 uStack_72;
  undefined1 uStack_6e;
  uint uStack_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined1 local_3d;
  PacketGuard local_3c [12];
  int local_30;
  cMyTrace local_2c [16];
  CItem *local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\0') {
    iVar3 = G_CDataManager();
    local_1c = (CItem *)CItemList::find_item(*(CItemList **)(iVar3 + 0xc),param_2);
    if (local_1c == (CItem *)0x0) {
      uVar6 = 0x11;
    }
    else {
      cVar1 = CItem::is_stackable(local_1c);
      if (cVar1 == '\0') {
        local_18 = CItem::get_price(local_1c);
      }
      else {
        local_18 = CItem::get_price(local_1c);
        local_18 = local_18 * param_3;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar3 = CInventory::get_money(pCVar4);
      if (iVar3 < local_18) {
        uVar6 = 10;
      }
      else {
        Inven_Item::Inven_Item(&local_79);
        uStack_77 = param_2;
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\0') {
          local_10 = local_1c;
          if (*(int *)(local_1c + 0x234) == 0xb) {
            return 0x17;
          }
          iVar3 = CItem::GetAttachType(local_1c);
          if (iVar3 == 3) {
            local_79 = (Inven_Item)0x1;
          }
          uStack_78 = 1;
          Inven_Item::set_add_info(&local_79,param_3);
          uVar2 = CEquipItem::get_endurance((CEquipItem *)local_10);
          uStack_6e = (undefined1)uVar2;
          uStack_6d._0_1_ = (undefined1)((ushort)uVar2 >> 8);
          Inven_Item::ResetItemAttr(&local_79);
        }
        else {
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 1) {
            uStack_78 = 3;
          }
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 2) {
            uStack_78 = 10;
          }
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 8) {
            uStack_78 = 4;
          }
          Inven_Item::set_add_info(&local_79,param_3);
          iVar3 = uStack_77;
          if (999 < param_3) {
            cMyTrace::cMyTrace(local_2c,"int Store::user_buy_item(CUser*, int, int)",0x3d,5);
            cMyTrace::operator()(local_2c,"Store::user_buy_item,  ITEM #%d, %d",iVar3,param_3);
          }
          uStack_6e = 0;
          uStack_6d = uStack_6d & 0xffffff00;
          Inven_Item::ResetItemAttr(&local_79);
        }
        uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_14 = CInventory::insertItemIntoInventory
                             (uVar6,CONCAT22((undefined2)uStack_77,CONCAT11(uStack_78,local_79)),
                              CONCAT13((undefined1)uStack_72,CONCAT12(uStack_73,uStack_77._2_2_)),
                              CONCAT13(uStack_6e,uStack_72._1_3_),uStack_6d,local_69,local_65,
                              local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,
                              local_45,local_41,local_3d,0,1,0);
        if (local_14 == -1) {
          uVar6 = 4;
        }
        else {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::use_money(pCVar4,local_18,0,1);
          if (cVar1 == '\x01') {
            local_30 = 0;
            GetSellItemPrice(this,&local_79,local_1c,(short)uStack_72,false,&local_30);
            iVar3 = local_30;
            pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar5,6,param_1,iVar3);
            iVar3 = local_18;
            pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar5,0xd,param_1,iVar3);
            PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08618dd1 to 08618e65 has its CatchHandler @ 08618e78 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x15);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar3 = CInventory::get_money(pCVar4);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,local_14);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_3);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
            CUser::Send(param_1,local_3c);
            uVar6 = 0;
            PacketGuard::~PacketGuard(local_3c);
          }
          else {
            uVar6 = 10;
          }
        }
      }
    }
  }
  else {
    uVar6 = 0x13;
  }
  return uVar6;
}

```

---

## user_sell_item

```asm
// === 086193f8 Store::user_sell_item  [0x086193f8-0x8619ceb] ===
 86193f8:	55                   	push   %ebp
 86193f9:	89 e5                	mov    %esp,%ebp
 86193fb:	57                   	push   %edi
 86193fc:	56                   	push   %esi
 86193fd:	53                   	push   %ebx
 86193fe:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8619404:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8619407:	8b 55 14             	mov    0x14(%ebp),%edx
 861940a:	8b 45 18             	mov    0x18(%ebp),%eax
 861940d:	88 8d 34 ff ff ff    	mov    %cl,-0xcc(%ebp)
 8619413:	66 89 95 30 ff ff ff 	mov    %dx,-0xd0(%ebp)
 861941a:	66 89 85 2c ff ff ff 	mov    %ax,-0xd4(%ebp)
 8619421:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619424:	89 04 24             	mov    %eax,(%esp)
 8619427:	e8 d2 0e ac ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 861942c:	84 c0                	test   %al,%al
 861942e:	74 0a                	je     861943a <_ZN5Store14user_sell_itemEP5CUsercss+0x42>
 8619430:	bb 13 00 00 00       	mov    $0x13,%ebx
 8619435:	e9 a5 08 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 861943a:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8619441:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8619448:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 861944f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619452:	89 04 24             	mov    %eax,(%esp)
 8619455:	e8 32 0f ac ff       	call   80da38c <_ZN5CUser9get_stateEv>
 861945a:	83 f8 05             	cmp    $0x5,%eax
 861945d:	0f 94 c0             	sete   %al
 8619460:	0f b6 d8             	movzbl %al,%ebx
 8619463:	0f bf 8d 2c ff ff ff 	movswl -0xd4(%ebp),%ecx
 861946a:	0f bf 95 30 ff ff ff 	movswl -0xd0(%ebp),%edx
 8619471:	0f be 85 34 ff ff ff 	movsbl -0xcc(%ebp),%eax
 8619478:	8d 75 88             	lea    -0x78(%ebp),%esi
 861947b:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 861947f:	8d 75 8c             	lea    -0x74(%ebp),%esi
 8619482:	89 74 24 18          	mov    %esi,0x18(%esp)
 8619486:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 861948a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 861948e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8619492:	89 44 24 08          	mov    %eax,0x8(%esp)
 8619496:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619499:	89 44 24 04          	mov    %eax,0x4(%esp)
 861949d:	8b 45 08             	mov    0x8(%ebp),%eax
 86194a0:	89 04 24             	mov    %eax,(%esp)
 86194a3:	e8 60 fb ff ff       	call   8619008 <_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_>
 86194a8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86194ab:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86194af:	74 08                	je     86194b9 <_ZN5Store14user_sell_itemEP5CUsercss+0xc1>
 86194b1:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 86194b4:	e9 26 08 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 86194b9:	8b 45 88             	mov    -0x78(%ebp),%eax
 86194bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86194c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86194c3:	89 04 24             	mov    %eax,(%esp)
 86194c6:	e8 51 1a 05 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 86194cb:	83 f0 01             	xor    $0x1,%eax
 86194ce:	84 c0                	test   %al,%al
 86194d0:	74 0a                	je     86194dc <_ZN5Store14user_sell_itemEP5CUsercss+0xe4>
 86194d2:	bb 16 00 00 00       	mov    $0x16,%ebx
 86194d7:	e9 03 08 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 86194dc:	8d 85 3f ff ff ff    	lea    -0xc1(%ebp),%eax
 86194e2:	89 04 24             	mov    %eax,(%esp)
 86194e5:	e8 6a 23 ab ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 86194ea:	0f be 85 34 ff ff ff 	movsbl -0xcc(%ebp),%eax
 86194f1:	83 f8 02             	cmp    $0x2,%eax
 86194f4:	0f 84 22 01 00 00    	je     861961c <_ZN5Store14user_sell_itemEP5CUsercss+0x224>
 86194fa:	83 f8 02             	cmp    $0x2,%eax
 86194fd:	7f 09                	jg     8619508 <_ZN5Store14user_sell_itemEP5CUsercss+0x110>
 86194ff:	85 c0                	test   %eax,%eax
 8619501:	74 13                	je     8619516 <_ZN5Store14user_sell_itemEP5CUsercss+0x11e>
 8619503:	e9 00 02 00 00       	jmp    8619708 <_ZN5Store14user_sell_itemEP5CUsercss+0x310>
 8619508:	83 f8 03             	cmp    $0x3,%eax
 861950b:	74 09                	je     8619516 <_ZN5Store14user_sell_itemEP5CUsercss+0x11e>
 861950d:	83 f8 07             	cmp    $0x7,%eax
 8619510:	0f 85 f2 01 00 00    	jne    8619708 <_ZN5Store14user_sell_itemEP5CUsercss+0x310>
 8619516:	0f bf b5 30 ff ff ff 	movswl -0xd0(%ebp),%esi
 861951d:	0f be 85 34 ff ff ff 	movsbl -0xcc(%ebp),%eax
 8619524:	89 04 24             	mov    %eax,(%esp)
 8619527:	e8 19 e3 ad ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 861952c:	89 c3                	mov    %eax,%ebx
 861952e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619531:	89 04 24             	mov    %eax,(%esp)
 8619534:	e8 45 0d ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619539:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 861953f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8619543:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619547:	89 44 24 04          	mov    %eax,0x4(%esp)
 861954b:	89 14 24             	mov    %edx,(%esp)
 861954e:	e8 c5 23 ee ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8619553:	83 ec 04             	sub    $0x4,%esp
 8619556:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 861955c:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8619562:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 8619568:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 861956e:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 8619574:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 861957a:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 8619580:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8619586:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 861958c:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8619592:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8619598:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861959e:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 86195a4:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 86195aa:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 86195b0:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 86195b6:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 86195bc:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 86195c2:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 86195c8:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 86195ce:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 86195d4:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 86195da:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 86195e0:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 86195e6:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 86195ec:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 86195f2:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 86195f8:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 86195fe:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8619604:	89 85 77 ff ff ff    	mov    %eax,-0x89(%ebp)
 861960a:	0f b6 85 24 ff ff ff 	movzbl -0xdc(%ebp),%eax
 8619611:	88 85 7b ff ff ff    	mov    %al,-0x85(%ebp)
 8619617:	e9 ec 00 00 00       	jmp    8619708 <_ZN5Store14user_sell_itemEP5CUsercss+0x310>
 861961c:	0f bf 9d 30 ff ff ff 	movswl -0xd0(%ebp),%ebx
 8619623:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619626:	89 04 24             	mov    %eax,(%esp)
 8619629:	e8 56 84 b3 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 861962e:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 8619634:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619638:	89 44 24 04          	mov    %eax,0x4(%esp)
 861963c:	89 14 24             	mov    %edx,(%esp)
 861963f:	e8 70 1c ef ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 8619644:	83 ec 04             	sub    $0x4,%esp
 8619647:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 861964d:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8619653:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 8619659:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 861965f:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 8619665:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 861966b:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 8619671:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8619677:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 861967d:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8619683:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8619689:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 861968f:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 8619695:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 861969b:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 86196a1:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 86196a7:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 86196ad:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 86196b3:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 86196b9:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 86196bf:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 86196c5:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 86196cb:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 86196d1:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 86196d7:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 86196dd:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 86196e3:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 86196e9:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 86196ef:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 86196f5:	89 85 77 ff ff ff    	mov    %eax,-0x89(%ebp)
 86196fb:	0f b6 85 24 ff ff ff 	movzbl -0xdc(%ebp),%eax
 8619702:	88 85 7b ff ff ff    	mov    %al,-0x85(%ebp)
 8619708:	0f be 85 34 ff ff ff 	movsbl -0xcc(%ebp),%eax
 861970f:	83 f8 02             	cmp    $0x2,%eax
 8619712:	0f 84 d8 00 00 00    	je     86197f0 <_ZN5Store14user_sell_itemEP5CUsercss+0x3f8>
 8619718:	83 f8 02             	cmp    $0x2,%eax
 861971b:	7f 09                	jg     8619726 <_ZN5Store14user_sell_itemEP5CUsercss+0x32e>
 861971d:	85 c0                	test   %eax,%eax
 861971f:	74 1c                	je     861973d <_ZN5Store14user_sell_itemEP5CUsercss+0x345>
 8619721:	e9 dc 02 00 00       	jmp    8619a02 <_ZN5Store14user_sell_itemEP5CUsercss+0x60a>
 8619726:	83 f8 03             	cmp    $0x3,%eax
 8619729:	0f 84 64 01 00 00    	je     8619893 <_ZN5Store14user_sell_itemEP5CUsercss+0x49b>
 861972f:	83 f8 07             	cmp    $0x7,%eax
 8619732:	0f 84 17 02 00 00    	je     861994f <_ZN5Store14user_sell_itemEP5CUsercss+0x557>
 8619738:	e9 c5 02 00 00       	jmp    8619a02 <_ZN5Store14user_sell_itemEP5CUsercss+0x60a>
 861973d:	0f bf b5 2c ff ff ff 	movswl -0xd4(%ebp),%esi
 8619744:	0f bf 9d 30 ff ff ff 	movswl -0xd0(%ebp),%ebx
 861974b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861974e:	89 04 24             	mov    %eax,(%esp)
 8619751:	e8 38 0b ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8619756:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 861975d:	00 
 861975e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8619765:	00 
 8619766:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861976a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861976e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8619775:	00 
 8619776:	89 04 24             	mov    %eax,(%esp)
 8619779:	e8 8e a8 ee ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 861977e:	83 f0 01             	xor    $0x1,%eax
 8619781:	84 c0                	test   %al,%al
 8619783:	0f 84 75 02 00 00    	je     86199fe <_ZN5Store14user_sell_itemEP5CUsercss+0x606>
 8619789:	0f bf bd 2c ff ff ff 	movswl -0xd4(%ebp),%edi
 8619790:	0f bf b5 30 ff ff ff 	movswl -0xd0(%ebp),%esi
 8619797:	8b 45 0c             	mov    0xc(%ebp),%eax
 861979a:	89 04 24             	mov    %eax,(%esp)
 861979d:	e8 ac 24 ab ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86197a2:	89 c3                	mov    %eax,%ebx
 86197a4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86197ab:	00 
 86197ac:	c7 44 24 08 36 01 00 	movl   $0x136,0x8(%esp)
 86197b3:	00 
 86197b4:	c7 44 24 04 40 21 ce 	movl   $0x8ce2140,0x4(%esp)
 86197bb:	08 
 86197bc:	8d 45 90             	lea    -0x70(%ebp),%eax
 86197bf:	89 04 24             	mov    %eax,(%esp)
 86197c2:	e8 51 5f f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86197c7:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86197cb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86197cf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86197d3:	c7 44 24 04 c8 13 ce 	movl   $0x8ce13c8,0x4(%esp)
 86197da:	08 
 86197db:	8d 45 90             	lea    -0x70(%ebp),%eax
 86197de:	89 04 24             	mov    %eax,(%esp)
 86197e1:	e8 a2 5f f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86197e6:	bb 11 00 00 00       	mov    $0x11,%ebx
 86197eb:	e9 ef 04 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 86197f0:	0f bf b5 2c ff ff ff 	movswl -0xd4(%ebp),%esi
 86197f7:	0f bf 9d 30 ff ff ff 	movswl -0xd0(%ebp),%ebx
 86197fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619801:	89 04 24             	mov    %eax,(%esp)
 8619804:	e8 8b 82 b3 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 8619809:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8619810:	00 
 8619811:	89 74 24 08          	mov    %esi,0x8(%esp)
 8619815:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8619819:	89 04 24             	mov    %eax,(%esp)
 861981c:	e8 73 1f ef ff       	call   850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>
 8619821:	83 f0 01             	xor    $0x1,%eax
 8619824:	84 c0                	test   %al,%al
 8619826:	0f 84 d5 01 00 00    	je     8619a01 <_ZN5Store14user_sell_itemEP5CUsercss+0x609>
 861982c:	0f bf bd 2c ff ff ff 	movswl -0xd4(%ebp),%edi
 8619833:	0f bf b5 30 ff ff ff 	movswl -0xd0(%ebp),%esi
 861983a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861983d:	89 04 24             	mov    %eax,(%esp)
 8619840:	e8 09 24 ab ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8619845:	89 c3                	mov    %eax,%ebx
 8619847:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 861984e:	00 
 861984f:	c7 44 24 08 41 01 00 	movl   $0x141,0x8(%esp)
 8619856:	00 
 8619857:	c7 44 24 04 40 21 ce 	movl   $0x8ce2140,0x4(%esp)
 861985e:	08 
 861985f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8619862:	89 04 24             	mov    %eax,(%esp)
 8619865:	e8 ae 5e f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 861986a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 861986e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8619872:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619876:	c7 44 24 04 08 14 ce 	movl   $0x8ce1408,0x4(%esp)
 861987d:	08 
 861987e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8619881:	89 04 24             	mov    %eax,(%esp)
 8619884:	e8 ff 5e f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8619889:	bb 11 00 00 00       	mov    $0x11,%ebx
 861988e:	e9 4c 04 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 8619893:	0f bf 9d 30 ff ff ff 	movswl -0xd0(%ebp),%ebx
 861989a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861989d:	89 04 24             	mov    %eax,(%esp)
 86198a0:	e8 e9 09 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86198a5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86198ac:	00 
 86198ad:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86198b4:	00 
 86198b5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86198bc:	00 
 86198bd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86198c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86198c8:	00 
 86198c9:	89 04 24             	mov    %eax,(%esp)
 86198cc:	e8 3b a7 ee ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 86198d1:	83 f0 01             	xor    $0x1,%eax
 86198d4:	84 c0                	test   %al,%al
 86198d6:	74 5c                	je     8619934 <_ZN5Store14user_sell_itemEP5CUsercss+0x53c>
 86198d8:	0f bf b5 30 ff ff ff 	movswl -0xd0(%ebp),%esi
 86198df:	8b 45 0c             	mov    0xc(%ebp),%eax
 86198e2:	89 04 24             	mov    %eax,(%esp)
 86198e5:	e8 64 23 ab ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86198ea:	89 c3                	mov    %eax,%ebx
 86198ec:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86198f3:	00 
 86198f4:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 86198fb:	00 
 86198fc:	c7 44 24 04 40 21 ce 	movl   $0x8ce2140,0x4(%esp)
 8619903:	08 
 8619904:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8619907:	89 04 24             	mov    %eax,(%esp)
 861990a:	e8 09 5e f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 861990f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8619913:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619917:	c7 44 24 04 48 14 ce 	movl   $0x8ce1448,0x4(%esp)
 861991e:	08 
 861991f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8619922:	89 04 24             	mov    %eax,(%esp)
 8619925:	e8 5e 5e f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 861992a:	bb 11 00 00 00       	mov    $0x11,%ebx
 861992f:	e9 ab 03 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 8619934:	0f bf 85 30 ff ff ff 	movswl -0xd0(%ebp),%eax
 861993b:	89 44 24 04          	mov    %eax,0x4(%esp)
 861993f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619942:	89 04 24             	mov    %eax,(%esp)
 8619945:	e8 ca 43 04 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 861994a:	e9 b3 00 00 00       	jmp    8619a02 <_ZN5Store14user_sell_itemEP5CUsercss+0x60a>
 861994f:	0f bf b5 2c ff ff ff 	movswl -0xd4(%ebp),%esi
 8619956:	0f bf 9d 30 ff ff ff 	movswl -0xd0(%ebp),%ebx
 861995d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619960:	89 04 24             	mov    %eax,(%esp)
 8619963:	e8 26 09 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8619968:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 861996f:	00 
 8619970:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8619977:	00 
 8619978:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861997c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619980:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8619987:	00 
 8619988:	89 04 24             	mov    %eax,(%esp)
 861998b:	e8 7c a6 ee ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8619990:	83 f0 01             	xor    $0x1,%eax
 8619993:	84 c0                	test   %al,%al
 8619995:	74 6b                	je     8619a02 <_ZN5Store14user_sell_itemEP5CUsercss+0x60a>
 8619997:	0f bf bd 2c ff ff ff 	movswl -0xd4(%ebp),%edi
 861999e:	0f bf b5 30 ff ff ff 	movswl -0xd0(%ebp),%esi
 86199a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86199a8:	89 04 24             	mov    %eax,(%esp)
 86199ab:	e8 9e 22 ab ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86199b0:	89 c3                	mov    %eax,%ebx
 86199b2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86199b9:	00 
 86199ba:	c7 44 24 08 67 01 00 	movl   $0x167,0x8(%esp)
 86199c1:	00 
 86199c2:	c7 44 24 04 40 21 ce 	movl   $0x8ce2140,0x4(%esp)
 86199c9:	08 
 86199ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86199cd:	89 04 24             	mov    %eax,(%esp)
 86199d0:	e8 43 5d f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86199d5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86199d9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86199dd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86199e1:	c7 44 24 04 88 14 ce 	movl   $0x8ce1488,0x4(%esp)
 86199e8:	08 
 86199e9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86199ec:	89 04 24             	mov    %eax,(%esp)
 86199ef:	e8 94 5d f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86199f4:	bb 11 00 00 00       	mov    $0x11,%ebx
 86199f9:	e9 e1 02 00 00       	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 86199fe:	90                   	nop
 86199ff:	eb 01                	jmp    8619a02 <_ZN5Store14user_sell_itemEP5CUsercss+0x60a>
 8619a01:	90                   	nop
 8619a02:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619a05:	3d 1f a1 07 00       	cmp    $0x7a11f,%eax
 8619a0a:	0f 8e a7 00 00 00    	jle    8619ab7 <_ZN5Store14user_sell_itemEP5CUsercss+0x6bf>
 8619a10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619a13:	89 04 24             	mov    %eax,(%esp)
 8619a16:	e8 63 08 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619a1b:	89 04 24             	mov    %eax,(%esp)
 8619a1e:	e8 b3 ad b1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8619a23:	89 c7                	mov    %eax,%edi
 8619a25:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8619a28:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8619a2e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619a31:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 8619a37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619a3a:	89 04 24             	mov    %eax,(%esp)
 8619a3d:	e8 e6 75 ae ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8619a42:	89 c6                	mov    %eax,%esi
 8619a44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619a47:	89 04 24             	mov    %eax,(%esp)
 8619a4a:	e8 1f 09 ac ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8619a4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8619a56:	00 
 8619a57:	89 04 24             	mov    %eax,(%esp)
 8619a5a:	e8 ec f5 ae ff       	call   810904b <_Z14NumberToStringji>
 8619a5f:	89 c3                	mov    %eax,%ebx
 8619a61:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 8619a68:	00 
 8619a69:	c7 44 24 08 72 01 00 	movl   $0x172,0x8(%esp)
 8619a70:	00 
 8619a71:	c7 44 24 04 40 21 ce 	movl   $0x8ce2140,0x4(%esp)
 8619a78:	08 
 8619a79:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8619a7c:	89 04 24             	mov    %eax,(%esp)
 8619a7f:	e8 94 5c f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8619a84:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8619a88:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 8619a8e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8619a92:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 8619a98:	89 44 24 10          	mov    %eax,0x10(%esp)
 8619a9c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8619aa0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619aa4:	c7 44 24 04 c8 14 ce 	movl   $0x8ce14c8,0x4(%esp)
 8619aab:	08 
 8619aac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8619aaf:	89 04 24             	mov    %eax,(%esp)
 8619ab2:	e8 d1 5c f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8619ab7:	8b 5d 88             	mov    -0x78(%ebp),%ebx
 8619aba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619abd:	89 04 24             	mov    %eax,(%esp)
 8619ac0:	e8 c9 07 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8619ac5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8619acc:	00 
 8619acd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8619ad4:	00 
 8619ad5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8619adc:	00 
 8619add:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8619ae1:	89 04 24             	mov    %eax,(%esp)
 8619ae4:	e8 b3 57 ee ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 8619ae9:	8d 85 3f ff ff ff    	lea    -0xc1(%ebp),%eax
 8619aef:	89 04 24             	mov    %eax,(%esp)
 8619af2:	e8 6f 52 b0 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8619af7:	83 f0 01             	xor    $0x1,%eax
 8619afa:	84 c0                	test   %al,%al
 8619afc:	74 62                	je     8619b60 <_ZN5Store14user_sell_itemEP5CUsercss+0x768>
 8619afe:	8b 85 41 ff ff ff    	mov    -0xbf(%ebp),%eax
 8619b04:	89 c3                	mov    %eax,%ebx
 8619b06:	e8 90 26 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 8619b0b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8619b0f:	89 04 24             	mov    %eax,(%esp)
 8619b12:	e8 1b 5f d4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8619b17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8619b1a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8619b1e:	74 1c                	je     8619b3c <_ZN5Store14user_sell_itemEP5CUsercss+0x744>
 8619b20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8619b23:	89 04 24             	mov    %eax,(%esp)
 8619b26:	e8 cf 77 ad ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8619b2b:	84 c0                	test   %al,%al
 8619b2d:	74 0d                	je     8619b3c <_ZN5Store14user_sell_itemEP5CUsercss+0x744>
 8619b2f:	0f bf 85 2c ff ff ff 	movswl -0xd4(%ebp),%eax
 8619b36:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 8619b3c:	8b 45 88             	mov    -0x78(%ebp),%eax
 8619b3f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8619b46:	00 
 8619b47:	89 44 24 08          	mov    %eax,0x8(%esp)
 8619b4b:	8d 85 3f ff ff ff    	lea    -0xc1(%ebp),%eax
 8619b51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619b58:	89 04 24             	mov    %eax,(%esp)
 8619b5b:	e8 60 d7 02 00       	call   86472c0 <_ZN5CUser14Add_RedeemInfoERK10Inven_Itemib>
 8619b60:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619b66:	89 04 24             	mov    %eax,(%esp)
 8619b69:	e8 de 41 f7 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8619b6e:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8619b75:	00 
 8619b76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8619b7d:	00 
 8619b7e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619b84:	89 04 24             	mov    %eax,(%esp)
 8619b87:	e8 70 1d ab ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8619b8c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8619b93:	00 
 8619b94:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619b9a:	89 04 24             	mov    %eax,(%esp)
 8619b9d:	e8 7e 1d ab ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8619ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619ba5:	89 04 24             	mov    %eax,(%esp)
 8619ba8:	e8 d1 06 ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8619bad:	89 04 24             	mov    %eax,(%esp)
 8619bb0:	e8 21 ac b1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8619bb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619bb9:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619bbf:	89 04 24             	mov    %eax,(%esp)
 8619bc2:	e8 75 1d ab ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8619bc7:	0f be 85 34 ff ff ff 	movsbl -0xcc(%ebp),%eax
 8619bce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619bd2:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619bd8:	89 04 24             	mov    %eax,(%esp)
 8619bdb:	e8 40 1d ab ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8619be0:	0f bf 85 30 ff ff ff 	movswl -0xd0(%ebp),%eax
 8619be7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619beb:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619bf1:	89 04 24             	mov    %eax,(%esp)
 8619bf4:	e8 ab 02 ac ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8619bf9:	0f bf 85 2c ff ff ff 	movswl -0xd4(%ebp),%eax
 8619c00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619c04:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619c0a:	89 04 24             	mov    %eax,(%esp)
 8619c0d:	e8 92 02 ac ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8619c12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8619c19:	00 
 8619c1a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619c20:	89 04 24             	mov    %eax,(%esp)
 8619c23:	e8 30 1d ab ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8619c28:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619c2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8619c32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619c35:	89 04 24             	mov    %eax,(%esp)
 8619c38:	e8 7d e9 02 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8619c3d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8619c40:	89 04 24             	mov    %eax,(%esp)
 8619c43:	e8 88 ca c6 ff       	call   82866d0 <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi>
 8619c48:	84 c0                	test   %al,%al
 8619c4a:	74 3d                	je     8619c89 <_ZN5Store14user_sell_itemEP5CUsercss+0x891>
 8619c4c:	e8 c3 ca c6 ff       	call   8286714 <_ZN33CHackLog_InvitationPaperSellToNPC11GetHackTypeEv>
 8619c51:	89 c3                	mov    %eax,%ebx
 8619c53:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619c56:	89 04 24             	mov    %eax,(%esp)
 8619c59:	e8 fc fc ad ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8619c5e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8619c65:	00 
 8619c66:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8619c6d:	00 
 8619c6e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8619c75:	00 
 8619c76:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8619c7a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8619c7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8619c81:	89 04 24             	mov    %eax,(%esp)
 8619c84:	e8 f5 ef ad ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8619c89:	0f bf 8d 2c ff ff ff 	movswl -0xd4(%ebp),%ecx
 8619c90:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8619c93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8619c96:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 8619c9c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8619ca0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8619ca4:	89 04 24             	mov    %eax,(%esp)
 8619ca7:	e8 8e 05 ea ff       	call   84ba23a <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii>
 8619cac:	bb 00 00 00 00       	mov    $0x0,%ebx
 8619cb1:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619cb7:	89 04 24             	mov    %eax,(%esp)
 8619cba:	e8 c1 41 f7 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8619cbf:	eb 1e                	jmp    8619cdf <_ZN5Store14user_sell_itemEP5CUsercss+0x8e7>
 8619cc1:	89 d3                	mov    %edx,%ebx
 8619cc3:	89 c6                	mov    %eax,%esi
 8619cc5:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8619ccb:	89 04 24             	mov    %eax,(%esp)
 8619cce:	e8 ad 41 f7 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8619cd3:	89 f0                	mov    %esi,%eax
 8619cd5:	89 da                	mov    %ebx,%edx
 8619cd7:	89 04 24             	mov    %eax,(%esp)
 8619cda:	e8 71 9a 4c 00       	call   8ae3750 <_Unwind_Resume>
 8619cdf:	89 d8                	mov    %ebx,%eax
 8619ce1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8619ce4:	83 c4 00             	add    $0x0,%esp
 8619ce7:	5b                   	pop    %ebx
 8619ce8:	5e                   	pop    %esi
 8619ce9:	5f                   	pop    %edi
 8619cea:	5d                   	pop    %ebp
 8619ceb:	c3                   	ret

```

```c
// Store::user_sell_item @ 0x86193f8

/* Store::user_sell_item(CUser*, char, short, short) */

int __thiscall
Store::user_sell_item(Store *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  CCargo *pCVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  CDataManager *this_00;
  CHackAnalyzer *pCVar9;
  int iVar10;
  undefined1 local_11c [12];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  short local_d8;
  short local_d4;
  char local_d0;
  undefined2 local_c5;
  undefined2 uStack_c3;
  undefined2 uStack_c1;
  undefined1 uStack_bf;
  int iStack_be;
  undefined1 uStack_ba;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined1 local_89;
  PacketGuard local_88 [12];
  int local_7c;
  int local_78;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  CItem *local_20;
  
  local_d0 = param_2;
  local_d4 = param_3;
  local_d8 = param_4;
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 != '\0') {
    return 0x13;
  }
  local_78 = 0;
  local_24 = 0;
  local_7c = 0;
  iVar2 = CUser::get_state(param_1);
  local_24 = GetSellItemPrice(this,param_1,local_d0,local_d4,local_d8,iVar2 == 5,&local_78,&local_7c
                             );
  if (local_24 != 0) {
    return local_24;
  }
  cVar1 = CUser::CheckMoney(param_1,local_7c);
  if (cVar1 != '\x01') {
    return 0x16;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_c5);
  if (local_d0 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_11c);
    local_c5 = (undefined2)local_11c._0_4_;
    uStack_c3 = SUB42(local_11c._0_4_,2);
    uStack_c1 = (undefined2)local_11c._4_4_;
    uStack_bf = SUB41(local_11c._4_4_,2);
    iStack_be._1_3_ = (undefined3)local_11c._8_4_;
    iStack_be = CONCAT31(iStack_be._1_3_,SUB41(local_11c._4_4_,3));
    uStack_ba = SUB41(local_11c._8_4_,3);
    local_b9 = local_110;
    local_b5 = local_10c;
    local_b1 = local_108;
    local_ad = local_104;
    local_a9 = local_100;
    local_a5 = local_fc;
    local_a1 = local_f8;
    local_9d = local_f4;
    local_99 = local_f0;
    local_95 = local_ec;
    local_91 = local_e8;
    local_8d = local_e4;
    local_89 = local_e0;
  }
  else {
    if (local_d0 < '\x03') {
      if (local_d0 != '\0') goto LAB_08619708;
    }
    else if ((local_d0 != '\x03') && (local_d0 != '\a')) goto LAB_08619708;
    GetInvenTypeFromItemSpace((int)local_d0);
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_11c,iVar2);
    local_c5 = (undefined2)local_11c._0_4_;
    uStack_c3 = SUB42(local_11c._0_4_,2);
    uStack_c1 = (undefined2)local_11c._4_4_;
    uStack_bf = SUB41(local_11c._4_4_,2);
    iStack_be._1_3_ = (undefined3)local_11c._8_4_;
    iStack_be = CONCAT31(iStack_be._1_3_,SUB41(local_11c._4_4_,3));
    uStack_ba = SUB41(local_11c._8_4_,3);
    local_b9 = local_110;
    local_b5 = local_10c;
    local_b1 = local_108;
    local_ad = local_104;
    local_a9 = local_100;
    local_a5 = local_fc;
    local_a1 = local_f8;
    local_9d = local_f4;
    local_99 = local_f0;
    local_95 = local_ec;
    local_91 = local_e8;
    local_8d = local_e4;
    local_89 = local_e0;
  }
LAB_08619708:
  if (local_d0 == '\x02') {
    iVar10 = (int)local_d8;
    iVar2 = (int)local_d4;
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    cVar1 = CCargo::delete_item(pCVar3,iVar2,iVar10,0);
    if (cVar1 != '\x01') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_64,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x141,5);
      cMyTrace::operator()
                (local_64,"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",uVar5,
                 iVar2,iVar10);
      return 0x11;
    }
  }
  else if (local_d0 < '\x03') {
    if (local_d0 == '\0') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::delete_item(pCVar4,1,iVar2,iVar10,0,1);
      if (cVar1 != '\x01') {
        iVar10 = (int)local_d8;
        iVar2 = (int)local_d4;
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_74,"int Store::user_sell_item(CUser*, char, short int, short int)",
                           0x136,5);
        cMyTrace::operator()
                  (local_74,"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",uVar5,
                   iVar2,iVar10);
        return 0x11;
      }
    }
  }
  else if (local_d0 == '\x03') {
    iVar2 = (int)local_d4;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,0,iVar2,1,0,1);
    if (cVar1 != '\x01') {
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_54,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x14d,5);
      cMyTrace::operator()
                (local_54,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar5,iVar2
                );
      return 0x11;
    }
    CUser::send_equip(param_1,(int)local_d4);
  }
  else if (local_d0 == '\a') {
    iVar10 = (int)local_d8;
    iVar2 = (int)local_d4;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,3,iVar2,iVar10,0,1);
    if (cVar1 != '\x01') {
      iVar10 = (int)local_d8;
      iVar2 = (int)local_d4;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_44,"int Store::user_sell_item(CUser*, char, short int, short int)",
                         0x167,5);
      cMyTrace::operator()
                (local_44,"Store::user_sell_item, delete_item failed 4, User ch=%d , %d %d",uVar5,
                 iVar2,iVar10);
      return 0x11;
    }
  }
  if (499999 < local_7c) {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = CInventory::get_money(pCVar4);
    iVar10 = local_78;
    iVar2 = local_7c;
    uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar7,0);
    cMyTrace::cMyTrace(local_34,"int Store::user_sell_item(CUser*, char, short int, short int)",
                       0x172,4);
    cMyTrace::operator()
              (local_34,"User(%s) Charac(%s) gain money(%d) by selling item(%d), old money is %d.",
               uVar8,uVar6,iVar2,iVar10,uVar5);
  }
  iVar2 = local_7c;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::gain_money(pCVar4,iVar2,0,1,0);
  cVar1 = Inven_Item::isEmpty((Inven_Item *)&local_c5);
  if (cVar1 != '\x01') {
    iVar2 = CONCAT22(uStack_c1,uStack_c3);
    this_00 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if ((local_20 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_20), cVar1 != '\0')) {
      iStack_be = (int)local_d8;
    }
    CUser::Add_RedeemInfo(param_1,(Inven_Item *)&local_c5,local_7c,true);
  }
  PacketGuard::PacketGuard(local_88);
                    /* try { // try from 08619b87 to 08619cab has its CatchHandler @ 08619cc1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,0x18);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_money(pCVar4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(int)local_d0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,(int)local_d4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,(int)local_d8);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
  CUser::Send(param_1,local_88);
  cVar1 = CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(local_78);
  if (cVar1 != '\0') {
    uVar5 = CHackLog_InvitationPaperSellToNPC::GetHackType();
    pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,uVar5,1,0,0);
  }
  HistoryLog::WriteSellItem(*(_IO_FILE **)(param_1 + 0x796f8),local_78,(int)local_d8);
  PacketGuard::~PacketGuard(local_88);
  return 0;
}

```

