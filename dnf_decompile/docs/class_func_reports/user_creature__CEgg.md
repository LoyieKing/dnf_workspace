# user_creature__CEgg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CEgg

```asm
// === 08338f4c user_creature::CEgg::CEgg  [0x08338f4c-0x8338f73] ===
 8338f4c:	55                   	push   %ebp
 8338f4d:	89 e5                	mov    %esp,%ebp
 8338f4f:	83 ec 18             	sub    $0x18,%esp
 8338f52:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f55:	89 04 24             	mov    %eax,(%esp)
 8338f58:	e8 25 7d 00 00       	call   8340c82 <_ZN13user_creature13CCreatureItemC1Ev>
 8338f5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f60:	c7 00 a8 f4 c2 08    	movl   $0x8c2f4a8,(%eax)
 8338f66:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f69:	89 04 24             	mov    %eax,(%esp)
 8338f6c:	e8 11 00 00 00       	call   8338f82 <_ZN13user_creature4CEgg5ResetEv>
 8338f71:	c9                   	leave
 8338f72:	c3                   	ret
 8338f73:	90                   	nop

```

```c
// user_creature::CEgg::CEgg @ 0x8338f4c

/* user_creature::CEgg::CEgg() */

void __thiscall user_creature::CEgg::CEgg(CEgg *this)

{
  CCreatureItem::CCreatureItem((CCreatureItem *)this);
  *(undefined ***)this = &PTR_Reset_08c2f4a8;
  Reset(this);
  return;
}

```

---

## Hatch

```asm
// === 0833912a user_creature::CEgg::Hatch  [0x0833912a-0x8339195] ===
 833912a:	55                   	push   %ebp
 833912b:	89 e5                	mov    %esp,%ebp
 833912d:	53                   	push   %ebx
 833912e:	83 ec 24             	sub    $0x24,%esp
 8339131:	8b 45 08             	mov    0x8(%ebp),%eax
 8339134:	89 04 24             	mov    %eax,(%esp)
 8339137:	e8 68 5e 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833913c:	89 c3                	mov    %eax,%ebx
 833913e:	e8 58 30 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8339143:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8339147:	89 04 24             	mov    %eax,(%esp)
 833914a:	e8 e3 68 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 833914f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8339152:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8339156:	75 07                	jne    833915f <_ZN13user_creature4CEgg5HatchEPi+0x35>
 8339158:	b8 00 00 00 00       	mov    $0x0,%eax
 833915d:	eb 31                	jmp    8339190 <_ZN13user_creature4CEgg5HatchEPi+0x66>
 833915f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8339162:	89 04 24             	mov    %eax,(%esp)
 8339165:	e8 90 81 db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 833916a:	84 c0                	test   %al,%al
 833916c:	74 07                	je     8339175 <_ZN13user_creature4CEgg5HatchEPi+0x4b>
 833916e:	b8 00 00 00 00       	mov    $0x0,%eax
 8339173:	eb 1b                	jmp    8339190 <_ZN13user_creature4CEgg5HatchEPi+0x66>
 8339175:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8339178:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833917b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833917e:	89 04 24             	mov    %eax,(%esp)
 8339181:	e8 54 5d 00 00       	call   833eeda <_ZNK10CEquipItem17get_hatch_item_idEv>
 8339186:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339189:	89 02                	mov    %eax,(%edx)
 833918b:	b8 01 00 00 00       	mov    $0x1,%eax
 8339190:	83 c4 24             	add    $0x24,%esp
 8339193:	5b                   	pop    %ebx
 8339194:	5d                   	pop    %ebp
 8339195:	c3                   	ret

```

```c
// user_creature::CEgg::Hatch @ 0x833912a

/* user_creature::CEgg::Hatch(int*) */

undefined4 __thiscall user_creature::CEgg::Hatch(CEgg *this,int *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\0') {
      iVar2 = CEquipItem::get_hatch_item_id((CEquipItem *)this_01);
      *param_1 = iVar2;
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

## LoadCreatureItem

```asm
// === 08338fac user_creature::CEgg::LoadCreatureItem  [0x08338fac-0x83390c7] ===
 8338fac:	55                   	push   %ebp
 8338fad:	89 e5                	mov    %esp,%ebp
 8338faf:	53                   	push   %ebx
 8338fb0:	83 ec 24             	sub    $0x24,%esp
 8338fb3:	8b 45 14             	mov    0x14(%ebp),%eax
 8338fb6:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8338fba:	84 c0                	test   %al,%al
 8338fbc:	74 15                	je     8338fd3 <_ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x27>
 8338fbe:	8b 45 10             	mov    0x10(%ebp),%eax
 8338fc1:	89 04 24             	mov    %eax,(%esp)
 8338fc4:	e8 0f 28 d9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8338fc9:	b8 00 00 00 00       	mov    $0x0,%eax
 8338fce:	e9 ef 00 00 00       	jmp    83390c2 <_ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x116>
 8338fd3:	8b 45 10             	mov    0x10(%ebp),%eax
 8338fd6:	8b 40 02             	mov    0x2(%eax),%eax
 8338fd9:	89 c2                	mov    %eax,%edx
 8338fdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8338fde:	89 54 24 04          	mov    %edx,0x4(%esp)
 8338fe2:	89 04 24             	mov    %eax,(%esp)
 8338fe5:	e8 c6 5f 00 00       	call   833efb0 <_ZN13user_creature13CCreatureItem9SetItemIdEi>
 8338fea:	8b 45 14             	mov    0x14(%ebp),%eax
 8338fed:	8b 50 04             	mov    0x4(%eax),%edx
 8338ff0:	8b 45 08             	mov    0x8(%ebp),%eax
 8338ff3:	89 50 0c             	mov    %edx,0xc(%eax)
 8338ff6:	8b 45 14             	mov    0x14(%ebp),%eax
 8338ff9:	8b 10                	mov    (%eax),%edx
 8338ffb:	8b 45 08             	mov    0x8(%ebp),%eax
 8338ffe:	89 50 10             	mov    %edx,0x10(%eax)
 8339001:	8b 45 14             	mov    0x14(%ebp),%eax
 8339004:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 8339008:	0f be d0             	movsbl %al,%edx
 833900b:	8b 45 08             	mov    0x8(%ebp),%eax
 833900e:	89 50 08             	mov    %edx,0x8(%eax)
 8339011:	8b 45 14             	mov    0x14(%ebp),%eax
 8339014:	8b 50 28             	mov    0x28(%eax),%edx
 8339017:	8b 45 08             	mov    0x8(%ebp),%eax
 833901a:	89 50 18             	mov    %edx,0x18(%eax)
 833901d:	8b 45 10             	mov    0x10(%ebp),%eax
 8339020:	c6 00 01             	movb   $0x1,(%eax)
 8339023:	8b 45 14             	mov    0x14(%ebp),%eax
 8339026:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 833902a:	84 c0                	test   %al,%al
 833902c:	0f 95 c2             	setne  %dl
 833902f:	8b 45 08             	mov    0x8(%ebp),%eax
 8339032:	88 50 14             	mov    %dl,0x14(%eax)
 8339035:	8b 45 14             	mov    0x14(%ebp),%eax
 8339038:	0f b6 50 27          	movzbl 0x27(%eax),%edx
 833903c:	8b 45 08             	mov    0x8(%ebp),%eax
 833903f:	88 50 15             	mov    %dl,0x15(%eax)
 8339042:	8b 45 14             	mov    0x14(%ebp),%eax
 8339045:	8b 50 04             	mov    0x4(%eax),%edx
 8339048:	8b 45 08             	mov    0x8(%ebp),%eax
 833904b:	89 54 24 08          	mov    %edx,0x8(%esp)
 833904f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339053:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339056:	89 04 24             	mov    %eax,(%esp)
 8339059:	e8 20 17 00 00       	call   833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>
 833905e:	83 f0 01             	xor    $0x1,%eax
 8339061:	84 c0                	test   %al,%al
 8339063:	74 07                	je     833906c <_ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0xc0>
 8339065:	b8 00 00 00 00       	mov    $0x0,%eax
 833906a:	eb 56                	jmp    83390c2 <_ZN13user_creature4CEgg16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x116>
 833906c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8339073:	8b 45 08             	mov    0x8(%ebp),%eax
 8339076:	89 04 24             	mov    %eax,(%esp)
 8339079:	e8 4c 5f 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833907e:	89 c3                	mov    %eax,%ebx
 8339080:	8b 45 18             	mov    0x18(%ebp),%eax
 8339083:	89 04 24             	mov    %eax,(%esp)
 8339086:	e8 03 12 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 833908b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833908f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8339096:	00 
 8339097:	89 04 24             	mov    %eax,(%esp)
 833909a:	e8 0f 32 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 833909f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83390a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83390a5:	c6 00 01             	movb   $0x1,(%eax)
 83390a8:	8b 45 08             	mov    0x8(%ebp),%eax
 83390ab:	8b 40 0c             	mov    0xc(%eax),%eax
 83390ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 83390b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83390b5:	89 04 24             	mov    %eax,(%esp)
 83390b8:	e8 c7 27 d9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 83390bd:	b8 01 00 00 00       	mov    $0x1,%eax
 83390c2:	83 c4 24             	add    $0x24,%esp
 83390c5:	5b                   	pop    %ebx
 83390c6:	5d                   	pop    %ebp
 83390c7:	c3                   	ret

```

```c
// user_creature::CEgg::LoadCreatureItem @ 0x8338fac

/* user_creature::CEgg::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*,
   SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4 __thiscall
user_creature::CEgg::LoadCreatureItem
          (CEgg *this,CCreatureMgr *param_1,Inven_Item *param_2,
          SIG_CREATURE_ITEM_DETAIL_INFO *param_3,CUser *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *this_00;
  Inven_Item *this_01;
  
  if (param_3[0x27] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x0) {
    CCreatureItem::SetItemId((CCreatureItem *)this,*(int *)(param_2 + 2));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)param_3;
    *(int *)(this + 8) = (int)(char)param_3[0x24];
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 0x28);
    *param_2 = (Inven_Item)0x1;
    this[0x14] = (CEgg)(param_3[0x26] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x0);
    this[0x15] = *(CEgg *)(param_3 + 0x27);
    cVar1 = CCreatureMgr::RegisterCreatureItem(param_1,(CCreatureItem *)this,*(int *)(param_3 + 4));
    if (cVar1 == '\x01') {
      iVar3 = CCreatureItem::GetSlotNo((CCreatureItem *)this);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_4);
      this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,iVar3);
      *this_01 = (Inven_Item)0x1;
      Inven_Item::set_add_info(this_01,*(int *)(this + 0xc));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    Inven_Item::reset(param_2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## Reset

```asm
// === 08338f82 user_creature::CEgg::Reset  [0x08338f82-0x8338fab] ===
 8338f82:	55                   	push   %ebp
 8338f83:	89 e5                	mov    %esp,%ebp
 8338f85:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f88:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8338f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f92:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8338f99:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f9c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8338fa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8338fa6:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 8338faa:	5d                   	pop    %ebp
 8338fab:	c3                   	ret

```

```c
// user_creature::CEgg::Reset @ 0x8338f82

/* user_creature::CEgg::Reset() */

void __thiscall user_creature::CEgg::Reset(CEgg *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CEgg)0x0;
  return;
}

```

---

## SaveCreatureItem

```asm
// === 083390c8 user_creature::CEgg::SaveCreatureItem  [0x083390c8-0x8339129] ===
 83390c8:	55                   	push   %ebp
 83390c9:	89 e5                	mov    %esp,%ebp
 83390cb:	83 ec 18             	sub    $0x18,%esp
 83390ce:	8b 45 08             	mov    0x8(%ebp),%eax
 83390d1:	89 04 24             	mov    %eax,(%esp)
 83390d4:	e8 cb 5e 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 83390d9:	89 c2                	mov    %eax,%edx
 83390db:	8b 45 0c             	mov    0xc(%ebp),%eax
 83390de:	89 50 02             	mov    %edx,0x2(%eax)
 83390e1:	8b 45 08             	mov    0x8(%ebp),%eax
 83390e4:	8b 50 0c             	mov    0xc(%eax),%edx
 83390e7:	8b 45 10             	mov    0x10(%ebp),%eax
 83390ea:	89 50 04             	mov    %edx,0x4(%eax)
 83390ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83390f0:	8b 50 10             	mov    0x10(%eax),%edx
 83390f3:	8b 45 10             	mov    0x10(%ebp),%eax
 83390f6:	89 10                	mov    %edx,(%eax)
 83390f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83390fb:	8b 40 08             	mov    0x8(%eax),%eax
 83390fe:	89 c2                	mov    %eax,%edx
 8339100:	8b 45 10             	mov    0x10(%ebp),%eax
 8339103:	88 50 24             	mov    %dl,0x24(%eax)
 8339106:	8b 45 08             	mov    0x8(%ebp),%eax
 8339109:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 833910d:	89 c2                	mov    %eax,%edx
 833910f:	8b 45 10             	mov    0x10(%ebp),%eax
 8339112:	88 50 26             	mov    %dl,0x26(%eax)
 8339115:	8b 45 08             	mov    0x8(%ebp),%eax
 8339118:	0f b6 50 15          	movzbl 0x15(%eax),%edx
 833911c:	8b 45 10             	mov    0x10(%ebp),%eax
 833911f:	88 50 27             	mov    %dl,0x27(%eax)
 8339122:	b8 01 00 00 00       	mov    $0x1,%eax
 8339127:	c9                   	leave
 8339128:	c3                   	ret
 8339129:	90                   	nop

```

```c
// user_creature::CEgg::SaveCreatureItem @ 0x83390c8

/* user_creature::CEgg::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4
user_creature::CEgg::SaveCreatureItem
          (Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2,CUser *param_3)

{
  undefined4 uVar1;
  
  uVar1 = CCreatureItem::GetItemId((CCreatureItem *)param_1);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x10);
  param_3[0x24] = SUB41(*(undefined4 *)(param_1 + 8),0);
  *(Inven_Item *)(param_3 + 0x26) = param_1[0x14];
  *(Inven_Item *)(param_3 + 0x27) = param_1[0x15];
  return 1;
}

```

---

## ~CEgg

```asm
// === 08338f74 user_creature::CEgg::~CEgg  [0x08338f74-0x8338f81] ===
 8338f74:	55                   	push   %ebp
 8338f75:	89 e5                	mov    %esp,%ebp
 8338f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f7a:	c7 00 a8 f4 c2 08    	movl   $0x8c2f4a8,(%eax)
 8338f80:	5d                   	pop    %ebp
 8338f81:	c3                   	ret

```

```c
// user_creature::CEgg::~CEgg @ 0x8338f74

/* user_creature::CEgg::~CEgg() */

void __thiscall user_creature::CEgg::~CEgg(CEgg *this)

{
  *(undefined ***)this = &PTR_Reset_08c2f4a8;
  return;
}

```

